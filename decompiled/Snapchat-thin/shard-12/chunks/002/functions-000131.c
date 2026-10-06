/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e5c698; end: 108e5c69f; -[SCMentionStickerView shouldRespondToTap:] */

undefined8 FUN_108e5c698(void)

{
  return 1;
}



/* Entry: 108e5c6a0; end: 108e5c72f; -[SCMentionStickerView updateWithInfoFromStickerView:] */

void FUN_108e5c6a0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bb310;
  _objc_opt_class(PTR_PTR_1126bb310);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_1);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e5c730; end: 108e5c733; -[SCMentionStickerView defaultText] */

void FUN_108e5c730(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f2c8d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f2c8d8,
                      &PTR____CFConstantStringClassReference_110f2c6b8,0);
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



/* Entry: 108e5c734; end: 108e5c73b; -[SCMentionStickerView textAutocorrectionType] */

undefined8 FUN_108e5c734(void)

{
  return 1;
}



/* Entry: 108e5c73c; end: 108e5c773; -[SCMentionStickerView _setViewTypeToPillStyle:] */

void FUN_108e5c73c(undefined8 param_1)

{
  func_0x00010c255280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e5c774; end: 108e5c80f; -[SCMentionStickerView setUsername:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5c774(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277c6bc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010be45e20(param_1,param_2,*(undefined8 *)(param_1 + lVar3),
                      *(undefined8 *)(param_1 + _DAT_11277c6c0),
                      *(undefined8 *)(param_1 + _DAT_11277c6c4),
                      *(undefined4 *)(param_1 + _DAT_11277c6c8));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c6b4);
  *(long *)(param_1 + _DAT_11277c6b4) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e5c810; end: 108e5c8ab; -[SCMentionStickerView setDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5c810(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277c6c0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010be45e20(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11277c6bc),
                      *(undefined8 *)(param_1 + lVar3),*(undefined8 *)(param_1 + _DAT_11277c6c4),
                      *(undefined4 *)(param_1 + _DAT_11277c6c8));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c6b4);
  *(long *)(param_1 + _DAT_11277c6b4) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e5c8ac; end: 108e5c947; -[SCMentionStickerView setUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5c8ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277c6c4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010be45e20(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11277c6bc),
                      *(undefined8 *)(param_1 + _DAT_11277c6c0),*(undefined8 *)(param_1 + lVar3),
                      *(undefined4 *)(param_1 + _DAT_11277c6c8));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c6b4);
  *(long *)(param_1 + _DAT_11277c6b4) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e5c948; end: 108e5ca2b; -[SCMentionStickerView setViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5c948(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)param_3;
  if (iVar2 == *(int *)(param_1 + _DAT_11277c6c8)) {
    return;
  }
  *(int *)(param_1 + _DAT_11277c6c8) = iVar2;
  lVar1 = param_1;
  func_0x00010be45e20(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11277c6bc),
                      *(undefined8 *)(param_1 + _DAT_11277c6c0),
                      *(undefined8 *)(param_1 + _DAT_11277c6c4),param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c6b4);
  *(long *)(param_1 + _DAT_11277c6b4) = lVar1;
  _objc_release(uVar3);
  if (iVar2 - 1U < 3) {
    lVar1 = param_1;
    func_0x00010c255280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20eaa0();
    _objc_release(lVar1);
  }
  func_0x00010c0cc2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e5ca2c; end: 108e5ca2f; -[SCMentionStickerView encodeWithCoder:] */

void FUN_108e5ca2c(void)

{
  return;
}



/* Entry: 108e5ca30; end: 108e5ca53; -[SCMentionStickerView copyWithZone:] */

undefined8 FUN_108e5ca30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e5ca54; end: 108e5cacb; -[SCMentionStickerView loggingParameters] */

undefined ** FUN_108e5ca54(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110efc2d8;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110efc2d8;
}



/* Entry: 108e5cacc; end: 108e5cad7; -[SCMentionStickerView packId] */

undefined ** FUN_108e5cacc(void)

{
  return &PTR____CFConstantStringClassReference_110efc2d8;
}



/* Entry: 108e5cad8; end: 108e5cb3b; -[SCMentionStickerView shortLoggingName] */

void FUN_108e5cad8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110efc318);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5cb3c; end: 108e5cb47; -[SCMentionStickerView stickerId] */

