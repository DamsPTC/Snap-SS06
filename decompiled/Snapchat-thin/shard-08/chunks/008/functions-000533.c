/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066108b8; end: 10661090f;  */

bool FUN_1066108b8(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c105980();
  if (lVar2 == -1) {
    bVar1 = false;
  }
  else {
    lVar2 = param_2;
    func_0x00010c105980(param_2);
    bVar1 = lVar2 != 1;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106610910; end: 1066109df;  */

void FUN_106610910(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1066109e0;
  puStack_68 = &UNK_11092f900;
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_60 = uVar1;
  _objc_retain(param_2);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = *(undefined1 *)(param_1 + 0x40);
  uStack_58 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 1066109e0; end: 106610c2f;  */

void FUN_1066109e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c259c00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c25a380();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar11 = *(undefined8 *)(lVar1 + 0x98);
    uVar12 = *(undefined8 *)(lVar1 + 0x78);
    lVar6 = lVar1;
    func_0x00010be1e880(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    FUN_1066151ec(uVar2,uVar5,uVar9,uVar11,uVar12,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bf529e0();
    uVar11 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bf24ec0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c259c00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar12;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25a380();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(lVar1 + 0x98);
    uVar10 = *(undefined8 *)(lVar1 + 0x78);
    lVar6 = lVar1;
    func_0x00010be1e880(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106610c30;
    puStack_70 = &UNK_11092f8d0;
    uVar9 = uVar7;
    lStack_68 = lVar1;
    func_0x0001066155c8(uVar7,uVar11,uVar3,uVar4,uVar5,uVar8,uVar10,lVar6,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar12);
    _objc_release(uVar11);
    func_0x00010bdf5a40(lVar1);
    _objc_release(uVar9);
    _objc_release(uVar7);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106610c30; end: 106610cd3;  */

void FUN_106610c30(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126cc248;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  FUN_10661f4d8(uVar1,param_3,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106610cd4; end: 106610f6b; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _createViewModelsWithPostingSnapCount:failedSnapCount:snapProSnapDataModels:hasUnviewedSnaps:hasStoryCard:] */

void FUN_106610cd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bd86870(param_5,0,&PTR___NSConcreteGlobalBlock_11092f980);
  lVar2 = param_1;
  func_0x00010be34820(param_1);
  uVar3 = param_3;
  func_0x00010660f260(param_3,param_4,lVar2,*(undefined8 *)(param_1 + 0xc0),param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bfec080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdcc40(uVar3);
  func_0x00010bfddec0(uVar3);
  func_0x00010becf0c0(param_1);
  _objc_release(uVar8);
  puVar4 = PTR_PTR_1126c2fa8;
  func_0x00010bf33ec0();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = uVar1;
  func_0x00010c282760(uVar1);
  uVar9 = *(undefined8 *)(param_1 + 0xc0);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf25020(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c291840();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c074e40();
  FUN_10661c644(uVar10,param_3,param_4,param_6 & 0xffffffff,uVar5 & 0xffffffff,lVar2,uVar9,uVar7,
                puVar4 != (undefined *)0x0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar6);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106610fe4;
  puStack_88 = &UNK_11092f9a0;
  uVar5 = param_5;
  lStack_80 = param_1;
  func_0x00010bd86420(param_5,&puStack_a0);
  _objc_initWeak(auStack_a8,param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x108);
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(uVar10);
  _objc_retain(uVar5);
  func_0x00010c0f7fc0(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 106610f6c; end: 106610fe3;  */

void FUN_106610f6c(undefined8 param_1,ulong param_2,undefined *param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010c07d320();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((param_2 & 1) == 0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    func_0x00010c067ec0(param_3);
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106610fe4; end: 10661110f;  */

void FUN_106610fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8);
  _objc_retain(param_2);
  uVar2 = param_2;
  FUN_10660f178(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar7);
  _objc_release(uVar2);
  lVar6 = *(long *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(lVar6 + 0x48);
  uVar1 = *(undefined1 *)(lVar6 + 0x70);
  uVar3 = *(undefined8 *)(lVar6 + 0x30);
  func_0x00010bf25000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfe4500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010bf25000(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_10661cde8(param_2,uVar8,uVar1,param_3,uVar2,uVar7,0,
                &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106611110; end: 106611143;  */

void FUN_106611110(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106611144; end: 106611187; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _hasStory:] */

bool FUN_106611144(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c258f40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0de640();
  _objc_release(uVar1);
  return (int)uVar2 != 0;
}



/* Entry: 106611188; end: 1066112cf; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _updateViewModelsIfNeededWithStoriesCellViewModel:storyListViewCellViewModels:] */

void FUN_106611188(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(ulong *)(param_1 + 0x60);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
LAB_106611210:
    uVar3 = *(ulong *)(param_1 + 0x68);
    _objc_retain(uVar3);
    _objc_retain(param_4);
    if (uVar3 != param_4) {
      if (param_4 == 0) goto LAB_106611258;
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_4);
      _objc_release(param_4);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_1066112b0;
      goto LAB_106611260;
    }
    _objc_release(param_4);
  }
  else {
    if (param_3 == 0) {
LAB_106611258:
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((int)uVar1 != 0) goto LAB_106611210;
    }
LAB_106611260:
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x60) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = param_4;
    _objc_release(uVar2);
    uVar3 = param_1 + 0x100;
    _objc_loadWeakRetained(uVar3);
    func_0x00010c258bc0();
  }
  _objc_release(uVar3);
LAB_1066112b0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066112d0; end: 1066112d3; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider setSectionDataModel:] */

void FUN_1066112d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee3bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModelsIfNeeded_1125968a0);
  return;
}



/* Entry: 1066112d4; end: 1066112fb; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider storiesCellViewModel] */

void FUN_1066112d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066112fc; end: 106611323; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider storyListViewCellViewModels] */

void FUN_1066112fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106611324; end: 1066113c3; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider configurationBlockForStoriesCell] */

void FUN_106611324(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
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
  pcStack_50 = FUN_1066113c4;
  puStack_48 = &UNK_110845ae0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066113c4; end: 10661140b;  */

void FUN_1066113c4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5b60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10661140c; end: 1066114ab; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider configurationBlockForStoriesListViewCell] */

void FUN_10661140c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
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
  pcStack_50 = FUN_1066114ac;
  puStack_48 = &UNK_110845ae0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066114ac; end: 1066114f3;  */

void FUN_1066114ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5b80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066114f4; end: 106611543; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _getDeletedSnapProSnaps] */

void FUN_1066114f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaa2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106611544; end: 10661154b; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider viewMoreExpansionThreshold] */

undefined8 FUN_106611544(void)

{
  return 3;
}



/* Entry: 10661154c; end: 106611553; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider viewMoreExpansionIncrementThreshold] */

undefined8 FUN_10661154c(void)

{
  return 10;
}



/* Entry: 106611554; end: 10661155f; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider storiesCellClass] */

void FUN_106611554(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126cc230);
  return;
}



/* Entry: 106611560; end: 1066115cf; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _configureStoriesCollectionViewCell:] */

void FUN_106611560(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cc230;
  _objc_opt_class(PTR_PTR_1126cc230);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066115d0; end: 10661163f; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _configureStoriesListViewCell:] */

void FUN_1066115d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cc250;
  _objc_opt_class(PTR_PTR_1126cc250);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106611640; end: 106611727; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider setActionHandler:] */

void FUN_106611640(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_DAT_1126a5538;
  lVar5 = *(long *)(param_1 + 0x110);
  if (lVar5 != param_3) {
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x00010010fab4(lVar5,puVar1);
    lVar3 = lVar5;
    if ((int)lVar2 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(lVar5);
    func_0x00010c12cf80(lVar3);
    _objc_release(lVar3);
    puVar1 = PTR_DAT_1126a5538;
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010010fab4(param_3,puVar1);
    lVar5 = param_3;
    if ((int)lVar3 == 0) {
      lVar5 = 0;
    }
    _objc_retain(lVar5);
    _objc_release(param_3);
    func_0x00010bef9980(lVar5);
    _objc_release(lVar5);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x110);
    *(long *)(param_1 + 0x110) = param_3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106611728; end: 1066117ef; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _queueProfileManagerUpdate] */

void FUN_106611728(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_2);
  func_0x000108f499a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1066117f0;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000100c749e0(param_1,"APPSTORE",&puStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1066117f0; end: 10661186b;  */

void FUN_1066117f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b7dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbf00();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10661186c; end: 1066118fb; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider didUpdateMyStoriesDataRequest:] */

void FUN_10661186c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
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
  pcStack_28 = FUN_1066118fc;
  puStack_20 = &UNK_1108dc338;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1066119b0;
  puStack_48 = &UNK_1108dc368;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0be260(param_3,param_2,0,0,0,&puStack_38,&puStack_60,0,0,0,0,0);
  return;
}



/* Entry: 1066118fc; end: 1066119af;  */

void FUN_1066118fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  int iVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 != 0) && (param_5 == 2)) {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    lVar1 = param_4;
    func_0x00010bf25140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if (iVar2 != 0) {
      func_0x00010be85860(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066119b0; end: 106611a13;  */

void FUN_1066119b0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  if (param_3 == 1) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x78);
    func_0x000108f48298();
    if ((uVar1 & 1) == 0) {
      func_0x00010be85860(*(undefined8 *)(param_1 + 0x20));
      goto LAB_106611a00;
    }
  }
  func_0x00010bee3be0(*(undefined8 *)(param_1 + 0x20));
LAB_106611a00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106611a14; end: 106611a83; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_106611a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ebaab8);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e61058);
    if ((int)uVar1 != 0) {
      func_0x00010be8cd60(param_1);
    }
  }
  else {
    func_0x00010bee3be0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106611a84; end: 106611a8b; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider storyType] */

