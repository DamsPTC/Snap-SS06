/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106714f0c; end: 106714f93; -[SCLensExplorerResponseCategoryData matchCategory:subcategory:] */

void FUN_106714f0c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106714f94; end: 106714fcf; -[SCLensExplorerResponseCategoryData .cxx_destruct] */

void FUN_106714f94(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106714fd0; end: 106715047; -[SCLensExplorerResponseSubcategoryData initWithSubcategoryIdentifier:] */

undefined1 * FUN_106714fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2b40;
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



/* Entry: 106715048; end: 10671506b; -[SCLensExplorerResponseSubcategoryData copyWithZone:] */

undefined8 FUN_106715048(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671506c; end: 106715073; -[SCLensExplorerResponseSubcategoryData hash] */

void FUN_10671506c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 106715074; end: 106715103; -[SCLensExplorerResponseSubcategoryData isEqual:] */

long FUN_106715074(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067150e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1067150e8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1067150e8;
    }
  }
  lVar3 = 1;
LAB_1067150e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106715104; end: 10671510b; -[SCLensExplorerResponseSubcategoryData subcategoryIdentifier] */

undefined8 FUN_106715104(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671510c; end: 106715117; -[SCLensExplorerResponseSubcategoryData .cxx_destruct] */

void FUN_10671510c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106715118; end: 1067151c3; -[SCLensExplorerFeedResponse initWithFeeds:queryResult:] */

undefined1 *
FUN_106715118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2b48;
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



/* Entry: 1067151c4; end: 1067151e7; -[SCLensExplorerFeedResponse copyWithZone:] */

undefined8 FUN_1067151c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067151e8; end: 10671525b; -[SCLensExplorerFeedResponse hash] */

undefined8 * FUN_1067151e8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_1067152dc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1067152e8;
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
          goto LAB_1067152e8;
        }
        goto LAB_1067152dc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1067152e8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10671525c; end: 106715303; -[SCLensExplorerFeedResponse isEqual:] */

long FUN_10671525c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1067152dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067152e8;
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
          goto LAB_1067152e8;
        }
        goto LAB_1067152dc;
      }
    }
    lVar3 = 0;
  }
LAB_1067152e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106715304; end: 10671530b; -[SCLensExplorerFeedResponse feeds] */

undefined8 FUN_106715304(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671530c; end: 106715313; -[SCLensExplorerFeedResponse queryResult] */

undefined8 FUN_10671530c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106715314; end: 106715343; -[SCLensExplorerFeedResponse .cxx_destruct] */

void FUN_106715314(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106715344; end: 10671541b; -[SCLensExplorerDiffResult initWithInsertedIndexes:removedIndexes:movedIndexes:] */

undefined1 *
FUN_106715344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f2b50;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10671541c; end: 10671543f; -[SCLensExplorerDiffResult copyWithZone:] */

undefined8 FUN_10671541c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106715440; end: 1067154bf; -[SCLensExplorerDiffResult hash] */

undefined8 * FUN_106715440(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106715558:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106715564;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106715564;
          }
          goto LAB_106715558;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106715564:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1067154c0; end: 10671557f; -[SCLensExplorerDiffResult isEqual:] */

long FUN_1067154c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106715558:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106715564;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106715564;
          }
          goto LAB_106715558;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106715564:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106715580; end: 106715587; -[SCLensExplorerDiffResult insertedIndexes] */

undefined8 FUN_106715580(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106715588; end: 10671558f; -[SCLensExplorerDiffResult removedIndexes] */

undefined8 FUN_106715588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106715590; end: 106715597; -[SCLensExplorerDiffResult movedIndexes] */

undefined8 FUN_106715590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106715598; end: 1067155d3; -[SCLensExplorerDiffResult .cxx_destruct] */

void FUN_106715598(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067155d4; end: 10671565b; -[SCLensExplorerLensMetadataExtensionModel initWithCategoryId:pickedLensSource:] */

undefined1 *
FUN_1067155d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2b58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10671565c; end: 1067156f7; -[SCLensExplorerLensMetadataExtensionModel initWithCoder:] */

undefined1 * FUN_10671565c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2b58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067156f8; end: 10671571b; -[SCLensExplorerLensMetadataExtensionModel copyWithZone:] */

undefined8 FUN_1067156f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671571c; end: 10671577b; -[SCLensExplorerLensMetadataExtensionModel encodeWithCoder:] */

void FUN_10671571c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e5a858);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e5a878);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10671577c; end: 1067157ef; -[SCLensExplorerLensMetadataExtensionModel hash] */

undefined8 * FUN_10671577c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106715874;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_106715874;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_106715874;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_106715874:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 1067157f0; end: 10671588f; -[SCLensExplorerLensMetadataExtensionModel isEqual:] */

long FUN_1067157f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106715874;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_106715874;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_106715874;
    }
  }
  lVar3 = 1;
