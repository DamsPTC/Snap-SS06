/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a61efc; end: 107a62017; -[SCTopicViewerLensHeaderSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_107a61efc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eaab98;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107a62018;
  puStack_60 = &UNK_1109f7f88;
  puVar4 = auStack_50;
  _objc_copyWeak(auStack_58,puVar4);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar3 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar3);
  _objc_retain(puVar4);
  puVar3 = puVar3 + 0x20;
  _objc_loadWeakRetained(puVar3);
  func_0x00010bde4d40();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107a62018; end: 107a6205f;  */

void FUN_107a62018(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a62060; end: 107a62063; -[SCTopicViewerLensHeaderSectionDataProvider _configureCell:] */

void FUN_107a62060(void)

{
  return;
}



/* Entry: 107a62064; end: 107a6206b; -[SCTopicViewerLensHeaderSectionDataProvider numberOfSections] */

undefined8 FUN_107a62064(void)

{
  return 1;
}



/* Entry: 107a6206c; end: 107a62073; -[SCTopicViewerLensHeaderSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_107a6206c(void)

{
  return 1;
}



/* Entry: 107a62074; end: 107a6207b; -[SCTopicViewerLensHeaderSectionDataProvider sectionDataModel] */

undefined8 FUN_107a62074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a6207c; end: 107a62093; -[SCTopicViewerLensHeaderSectionDataProvider dataProviderDelegate] */

void FUN_107a6207c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a62094; end: 107a6209f; -[SCTopicViewerLensHeaderSectionDataProvider setDataProviderDelegate:] */

void FUN_107a62094(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107a620a0; end: 107a620a7; -[SCTopicViewerLensHeaderSectionDataProvider updateQueuePerformer] */

undefined8 FUN_107a620a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a620a8; end: 107a620d7; -[SCTopicViewerLensHeaderSectionDataProvider setUpdateQueuePerformer:] */

void FUN_107a620a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a620d8; end: 107a62127; -[SCTopicViewerLensHeaderSectionDataProvider .cxx_destruct] */

void FUN_107a620d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a62128; end: 107a6212f; -[SCTopicViewerSectionSupplementaryViewProvider initWithActionHandler:viewModel:] */

void FUN_107a62128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff06f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithActionHandler_viewModel__1125d9b80,param_3,param_4,0);
  return;
}



/* Entry: 107a62130; end: 107a6213b; -[SCTopicViewerSectionSupplementaryViewProvider initWithActionHandler:viewModel:hideSectionHeaderRow:] */

void FUN_107a62130(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff0710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithActionHandler_viewModel__1125d9b88);
  return;
}



/* Entry: 107a6213c; end: 107a62223; -[SCTopicViewerSectionSupplementaryViewProvider initWithActionHandler:viewModel:hideSectionHeaderRow:useSIGSectionHeader:hasContentBlock:] */

undefined1 *
FUN_107a6213c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9820;
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
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 0x19) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a62224; end: 107a6225b; -[SCTopicViewerSectionSupplementaryViewProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_107a62224(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && ((**(code **)(lVar1 + 0x10))(), (int)lVar1 == 0)) {
    return 0;
  }
  return 1;
}



/* Entry: 107a6225c; end: 107a62353; -[SCTopicViewerSectionSupplementaryViewProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined1  [16]
FUN_107a6225c(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar4 = param_1;
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126d60c0;
  if (*(char *)(param_4 + 0x19) == '\x01') {
    lVar1 = *(long *)(param_4 + 0x10);
    func_0x00010c2711a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    func_0x00010c23b8e0(puVar3,param_5,lVar2 != 0);
  }
  else {
    lVar1 = *(long *)(param_4 + 0x10);
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    dVar4 = 40.0;
    if (lVar2 != 0) {
      dVar4 = 80.0;
    }
  }
  _objc_release(lVar1);
  if (param_1 <= 0.0) {
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar3);
    param_1 = param_3;
  }
  _objc_release(param_6);
  auVar5._8_8_ = dVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 107a62354; end: 107a6241f; -[SCTopicViewerSectionSupplementaryViewProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_107a62354(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_30;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    ppuVar2 = ppuVar5;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar1 + 0x28;
      _objc_loadWeakRetained();
      puVar6 = puVar3;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126d60c0;
      _objc_retain(puVar6);
      _objc_opt_class(puVar3);
      puVar4 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar3);
      puVar3 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      puVar4 = puVar6;
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        if (*(long *)(puVar1 + 0x10) == 0) {
          func_0x000108f58294();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7a40(puVar6);
          _objc_release(puVar4);
        }
        else {
          func_0x00010c1a7b00(puVar6);
        }
      }
      _objc_release(puVar3);
    }
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107a62420; end: 107a6253f; -[SCTopicViewerSectionSupplementaryViewProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_107a62420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    uVar5 = uVar2;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d60c0;
    _objc_retain(uVar5);
    _objc_opt_class(puVar3);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar2 = uVar5;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    uVar4 = uVar5;
    _objc_release(uVar5);
    if (uVar2 != 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
        func_0x000108f58294();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7a40(uVar5);
        _objc_release(uVar4);
      }
      else {
        func_0x00010c1a7b00(uVar5);
      }
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107a62540; end: 107a62557; -[SCTopicViewerSectionSupplementaryViewProvider supplementaryViewProviderDelegate] */

void FUN_107a62540(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a62558; end: 107a62563; -[SCTopicViewerSectionSupplementaryViewProvider setSupplementaryViewProviderDelegate:] */

void FUN_107a62558(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 107a62564; end: 107a6256b; -[SCTopicViewerSectionSupplementaryViewProvider supplementaryViewModels] */

undefined8 FUN_107a62564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a6256c; end: 107a62573; -[SCTopicViewerSectionSupplementaryViewProvider setSupplementaryViewModels:] */

void FUN_107a6256c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107a62574; end: 107a625c3; -[SCTopicViewerSectionSupplementaryViewProvider .cxx_destruct] */

void FUN_107a62574(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a625c4; end: 107a625cf; +[SCTopicViewerThirdPartyAppHeaderSectionDataProvider announcerIdentifier] */

undefined ** FUN_107a625c4(void)

{
  return &PTR____CFConstantStringClassReference_110eaac18;
}



/* Entry: 107a625d0; end: 107a625d7; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider addListener:] */

void FUN_107a625d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107a625d8; end: 107a625df; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider removeListener:] */

void FUN_107a625d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107a625e0; end: 107a62683; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider initWithThirdPartyAppInfo:onDemandResourceDownloader:] */

undefined1 *
FUN_107a625e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9828;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a62684; end: 107a62747; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider setSectionDataModel:] */

