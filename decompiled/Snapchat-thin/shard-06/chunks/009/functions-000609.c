/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104fac8b0; end: 104fac9c3;  */

void FUN_104fac8b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11d4a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdff400(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fac9c4; end: 104face7f; -[SCScanResultsSnapcodeAnalyzer _snapcodeIdentifiersObservableForImage:frameNumber:isPostCapture:] */

void FUN_104fac9c4(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14eae0();
  _objc_release(uVar1);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf684a0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
LAB_104facbf0:
    uVar11 = *(ulong *)(param_1 + 0x28);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar11;
    func_0x00010bfe5fc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c0cff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf3f1e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c0d0160();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf04b00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bfe70c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar6 = uVar11;
    _objc_opt_respondsToSelector(uVar11,PTR_s_runDeepScanWithBatchImages_image_11262e408);
    if ((uVar6 & 1) == 0) {
      _objc_release(uVar11);
      goto LAB_104facbf0;
    }
    puVar9 = PTR_PTR_1126b30e0;
    _objc_alloc(PTR_PTR_1126b30e0);
    func_0x00010bff3e00(0);
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar11;
    func_0x00010c1427a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  _objc_release(uVar11);
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_104face80;
  uStack_b8 = 0x104face90;
  uStack_b0 = 0;
  func_0x00010c0bf0a0(uVar6);
  puVar9 = PTR_PTR_1126ae6b8;
  if (puStack_d0[5] == 0) {
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar12 = *(long *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (((param_4 == 0) && (lVar12 != 0)) && ((*(byte *)(puStack_a0 + 3) & 1) == 0)) {
    _objc_release();
    if ((param_5 & 1) == 0) {
      puVar10 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bf671e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_retain(puVar10);
      func_0x00010c297260(uVar1);
      _objc_release(puVar10);
      _objc_release(uVar1);
      goto LAB_104facd1c;
    }
  }
  else {
    _objc_release();
  }
  _objc_retain(puVar9);
  puVar10 = puVar9;
LAB_104facd1c:
  _objc_release(puVar9);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  _objc_release(uVar6);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_d8,8);
  lVar12 = 8;
  __Block_object_dispose(&uStack_a8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = 0;
  return;
}



/* Entry: 104face80; end: 104face97;  */

void FUN_104face80(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104face98; end: 104facff3;  */

void FUN_104face98(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  puVar5 = PTR_PTR_1126af5d0;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bfa01c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar5;
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(puVar4 + 0x20) + 8) + 0x18) = lVar6 != 0;
  puVar5 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(puVar4 + 0x28) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar4 + 0x28) + 8) + 0x28) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104facff4; end: 104fad073;  */

void FUN_104facff4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar3 != 0;
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104fad074; end: 104fad0db;  */

/* WARNING: Possible PIC construction at 0x000104fad0ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104fad0b0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_104fad074(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    puVar1 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  }
  else {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_next__112614028,puVar1);
  return;
}



/* Entry: 104fad0dc; end: 104fad483; -[SCScanResultsSnapcodeAnalyzer _didReceiveIdentifier:inQuery:onFrame:error:] */

void FUN_104fad0dc(long param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined1 *param_5,undefined1 *param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined **unaff_x28;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  long lStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  ppuVar7 = &puStack_e0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar6 = *(undefined1 **)(param_1 + 0x10);
  uVar1 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    if (param_6 == (undefined1 *)0x0) {
      lVar2 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        func_0x00010c14eb60();
        _objc_release(uVar1);
        puVar6 = param_5;
      }
      else {
        func_0x00010c14eb60();
        _objc_release(uVar1);
        func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x60));
        uVar1 = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x60) = 0;
        _objc_release(uVar1);
        lVar2 = *(long *)(param_1 + 0x18);
        func_0x00010c08fa60();
        if ((lVar2 == 0) || (uVar8 = *(ulong *)(param_1 + 0x20), uVar8 == 0)) {
          puVar9 = (undefined *)0x0;
        }
        else {
          ppuStack_98 = &PTR____CFConstantStringClassReference_110dbed18;
          ppuStack_90 = &PTR____CFConstantStringClassReference_110dbed38;
          uStack_78 = *(undefined8 *)(param_1 + 0x10);
          uStack_80 = *(undefined8 *)(param_1 + 0x18);
          ppuStack_88 = &PTR____CFConstantStringClassReference_110dae8d8;
          if (uVar8 < 0x13) {
            ppuStack_70 = *(undefined ***)(&UNK_110860248 + uVar8 * 8);
          }
          else {
            ppuStack_70 = &PTR____CFConstantStringClassReference_110daf6b8;
          }
          puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar1 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_3;
        func_0x00010bfe5ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14eb00(uVar1);
        _objc_release(lVar2);
        _objc_release(uVar1);
        _objc_initWeak(auStack_a8,param_1);
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_a0 = lVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar3;
        func_0x00010c0cc3e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0xc2000000;
        pcStack_d0 = FUN_104fad484;
        puStack_c8 = &UNK_11085a578;
        param_2 = auStack_a8;
        _objc_copyWeak(auStack_b0,param_2);
        _objc_retain(param_3);
        lStack_c0 = param_3;
        _objc_retain(param_4);
        uStack_b8 = param_4;
        func_0x00010c297260(uVar1);
        _objc_release(uVar1);
        _objc_release(puVar4);
        _objc_release(lVar2);
        _objc_release(uVar3);
        _objc_release(uStack_b8);
        _objc_release(lStack_c0);
        _objc_destroyWeak(auStack_b0);
        _objc_destroyWeak(auStack_a8);
        _objc_release(puVar9);
        puVar6 = (undefined1 *)ppuVar7;
        unaff_x28 = &puStack_e0;
      }
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14eb60();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_6;
      func_0x00010c14f3c0();
      _objc_release(uVar1);
      func_0x00010be09680(param_1);
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x28 + 0x30));
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
  _objc_retain(puVar6);
  _objc_retain(param_2);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  puVar5 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdff6a0(param_3);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fad484; end: 104fad517;  */

