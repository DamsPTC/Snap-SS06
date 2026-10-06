/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f83a04; end: 107f83b57; -[SCPreviewFilterStackingUIHelper initWithSmartSwipeFilterView:toolbar:toolbarTooltip:commonLoggingParamsBuilder:previewTooltipsProvider:actionInterceptor:] */

undefined1 *
FUN_107f83a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fbe38;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f83b58; end: 107f83b87; -[SCPreviewFilterStackingUIHelper updateSmartSwipeFilterView:] */

void FUN_107f83b58(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107f83b88; end: 107f83df7; -[SCPreviewFilterStackingUIHelper updateFilterStackingButtonForFilterCarousel:toolbar:animateInView:promptIndexes:] */

void FUN_107f83b88(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  double adStack_80 [4];
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c084c40();
  _objc_release(lVar1);
  if (lVar2 == 9) {
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb220(param_4);
    _objc_release(puVar3);
  }
  if (param_3 == 0) {
    adStack_80[3] = 0.0;
    adStack_80[2] = 0.0;
    lStack_58 = 0;
    lStack_60 = 0;
    adStack_80[1] = 0.0;
    adStack_80[0] = 0.0;
    dVar4 = 0.0;
  }
  else {
    func_0x00010bf603a0(adStack_80,param_3);
    dVar4 = adStack_80[0];
    if ((double)(lStack_60 - 1) <= adStack_80[0]) {
      dVar4 = ((double)(lStack_60 - 1) - adStack_80[0]) + 1.0;
    }
    if (lStack_58 != 0) {
      if (0.5 <= ABS(dVar4)) {
        lVar1 = param_3;
        func_0x00010bf2d8e0();
        if (((int)lVar1 == 0) || (*(long *)(param_1 + 0x20) == 1)) goto LAB_107f83d7c;
      }
      else {
        func_0x00010c235000();
      }
      func_0x00010c236420(param_1);
      goto LAB_107f83d7c;
    }
  }
  uStack_90 = 0x2020000000;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_88 = 0;
  func_0x00010bf97bc0(param_6);
  if ((*(byte *)(puStack_98 + 3) & 1) == 0) {
    if ((double)((ulong)(dVar4 - (double)(long)dVar4) ^
                ((ulong)(dVar4 - (double)(long)dVar4) ^ (ulong)dVar4) & 0x8007ffffffffffff) == 0.0)
    {
      if (dVar4 != 0.0) {
        func_0x00010bf2d8e0(param_3);
      }
      goto LAB_107f83d64;
    }
  }
  else {
LAB_107f83d64:
    func_0x00010c28a320(param_1);
  }
  __Block_object_dispose(&uStack_a0,8);
LAB_107f83d7c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f83df8; end: 107f83e57;  */

void FUN_107f83df8(long param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    dVar3 = *(double *)(param_1 + 0x28);
    dVar4 = (double)param_2;
    bVar1 = false;
    bVar2 = true;
    if ((double)(param_2 - 1) <= dVar3) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar3) && !NAN(dVar4)) {
        bVar1 = dVar3 == dVar4;
        bVar2 = dVar4 <= dVar3;
      }
    }
    if (!bVar2 || bVar1) {
LAB_107f83e44:
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
      return;
    }
  }
  else if (*(long *)(param_1 + 0x38) == 1) {
    dVar4 = *(double *)(param_1 + 0x28);
    dVar3 = (double)(param_2 + 1);
    bVar1 = false;
    bVar2 = true;
    if ((double)param_2 <= dVar4) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar4) && !NAN(dVar3)) {
        bVar1 = dVar4 == dVar3;
        bVar2 = dVar3 <= dVar4;
      }
    }
    if (!bVar2 || bVar1) goto LAB_107f83e44;
  }
  return;
}



/* Entry: 107f83e58; end: 107f840bb; -[SCPreviewFilterStackingUIHelper showButtonImageType:stackedFiltersCount:] */