undefined ** FUN_108e5cb3c(void)

{
  return &PTR____CFConstantStringClassReference_110efc2d8;
}



/* Entry: 108e5cb48; end: 108e5cb4f; -[SCMentionStickerView type] */

undefined8 FUN_108e5cb48(void)

{
  return 6;
}



/* Entry: 108e5cb50; end: 108e5cb57; -[SCMentionStickerView toCTPItem] */

undefined8 FUN_108e5cb50(void)

{
  return 0;
}



/* Entry: 108e5cb58; end: 108e5cb87; -[SCMentionStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5cb58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c6b4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e5cb88; end: 108e5cb8f; -[SCMentionStickerView infoType] */

undefined8 FUN_108e5cb88(void)

{
  return 8;
}



/* Entry: 108e5cb90; end: 108e5cc23; -[SCMentionStickerView tappableElementBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5cb90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d91a8;
  _objc_alloc();
  func_0x00010c005f20(0x3fe0000000000000);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  if (*(int *)(puVar1 + _DAT_11277c6c8) - 1U < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010c222db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 108e5cc24; end: 108e5cc4f; -[SCMentionStickerView cycleStickerToNextStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5cc24(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + _DAT_11277c6c8) - 1;
  if (uVar1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010c222db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setViewType__112666590,
               *(undefined4 *)(&UNK_10dfa3b40 + (ulong)uVar1 * 4));
    return;
  }
  return;
}



/* Entry: 108e5cc50; end: 108e5cc57; -[SCMentionStickerView scaleLimit] */

undefined8 FUN_108e5cc50(void)

{
  return 0;
}



/* Entry: 108e5cc58; end: 108e5cd03; -[SCMentionStickerView imageView] */

void FUN_108e5cc58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c255280();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7ca0(puVar2,param_2,param_1,0,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5cd04; end: 108e5cd07; -[SCMentionStickerView didEndDisplay] */

void FUN_108e5cd04(void)

{
  return;
}



/* Entry: 108e5cd08; end: 108e5cd0b; -[SCMentionStickerView willDisplay] */

void FUN_108e5cd08(void)

{
  return;
}



/* Entry: 108e5cd0c; end: 108e5ceeb; -[SCMentionStickerView _itemInstanceFromUsername:displayName:userId:viewType:] */

void FUN_108e5cd0c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar2 = PTR_PTR_1126dc308;
  _objc_opt_new(PTR_PTR_1126dc308);
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar4 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar5 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  func_0x00010c21acc0();
  func_0x00010c21acc0(puVar2);
  if (param_4 != 0) {
    func_0x00010c18fca0(puVar2);
  }
  if (param_3 != 0) {
    func_0x00010c21f760(puVar2);
  }
  if (param_5 != 0) {
    lVar6 = param_5;
    func_0x000107c3094c(param_5,auStack_68,auStack_70);
    if ((int)lVar6 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126afad0;
      _objc_alloc_init(PTR_PTR_1126afad0);
      func_0x00010c1a85a0();
      func_0x00010c1c0fe0(puVar8);
    }
    func_0x00010c21e620(puVar2);
    _objc_release(puVar8);
  }
  func_0x00010c1ac500(puVar4);
  func_0x00010c196600(puVar3);
  func_0x00010c1b5d40(puVar1);
  puVar8 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6980();
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5ceec; end: 108e5cefb; -[SCMentionStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e5ceec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c6b8);
}