void FUN_104fad484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdff6a0(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fad518; end: 104fad71b; -[SCScanResultsSnapcodeAnalyzer _didReceiveMetadata:forIdentifier:inQuery:error:] */

void FUN_104fad518(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0720c0(param_5,param_2,*(undefined8 *)(param_1 + 0x10));
  puVar3 = param_3;
  if ((int)param_5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14eb80();
    _objc_release(uVar1);
    if (param_6 != 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b31f0;
      _objc_alloc_init(PTR_PTR_1126b31f0);
      puVar3 = puVar2;
      FUN_104fadd58();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c6e00(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b31f8;
      _objc_alloc();
      puVar4 = puVar2;
      func_0x00010bf63640(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c0cb140(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05a5a0(puVar3,param_2,5,puVar4,puVar5,uVar1,0);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(param_3);
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14f3c0();
      _objc_release(uVar1);
    }
    if (puVar3 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126b31e0;
      func_0x00010c245300(PTR_PTR_1126b31e0,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58),param_2,puVar2);
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14f3a0();
      _objc_release(uVar1);
      func_0x00010be09680(param_1);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104fad71c; end: 104fad7c3; -[SCScanResultsSnapcodeAnalyzer .cxx_destruct] */

void FUN_104fad71c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 104fad7c4; end: 104fadac3; -[SCScanResultsSnapcodeAnalyzerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fad7c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + _DAT_1127189c4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  puVar5 = PTR_PTR_1126b3200;
  _objc_alloc();
  lVar14 = (long)_DAT_1127189c8;
  lVar1 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_1127189cc;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010c0d0060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_1127189d0;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010bf68480();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar9 = lVar14;
  func_0x00010c0cc620();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_1127189d4;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c160160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bd80();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127189d8);
  *(undefined **)(param_1 + _DAT_1127189d8) = puVar5;
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar14);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_1127189dc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar4);
  return;
}



/* Entry: 104fadac4; end: 104fadb03;  */

void FUN_104fadac4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebd920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104fadb04; end: 104fadb67; -[SCScanResultsSnapcodeAnalyzerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fadb04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_1127189d8;
  func_0x00010bf940a0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e5698;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fadb68; end: 104fadcd3; -[SCScanResultsSnapcodeAnalyzerEntryPoint _snapcodeDecoder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fadb68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1 + _DAT_1127189c4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b3208;
  _objc_alloc(PTR_PTR_1126b3208);
  lVar1 = param_1 + _DAT_1127189e0;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_1127189d0;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010bf95e00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c0fa900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058d20(puVar5,param_2,lVar3,lVar6,lVar7,lVar4);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104fadcd4; end: 104fadd57; -[SCScanResultsSnapcodeAnalyzerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fadcd4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127189c4);
  _objc_destroyWeak(param_1 + _DAT_1127189e0);
  _objc_destroyWeak(param_1 + _DAT_1127189d0);
  _objc_destroyWeak(param_1 + _DAT_1127189cc);
  _objc_destroyWeak(param_1 + _DAT_1127189c8);
  _objc_destroyWeak(param_1 + _DAT_1127189dc);
  _objc_destroyWeak(param_1 + _DAT_1127189d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127189d8,0);
  return;
}



/* Entry: 104fadd58; end: 104fadd6f;  */

void FUN_104fadd58(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbefb8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbefb8,
                      &PTR____CFConstantStringClassReference_110dbefd8,0);
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



/* Entry: 104fadd70; end: 104fade93; -[SCScanSnapcodeDecodeGRPCService initWithUnifiedGRPCClientFactory:endpointConfiguration:pfeImageConfiguration:performer:] */

undefined1 *
FUN_104fadd70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e56a0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bebd900();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined1 **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    func_0x00010bdeba60(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fade94; end: 104fae01b; -[SCScanSnapcodeDecodeGRPCService _createCallOptionsBuilder] */

void FUN_104fade94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1421a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1421a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c142060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar1,param_2,lVar3,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  FUN_104fae730();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110dbeff8);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar6;
  _objc_release(uVar7);
  func_0x00010c1eeba0(*(undefined8 *)(param_1 + 0x28),param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bef9140(uVar7,param_2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fae01c; end: 104fae1bf; -[SCScanSnapcodeDecodeGRPCService _snapcodeDecodeService] */

void FUN_104fae01c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf15fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320(puVar1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1eeba0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfbc8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfbc8e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebf80(puVar1,param_2,uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126b3210;
  _objc_alloc(PTR_PTR_1126b3210);
  func_0x00010c058f80();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104fae1c0; end: 104fae3ef; -[SCScanSnapcodeDecodeGRPCService decodeSnapcodeWithRequestId:image:] */

void FUN_104fae1c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126b3218;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  func_0x00010c1eb980();
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6ea40();
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf6ea20();
  uVar5 = param_6;
  func_0x00010c085c20(param_1,param_2,param_6,param_4,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126b3220;
  _objc_alloc_init(PTR_PTR_1126b3220);
  func_0x00010c1aa0e0();
  puVar7 = PTR_PTR_1126b3228;
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c14ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0(puVar7,param_4,uVar4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa840(puVar6,param_4,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c1a9f00(puVar1,param_4,puVar6);
  puVar7 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104fae3f0;
  puStack_70 = &UNK_110860350;
  puStack_68 = puVar7;
  _objc_retain();
  func_0x00010bf671c0(uVar2,param_4,puVar1,uVar4,&puStack_88);
  puVar8 = puVar7;
  func_0x00010bfbc3e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_68);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104fae3f0; end: 104fae46f;  */

void FUN_104fae3f0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  func_0x00010c245360(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fae470; end: 104fae533;  */

void FUN_104fae470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b3230;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf66f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c298be0(param_2);
  _objc_release(param_2);
  func_0x00010c05fa40(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b3238;
  _objc_alloc(PTR_PTR_1126b3238);
  func_0x00010c01ba00();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104fae534; end: 104fae53b; -[SCScanSnapcodeDecodeGRPCService unifiedGRPCService] */

undefined8 FUN_104fae534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104fae53c; end: 104fae56b; -[SCScanSnapcodeDecodeGRPCService setUnifiedGRPCService:] */

void FUN_104fae53c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fae56c; end: 104fae5cb; -[SCScanSnapcodeDecodeGRPCService .cxx_destruct] */

void FUN_104fae56c(long param_1)

{
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



/* Entry: 104fae5cc; end: 104fae63f; -[UNISCPCNV3SnapcodeDecodeService initWithUnifiedGrpcService:] */

undefined1 * FUN_104fae5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e56a8;
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



/* Entry: 104fae640; end: 104fae723; -[UNISCPCNV3SnapcodeDecodeService decodeSnapcodeWithRequest:callOptionsBuilder:handler:] */

void FUN_104fae640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b3240;
  _objc_opt_class(PTR_PTR_1126b3240);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dbf038,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fae724; end: 104fae72f; -[UNISCPCNV3SnapcodeDecodeService .cxx_destruct] */

void FUN_104fae724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fae730; end: 104fae7fb;  */

void FUN_104fae730(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104fae7fc;
  puStack_30 = &UNK_110860380;
  puStack_28 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf97e80(puVar2,param_2,&puStack_48);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fae7fc; end: 104fae89b;  */

void FUN_104fae7fc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dbf058);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(puVar1);
  *(bool *)param_4 = (float)((double)param_3 * -0.10000000149011612 + 1.0) <= 0.5;
  return;
}



/* Entry: 104fae89c; end: 104faebcb; -[SCSnapcodeScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fae89c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
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
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar1 = param_1 + _DAT_112718a00;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b3248;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112718a04;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112718a08;
  lVar2 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010bf46880();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112718a0c;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112718a10;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_112718a14;
  lVar11 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c15afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar13 = lVar23;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112718a18;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112718a1c;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfc1360();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112718a20;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c134260();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112718a24;
  _objc_loadWeakRetained();
  lVar21 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d460(puVar5,param_2,lVar6,lVar7,lVar8,lVar10,lVar12,lVar13,lVar15,lVar17,lVar19,
                      lVar4,lVar20,lVar22);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar23);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  param_1 = param_1 + lVar24;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 104faebcc; end: 104faec6f; -[SCSnapcodeScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104faebcc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112718a24);
  _objc_destroyWeak(param_1 + _DAT_112718a28);
  _objc_destroyWeak(param_1 + _DAT_112718a20);
  _objc_destroyWeak(param_1 + _DAT_112718a1c);
  _objc_destroyWeak(param_1 + _DAT_112718a00);
  _objc_destroyWeak(param_1 + _DAT_112718a18);
  _objc_destroyWeak(param_1 + _DAT_112718a0c);
  _objc_destroyWeak(param_1 + _DAT_112718a14);
  _objc_destroyWeak(param_1 + _DAT_112718a10);
  _objc_destroyWeak(param_1 + _DAT_112718a08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112718a04);
  return;
}



/* Entry: 104faec70; end: 104faef4b; -[SCSnapcodeViewController initWithUserSession:configurationObservable:snapchatterPublicInfoFetcher:bitmojiAvatarProvider:bitmojiSelfieProvider:bitmojiSelfieFetcher:contentDelivery:geoFilterURLDataFetching:qrCodeRepository:performer:ghostImageService:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104faec70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126e56b0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112718a2c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718a30;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718a34;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718a38;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718a3c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718a40;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718a44;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718a48;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718a4c;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718a50;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112718a54;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112718a58,param_14);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104faef4c; end: 104faefcb; -[SCSnapcodeViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104faef4c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b3250;
  _objc_alloc();
  func_0x00010c015100(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112718a5c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 104faefcc; end: 104faf0ff; -[SCSnapcodeViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104faefcc(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e56b0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112718a30);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112718a60);
  *(undefined8 *)(param_1 + _DAT_112718a60) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104faf100; end: 104faf147;  */

void FUN_104faf100(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff280();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104faf148; end: 104faf1bf; -[SCSnapcodeViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104faf148(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e56b0;
  lStack_30 = param_4;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  uVar1 = *(undefined8 *)(param_4 + _DAT_112718a5c);
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c28c360(param_3,uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 104faf1c0; end: 104faf2a3; -[SCSnapcodeViewController _didReceiveConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104faf1c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112718a64;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  func_0x00010be93be0(param_1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0c11c0(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104faf2a4; end: 104faf2fb;  */

void FUN_104faf2a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffbe0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104faf2fc; end: 104faf353; -[SCSnapcodeViewController _snapcodeDidLoadWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104faf2fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112718a58;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c245020();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104faf354; end: 104faf393; -[SCSnapcodeViewController _resetSnapcode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104faf354(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112718a68);
  *(undefined8 *)(param_1 + _DAT_112718a68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112718a6c);
  *(undefined8 *)(param_1 + _DAT_112718a6c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104faf394; end: 104faf63b; -[SCSnapcodeViewController _didReceiveUserConfigurationWithUserIdId:showBitmojiSilhouette:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104faf394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112718a2c);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010be8ace0(param_1);
  }
  else {
    func_0x00010be8a800(param_1);
    _objc_initWeak(auStack_78,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112718a38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104faf63c;
    puStack_88 = &UNK_110843540;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112718a68);
    *(undefined8 *)(param_1 + _DAT_112718a68) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112718a3c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c15ae00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar5 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112718a6c);
    *(undefined8 *)(param_1 + _DAT_112718a6c) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104faf63c; end: 104faf693;  */

void FUN_104faf63c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8a800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104faf694; end: 104faf7db; -[SCSnapcodeViewController _reloadCurrentUserSnapcode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104faf694(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_1 + _DAT_112718a64) != 0) {
    lVar1 = param_1;
    func_0x00010bde4960();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112718a2c);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0720c0(lVar1,param_2,uVar2);
    _objc_release(uVar2);
    if ((int)lVar3 != 0) {
      puVar4 = PTR_PTR_1126b3258;
      _objc_alloc(PTR_PTR_1126b3258);
      uVar5 = *(undefined8 *)(param_1 + _DAT_112718a38);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + _DAT_112718a3c);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c15ade0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05ad60(puVar4,param_2,lVar1,uVar2,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(uVar5);
      func_0x00010bee4f00(param_1,param_2,puVar4);
      _objc_release(puVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104faf7dc; end: 104faf9ab; -[SCSnapcodeViewController _reloadSnapchatterSnapcode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104faf7dc(undefined **param_1,undefined **param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined **ppuStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_1;
  if (*(long *)((long)param_1 + (long)_DAT_112718a64) != 0) {
    func_0x00010bde4960();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)((long)param_1 + (long)_DAT_112718a2c);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = ppuVar5;
      param_3 = ppuVar1;
      func_0x00010c0720c0();
      _objc_release(ppuVar1);
      if (((ulong)unaff_x22 & 1) == 0) {
        _objc_initWeak(&puStack_58,param_1);
        uVar2 = *(undefined8 *)((long)param_1 + (long)_DAT_112718a34);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_50 = ppuVar5;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_104faf9ac;
        puStack_70 = &UNK_110853590;
        unaff_x23 = &puStack_88;
        param_2 = &puStack_58;
        _objc_copyWeak(auStack_60);
        param_3 = unaff_x22;
        ppuStack_68 = param_1;
        func_0x00010c09d7c0(uVar2);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(unaff_x22);
        _objc_release(uVar2);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(&puStack_58);
      }
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(&puStack_58);
  __Unwind_Resume();
  pcStack_98 = FUN_104faf9ac;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = ppuVar5 + 5;
    _objc_loadWeakRetained();
    unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_2 == (undefined **)0x0) {
      ppuVar5 = (undefined **)ppuVar5[4];
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_108 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_100 = &PTR____CFConstantStringClassReference_110dbf0b8;
      unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = unaff_x23;
      func_0x00010bebd960(unaff_x22);
      _objc_release(unaff_x23);
      _objc_release(unaff_x24);
    }
    else {
      unaff_x23 = unaff_x22;
      func_0x00010bde4960();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = unaff_x23;
      ppuVar1 = unaff_x24;
      func_0x00010c0720c0();
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      if ((int)ppuVar3 == 0) goto LAB_104fafbf0;
      unaff_x22 = (undefined **)PTR_PTR_1126b3258;
      _objc_alloc();
      unaff_x23 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = param_2;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = unaff_x24;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05ad60();
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      _objc_release(ppuVar1);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      ppuVar5 = ppuVar5 + 5;
      _objc_loadWeakRetained();
      ppuVar1 = unaff_x22;
      func_0x00010bee4f00();
    }
    _objc_release(ppuVar5);
    _objc_release(unaff_x22);
  }
  else {
    param_2 = ppuVar5 + 5;
    _objc_loadWeakRetained();
    ppuVar1 = param_3;
    func_0x00010bebd960();
  }
LAB_104fafbf0:
  _objc_release(param_2);
  ppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_104fafc3c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_150 = unaff_x24;
  ppuStack_148 = unaff_x23;
  ppuStack_140 = unaff_x22;
  ppuStack_138 = ppuVar5;
  ppuStack_130 = param_2;
  ppuStack_128 = param_3;
  ppuStack_120 = &puStack_a0;
  _objc_retain(ppuVar1);
  _objc_initWeak(auStack_168,ppuVar3);
  uVar2 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112718a5c);
  ppuStack_160 = &PTR____CFConstantStringClassReference_110dbf098;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bdd4a80(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_170,auStack_168);
  func_0x00010c28d020(uVar2);
  _objc_release(ppuVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  __Unwind_Resume(ppuVar1);
  ppuVar1 = ppuVar1 + 4;
  _objc_loadWeakRetained(ppuVar1);
  func_0x00010bebd960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 104faf9ac; end: 104fafc3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104faf9ac(long param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained();
    unaff_x23 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_2 == (undefined *)0x0) {
      param_1 = *(long *)(param_1 + 0x20);
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110dbf0b8;
      unaff_x24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = unaff_x23;
      func_0x00010bebd960(unaff_x22);
      _objc_release(unaff_x23);
      _objc_release(unaff_x24);
    }
    else {
      unaff_x23 = unaff_x22;
      func_0x00010bde4960();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = unaff_x23;
      puVar2 = unaff_x24;
      func_0x00010c0720c0();
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      if ((int)puVar1 == 0) goto LAB_104fafbf0;
      unaff_x22 = PTR_PTR_1126b3258;
      _objc_alloc();
      unaff_x23 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = param_2;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = unaff_x24;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05ad60();
      _objc_release(puVar3);
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      puVar2 = unaff_x22;
      func_0x00010bee4f00();
    }
    _objc_release(param_1);
    _objc_release(unaff_x22);
  }
  else {
    param_2 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained();
    puVar2 = param_3;
    func_0x00010bebd960();
  }
LAB_104fafbf0:
  _objc_release(param_2);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_104fafc3c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  puStack_b0 = unaff_x22;
  lStack_a8 = param_1;
  puStack_a0 = param_2;
  puStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_initWeak(auStack_d8,puVar1);
  uVar4 = *(undefined8 *)(puVar1 + _DAT_112718a5c);
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dbf098;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bdd4a80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e0,auStack_d8);
  func_0x00010c28d020(uVar4);
  _objc_release(puVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  __Unwind_Resume(puVar2);
  puVar2 = puVar2 + 0x20;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bebd960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104fafc3c; end: 104fafdc7; -[SCSnapcodeViewController _updateWithUserInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fafc3c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112718a5c);
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dbf098;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bdd4a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c28d020(uVar2);
  _objc_release(param_1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bebd960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fafdc8; end: 104fafdf7;  */

void FUN_104fafdc8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebd960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fafdf8; end: 104fafed7; -[SCSnapcodeViewController _bitmojiSilhouette] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fafdf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112718a54);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112718a4c);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104fafed8;
  puStack_48 = &UNK_110841f80;
  puStack_40 = puVar1;
  uStack_38 = uVar4;
  _objc_retain(uVar4);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_60);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(puStack_40);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fafed8; end: 104faff13;  */

void FUN_104fafed8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c7420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104faff14; end: 104fb01cb; -[SCSnapcodeViewController _fetchAssetWithURL:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104faff14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc();
  func_0x00010c0295e0();
  puVar2 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar3 = PTR_PTR_1126b1050;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a200(puVar3);
  _objc_release(puVar4);
  puVar5 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar4 = PTR_PTR_1126b1378;
  func_0x00010c0c46a0(puVar1);
  func_0x00010c1081a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112718a44);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf64e40(0x4143c68000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x00010bf88aa0(uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fb01cc; end: 104fb01ff;  */

void FUN_104fb01cc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be961c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fb0200; end: 104fb02f7; -[SCSnapcodeViewController _retrieveAssetWithContentKey:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb0200(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112718a44);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104fb02f8;
  puStack_40 = &UNK_110860410;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c13e560(uVar1,param_2,param_3,puVar2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fb02f8; end: 104fb0303;  */

void FUN_104fb02f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104fb0300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104fb0304; end: 104fb03d3; -[SCSnapcodeViewController _configurationUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb0304(long param_1,undefined8 param_2)

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
  pcStack_38 = FUN_104fb03d4;
  uStack_30 = 0x104fb03e4;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104fb03ec;
  puStack_60 = &UNK_1108431e0;
  puStack_48 = puStack_58;
  func_0x00010c0c11c0(*(undefined8 *)(param_1 + _DAT_112718a64),param_2,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fb03d4; end: 104fb03eb;  */

void FUN_104fb03d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104fb03ec; end: 104fb0423;  */

void FUN_104fb03ec(long param_1,undefined8 param_2)

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



/* Entry: 104fb0424; end: 104fb054f; -[SCSnapcodeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb0424(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718a50,0);
  _objc_storeStrong(param_1 + _DAT_112718a6c,0);
  _objc_storeStrong(param_1 + _DAT_112718a68,0);
  _objc_storeStrong(param_1 + _DAT_112718a60,0);
  _objc_storeStrong(param_1 + _DAT_112718a64,0);
  _objc_storeStrong(param_1 + _DAT_112718a5c,0);
  _objc_destroyWeak(param_1 + _DAT_112718a58);
  _objc_storeStrong(param_1 + _DAT_112718a54,0);
  _objc_storeStrong(param_1 + _DAT_112718a4c,0);
  _objc_storeStrong(param_1 + _DAT_112718a48,0);
  _objc_storeStrong(param_1 + _DAT_112718a44,0);
  _objc_storeStrong(param_1 + _DAT_112718a40,0);
  _objc_storeStrong(param_1 + _DAT_112718a3c,0);
  _objc_storeStrong(param_1 + _DAT_112718a38,0);
  _objc_storeStrong(param_1 + _DAT_112718a34,0);
  _objc_storeStrong(param_1 + _DAT_112718a30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718a2c,0);
  return;
}



/* Entry: 104fb0550; end: 104fb0817; -[SCSnapcodeView initWithFrame:userSession:bitmojiSelfieFetcher:geoFilterURLDataFetching:qrCodeRepository:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104fb0550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_88 = PTR_PTR_1126e56b8;
  uStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_90,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112718a70) = 1;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_112718a74;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar5 = (long)_DAT_112718a78;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    lVar5 = (long)_DAT_112718a7c;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112718a80;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112718a84;
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112718a88;
    _objc_retain(param_10);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112718a8c);
    *(undefined **)((long)puVar1 + (long)_DAT_112718a8c) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 104fb0818; end: 104fb0933; -[SCSnapcodeView updateWithUserInfo:contexts:completionQueue:bitmojiSilhouette:completionBlock:] */

void FUN_104fb0818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf1acc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf1c0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c28d000(param_1,param_2,uVar1,uVar2,uVar3,param_4,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fb0934; end: 104fb0c47; -[SCSnapcodeView updateWithUserId:bitmojiAvatarId:bitmojiSelfieId:contexts:completionQueue:bitmojiSilhouette:completionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb0934(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (*(long *)(param_1 + _DAT_112718a7c) == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_4;
    func_0x00010c08fa60();
    bVar1 = lVar2 != 0;
  }
  *(int *)(param_1 + _DAT_112718a90) = *(int *)(param_1 + _DAT_112718a90) + 1;
  func_0x00010be93c00(param_1);
  func_0x00010bec0480(param_1);
  func_0x00010be8e400(param_1);
  if (bVar1) {
    _objc_initWeak(auStack_70,param_1);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_9);
    func_0x00010be8e060(param_1);
    _objc_release(param_9);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  else if (param_8 == 0) {
    *(undefined1 *)(param_1 + _DAT_112718a94) = 1;
    func_0x00010be35bc0(param_1);
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_retain(param_7);
    uVar3 = param_9;
    _objc_retain(param_9);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_8);
    _objc_release(uVar3);
    _objc_release(param_9);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fb0c48; end: 104fb0d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb0c48(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 & 1) == 0) {
      *(int *)(lVar1 + _DAT_112718a90) = *(int *)(lVar1 + _DAT_112718a90) + 1;
      func_0x00010be93c00(lVar1);
      func_0x00010bec0480(lVar1);
      *(undefined1 *)(lVar1 + _DAT_112718a94) = 1;
      func_0x00010be8e400(lVar1);
    }
    else if (((*(char *)(lVar1 + _DAT_112718a98) == '\x01') &&
             (lVar3 = *(long *)(param_1 + 0x30), lVar3 != 0)) &&
            (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_104fb0d5c;
      puStack_40 = &UNK_110849530;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      func_0x00010007380c(lVar3,&puStack_58);
      _objc_release(lStack_38);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104fb0d5c; end: 104fb0d67;  */

void FUN_104fb0d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104fb0d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104fb0d68; end: 104fb0e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb0d68(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010be93c00(uVar1);
    func_0x00010bec0480(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be06700(*(undefined8 *)(param_1 + 0x20));
    _objc_release(param_2);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112718a94) = 1;
  *(int *)(*(long *)(param_1 + 0x20) + (long)_DAT_112718a90) =
       *(int *)(*(long *)(param_1 + 0x20) + (long)_DAT_112718a90) + 1;
  func_0x00010be8e400(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bec31f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__stopLoadingWithSuccess__11258e620,param_2 != 0);
  return;
}



/* Entry: 104fb0e1c; end: 104fb1023; -[SCSnapcodeView _renderSnapcodeForUserId:currentSession:shouldShowSnapchatGhost:contexts:completionQueue:completionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb0e1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112718a88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11cd00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  uStack_70 = param_5;
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 104fb1024; end: 104fb10a3;  */

void FUN_104fb1024(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c264440(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be308a0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fb10a4; end: 104fb11df; -[SCSnapcodeView _handleSnapcodeData:success:userId:shouldShowSnapchatGhost:completionQueue:completionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb10a4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,ulong param_6,long param_7,long param_8)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_4 != 0) {
    func_0x00010be067c0(param_1);
  }
  *(undefined1 *)(param_1 + _DAT_112718a98) = 1;
  func_0x00010be4efe0(param_1);
  if ((param_6 & 1) == 0) {
    if (((param_7 == 0) || (param_8 == 0)) || ((*(byte *)(param_1 + _DAT_112718a94) & 1) == 0))
    goto LAB_104fb11a4;
  }
  else if ((param_7 == 0) || (param_8 == 0)) goto LAB_104fb11a4;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104fb11e0;
  puStack_60 = &UNK_110849530;
  _objc_retain(param_8);
  lStack_58 = param_8;
  func_0x00010007380c(param_7,&puStack_78);
  _objc_release(lStack_58);
LAB_104fb11a4:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104fb11e0; end: 104fb11eb;  */

void FUN_104fb11e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104fb11e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104fb11ec; end: 104fb1477; -[SCSnapcodeView _renderBitmojiForUserId:avatarId:selfieId:currentSession:contexts:completionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb11ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_78,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104fb1478;
  puStack_a0 = &UNK_1108604d0;
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = param_6;
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(param_8);
  ppuVar1 = &puStack_b8;
  uStack_90 = param_8;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126afd38;
  _objc_opt_new(PTR_PTR_1126afd38);
  func_0x00010c2bc360();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8ea0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8160(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b78c0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112718a80);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_retain(ppuVar1);
  func_0x00010bfaa020(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fb1478; end: 104fb1533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb1478(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(int *)(param_1 + 0x38) == *(int *)(lVar1 + _DAT_112718a90))) {
    *(undefined1 *)(lVar1 + _DAT_112718a94) = 1;
    if (param_2 != 0) {
      func_0x00010be06700(lVar1);
    }
    func_0x00010be35bc0(lVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2 != 0);
    }
    func_0x00010bec31e0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fb1534; end: 104fb153f;  */

void FUN_104fb1534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104fb153c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104fb1540; end: 104fb1593; -[SCSnapcodeView updateWidth:] */

void FUN_104fb1540(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bfb68e0();
  _CGRectGetMinX();
  uVar2 = uVar1;
  func_0x00010bfb68e0(param_2);
  _CGRectGetMinY();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,uVar2,param_1,param_1,param_2,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 104fb1594; end: 104fb169b; -[SCSnapcodeView snapcodeSVGView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb1594(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112718a9c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b3260;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c15cda0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112718aa0));
    func_0x00010c15cda0(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c15cda0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112718aa4));
    func_0x00010c15cda0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112718a74));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104fb169c; end: 104fb17b3; -[SCSnapcodeView previewImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb169c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112718aa0;
  lVar3 = *(long *)(param_5 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010bf20c00(param_5);
    func_0x00010bf20c00(param_5);
    func_0x00010c013de0(0,0,param_3 * 0.33,param_4 * 0.33);
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    *(undefined **)(param_5 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c21e900(*(undefined8 *)(param_5 + lVar4),param_6,0);
    func_0x00010c161020(*(undefined8 *)(param_5 + lVar4),param_6,
                        &PTR____CFConstantStringClassReference_110dbf0d8);
    func_0x00010c16d4a0(*(undefined8 *)(param_5 + lVar4),param_6,0x3f);
    func_0x00010befbb60(param_5,param_6,*(undefined8 *)(param_5 + lVar4));
    func_0x00010c15cda0(param_5,param_6,*(undefined8 *)(param_5 + lVar4));
    func_0x00010c15cda0(param_5,param_6,*(undefined8 *)(param_5 + _DAT_112718a9c));
    func_0x00010c15cda0(param_5,param_6,*(undefined8 *)(param_5 + _DAT_112718aa4));
    func_0x00010c15cda0(param_5,param_6,*(undefined8 *)(param_5 + _DAT_112718a74));
    lVar3 = *(long *)(param_5 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104fb17b4; end: 104fb18df; -[SCSnapcodeView bitmojiLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb17b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112718aa4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b3268;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182ca0();
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110dbf158);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182c80();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c15cda0(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c15cda0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_112718a74));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104fb18e0; end: 104fb195f; -[SCSnapcodeView loadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb18e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112718aa8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    _objc_alloc();
    func_0x00010bff0f20();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    func_0x00010bf21300(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104fb1960; end: 104fb1b3b; -[SCSnapcodeView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb1960(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126e56b8;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  dVar2 = param_3 * 0.0198;
  func_0x00010b2bd8f4(dVar2);
  lVar1 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(dVar2);
  _objc_release(lVar1);
  func_0x00010bf20c00(param_5);
  dVar2 = param_3 * 0.17;
  func_0x00010b2bd8f4(dVar2);
  lVar1 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar2);
  _objc_release(lVar1);
  func_0x00010bf20c00(param_5);
  dVar2 = param_3 * 0.5;
  func_0x00010bf20c00(param_5);
  dVar3 = param_4 * 0.5;
  func_0x00010bf20c00(param_5);
  param_3 = param_3 * 0.5;
  func_0x00010bf20c00(param_5);
  lVar1 = (long)_DAT_112718aa4;
  func_0x00010c1739e0(0,0,param_3,*(undefined8 *)(param_5 + lVar1));
  func_0x00010c17a6a0(dVar2,dVar3,*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  lVar1 = (long)_DAT_112718aa0;
  func_0x00010c1739e0(0,0,param_3 * 0.33,param_4 * 0.33,*(undefined8 *)(param_5 + lVar1));
  func_0x00010c17a6a0(dVar2,dVar3,*(undefined8 *)(param_5 + lVar1));
  func_0x00010c17a6a0(dVar2,dVar3,*(undefined8 *)(param_5 + _DAT_112718aa8));
  func_0x00010bf20c00(param_5);
  _CGRectInset();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112718a9c));
  func_0x00010bf20c00(param_5);
  _CGRectInset();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112718a74));
  return;
}



/* Entry: 104fb1b3c; end: 104fb1bef; -[SCSnapcodeView _resetSnapcodeViewForBitmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb1b3c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112718a78));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112718a9c),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112718aa0),param_2,1);
  *(undefined1 *)(param_1 + _DAT_112718a98) = 0;
  *(undefined1 *)(param_1 + _DAT_112718a94) = 0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((param_3 & 1) == 0) {
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112718a74),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fb1bf0; end: 104fb1d7b; -[SCSnapcodeView _drawPreviewImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb1bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c111360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c111360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c111360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(lVar1);
  if (*(char *)(param_1 + _DAT_112718a70) == '\x01') {
    lVar1 = param_1;
    func_0x00010c111360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(lVar1);
    _CGAffineTransformMakeScale(&uStack_60,0x3fe8000000000000,0x3fe8000000000000);
    lVar1 = param_1;
    func_0x00010c111360(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    func_0x00010c219960();
    _objc_release(lVar1);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104fb1d7c;
    puStack_a0 = &UNK_110842e18;
    lStack_98 = param_1;
    func_0x00010bf03460(0x3fd6666666666666,0,0x3feb333333333333,0x4039000000000000,
                        PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,&puStack_b8,0);
  }
  return;
}



/* Entry: 104fb1d7c; end: 104fb1dff;  */

void FUN_104fb1d7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c111360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c111360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 104fb1e00; end: 104fb1ebb; -[SCSnapcodeView _drawSnapcode:] */

bool FUN_104fb1e00(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    puVar3 = PTR_PTR_1126b3278;
    _objc_alloc();
    func_0x00010c04e820();
    puVar4 = puVar3;
    func_0x00010c0f4840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    bVar1 = puVar4 == (undefined *)0x0;
    if (puVar4 == (undefined *)0x0) {
      func_0x00010c2450e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eaae0();
      _objc_release(param_1);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104fb1ebc; end: 104fb1f07; -[SCSnapcodeView _hideSnapcode:] */

/* WARNING: Possible PIC construction at 0x000104fb1ee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104fb1eec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb1ebc(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112718a78),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 104fb1f08; end: 104fb1f17; -[SCSnapcodeView _hidePreviewImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb1f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112718aa0),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 104fb1f18; end: 104fb20ab; -[SCSnapcodeView _startLoadingForBitmoji:] */

/* WARNING: Possible PIC construction at 0x000104fb1f58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104fb1f5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb1f18(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    lVar1 = param_1;
    func_0x00010c09cea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
    _objc_release(lVar1);
    func_0x00010c255900(*(undefined8 *)(param_1 + _DAT_112718aa4));
  }
  else {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112718aa8));
    func_0x00010bf1bd40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104fb20ac; end: 104fb21d7; -[SCSnapcodeView _stopLoadingWithSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb20ac(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined1 auStack_50 [48];
  
  if ((*(char *)(param_1 + _DAT_112718a98) == '\x01') &&
     (*(char *)(param_1 + _DAT_112718a94) == '\x01')) {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112718aa8));
    if ((param_3 == 0) || (*(char *)(param_1 + _DAT_112718a70) != '\x01')) {
      lVar1 = (long)_DAT_112718aa4;
      func_0x00010c255900(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar1),PTR_s_setHidden__1126479f8,1);
      return;
    }
    lVar1 = (long)_DAT_112718aa4;
    func_0x00010c209ce0(0,*(undefined8 *)(param_1 + lVar1));
    _CGAffineTransformMakeScale(auStack_50,0x3fe8000000000000,0x3fe8000000000000);
    func_0x00010c209d60(*(undefined8 *)(param_1 + lVar1));
    func_0x00010c1e5ce0(0x3fd3333333333333,*(undefined8 *)(param_1 + lVar1));
    func_0x00010c255960(*(undefined8 *)(param_1 + lVar1));
  }
  return;
}



/* Entry: 104fb21d8; end: 104fb21ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb21d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112718aa4),
             PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 104fb21f0; end: 104fb221f; -[SCSnapcodeView _loadedWithSuccess:] */

void FUN_104fb21f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be35d00(param_1,param_2,(uint)param_3 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bec31f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopLoadingWithSuccess__11258e620,param_3);
  return;
}



/* Entry: 104fb2220; end: 104fb225f; -[SCSnapcodeView setLoadingIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb2220(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718aa8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fb2260; end: 104fb229f; -[SCSnapcodeView setPreviewImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb2260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718aa0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fb22a0; end: 104fb22df; -[SCSnapcodeView setBitmojiLoadingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb22a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718aa4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fb22e0; end: 104fb23af; -[SCSnapcodeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb22e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718aa4,0);
  _objc_storeStrong(param_1 + _DAT_112718aa0,0);
  _objc_storeStrong(param_1 + _DAT_112718aa8,0);
  _objc_storeStrong(param_1 + _DAT_112718a9c,0);
  _objc_storeStrong(param_1 + _DAT_112718a8c,0);
  _objc_storeStrong(param_1 + _DAT_112718a88,0);
  _objc_storeStrong(param_1 + _DAT_112718a84,0);
  _objc_storeStrong(param_1 + _DAT_112718a80,0);
  _objc_storeStrong(param_1 + _DAT_112718a7c,0);
  _objc_storeStrong(param_1 + _DAT_112718a78,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718a74,0);
  return;
}



/* Entry: 104fb23b0; end: 104fb24d7; -[SCPulsingView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104fb23b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_1126e56c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + (long)_DAT_112718aac) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112718ab0) = 0x3ff0000000000000;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112718ab4);
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uVar4 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112718ab8);
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112718abc) = 0x3ff0000000000000;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112718ac0) = 0;
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 104fb24d8; end: 104fb2627; -[SCPulsingView startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb24d8(long param_1,undefined8 param_2)

{
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(param_1 + _DAT_112718ac0) = 1;
  func_0x00010c251fa0();
  func_0x00010c1677c0(param_1);
  func_0x00010c2520e0(&uStack_50,param_1);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(param_1,param_2,&uStack_80);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x104fb25b8;
  puStack_90 = &UNK_110842e18;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_104fb2628;
  puStack_b8 = &UNK_110841f20;
  lStack_b0 = param_1;
  lStack_88 = param_1;
  func_0x00010bf03440(*(undefined8 *)(param_1 + _DAT_112718abc),0,PTR__OBJC_CLASS___UIView_1126aec20
                      ,param_2,0x20018,&puStack_a8,&puStack_d0);
  return;
}



/* Entry: 104fb2628; end: 104fb262f;  */

void FUN_104fb2628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be71510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__performAnimationTickIfNecessary_112579ee0);
  return;
}



/* Entry: 104fb2630; end: 104fb2713; -[SCPulsingView stopAnimatingWithComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb2630(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  *(undefined1 *)(param_2 + _DAT_112718ac0) = 0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c11bb00(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104fb2714;
  puStack_50 = &UNK_110842e18;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104fb2784;
  puStack_78 = &UNK_110842508;
  uStack_70 = param_4;
  lStack_48 = param_2;
  _objc_retain(param_4);
  func_0x00010bf03440(param_1,0,puVar1,param_3,0x20004,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(param_4);
  return;
}



/* Entry: 104fb2714; end: 104fb2783;  */

void FUN_104fb2714(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c251fa0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1677c0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x20) == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uVar1 = 0;
  }
  else {
    func_0x00010c2520e0(&uStack_50);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(uVar1,param_2,&uStack_80);
  return;
}



/* Entry: 104fb2784; end: 104fb2797;  */

void FUN_104fb2784(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104fb2790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104fb2798; end: 104fb27d3; -[SCPulsingView stopAnimatingImmediately] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb2798(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112718ac0) = 0;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fb27d4; end: 104fb27e3; -[SCPulsingView isAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104fb27d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112718ac0);
}



/* Entry: 104fb27e4; end: 104fb2917; -[SCPulsingView _performAnimationTickIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb27e4(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  uVar2 = param_1;
  func_0x00010c074c20();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = param_1;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar3 != 0;
      _objc_release();
    }
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf07b60();
  _objc_release(puVar4);
  if ((*(char *)(param_1 + (long)_DAT_112718ac0) != '\x01' || !bVar1) || puVar5 == (undefined *)0x2)
  {
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104fb2918;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_58);
  return;
}


