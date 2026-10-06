/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10671d214; end: 10671d243; -[SCLensExplorerCacheFeedRenderStrategyOrientation .cxx_destruct] */

void FUN_10671d214(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10671d244; end: 10671d263; -[SCLensExplorerCacheFeedRenderStrategyOrientation isSameSubtype:] */

bool FUN_10671d244(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
  }
  return false;
}



/* Entry: 10671d264; end: 10671d26b; -[SCLensExplorerCacheFeedRenderStrategyOrientation subtype] */

undefined8 FUN_10671d264(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671d26c; end: 10671d337; -[SCLensExplorerCacheFeedRenderStrategyOrientation asFeedRenderOrientationHorizontal] */

void FUN_10671d26c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106716c60;
  uStack_30 = 0x106716c70;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10671d338;
  puStack_60 = &UNK_1109373c0;
  puStack_48 = puStack_58;
  func_0x00010c0bdc60(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110937410);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10671d338; end: 10671d36f;  */

void FUN_10671d338(long param_1,undefined8 param_2)

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



/* Entry: 10671d370; end: 10671d373;  */

void FUN_10671d370(void)

{
  return;
}



/* Entry: 10671d374; end: 10671d43f; -[SCLensExplorerCacheFeedRenderStrategyOrientation asFeedRenderOrientationVertical] */

void FUN_10671d374(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106716c60;
  uStack_30 = 0x106716c70;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10671d444;
  puStack_60 = &UNK_110933878;
  puStack_48 = puStack_58;
  func_0x00010c0bdc60(param_1,param_2,&PTR___NSConcreteGlobalBlock_110937450,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10671d440; end: 10671d443;  */

void FUN_10671d440(void)

{
  return;
}



/* Entry: 10671d444; end: 10671d47b;  */

void FUN_10671d444(long param_1,undefined8 param_2)

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



/* Entry: 10671d47c; end: 10671d4c3; -[SCLensExplorerCacheFeedRenderOrientationHorizontal initWithScrollBehaviour:] */

void FUN_10671d47c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2c48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10671d4c4; end: 10671d4e7; -[SCLensExplorerCacheFeedRenderOrientationHorizontal copyWithZone:] */

undefined8 FUN_10671d4c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671d4e8; end: 10671d4ef; -[SCLensExplorerCacheFeedRenderOrientationHorizontal hash] */

undefined4 FUN_10671d4e8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10671d4f0; end: 10671d577; -[SCLensExplorerCacheFeedRenderOrientationHorizontal isEqual:] */

bool FUN_10671d4f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(param_1 + 8) == *(int *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10671d578; end: 10671d57f; -[SCLensExplorerCacheFeedRenderOrientationHorizontal scrollBehaviour] */

undefined4 FUN_10671d578(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10671d580; end: 10671d5a3; -[SCLensExplorerCacheFeedRenderOrientationVertical copyWithZone:] */

undefined8 FUN_10671d580(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671d5a4; end: 10671d613; -[SCLensExplorerCacheFeedRenderOrientationVertical isEqual:] */

uint FUN_10671d5a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((param_1 != 0) && (param_3 != 0)) {
      _objc_opt_class(param_1);
      lVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,param_1);
      uVar2 = (uint)lVar1;
    }
  }
  _objc_release(param_3);
  return uVar2 & 1;
}



/* Entry: 10671d614; end: 10671d67b; +[SCLensExplorerCacheCategoryData categoryDataModelWithCategoryDataModel:] */

void FUN_10671d614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cce10;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10671d67c; end: 10671d6e7; +[SCLensExplorerCacheCategoryData subCategoryDataModelWithSubCategoryDataModel:] */

void FUN_10671d67c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cce10;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10671d6e8; end: 10671d70b; -[SCLensExplorerCacheCategoryData copyWithZone:] */

undefined8 FUN_10671d6e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671d70c; end: 10671d783; -[SCLensExplorerCacheCategoryData hash] */

void FUN_10671d70c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f2c50;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10671d784; end: 10671d7c7; -[SCLensExplorerCacheCategoryData internalInit] */

void FUN_10671d784(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f2c50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10671d7c8; end: 10671d87f; -[SCLensExplorerCacheCategoryData isEqual:] */

long FUN_10671d7c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10671d858:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671d864;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10671d864;
        }
        goto LAB_10671d858;
      }
    }
    lVar3 = 0;
  }
LAB_10671d864:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671d880; end: 10671d903; -[SCLensExplorerCacheCategoryData matchCategoryDataModel:subCategoryDataModel:] */

void FUN_10671d880(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 2) {
    if (param_4 == 0) goto LAB_10671d8e8;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 1 || param_3 == 0) goto LAB_10671d8e8;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10671d8e8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10671d904; end: 10671d933; -[SCLensExplorerCacheCategoryData .cxx_destruct] */

void FUN_10671d904(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10671d934; end: 10671d953; -[SCLensExplorerCacheCategoryData isSameSubtype:] */

bool FUN_10671d934(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
  }
  return false;
}



/* Entry: 10671d954; end: 10671d95b; -[SCLensExplorerCacheCategoryData subtype] */

undefined8 FUN_10671d954(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671d95c; end: 10671da27; -[SCLensExplorerCacheCategoryData asCategoryDataModel] */

void FUN_10671d95c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106716c60;
  uStack_30 = 0x106716c70;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10671da28;
  puStack_60 = &UNK_1109333f8;
  puStack_48 = puStack_58;
  func_0x00010c0bcf40(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110937490);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10671da28; end: 10671da5f;  */

void FUN_10671da28(long param_1,undefined8 param_2)

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



/* Entry: 10671da60; end: 10671da63;  */

void FUN_10671da60(void)

{
  return;
}



/* Entry: 10671da64; end: 10671db2f; -[SCLensExplorerCacheCategoryData asSubCategoryDataModel] */

void FUN_10671da64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106716c60;
  uStack_30 = 0x106716c70;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10671db34;
  puStack_60 = &UNK_110933a38;
  puStack_48 = puStack_58;
  func_0x00010c0bcf40(param_1,param_2,&PTR___NSConcreteGlobalBlock_1109374d0,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10671db30; end: 10671db33;  */

void FUN_10671db30(void)

{
  return;
}



/* Entry: 10671db34; end: 10671db6b;  */

void FUN_10671db34(long param_1,undefined8 param_2)

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



/* Entry: 10671db6c; end: 10671dc17; -[SCLensExplorerCacheCategoryDataModel initWithCategoryIdentifier:subCategories:] */

undefined1 *
FUN_10671db6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2c58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10671dc18; end: 10671dc3b; -[SCLensExplorerCacheCategoryDataModel copyWithZone:] */

undefined8 FUN_10671dc18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671dc3c; end: 10671dcaf; -[SCLensExplorerCacheCategoryDataModel hash] */

undefined8 * FUN_10671dc3c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10671dd30:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10671dd3c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10671dd3c;
        }
        goto LAB_10671dd30;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10671dd3c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10671dcb0; end: 10671dd57; -[SCLensExplorerCacheCategoryDataModel isEqual:] */

long FUN_10671dcb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10671dd30:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671dd3c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10671dd3c;
        }
        goto LAB_10671dd30;
      }
    }
    lVar3 = 0;
  }
LAB_10671dd3c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671dd58; end: 10671dd5f; -[SCLensExplorerCacheCategoryDataModel categoryIdentifier] */

undefined8 FUN_10671dd58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671dd60; end: 10671dd67; -[SCLensExplorerCacheCategoryDataModel subCategories] */

undefined8 FUN_10671dd60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10671dd68; end: 10671dd97; -[SCLensExplorerCacheCategoryDataModel .cxx_destruct] */

void FUN_10671dd68(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10671dd98; end: 10671de0f; -[SCLensExplorerCacheSubcategoryData initWithSubCategoryId:] */

undefined1 * FUN_10671dd98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2c60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10671de10; end: 10671de33; -[SCLensExplorerCacheSubcategoryData copyWithZone:] */

undefined8 FUN_10671de10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671de34; end: 10671de3b; -[SCLensExplorerCacheSubcategoryData hash] */

void FUN_10671de34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10671de3c; end: 10671decb; -[SCLensExplorerCacheSubcategoryData isEqual:] */

long FUN_10671de3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671deb0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10671deb0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10671deb0;
    }
  }
  lVar3 = 1;
LAB_10671deb0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671decc; end: 10671ded3; -[SCLensExplorerCacheSubcategoryData subCategoryId] */

undefined8 FUN_10671decc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671ded4; end: 10671dedf; -[SCLensExplorerCacheSubcategoryData .cxx_destruct] */

void FUN_10671ded4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10671dee0; end: 10671df57; -[SCLensExplorerCacheSubCategoryDataModel initWithSubcategoryIdentifier:] */

undefined1 * FUN_10671dee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2c68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10671df58; end: 10671df7b; -[SCLensExplorerCacheSubCategoryDataModel copyWithZone:] */

undefined8 FUN_10671df58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671df7c; end: 10671df83; -[SCLensExplorerCacheSubCategoryDataModel hash] */

void FUN_10671df7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10671df84; end: 10671e013; -[SCLensExplorerCacheSubCategoryDataModel isEqual:] */

long FUN_10671df84(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671dff8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10671dff8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10671dff8;
    }
  }
  lVar3 = 1;
LAB_10671dff8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671e014; end: 10671e01b; -[SCLensExplorerCacheSubCategoryDataModel subcategoryIdentifier] */

undefined8 FUN_10671e014(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671e01c; end: 10671e027; -[SCLensExplorerCacheSubCategoryDataModel .cxx_destruct] */

void FUN_10671e01c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10671e028; end: 10671e08b;  */

undefined ** FUN_10671e028(void)

{
  int iVar1;
  
  if ((bRam000000011381ac10 & 1) == 0) {
    iVar1 = 0x1381ac10;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&SUB_105004938,&PTR_PTR_11315aa50,0x100000000);
      ___cxa_guard_release(0x11381ac10);
    }
  }
  return &PTR_PTR_11315aa50;
}



