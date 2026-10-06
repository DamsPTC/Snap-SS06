/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afdc24c; end: 10afdc2d3; -[SCLensExplorerCategoriesProviderConfiguration initWithFeedId:performBatchRequest:] */

undefined1 *
FUN_10afdc24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112703ca8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdc2d4; end: 10afdc2f7; -[SCLensExplorerCategoriesProviderConfiguration copyWithZone:] */

undefined8 FUN_10afdc2d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdc2f8; end: 10afdc363; -[SCLensExplorerCategoriesProviderConfiguration hash] */

undefined8 * FUN_10afdc2f8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afdc3e8;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10afdc3e8;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10afdc3e8;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10afdc3e8:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10afdc364; end: 10afdc403; -[SCLensExplorerCategoriesProviderConfiguration isEqual:] */

long FUN_10afdc364(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdc3e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10afdc3e8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afdc3e8;
    }
  }
  lVar3 = 1;
LAB_10afdc3e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdc404; end: 10afdc40b; -[SCLensExplorerCategoriesProviderConfiguration feedId] */

undefined8 FUN_10afdc404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdc40c; end: 10afdc413; -[SCLensExplorerCategoriesProviderConfiguration performBatchRequest] */

undefined1 FUN_10afdc40c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afdc414; end: 10afdc41f; -[SCLensExplorerCategoriesProviderConfiguration .cxx_destruct] */

void FUN_10afdc414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afdc420; end: 10afdc557; -[SCLensExplorerHeroItem initWithHeroId:deeplinkUrl:layoutId:elements:loggingInfo:] */

undefined1 *
FUN_10afdc420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112703cb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdc558; end: 10afdc57b; -[SCLensExplorerHeroItem copyWithZone:] */

undefined8 FUN_10afdc558(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdc57c; end: 10afdc613; -[SCLensExplorerHeroItem hash] */

undefined8 * FUN_10afdc57c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afdc6dc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afdc6e8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10afdc6e8;
              }
              goto LAB_10afdc6dc;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afdc6e8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afdc614; end: 10afdc703; -[SCLensExplorerHeroItem isEqual:] */

long FUN_10afdc614(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afdc6dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdc6e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10afdc6e8;
              }
              goto LAB_10afdc6dc;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afdc6e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdc704; end: 10afdc70b; -[SCLensExplorerHeroItem heroId] */

