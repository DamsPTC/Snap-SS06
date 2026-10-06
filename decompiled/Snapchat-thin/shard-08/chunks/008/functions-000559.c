/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066a2b5c; end: 1066a2c7f; -[SCLensExplorerHeroCellViewModel imageForElementId:] */

void FUN_1066a2b5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010be49120();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_1066a29b8;
    uStack_50 = 0x1066a29c8;
    uStack_48 = 0;
    lVar1 = param_1;
    func_0x00010bf8d280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be4c0();
    _objc_release(lVar1);
    uVar2 = puStack_68[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066a2c80; end: 1066a2d03;  */

void FUN_1066a2c80(long param_1,undefined8 param_2)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1066a2d04;
  puStack_28 = &UNK_110881c40;
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066a2d48;
  puStack_60 = &UNK_110933d38;
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_20 = uStack_58;
  uStack_18 = uStack_50;
  func_0x00010c0bf500(param_2,param_2,&puStack_40,&puStack_78);
  return;
}



/* Entry: 1066a2d04; end: 1066a2d47;  */

void FUN_1066a2d04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be37180(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1066a2d48; end: 1066a2dd3;  */

void FUN_1066a2d48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfab820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066a2dd4; end: 1066a2fe7; -[SCLensExplorerHeroCellViewModel prefetchImageUrls] */

void FUN_1066a2dd4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_1066a29b8;
  uStack_110 = 0x1066a29c8;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar2;
  func_0x00010bfe0f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf8d2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar5 = *(undefined8 *)(lVar6 * 8);
      func_0x00010bf8d280(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0be4c0();
      _objc_release(uVar5);
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  uVar5 = puStack_128[5];
  _objc_retain(uVar5);
  __Block_object_dispose(&uStack_130,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  uVar5 = 8;
  __Block_object_dispose(&uStack_130,8);
  __Unwind_Resume();
  func_0x00010c0bf500(uVar5);
  return;
}



/* Entry: 1066a2fe8; end: 1066a3043;  */

void FUN_1066a2fe8(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1066a3044;
  puStack_28 = &UNK_1108b17b8;
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bf500(param_2,param_2,0,&puStack_40);
  return;
}



/* Entry: 1066a3044; end: 1066a30bf;  */

void FUN_1066a3044(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  _objc_retain(param_2);
  func_0x00010bf8d1c0(uVar1);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1066a30c0; end: 1066a3103; -[SCLensExplorerHeroCellViewModel deepLinkUrl] */

void FUN_1066a30c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe0f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf68980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a3104; end: 1066a31a7; -[SCLensExplorerHeroCellViewModel _layoutElementForId:] */

void FUN_1066a3104(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfe0f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf8d2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066a31a8; end: 1066a31d7;  */

bool FUN_1066a31a8(long param_1,long param_2)

{
  func_0x00010bf8d1c0(param_2);
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 1066a31d8; end: 1066a3203; -[SCLensExplorerHeroCellViewModel _imageForPredefinedIcon:] */

void FUN_1066a31d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x00010921ddc8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066a3204; end: 1066a322f; -[SCLensExplorerHeroCellViewModel _imageForPredefinedTextIcon:] */

void FUN_1066a3204(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x00010921d874();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066a3230; end: 1066a3273; -[SCLensExplorerHeroCellViewModel heroId] */

void FUN_1066a3230(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe0f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe0e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a3274; end: 1066a32b7; -[SCLensExplorerHeroCellViewModel heroDeepLinkUrl] */

void FUN_1066a3274(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe0f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf68980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a32b8; end: 1066a32fb; -[SCLensExplorerHeroCellViewModel heroLoggingInfo] */

void FUN_1066a32b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe0f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a32fc; end: 1066a333f; -[SCLensExplorerHeroCellViewModel loggingIdentifier] */

void FUN_1066a32fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe0f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe0e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a3340; end: 1066a3383; -[SCLensExplorerHeroCellViewModel loggingInfo] */

void FUN_1066a3340(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe0f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a3384; end: 1066a34eb; +[SCLensExplorerLensCellViewModel loadingCellViewModelWithConfiguration:] */

void FUN_1066a3384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ccc38;
  _objc_alloc(PTR_PTR_1126ccc38);
  uVar4 = 0;
  func_0x00010c0591c0();
  puVar2 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0913a0();
  uVar5 = uVar4;
  uVar6 = param_2;
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c091360();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cce90;
  _objc_opt_new(PTR_PTR_1126cce90);
  func_0x00010c2b29e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa440(puVar2,param_4,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ae920(uVar4,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5e20(uVar5,uVar6,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066a34ec; end: 1066a3efb; +[SCLensExplorerLensCellViewModel cellViewModelWithLensExplorerItem:configuration:index:sectionIndex:isTextRightToLeftDirection:styleOverride:] */

void FUN_1066a34ec(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined *puStack_c8;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = param_6;
  func_0x00010bf68f80();
  ppuVar5 = param_5;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bfe8fa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010bf529e0();
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar7 = param_5;
    func_0x00010c26e0a0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = ppuVar7 != (undefined **)0x0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  if ((bool)(uVar4 == 2 & bVar1)) {
    uVar4 = 1;
  }
  uVar8 = param_6;
  func_0x00010c0cde20();
  puVar9 = PTR_PTR_1126cc910;
  func_0x00010bfa3860();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 == 2) {
    puVar10 = puVar9;
    func_0x00010c27d960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126cc910;
    func_0x00010bfa3860();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar9;
    func_0x00010c27d8e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_c8 = puVar9;
    func_0x00010c0b6b60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR____NSDictionary0__struct_11034ab58;
  }
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  ppuVar6 = param_5;
  func_0x00010c095760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar5 = ppuVar6;
  }
  func_0x00010c04e840(puVar9,param_4,ppuVar5,puVar10);
  _objc_release(ppuVar6);
  ppuVar6 = param_5;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar5 = ppuVar7;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar6 = param_5;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c0e1aa0();
  _objc_release(ppuVar6);
  if ((int)ppuVar7 != 0) {
    ppuVar6 = param_5;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c0e1aa0();
    ppuVar12 = param_5;
    func_0x00010bf5b080(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d940();
    _objc_release(ppuVar12);
    _objc_release(ppuVar6);
    uVar13 = (ulong)ppuVar7 & 0xffffffff;
    func_0x000108f470a4();
    _objc_retainAutoreleasedReturnValue();
    if (uVar13 != 0) {
      puVar14 = PTR_PTR_1126cc910;
      func_0x00010bfa3860(PTR_PTR_1126cc910);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar14;
      func_0x00010c094aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0920c0();
      _objc_release(puVar18);
      _objc_release(puVar14);
      uVar15 = uVar13;
      func_0x00010c14e680(uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      func_0x00010befa120(puVar11,param_4,uVar15);
      _objc_release(uVar15);
    }
  }
  uVar13 = param_6;
  func_0x00010bf5b5e0();
  if ((int)uVar13 != 0) {
    if ((param_9 & 1) == 0) {
      func_0x00010921d874();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010921d8f0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar15 = uVar13;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    if (uVar15 != 0) {
      func_0x00010befa120(puVar11,param_4,uVar15);
    }
    _objc_release(uVar15);
  }
  func_0x00010b8047e8(ppuVar5);
  puVar14 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e840();
  puVar18 = puVar14;
  func_0x00010bf0e480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0x400000ce);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdced00(param_3,param_4,puVar18,puVar14,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126cce78;
  ppuVar6 = param_5;
  func_0x00010c0b3ae0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0932c0(puVar14,param_4,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  func_0x00010c2afc20(puVar14,param_4,param_7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7e60(puVar14,param_4,param_8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0913a0();
  dVar19 = param_1;
  dVar24 = param_2;
  _objc_release(puVar18);
  puVar18 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c091360();
  dVar20 = dVar19;
  dVar25 = dVar24;
  _objc_release(puVar18);
  puVar18 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0944a0();
  dVar21 = dVar20;
  dVar26 = dVar25;
  _objc_release(puVar18);
  puVar18 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar18;
  func_0x00010c094aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247fe0();
  dVar22 = dVar21;
  _objc_release(puVar16);
  _objc_release(puVar18);
  if (uVar8 == 2) {
    puVar18 = PTR_PTR_1126cc910;
    func_0x00010bfa3860(PTR_PTR_1126cc910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d920();
    dVar19 = dVar22;
    dVar24 = dVar26;
    _objc_release(puVar18);
    puVar18 = PTR_PTR_1126cc910;
    func_0x00010bfa3860(PTR_PTR_1126cc910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d900();
    dVar27 = dVar19;
    dVar30 = dVar24;
    _objc_release(puVar18);
    puVar18 = PTR_PTR_1126cc910;
    func_0x00010bfa3860(PTR_PTR_1126cc910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d940();
    puVar16 = PTR_PTR_1126cc910;
    dVar23 = dVar27;
    func_0x00010bfa3860(PTR_PTR_1126cc910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d940();
    dVar28 = (dVar24 - dVar25) - dVar30;
    _objc_release(puVar16);
    _objc_release(puVar18);
    param_1 = dVar22;
    param_2 = dVar26;
    bVar1 = true;
  }
  else {
    dVar27 = *(double *)PTR__CGPointZero_110347540;
    dVar28 = *(double *)(PTR__CGPointZero_110347540 + 8);
    bVar2 = true;
    bVar1 = true;
    dVar23 = dVar22;
    dVar30 = dVar26;
    if ((uVar4 < 5) && ((1L << (uVar4 & 0x3f) & 0x16U) != 0)) {
      func_0x00010c1083c0(param_6);
      dVar19 = dVar22;
      dVar24 = dVar26;
      if (uVar4 == 4) {
        func_0x00010c111c60(PTR_PTR_1126ccab0);
      }
      else {
        ppuVar6 = param_5;
        func_0x00010bf039a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x00010bfe8fa0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar7;
        func_0x00010bf529e0();
        if (ppuVar12 == (undefined **)0x0) {
          ppuVar12 = param_5;
          func_0x00010c26e0a0();
          _objc_retainAutoreleasedReturnValue();
          bVar2 = ppuVar12 == (undefined **)0x0;
          _objc_release();
        }
        else {
          bVar2 = false;
        }
        _objc_release(ppuVar7);
        _objc_release(ppuVar6);
      }
      dVar27 = (dVar19 - dVar20) * 0.5;
      dVar28 = (dVar24 - dVar25) * 0.5;
      dVar23 = dVar24 - dVar25;
      dVar30 = 0.5;
      param_1 = dVar22;
      param_2 = dVar26;
      bVar1 = bVar2;
    }
  }
  if (uVar4 == 3) {
    puVar18 = PTR_PTR_1126cc910;
    func_0x00010bfa3860(PTR_PTR_1126cc910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa12e0();
    _objc_release(puVar18);
    dVar27 = 1.0;
    dVar28 = 1.0;
    param_1 = dVar23;
    param_2 = dVar30;
  }
  func_0x00010b816528();
  func_0x00010b81662c();
  puVar18 = PTR_PTR_1126cc910;
  dVar22 = dVar19;
  dVar26 = dVar24;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0900e0();
  _objc_release(puVar18);
  uVar8 = param_6;
  func_0x00010c29c5e0();
  if ((int)uVar8 != 0) {
    ppuVar6 = param_5;
    func_0x00010c29c5c0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar7 = param_5;
      func_0x00010c29c5c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar7;
      func_0x00010c067fc0();
      if ((long)ppuVar12 < 1) {
        _objc_release(ppuVar7);
        puVar18 = (undefined *)0x0;
      }
      else {
        ppuVar12 = param_5;
        func_0x00010c07f200();
        _objc_release(ppuVar7);
        _objc_release(ppuVar6);
        puVar18 = PTR_PTR_1126b10c8;
        if (((ulong)ppuVar12 & 1) != 0) goto LAB_1066a3cac;
        ppuVar6 = param_5;
        func_0x00010c29c5c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        func_0x00010c22d8c0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar6);
      goto LAB_1066a3d00;
    }
  }
LAB_1066a3cac:
  puVar18 = (undefined *)0x0;
LAB_1066a3d00:
  uVar8 = param_6;
  func_0x00010c095780();
  dVar23 = 0.0;
  dVar30 = 20.0;
  if ((int)uVar8 == 0) {
    dVar30 = 0.0;
  }
  func_0x00010b816218(0);
  dVar29 = (double)(long)(param_1 * dVar23) / dVar23;
  func_0x00010b816218();
  puVar16 = PTR_PTR_1126ccc18;
  _objc_alloc();
  puVar17 = puVar14;
  func_0x00010bf21f60(puVar14);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_5;
  func_0x00010c2b3180(param_5,param_4,puVar17);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_5;
  func_0x00010c07f200();
  uVar3 = SUB81(ppuVar7,0);
  if (puVar18 != (undefined *)0x0) {
    uVar3 = 1;
  }
  func_0x00010bfeda00();
  func_0x00010bf5b5e0();
  func_0x00010c07f200();
  func_0x00010c07d340();
  func_0x00010c024c60(0,0,0,0,dVar21,dVar29,(double)(long)((param_2 + dVar30) * dVar23) / dVar23,
                      puVar16,param_4,ppuVar6,uVar4,param_3,puVar9,0,0,dVar19,dVar24,dVar22,dVar26,
                      dVar27,dVar28,dVar20,dVar25,0,uVar3,bVar1,puVar18,(char)uVar8);
  _objc_release(ppuVar6);
  _objc_release(puVar17);
  _objc_release(puVar18);
  _objc_release(puVar14);
  _objc_release(param_3);
  _objc_release(puVar11);
  _objc_release(ppuVar5);
  _objc_release(puVar9);
  _objc_release(puStack_c8);
  _objc_release(puVar10);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1066a3efc; end: 1066a3f7f; +[SCLensExplorerLensCellViewModel cellViewModelWithViewModel:previewImage:] */

void FUN_1066a3efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cce90;
  func_0x00010c093220(PTR_PTR_1126cce90,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5d60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066a3f80; end: 1066a4003; +[SCLensExplorerLensCellViewModel cellViewModelWithViewModel:iconImage:] */

void FUN_1066a3f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cce90;
  func_0x00010c093220(PTR_PTR_1126cce90,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2af920();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066a4004; end: 1066a4087; +[SCLensExplorerLensCellViewModel cellViewModelWithViewModel:atrributionIcon:] */

void FUN_1066a4004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cce90;
  func_0x00010c093220(PTR_PTR_1126cce90,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8b00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066a4088; end: 1066a40fb; +[SCLensExplorerLensCellViewModel cellViewModelWithoutImagesWithViewModel:] */

void FUN_1066a4088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cce90;
  func_0x00010c093220(PTR_PTR_1126cce90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5d60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af920(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066a40fc; end: 1066a419f; +[SCLensExplorerLensCellViewModel cellViewModelWithViewModel:selectedState:] */

void FUN_1066a40fc(undefined8 param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c07d660();
  if (param_4 == (int)puVar1) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar2 = PTR_PTR_1126cce90;
    func_0x00010c093220(PTR_PTR_1126cce90,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1440();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066a41a0; end: 1066a43d3; +[SCLensExplorerLensCellViewModel cellViewModelWithViewModel:selectedState:hasNewContent:consecutiveDaysPlayed:] */

void FUN_1066a41a0(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c07d660();
  puVar2 = param_3;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf48fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c067fc0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfd96a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf1f3c0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((((int)param_4 == (int)puVar1) && (puVar4 == param_6)) &&
     ((((uint)param_5 ^ (uint)puVar5) & 1) == 0)) {
    _objc_retain(param_3);
    puVar3 = param_3;
  }
  else {
    puVar2 = PTR_PTR_1126cce90;
    func_0x00010c093220(PTR_PTR_1126cce90,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cce98;
    puVar3 = param_3;
    func_0x00010c094be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c093260(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2af3a0(puVar1,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aaca0(puVar1,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b29e0(puVar2,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c2b1440(puVar2,param_2,param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066a43d4; end: 1066a44ef; +[SCLensExplorerLensCellViewModel _applyToAttributedString:color:exclusingString:] */

void FUN_1066a43d4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11f420();
  _objc_release(param_5);
  _objc_release(lVar1);
  if (lVar2 == 0x7fffffffffffffff) {
    _objc_retain();
    lVar2 = param_3;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0d3c80(param_3);
    if (lVar2 != 0) {
      func_0x00010bef6f20(lVar1);
    }
    lVar3 = param_3;
    func_0x00010c08fa60();
    if (0 < lVar3 - (lVar2 + param_2)) {
      func_0x00010bef6f20(lVar1);
    }
    lVar2 = lVar1;
    func_0x00010bf51e00(lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1066a44f0; end: 1066a4533; -[SCLensExplorerLensCellViewModel diffIdentifier] */

void FUN_1066a44f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a4534; end: 1066a4577; -[SCLensExplorerLensCellViewModel loggingIdentifier] */

void FUN_1066a4534(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a4578; end: 1066a45bb; -[SCLensExplorerLensCellViewModel loggingInfo] */

void FUN_1066a4578(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a45bc; end: 1066a45c7; -[SCLensExplorerLoadingCellViewModel diffIdentifier] */

undefined ** FUN_1066a45bc(void)

{
  return &PTR____CFConstantStringClassReference_110e59258;
}



/* Entry: 1066a45c8; end: 1066a46d7; +[SCLensExplorerStoryViewModel cellViewModelWithStoryItem:index:sectionIndex:isTextRightToLeftDirection:] */

void FUN_1066a45c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bddc420(param_3,param_4,param_5);
  puVar3 = PTR_PTR_1126b10c8;
  lVar2 = param_5;
  func_0x00010c29c5c0(param_5);
  dVar5 = (double)lVar2;
  func_0x00010c22d8e0(dVar5,puVar3,param_4,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76e20(param_3,param_4,uVar1);
  func_0x00010bee5380(param_3,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar4 = PTR_PTR_1126cce60;
  _objc_alloc(PTR_PTR_1126cce60);
  func_0x00010c04dd80(dVar5,param_2);
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066a46d8; end: 1066a475b; +[SCLensExplorerStoryViewModel cellViewModelWithViewModel:previewImage:] */

void FUN_1066a46d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ccea0;
  func_0x00010c0937a0(PTR_PTR_1126ccea0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5d60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066a475c; end: 1066a4877; +[SCLensExplorerStoryViewModel _updatedLoggingIndexForStoryItem:index:sectionIndex:] */

void FUN_1066a475c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126cce78;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0932c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c2afc20(puVar2,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7e60(puVar2,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccea8;
  func_0x00010c093720(PTR_PTR_1126ccea8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar3,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066a4878; end: 1066a496f; +[SCLensExplorerStoryViewModel _cellTypeForStoryItem:] */

undefined8 FUN_1066a4878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar1 = param_3;
  func_0x00010bf0cb60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0540();
  _objc_release(uVar1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1066a4970; end: 1066a4993;  */

void FUN_1066a4970(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1066a4994; end: 1066a4a13; +[SCLensExplorerStoryViewModel _preferredSizeForCellType:] */

undefined1  [16]
FUN_1066a4994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined *puVar1;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_PTR_1126cc910;
  if (param_5 == 1) {
    func_0x00010bfa3860(PTR_PTR_1126cc910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0976c0();
  }
  else {
    if (param_5 != 0) goto LAB_1066a49fc;
    func_0x00010bfa3860(PTR_PTR_1126cc910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259480();
  }
  _objc_release(puVar1);
  unaff_d8 = param_1;
  unaff_d9 = param_2;
LAB_1066a49fc:
  auVar2._8_8_ = unaff_d9;
  auVar2._0_8_ = unaff_d8;
  return auVar2;
}



/* Entry: 1066a4a14; end: 1066a4a57; -[SCLensExplorerStoryViewModel diffIdentifier] */

void FUN_1066a4a14(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c25a020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a4a58; end: 1066a4a9b; -[SCLensExplorerStoryViewModel loggingIdentifier] */

void FUN_1066a4a58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c25a020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a4a9c; end: 1066a4adf; -[SCLensExplorerStoryViewModel loggingInfo] */

void FUN_1066a4a9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c25a020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a4ae0; end: 1066a4b3b; -[SCLensExplorerCellGradientView gradientLayer] */

void FUN_1066a4ae0(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066a4b3c; end: 1066a4b47; +[SCLensExplorerCellGradientView layerClass] */

void FUN_1066a4b3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 1066a4b48; end: 1066a4cef; -[SCLensExplorerCellGradientView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1066a4b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_1126f25c8;
  puVar1 = &uStack_68;
  uStack_68 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar8 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar2);
    puVar8 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    _objc_retain(puVar8);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_58 = puVar5;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    param_5 = 2;
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
    func_0x00010c1bff00(puVar8);
    func_0x00010c200c80(puVar8);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    ppuVar9 = &puStack_c0;
    puStack_b8 = PTR_PTR_1126f25d0;
    puStack_c0 = puVar8;
    _objc_msgSendSuper2(&puStack_c0,PTR_s_initWithFrame__1125e2948);
    if (ppuVar9 != (undefined8 **)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23bae0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)((long)ppuVar9 + (long)_DAT_11274dc48);
      *(undefined **)((long)ppuVar9 + (long)_DAT_11274dc48) = puVar2;
      _objc_release(uVar10);
      *(long *)((long)ppuVar9 + (long)_DAT_11274dc4c) = param_5;
      if (param_5 == 0) {
        param_1 = 0x402c000000000000;
      }
      else {
        if (param_5 != 1) {
          return ppuVar9;
        }
        func_0x00010bddeac0(ppuVar9);
      }
      puVar1 = ppuVar9;
      func_0x00010c08c0e0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(param_1);
      _objc_release(puVar1);
      puVar1 = ppuVar9;
      func_0x00010c08c0e0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1733a0(0x4000000000000000);
      _objc_release(puVar1);
    }
    return ppuVar9;
  }
  return puVar1;
}



/* Entry: 1066a4cf0; end: 1066a4df7; -[SCLensExplorerCellSelectionIndicatorView initWithFrame:styleOverride:selectionStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1066a4cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f25d0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274dc48);
    *(undefined **)((long)puVar1 + (long)_DAT_11274dc48) = puVar2;
    _objc_release(uVar4);
    *(long *)((long)puVar1 + (long)_DAT_11274dc4c) = param_5;
    if (param_5 == 0) {
      param_1 = 0x402c000000000000;
    }
    else {
      if (param_5 != 1) {
        return (undefined1 *)puVar1;
      }
      func_0x00010bddeac0(puVar1);
    }
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_1);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x4000000000000000);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066a4df8; end: 1066a4e3b; -[SCLensExplorerCellSelectionIndicatorView showIndicatorWithExclusiveStyle:] */

void FUN_1066a4df8(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    func_0x00010beacd60();
    func_0x00010beb9500(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be35d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideSolidBorder_11256b0e8);
    return;
  }
  func_0x00010be357a0();
                    /* WARNING: Could not recover jumptable at 0x00010bebb010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showSolidBorder_11258c5a8);
  return;
}



/* Entry: 1066a4e3c; end: 1066a4f23; -[SCLensExplorerCellSelectionIndicatorView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a4e3c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f25d0;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  if (*(long *)(param_2 + _DAT_11274dc4c) == 1) {
    func_0x00010bddeac0(param_2);
    lVar3 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_1);
    _objc_release(lVar3);
  }
  lVar3 = (long)_DAT_11274dc50;
  if (*(long *)(param_2 + lVar3) != 0) {
    func_0x00010bf20c00(param_2);
    func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar3));
    lVar1 = param_2;
    func_0x00010bee53c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + _DAT_11274dc54);
    *(long *)(param_2 + _DAT_11274dc54) = lVar1;
    _objc_release(uVar2);
    func_0x00010c1c2c00(*(undefined8 *)(param_2 + lVar3));
  }
  return;
}



/* Entry: 1066a4f24; end: 1066a5183; -[SCLensExplorerCellSelectionIndicatorView _setupGradientBorderIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a4f24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11274dc50;
  if (*(long *)(param_1 + lVar10) == 0) {
    puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar1;
    _objc_release(uVar9);
    func_0x00010bf20c00(param_1);
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar10));
    func_0x00010c21acc0(*(undefined8 *)(param_1 + lVar10));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar10));
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c209760(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)(param_1 + lVar10));
    func_0x00010c196020(0x3fe0000000000000,0,*(undefined8 *)(param_1 + lVar10));
    lVar7 = param_1;
    func_0x00010bee53c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11274dc54);
    *(long *)(param_1 + _DAT_11274dc54) = lVar7;
    _objc_release(uVar9);
    func_0x00010c1c2c00(*(undefined8 *)(param_1 + lVar10));
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274dc50),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 1066a5184; end: 1066a5197; -[SCLensExplorerCellSelectionIndicatorView _showGradientBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a5184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274dc50),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 1066a5198; end: 1066a51ab; -[SCLensExplorerCellSelectionIndicatorView _hideGradientBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a5198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274dc50),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 1066a51ac; end: 1066a51fb; -[SCLensExplorerCellSelectionIndicatorView _showSolidBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a51ac(long param_1)

{
  func_0x00010bdc0fe0(*(undefined8 *)(param_1 + _DAT_11274dc48));
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066a51fc; end: 1066a526f; -[SCLensExplorerCellSelectionIndicatorView _hideSolidBorder] */

void FUN_1066a51fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066a5270; end: 1066a53ef; -[SCLensExplorerCellSelectionIndicatorView _updatedMaskLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a5270(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if (*(long *)(param_1 + _DAT_11274dc4c) == 0) {
    func_0x00010bf20c00(param_1);
    func_0x00010bf19a00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(param_1);
    _CGRectInset();
    func_0x00010bf19a00(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + _DAT_11274dc4c) == 1) {
    func_0x00010bf20c00(param_1);
    func_0x00010bf199a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(param_1);
    _CGRectInset();
    func_0x00010bf199a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  func_0x00010bf06f40(puVar2,param_2,puVar4);
  func_0x00010bf06f40(puVar2,param_2,puVar5);
  puVar3 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1,param_2,puVar3);
  func_0x00010c19bc80(puVar1,param_2,*(undefined8 *)PTR__kCAFillRuleEvenOdd_110346ce8);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066a53f0; end: 1066a540f; -[SCLensExplorerCellSelectionIndicatorView _circleCornerRadius] */

double FUN_1066a53f0(double param_1)

{
  func_0x00010bf20c00();
  _CGRectGetWidth();
  return param_1 * 0.5;
}



/* Entry: 1066a5410; end: 1066a545f; -[SCLensExplorerCellSelectionIndicatorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a5410(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274dc48,0);
  _objc_storeStrong(param_1 + _DAT_11274dc54,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274dc50,0);
  return;
}



/* Entry: 1066a5460; end: 1066a5503; -[SCLensExplorerLensInfoView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1066a5460(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f25d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cc910;
    func_0x00010bfa3860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c094aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274dc58);
    *(undefined **)((long)puVar1 + (long)_DAT_11274dc58) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    func_0x00010be78900(puVar1);
    func_0x00010be781a0(puVar1);
    func_0x00010beabac0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066a5504; end: 1066a557b; -[SCLensExplorerLensInfoView setLensName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a5504(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274dc5c);
  *(undefined8 *)(param_1 + _DAT_11274dc5c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11274dc60));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1066a557c; end: 1066a55eb; -[SCLensExplorerLensInfoView setCreatorName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a557c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274dc64);
  *(undefined8 *)(param_1 + _DAT_11274dc64) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11274dc68));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1066a55ec; end: 1066a561b; -[SCLensExplorerLensInfoView setSpacingBetweenLabels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a55ec(long param_1)

{
  func_0x00010c181140(*(undefined8 *)(param_1 + _DAT_11274dc6c));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1066a561c; end: 1066a562b; -[SCLensExplorerLensInfoView spacingBetweenLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a561c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274dc6c),PTR_s_constant_1125afe30);
  return;
}



/* Entry: 1066a562c; end: 1066a56bf; -[SCLensExplorerLensInfoView updateStyleOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a562c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274dc58;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c0957e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11274dc60),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c092260(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11274dc68),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066a56c0; end: 1066a57df; -[SCLensExplorerLensInfoView _prepareLensNameLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a56c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11274dc60;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  lVar4 = (long)_DAT_11274dc58;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0957e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0957a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar2);
  func_0x00010c1c83a0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c167520(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 1066a57e0; end: 1066a590b; -[SCLensExplorerLensInfoView _prepareCreatorLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a57e0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11274dc68;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  lVar4 = (long)_DAT_11274dc58;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c092260(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c092180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar2);
  func_0x00010c1c83a0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c167520(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 1066a590c; end: 1066a5c67; -[SCLensExplorerLensInfoView _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1066a590c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_11274dc68;
  uVar2 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_11274dc60;
  uVar3 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493c0(0,uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11274dc6c;
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  *(undefined8 *)(param_1 + lVar18) = uVar4;
  _objc_release(uVar17);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar5 = *(long *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf493a0(lVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar19);
  lStack_a0 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar19);
  uStack_98 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)(param_1 + lVar18);
  uVar11 = *(undefined8 *)(param_1 + lVar20);
  uStack_90 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar20);
  uStack_80 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar20);
  uStack_78 = uVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_a0,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar17);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(lVar18);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(lVar19);
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar5;
  }
  ___stack_chk_fail();
  return *(long *)(lVar5 + _DAT_11274dc5c);
}



/* Entry: 1066a5c68; end: 1066a5c77; -[SCLensExplorerLensInfoView lensName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066a5c68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dc5c);
}



/* Entry: 1066a5c78; end: 1066a5c87; -[SCLensExplorerLensInfoView creatorName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066a5c78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dc64);
}



/* Entry: 1066a5c88; end: 1066a5d07; -[SCLensExplorerLensInfoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a5c88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274dc64,0);
  _objc_storeStrong(param_1 + _DAT_11274dc5c,0);
  _objc_storeStrong(param_1 + _DAT_11274dc6c,0);
  _objc_storeStrong(param_1 + _DAT_11274dc68,0);
  _objc_storeStrong(param_1 + _DAT_11274dc60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274dc58,0);
  return;
}



/* Entry: 1066a5d08; end: 1066a5d57; -[SCLensExplorerFavoritesOnboardingCollectionViewCell initWithFrame:] */

undefined1 * FUN_1066a5d08(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f25e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be3b0a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066a5d58; end: 1066a601f; -[SCLensExplorerFavoritesOnboardingCollectionViewCell _initialSetup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a5d58(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar11 = (long)_DAT_11274dc70;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_80 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  uStack_78 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_88);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uStack_80);
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c013de0();
  lVar12 = (long)_DAT_11274dc74;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar10);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar12));
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c178280();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bef9040();
  _objc_release(param_1);
  puVar7 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_1066a6020;
  lStack_c0 = lVar4;
  lStack_b8 = lVar12;
  puStack_b0 = puVar1;
  lStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_initWeak(auStack_c8,puVar7);
  puVar8 = auStack_d0;
  _objc_copyWeak(puVar8,auStack_c8);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar9);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar9);
  return;
}



/* Entry: 1066a6020; end: 1066a60fb; -[SCLensExplorerFavoritesOnboardingCollectionViewCell setBackgroundImage:] */

void FUN_1066a6020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = auStack_40;
  _objc_copyWeak(puVar1,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1066a60fc; end: 1066a6187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a60fc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11274dc74));
    lVar2 = (long)_DAT_11274dc70;
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c2558c0();
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066a6188; end: 1066a621f; -[SCLensExplorerFavoritesOnboardingCollectionViewCell _didTapGesture:] */

void FUN_1066a6188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar2 = PTR_PTR_1126ccb30;
  func_0x00010c29ccc0(PTR_PTR_1126ccb30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  func_0x00010beee460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066a6220; end: 1066a622f; -[SCLensExplorerFavoritesOnboardingCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066a6220(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dc78);
}



/* Entry: 1066a6230; end: 1066a626f; -[SCLensExplorerFavoritesOnboardingCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a6230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274dc78;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066a6270; end: 1066a627f; -[SCLensExplorerFavoritesOnboardingCollectionViewCell backgroundImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066a6270(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dc7c);
}



/* Entry: 1066a6280; end: 1066a62df; -[SCLensExplorerFavoritesOnboardingCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a6280(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274dc7c,0);
  _objc_storeStrong(param_1 + _DAT_11274dc78,0);
  _objc_storeStrong(param_1 + _DAT_11274dc74,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274dc70,0);
  return;
}



/* Entry: 1066a62e0; end: 1066a65f7; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell _setupBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a62e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  double dVar17;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x1d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 12.0;
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar2);
  lVar15 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar15);
  lVar15 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  _objc_release(lVar15);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf49420(0x4071700000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_98 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493c0((dVar17 + -279.0) * 0.5,puVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_90 = puVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  puStack_88 = puVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf494e0(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar15);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar15 = *(long *)(param_1 + _DAT_11274dc80);
  *(undefined **)(param_1 + _DAT_11274dc80) = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b0ac8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar1 = puVar2;
  func_0x00010670df58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212fe0(puVar2,param_2,puVar1,PTR____NSArray0__struct_11034ab48,
                      PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar1);
  func_0x00010c213040(puVar2,param_2,1);
  func_0x00010c21ad00(puVar2,param_2,0x15);
  func_0x00010c165e00(puVar2,param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar2,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c2131e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar2);
  func_0x00010c193a00(puVar2,param_2,0);
  func_0x00010c1f7b20(puVar2,param_2,0);
  func_0x00010befbb60(*(undefined8 *)(lVar15 + _DAT_11274dc80),param_2,puVar2);
  uVar16 = *(undefined8 *)(lVar15 + _DAT_11274dc84);
  *(undefined **)(lVar15 + _DAT_11274dc84) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar16);
  return;
}



/* Entry: 1066a65f8; end: 1066a674b; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell _setupDescriptionText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a65f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0ac8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = puVar1;
  func_0x00010670df58();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212fe0(puVar1,param_2,puVar2,PTR____NSArray0__struct_11034ab48,
                      PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c21ad00(puVar1,param_2,0x15);
  func_0x00010c165e00(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c2131e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar1);
  func_0x00010c193a00(puVar1,param_2,0);
  func_0x00010c1f7b20(puVar1,param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11274dc80),param_2,puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274dc84);
  *(undefined **)(param_1 + _DAT_11274dc84) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1066a674c; end: 1066a685b; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell _setupTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a674c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = puVar1;
  func_0x00010670df40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c165e00(puVar1,param_2,1);
  func_0x00010c21ad00(puVar1,param_2,5);
  func_0x00010c1c3ae0(0x403d000000000000,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c23d620(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11274dc80),param_2,puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274dc88);
  *(undefined **)(param_1 + _DAT_11274dc88) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1066a685c; end: 1066a6913; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell _setupPressAndHoldView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a685c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126cceb0;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010bf0bba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f98e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023c00();
  lVar5 = (long)_DAT_11274dc8c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274dc80),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 1066a6914; end: 1066a6e0f; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell _configureConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a6914(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined *puVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar36 = (long)_DAT_11274dc8c;
  uVar2 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = (long)_DAT_11274dc80;
  uVar3 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493c0(0x402c000000000000,uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar36);
  uStack_c8 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar36);
  uStack_c0 = uVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf49460(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar36);
  uStack_b8 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf49500(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar37 = (long)_DAT_11274dc88;
  uVar14 = *(undefined8 *)(param_1 + lVar37);
  uStack_b0 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar36);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493c0(0x4030000000000000,uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar37);
  uStack_a8 = uVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493c0(0x4030000000000000,uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar37);
  uStack_a0 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493c0(0xc030000000000000,uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  lVar36 = (long)_DAT_11274dc84;
  uVar23 = *(undefined8 *)(param_1 + lVar36);
  uStack_98 = uVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar23;
  func_0x00010bf493c0(0x4030000000000000,uVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar36);
  uStack_90 = uVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c08de00(uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar26;
  func_0x00010bf493c0(0x4030000000000000,uVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar36);
  uStack_88 = uVar28;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010c2793a0(uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar29;
  func_0x00010bf493c0(0xc030000000000000,uVar29,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar36);
  uStack_80 = uVar31;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar38);
  func_0x00010bf1ff80(uVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar32;
  func_0x00010bf493c0(0xc030000000000000,uVar32,param_2,uVar33);
  _objc_retainAutoreleasedReturnValue();
  puVar35 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar34;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c8,0xb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar35);
  _objc_release(puVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1066a6e10; end: 1066a6e13; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell _setupKarma] */

void FUN_1066a6e10(void)

{
  return;
}



/* Entry: 1066a6e14; end: 1066a6ee7; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a6e14(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f25e8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x00010bf0bba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c0f98e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if ((lVar2 != 0) && (*(long *)(param_1 + _DAT_11274dc80) == 0)) {
      func_0x00010beaacc0(param_1);
      func_0x00010beac040(param_1);
      func_0x00010beb09a0(param_1);
      func_0x00010beaf0c0(param_1);
      func_0x00010bde4f00(param_1);
      func_0x00010bead480(param_1);
      func_0x00010bf18860(*(undefined8 *)(param_1 + _DAT_11274dc8c));
    }
  }
  return;
}



/* Entry: 1066a6ee8; end: 1066a6f77; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell preferredLayoutAttributesFittingAttributes:] */

void FUN_1066a6ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f25e8;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_preferredLayoutAttributesFitting_112531760);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa14e0();
  _objc_release(puVar2);
  func_0x00010c202c80(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066a6f78; end: 1066a704b; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell updateStyleOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a6f78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x1d,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11274dc80),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11274dc84),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11274dc88),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066a704c; end: 1066a705b; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell assetsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066a704c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dc90);
}



/* Entry: 1066a705c; end: 1066a709b; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell setAssetsProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a705c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274dc90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066a709c; end: 1066a70ab; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell performerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066a709c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274dc94);
}



/* Entry: 1066a70ac; end: 1066a70eb; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell setPerformerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a70ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274dc94;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066a70ec; end: 1066a716b; -[SCLensExplorerFavoritesPagePressAndHoldOnboardingCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a70ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274dc94,0);
  _objc_storeStrong(param_1 + _DAT_11274dc90,0);
  _objc_storeStrong(param_1 + _DAT_11274dc8c,0);
  _objc_storeStrong(param_1 + _DAT_11274dc88,0);
  _objc_storeStrong(param_1 + _DAT_11274dc84,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274dc80,0);
  return;
}



/* Entry: 1066a716c; end: 1066a71bb; -[SCLensExplorerRecentBannerCollectionViewCell initWithFrame:] */

undefined1 * FUN_1066a716c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f25f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be3b0a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066a71bc; end: 1066a7327; -[SCLensExplorerRecentBannerCollectionViewCell loadAssetsUsingAssetsProvider:performerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a71bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + _DAT_11274dc98);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_11274dc9c));
    _objc_initWeak(auStack_48,param_1);
    uVar2 = param_3;
    func_0x00010c1224c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b6bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066a7328; end: 1066a73b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a7328(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (param_3 == 0)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      lVar2 = (long)_DAT_11274dc9c;
      func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar2));
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11274dc98));
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066a73b8; end: 1066a7457; -[SCLensExplorerRecentBannerCollectionViewCell updateStyleOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a73b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11274dca0),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11274dca4),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066a7458; end: 1066a7523; -[SCLensExplorerRecentBannerCollectionViewCell preferredLayoutAttributesFittingAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a7458(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  puStack_48 = PTR_PTR_1126f25f0;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_preferredLayoutAttributesFitting_112531760);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1224e0();
  _objc_release(puVar2);
  lVar3 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08d140();
  _objc_release(lVar3);
  func_0x00010c23d5a0(param_1,0x7fefffffffffffff,*(undefined8 *)(param_2 + _DAT_11274dca8));
  func_0x00010c202c80(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 1066a7524; end: 1066a7567; -[SCLensExplorerRecentBannerCollectionViewCell _initialSetup] */

void FUN_1066a7524(undefined8 param_1)

{
  func_0x00010beb09a0();
  func_0x00010beb02e0(param_1);
  func_0x00010bead1a0(param_1);
  func_0x00010beabbe0(param_1);
  func_0x00010bead480(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde4f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__configureConstraints_112556d60);
  return;
}



/* Entry: 1066a7568; end: 1066a764b; -[SCLensExplorerRecentBannerCollectionViewCell _setupTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a7568(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = puVar1;
  func_0x00010670e060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar1,param_2,5);
  func_0x00010c213040(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c23d620(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274dca0);
  *(undefined **)(param_1 + _DAT_11274dca0) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1066a764c; end: 1066a772f; -[SCLensExplorerRecentBannerCollectionViewCell _setupSubtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a764c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = puVar1;
  func_0x00010670e078();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c21ad00(puVar1,param_2,6);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c23d620(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274dca4);
  *(undefined **)(param_1 + _DAT_11274dca4) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1066a7730; end: 1066a786b; -[SCLensExplorerRecentBannerCollectionViewCell _setupImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a7730(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  func_0x00010c219b60();
  puVar3 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  func_0x00010c219b60();
  func_0x00010befbb60(puVar2,param_2,puVar1);
  func_0x00010befbb60(puVar2,param_2,puVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274dcac);
  *(undefined **)(param_1 + _DAT_11274dcac) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274dc98);
  *(undefined **)(param_1 + _DAT_11274dc98) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274dc9c);
  *(undefined **)(param_1 + _DAT_11274dc9c) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1066a786c; end: 1066a7993; -[SCLensExplorerRecentBannerCollectionViewCell _setupContentStack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a786c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined *puVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  
  lVar43 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar2);
  func_0x00010c207380(0x4010000000000000,puVar1);
  func_0x00010c1887e0(0x4034000000000000,puVar1);
  func_0x00010c16e060(puVar1);
  func_0x00010c166c00(puVar1);
  func_0x00010c190b80(puVar1);
  func_0x00010c219b60(puVar1);
  lVar3 = *(long *)(param_3 + _DAT_11274dca8);
  *(undefined **)(param_3 + _DAT_11274dca8) = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar43) {
    return;
  }
  ___stack_chk_fail();
  lVar44 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar43 = lVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = (long)_DAT_11274dca8;
  func_0x00010befbb60();
  _objc_release(lVar43);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar46 = (long)_DAT_11274dc9c;
  uVar4 = *(undefined8 *)(lVar3 + lVar46);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = (long)_DAT_11274dcac;
  uVar5 = *(undefined8 *)(lVar3 + lVar43);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar3 + lVar46);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar3 + lVar43);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = (long)_DAT_11274dc98;
  uVar10 = *(undefined8 *)(lVar3 + lVar46);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar3 + lVar43);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar3 + lVar46);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar3 + lVar43);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar3 + lVar46);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar3 + lVar43);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar3 + lVar46);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar3 + lVar43);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar3 + lVar43);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc910;
  func_0x00010bfa3860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c122500();
  uVar23 = uVar22;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(lVar3 + lVar43);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126cc910;
  func_0x00010bfa3860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c122500();
  uVar26 = uVar24;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(lVar3 + lVar45);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = lVar43;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(lVar3 + lVar45);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar29;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(lVar3 + lVar45);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar45;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar33;
  func_0x00010bf493c0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar47 = (long)_DAT_11274dca4;
  uVar36 = *(undefined8 *)(lVar3 + lVar47);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar3;
  func_0x00010bf4dce0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar36;
  func_0x00010bf49480(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(lVar3 + lVar47);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar40;
  func_0x00010bf49520(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar42 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar42);
  _objc_release(uVar41);
  _objc_release(lVar47);
  _objc_release(lVar3);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(lVar34);
  _objc_release(lVar45);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(lVar46);
  _objc_release(lVar43);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(puVar2);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar44) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1066a7994; end: 1066a7ff3; -[SCLensExplorerRecentBannerCollectionViewCell _configureConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066a7994(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined *puVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  
  lVar42 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar43 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = (long)_DAT_11274dca8;
  func_0x00010befbb60();
  _objc_release(lVar43);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar45 = (long)_DAT_11274dc9c;
  uVar2 = *(undefined8 *)(param_3 + lVar45);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = (long)_DAT_11274dcac;
  uVar3 = *(undefined8 *)(param_3 + lVar43);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + lVar45);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + lVar43);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = (long)_DAT_11274dc98;
  uVar8 = *(undefined8 *)(param_3 + lVar45);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + lVar43);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + lVar45);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_3 + lVar43);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_3 + lVar45);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_3 + lVar43);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_3 + lVar45);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_3 + lVar43);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_3 + lVar43);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126cc910;
  func_0x00010bfa3860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c122500();
  uVar22 = uVar20;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_3 + lVar43);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126cc910;
  func_0x00010bfa3860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c122500();
  uVar25 = uVar23;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_3 + lVar44);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar43;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_3 + lVar44);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_3 + lVar44);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar44;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar32;
  func_0x00010bf493c0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar46 = (long)_DAT_11274dca4;
  uVar35 = *(undefined8 *)(param_3 + lVar46);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_3;
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar35;
  func_0x00010bf49480(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(param_3 + lVar46);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar39;
  func_0x00010bf49520(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar41 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar41);
  _objc_release(uVar40);
  _objc_release(lVar46);
  _objc_release(param_3);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(lVar33);
  _objc_release(lVar44);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(lVar45);
  _objc_release(lVar43);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(puVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar42) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1066a7ff4; end: 1066a8003; -[SCLensExplorerRecentBannerCollectionViewCell _setupKarma] */

void FUN_1066a7ff4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAccessibilityIdentifier__112635e10,
             &PTR____CFConstantStringClassReference_110e82e98);
  return;
}


