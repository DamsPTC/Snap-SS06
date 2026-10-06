/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10670ef24; end: 10670ef2b; -[SCLensExplorerLensCellViewModel isCreatorPageEnabled] */

undefined1 FUN_10670ef24(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10670ef2c; end: 10670ef33; -[SCLensExplorerLensCellViewModel isAttributionShown] */

undefined1 FUN_10670ef2c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10670ef34; end: 10670ef3b; -[SCLensExplorerLensCellViewModel isIconShown] */

undefined1 FUN_10670ef34(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10670ef3c; end: 10670ef43; -[SCLensExplorerLensCellViewModel isSelected] */

undefined1 FUN_10670ef3c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10670ef44; end: 10670ef4b; -[SCLensExplorerLensCellViewModel isSponsoredAttributionShown] */

undefined1 FUN_10670ef44(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10670ef4c; end: 10670ef53; -[SCLensExplorerLensCellViewModel viewCount] */

undefined8 FUN_10670ef4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10670ef54; end: 10670ef5b; -[SCLensExplorerLensCellViewModel shouldShowName] */

undefined1 FUN_10670ef54(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 10670ef5c; end: 10670ef63; -[SCLensExplorerLensCellViewModel isScpExclusive] */

undefined1 FUN_10670ef5c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10670ef64; end: 10670efcf; -[SCLensExplorerLensCellViewModel .cxx_destruct] */

void FUN_10670ef64(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10670efd0; end: 10670efeb; +[SCLensExplorerLensCellViewModelBuilder lensExplorerLensCellViewModel] */

void FUN_10670efd0(void)

{
  _objc_alloc_init(PTR_PTR_1126cce90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10670efec; end: 10670f4af; +[SCLensExplorerLensCellViewModelBuilder lensExplorerLensCellViewModelFromExistingLensExplorerLensCellViewModel:] */

void FUN_10670efec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined *puVar32;
  
  puVar1 = PTR_PTR_1126cce90;
  _objc_retain(param_3);
  func_0x00010c093200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b29e0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf341e0(param_3);
  puVar5 = puVar3;
  func_0x00010c2aa440(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf5bbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2ab640(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c095760();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2b2a80(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094a60(param_3);
  puVar9 = puVar8;
  func_0x00010c2b2920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094a80(param_3);
  puVar10 = puVar9;
  func_0x00010c2b2940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb780(param_3);
  puVar11 = puVar10;
  func_0x00010c2ae920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111c40(param_3);
  puVar12 = puVar11;
  func_0x00010c2b5e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ea00(param_3);
  puVar13 = puVar12;
  func_0x00010c2a8b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe5620(param_3);
  puVar14 = puVar13;
  func_0x00010c2af900();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c1112a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c2b5d60(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010bfe5680();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2af920(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bf0e9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010c2a8b00(puVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c0728c0(param_3);
  puVar22 = puVar20;
  func_0x00010c2b0740(puVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c077060(param_3);
  puVar23 = puVar22;
  func_0x00010c2b0da0(puVar22,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c06f960(param_3);
  puVar24 = puVar23;
  func_0x00010c2b0540(puVar23,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c06c880(param_3);
  puVar25 = puVar24;
  func_0x00010c2b0200(puVar24,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c074f80(param_3);
  puVar26 = puVar25;
  func_0x00010c2b0b20(puVar25,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c07d660(param_3);
  puVar27 = puVar26;
  func_0x00010c2b1440(puVar26,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c07f220(param_3);
  puVar28 = puVar27;
  func_0x00010c2b1660(puVar27,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c29c5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar28;
  func_0x00010c2bc880(puVar28,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_3;
  func_0x00010c233cc0(param_3);
  puVar31 = puVar29;
  func_0x00010c2b8c40(puVar29,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_3;
  func_0x00010c07d340(param_3);
  _objc_release(param_3);
  puVar32 = puVar31;
  func_0x00010c2b1420(puVar31,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar31);
  _objc_release(puVar29);
  _objc_release(uVar21);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar32);
  return;
}



/* Entry: 10670f4b0; end: 10670f557; -[SCLensExplorerLensCellViewModelBuilder build] */

void FUN_10670f4b0(long param_1)

{
  _objc_alloc(PTR_PTR_1126ccc18);
  func_0x00010c024c60(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10670f558; end: 10670f58f; -[SCLensExplorerLensCellViewModelBuilder withLensItem:] */

long FUN_10670f558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10670f590; end: 10670f597; -[SCLensExplorerLensCellViewModelBuilder withCellType:] */

void FUN_10670f590(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10670f598; end: 10670f5cf; -[SCLensExplorerLensCellViewModelBuilder withCreatorUserName:] */

long FUN_10670f598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10670f5d0; end: 10670f607; -[SCLensExplorerLensCellViewModelBuilder withLensName:] */

long FUN_10670f5d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10670f608; end: 10670f613; -[SCLensExplorerLensCellViewModelBuilder withLensInfoInsets:] */

void FUN_10670f608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x28) = param_1;
  *(undefined8 *)(param_5 + 0x30) = param_2;
  *(undefined8 *)(param_5 + 0x38) = param_3;
  *(undefined8 *)(param_5 + 0x40) = param_4;
  return;
}



/* Entry: 10670f614; end: 10670f61b; -[SCLensExplorerLensCellViewModelBuilder withLensInfoLabelsSpacing:] */

void FUN_10670f614(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 10670f61c; end: 10670f623; -[SCLensExplorerLensCellViewModelBuilder withFullCellSize:] */

void FUN_10670f61c(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x50) = param_1;
  *(undefined8 *)(param_3 + 0x58) = param_2;
  return;
}



/* Entry: 10670f624; end: 10670f62b; -[SCLensExplorerLensCellViewModelBuilder withPreviewSize:] */

void FUN_10670f624(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x60) = param_1;
  *(undefined8 *)(param_3 + 0x68) = param_2;
  return;
}



/* Entry: 10670f62c; end: 10670f633; -[SCLensExplorerLensCellViewModelBuilder withAttributionIconSize:] */

void FUN_10670f62c(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x70) = param_1;
  *(undefined8 *)(param_3 + 0x78) = param_2;
  return;
}



/* Entry: 10670f634; end: 10670f63f; -[SCLensExplorerLensCellViewModelBuilder withIconFrame:] */

void FUN_10670f634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x80) = param_1;
  *(undefined8 *)(param_5 + 0x88) = param_2;
  *(undefined8 *)(param_5 + 0x90) = param_3;
  *(undefined8 *)(param_5 + 0x98) = param_4;
  return;
}



/* Entry: 10670f640; end: 10670f677; -[SCLensExplorerLensCellViewModelBuilder withPreviewImage:] */

long FUN_10670f640(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10670f678; end: 10670f6af; -[SCLensExplorerLensCellViewModelBuilder withIconImage:] */

long FUN_10670f678(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10670f6b0; end: 10670f6e7; -[SCLensExplorerLensCellViewModelBuilder withAttributionIcon:] */

long FUN_10670f6b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10670f6e8; end: 10670f6ef; -[SCLensExplorerLensCellViewModelBuilder withIsFadeGradientShown:] */

void FUN_10670f6e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 10670f6f0; end: 10670f6f7; -[SCLensExplorerLensCellViewModelBuilder withIsLongPressActionSupported:] */

void FUN_10670f6f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb9) = param_3;
  return;
}



/* Entry: 10670f6f8; end: 10670f6ff; -[SCLensExplorerLensCellViewModelBuilder withIsCreatorPageEnabled:] */

void FUN_10670f6f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xba) = param_3;
  return;
}



/* Entry: 10670f700; end: 10670f707; -[SCLensExplorerLensCellViewModelBuilder withIsAttributionShown:] */

void FUN_10670f700(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xbb) = param_3;
  return;
}



/* Entry: 10670f708; end: 10670f70f; -[SCLensExplorerLensCellViewModelBuilder withIsIconShown:] */

void FUN_10670f708(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xbc) = param_3;
  return;
}



/* Entry: 10670f710; end: 10670f717; -[SCLensExplorerLensCellViewModelBuilder withIsSelected:] */

void FUN_10670f710(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xbd) = param_3;
  return;
}



/* Entry: 10670f718; end: 10670f71f; -[SCLensExplorerLensCellViewModelBuilder withIsSponsoredAttributionShown:] */

void FUN_10670f718(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xbe) = param_3;
  return;
}



/* Entry: 10670f720; end: 10670f757; -[SCLensExplorerLensCellViewModelBuilder withViewCount:] */

long FUN_10670f720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10670f758; end: 10670f75f; -[SCLensExplorerLensCellViewModelBuilder withShouldShowName:] */

void FUN_10670f758(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 10670f760; end: 10670f767; -[SCLensExplorerLensCellViewModelBuilder withIsScpExclusive:] */

void FUN_10670f760(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc9) = param_3;
  return;
}



/* Entry: 10670f768; end: 10670f7d3; -[SCLensExplorerLensCellViewModelBuilder .cxx_destruct] */

void FUN_10670f768(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10670f7d4; end: 10670f957; -[SCLensExplorerCreatorCellViewModel initWithCreatorItem:creatorUserName:creatorUserId:lensPreviews:previewIconSize:previewContainerSize:fullCellSize:avatarViewModel:hasStory:] */

undefined1 *
FUN_10670f7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_88 = PTR_PTR_1126f2a90;
  uStack_90 = param_7;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    *(undefined8 *)((long)puVar1 + 0x58) = param_5;
    *(undefined8 *)((long)puVar1 + 0x60) = param_6;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_14;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 10670f958; end: 10670f97b; -[SCLensExplorerCreatorCellViewModel copyWithZone:] */

undefined8 FUN_10670f958(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10670f97c; end: 10670fadf; -[SCLensExplorerCreatorCellViewModel hash] */

undefined8 * FUN_10670f97c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_68 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar4 = &uStack_88;
  uStack_38 = uVar2;
  func_0x000100505190(puVar4,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10670fc24:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10670fc30;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) {
      puVar8 = (undefined8 *)0x0;
      if ((((((double)puVar4[7] != (double)param_3[7]) || ((double)puVar4[8] != (double)param_3[8]))
           || (puVar8 = (undefined8 *)0x0, (double)puVar4[9] != (double)param_3[9])) ||
          (((double)puVar4[10] != (double)param_3[10] ||
           (puVar8 = (undefined8 *)0x0, (double)puVar4[0xb] != (double)param_3[0xb])))) ||
         ((double)puVar4[0xc] != (double)param_3[0xc])) goto LAB_10670fc30;
      lVar6 = puVar4[2];
      if ((((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
          ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         (((lVar6 = puVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
          ((lVar6 = puVar4[5], lVar6 == param_3[5] || (func_0x00010c071ae0(), (int)lVar6 != 0))))))
      {
        puVar8 = (undefined8 *)puVar4[6];
        if (puVar8 != (undefined8 *)param_3[6]) {
          func_0x00010c071ae0();
          goto LAB_10670fc30;
        }
        goto LAB_10670fc24;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10670fc30:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10670fae0; end: 10670fc4b; -[SCLensExplorerCreatorCellViewModel isEqual:] */

long FUN_10670fae0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10670fc24:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10670fc30;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = 0;
      if (((((*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38)) ||
            (*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40))) ||
           (lVar3 = 0, *(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48))) ||
          ((*(double *)(param_1 + 0x50) != *(double *)(param_3 + 0x50) ||
           (lVar3 = 0, *(double *)(param_1 + 0x58) != *(double *)(param_3 + 0x58))))) ||
         (*(double *)(param_1 + 0x60) != *(double *)(param_3 + 0x60))) goto LAB_10670fc30;
      lVar3 = *(long *)(param_1 + 0x10);
      if ((((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
          ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
         (((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
          ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
        lVar3 = *(long *)(param_1 + 0x30);
        if (lVar3 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10670fc30;
        }
        goto LAB_10670fc24;
      }
    }
    lVar3 = 0;
  }
LAB_10670fc30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10670fc4c; end: 10670fc53; -[SCLensExplorerCreatorCellViewModel creatorItem] */

undefined8 FUN_10670fc4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10670fc54; end: 10670fc5b; -[SCLensExplorerCreatorCellViewModel creatorUserName] */

undefined8 FUN_10670fc54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10670fc5c; end: 10670fc63; -[SCLensExplorerCreatorCellViewModel creatorUserId] */

undefined8 FUN_10670fc5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10670fc64; end: 10670fc6b; -[SCLensExplorerCreatorCellViewModel lensPreviews] */

undefined8 FUN_10670fc64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10670fc6c; end: 10670fc73; -[SCLensExplorerCreatorCellViewModel previewIconSize] */

undefined1  [16] FUN_10670fc6c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



/* Entry: 10670fc74; end: 10670fc7b; -[SCLensExplorerCreatorCellViewModel previewContainerSize] */

undefined1  [16] FUN_10670fc74(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x48);
}



/* Entry: 10670fc7c; end: 10670fc83; -[SCLensExplorerCreatorCellViewModel fullCellSize] */

undefined1  [16] FUN_10670fc7c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x58);
}



/* Entry: 10670fc84; end: 10670fc8b; -[SCLensExplorerCreatorCellViewModel avatarViewModel] */

undefined8 FUN_10670fc84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10670fc8c; end: 10670fc93; -[SCLensExplorerCreatorCellViewModel hasStory] */

undefined1 FUN_10670fc8c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10670fc94; end: 10670fce7; -[SCLensExplorerCreatorCellViewModel .cxx_destruct] */

void FUN_10670fc94(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10670fce8; end: 10670fd03; +[SCLensExplorerCreatorCellViewModelBuilder lensExplorerCreatorCellViewModel] */

void FUN_10670fce8(void)

{
  _objc_alloc_init(PTR_PTR_1126cce70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10670fd04; end: 10670ff47; +[SCLensExplorerCreatorCellViewModelBuilder lensExplorerCreatorCellViewModelFromExistingLensExplorerCreatorCellViewModel:] */

void FUN_10670fd04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  
  puVar1 = PTR_PTR_1126cce70;
  _objc_retain(param_3);
  func_0x00010c092c40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf5b4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ab5a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf5bbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ab640(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ab620(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0960a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b2b80(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111280(param_3);
  puVar10 = puVar9;
  func_0x00010c2b5d40(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1109e0(param_3);
  puVar11 = puVar10;
  func_0x00010c2b5cc0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb780(param_3);
  puVar12 = puVar11;
  func_0x00010c2ae920(puVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf13300(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2a8fe0(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bfdcc40(param_3);
  _objc_release(param_3);
  puVar16 = puVar14;
  func_0x00010c2af520(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 10670ff48; end: 10670ff8f; -[SCLensExplorerCreatorCellViewModelBuilder build] */

void FUN_10670ff48(long param_1)

{
  _objc_alloc(PTR_PTR_1126cce58);
  func_0x00010c006980(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10670ff90; end: 10670ffc7; -[SCLensExplorerCreatorCellViewModelBuilder withCreatorItem:] */

long FUN_10670ff90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10670ffc8; end: 10670ffff; -[SCLensExplorerCreatorCellViewModelBuilder withCreatorUserName:] */

long FUN_10670ffc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106710000; end: 106710037; -[SCLensExplorerCreatorCellViewModelBuilder withCreatorUserId:] */

long FUN_106710000(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106710038; end: 10671006f; -[SCLensExplorerCreatorCellViewModelBuilder withLensPreviews:] */

long FUN_106710038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106710070; end: 106710077; -[SCLensExplorerCreatorCellViewModelBuilder withPreviewIconSize:] */

void FUN_106710070(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x28) = param_1;
  *(undefined8 *)(param_3 + 0x30) = param_2;
  return;
}



/* Entry: 106710078; end: 10671007f; -[SCLensExplorerCreatorCellViewModelBuilder withPreviewContainerSize:] */

void FUN_106710078(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x38) = param_1;
  *(undefined8 *)(param_3 + 0x40) = param_2;
  return;
}



/* Entry: 106710080; end: 106710087; -[SCLensExplorerCreatorCellViewModelBuilder withFullCellSize:] */

void FUN_106710080(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x48) = param_1;
  *(undefined8 *)(param_3 + 0x50) = param_2;
  return;
}



/* Entry: 106710088; end: 1067100bf; -[SCLensExplorerCreatorCellViewModelBuilder withAvatarViewModel:] */

long FUN_106710088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1067100c0; end: 1067100c7; -[SCLensExplorerCreatorCellViewModelBuilder withHasStory:] */

void FUN_1067100c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 1067100c8; end: 10671011b; -[SCLensExplorerCreatorCellViewModelBuilder .cxx_destruct] */

void FUN_1067100c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10671011c; end: 10671027b; -[SCLensExplorerCreatorLensPreviewViewModel initWithIdentifier:previewMediaURL:iconURL:backgroundImage:backgroundImageSize:previewImage:previewImageSize:] */

undefined1 *
FUN_10671011c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f2a98;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10671027c; end: 10671029f; -[SCLensExplorerCreatorLensPreviewViewModel copyWithZone:] */

undefined8 FUN_10671027c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067102a0; end: 1067103bf; -[SCLensExplorerCreatorLensPreviewViewModel hash] */

undefined8 * FUN_1067102a0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar2;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_1067104c8:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1067104cc;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)((long)puVar4 + 0x30) == *(double *)(param_3 + 0x30)) &&
         (bVar1 = false, !NAN(*(double *)((long)puVar4 + 0x38)) && !NAN(*(double *)(param_3 + 0x38))
         )) {
        bVar1 = *(double *)((long)puVar4 + 0x38) == *(double *)(param_3 + 0x38);
      }
      if (bVar1) {
        puVar8 = (undefined1 *)0x0;
        if ((*(double *)((long)puVar4 + 0x40) != *(double *)(param_3 + 0x40)) ||
           (*(double *)((long)puVar4 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_1067104cc;
        lVar6 = *(long *)((long)puVar4 + 8);
        if (((((lVar6 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
             ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = *(undefined1 **)((long)puVar4 + 0x28);
          if (puVar8 != *(undefined1 **)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_1067104cc;
          }
          goto LAB_1067104c8;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_1067104cc:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 1067103c0; end: 1067104e7; -[SCLensExplorerCreatorLensPreviewViewModel isEqual:] */

long FUN_1067103c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1067104c8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067104cc;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x30) == *(double *)(param_3 + 0x30)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x38)) && !NAN(*(double *)(param_3 + 0x38)))) {
        bVar1 = *(double *)(param_1 + 0x38) == *(double *)(param_3 + 0x38);
      }
      if (bVar1) {
        lVar4 = 0;
        if ((*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40)) ||
           (*(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_1067104cc;
        lVar4 = *(long *)(param_1 + 8);
        if (((((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x28);
          if (lVar4 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_1067104cc;
          }
          goto LAB_1067104c8;
        }
      }
    }
    lVar4 = 0;
  }
LAB_1067104cc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1067104e8; end: 1067104ef; -[SCLensExplorerCreatorLensPreviewViewModel identifier] */

undefined8 FUN_1067104e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067104f0; end: 1067104f7; -[SCLensExplorerCreatorLensPreviewViewModel previewMediaURL] */

undefined8 FUN_1067104f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067104f8; end: 1067104ff; -[SCLensExplorerCreatorLensPreviewViewModel iconURL] */

undefined8 FUN_1067104f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106710500; end: 106710507; -[SCLensExplorerCreatorLensPreviewViewModel backgroundImage] */

undefined8 FUN_106710500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106710508; end: 10671050f; -[SCLensExplorerCreatorLensPreviewViewModel backgroundImageSize] */

undefined1  [16] FUN_106710508(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 106710510; end: 106710517; -[SCLensExplorerCreatorLensPreviewViewModel previewImage] */

undefined8 FUN_106710510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106710518; end: 10671051f; -[SCLensExplorerCreatorLensPreviewViewModel previewImageSize] */

undefined1  [16] FUN_106710518(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 106710520; end: 106710573; -[SCLensExplorerCreatorLensPreviewViewModel .cxx_destruct] */

void FUN_106710520(long param_1)

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



/* Entry: 106710574; end: 10671058f; +[SCLensExplorerCreatorLensPreviewViewModelBuilder lensExplorerCreatorLensPreviewViewModel] */

void FUN_106710574(void)

{
  _objc_alloc_init(PTR_PTR_1126cd060);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106710590; end: 106710797; +[SCLensExplorerCreatorLensPreviewViewModelBuilder lensExplorerCreatorLensPreviewViewModelFromExistingLensExplorerCreatorLensPreviewViewModel:] */

void FUN_106710590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  puVar1 = PTR_PTR_1126cd060;
  _objc_retain(param_5);
  func_0x00010c092ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2af9a0(puVar1,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c1117a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b5e00(puVar3,param_4,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010bfe5b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2af940(puVar5,param_4,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  func_0x00010bf140c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2a9080(puVar7,param_4,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14120(param_5);
  puVar10 = puVar9;
  func_0x00010c2a90a0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_5;
  func_0x00010c1112a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2b5d60(puVar10,param_4,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111320(param_5);
  _objc_release(param_5);
  puVar13 = puVar12;
  func_0x00010c2b5d80(param_1,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106710798; end: 1067107d7; -[SCLensExplorerCreatorLensPreviewViewModelBuilder build] */

void FUN_106710798(long param_1)

{
  _objc_alloc(PTR_PTR_1126cce68);
  func_0x00010c01b860(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067107d8; end: 10671080f; -[SCLensExplorerCreatorLensPreviewViewModelBuilder withIdentifier:] */

long FUN_1067107d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106710810; end: 106710847; -[SCLensExplorerCreatorLensPreviewViewModelBuilder withPreviewMediaURL:] */

long FUN_106710810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106710848; end: 10671087f; -[SCLensExplorerCreatorLensPreviewViewModelBuilder withIconURL:] */

long FUN_106710848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106710880; end: 1067108b7; -[SCLensExplorerCreatorLensPreviewViewModelBuilder withBackgroundImage:] */

long FUN_106710880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1067108b8; end: 1067108bf; -[SCLensExplorerCreatorLensPreviewViewModelBuilder withBackgroundImageSize:] */

void FUN_1067108b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x28) = param_1;
  *(undefined8 *)(param_3 + 0x30) = param_2;
  return;
}



/* Entry: 1067108c0; end: 1067108f7; -[SCLensExplorerCreatorLensPreviewViewModelBuilder withPreviewImage:] */

long FUN_1067108c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1067108f8; end: 1067108ff; -[SCLensExplorerCreatorLensPreviewViewModelBuilder withPreviewImageSize:] */

void FUN_1067108f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x40) = param_1;
  *(undefined8 *)(param_3 + 0x48) = param_2;
  return;
}



/* Entry: 106710900; end: 106710953; -[SCLensExplorerCreatorLensPreviewViewModelBuilder .cxx_destruct] */

void FUN_106710900(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106710954; end: 10671099f; -[SCLensExplorerLoadingCellViewModel initWithPreferredCellSize:] */

void FUN_106710954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2aa0;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 1067109a0; end: 1067109c3; -[SCLensExplorerLoadingCellViewModel copyWithZone:] */

undefined8 FUN_1067109a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067109c4; end: 106710a57; -[SCLensExplorerLoadingCellViewModel hash] */

ulong * FUN_1067109c4(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar2 = &uStack_28;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar3 & 1) == 0) {
        puVar6 = (ulong *)0x0;
      }
      else {
        uVar4 = 0;
        if ((double)puVar2[2] == (double)param_3[2]) {
          uVar4 = (uint)((double)puVar2[1] == (double)param_3[1]);
        }
        puVar6 = (ulong *)(ulong)uVar4;
      }
    }
  }
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106710a58; end: 106710ae7; -[SCLensExplorerLoadingCellViewModel isEqual:] */

bool FUN_106710a58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if ((uVar2 & 1) == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = false;
        if (*(double *)(param_1 + 0x10) == *(double *)(param_3 + 0x10)) {
          bVar3 = *(double *)(param_1 + 8) == *(double *)(param_3 + 8);
        }
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 106710ae8; end: 106710aef; -[SCLensExplorerLoadingCellViewModel preferredCellSize] */

undefined1  [16] FUN_106710ae8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 8);
}



/* Entry: 106710af0; end: 106710beb; -[SCLensExplorerStoryViewModel initWithStoryItem:viewingCountText:fullCellSize:previewImage:cellType:] */

undefined1 *
FUN_106710af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f2aa8;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106710bec; end: 106710c0f; -[SCLensExplorerStoryViewModel copyWithZone:] */

undefined8 FUN_106710bec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106710c10; end: 106710cd7; -[SCLensExplorerStoryViewModel hash] */

undefined8 * FUN_106710c10(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = &uStack_58;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106710da4:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106710db0;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      puVar7 = (undefined8 *)0x0;
      if (((double)puVar3[5] != (double)param_3[5]) || ((double)puVar3[6] != (double)param_3[6]))
      goto LAB_106710db0;
      lVar5 = puVar3[1];
      if (((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
         ((lVar5 = puVar3[2], lVar5 == param_3[2] || (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
        puVar7 = (undefined8 *)puVar3[3];
        if (puVar7 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_106710db0;
        }
        goto LAB_106710da4;
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_106710db0:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 106710cd8; end: 106710dcb; -[SCLensExplorerStoryViewModel isEqual:] */

long FUN_106710cd8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106710da4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106710db0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x28) != *(double *)(param_3 + 0x28)) ||
         (*(double *)(param_1 + 0x30) != *(double *)(param_3 + 0x30))) goto LAB_106710db0;
      lVar3 = *(long *)(param_1 + 8);
      if (((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
         ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106710db0;
        }
        goto LAB_106710da4;
      }
    }
    lVar3 = 0;
  }
LAB_106710db0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106710dcc; end: 106710dd3; -[SCLensExplorerStoryViewModel storyItem] */

undefined8 FUN_106710dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106710dd4; end: 106710ddb; -[SCLensExplorerStoryViewModel viewingCountText] */

undefined8 FUN_106710dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106710ddc; end: 106710de3; -[SCLensExplorerStoryViewModel fullCellSize] */

undefined1  [16] FUN_106710ddc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 106710de4; end: 106710deb; -[SCLensExplorerStoryViewModel previewImage] */

undefined8 FUN_106710de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106710dec; end: 106710df3; -[SCLensExplorerStoryViewModel cellType] */

undefined8 FUN_106710dec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