undefined8 FUN_106611a84(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 106611a8c; end: 106611a93; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider storyId] */

undefined8 FUN_106611a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 106611a94; end: 106611aab; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider dataProviderDelegate] */

void FUN_106611a94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106611aac; end: 106611ab7; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider setDataProviderDelegate:] */

void FUN_106611aac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x100,param_3);
  return;
}



/* Entry: 106611ab8; end: 106611abf; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider updateQueuePerformer] */

undefined8 FUN_106611ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 106611ac0; end: 106611aef; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider setUpdateQueuePerformer:] */

void FUN_106611ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106611af0; end: 106611af7; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider actionHandler] */

undefined8 FUN_106611af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 106611af8; end: 106611c7b; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider .cxx_destruct] */

void FUN_106611af8(long param_1)

{
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_destroyWeak(param_1 + 0x100);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 106611c7c; end: 106612333; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider initWithProfileId:userSession:myStoriesDataCoordinator:profileTooltipsService:imageDownloader:storiesSnapReadReceiptService:circumstanceEngine:storyDraftingDataCoordinator:storyCardFetcher:discoverFeedDataFetcher:nativeStoryClientModelGenerator:creatorInfoProvider:plusFeatureGating:] */

undefined8 *
FUN_106611c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126f2168;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar8 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar8);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    puVar1[0x23] = 4;
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    uVar2 = puVar1[4];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar2);
    uVar8 = puVar1[4];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bfcacc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_retain(param_11);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c242980();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106612334;
    puStack_a0 = &UNK_110842c58;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar9 = uVar8;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[0xb];
    puVar1[0xb] = uVar9;
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar2);
    uVar2 = puVar1[10];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c266600();
    _objc_release(uVar2);
    func_0x00010bee3be0(puVar1);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar4;
    _objc_release(uVar2);
    puVar5 = puVar1 + 2;
    _objc_loadWeakRetained(puVar5);
    puVar6 = puVar5;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0b7ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x106612360;
    puStack_c8 = &UNK_110852b30;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010bfd3240(puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c157a20();
    *(char *)(puVar1 + 0xf) = (char)uVar8;
    _objc_release(uVar2);
    uVar9 = puVar1[0x20];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar9;
    func_0x00010c260900();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar8 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[0x22];
    puVar1[0x22] = uVar8;
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 106612334; end: 1066123d3;  */

void FUN_106612334(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066123d4; end: 10661243b; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider dealloc] */

void FUN_1066123d4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x110));
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x58));
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0xc0));
  puStack_28 = PTR_PTR_1126f2168;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10661243c; end: 1066128db; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _setHandler:] */