/* Entry: 108e5cefc; end: 108e5cf0b; -[SCMentionStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5cefc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c6b8) = param_3;
  return;
}



/* Entry: 108e5cf0c; end: 108e5cf1b; -[SCMentionStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5cf0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c6b0);
}



/* Entry: 108e5cf1c; end: 108e5cf2b; -[SCMentionStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5cf1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c6b4);
}



/* Entry: 108e5cf2c; end: 108e5cf3b; -[SCMentionStickerView userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5cf2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c6c4);
}



/* Entry: 108e5cf3c; end: 108e5cf4b; -[SCMentionStickerView username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5cf3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c6bc);
}



/* Entry: 108e5cf4c; end: 108e5cf5b; -[SCMentionStickerView displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5cf4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c6c0);
}



/* Entry: 108e5cf5c; end: 108e5cf6b; -[SCMentionStickerView config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5cf5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c6cc);
}



/* Entry: 108e5cf6c; end: 108e5cf7b; -[SCMentionStickerView viewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_108e5cf6c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11277c6c8);
}



/* Entry: 108e5cf7c; end: 108e5cffb; -[SCMentionStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5cf7c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c6cc,0);
  _objc_storeStrong(param_1 + _DAT_11277c6c4,0);
  _objc_storeStrong(param_1 + _DAT_11277c6b4,0);
  _objc_storeStrong(param_1 + _DAT_11277c6b0,0);
  _objc_storeStrong(param_1 + _DAT_11277c6c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c6bc,0);
  return;
}



/* Entry: 108e5cffc; end: 108e5d457; -[SCPrivateStoryInviteStickerView initWithStickerPillViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108e5cffc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_78 = PTR_PTR_1126fec08;
  puVar1 = &uStack_80;
  puVar11 = (undefined8 *)PTR_s_initWithStickerPillViewType__1125f0c50;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStickerPillViewType__1125f0c50);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010be36960(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9680(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c20ddc0(puVar1);
    puVar4 = puVar1;
    func_0x00010be45e00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c6dc);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11277c6dc) = puVar4;
    _objc_release(uVar12);
    func_0x00010beb0040(puVar1);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    lVar14 = (long)_DAT_11277c6e0;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar2;
    _objc_release(uVar12);
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    lVar15 = (long)_DAT_11277c6e4;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)((long)puVar1 + (long)_DAT_11277c6e8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c6e8) = uVar12;
    _objc_release();
    FUN_108f22bfc();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar15;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
    _objc_release(lVar13);
    lVar15 = lVar5;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar15;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar13;
    func_0x00010c08fa60();
    _objc_release(lVar13);
    _objc_release(lVar15);
    if (lVar6 == 0) {
      func_0x00010bde3100(puVar1);
      func_0x00010bf436e0(*(undefined8 *)((long)puVar1 + lVar14));
    }
    else {
      puVar2 = PTR_PTR_1126b58e0;
      _objc_opt_new(PTR_PTR_1126b58e0);
      func_0x00010c2bae20();
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar15 = lVar5;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar15;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a8ea0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar13);
      _objc_release();
      func_0x000107c3121c();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b8308);
      lVar13 = lVar15;
      func_0x00010beecc40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar15);
      lVar15 = lVar13;
      func_0x00010bfe63a0(lVar13);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf21f60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b19f8;
      func_0x00010c2545e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      func_0x00010bfa5420(lVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(lVar6);
      _objc_release(lVar15);
      _objc_release(puVar1);
      _objc_release(lVar13);
      _objc_release(puVar2);
    }
    _objc_release(lVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfe7730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar11,PTR_s_imageFetcher_1125d7790);
  return puVar11;
}



/* Entry: 108e5d458; end: 108e5d45f;  */

void FUN_108e5d458(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe7730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_imageFetcher_1125d7790);
  return;
}