undefined8 FUN_10afdc704(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdc70c; end: 10afdc713; -[SCLensExplorerHeroItem deeplinkUrl] */

undefined8 FUN_10afdc70c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdc714; end: 10afdc71b; -[SCLensExplorerHeroItem layoutId] */

undefined8 FUN_10afdc714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afdc71c; end: 10afdc723; -[SCLensExplorerHeroItem elements] */

undefined8 FUN_10afdc71c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afdc724; end: 10afdc72b; -[SCLensExplorerHeroItem loggingInfo] */

undefined8 FUN_10afdc724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afdc72c; end: 10afdc77f; -[SCLensExplorerHeroItem .cxx_destruct] */

void FUN_10afdc72c(long param_1)

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



/* Entry: 10afdc780; end: 10afdc79b; +[SCLensExplorerHeroItemBuilder lensExplorerHeroItem] */

void FUN_10afdc780(void)

{
  _objc_alloc_init(PTR_PTR_1126cd030);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdc79c; end: 10afdc93f; +[SCLensExplorerHeroItemBuilder lensExplorerHeroItemFromExistingLensExplorerHeroItem:] */

void FUN_10afdc79c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126cd030;
  _objc_retain(param_3);
  func_0x00010c092f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe0e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2af700(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf68980(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac120(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c08cda0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b25a0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf8d2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2acca0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar11 = puVar9;
  func_0x00010c2b3180(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10afdc940; end: 10afdc977; -[SCLensExplorerHeroItemBuilder build] */

void FUN_10afdc940(void)

{
  _objc_alloc(PTR_PTR_1126ccd90);
  func_0x00010c01a5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdc978; end: 10afdc9af; -[SCLensExplorerHeroItemBuilder withHeroId:] */

long FUN_10afdc978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afdc9b0; end: 10afdc9e7; -[SCLensExplorerHeroItemBuilder withDeeplinkUrl:] */

long FUN_10afdc9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afdc9e8; end: 10afdca1f; -[SCLensExplorerHeroItemBuilder withLayoutId:] */

long FUN_10afdc9e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afdca20; end: 10afdca57; -[SCLensExplorerHeroItemBuilder withElements:] */

long FUN_10afdca20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afdca58; end: 10afdca8f; -[SCLensExplorerHeroItemBuilder withLoggingInfo:] */

long FUN_10afdca58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afdca90; end: 10afdcae3; -[SCLensExplorerHeroItemBuilder .cxx_destruct] */

void FUN_10afdca90(long param_1)

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



/* Entry: 10afdcae4; end: 10afdcb37; +[SCLensExplorerHeroItemImageElement predefinedIconWithIcon:] */

void FUN_10afdcae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ccda0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afdcb38; end: 10afdcba3; +[SCLensExplorerHeroItemImageElement remoteImageWithImageUrl:] */

void FUN_10afdcb38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccda0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afdcba4; end: 10afdcbc7; -[SCLensExplorerHeroItemImageElement copyWithZone:] */

undefined8 FUN_10afdcba4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdcbc8; end: 10afdcc2b; -[SCLensExplorerHeroItemImageElement hash] */

void FUN_10afdcbc8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_112703cb8;
  puStack_60 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdcc2c; end: 10afdcc6f; -[SCLensExplorerHeroItemImageElement internalInit] */

void FUN_10afdcc2c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703cb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdcc70; end: 10afdcd1f; -[SCLensExplorerHeroItemImageElement isEqual:] */

long FUN_10afdcc70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdcd04;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_10afdcd04;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10afdcd04;
    }
  }
  lVar3 = 1;
LAB_10afdcd04:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdcd20; end: 10afdcda3; -[SCLensExplorerHeroItemImageElement matchPredefinedIcon:remoteImage:] */

void FUN_10afdcd20(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10afdcd88;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10afdcd88;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  (*pcVar3)(lVar1,uVar2);
LAB_10afdcd88:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afdcda4; end: 10afdcdaf; -[SCLensExplorerHeroItemImageElement .cxx_destruct] */

void FUN_10afdcda4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10afdcdb0; end: 10afdce37; -[SCLensExplorerHeroItemLayoutElement initWithElementId:elementType:] */

undefined1 *
FUN_10afdcdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703cc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdce38; end: 10afdce5b; -[SCLensExplorerHeroItemLayoutElement copyWithZone:] */

undefined8 FUN_10afdce38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdce5c; end: 10afdcec3; -[SCLensExplorerHeroItemLayoutElement hash] */

long * FUN_10afdce5c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10afdcf48;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10afdcf48;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10afdcf48;
    }
  }
  plVar5 = (long *)0x1;
LAB_10afdcf48:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10afdcec4; end: 10afdcf63; -[SCLensExplorerHeroItemLayoutElement isEqual:] */

long FUN_10afdcec4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdcf48;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10afdcf48;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afdcf48;
    }
  }
  lVar3 = 1;
LAB_10afdcf48:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdcf64; end: 10afdcf6b; -[SCLensExplorerHeroItemLayoutElement elementId] */

undefined8 FUN_10afdcf64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdcf6c; end: 10afdcf73; -[SCLensExplorerHeroItemLayoutElement elementType] */

undefined8 FUN_10afdcf6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdcf74; end: 10afdcf7f; -[SCLensExplorerHeroItemLayoutElement .cxx_destruct] */

void FUN_10afdcf74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afdcf80; end: 10afdcfe3; +[SCLensExplorerHeroItemLayoutElementType imageWithImageElement:] */

void FUN_10afdcf80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccda8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afdcfe4; end: 10afdd057; +[SCLensExplorerHeroItemLayoutElementType textWithText:icon:] */

void FUN_10afdcfe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccda8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afdd058; end: 10afdd07b; -[SCLensExplorerHeroItemLayoutElementType copyWithZone:] */

undefined8 FUN_10afdd058(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdd07c; end: 10afdd0f7; -[SCLensExplorerHeroItemLayoutElementType hash] */

void FUN_10afdd07c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = &uStack_48;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112703cc8;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdd0f8; end: 10afdd13b; -[SCLensExplorerHeroItemLayoutElementType internalInit] */

void FUN_10afdd0f8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703cc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdd13c; end: 10afdd203; -[SCLensExplorerHeroItemLayoutElementType isEqual:] */

long FUN_10afdd13c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afdd1dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdd1e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10afdd1e8;
        }
        goto LAB_10afdd1dc;
      }
    }
    lVar3 = 0;
  }