void FUN_107a62684(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (uVar3 == 0) {
LAB_107a62704:
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = param_3;
    _objc_release(uVar2);
    uVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(uVar3);
    func_0x00010c155aa0();
  }
  else {
    _objc_retain(uVar3);
    _objc_retain(param_3);
    if (uVar3 != param_3) {
      if (param_3 == 0) {
        _objc_release(uVar3);
      }
      else {
        uVar1 = uVar3;
        func_0x00010c071ae0(uVar3,param_2,param_3);
        _objc_release(param_3);
        _objc_release(uVar3);
        if ((uVar1 & 1) != 0) goto LAB_107a62734;
      }
      goto LAB_107a62704;
    }
    _objc_release(param_3);
  }
  _objc_release(uVar3);
LAB_107a62734:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a62748; end: 107a627e7; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_107a62748(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc();
  func_0x00010bffd260();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_80,puVar1);
    ppuStack_78 = &PTR____CFConstantStringClassReference_110eaabf8;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107a62904;
    puStack_90 = &UNK_1109f7fb8;
    puVar5 = auStack_80;
    _objc_copyWeak(auStack_88,puVar5);
    ppuVar3 = &puStack_a8;
    _objc_retainBlock();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_70 = ppuVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_88);
    puVar4 = auStack_80;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      __Unwind_Resume(puVar4);
      _objc_retain(puVar5);
      puVar4 = puVar4 + 0x20;
      _objc_loadWeakRetained(puVar4);
      func_0x00010bde4d40();
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a627e8; end: 107a62903; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_107a627e8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eaabf8;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107a62904;
  puStack_60 = &UNK_1109f7fb8;
  puVar4 = auStack_50;
  _objc_copyWeak(auStack_58,puVar4);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar3 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar3);
  _objc_retain(puVar4);
  puVar3 = puVar3 + 0x20;
  _objc_loadWeakRetained(puVar3);
  func_0x00010bde4d40();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107a62904; end: 107a6294b;  */

void FUN_107a62904(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a6294c; end: 107a6299f; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider _configureCell:] */

void FUN_107a6294c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d1f20(param_3,param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a629a0; end: 107a62a1f; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider contentCellClassesByReuseIdentifier] */

undefined * FUN_107a629a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110eaabf8;
  puVar1 = PTR_PTR_1126d60c8;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 107a62a20; end: 107a62a27; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider numberOfSections] */

undefined8 FUN_107a62a20(void)

{
  return 1;
}



/* Entry: 107a62a28; end: 107a62a2f; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_107a62a28(void)

{
  return 1;
}



/* Entry: 107a62a30; end: 107a62a37; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider sectionDataModel] */

undefined8 FUN_107a62a30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a62a38; end: 107a62a4f; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider dataProviderDelegate] */

void FUN_107a62a38(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a62a50; end: 107a62a5b; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider setDataProviderDelegate:] */

void FUN_107a62a50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 107a62a5c; end: 107a62a63; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider updateQueuePerformer] */

undefined8 FUN_107a62a5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a62a64; end: 107a62a93; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider setUpdateQueuePerformer:] */

void FUN_107a62a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a62a94; end: 107a62aef; -[SCTopicViewerThirdPartyAppHeaderSectionDataProvider .cxx_destruct] */

void FUN_107a62a94(long param_1)

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



/* Entry: 107a62af0; end: 107a62b2b; -[SCTopicViewerViewSnapsCollectionDataProvider topicStories] */