/* Entry: 10671e08c; end: 10671e113;  */

void FUN_10671e08c(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 7) || (puVar1[3] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10671e114; end: 10671e19f;  */

void FUN_10671e114(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c155f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c155f40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10671e1a0; end: 10671e257;  */

undefined8 FUN_10671e1a0(void)

{
  int iVar1;
  
  if ((bRam000000011381ac88 & 1) == 0) {
    iVar1 = 0x1381ac88;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381ac20 = 0xe;
      puRam000000011381ac28 = &UNK_10f38ec5c;
      uRam000000011381ac30 = 0x100;
      pcRam000000011381ac38 = FUN_10671e258;
      pcRam000000011381ac40 = FUN_10671e290;
      ppuRam000000011381ac18 = &PTR_SUB_110862958;
      uRam000000011381ac58 = 0;
      uRam000000011381ac50 = 0;
      uRam000000011381ac68 = 0;
      uRam000000011381ac60 = 0;
      uRam000000011381ac78 = 0;
      uRam000000011381ac70 = 0;
      uRam000000011381ac80 = 0;
      ___cxa_atexit(&SUB_1050077c0,0x11381ac18,0x100000000);
      ___cxa_guard_release(0x11381ac88);
    }
  }
  return 0x11381ac18;
}



/* Entry: 10671e258; end: 10671e28f;  */

undefined8 FUN_10671e258(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 10671e290; end: 10671e2e3;  */

undefined8 FUN_10671e290(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf4e080(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10671e2e4; end: 10671e393;  */

void FUN_10671e2e4(void)

{
  int iVar1;
  
  if ((bRam000000011381ad78 & 1) == 0) {
    iVar1 = 0x1381ad78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381ad10 = 0xe;
      puRam000000011381ad18 = &UNK_10f38ec64;
      uRam000000011381ad20 = 0x1010000;
      pcRam000000011381ad28 = FUN_10671e4b4;
      pcRam000000011381ad30 = FUN_10671e504;
      ppuRam000000011381ad08 = &PTR_FUN_110937500;
      uRam000000011381ad48 = 0;
      uRam000000011381ad40 = 0;
      uRam000000011381ad58 = 0;
      uRam000000011381ad50 = 0;
      uRam000000011381ad68 = 0;
      uRam000000011381ad60 = 0;
      uRam000000011381ad70 = 0;
      ___cxa_atexit(FUN_10671e5a0,0x11381ad08,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x11381ad78);
      return;
    }
  }
  return;
}



/* Entry: 10671e394; end: 10671e4b3;  */

undefined8 * FUN_10671e394(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110937570;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10671e4b4; end: 10671e503;  */

undefined1 FUN_10671e4b4(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ushort *puVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  puVar2 = (ushort *)((long)piVar1 - (long)*piVar1);
  if ((10 < *puVar2) && (puVar2[5] != 0)) {
    *param_2 = 0;
    if ((ulong)puVar2[4] != 0) {
      return *(undefined1 *)((long)piVar1 + (ulong)puVar2[4]);
    }
    return 0;
  }
  *param_2 = 1;
  return 0;
}



/* Entry: 10671e504; end: 10671e59f;  */

long FUN_10671e504(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar2 = param_1;
    func_0x00010c0cfdc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c261400();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10671e5a0; end: 10671e677;  */

undefined8 * FUN_10671e5a0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110937500;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10671e678; end: 10671ed33;  */

void FUN_10671e678(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x00010671ecd8;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x00010671ecf8;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x00010671ecf8;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x00010671ec6c:
                    /* WARNING: Could not recover jumptable at 0x00010671ec90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x00010671ec6c;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x00010671ecf8;
    }
    goto code_r0x00010671ecec;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x00010671ecec;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x00010671ecf8;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x00010671ecf8;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_10671ed08;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x00010671ecd8:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x00010671ecec:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x00010671ecf8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_10671ed08:
  return;
}



/* Entry: 10671ed34; end: 10671edbb;  */

void FUN_10671ed34(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010671eda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 10671edbc; end: 10671eeef;  */

void FUN_10671edbc(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined4 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010671eee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 10671eef0; end: 10671ef9f;  */

ulong FUN_10671eef0(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    uVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    uVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      uVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(uVar3,param_4);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10671efa0; end: 10671f21b;  */

undefined8 * FUN_10671efa0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_FUN_110937500;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_10671f21c(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 2);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_FUN_110937500;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_FUN_110937500;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_10671f0c8;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_10671f0c8;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_10671f0c8:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_110937500;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 10671f21c; end: 10671f2bb;  */

void FUN_10671f21c(long *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  
  if (param_4 != 0) {
    if (param_4 >> 0x3e != 0) {
      FUN_10671f2bc();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10671f2a0);
      (*pcVar1)();
    }
    lVar2 = param_4 << 2;
    __Znwm();
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + param_4 * 4;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memcpy(lVar2,param_2,param_3);
    }
    param_1[1] = lVar2 + param_3;
  }
  return;
}



/* Entry: 10671f2bc; end: 10671f2cf;  */

void FUN_10671f2bc(void)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_110937570;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10671f2d0; end: 10671f33b;  */

void FUN_10671f2d0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110937570;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10671f33c; end: 10671f9f7;  */

void FUN_10671f33c(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x00010671f99c;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x00010671f9bc;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x00010671f9bc;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x00010671f930:
                    /* WARNING: Could not recover jumptable at 0x00010671f954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x00010671f930;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x00010671f9bc;
    }
    goto code_r0x00010671f9b0;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x00010671f9b0;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x00010671f9bc;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x00010671f9bc;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_10671f9cc;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x00010671f99c:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x00010671f9b0:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x00010671f9bc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_10671f9cc:
  return;
}



/* Entry: 10671f9f8; end: 10671fa7f;  */

void FUN_10671f9f8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010671fa6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 10671fa80; end: 10671fbb3;  */

void FUN_10671fa80(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010671fba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 10671fbb4; end: 10671fdbf;  */

uint FUN_10671fbb4(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  long *plVar12;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar11 = *(uint *)(param_1 + 8);
  if ((int)uVar11 < 0xe) {
    if (1 < uVar11 - 1) {
      if (uVar11 - 0xc < 2) {
        plVar12 = *(long **)(param_1 + 0x38);
        _objc_retain(param_3);
        (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
        piVar2 = *(int **)(param_1 + 0x48);
        piVar3 = *(int **)(param_1 + 0x50);
        iVar7 = (int)plVar12;
        if (uVar11 == 0xc) {
          if (piVar2 == piVar3) {
            uVar11 = 0;
          }
          else {
            do {
              piVar10 = piVar2 + 1;
              iVar4 = *piVar2;
              uVar11 = (uint)(iVar7 == iVar4);
              piVar2 = piVar10;
            } while (iVar7 != iVar4 && piVar10 != piVar3);
          }
        }
        else if (piVar2 == piVar3) {
          uVar11 = 1;
        }
        else {
          do {
            piVar10 = piVar2 + 1;
            iVar4 = *piVar2;
            uVar11 = (uint)(iVar7 != iVar4);
            piVar2 = piVar10;
          } while (iVar7 != iVar4 && piVar10 != piVar3);
        }
        _objc_release(param_3);
        goto LAB_10671fd98;
      }
      goto LAB_10671fce4;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar6 = uVar11 != 1;
    bVar5 = bStack_43;
  }
  else {
    if (uVar11 - 0xf < 2) {
      *param_4 = 0;
      uVar11 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_10671fd98;
    }
    if (uVar11 == 0xe) {
      lVar1 = 0x28;
      lVar8 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar8 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar8,param_4);
      uVar11 = (uint)lVar8;
      goto LAB_10671fd98;
    }
LAB_10671fce4:
    if ((uVar11 & 0xfffffffe) != 10) {
      uVar11 = 0;
      goto LAB_10671fd98;
    }
    plVar12 = *(long **)(param_1 + 0x38);
    plVar9 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&bStack_41);
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar6 = uVar11 == 0xb;
    bVar5 = (int)plVar12 == (int)plVar9;
  }
  uVar11 = (uint)(bVar6 ^ bVar5);
LAB_10671fd98:
  _objc_release(param_3);
  return uVar11 & 1;
}



/* Entry: 10671fdc0; end: 10672003b;  */

undefined8 * FUN_10671fdc0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_FUN_110937570;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_10671f21c(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 2);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_FUN_110937570;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_FUN_110937570;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_10671fee8;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_10671fee8;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_10671fee8:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_110937570;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 10672003c; end: 10672029b;  */

long FUN_10672003c(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((8 < *puVar2) && ((ulong)puVar2[4] != 0)) &&
      (10 < *puVar2 && *(char *)((long)param_1 + (ulong)puVar2[4]) == '\x01')) &&
     ((ulong)puVar2[5] != 0)) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar2[5]);
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}



/* Entry: 10672029c; end: 1067202a7; +[SCLensExplorerCacheLensFeedItem table] */

undefined * FUN_10672029c(void)

{
  return &UNK_10f38ec6f;
}



/* Entry: 1067202a8; end: 10672063b; +[SCLensExplorerCacheLensFeedItem immutableObjectParse:bufferSize:] */

void FUN_1067202a8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126ccc98;
  _objc_alloc(PTR_PTR_1126ccc98);
  puVar16 = (undefined *)0x0;
  puVar15 = (undefined *)0x0;
  lVar13 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar13);
  if (4 < uVar3) {
    uVar14 = (ulong)((ushort *)((long)piVar1 - lVar13))[2];
    if (uVar14 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar14);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar13);
    }
    if ((uVar3 < 7) || (uVar14 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar13)), uVar14 == 0)) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar14);
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  piVar5 = piVar1;
  FUN_10672003c();
  piVar6 = piVar1;
  func_0x000106720088();
  piVar7 = piVar1;
  func_0x0001067200d4();
  piVar8 = piVar1;
  func_0x000106720120();
  piVar9 = piVar1;
  func_0x00010672016c();
  piVar10 = piVar1;
  func_0x000106720204();
  piVar11 = piVar1;
  func_0x000106720250();
  puVar17 = PTR_PTR_1126ccc90;
  if (piVar5 == (int *)0x0) {
    if (piVar6 == (int *)0x0) {
      if (piVar7 == (int *)0x0) {
        if (piVar8 == (int *)0x0) {
          if (piVar9 == (int *)0x0) {
            if (piVar10 == (int *)0x0) {
              if (piVar11 == (int *)0x0) {
                puVar17 = (undefined *)0x0;
                goto LAB_106720564;
              }
              FUN_106724870();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c25a040(puVar17,param_2,piVar11);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              FUN_106724088(piVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe1000(puVar17,param_2,piVar10);
              _objc_retainAutoreleasedReturnValue();
              piVar11 = piVar10;
            }
          }
          else {
            FUN_1067239e0(piVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c091c80(puVar17,param_2,piVar9);
            _objc_retainAutoreleasedReturnValue();
            piVar11 = piVar9;
          }
        }
        else {
          FUN_106722a14(piVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c092160(puVar17,param_2,piVar8);
          _objc_retainAutoreleasedReturnValue();
          piVar11 = piVar8;
        }
      }
      else {
        FUN_106722618(piVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0976e0(puVar17,param_2,piVar7);
        _objc_retainAutoreleasedReturnValue();
        piVar11 = piVar7;
      }
    }
    else {
      FUN_106722248(piVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0915e0(puVar17,param_2,piVar6);
      _objc_retainAutoreleasedReturnValue();
      piVar11 = piVar6;
    }
  }
  else {
    FUN_106721c38(piVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c094c60(puVar17,param_2,piVar5);
    _objc_retainAutoreleasedReturnValue();
    piVar11 = piVar5;
  }
  _objc_release(piVar11);
LAB_106720564:
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
     (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar14 == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)((long)piVar1 + uVar14);
  }
  func_0x00010c04cae0(puVar4,param_2,puVar15,puVar16,puVar17,uVar12);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10672063c; end: 10672064f; +[SCLensExplorerCacheLensFeedItem objectClassFunctionPointer] */

undefined1  [16] FUN_10672063c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_10672069c;
  auVar1._0_8_ = FUN_106720650;
  return auVar1;
}



/* Entry: 106720650; end: 10672069b;  */

void FUN_106720650(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf2d81c1;
  _strcmp(&DAT_10f2d81c1,param_1);
  if (iVar1 != 0) {
    _strcmp("context",param_1);
  }
  return;
}



/* Entry: 10672069c; end: 1067207b7;  */

bool FUN_10672069c(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 == 1) {
    func_0x0001001b9e08(param_2,&UNK_10f38ecf3);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar5 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar5);
    }
    _sqlite3_bind_int64(param_2,2,uVar4);
  }
  else {
    if (param_1 != 0) {
      return false;
    }
    func_0x0001001b9e08(param_2,&UNK_10f38ec92);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar5 == 0)) {
      _sqlite3_bind_null(param_2,2);
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar5);
      puVar3 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
      _sqlite3_bind_text(param_2,2,puVar3 + 1,*puVar3,0);
    }
  }
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 1067207b8; end: 1067208c3;  */