/* Entry: 108e5d460; end: 108e5d4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5d460(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    func_0x00010bde3100(lVar1,0,*(undefined8 *)(lVar1 + _DAT_11277c6e4));
  }
  else {
    func_0x00010bed9660(lVar1,param_2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277c6e0),
             PTR_s_complete_1125ae760);
  return;
}



/* Entry: 108e5d4b4; end: 108e5d6b3; -[SCPrivateStoryInviteStickerView initWithStickerStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108e5d4b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  func_0x00010c04c920(param_1,param_2,0);
  if (param_1 != 0) {
    lVar1 = param_3;
    func_0x00010c25a5c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_1,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_11277c6d4);
    *(long *)(param_1 + _DAT_11277c6d4) = lVar1;
    _objc_release(uVar8);
    lVar1 = param_3;
    func_0x00010c06a860();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_11277c6d0);
    *(long *)(param_1 + _DAT_11277c6d0) = lVar1;
    _objc_release(uVar8);
    lVar1 = param_3;
    func_0x00010c25b720();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010b769af0();
    uVar8 = 3;
    if (lVar2 != 0x77297f71) {
      uVar8 = 0;
    }
    func_0x00010c20ddc0(param_1,param_2,uVar8);
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + _DAT_11277c6ec) = 1;
    lVar1 = param_3;
    func_0x00010c25a5c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c06a860(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c25b720(param_1);
    lVar5 = param_1;
    func_0x00010be45e00(param_1,param_2,lVar1,lVar2,lVar3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_11277c6dc);
    *(long *)(param_1 + _DAT_11277c6dc) = lVar5;
    _objc_release(uVar8);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar7 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar8 = *(undefined8 *)(param_1 + _DAT_11277c6f0);
    *(undefined **)(param_1 + _DAT_11277c6f0) = puVar7;
    _objc_release(uVar8);
    _objc_release(puVar6);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108e5d6b4; end: 108e5d8f3; -[SCPrivateStoryInviteStickerView initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108e5d6b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  func_0x00010c04c920(param_1,param_2,0);
  if (param_1 != 0) {
    uVar9 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010c259fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar9);
    uVar9 = uVar1;
    func_0x00010c25a5c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_1,param_2,uVar9);
    _objc_release(uVar9);
    uVar9 = uVar1;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11277c6d4);
    *(undefined8 *)(param_1 + _DAT_11277c6d4) = uVar9;
    _objc_release(uVar7);
    uVar9 = uVar1;
    func_0x00010c06a860();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11277c6d0);
    *(undefined8 *)(param_1 + _DAT_11277c6d0) = uVar9;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126bab40;
    uVar9 = uVar1;
    func_0x00010c27dd80(uVar1);
    func_0x00010bdc24a0(puVar2,param_2,uVar9);
    func_0x00010c20ddc0(param_1,param_2,puVar2);
    *(undefined1 *)(param_1 + _DAT_11277c6ec) = 1;
    uVar9 = uVar1;
    func_0x00010c25a5c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c06a860(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c259cc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c25b720(param_1);
    lVar5 = param_1;
    func_0x00010be45e00(param_1,param_2,uVar9,uVar7,uVar3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_11277c6dc);
    *(long *)(param_1 + _DAT_11277c6dc) = lVar5;
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar6 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11277c6f0);
    *(undefined **)(param_1 + _DAT_11277c6f0) = puVar6;
    _objc_release(uVar9);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108e5d8f4; end: 108e5d98b; -[SCPrivateStoryInviteStickerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5d8f4(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fec08;
  lStack_40 = param_3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_3;
  func_0x00010c255280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe5620();
  _objc_release(lVar1);
  func_0x00010c19f0e0(param_1 + 5.0,param_2 + 13.5,0x401c000000000000,0x401c000000000000,
                      *(undefined8 *)(param_3 + _DAT_11277c6f4));
  return;
}



/* Entry: 108e5d98c; end: 108e5d98f; -[SCPrivateStoryInviteStickerView defaultText] */

void FUN_108e5d98c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110efc838;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110efc838,
                      &PTR____CFConstantStringClassReference_110efc858,0);
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



/* Entry: 108e5d990; end: 108e5d9bf; -[SCPrivateStoryInviteStickerView completeRendering] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5d990(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c6e0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e5d9c0; end: 108e5d9c7; -[SCPrivateStoryInviteStickerView iconRenderingMode] */

undefined8 FUN_108e5d9c0(void)

{
  return 1;
}



/* Entry: 108e5d9c8; end: 108e5d9cf; -[SCPrivateStoryInviteStickerView textAutocapitalizationType] */

undefined8 FUN_108e5d9c8(void)

{
  return 1;
}