LAB_106715874:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106715890; end: 106715897; -[SCLensExplorerLensMetadataExtensionModel categoryId] */

undefined8 FUN_106715890(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106715898; end: 10671589f; -[SCLensExplorerLensMetadataExtensionModel pickedLensSource] */

undefined8 FUN_106715898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067158a0; end: 1067158ab; -[SCLensExplorerLensMetadataExtensionModel .cxx_destruct] */

void FUN_1067158a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067158ac; end: 106715923; -[SCLensExplorerPageUIConfiguration initWithSectionHeadersRequired:topInsetsDisabled:disableContentReloadAnimations:disableDismissOnBackground:bottomSafeAreaInsetEnabled:] */

void FUN_1067158ac(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f2b60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
  }
  return;
}



/* Entry: 106715924; end: 106715947; -[SCLensExplorerPageUIConfiguration copyWithZone:] */

undefined8 FUN_106715924(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106715948; end: 1067159c7; -[SCLensExplorerPageUIConfiguration hash] */

ulong * FUN_106715948(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  ulong uVar8;
  
  puVar2 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar6 >> 0x18),
                                          (uint6)(byte)((uint)uVar6 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar6) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar6 >> 8),(short)uVar7);
  uVar8 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar7 >> 0x30);
  uStack_40 = (ulong)uVar1 & 0xff;
  uStack_38 = uVar7 >> 0x10 & 0xff;
  uStack_30 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_28 = (ulong)uVar5;
  uStack_20 = (ulong)*(byte *)(param_1 + 0xc);
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar3 & 1) == 0) ||
          (((*(char *)((long)puVar2 + 8) != param_3[8] ||
            (*(char *)((long)puVar2 + 9) != param_3[9])) ||
           (*(char *)((long)puVar2 + 10) != param_3[10])))) ||
         (*(char *)((long)puVar2 + 0xb) != param_3[0xb])) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(char *)((long)puVar2 + 0xc) == param_3[0xc]);
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 1067159c8; end: 106715a8f; -[SCLensExplorerPageUIConfiguration isEqual:] */

bool FUN_1067159c8(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((((uVar3 & 1) == 0) ||
          (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
            (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
           (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
         (*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106715a90; end: 106715a97; -[SCLensExplorerPageUIConfiguration sectionHeadersRequired] */

undefined1 FUN_106715a90(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106715a98; end: 106715a9f; -[SCLensExplorerPageUIConfiguration topInsetsDisabled] */

undefined1 FUN_106715a98(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106715aa0; end: 106715aa7; -[SCLensExplorerPageUIConfiguration disableContentReloadAnimations] */

undefined1 FUN_106715aa0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106715aa8; end: 106715aaf; -[SCLensExplorerPageUIConfiguration disableDismissOnBackground] */

undefined1 FUN_106715aa8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106715ab0; end: 106715ab7; -[SCLensExplorerPageUIConfiguration bottomSafeAreaInsetEnabled] */

undefined1 FUN_106715ab0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 106715ab8; end: 106715bb7; -[SCLensExplorerCacheLensFeedItem initWithStorageId:sectionId:model:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106715ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f2b68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef6c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef6c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef70);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef74);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef74) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef78) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106715bb8; end: 106715bdb; -[SCLensExplorerCacheLensFeedItem copyWithZone:] */

undefined8 FUN_106715bb8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106715bdc; end: 106715c7f; -[SCLensExplorerCacheLensFeedItem hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106715bdc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274ef6c);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274ef70);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274ef74);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11274ef78);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106715d48:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106715d54;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_11274ef78) ==
        *(long *)((long)param_3 + (long)_DAT_11274ef78))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274ef6c);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11274ef6c)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274ef70);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11274ef70)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11274ef74);
          if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11274ef74)) {
            func_0x00010c071ae0();
            goto LAB_106715d54;
          }
          goto LAB_106715d48;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106715d54:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106715c80; end: 106715d6f; -[SCLensExplorerCacheLensFeedItem isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106715c80(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106715d48:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106715d54;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_11274ef78) == *(long *)(param_3 + (long)_DAT_11274ef78))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11274ef6c);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274ef6c)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11274ef70);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274ef70)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11274ef74);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_11274ef74)) {
            func_0x00010c071ae0();
            goto LAB_106715d54;
          }
          goto LAB_106715d48;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106715d54:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106715d70; end: 106715d7f; -[SCLensExplorerCacheLensFeedItem storageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106715d70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ef6c);
}