undefined1 *
FUN_1067207b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126f2c70;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1067208c4; end: 106720c7f;  */

void FUN_1067208c4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c2570e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar7,&UNK_10f38ed50);
        if (puVar7 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c2570e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar7,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar7;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar7;
            _sqlite3_column_int64(puVar7,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126ccc98);
            _sqlite3_column_blob(puVar7,1);
            _sqlite3_column_bytes(puVar7,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar7);
            if (puVar3 == (undefined *)0x0) goto LAB_106720bbc;
            puVar7 = PTR_PTR_1126ccc78;
            _objc_alloc(PTR_PTR_1126ccc78);
            puVar2 = puVar3;
            func_0x00010c2570e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c155f40(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c0cfdc0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010bf4e080(puVar3);
            FUN_1067207b8(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
            param_1 = puVar3;
            goto LAB_1067209d0;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar7 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126ccc98);
      puVar3 = puVar7;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar7);
      if (puVar3 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126ccc78;
        _objc_alloc(PTR_PTR_1126ccc78);
        puVar2 = puVar3;
        func_0x00010c2570e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c155f40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0cfdc0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf4e080(puVar3);
        FUN_1067207b8(puVar7,puVar1,puVar2,puVar4,puVar5,puVar6);
        param_1 = puVar3;
LAB_1067209d0:
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_106720bc4;
      }
LAB_106720bbc:
      param_1 = (undefined *)0x0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_106720bc4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106720c80; end: 106720cf3;  */

void FUN_106720c80(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1067208c4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106720cf4; end: 106720f7f;  */

void FUN_106720cf4(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ccc78;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_1067208c4();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar6 = PTR_PTR_1126ccc78;
    _objc_retain(param_1);
    _objc_opt_self(puVar6);
    puVar6 = PTR_PTR_1126ccc78;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c2570e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c155f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c0cfdc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010bf4e080(param_1);
      FUN_1067207b8(puVar6,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar6 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar6 = param_1;
    func_0x00010c2570e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_1;
    func_0x00010c155f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_1;
    func_0x00010c0cfdc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar6);
    puVar6 = param_1;
    func_0x00010bf4e080();
    *(undefined **)(puVar1 + 0x30) = puVar6;
    _objc_retain(puVar1);
    puVar6 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106720f80; end: 106720fe3;  */

void FUN_106720f80(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ccc98;
    _objc_alloc(PTR_PTR_1126ccc98);
    func_0x00010c04cae0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106720fe4; end: 10672101f; -[SCLensExplorerCacheLensFeedItemChangeRequest .cxx_destruct] */

void FUN_106720fe4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106721020; end: 10672102b; -[SCLensExplorerCacheLensFeedItemChangeRequest table] */

undefined * FUN_106721020(void)

{
  return &UNK_10f38ec6f;
}



/* Entry: 10672102c; end: 10672113f; -[SCLensExplorerCacheLensFeedItemChangeRequest createTableWithSQLite:] */

void FUN_10672102c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dddd679,0x96,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dddd70f,0x7b,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10dddd78a,0x9b,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dddd825,0x78,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dddd89d,0x95,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 106721140; end: 1067218eb; -[SCLensExplorerCacheLensFeedItemChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106721140(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar7 = param_1;
  if (iVar3 == 1) {
    FUN_106720f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_1067218ec(param_4,puVar7);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar14 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar14;
    puVar12 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010bf636c0();
    func_0x0001050da3a4();
    _objc_release(puVar12);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f38ee79);
    if (lVar8 == 0) goto LAB_106721814;
    _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
    puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
    _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar8 != 0x65) goto LAB_106721814;
    uVar13 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar9 & 1) != 0) {
      lVar8 = param_3;
      func_0x0001001b9e08(param_3,&UNK_10f38ec92);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar11 == 0)) {
        _sqlite3_bind_null(lVar8,2);
      }
      else {
        puVar14 = (uint *)((long)piVar1 + uVar11);
        puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
        _sqlite3_bind_text(lVar8,2,puVar2 + 1,*puVar2,0);
      }
      _sqlite3_step();
      if ((int)lVar8 != 0x65) goto LAB_106721814;
    }
    if (((uint)puVar9 >> 8 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f38ecf3);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar11 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)((long)piVar1 + uVar11);
      }
      _sqlite3_bind_int64(param_3,2,uVar10);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_106721814;
    }
    *(undefined8 *)(param_1 + 8) = uVar13;
    func_0x00010c1eeb60(puVar7);
    puVar12 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126ccc98);
    func_0x00010c21c9a0(puVar12);
LAB_1067217ec:
    _objc_release(puVar12);
    _objc_retain(puVar7);
    puVar12 = puVar7;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar8 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f38eda3);
        if (lVar8 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar8 == 0x65) {
            lVar8 = param_3;
            func_0x0001001b9e08(param_3,&UNK_10f38ede1);
            if (lVar8 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar8 != 0x65) goto LAB_1067212a0;
            }
            func_0x0001001b9e08(param_3,&UNK_10f38ee2e);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_1067212a0;
            }
            puVar7 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126ccc98);
            func_0x00010c21c9a0(puVar7);
            _objc_release(puVar12);
            _objc_release(puVar7);
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106721820;
          }
        }
      }
LAB_1067212a0:
      puVar12 = (undefined *)0x0;
      goto LAB_106721820;
    }
    FUN_106720f80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    FUN_1067218ec(param_4,puVar7);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar14 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar14;
    uVar13 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar7);
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f38eec7);
    if (lVar8 != 0) {
      _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar8,2,uVar13);
      piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
      puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
      _sqlite3_bind_text(lVar8,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar8 == 0x65) {
        puVar12 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126ccc98);
        puVar9 = puVar12;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        puVar12 = puVar9;
        func_0x00010c155f40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010c155f40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar12);
        _objc_retain(puVar5);
        if (puVar12 == (undefined *)0x0 && puVar5 == (undefined *)0x0) {
LAB_106721724:
          puVar12 = puVar9;
          func_0x00010bf4e080();
          puVar5 = puVar7;
          func_0x00010bf4e080();
          if (puVar12 != puVar5) {
            func_0x0001001b9e08(param_3,&UNK_10f38ef80);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
               (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar11 == 0)) {
              uVar10 = 0;
            }
            else {
              uVar10 = *(undefined8 *)((long)piVar1 + uVar11);
            }
            _sqlite3_bind_int64(param_3,1,uVar10);
            _sqlite3_bind_int64(param_3,2,uVar13);
            _sqlite3_step();
            if ((int)param_3 != 0x65) goto LAB_106721804;
          }
          _objc_release(puVar9);
          _objc_release(puVar7);
          puVar12 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126ccc98);
          func_0x00010c21c9a0(puVar12);
          goto LAB_1067217ec;
        }
        if ((puVar12 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
          _objc_release(puVar5);
          _objc_release(puVar12);
          _objc_release(puVar5);
          _objc_release(puVar12);
        }
        else {
          puVar6 = puVar12;
          func_0x00010c0720c0();
          _objc_release(puVar5);
          _objc_release(puVar12);
          _objc_release(puVar5);
          _objc_release(puVar12);
          if (((ulong)puVar6 & 1) != 0) goto LAB_106721724;
        }
        lVar8 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f38ef1f);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar11 == 0)) {
          _sqlite3_bind_null(lVar8,1);
        }
        else {
          puVar14 = (uint *)((long)piVar1 + uVar11);
          puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
          _sqlite3_bind_text(lVar8,1,puVar2 + 1,*puVar2,0);
        }
        _sqlite3_bind_int64(lVar8,2,uVar13);
        _sqlite3_step();
        if ((int)lVar8 == 0x65) goto LAB_106721724;