void FUN_10661243c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(param_1 + 0x30)) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x38));
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x40));
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0xc0));
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = param_3;
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe44e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(long *)(param_1 + 0x98) = lVar3;
    _objc_release(uVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0de640();
    *(bool *)(param_1 + 0xe8) = 0 < (int)lVar3;
    _objc_release(lVar2);
    *(undefined1 *)(param_1 + 0x79) = 1;
    func_0x00010bee3be0(param_1);
    _objc_initWeak(auStack_80,param_1);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1066128dc;
    puStack_90 = &UNK_110852b30;
    _objc_copyWeak(auStack_88,auStack_80);
    lVar2 = param_3;
    func_0x00010befa2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar2;
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010c259c00();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar6;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x106612944;
    puStack_b8 = &UNK_110852b00;
    _objc_copyWeak(auStack_b0,auStack_80);
    lVar3 = lVar2;
    func_0x00010befa2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar3;
    _objc_release(uVar1);
    _objc_release(lVar2);
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0e60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar6;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_106612980;
    puStack_e0 = &UNK_11092f7d0;
    _objc_copyWeak(auStack_d8,auStack_80);
    uVar5 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0e60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar6;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_106612a34;
    puStack_108 = &UNK_11092f800;
    _objc_copyWeak(auStack_100,auStack_80);
    uVar5 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)(param_1 + 0xe0);
    puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0e60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_128,auStack_80);
    uVar5 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1066128dc; end: 10661297f;  */

void FUN_1066128dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_2;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x79) = 1;
    func_0x00010bee3be0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106612980; end: 106612a33;  */

void FUN_106612980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf24f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf24ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf4b900();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar1 = param_2;
      func_0x00010c09dc40();
      *(undefined8 *)(param_1 + 200) = uVar1;
    }
    func_0x00010bee3be0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106612a34; end: 106612ae3;  */

void FUN_106612a34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = param_2;
    _objc_release(uVar1);
    func_0x00010bee3be0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106612ae4; end: 106612b8f; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _transitionPublicStorySnapStateAndLogIfAbleForDataModel:] */

void FUN_106612ae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23f800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  FUN_106614dd0(uVar3,uVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xf0));
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106612b90; end: 106612bcb; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _transitionPublicStorySnapStateAndLogIfAbleForState:hasStory:hasUnviewed:] */

void FUN_106612b90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  FUN_106614e98(uVar1,*(undefined8 *)(param_1 + 0xf8));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106612bcc; end: 106612c87; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _parseRawStoryCardIntoSCDiscoverFeedStory] */

void FUN_106612bcc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c259c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2592e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_1066159e8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    func_0x000108f34fe8(*(undefined8 *)(param_1 + 0xd8),
                        &PTR____CFConstantStringClassReference_110e56e98,0,1);
  }
  else {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xb8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106612c88; end: 106612ce3; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _removePendingSnaps] */

void FUN_106612c88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf24ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12afa0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106612ce4; end: 106612d27; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _updateViewModelsIfNeeded] */

void FUN_106612ce4(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(char *)(param_1 + 0x79) == '\x01') {
      *(undefined1 *)(param_1 + 0x79) = 0;
      func_0x00010be70440(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bee3a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModelsAfterHigherMedi_112596840)
    ;
    return;
  }
  return;
}



/* Entry: 106612d28; end: 106612dcf; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _updateViewModelsAfterHigherMediaQualityCheck] */