/* Entry: 106715d80; end: 106715d8f; -[SCLensExplorerCacheLensFeedItem sectionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106715d80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ef70);
}



/* Entry: 106715d90; end: 106715d9f; -[SCLensExplorerCacheLensFeedItem model] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106715d90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ef74);
}



/* Entry: 106715da0; end: 106715daf; -[SCLensExplorerCacheLensFeedItem context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106715da0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ef78);
}



/* Entry: 106715db0; end: 106715dff; -[SCLensExplorerCacheLensFeedItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106715db0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274ef74,0);
  _objc_storeStrong(param_1 + _DAT_11274ef70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274ef6c,0);
  return;
}



/* Entry: 106715e00; end: 106716003; -[SCLensExplorerCacheFeedData initWithIdentifier:context:displayName:categoryData:renderStrategy:isDefault:feedActivation:sortIndex:feedIdentifier:subtitleDisplayName:iconUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106715e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f2b70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef7c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef7c) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef80) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef84);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef84) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef88);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef88) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef8c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef8c) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274ef90) = param_8;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11274ef94) = param_9;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef98) = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef9c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274ef9c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274efa0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274efa0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274efa4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274efa4) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106716004; end: 106716027; -[SCLensExplorerCacheFeedData copyWithZone:] */

