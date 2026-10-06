/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afdfc4c; end: 10afdfccb; -[SCLensModularCameraScopeConfiguration hash] */

undefined8 * FUN_10afdfc4c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afdfd80;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if (((((ulong)puVar3 & 1) == 0) ||
        (((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
          (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))) ||
         (*(char *)((long)puVar2 + 8) != param_3[8])))) ||
       (*(char *)((long)puVar2 + 9) != param_3[9])) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10afdfd80;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x20);
    if (puVar4 != *(undefined1 **)(param_3 + 0x20)) {
      func_0x00010c071ae0();
      goto LAB_10afdfd80;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10afdfd80:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10afdfccc; end: 10afdfd9b; -[SCLensModularCameraScopeConfiguration isEqual:] */

long FUN_10afdfccc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdfd80;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
         (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) ||
       (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) {
      lVar3 = 0;
      goto LAB_10afdfd80;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != *(long *)(param_3 + 0x20)) {
      func_0x00010c071ae0();
      goto LAB_10afdfd80;
    }
  }
  lVar3 = 1;
LAB_10afdfd80:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdfd9c; end: 10afdfda3; -[SCLensModularCameraScopeConfiguration blockListedFeatures] */

undefined8 FUN_10afdfd9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdfda4; end: 10afdfdab; -[SCLensModularCameraScopeConfiguration cameraUIMode] */

undefined8 FUN_10afdfda4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afdfdac; end: 10afdfdb3; -[SCLensModularCameraScopeConfiguration preselectedLensId] */

undefined8 FUN_10afdfdac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afdfdb4; end: 10afdfdbb; -[SCLensModularCameraScopeConfiguration singleLensModeEnabled] */

undefined1 FUN_10afdfdb4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afdfdbc; end: 10afdfdc3; -[SCLensModularCameraScopeConfiguration enableARBar] */

undefined1 FUN_10afdfdbc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afdfdc4; end: 10afdfdcf; -[SCLensModularCameraScopeConfiguration .cxx_destruct] */

void FUN_10afdfdc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10afdfdd0; end: 10afdff97; -[SCLensReplyParams initWithBasicReplyParams:lensReplyParams:gamesReplyParams:impalaReplyParams:contextReplyParams:topicReplyParams:lensConfigReplyParams:musicReplyParams:] */

undefined1 *
FUN_10afdfdd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112703d70;
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
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdff98; end: 10afdffbb; -[SCLensReplyParams copyWithZone:] */

undefined8 FUN_10afdff98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdffbc; end: 10afe0077; -[SCLensReplyParams hash] */