void FUN_107a62af0(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a62b2c; end: 107a62b8b; -[SCTopicViewerViewSnapsCollectionDataProvider _shouldShowColdShimmerLocked] */

byte FUN_107a62b2c(long param_1)

{
  long lVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x90);
    func_0x00010bf529e0();
    if (((lVar1 == 0) && ((*(byte *)(param_1 + 0x29) & 1) == 0)) &&
       (*(char *)(param_1 + 0x28) == '\x01')) {
      bVar2 = *(byte *)(param_1 + 0x58);
    }
    else {
      bVar2 = 0;
    }
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 107a62b8c; end: 107a62bff; -[SCTopicViewerViewSnapsCollectionDataProvider announceColdStateIfNeeded] */

void FUN_107a62b8c(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x48);
  lVar1 = param_1;
  func_0x00010beb5da0();
  _os_unfair_lock_unlock(param_1 + 0x48);
  if ((int)lVar1 != 0) {
    param_1 = param_1 + 0x80;
    _objc_loadWeakRetained(param_1);
    func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107a62c00; end: 107a62c0b; +[SCTopicViewerViewSnapsCollectionDataProvider announcerIdentifier] */

undefined ** FUN_107a62c00(void)

{
  return &PTR____CFConstantStringClassReference_110eaac98;
}



/* Entry: 107a62c0c; end: 107a62c13; -[SCTopicViewerViewSnapsCollectionDataProvider addListener:] */

void FUN_107a62c0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107a62c14; end: 107a62c1b; -[SCTopicViewerViewSnapsCollectionDataProvider removeListener:] */

void FUN_107a62c14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107a62c1c; end: 107a62dff; -[SCTopicViewerViewSnapsCollectionDataProvider initWithTopic:displayName:topicStoryType:thumbnailCoordinator:sectionIndex:requester:isPrimaryTopic:storiesExperimentServices:topicPageNewSnapGridEnabled:] */

undefined1 *
FUN_107a62c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             byte param_9,undefined4 param_10,undefined8 param_11,byte param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f9830;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = param_8;
    _objc_release(uVar2);
    *(byte *)((long)puVar1 + 0x68) = param_9;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x48) = 0;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
    _objc_release(uVar2);
    *(byte *)((long)puVar1 + 0x58) = param_12;
    *(byte *)((long)puVar1 + 0x28) = param_9 & param_12;
    if (param_12 != 0) {
      puVar3 = PTR_PTR_1126d60d8;
      _objc_alloc_init();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
      *(undefined **)((long)puVar1 + 0x60) = puVar3;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a62e00; end: 107a6300b; -[SCTopicViewerViewSnapsCollectionDataProvider updateWithTopicStories:hasMoreData:isTopicNotAvailable:lastStreamToken:] */

void FUN_107a62e00(long param_1,undefined **param_2,undefined *param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x22;
  undefined *unaff_x23;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined4 uStack_138;
  undefined4 uStack_134;
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
  uStack_138 = param_4;
  uStack_134 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c0d3c80();
  _os_unfair_lock_unlock(param_1 + 0x48);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar11 = param_3;
  func_0x00010bf52a60();
  if (puVar11 != (undefined *)0x0) {
    unaff_x22 = *plStack_120;
    do {
      unaff_x23 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x22) {
          _objc_enumerationMutation(param_3);
        }
        uVar12 = *(undefined8 *)(lStack_128 + (long)unaff_x23 * 8);
        uVar14 = *(ulong *)(param_1 + 0x38);
        uVar15 = uVar12;
        func_0x00010c2756a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(uVar15);
        if ((uVar14 & 1) == 0) {
          func_0x00010befa120(uVar1);
          uVar15 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c2756a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar15);
          _objc_release(uVar12);
        }
        unaff_x23 = unaff_x23 + 1;
      } while (puVar11 != unaff_x23);
      puVar11 = param_3;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined *)0x0);
  }
  _objc_release(param_3);
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar15 = uVar1;
  func_0x00010bf51e00();
  uVar12 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar15;
  _objc_release(uVar12);
  _os_unfair_lock_unlock(param_1 + 0x48);
  *(char *)(param_1 + 0x28) = (char)uStack_138;
  *(char *)(param_1 + 0x29) = (char)uStack_134;
  uVar15 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_6;
  _objc_release(uVar15);
  lVar2 = param_1 + 0x80;
  _objc_loadWeakRetained();
  lVar5 = param_1;
  func_0x00010c155aa0();
  _objc_release(lVar2);
  _objc_release(uVar1);
  puVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_107a6300c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_180 = uVar1;
  puStack_178 = unaff_x23;
  lStack_170 = unaff_x22;
  lStack_168 = lVar2;
  lStack_160 = param_1;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(lVar5);
  _os_unfair_lock_lock(puVar11 + 0x48);
  lVar2 = *(long *)(puVar11 + 0x90);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(puVar11 + 0x90);
    func_0x00010bf51e00();
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_107a632c4;
    puStack_1a8 = &UNK_11086b8d0;
    _objc_retain();
    param_2 = &puStack_1c0;
    uStack_1a0 = uVar1;
    puStack_198 = puVar11;
    func_0x000100504554();
    _objc_release(uStack_1a0);
    _objc_release(uVar1);
    goto LAB_107a63250;
  }
  puVar3 = puVar11;
  func_0x00010beb5da0();
  puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar3 != 0) {
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_107a6365c;
    puStack_1d0 = &UNK_110845ab0;
    param_2 = &puStack_1e8;
    puStack_1c8 = puVar11;
    func_0x000100504554();
    goto LAB_107a63250;
  }
  if (puVar11[0x29] == '\x01') {
    if ((*(long *)(puVar11 + 0x30) - 3U < 2) && ((puVar11[0x58] & 1) != 0)) {
      func_0x000107a801c8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107a801b0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR_PTR_1126d60e0;
    _objc_alloc();
    func_0x00010c02b4a0();
    puVar13 = puVar3;
LAB_107a631f0:
    _objc_release(puVar13);
  }
  else {
    if ((puVar11[0x28] & 1) == 0) {
      func_0x000108f582ac();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar4 = PTR_PTR_1126d60e0;
      _objc_alloc();
      func_0x00010c02b4a0();
      goto LAB_107a631f0;
    }
    puVar4 = PTR_PTR_1126d60e0;
    _objc_alloc();
    func_0x00010c02b4a0();
  }
  puVar13 = PTR_PTR_1126aea98;
  _objc_alloc();
  func_0x00010bffd260();
  puStack_190 = puVar13;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar4);
LAB_107a63250:
  _os_unfair_lock_unlock(puVar11 + 0x48);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(puVar11 + 0x48);
    __Unwind_Resume();
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_2);
    ppuVar6 = param_2;
    func_0x00010c0840e0();
    ppuVar7 = *(undefined ***)(lVar5 + 0x20);
    func_0x00010bf529e0();
    if (ppuVar6 < ppuVar7) {
      puVar11 = *(undefined **)(lVar5 + 0x20);
      func_0x00010c0840e0(param_2);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0840e0(param_2);
      _objc_retain(puVar11);
      puVar13 = puVar11;
      func_0x00010c245680(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar13;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      func_0x000107d227d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar13);
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar13);
      puVar3 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      puVar9 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      puVar13 = puVar11;
      func_0x00010bf95f80();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar13;
      func_0x00010c29c5c0();
      _objc_release(puVar13);
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((long)puVar10 < 1) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar10 = puVar11;
        func_0x00010bf95f80(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29c5c0();
        func_0x00010c0df780(puVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
      }
      puVar10 = PTR_PTR_1126d60d0;
      _objc_alloc(PTR_PTR_1126d60d0);
      puVar16 = puVar11;
      func_0x00010bf15520();
      if (puVar16 == (undefined *)0x1) {
        func_0x000107a80168();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar16 = (undefined *)0x0;
      }
      func_0x00010c051ec0(puVar10);
      _objc_release(puVar16);
      _objc_release(puVar13);
      _objc_release(puVar9);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar8);
      _objc_release(puVar11);
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010bffd260();
      _objc_release(puVar10);
    }
    else {
      puVar11 = PTR_PTR_1126d60d0;
      _objc_alloc();
      func_0x00010c051ec0();
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010bffd260();
    }
    _objc_release(puVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
      ___stack_chk_fail();
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010bffd260();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a6300c; end: 107a632c3; -[SCTopicViewerViewSnapsCollectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_107a6300c(undefined *param_1,undefined **param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x48);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010bf51e00();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107a632c4;
    puStack_68 = &UNK_11086b8d0;
    _objc_retain();
    param_2 = &puStack_80;
    uStack_60 = uVar2;
    puStack_58 = param_1;
    func_0x000100504554();
    _objc_release(uStack_60);
    _objc_release(uVar2);
    goto LAB_107a63250;
  }
  puVar11 = param_1;
  func_0x00010beb5da0();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar11 != 0) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107a6365c;
    puStack_90 = &UNK_110845ab0;
    param_2 = &puStack_a8;
    puStack_88 = param_1;
    func_0x000100504554();
    goto LAB_107a63250;
  }
  if (param_1[0x29] == '\x01') {
    if ((*(long *)(param_1 + 0x30) - 3U < 2) && ((param_1[0x58] & 1) != 0)) {
      func_0x000107a801c8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107a801b0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126d60e0;
    _objc_alloc();
    func_0x00010c02b4a0();
    puVar10 = puVar11;
LAB_107a631f0:
    _objc_release(puVar10);
  }
  else {
    if ((param_1[0x28] & 1) == 0) {
      func_0x000108f582ac();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      puVar3 = PTR_PTR_1126d60e0;
      _objc_alloc();
      func_0x00010c02b4a0();
      goto LAB_107a631f0;
    }
    puVar3 = PTR_PTR_1126d60e0;
    _objc_alloc();
    func_0x00010c02b4a0();
  }
  puVar10 = PTR_PTR_1126aea98;
  _objc_alloc();
  func_0x00010bffd260();
  puStack_50 = puVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar3);