undefined8 FUN_106716004(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106716028; end: 106716123; -[SCLensExplorerCacheFeedData hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106716028(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274ef7c);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11274ef80);
  lStack_78 = -lVar5;
  if (-1 < lVar5) {
    lStack_78 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274ef84);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274ef88);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274ef8c);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + _DAT_11274ef90);
  uStack_50 = (ulong)*(uint *)(param_1 + _DAT_11274ef94);
  lVar5 = *(long *)(param_1 + _DAT_11274ef98);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274ef9c);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274efa0);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274efa4);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1067162b4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1067162c0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(long *)((long)puVar3 + (long)_DAT_11274ef80) == *(long *)(param_3 + _DAT_11274ef80) &&
          (*(char *)((long)puVar3 + (long)_DAT_11274ef90) == param_3[_DAT_11274ef90])) &&
         (*(int *)((long)puVar3 + (long)_DAT_11274ef94) == *(int *)(param_3 + _DAT_11274ef94))) &&
        (*(long *)((long)puVar3 + (long)_DAT_11274ef98) == *(long *)(param_3 + _DAT_11274ef98))))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274ef7c);
      if ((lVar5 == *(long *)(param_3 + _DAT_11274ef7c)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274ef84);
        if ((lVar5 == *(long *)(param_3 + _DAT_11274ef84)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274ef88);
          if ((lVar5 == *(long *)(param_3 + _DAT_11274ef88)) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274ef8c);
            if ((lVar5 == *(long *)(param_3 + _DAT_11274ef8c)) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274ef9c);
              if ((lVar5 == *(long *)(param_3 + _DAT_11274ef9c)) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274efa0);
                if ((lVar5 == *(long *)(param_3 + _DAT_11274efa0)) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_11274efa4);
                  if (puVar6 != *(undefined1 **)(param_3 + _DAT_11274efa4)) {
                    func_0x00010c071ae0();
                    goto LAB_1067162c0;
                  }
                  goto LAB_1067162b4;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1067162c0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106716124; end: 1067162db; -[SCLensExplorerCacheFeedData isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106716124(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1067162b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067162c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + (long)_DAT_11274ef80) == *(long *)(param_3 + (long)_DAT_11274ef80) &&
          (*(char *)(param_1 + (long)_DAT_11274ef90) == *(char *)(param_3 + (long)_DAT_11274ef90)))
         && (*(int *)(param_1 + (long)_DAT_11274ef94) == *(int *)(param_3 + (long)_DAT_11274ef94)))
        && (*(long *)(param_1 + (long)_DAT_11274ef98) == *(long *)(param_3 + (long)_DAT_11274ef98)))
       )) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11274ef7c);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274ef7c)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11274ef84);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274ef84)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11274ef88);
          if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274ef88)) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + (long)_DAT_11274ef8c);
            if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274ef8c)) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + (long)_DAT_11274ef9c);
              if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274ef9c)) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                lVar3 = *(long *)(param_1 + (long)_DAT_11274efa0);
                if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274efa0)) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                  lVar3 = *(long *)(param_1 + (long)_DAT_11274efa4);
                  if (lVar3 != *(long *)(param_3 + (long)_DAT_11274efa4)) {
                    func_0x00010c071ae0();
                    goto LAB_1067162c0;
                  }
                  goto LAB_1067162b4;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1067162c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1067162dc; end: 1067162eb; -[SCLensExplorerCacheFeedData identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067162dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ef7c);
}



/* Entry: 1067162ec; end: 1067162fb; -[SCLensExplorerCacheFeedData context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067162ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ef80);
}



/* Entry: 1067162fc; end: 10671630b; -[SCLensExplorerCacheFeedData displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067162fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ef84);
}



/* Entry: 10671630c; end: 10671631b; -[SCLensExplorerCacheFeedData categoryData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10671630c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ef88);
}



/* Entry: 10671631c; end: 10671632b; -[SCLensExplorerCacheFeedData renderStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10671631c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ef8c);
}



/* Entry: 10671632c; end: 10671633b; -[SCLensExplorerCacheFeedData isDefault] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10671632c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274ef90);
}



/* Entry: 10671633c; end: 10671634b; -[SCLensExplorerCacheFeedData feedActivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10671633c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11274ef94);
}



/* Entry: 10671634c; end: 10671635b; -[SCLensExplorerCacheFeedData sortIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10671634c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ef98);
}



/* Entry: 10671635c; end: 10671636b; -[SCLensExplorerCacheFeedData feedIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10671635c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274ef9c);
}



/* Entry: 10671636c; end: 10671637b; -[SCLensExplorerCacheFeedData subtitleDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10671636c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274efa0);
}



/* Entry: 10671637c; end: 10671638b; -[SCLensExplorerCacheFeedData iconUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10671637c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274efa4);
}



/* Entry: 10671638c; end: 10671641b; -[SCLensExplorerCacheFeedData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10671638c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274efa4,0);
  _objc_storeStrong(param_1 + _DAT_11274efa0,0);
  _objc_storeStrong(param_1 + _DAT_11274ef9c,0);
  _objc_storeStrong(param_1 + _DAT_11274ef8c,0);
  _objc_storeStrong(param_1 + _DAT_11274ef88,0);
  _objc_storeStrong(param_1 + _DAT_11274ef84,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274ef7c,0);
  return;
}



/* Entry: 10671641c; end: 106716487; +[SCLensExplorerCacheLensFeedItemModel heroItemWithHeroItem:] */

void FUN_10671641c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccc90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106716488; end: 1067164f3; +[SCLensExplorerCacheLensFeedItemModel lensCollectionItemWithLensCollectionItem:] */

void FUN_106716488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccc90;
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