void FUN_106612d28(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106612dd0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106612dd0; end: 106612edb;  */

void FUN_106612dd0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    func_0x00010c258f40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___dispatch_main_q_11034be20;
    _objc_retain(PTR___dispatch_main_q_11034be20);
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106612edc;
    puStack_50 = &UNK_110849200;
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    FUN_10660cb70(uVar3,puVar1,uVar4,&puStack_68);
    _objc_release(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106612edc; end: 106612f17;  */

void FUN_106612edc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee3c00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106612f18; end: 106613127; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _updateViewModelsIfNeededWithHasUnviewedSnaps:] */

void FUN_106612f18(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c259c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25a380();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar5 = param_1;
  func_0x00010be1e880();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf51e00();
  _objc_release(lVar5);
  lVar5 = *(long *)(param_1 + 0x70) + 1;
  *(long *)(param_1 + 0x70) = lVar5;
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf24ec0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf8d2c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_106614f7c();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_70 = param_3;
  _objc_retain(uVar4);
  _objc_retain(lVar6);
  lStack_78 = lVar5;
  func_0x00010c11d940(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(lVar6);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar6);
  _objc_release(uVar4);
  return;
}



/* Entry: 106613128; end: 106613183;  */

void FUN_106613128(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ea20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106613184; end: 1066133af; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _handleQueriedPendingSnap:hasUnviewedSnaps:manifestSnapshot:deletedSnapSnapshot:generation:] */

void FUN_106613184(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  FUN_1066150d8();
  uVar2 = *(ulong *)(param_1 + 0x80);
  func_0x000108f4853c();
  if ((uVar2 & 1) == 0) {
    lVar5 = param_3;
    func_0x00010bf529e0();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
  _objc_initWeak(auStack_68,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c242980();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_68);
  uStack_88 = param_7;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_6);
  lStack_80 = lVar5 - lVar1;
  lStack_78 = lVar1;
  uStack_70 = param_4;
  func_0x00010c25ff60(uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1066133b0; end: 106613407;  */

bool FUN_1066133b0(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c105980();
  if (lVar2 == -1) {
    bVar1 = false;
  }
  else {
    lVar2 = param_2;
    func_0x00010c105980(param_2);
    bVar1 = lVar2 != 1;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106613408; end: 10661350f;  */

void FUN_106613408(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106613510;
  puStack_80 = &UNK_11092fa60;
  _objc_copyWeak(auStack_58,param_1 + 0x38);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = *(undefined1 *)(param_1 + 0x58);
  uStack_68 = uVar1;
  _objc_retain(param_2);
  uStack_60 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_98);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106613510; end: 106613757;  */

void FUN_106613510(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x48) == *(long *)(lVar1 + 0x70))) {
    lVar2 = *(long *)(lVar1 + 0x30);
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_1066151ec();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf529e0();
    *(bool *)(lVar1 + 0xe8) = lVar2 != 0;
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010660f260(uVar4,*(undefined8 *)(param_1 + 0x58),lVar2 != 0,
                        *(undefined1 *)(param_1 + 0x60),*(long *)(lVar1 + 200) != 0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfec080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdcc40(uVar4);
    func_0x00010bfddec0(uVar4);
    func_0x00010becf0c0(lVar1);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bf24ec0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106613758;
    puStack_60 = &UNK_11092f8d0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    lVar2 = lVar3;
    lStack_58 = lVar1;
    func_0x0001066155c8(lVar3,uVar5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar1 + 0xa0),
                        *(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(param_1 + 0x30),&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    lVar6 = lVar2;
    func_0x0001006372a4(lVar2,&PTR___NSConcreteGlobalBlock_11092fa40);
    lVar7 = lVar6;
    func_0x00010bf529e0();
    _objc_release(lVar6);
    if (lVar7 == 0) {
      uVar8 = *(undefined8 *)(lVar1 + 0x30);
      func_0x00010c259c00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010c076be0();
      if ((int)uVar5 == 0) {
        bVar10 = false;
      }
      else {
        uVar9 = *(undefined8 *)(lVar1 + 0x30);
        func_0x00010c258f40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar9;
        func_0x00010c0de640();
        bVar10 = 0 < (int)uVar5;
        _objc_release(uVar9);
      }
      _objc_release(uVar8);
    }
    else {
      bVar10 = true;
    }
    *(bool *)(lVar1 + 0xe8) = bVar10;
    func_0x00010bdf5a40(lVar1);
    _objc_release(lVar2);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106613758; end: 1066137fb;  */

void FUN_106613758(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126cc248;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  FUN_10661f4d8(uVar1,param_3,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066137fc; end: 106613817;  */

uint FUN_1066137fc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c079ce0(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 106613818; end: 106613d27; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _createViewModelsWithPostingSnapCount:failedSnapCount:snapProSnapDataModels:hasUnviewedSnaps:hasStoryCard:] */

void FUN_106613818(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined4 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  
  _objc_retain(param_5);
  puVar2 = param_5;
  func_0x00010bd86870(param_5,0,&PTR___NSConcreteGlobalBlock_11092fac0);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010afef4dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x000100504554();
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar7 = param_5;
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    if (*(char *)(param_1 + 0xe8) != '\x01') {
      puStack_100 = (undefined *)0x0;
      goto LAB_106613a10;
    }
    puVar8 = *(undefined **)(param_1 + 0x30);
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c08fa60();
    puStack_100 = PTR_PTR_1126b4860;
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (puVar10 == (undefined *)0x0) {
      puStack_100 = (undefined *)0x0;
    }
    else {
      uVar15 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c258f40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar15;
      func_0x00010c26e3a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fde60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(uVar3);
      _objc_release(uVar15);
    }
    _objc_release(puVar9);
  }
  else {
    puVar8 = param_5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puVar8;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar8);
LAB_106613a10:
  puVar7 = PTR_PTR_1126c2fa8;
  func_0x00010bf33ec0(PTR_PTR_1126c2fa8);
  uVar11 = param_1;
  func_0x00010be82da0();
  uVar12 = param_1;
  func_0x00010be40580();
  ppuVar13 = *(undefined ***)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar13;
  func_0x00010c2608e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar1 = ppuVar14;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar14);
  _objc_release();
  ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar12 == 0) {
    if ((uVar11 & 1) == 0) {
      func_0x000108f5935c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f591dc();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_108 = ppuVar13;
    func_0x000108f591dc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((uVar11 & 1) == 0) {
      func_0x000108f59374();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f598e4();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    ppuStack_108 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000108f598e4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    ppuVar13 = ppuVar14;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar9 = puVar2;
  func_0x00010c282760(puVar2);
  FUN_10661df04(uVar3,param_3,param_4,param_6,(ulong)puVar9 & 0xffffffff,
                *(undefined1 *)(param_1 + 0xe8),puVar7 != (undefined *)0x0,
                *(undefined8 *)(param_1 + 200),uVar5,ppuVar13,ppuStack_108,puStack_100,(char)uVar12)
  ;
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106613de8;
  puStack_a0 = &UNK_11092fb00;
  uStack_98 = uVar4;
  uStack_90 = param_1;
  uStack_88 = uVar6;
  _objc_retain(ppuVar1);
  puVar7 = param_5;
  ppuStack_80 = ppuVar1;
  func_0x00010bd86420(param_5,&puStack_b8);
  _objc_initWeak(auStack_c0,param_1);
  uVar15 = *(undefined8 *)(param_1 + 0x130);
  _objc_copyWeak(auStack_c8,auStack_c0);
  _objc_retain(uVar3);
  _objc_retain(puVar7);
  func_0x00010c0f7fc0(uVar15);
  _objc_release(puVar7);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar7);
  _objc_release(ppuStack_80);
  _objc_release(uVar3);
  _objc_release(ppuStack_108);
  _objc_release(ppuVar13);
  _objc_release(ppuVar1);
  _objc_release(puStack_100);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 106613d28; end: 106613de7;  */

void FUN_106613d28(undefined8 param_1,ulong param_2,undefined *param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010c07d320();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((param_2 & 1) == 0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    func_0x00010c067ec0(param_3);
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106613de8; end: 1066141f7;  */

void FUN_106613de8(long param_1,long param_2,ulong param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_80;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (param_3 < uVar6) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20();
    _objc_release(uVar14);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar14;
    func_0x00010c0b8260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b200();
    _objc_release(uVar3);
    _objc_release(uVar14);
    _objc_release(uVar4);
  }
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe0);
  lVar13 = param_2;
  FUN_10660f178(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar14);
  _objc_release(lVar13);
  puVar5 = PTR_PTR_1126cc258;
  _objc_alloc();
  func_0x00010bff2460();
  uVar6 = *(ulong *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (param_3 < uVar6) {
    lStack_80 = *(long *)(param_1 + 0x30);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (lStack_80 != 0) {
      lVar13 = lStack_80;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_2;
      func_0x00010bf3cf60(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar13;
      func_0x00010c0720c0();
      puVar9 = PTR____NSArray0__struct_11034ab48;
      if ((int)lVar8 != 0) {
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar7);
      _objc_release(lVar13);
      goto LAB_10661401c;
    }
  }
  lStack_80 = 0;
  puVar9 = PTR____NSArray0__struct_11034ab48;
LAB_10661401c:
  puVar10 = PTR_PTR_1126b11d8;
  _objc_alloc(PTR_PTR_1126b11d8);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  func_0x00010bf24ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  func_0x00010c112140(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07f7c0();
  func_0x00010bff9c00(puVar10);
  _objc_release(uVar14);
  _objc_release(uVar4);
  _objc_release(lVar13);
  _objc_release(uVar3);
  lVar13 = *(long *)(param_1 + 0x28);
  uVar15 = *(undefined8 *)(lVar13 + 0x48);
  uVar1 = *(undefined1 *)(lVar13 + 0x78);
  uVar4 = *(undefined8 *)(lVar13 + 0x30);
  func_0x00010bf25000(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bfe4500();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  func_0x00010bf25000(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  FUN_10661cde8(param_2,uVar15,uVar1,param_3,uVar14,uVar3,puVar10,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_release(uVar4);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lStack_80);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    param_2 = param_2 + 0x30;
    _objc_loadWeakRetained(param_2);
    func_0x00010bee3c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar13);
  return;
}



/* Entry: 1066141f8; end: 10661422b;  */

void FUN_1066141f8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10661422c; end: 106614373; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _updateViewModelsIfNeededWithStoriesCellViewModel:storyListViewCellViewModels:] */

void FUN_10661422c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(ulong *)(param_1 + 0x60);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
LAB_1066142b4:
    uVar3 = *(ulong *)(param_1 + 0x68);
    _objc_retain(uVar3);
    _objc_retain(param_4);
    if (uVar3 != param_4) {
      if (param_4 == 0) goto LAB_1066142fc;
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_4);
      _objc_release(param_4);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_106614354;
      goto LAB_106614304;
    }
    _objc_release(param_4);
  }
  else {
    if (param_3 == 0) {
LAB_1066142fc:
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((int)uVar1 != 0) goto LAB_1066142b4;
    }
LAB_106614304:
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x60) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = param_4;
    _objc_release(uVar2);
    uVar3 = param_1 + 0x128;
    _objc_loadWeakRetained(uVar3);
    func_0x00010c258bc0();
  }
  _objc_release(uVar3);
LAB_106614354:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106614374; end: 106614377; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider setSectionDataModel:] */

void FUN_106614374(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee3bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModelsIfNeeded_1125968a0);
  return;
}



/* Entry: 106614378; end: 10661439f; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider storiesCellViewModel] */

void FUN_106614378(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066143a0; end: 1066143c7; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider storyListViewCellViewModels] */

void FUN_1066143a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066143c8; end: 106614467; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider configurationBlockForStoriesCell] */

void FUN_1066143c8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
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
  pcStack_50 = FUN_106614468;
  puStack_48 = &UNK_110845ae0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106614468; end: 1066144af;  */

void FUN_106614468(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5b60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066144b0; end: 10661454f; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider configurationBlockForStoriesListViewCell] */

void FUN_1066144b0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
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
  pcStack_50 = FUN_106614550;
  puStack_48 = &UNK_110845ae0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106614550; end: 106614597;  */

void FUN_106614550(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5b80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106614598; end: 1066145e7; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _getDeletedSnapProSnaps] */

void FUN_106614598(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaa2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066145e8; end: 1066145ef; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider viewMoreExpansionThreshold] */

undefined8 FUN_1066145e8(void)

{
  return 3;
}



/* Entry: 1066145f0; end: 1066145f7; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider viewMoreExpansionIncrementThreshold] */

undefined8 FUN_1066145f0(void)

{
  return 10;
}



/* Entry: 1066145f8; end: 106614603; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider storiesCellClass] */

void FUN_1066145f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126b10f8);
  return;
}



/* Entry: 106614604; end: 106614673; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _configureStoriesCollectionViewCell:] */

void FUN_106614604(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b10f8;
  _objc_opt_class(PTR_PTR_1126b10f8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106614674; end: 1066146e3; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _configureStoriesListViewCell:] */

void FUN_106614674(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cc250;
  _objc_opt_class(PTR_PTR_1126cc250);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066146e4; end: 1066147cb; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider setActionHandler:] */

void FUN_1066146e4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_DAT_1126a5538;
  lVar5 = *(long *)(param_1 + 0x138);
  if (lVar5 != param_3) {
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x00010010fab4(lVar5,puVar1);
    lVar3 = lVar5;
    if ((int)lVar2 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(lVar5);
    func_0x00010c12cf80(lVar3);
    _objc_release(lVar3);
    puVar1 = PTR_DAT_1126a5538;
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010010fab4(param_3,puVar1);
    lVar5 = param_3;
    if ((int)lVar3 == 0) {
      lVar5 = 0;
    }
    _objc_retain(lVar5);
    _objc_release(param_3);
    func_0x00010bef9980(lVar5);
    _objc_release(lVar5);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x138);
    *(long *)(param_1 + 0x138) = param_3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066147cc; end: 10661485b; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider didUpdateMyStoriesDataRequest:] */

void FUN_1066147cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
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
  pcStack_28 = FUN_10661485c;
  puStack_20 = &UNK_1108dc338;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106614964;
  puStack_48 = &UNK_1108dc368;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0be260(param_3,param_2,0,0,0,&puStack_38,&puStack_60,0,0,0,0,0);
  return;
}



/* Entry: 10661485c; end: 106614963;  */

void FUN_10661485c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 != 0) && (param_5 == 2)) {
    iVar4 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    lVar1 = param_4;
    func_0x00010bf25140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if (iVar4 != 0) {
      lVar1 = *(long *)(param_1 + 0x20) + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bf25180();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0b7dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbf00();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010bee3be0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106614964; end: 1066149eb;  */

void FUN_106614964(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 == 1) {
    lVar1 = lVar1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b7dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbf00();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x79) = 1;
    lVar1 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee3bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__updateViewModelsIfNeeded_1125968a0);
  return;
}



/* Entry: 1066149ec; end: 106614a5b; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1066149ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ebaab8);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e61058);
    if ((int)uVar1 != 0) {
      func_0x00010be8cd60(param_1);
    }
  }
  else {
    func_0x00010bee3be0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106614a5c; end: 106614a7b; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _profilePostToTreatmentEnabled] */

bool FUN_106614a5c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x000108f494b0(lVar1);
  return lVar1 == 2;
}