LAB_107a63250:
  _os_unfair_lock_unlock(param_1 + 0x48);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(param_1 + 0x48);
    __Unwind_Resume();
    lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_2);
    ppuVar4 = param_2;
    func_0x00010c0840e0();
    ppuVar5 = *(undefined ***)(param_3 + 0x20);
    func_0x00010bf529e0();
    if (ppuVar4 < ppuVar5) {
      puVar10 = *(undefined **)(param_3 + 0x20);
      func_0x00010c0840e0(param_2);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0840e0(param_2);
      _objc_retain(puVar10);
      puVar11 = puVar10;
      func_0x00010c245680(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar11;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x000107d227d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar11);
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar11);
      puVar3 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      puVar8 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      puVar11 = puVar10;
      func_0x00010bf95f80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar11;
      func_0x00010c29c5c0();
      _objc_release(puVar11);
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((long)puVar9 < 1) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar9 = puVar10;
        func_0x00010bf95f80(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29c5c0();
        func_0x00010c0df780(puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
      }
      puVar9 = PTR_PTR_1126d60d0;
      _objc_alloc(PTR_PTR_1126d60d0);
      puVar12 = puVar10;
      func_0x00010bf15520();
      if (puVar12 == (undefined *)0x1) {
        func_0x000107a80168();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar12 = (undefined *)0x0;
      }
      func_0x00010c051ec0(puVar9);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar8);
      _objc_release(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar10);
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010bffd260();
      _objc_release(puVar9);
    }
    else {
      puVar10 = PTR_PTR_1126d60d0;
      _objc_alloc();
      func_0x00010c051ec0();
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010bffd260();
    }
    _objc_release(puVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar1) {
      ___stack_chk_fail();
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010bffd260();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a632c4; end: 107a6365b;  */

void FUN_107a632c4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0840e0();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    puVar9 = *(undefined **)(param_1 + 0x20);
    func_0x00010c0840e0(param_2);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_2);
    _objc_retain(puVar9);
    puVar10 = puVar9;
    func_0x00010c245680(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000107d227d0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar10);
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar10 = puVar9;
    func_0x00010bf95f80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar10;
    func_0x00010c29c5c0();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((long)puVar7 < 1) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar9;
      func_0x00010bf95f80(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29c5c0();
      func_0x00010c0df780(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    puVar7 = PTR_PTR_1126d60d0;
    _objc_alloc(PTR_PTR_1126d60d0);
    puVar11 = puVar9;
    func_0x00010bf15520();
    if (puVar11 == (undefined *)0x1) {
      func_0x000107a80168();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar11 = (undefined *)0x0;
    }
    func_0x00010c051ec0(puVar7);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_alloc(PTR_PTR_1126aea98);
    func_0x00010bffd260();
    _objc_release(puVar7);
  }
  else {
    puVar9 = PTR_PTR_1126d60d0;
    _objc_alloc();
    func_0x00010c051ec0();
    _objc_alloc(PTR_PTR_1126aea98);
    func_0x00010bffd260();
  }
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126aea98);
    func_0x00010bffd260();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a6365c; end: 107a63697;  */

void FUN_107a6365c(void)

{
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a63698; end: 107a6374f; -[SCTopicViewerViewSnapsCollectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_107a63698(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_a0,puVar1);
    ppuStack_98 = &PTR____CFConstantStringClassReference_110eaac38;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_107a6386c;
    puStack_b0 = &UNK_1109f7fe8;
    puVar4 = auStack_a0;
    _objc_copyWeak(auStack_a8,puVar4);
    ppuVar2 = &puStack_c8;
    _objc_retainBlock();
    ppuStack_90 = ppuVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_a8);
    puVar3 = auStack_a0;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_a0);
      __Unwind_Resume(puVar3);
      _objc_retain(puVar4);
      puVar3 = puVar3 + 0x20;
      _objc_loadWeakRetained(puVar3);
      func_0x00010bde4d40();
      _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a63750; end: 107a6386b; -[SCTopicViewerViewSnapsCollectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_107a63750(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eaac38;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107a6386c;
  puStack_60 = &UNK_1109f7fe8;
  puVar4 = auStack_50;
  _objc_copyWeak(auStack_58,puVar4);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar3 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar3);
  _objc_retain(puVar4);
  puVar3 = puVar3 + 0x20;
  _objc_loadWeakRetained(puVar3);
  func_0x00010bde4d40();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107a6386c; end: 107a638b3;  */

void FUN_107a6386c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a638b4; end: 107a6391f; -[SCTopicViewerViewSnapsCollectionDataProvider _configureCell:] */

void FUN_107a638b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c213f40(param_3,param_2,uVar2);
  if (*(long *)(param_1 + 0x30) - 3U < 2) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x58);
  }
  func_0x00010c1953c0(param_3,param_2,bVar1 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a63920; end: 107a63927; -[SCTopicViewerViewSnapsCollectionDataProvider numberOfSections] */

undefined8 FUN_107a63920(void)

{
  return 1;
}



/* Entry: 107a63928; end: 107a639cf; -[SCTopicViewerViewSnapsCollectionDataProvider numberOfItemsInSection:] */

long FUN_107a63928(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _os_unfair_lock_lock(param_1 + 0x48);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar3 = param_1;
    func_0x00010beb5da0();
    if ((uVar3 & 1) == 0) {
      if ((*(char *)(param_1 + 0x58) == '\x01') && (*(char *)(param_1 + 0x68) != '\x01')) {
        lVar1 = 0;
      }
      else {
        lVar1 = 1;
      }
    }
    else {
      lVar1 = 0xc;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x90);
    func_0x00010bf529e0(lVar2);
    lVar1 = 3;
    if (*(char *)(param_1 + 0x28) == '\0') {
      lVar1 = 0;
    }
    lVar1 = lVar1 + lVar2;
  }
  _os_unfair_lock_unlock(param_1 + 0x48);
  return lVar1;
}