void FUN_107f83e58(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  *(long *)(param_1 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126c4330;
  if ((param_3 == 0) || (param_3 == 2)) {
    if (param_4 == 2) {
      func_0x00010bfae4a0(PTR_PTR_1126c4330,param_2,2);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 1) {
      func_0x00010bfae4a0(PTR_PTR_1126c4330,param_2,2);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 0) {
      func_0x00010bfae4a0(PTR_PTR_1126c4330,param_2,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfae4a0(PTR_PTR_1126c4330,param_2,2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (param_3 != 1) {
      return;
    }
    if (param_4 == 2) {
      func_0x00010bfae4a0(PTR_PTR_1126c4330,param_2,3);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 1) {
      func_0x00010bfae4a0(PTR_PTR_1126c4330,param_2,3);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 0) {
      func_0x00010bfae4a0(PTR_PTR_1126c4330,param_2,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfae4a0(PTR_PTR_1126c4330,param_2,3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3e40;
  _objc_opt_class(PTR_PTR_1126c3e40);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar5 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar2);
  if (uVar5 == 0) {
    uVar2 = param_1;
    func_0x00010c066ae0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = uVar2;
  func_0x00010c273600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2866a0();
  func_0x00010c1fbac0(uVar5);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111120();
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f840bc; end: 107f841df; -[SCPreviewFilterStackingUIHelper swipeViewUpdatedStackedFilters:] */

void FUN_107f840bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c24d340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bf603a0(&uStack_60);
    }
    func_0x00010c236420(param_1,param_2,2,uStack_38);
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x10);
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c234c00();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    puVar5 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb220(uVar6,param_2,puVar5,1);
    _objc_release(puVar5);
  }
  func_0x00010c12cc80(*(undefined8 *)(param_1 + 0x10),param_2,9);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f841e0; end: 107f843f3; -[SCPreviewFilterStackingUIHelper buttonTapped:] */

void FUN_107f841e0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21dd60();
  _objc_release(uVar2);
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 == 0 || lVar6 == 2) {
    lVar6 = *(long *)(param_1 + 0x10);
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puVar4 = PTR_PTR_1126ae750;
    if (lVar6 == 0) {
      func_0x00010c2468a0(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0db140();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1fb220(uVar2);
LAB_107f842dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  if (lVar6 == 1) {
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 != 0) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c231420();
      _objc_release(lVar6);
      if ((int)lVar3 != 0) {
        puVar4 = *(undefined **)(param_1 + 0x38);
        func_0x00010c269d40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27bfe0();
        goto LAB_107f842dc;
      }
    }
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = uVar7;
    func_0x00010bf21f60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfae400();
    func_0x00010c2ae0e0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c084f20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf847c0(uVar7);
    _objc_release(uVar2);
    lVar6 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c111100();
    _objc_release(lVar6);
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c24d180();
    if (iVar1 != 0) {
      puVar4 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar4);
      func_0x00010c0a7a40(PTR_PTR_1126d88d8);
      uVar5 = *(ulong *)(param_1 + 8);
      func_0x00010c06fbe0();
      if ((uVar5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c152530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + 8),PTR_s_scrollToInitSectionAndReloadToIn_112632368,0);
        return;
      }
    }
  }
  return;
}



/* Entry: 107f843f4; end: 107f84507; -[SCPreviewFilterStackingUIHelper insertNewStackingButtonIntoToolbar:stackedFiltersCount:animated:] */

void FUN_107f843f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d88e0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff6a40();
  func_0x00010c066a00(param_3,param_2,puVar1,8,param_5,0);
  _objc_release(param_3);
  func_0x00010c161180(puVar1,param_2,param_1);
  puVar2 = PTR_PTR_1126c4330;
  if (param_4 == 0) {
    func_0x00010bfae4a0(PTR_PTR_1126c4330,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(param_1 + 0x20) = 1;
  }
  else {
    func_0x00010bfae4a0(PTR_PTR_1126c4330,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c236420(param_1,param_2,2,param_4);
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111120();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f84508; end: 107f84513; -[SCPreviewFilterStackingUIHelper updateFilterStackingButtonWithFiltersCount:] */

void FUN_107f84508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showButtonImageType_stackedFilte_11266b330,2,param_3);
  return;
}



/* Entry: 107f84514; end: 107f845ff; -[SCPreviewFilterStackingUIHelper updateStackingButtonInToolbar:showButton:] */

void FUN_107f84514(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_4 & 1) == 0) {
    func_0x00010c12cc80(param_3,param_2,9);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c111120();
    lVar1 = param_1;
  }
  else {
    lVar1 = param_1;
    func_0x00010c066ae0(param_1,param_2,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c22fa20();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x000108edec48();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10e880(0x4014000000000000,uVar3,param_2,lVar1,uVar2);
      _objc_release(uVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190620();
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f84600; end: 107f846cf; -[SCPreviewFilterStackingUIHelper accessoryButtonTapped:] */

void FUN_107f84600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_1 + 0x28);
  _objc_retain(param_3);
  lVar1 = lVar5;
  func_0x00010bf21f60(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfae420();
  func_0x00010c2ae100(lVar5,param_2,lVar2 + 1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = param_3;
  func_0x00010c268120(param_3);
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = param_3;
  func_0x00010beecec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e500(uVar6,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  func_0x00010c0a7a40(PTR_PTR_1126d88d8,param_2,1,0);
  func_0x00010c2741e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f846d0; end: 107f847ef; -[SCPreviewFilterStackingUIHelper addButtonForFilterInfo:] */

void FUN_107f846d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126d88e0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ec9cf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beed120(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec9bf8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1aa420(0x4034000000000000,0x4034000000000000,puVar2);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ec9cd8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c067fc0();
  func_0x00010c211780(puVar2,param_2,uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ec9d18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c160fc0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010befbd40(puVar2,param_2,param_1,PTR_s_accessoryButtonTapped__112539d30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f847f0; end: 107f8490b; -[SCPreviewFilterStackingUIHelper topButtonsToDisplay] */

void FUN_107f847f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c24d340(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x107f848a8;
  puStack_40 = &UNK_110a159d0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_38 = param_1;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c124d20(uVar1,param_2,&puStack_58,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107f8490c; end: 107f84923; -[SCPreviewFilterStackingUIHelper delegate] */

void FUN_107f8490c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f84924; end: 107f8492f; -[SCPreviewFilterStackingUIHelper setDelegate:] */

void FUN_107f84924(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 107f84930; end: 107f84997; -[SCPreviewFilterStackingUIHelper .cxx_destruct] */

void FUN_107f84930(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f84998; end: 107f84ad3; -[SCPreviewSwipeFilterLensMetadataManager initWithSwipeFiltersProvider:fetchObserveProvider:] */

undefined1 *
FUN_107f84998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fbe40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    func_0x00010beb0200(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f84ad4; end: 107f84afb; -[SCPreviewSwipeFilterLensMetadataManager appliedLensMetadataObservable] */

void FUN_107f84ad4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f84afc; end: 107f84cb7; -[SCPreviewSwipeFilterLensMetadataManager _setupSubscription] */

void FUN_107f84afc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c264a20();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107f84cb8;
  puStack_88 = &UNK_110a15860;
  _objc_retain(uVar7);
  uVar3 = uVar2;
  uStack_80 = uVar7;
  func_0x00010bfb26a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_80);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 107f84cb8; end: 107f84dbf;  */

void FUN_107f84cb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0695e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfae840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfab860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_retain(param_2);
  uVar3 = uVar2;
  func_0x00010bf41860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107f84dc0; end: 107f84edb;  */

void FUN_107f84dc0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bfae5a0();
  if (lVar1 == 7) {
    lVar1 = param_2;
    func_0x00010bfc1680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010bfc1680();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        puVar4 = PTR_PTR_1126b3838;
        _objc_alloc(PTR_PTR_1126b3838);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0695e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04fc80(puVar4);
        _objc_release(uVar3);
        goto LAB_107f84eb4;
      }
    }
  }
  puVar4 = (undefined *)0x0;
LAB_107f84eb4:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f84edc; end: 107f84f2b;  */

void FUN_107f84edc(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bedb4a0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107f84f2c; end: 107f8505b; -[SCPreviewSwipeFilterLensMetadataManager _updateMediaFiltersWithMetadata:] */

void FUN_107f84f2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107f8505c;
  puStack_50 = &UNK_110842e18;
  _objc_retain(param_3);
  lStack_48 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_68);
  lVar1 = param_3;
  func_0x00010c159a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_3;
    func_0x00010c159a40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(lStack_48);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c2652c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bfadfe0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2878e0(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107f8505c; end: 107f850b7;  */

void FUN_107f8505c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2652c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfadfe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2878e0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f850b8; end: 107f8510b; -[SCPreviewSwipeFilterLensMetadataManager .cxx_destruct] */

void FUN_107f850b8(long param_1)

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



/* Entry: 107f8510c; end: 107f851d7; -[SCPreviewSwipeFilterViewLensMetadata initWithSwipeView:filterItem:selectedLens:] */

undefined1 *
FUN_107f8510c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fbe48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f851d8; end: 107f8529f; -[SCPreviewSwipeFilterViewLensMetadata isEqual:] */

undefined8 FUN_107f851d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar3 = 1;
    goto LAB_107f85288;
  }
  lVar2 = param_1;
  _objc_opt_class(param_1);
  lVar1 = param_3;
  func_0x00010c077980(param_3,param_2,lVar2);
  if ((int)lVar1 == 0) {
    uVar3 = 0;
    goto LAB_107f85288;
  }
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if ((lVar2 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar2 != 0)) {
    lVar2 = *(long *)(param_1 + 0x10);
    if ((lVar2 != *(long *)(param_3 + 0x10)) && (func_0x00010c071ae0(), (int)lVar2 == 0))
    goto LAB_107f8527c;
    lVar2 = *(long *)(param_1 + 0x18);
    if ((lVar2 != *(long *)(param_3 + 0x18)) && (func_0x00010c071ae0(), (int)lVar2 == 0))
    goto LAB_107f8527c;
    uVar3 = 1;
  }
  else {
LAB_107f8527c:
    uVar3 = 0;
  }
  _objc_release(param_3);
LAB_107f85288:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107f852a0; end: 107f8531f; -[SCPreviewSwipeFilterViewLensMetadata hash] */

undefined8 * FUN_107f852a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
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
  return (undefined8 *)*(undefined1 **)((long)puVar3 + 8);
}



/* Entry: 107f85320; end: 107f85327; -[SCPreviewSwipeFilterViewLensMetadata swipeView] */

undefined8 FUN_107f85320(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f85328; end: 107f85357; -[SCPreviewSwipeFilterViewLensMetadata setSwipeView:] */

void FUN_107f85328(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107f85358; end: 107f8535f; -[SCPreviewSwipeFilterViewLensMetadata filterItem] */

undefined8 FUN_107f85358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f85360; end: 107f8538f; -[SCPreviewSwipeFilterViewLensMetadata setFilterItem:] */

void FUN_107f85360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f85390; end: 107f85397; -[SCPreviewSwipeFilterViewLensMetadata selectedLens] */

undefined8 FUN_107f85390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f85398; end: 107f853c7; -[SCPreviewSwipeFilterViewLensMetadata setSelectedLens:] */

void FUN_107f85398(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107f853c8; end: 107f85403; -[SCPreviewSwipeFilterViewLensMetadata .cxx_destruct] */

void FUN_107f853c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f85404; end: 107f8546f; -[SCPreviewToolbarFilterStackingButtonItem initWithBarButtonItemType:target:selector:] */

undefined1 *
FUN_107f85404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fbe50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithBarButtonItemType_iconSt_1125db448,param_3,0,param_4,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1fbac0(puVar1);
    func_0x00010c1e12e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107f85470; end: 107f85527; -[SCPreviewToolbarFilterStackingButtonItem setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f85470(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fbe50;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setSelected__11265c598);
  if (param_3 == 0) {
    func_0x00010c084240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084120();
  }
  else {
    lVar1 = param_1 + _DAT_11277244c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c2742a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c2172e0(param_1);
    param_1 = lVar2;
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107f85528; end: 107f85607; +[SCPreviewToolbarFilterStackingButtonItem accessoryButtonWithImageName:text:] */

void FUN_107f85528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(param_5);
  func_0x00010bfe8220(puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d88e8;
  _objc_alloc(PTR_PTR_1126d88e8);
  func_0x00010c23d0a0(puVar1);
  func_0x00010c014780(0,0,0x4044000000000000,0x4044000000000000,param_1,puVar2,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c1a9f00(puVar2,param_3,puVar1);
  func_0x00010c21d680(puVar2,param_3,1);
  func_0x00010c1d4b80(puVar2,param_3,0);
  func_0x00010c218d60(0xc010000000000000,0xc010000000000000,0xc010000000000000,0xc010000000000000,
                      puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f85608; end: 107f85627; -[SCPreviewToolbarFilterStackingButtonItem accessoryButtonsDatasource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f85608(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277244c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f85628; end: 107f8563b; -[SCPreviewToolbarFilterStackingButtonItem setAccessoryButtonsDatasource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f85628(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277244c,param_3);
  return;
}



/* Entry: 107f8563c; end: 107f8564b; -[SCPreviewToolbarFilterStackingButtonItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f8563c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277244c);
  return;
}



/* Entry: 107f8564c; end: 107f85657; -[SCSnapEditorFilterLayoutProvider previewCarouselPadding] */

undefined8 FUN_107f8564c(void)

{
  return 0x404c000000000000;
}



/* Entry: 107f85658; end: 107f856d3; -[SCSnapEditorSwipeFiltersServicesProvider provide] */

void FUN_107f85658(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010bf58ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf594c0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d88f0;
  _objc_alloc(PTR_PTR_1126d88f0);
  func_0x00010c04fb00();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f856d4; end: 107f8586f; -[SCSnapEditorSwipeFiltersServicesProvider createSmartCarouselFilterArranger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f856d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1;
  FUN_107f85870();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27e940();
  _objc_release(lVar1);
  _objc_release(lVar7);
  lVar7 = param_1;
  FUN_107f85870(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c081c20();
  _objc_release(lVar1);
  _objc_release(lVar7);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112772478;
    _objc_loadWeakRetained(lVar7);
  }
  lVar1 = lVar7;
  func_0x00010bfadc00(lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  puVar4 = PTR_PTR_1126d8898;
  _objc_alloc(PTR_PTR_1126d8898);
  lVar5 = lVar1;
  func_0x00010bf32780(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112772450;
  _objc_loadWeakRetained(lVar7);
  FUN_107f85870();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013220(puVar4,param_2,lVar1,0,lVar5,lVar2,lVar3,lVar7,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f85870; end: 107f85893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f85870(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112772458);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f85894; end: 107f85c5b; -[SCSnapEditorSwipeFiltersServicesProvider createSwipeFiltersWithSmartCarouselFilterArranger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f85894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_7);
  func_0x00010bf11fe0(puVar1,param_6,&PTR___NSConcreteGlobalBlock_110a15a30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_6,&PTR___NSConcreteGlobalBlock_110a15a50);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b9e78;
  func_0x00010c072be0();
  puVar4 = PTR_PTR_1126b9e78;
  if ((int)puVar3 == 0) {
    func_0x00010bf69c00(PTR_PTR_1126bf720);
  }
  else {
    func_0x00010c11cac0(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x00010c0c2620(puVar4);
  }
  puVar4 = PTR_PTR_1126d88f8;
  _objc_alloc();
  lVar5 = param_5;
  func_0x00010bde2520();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5 + _DAT_112772454;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_5 + _DAT_112772464;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar16;
  func_0x00010c094480();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_5 + _DAT_112772474;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar17;
  func_0x00010c29cc80();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_5 + _DAT_11277246c;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar18;
  func_0x00010c27e840();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_5 + _DAT_112772468;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar19;
  func_0x00010c1116c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d8900;
  _objc_opt_new();
  lVar12 = param_5 + _DAT_112772458;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_5 + _DAT_112772470;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar20;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 + _DAT_112772460;
    _objc_loadWeakRetained();
  }
  lVar15 = param_5;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0144a0(param_1,param_2,param_3,param_4,puVar4,param_6,param_7,lVar5,0,0,0,0,0,lVar7,0
                      ,0,puVar1,puVar2,0);
  _objc_release(lVar15);
  _objc_release(param_5);
  _objc_release(lVar14);
  _objc_release(lVar20);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(puVar3);
  _objc_release(lVar11);
  _objc_release(lVar19);
  _objc_release(lVar10);
  _objc_release(lVar18);
  _objc_release(lVar9);
  _objc_release(lVar17);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  func_0x00010c18b5e0(param_7,param_6,puVar4);
  func_0x00010c210800(param_7,param_6,puVar4);
  _objc_release(param_7);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f85c5c; end: 107f85c73;  */

void FUN_107f85c5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf03d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126d88a0,PTR_s_animationImages_11259e8f0);
  return;
}



/* Entry: 107f85c74; end: 107f85cfb; -[SCSnapEditorSwipeFiltersServicesProvider _commonLoggingParamsBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f85c74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11277245c;
    _objc_loadWeakRetained();
  }
  lVar1 = param_1;
  func_0x00010bf429e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c4588;
    func_0x00010c23f8a0(PTR_PTR_1126c4588,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f85cfc; end: 107f85d9f; -[SCSnapEditorSwipeFiltersServicesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f85cfc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112772478);
  _objc_destroyWeak(param_1 + _DAT_112772474);
  _objc_destroyWeak(param_1 + _DAT_112772470);
  _objc_destroyWeak(param_1 + _DAT_11277246c);
  _objc_destroyWeak(param_1 + _DAT_112772468);
  _objc_destroyWeak(param_1 + _DAT_112772464);
  _objc_destroyWeak(param_1 + _DAT_112772450);
  _objc_destroyWeak(param_1 + _DAT_112772460);
  _objc_destroyWeak(param_1 + _DAT_112772458);
  _objc_destroyWeak(param_1 + _DAT_112772454);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277245c);
  return;
}



/* Entry: 107f85da0; end: 107f85e63; -[SCSwipeFiltersInternalProvider initWithSwipeFilters:] */

undefined1 * FUN_107f85da0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fbe58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f85e64; end: 107f85e8b; -[SCSwipeFiltersInternalProvider swipeFiltersObservable] */

void FUN_107f85e64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f85e8c; end: 107f85e93; -[SCSwipeFiltersInternalProvider swipeFilters] */

undefined8 FUN_107f85e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f85e94; end: 107f85ec3; -[SCSwipeFiltersInternalProvider setSwipeFilters:] */

void FUN_107f85e94(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107f85ec4; end: 107f85ecb; -[SCSwipeFiltersInternalProvider swipeFiltersSubject] */

undefined8 FUN_107f85ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f85ecc; end: 107f85efb; -[SCSwipeFiltersInternalProvider setSwipeFiltersSubject:] */

void FUN_107f85ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f85efc; end: 107f85f2b; -[SCSwipeFiltersInternalProvider .cxx_destruct] */

void FUN_107f85efc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f85f2c; end: 107f85fef; -[SCPreviewFilterRawValue asLens] */

void FUN_107f85f2c(undefined8 param_1,undefined8 param_2)

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
  pcStack_38 = FUN_107f85ff0;
  uStack_30 = 0x107f86000;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107f86008;
  puStack_60 = &UNK_11084f020;
  puStack_48 = puStack_58;
  func_0x00010c0be880(param_1,param_2,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f85ff0; end: 107f86007;  */

void FUN_107f85ff0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f86008; end: 107f8619f;  */

void FUN_107f86008(long param_1,undefined8 param_2)

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



/* Entry: 107f861a0; end: 107f8623f; -[SCCarouselGroupConfig initWithGroupName:rangeStart:rangeEnd:softLimit:hardLimit:] */

undefined1 *
FUN_107f861a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fbe60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f86240; end: 107f86263; -[SCCarouselGroupConfig copyWithZone:] */

undefined8 FUN_107f86240(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f86264; end: 107f8633b; -[SCCarouselGroupConfig initWithCoder:] */

undefined1 * FUN_107f86264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fbe60;
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
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f8633c; end: 107f863d7; -[SCCarouselGroupConfig encodeWithCoder:] */

void FUN_107f8633c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ec9c18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ec9c38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ec9c58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ec9c78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ec9c98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f863d8; end: 107f863df; -[SCCarouselGroupConfig preferFasterCoding] */

undefined8 FUN_107f863d8(void)

{
  return 1;
}



/* Entry: 107f863e0; end: 107f86453; -[SCCarouselGroupConfig encodeWithFasterCoder:] */

void FUN_107f863e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93100(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf93100(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf93100(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf93100(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f86454; end: 107f864df; -[SCCarouselGroupConfig decodeWithFasterDecoder:] */

void FUN_107f86454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf67140();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = param_3;
  func_0x00010bf67140();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = param_3;
  func_0x00010bf67140();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = param_3;
  func_0x00010bf67140();
  _objc_release(param_3);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 107f864e0; end: 107f86543; -[SCCarouselGroupConfig setObject:forUInt64Key:] */

void FUN_107f864e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0x49d069dae5cac6) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f86544; end: 107f865df; -[SCCarouselGroupConfig setSInt64:forUInt64Key:] */

void FUN_107f86544(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 < 0x9cbec39294debc) {
    if (param_4 == 0x89dfc81f7b9b7f) {
      lVar1 = 0x18;
    }
    else {
      if (param_4 != 0x934dd9e8ebd808) {
        return;
      }
      lVar1 = 0x28;
    }
  }
  else if (param_4 == 0x9cbec39294debc) {
    lVar1 = 0x10;
  }
  else {
    if (param_4 != 0xee513e500a3f5a) {
      return;
    }
    lVar1 = 0x20;
  }
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 107f865e0; end: 107f865f3; +[SCCarouselGroupConfig fasterCodingVersion] */

undefined8 FUN_107f865e0(void)

{
  return 0x6dc2d4ca87d3649f;
}



/* Entry: 107f865f4; end: 107f865ff; +[SCCarouselGroupConfig fasterCodingKeys] */

undefined8 FUN_107f865f4(void)

{
  return 0x11324ec88;
}



/* Entry: 107f86600; end: 107f866b7; -[SCCarouselGroupConfig isEqual:] */

bool FUN_107f86600(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bc85c34(param_1,param_3,0x113728970,0x113728978,5,1);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_3);
    if (((*(long *)(param_3 + 0x10) == *(long *)(param_1 + 0x10)) &&
        (*(long *)(param_3 + 0x18) == *(long *)(param_1 + 0x18))) &&
       (*(long *)(param_3 + 0x20) == *(long *)(param_1 + 0x20))) {
      bVar1 = *(long *)(param_3 + 0x28) == *(long *)(param_1 + 0x28);
    }
    else {
      bVar1 = false;
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107f866b8; end: 107f86757; -[SCCarouselGroupConfig hash] */

ulong FUN_107f866b8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong auStack_50 [5];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfde980();
  auStack_50[2] = *(undefined8 *)(param_1 + 0x18);
  auStack_50[1] = *(undefined8 *)(param_1 + 0x10);
  auStack_50[4] = *(undefined8 *)(param_1 + 0x28);
  auStack_50[3] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = 8;
  do {
    uVar1 = *(ulong *)((long)auStack_50 + lVar2) | uVar1 << 0x20;
    uVar1 = ~uVar1 + uVar1 * 0x40000;
    uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
    uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
    uVar1 = uVar1 ^ uVar1 >> 0x16;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x28);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar1;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar1 + 8);
}



/* Entry: 107f86758; end: 107f8675f; -[SCCarouselGroupConfig groupName] */

undefined8 FUN_107f86758(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f86760; end: 107f86767; -[SCCarouselGroupConfig rangeStart] */

undefined8 FUN_107f86760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f86768; end: 107f8676f; -[SCCarouselGroupConfig rangeEnd] */

undefined8 FUN_107f86768(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f86770; end: 107f86777; -[SCCarouselGroupConfig softLimit] */

undefined8 FUN_107f86770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f86778; end: 107f8677f; -[SCCarouselGroupConfig hardLimit] */

undefined8 FUN_107f86778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f86780; end: 107f8678b; -[SCCarouselGroupConfig .cxx_destruct] */

void FUN_107f86780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f8678c; end: 107f8683b; +[SCCarouselGroupConfigBuilder withCarouselGroupConfig:] */

void FUN_107f8678c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8908;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c11f4a0();
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = param_3;
  func_0x00010c11f300();
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  uVar2 = param_3;
  func_0x00010c2464a0();
  *(undefined8 *)(puVar1 + 0x20) = uVar2;
  uVar2 = param_3;
  func_0x00010bfd37a0();
  _objc_release(param_3);
  *(undefined8 *)(puVar1 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f8683c; end: 107f86873; -[SCCarouselGroupConfigBuilder build] */

void FUN_107f8683c(void)

{
  _objc_alloc(PTR_PTR_1126d8910);
  func_0x00010c019200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f86874; end: 107f868ab; -[SCCarouselGroupConfigBuilder setGroupName:] */

long FUN_107f86874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f868ac; end: 107f868b3; -[SCCarouselGroupConfigBuilder setRangeStart:] */

void FUN_107f868ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107f868b4; end: 107f868bb; -[SCCarouselGroupConfigBuilder setRangeEnd:] */

void FUN_107f868b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107f868bc; end: 107f868c3; -[SCCarouselGroupConfigBuilder setSoftLimit:] */

void FUN_107f868bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107f868c4; end: 107f868cb; -[SCCarouselGroupConfigBuilder setHardLimit:] */

void FUN_107f868c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107f868cc; end: 107f868d7; -[SCCarouselGroupConfigBuilder .cxx_destruct] */

void FUN_107f868cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f868d8; end: 107f8692f; -[SCCarouselGroupConfigParser initWithSource:] */

undefined1 * FUN_107f868d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fbe68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x00010bdf3e60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107f86930; end: 107f86d03; -[SCCarouselGroupConfigParser _createStaticGroupMap] */

void FUN_107f86930(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined ***pppuVar22;
  int iVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110f27658;
  puVar2 = PTR_PTR_1126b3890;
  _objc_alloc();
  func_0x00010c0191e0();
  ppuStack_148 = &PTR____CFConstantStringClassReference_110f27618;
  puVar19 = PTR_PTR_1126b3890;
  puStack_e0 = puVar2;
  _objc_alloc();
  func_0x00010c0191e0();
  ppuStack_140 = &PTR____CFConstantStringClassReference_110f27518;
  puVar25 = PTR_PTR_1126b3890;
  puStack_d8 = puVar19;
  _objc_alloc();
  func_0x00010c0191e0();
  ppuStack_138 = &PTR____CFConstantStringClassReference_110f27558;
  puVar3 = PTR_PTR_1126b3890;
  puStack_d0 = puVar25;
  _objc_alloc();
  func_0x00010c0191e0();
  ppuStack_130 = &PTR____CFConstantStringClassReference_110f27538;
  puVar4 = PTR_PTR_1126b3890;
  puStack_c8 = puVar3;
  _objc_alloc();
  func_0x00010c0191e0();
  ppuStack_128 = &PTR____CFConstantStringClassReference_110f275b8;
  puVar5 = PTR_PTR_1126b3890;
  puStack_c0 = puVar4;
  _objc_alloc();
  func_0x00010c0191e0();
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f27598;
  puVar6 = PTR_PTR_1126b3890;
  puStack_b8 = puVar5;
  _objc_alloc();
  func_0x00010c0191e0();
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f275d8;
  puVar7 = PTR_PTR_1126b3890;
  puStack_b0 = puVar6;
  _objc_alloc();
  func_0x00010c0191e0();
  uVar8 = 0;
  puStack_a8 = puVar7;
  func_0x000108edf4d4();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b3890;
  uStack_110 = uVar8;
  _objc_alloc();
  func_0x00010c0191e0();
  uVar10 = 1;
  puStack_a0 = puVar9;
  func_0x000108edf4d4();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b3890;
  uStack_108 = uVar10;
  _objc_alloc();
  func_0x00010c0191e0();
  uVar12 = 2;
  puStack_98 = puVar11;
  func_0x000108edf4d4();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b3890;
  uStack_100 = uVar12;
  _objc_alloc();
  func_0x00010c0191e0();
  uVar14 = 3;
  puStack_90 = puVar13;
  func_0x000108edf4d4();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126b3890;
  uStack_f8 = uVar14;
  _objc_alloc();
  func_0x00010c0191e0();
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f274d8;
  puVar16 = PTR_PTR_1126b3890;
  puStack_88 = puVar15;
  _objc_alloc();
  func_0x00010c0191e0();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f274f8;
  puVar17 = PTR_PTR_1126b3890;
  puStack_80 = puVar16;
  _objc_alloc();
  func_0x00010c0191e0();
  ppuVar20 = &puStack_e0;
  pppuVar22 = &ppuStack_150;
  iVar23 = 0xe;
  puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar17;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar18;
  _objc_release(uVar24);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar25);
  _objc_release(puVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar20);
  puVar19 = *(undefined **)(puVar2 + 0x10);
  if (iVar23 == 0) {
    func_0x00010c0e00e0(puVar19,param_2,ppuVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar19 == (undefined *)0x0) {
      ppuVar21 = &PTR_PTR_110ac2318;
      if (pppuVar22 == (undefined ***)0x6) {
        ppuVar21 = &PTR_PTR_110ac2308;
      }
      ppuVar1 = &PTR_PTR_110ac2328;
      if (pppuVar22 != (undefined ***)0x7) {
        ppuVar1 = ppuVar21;
      }
      ppuVar21 = &PTR_PTR_110ac2300;
      if (pppuVar22 != (undefined ***)0x0) {
        ppuVar21 = ppuVar1;
      }
      puVar25 = *ppuVar21;
      _objc_retain(puVar25);
      puVar19 = PTR_PTR_1126b3890;
      _objc_alloc(PTR_PTR_1126b3890);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(0,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0191e0(puVar19,param_2,puVar25,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar25);
      goto LAB_107f86d78;
    }
    puVar19 = *(undefined **)(puVar2 + 0x10);
    ppuVar21 = ppuVar20;
  }
  else {
    ppuVar21 = &PTR____CFConstantStringClassReference_110f274f8;
  }
  func_0x00010c0e00e0(puVar19,param_2,ppuVar21);
  _objc_retainAutoreleasedReturnValue();
LAB_107f86d78:
  _objc_release(ppuVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 107f86d04; end: 107f86e2b; -[SCCarouselGroupConfigParser defaultCarouselGroupForFilterName:type:isReplacingVenueFilter:] */

void FUN_107f86d04(long param_1,undefined8 param_2,undefined **param_3,long param_4,int param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 0x10);
  if (param_5 == 0) {
    func_0x00010c0e00e0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      ppuVar4 = &PTR_PTR_110ac2318;
      if (param_4 == 6) {
        ppuVar4 = &PTR_PTR_110ac2308;
      }
      ppuVar1 = &PTR_PTR_110ac2328;
      if (param_4 != 7) {
        ppuVar1 = ppuVar4;
      }
      ppuVar4 = &PTR_PTR_110ac2300;
      if (param_4 != 0) {
        ppuVar4 = ppuVar1;
      }
      puVar5 = *ppuVar4;
      _objc_retain(puVar5);
      puVar2 = PTR_PTR_1126b3890;
      _objc_alloc(PTR_PTR_1126b3890);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(0,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0191e0(puVar2,param_2,puVar5,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar5);
      goto LAB_107f86d78;
    }
    puVar2 = *(undefined **)(param_1 + 0x10);
    ppuVar4 = param_3;
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f274f8;
  }
  func_0x00010c0e00e0(puVar2,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
LAB_107f86d78:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f86e2c; end: 107f86e5b; -[SCCarouselGroupConfigParser setFilterInfoList:] */

void FUN_107f86e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f86e5c; end: 107f86f47; -[SCCarouselGroupConfigParser absoluteScoreForFilterItem:] */

undefined8 FUN_107f86e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfae180(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bfae5a0();
  if ((lVar2 == 0) || (lVar2 = param_4, func_0x00010bfae5a0(), lVar4 = lVar1, lVar2 == 7)) {
    lVar2 = param_4;
    func_0x00010bfae180(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010be38ae0(param_2,param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 107f86f48; end: 107f86f9b; -[SCCarouselGroupConfigParser absoluteDefaultScoreForGeoFilter:] */

undefined8
FUN_107f86f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bfadea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be38ae0(param_2,param_3,param_4);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 107f86f9c; end: 107f8705b; -[SCCarouselGroupConfigParser _indexBasedScoreForFilterId:] */

float FUN_107f86f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107f8705c;
  puStack_50 = &UNK_110a15a70;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010bfece40(lVar2,param_2,&puStack_68);
  fVar3 = 0.0;
  if (lVar2 != 0x7fffffffffffffff) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0(lVar1);
    fVar3 = (float)(ulong)(lVar1 - lVar2);
  }
  _objc_release(uStack_48);
  _objc_release(param_3);
  return fVar3;
}



/* Entry: 107f8705c; end: 107f870bb;  */

undefined8
FUN_107f8705c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    *param_4 = 1;
  }
  return uVar1;
}



/* Entry: 107f870bc; end: 107f870c3; -[SCCarouselGroupConfigParser carouselSource] */

undefined8 FUN_107f870bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f870c4; end: 107f870f3; -[SCCarouselGroupConfigParser .cxx_destruct] */

void FUN_107f870c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f870f4; end: 107f87143; +[SCMediaFilterView videoFilterViewWithFrame:] */

void FUN_107f870f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc(PTR_PTR_1126d8918);
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f87144; end: 107f871a3; -[SCMediaFilterView initWithFrame:config:] */

undefined1 * FUN_107f87144(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fbe70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame_config__1125e29f0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
    func_0x00010c211780(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107f871a4; end: 107f87213; -[SCMediaFilterView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f871a4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fbe70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_1127724b8));
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_1127724bc));
  return;
}



/* Entry: 107f87214; end: 107f872a3; -[SCMediaFilterView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f87214(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127724b8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010bf20c00(param_1);
    func_0x00010c013de0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c066fa0(param_1,param_2,*(undefined8 *)(param_1 + lVar4),0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}