/* Entry: 106614a7c; end: 106614aeb; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider _isFanPassSubscriptionStoryEnabled] */

uint FUN_106614a7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa0960();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf5ba20();
  _objc_release(uVar3);
  return (uint)uVar2 & (uint)uVar1;
}



/* Entry: 106614aec; end: 106614b4b; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:] */

void FUN_106614aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106614b4c;
  puStack_20 = &UNK_1108450f8;
  uStack_18 = param_1;
  func_0x00010c0bc800(param_3,param_2,0,&puStack_38,0,0);
  return;
}



/* Entry: 106614b4c; end: 106614bb3;  */

void FUN_106614b4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
    func_0x00010c0720c0();
    if (iVar1 == 0) goto LAB_106614ba0;
  }
  func_0x00010bee3a60(*(undefined8 *)(param_1 + 0x20));
LAB_106614ba0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106614bb4; end: 106614bbb; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider storyType] */

undefined8 FUN_106614bb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 106614bbc; end: 106614bc3; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider storyId] */

undefined8 FUN_106614bbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 106614bc4; end: 106614bdb; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider dataProviderDelegate] */

void FUN_106614bc4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106614bdc; end: 106614be7; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider setDataProviderDelegate:] */

void FUN_106614bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x128,param_3);
  return;
}



/* Entry: 106614be8; end: 106614bef; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider updateQueuePerformer] */

undefined8 FUN_106614be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 106614bf0; end: 106614c1f; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider setUpdateQueuePerformer:] */