LAB_106721804:
        _objc_release(puVar9);
      }
    }
    _objc_release(puVar7);
LAB_106721814:
    puVar12 = (undefined *)0x0;
  }
  _objc_release(puVar7);
LAB_106721820:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1067218ec; end: 106721c37;  */

ulong FUN_1067218ec(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010c0cfdc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3812000000;
  pcStack_a8 = FUN_10672562c;
  uStack_a0 = 0x106725638;
  pcStack_98 = "";
  uStack_90 = 0;
  func_0x00010c0be940();
  uVar1 = *(uint *)(puStack_80 + 3);
  uVar2 = *(undefined4 *)(puStack_b8 + 6);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010c2570e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_1067254fc(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c155f40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_1067254fc(param_1,uVar8);
  uVar10 = param_2;
  func_0x00010bf4e080(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,0xc,uVar10,0);
  func_0x000100c3b11c(param_1,10,uVar2);
  func_0x0001001ce2e4(param_1,6,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar7 & 0xffffffff);
  func_0x000100ab13ac(param_1,8,uVar1 & 0xff,0);
  func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106721c38; end: 106722247;  */

void FUN_106721c38(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  ushort uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  
  puVar6 = PTR_PTR_1126cccb8;
  _objc_alloc();
  lVar9 = (long)*param_1;
  uVar7 = *(ushort *)((long)param_1 - lVar9);
  if (uVar7 < 5) {
    puVar15 = (undefined *)0x0;
LAB_106721d24:
    puVar13 = (undefined *)0x0;
LAB_106721d28:
    puVar14 = (undefined *)0x0;
LAB_106721d2c:
    puVar17 = (undefined *)0x0;
LAB_106721d30:
    puVar18 = (undefined *)0x0;
LAB_106721d34:
    lVar9 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)param_1 - lVar9))[2];
    if (uVar11 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar11);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)*param_1;
      uVar7 = *(ushort *)((long)param_1 - lVar9);
    }
    lVar9 = -lVar9;
    if (uVar7 < 7) goto LAB_106721d24;
    uVar11 = (ulong)*(ushort *)((long)param_1 + lVar9 + 6);
    if (uVar11 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar11);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*param_1;
      uVar7 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar7 < 9) goto LAB_106721d28;
    uVar11 = (ulong)*(ushort *)((long)param_1 + lVar9 + 8);
    if (uVar11 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar11);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*param_1;
      uVar7 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar7 < 0xb) goto LAB_106721d2c;
    uVar11 = (ulong)*(ushort *)((long)param_1 + lVar9 + 10);
    if (uVar11 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar11);
      puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*param_1;
      uVar7 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar7 < 0xd) goto LAB_106721d30;
    uVar11 = (ulong)*(ushort *)((long)param_1 + lVar9 + 0xc);
    if (uVar11 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar11);
      puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*param_1;
      uVar7 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar7 < 0xf) || (uVar11 = (ulong)*(ushort *)((long)param_1 + lVar9 + 0xe), uVar11 == 0))
    goto LAB_106721d34;
    puVar1 = (uint *)((long)param_1 + uVar11);
    lVar9 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_106724b20(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)*param_1;
  if ((*(ushort *)((long)param_1 - lVar10) < 0x11) ||
     (uVar11 = (ulong)((ushort *)((long)param_1 - lVar10))[8], uVar11 == 0)) {
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar11);
    uVar3 = *puVar1;
    puVar19 = PTR_PTR_1126ccca8;
    _objc_alloc();
    piVar2 = (int *)((long)puVar1 + (ulong)uVar3);
    lVar10 = (long)*piVar2;
    uVar7 = *(ushort *)((long)piVar2 - lVar10);
    if (uVar7 < 5) {
      puVar20 = (undefined *)0x0;
LAB_106721ea0:
      puVar16 = (undefined *)0x0;
LAB_106721ea4:
      lVar10 = 0;
    }
    else {
      uVar11 = (ulong)((ushort *)((long)piVar2 - lVar10))[2];
      if (uVar11 == 0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar1 = (uint *)((long)piVar2 + uVar11);
        puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar1 + (ulong)*puVar1 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = (long)*piVar2;
        uVar7 = *(ushort *)((long)piVar2 - lVar10);
      }
      lVar10 = -lVar10;
      if (uVar7 < 7) goto LAB_106721ea0;
      uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar10 + 6);
      if (uVar11 == 0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        puVar1 = (uint *)((long)piVar2 + uVar11);
        puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar1 + (ulong)*puVar1 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = -(long)*piVar2;
        uVar7 = *(ushort *)((long)piVar2 - (long)*piVar2);
      }
      if ((uVar7 < 9) || (uVar11 = (ulong)*(ushort *)((long)piVar2 + lVar10 + 8), uVar11 == 0))
      goto LAB_106721ea4;
      puVar1 = (uint *)((long)piVar2 + uVar11);
      lVar10 = (long)puVar1 + (ulong)*puVar1;
    }
    FUN_106725120(lVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = 0;
    if ((10 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar11 != 0)) {
      uVar21 = *(undefined8 *)((long)piVar2 + uVar11);
    }
    func_0x00010c059200(uVar21,puVar19,param_2,puVar20,puVar16,lVar10);
    _objc_release(lVar10);
    _objc_release(puVar16);
    _objc_release(puVar20);
    lVar10 = (long)*param_1;
  }
  if ((*(ushort *)((long)param_1 - lVar10) < 0x13) ||
     (uVar11 = (ulong)((ushort *)((long)param_1 - lVar10))[9], uVar11 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar11);
    lVar10 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_106724e6c();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = (ushort *)((long)param_1 - (long)*param_1);
  uVar7 = *puVar12;
  if (uVar7 < 0x15) {
    uVar8 = 0;
LAB_106721fd8:
    uVar21 = 0;
    bVar4 = false;
  }
  else {
    uVar8 = 0;
    if ((ulong)puVar12[10] != 0) {
      uVar8 = *(undefined4 *)((long)param_1 + (ulong)puVar12[10]);
    }
    if (uVar7 < 0x17) goto LAB_106721fd8;
    bVar4 = false;
    if ((ulong)puVar12[0xb] != 0) {
      bVar4 = *(char *)((long)param_1 + (ulong)puVar12[0xb]) != '\0';
    }
    if (uVar7 < 0x19) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      if ((ulong)puVar12[0xc] != 0) {
        uVar21 = *(undefined8 *)((long)param_1 + (ulong)puVar12[0xc]);
      }
      if (0x1a < uVar7) {
        bVar5 = false;
        if ((ulong)puVar12[0xd] != 0) {
          bVar5 = *(char *)((long)param_1 + (ulong)puVar12[0xd]) != '\0';
        }
        goto LAB_106721fe0;
      }
    }
  }
  bVar5 = false;
LAB_106721fe0:
  func_0x00010c0591e0(puVar6,param_2,puVar15,puVar13,puVar14,puVar17,puVar18,lVar9,puVar19,lVar10,
                      uVar8,bVar4,uVar21,bVar5);
  _objc_release(lVar10);
  _objc_release(puVar19);
  _objc_release(lVar9);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106722248; end: 106722617;  */

void FUN_106722248(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  puVar2 = PTR_PTR_1126cd478;
  _objc_alloc(PTR_PTR_1126cd478);
  lVar4 = (long)*param_1;
  uVar5 = *(ushort *)((long)param_1 - lVar4);
  if (uVar5 < 5) {
    puVar7 = (undefined *)0x0;
LAB_106722334:
    puVar8 = (undefined *)0x0;
LAB_106722338:
    puVar9 = (undefined *)0x0;
LAB_10672233c:
    puVar11 = (undefined *)0x0;
LAB_106722340:
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_1 - lVar4))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - lVar4);
    }
    lVar4 = -lVar4;
    if (uVar5 < 7) goto LAB_106722334;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 6);
    if (uVar6 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 9) goto LAB_106722338;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 8);
    if (uVar6 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 0xb) goto LAB_10672233c;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 10);
    if (uVar6 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 0xd) goto LAB_106722340;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xc);
    if (uVar6 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((0xe < uVar5) && (uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xe), uVar6 != 0)) {
      puVar1 = (uint *)((long)param_1 + uVar6);
      lVar4 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_106722348;
    }
  }
  lVar4 = 0;
LAB_106722348:
  FUN_106724b20(lVar4);
  _objc_retainAutoreleasedReturnValue();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x11) ||
     (uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[8], uVar6 == 0)) {
    lVar3 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar6);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_106724e6c();
  _objc_retainAutoreleasedReturnValue();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x13) ||
     (uVar6 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[9], uVar6 == 0)) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar6);
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfff740(puVar2,param_2,puVar7,puVar8,puVar9,puVar11,puVar12,lVar4,lVar3,puVar10);
  _objc_release(puVar10);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106722618; end: 106722a13;  */