/* Entry: 1067164f4; end: 10671655f; +[SCLensExplorerCacheLensFeedItemModel lensContainerItemWithLensContainerItem:] */

void FUN_1067164f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccc90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106716560; end: 1067165cb; +[SCLensExplorerCacheLensFeedItemModel lensCreatorItemWithLensCreatorItem:] */

void FUN_106716560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccc90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067165cc; end: 106716633; +[SCLensExplorerCacheLensFeedItemModel lensItemWithLensItem:] */

void FUN_1067165cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccc90;
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



/* Entry: 106716634; end: 10671669f; +[SCLensExplorerCacheLensFeedItemModel lensTopicItemWithLensTopicItem:] */

void FUN_106716634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccc90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067166a0; end: 10671670b; +[SCLensExplorerCacheLensFeedItemModel storyItemWithStoryItem:] */

void FUN_1067166a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccc90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10671670c; end: 10671672f; -[SCLensExplorerCacheLensFeedItemModel copyWithZone:] */

undefined8 FUN_10671670c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106716730; end: 1067167e3; -[SCLensExplorerCacheLensFeedItemModel hash] */

void FUN_106716730(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126f2b78;
  puStack_a0 = puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067167e4; end: 106716827; -[SCLensExplorerCacheLensFeedItemModel internalInit] */

void FUN_1067167e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f2b78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106716828; end: 106716957; -[SCLensExplorerCacheLensFeedItemModel isEqual:] */

long FUN_106716828(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106716930:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671693c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_10671693c;
                  }
                  goto LAB_106716930;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10671693c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106716958; end: 106716ad7; -[SCLensExplorerCacheLensFeedItemModel matchLensItem:lensCollectionItem:lensTopicItem:lensCreatorItem:lensContainerItem:heroItem:storyItem:] */

void FUN_106716958(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 4) {
    if (lVar1 == 1) {
      if (param_3 == 0) goto LAB_106716a8c;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else if (lVar1 == 2) {
      if (param_4 == 0) goto LAB_106716a8c;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 3) || (param_5 == 0)) goto LAB_106716a8c;
      lVar2 = 0x20;
      lVar1 = param_5;
    }
  }
  else if (lVar1 < 6) {
    if (lVar1 == 4) {
      if (param_6 == 0) goto LAB_106716a8c;
      lVar2 = 0x28;
      lVar1 = param_6;
    }
    else {
      if ((lVar1 != 5) || (param_7 == 0)) goto LAB_106716a8c;
      lVar2 = 0x30;
      lVar1 = param_7;
    }
  }
  else if (lVar1 == 6) {
    if (param_8 == 0) goto LAB_106716a8c;
    lVar2 = 0x38;
    lVar1 = param_8;
  }
  else {
    if ((lVar1 != 7) || (param_9 == 0)) goto LAB_106716a8c;
    lVar2 = 0x40;
    lVar1 = param_9;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_106716a8c:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106716ad8; end: 106716b43; -[SCLensExplorerCacheLensFeedItemModel .cxx_destruct] */

void FUN_106716ad8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106716b44; end: 106716b63; -[SCLensExplorerCacheLensFeedItemModel isSameSubtype:] */

bool FUN_106716b44(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
  }
  return false;
}



/* Entry: 106716b64; end: 106716b6b; -[SCLensExplorerCacheLensFeedItemModel subtype] */

undefined8 FUN_106716b64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106716b6c; end: 106716c5f; -[SCLensExplorerCacheLensFeedItemModel asLensItem] */

void FUN_106716b6c(undefined8 param_1,undefined8 param_2)

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
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106716c78;
  puStack_60 = &UNK_1109366f0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0be940(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110936720,
                      &PTR___NSConcreteGlobalBlock_110936760,&PTR___NSConcreteGlobalBlock_1109367a0,
                      &PTR___NSConcreteGlobalBlock_1109367e0,&PTR___NSConcreteGlobalBlock_110936820,
                      &PTR___NSConcreteGlobalBlock_110936860);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106716c60; end: 106716c77;  */

