/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fd6594; end: 108fd659f; +[SCSearchSectionHeaderTextView layerClass] */

void FUN_108fd6594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CATextLayer_1126c8768);
  return;
}



/* Entry: 108fd65a0; end: 108fd6643; -[SCSearchSectionHeaderTextView init] */

undefined1 * FUN_108fd65a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ffb68;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c26c2e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182d20(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fd6644; end: 108fd6647; -[SCSearchSectionHeaderTextView textLayer] */

void FUN_108fd6644(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 108fd6648; end: 108fd670b;  */

void FUN_108fd6648(void)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR_s_borderWidth_1125a58c8;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_s_cornerRadius_1125b2310;
  puStack_38 = puVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_38;
  uVar12 = 2;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puRam0000000113730590;
  puRam0000000113730590 = puVar6;
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  _objc_retain(uVar12);
  puVar5 = PTR_s_backgroundColor_1125a28f8;
  _NSStringFromSelector(PTR_s_backgroundColor_1125a28f8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010beee3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_opt_class(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  puVar7 = puVar6;
  _objc_opt_isKindOfClass(puVar6,puVar5);
  if (((ulong)puVar7 & 1) == 0) {
    puVar5 = puVar4;
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    _objc_opt_class(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
    puVar10 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar7);
    if (((ulong)puVar10 & 1) != 0) {
      puVar7 = puVar5;
      func_0x00010bf51e00(puVar5);
      func_0x00010c216920();
      func_0x00010bef6c20(puVar4);
      _objc_release(puVar7);
    }
    func_0x00010be9cee0(puVar4);
  }
  else {
    puVar7 = puVar4;
    func_0x00010c296f80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = puVar7;
    if (puVar10 != (undefined *)0x0) {
      puVar10 = puVar4;
      func_0x00010c10f4e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar10;
      func_0x00010c296f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar10);
    }
    puVar7 = puVar6;
    func_0x00010bf51e00();
    func_0x00010c1b6c80();
    puVar10 = puVar7;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar10;
    _objc_opt_respondsToSelector();
    _objc_release(puVar10);
    if (((ulong)puVar8 & 1) != 0) {
      puVar10 = puVar7;
      func_0x00010bf6b020(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf03b80();
      _objc_release(puVar10);
    }
    func_0x00010c18b5e0(puVar7);
    fVar13 = 1.0;
    func_0x00010c207c40(0x3f800000,puVar7);
    lVar3 = lRam0000000113730598;
    _objc_retain(ppuVar11);
    if (lVar3 != -1) {
      func_0x000107c27d9c(0x113730598,&PTR___NSConcreteGlobalBlock_110ad1ed8);
    }
    puVar10 = puRam0000000113730590;
    func_0x00010bf4b900();
    _objc_release(ppuVar11);
    if ((int)puVar10 == 0) {
      func_0x00010c1a1180(puVar7);
      func_0x00010c216920(puVar7);
      func_0x00010c1ea580(puVar7);
      func_0x00010be9cee0(puVar4);
      func_0x00010bef6c20(puVar4);
    }
    else {
      puVar10 = puVar4;
      func_0x00010c296f80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      fVar14 = fVar13;
      func_0x00010bfb2c80(uVar12);
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720((double)(fVar13 - fVar14),PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1180(puVar7);
      _objc_release(puVar10);
      func_0x00010c216920(puVar7);
      func_0x00010c165bc0(puVar7);
      func_0x00010c1ea580(puVar7);
      func_0x00010be9cee0(puVar4);
      _objc_retain(ppuVar11);
      _objc_retain(puVar4);
      _objc_retain(ppuVar11);
      puVar10 = puVar4;
      func_0x00010bf03c40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar1 = ppuVar11;
      while (puVar10 != (undefined *)0x0) {
        ppuVar9 = ppuVar11;
        func_0x00010c25cde0(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        puVar10 = puVar4;
        func_0x00010bf03c40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        ppuVar1 = ppuVar9;
      }
      _objc_release(puVar4);
      _objc_release(ppuVar11);
      func_0x00010bef6c20(puVar4);
      _objc_release(ppuVar1);
    }
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return;
}



/* Entry: 108fd670c; end: 108fd6b4f;  */

void FUN_108fd670c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_s_backgroundColor_1125a28f8;
  _NSStringFromSelector(PTR_s_backgroundColor_1125a28f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beee3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_opt_class(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  if ((uVar4 & 1) == 0) {
    uVar4 = param_1;
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    _objc_opt_class(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
    uVar9 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    if ((uVar9 & 1) != 0) {
      uVar9 = uVar4;
      func_0x00010bf51e00(uVar4);
      func_0x00010c216920();
      func_0x00010bef6c20(param_1);
      _objc_release(uVar9);
    }
    func_0x00010be9cee0(param_1);
  }
  else {
    uVar9 = param_1;
    func_0x00010c296f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar4 = uVar9;
    if (uVar5 != 0) {
      uVar5 = param_1;
      func_0x00010c10f4e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c296f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar5);
    }
    uVar9 = uVar3;
    func_0x00010bf51e00();
    func_0x00010c1b6c80();
    uVar5 = uVar9;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    _objc_opt_respondsToSelector();
    _objc_release(uVar5);
    if ((uVar6 & 1) != 0) {
      uVar5 = uVar9;
      func_0x00010bf6b020(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf03b80();
      _objc_release(uVar5);
    }
    func_0x00010c18b5e0(uVar9);
    fVar10 = 1.0;
    func_0x00010c207c40(0x3f800000,uVar9);
    lVar1 = lRam0000000113730598;
    _objc_retain(param_3);
    if (lVar1 != -1) {
      func_0x000107c27d9c(0x113730598,&PTR___NSConcreteGlobalBlock_110ad1ed8);
    }
    uVar7 = uRam0000000113730590;
    func_0x00010bf4b900();
    _objc_release(param_3);
    if ((int)uVar7 == 0) {
      func_0x00010c1a1180(uVar9);
      func_0x00010c216920(uVar9);
      func_0x00010c1ea580(uVar9);
      func_0x00010be9cee0(param_1);
      func_0x00010bef6c20(param_1);
    }
    else {
      uVar5 = param_1;
      func_0x00010c296f80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      fVar11 = fVar10;
      func_0x00010bfb2c80(param_4);
      _objc_release(uVar5);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720((double)(fVar10 - fVar11),PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1180(uVar9);
      _objc_release(puVar2);
      func_0x00010c216920(uVar9);
      func_0x00010c165bc0(uVar9);
      func_0x00010c1ea580(uVar9);
      func_0x00010be9cee0(param_1);
      _objc_retain(param_3);
      _objc_retain(param_1);
      _objc_retain(param_3);
      uVar5 = param_1;
      func_0x00010bf03c40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar7 = param_3;
      while (uVar5 != 0) {
        uVar8 = param_3;
        func_0x00010c25cde0(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        uVar5 = param_1;
        func_0x00010bf03c40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar7 = uVar8;
      }
      _objc_release(param_1);
      _objc_release(param_3);
      func_0x00010bef6c20(param_1);
      _objc_release(uVar7);
    }
    _objc_release(uVar9);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fd6b50; end: 108fd6bdb;  */

/* WARNING: Possible PIC construction at 0x000108fd6b9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108fd6ba0) */

void FUN_108fd6b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf7fa00(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c18e5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_setDisableActions__112641398,1);
  return;
}



/* Entry: 108fd6bdc; end: 108fd6be7; +[SCCollectionViewSectionKitGradientView layerClass] */

void FUN_108fd6bdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 108fd6be8; end: 108fd6beb; -[SCCollectionViewSectionKitGradientView gradientLayer] */

void FUN_108fd6be8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 108fd6bec; end: 108fd6c6b; -[SCCollectionViewSectionKitGradientView setColors:] */

void FUN_108fd6bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bfcd9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_colors_1125adf58;
  _NSStringFromSelector(PTR_s_colors_1125adf58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c156200(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fd6c6c; end: 108fd6c7b; -[SCCollectionViewSectionKitGradientView colors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fd6c6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f328);
}



/* Entry: 108fd6c7c; end: 108fd6c8f; -[SCCollectionViewSectionKitGradientView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd6c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f328,0);
  return;
}



/* Entry: 108fd6c90; end: 108fd6c93; -[SCCollectionViewSectionKitShapeView shapeLayer] */

void FUN_108fd6c90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 108fd6c94; end: 108fd6c9f; +[SCCollectionViewSectionKitShapeView layerClass] */

void FUN_108fd6c94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 108fd6ca0; end: 108fd6d03;  */

void FUN_108fd6ca0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x000107c318f8(param_1,PTR_DAT_1126a5ba8);
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bf864e0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fd6d04; end: 108fd6d1b;  */

void FUN_108fd6d04(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfed030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSIndexPath_1126b0990,PTR_s_indexPathForItem_inSection__1125d8dd0,
             param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108fd6d1c; end: 108fd70df;  */

/* WARNING: Possible PIC construction at 0x000108fd6d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108fd6d7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108fd6d64) */
/* WARNING: Removing unreachable block (ram,0x000108fd6ed4) */
/* WARNING: Removing unreachable block (ram,0x000108fd6d78) */
/* WARNING: Removing unreachable block (ram,0x000108fd6d80) */
/* WARNING: Removing unreachable block (ram,0x000108fd6db8) */
/* WARNING: Removing unreachable block (ram,0x000108fd6dc4) */
/* WARNING: Removing unreachable block (ram,0x000108fd6dc8) */
/* WARNING: Removing unreachable block (ram,0x000108fd6dd8) */
/* WARNING: Removing unreachable block (ram,0x000108fd6de0) */
/* WARNING: Removing unreachable block (ram,0x000108fd6e14) */
/* WARNING: Removing unreachable block (ram,0x000108fd6e20) */
/* WARNING: Removing unreachable block (ram,0x000108fd6e24) */
/* WARNING: Removing unreachable block (ram,0x000108fd6e34) */
/* WARNING: Removing unreachable block (ram,0x000108fd6e3c) */
/* WARNING: Removing unreachable block (ram,0x000108fd6e7c) */
/* WARNING: Removing unreachable block (ram,0x000108fd6e90) */
/* WARNING: Removing unreachable block (ram,0x000108fd6eac) */
/* WARNING: Removing unreachable block (ram,0x000108fd6e50) */
/* WARNING: Removing unreachable block (ram,0x000108fd6e5c) */
/* WARNING: Removing unreachable block (ram,0x000108fd6e78) */
/* WARNING: Removing unreachable block (ram,0x000108fd6eb4) */
/* WARNING: Removing unreachable block (ram,0x000108fd6ec0) */
/* WARNING: Removing unreachable block (ram,0x000108fd6ed8) */
/* WARNING: Removing unreachable block (ram,0x000108fd6f24) */
/* WARNING: Removing unreachable block (ram,0x000108fd6f00) */

void FUN_108fd6d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_6);
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
  func_0x00010c2a4bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c11bb40(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb57a0(puVar1);
  _objc_release(puVar2);
  lVar3 = param_5;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar9 = 0;
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar4);
      }
      lVar7 = *(long *)(lVar8 * 8);
      func_0x00010c08fa60();
      if (lVar7 != 0) {
        func_0x00010befa120(puVar2);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar5 = param_5;
  func_0x000107c318f8(param_5,PTR_DAT_1126a5b78);
  lVar3 = param_5;
  if ((int)lVar5 == 0) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  func_0x00010c29f560(uVar9,param_2,param_3,param_4,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fd70e0; end: 108fd717b;  */

void FUN_108fd70e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_5;
  func_0x000107c318f8(param_5,PTR_DAT_1126a5b78);
  uVar1 = param_5;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c29f560(param_1,param_2,param_3,param_4,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fd717c; end: 108fd72b3;  */

undefined8
FUN_108fd717c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = 0;
  uVar6 = param_6;
  uVar10 = param_2;
  uVar12 = param_3;
  uVar14 = param_4;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_5);
      }
      uVar6 = param_6;
      uVar9 = param_1;
      uVar10 = param_2;
      uVar12 = param_3;
      uVar14 = param_4;
      FUN_108fd70e0(param_1,param_2,param_3,param_4,*(undefined8 *)(lVar8 * 8),param_6,param_7);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar9;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  puVar2 = PTR_DAT_1126a5b78;
  _objc_retain(param_5);
  uVar4 = uVar6;
  func_0x000107c318f8(uVar6,puVar2);
  uVar5 = uVar6;
  if ((int)uVar4 == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  func_0x00010c29f580(uVar5);
  _objc_release(uVar5);
  uVar5 = uVar6;
  func_0x00010c262ca0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(uVar9,uVar10,uVar12,uVar14);
  uVar4 = uVar9;
  uVar11 = uVar10;
  uVar13 = uVar12;
  uVar15 = uVar14;
  _objc_release(uVar5);
  func_0x00010bf20c00(param_5);
  _objc_release(param_5);
  _CGRectIntersection(uVar9,uVar10,uVar12,uVar14,uVar4,uVar11,uVar13,uVar15);
  _objc_release(uVar6);
  return uVar9;
}



/* Entry: 108fd72b4; end: 108fd73ff;  */

undefined8
FUN_108fd72b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_6);
  puVar1 = PTR_DAT_1126a5b78;
  _objc_retain(param_5);
  uVar2 = param_6;
  func_0x000107c318f8(param_6,puVar1);
  uVar3 = param_6;
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  func_0x00010c29f580(uVar3);
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x00010c262ca0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(param_1,param_2,param_3,param_4);
  uVar2 = param_1;
  uVar4 = param_2;
  uVar5 = param_3;
  uVar6 = param_4;
  _objc_release(uVar3);
  func_0x00010bf20c00(param_5);
  _objc_release(param_5);
  _CGRectIntersection(param_1,param_2,param_3,param_4,uVar2,uVar4,uVar5,uVar6);
  _objc_release(param_6);
  return param_1;
}



/* Entry: 108fd7400; end: 108fd744b; -[SCScrollToEndContentSizeDetectionPolicy isWithinEndArea:scrollView:direction:] */

bool FUN_108fd7400(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010bf4d5e0(param_5);
  if (param_6 != 0) {
    param_2 = dVar1;
  }
  return param_1 < param_2 * 0.3;
}



/* Entry: 108fd744c; end: 108fd74a3; -[SCScrollToEndDetector initWithDirection:] */

undefined8 FUN_108fd744c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c22d8;
  _objc_opt_new(PTR_PTR_1126c22d8);
  func_0x00010c00c880(param_1,param_2,param_3,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 108fd74a4; end: 108fd7527; -[SCScrollToEndDetector initWithDirection:detectionPolicy:] */

undefined1 *
FUN_108fd74a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ffb70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108fd7528; end: 108fd75b3; -[SCScrollToEndDetector updateOnScroll:] */

void FUN_108fd7528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be437c0(param_1,param_2,param_3);
  uVar2 = param_1;
  func_0x00010be45a00(param_1,param_2,param_3);
  if (((int)uVar2 != 0) && ((int)uVar1 != 0)) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1523c0();
    _objc_release(uVar1);
  }
  func_0x00010beda320(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fd75b4; end: 108fd762b; -[SCScrollToEndDetector updateOnLayoutChange:] */

void FUN_108fd75b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be45a00(param_1,param_2,param_3);
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1523c0();
    _objc_release(uVar1);
  }
  func_0x00010beda320(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fd762c; end: 108fd76c7; -[SCScrollToEndDetector _distanceFromContentEndToScrollViewEnd:] */

double FUN_108fd762c(double param_1,double param_2,double param_3,double param_4,long param_5,
                    undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  
  _objc_retain(param_7);
  if (*(long *)(param_5 + 0x10) == 1) {
    func_0x00010bf4d5e0(param_7);
    dVar1 = param_1;
    func_0x00010bf4cdc0(param_7);
    func_0x00010bfb68e0(param_7);
    param_3 = (param_1 - dVar1) - param_3;
  }
  else {
    param_3 = 0.0;
    if (*(long *)(param_5 + 0x10) == 0) {
      func_0x00010bf4d5e0(param_7);
      dVar1 = param_2;
      func_0x00010bf4cdc0(param_7);
      func_0x00010bfb68e0(param_7);
      param_3 = (param_2 - dVar1) - param_4;
    }
  }
  _objc_release(param_7);
  return param_3;
}



/* Entry: 108fd76c8; end: 108fd7743; -[SCScrollToEndDetector _isScrollToEnd:] */

bool FUN_108fd76c8(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  double dVar2;
  
  _objc_retain(param_5);
  if (*(long *)(param_3 + 0x10) == 1) {
    dVar2 = *(double *)(param_3 + 8);
    func_0x00010bf4cdc0(param_5);
    bVar1 = false;
    if (!NAN(dVar2) && !NAN(param_1)) {
      bVar1 = dVar2 < param_1;
    }
  }
  else if (*(long *)(param_3 + 0x10) == 0) {
    dVar2 = *(double *)(param_3 + 8);
    func_0x00010bf4cdc0(param_5);
    bVar1 = dVar2 < param_2;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_5);
  return bVar1;
}



/* Entry: 108fd7744; end: 108fd779b; -[SCScrollToEndDetector _updateLastContentOffset:] */

void FUN_108fd7744(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  if (*(long *)(param_3 + 0x10) == 1) {
    func_0x00010bf4cdc0(param_5);
  }
  else {
    if (*(long *)(param_3 + 0x10) != 0) goto LAB_108fd778c;
    param_1 = param_2;
    func_0x00010bf4cdc0(param_5);
  }
  *(undefined8 *)(param_3 + 8) = param_1;
LAB_108fd778c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fd779c; end: 108fd77eb; -[SCScrollToEndDetector _isWithinEndArea:] */

undefined8 FUN_108fd779c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be05360(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c083cc0(uVar1,param_2,param_3,*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108fd77ec; end: 108fd7803; -[SCScrollToEndDetector delegate] */

void FUN_108fd77ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fd7804; end: 108fd780f; -[SCScrollToEndDetector setDelegate:] */

void FUN_108fd7804(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 108fd7810; end: 108fd783b; -[SCScrollToEndDetector .cxx_destruct] */

void FUN_108fd7810(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108fd783c; end: 108fd78b7; -[SCCollectionViewHorizontalStaggeredLayoutCalculator layoutAttributesForSectionOriginPoint:sectionWidth:minimumInteritemSpacing:numberOfItems:] */

void FUN_108fd783c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  param_5 = param_5 + 8;
  _objc_loadWeakRetained(param_5);
  FUN_108fd7e9c(param_1,param_2,param_3,param_4,param_7,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_7);
  return;
}



/* Entry: 108fd78b8; end: 108fd78cf; -[SCCollectionViewHorizontalStaggeredLayoutCalculator dataSource] */

void FUN_108fd78b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fd78d0; end: 108fd78db; -[SCCollectionViewHorizontalStaggeredLayoutCalculator setDataSource:] */

void FUN_108fd78d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 108fd78dc; end: 108fd78e3; -[SCCollectionViewHorizontalStaggeredLayoutCalculator .cxx_destruct] */

void FUN_108fd78dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108fd78e4; end: 108fd792b; -[SCCollectionViewStaggeredSectionLayoutCalculator initWithSectionColumns:] */

void FUN_108fd78e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffb78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 108fd792c; end: 108fd79bf; -[SCCollectionViewStaggeredSectionLayoutCalculator layoutAttributesForSectionOriginPoint:sectionWidth:minimumInteritemSpacing:numberOfItems:] */

void FUN_108fd792c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_5 + 8);
  uVar2 = *(undefined8 *)(param_5 + 0x18);
  param_5 = param_5 + 0x10;
  _objc_loadWeakRetained(param_5);
  FUN_108fd7a48(param_1,param_2,param_3,param_4,uVar1,param_7,uVar2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fd79c0; end: 108fd79d7; -[SCCollectionViewStaggeredSectionLayoutCalculator dataSource] */

void FUN_108fd79c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fd79d8; end: 108fd79e3; -[SCCollectionViewStaggeredSectionLayoutCalculator setDataSource:] */

void FUN_108fd79d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108fd79e4; end: 108fd79eb; -[SCCollectionViewStaggeredSectionLayoutCalculator cornerRadii] */

undefined8 FUN_108fd79e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fd79ec; end: 108fd7a1b; -[SCCollectionViewStaggeredSectionLayoutCalculator setCornerRadii:] */

void FUN_108fd79ec(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108fd7a1c; end: 108fd7a47; -[SCCollectionViewStaggeredSectionLayoutCalculator .cxx_destruct] */

void FUN_108fd7a1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 108fd7a48; end: 108fd7e9b;  */

void FUN_108fd7a48(double param_1,undefined8 param_2,double param_3,double param_4,ulong param_5,
                  long param_6,long param_7,ulong param_8)

{
  float fVar1;
  double *pdVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  
  dStack_c0 = param_3;
  lStack_a8 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_b0 = puVar3;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  for (uVar8 = param_5; PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar3, uVar8 != 0; uVar8 = uVar8 - 1
      ) {
    func_0x00010c0df720(param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010befa120(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  }
  if (lStack_a8 != 0) {
    lVar11 = 0;
    dVar19 = dStack_c0 - param_4;
    dVar20 = dVar19 / (double)param_5 - param_4;
    dVar17 = dVar20 * 1.7200000286102295;
    dVar14 = dVar17 * 0.9;
    dStack_d0 = dVar14;
    dStack_c8 = dVar17;
    puStack_b8 = PTR_s_sizeForItemAtIndex_width__11266ceb8;
    do {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126dcd88;
      func_0x00010c08c8e0(PTR_PTR_1126dcd88);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar5);
      puVar9 = puVar5;
      func_0x00010bf529e0();
      fVar13 = SUB84(dVar14,0);
      if (puVar9 == (undefined *)0x0) {
        puVar9 = (undefined *)0x7fffffffffffffff;
      }
      else {
        puVar10 = (undefined *)0x0;
        puVar9 = (undefined *)0x7fffffffffffffff;
        fVar1 = INFINITY;
        do {
          puVar7 = puVar5;
          func_0x00010c0dfd40(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          fVar12 = SUB84(dVar14,0);
          _objc_release(puVar7);
          puVar7 = puVar10;
          if (fVar1 <= fVar12) {
            fVar12 = fVar1;
            puVar7 = puVar9;
          }
          puVar9 = puVar7;
          puVar10 = puVar10 + 1;
          puVar7 = puVar5;
          func_0x00010bf529e0();
          fVar13 = SUB84(dVar14,0);
          fVar1 = fVar12;
        } while (puVar10 != puVar7);
      }
      _objc_release(puVar5);
      puVar10 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar10;
      func_0x00010bf529e0();
      _objc_release(puVar10);
      puVar10 = puVar5;
      func_0x00010c0dfd40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar14 = 0.0;
      if (puVar7 != (undefined *)0x0) {
        dVar14 = param_4;
      }
      _objc_release(puVar10);
      uVar8 = param_8;
      _objc_opt_respondsToSelector(param_8,puStack_b8);
      if ((uVar8 & 1) == 0) {
        pdVar2 = &dStack_d0;
        if ((undefined *)0x3 < puVar7 || puVar9 != (undefined *)0x0) {
          pdVar2 = &dStack_c8;
        }
        dVar18 = *pdVar2;
        dVar15 = dVar20;
      }
      else {
        dVar15 = dStack_c0;
        func_0x00010c23d240(dStack_c0,param_8);
        dVar18 = dVar17;
      }
      dVar14 = dVar14 + (double)fVar13;
      dVar17 = dVar14;
      func_0x00010b816528(param_1 + (dVar19 * (double)puVar9) / (double)param_5,dVar14,dVar15,dVar18
                         );
      func_0x00010c19f0e0(puVar6);
      if (param_7 == 0) {
        puVar10 = PTR_PTR_1126dcd90;
        if (puVar7 == (undefined *)0x0) {
          if (puVar9 != (undefined *)0x1) {
            if (puVar9 != (undefined *)0x0) goto LAB_108fd7d10;
            _objc_alloc(PTR_PTR_1126dcd90);
            uVar16 = 0x4020000000000000;
            goto LAB_108fd7d20;
          }
          _objc_alloc(PTR_PTR_1126dcd90);
          uVar16 = 0x4008000000000000;
          dVar17 = 8.0;
        }
        else {
LAB_108fd7d10:
          _objc_alloc(PTR_PTR_1126dcd90);
          uVar16 = 0x4008000000000000;
LAB_108fd7d20:
          dVar17 = 3.0;
        }
        func_0x00010c054260(uVar16,dVar17,0x4008000000000000,0x4008000000000000);
        func_0x00010c1842a0(puVar6);
        _objc_release(puVar10);
      }
      else {
        func_0x00010c1842a0(puVar6);
      }
      func_0x00010befa120(puStack_b0);
      dVar14 = dVar14 + dVar18;
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0(puVar5);
      _objc_release(puVar9);
      puVar9 = puVar4;
      func_0x00010c0dfd40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(puVar3);
      lVar11 = lVar11 + 1;
    } while (lVar11 != lStack_a8);
  }
  puVar3 = puStack_b0;
  puVar6 = puStack_b0;
  func_0x00010bf51e00(puStack_b0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108fd7e9c; end: 108fd804b;  */

void FUN_108fd7e9c(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar8 = param_2;
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (param_5 != 0) {
    lVar4 = 0;
    dVar10 = param_1;
    dVar7 = param_2;
    do {
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126dcd88;
      func_0x00010c08c8e0(PTR_PTR_1126dcd88);
      _objc_retainAutoreleasedReturnValue();
      dVar5 = param_3;
      func_0x00010c23d240(param_6);
      dVar11 = param_4 + param_2;
      dVar6 = param_1;
      if (dVar10 + dVar5 <= param_3) {
        dVar11 = dVar7;
        dVar6 = dVar10;
      }
      dVar9 = dVar11;
      func_0x00010b816528(dVar6,dVar11,dVar5,dVar8);
      dVar10 = dVar6;
      _CGRectGetMaxX();
      dVar10 = param_4 + dVar10;
      dVar7 = dVar6;
      _CGRectGetMaxY(dVar6,dVar9,dVar5,dVar8);
      if (dVar7 <= param_2) {
        dVar7 = param_2;
      }
      func_0x00010c19f0e0(dVar6,dVar9,dVar5,dVar8,puVar3);
      func_0x00010befa120(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar4 = lVar4 + 1;
      dVar8 = dVar9;
      param_2 = dVar7;
      dVar7 = dVar11;
    } while (param_5 != lVar4);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fd804c; end: 108fd8057; +[SCSectionBasedCollectionViewFlowLayout layoutAttributesClass] */

void FUN_108fd804c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126b56f0);
  return;
}



/* Entry: 108fd8058; end: 108fd851f; -[SCSectionBasedCollectionViewFlowLayout prepareLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108fd8058(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  long lStack_1c0;
  undefined *puStack_1b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1b8 = PTR_PTR_1126ffb80;
  lStack_1c0 = param_5;
  _objc_msgSendSuper2(&lStack_1c0,PTR_s_prepareLayout_112620088);
  pdVar1 = (double *)(param_5 + _DAT_11277f350);
  lVar2 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  pdVar1[2] = param_3;
  pdVar1[3] = param_4;
  _objc_release(lVar2);
  if (*(char *)(param_5 + _DAT_11277f354) == '\x01') {
    *(undefined1 *)(param_5 + _DAT_11277f354) = 0;
    func_0x00010be93140(param_5);
    func_0x00010be12100(param_5);
    func_0x00010bdd8700(param_5);
  }
  else {
    lVar2 = param_5;
    func_0x00010bf40120(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar11 = param_1;
    dVar16 = param_2;
    dVar17 = param_4;
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010bf40120(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4c7c0();
    _objc_release(lVar2);
    dVar18 = param_1;
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    dVar12 = param_1;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    dVar13 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    lVar6 = *(long *)(param_5 + _DAT_11277f358);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar3 != 0) {
      dVar14 = 50.0 - (dVar11 + param_1);
      dVar15 = 0.0;
      if (0.0 <= dVar14) {
        dVar15 = dVar14;
      }
      do {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar6);
          }
          lVar10 = (long)_DAT_11277f35c;
          uVar4 = *(undefined8 *)(param_5 + lVar10);
          func_0x00010c0e00e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          param_2 = dVar12;
          func_0x00010bed8e60(dVar18,dVar12,dVar13,(dVar11 + 50.0) - dVar15,param_5);
          _objc_release(uVar4);
          uVar4 = *(undefined8 *)(param_5 + lVar10);
          func_0x00010c0e00e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beda7a0(param_5);
          _objc_release(uVar4);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar6);
    dVar18 = *(double *)(param_5 + _DAT_11277f360);
    param_1 = 0.0;
    lVar6 = *(long *)(param_5 + _DAT_11277f364);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar3 != 0) {
      param_1 = dVar11 + dVar18;
      param_2 = dVar16 + dVar17;
      do {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar6);
          }
          uVar7 = *(undefined8 *)(lVar8 * 8);
          lVar10 = (long)_DAT_11277f368;
          uVar5 = *(undefined8 *)(param_5 + lVar10);
          func_0x00010c0e00e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(param_5 + _DAT_11277f36c);
          func_0x00010c1554e0(uVar7);
          func_0x00010c0dfd40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc1080();
          func_0x00010bed9300(param_5);
          _objc_release(uVar9);
          _objc_release(uVar4);
          _objc_release(uVar5);
          uVar5 = *(undefined8 *)(param_5 + lVar10);
          func_0x00010c0e00e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beda7a0(param_5);
          _objc_release(uVar4);
          _objc_release(uVar5);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar6);
  }
  func_0x00010be92fe0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = param_1;
    return auVar19;
  }
  ___stack_chk_fail();
  return *(undefined1 (*) [16])(param_5 + _DAT_11277f370);
}



/* Entry: 108fd8520; end: 108fd8533; -[SCSectionBasedCollectionViewFlowLayout collectionViewContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108fd8520(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f370);
}



/* Entry: 108fd8534; end: 108fd870b; -[SCSectionBasedCollectionViewFlowLayout layoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd8534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  ppuVar5 = &puStack_180;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_5 + _DAT_11277f35c);
  func_0x00010bf00d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(uVar2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar3 = *(long *)(param_5 + _DAT_11277f368);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        uVar2 = *(undefined8 *)(lStack_138 + lVar7 * 8);
        func_0x00010bf00d20(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1);
        _objc_release(uVar2);
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc0000000;
  pcStack_170 = FUN_108fd870c;
  puStack_168 = &UNK_110ad1f18;
  uStack_160 = param_1;
  uStack_158 = param_2;
  uStack_150 = param_3;
  uStack_148 = param_4;
  func_0x000107c31910(puVar1,&puStack_180);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb68e0(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectIntersectsRect_1103475c8)();
  return;
}



/* Entry: 108fd870c; end: 108fd8737;  */

void FUN_108fd870c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfb68e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectIntersectsRect_1103475c8)();
  return;
}



/* Entry: 108fd8738; end: 108fd8747; -[SCSectionBasedCollectionViewFlowLayout layoutAttributesForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd8738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f35c),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 108fd8748; end: 108fd87c3; -[SCSectionBasedCollectionViewFlowLayout layoutAttributesForSupplementaryViewOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd8748(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f368);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fd87c4; end: 108fd89a3; -[SCSectionBasedCollectionViewFlowLayout invalidateLayoutWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd87c4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong unaff_x22;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ffb80;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_invalidateLayoutWithContext__1125f8230,param_3);
  lVar6 = (long)_DAT_11277f354;
  if ((*(byte *)(param_1 + lVar6) & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c06a2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    if (uVar3 == 0) {
      unaff_x22 = param_3;
      func_0x00010c06a320();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = unaff_x22;
      func_0x00010bf529e0();
      if (uVar4 != 0) goto LAB_108fd8864;
      uVar3 = param_3;
      func_0x00010c06a2a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      if ((uVar4 == 0) || (uVar4 = param_3, func_0x00010c069ec0(), (uVar4 & 1) != 0)) {
        uVar1 = 1;
      }
      else {
        uVar4 = param_3;
        func_0x00010c069e40();
        uVar1 = (undefined1)uVar4;
      }
      *(undefined1 *)(param_1 + lVar6) = uVar1;
      _objc_release(uVar3);
LAB_108fd88d0:
      _objc_release(unaff_x22);
    }
    else {
LAB_108fd8864:
      uVar4 = param_3;
      func_0x00010c069ec0();
      if ((uVar4 & 1) == 0) {
        uVar4 = param_3;
        func_0x00010c069e40();
        uVar1 = (undefined1)uVar4;
      }
      else {
        uVar1 = 1;
      }
      *(undefined1 *)(param_1 + lVar6) = uVar1;
      if (uVar3 == 0) goto LAB_108fd88d0;
    }
    _objc_release(uVar2);
    if (*(char *)(param_1 + lVar6) != '\x01') {
      uVar5 = *(undefined8 *)(param_1 + _DAT_11277f358);
      uVar2 = param_3;
      func_0x00010c06a2c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(uVar5);
      _objc_release(uVar2);
      uVar5 = *(undefined8 *)(param_1 + _DAT_11277f364);
      uVar2 = param_3;
      func_0x00010c06a320(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_108fd8984;
    }
  }
  else {
    *(undefined1 *)(param_1 + lVar6) = 1;
  }
  func_0x00010be92fe0(param_1);
LAB_108fd8984:
  _objc_release(param_3);
  return;
}



/* Entry: 108fd89a4; end: 108fd8dc7; -[SCSectionBasedCollectionViewFlowLayout invalidationContextForBoundsChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_108fd89a4(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  long lStack_1c0;
  undefined *puStack_1b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1b8 = PTR_PTR_1126ffb80;
  plVar3 = &lStack_1c0;
  dVar14 = param_1;
  dVar24 = param_2;
  dVar25 = param_3;
  dVar26 = param_4;
  lStack_1c0 = param_5;
  _objc_msgSendSuper2(plVar3,PTR_s_invalidationContextForBoundsChan_112531598);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar18 = dVar24;
  dVar16 = dVar25;
  dVar19 = dVar26;
  _objc_release(lVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar15 = 0.0;
  lVar13 = (long)_DAT_11277f35c;
  lVar6 = *(long *)(param_5 + lVar13);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      _objc_release(lVar6);
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lVar4 = param_5;
      func_0x00010bf40120(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4c7c0();
      _objc_release(lVar4);
      lVar6 = *(long *)(param_5 + _DAT_11277f368);
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      if (lVar9 != 0) {
        dVar16 = dVar15 + dVar16;
        param_4 = param_4 - dVar16;
        dVar19 = dVar18 + dVar19;
        param_3 = param_3 - dVar19;
        param_2 = param_2 + dVar15;
        dVar26 = dVar26 - dVar16;
        dVar25 = dVar25 - dVar19;
        dVar24 = dVar24 + dVar15;
        dVar21 = param_1 + dVar18;
        do {
          lVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar4) {
              _objc_enumerationMutation(lVar6);
            }
            uVar12 = *(ulong *)(param_5 + _DAT_11277f36c);
            func_0x00010c1554e0(*(undefined8 *)(lVar13 * 8));
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc1080();
            _objc_release();
            dVar17 = dVar16;
            dVar20 = dVar19;
            dVar22 = dVar21;
            dVar23 = dVar15;
            _CGRectIntersectsRect(dVar16,dVar19,dVar21,dVar15,dVar14 + dVar18,dVar24,dVar25,dVar26);
            iVar1 = (int)uVar12;
            if (((uVar12 & 1) != 0) ||
               (_CGRectIntersectsRect
                          (dVar16,dVar19,dVar21,dVar15,param_1 + dVar18,param_2,param_3,param_4),
               dVar17 = dVar16, dVar20 = dVar19, dVar22 = dVar21, dVar23 = dVar15, iVar1 != 0)) {
              dVar15 = dVar23;
              dVar21 = dVar22;
              dVar19 = dVar20;
              dVar16 = dVar17;
              func_0x00010befa120(puVar8);
            }
            lVar13 = lVar13 + 1;
          } while (lVar9 != lVar13);
          lVar9 = lVar6;
          func_0x00010bf52a60();
        } while (lVar9 != 0);
      }
      _objc_release(lVar6);
      puVar10 = puVar5;
      func_0x00010bf51e00(puVar5);
      func_0x00010c069fc0(plVar3);
      _objc_release(puVar10);
      puVar10 = puVar8;
      func_0x00010bf529e0();
      if (puVar10 != (undefined *)0x0) {
        puVar10 = puVar8;
        func_0x00010bf51e00(puVar8);
        func_0x00010c06a1c0(plVar3);
        _objc_release(puVar10);
      }
      _objc_release(puVar8);
      _objc_release();
      uVar2 = (uint)puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
        return plVar3;
      }
      ___stack_chk_fail();
      _CGRectEqualToRect();
      return (long *)(ulong)(uVar2 ^ 1);
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(ulong *)(param_5 + lVar13);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar7;
      func_0x00010bfb68e0();
      _CGRectIntersectsRect();
      if ((uVar12 & 1) == 0) {
        uVar12 = uVar7;
        func_0x00010bfb68e0();
        iVar1 = (int)uVar12;
        _CGRectIntersectsRect();
        if (iVar1 != 0) goto LAB_108fd8b20;
      }
      else {
LAB_108fd8b20:
        func_0x00010befa120(puVar5);
      }
      _objc_release(uVar7);
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = lVar6;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 108fd8dc8; end: 108fd8df3; -[SCSectionBasedCollectionViewFlowLayout shouldInvalidateLayoutForBoundsChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108fd8dc8(uint param_1)

{
  _CGRectEqualToRect();
  return param_1 ^ 1;
}



/* Entry: 108fd8df4; end: 108fd8e77; -[SCSectionBasedCollectionViewFlowLayout _resetLayoutAttributesIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd8df4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f35c);
  *(undefined **)(param_1 + _DAT_11277f35c) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f368);
  *(undefined **)(param_1 + _DAT_11277f368) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f36c);
  *(undefined **)(param_1 + _DAT_11277f36c) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108fd8e78; end: 108fd8edb; -[SCSectionBasedCollectionViewFlowLayout _resetInvalidationIndexPaths] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd8e78(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f358);
  *(undefined **)(param_1 + _DAT_11277f358) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f364);
  *(undefined **)(param_1 + _DAT_11277f364) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108fd8edc; end: 108fd944b; -[SCSectionBasedCollectionViewFlowLayout _fetchLayoutInformationFromDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd8edc(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  uVar6 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar7;
  func_0x000107c318f8();
  uVar1 = uVar7;
  if ((int)uVar20 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  uVar7 = uVar6;
  func_0x00010c0df2e0();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR_s_collectionView_layout_referenceS_1125ada80;
  puVar4 = PTR_s_collectionView_layout_referenceS_1125ada78;
  puVar3 = PTR_s_collectionView_layout_minimumLin_1125ada60;
  puVar2 = PTR_s_collectionView_layout_minimumInt_1125ada58;
  puVar19 = PTR_s_collectionView_layout_insetForSe_1125ada48;
  if (uVar7 != 0) {
    uVar20 = 0;
    uVar24 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar25 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar26 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar27 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    uVar28 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar29 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    do {
      uVar14 = uVar6;
      func_0x00010c0deec0();
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar8);
      _objc_release(puVar15);
      uVar21 = uVar1;
      _objc_opt_respondsToSelector(uVar1,puVar19);
      if ((uVar21 & 1) != 0) {
        func_0x00010bf40280(uVar24,uVar25,uVar26,uVar27,uVar1);
      }
      puVar15 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297340(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9);
      _objc_release(puVar15);
      puVar15 = PTR_s_collectionView_layout_sizeForIte_1125adac8;
      if (uVar14 != 0) {
        uVar21 = 0;
        do {
          puVar16 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar1;
          _objc_opt_respondsToSelector(uVar1,puVar15);
          if ((uVar17 & 1) != 0) {
            func_0x00010bf40480(uVar28,uVar29,uVar1);
          }
          puVar18 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          func_0x00010c2971c0(PTR__OBJC_CLASS___NSValue_1126afdf8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar10);
          _objc_release(puVar18);
          _objc_release(puVar16);
          uVar21 = uVar21 + 1;
        } while (uVar14 != uVar21);
      }
      puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      uVar14 = uVar1;
      _objc_opt_respondsToSelector(uVar1,puVar5);
      puVar15 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      if ((uVar14 & 1) != 0) {
        func_0x00010bf40360(uVar1);
        func_0x00010c2971c0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar16);
        _objc_release(puVar15);
      }
      uVar14 = uVar1;
      _objc_opt_respondsToSelector(uVar1,puVar4);
      puVar15 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      if ((uVar14 & 1) != 0) {
        func_0x00010bf40340(uVar1);
        func_0x00010c2971c0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar16);
        _objc_release(puVar15);
      }
      puVar15 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010bf51e00(puVar16);
      func_0x00010c1d0640(puVar11);
      _objc_release(puVar18);
      uVar14 = uVar1;
      _objc_opt_respondsToSelector(uVar1,puVar2);
      uVar22 = 0;
      if ((uVar14 & 1) != 0) {
        func_0x00010bf402c0(0,uVar1);
      }
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar12);
      _objc_release(puVar18);
      uVar14 = uVar1;
      _objc_opt_respondsToSelector(uVar1,puVar3);
      uVar23 = 0;
      if ((uVar14 & 1) != 0) {
        func_0x00010bf402e0(uVar1);
        uVar23 = uVar22;
      }
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(uVar23,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar13);
      _objc_release(puVar18);
      _objc_release(puVar15);
      _objc_release(puVar16);
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar7);
  }
  puVar19 = puVar8;
  func_0x00010bf51e00();
  uVar24 = *(undefined8 *)(param_1 + (long)_DAT_11277f374);
  *(undefined **)(param_1 + (long)_DAT_11277f374) = puVar19;
  _objc_release(uVar24);
  puVar19 = puVar9;
  func_0x00010bf51e00();
  uVar24 = *(undefined8 *)(param_1 + (long)_DAT_11277f378);
  *(undefined **)(param_1 + (long)_DAT_11277f378) = puVar19;
  _objc_release(uVar24);
  puVar19 = puVar10;
  func_0x00010bf51e00();
  uVar24 = *(undefined8 *)(param_1 + (long)_DAT_11277f37c);
  *(undefined **)(param_1 + (long)_DAT_11277f37c) = puVar19;
  _objc_release(uVar24);
  puVar19 = puVar11;
  func_0x00010bf51e00();
  uVar24 = *(undefined8 *)(param_1 + (long)_DAT_11277f380);
  *(undefined **)(param_1 + (long)_DAT_11277f380) = puVar19;
  _objc_release(uVar24);
  puVar19 = puVar13;
  func_0x00010bf51e00();
  uVar24 = *(undefined8 *)(param_1 + (long)_DAT_11277f384);
  *(undefined **)(param_1 + (long)_DAT_11277f384) = puVar19;
  _objc_release(uVar24);
  puVar19 = puVar12;
  func_0x00010bf51e00();
  uVar24 = *(undefined8 *)(param_1 + (long)_DAT_11277f388);
  *(undefined **)(param_1 + (long)_DAT_11277f388) = puVar19;
  _objc_release(uVar24);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 108fd944c; end: 108fd951b; -[SCSectionBasedCollectionViewFlowLayout _calculateLayoutAttributesWithLayoutInformation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fd944c(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar2 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010bf4c7c0(lVar2);
  puVar1 = PTR__CGPointZero_110347540;
  param_4 = (param_1 - param_2) - param_4;
  dVar6 = *(double *)(PTR__CGPointZero_110347540 + 8);
  lVar3 = *(long *)(param_5 + _DAT_11277f374);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar4 = 0;
    dVar7 = *(double *)puVar1;
    do {
      dVar5 = dVar7;
      func_0x00010be496a0(dVar7,dVar6,param_4,param_5,param_6,lVar4);
      dVar6 = dVar6 + dVar5;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
  }
  lVar3 = (long)_DAT_11277f370;
  *(double *)(param_5 + lVar3) = param_4;
  ((double *)(param_5 + lVar3))[1] = dVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108fd951c; end: 108fd991b; -[SCSectionBasedCollectionViewFlowLayout _layoutSectionAtIndex:withSectionOrigin:width:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108fd951c(double param_1,double param_2,double param_3,double param_4,long param_5,
                    undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulong uStack_98;
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_11277f378);
  dVar10 = param_1;
  dVar14 = param_3;
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2aa0();
  dVar8 = dVar10;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + _DAT_11277f384);
  func_0x00010c0dfd40(uVar1,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  dVar9 = param_1;
  dVar11 = param_2;
  dVar15 = param_3;
  func_0x00010be49260(param_5,param_6,param_7);
  dVar10 = dVar10 + dVar9;
  dVar18 = param_2 + dVar10;
  lVar2 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar9 = dVar10;
  dVar13 = dVar11;
  dVar16 = dVar15;
  dVar17 = param_4;
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(lVar2);
  dVar12 = dVar10;
  _CGRectGetMinX(dVar10,dVar11,dVar15,param_4);
  dVar19 = dVar10;
  _CGRectGetMinY(dVar10,dVar11,dVar15,param_4);
  dVar20 = dVar10;
  _CGRectGetWidth(dVar10,dVar11,dVar15,param_4);
  _CGRectGetMinY(dVar10,dVar11,dVar15,param_4);
  uVar3 = *(ulong *)(param_5 + _DAT_11277f374);
  func_0x00010c0dfd40(uVar3,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2827c0();
  _objc_release(uVar3);
  uStack_98 = 0;
  if (uVar4 != 0) {
    dVar11 = 50.0 - (dVar9 + dVar10);
    dVar10 = 0.0;
    if (0.0 <= dVar11) {
      dVar10 = dVar11;
    }
    do {
      if (uStack_98 != 0) {
        dVar18 = dVar8 + dVar18;
      }
      dVar11 = param_1;
      func_0x00010be492c0(param_1,dVar18,param_3,dVar12,dVar19,dVar20,(dVar9 + 50.0) - dVar10,
                          param_5,param_6,param_7,&uStack_98);
      dVar18 = dVar11 + dVar18;
    } while (uStack_98 < uVar4);
  }
  dVar20 = (dVar14 + dVar18) - param_2;
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  dVar10 = param_3;
  dVar8 = dVar20;
  func_0x00010c2971a0(param_1,param_2,param_3,dVar20,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(*(undefined8 *)(param_5 + _DAT_11277f36c),param_6,puVar5,param_7);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_6,0,param_7);
  _objc_retainAutoreleasedReturnValue();
  dVar12 = *(double *)(param_5 + _DAT_11277f360);
  dVar19 = dVar9 + dVar12;
  lVar7 = (long)_DAT_11277f368;
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c0e00e0(uVar6,param_6,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bed9300(param_1,param_2,param_3,dVar20,dVar13 + dVar12,dVar19 + dVar9,
                      dVar10 - (dVar13 + dVar17),dVar8 - (dVar16 + dVar19),param_5,param_6,uVar1);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c0e00e0(uVar6,param_6,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beda7a0(param_5,param_6,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(puVar5);
  return dVar20;
}



/* Entry: 108fd991c; end: 108fd9b23; -[SCSectionBasedCollectionViewFlowLayout _layoutHeaderViewForSectionAtIndex:withSectionOrigin:width:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_108fd991c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  uVar8 = param_1;
  uVar9 = param_2;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_4,0,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + _DAT_11277f380);
  func_0x00010c0e00e0(uVar2,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  uVar5 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc10a0();
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar2 = uVar8;
  uVar10 = uVar9;
  func_0x00010b816428(param_1,param_2,uVar8,uVar9);
  func_0x00010b816528();
  puVar3 = PTR_PTR_1126b56f0;
  func_0x00010c08ca00(PTR_PTR_1126b56f0,param_4,uVar6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b816428(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),uVar8,uVar9);
  func_0x00010c1739e0(puVar3);
  uVar5 = param_1;
  _CGRectGetMidX(param_1,param_2,uVar2,uVar10);
  _CGRectGetMidY(param_1,param_2,uVar2,uVar10);
  func_0x00010c17a6a0(uVar5,param_1,puVar3);
  func_0x00010c227920(puVar3,param_4,param_5 + 10);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar7 = (long)_DAT_11277f368;
  func_0x00010c1d0640(*(undefined8 *)(param_3 + lVar7),param_4,puVar4,puVar1);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  uVar5 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010c0e00e0(uVar5,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return uVar9;
}



/* Entry: 108fd9b24; end: 108fd9f13; -[SCSectionBasedCollectionViewFlowLayout _layoutItemsInLineForSectionAtIndex:nextItemIndexPtr:lineOrigin:width:gradientFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108fd9b24(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
                    undefined8 param_10,ulong *param_11)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  uVar9 = *param_11;
  uVar1 = *(ulong *)(param_8 + _DAT_11277f374);
  dVar11 = param_1;
  dVar21 = param_2;
  dVar19 = param_4;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2827c0();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_8 + _DAT_11277f388);
  func_0x00010c0dfd40(uVar3,param_9,param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_8 + _DAT_11277f378);
  func_0x00010c0dfd40(uVar3,param_9,param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2aa0();
  dVar16 = dVar21;
  _objc_release(uVar3);
  param_3 = param_3 - dVar21;
  dVar19 = param_3 - dVar19;
  puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_9,uVar9,param_10);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11277f37c;
  uVar3 = *(undefined8 *)(param_8 + lVar8);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc10a0();
  dVar12 = param_3;
  dVar13 = dVar16;
  _objc_release(uVar3);
  uVar1 = uVar9;
  dVar19 = dVar19 - param_3;
  do {
    dVar15 = dVar19;
    dVar18 = dVar16;
    uVar10 = uVar1;
    uVar1 = uVar10 + 1;
    if (uVar2 <= uVar1) break;
    puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_9,uVar1,param_10);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_8 + lVar8);
    func_0x00010c0e00e0(uVar3,param_9,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc10a0();
    dVar19 = dVar13;
    _objc_release(uVar3);
    dVar20 = dVar11 + dVar12;
    dVar16 = dVar18;
    if (dVar18 <= dVar13) {
      dVar16 = dVar13;
    }
    dVar12 = dVar11;
    _objc_release(puVar5);
    dVar13 = dVar19;
    dVar19 = dVar15 - dVar20;
  } while (dVar20 <= dVar15);
  dVar12 = 0.0;
  if ((*(byte *)(param_8 + _DAT_11277f38c) & 1) == 0) {
    dVar12 = 0.5;
    func_0x00010b816218();
    dVar12 = (double)(long)(dVar15 * 0.5 * dVar12) / dVar12;
  }
  if (uVar9 <= uVar10) {
    dVar21 = dVar21 + dVar12;
    dVar19 = *(double *)PTR__CGPointZero_110347540;
    dVar13 = *(double *)(PTR__CGPointZero_110347540 + 8);
    dVar12 = dVar13;
    dVar16 = dVar19;
    do {
      puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_9,uVar9,param_10);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_8 + lVar8);
      func_0x00010c0e00e0(uVar3,param_9,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc10a0();
      _objc_release(uVar3);
      dVar14 = param_1 + dVar21;
      dVar17 = param_2 + (dVar18 - dVar16) * 0.5;
      dVar20 = dVar12;
      func_0x00010b816528(dVar14,dVar17,dVar12,dVar16);
      puVar6 = PTR_PTR_1126b56f0;
      func_0x00010c08c8e0(PTR_PTR_1126b56f0,param_9,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b816428(dVar19,dVar13,dVar20,dVar16);
      func_0x00010c1739e0(puVar6);
      dVar15 = dVar14;
      _CGRectGetMidX(dVar14,dVar17,dVar20,dVar16);
      _CGRectGetMidY(dVar14,dVar17,dVar20,dVar16);
      func_0x00010c17a6a0(dVar15,dVar14,puVar6);
      func_0x00010bed8e60(param_4,param_5,param_6,param_7,param_8,param_9,puVar6);
      func_0x00010beda7a0(param_8,param_9,puVar6);
      puVar7 = puVar6;
      func_0x00010bf51e00(puVar6);
      func_0x00010c1d0640(*(undefined8 *)(param_8 + _DAT_11277f35c),param_9,puVar7,puVar5);
      _objc_release(puVar7);
      dVar15 = dVar11 + dVar12;
      dVar21 = dVar21 + dVar15;
      _objc_release(puVar6);
      dVar16 = dVar12;
      _objc_release(puVar5);
      uVar9 = uVar9 + 1;
      dVar12 = dVar15;
    } while (uVar9 <= uVar10);
  }
  *param_11 = uVar1;
  _objc_release(puVar4);
  return dVar18;
}



/* Entry: 108fd9f14; end: 108fda417; -[SCSectionBasedCollectionViewFlowLayout _updateGradientForItemLayoutAttributes:withGradientFrame:] */

void FUN_108fd9f14(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar4;
  
  dVar9 = param_1;
  uVar14 = param_2;
  uVar15 = param_3;
  uVar17 = param_4;
  _objc_retain(param_7);
  uVar4 = param_7;
  func_0x00010bfb68e0();
  iVar3 = (int)uVar4;
  _CGRectIntersectsRect();
  if (iVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    dVar10 = dVar9;
    uVar4 = uVar14;
    uVar16 = uVar15;
    uVar18 = uVar17;
    _CGRectIntersection();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar11 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar11 = dVar11 * 0.25;
    dVar12 = dVar10;
    _CGRectGetMinY(dVar10,uVar4,uVar16,uVar18);
    dVar13 = param_1;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    uVar8 = (ulong)((dVar12 - dVar13) / dVar11);
    puVar7 = PTR_PTR_1126dcd98;
    _objc_alloc(PTR_PTR_1126dcd98);
    puVar6 = puVar7;
    dVar12 = dVar10;
    _CGRectGetMinY(dVar10,uVar4,uVar16,uVar18);
    dVar13 = param_1;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    dVar19 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    FUN_108fda9d0(dVar12 - dVar13,dVar19);
    _objc_retainAutoreleasedReturnValue();
    dVar12 = dVar10;
    _CGRectGetMinY(dVar10,uVar4,uVar16,uVar18);
    dVar13 = dVar9;
    _CGRectGetMinY(dVar9,uVar14,uVar15,uVar17);
    func_0x00010bfffac0(dVar12 - dVar13,puVar7,param_6,puVar6);
    func_0x00010befa120(puVar5,param_6,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    dVar19 = (double)(uVar8 + 1);
    dVar12 = dVar10;
    _CGRectGetMaxY(dVar10,uVar4,uVar16,uVar18);
    dVar13 = param_1;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    if (dVar11 * dVar19 <= dVar12 - dVar13) {
      do {
        uVar1 = uVar8 + 1;
        puVar7 = PTR_PTR_1126dcd98;
        _objc_alloc(PTR_PTR_1126dcd98);
        lVar2 = 4;
        if (uVar1 < 4) {
          lVar2 = uVar8 + 1;
        }
        puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41680(0x3ff0000000000000,*(undefined8 *)(&UNK_10dfb18f0 + lVar2 * 8),
                            PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        dVar12 = param_1;
        _CGRectGetMinY(param_1,param_2,param_3,param_4);
        dVar13 = dVar9;
        _CGRectGetMinY(dVar9,uVar14,uVar15,uVar17);
        func_0x00010bfffac0((dVar12 + dVar11 * dVar19) - dVar13,puVar7,param_6,puVar6);
        func_0x00010befa120(puVar5,param_6,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar6);
        dVar19 = (double)(uVar8 + 2);
        dVar12 = dVar10;
        _CGRectGetMaxY(dVar10,uVar4,uVar16,uVar18);
        dVar13 = param_1;
        _CGRectGetMinY(param_1,param_2,param_3,param_4);
        uVar8 = uVar1;
      } while (dVar11 * dVar19 <= dVar12 - dVar13);
    }
    dVar12 = dVar10;
    _CGRectGetMaxY(dVar10,uVar4,uVar16,uVar18);
    dVar13 = param_1;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    if (dVar11 * (double)uVar8 != dVar12 - dVar13) {
      puVar7 = PTR_PTR_1126dcd98;
      _objc_alloc(PTR_PTR_1126dcd98);
      puVar6 = puVar7;
      dVar11 = dVar10;
      _CGRectGetMaxY(dVar10,uVar4,uVar16,uVar18);
      dVar12 = param_1;
      _CGRectGetMinY(param_1,param_2,param_3,param_4);
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      FUN_108fda9d0(dVar11 - dVar12,param_1);
      _objc_retainAutoreleasedReturnValue();
      _CGRectGetMaxY(dVar10,uVar4,uVar16,uVar18);
      _CGRectGetMinY(dVar9,uVar14,uVar15,uVar17);
      func_0x00010bfffac0(dVar10 - dVar9,puVar7,param_6,puVar6);
      func_0x00010befa120(puVar5,param_6,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    puVar7 = puVar5;
    func_0x00010bf51e00(puVar5);
    _objc_release(puVar5);
  }
  puVar5 = puVar7;
  func_0x00010bf51e00(puVar7);
  func_0x00010c1a4140(param_7,param_6,puVar5);
  _objc_release(puVar5);
  func_0x00010c1a4060(0x3fe0000000000000,0,param_7);
  func_0x00010c1a4100(0x3fe0000000000000,0x3ff0000000000000,param_7);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108fda418; end: 108fda6df; -[SCSectionBasedCollectionViewFlowLayout _updateHeaderViewLayoutAttributes:withSectionFrame:contentBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fda418(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,ulong param_11)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  
  uVar1 = param_11;
  _objc_retain();
  dVar6 = param_1;
  dVar7 = param_2;
  uVar10 = param_3;
  uVar11 = param_4;
  _CGRectIntersection(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  dVar3 = dVar6;
  dVar8 = dVar7;
  _CGRectIsNull();
  dVar12 = 0.0;
  if (((uVar1 & 1) == 0) && (func_0x00010c23d0a0(param_11), dVar8 != 0.0)) {
    func_0x00010c23d0a0(param_11);
    dVar4 = dVar6;
    dVar13 = dVar7;
    func_0x00010b816428();
    if (*(long *)(param_9 + _DAT_11277f34c) == 1) {
      dVar12 = param_1;
      _CGRectGetMaxY(param_1,param_2,param_3,param_4);
      _CGRectGetMaxY(param_5,param_6,param_7,param_8);
      if (dVar12 <= param_5) {
        dVar12 = dVar6;
        dVar5 = dVar7;
        _CGRectGetHeight(dVar6,dVar7,uVar10,uVar11);
        func_0x00010c23d0a0(param_11);
        dVar12 = (double)NEON_fminnm(dVar12 - dVar5,0);
        dVar13 = dVar13 + dVar12;
      }
      _CGRectGetMinY(dVar6,dVar7,uVar10,uVar11);
      _CGRectGetMinY(param_1,param_2,param_3,param_4);
      dVar9 = 10.0;
      dVar6 = (dVar6 - param_1) / 10.0;
      dVar5 = 1.0;
      if (dVar6 <= 1.0) {
        dVar5 = dVar6;
      }
      func_0x00010c1a7980(param_11);
      dVar12 = 1.0;
    }
    else {
      dVar5 = dVar4;
      dVar9 = dVar13;
      if (*(long *)(param_9 + _DAT_11277f34c) == 0) {
        _CGRectGetMaxY(param_1,param_2,param_3,param_4);
        _CGRectGetMinY(dVar6,dVar7,uVar10,uVar11);
        func_0x00010c23d0a0(param_11);
        dVar5 = (param_1 - dVar6) / dVar7;
        dVar9 = 1.0;
        dVar12 = 1.0;
        if (dVar5 <= 1.0) {
          dVar12 = dVar5;
        }
      }
    }
    lVar2 = param_9;
    func_0x00010bf40120(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4c7c0();
    func_0x00010bf40120(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    _objc_release(param_9);
    _objc_release(lVar2);
    if (dVar5 + dVar9 < 0.0) {
      dVar6 = (dVar5 + dVar9) / 40.0 + 1.0;
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      dVar12 = 1.0;
      if (dVar6 <= 1.0) {
        dVar12 = dVar6;
      }
    }
    dVar6 = dVar4;
    _CGRectGetMidX(dVar4,dVar13,dVar3,dVar8);
    _CGRectGetMidY(dVar4,dVar13,dVar3,dVar8);
    func_0x00010c17a6a0(dVar6,dVar4,param_11);
  }
  func_0x00010c1677c0(dVar12,param_11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_11);
  return;
}



/* Entry: 108fda6e0; end: 108fda89f; -[SCSectionBasedCollectionViewFlowLayout _updateLayoutAttributesForOverscrollIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fda6e0(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_d0;
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
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bfecf20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf40120(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  func_0x00010bf4cdc0(lVar2);
  param_1 = param_1 + param_2;
  if (0.0 <= param_1) {
    uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  else {
    uVar5 = uVar1;
    func_0x00010c1554e0();
    uVar7 = uVar1;
    func_0x00010c1554e0();
    if (0 < (long)uVar7) {
      lVar6 = (long)_DAT_11277f374;
      uVar7 = uVar7 + 1;
      do {
        lVar3 = *(long *)(param_3 + lVar6);
        func_0x00010c0dfd40(lVar3,param_4,uVar7 - 2);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c2827c0();
        _objc_release(lVar3);
        uVar5 = uVar5 - (lVar4 == 0);
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
    }
    dVar8 = param_1 * -2.0;
    if (uVar5 < 5) {
      dVar9 = *(double *)(&UNK_10dfb1918 + uVar5 * 8);
    }
    else {
      dVar9 = 0.201;
    }
    if (dVar8 <= 0.0) {
      dVar8 = 0.0;
    }
    dVar8 = (1.0 - 1.0 / ((dVar8 * dVar9) / 400.0 + 1.0)) * 400.0;
    param_1 = param_1 + dVar8;
    func_0x00010b816218(dVar8);
    _CGAffineTransformMakeTranslation(&uStack_a0,0,(double)(long)(dVar8 * param_1) / dVar8);
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
  }
  uStack_b0 = uStack_80;
  uStack_a8 = uStack_78;
  func_0x00010c219960(param_5,param_4,&uStack_d0);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 108fda8a0; end: 108fda8af; -[SCSectionBasedCollectionViewFlowLayout headerStickyPositionYOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fda8a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f360);
}



/* Entry: 108fda8b0; end: 108fda8bf; -[SCSectionBasedCollectionViewFlowLayout setHeaderStickyPositionYOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fda8b0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277f360) = param_1;
  return;
}



/* Entry: 108fda8c0; end: 108fda8cf; -[SCSectionBasedCollectionViewFlowLayout headerTransitionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fda8c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f34c);
}



/* Entry: 108fda8d0; end: 108fda8df; -[SCSectionBasedCollectionViewFlowLayout setHeaderTransitionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fda8d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277f34c) = param_3;
  return;
}



/* Entry: 108fda8e0; end: 108fda8ef; -[SCSectionBasedCollectionViewFlowLayout doNotPlaceLastItemInTheMiddle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108fda8e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277f38c);
}



/* Entry: 108fda8f0; end: 108fda8ff; -[SCSectionBasedCollectionViewFlowLayout setDoNotPlaceLastItemInTheMiddle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fda8f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277f38c) = param_3;
  return;
}



/* Entry: 108fda900; end: 108fda9cf; -[SCSectionBasedCollectionViewFlowLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fda900(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f364,0);
  _objc_storeStrong(param_1 + _DAT_11277f358,0);
  _objc_storeStrong(param_1 + _DAT_11277f368,0);
  _objc_storeStrong(param_1 + _DAT_11277f35c,0);
  _objc_storeStrong(param_1 + _DAT_11277f36c,0);
  _objc_storeStrong(param_1 + _DAT_11277f380,0);
  _objc_storeStrong(param_1 + _DAT_11277f384,0);
  _objc_storeStrong(param_1 + _DAT_11277f388,0);
  _objc_storeStrong(param_1 + _DAT_11277f37c,0);
  _objc_storeStrong(param_1 + _DAT_11277f378,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f374,0);
  return;
}



/* Entry: 108fda9d0; end: 108fdaa1f;  */

void FUN_108fda9d0(double param_1,double param_2)

{
  ulong uVar1;
  double dVar2;
  
  param_2 = param_2 * 0.25;
  uVar1 = (ulong)(param_1 / param_2);
  dVar2 = 1.0;
  if (uVar1 < 4) {
    dVar2 = *(double *)(&UNK_10dfb18f0 + uVar1 * 8) +
            (*(double *)(&UNK_10dfb18f8 + uVar1 * 8) - *(double *)(&UNK_10dfb18f0 + uVar1 * 8)) *
            ((param_1 - param_2 * (double)uVar1) / param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf41690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,dVar2,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_colorWithWhite_alpha__1125adf48);
  return;
}



/* Entry: 108fdaa20; end: 108fdabc3;  */

void FUN_108fdaa20(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b56f0;
  _objc_opt_class(PTR_PTR_1126b56f0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    lVar4 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bfcda00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar5 == 0) {
      func_0x00010c1c2ca0();
    }
    else {
      lVar6 = lVar4;
      func_0x00010c0bc260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        puVar2 = PTR_PTR_1126dcda0;
        _objc_alloc(PTR_PTR_1126dcda0);
        func_0x00010bf20c00(param_2);
        func_0x00010c013de0(puVar2);
        func_0x00010c1c2ca0(lVar4);
        _objc_release(puVar2);
      }
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_retain(lVar4);
      _objc_retain(param_2);
      _objc_retain(param_2);
      func_0x00010c0f9680(puVar2);
      _objc_release(uVar1);
      _objc_release(param_2);
      _objc_release(lVar4);
    }
    _objc_release(lVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fdabc4; end: 108fdad3b;  */

void FUN_108fdabc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x28));
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c0bc260(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  uVar3 = *(ulong *)(param_5 + 0x20);
  func_0x00010c0bc260();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dcda0;
  _objc_opt_class(PTR_PTR_1126dcda0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010bfcd860(*(undefined8 *)(param_5 + 0x30));
  uVar5 = uVar1;
  func_0x00010bfcd9c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(param_1,param_2);
  _objc_release(uVar5);
  func_0x00010bfcd960(*(undefined8 *)(param_5 + 0x30));
  uVar5 = uVar1;
  func_0x00010bfcd9c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196020(param_1,param_2);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010bfcd9c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010bfcda00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108fd4498(uVar5,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108fdad3c; end: 108fdad9f; -[SCSectionBasedCollectionViewLayout prepareLayout] */

void FUN_108fdad3c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ffb88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareLayout_112620088);
  func_0x00010c08cc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1099c0();
  _objc_release(param_1);
  return;
}



/* Entry: 108fdada0; end: 108fdadeb; -[SCSectionBasedCollectionViewLayout collectionViewContentSize] */

undefined1  [16] FUN_108fdada0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00010c08cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf407a0();
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 108fdadec; end: 108fdae5f; -[SCSectionBasedCollectionViewLayout layoutAttributesForElementsInRect:] */

void FUN_108fdadec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x00010c08cc40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c08c940(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fdae60; end: 108fdaecb; -[SCSectionBasedCollectionViewLayout layoutAttributesForItemAtIndexPath:] */

void FUN_108fdae60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c08cc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08c980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fdaecc; end: 108fdaf4f; -[SCSectionBasedCollectionViewLayout layoutAttributesForSupplementaryViewOfKind:atIndexPath:] */

void FUN_108fdaecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c08cc40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08c9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fdaf50; end: 108fdaf6f; -[SCSectionBasedCollectionViewLayout layoutDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdaf50(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277f390);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fdaf70; end: 108fdaf83; -[SCSectionBasedCollectionViewLayout setLayoutDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdaf70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277f390,param_3);
  return;
}



/* Entry: 108fdaf84; end: 108fdaf93; -[SCSectionBasedCollectionViewLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdaf84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277f390);
  return;
}



/* Entry: 108fdaf94; end: 108fdb12f; -[SCSectionBasedCollectionViewLayoutAttributes isEqual:] */

ulong FUN_108fdaf94(double param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulong uStack_60;
  undefined *puStack_58;
  
  iVar1 = (int)&uStack_60;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126ffb90;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_isEqual__1125fa0c8,param_5);
  if (iVar1 == 0) {
    uVar4 = 0;
    goto LAB_108fdb108;
  }
  _objc_retain(param_5);
  uVar2 = param_5;
  func_0x00010bfcda00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfcda00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  if (uVar2 == uVar3) {
    _objc_release(uVar3);
    _objc_release(uVar2);
LAB_108fdb070:
    func_0x00010bfcd860(param_5);
    dVar5 = param_1;
    dVar7 = param_2;
    func_0x00010bfcd860(param_3);
    uVar4 = 0;
    if ((param_1 == dVar5) && (param_2 == dVar7)) {
      func_0x00010bfcd960(param_5);
      dVar6 = dVar5;
      dVar8 = dVar7;
      func_0x00010bfcd960(param_3);
      uVar4 = 0;
      if ((dVar5 == dVar6) && (dVar7 == dVar8)) {
        func_0x00010bfdfea0(param_5);
        dVar5 = dVar6;
        func_0x00010bfdfea0(param_3);
        uVar4 = (ulong)(dVar6 == dVar5);
      }
    }
  }
  else if (uVar3 == 0) {
    _objc_release();
    uVar4 = 0;
  }
  else {
    uVar4 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 != 0) goto LAB_108fdb070;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
LAB_108fdb108:
  _objc_release(param_5);
  return uVar4;
}



/* Entry: 108fdb130; end: 108fdb1e7; -[SCSectionBasedCollectionViewLayoutAttributes copyWithZone:] */

undefined1 * FUN_108fdb130(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffb90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_copyWithZone__1125b2238);
  uVar2 = param_1;
  func_0x00010bfcda00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1a4140(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bfcd860(param_1);
  func_0x00010c1a4060(puVar1);
  func_0x00010bfcd960(param_1);
  func_0x00010c1a4100(puVar1);
  func_0x00010bfdfea0(param_1);
  func_0x00010c1a7980(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 108fdb1e8; end: 108fdb1f7; -[SCSectionBasedCollectionViewLayoutAttributes gradientStops] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fdb1e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f394);
}



/* Entry: 108fdb1f8; end: 108fdb203; -[SCSectionBasedCollectionViewLayoutAttributes setGradientStops:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdb1f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108fdb204; end: 108fdb217; -[SCSectionBasedCollectionViewLayoutAttributes gradientBeginPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108fdb204(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f398);
}



/* Entry: 108fdb218; end: 108fdb22b; -[SCSectionBasedCollectionViewLayoutAttributes setGradientBeginPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdb218(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277f398;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108fdb22c; end: 108fdb23f; -[SCSectionBasedCollectionViewLayoutAttributes gradientEndPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108fdb22c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f39c);
}



/* Entry: 108fdb240; end: 108fdb253; -[SCSectionBasedCollectionViewLayoutAttributes setGradientEndPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdb240(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277f39c;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 108fdb254; end: 108fdb263; -[SCSectionBasedCollectionViewLayoutAttributes headerShadowOpacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fdb254(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f3a0);
}



/* Entry: 108fdb264; end: 108fdb273; -[SCSectionBasedCollectionViewLayoutAttributes setHeaderShadowOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdb264(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277f3a0) = param_1;
  return;
}



/* Entry: 108fdb274; end: 108fdb287; -[SCSectionBasedCollectionViewLayoutAttributes .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fdb274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f394,0);
  return;
}



/* Entry: 108fdb288; end: 108fdb30f; -[SCSectionBasedCollectionViewPagingController initWithCollectionView:] */

undefined1 * FUN_108fdb288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffb98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010c18a140(*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8,
                        *(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108fdb310; end: 108fdb3c3; -[SCSectionBasedCollectionViewPagingController willEndDraggingWithScrollingVelocity:sections:targetContentOffset:] */

void FUN_108fdb310(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  
  _objc_retain(param_5);
  if (ABS(param_2) < 10.0) {
    *(double *)(param_3 + 0x10) = param_1;
    *(double *)(param_3 + 0x18) = param_2;
    if (ABS(param_2) < 0.01) {
      lVar1 = *(long *)(param_3 + 8);
      FUN_108fdb3c4(lVar1,param_5);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        func_0x00010bf4cdc0(*(undefined8 *)(param_3 + 8));
        func_0x00010bf885a0(lVar1);
        *(double *)(param_6 + 8) = param_2 - param_1;
      }
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fdb3c4; end: 108fdbb2b;  */

void FUN_108fdb3c4(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar3 = param_5;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain();
  puVar6 = &uStack_170;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar10 = *plStack_160;
    do {
      puVar6 = (undefined8 *)0x0;
      do {
        if (*plStack_160 != lVar10) {
          _objc_enumerationMutation(puVar3);
        }
        uVar9 = *(undefined8 *)(lStack_168 + (long)puVar6 * 8);
        func_0x00010c1554e0(uVar9);
        uVar7 = param_6;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar7;
        _objc_opt_respondsToSelector();
        _objc_release(uVar7);
        if ((uVar5 & 1) != 0) {
          func_0x00010c1554e0(uVar9);
          uVar7 = param_6;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar7;
          func_0x00010bf9c600();
          _objc_release(uVar7);
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (uVar5 != 0) {
            func_0x00010c1554e0(uVar9);
            func_0x00010c0df780(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(puVar8);
          }
        }
        puVar6 = (undefined8 *)((long)puVar6 + 1);
      } while (puVar4 != puVar6);
      puVar6 = &uStack_170;
      puVar4 = puVar3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar3);
  puVar8 = puVar2;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    goto LAB_108fdba5c;
  }
  dVar11 = ABS(param_2);
  lVar10 = 2;
  if (param_2 <= 0.0) {
    lVar10 = 1;
  }
  dVar16 = 0.01;
  if (dVar11 <= 0.01) {
    lVar10 = 0;
  }
  _objc_retain(puVar2);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar7 = param_6;
  func_0x00010bf529e0();
  if (lVar10 == 0) {
    if (uVar7 != 1) {
      uVar7 = 0;
      dVar12 = 0.0;
      do {
        puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        puVar6 = puVar4;
        func_0x00010bf4b900();
        _objc_release(puVar4);
        dVar13 = dVar11;
        dVar17 = dVar16;
        uVar9 = param_3;
        uVar18 = param_4;
        if ((int)puVar8 != 0) {
          uVar5 = param_6;
          func_0x00010c0dfd40(param_6);
          _objc_retainAutoreleasedReturnValue();
          FUN_108fdbc94();
          _objc_release(uVar5);
          puVar4 = param_5;
          func_0x00010c262ca0(param_5);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          dVar13 = dVar11;
          dVar17 = dVar16;
          uVar9 = param_3;
          uVar18 = param_4;
          func_0x00010bf51460(dVar11,dVar16,param_3,param_5);
          dVar19 = dVar13;
          _objc_release(puVar4);
          func_0x00010bfb68e0(param_5);
          _CGRectGetMidY();
          dVar19 = dVar19 + -60.0;
          dVar14 = dVar13;
          _CGRectGetMinY(dVar13,dVar17,uVar9,uVar18);
          if ((dVar14 < dVar19) &&
             (dVar14 = dVar13, _CGRectGetMaxY(dVar13,dVar17,uVar9,uVar18), dVar19 < dVar14)) {
            dVar14 = dVar11;
            _CGRectGetHeight(dVar11,dVar16,param_3,param_4);
            dVar15 = dVar14;
            func_0x00010bfb68e0(param_5);
            _CGRectGetHeight();
            if (dVar15 <= dVar14) goto LAB_108fdb878;
LAB_108fdbad4:
            _CGRectGetMidY(dVar13,dVar17,uVar9,uVar18);
            dVar19 = dVar19 - dVar13;
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            goto LAB_108fdbb14;
          }
LAB_108fdb878:
          dVar14 = dVar13;
          _CGRectGetMinY(dVar13,dVar17,uVar9,uVar18);
          bVar1 = false;
          if ((dVar19 < dVar14) && (bVar1 = false, !NAN(dVar12) && !NAN(dVar19))) {
            bVar1 = dVar12 < dVar19;
          }
          if (bVar1) {
            _CGRectGetHeight(dVar11,dVar16,param_3,param_4);
            dVar16 = dVar11;
            func_0x00010bfb68e0(param_5);
            _CGRectGetHeight();
            if (dVar11 < dVar16) goto LAB_108fdbad4;
          }
          _CGRectGetMaxY();
          dVar12 = dVar13;
        }
        uVar7 = uVar7 + 1;
        uVar5 = param_6;
        func_0x00010bf529e0();
        dVar11 = dVar13;
        dVar16 = dVar17;
        param_3 = uVar9;
        param_4 = uVar18;
      } while (uVar7 < uVar5 - 1);
    }
  }
  else if (lVar10 == 2) {
    if (uVar7 != 1) {
      uVar7 = 0;
      do {
        puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        puVar6 = puVar4;
        func_0x00010bf4b900();
        _objc_release(puVar4);
        dVar12 = dVar11;
        dVar13 = dVar16;
        uVar9 = param_3;
        uVar18 = param_4;
        if ((int)puVar8 != 0) {
          uVar5 = param_6;
          func_0x00010c0dfd40(param_6);
          _objc_retainAutoreleasedReturnValue();
          FUN_108fdbc94();
          _objc_release(uVar5);
          dVar19 = dVar11;
          uVar9 = param_3;
          uVar18 = param_4;
          _CGRectGetMidY(dVar11,dVar16,param_3,param_4);
          puVar4 = param_5;
          func_0x00010c262ca0(param_5);
          _objc_retainAutoreleasedReturnValue();
          dVar12 = 0.0;
          puVar6 = puVar4;
          func_0x00010bf512a0(param_5);
          _objc_release(puVar4);
          func_0x00010bfb68e0(param_5);
          _CGRectGetMidY();
          dVar12 = dVar12 + -60.0;
          dVar19 = dVar12 - dVar19;
          dVar13 = -60.0;
          if (dVar19 < 0.0) {
            _CGRectGetHeight();
            dVar12 = dVar11;
            func_0x00010bfb68e0(param_5);
            _CGRectGetHeight();
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            dVar13 = dVar16;
            uVar9 = param_3;
            uVar18 = param_4;
            if (dVar11 < dVar12) goto LAB_108fdbb14;
          }
        }
        uVar7 = uVar7 + 1;
        uVar5 = param_6;
        func_0x00010bf529e0();
        dVar11 = dVar12;
        dVar16 = dVar13;
        param_3 = uVar9;
        param_4 = uVar18;
      } while (uVar7 < uVar5 - 1);
    }
  }
  else if (-1 < (long)(uVar7 - 1)) {
    do {
      uVar7 = uVar7 - 1;
      puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      puVar6 = puVar4;
      func_0x00010bf4b900();
      _objc_release(puVar4);
      dVar12 = dVar11;
      if ((int)puVar8 != 0) {
        uVar5 = param_6;
        func_0x00010c0dfd40(param_6);
        _objc_retainAutoreleasedReturnValue();
        FUN_108fdbc94();
        _objc_release(uVar5);
        dVar19 = dVar11;
        _CGRectGetMidY(dVar11,dVar16,param_3,param_4);
        puVar4 = param_5;
        func_0x00010c262ca0(param_5);
        _objc_retainAutoreleasedReturnValue();
        dVar12 = 0.0;
        puVar6 = puVar4;
        func_0x00010bf512a0(param_5);
        _objc_release(puVar4);
        func_0x00010bfb68e0(param_5);
        _CGRectGetMidY();
        dVar19 = (dVar12 + -60.0) - dVar19;
        if (dVar19 <= 0.0) {
          _CGRectGetMinY();
          dVar12 = dVar11;
          func_0x00010bfb68e0(param_5);
          _CGRectGetHeight();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (dVar11 < dVar12) {
            func_0x00010bf4cdc0(param_5);
            func_0x00010bf4c7c0(param_5);
            dVar19 = dVar16 + dVar12;
            goto LAB_108fdbb14;
          }
        }
        else {
          _CGRectGetHeight();
          dVar12 = dVar11;
          func_0x00010bfb68e0(param_5);
          _CGRectGetHeight();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (dVar11 < dVar12) goto LAB_108fdbb14;
        }
      }
      dVar11 = dVar12;
    } while (0 < (long)uVar7);
  }
  puVar8 = (undefined *)0x0;
LAB_108fdba44:
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(puVar2);
LAB_108fdba5c:
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  if (0.01 <= ABS((double)param_5[3])) {
    lVar10 = param_5[1];
    FUN_108fdb3c4(lVar10,puVar6);
    _objc_retainAutoreleasedReturnValue();
    if (lVar10 != 0) {
      func_0x00010bf4cdc0(param_5[1]);
      func_0x00010bf4cdc0(param_5[1]);
      func_0x00010bf885a0(lVar10);
      uVar9 = param_5[1];
      _objc_retain(uVar9);
      func_0x00010bf4cdc0(uVar9);
      func_0x00010c182300(uVar9);
      _objc_release(uVar9);
      func_0x00010bf03460(0x3fd999999999999a,0,0x3ff0000000000000,param_5[3],
                          PTR__OBJC_CLASS___UIView_1126aec20);
    }
    _objc_release(lVar10);
  }
  return;
LAB_108fdbb14:
  func_0x00010c0df720(dVar19,puVar8);
  _objc_retainAutoreleasedReturnValue();
  goto LAB_108fdba44;
}



/* Entry: 108fdbb2c; end: 108fdbc4f; -[SCSectionBasedCollectionViewPagingController beginDecelerationWithSections:] */

void FUN_108fdbb2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (0.01 <= ABS(*(double *)(param_1 + 0x18))) {
    lVar1 = *(long *)(param_1 + 8);
    FUN_108fdb3c4(lVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010bf4cdc0(*(undefined8 *)(param_1 + 8));
      func_0x00010bf4cdc0(*(undefined8 *)(param_1 + 8));
      func_0x00010bf885a0(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      _objc_retain(uVar2);
      func_0x00010bf4cdc0(uVar2);
      func_0x00010c182300(uVar2);
      _objc_release(uVar2);
      func_0x00010bf03460(0x3fd999999999999a,0,0x3ff0000000000000,*(undefined8 *)(param_1 + 0x18),
                          PTR__OBJC_CLASS___UIView_1126aec20);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 108fdbc50; end: 108fdbc83;  */

void FUN_108fdbc50(long param_1)

{
  func_0x00010c1822e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108fdbc84; end: 108fdbc87;  */

void FUN_108fdbc84(void)

{
  return;
}



/* Entry: 108fdbc88; end: 108fdbc93; -[SCSectionBasedCollectionViewPagingController .cxx_destruct] */

void FUN_108fdbc88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