void FUN_106722618(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  puVar2 = PTR_PTR_1126cccc0;
  _objc_alloc(PTR_PTR_1126cccc0);
  lVar4 = (long)*param_1;
  uVar5 = *(ushort *)((long)param_1 - lVar4);
  if (uVar5 < 5) {
    puVar8 = (undefined *)0x0;
LAB_106722704:
    puVar9 = (undefined *)0x0;
LAB_106722708:
    uVar12 = 0;
LAB_10672270c:
    puVar11 = (undefined *)0x0;
LAB_106722710:
    puVar13 = (undefined *)0x0;
LAB_106722714:
    lVar4 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_1 - lVar4))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - lVar4);
    }
    lVar4 = -lVar4;
    if (uVar5 < 7) goto LAB_106722704;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar4 + 6);
    if (uVar7 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 9) goto LAB_106722708;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar4 + 8);
    if (uVar7 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)((long)param_1 + uVar7);
    }
    if (uVar5 < 0xb) goto LAB_10672270c;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar4 + 10);
    if (uVar7 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 0xd) goto LAB_106722710;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xc);
    if (uVar7 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar5 < 0xf) || (uVar7 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xe), uVar7 == 0))
    goto LAB_106722714;
    puVar1 = (uint *)((long)param_1 + uVar7);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_106724b20(lVar4);
  _objc_retainAutoreleasedReturnValue();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x11) ||
     (uVar7 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[8], uVar7 == 0)) {
    lVar3 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar7);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_106724e6c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)*param_1;
  uVar5 = *(ushort *)((long)param_1 - lVar6);
  if (uVar5 < 0x13) {
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_1 - lVar6))[9];
    if (uVar7 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - lVar6);
    }
    if ((0x14 < uVar5) && (uVar7 = (ulong)*(ushort *)((long)param_1 + (0x14 - lVar6)), uVar7 != 0))
    {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106722814;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_106722814:
  func_0x00010c054440(puVar2,param_2,puVar8,puVar9,uVar12,puVar11,puVar13,lVar4,lVar3,puVar14,
                      puVar10);
  _objc_release(puVar10);
  _objc_release(puVar14);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106722a14; end: 1067239df;  */

void FUN_106722a14(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ushort uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  uint *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puStack_110;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar8 = PTR_PTR_1126cccd0;
  _objc_alloc();
  lVar13 = (long)*param_1;
  uVar12 = *(ushort *)((long)param_1 - lVar13);
  if (uVar12 < 5) {
    puVar24 = (undefined *)0x0;
LAB_106722afc:
    puStack_78 = (undefined *)0x0;
LAB_106722b00:
    puStack_80 = (undefined *)0x0;
LAB_106722b04:
    puStack_88 = (undefined *)0x0;
LAB_106722b08:
    bVar5 = false;
LAB_106722b0c:
    bVar6 = false;
LAB_106722b10:
    puVar22 = (undefined *)0x0;
LAB_106722b14:
    puVar23 = (undefined *)0x0;
LAB_106722b1c:
    puVar25 = (undefined *)0x0;
LAB_106722b20:
    puVar26 = (undefined *)0x0;
LAB_106722b24:
    lVar13 = 0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)param_1 - lVar13))[2];
    if (uVar15 == 0) {
      puVar24 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar15);
      puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = (long)*param_1;
      uVar12 = *(ushort *)((long)param_1 - lVar13);
    }
    lVar13 = -lVar13;
    if (uVar12 < 7) goto LAB_106722afc;
    uVar15 = (ulong)*(ushort *)((long)param_1 + lVar13 + 6);
    if (uVar15 == 0) {
      puStack_78 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar15);
      puStack_78 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = -(long)*param_1;
      uVar12 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar12 < 9) goto LAB_106722b00;
    uVar15 = (ulong)*(ushort *)((long)param_1 + lVar13 + 8);
    if (uVar15 == 0) {
      puStack_80 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar15);
      puStack_80 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = -(long)*param_1;
      uVar12 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar12 < 0xb) goto LAB_106722b04;
    uVar15 = (ulong)*(ushort *)((long)param_1 + lVar13 + 10);
    if (uVar15 == 0) {
      puStack_88 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar15);
      puStack_88 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = -(long)*param_1;
      uVar12 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar12 < 0xd) goto LAB_106722b08;
    uVar15 = (ulong)*(ushort *)((long)param_1 + lVar13 + 0xc);
    if (uVar15 == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(char *)((long)param_1 + uVar15) != '\0';
    }
    if (uVar12 < 0xf) goto LAB_106722b0c;
    uVar15 = (ulong)*(ushort *)((long)param_1 + lVar13 + 0xe);
    if (uVar15 == 0) {
      bVar6 = false;
    }
    else {
      bVar6 = *(char *)((long)param_1 + uVar15) != '\0';
    }
    if (uVar12 < 0x11) goto LAB_106722b10;
    uVar15 = (ulong)*(ushort *)((long)param_1 + lVar13 + 0x10);
    if (uVar15 == 0) {
      puVar22 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar15);
      puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = -(long)*param_1;
      uVar12 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar12 < 0x13) goto LAB_106722b14;
    uVar15 = (ulong)*(ushort *)((long)param_1 + lVar13 + 0x12);
    if (uVar15 == 0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar15);
      puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = -(long)*param_1;
      uVar12 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar12 < 0x15) goto LAB_106722b1c;
    uVar15 = (ulong)*(ushort *)((long)param_1 + lVar13 + 0x14);
    if (uVar15 == 0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar15);
      puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = -(long)*param_1;
      uVar12 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar12 < 0x17) goto LAB_106722b20;
    uVar15 = (ulong)*(ushort *)((long)param_1 + lVar13 + 0x16);
    if (uVar15 == 0) {
      puVar26 = (undefined *)0x0;
    }
    else {
      uVar20 = (ulong)*(uint *)((long)param_1 + uVar15);
      puVar1 = (uint *)((long)((long)param_1 + uVar15) + uVar20);
      puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar1);
      _objc_retainAutoreleasedReturnValue();
      if (*puVar1 != 0) {
        puVar21 = (uint *)((long)param_1 + uVar20 + uVar15 + 8);
        do {
          uVar15 = (ulong)puVar21[-1];
          puVar26 = PTR_PTR_1126cccd8;
          _objc_alloc(PTR_PTR_1126cccd8);
          lVar13 = (long)*(int *)((long)puVar21 + (uVar15 - 4));
          uVar12 = *(ushort *)((long)puVar21 + (uVar15 - lVar13) + -4);
          if (uVar12 < 5) {
            puVar9 = (undefined *)0x0;
            puVar29 = (undefined *)0x0;
            puVar27 = (undefined *)0x0;
          }
          else {
            uVar20 = (ulong)*(ushort *)((long)puVar21 + (uVar15 - lVar13));
            if (uVar20 == 0) {
              puVar27 = (undefined *)0x0;
            }
            else {
              lVar13 = uVar15 + uVar20;
              puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  (long)puVar21 +
                                  (ulong)*(uint *)((long)puVar21 + lVar13 + -4) + lVar13);
              _objc_retainAutoreleasedReturnValue();
              lVar13 = (long)*(int *)((long)puVar21 + (uVar15 - 4));
              uVar12 = *(ushort *)((long)puVar21 + (uVar15 - lVar13) + -4);
            }
            lVar13 = -lVar13;
            if (uVar12 < 7) {
              puVar9 = (undefined *)0x0;
              puVar29 = (undefined *)0x0;
            }
            else {
              uVar20 = (ulong)*(ushort *)((long)puVar21 + lVar13 + uVar15 + 2);
              if (uVar20 == 0) {
                puVar29 = (undefined *)0x0;
              }
              else {
                lVar13 = uVar15 + uVar20;
                puVar29 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                    (long)puVar21 +
                                    (ulong)*(uint *)((long)puVar21 + lVar13 + -4) + lVar13);
                _objc_retainAutoreleasedReturnValue();
                lVar14 = (long)*(int *)((long)puVar21 + (uVar15 - 4));
                lVar13 = -lVar14;
                uVar12 = *(ushort *)((long)puVar21 + (uVar15 - lVar14) + -4);
              }
              if ((uVar12 < 9) ||
                 (uVar20 = (ulong)*(ushort *)((long)puVar21 + lVar13 + uVar15 + 4), uVar20 == 0)) {
                puVar9 = (undefined *)0x0;
              }
              else {
                lVar13 = uVar15 + uVar20;
                puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                    (long)puVar21 +
                                    (ulong)*(uint *)((long)puVar21 + lVar13 + -4) + lVar13);
                _objc_retainAutoreleasedReturnValue();
              }
            }
          }
          func_0x00010c01bb00(puVar26,param_2,puVar27,puVar29,puVar9);
          _objc_release(puVar9);
          _objc_release(puVar29);
          _objc_release(puVar27);
          func_0x00010befa120(puVar18,param_2,puVar26);
          _objc_release(puVar26);
          bVar7 = puVar21 != puVar1 + (ulong)*puVar1 + 1;
          puVar21 = puVar21 + 1;
        } while (bVar7);
      }
      puVar26 = puVar18;
      func_0x00010bf51e00();
      _objc_release(puVar18);
      lVar13 = -(long)*param_1;
      uVar12 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar12 < 0x19) || (uVar15 = (ulong)*(ushort *)((long)param_1 + lVar13 + 0x18), uVar15 == 0)
       ) goto LAB_106722b24;
    puVar1 = (uint *)((long)param_1 + uVar15);
    lVar13 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_106724e6c();
  _objc_retainAutoreleasedReturnValue();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x1b) ||
     (uVar15 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xd], uVar15 == 0)) {
    puVar18 = (undefined *)0x0;
    goto LAB_106722f50;
  }
  puVar1 = (uint *)((long)param_1 + uVar15);
  uVar4 = *puVar1;
  puVar18 = PTR_PTR_1126ccce0;
  _objc_alloc();
  piVar2 = (int *)((long)puVar1 + (ulong)uVar4);
  lVar14 = (long)*piVar2;
  uVar12 = *(ushort *)((long)piVar2 - lVar14);
  if (uVar12 < 5) {
    puVar27 = (undefined *)0x0;
LAB_106722f00:
    puVar29 = (undefined *)0x0;
LAB_106722f04:
    lVar14 = 0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar2 - lVar14))[2];
    if (uVar15 == 0) {
      puVar27 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)piVar2 + uVar15);
      uVar4 = *puVar1;
      puVar27 = PTR_PTR_1126ccce8;
      _objc_alloc();
      piVar3 = (int *)((long)puVar1 + (ulong)uVar4);
      lVar14 = (long)*piVar3;
      uVar12 = *(ushort *)((long)piVar3 - lVar14);
      if (uVar12 < 5) {
        puStack_a8 = (undefined *)0x0;
LAB_106722d5c:
        puVar29 = (undefined *)0x0;
        bVar7 = false;
        uVar11 = 0;
      }
      else {
        uVar15 = (ulong)((ushort *)((long)piVar3 - lVar14))[2];
        if (uVar15 == 0) {
          puStack_a8 = (undefined *)0x0;
        }
        else {
          puVar1 = (uint *)((long)piVar3 + uVar15);
          puStack_a8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar1 + (ulong)*puVar1 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = (long)*piVar3;
          uVar12 = *(ushort *)((long)piVar3 - lVar14);
        }
        lVar14 = -lVar14;
        if (uVar12 < 7) goto LAB_106722d5c;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar14 + 6);
        if (uVar15 == 0) {
          puVar29 = (undefined *)0x0;
        }
        else {
          puVar1 = (uint *)((long)piVar3 + uVar15);
          puVar29 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar1 + (ulong)*puVar1 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = -(long)*piVar3;
          uVar12 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar12 < 9) {
          bVar7 = false;
LAB_106722e2c:
          uVar11 = 0;
        }
        else {
          uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar14 + 8);
          if (uVar15 == 0) {
            bVar7 = false;
          }
          else {
            bVar7 = *(char *)((long)piVar3 + uVar15) != '\0';
          }
          if ((uVar12 < 0xb) ||
             (uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar14 + 10), uVar15 == 0))
          goto LAB_106722e2c;
          uVar11 = *(undefined8 *)((long)piVar3 + uVar15);
        }
      }
      func_0x00010c006900(puVar27,param_2,puStack_a8,puVar29,bVar7,uVar11);
      _objc_release(puVar29);
      _objc_release(puStack_a8);
      lVar14 = (long)*piVar2;
      uVar12 = *(ushort *)((long)piVar2 - lVar14);
    }
    lVar14 = -lVar14;
    if (uVar12 < 7) goto LAB_106722f00;
    uVar15 = (ulong)*(ushort *)((long)piVar2 + lVar14 + 6);
    if (uVar15 == 0) {
      puVar29 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)piVar2 + uVar15);
      uVar4 = *puVar1;
      puVar29 = PTR_PTR_1126cccf0;
      _objc_alloc(PTR_PTR_1126cccf0);
      piVar3 = (int *)((long)puVar1 + (ulong)uVar4);
      lVar14 = (long)*piVar3;
      uVar12 = *(ushort *)((long)piVar3 - lVar14);
      if (uVar12 < 5) {
        puStack_b0 = (undefined *)0x0;
LAB_10672306c:
        puVar9 = (undefined *)0x0;
LAB_106723070:
        puVar10 = (undefined *)0x0;
LAB_106723074:
        puStack_b8 = (undefined *)0x0;
LAB_106723078:
        puVar16 = (undefined *)0x0;
LAB_10672307c:
        puVar28 = (undefined *)0x0;
LAB_106723080:
        puVar19 = (undefined *)0x0;
        puStack_110 = (undefined *)0x0;
        puVar17 = (undefined *)0x0;
      }
      else {
        uVar15 = (ulong)((ushort *)((long)piVar3 - lVar14))[2];
        if (uVar15 == 0) {
          puStack_b0 = (undefined *)0x0;
        }
        else {
          puVar1 = (uint *)((long)piVar3 + uVar15);
          puStack_b0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar1 + (ulong)*puVar1 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = (long)*piVar3;
          uVar12 = *(ushort *)((long)piVar3 - lVar14);
        }
        lVar14 = -lVar14;
        if (uVar12 < 7) goto LAB_10672306c;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar14 + 6);
        if (uVar15 == 0) {
          puVar9 = (undefined *)0x0;
        }
        else {
          puVar1 = (uint *)((long)piVar3 + uVar15);
          puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar1 + (ulong)*puVar1 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = -(long)*piVar3;
          uVar12 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar12 < 9) goto LAB_106723070;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar14 + 8);
        if (uVar15 == 0) {
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar1 = (uint *)((long)piVar3 + uVar15);
          puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar1 + (ulong)*puVar1 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = -(long)*piVar3;
          uVar12 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar12 < 0xb) goto LAB_106723074;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar14 + 10);
        if (uVar15 == 0) {
          puStack_b8 = (undefined *)0x0;
        }
        else {
          puVar1 = (uint *)((long)piVar3 + uVar15);
          puStack_b8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar1 + (ulong)*puVar1 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = -(long)*piVar3;
          uVar12 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar12 < 0xd) goto LAB_106723078;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar14 + 0xc);
        if (uVar15 == 0) {
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar1 = (uint *)((long)piVar3 + uVar15);
          puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar1 + (ulong)*puVar1 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = -(long)*piVar3;
          uVar12 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar12 < 0xf) goto LAB_10672307c;
        uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar14 + 0xe);
        if (uVar15 == 0) {
          puVar28 = (undefined *)0x0;
        }
        else {
          puVar1 = (uint *)((long)piVar3 + uVar15);
          puVar28 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar1 + (ulong)*puVar1 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = -(long)*piVar3;
          uVar12 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar12 < 0x11) goto LAB_106723080;
        if (*(short *)((long)piVar3 + lVar14 + 0x10) == 0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = PTR__OBJC_CLASS___NSData_1126ae778;
          _objc_alloc();
          func_0x00010bffa160();
          lVar14 = -(long)*piVar3;
          uVar12 = *(ushort *)((long)piVar3 - (long)*piVar3);
        }
        if (uVar12 < 0x13) {
          puVar19 = (undefined *)0x0;
          puStack_110 = (undefined *)0x0;
        }
        else {
          uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar14 + 0x12);
          if (uVar15 == 0) {
            puStack_110 = (undefined *)0x0;
          }
          else {
            puVar1 = (uint *)((long)piVar3 + uVar15);
            puStack_110 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar1 + (ulong)*puVar1 + 4);
            _objc_retainAutoreleasedReturnValue();
            lVar14 = -(long)*piVar3;
            uVar12 = *(ushort *)((long)piVar3 - (long)*piVar3);
          }
          if ((uVar12 < 0x15) ||
             (uVar15 = (ulong)*(ushort *)((long)piVar3 + lVar14 + 0x14), uVar15 == 0)) {
            puVar19 = (undefined *)0x0;
          }
          else {
            puVar1 = (uint *)((long)piVar3 + uVar15);
            puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar1 + (ulong)*puVar1 + 4);
            _objc_retainAutoreleasedReturnValue();
          }
        }
      }
      func_0x00010c020be0(puVar29);
      _objc_release(puVar19);
      _objc_release(puStack_110);
      _objc_release(puVar17);
      _objc_release(puVar28);
      _objc_release(puVar16);
      _objc_release(puStack_b8);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puStack_b0);
      lVar14 = -(long)*piVar2;
      uVar12 = *(ushort *)((long)piVar2 - (long)*piVar2);
    }
    if ((uVar12 < 9) || (uVar15 = (ulong)*(ushort *)((long)piVar2 + lVar14 + 8), uVar15 == 0))
    goto LAB_106722f04;
    puVar1 = (uint *)((long)piVar2 + uVar15);
    lVar14 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_106725120(lVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006a80(puVar18,param_2,puVar27,puVar29,lVar14);
  _objc_release(lVar14);
  _objc_release(puVar29);
  _objc_release(puVar27);
LAB_106722f50:
  func_0x00010c006940(puVar8,param_2,puVar24,puStack_78,puStack_80,puStack_88,bVar5,bVar6,puVar22,
                      puVar23,puVar25,puVar26,lVar13,puVar18);
  _objc_release(puVar18);
  _objc_release(lVar13);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puStack_88);
  _objc_release(puStack_80);
  _objc_release(puStack_78);
  _objc_release(puVar24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1067239e0; end: 106724087;  */

void FUN_1067239e0(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  char cVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  puVar3 = PTR_PTR_1126cccf8;
  _objc_alloc();
  lVar6 = (long)*param_1;
  uVar4 = *(ushort *)((long)param_1 - lVar6);
  if (uVar4 < 5) {
    puVar9 = (undefined *)0x0;
LAB_106723acc:
    puVar10 = (undefined *)0x0;
LAB_106723ad0:
    puVar14 = (undefined *)0x0;
LAB_106723ad4:
    lVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_1 - lVar6))[2];
    if (uVar8 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar8);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - lVar6);
    }
    lVar6 = -lVar6;
    if (uVar4 < 7) goto LAB_106723acc;
    uVar8 = (ulong)*(ushort *)((long)param_1 + lVar6 + 6);
    if (uVar8 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar8);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 9) goto LAB_106723ad0;
    uVar8 = (ulong)*(ushort *)((long)param_1 + lVar6 + 8);
    if (uVar8 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar12 = (ulong)*(uint *)((long)param_1 + uVar8);
      puVar1 = (uint *)((long)((long)param_1 + uVar8) + uVar12);
      puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar1);
      _objc_retainAutoreleasedReturnValue();
      if (*puVar1 != 0) {
        lVar6 = (long)param_1 + uVar12 + uVar8 + 10;
        do {
          uVar8 = (ulong)*(uint *)(lVar6 + -6);
          puVar15 = PTR_PTR_1126ccd08;
          _objc_alloc(PTR_PTR_1126ccd08);
          puVar14 = PTR_PTR_1126ccd00;
          lVar5 = uVar8 - (long)*(int *)(lVar6 + uVar8 + -6);
          uVar4 = *(ushort *)(lVar6 + lVar5 + -6);
          if ((uVar4 < 5) || (uVar12 = (ulong)*(ushort *)(lVar6 + lVar5 + -2), uVar12 == 0)) {
LAB_106723ee8:
            puVar14 = (undefined *)0x0;
          }
          else {
            cVar2 = *(char *)(lVar6 + uVar8 + uVar12 + -6);
            if (uVar4 < 7 || cVar2 != '\x01') {
              if (uVar4 < 7 || cVar2 != '\x02') {
                if (uVar4 < 7 || cVar2 != '\x03') {
                  if (uVar4 < 7 || cVar2 != '\x04') {
                    if (uVar4 < 7 || cVar2 != '\x05') {
                      if ((uVar4 < 7 || cVar2 != '\x06') || ((ulong)*(ushort *)(lVar6 + lVar5) == 0)
                         ) goto LAB_106723ee8;
                      lVar5 = lVar6 + uVar8 + *(ushort *)(lVar6 + lVar5);
                      lVar5 = lVar5 + (ulong)*(uint *)(lVar5 + -6) + -6;
                      FUN_106724870(lVar5);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c25a040(puVar14,param_2,lVar5);
                      _objc_retainAutoreleasedReturnValue();
                    }
                    else {
                      if ((ulong)*(ushort *)(lVar6 + lVar5) == 0) goto LAB_106723ee8;
                      lVar5 = lVar6 + uVar8 + *(ushort *)(lVar6 + lVar5);
                      lVar5 = lVar5 + (ulong)*(uint *)(lVar5 + -6) + -6;
                      FUN_106724088(lVar5);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bfe1000(puVar14,param_2,lVar5);
                      _objc_retainAutoreleasedReturnValue();
                    }
                  }
                  else {
                    if ((ulong)*(ushort *)(lVar6 + lVar5) == 0) goto LAB_106723ee8;
                    lVar5 = lVar6 + uVar8 + *(ushort *)(lVar6 + lVar5);
                    lVar5 = lVar5 + (ulong)*(uint *)(lVar5 + -6) + -6;
                    FUN_106722a14(lVar5);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c092160(puVar14,param_2,lVar5);
                    _objc_retainAutoreleasedReturnValue();
                  }
                }
                else {
                  if ((ulong)*(ushort *)(lVar6 + lVar5) == 0) goto LAB_106723ee8;
                  lVar5 = lVar6 + uVar8 + *(ushort *)(lVar6 + lVar5);
                  lVar5 = lVar5 + (ulong)*(uint *)(lVar5 + -6) + -6;
                  FUN_106722618(lVar5);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0976e0(puVar14,param_2,lVar5);
                  _objc_retainAutoreleasedReturnValue();
                }
              }
              else {
                if ((ulong)*(ushort *)(lVar6 + lVar5) == 0) goto LAB_106723ee8;
                lVar5 = lVar6 + uVar8 + *(ushort *)(lVar6 + lVar5);
                lVar5 = lVar5 + (ulong)*(uint *)(lVar5 + -6) + -6;
                FUN_106722248(lVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0915e0(puVar14,param_2,lVar5);
                _objc_retainAutoreleasedReturnValue();
              }
            }
            else {
              if ((ulong)*(ushort *)(lVar6 + lVar5) == 0) goto LAB_106723ee8;
              lVar5 = lVar6 + uVar8 + *(ushort *)(lVar6 + lVar5);
              lVar5 = lVar5 + (ulong)*(uint *)(lVar5 + -6) + -6;
              FUN_106721c38(lVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c094c60(puVar14,param_2,lVar5);
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(lVar5);
          }
          func_0x00010c02c5c0(puVar15,param_2,puVar14);
          _objc_release(puVar14);
          func_0x00010befa120(puVar13,param_2,puVar15);
          _objc_release(puVar15);
          puVar7 = (uint *)(lVar6 + -2);
          lVar6 = lVar6 + 4;
        } while (puVar7 != puVar1 + (ulong)*puVar1 + 1);
      }
      puVar14 = puVar13;
      func_0x00010bf51e00(puVar13);
      _objc_release(puVar13);
      lVar6 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar4 < 0xb) || (uVar8 = (ulong)*(ushort *)((long)param_1 + lVar6 + 10), uVar8 == 0))
    goto LAB_106723ad4;
    puVar1 = (uint *)((long)param_1 + uVar8);
    lVar6 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_10672520c(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)*param_1;
  uVar4 = *(ushort *)((long)param_1 - lVar5);
  if (uVar4 < 0xd) {
    puVar13 = (undefined *)0x0;
LAB_106723ba0:
    puVar15 = (undefined *)0x0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_1 - lVar5))[6];
    if (uVar8 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar8);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar4 < 0xf) goto LAB_106723ba0;
    uVar8 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0xe);
    if (uVar8 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar8);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((0x10 < uVar4) && (uVar8 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0x10), uVar8 != 0)) {
      puVar1 = (uint *)((long)param_1 + uVar8);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106723ba8;
    }
  }
  puVar11 = (undefined *)0x0;
