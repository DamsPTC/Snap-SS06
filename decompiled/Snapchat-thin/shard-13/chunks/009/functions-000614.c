/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aee8a7c; end: 10aee8ab3; -[SCLensFeedSectionLayout creatorItemSpacing] */

double FUN_10aee8a7c(double param_1)

{
  double dVar1;
  
  func_0x00010be9bcc0();
  dVar1 = param_1 * 0.0266;
  func_0x00010b816218();
  return (double)(long)(dVar1 * param_1) / param_1;
}



/* Entry: 10aee8ab4; end: 10aee8aeb; -[SCLensFeedSectionLayout horizontalLensItemSpacing] */

double FUN_10aee8ab4(double param_1)

{
  double dVar1;
  
  func_0x00010be9bcc0();
  dVar1 = param_1 * 0.032;
  func_0x00010b816218();
  return (double)(long)(dVar1 * param_1) / param_1;
}



/* Entry: 10aee8aec; end: 10aee8b1f; -[SCLensFeedSectionLayout itemSpacingForPercent:] */

double FUN_10aee8aec(double param_1)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010be9bcc0();
  param_1 = param_1 * dVar1;
  func_0x00010b816218();
  return (double)(long)(param_1 * dVar1) / dVar1;
}



/* Entry: 10aee8b20; end: 10aee8b6f; -[SCLensFeedSectionLayout _screenWidth] */