LAB_10afdd1e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdd204; end: 10afdd28b; -[SCLensExplorerHeroItemLayoutElementType matchImage:text:] */

void FUN_10afdd204(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afdd28c; end: 10afdd2bb; -[SCLensExplorerHeroItemLayoutElementType .cxx_destruct] */

void FUN_10afdd28c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afdd2bc; end: 10afdd32f; -[SCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServices initWithSessionLoggingServices:] */

undefined1 * FUN_10afdd2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703cd0;
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



/* Entry: 10afdd330; end: 10afdd337; -[SCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServices sessionLoggingServices] */

undefined8 FUN_10afdd330(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdd338; end: 10afdd343; -[SCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServices .cxx_destruct] */

void FUN_10afdd338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdd344; end: 10afdd3b7; -[SCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServices initWithSessionLoggingServices:] */

undefined1 * FUN_10afdd344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703cd8;
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



/* Entry: 10afdd3b8; end: 10afdd3bf; -[SCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServices sessionLoggingServices] */

undefined8 FUN_10afdd3b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdd3c0; end: 10afdd3cb; -[SCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServices .cxx_destruct] */

void FUN_10afdd3c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdd3cc; end: 10afdd43f; -[SCGamesExplorerScopedLensExplorerSessionLoggingServices initWithSessionLoggingServices:] */

undefined1 * FUN_10afdd3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703ce0;
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



/* Entry: 10afdd440; end: 10afdd447; -[SCGamesExplorerScopedLensExplorerSessionLoggingServices sessionLoggingServices] */

undefined8 FUN_10afdd440(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdd448; end: 10afdd453; -[SCGamesExplorerScopedLensExplorerSessionLoggingServices .cxx_destruct] */

void FUN_10afdd448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdd454; end: 10afdd4c7; -[SCLensExplorerInfoCardScopedLensExplorerSessionLoggingServices initWithSessionLoggingServices:] */

undefined1 * FUN_10afdd454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703ce8;
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



/* Entry: 10afdd4c8; end: 10afdd4cf; -[SCLensExplorerInfoCardScopedLensExplorerSessionLoggingServices sessionLoggingServices] */

undefined8 FUN_10afdd4c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdd4d0; end: 10afdd4db; -[SCLensExplorerInfoCardScopedLensExplorerSessionLoggingServices .cxx_destruct] */

void FUN_10afdd4d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdd4dc; end: 10afdd54f; -[SCLensExplorerSessionLoggingServices initWithLoggerFactory:] */

undefined1 * FUN_10afdd4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703cf0;
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



/* Entry: 10afdd550; end: 10afdd557; -[SCLensExplorerSessionLoggingServices loggerFactory] */

undefined8 FUN_10afdd550(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdd558; end: 10afdd563; -[SCLensExplorerSessionLoggingServices .cxx_destruct] */

void FUN_10afdd558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdd564; end: 10afdd637; -[SCLensExplorerImpressionInfo initWithNumberOfTaps:totalImpressionTime:lastImpressionTime:itemPosition:lastUpdateDate:lastWatchDate:] */

undefined1 *
FUN_10afdd564(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112703cf8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined4 *)((long)puVar1 + 0x10) = param_5;
    *(undefined4 *)((long)puVar1 + 0x14) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdd638; end: 10afdd65b; -[SCLensExplorerImpressionInfo copyWithZone:] */

undefined8 FUN_10afdd638(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdd65c; end: 10afdd6df; -[SCLensExplorerImpressionInfo hash] */

ulong * FUN_10afdd65c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(ulong *)(param_1 + 8) & 0xffffffff;
  uStack_58 = *(ulong *)(param_1 + 8) >> 0x20;
  uStack_50 = *(ulong *)(param_1 + 0x10) & 0xffffffff;
  uStack_48 = *(ulong *)(param_1 + 0x10) >> 0x20;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_60,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_10afdd7a0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afdd7ac;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(int *)((long)puVar3 + 8) == *(int *)(param_3 + 8) &&
          (*(int *)((long)puVar3 + 0xc) == *(int *)(param_3 + 0xc))) &&
         (*(int *)((long)puVar3 + 0x10) == *(int *)(param_3 + 0x10))))) &&
       (*(int *)((long)puVar3 + 0x14) == *(int *)(param_3 + 0x14))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
        if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10afdd7ac;
        }
        goto LAB_10afdd7a0;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afdd7ac:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 10afdd6e0; end: 10afdd7c7; -[SCLensExplorerImpressionInfo isEqual:] */