/* Entry: 108e5d9d0; end: 108e5dbff; -[SCPrivateStoryInviteStickerView updateWithInfoFromStickerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5d9d0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bb320;
  _objc_opt_class(PTR_PTR_1126bb320);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) goto LAB_108e5dbdc;
  lVar7 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c071ae0();
  _objc_release(uVar3);
  _objc_release(lVar7);
  if ((int)lVar4 == 0) {
    uVar3 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_1);
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11277c6d4;
LAB_108e5dad4:
    uVar6 = *(ulong *)(param_1 + lVar7);
    uVar3 = param_3;
    func_0x00010c11ac00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    _objc_release(uVar3);
    if ((uVar6 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      *(ulong *)(param_1 + lVar7) = uVar3;
      _objc_release(uVar5);
    }
    uVar6 = *(ulong *)(param_1 + _DAT_11277c6d8);
    uVar3 = param_3;
    func_0x00010c25b720();
    if (uVar6 != uVar3) {
      func_0x00010c25b720(param_3);
      func_0x00010c20ddc0(param_1);
    }
  }
  else {
    lVar7 = (long)_DAT_11277c6d4;
    lVar4 = *(long *)(param_1 + lVar7);
    func_0x00010c08fa60();
    if ((lVar4 == 0) ||
       (uVar6 = *(ulong *)(param_1 + _DAT_11277c6d8), uVar3 = param_3, func_0x00010c25b720(),
       uVar6 != uVar3)) goto LAB_108e5dad4;
  }
  uVar3 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b720(param_3);
  lVar7 = param_1;
  func_0x00010be45e00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277c6dc);
  *(long *)(param_1 + _DAT_11277c6dc) = lVar7;
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar3);
LAB_108e5dbdc:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e5dc00; end: 108e5dd6f; -[SCPrivateStoryInviteStickerView setStoryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5dc00(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11277c6d8;
  if (*(long *)(param_1 + lVar6) == param_3) {
    return;
  }
  *(long *)(param_1 + lVar6) = param_3;
  lVar2 = param_1;
  if (param_3 == 1) {
    func_0x000108e739f8();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 3) {
    func_0x000108e739e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108e739c8();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = lVar2;
  func_0x00010c09e420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dcb60(param_1,param_2,lVar3);
  _objc_release(lVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110efc3b8;
  if ((*(long *)(param_1 + lVar6) - 1U & 0xfffffffffffffffd) != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110efc3d8;
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277c6f4),param_2,puVar4);
  _objc_release(puVar4);
  lVar6 = param_1;
  func_0x00010c26b700(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be45e00(param_1,param_2,lVar6,*(undefined8 *)(param_1 + _DAT_11277c6d0),
                      *(undefined8 *)(param_1 + _DAT_11277c6d4),param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277c6dc);
  *(long *)(param_1 + _DAT_11277c6dc) = lVar3;
  _objc_release(uVar5);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108e5dd70; end: 108e5dd77; -[SCPrivateStoryInviteStickerView infoType] */

undefined8 FUN_108e5dd70(void)

{
  return 10;
}



/* Entry: 108e5dd78; end: 108e5dd7f; -[SCPrivateStoryInviteStickerView type] */

undefined8 FUN_108e5dd78(void)

{
  return 6;
}



/* Entry: 108e5dd80; end: 108e5dd8b; -[SCPrivateStoryInviteStickerView packId] */

undefined ** FUN_108e5dd80(void)

{
  return &PTR____CFConstantStringClassReference_110efc358;
}



/* Entry: 108e5dd8c; end: 108e5dd97; -[SCPrivateStoryInviteStickerView stickerId] */

undefined ** FUN_108e5dd8c(void)

{
  return &PTR____CFConstantStringClassReference_110efc3f8;
}



/* Entry: 108e5dd98; end: 108e5de0f; -[SCPrivateStoryInviteStickerView loggingParameters] */

undefined ** FUN_108e5dd98(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110efc358;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110efc378;
}



/* Entry: 108e5de10; end: 108e5de1b; -[SCPrivateStoryInviteStickerView shortLoggingName] */

undefined ** FUN_108e5de10(void)

{
  return &PTR____CFConstantStringClassReference_110efc378;
}



/* Entry: 108e5de1c; end: 108e5de4b; -[SCPrivateStoryInviteStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5de1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c6dc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e5de4c; end: 108e5de53; -[SCPrivateStoryInviteStickerView shouldReceiveTapsViaStickerContainer] */

undefined8 FUN_108e5de4c(void)

{
  return 0;
}



/* Entry: 108e5de54; end: 108e5deff; -[SCPrivateStoryInviteStickerView imageView] */