LAB_106723ba8:
  func_0x00010c0027a0(puVar3,param_2,puVar9,puVar10,puVar14,lVar6,puVar13,puVar15,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(lVar6);
  _objc_release(puVar14);
  _objc_release(puVar10);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106724088; end: 10672486f;  */

void FUN_106724088(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ushort uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  
  puVar4 = PTR_PTR_1126ccdb0;
  _objc_alloc();
  lVar9 = (long)*param_1;
  uVar11 = *(ushort *)((long)param_1 - lVar9);
  if (uVar11 < 5) {
    puVar15 = (undefined *)0x0;
LAB_106724174:
    puVar16 = (undefined *)0x0;
LAB_106724178:
    puVar17 = (undefined *)0x0;
LAB_10672417c:
    puVar22 = (undefined *)0x0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_1 - lVar9))[2];
    if (uVar13 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar13);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)*param_1;
      uVar11 = *(ushort *)((long)param_1 - lVar9);
    }
    lVar9 = -lVar9;
    if (uVar11 < 7) goto LAB_106724174;
    uVar13 = (ulong)*(ushort *)((long)param_1 + lVar9 + 6);
    if (uVar13 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar13);
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*param_1;
      uVar11 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar11 < 9) goto LAB_106724178;
    uVar13 = (ulong)*(ushort *)((long)param_1 + lVar9 + 8);
    if (uVar13 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar13);
      puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = -(long)*param_1;
      uVar11 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar11 < 0xb) goto LAB_10672417c;
    uVar13 = (ulong)*(ushort *)((long)param_1 + lVar9 + 10);
    if (uVar13 == 0) {
      puVar22 = (undefined *)0x0;
    }
    else {
      uVar19 = (ulong)*(uint *)((long)param_1 + uVar13);
      puVar1 = (uint *)((long)((long)param_1 + uVar13) + uVar19);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar1);
      _objc_retainAutoreleasedReturnValue();
      if (*puVar1 != 0) {
        puVar18 = (uint *)((long)param_1 + uVar19 + uVar13 + 8);
        do {
          uVar13 = (ulong)puVar18[-1];
          puVar6 = PTR_PTR_1126ccdb8;
          _objc_alloc(PTR_PTR_1126ccdb8);
          puVar22 = PTR_PTR_1126ccdd8;
          lVar9 = uVar13 - (long)*(int *)((long)puVar18 + (uVar13 - 4));
          uVar11 = *(ushort *)((long)puVar18 + lVar9 + -4);
          if (uVar11 < 5) {
            uVar8 = 0;
LAB_106724560:
            puVar22 = (undefined *)0x0;
          }
          else {
            if ((ulong)*(ushort *)((long)puVar18 + lVar9) == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined8 *)
                       ((long)puVar18 + uVar13 + *(ushort *)((long)puVar18 + lVar9) + -4);
            }
            if ((uVar11 < 7) ||
               (uVar19 = (ulong)*(ushort *)((long)puVar18 + lVar9 + 2), uVar19 == 0))
            goto LAB_106724560;
            cVar2 = *(char *)((long)puVar18 + uVar13 + uVar19 + -4);
            if (uVar11 < 9 || cVar2 != '\x01') {
              if ((uVar11 < 9 || cVar2 != '\x02') ||
                 (uVar19 = (ulong)*(ushort *)((long)puVar18 + lVar9 + 4), uVar19 == 0))
              goto LAB_106724560;
              lVar9 = uVar13 + uVar19;
              uVar20 = (ulong)*(uint *)((long)puVar18 + lVar9 + -4);
              puVar7 = PTR_PTR_1126ccde0;
              _objc_alloc();
              lVar12 = (long)*(int *)((long)puVar18 + uVar20 + lVar9 + -4);
              if (*(ushort *)((long)puVar18 + ((lVar9 + uVar20) - lVar12) + -4) < 5) {
                puVar24 = (undefined *)0x0;
              }
              else {
                lVar9 = uVar13 + uVar19 + uVar20;
                uVar13 = (ulong)*(ushort *)((long)puVar18 + (lVar9 - lVar12));
                if (uVar13 == 0) {
                  puVar24 = (undefined *)0x0;
                }
                else {
                  lVar9 = lVar9 + uVar13;
                  puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                      (long)puVar18 +
                                      (ulong)*(uint *)((long)puVar18 + lVar9 + -4) + lVar9);
                  _objc_retainAutoreleasedReturnValue();
                }
              }
              func_0x00010c0513a0();
              _objc_release(puVar24);
              func_0x00010bfe0fc0(puVar22,param_2,puVar7);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              uVar19 = (ulong)*(ushort *)((long)puVar18 + lVar9 + 4);
              if (uVar19 == 0) goto LAB_106724560;
              lVar9 = uVar13 + uVar19;
              uVar20 = (ulong)*(uint *)((long)puVar18 + lVar9 + -4);
              puVar7 = PTR_PTR_1126ccdd0;
              _objc_alloc();
              puVar24 = PTR_PTR_1126ccdc8;
              lVar12 = (long)*(int *)((long)puVar18 + uVar20 + lVar9 + -4);
              uVar11 = *(ushort *)((long)puVar18 + ((lVar9 + uVar20) - lVar12) + -4);
              if (uVar11 < 5) {
LAB_1067245ac:
                puVar23 = (undefined *)0x0;
              }
              else {
                lVar9 = uVar13 + uVar19 + uVar20;
                uVar14 = (ulong)*(ushort *)((long)puVar18 + (lVar9 - lVar12));
                if (uVar14 == 0) goto LAB_1067245ac;
                cVar2 = *(char *)((long)puVar18 + uVar14 + lVar9 + -4);
                if (uVar11 < 7 || cVar2 != '\x01') {
                  if (6 < uVar11 && cVar2 == '\x02') {
                    lVar9 = uVar13 + uVar19 + uVar20;
                    uVar14 = (ulong)*(ushort *)((long)puVar18 + (lVar9 - lVar12) + 2);
                    if (uVar14 != 0) {
                      lVar9 = lVar9 + uVar14;
                      uVar21 = (ulong)*(uint *)((long)puVar18 + lVar9 + -4);
                      puVar23 = PTR_PTR_1126ccdc0;
                      _objc_alloc(PTR_PTR_1126ccdc0);
                      lVar9 = (uVar13 + uVar19 + uVar20 + uVar14 + uVar21) -
                              (long)*(int *)((long)puVar18 + uVar21 + lVar9 + -4);
                      if ((*(ushort *)((long)puVar18 + lVar9 + -4) < 5) ||
                         (uVar10 = (ulong)*(ushort *)((long)puVar18 + lVar9), uVar10 == 0)) {
                        puVar25 = (undefined *)0x0;
                      }
                      else {
                        lVar9 = uVar13 + uVar19 + uVar20 + uVar14 + uVar21 + uVar10;
                        puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                            (long)puVar18 +
                                            (ulong)*(uint *)((long)puVar18 + lVar9 + -4) + lVar9);
                        _objc_retainAutoreleasedReturnValue();
                      }
                      func_0x00010c01cf80();
                      _objc_release(puVar25);
                      func_0x00010bfe0fa0(puVar24,param_2,puVar23);
                      _objc_retainAutoreleasedReturnValue();
                      goto LAB_10672474c;
                    }
                  }
                  goto LAB_1067245ac;
                }
                puVar23 = (undefined *)0x0;
                if (*(short *)((long)puVar18 + ((uVar13 + uVar19 + uVar20) - lVar12) + 2) != 0) {
                  puVar23 = PTR_PTR_1126ccde8;
                  _objc_alloc(PTR_PTR_1126ccde8);
                  func_0x00010c037fc0();
                  func_0x00010bfe0f80(puVar24,param_2,puVar23);
                  _objc_retainAutoreleasedReturnValue();
LAB_10672474c:
                  _objc_release(puVar23);
                  puVar23 = puVar24;
                }
              }
              func_0x00010c01bf60(puVar7,param_2,puVar23);
              _objc_release(puVar23);
              func_0x00010bfe0f20(puVar22,param_2,puVar7);
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(puVar7);
          }
          func_0x00010c00f160(puVar6,param_2,uVar8,puVar22);
          _objc_release(puVar22);
          func_0x00010befa120(puVar5,param_2,puVar6);
          _objc_release(puVar6);
          bVar3 = puVar18 != puVar1 + (ulong)*puVar1 + 1;
          puVar18 = puVar18 + 1;
        } while (bVar3);
      }
      puVar22 = puVar5;
      func_0x00010bf51e00(puVar5);
      _objc_release(puVar5);
      lVar9 = -(long)*param_1;
      uVar11 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((0xc < uVar11) && (uVar13 = (ulong)*(ushort *)((long)param_1 + lVar9 + 0xc), uVar13 != 0)) {
      puVar1 = (uint *)((long)param_1 + uVar13);
      lVar9 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_106724184;
    }
  }
  lVar9 = 0;