void FUN_106614bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106614c20; end: 106614c27; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider actionHandler] */

undefined8 FUN_106614c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 106614c28; end: 106614dcf; -[SCMyUnifiedProfilePublicStoriesSectionDataProvider .cxx_destruct] */

void FUN_106614c28(long param_1)

{
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_destroyWeak(param_1 + 0x128);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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



/* Entry: 106614dd0; end: 106614e97;  */

void FUN_106614dd0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  func_0x00010bfec080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  if (param_2 == 0) {
    func_0x000108f35db8(param_1,param_3,1);
  }
  else {
    lVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)lVar1 == 0) {
      func_0x000108f35b88(param_1,param_2,param_3,1);
    }
    else {
      func_0x000108f35f2c(param_1,param_2,1);
      lVar2 = param_2;
    }
  }
  _objc_retain(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106614e98; end: 106614f7b;  */

void FUN_106614e98(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_3;
  if (param_2 == 0) {
    func_0x000108f36338(param_1,param_4,param_5,param_3,1);
  }
  else {
    lVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)lVar1 == 0) {
      func_0x000108f360a0(param_1,param_4,param_5,param_2,param_3,1);
    }
    else {
      func_0x000108f3655c(param_1,param_4,param_5,param_3,1);
      lVar2 = param_2;
    }
  }
  _objc_retain(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106614f7c; end: 1066150d7;  */

undefined ** FUN_106614f7c(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined *in_x5;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  long lVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined **unaff_x27;
  undefined1 *puVar23;
  long lVar24;
  undefined *puStack_648;
  undefined8 uStack_640;
  code *pcStack_638;
  undefined *puStack_630;
  undefined **ppuStack_628;
  undefined8 uStack_620;
  long lStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_4e0;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  undefined **ppuStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined1 ***pppuStack_480;
  undefined8 uStack_478;
  long lStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined **ppuStack_458;
  undefined1 *puStack_450;
  undefined **ppuStack_448;
  undefined8 uStack_440;
  undefined **ppuStack_438;
  undefined8 uStack_430;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [256];
  long lStack_2b0;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined auStack_1f8 [128];
  long lStack_178;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  ppuVar17 = param_1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    lVar20 = *plStack_110;
    do {
      ppuVar21 = (undefined **)0x0;
      do {
        if (*plStack_110 != lVar20) {
          _objc_enumerationMutation(param_1);
        }
        lVar2 = *(long *)(lStack_118 + (long)ppuVar21 * 8);
        func_0x00010c24cfc0();
        _objc_retainAutoreleasedReturnValue();
        lVar22 = lVar2;
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = lVar22;
        func_0x00010c08fa60();
        if (lVar2 != 0) {
          func_0x00010befa120(ppuVar1);
        }
        _objc_release(lVar22);
        ppuVar21 = (undefined **)((long)ppuVar21 + 1);
      } while (ppuVar17 != ppuVar21);
      ppuVar17 = param_1;
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar13 = &uStack_240;
    pcStack_128 = FUN_1066150d8;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain();
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    puVar18 = auStack_1f8;
    uVar15 = 0x10;
    ppuVar1 = param_1;
    func_0x00010bf52a60();
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar17 = (undefined **)0x0;
    }
    else {
      ppuVar17 = (undefined **)0x0;
      lVar20 = *plStack_230;
      do {
        ppuVar21 = (undefined **)0x0;
        do {
          if (*plStack_230 != lVar20) {
            _objc_enumerationMutation(param_1);
          }
          uVar3 = *(ulong *)(lStack_238 + (long)ppuVar21 * 8);
          func_0x00010c105980();
          if (((uVar3 ^ 0xffffffffffffffff) & 0xfffffffffffffffb) == 0 ||
              uVar3 == 0xfffffffffffffff9) {
            ppuVar17 = (undefined **)((long)ppuVar17 + 1);
          }
          ppuVar21 = (undefined **)((long)ppuVar21 + 1);
        } while (ppuVar1 != ppuVar21);
        puVar18 = auStack_1f8;
        uVar15 = 0x10;
        ppuVar1 = param_1;
        puVar13 = &uStack_240;
        func_0x00010bf52a60();
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
      return ppuVar17;
    }
    ___stack_chk_fail();
    pcStack_248 = FUN_1066151ec;
    lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar17 = param_2;
    ppuStack_438 = param_1;
    ppuStack_250 = &puStack_130;
    _objc_retain();
    _objc_retain(param_2);
    puStack_450 = (undefined1 *)puVar13;
    _objc_retain(puVar13);
    _objc_retain(puVar18);
    uStack_440 = uVar15;
    _objc_retain(uVar15);
    _objc_retain(in_x5);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar5 = puVar18;
    puStack_460 = puVar18;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar5;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    lStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    puStack_3e0 = (undefined8 *)0x0;
    puVar5 = puVar16;
    puStack_468 = puVar16;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      puVar16 = (undefined *)*puStack_3e0;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_3e0 != puVar16) {
            _objc_enumerationMutation(puVar5);
          }
          lVar2 = *(long *)(lStack_3e8 + (long)puVar18 * 8);
          lVar20 = lVar2;
          func_0x00010c24cfc0();
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar20;
          func_0x00010c08fa60();
          _objc_release(lVar20);
          if (lVar22 != 0) {
            func_0x00010c24cfc0(lVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(lVar2);
          }
          puVar18 = puVar18 + 1;
        } while (puVar6 != puVar18);
        puVar6 = puVar5;
        func_0x00010bf52a60();
        unaff_x27 = (undefined **)0x0;
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar5);
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuVar19 = param_2;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar19;
    func_0x00010bf529e0();
    func_0x00010bf529e0(puStack_450);
    ppuVar1 = ppuVar8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_448 = ppuVar1;
    _objc_release(ppuVar19);
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    lStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    puStack_420 = (undefined8 *)0x0;
    ppuVar7 = param_2;
    ppuStack_458 = param_2;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = auStack_3b0;
    lVar20 = 0x10;
    ppuVar1 = ppuVar7;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      param_2 = (undefined **)*puStack_420;
      do {
        unaff_x27 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_420 != param_2) {
            _objc_enumerationMutation(ppuVar7);
          }
          ppuVar19 = *(undefined ***)(lStack_428 + (long)unaff_x27 * 8);
          ppuVar21 = ppuVar19;
          func_0x00010c24cfc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar21;
          func_0x000108ea5f00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar21);
          puVar18 = in_x5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar18;
          func_0x00010c067fc0();
          _objc_release(puVar18);
          if (puVar16 != (undefined *)0x2) {
            ppuVar17 = ppuVar19;
            func_0x00010c24cfc0(ppuVar19);
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar17);
            puVar16 = puVar18;
            ppuVar17 = ppuVar19;
            FUN_10661ecc0(puVar18,ppuVar19,ppuStack_438,uStack_440);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuStack_448);
            _objc_release(puVar16);
            _objc_release(puVar18);
          }
          _objc_release(ppuVar8);
          unaff_x27 = (undefined **)((long)unaff_x27 + 1);
        } while (ppuVar1 != unaff_x27);
        puVar14 = auStack_3b0;
        lVar20 = 0x10;
        ppuVar1 = ppuVar7;
        func_0x00010bf52a60();
        ppuVar21 = (undefined **)0x0;
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(ppuVar7);
    _objc_release(puStack_468);
    _objc_release(puVar4);
    _objc_release(in_x5);
    _objc_release(uStack_440);
    _objc_release(puStack_460);
    _objc_release(puStack_450);
    _objc_release(ppuStack_458);
    ppuVar9 = ppuStack_438;
    _objc_release();
    ppuVar1 = ppuStack_448;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b0) {
      ___stack_chk_fail();
      uStack_478 = 0x1066155c8;
      lStack_4e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_4d0 = ppuVar7;
      ppuStack_4c8 = unaff_x27;
      ppuStack_4c0 = ppuVar21;
      puStack_4b8 = puVar4;
      puStack_4b0 = in_x5;
      ppuStack_4a8 = param_2;
      ppuStack_4a0 = ppuVar19;
      ppuStack_498 = ppuVar8;
      puStack_490 = puVar18;
      puStack_488 = puVar16;
      pppuStack_480 = &ppuStack_250;
      _objc_retain();
      _objc_retain(ppuVar17);
      _objc_retain(puVar14);
      _objc_retain(lVar20);
      _objc_retain(lStack_470);
      lStack_618 = 0;
      uStack_620 = 0;
      uStack_608 = 0;
      plStack_610 = (long *)0x0;
      uStack_5f8 = 0;
      uStack_600 = 0;
      uStack_5e8 = 0;
      uStack_5f0 = 0;
      puVar10 = puVar14;
      func_0x00010bf52a60();
      if (puVar10 != (undefined1 *)0x0) {
        lVar22 = *plStack_610;
        do {
          puVar23 = (undefined1 *)0x0;
          do {
            if (*plStack_610 != lVar22) {
              _objc_enumerationMutation(puVar14);
            }
            lVar2 = lStack_470;
            (**(code **)(lStack_470 + 0x10))
                      (lStack_470,*(undefined8 *)(lStack_618 + (long)puVar23 * 8),ppuVar17);
            _objc_retainAutoreleasedReturnValue();
            if (lVar2 != 0) {
              func_0x00010befa120(ppuVar9);
            }
            _objc_release(lVar2);
            puVar23 = puVar23 + 1;
          } while (puVar10 != puVar23);
          puVar10 = puVar14;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined1 *)0x0);
      }
      puStack_648 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_640 = 0xc2000000;
      pcStack_638 = FUN_106615870;
      puStack_630 = &UNK_11092fb30;
      _objc_retain(ppuVar17);
      ppuVar21 = &puStack_648;
      lVar11 = lVar20;
      ppuStack_628 = ppuVar17;
      func_0x0001006372a4(lVar20,ppuVar21);
      _objc_retain();
      lVar22 = lVar11;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar22 != 0) {
        lVar24 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar11);
          }
          lVar12 = *(long *)(lVar24 * 8);
          ppuVar21 = ppuVar17;
          func_0x00010661f6e4(lVar12,ppuVar17);
          _objc_retainAutoreleasedReturnValue();
          if (lVar12 != 0) {
            func_0x00010befa120(ppuVar9);
          }
          _objc_release(lVar12);
          lVar24 = lVar24 + 1;
        } while (lVar22 != lVar24);
        lVar22 = lVar11;
        func_0x00010bf52a60();
      }
      _objc_release(lVar11);
      func_0x00010c246ca0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(ppuStack_628);
      _objc_release(lStack_470);
      _objc_release(lVar20);
      _objc_release(puVar14);
      _objc_release(ppuVar17);
      _objc_release();
      ppuVar1 = ppuVar9;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4e0) {
        ___stack_chk_fail();
        func_0x00010bf24ec0(ppuVar21);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = ppuVar21;
        func_0x00010c0720c0();
        _objc_release(ppuVar21);
        return ppuVar1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return ppuVar1;
}