void FUN_106716c60(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106716c78; end: 106716caf;  */

void FUN_106716c78(long param_1,undefined8 param_2)

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



/* Entry: 106716cb0; end: 106716cc7;  */

void FUN_106716cb0(void)

{
  return;
}



/* Entry: 106716cc8; end: 106716dbb; -[SCLensExplorerCacheLensFeedItemModel asLensCollectionItem] */

void FUN_106716cc8(undefined8 param_1,undefined8 param_2)

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
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106716dc0;
  puStack_60 = &UNK_1109368c0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0be940(param_1,param_2,&PTR___NSConcreteGlobalBlock_1109368a0,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_1109368f0,&PTR___NSConcreteGlobalBlock_110936910,
                      &PTR___NSConcreteGlobalBlock_110936930,&PTR___NSConcreteGlobalBlock_110936950,
                      &PTR___NSConcreteGlobalBlock_110936970);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106716dbc; end: 106716dbf;  */

void FUN_106716dbc(void)

{
  return;
}



/* Entry: 106716dc0; end: 106716df7;  */

void FUN_106716dc0(long param_1,undefined8 param_2)

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



/* Entry: 106716df8; end: 106716e0b;  */

void FUN_106716df8(void)

{
  return;
}



/* Entry: 106716e0c; end: 106716eff; -[SCLensExplorerCacheLensFeedItemModel asLensTopicItem] */

void FUN_106716e0c(undefined8 param_1,undefined8 param_2)

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
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106716f08;
  puStack_60 = &UNK_1109369d0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0be940(param_1,param_2,&PTR___NSConcreteGlobalBlock_110936990,
                      &PTR___NSConcreteGlobalBlock_1109369b0,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110936a00,&PTR___NSConcreteGlobalBlock_110936a20,
                      &PTR___NSConcreteGlobalBlock_110936a40,&PTR___NSConcreteGlobalBlock_110936a60)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106716f00; end: 106716f07;  */

void FUN_106716f00(void)

{
  return;
}



/* Entry: 106716f08; end: 106716f3f;  */

void FUN_106716f08(long param_1,undefined8 param_2)

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



/* Entry: 106716f40; end: 106716f4f;  */

void FUN_106716f40(void)

{
  return;
}



/* Entry: 106716f50; end: 106717043; -[SCLensExplorerCacheLensFeedItemModel asLensCreatorItem] */

void FUN_106716f50(undefined8 param_1,undefined8 param_2)

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
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106717050;
  puStack_60 = &UNK_110936ae0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0be940(param_1,param_2,&PTR___NSConcreteGlobalBlock_110936a80,
                      &PTR___NSConcreteGlobalBlock_110936aa0,&PTR___NSConcreteGlobalBlock_110936ac0,
                      &puStack_78,&PTR___NSConcreteGlobalBlock_110936b10,
                      &PTR___NSConcreteGlobalBlock_110936b30,&PTR___NSConcreteGlobalBlock_110936b50)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106717044; end: 10671704f;  */

void FUN_106717044(void)

{
  return;
}



/* Entry: 106717050; end: 106717087;  */

void FUN_106717050(long param_1,undefined8 param_2)

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



/* Entry: 106717088; end: 106717093;  */

void FUN_106717088(void)

{
  return;
}



/* Entry: 106717094; end: 106717187; -[SCLensExplorerCacheLensFeedItemModel asLensContainerItem] */

void FUN_106717094(undefined8 param_1,undefined8 param_2)

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
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106717198;
  puStack_60 = &UNK_110936bf0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_48 = puStack_58;
  func_0x00010c0be940(param_1,param_2,&PTR___NSConcreteGlobalBlock_110936b70,
                      &PTR___NSConcreteGlobalBlock_110936b90,&PTR___NSConcreteGlobalBlock_110936bb0,
                      &PTR___NSConcreteGlobalBlock_110936bd0,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110936c20,&PTR___NSConcreteGlobalBlock_110936c40)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106717188; end: 106717197;  */

void FUN_106717188(void)

{
  return;
}



/* Entry: 106717198; end: 1067171cf;  */

void FUN_106717198(long param_1,undefined8 param_2)

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


