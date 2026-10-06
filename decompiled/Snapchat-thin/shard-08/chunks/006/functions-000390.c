/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062e0018; end: 1062e0107; -[SCChatMediaCarouselViewControllerFactoryPlugin layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_1062e0018(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126b2e28;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  _objc_release(param_3);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c9840;
    _objc_alloc(PTR_PTR_1126c9840);
    func_0x00010c001b00();
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062e0108; end: 1062e0113; -[SCChatMediaCarouselViewControllerFactoryPlugin .cxx_destruct] */

void FUN_1062e0108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062e0114; end: 1062e015f; +[SCChatMediaCarouselOperaLayer layerWithPage:] */

void FUN_1062e0114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2e28;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062e0160; end: 1062e021f; -[SCChatMediaCarouselOperaLayer initWithPage:] */

undefined1 * FUN_1062e0160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f0d68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062e0220; end: 1062e0227; -[SCChatMediaCarouselOperaLayer type] */

undefined8 FUN_1062e0220(void)

{
  return 0x19;
}



/* Entry: 1062e0228; end: 1062e02df; -[SCChatMediaCarouselOperaLayer isEqual:] */

undefined8 FUN_1062e0228(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e28;
  _objc_opt_class(PTR_PTR_1126b2e28);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c0c6b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0c6b00(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar3 = param_1;
    func_0x00010c071b60(param_1);
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1062e02e0; end: 1062e02e7; -[SCChatMediaCarouselOperaLayer mediaThumbnails] */

undefined8 FUN_1062e02e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1062e02e8; end: 1062e02ef; -[SCChatMediaCarouselOperaLayer startIndex] */

undefined8 FUN_1062e02e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062e02f0; end: 1062e031f; -[SCChatMediaCarouselOperaLayer .cxx_destruct] */

void FUN_1062e02f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062e0320; end: 1062e05af; -[SCChatMediaCarouselOperaLayerView initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1062e0320(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_3;
  _objc_retain(param_3);
  puStack_90 = PTR_PTR_1126f0d70;
  uVar17 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  puVar14 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(uVar17,uVar18,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar14,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar14 != (undefined8 *)0x0) {
    lVar16 = (long)_DAT_112745434;
    _objc_retain(param_3);
    uVar17 = *(undefined8 *)((long)puVar14 + lVar16);
    *(undefined **)((long)puVar14 + lVar16) = param_3;
    _objc_release(uVar17);
    func_0x00010befbb60(puVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar16));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar14;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf493c0(0xc05e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar4;
    uVar5 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = 0x4049000000000000;
    uVar6 = uVar5;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar6;
    uVar7 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar14;
    func_0x00010c08e400(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar14;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar14;
  }
  ___stack_chk_fail();
  lVar16 = (long)_DAT_112745434;
  _objc_retain(puVar15);
  func_0x00010bf512a0(uVar17,uVar18,param_3);
  puVar14 = *(undefined8 **)(param_3 + lVar16);
  func_0x00010bfe3a40(puVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return puVar14;
}



/* Entry: 1062e05b0; end: 1062e0633; -[SCChatMediaCarouselOperaLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062e05b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112745434;
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  _objc_retain(param_5);
  func_0x00010bf512a0(param_1,param_2,param_3,param_4,uVar1);
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  func_0x00010bfe3a40(uVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e0634; end: 1062e0647; -[SCChatMediaCarouselOperaLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062e0634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745434,0);
  return;
}



/* Entry: 1062e0648; end: 1062e075f; -[SCChatMediaCarouselOperaLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:valdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1062e0648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f0d78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112745438;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274543c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274543c) = puVar3;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf99b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010be89fa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1062e0760; end: 1062e09d7; -[SCChatMediaCarouselOperaLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062e0760(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c6b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c9848;
  _objc_alloc(PTR_PTR_1126c9848);
  func_0x00010c029e00();
  puVar4 = PTR_PTR_1126c9850;
  _objc_opt_new(PTR_PTR_1126c9850);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c24efe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209600(puVar4);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11274543c);
  func_0x00010bf870a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5460(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c1d25a0(puVar4);
  puVar6 = PTR_PTR_1126c9858;
  _objc_alloc(PTR_PTR_1126c9858);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112745438);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar6);
  _objc_release(uVar8);
  _objc_release(uVar7);
  puVar9 = PTR_PTR_1126c9860;
  _objc_alloc(PTR_PTR_1126c9860);
  func_0x00010c0601e0();
  func_0x00010c222380(param_1);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 1062e09d8; end: 1062e0a77;  */

void FUN_1062e09d8(undefined8 param_1,long param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1062e0a78;
  puStack_48 = &UNK_110846540;
  _objc_copyWeak(auStack_40,param_2 + 0x20);
  uStack_38 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 1062e0a78; end: 1062e0aab;  */

void FUN_1062e0a78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be62360(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062e0aac; end: 1062e0b6f; -[SCChatMediaCarouselOperaLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062e0aac(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f25e0(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126c9460;
    func_0x00010c0f2620(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) goto LAB_1062e0b58;
    lVar3 = -1;
  }
  else {
    lVar3 = 1;
  }
  func_0x00010bea8640(param_1,param_2,*(long *)(param_1 + _DAT_112745440) + lVar3);
LAB_1062e0b58:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e0b70; end: 1062e0c2b; -[SCChatMediaCarouselOperaLayerViewController _registeredEventsForOperaSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062e0b70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9460;
  puStack_48 = puVar1;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_48;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  if (-1 < (long)ppuVar5) {
    puVar2 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0c6b00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((long)ppuVar5 < (long)puVar4) {
      *(undefined ***)(puVar1 + _DAT_112745440) = ppuVar5;
      uVar6 = *(undefined8 *)(puVar1 + _DAT_11274543c);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
  return;
}



/* Entry: 1062e0c2c; end: 1062e0cf7; -[SCChatMediaCarouselOperaLayerViewController _setThumbnailIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062e0c2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (-1 < param_3) {
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c6b00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (param_3 < lVar3) {
      *(long *)(param_1 + _DAT_112745440) = param_3;
      uVar5 = *(undefined8 *)(param_1 + _DAT_11274543c);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar5,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 1062e0cf8; end: 1062e0dff; -[SCChatMediaCarouselOperaLayerViewController _navigateToIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062e0cf8(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  if (param_1 != (double)*(long *)(param_2 + _DAT_112745440)) {
    *(long *)(param_2 + _DAT_112745440) = (long)param_1;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010bf99b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7e0();
    _objc_release(param_2);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + _DAT_11274543c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + _DAT_112745438,0);
  return;
}



/* Entry: 1062e0e00; end: 1062e0e3f; -[SCChatMediaCarouselOperaLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062e0e00(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274543c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745438,0);
  return;
}



/* Entry: 1062e0e40; end: 1062e0e4b; +[SCCChatMediaCarouselView componentPath] */

undefined ** FUN_1062e0e40(void)

{
  return &PTR____CFConstantStringClassReference_110e49738;
}



/* Entry: 1062e0e4c; end: 1062e0e7f; -[SCCChatMediaCarouselView initWithViewModel:componentContext:runtime:] */

void FUN_1062e0e4c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0d80;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 1062e0e80; end: 1062e0ecf; -[SCCChatMediaCarouselView setViewModel:] */

void FUN_1062e0e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1062e0ed0; end: 1062e0f13; -[SCCChatMediaCarouselView viewModel] */

void FUN_1062e0ed0(undefined8 param_1)

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



/* Entry: 1062e0f14; end: 1062e0f9b; -[SCCChatMediaCarouselContext initWithOperaFocusedIndex:onFocusThumbnail:] */

undefined8 *
FUN_1062e0f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126f0d88;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1062e0f9c; end: 1062e0fc3; +[SCCChatMediaCarouselContext valdiMarshallableObjectDescriptor] */

void FUN_1062e0f9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11091b3d8;
  param_1[1] = &PTR_s_SCBridgeObservable_11091b438;
  param_1[2] = &PTR_s_od_v_11091b3a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1062e0fc4; end: 1062e0fe7;  */

undefined8 FUN_1062e0fc4(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 1062e0fe8; end: 1062e1067;  */

void FUN_1062e0fe8(undefined8 param_1)

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
  pcStack_38 = FUN_1062e10bc;
  puStack_30 = &UNK_110853170;
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



/* Entry: 1062e1068; end: 1062e10a3; -[SCCChatMediaCarouselViewModel initWithMediaThumbnails:] */

void FUN_1062e1068(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0d90;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 1062e10a4; end: 1062e10bb; +[SCCChatMediaCarouselViewModel valdiMarshallableObjectDescriptor] */

void FUN_1062e10a4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11091b448;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1062e10bc; end: 1062e10e7;  */

void FUN_1062e10bc(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1062e10e8; end: 1062e115b; -[SCAddSoundPillOperaViewControllerFactoryPlugin initWithAddSoundPillOperaProvider:] */

undefined1 * FUN_1062e10e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0d98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062e115c; end: 1062e1263; -[SCAddSoundPillOperaViewControllerFactoryPlugin supportedLayers] */

void FUN_1062e115c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c36d8 != -1) {
    func_0x00010002a2fc(0x1136c36d8,&PTR___NSConcreteGlobalBlock_11091b478);
  }
  uVar1 = uRam00000001136c36d0;
  _objc_retain(uRam00000001136c36d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e1264; end: 1062e1343; -[SCAddSoundPillOperaViewControllerFactoryPlugin layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_1062e1264(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c9868;
  _objc_opt_class(PTR_PTR_1126c9868);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c08c640(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1062e1344; end: 1062e134f; -[SCAddSoundPillOperaViewControllerFactoryPlugin .cxx_destruct] */

void FUN_1062e1344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062e1350; end: 1062e13ab; -[SCDiscoverPublisherSnapPlayableDataModel isLensStorySnap] */

undefined8 FUN_1062e1350(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c23ffa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f5723c();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1062e13ac; end: 1062e13af; -[SCDiscoverPublisherSnapPlayableDataModel lensStoryId] */

void FUN_1062e13ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_storyPlayableDataModelUniqueIden_112674400);
  return;
}



/* Entry: 1062e13b0; end: 1062e13b3; -[SCDiscoverPublisherSnapPlayableDataModel lensSnapId] */

void FUN_1062e13b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 1062e13b4; end: 1062e1487; -[SCDiscoverPublisherSnapPlayableDataModel lensId] */

void FUN_1062e13b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c0768e0();
  if ((int)uVar1 != 0) {
    func_0x00010c23ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf28a40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c094540();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db3bb8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062e1488; end: 1062e148b; -[SCDiscoverPublisherStoryPlayableDataModel isLensStory] */

void FUN_1062e1488(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd8730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hasLensStoriesMetadata_1125d3b70);
  return;
}



/* Entry: 1062e148c; end: 1062e148f; -[SCDiscoverPublisherStoryPlayableDataModel lensStoryId] */

void FUN_1062e148c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c280590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_uniqueIdentifier_11267db88);
  return;
}



/* Entry: 1062e1490; end: 1062e14d3; -[SCDiscoverPublisherStoryPlayableDataModel snaps] */

void FUN_1062e1490(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c242500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001006372a4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e14d4; end: 1062e14db;  */

void FUN_1062e14d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0768f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isLensStorySnap_1125fb448);
  return;
}



/* Entry: 1062e14dc; end: 1062e154f; -[SCLensStoryOperaDiscoverPageDataProvider initWithPublisherPagePropertiesManager:] */

undefined1 * FUN_1062e14dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0da0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062e1550; end: 1062e167f; -[SCLensStoryOperaDiscoverPageDataProvider pageDataForSnapDataModel:storyDataModel:completion:] */

void FUN_1062e1550(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c9870;
  _objc_opt_class(PTR_PTR_1126c9870);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126bdd28;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar3 = param_4;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_4);
  if (uVar1 == 0 || uVar3 == 0) {
    puVar2 = PTR_PTR_1126b23e0;
    _objc_alloc(PTR_PTR_1126b23e0);
    func_0x00010c033240();
    (**(code **)(param_5 + 0x10))(param_5,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010be6f080(param_1);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e1680; end: 1062e17db; -[SCLensStoryOperaDiscoverPageDataProvider _pageDataForSnapPlayableDataModel:storyPlayableDataModel:completion:] */

void FUN_1062e1680(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1062e175c;
  puStack_40 = &UNK_11091b4d8;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010bfc87c0(uVar1,param_2,param_3,param_4,&puStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 1062e17dc; end: 1062e17e7; -[SCLensStoryOperaDiscoverPageDataProvider .cxx_destruct] */

void FUN_1062e17dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062e17e8; end: 1062e185b; -[SCLensStoryOperaDiscoverPlugin initWithDiscoverPageDataProvider:] */

undefined1 * FUN_1062e17e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0da8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062e185c; end: 1062e18df; -[SCLensStoryOperaDiscoverPlugin storyDataModelFromFeatureStoryDataModel:] */

void FUN_1062e185c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c0768c0();
  uVar4 = 0;
  if ((int)uVar3 != 0) {
    _objc_retain(uVar1);
    uVar4 = uVar1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1062e18e0; end: 1062e1963; -[SCLensStoryOperaDiscoverPlugin snapDataModelFromFeatureSnapDataModel:] */

void FUN_1062e18e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c9870;
  _objc_opt_class(PTR_PTR_1126c9870);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c0768e0();
  uVar4 = 0;
  if ((int)uVar3 != 0) {
    _objc_retain(uVar1);
    uVar4 = uVar1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1062e1964; end: 1062e198b; -[SCLensStoryOperaDiscoverPlugin pageDataProviderForSnapDataModel:] */

void FUN_1062e1964(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e198c; end: 1062e1997; -[SCLensStoryOperaDiscoverPlugin .cxx_destruct] */

void FUN_1062e198c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062e1998; end: 1062e1a0b; -[SCOperaPreviewToolbarViewControllerFactoryPlugin initWithOperaPreviewToolbarProvider:] */

undefined1 * FUN_1062e1998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0db0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062e1a0c; end: 1062e1a5f; -[SCOperaPreviewToolbarViewControllerFactoryPlugin supportedLayers] */

void FUN_1062e1a0c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c36e8 != -1) {
    func_0x00010002a2fc(0x1136c36e8,&PTR___NSConcreteGlobalBlock_11091b508);
  }
  uVar1 = uRam00000001136c36e0;
  _objc_retain(uRam00000001136c36e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e1a60; end: 1062e1ae3;  */

void FUN_1062e1a60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined *puStack_20;
  long lStack_18;
  
  ppuVar6 = &puStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9878;
  _objc_opt_class();
  uVar7 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_20 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)puRam00000001136c36e0;
  puRam00000001136c36e0 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  _objc_retain(uVar7);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  puVar1 = PTR_PTR_1126c9878;
  _objc_opt_class(PTR_PTR_1126c9878);
  puVar4 = (undefined1 *)ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar1);
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 8);
    func_0x00010c08c640(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(uVar7);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1062e1ae4; end: 1062e1bc3; -[SCOperaPreviewToolbarViewControllerFactoryPlugin layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_1062e1ae4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c9878;
  _objc_opt_class(PTR_PTR_1126c9878);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c08c640(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1062e1bc4; end: 1062e1bcf; -[SCOperaPreviewToolbarViewControllerFactoryPlugin .cxx_destruct] */

void FUN_1062e1bc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062e1bd0; end: 1062e1c73; -[SCRepostOperaPluginRegistrator initWithRepostFeatureLaunchServices:repostMentionScopeServices:] */

undefined1 *
FUN_1062e1bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0db8;
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



/* Entry: 1062e1c74; end: 1062e1d63; -[SCRepostOperaPluginRegistrator registerPlaylistPluginsWithContext:] */

void FUN_1062e1c74(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c6dd8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1343a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ea60();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 1062e1d64; end: 1062e1d93; -[SCRepostOperaPluginRegistrator .cxx_destruct] */

void FUN_1062e1d64(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062e1d94; end: 1062e1f5b; -[SCAdUnifiedEventObservableBusEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062e1d94(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar3 = (undefined *)(param_1 + _DAT_11274545c);
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010bf22660();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar4;
  }
  _objc_retain(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(puVar2);
  _objc_release(puVar3);
  _objc_initWeak(auStack_48,param_1);
  puVar4 = PTR_PTR_1126c9880;
  _objc_alloc(PTR_PTR_1126c9880);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar2);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058c80(puVar4);
  _objc_release(puVar3);
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112745460));
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 1062e1f5c; end: 1062e1fa3;  */

void FUN_1062e1f5c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc5a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1062e1fa4; end: 1062e2123; -[SCAdUnifiedEventObservableBusEntryPoint _adUnifiedEventObservableBusImplWithEventStreamPlugin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062e1fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_112745464;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf1f480();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c9888;
  uVar5 = param_3;
  if ((int)lVar3 == 0) {
    puVar4 = PTR_PTR_1126c9890;
    _objc_alloc(PTR_PTR_1126c9890);
    func_0x00010bfbc3e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_112745468;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bef5e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0375a0(puVar4,param_2,uVar5,lVar1,lVar2);
  }
  else {
    func_0x00010bfbc3e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_112745468;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bef5e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf24e40(puVar4,param_2,uVar5,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1062e2124; end: 1062e2183; -[SCAdUnifiedEventObservableBusEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062e2124(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745460,0);
  _objc_destroyWeak(param_1 + _DAT_11274545c);
  _objc_destroyWeak(param_1 + _DAT_112745464);
  _objc_destroyWeak(param_1 + _DAT_112745468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274546c);
  return;
}



/* Entry: 1062e2184; end: 1062e256b; -[SCAdUnifiedEventObservableBusImpl initWithPlugInsWithFuture:trackPerformer:adConfigProviderV2:] */

undefined8 *
FUN_1062e2184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f0dc0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0x10];
    puVar1[0x10] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0x12];
    puVar1[0x12] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0x11];
    puVar1[0x11] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0x13];
    puVar1[0x13] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0x14];
    puVar1[0x14] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0x15];
    puVar1[0x15] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0x16];
    puVar1[0x16] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0x17];
    puVar1[0x17] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0x18];
    puVar1[0x18] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0x1a];
    puVar1[0x1a] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0x1b];
    puVar1[0x1b] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0x19];
    puVar1[0x19] = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_68,puVar1);
    uVar4 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f480();
    _objc_release(uVar4);
    puVar3 = auStack_70;
    _objc_copyWeak(puVar3,auStack_68);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297280(param_3);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1062e256c; end: 1062e25db;  */

void FUN_1062e256c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf00560(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be5f780(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062e25dc; end: 1062e2603; -[SCAdUnifiedEventObservableBusImpl adLifecycleEventObservable] */

void FUN_1062e25dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e2604; end: 1062e262b; -[SCAdUnifiedEventObservableBusImpl adInteractionEventObservable] */

void FUN_1062e2604(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e262c; end: 1062e2633; -[SCAdUnifiedEventObservableBusImpl streamsType] */

undefined8 FUN_1062e262c(void)

{
  return 0;
}



/* Entry: 1062e2634; end: 1062e265b; -[SCAdUnifiedEventObservableBusImpl adLifecycleEventObservableV2] */

void FUN_1062e2634(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e265c; end: 1062e2683; -[SCAdUnifiedEventObservableBusImpl adWebviewConfigEventObservable] */

void FUN_1062e265c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e2684; end: 1062e26ab; -[SCAdUnifiedEventObservableBusImpl adWebviewUserEventObservableV2] */

void FUN_1062e2684(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e26ac; end: 1062e26d3; -[SCAdUnifiedEventObservableBusImpl adWebviewAsmEventObservable] */

void FUN_1062e26ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e26d4; end: 1062e26fb; -[SCAdUnifiedEventObservableBusImpl adWebviewLoadingEventObservable] */

void FUN_1062e26d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e26fc; end: 1062e2723; -[SCAdUnifiedEventObservableBusImpl adWebviewNavigationEventObservable] */

void FUN_1062e26fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e2724; end: 1062e274b; -[SCAdUnifiedEventObservableBusImpl adWebviewGaEventObservable] */

void FUN_1062e2724(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e274c; end: 1062e2773; -[SCAdUnifiedEventObservableBusImpl adWebviewOperationEventObservable] */

void FUN_1062e274c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e2774; end: 1062e279b; -[SCAdUnifiedEventObservableBusImpl adWebviewEventObservable] */

void FUN_1062e2774(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e279c; end: 1062e27c3; -[SCAdUnifiedEventObservableBusImpl adAppInstallEventObservable] */

void FUN_1062e279c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e27c4; end: 1062e27eb; -[SCAdUnifiedEventObservableBusImpl adAppInstallEventObservableV2] */

void FUN_1062e27c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e27ec; end: 1062e2813; -[SCAdUnifiedEventObservableBusImpl adAdToMessageEventObservable] */

void FUN_1062e27ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e2814; end: 1062e283b; -[SCAdUnifiedEventObservableBusImpl adAdToMessageEventObservableV2] */

void FUN_1062e2814(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e283c; end: 1062e2863; -[SCAdUnifiedEventObservableBusImpl adDeepLinkEventObservable] */

void FUN_1062e283c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e2864; end: 1062e288b; -[SCAdUnifiedEventObservableBusImpl adDeepLinkEventObservableV2] */

void FUN_1062e2864(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e288c; end: 1062e28b3; -[SCAdUnifiedEventObservableBusImpl adReportEventObservable] */

void FUN_1062e288c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e28b4; end: 1062e28db; -[SCAdUnifiedEventObservableBusImpl adReportEventObservableV2] */

void FUN_1062e28b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e28dc; end: 1062e2903; -[SCAdUnifiedEventObservableBusImpl adReminderEventObservableV2] */

void FUN_1062e28dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e2904; end: 1062e292b; -[SCAdUnifiedEventObservableBusImpl adStickersEventObservableV2] */

void FUN_1062e2904(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e292c; end: 1062e2953; -[SCAdUnifiedEventObservableBusImpl adSubscribeEventObservableV2] */

void FUN_1062e292c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e2954; end: 1062e297b; -[SCAdUnifiedEventObservableBusImpl adCaptionCtaImpressionEventObservable] */

void FUN_1062e2954(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e297c; end: 1062e29a3; -[SCAdUnifiedEventObservableBusImpl adLiveReviewEventObservable] */

void FUN_1062e297c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e29a4; end: 1062e29cb; -[SCAdUnifiedEventObservableBusImpl adModularLensEventObservable] */

void FUN_1062e29a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e29cc; end: 1062e2a7b; -[SCAdUnifiedEventObservableBusImpl _mergeAdUnifiedEventObservableBusWithPlugins:] */

void FUN_1062e29cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be5f960(param_1,param_2,param_3);
  func_0x00010be5f720(param_1,param_2,param_3);
  func_0x00010be5f700(param_1,param_2,param_3);
  func_0x00010be5f760(param_1,param_2,param_3);
  func_0x00010be5fae0(param_1,param_2,param_3);
  func_0x00010be5f6c0(param_1,param_2,param_3);
  func_0x00010be5f6e0(param_1,param_2,param_3);
  func_0x00010be5fa00(param_1,param_2,param_3);
  func_0x00010be5f940(param_1,param_2,param_3);
  func_0x00010be5f8e0(param_1,param_2,param_3);
  func_0x00010be5fb60(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e2a7c; end: 1062e2aeb; -[SCAdUnifiedEventObservableBusImpl _mergeLifecycleEventV2StreamsWithPlugins:] */

void FUN_1062e2a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091b578);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6afe0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e2aec; end: 1062e2af3;  */

void FUN_1062e2aec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef3290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_adLifecycleEventObservableV2_11259a648);
  return;
}



/* Entry: 1062e2af4; end: 1062e2b63; -[SCAdUnifiedEventObservableBusImpl _mergeLifecycleEventStreamsWithPlugins:] */

void FUN_1062e2af4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091b598);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6afe0(*(undefined8 *)(param_1 + 0x18));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e2b64; end: 1062e2b6b;  */

void FUN_1062e2b64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef3270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_adLifecycleEventObservable_11259a640);
  return;
}



/* Entry: 1062e2b6c; end: 1062e2bdb; -[SCAdUnifiedEventObservableBusImpl _mergeInteractionEventStreamsWithPlugins:] */

void FUN_1062e2b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091b5b8);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6afe0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e2bdc; end: 1062e2be3;  */

void FUN_1062e2bdc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef30f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_adInteractionEventObservable_11259a5e0);
  return;
}


