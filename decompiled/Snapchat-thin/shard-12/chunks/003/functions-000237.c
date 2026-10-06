/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109010e58; end: 109010e5f; -[SCSearchActionButtonViewModelCustomConfig customBorderColor] */

undefined8 FUN_109010e58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109010e60; end: 109010e67; -[SCSearchActionButtonViewModelCustomConfig customBackgroundColor] */

undefined8 FUN_109010e60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109010e68; end: 109010e6f; -[SCSearchActionButtonViewModelCustomConfig customForegroundColor] */

undefined8 FUN_109010e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109010e70; end: 109010e77; -[SCSearchActionButtonViewModelCustomConfig customLabelColor] */

undefined8 FUN_109010e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 109010e78; end: 109010e7f; -[SCSearchActionButtonViewModelCustomConfig customLoadingColor] */

undefined8 FUN_109010e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 109010e80; end: 109010e87; -[SCSearchActionButtonViewModelCustomConfig loadingIndicatorSize] */

undefined8 FUN_109010e80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 109010e88; end: 109010e8f; -[SCSearchActionButtonViewModelCustomConfig customTitleLeftOffset] */

undefined8 FUN_109010e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 109010e90; end: 109010e97; -[SCSearchActionButtonViewModelCustomConfig customImageWidth] */

undefined8 FUN_109010e90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 109010e98; end: 109010e9f; -[SCSearchActionButtonViewModelCustomConfig customImageHeight] */

undefined8 FUN_109010e98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 109010ea0; end: 109010ef3; -[SCSearchActionButtonViewModelCustomConfig .cxx_destruct] */

void FUN_109010ea0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 109010ef4; end: 109010f0f; +[SCSearchActionButtonViewModelCustomConfigBuilder searchActionButtonViewModelCustomConfig] */

void FUN_109010ef4(void)