long FUN_10afdd6e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afdd7a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdd7ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(int *)(param_1 + 8) == *(int *)(param_3 + 8) &&
          (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))) &&
         (*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10))))) &&
       (*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10afdd7ac;
        }
        goto LAB_10afdd7a0;
      }
    }
    lVar3 = 0;
  }
LAB_10afdd7ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdd7c8; end: 10afdd7cf; -[SCLensExplorerImpressionInfo numberOfTaps] */

undefined4 FUN_10afdd7c8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10afdd7d0; end: 10afdd7d7; -[SCLensExplorerImpressionInfo totalImpressionTime] */

undefined4 FUN_10afdd7d0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10afdd7d8; end: 10afdd7df; -[SCLensExplorerImpressionInfo lastImpressionTime] */

undefined4 FUN_10afdd7d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10afdd7e0; end: 10afdd7e7; -[SCLensExplorerImpressionInfo itemPosition] */

undefined4 FUN_10afdd7e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10afdd7e8; end: 10afdd7ef; -[SCLensExplorerImpressionInfo lastUpdateDate] */

undefined8 FUN_10afdd7e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afdd7f0; end: 10afdd7f7; -[SCLensExplorerImpressionInfo lastWatchDate] */

undefined8 FUN_10afdd7f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afdd7f8; end: 10afdd827; -[SCLensExplorerImpressionInfo .cxx_destruct] */

void FUN_10afdd7f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10afdd828; end: 10afdd843; +[SCLensExplorerImpressionInfoBuilder lensExplorerImpressionInfo] */

void FUN_10afdd828(void)

