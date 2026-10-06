/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060fc498; end: 1060fc4cf; -[SCCARShoppingShoppingLinkView viewModel] */

void FUN_1060fc498(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001060fc500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fc4d0; end: 1060fc52b;  */

void FUN_1060fc4d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 1060fc52c; end: 1060fc533; -[SCCARShoppingDisplayCardType__Enum init] */

void FUN_1060fc52c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 1060fc534; end: 1060fc53b; -[SCCARShoppingLoadingState__Enum init] */

void FUN_1060fc534(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 1060fc53c; end: 1060fc56f; -[SCCARShoppingLookBuilderCategoryViewModel initWithProducts:categoryName:] */

void FUN_1060fc53c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126efad8;
  uStack_20 = param_1;
  func_0x0001060fca14();
  func_0x0001060fca0c(&uStack_20);
  return;
}



/* Entry: 1060fc570; end: 1060fc583; +[SCCARShoppingLookBuilderCategoryViewModel valdiMarshallableObjectDescriptor] */

void FUN_1060fc570(undefined8 *param_1)

{
  *param_1 = &PTR_s_products_11090e718;
  param_1[1] = &PTR_DAT_11090e778;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc584; end: 1060fc5c7; -[SCCARShoppingLookBuilderContext initWithOnSelectionUpdated:] */

void FUN_1060fc584(void)

{
  func_0x0001060fca44();
  func_0x0001060fca14();
  func_0x0001060fc9e4();
  func_0x0001060fca50();
  return;
}



/* Entry: 1060fc5c8; end: 1060fc5db; +[SCCARShoppingLookBuilderContext valdiMarshallableObjectDescriptor] */

void FUN_1060fc5c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090e788;
  param_1[1] = &PTR_DAT_11090e7b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc5dc; end: 1060fc603; -[SCCARShoppingLookBuilderProduct initWithProductId:productImageUrl:] */

void FUN_1060fc5dc(void)

{
  func_0x0001060fc9fc(PTR_PTR_1126efae8);
  func_0x0001060fc9e4();
  return;
}



/* Entry: 1060fc604; end: 1060fc613; +[SCCARShoppingLookBuilderProduct valdiMarshallableObjectDescriptor] */

void FUN_1060fc604(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_productId_11090e7c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc614; end: 1060fc647; -[SCCARShoppingLookBuilderSelection initWithCategoryIndex:productIndex:productId:] */

void FUN_1060fc614(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126efaf0;
  uStack_20 = param_1;
  func_0x0001060fca14();
  func_0x0001060fca0c(&uStack_20);
  return;
}



/* Entry: 1060fc648; end: 1060fc657; +[SCCARShoppingLookBuilderSelection valdiMarshallableObjectDescriptor] */

void FUN_1060fc648(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11090e810;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc658; end: 1060fc67f; -[SCCARShoppingLookBuilderState initWithSelectedCategoryIndex:] */

void FUN_1060fc658(void)

{
  func_0x0001060fc9fc(PTR_PTR_1126efaf8);
  func_0x0001060fc9e4();
  return;
}



/* Entry: 1060fc680; end: 1060fc68f; +[SCCARShoppingLookBuilderState valdiMarshallableObjectDescriptor] */

void FUN_1060fc680(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11090e870;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc690; end: 1060fc6bb; -[SCCARShoppingLookBuilderViewModel initWithCategories:initialCategoryIndex:] */

void FUN_1060fc690(void)

{
  func_0x0001060fc9fc(PTR_PTR_1126efb00);
  func_0x0001060fc9e4();
  return;
}



/* Entry: 1060fc6bc; end: 1060fc6cf; +[SCCARShoppingLookBuilderViewModel valdiMarshallableObjectDescriptor] */

void FUN_1060fc6bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090e8a0;
  param_1[1] = &PTR_DAT_11090e8e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc6d0; end: 1060fc6f3; -[SCCARShoppingProductSelectorAction init] */

void FUN_1060fc6d0(void)

{
  func_0x0001060fca28(PTR_PTR_1126efb08);
  return;
}



/* Entry: 1060fc6f4; end: 1060fc707; +[SCCARShoppingProductSelectorAction valdiMarshallableObjectDescriptor] */

void FUN_1060fc6f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090e8f8;
  param_1[1] = &PTR_DAT_11090e928;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc708; end: 1060fc72f; -[SCCARShoppingProductSelectorActionSelectIndex initWithIndex:] */

void FUN_1060fc708(void)

{
  func_0x0001060fc9fc(PTR_PTR_1126efb10);
  func_0x0001060fc9e4();
  return;
}



/* Entry: 1060fc730; end: 1060fc73f; +[SCCARShoppingProductSelectorActionSelectIndex valdiMarshallableObjectDescriptor] */

void FUN_1060fc730(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11090e938;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc740; end: 1060fc763; -[SCCARShoppingProductSelectorContext init] */

void FUN_1060fc740(void)

{
  func_0x0001060fca28(PTR_PTR_1126efb18);
  return;
}



/* Entry: 1060fc764; end: 1060fc78b; +[SCCARShoppingProductSelectorContext valdiMarshallableObjectDescriptor] */

void FUN_1060fc764(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090e998;
  param_1[1] = &PTR_DAT_11090ea70;
  param_1[2] = &PTR_DAT_11090e968;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc78c; end: 1060fc7b7;  */

undefined8 FUN_1060fc78c(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[3],*param_2,param_2[1],param_2[2]);
  return 0;
}



/* Entry: 1060fc7b8; end: 1060fc837;  */

void FUN_1060fc7b8(undefined8 param_1)

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
  pcStack_38 = FUN_1060fc9a4;
  puStack_30 = &UNK_1108ee330;
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



/* Entry: 1060fc838; end: 1060fc877; -[SCCARShoppingProductSelectorViewModel initWithLensId:loadingState:products:] */

void FUN_1060fc838(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126efb20;
  uStack_20 = param_1;
  func_0x0001060fca14();
  func_0x0001060fca0c(&uStack_20);
  return;
}



/* Entry: 1060fc878; end: 1060fc88b; +[SCCARShoppingProductSelectorViewModel valdiMarshallableObjectDescriptor] */

void FUN_1060fc878(undefined8 *param_1)

{
  *param_1 = &PTR_s_lensId_11090eaa0;
  param_1[1] = &PTR_DAT_11090eb78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc88c; end: 1060fc8c7; -[SCCARShoppingProductViewModel initWithProductId:productImageUrl:primaryText:secondaryTextLeft:tertiaryText:] */

void FUN_1060fc88c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126efb28;
  uStack_20 = param_1;
  func_0x0001060fca14();
  func_0x0001060fca0c(&uStack_20);
  return;
}



/* Entry: 1060fc8c8; end: 1060fc8db; +[SCCARShoppingProductViewModel valdiMarshallableObjectDescriptor] */

void FUN_1060fc8c8(undefined8 *param_1)

{
  *param_1 = &PTR_s_productId_11090eba0;
  param_1[1] = &PTR_DAT_11090ec48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc8dc; end: 1060fc91f; -[SCCARShoppingShoppingLinkContext initWithOnTapAction:] */

void FUN_1060fc8dc(void)

{
  func_0x0001060fca44();
  func_0x0001060fca14();
  func_0x0001060fc9e4();
  func_0x0001060fca50();
  return;
}



/* Entry: 1060fc920; end: 1060fc92f; +[SCCARShoppingShoppingLinkContext valdiMarshallableObjectDescriptor] */

void FUN_1060fc920(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onTapAction_11090ec58;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc930; end: 1060fc957; -[SCCARShoppingShoppingLinkProduct initWithImageUrl:] */

void FUN_1060fc930(void)

{
  func_0x0001060fc9fc(PTR_PTR_1126efb38);
  func_0x0001060fc9e4();
  return;
}



/* Entry: 1060fc958; end: 1060fc967; +[SCCARShoppingShoppingLinkProduct valdiMarshallableObjectDescriptor] */

void FUN_1060fc958(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11090ec88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc968; end: 1060fc98f; -[SCCARShoppingShoppingLinkViewModel initWithProducts:] */

void FUN_1060fc968(void)

{
  func_0x0001060fc9fc(PTR_PTR_1126efb40);
  func_0x0001060fc9e4();
  return;
}



/* Entry: 1060fc990; end: 1060fc9a3; +[SCCARShoppingShoppingLinkViewModel valdiMarshallableObjectDescriptor] */

void FUN_1060fc990(undefined8 *param_1)

{
  *param_1 = &PTR_s_products_11090ecb8;
  param_1[1] = &PTR_DAT_11090ece8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fc9a4; end: 1060fc9d3;  */

void FUN_1060fc9a4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1060fc9d4; end: 1060fca5b;  */

void FUN_1060fc9d4(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060fca5c; end: 1060fcadb; -[SCShoppingLensGrapheneLogger initWithGrapheneRegistry:] */

undefined1 * FUN_1060fca5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efb48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf09400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060fcadc; end: 1060fcb7b; -[SCShoppingLensGrapheneLogger logGetLensItemsSuccessStatus:optionsBuilder:] */

void FUN_1060fcadc(long param_1,undefined8 param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c8068;
  if ((param_3 & 1) == 0) {
    func_0x00010bfc6fe0(PTR_PTR_1126c8068);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfc7020();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar1;
  if (param_4 != (undefined *)0x0) {
    puVar2 = param_4;
    func_0x00010bf23420(param_4,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060fcb7c; end: 1060fcc57; -[SCShoppingLensGrapheneLogger logGetLensItemsLatency:isSuccess:optionsBuilder:] */

void FUN_1060fcb7c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c8068;
  func_0x00010bfc7000(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  if (param_5 != (undefined *)0x0) {
    puVar1 = param_5;
    func_0x00010bf23420(param_5,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 8),param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1060fcc58; end: 1060fccf7; -[SCShoppingLensGrapheneLogger logGetShowcaseSuccessStatus:optionsBuilder:] */

void FUN_1060fcc58(long param_1,undefined8 param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c8068;
  if ((param_3 & 1) == 0) {
    func_0x00010bfca460(PTR_PTR_1126c8068);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfca4a0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar1;
  if (param_4 != (undefined *)0x0) {
    puVar2 = param_4;
    func_0x00010bf23420(param_4,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060fccf8; end: 1060fcdd3; -[SCShoppingLensGrapheneLogger logGetShowcaseLatency:isSuccess:optionsBuilder:] */

void FUN_1060fccf8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c8068;
  func_0x00010bfca480(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  if (param_5 != (undefined *)0x0) {
    puVar1 = param_5;
    func_0x00010bf23420(param_5,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 8),param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1060fcdd4; end: 1060fce83; -[SCShoppingLensGrapheneLogger logRemoteAssetLoadingIndicatorLatency:result:] */

void FUN_1060fcdd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c8068;
  func_0x00010bf0b3e0(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010be95a00(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dce878,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 8),param_3,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1060fce84; end: 1060fcf3b; -[SCShoppingLensGrapheneLogger logProductSelectorInitializedWithOptionsBuilder:] */

void FUN_1060fce84(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c8068;
  func_0x00010c116200(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf23420(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060fcf3c; end: 1060fd033; -[SCShoppingLensGrapheneLogger logProductSelectorActivatedWithLatency:result:optionsBuilder:] */

void FUN_1060fcf3c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c8068;
  _objc_retain(param_5);
  func_0x00010c116200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bdc68e0(param_2,param_3,puVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + 8),param_3,lVar2);
  puVar1 = PTR_PTR_1126c8068;
  func_0x00010c116220(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bdc68e0(param_2,param_3,puVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 8),param_3,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1060fd034; end: 1060fd11f; -[SCShoppingLensGrapheneLogger _addDimensionsProductSelectorActivatedWithMetric:result:optionsBuilder:] */

void FUN_1060fd034(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,
                      &PTR____CFConstantStringClassReference_110e41658);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be959c0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dce878,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  if (param_5 != 0) {
    lVar2 = param_5;
    func_0x00010bf23420(param_5,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060fd120; end: 1060fd21f; -[SCShoppingLensGrapheneLogger logProductSelectorLoadedWithLatency:result:optionsBuilder:] */

void FUN_1060fd120(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c8068;
  _objc_retain(param_5);
  func_0x00010c116200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bdc6920(param_2,param_3,puVar1,0,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + 8),param_3,lVar2);
  puVar1 = PTR_PTR_1126c8068;
  func_0x00010c116220(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bdc6920(param_2,param_3,puVar1,0,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 8),param_3,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1060fd220; end: 1060fd367; -[SCShoppingLensGrapheneLogger _addDimensionsProductSelectorLoadedWithMetric:fromCache:result:optionsBuilder:] */

void FUN_1060fd220(undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5
                  ,long param_6)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_6);
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,
                      &PTR____CFConstantStringClassReference_110e41678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be959e0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dce878,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar1 = &PTR_PTR_11090ed88;
  if (param_4 == 0) {
    ppuVar1 = &PTR_PTR_11090ed90;
  }
  puVar4 = *ppuVar1;
  _objc_retain(puVar4);
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010c2ac460(lVar2,param_2,&PTR____CFConstantStringClassReference_110de10b8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar2);
  lVar2 = lVar3;
  if (param_6 != 0) {
    lVar2 = param_6;
    func_0x00010bf23420(param_6,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060fd368; end: 1060fd453; -[SCShoppingLensGrapheneLogger logProductSelectorDisplayedWithLatency:optionsBuilder:] */

void FUN_1060fd368(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c8068;
  _objc_retain(param_4);
  func_0x00010c116200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bdc6900(param_2,param_3,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + 8),param_3,lVar2);
  puVar1 = PTR_PTR_1126c8068;
  func_0x00010c116220(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bdc6900(param_2,param_3,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 8),param_3,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1060fd454; end: 1060fd4e3; -[SCShoppingLensGrapheneLogger _addDimensionsProductSelectorDisplayedWithMetric:optionsBuilder:] */

void FUN_1060fd454(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,
                      &PTR____CFConstantStringClassReference_110e41698);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  if (param_4 != 0) {
    lVar1 = param_4;
    func_0x00010bf23420(param_4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1060fd4e4; end: 1060fd51f; -[SCShoppingLensGrapheneLogger _resultStringFromActivatedResult:] */

void FUN_1060fd4e4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 unaff_x19;
  
  if (param_3 < 5) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_11090ecf8)[param_3];
    _objc_retain(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1060fd520; end: 1060fd55b; -[SCShoppingLensGrapheneLogger _resultStringFromLoadResult:] */

void FUN_1060fd520(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 unaff_x19;
  
  if (param_3 < 4) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_11090ed20)[param_3];
    _objc_retain(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1060fd55c; end: 1060fd597; -[SCShoppingLensGrapheneLogger _resultStringFromLoadingIndicatorResult:] */

void FUN_1060fd55c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 unaff_x19;
  
  if (param_3 < 3) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_11090ed40)[param_3];
    _objc_retain(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1060fd598; end: 1060fd64f; -[SCShoppingLensGrapheneLogger logPrefetchProductsInitializedWithOptionsBuilder:] */

void FUN_1060fd598(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c8068;
  func_0x00010c1079c0(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf23420(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060fd650; end: 1060fd747; -[SCShoppingLensGrapheneLogger logPrefetchProductsActivatedWithLatency:result:optionsBuilder:] */

void FUN_1060fd650(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c8068;
  _objc_retain(param_5);
  func_0x00010c1079c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bdc68e0(param_2,param_3,puVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + 8),param_3,lVar2);
  puVar1 = PTR_PTR_1126c8068;
  func_0x00010c1079e0(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bdc68e0(param_2,param_3,puVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 8),param_3,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1060fd748; end: 1060fd847; -[SCShoppingLensGrapheneLogger logPrefetchProductsLoadedWithLatency:result:optionsBuilder:] */

void FUN_1060fd748(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c8068;
  _objc_retain(param_5);
  func_0x00010c1079c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bdc6920(param_2,param_3,puVar1,0,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + 8),param_3,lVar2);
  puVar1 = PTR_PTR_1126c8068;
  func_0x00010c1079e0(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bdc6920(param_2,param_3,puVar1,0,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 8),param_3,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1060fd848; end: 1060fd88b; -[SCShoppingLensGrapheneLogger logProductVisualizationDidTapTryOn] */

void FUN_1060fd848(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8068;
  func_0x00010c2a0700(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060fd88c; end: 1060fd8cf; -[SCShoppingLensGrapheneLogger logProductVisualizationDidTapBackButton] */

void FUN_1060fd88c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8068;
  func_0x00010c2a06a0(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060fd8d0; end: 1060fd95b; -[SCShoppingLensGrapheneLogger logProductVisualizationLensModeChangedCounter:] */

void FUN_1060fd8d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010be60f20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c8068;
  func_0x00010c2a06c0(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060fd95c; end: 1060fda4f; -[SCShoppingLensGrapheneLogger logProductVisualizationLensModeLatency:newMode:latency:] */

void FUN_1060fd95c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_2;
  func_0x00010be60f20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010be60f20(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c8068;
  func_0x00010c2a06e0(PTR_PTR_1126c8068);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110e41738,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010befc000(param_1,*(undefined8 *)(param_2 + 8),param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060fda50; end: 1060fda8b; -[SCShoppingLensGrapheneLogger _modeStringFromProductVisualizationMode:] */

void FUN_1060fda50(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 unaff_x19;
  
  if (param_3 < 5) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_11090ed58)[param_3];
    _objc_retain(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1060fda8c; end: 1060fda93; -[SCShoppingLensGrapheneLogger graphene] */

undefined8 FUN_1060fda8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060fda94; end: 1060fdac3; -[SCShoppingLensGrapheneLogger setGraphene:] */

void FUN_1060fda94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060fdac4; end: 1060fdacf; -[SCShoppingLensGrapheneLogger .cxx_destruct] */

void FUN_1060fdac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060fdad0; end: 1060fdb0b; -[SCShoppingLensGrapheneMetricOptionsBuilder setIsSponsored:] */

void FUN_1060fdad0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1060fdb0c; end: 1060fdb53; -[SCShoppingLensGrapheneMetricOptionsBuilder setFromCache:] */

void FUN_1060fdb0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(long *)(param_1 + 0x10) != 0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1060fdb54; end: 1060fdb83; -[SCShoppingLensGrapheneMetricOptionsBuilder setErrorCode:] */

void FUN_1060fdb54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060fdb84; end: 1060fdbb3; -[SCShoppingLensGrapheneMetricOptionsBuilder setAssetBehaviour:] */

void FUN_1060fdb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060fdbb4; end: 1060fdca3; -[SCShoppingLensGrapheneMetricOptionsBuilder buildWithMetric:] */

void FUN_1060fdbb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  uVar3 = param_3;
  if (lVar2 != 0) {
    func_0x00010bf1f3c0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
    if ((int)lVar2 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
    }
    func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110e415f8,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  uVar4 = uVar3;
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010c2ac460(uVar3,param_2,&PTR____CFConstantStringClassReference_110e41618);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  uVar3 = uVar4;
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c2ac460(uVar4,param_2,&PTR____CFConstantStringClassReference_110e417b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1060fdca4; end: 1060fdceb; -[SCShoppingLensGrapheneMetricOptionsBuilder .cxx_destruct] */

void FUN_1060fdca4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060fdcec; end: 1060fdd17; +[SCGrapheneArShoppingMetric getLensItemsSuccess] */

void FUN_1060fdcec(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fdd18; end: 1060fdd43; +[SCGrapheneArShoppingMetric getLensItemsFailure] */

void FUN_1060fdd18(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fdd44; end: 1060fdd6f; +[SCGrapheneArShoppingMetric getLensItemsLatency] */

void FUN_1060fdd44(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fdd70; end: 1060fdd9b; +[SCGrapheneArShoppingMetric getShowcaseSuccess] */

void FUN_1060fdd70(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fdd9c; end: 1060fddc7; +[SCGrapheneArShoppingMetric getShowcaseFailure] */

void FUN_1060fdd9c(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fddc8; end: 1060fddf3; +[SCGrapheneArShoppingMetric getShowcaseLatency] */

void FUN_1060fddc8(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fddf4; end: 1060fde1f; +[SCGrapheneArShoppingMetric assetLoadingIndicatorLatency] */

void FUN_1060fddf4(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fde20; end: 1060fde4b; +[SCGrapheneArShoppingMetric productSelectorLoadCount] */

void FUN_1060fde20(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fde4c; end: 1060fde77; +[SCGrapheneArShoppingMetric productSelectorLoadLatency] */

void FUN_1060fde4c(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fde78; end: 1060fdea3; +[SCGrapheneArShoppingMetric vizTryOn] */

void FUN_1060fde78(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fdea4; end: 1060fdecf; +[SCGrapheneArShoppingMetric vizBackButton] */

void FUN_1060fdea4(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fded0; end: 1060fdefb; +[SCGrapheneArShoppingMetric vizLensModeChanged] */

void FUN_1060fded0(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fdefc; end: 1060fdf27; +[SCGrapheneArShoppingMetric vizLensModeLatency] */

void FUN_1060fdefc(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fdf28; end: 1060fdf53; +[SCGrapheneArShoppingMetric prefetchLoadCount] */

void FUN_1060fdf28(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fdf54; end: 1060fdf7f; +[SCGrapheneArShoppingMetric prefetchLoadLatency] */

void FUN_1060fdf54(void)

{
  _objc_alloc(PTR_PTR_1126c8068);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060fdf80; end: 1060fe01f; -[SCGrapheneArShoppingMetric description] */

void FUN_1060fdf80(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e41818;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e41818,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126efb50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1060fe020; end: 1060fe1ef; -[SCGrapheneRegistry arShoppingGraphene] */

void FUN_1060fe020(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1060fe0a8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c3360 != -1) {
    func_0x00010002a2fc(0x1136c3360,&puStack_48);
  }
  uVar1 = uRam00000001136c3358;
  _objc_retain(uRam00000001136c3358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060fe1f0; end: 1060fe28b; -[SCShoppingLensMetadata initWithUnlockableId:shoppingLensType:domains:lensClientBehavior:] */

undefined1 *
FUN_1060fe1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126efb58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1060fe28c; end: 1060fe2af; -[SCShoppingLensMetadata copyWithZone:] */

undefined8 FUN_1060fe28c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1060fe2b0; end: 1060fe333; -[SCShoppingLensMetadata hash] */

undefined8 * FUN_1060fe2b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1060fe3d8;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((puVar2[1] != param_3[1] || (puVar2[2] != param_3[2])) || (puVar2[4] != param_3[4])))) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_1060fe3d8;
    }
    puVar5 = (undefined8 *)puVar2[3];
    if (puVar5 != (undefined8 *)param_3[3]) {
      func_0x00010c071ae0();
      goto LAB_1060fe3d8;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_1060fe3d8:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 1060fe334; end: 1060fe3f3; -[SCShoppingLensMetadata isEqual:] */

long FUN_1060fe334(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1060fe3d8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_1060fe3d8;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_1060fe3d8;
    }
  }
  lVar3 = 1;
LAB_1060fe3d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1060fe3f4; end: 1060fe3fb; -[SCShoppingLensMetadata unlockableId] */

undefined8 FUN_1060fe3f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060fe3fc; end: 1060fe403; -[SCShoppingLensMetadata shoppingLensType] */

undefined8 FUN_1060fe3fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060fe404; end: 1060fe40b; -[SCShoppingLensMetadata domains] */

undefined8 FUN_1060fe404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060fe40c; end: 1060fe413; -[SCShoppingLensMetadata lensClientBehavior] */

undefined8 FUN_1060fe40c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060fe414; end: 1060fe41f; -[SCShoppingLensMetadata .cxx_destruct] */

void FUN_1060fe414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1060fe420; end: 1060fe5a3; -[SCShoppingLensItemSetDomain initWithDomainKey:domainLabel:showcaseContext:stateKey:stateProducts:assetCategory:renderingGroups:displayCardType:] */

undefined1 *
FUN_1060fe420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126efb60;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060fe5a4; end: 1060fe5c7; -[SCShoppingLensItemSetDomain copyWithZone:] */

undefined8 FUN_1060fe5a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1060fe5c8; end: 1060fe683; -[SCShoppingLensItemSetDomain hash] */

undefined8 * FUN_1060fe5c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x40);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_68;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1060fe784:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1060fe790;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[6] == param_3[6] && (puVar3[8] == param_3[8])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[7];
                if (puVar6 != (undefined8 *)param_3[7]) {
                  func_0x00010c071ae0();
                  goto LAB_1060fe790;
                }
                goto LAB_1060fe784;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1060fe790:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1060fe684; end: 1060fe7ab; -[SCShoppingLensItemSetDomain isEqual:] */

long FUN_1060fe684(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1060fe784:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1060fe790;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_1060fe790;
                }
                goto LAB_1060fe784;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1060fe790:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1060fe7ac; end: 1060fe7b3; -[SCShoppingLensItemSetDomain domainKey] */

undefined8 FUN_1060fe7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