/* Entry: 1066150d8; end: 1066151eb;  */

undefined ** FUN_1066150d8(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined *in_x5;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined **unaff_x27;
  undefined1 *puVar23;
  long lVar24;
  undefined *puStack_528;
  undefined8 uStack_520;
  code *pcStack_518;
  undefined *puStack_510;
  undefined **ppuStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_3c0;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined1 **ppuStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined **ppuStack_338;
  undefined1 *puStack_330;
  undefined **ppuStack_328;
  undefined8 uStack_320;
  undefined **ppuStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [256];
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined auStack_d8 [128];
  long lStack_58;
  
  puVar12 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar17 = auStack_d8;
  uVar14 = 0x10;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar16 = (undefined **)0x0;
  }
  else {
    ppuVar16 = (undefined **)0x0;
    lVar19 = *plStack_110;
    do {
      ppuVar21 = (undefined **)0x0;
      do {
        if (*plStack_110 != lVar19) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lStack_118 + (long)ppuVar21 * 8);
        func_0x00010c105980();
        if (((uVar2 ^ 0xffffffffffffffff) & 0xfffffffffffffffb) == 0 || uVar2 == 0xfffffffffffffff9)
        {
          ppuVar16 = (undefined **)((long)ppuVar16 + 1);
        }
        ppuVar21 = (undefined **)((long)ppuVar21 + 1);
      } while (ppuVar1 != ppuVar21);
      puVar17 = auStack_d8;
      uVar14 = 0x10;
      ppuVar1 = param_1;
      puVar12 = &uStack_120;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_1066151ec;
    lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar1 = param_2;
    ppuStack_318 = param_1;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(param_2);
    puStack_330 = (undefined1 *)puVar12;
    _objc_retain(puVar12);
    _objc_retain(puVar17);
    uStack_320 = uVar14;
    _objc_retain(uVar14);
    _objc_retain(in_x5);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar4 = puVar17;
    puStack_340 = puVar17;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar4;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    lStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    puStack_2c0 = (undefined8 *)0x0;
    puVar4 = puVar15;
    puStack_348 = puVar15;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      puVar15 = (undefined *)*puStack_2c0;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_2c0 != puVar15) {
            _objc_enumerationMutation(puVar4);
          }
          lVar18 = *(long *)(lStack_2c8 + (long)puVar17 * 8);
          lVar19 = lVar18;
          func_0x00010c24cfc0();
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar19;
          func_0x00010c08fa60();
          _objc_release(lVar19);
          if (lVar22 != 0) {
            func_0x00010c24cfc0(lVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(lVar18);
          }
          puVar17 = puVar17 + 1;
        } while (puVar5 != puVar17);
        puVar5 = puVar4;
        func_0x00010bf52a60();
        unaff_x27 = (undefined **)0x0;
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    ppuVar21 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuVar20 = param_2;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar20;
    func_0x00010bf529e0();
    func_0x00010bf529e0(puStack_330);
    ppuVar6 = ppuVar21;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_328 = ppuVar6;
    _objc_release(ppuVar20);
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    puStack_300 = (undefined8 *)0x0;
    ppuVar6 = param_2;
    ppuStack_338 = param_2;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = auStack_290;
    lVar19 = 0x10;
    ppuVar7 = ppuVar6;
    func_0x00010bf52a60();
    if (ppuVar7 != (undefined **)0x0) {
      param_2 = (undefined **)*puStack_300;
      do {
        unaff_x27 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_300 != param_2) {
            _objc_enumerationMutation(ppuVar6);
          }
          ppuVar20 = *(undefined ***)(lStack_308 + (long)unaff_x27 * 8);
          ppuVar16 = ppuVar20;
          func_0x00010c24cfc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = ppuVar16;
          func_0x000108ea5f00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar16);
          puVar17 = in_x5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar17;
          func_0x00010c067fc0();
          _objc_release(puVar17);
          if (puVar15 != (undefined *)0x2) {
            ppuVar1 = ppuVar20;
            func_0x00010c24cfc0(ppuVar20);
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar1);
            puVar15 = puVar17;
            ppuVar1 = ppuVar20;
            FUN_10661ecc0(puVar17,ppuVar20,ppuStack_318,uStack_320);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuStack_328);
            _objc_release(puVar15);
            _objc_release(puVar17);
          }
          _objc_release(ppuVar21);
          unaff_x27 = (undefined **)((long)unaff_x27 + 1);
        } while (ppuVar7 != unaff_x27);
        puVar13 = auStack_290;
        lVar19 = 0x10;
        ppuVar7 = ppuVar6;
        func_0x00010bf52a60();
        ppuVar16 = (undefined **)0x0;
      } while (ppuVar7 != (undefined **)0x0);
    }
    _objc_release(ppuVar6);
    _objc_release(puStack_348);
    _objc_release(puVar3);
    _objc_release(in_x5);
    _objc_release(uStack_320);
    _objc_release(puStack_340);
    _objc_release(puStack_330);
    _objc_release(ppuStack_338);
    ppuVar7 = ppuStack_318;
    _objc_release();
    ppuVar11 = ppuStack_328;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
      ___stack_chk_fail();
      uStack_358 = 0x1066155c8;
      lStack_3c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_3b0 = ppuVar6;
      ppuStack_3a8 = unaff_x27;
      ppuStack_3a0 = ppuVar16;
      puStack_398 = puVar3;
      puStack_390 = in_x5;
      ppuStack_388 = param_2;
      ppuStack_380 = ppuVar20;
      ppuStack_378 = ppuVar21;
      puStack_370 = puVar17;
      puStack_368 = puVar15;
      ppuStack_360 = &puStack_130;
      _objc_retain();
      _objc_retain(ppuVar1);
      _objc_retain(puVar13);
      _objc_retain(lVar19);
      _objc_retain(lStack_350);
      lStack_4f8 = 0;
      uStack_500 = 0;
      uStack_4e8 = 0;
      plStack_4f0 = (long *)0x0;
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      puVar8 = puVar13;
      func_0x00010bf52a60();
      if (puVar8 != (undefined1 *)0x0) {
        lVar22 = *plStack_4f0;
        do {
          puVar23 = (undefined1 *)0x0;
          do {
            if (*plStack_4f0 != lVar22) {
              _objc_enumerationMutation(puVar13);
            }
            lVar18 = lStack_350;
            (**(code **)(lStack_350 + 0x10))
                      (lStack_350,*(undefined8 *)(lStack_4f8 + (long)puVar23 * 8),ppuVar1);
            _objc_retainAutoreleasedReturnValue();
            if (lVar18 != 0) {
              func_0x00010befa120(ppuVar7);
            }
            _objc_release(lVar18);
            puVar23 = puVar23 + 1;
          } while (puVar8 != puVar23);
          puVar8 = puVar13;
          func_0x00010bf52a60();
        } while (puVar8 != (undefined1 *)0x0);
      }
      puStack_528 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_520 = 0xc2000000;
      pcStack_518 = FUN_106615870;
      puStack_510 = &UNK_11092fb30;
      _objc_retain(ppuVar1);
      ppuVar16 = &puStack_528;
      lVar9 = lVar19;
      ppuStack_508 = ppuVar1;
      func_0x0001006372a4(lVar19,ppuVar16);
      _objc_retain();
      lVar22 = lVar9;
      func_0x00010bf52a60();
      lVar18 = lRam0000000000000000;
      while (lVar22 != 0) {
        lVar24 = 0;
        do {
          if (lRam0000000000000000 != lVar18) {
            _objc_enumerationMutation(lVar9);
          }
          lVar10 = *(long *)(lVar24 * 8);
          ppuVar16 = ppuVar1;
          func_0x00010661f6e4(lVar10,ppuVar1);
          _objc_retainAutoreleasedReturnValue();
          if (lVar10 != 0) {
            func_0x00010befa120(ppuVar7);
          }
          _objc_release(lVar10);
          lVar24 = lVar24 + 1;
        } while (lVar22 != lVar24);
        lVar22 = lVar9;
        func_0x00010bf52a60();
      }
      _objc_release(lVar9);
      func_0x00010c246ca0(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(ppuStack_508);
      _objc_release(lStack_350);
      _objc_release(lVar19);
      _objc_release(puVar13);
      _objc_release(ppuVar1);
      _objc_release();
      ppuVar11 = ppuVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c0) {
        ___stack_chk_fail();
        func_0x00010bf24ec0(ppuVar16);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = ppuVar16;
        func_0x00010c0720c0();
        _objc_release(ppuVar16);
        return ppuVar1;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
    return ppuVar11;
  }
  return ppuVar16;
}