LAB_106724184:
  FUN_106724e6c(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a580(puVar4,param_2,puVar15,puVar16,puVar17,puVar22,lVar9);
  _objc_release(lVar9);
  _objc_release(puVar22);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106724870; end: 106724b1f;  */

void FUN_106724870(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_PTR_1126cccc8;
  _objc_alloc(PTR_PTR_1126cccc8);
  lVar4 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar4);
  if (uVar3 < 5) {
    puVar6 = (undefined *)0x0;
LAB_106724954:
    puVar7 = (undefined *)0x0;
LAB_106724958:
    puVar8 = (undefined *)0x0;
LAB_10672495c:
    puVar9 = (undefined *)0x0;
LAB_106724960:
    uVar10 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_1 - lVar4))[2];
    if (uVar5 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar4);
    }
    lVar4 = -lVar4;
    if (uVar3 < 7) goto LAB_106724954;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 6);
    if (uVar5 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 9) goto LAB_106724958;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 8);
    if (uVar5 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xb) goto LAB_10672495c;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 10);
    if (uVar5 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar5);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xd) goto LAB_106724960;
    uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xc);
    if (uVar5 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)((long)param_1 + uVar5);
    }
    if ((0xe < uVar3) && (uVar5 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xe), uVar5 != 0)) {
      puVar1 = (uint *)((long)param_1 + uVar5);
      lVar4 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_106724968;
    }
  }
  lVar4 = 0;