void FUN_108e5de54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c255280();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7ca0(puVar2,param_2,param_1,0,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5df00; end: 108e5df03; -[SCPrivateStoryInviteStickerView didEndDisplay] */

void FUN_108e5df00(void)

{
  return;
}



/* Entry: 108e5df04; end: 108e5df07; -[SCPrivateStoryInviteStickerView willDisplay] */

void FUN_108e5df04(void)

{
  return;
}



/* Entry: 108e5df08; end: 108e5e09f; -[SCPrivateStoryInviteStickerView _itemInstanceFromStoryName:inviteId:storyId:storyType:] */

void FUN_108e5df08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126dc310;
  _objc_opt_new(PTR_PTR_1126dc310);
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar4 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar5 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  func_0x00010c21acc0();
  func_0x00010c20d540(puVar2,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1aeb00(puVar2,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c20d1a0(puVar2,param_2,param_5);
  _objc_release(param_5);
  puVar6 = PTR_PTR_1126bab40;
  func_0x00010bdc1300(PTR_PTR_1126bab40,param_2,param_6);
  func_0x00010c21acc0(puVar2,param_2,puVar6);
  func_0x00010c1ac500(puVar4,param_2,puVar5);
  func_0x00010c196600(puVar3,param_2,puVar4);
  func_0x00010c1b5d40(puVar1,param_2,puVar3);
  puVar6 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d340();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5e0a0; end: 108e5e26f; -[SCPrivateStoryInviteStickerView _iconImageForBitmojiAvatarImage:] */

void FUN_108e5e0a0(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  func_0x00010c23d0a0(param_4);
  param_1 = param_1 * 0.041666666666666664;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(param_1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xa1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c23d0a0(param_4);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  lVar4 = param_4;
  func_0x00010c130820();
  _objc_release(param_4);
  if (lVar4 == 2) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar1,param_3,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7c80(puVar2,param_3,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e5e270; end: 108e5e377; -[SCPrivateStoryInviteStickerView _circleLayerWithFrame:backgroundColor:borderColor:borderWidth:] */

void FUN_108e5e270(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
  _objc_retain(param_9);
  _objc_opt_new(puVar1);
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  if (param_8 != 0) {
    lVar2 = param_8;
    _objc_retainAutorelease(param_8);
    func_0x00010bdc0fe0();
    func_0x00010c16e440(puVar1,param_7,lVar2);
  }
  func_0x00010bfb68e0(puVar1);
  func_0x00010c1842e0(param_3 * 0.5,puVar1);
  func_0x00010c1c2d20(puVar1,param_7,1);
  uVar3 = param_9;
  _objc_retainAutorelease(param_9);
  func_0x00010bdc0fe0();
  _objc_release(param_9);
  func_0x00010c173280(puVar1,param_7,uVar3);
  func_0x00010c1733a0(param_5,puVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5e378; end: 108e5e43b; -[SCPrivateStoryInviteStickerView _updateIconWithBitmojiAvatarImage:bitmojiImagePromise:] */

void FUN_108e5e378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be36960(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9680(param_1,param_2,uVar1);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7c80(puVar3,param_2,param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf43d60(param_4,param_2,puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108e5e43c; end: 108e5e4d3; -[SCPrivateStoryInviteStickerView _completePromiseForNoBitmojiAvatarImage:] */

void FUN_108e5e43c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain(param_3);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7c80(puVar2,param_2,param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bf43d60(param_3,param_2,puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e5e4d4; end: 108e5e55b; -[SCPrivateStoryInviteStickerView _setupStoryTypeImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5e4d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11277c6f4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c255280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e5e55c; end: 108e5e56b; -[SCPrivateStoryInviteStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5e55c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c6f0);
}



/* Entry: 108e5e56c; end: 108e5e57b; -[SCPrivateStoryInviteStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5e56c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c6dc);
}



/* Entry: 108e5e57c; end: 108e5e58b; -[SCPrivateStoryInviteStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e5e57c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c6ec);
}



/* Entry: 108e5e58c; end: 108e5e59b; -[SCPrivateStoryInviteStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5e58c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c6ec) = param_3;
  return;
}



/* Entry: 108e5e59c; end: 108e5e5ab; -[SCPrivateStoryInviteStickerView storyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5e59c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c6d8);
}



/* Entry: 108e5e5ac; end: 108e5e5bb; -[SCPrivateStoryInviteStickerView bitmojiImageFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5e5ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c6e8);
}



/* Entry: 108e5e5bc; end: 108e5e5cb; -[SCPrivateStoryInviteStickerView publicationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5e5bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c6d4);
}



/* Entry: 108e5e5cc; end: 108e5e60b; -[SCPrivateStoryInviteStickerView setPublicationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5e5cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c6d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e5e60c; end: 108e5e61b; -[SCPrivateStoryInviteStickerView inviteId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e5e60c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c6d0);
}



/* Entry: 108e5e61c; end: 108e5e65b; -[SCPrivateStoryInviteStickerView setInviteId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5e61c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c6d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e5e65c; end: 108e5e6fb; -[SCPrivateStoryInviteStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5e65c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c6d0,0);
  _objc_storeStrong(param_1 + _DAT_11277c6d4,0);
  _objc_storeStrong(param_1 + _DAT_11277c6e8,0);
  _objc_storeStrong(param_1 + _DAT_11277c6dc,0);
  _objc_storeStrong(param_1 + _DAT_11277c6f0,0);
  _objc_storeStrong(param_1 + _DAT_11277c6e0,0);
  _objc_storeStrong(param_1 + _DAT_11277c6f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c6e4,0);
  return;
}



/* Entry: 108e5e6fc; end: 108e5e843;  */

void FUN_108e5e6fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bb2f8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  func_0x00010bfef280();
  _objc_release(param_2);
  _objc_release(param_1);
  uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar5 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  func_0x00010c23d5a0(uVar4,uVar5,puVar1);
  func_0x00010c08cdc0(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c0469e0(uVar4,uVar5);
  _objc_retain(puVar1);
  puVar3 = puVar2;
  func_0x00010bfe91c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e5e844; end: 108e5e8ab;  */

void FUN_108e5e844(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1000(param_2);
  _objc_release(param_2);
  func_0x00010c12fc60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e5e8ac; end: 108e5eb4b; -[SCSnapcodeStickerView initWithItemInstance:snapchattersDataFetcher:currentUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108e5e8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fec10;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(0,0,0x4064000000000000,0x4064000000000000,puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_11277c6fc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2451a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010c2bc400();
    *(char *)((long)puVar1 + (long)_DAT_11277c700) = (char)uVar2;
    puVar5 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c704);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c704) = puVar5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(uVar4);
    _objc_retain(puVar1);
    func_0x00010c2448c0(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar6 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c70c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c70c) = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108e5eb4c; end: 108e5ecd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5eb4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126dc318;
    _objc_alloc();
    uVar3 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc400(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c05b1a0();
    uVar10 = *(undefined8 *)(lVar1 + _DAT_11277c708);
    *(undefined **)(lVar1 + _DAT_11277c708) = puVar2;
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010be3af40(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e5ecd4; end: 108e5edcb; -[SCSnapcodeStickerView initWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e5ecd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fec10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(0,0,0x4064000000000000,0x4064000000000000,&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11277c708;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf867a0();
    *(char *)((long)puVar1 + (long)_DAT_11277c700) = (char)uVar2;
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bed9f80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c6fc);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11277c6fc) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c704);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c704) = puVar4;
    _objc_release(uVar2);
    func_0x00010be3af40(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e5edcc; end: 108e5ee9f; -[SCSnapcodeStickerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5edcc(double param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fec10;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  param_1 = param_1 / 160.0;
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  dStack_80 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformScale(&uStack_70,param_1,param_1,&uStack_a0);
  lVar1 = (long)_DAT_11277c710;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  dStack_80 = dStack_50;
  func_0x00010c219960(*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  func_0x00010c17a6a0(dStack_50 * 0.5,param_1 * 160.0 * 0.5,*(undefined8 *)(param_2 + lVar1));
  return;
}



/* Entry: 108e5eea0; end: 108e5f09b; -[SCSnapcodeStickerView _initalizeViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5eea0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  dVar6 = 0.0;
  func_0x00010c013de0(0,0,0x4064000000000000,0x4064000000000000);
  lVar4 = (long)_DAT_11277c710;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar4));
  _CGRectGetMaxY();
  func_0x00010bfb68e0(param_1);
  lVar5 = param_1;
  func_0x00010bebd9a0(0,dVar6 + 20.0 + 7.0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11277c714;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar5;
  _objc_release(uVar2);
  dVar6 = 12.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar4));
  _CGRectGetMaxY();
  func_0x00010bfb68e0(param_1);
  lVar5 = param_1;
  func_0x00010bebd9a0(0,dVar6 + 7.0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11277c718;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar5;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  lVar5 = (long)_DAT_11277c708;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c294420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf85d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar2);
  func_0x00010bee3dc0(param_1);
  func_0x00010c161020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c704),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 108e5f09c; end: 108e5f18f; -[SCSnapcodeStickerView updateUserSnapcodeWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5f09c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126bb318;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be10b80(0x4064000000000000,puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108e5f190; end: 108e5f1ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5f190(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_11277c710));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e5f200; end: 108e5f393; -[SCSnapcodeStickerView _snapcodeStickerLabelWithFrame:] */

void FUN_108e5f200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  func_0x00010c1cfce0();
  func_0x00010c1bdb00(puVar1,param_6,4);
  func_0x00010c213040(puVar1,param_6,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_6,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3f000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3f000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4032000000000000);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5f394; end: 108e5f4a7; -[SCSnapcodeStickerView _updateViewWithCurrentViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5f394(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_2 + _DAT_11277c700) == '\x01') {
    func_0x00010befbb60(param_2);
    puVar3 = (undefined8 *)(param_2 + _DAT_11277c714);
    func_0x00010befbb60(param_2,param_3,*puVar3);
  }
  else {
    func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_11277c718));
    func_0x00010c12c960(*(undefined8 *)(param_2 + _DAT_11277c714));
    puVar3 = (undefined8 *)(param_2 + _DAT_11277c710);
  }
  func_0x00010bfb68e0(*puVar3);
  _CGRectGetMaxY();
  lVar1 = param_2;
  uVar4 = param_1;
  func_0x00010bed9f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + _DAT_11277c6fc);
  *(long *)(param_2 + _DAT_11277c6fc) = lVar1;
  _objc_release(uVar2);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  func_0x00010c1739e0(0,0,uVar4,param_1,param_2);
  func_0x00010c0cc2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e5f4a8; end: 108e5f4d7; -[SCSnapcodeStickerView completeRendering] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5f4a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c704);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e5f4d8; end: 108e5f4df; -[SCSnapcodeStickerView shouldRespondToTap:] */

undefined8 FUN_108e5f4d8(void)

{
  return 1;
}



/* Entry: 108e5f4e0; end: 108e5f4f7; -[SCSnapcodeStickerView cycleStickerToNextStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5f4e0(long param_1)

{
  *(byte *)(param_1 + _DAT_11277c700) = *(byte *)(param_1 + _DAT_11277c700) ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010bee3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewWithCurrentViewType_112596918);
  return;
}



/* Entry: 108e5f4f8; end: 108e5f58f; -[SCSnapcodeStickerView imageView] */

void FUN_108e5f4f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7ca0(puVar2,param_2,param_1,0,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5f590; end: 108e5f593; -[SCSnapcodeStickerView willDisplay] */

void FUN_108e5f590(void)

{
  return;
}



/* Entry: 108e5f594; end: 108e5f597; -[SCSnapcodeStickerView didEndDisplay] */

void FUN_108e5f594(void)

{
  return;
}



/* Entry: 108e5f598; end: 108e5f59f; -[SCSnapcodeStickerView infoType] */

undefined8 FUN_108e5f598(void)

{
  return 9;
}



/* Entry: 108e5f5a0; end: 108e5f5c7; -[SCSnapcodeStickerView intrinsicSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108e5f5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11277c710));
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108e5f5c8; end: 108e5f5cf; -[SCSnapcodeStickerView toCTPItem] */

undefined8 FUN_108e5f5c8(void)

{
  return 0;
}



/* Entry: 108e5f5d0; end: 108e5f5ff; -[SCSnapcodeStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5f5d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c6fc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e5f600; end: 108e5f607; -[SCSnapcodeStickerView type] */

undefined8 FUN_108e5f600(void)

{
  return 6;
}



/* Entry: 108e5f608; end: 108e5f613; -[SCSnapcodeStickerView packId] */

undefined ** FUN_108e5f608(void)

{
  return &PTR____CFConstantStringClassReference_110dbe6d8;
}



/* Entry: 108e5f614; end: 108e5f62f; -[SCSnapcodeStickerView stickerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5f614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bb318,PTR_s_stringForDisplayUserTag__112674ed0,
             *(undefined1 *)(param_1 + _DAT_11277c700));
  return;
}