/* Entry: 107a639d0; end: 107a639d7; -[SCTopicViewerViewSnapsCollectionDataProvider topic] */

undefined8 FUN_107a639d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107a639d8; end: 107a63a07; -[SCTopicViewerViewSnapsCollectionDataProvider setTopic:] */

void FUN_107a639d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a63a08; end: 107a63a0f; -[SCTopicViewerViewSnapsCollectionDataProvider sectionDataModel] */

undefined8 FUN_107a63a08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107a63a10; end: 107a63a17; -[SCTopicViewerViewSnapsCollectionDataProvider setSectionDataModel:] */

void FUN_107a63a10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107a63a18; end: 107a63a2f; -[SCTopicViewerViewSnapsCollectionDataProvider dataProviderDelegate] */

void FUN_107a63a18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a63a30; end: 107a63a3b; -[SCTopicViewerViewSnapsCollectionDataProvider setDataProviderDelegate:] */

void FUN_107a63a30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 107a63a3c; end: 107a63a43; -[SCTopicViewerViewSnapsCollectionDataProvider updateQueuePerformer] */

undefined8 FUN_107a63a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107a63a44; end: 107a63a73; -[SCTopicViewerViewSnapsCollectionDataProvider setUpdateQueuePerformer:] */

void FUN_107a63a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a63a74; end: 107a63aa3; -[SCTopicViewerViewSnapsCollectionDataProvider setTopicStories:] */

void FUN_107a63a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a63aa4; end: 107a63aab; -[SCTopicViewerViewSnapsCollectionDataProvider isPrimaryTopic] */

undefined1 FUN_107a63aa4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



/* Entry: 107a63aac; end: 107a63ab3; -[SCTopicViewerViewSnapsCollectionDataProvider isFetching] */

undefined1 FUN_107a63aac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x69);
}



/* Entry: 107a63ab4; end: 107a63abb; -[SCTopicViewerViewSnapsCollectionDataProvider setIsFetching:] */

void FUN_107a63ab4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x69) = param_3;
  return;
}



/* Entry: 107a63abc; end: 107a63ac3; -[SCTopicViewerViewSnapsCollectionDataProvider lastStreamToken] */

undefined8 FUN_107a63abc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107a63ac4; end: 107a63af3; -[SCTopicViewerViewSnapsCollectionDataProvider setLastStreamToken:] */

void FUN_107a63ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a63af4; end: 107a63afb; -[SCTopicViewerViewSnapsCollectionDataProvider hasMoreData] */

undefined1 FUN_107a63af4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 107a63afc; end: 107a63b03; -[SCTopicViewerViewSnapsCollectionDataProvider setHasMoreData:] */

void FUN_107a63afc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107a63b04; end: 107a63b0b; -[SCTopicViewerViewSnapsCollectionDataProvider requester] */