LAB_106724968:
  FUN_106724e6c(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d9e0(puVar2,param_2,puVar6,puVar7,puVar8,puVar9,uVar10,lVar4);
  _objc_release(lVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106724b20; end: 106724e6b;  */

void FUN_106724b20(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ushort uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  if (param_1 == (int *)0x0) {
    puVar10 = (undefined *)0x0;
    goto LAB_106724c88;
  }
  puVar10 = PTR_PTR_1126ccca0;
  _objc_alloc(PTR_PTR_1126ccca0);
  lVar5 = (long)*param_1;
  uVar6 = *(ushort *)((long)param_1 - lVar5);
  if (uVar6 < 5) {
    puVar8 = (undefined *)0x0;
LAB_106724c18:
    puVar9 = (undefined *)0x0;
LAB_106724c1c:
    puVar11 = (undefined *)0x0;
LAB_106724c20:
    puVar12 = (undefined *)0x0;
LAB_106724c24:
    bVar2 = false;
LAB_106724c28:
    bVar3 = false;
LAB_106724c2c:
    puVar13 = (undefined *)0x0;
LAB_106724c30:
    bVar4 = false;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_1 - lVar5))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*param_1;
      uVar6 = *(ushort *)((long)param_1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar6 < 7) goto LAB_106724c18;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 6);
    if (uVar7 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = -(long)*param_1;
      uVar6 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar6 < 9) goto LAB_106724c1c;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 8);
    if (uVar7 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = -(long)*param_1;
      uVar6 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar6 < 0xb) goto LAB_106724c20;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 10);
    if (uVar7 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = -(long)*param_1;
      uVar6 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar6 < 0xd) goto LAB_106724c24;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0xc);
    if (uVar7 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)((long)param_1 + uVar7) != '\0';
    }
    if (uVar6 < 0xf) goto LAB_106724c28;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0xe);
    if (uVar7 == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)param_1 + uVar7) != '\0';
    }
    if (uVar6 < 0x11) goto LAB_106724c2c;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0x10);
    if (uVar7 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = -(long)*param_1;
      uVar6 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar6 < 0x13) goto LAB_106724c30;
    uVar7 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0x12);
    bVar4 = false;
    if (uVar7 != 0) {
      bVar4 = *(char *)((long)param_1 + uVar7) != '\0';
    }
  }
  func_0x00010c05c6e0(puVar10,param_2,puVar8,puVar9,puVar11,puVar12,bVar2,bVar3,puVar13,bVar4);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
LAB_106724c88:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106724e6c; end: 10672511f;  */

void FUN_106724e6c(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  ushort *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  if (param_1 == (int *)0x0) {
    puVar8 = (undefined *)0x0;
    goto LAB_106724f80;
  }
  puVar8 = PTR_PTR_1126cccb0;
  _objc_alloc(PTR_PTR_1126cccb0);
  uVar9 = 0;
  lVar4 = (long)*param_1;
  puVar5 = (ushort *)((long)param_1 - lVar4);
  uVar2 = *puVar5;
  if (uVar2 < 5) {
LAB_106724f20:
    puVar7 = (undefined *)0x0;
LAB_106724f24:
    puVar10 = (undefined *)0x0;
LAB_106724f28:
    puVar11 = (undefined *)0x0;
LAB_106724f2c:
    uVar12 = 0;
LAB_106724f30:
    puVar13 = (undefined *)0x0;
LAB_106724f34:
    uVar3 = 0;
  }
  else {
    if ((ulong)puVar5[2] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)((long)param_1 + (ulong)puVar5[2]);
    }
    if (uVar2 < 7) goto LAB_106724f20;
    if ((ulong)puVar5[3] == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + (ulong)puVar5[3]);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar4);
    }
    lVar4 = -lVar4;
    if (uVar2 < 9) goto LAB_106724f24;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 8);
    if (uVar6 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar2 < 0xb) goto LAB_106724f28;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 10);
    if (uVar6 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar2 < 0xd) goto LAB_106724f2c;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xc);
    if (uVar6 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)((long)param_1 + uVar6);
    }
    if (uVar2 < 0xf) goto LAB_106724f30;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xe);
    if (uVar6 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar2 < 0x11) goto LAB_106724f34;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0x10);
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = *(undefined8 *)((long)param_1 + uVar6);
    }
  }
  func_0x00010c01d7a0(puVar8,param_2,uVar9,puVar7,puVar10,puVar11,uVar12,puVar13,uVar3);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
LAB_106724f80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}