undefined8 * FUN_10afdffbc(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
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
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afe0188:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afe0194;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
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
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[7];
                  if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = (undefined8 *)puVar3[8];
                    if (puVar6 != (undefined8 *)param_3[8]) {
                      func_0x00010c071ae0();
                      goto LAB_10afe0194;
                    }
                    goto LAB_10afe0188;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afe0194:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afe0078; end: 10afe01af; -[SCLensReplyParams isEqual:] */

long FUN_10afe0078(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe0188:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe0194;
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
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if (lVar3 != *(long *)(param_3 + 0x40)) {
                      func_0x00010c071ae0();
                      goto LAB_10afe0194;
                    }
                    goto LAB_10afe0188;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afe0194:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe01b0; end: 10afe01b7; -[SCLensReplyParams basicReplyParams] */

undefined8 FUN_10afe01b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe01b8; end: 10afe01bf; -[SCLensReplyParams lensReplyParams] */

undefined8 FUN_10afe01b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe01c0; end: 10afe01c7; -[SCLensReplyParams gamesReplyParams] */

undefined8 FUN_10afe01c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe01c8; end: 10afe01cf; -[SCLensReplyParams impalaReplyParams] */

undefined8 FUN_10afe01c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afe01d0; end: 10afe01d7; -[SCLensReplyParams contextReplyParams] */

undefined8 FUN_10afe01d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afe01d8; end: 10afe01df; -[SCLensReplyParams topicReplyParams] */

undefined8 FUN_10afe01d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afe01e0; end: 10afe01e7; -[SCLensReplyParams lensConfigReplyParams] */

undefined8 FUN_10afe01e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afe01e8; end: 10afe01ef; -[SCLensReplyParams musicReplyParams] */

undefined8 FUN_10afe01e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afe01f0; end: 10afe0267; -[SCLensReplyParams .cxx_destruct] */

void FUN_10afe01f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe0268; end: 10afe0283; +[SCLensReplyParamsBuilder lensReplyParams] */

void FUN_10afe0268(void)

{
  _objc_alloc_init(PTR_PTR_1126ae6e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe0284; end: 10afe04e7; +[SCLensReplyParamsBuilder lensReplyParamsFromExistingLensReplyParams:] */

void FUN_10afe0284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  
  puVar1 = PTR_PTR_1126ae6e0;
  _objc_retain(param_3);
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf16600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2a9260(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b2c40(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfbe400();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2aed00(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfea1c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2afb00(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf4efc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2ab060(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c275580(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2bb660(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c091be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2b2720(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c0d36a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar17 = puVar15;
  func_0x00010c2b4320(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 10afe04e8; end: 10afe052f; -[SCLensReplyParamsBuilder build] */

void FUN_10afe04e8(void)

{
  _objc_alloc(PTR_PTR_1126b0100);
  func_0x00010bff7380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe0530; end: 10afe0567; -[SCLensReplyParamsBuilder withBasicReplyParams:] */

long FUN_10afe0530(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afe0568; end: 10afe059f; -[SCLensReplyParamsBuilder withLensReplyParams:] */

long FUN_10afe0568(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afe05a0; end: 10afe05d7; -[SCLensReplyParamsBuilder withGamesReplyParams:] */

long FUN_10afe05a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afe05d8; end: 10afe060f; -[SCLensReplyParamsBuilder withImpalaReplyParams:] */

long FUN_10afe05d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afe0610; end: 10afe0647; -[SCLensReplyParamsBuilder withContextReplyParams:] */

long FUN_10afe0610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afe0648; end: 10afe067f; -[SCLensReplyParamsBuilder withTopicReplyParams:] */

long FUN_10afe0648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afe0680; end: 10afe06b7; -[SCLensReplyParamsBuilder withLensConfigReplyParams:] */

long FUN_10afe0680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afe06b8; end: 10afe06ef; -[SCLensReplyParamsBuilder withMusicReplyParams:] */

long FUN_10afe06b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afe06f0; end: 10afe0767; -[SCLensReplyParamsBuilder .cxx_destruct] */

void FUN_10afe06f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe0768; end: 10afe07d3; +[SCLensModularCameraEvent didActivateLensWithLensId:] */

void FUN_10afe0768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1bf0;
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



/* Entry: 10afe07d4; end: 10afe082b; +[SCLensModularCameraEvent didDismissWithSendSnap:] */

void FUN_10afe07d4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1bf0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe082c; end: 10afe084f; -[SCLensModularCameraEvent copyWithZone:] */

undefined8 FUN_10afe082c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe0850; end: 10afe08b7; -[SCLensModularCameraEvent hash] */

void FUN_10afe0850(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_112703d78;
  puStack_60 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe08b8; end: 10afe08fb; -[SCLensModularCameraEvent internalInit] */

void FUN_10afe08b8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703d78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe08fc; end: 10afe09ab; -[SCLensModularCameraEvent isEqual:] */

long FUN_10afe08fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe0990;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_10afe0990;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10afe0990;
    }
  }
  lVar3 = 1;
LAB_10afe0990:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe09ac; end: 10afe0a33; -[SCLensModularCameraEvent matchDidDismiss:didActivateLens:] */

void FUN_10afe09ac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afe0a34; end: 10afe0a3f; -[SCLensModularCameraEvent .cxx_destruct] */

void FUN_10afe0a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10afe0a40; end: 10afe0a47; -[SCLensesFeatureServices mediaPickerFeatureRegistry] */

undefined8 FUN_10afe0a40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe0a48; end: 10afe0a8f; -[SCLensesFeatureServices .cxx_destruct] */

void FUN_10afe0a48(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe0a90; end: 10afe0acb; -[SCLensesOnCameraServices .cxx_destruct] */

void FUN_10afe0a90(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe0acc; end: 10afe0ad7; -[SCMainCameraScopedLensesOnCameraServices .cxx_destruct] */

void FUN_10afe0acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe0ad8; end: 10afe0b5f; -[SCLensFeatureRegistry features] */

void FUN_10afe0ad8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf00560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe0b60; end: 10afe0bbb; -[SCLensFeatureRegistry unregisterFeature:] */

void FUN_10afe0b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afe0bbc; end: 10afe0bc7; -[SCLensFeatureRegistry .cxx_destruct] */

void FUN_10afe0bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe0bc8; end: 10afe0bcf; -[SCMapStoryFetchingServices mapStoryFetcher] */

undefined8 FUN_10afe0bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe0bd0; end: 10afe0bd7; -[SCMapStoryFetchingServices previewFetcher] */

undefined8 FUN_10afe0bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe0bd8; end: 10afe0c07; -[SCMapStoryFetchingServices .cxx_destruct] */

void FUN_10afe0bd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe0c08; end: 10afe0c73; +[SCMapStoryPlaylistRequest chatSnapPlaylistRequestWithSnapId:] */

void FUN_10afe0c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1e48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x90);
  *(undefined8 *)(puVar2 + 0x90) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe0c74; end: 10afe0cf7; +[SCMapStoryPlaylistRequest heatmapPlaylistRequestWithLatitude:longitude:radiusMeters:maximumFuzzRadius:zoomLevel:] */

void FUN_10afe0c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1e48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x50) = param_1;
  *(undefined8 *)(puVar2 + 0x58) = param_2;
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  *(undefined8 *)(puVar2 + 0x68) = param_4;
  *(undefined8 *)(puVar2 + 0x70) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe0cf8; end: 10afe0d9b; +[SCMapStoryPlaylistRequest layerPlaylistRequestWithLayerId:flavor:playlistId:] */

void FUN_10afe0cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1e48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x78) = param_3;
  *(undefined8 *)(puVar2 + 0x80) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x88);
  *(undefined8 *)(puVar2 + 0x88) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe0d9c; end: 10afe0e33; +[SCMapStoryPlaylistRequest localityPlaylistRequestWithVerrazanoId:localizedLocality:] */

void FUN_10afe0d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1e48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe0e34; end: 10afe0f1f; +[SCMapStoryPlaylistRequest placePlaylistRequestWithVerrazanoId:providerPhotos:useGooglePhotos:useAlternateRanking:requestId:source:] */

void FUN_10afe0e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b1e48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  puVar2[0x38] = param_5;
  puVar2[0x39] = param_6;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_7;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x48) = param_8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe0f20; end: 10afe0f83; +[SCMapStoryPlaylistRequest poiPlaylistRequestWithPoiId:] */

void FUN_10afe0f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1e48;
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



/* Entry: 10afe0f84; end: 10afe0fa7; -[SCMapStoryPlaylistRequest copyWithZone:] */

undefined8 FUN_10afe0f84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe0fa8; end: 10afe1127; -[SCMapStoryPlaylistRequest hash] */

void FUN_10afe0fa8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_b8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_a8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uStack_90 = (ulong)*(byte *)(param_1 + 0x38);
  uStack_88 = (ulong)*(byte *)(param_1 + 0x39);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = uVar3;
  func_0x00010bfde980();
  uStack_78 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_70 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_68 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_58 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_48 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&uStack_c0,0x13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_e8 = PTR_PTR_112703db0;
  puStack_f0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_f0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe1128; end: 10afe116b; -[SCMapStoryPlaylistRequest internalInit] */

void FUN_10afe1128(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703db0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe116c; end: 10afe141b; -[SCMapStoryPlaylistRequest isEqual:] */

long FUN_10afe116c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe13f4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe1400;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(char *)(param_1 + 0x38) == *(char *)(param_3 + 0x38))) &&
         (*(char *)(param_1 + 0x39) == *(char *)(param_3 + 0x39))) &&
        ((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
         (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
      dVar5 = ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar5 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
        if ((dVar5 < 2.2250738585072014e-308) ||
           (dVar5 < ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) *
                    2.220446049250313e-16)) {
          dVar5 = ABS(*(double *)(param_1 + 0x60) - *(double *)(param_3 + 0x60));
          if ((dVar5 < 2.2250738585072014e-308) ||
             (dVar5 < ABS(*(double *)(param_1 + 0x60) + *(double *)(param_3 + 0x60)) *
                      2.220446049250313e-16)) {
            dVar5 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
            if ((dVar5 < 2.2250738585072014e-308) ||
               (dVar5 < ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                        2.220446049250313e-16)) {
              dVar5 = ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70));
              if (((((dVar5 < 2.2250738585072014e-308) ||
                    (dVar5 < ABS(*(double *)(param_1 + 0x70) + *(double *)(param_3 + 0x70)) *
                             2.220446049250313e-16)) &&
                   ((((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
                      (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                     ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
                      (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                    ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
                     (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
                  ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
                   (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                 ((((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
                    (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                   ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
                    (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                  (((lVar4 = *(long *)(param_1 + 0x80), lVar4 == *(long *)(param_3 + 0x80) ||
                    (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                   ((lVar4 = *(long *)(param_1 + 0x88), lVar4 == *(long *)(param_3 + 0x88) ||
                    (func_0x00010c071ae0(), (int)lVar4 != 0)))))))) {
                lVar4 = *(long *)(param_1 + 0x90);
                if (lVar4 != *(long *)(param_3 + 0x90)) {
                  func_0x00010c071ae0();
                  goto LAB_10afe1400;
                }
                goto LAB_10afe13f4;
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10afe1400:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afe141c; end: 10afe159b; -[SCMapStoryPlaylistRequest matchPoiPlaylistRequest:localityPlaylistRequest:placePlaylistRequest:heatmapPlaylistRequest:layerPlaylistRequest:chatSnapPlaylistRequest:] */

void FUN_10afe141c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 3) {
    if (lVar2 != 0) {
      if (lVar2 == 1) {
        if (param_4 != 0) {
          (**(code **)(param_4 + 0x10))
                    (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
        }
      }
      else if ((lVar2 == 2) && (param_5 != 0)) {
        (**(code **)(param_5 + 0x10))
                  (param_5,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                   *(undefined1 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x39),
                   *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
      }
      goto LAB_10afe1558;
    }
    if (param_3 == 0) goto LAB_10afe1558;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  else {
    if (lVar2 == 3) {
      if (param_6 != 0) {
        (**(code **)(param_6 + 0x10))
                  (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                   *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                   *(undefined8 *)(param_1 + 0x70),param_6);
      }
      goto LAB_10afe1558;
    }
    if (lVar2 == 4) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))
                  (param_7,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                   *(undefined8 *)(param_1 + 0x88));
      }
      goto LAB_10afe1558;
    }
    if ((lVar2 != 5) || (param_8 == 0)) goto LAB_10afe1558;
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    pcVar3 = *(code **)(param_8 + 0x10);
    lVar2 = param_8;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10afe1558:
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



/* Entry: 10afe159c; end: 10afe161f; -[SCMapStoryPlaylistRequest .cxx_destruct] */

void FUN_10afe159c(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afe1620; end: 10afe16cf; -[SCMapTileSetId initWithCoder:] */

undefined1 * FUN_10afe1620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703db8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe16d0; end: 10afe175f; -[SCMapTileSetId initWithTileSetType:flavor:msSinceEpoch:] */

undefined1 *
FUN_10afe16d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703db8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe1760; end: 10afe1783; -[SCMapTileSetId copyWithZone:] */

undefined8 FUN_10afe1760(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe1784; end: 10afe17f7; -[SCMapTileSetId encodeWithCoder:] */

void FUN_10afe1784(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f486d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f486f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f48718);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afe17f8; end: 10afe186f; -[SCMapTileSetId hash] */

undefined8 * FUN_10afe17f8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afe1904;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10afe1904;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afe1904;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_10afe1904:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10afe1870; end: 10afe191f; -[SCMapTileSetId isEqual:] */

long FUN_10afe1870(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe1904;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10afe1904;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afe1904;
    }
  }
  lVar3 = 1;
LAB_10afe1904:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe1920; end: 10afe1927; -[SCMapTileSetId tileSetType] */

undefined8 FUN_10afe1920(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe1928; end: 10afe192f; -[SCMapTileSetId flavor] */

undefined8 FUN_10afe1928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe1930; end: 10afe1937; -[SCMapTileSetId msSinceEpoch] */

undefined8 FUN_10afe1930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe1938; end: 10afe1943; -[SCMapTileSetId .cxx_destruct] */

void FUN_10afe1938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afe1944; end: 10afe1ac7; -[SCMapStoryPreviewThumbnail initWithSnapId:url:encryptionKey:encryptionIv:isVideo:bundledSnapIds:isImportant:creatorId:] */

undefined1 *
FUN_10afe1944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

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
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112703dc0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe1ac8; end: 10afe1aeb; -[SCMapStoryPreviewThumbnail copyWithZone:] */

undefined8 FUN_10afe1ac8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe1aec; end: 10afe1b97; -[SCMapStoryPreviewThumbnail hash] */

undefined8 * FUN_10afe1aec(long param_1,undefined8 param_2,undefined8 *param_3)

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
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afe1c98:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afe1ca4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[7];
                if (puVar6 != (undefined8 *)param_3[7]) {
                  func_0x00010c071ae0();
                  goto LAB_10afe1ca4;
                }
                goto LAB_10afe1c98;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afe1ca4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afe1b98; end: 10afe1cbf; -[SCMapStoryPreviewThumbnail isEqual:] */

long FUN_10afe1b98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe1c98:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe1ca4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
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
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10afe1ca4;
                }
                goto LAB_10afe1c98;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afe1ca4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe1cc0; end: 10afe1cc7; -[SCMapStoryPreviewThumbnail snapId] */

undefined8 FUN_10afe1cc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe1cc8; end: 10afe1ccf; -[SCMapStoryPreviewThumbnail url] */

undefined8 FUN_10afe1cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe1cd0; end: 10afe1cd7; -[SCMapStoryPreviewThumbnail encryptionKey] */

undefined8 FUN_10afe1cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afe1cd8; end: 10afe1cdf; -[SCMapStoryPreviewThumbnail encryptionIv] */

undefined8 FUN_10afe1cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afe1ce0; end: 10afe1ce7; -[SCMapStoryPreviewThumbnail isVideo] */

undefined1 FUN_10afe1ce0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afe1ce8; end: 10afe1cef; -[SCMapStoryPreviewThumbnail bundledSnapIds] */

undefined8 FUN_10afe1ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afe1cf0; end: 10afe1cf7; -[SCMapStoryPreviewThumbnail isImportant] */

undefined1 FUN_10afe1cf0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afe1cf8; end: 10afe1cff; -[SCMapStoryPreviewThumbnail creatorId] */

undefined8 FUN_10afe1cf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afe1d00; end: 10afe1d5f; -[SCMapStoryPreviewThumbnail .cxx_destruct] */

void FUN_10afe1d00(long param_1)

{
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



/* Entry: 10afe1d60; end: 10afe1e5f; -[SCVisualTrayPlaceThumbnailsData initWithPlaceId:previewThumbnail:numOrbisStories:storyCarouselThumbnails:hasImportantSnaps:startTimeSec:] */

undefined1 *
FUN_10afe1d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_112703dc8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe1e60; end: 10afe1e83; -[SCVisualTrayPlaceThumbnailsData copyWithZone:] */

undefined8 FUN_10afe1e60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe1e84; end: 10afe1f13; -[SCVisualTrayPlaceThumbnailsData hash] */

undefined8 * FUN_10afe1e84(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  puVar3 = &uStack_58;
  uStack_40 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afe1fdc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afe1fe8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[4] == param_3[4] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
        (puVar3[6] == param_3[6])))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[5];
          if (puVar6 != (undefined8 *)param_3[5]) {
            func_0x00010c071ae0();
            goto LAB_10afe1fe8;
          }
          goto LAB_10afe1fdc;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afe1fe8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afe1f14; end: 10afe2003; -[SCVisualTrayPlaceThumbnailsData isEqual:] */

long FUN_10afe1f14(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe1fdc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe1fe8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10afe1fe8;
          }
          goto LAB_10afe1fdc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afe1fe8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe2004; end: 10afe200b; -[SCVisualTrayPlaceThumbnailsData placeId] */

undefined8 FUN_10afe2004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe200c; end: 10afe2013; -[SCVisualTrayPlaceThumbnailsData previewThumbnail] */

undefined8 FUN_10afe200c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe2014; end: 10afe201b; -[SCVisualTrayPlaceThumbnailsData numOrbisStories] */

undefined8 FUN_10afe2014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afe201c; end: 10afe2023; -[SCVisualTrayPlaceThumbnailsData storyCarouselThumbnails] */

undefined8 FUN_10afe201c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afe2024; end: 10afe202b; -[SCVisualTrayPlaceThumbnailsData hasImportantSnaps] */

undefined1 FUN_10afe2024(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afe202c; end: 10afe2033; -[SCVisualTrayPlaceThumbnailsData startTimeSec] */

undefined8 FUN_10afe202c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afe2034; end: 10afe206f; -[SCVisualTrayPlaceThumbnailsData .cxx_destruct] */

void FUN_10afe2034(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afe2070; end: 10afe2123; -[SCPlaceStoryPreviewData initWithPlaceId:thumbnailUrl:numOfSnaps:] */

undefined1 *
FUN_10afe2070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112703dd0;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe2124; end: 10afe2147; -[SCPlaceStoryPreviewData copyWithZone:] */

undefined8 FUN_10afe2124(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe2148; end: 10afe21bf; -[SCPlaceStoryPreviewData hash] */

undefined8 * FUN_10afe2148(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afe2250:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afe225c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10afe225c;
        }
        goto LAB_10afe2250;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afe225c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}