undefined8 FUN_10aee8b20(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10aee8b70; end: 10aee8b77; -[SCLensFeedSectionLayout _headerCommonOffset] */

undefined8 FUN_10aee8b70(void)

{
  return 0x402c000000000000;
}



/* Entry: 10aee8b78; end: 10aee8b7f; -[SCLensFeedSectionLayout headerTextFont] */

undefined8 FUN_10aee8b78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aee8b80; end: 10aee8b87; -[SCLensFeedSectionLayout headerTextColor] */

undefined8 FUN_10aee8b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aee8b88; end: 10aee8bb7; -[SCLensFeedSectionLayout .cxx_destruct] */

void FUN_10aee8b88(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee8bb8; end: 10aee8bbf; +[SCLensExplorerConsts queryDuplicationDefaultTimeGap] */

undefined8 FUN_10aee8bb8(void)

{
  return 0x403e000000000000;
}



/* Entry: 10aee8bc0; end: 10aee8bcb; +[SCLensExplorerConsts queryDuplicationInfinitTimeGap] */

undefined8 FUN_10aee8bc0(void)

{
  return 0x41cd27e440000000;
}



/* Entry: 10aee8bcc; end: 10aee8bd3; +[SCLensExplorerConsts defaultSpanCount] */

undefined8 FUN_10aee8bcc(void)

{
  return 4;
}



/* Entry: 10aee8bd4; end: 10aee8bdb; +[SCLensExplorerConsts minSupportedSpanCount] */

undefined8 FUN_10aee8bd4(void)

{
  return 1;
}



/* Entry: 10aee8bdc; end: 10aee8be3; +[SCLensExplorerConsts maxSupportedSpanCount] */

undefined8 FUN_10aee8bdc(void)

{
  return 5;
}



/* Entry: 10aee8be4; end: 10aee8bef; +[SCLensExplorerActionButtonIdentifers seeAllButtonIdentifier] */

undefined ** FUN_10aee8be4(void)

{
  return &PTR____CFConstantStringClassReference_110f30698;
}



/* Entry: 10aee8bf0; end: 10aee8cd7; +[SCLensExplorerSections isSubscriptionSectionIdentifier:] */

undefined * FUN_10aee8bf0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ee15d8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110ee15d8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f30c38;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&ppuStack_50,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  uVar6 = param_3;
  func_0x00010bf4b900(puVar2,param_2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  pcStack_58 = FUN_10aee8cd8;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f30bb8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e04238;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f30bd8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f30bf8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f30c18;
  puStack_80 = puVar2;
  puStack_78 = puVar1;
  uStack_70 = param_3;
  puStack_68 = puVar3;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(uVar6);
  func_0x00010bf0a140(puVar4,param_2,&ppuStack_b0,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar1 = puVar5;
  uVar7 = uVar6;
  func_0x00010bf4b900(puVar5,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)((uint)(uVar7 < 0xb) & 0x4a2U >> (ulong)((uint)uVar7 & 0x1f));
}



/* Entry: 10aee8cd8; end: 10aee8dc7; +[SCLensExplorerSections isFavoritesSectionIdentifier:] */

undefined * FUN_10aee8cd8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f30bb8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e04238;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f30bd8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f30bf8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f30c18;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&ppuStack_60,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  uVar3 = param_3;
  func_0x00010bf4b900(puVar2,param_2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)((uint)(uVar3 < 0xb) & 0x4a2U >> (ulong)((uint)uVar3 & 0x1f));
}



/* Entry: 10aee8dc8; end: 10aee8ddf; +[SCLensExplorerContexts isARBarContext:] */

uint FUN_10aee8dc8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 0xb) & 0x4a2U >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 10aee8de0; end: 10aee8deb; +[SCLensExplorerError errorDomain] */

undefined ** FUN_10aee8de0(void)

{
  return &PTR____CFConstantStringClassReference_110f306b8;
}



/* Entry: 10aee8dec; end: 10aee8df3; +[SCLensExplorerError invalidQueryErrorCode] */

undefined8 FUN_10aee8dec(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 10aee8df4; end: 10aee8dfb; +[SCLensExplorerError invalidInteractionHistoryErrorCode] */

undefined8 FUN_10aee8df4(void)

{
  return 0xfffffffffffffffe;
}



/* Entry: 10aee8dfc; end: 10aee8e03; +[SCLensExplorerError nilSelfInBlockErrorCode] */

undefined8 FUN_10aee8dfc(void)

{
  return 0xfffffffffffffffd;
}



/* Entry: 10aee8e04; end: 10aee8e0b; +[SCLensExplorerError invalidParameterErrorCode] */

undefined8 FUN_10aee8e04(void)

{
  return 0xfffffffffffffffc;
}



/* Entry: 10aee8e0c; end: 10aee8e13; +[SCLensExplorerError cacheErrorCode] */

undefined8 FUN_10aee8e0c(void)

{
  return 0xfffffffffffffffb;
}



/* Entry: 10aee8e14; end: 10aee8e1b; +[SCLensExplorerError imageDownloadCancelErrorCode] */

undefined8 FUN_10aee8e14(void)

{
  return 0xfffffffffffffffa;
}



/* Entry: 10aee8e1c; end: 10aee8e23; +[SCLensExplorerError imageCacheCancelErrorCode] */

undefined8 FUN_10aee8e1c(void)

{
  return 0xfffffffffffffff9;
}



/* Entry: 10aee8e24; end: 10aee8e2b; +[SCLensExplorerError imageDecodingErrorCode] */

undefined8 FUN_10aee8e24(void)

{
  return 0xfffffffffffffff8;
}



/* Entry: 10aee8e2c; end: 10aee8e33; +[SCLensExplorerError imageScaleErrorCode] */

undefined8 FUN_10aee8e2c(void)

{
  return 0xfffffffffffffff7;
}



/* Entry: 10aee8e34; end: 10aee8e3b; +[SCLensExplorerError imageProcessingErrorCode] */

undefined8 FUN_10aee8e34(void)

{
  return 0xfffffffffffffff6;
}



/* Entry: 10aee8e3c; end: 10aee8e43; +[SCLensExplorerError requestCancelErrorCode] */

undefined8 FUN_10aee8e3c(void)

{
  return 0xfffffffffffffff5;
}



/* Entry: 10aee8e44; end: 10aee8e4b; +[SCLensExplorerError requestParsingErrorCode] */

undefined8 FUN_10aee8e44(void)

{
  return 0xfffffffffffffff4;
}



/* Entry: 10aee8e4c; end: 10aee8ebf; +[SCLensExplorerError nilSelfInBlockError] */

void FUN_10aee8e4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR_PTR_1126ccf50;
  func_0x00010bf98a40(PTR_PTR_1126ccf50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccf50;
  func_0x00010c0da500(PTR_PTR_1126ccf50);
  func_0x00010bf99240(puVar3,param_2,puVar1,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aee8ec0; end: 10aee8f33; +[SCLensExplorerError imageDownloadCancelError] */

void FUN_10aee8ec0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR_PTR_1126ccf50;
  func_0x00010bf98a40(PTR_PTR_1126ccf50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccf50;
  func_0x00010bfe7520(PTR_PTR_1126ccf50);
  func_0x00010bf99240(puVar3,param_2,puVar1,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aee8f34; end: 10aee8fa7; +[SCLensExplorerError imageCacheRetriveCancelError] */

void FUN_10aee8f34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR_PTR_1126ccf50;
  func_0x00010bf98a40(PTR_PTR_1126ccf50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccf50;
  func_0x00010bfe6f40(PTR_PTR_1126ccf50);
  func_0x00010bf99240(puVar3,param_2,puVar1,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aee8fa8; end: 10aee9097; +[SCLensExplorerError imageDecodingError] */

void FUN_10aee8fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ccf50;
  func_0x00010bf98a40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccf50;
  func_0x00010bfe73c0();
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e58fb8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar6,param_4,puVar1,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    pcStack_58 = FUN_10aee9098;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126ccf50;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010bf98a40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ccf50;
    func_0x00010bfe8a80();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uStack_b8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    puVar4 = puVar3;
    _NSStringFromCGSize(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar4;
    func_0x00010c14de00(puVar1,param_4,&PTR____CFConstantStringClassReference_110e58fd8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_b0 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_b0,&uStack_b8,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar6,param_4,puVar2,puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      pcStack_c8 = FUN_10aee91ec;
      lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar5 = PTR_PTR_1126ccf50;
      puStack_f0 = puVar1;
      puStack_e8 = puVar3;
      puStack_e0 = puVar6;
      puStack_d8 = puVar2;
      ppuStack_d0 = &puStack_60;
      func_0x00010bf98a40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126ccf50;
      func_0x00010bfe8700();
      uStack_108 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_100 = &PTR____CFConstantStringClassReference_110f306d8;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_100,&uStack_108
                          ,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar4,param_4,puVar5,puVar1,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar5);
      puVar6 = puVar4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
        ___stack_chk_fail();
        puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
        pcStack_118 = FUN_10aee92dc;
        lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar3 = PTR_PTR_1126ccf50;
        puStack_140 = puVar2;
        puStack_138 = puVar1;
        puStack_130 = puVar5;
        puStack_128 = puVar4;
        ppuStack_120 = &ppuStack_d0;
        func_0x00010bf98a40();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126ccf50;
        func_0x00010c134e00();
        uStack_158 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_150 = &PTR____CFConstantStringClassReference_110f306f8;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_150,
                            &uStack_158,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar6,param_4,puVar3,puVar1,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
          ___stack_chk_fail();
          puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
          pcStack_168 = FUN_10aee93cc;
          lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar5 = PTR_PTR_1126ccf50;
          puStack_190 = puVar2;
          puStack_188 = puVar1;
          puStack_180 = puVar3;
          puStack_178 = puVar6;
          ppuStack_170 = &ppuStack_120;
          func_0x00010bf98a40();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126ccf50;
          func_0x00010c1360c0(PTR_PTR_1126ccf50);
          uStack_1a8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_1a0 = &PTR____CFConstantStringClassReference_110f30718;
          puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_1a0,
                              &uStack_1a8,1);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar5;
          func_0x00010bf99240(puVar4,param_4,puVar5,puVar6,puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          _objc_release(puVar5);
          puVar6 = puVar4;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
            ___stack_chk_fail();
            _objc_retain(puVar2);
            puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,puVar2);
            if ((int)puVar6 == 0) {
              puVar6 = (undefined *)0x0;
            }
            else {
              puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
              _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
              func_0x00010c04e820();
            }
            _objc_release(puVar2);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aee9098; end: 10aee91eb; +[SCLensExplorerError imageScalingErrorToSize:] */

void FUN_10aee9098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ccf50;
  func_0x00010bf98a40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccf50;
  func_0x00010bfe8a80();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  puVar3 = puVar2;
  _NSStringFromCGSize(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = puVar3;
  func_0x00010c14de00(puVar4,param_4,&PTR____CFConstantStringClassReference_110e58fd8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_60,&uStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar6,param_4,puVar1,puVar2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    pcStack_78 = FUN_10aee91ec;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR_PTR_1126ccf50;
    puStack_a0 = puVar4;
    puStack_98 = puVar2;
    puStack_90 = puVar6;
    puStack_88 = puVar1;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010bf98a40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ccf50;
    func_0x00010bfe8700();
    uStack_b8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110f306d8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_b0,&uStack_b8,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3,param_4,puVar5,puVar4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar5);
    puVar6 = puVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      pcStack_c8 = FUN_10aee92dc;
      lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar2 = PTR_PTR_1126ccf50;
      puStack_f0 = puVar1;
      puStack_e8 = puVar4;
      puStack_e0 = puVar5;
      puStack_d8 = puVar3;
      ppuStack_d0 = &puStack_80;
      func_0x00010bf98a40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ccf50;
      func_0x00010c134e00();
      uStack_108 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_100 = &PTR____CFConstantStringClassReference_110f306f8;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_100,&uStack_108
                          ,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar6,param_4,puVar2,puVar4,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
        ___stack_chk_fail();
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        pcStack_118 = FUN_10aee93cc;
        lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar5 = PTR_PTR_1126ccf50;
        puStack_140 = puVar1;
        puStack_138 = puVar4;
        puStack_130 = puVar2;
        puStack_128 = puVar6;
        ppuStack_120 = &ppuStack_d0;
        func_0x00010bf98a40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126ccf50;
        func_0x00010c1360c0(PTR_PTR_1126ccf50);
        uStack_158 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_150 = &PTR____CFConstantStringClassReference_110f30718;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_150,
                            &uStack_158,1);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
        func_0x00010bf99240(puVar3,param_4,puVar5,puVar4,puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar6 = puVar3;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
          ___stack_chk_fail();
          _objc_retain(puVar1);
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,puVar1);
          if ((int)puVar4 == 0) {
            puVar6 = (undefined *)0x0;
          }
          else {
            puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
            _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
            func_0x00010c04e820();
          }
          _objc_release(puVar1);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aee91ec; end: 10aee92db; +[SCLensExplorerError imageProcessingError] */

void FUN_10aee91ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ccf50;
  func_0x00010bf98a40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccf50;
  func_0x00010bfe8700();
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f306d8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar6,param_2,puVar1,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    pcStack_58 = FUN_10aee92dc;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = PTR_PTR_1126ccf50;
    puStack_80 = puVar3;
    puStack_78 = puVar2;
    puStack_70 = puVar1;
    puStack_68 = puVar6;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010bf98a40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ccf50;
    func_0x00010c134e00();
    uStack_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f306f8;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_90,&uStack_98,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar5,param_2,puVar4,puVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar4);
    puVar6 = puVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      pcStack_a8 = FUN_10aee93cc;
      lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar3 = PTR_PTR_1126ccf50;
      puStack_d0 = puVar2;
      puStack_c8 = puVar1;
      puStack_c0 = puVar4;
      puStack_b8 = puVar5;
      ppuStack_b0 = &puStack_60;
      func_0x00010bf98a40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126ccf50;
      func_0x00010c1360c0(PTR_PTR_1126ccf50);
      uStack_e8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_e0 = &PTR____CFConstantStringClassReference_110f30718;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_e0,&uStack_e8,1
                         );
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf99240(puVar6,param_2,puVar3,puVar1,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
        ___stack_chk_fail();
        _objc_retain(puVar5);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar5);
        if ((int)puVar6 == 0) {
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
          _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
          func_0x00010c04e820();
        }
        _objc_release(puVar5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aee92dc; end: 10aee93cb; +[SCLensExplorerError requestCancelError] */

void FUN_10aee92dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ccf50;
  func_0x00010bf98a40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccf50;
  func_0x00010c134e00();
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f306f8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar6,param_2,puVar1,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    pcStack_58 = FUN_10aee93cc;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = PTR_PTR_1126ccf50;
    puStack_80 = puVar3;
    puStack_78 = puVar2;
    puStack_70 = puVar1;
    puStack_68 = puVar6;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010bf98a40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ccf50;
    func_0x00010c1360c0(PTR_PTR_1126ccf50);
    uStack_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f30718;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_90,&uStack_98,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf99240(puVar5,param_2,puVar4,puVar6,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
    puVar6 = puVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      _objc_retain(puVar2);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2);
      if ((int)puVar6 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
        _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
        func_0x00010c04e820();
      }
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aee93cc; end: 10aee94bb; +[SCLensExplorerError responseParsingError] */

void FUN_10aee93cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ccf50;
  func_0x00010bf98a40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccf50;
  func_0x00010c1360c0(PTR_PTR_1126ccf50);
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f30718;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf99240(puVar5,param_2,puVar1,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar4);
    if ((int)puVar5 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
      func_0x00010c04e820();
    }
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10aee94bc; end: 10aee951f;  */

void FUN_10aee94bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if ((int)puVar1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x00010c04e820();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aee9520; end: 10aee95c3; -[SCFuture map:performer:] */

void FUN_10aee9520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10aee95c4;
  puStack_40 = &UNK_110c907e8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010be717a0(param_1,param_2,&puStack_58,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10aee95c4; end: 10aee963f;  */

void FUN_10aee95c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af5d0;
  puVar1 = *(undefined **)(param_1 + 0x20);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae558;
    func_0x00010be1b3a0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    (**(code **)(puVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aee9640; end: 10aee982f; -[SCFuture flatMap:performer:] */

void FUN_10aee9640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10aee973c;
  puStack_50 = &UNK_1108fe350;
  puStack_48 = puVar1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c297280(param_1,param_2,&puStack_68,param_4,1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(puStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aee9830; end: 10aee9843;  */

void FUN_10aee9830(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 10aee9844; end: 10aee9903; -[SCFuture mapToResultFutureWithPerformer:] */

void FUN_10aee9844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10aee9904;
  puStack_40 = &UNK_11084e010;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010c297260(param_1,param_2,&puStack_58,param_3);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aee9904; end: 10aee995f;  */

void FUN_10aee9904(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10aee9960; end: 10aee9a1f; -[SCFuture mapFromResultFutureWithPerformer:] */

void FUN_10aee9960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10aee9a20;
  puStack_40 = &UNK_11084e010;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010c297260(param_1,param_2,&puStack_58,param_3);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aee9a20; end: 10aee9b2f;  */

void FUN_10aee9a20(long param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126af5d0;
    _objc_opt_class(PTR_PTR_1126af5d0);
    uVar2 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      func_0x00010c0c0800(param_2);
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aee9b30; end: 10aee9b47;  */

void FUN_10aee9b30(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 10aee9b48; end: 10aee9c2f; -[SCFuture _performChainedBlock:performer:] */

void FUN_10aee9b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_4);
  _objc_opt_new();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10aee9c30;
  puStack_48 = &UNK_1108fe3e0;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c297260(param_1,param_2,&puStack_60,param_4);
  _objc_release(param_4);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(puStack_40);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aee9c30; end: 10aee9d5b;  */

/* WARNING: Possible PIC construction at 0x00010aee9d34: Changing call to branch */

void FUN_10aee9c30(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == (undefined *)0x0) {
    lVar2 = *(long *)(param_1 + 0x28);
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar1);
      func_0x00010c0c0800(lVar2);
      _objc_release(uVar1);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_3 = PTR_PTR_1126ae558;
    func_0x00010be1b760(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithError__1125ae8d0,param_3);
  return;
}



/* Entry: 10aee9d5c; end: 10aee9d73;  */

void FUN_10aee9d5c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 10aee9d74; end: 10aee9d8f; +[SCFuture _generateInvalidParameterError] */

void FUN_10aee9d74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110f30738,0,0);
  return;
}



/* Entry: 10aee9d90; end: 10aee9dab; +[SCFuture _generateNilResultError] */

void FUN_10aee9d90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110f30738,1,0);
  return;
}



/* Entry: 10aee9dac; end: 10aee9dcf; +[SCLensExplorerFeedIdentifierMapper feedIdForCategoryType:] */

undefined * FUN_10aee9dac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x26) {
    return (&PTR_PTR_110c90818)[param_3 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 10aee9dd0; end: 10aee9df3; +[SCLensExplorerFeedIdentifierMapper feedIdForSubCategoryType:] */

undefined * FUN_10aee9dd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return (&PTR_PTR_110c90948)[param_3 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 10aee9df4; end: 10aee9e13;  */

void FUN_10aee9df4(undefined8 param_1)

{
  func_0x00010c23bac0();
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,param_1);
  return;
}



/* Entry: 10aee9e14; end: 10aee9e2f;  */

ulong FUN_10aee9e14(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_3;
  if (param_4 == 1) {
    uVar1 = param_3 | 0xffffffff80000000;
  }
  uVar2 = param_3 | 0x40000000;
  if (param_4 != 2) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10aee9e30; end: 10aee9ea3; -[SCLensCTACarouselServices initWithCTAViewControllerProvider:] */

undefined1 * FUN_10aee9e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701ad8;
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



/* Entry: 10aee9ea4; end: 10aee9eab; -[SCLensCTACarouselServices ctaViewControllerProvider] */

undefined8 FUN_10aee9ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aee9eac; end: 10aee9eb7; -[SCLensCTACarouselServices .cxx_destruct] */

void FUN_10aee9eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aee9eb8; end: 10aeea04b; +[SCLensKarmaRichAccessibilityIdentifier richAccessibilityIdentifierWithAccessibilityIdentifier:additionalInfo:] */

/* WARNING: Removing unreachable block (ram,0x00010aee9fa8) */

void FUN_10aee9eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  lVar3 = param_4;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010bef7f60(puVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  func_0x00010c008340();
  ppuVar9 = &PTR____CFConstantStringClassReference_110f30e38;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(0);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_retain(ppuVar9);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar6 = ppuVar9;
    _objc_opt_isKindOfClass(ppuVar9,puVar1);
    if ((((ulong)ppuVar6 & 1) == 0) ||
       (ppuVar6 = ppuVar9, func_0x00010c08fa60(), ppuVar6 == (undefined **)0x0)) {
      func_0x00010c1d0640(puVar5);
    }
    else {
      ppuVar6 = ppuVar9;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010bf529e0();
      if (ppuVar7 < (undefined **)0x2) {
        func_0x00010c1d0640(puVar5);
      }
      else {
        ppuVar7 = ppuVar6;
        func_0x00010bfb1920(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(ppuVar7);
        ppuVar7 = ppuVar6;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x00010bf2c4e0();
        _objc_release(ppuVar7);
        if ((int)ppuVar8 != 0) {
          ppuVar7 = ppuVar6;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar7;
          func_0x00010bf64920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar7);
          if (ppuVar8 != (undefined **)0x0) {
            puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(0);
            func_0x00010bef7f60(puVar5);
            _objc_release(puVar1);
            _objc_release(ppuVar8);
            _objc_release(0);
          }
        }
      }
      _objc_release(ppuVar6);
    }
    _objc_release(ppuVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10aeea04c; end: 10aeea21b; +[SCLensKarmaRichAccessibilityIdentifier additionalInfoFromRichAccessibilityIdentifier:] */

void FUN_10aeea04c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if (((uVar3 & 1) == 0) || (uVar3 = param_3, func_0x00010c08fa60(), uVar3 == 0)) {
    func_0x00010c1d0640(puVar1);
  }
  else {
    uVar3 = param_3;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    if (uVar4 < 2) {
      func_0x00010c1d0640(puVar1);
    }
    else {
      uVar4 = uVar3;
      func_0x00010bfb1920(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(uVar4);
      uVar4 = uVar3;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf2c4e0();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) {
        uVar4 = uVar3;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf64920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        if (uVar5 != 0) {
          puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          func_0x00010bef7f60(puVar1);
          _objc_release(puVar2);
          _objc_release(uVar5);
          _objc_release(0);
        }
      }
    }
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeea21c; end: 10aeea22b; -[SCULensesAutoTestParams initWithVideoPath:] */

void FUN_10aeea21c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithVideoPath_trackingDataPa_1125f5de0,param_3,0,0,0);
  return;
}



/* Entry: 10aeea22c; end: 10aeea2e7; -[SCULensesAutoTestParams initWithVideoPath:trackingDataPath:isMarkerTrackingData:isLidarTrackingData:] */

undefined1 *
FUN_10aeea22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112701ae0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aeea2e8; end: 10aeea307; -[SCULensesAutoTestParams shouldMockTrackingData] */

bool FUN_10aeea2e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c08fa60(lVar1);
  return lVar1 != 0;
}



/* Entry: 10aeea308; end: 10aeea30f; -[SCULensesAutoTestParams videoPath] */

undefined8 FUN_10aeea308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aeea310; end: 10aeea317; -[SCULensesAutoTestParams setVideoPath:] */

void FUN_10aeea310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10aeea318; end: 10aeea31f; -[SCULensesAutoTestParams trackingDataPath] */

undefined8 FUN_10aeea318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aeea320; end: 10aeea327; -[SCULensesAutoTestParams setTrackingDataPath:] */

void FUN_10aeea320(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10aeea328; end: 10aeea32f; -[SCULensesAutoTestParams isMarkerTrackingData] */

undefined1 FUN_10aeea328(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aeea330; end: 10aeea337; -[SCULensesAutoTestParams setMarkerTrackingData:] */

void FUN_10aeea330(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10aeea338; end: 10aeea33f; -[SCULensesAutoTestParams isLidarTrackingData] */

undefined1 FUN_10aeea338(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aeea340; end: 10aeea347; -[SCULensesAutoTestParams setLidarTrackingData:] */

void FUN_10aeea340(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10aeea348; end: 10aeea377; -[SCULensesAutoTestParams .cxx_destruct] */

void FUN_10aeea348(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aeea378; end: 10aeea3c3; +[SCULensesAutoTestParams paramsWithSimulatedVideoPath:] */

void FUN_10aeea378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de948;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c060f20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeea3c4; end: 10aeea437; +[SCULensesAutoTestParams paramsWithSimulatedVideoPath:trackingDataPath:] */

void FUN_10aeea3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de948;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c060f40();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeea438; end: 10aeea4ab; +[SCULensesAutoTestParams paramsWithSimulatedVideoPath:markerTrackingDataPath:] */

void FUN_10aeea438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de948;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c060f40();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeea4ac; end: 10aeea51f; +[SCULensesAutoTestParams paramsWithSimulatedVideoPath:lidarTrackingDataPath:] */

void FUN_10aeea4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de948;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c060f40();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aeea520; end: 10aeea53b; +[SCLensAutomationParameters automationParametersFromCurrentProcessInfo] */

void FUN_10aeea520(void)

{
  _objc_opt_new(PTR_PTR_1126ddc90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeea53c; end: 10aeea543; -[SCLensAutomationParameters currentlyTestedLensId] */

undefined8 FUN_10aeea53c(void)

{
  return 0;
}



/* Entry: 10aeea544; end: 10aeea54b; -[SCLensAutomationParameters currentlyTestedLensLink] */

undefined8 FUN_10aeea544(void)

{
  return 0;
}



/* Entry: 10aeea54c; end: 10aeea553; -[SCLensAutomationParameters currentlyTestedLensSignature] */

undefined8 FUN_10aeea54c(void)

{
  return 0;
}



/* Entry: 10aeea554; end: 10aeea55b; -[SCLensAutomationParameters currentlyTestedLensIconLink] */

undefined8 FUN_10aeea554(void)

{
  return 0;
}



/* Entry: 10aeea55c; end: 10aeea563; -[SCLensAutomationParameters currentlyTestedLensDescriptor] */

undefined8 FUN_10aeea55c(void)

{
  return 0;
}



/* Entry: 10aeea564; end: 10aeea56b; -[SCLensAutomationParameters currentlyTestedRemoteApiSpecIds] */

undefined8 FUN_10aeea564(void)

{
  return 0;
}



/* Entry: 10aeea56c; end: 10aeea573; -[SCLensAutomationParameters currentlyTestedLensApplicableContexts] */

undefined8 FUN_10aeea56c(void)

{
  return 0;
}



/* Entry: 10aeea574; end: 10aeea57b; -[SCLensAutomationParameters currentlyTestedLensAssetManifest] */

undefined8 FUN_10aeea574(void)

{
  return 0;
}



/* Entry: 10aeea57c; end: 10aeea583; -[SCLensAutomationParameters isCurrentlyTestedApiLevelPublic] */

undefined8 FUN_10aeea57c(void)

{
  return 0;
}



/* Entry: 10aeea584; end: 10aeea58b; -[SCLensAutomationParameters isCurrentlyTestedLensDescriptorNewport] */

undefined8 FUN_10aeea584(void)

{
  return 0;
}



/* Entry: 10aeea58c; end: 10aeea593; -[SCLensAutomationParameters isCurrentlyTestedLensDescriptorConnected] */

undefined8 FUN_10aeea58c(void)

{
  return 0;
}



/* Entry: 10aeea594; end: 10aeea59b; -[SCLensAutomationParameters isCurrentlyTestedLensDescriptorRemoteApi] */

undefined8 FUN_10aeea594(void)

{
  return 0;
}



/* Entry: 10aeea59c; end: 10aeea5a3; -[SCLensAutomationParameters isCurrentlyTestedLensDescriptorShopping] */

undefined8 FUN_10aeea59c(void)

{
  return 0;
}



/* Entry: 10aeea5a4; end: 10aeea5ab; -[SCLensAutomationParameters isCurrentlyTestedLensDescriptorStorage] */

undefined8 FUN_10aeea5a4(void)

{
  return 0;
}



/* Entry: 10aeea5ac; end: 10aeea5b3; -[SCLensAutomationParameters doesCurrentlyTestedLensContainCustomApplicableContexts] */

undefined8 FUN_10aeea5ac(void)

{
  return 0;
}



/* Entry: 10aeea5b4; end: 10aeea5bb; -[SCLensAutomationParameters doesCurrentlyTestedLensContainLensAssetManifest] */

undefined8 FUN_10aeea5b4(void)

{
  return 0;
}



/* Entry: 10aeea5bc; end: 10aeea5c3; -[SCLensAutomationParameters isCurrentlyTestedWithOriginalLensBundle] */

undefined8 FUN_10aeea5bc(void)

{
  return 0;
}



/* Entry: 10aeea5c4; end: 10aeea5cb; -[SCLensAutomationParameters currentlyTestedLensChecksum] */

undefined8 FUN_10aeea5c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aeea5cc; end: 10aeea5d3; -[SCLensAutomationParameters isCurrentlyTestedLensDescriptorOverrrideCaptureButton] */

undefined1 FUN_10aeea5cc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aeea5d4; end: 10aeea5db; -[SCLensAutomationParameters isCurrentlyTestedLensDescriptorGenerativeAi] */

undefined1 FUN_10aeea5d4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aeea5dc; end: 10aeea5e7; -[SCLensAutomationParameters .cxx_destruct] */

void FUN_10aeea5dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