{
  _objc_alloc_init(PTR_PTR_1126d0720);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdd844; end: 10afdd9c7; +[SCLensExplorerImpressionInfoBuilder lensExplorerImpressionInfoFromExistingLensExplorerImpressionInfo:] */

void FUN_10afdd844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126d0720;
  _objc_retain(param_3);
  func_0x00010c093020(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0df4c0(param_3);
  puVar3 = puVar1;
  func_0x00010c2b4ae0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c276700(param_3);
  puVar4 = puVar3;
  func_0x00010c2bb880(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c088f20(param_3);
  puVar5 = puVar4;
  func_0x00010c2b2160(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c084960(param_3);
  puVar6 = puVar5;
  func_0x00010c2b1b60(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c08a660(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2b2380(puVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c08ab80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = puVar7;
  func_0x00010c2b2420(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10afdd9c8; end: 10afdd9ff; -[SCLensExplorerImpressionInfoBuilder build] */

void FUN_10afdd9c8(void)

{
  _objc_alloc(PTR_PTR_1126d0708);
  func_0x00010c030600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdda00; end: 10afdda07; -[SCLensExplorerImpressionInfoBuilder withNumberOfTaps:] */

void FUN_10afdda00(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10afdda08; end: 10afdda0f; -[SCLensExplorerImpressionInfoBuilder withTotalImpressionTime:] */

void FUN_10afdda08(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10afdda10; end: 10afdda17; -[SCLensExplorerImpressionInfoBuilder withLastImpressionTime:] */

void FUN_10afdda10(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10afdda18; end: 10afdda1f; -[SCLensExplorerImpressionInfoBuilder withItemPosition:] */

void FUN_10afdda18(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 10afdda20; end: 10afdda57; -[SCLensExplorerImpressionInfoBuilder withLastUpdateDate:] */

long FUN_10afdda20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afdda58; end: 10afdda8f; -[SCLensExplorerImpressionInfoBuilder withLastWatchDate:] */

long FUN_10afdda58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afdda90; end: 10afddabf; -[SCLensExplorerImpressionInfoBuilder .cxx_destruct] */

void FUN_10afdda90(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10afddac0; end: 10afddc33; -[SCLensExplorerImpressionItem initWithImpressionIdentifier:impressionInfo:rankingRequestId:rankingRequestInfo:lensId:itemType:containerId:] */

undefined1 *
FUN_10afddac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112703d00;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afddc34; end: 10afddc57; -[SCLensExplorerImpressionItem copyWithZone:] */

undefined8 FUN_10afddc34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afddc58; end: 10afddcff; -[SCLensExplorerImpressionItem hash] */

undefined8 * FUN_10afddc58(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10afdddf0:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afdddfc;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30)))
    {
      lVar6 = *(long *)((long)puVar4 + 8);
      if ((lVar6 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x10);
        if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x18);
          if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar4 + 0x20);
            if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = *(long *)((long)puVar4 + 0x28);
              if ((lVar6 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar6 != 0))
              {
                puVar7 = *(undefined1 **)((long)puVar4 + 0x38);
                if (puVar7 != *(undefined1 **)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10afdddfc;
                }
                goto LAB_10afdddf0;
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10afdddfc:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10afddd00; end: 10afdde17; -[SCLensExplorerImpressionItem isEqual:] */

long FUN_10afddd00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afdddf0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdddfc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
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
                  goto LAB_10afdddfc;
                }
                goto LAB_10afdddf0;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afdddfc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdde18; end: 10afdde1f; -[SCLensExplorerImpressionItem impressionIdentifier] */

undefined8 FUN_10afdde18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdde20; end: 10afdde27; -[SCLensExplorerImpressionItem impressionInfo] */

undefined8 FUN_10afdde20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdde28; end: 10afdde2f; -[SCLensExplorerImpressionItem rankingRequestId] */

undefined8 FUN_10afdde28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afdde30; end: 10afdde37; -[SCLensExplorerImpressionItem rankingRequestInfo] */

undefined8 FUN_10afdde30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afdde38; end: 10afdde3f; -[SCLensExplorerImpressionItem lensId] */

undefined8 FUN_10afdde38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afdde40; end: 10afdde47; -[SCLensExplorerImpressionItem itemType] */

undefined8 FUN_10afdde40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afdde48; end: 10afdde4f; -[SCLensExplorerImpressionItem containerId] */

undefined8 FUN_10afdde48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afdde50; end: 10afddeaf; -[SCLensExplorerImpressionItem .cxx_destruct] */

void FUN_10afdde50(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afddeb0; end: 10afddf37; -[SCLensExplorerLensItemImpressionIdentifier initWithCoder:] */

undefined1 * FUN_10afddeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703d08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afddf38; end: 10afddfaf; -[SCLensExplorerLensItemImpressionIdentifier initWithUnlockableId:] */

undefined1 * FUN_10afddf38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703d08;
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



/* Entry: 10afddfb0; end: 10afddfd3; -[SCLensExplorerLensItemImpressionIdentifier copyWithZone:] */

undefined8 FUN_10afddfb0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