undefined8 FUN_107a63b04(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107a63b0c; end: 107a63b3b; -[SCTopicViewerViewSnapsCollectionDataProvider setRequester:] */

void FUN_107a63b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a63b3c; end: 107a63bf7; -[SCTopicViewerViewSnapsCollectionDataProvider .cxx_destruct] */

void FUN_107a63b3c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a63bf8; end: 107a641d3; -[SCTopicViewerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a63bf8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar28 = (long)_DAT_112768b98;
  puVar1 = (undefined *)(param_1 + lVar28);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010bfdedc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c08fa60();
  puVar3 = puVar2;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x00010bfda7c0();
    if (((ulong)puVar1 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    _objc_retain(puVar3);
    puVar2 = PTR_PTR_1126d6100;
    _objc_alloc_init();
    puVar4 = PTR_PTR_1126d6108;
    _objc_alloc();
    lVar30 = param_1 + _DAT_112768ba0;
    _objc_loadWeakRetained(lVar30);
    func_0x00010c019ec0();
    _objc_release(lVar30);
    _objc_initWeak(auStack_70,param_1);
    puVar1 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_78,auStack_70);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = param_1 + _DAT_112768ba4;
    _objc_loadWeakRetained();
    lVar5 = lVar30;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar30);
    FUN_107a6ef24();
    puVar6 = PTR_PTR_1126d6110;
    _objc_opt_new();
    puVar7 = PTR_PTR_1126d6118;
    _objc_alloc();
    lVar30 = param_1 + _DAT_112768ba8;
    _objc_loadWeakRetained();
    lVar8 = lVar30;
    func_0x00010c258d80();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = (long)_DAT_112768bac;
    lVar9 = param_1 + lVar29;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c275380();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    (**(code **)(lVar10 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = param_1 + lVar29;
    _objc_loadWeakRetained();
    lVar13 = lVar29;
    func_0x00010c2755a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + _DAT_112768bb0;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c275480();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010c247a00();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1 + lVar28;
    _objc_loadWeakRetained();
    func_0x00010c247a20();
    lVar22 = param_1 + _DAT_112768bb4;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010c275aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_PTR_1126c9168;
    _objc_alloc();
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010c01c5c0();
    lVar26 = param_1 + _DAT_112768bbc;
    _objc_loadWeakRetained();
    FUN_107a6eff4();
    func_0x00010c0543a0();
    _objc_release(lVar26);
    _objc_release(puVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(puVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar29);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar30);
    func_0x00010c18b5e0(puVar7);
    lVar30 = param_1 + _DAT_112768bc0;
    _objc_loadWeakRetained();
    func_0x00010c17fc80(puVar7);
    _objc_release(lVar30);
    func_0x00010c1c8b80(puVar7);
    lVar30 = (long)_DAT_112768bc4;
    _objc_retain(puVar7);
    uVar27 = *(undefined8 *)(param_1 + lVar30);
    *(undefined **)(param_1 + lVar30) = puVar7;
    _objc_release(uVar27);
    param_1 = param_1 + lVar28;
    _objc_loadWeakRetained(param_1);
    lVar28 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar28);
    _objc_release(param_1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(puVar3);
  return;
}



/* Entry: 107a641d4; end: 107a64213;  */

void FUN_107a641d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec4640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a64214; end: 107a64287; -[SCTopicViewerEntryPoint topicViewerViewControllerDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a64214(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112768b98;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74100(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a64288; end: 107a642f7; -[SCTopicViewerEntryPoint topicViewerViewControllerShouldDismissWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a64288(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112768b98;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a642f8; end: 107a643d3; -[SCTopicViewerEntryPoint topicViewerDidTapJoinChatWithConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a642f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b3530;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126b5c08;
  _objc_alloc(PTR_PTR_1126b5c08);
  func_0x00010c039140();
  _objc_release(param_3);
  param_1 = param_1 + _DAT_112768bc8;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c11a360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a643d4; end: 107a64443; -[SCTopicViewerEntryPoint didDismissChatWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a643d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112768bc8;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c11a360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c80();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a64444; end: 107a64583; -[SCTopicViewerEntryPoint _storiesTopicShareManagerImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a64444(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126d6120;
  _objc_alloc(PTR_PTR_1126d6120);
  lVar2 = param_1 + _DAT_112768bcc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112768bd0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112768bd4);
  lVar6 = param_1 + _DAT_112768bd8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_112768bdc;
  _objc_loadWeakRetained(lVar7);
  param_1 = param_1 + _DAT_112768bbc;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b5c0(puVar1,param_2,lVar3,lVar5,uVar9,lVar6,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
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



/* Entry: 107a64584; end: 107a6468b; -[SCTopicViewerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a64584(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112768ba0);
  _objc_storeStrong(param_1 + _DAT_112768b9c,0);
  _objc_storeStrong(param_1 + _DAT_112768bb8,0);
  _objc_storeStrong(param_1 + _DAT_112768bd4,0);
  _objc_destroyWeak(param_1 + _DAT_112768bd8);
  _objc_destroyWeak(param_1 + _DAT_112768bc0);
  _objc_destroyWeak(param_1 + _DAT_112768bc8);
  _objc_destroyWeak(param_1 + _DAT_112768ba4);
  _objc_destroyWeak(param_1 + _DAT_112768bbc);
  _objc_destroyWeak(param_1 + _DAT_112768bac);
  _objc_destroyWeak(param_1 + _DAT_112768bb0);
  _objc_destroyWeak(param_1 + _DAT_112768bb4);
  _objc_destroyWeak(param_1 + _DAT_112768ba8);
  _objc_destroyWeak(param_1 + _DAT_112768b98);
  _objc_destroyWeak(param_1 + _DAT_112768bcc);
  _objc_destroyWeak(param_1 + _DAT_112768bdc);
  _objc_destroyWeak(param_1 + _DAT_112768bd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768bc4,0);
  return;
}



/* Entry: 107a6468c; end: 107a64e73; -[SCTopicViewerLensEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6468c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar32 = (long)_DAT_112768be0;
  lVar1 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c094820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c095760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d6128;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112768be8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c023640();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126d6130;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112768bec;
  _objc_loadWeakRetained(lVar1);
  lVar7 = param_1 + _DAT_112768bf0;
  _objc_loadWeakRetained(lVar7);
  lVar33 = param_1 + _DAT_112768bf4;
  _objc_loadWeakRetained(lVar33);
  lVar8 = param_1 + _DAT_112768bf8;
  _objc_loadWeakRetained(lVar8);
  lVar9 = param_1 + _DAT_112768bfc;
  _objc_loadWeakRetained(lVar9);
  lVar10 = param_1 + _DAT_112768c00;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0937c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024a80();
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar33);
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_80,param_1);
    puVar13 = PTR_PTR_1126ae720;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107a64e74;
    puStack_90 = &UNK_110932618;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126d6138;
    _objc_alloc();
    lVar9 = lVar2;
    func_0x00010c094540(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010bfe5b40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + lVar32;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c247a20();
    lVar7 = param_1 + _DAT_112768c04;
    _objc_loadWeakRetained(lVar7);
    lVar33 = param_1 + _DAT_112768c08;
    _objc_loadWeakRetained(lVar33);
    lVar8 = param_1 + _DAT_112768c44;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c024580();
    _objc_release(lVar8);
    _objc_release(lVar33);
    _objc_release(lVar7);
    _objc_release(lVar1);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    puVar15 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_b0,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126d6118;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112768c0c;
    _objc_loadWeakRetained();
    lVar17 = lVar1;
    func_0x00010c258d80();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = (long)_DAT_112768c10;
    lVar7 = param_1 + lVar33;
    _objc_loadWeakRetained();
    lVar18 = lVar7;
    func_0x00010c275380();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    (**(code **)(lVar18 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = param_1 + lVar33;
    _objc_loadWeakRetained();
    lVar21 = lVar33;
    func_0x00010c2755a0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112768c14;
    _objc_loadWeakRetained();
    lVar24 = lVar8;
    func_0x00010c275480();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar24;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + lVar32;
    _objc_loadWeakRetained();
    lVar26 = lVar9;
    func_0x00010c247a00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + lVar32;
    _objc_loadWeakRetained();
    func_0x00010c247a20();
    lVar11 = param_1 + _DAT_112768c18;
    _objc_loadWeakRetained();
    lVar27 = lVar11;
    func_0x00010c275aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar27;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = PTR_PTR_1126c9168;
    _objc_alloc();
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010c01c5c0();
    lVar12 = param_1 + _DAT_112768c20;
    _objc_loadWeakRetained();
    lVar30 = param_1 + _DAT_112768c24;
    _objc_loadWeakRetained();
    lVar31 = lVar30;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_107a6eff4();
    func_0x00010c0543a0();
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar12);
    _objc_release(puVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar26);
    _objc_release(lVar9);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar8);
    _objc_release(puVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar33);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar7);
    _objc_release(lVar17);
    _objc_release(lVar1);
    func_0x00010c18b5e0(puVar16);
    func_0x00010c1c8b80(puVar16);
    param_1 = param_1 + lVar32;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_destroyWeak(auStack_b0);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 107a64e74; end: 107a64ef3;  */

void FUN_107a64e74(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be610c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a64ef4; end: 107a64f67; -[SCTopicViewerLensEntryPoint topicViewerViewControllerDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a64ef4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112768be0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf740a0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a64f68; end: 107a64fd7; -[SCTopicViewerLensEntryPoint topicViewerViewControllerShouldDismissWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a64f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112768be0;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a64fd8; end: 107a65047; -[SCTopicViewerLensEntryPoint _modularCameraPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a64fd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5f28;
  _objc_alloc(PTR_PTR_1126b5f28);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112768c28);
  param_1 = param_1 + _DAT_112768c2c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c025fa0(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a65048; end: 107a65187; -[SCTopicViewerLensEntryPoint _storiesTopicShareManagerImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a65048(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126d6120;
  _objc_alloc(PTR_PTR_1126d6120);
  lVar2 = param_1 + _DAT_112768c30;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112768c34;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112768c38);
  lVar6 = param_1 + _DAT_112768c3c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_112768c40;
  _objc_loadWeakRetained(lVar7);
  param_1 = param_1 + _DAT_112768c20;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b5c0(puVar1,param_2,lVar3,lVar5,uVar9,lVar6,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
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



/* Entry: 107a65188; end: 107a652ef; -[SCTopicViewerLensEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a65188(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768c38,0);
  _objc_destroyWeak(param_1 + _DAT_112768c3c);
  _objc_storeStrong(param_1 + _DAT_112768c1c,0);
  _objc_destroyWeak(param_1 + _DAT_112768be8);
  _objc_storeStrong(param_1 + _DAT_112768be4,0);
  _objc_destroyWeak(param_1 + _DAT_112768c2c);
  _objc_storeStrong(param_1 + _DAT_112768c28,0);
  _objc_destroyWeak(param_1 + _DAT_112768c44);
  _objc_destroyWeak(param_1 + _DAT_112768c08);
  _objc_destroyWeak(param_1 + _DAT_112768c20);
  _objc_destroyWeak(param_1 + _DAT_112768c24);
  _objc_destroyWeak(param_1 + _DAT_112768c04);
  _objc_destroyWeak(param_1 + _DAT_112768c00);
  _objc_destroyWeak(param_1 + _DAT_112768bfc);
  _objc_destroyWeak(param_1 + _DAT_112768bf8);
  _objc_destroyWeak(param_1 + _DAT_112768bf4);
  _objc_destroyWeak(param_1 + _DAT_112768bf0);
  _objc_destroyWeak(param_1 + _DAT_112768bec);
  _objc_destroyWeak(param_1 + _DAT_112768c10);
  _objc_destroyWeak(param_1 + _DAT_112768c14);
  _objc_destroyWeak(param_1 + _DAT_112768c18);
  _objc_destroyWeak(param_1 + _DAT_112768c0c);
  _objc_destroyWeak(param_1 + _DAT_112768be0);
  _objc_destroyWeak(param_1 + _DAT_112768c30);
  _objc_destroyWeak(param_1 + _DAT_112768c40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112768c34);
  return;
}



/* Entry: 107a652f0; end: 107a6608b; -[SCTopicViewerMusicEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a652f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
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
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined *puVar32;
  long lVar33;
  undefined *puVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
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
  lVar35 = (long)_DAT_112768c48;
  lVar1 = param_1 + lVar35;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d2fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = lVar2;
  func_0x00010c278260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277e80();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    lVar1 = lVar2;
    func_0x00010c278260();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c0795c0();
    lVar6 = lVar2;
    func_0x00010c128040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar39 = (long)_DAT_112768c4c;
    lVar1 = param_1 + lVar39;
    _objc_loadWeakRetained();
    lVar7 = lVar1;
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2474a0();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar1);
    lVar1 = param_1 + lVar39;
    _objc_loadWeakRetained();
    lVar7 = lVar1;
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247480();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar1);
    lVar1 = param_1 + lVar39;
    _objc_loadWeakRetained();
    lVar7 = lVar1;
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c275440();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar1);
    lVar1 = param_1 + lVar39;
    _objc_loadWeakRetained();
    lVar7 = lVar1;
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22c6e0();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar1);
    _objc_initWeak(auStack_98,param_1);
    puVar9 = PTR_PTR_1126d6140;
    _objc_alloc();
    lVar1 = param_1 + lVar35;
    _objc_loadWeakRetained();
    func_0x00010c07b2c0();
    lVar7 = param_1 + lVar35;
    _objc_loadWeakRetained();
    lVar10 = lVar7;
    func_0x00010c247a00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112768c50;
    _objc_loadWeakRetained();
    lVar11 = lVar8;
    func_0x00010c28f660();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = param_1 + lVar39;
    _objc_loadWeakRetained();
    lVar36 = (long)_DAT_112768c54;
    lVar12 = param_1 + lVar36;
    _objc_loadWeakRetained();
    lVar13 = param_1 + _DAT_112768c58;
    _objc_loadWeakRetained();
    lVar37 = (long)_DAT_112768c5c;
    lVar14 = param_1 + lVar37;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c275960();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = param_1 + lVar37;
    _objc_loadWeakRetained();
    lVar16 = lVar37;
    func_0x00010c275900();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1 + _DAT_112768c60;
    _objc_loadWeakRetained();
    lVar18 = param_1 + _DAT_112768c6c;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c26c760();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_112768c70;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010bf501a0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + _DAT_112768c78;
    _objc_loadWeakRetained();
    lVar23 = param_1 + _DAT_112768c7c;
    _objc_loadWeakRetained();
    func_0x00010c02ce20();
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar37);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar38);
    _objc_release(lVar11);
    _objc_release(lVar8);
    _objc_release(lVar10);
    _objc_release(lVar7);
    _objc_release(lVar1);
    puVar24 = PTR_PTR_1126ae720;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107a6608c;
    puStack_a8 = &UNK_1109f8018;
    _objc_copyWeak(auStack_a0,auStack_98);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar6 == 0) {
      lVar1 = lVar2;
      func_0x00010c278260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c277e80();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puStack_1e0 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_1e8 = PTR_PTR_1126d6148;
      _objc_alloc();
      puVar34 = (undefined *)(param_1 + lVar39);
      _objc_loadWeakRetained(puVar34);
      puVar25 = (undefined *)(param_1 + lVar35);
      _objc_loadWeakRetained(puVar25);
      puVar26 = puVar25;
      func_0x00010c247bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02cfe0();
      _objc_release(puVar26);
    }
    else {
      lVar1 = lVar2;
      func_0x00010c128040();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c277e80();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puStack_1e0 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_90 = puVar4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar34 = (undefined *)(param_1 + _DAT_112768c80);
      _objc_loadWeakRetained();
      puVar25 = puVar34;
      func_0x00010c275480();
      _objc_retainAutoreleasedReturnValue();
      puStack_1e8 = puVar25;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar25);
    _objc_release(puVar34);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_c8,auStack_98);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + lVar36;
    _objc_loadWeakRetained();
    lVar7 = lVar1;
    func_0x00010bf5d440();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar1);
    puVar34 = puVar9;
    _objc_opt_respondsToSelector(puVar9,PTR_s_customActionHandler_1125b5df8);
    if (((ulong)puVar34 & 1) == 0) {
      puVar34 = (undefined *)0x0;
    }
    else {
      puVar34 = puVar9;
      func_0x00010bf61140();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar23 = lVar8;
    func_0x00010c275860();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_PTR_1126d6118;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112768c84;
    _objc_loadWeakRetained();
    lVar6 = lVar1;
    func_0x00010c258d80();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = (long)_DAT_112768c88;
    lVar7 = param_1 + lVar38;
    _objc_loadWeakRetained();
    lVar10 = lVar7;
    func_0x00010c275380();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    (**(code **)(lVar10 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = param_1 + lVar38;
    _objc_loadWeakRetained();
    lVar16 = lVar38;
    func_0x00010c2755a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar24;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_112768c80;
    _objc_loadWeakRetained();
    lVar21 = lVar12;
    func_0x00010c275480();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = lVar21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + lVar36;
    _objc_loadWeakRetained();
    lVar27 = lVar13;
    func_0x00010bf2a320();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar27;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + lVar35;
    _objc_loadWeakRetained();
    lVar29 = lVar14;
    func_0x00010c247a00();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = param_1 + lVar35;
    _objc_loadWeakRetained();
    func_0x00010c247a20();
    lVar17 = param_1 + _DAT_112768c8c;
    _objc_loadWeakRetained();
    lVar30 = lVar17;
    func_0x00010c275aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = lVar30;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + lVar35;
    _objc_loadWeakRetained();
    func_0x00010c07b2c0();
    puVar32 = PTR_PTR_1126c9168;
    _objc_alloc();
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010c01c5c0();
    lVar20 = param_1 + lVar36;
    _objc_loadWeakRetained();
    lVar33 = lVar20;
    func_0x00010c2472e0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + _DAT_112768c90;
    _objc_loadWeakRetained();
    func_0x00010c0543a0(puVar25);
    _objc_release(lVar22);
    _objc_release(lVar33);
    _objc_release(lVar20);
    _objc_release(puVar32);
    _objc_release(lVar18);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar17);
    _objc_release(lVar37);
    _objc_release(lVar29);
    _objc_release(lVar14);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar13);
    _objc_release(lVar39);
    _objc_release(lVar21);
    _objc_release(lVar12);
    _objc_release(puVar26);
    _objc_release(lVar19);
    _objc_release(lVar16);
    _objc_release(lVar38);
    _objc_release(lVar15);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar1);
    func_0x00010c18b5e0(puVar25);
    func_0x00010c1c8b80(puVar25);
    lVar36 = param_1 + lVar36;
    _objc_loadWeakRetained();
    lVar7 = lVar36;
    func_0x00010bfdefc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7640(puVar25);
    _objc_release(lVar1);
    _objc_release(lVar7);
    _objc_release(lVar36);
    lVar35 = param_1 + lVar35;
    _objc_loadWeakRetained(lVar35);
    lVar1 = lVar35;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar1);
    _objc_release(lVar35);
    lVar1 = param_1 + _DAT_112768c94;
    _objc_loadWeakRetained();
    lVar35 = lVar1;
    func_0x00010c24b780();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar35;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49940();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar35);
    _objc_release(lVar1);
    func_0x00010beeb4c0(param_1);
    _objc_release(puVar25);
    _objc_release(lVar23);
    _objc_release(puVar34);
    _objc_release(lVar8);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_c8);
    _objc_release(puStack_1e8);
    _objc_release(puStack_1e0);
    _objc_release(puVar24);
    _objc_destroyWeak(auStack_a0);
    _objc_release(puVar9);
    _objc_destroyWeak(auStack_98);
    _objc_release(lVar5);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(lVar2);
  lVar2 = lVar2 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar1 = lVar2;
  func_0x00010bec4640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a6608c; end: 107a660cb;  */

void FUN_107a6608c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec4640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a660cc; end: 107a66187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a660cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_112768c4c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2474e0();
    func_0x00010c0df6e0(puVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
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



/* Entry: 107a66188; end: 107a6622b; -[SCTopicViewerMusicEntryPoint _wireDeferredSpotlightNavigationCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a66188(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112768c54;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf2a320();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010010fab4(lVar2,PTR_DAT_1126a59b8);
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
  if (lVar1 != 0) {
    func_0x00010c1766c0(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a6622c; end: 107a663cf; -[SCTopicViewerMusicEntryPoint topicViewerCameraFlowDidComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6622c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + _DAT_112768c94;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c24b780();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bf49940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf3d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + _DAT_112768c48;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar3);
    _objc_retain(lVar1);
    func_0x00010bf6f440(lVar2);
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  return;
}



/* Entry: 107a663d0; end: 107a664a3;  */

void FUN_107a663d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010c2759a0(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf3d0a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c26d760(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c6de0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c24b0a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a360(uVar1,param_2,0xcb,uVar3,uVar4,uVar5,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107a664a4; end: 107a6655f; -[SCTopicViewerMusicEntryPoint topicViewerDidTapAddToTopic] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a664a4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112768c48;
  uVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_didSelectTrackForTopicViewerMusi_1125bc648);
  if ((uVar1 & 1) != 0) {
    lVar3 = param_1 + lVar5;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7b280(lVar4);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a66560; end: 107a665d3; -[SCTopicViewerMusicEntryPoint topicViewerViewControllerDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a66560(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112768c48;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf740c0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