{
  _objc_alloc_init(PTR_PTR_1126b56e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109010f10; end: 10901122b; +[SCSearchActionButtonViewModelCustomConfigBuilder searchActionButtonViewModelCustomConfigFromExistingSearchActionButtonViewModelCustomConfig:] */

void FUN_109010f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  
  puVar1 = PTR_PTR_1126b56e0;
  _objc_retain(param_4);
  func_0x00010c1532a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf61580(param_4);
  puVar2 = puVar1;
  func_0x00010c2ab980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf615a0(param_4);
  puVar4 = puVar2;
  func_0x00010c2ab9a0(puVar2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf612a0(param_4);
  puVar5 = puVar4;
  func_0x00010c2ab8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf612c0(param_4);
  puVar6 = puVar5;
  func_0x00010c2ab8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf612e0(param_4);
  puVar7 = puVar6;
  func_0x00010c2ab900();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf61280();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2ab8a0(puVar7,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010bf61240();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c2ab880(puVar8,param_3,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010bf615c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2ab9c0(puVar10,param_3,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_4;
  func_0x00010bf617c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2aba20(puVar12,param_3,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_4;
  func_0x00010bf618e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c2aba60(puVar14,param_3,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_4;
  func_0x00010c09d0c0(param_4);
  puVar18 = puVar16;
  func_0x00010c2b2fa0(puVar16,param_3,uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf629c0(param_4);
  puVar19 = puVar18;
  func_0x00010c2abbe0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf61720(param_4);
  puVar20 = puVar19;
  func_0x00010c2aba00(puVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf616e0(param_4);
  _objc_release(param_4);
  puVar21 = puVar20;
  func_0x00010c2ab9e0(param_1,puVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 10901122c; end: 109011287; -[SCSearchActionButtonViewModelCustomConfigBuilder build] */

void FUN_10901122c(long param_1)

{
  _objc_alloc(PTR_PTR_1126d5c58);
  func_0x00010c007c00(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109011288; end: 10901128f; -[SCSearchActionButtonViewModelCustomConfigBuilder withCustomFontSize:] */

void FUN_109011288(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 109011290; end: 109011297; -[SCSearchActionButtonViewModelCustomConfigBuilder withCustomFontStyle:] */

void FUN_109011290(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 109011298; end: 10901129f; -[SCSearchActionButtonViewModelCustomConfigBuilder withCustomBorderRadius:] */

void FUN_109011298(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 1090112a0; end: 1090112a7; -[SCSearchActionButtonViewModelCustomConfigBuilder withCustomBorderWidth:] */

void FUN_1090112a0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 1090112a8; end: 1090112af; -[SCSearchActionButtonViewModelCustomConfigBuilder withCustomButtonHeight:] */

void FUN_1090112a8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 1090112b0; end: 1090112e7; -[SCSearchActionButtonViewModelCustomConfigBuilder withCustomBorderColor:] */

long FUN_1090112b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1090112e8; end: 10901131f; -[SCSearchActionButtonViewModelCustomConfigBuilder withCustomBackgroundColor:] */

long FUN_1090112e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109011320; end: 109011357; -[SCSearchActionButtonViewModelCustomConfigBuilder withCustomForegroundColor:] */

long FUN_109011320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109011358; end: 10901138f; -[SCSearchActionButtonViewModelCustomConfigBuilder withCustomLabelColor:] */

long FUN_109011358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109011390; end: 1090113c7; -[SCSearchActionButtonViewModelCustomConfigBuilder withCustomLoadingColor:] */

long FUN_109011390(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1090113c8; end: 1090113cf; -[SCSearchActionButtonViewModelCustomConfigBuilder withLoadingIndicatorSize:] */

void FUN_1090113c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 1090113d0; end: 1090113d7; -[SCSearchActionButtonViewModelCustomConfigBuilder withCustomTitleLeftOffset:] */

void FUN_1090113d0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x60) = param_1;
  return;
}



/* Entry: 1090113d8; end: 1090113df; -[SCSearchActionButtonViewModelCustomConfigBuilder withCustomImageWidth:] */

void FUN_1090113d8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 1090113e0; end: 1090113e7; -[SCSearchActionButtonViewModelCustomConfigBuilder withCustomImageHeight:] */

void FUN_1090113e0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 1090113e8; end: 10901143b; -[SCSearchActionButtonViewModelCustomConfigBuilder .cxx_destruct] */

void FUN_1090113e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 10901143c; end: 10901149f; -[SCImageView initWithImageFuture:] */

undefined8 FUN_10901143c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010bfe8320(PTR_PTR_1126ae6b8,param_2,0,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c01cb60(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1090114a0; end: 1090114ff; -[SCImageView setImageFuture:] */

/* WARNING: Possible PIC construction at 0x0001090114dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001090114e0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1090114a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010bfe8320(PTR_PTR_1126ae6b8,param_2,0,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1aa630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setImageObservable__1126483b0,puVar1);
  return;
}



/* Entry: 109011500; end: 1090115d7; +[SCObservable imageOnPerformer:provider:] */

void FUN_109011500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae820;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1090115d8;
  puStack_48 = &UNK_11084aaa8;
  uStack_38 = param_4;
  _objc_retain();
  puStack_40 = puVar2;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  puVar1 = puStack_40;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1090115d8; end: 109011633;  */

void FUN_1090115d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 109011634; end: 109011677; +[SCObservable imageOnPerformer:future:] */

void FUN_109011634(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe89e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b9a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109011678; end: 10901172b; +[SCObservable imageResultOnPerformer:future:] */

void FUN_109011678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10901172c;
  puStack_40 = &UNK_11086dbb8;
  _objc_retain();
  puStack_38 = puVar1;
  func_0x00010c297260(param_4,param_2,&puStack_58,param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10901172c; end: 10901178f;  */

void FUN_10901172c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109011790; end: 109011833; +[SCObservable imageNamed:performer:] */

void FUN_109011790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_109011834;
  puStack_40 = &UNK_110853e70;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfe8340(param_1,param_2,param_4,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109011834; end: 109011847;  */

void FUN_109011834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109011848; end: 1090118ff; +[SCObservable resizedImage:imageViewContext:performer:] */

void FUN_109011848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0e0ec0(param_3,param_2,param_5,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0e0ec0(param_4,param_2,param_5,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  uVar2 = param_3;
  func_0x00010bf41860(param_3,param_2,uVar1,&PTR___NSConcreteGlobalBlock_110ad36c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109011900; end: 10901190b;  */

void FUN_109011900(double param_1,double param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain();
  _objc_retain(param_5);
  lVar2 = param_4;
  if ((param_4 != 0) && (param_5 != 0)) {
    func_0x00010c23d0a0(param_4);
    lVar1 = param_5;
    dVar3 = param_1;
    dVar5 = param_2;
    func_0x00010bf4cbe0(param_5);
    func_0x00010bf20c80(param_5);
    dVar4 = param_1;
    FUN_109012970(param_1,param_2,dVar3,dVar5,lVar1);
    if ((dVar4 < param_1) || (param_2 < param_1)) {
      FUN_1090129f0(param_4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_109012bd4;
    }
  }
  _objc_retain(param_4);
LAB_109012bd4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10901190c; end: 1090119c3; +[SCObservable resizedImageResult:imageViewContext:performer:] */

void FUN_10901190c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0e0ec0(param_3,param_2,param_5,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0e0ec0(param_4,param_2,param_5,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  uVar2 = param_3;
  func_0x00010bf41860(param_3,param_2,uVar1,&PTR___NSConcreteGlobalBlock_110ad3700);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1090119c4; end: 109011a57;  */

void FUN_1090119c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0b8600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 109011a58; end: 109011a67;  */

void FUN_109011a58(double param_1,double param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar3 = *(long *)(param_3 + 0x20);
  _objc_retain();
  _objc_retain(lVar3);
  lVar2 = param_4;
  if ((param_4 != 0) && (lVar3 != 0)) {
    func_0x00010c23d0a0(param_4);
    lVar1 = lVar3;
    dVar4 = param_1;
    dVar6 = param_2;
    func_0x00010bf4cbe0(lVar3);
    func_0x00010bf20c80(lVar3);
    dVar5 = param_1;
    FUN_109012970(param_1,param_2,dVar4,dVar6,lVar1);
    if ((dVar5 < param_1) || (param_2 < param_1)) {
      FUN_1090129f0(param_4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_109012bd4;
    }
  }
  _objc_retain(param_4);
LAB_109012bd4:
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 109011a68; end: 109011b23; +[SCObservable imageSynchronizationFutureFromObservables:] */

void FUN_109011a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c31908(param_3,&PTR___NSConcreteGlobalBlock_110ad3740);
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109011b24; end: 109011b97; -[SCObservable synchronizedWith:performer:] */

void FUN_109011b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dce60;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c030b80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109011b98; end: 109011c9f; -[SCObservablePromise initWithObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_109011b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ffd98;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    uVar2 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277fb00);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277fb00) = uVar2;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 109011ca0; end: 109011ce7;  */

void FUN_109011ca0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf43d60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109011ce8; end: 109011d67; -[SCObservablePromise completeWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109011ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_11277fb00;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010bf86d40(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126ffd98;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_completeWithValue__1125ae900,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 109011d68; end: 109011d7b; -[SCObservablePromise .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109011d68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277fb00,0);
  return;
}



/* Entry: 109011d7c; end: 109011ed3; -[SCAfterFutureObservable initWithObservable:performer:future:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_109011d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ffda0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277fb04;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277fb08;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c297260(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 109011ed4; end: 109011eff;  */

void FUN_109011ed4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6af00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109011f00; end: 109011f4b; -[SCAfterFutureObservable _onPromiseComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109011f00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277fb04);
  func_0x00010c25fd20(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277fb0c);
  *(undefined8 *)(param_1 + _DAT_11277fb0c) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109011f4c; end: 109011f9b; -[SCAfterFutureObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109011f4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277fb0c,0);
  _objc_storeStrong(param_1 + _DAT_11277fb08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277fb04,0);
  return;
}



/* Entry: 109011f9c; end: 10901201f; +[SCObservable loadingObservable:targetObservable:failureObservable:] */

void FUN_109011f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dce68;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0267c0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109012020; end: 10901222f; -[SCLoadingAndFailureObservable initWithLoadingObservable:targetObservable:failureObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_109012020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126ffda8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11277fb10;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11277fb14;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11277fb18;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_109012230;
    puStack_88 = &UNK_110846320;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277fb1c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277fb1c) = uVar2;
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277fb20);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277fb20) = uVar2;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 109012230; end: 1090122bf;  */

void FUN_109012230(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d9840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090122c0; end: 10901239f; -[SCLoadingAndFailureObservable _onTargetResult:] */

void FUN_1090122c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1090123a0;
  puStack_38 = &UNK_11084d858;
  uStack_30 = param_1;
  _objc_copyWeak(auStack_58,auStack_28);
  func_0x00010c0c0800(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1090123a0; end: 10901243f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090123a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277fb10);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277fb10) = 0;
  _objc_retain(param_2);
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11277fb1c;
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11277fb24;
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109012440; end: 109012517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109012440(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277fb18);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277fb24);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277fb24) = uVar2;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 109012518; end: 10901255f;  */

void FUN_109012518(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d9840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109012560; end: 1090125df; -[SCLoadingAndFailureObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109012560(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277fb24,0);
  _objc_storeStrong(param_1 + _DAT_11277fb20,0);
  _objc_storeStrong(param_1 + _DAT_11277fb1c,0);
  _objc_storeStrong(param_1 + _DAT_11277fb18,0);
  _objc_storeStrong(param_1 + _DAT_11277fb14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277fb10,0);
  return;
}



/* Entry: 1090125e0; end: 1090125fb; -[SCObservable mapImageToResult] */

void FUN_1090125e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_110ad3780);
  return;
}



/* Entry: 1090125fc; end: 10901264f; -[SCObservable mapResultToImage] */

void FUN_1090125fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfad7a0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110ad37a0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109012650; end: 10901270b;  */

undefined1 FUN_109012650(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10901270c; end: 10901271f;  */

void FUN_10901270c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 109012720; end: 1090127ff;  */

void FUN_109012720(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_109012800;
  uStack_30 = 0x109012810;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109012800; end: 109012817;  */

void FUN_109012800(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 109012818; end: 10901284f;  */

void FUN_109012818(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109012850; end: 1090128bb; -[SCDefaultImageSetter initWithAnimationDuration:animationOptions:imageTimeThreshold:observableTimeThreshold:] */

void FUN_109012850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ffdb0;
  uStack_50 = param_4;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
  }
  return;
}



/* Entry: 1090128bc; end: 10901296f; -[SCDefaultImageSetter runImageBlock:context:view:] */

void FUN_1090128bc(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c26f820(param_5);
  if ((param_1 < *(double *)(param_2 + 0x18)) ||
     (func_0x00010c26f8a0(param_5), param_1 < *(double *)(param_2 + 0x20))) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    func_0x00010c27ac60(*(undefined8 *)(param_2 + 8),PTR__OBJC_CLASS___UIView_1126aec20,param_3,
                        param_6,*(undefined8 *)(param_2 + 0x10),param_4,0);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109012970; end: 1090129ef;  */

undefined1  [16]
FUN_109012970(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_5 - 3U < 10) {
LAB_10901297c:
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  if (param_5 - 1U < 2) {
    if ((((param_2 == 0.0) || (param_4 == 0.0)) || (dVar2 = param_1 / param_2, dVar2 == 0.0)) ||
       (dVar3 = param_3 / param_4, dVar3 == 0.0)) goto LAB_10901297c;
    bVar1 = dVar2 != dVar3 && dVar2 >= dVar3;
    if (param_5 != 1) {
      bVar1 = dVar2 < dVar3;
    }
    if (bVar1) {
      auVar5._8_8_ = param_3 / dVar2;
      auVar5._0_8_ = param_3;
      return auVar5;
    }
    param_3 = dVar2 * param_4;
  }
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 1090129f0; end: 109012b1b;  */

void FUN_1090129f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = param_3;
    _objc_retainAutorelease(param_3);
    iVar1 = (int)lVar2;
    func_0x00010bdc1020();
    _CGImageGetAlphaInfo();
    puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
    _objc_opt_new(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    func_0x00010c14e120(param_3);
    func_0x00010c1f5fe0(puVar3);
    func_0x00010c1d4c20(puVar3,param_4,iVar1 - 5U < 0xfffffffc);
    puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010c046ac0(param_1,param_2);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_109012b1c;
    puStack_60 = &UNK_110866440;
    _objc_retain(param_3);
    puVar5 = puVar4;
    lStack_58 = param_3;
    uStack_50 = param_1;
    uStack_48 = param_2;
    func_0x00010bfe91c0(puVar4,param_4,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_58);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109012b1c; end: 109012b33;  */

void FUN_109012b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 109012b34; end: 109012bfb;  */

void FUN_109012b34(double param_1,double param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain();
  _objc_retain(param_4);
  lVar2 = param_3;
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x00010c23d0a0(param_3);
    lVar1 = param_4;
    dVar3 = param_1;
    dVar5 = param_2;
    func_0x00010bf4cbe0(param_4);
    func_0x00010bf20c80(param_4);
    dVar4 = param_1;
    FUN_109012970(param_1,param_2,dVar3,dVar5,lVar1);
    if ((dVar4 < param_1) || (param_2 < param_1)) {
      FUN_1090129f0(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_109012bd4;
    }
  }
  _objc_retain(param_3);
LAB_109012bd4:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 109012bfc; end: 109012d37; -[SCImageView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109012bfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffdb8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    func_0x00010c17d4c0(puVar1);
    func_0x00010c182220(puVar1);
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277fb38) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277fb3c) = param_1;
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277fb40);
    *(undefined **)((long)puVar1 + (long)_DAT_11277fb40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    lVar5 = (long)_DAT_11277fb44;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277fb48);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277fb48) = uVar3;
    _objc_release(uVar4);
    func_0x00010be9a780(puVar1);
    puVar2 = PTR_PTR_1126dce70;
    _objc_alloc(PTR_PTR_1126dce70);
    func_0x00010bff2f40(0x3fc99999a0000000,0,0x3fc99999a0000000);
    func_0x00010c1aa9a0(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109012d38; end: 109012da3; -[SCImageView initWithImageObservable:] */

undefined1 * FUN_109012d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffdb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1aa620(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109012da4; end: 109012e17; -[SCImageView initWithImage:] */

undefined8 FUN_109012da4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    func_0x00010c01cb60(param_1);
    _objc_retain();
  }
  else {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01cb60(param_1,param_2,puVar1);
    _objc_retain();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  return param_1;
}



/* Entry: 109012e18; end: 1090130ab; -[SCImageView setImageObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109012e18(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  lVar9 = (long)_DAT_11277fb40;
  uVar5 = *(undefined8 *)(param_2 + lVar9);
  _objc_retain(uVar5);
  _objc_sync_enter(uVar5);
  lVar8 = (long)_DAT_11277fb4c;
  uVar6 = *(ulong *)(param_2 + lVar8);
  _objc_retain(uVar6);
  _objc_retain(param_4);
  if (uVar6 == param_4) {
    _objc_release(param_4);
    _objc_release(uVar6);
  }
  else {
    if (param_4 == 0) {
      _objc_release(uVar6);
    }
    else {
      uVar1 = uVar6;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(uVar6);
      if ((uVar1 & 1) != 0) goto LAB_109013028;
    }
    func_0x00010bf86d80(*(undefined8 *)(param_2 + lVar9));
    uVar2 = *(undefined8 *)(param_2 + lVar8);
    *(undefined8 *)(param_2 + lVar8) = 0;
    _objc_release(uVar2);
    puVar3 = auStack_78;
    _objc_initWeak(puVar3,param_2);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1090130ac;
    puStack_88 = &UNK_1108434b0;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c0f88c0(puVar3);
    _objc_release(puVar3);
    if (param_4 != 0) {
      _objc_retain(param_4);
      uVar4 = *(undefined8 *)(param_2 + lVar8);
      *(ulong *)(param_2 + lVar8) = param_4;
      _objc_release(uVar4);
      _CACurrentMediaTime();
      *(undefined8 *)(param_2 + _DAT_11277fb38) = param_1;
      uVar7 = *(undefined8 *)(param_2 + lVar8);
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e0ec0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a8,auStack_78);
      uVar2 = uVar7;
      func_0x00010c25ff60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar2);
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_a8);
    }
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
LAB_109013028:
  _objc_sync_exit(uVar5);
  _objc_release(uVar5);
  _objc_release(param_4);
  return;
}



/* Entry: 1090130ac; end: 109013123;  */

void FUN_1090130ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9a7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109013124; end: 10901316b; -[SCImageView setContentMode:] */

void FUN_109013124(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ffdb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setContentMode__11263e2a8);
  func_0x00010be9a780(param_1);
  return;
}



/* Entry: 10901316c; end: 1090131b3; -[SCImageView layoutSubviews] */

void FUN_10901316c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ffdb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be9a780(param_1);
  return;
}



/* Entry: 1090131b4; end: 10901320b; -[SCImageView setImage:] */

/* WARNING: Possible PIC construction at 0x0001090131e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001090131ec) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1090131b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1aa630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setImageObservable__1126483b0,puVar1);
  return;
}



/* Entry: 10901320c; end: 109013287; -[SCImageView _sc_publishViewContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10901320c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dce78;
  _objc_alloc(PTR_PTR_1126dce78);
  func_0x00010bf20c00(param_5);
  lVar2 = param_5;
  func_0x00010bf4cbe0(param_5);
  func_0x00010bff9580(param_3,param_4,puVar1,param_6,lVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_5 + _DAT_11277fb44),param_6,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109013288; end: 1090132df; -[SCImageView _sc_final_setImage:currentTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109013288(undefined8 param_1,long param_2)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ffdb8;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setImage__1126481e8);
  *(undefined8 *)(param_2 + _DAT_11277fb3c) = param_1;
  return;
}



/* Entry: 1090132e0; end: 10901347b; -[SCImageView _sc_setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090132e0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  double dStack_60;
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_90;
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_2);
  _CACurrentMediaTime();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10901347c;
  puStack_78 = &UNK_110842a68;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uStack_70 = param_4;
  dStack_60 = param_1;
  _objc_retainBlock();
  lVar2 = param_2;
  func_0x00010bfe8b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    puVar3 = PTR_PTR_1126dce80;
    _objc_alloc(PTR_PTR_1126dce80);
    func_0x00010c019c80(param_1 - *(double *)(param_2 + _DAT_11277fb38),
                        param_1 - *(double *)(param_2 + _DAT_11277fb3c));
    func_0x00010bfe8b60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142860();
    _objc_release(param_2);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 10901347c; end: 1090134b3;  */

void FUN_10901347c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be9a740(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1090134b4; end: 1090134c3; -[SCImageView imageObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1090134b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277fb4c);
}



/* Entry: 1090134c4; end: 1090134d3; -[SCImageView viewContextObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1090134c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277fb48);
}



/* Entry: 1090134d4; end: 1090134e3; -[SCImageView imageSetter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1090134d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277fb50);
}



/* Entry: 1090134e4; end: 109013523; -[SCImageView setImageSetter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090134e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277fb50;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109013524; end: 109013593; -[SCImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109013524(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277fb50,0);
  _objc_storeStrong(param_1 + _DAT_11277fb4c,0);
  _objc_storeStrong(param_1 + _DAT_11277fb48,0);
  _objc_storeStrong(param_1 + _DAT_11277fb44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277fb40,0);
  return;
}



/* Entry: 109013594; end: 1090135ef; -[SCImageSetterContext initWithHasImage:timeSinceObservableSet:timeSinceLastImageSet:] */

void FUN_109013594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffdc0;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  return;
}



/* Entry: 1090135f0; end: 109013613; -[SCImageSetterContext copyWithZone:] */

undefined8 FUN_1090135f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109013614; end: 1090136af; -[SCImageSetterContext hash] */

ulong * FUN_109013614(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  double dVar6;
  double dVar7;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_28 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_20 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((ulong)puVar3 & 1) != 0) && (*(char *)((long)puVar2 + 8) == param_3[8])) {
        dVar7 = ABS(*(double *)((long)puVar2 + 0x10) - *(double *)(param_3 + 0x10));
        dVar6 = ABS(*(double *)((long)puVar2 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar6))) {
          bVar1 = dVar7 < dVar6;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)((long)puVar2 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          if (dVar6 <= 2.2250738585072014e-308) {
            dVar6 = 2.2250738585072014e-308;
          }
          puVar5 = (undefined1 *)
                   (ulong)(ABS(*(double *)((long)puVar2 + 0x18) - *(double *)(param_3 + 0x18)) <
                          dVar6);
          goto LAB_109013784;
        }
      }
      puVar5 = (undefined1 *)0x0;
    }
  }
LAB_109013784:
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 1090136b0; end: 10901379f; -[SCImageSetterContext isEqual:] */

bool FUN_1090136b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
        dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          if (dVar4 <= 2.2250738585072014e-308) {
            dVar4 = 2.2250738585072014e-308;
          }
          bVar1 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar4;
          goto LAB_109013784;
        }
      }
      bVar1 = false;
    }
  }
LAB_109013784:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1090137a0; end: 1090137a7; -[SCImageSetterContext hasImage] */

undefined1 FUN_1090137a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1090137a8; end: 1090137af; -[SCImageSetterContext timeSinceObservableSet] */

undefined8 FUN_1090137a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090137b0; end: 1090137b7; -[SCImageSetterContext timeSinceLastImageSet] */

undefined8 FUN_1090137b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1090137b8; end: 109013813; -[SCImageViewContext initWithBoundsSize:contentMode:] */

void FUN_1090137b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffdc8;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 8) = param_5;
  }
  return;
}



/* Entry: 109013814; end: 109013837; -[SCImageViewContext copyWithZone:] */

undefined8 FUN_109013814(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109013838; end: 1090138db; -[SCImageViewContext hash] */

ulong * FUN_109013838(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uStack_30;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar3 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 8);
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  lStack_20 = -lVar2;
  if (-1 < lVar2) {
    lStack_20 = lVar2;
  }
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar7 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar7);
      if ((((ulong)puVar4 & 1) == 0) || (*(long *)((long)puVar3 + 8) != *(long *)(param_3 + 8))) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        uVar5 = 0;
        if (*(double *)((long)puVar3 + 0x18) == *(double *)(param_3 + 0x18)) {
          uVar5 = (uint)(*(double *)((long)puVar3 + 0x10) == *(double *)(param_3 + 0x10));
        }
        puVar7 = (undefined1 *)(ulong)uVar5;
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar7;
}


