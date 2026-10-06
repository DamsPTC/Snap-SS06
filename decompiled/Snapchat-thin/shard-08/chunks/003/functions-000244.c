/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106036d68; end: 106036d6f; -[SCMyUnifiedProfileMapSectionDataProvider addListener:] */

void FUN_106036d68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106036d70; end: 106036d77; -[SCMyUnifiedProfileMapSectionDataProvider removeListener:] */

void FUN_106036d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106036d78; end: 106036dab; -[SCMyUnifiedProfileMapSectionDataProvider setSectionDataModel:] */

void FUN_106036d78(long param_1)

{
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106036dac; end: 106036dfb; -[SCMyUnifiedProfileMapSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_106036dac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf10fa0();
  _objc_release(lVar3);
  uVar1 = 1;
  if (lVar4 == 1) {
    uVar1 = 2;
  }
  uVar2 = 0;
  if (lVar4 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 106036dfc; end: 106036e4f; -[SCMyUnifiedProfileMapSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_106036dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106036e50;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106036e50; end: 106036f13;  */

void FUN_106036e50(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be1e080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c0840e0();
  if (lVar2 == 0) {
    _objc_retain(&PTR____CFConstantStringClassReference_110e39698);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e39698;
  }
  else {
    lVar2 = param_2;
    func_0x00010c0840e0();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e39518;
    if (lVar2 != 1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e39538;
    }
  }
  puVar3 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(ppuVar4);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106036f14; end: 106036fcf; -[SCMyUnifiedProfileMapSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_106036f14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e39518;
  puVar1 = PTR_PTR_1126aeaa0;
  _objc_opt_class();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e39698;
  puVar2 = PTR_PTR_1126c7348;
  puStack_30 = puVar1;
  _objc_opt_class();
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e39538;
  puVar1 = PTR_PTR_1126c73d8;
  puStack_28 = puVar2;
  _objc_opt_class();
  ppuVar4 = &puStack_30;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar4,&ppuStack_48,3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_retain(ppuVar4);
    ppuVar3 = ppuVar4;
    func_0x00010c0840e0();
    if (ppuVar3 == (undefined **)0x0) {
      func_0x00010be1e0a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar3 = ppuVar4;
      func_0x00010c0840e0();
      if (ppuVar3 == (undefined **)0x1) {
        func_0x00010be1e0c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106036fd0; end: 10603704f; -[SCMyUnifiedProfileMapSectionDataProvider _getContentViewModelForIndexPath:] */

void FUN_106036fd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0840e0();
  if (lVar1 == 0) {
    func_0x00010be1e0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c0840e0();
    if (lVar1 == 1) {
      func_0x00010be1e0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = 0;
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106037050; end: 10603718f; -[SCMyUnifiedProfileMapSectionDataProvider _getContentViewModelForMap] */

void FUN_106037050(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf10fa0();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0fa5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126c7370;
  _objc_alloc(PTR_PTR_1126c7370);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51c80(uVar2);
  func_0x00010c03f760(puVar5,param_2,1,uVar3,1,0,uVar4,1);
  puVar6 = PTR_PTR_1126c7358;
  _objc_alloc(PTR_PTR_1126c7358);
  func_0x00010c046180();
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106037190; end: 1060375c3; -[SCMyUnifiedProfileMapSectionDataProvider _getContentViewModelForSharingStatus] */

void FUN_106037190(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined1 *puStack_1f0;
  long lStack_1e8;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  lVar4 = lVar2;
  func_0x00010bfcc660();
  lVar5 = lVar2;
  func_0x00010c22c5c0();
  lVar6 = lVar2;
  func_0x00010c2a4ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar7 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = 0;
    do {
      lVar22 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar8 = *(ulong *)(param_1 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bfb9020();
        _objc_release(uVar8);
        if (4 < uVar9 || (1L << (uVar9 & 0x3f) & 0x19U) == 0) {
          lVar21 = lVar21 + 1;
        }
        lVar22 = lVar22 + 1;
      } while (lVar7 != lVar22);
      lVar7 = lVar6;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar6);
  if ((int)lVar4 == 0) {
    ppuVar10 = &PTR____CFConstantStringClassReference_110e395b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e395b8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar5 == 1) {
      ppuVar23 = &PTR____CFConstantStringClassReference_110e39638;
    }
    else {
      if (lVar5 != 3) {
        if (lVar5 == 2) {
          if (lVar21 == 1) {
            ppuVar12 = &PTR____CFConstantStringClassReference_110e395d8;
            func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e395d8,0);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            ppuVar12 = &PTR____CFConstantStringClassReference_110e395f8;
            func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e395f8,0);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar12);
        }
        else {
          ppuVar23 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        goto LAB_10603747c;
      }
      ppuVar23 = &PTR____CFConstantStringClassReference_110e39618;
    }
    func_0x00010bcbeaa8(ppuVar23,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar10 = &PTR____CFConstantStringClassReference_110e39578;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e39578,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = &PTR____CFConstantStringClassReference_110e39598;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e39598,0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10603747c:
  puVar13 = PTR_PTR_1126b2c10;
  _objc_alloc();
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar10;
  func_0x000108f62fec(ppuVar10,puVar14);
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar23;
  func_0x000108f634a8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar15;
  func_0x000108f637bc();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar16;
  func_0x000108f62cd0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053700();
  _objc_release(ppuVar17);
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar12);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(ppuVar23);
  _objc_release(ppuVar10);
  _objc_release(puVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
    ppuVar12 = &puStack_260;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_210,lVar2);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_230 = 0xc2000000;
    pcStack_228 = FUN_10603777c;
    puStack_220 = &UNK_110845ae0;
    _objc_copyWeak(auStack_218,auStack_210);
    ppuVar10 = &puStack_238;
    _objc_retainBlock();
    puStack_260 = puVar3;
    uStack_258 = 0xc2000000;
    uStack_250 = 0x1060377c4;
    puStack_248 = &UNK_110845ae0;
    puVar19 = auStack_210;
    _objc_copyWeak(auStack_240,puVar19);
    _objc_retainBlock();
    ppuStack_208 = &PTR____CFConstantStringClassReference_110e39698;
    ppuVar23 = ppuVar10;
    _objc_retainBlock();
    ppuStack_200 = &PTR____CFConstantStringClassReference_110e39518;
    puVar18 = (undefined1 *)ppuVar12;
    ppuStack_1f8 = ppuVar23;
    _objc_retainBlock();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_1f0 = puVar18;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    _objc_release(ppuVar23);
    _objc_release(ppuVar12);
    _objc_destroyWeak(auStack_240);
    _objc_release(ppuVar10);
    _objc_destroyWeak(auStack_218);
    puVar18 = auStack_210;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_240);
      _objc_destroyWeak(auStack_218);
      _objc_destroyWeak(auStack_210);
      __Unwind_Resume(puVar18);
      _objc_retain(puVar19);
      puVar18 = puVar18 + 0x20;
      _objc_loadWeakRetained(puVar18);
      func_0x00010bde5320();
      _objc_release(puVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar18);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1060375c4; end: 10603777b; -[SCMyUnifiedProfileMapSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_1060375c4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  ppuVar2 = &puStack_e0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_90,param_1);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10603777c;
  puStack_a0 = &UNK_110845ae0;
  _objc_copyWeak(auStack_98,auStack_90);
  ppuVar1 = &puStack_b8;
  _objc_retainBlock();
  puStack_e0 = puVar5;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1060377c4;
  puStack_c8 = &UNK_110845ae0;
  puVar6 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar6);
  _objc_retainBlock();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e39698;
  ppuVar3 = ppuVar1;
  _objc_retainBlock();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e39518;
  puVar4 = (undefined1 *)ppuVar2;
  ppuStack_78 = ppuVar3;
  _objc_retainBlock();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_c0);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_98);
  puVar4 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar6);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde5320();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10603777c; end: 10603780b;  */

void FUN_10603777c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5320();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10603780c; end: 1060378e3; -[SCMyUnifiedProfileMapSectionDataProvider _configureMapCardCell:] */

void FUN_10603780c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126c7348;
  _objc_opt_class(PTR_PTR_1126c7348);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x68);
  func_0x0001090223e0();
  if (iVar2 == 0) {
    func_0x00010c1c26a0(uVar1);
    func_0x00010c1c2680(uVar1);
  }
  else {
    func_0x000109022458(*(undefined8 *)(param_1 + 0x68));
    func_0x00010c193160(uVar1);
    func_0x000109022484(*(undefined8 *)(param_1 + 0x68));
    func_0x00010c193140(uVar1);
    func_0x00010c194220(uVar1);
    func_0x00010902241c(*(undefined8 *)(param_1 + 0x68));
    func_0x00010c212380(uVar1);
    func_0x00010c1c20c0(uVar1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060378e4; end: 10603797f; -[SCMyUnifiedProfileMapSectionDataProvider _configureShareLocationCell:] */

void FUN_1060378e4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aeaa0;
  _objc_opt_class(PTR_PTR_1126aeaa0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1eccc0(uVar1);
  uVar3 = uVar1;
  func_0x00010c271420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c160fc0(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106037980; end: 1060379b3; -[SCMyUnifiedProfileMapSectionDataProvider _onLocationSharingPreferencesUpdated:] */

void FUN_106037980(long param_1)

{
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060379b4; end: 1060379e7; -[SCMyUnifiedProfileMapSectionDataProvider mapStatusFetcherDidLoadMyStatus:] */

void FUN_1060379b4(long param_1)

{
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060379e8; end: 106037a1b; -[SCMyUnifiedProfileMapSectionDataProvider onLocationPermissionStatusChange:] */

void FUN_1060379e8(long param_1)

{
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106037a1c; end: 106037a23; -[SCMyUnifiedProfileMapSectionDataProvider locationPermissionObserverUserId] */

void FUN_106037a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_userId_112682320);
  return;
}



/* Entry: 106037a24; end: 106037a3b; -[SCMyUnifiedProfileMapSectionDataProvider dataProviderDelegate] */

void FUN_106037a24(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106037a3c; end: 106037a47; -[SCMyUnifiedProfileMapSectionDataProvider setDataProviderDelegate:] */

void FUN_106037a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 106037a48; end: 106037a4f; -[SCMyUnifiedProfileMapSectionDataProvider updateQueuePerformer] */

undefined8 FUN_106037a48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106037a50; end: 106037a7f; -[SCMyUnifiedProfileMapSectionDataProvider setUpdateQueuePerformer:] */

void FUN_106037a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106037a80; end: 106037a87; -[SCMyUnifiedProfileMapSectionDataProvider sectionDataModel] */

undefined8 FUN_106037a80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106037a88; end: 106037a8f; -[SCMyUnifiedProfileMapSectionDataProvider mapStatusEnabled] */

undefined1 FUN_106037a88(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



/* Entry: 106037a90; end: 106037b7b; -[SCMyUnifiedProfileMapSectionDataProvider .cxx_destruct] */

void FUN_106037a90(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106037b7c; end: 106037bef; -[SCMapUnifiedProfilePresenter initWithFriendProfileScopeExposer:] */

undefined1 * FUN_106037b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef328;
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



/* Entry: 106037bf0; end: 106037d1b; -[SCMapUnifiedProfilePresenter presentProfileOnViewController:person:] */

void FUN_106037bf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    uStack_90 = 0x93;
    uStack_88 = 1;
    uStack_78 = 0x11;
    uStack_80 = 0xffffffffcf5d0adf;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uVar4 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      func_0x00010c015a00(puVar3,param_2,&uStack_90,puVar2,uVar4,param_1);
    }
    _objc_release(uVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106037d1c; end: 106037d63; -[SCMapUnifiedProfilePresenter friendProfileDidDismiss:] */

void FUN_106037d1c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106037d64; end: 106037d6f; -[SCMapUnifiedProfilePresenter .cxx_destruct] */

void FUN_106037d64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106037d70; end: 106037f0b; -[SCProfileCollectionViewMapCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106037d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ef330;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010c160fc0(param_5);
  lVar1 = param_5;
  func_0x00010be5ca40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_5 + _DAT_11273d69c);
  _objc_retain(lVar5);
  if ((lVar1 != 0) && (lVar5 != 0)) {
    func_0x00010bf31be0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(param_5);
    func_0x00010c232d00();
    func_0x00010c19f0e0(0,0,param_3,param_4,lVar5);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(lVar5);
    func_0x00010bf199e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    func_0x00010bf20c00(lVar5);
    func_0x00010c19f0e0(puVar3);
    _objc_retainAutorelease(puVar2);
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar3);
    lVar4 = lVar5;
    func_0x00010c08c0e0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar5);
  _objc_release(lVar1);
  return;
}



/* Entry: 106037f0c; end: 106038003; -[SCProfileCollectionViewMapCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106037f0c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c7358;
  _objc_opt_class(PTR_PTR_1126c7358);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11273d6a0;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_106037fe4;
    }
    uVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    func_0x00010beaf280(param_1);
  }
LAB_106037fe4:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106038004; end: 10603809f; -[SCProfileCollectionViewMapCell _setupProfileMapView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106038004(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010be5ca40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + _DAT_11273d6a4) == 0) {
      func_0x00010beaf2a0(param_1);
    }
    else {
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_1060380a0;
      puStack_30 = &UNK_110842e18;
      lStack_28 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_48);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1060380a0; end: 1060380a7;  */

void FUN_1060380a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea9250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setUpEmbeddedMapView_112587e38);
  return;
}



/* Entry: 1060380a8; end: 106038497; -[SCProfileCollectionViewMapCell _setupProfileSnapshotMapView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060380a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  
  uVar1 = param_5;
  func_0x00010be5ca40();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 != 0) && (lVar18 = (long)_DAT_11273d6a8, *(long *)(param_5 + lVar18) != 0)) {
    lVar20 = (long)_DAT_11273d6ac;
    lVar2 = *(long *)(param_5 + lVar20);
    if (lVar2 != 0) {
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        puVar4 = PTR_PTR_1126b40c0;
        _objc_alloc_init();
        uVar3 = *(undefined8 *)(param_5 + lVar18);
        uVar5 = param_5;
        func_0x00010c29d9e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar1;
        func_0x00010c0ba8e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c06b7c0();
        uVar19 = 3;
        if ((int)uVar7 == 0) {
          uVar19 = 0x4b;
        }
        func_0x00010bf247a0(uVar3,param_6,puVar4,uVar5,uVar19,param_5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar5);
        lVar18 = (long)_DAT_11273d69c;
        func_0x00010c219b60(*(undefined8 *)(param_5 + lVar18),param_6,0);
        uVar19 = *(undefined8 *)(param_5 + lVar18);
        *(undefined **)(param_5 + lVar18) = puVar4;
        _objc_retain(puVar4);
        _objc_release(uVar19);
        uVar5 = param_5;
        func_0x00010bf31be0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(uVar5);
        func_0x00010c14c940(*(undefined8 *)(param_5 + lVar18));
        func_0x00010bf9d620(*(undefined8 *)(param_5 + lVar20),param_6,uVar3);
        _objc_release(puVar4);
        _objc_release(uVar3);
      }
      else {
        lVar2 = (long)_DAT_11273d69c;
        lVar18 = *(long *)(param_5 + lVar2);
        if (lVar18 == 0) {
          uVar3 = *(undefined8 *)(param_5 + lVar20);
          func_0x00010c150520();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = uVar3;
          func_0x00010c29c060();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = *(undefined8 *)(param_5 + lVar2);
          *(undefined8 *)(param_5 + lVar2) = uVar19;
          _objc_release(uVar17);
          _objc_release(uVar3);
          lVar18 = *(long *)(param_5 + lVar2);
        }
        func_0x00010c219b60(lVar18,param_6,0);
        uVar5 = param_5;
        func_0x00010bf31be0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(uVar5);
        func_0x00010c14c940(*(undefined8 *)(param_5 + lVar2));
        func_0x00010c1cbe20(param_5);
      }
      puVar4 = PTR_PTR_1126b4768;
      _objc_alloc(PTR_PTR_1126b4768);
      func_0x00010bf20c00(param_5);
      uVar5 = uVar1;
      func_0x00010c0ba8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c15a320();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00010c0ba8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c1378e0();
      uVar9 = uVar1;
      func_0x00010c0ba8e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bfe1e40();
      uVar11 = uVar1;
      func_0x00010c0ba8e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c117220();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar1;
      func_0x00010c0ba8e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010c237e00();
      uVar15 = uVar1;
      func_0x00010c0ba8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c06b7c0();
      func_0x00010c0286a0(param_3,param_4,puVar4,param_6,uVar6,uVar8 & 0xffffffff,0,uVar10,uVar12,
                          uVar14,(byte)uVar16 ^ 1);
      _objc_release(uVar15);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar5 = param_5;
      func_0x00010c29d9e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_5;
      func_0x00010bebdbe0(param_5,param_6,uVar6,puVar4);
      _objc_release(uVar6);
      _objc_release(uVar5);
      if ((uVar7 & 1) == 0) {
        uVar5 = param_5;
        func_0x00010c29d9e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840();
        _objc_release(uVar5);
      }
      func_0x00010c1cbe20(param_5);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106038498; end: 10603907b; -[SCProfileCollectionViewMapCell _setUpEmbeddedMapView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106038498(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  double *pdVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_5;
  func_0x00010be5ca40();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar3 != 0) && (lVar23 = (long)_DAT_11273d6a4, *(long *)(param_5 + lVar23) != 0)) {
    func_0x00010bf8b9c0(param_5);
    dVar25 = param_1;
    func_0x00010bf8b9a0(param_5);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    lVar18 = (long)_DAT_11273d6b0;
    puVar20 = *(undefined **)(param_5 + lVar18);
    if (puVar20 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126b40c0;
      dVar29 = dVar25;
      _objc_alloc_init();
      lVar19 = (long)_DAT_11273d69c;
      func_0x00010c219b60(*(undefined8 *)(param_5 + lVar19));
      _objc_retain(puVar5);
      uVar10 = *(undefined8 *)(param_5 + lVar19);
      *(undefined **)(param_5 + lVar19) = puVar5;
      _objc_release(uVar10);
      lVar6 = param_5;
      func_0x00010bf31be0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar6);
      func_0x00010c14c940(*(undefined8 *)(param_5 + lVar19));
      lVar6 = lVar3;
      func_0x00010c0ba8e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06b7c0();
      _objc_release(lVar6);
      puVar9 = PTR_PTR_1126c73a0;
      _objc_alloc();
      func_0x00010c03b220();
      uVar10 = *(undefined8 *)(param_5 + lVar23);
      func_0x00010bf21f80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_5 + lVar18);
      *(undefined8 *)(param_5 + lVar18) = uVar10;
      _objc_release(uVar4);
      puVar20 = PTR__OBJC_CLASS___UIView_1126aec20;
      uVar21 = *(ulong *)(param_5 + lVar18);
      _objc_retain(uVar21);
      _objc_opt_class(puVar20);
      uVar7 = uVar21;
      _objc_opt_isKindOfClass(uVar21,puVar20);
      uVar2 = uVar21;
      if ((uVar7 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar21);
      func_0x00010c219b60(uVar2);
      func_0x00010befbb60(*(undefined8 *)(param_5 + lVar19));
      func_0x00010c14c940(uVar2);
      func_0x00010c212380(*(undefined8 *)(param_5 + lVar18));
      lVar23 = lVar3;
      func_0x00010c0ba8e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51c80();
      _objc_release(lVar23);
      lVar23 = (long)_DAT_11273d6b8;
      *(double *)(param_5 + lVar23) = dVar29;
      ((double *)(param_5 + lVar23))[1] = param_2;
      func_0x00010bfb68e0(uVar2);
      dVar30 = 0.0;
      if (0.0 <= param_1) {
        dVar30 = param_1;
      }
      dVar26 = (double)NEON_fminnm(dVar30,0x4039800000000000);
      _exp2(dVar26);
      dVar30 = -85.0511287798066;
      if (-85.0511287798066 <= dVar29) {
        dVar30 = dVar29;
      }
      dVar27 = (double)NEON_fminnm(dVar30,0x40554345b1a549d7);
      dVar27 = dVar27 * 0.017453292519943295;
      _cos(dVar27);
      dVar28 = 0.2617993877991494;
      _tan(0x3fd0c152382d7365);
      puVar20 = PTR_PTR_1126c5a00;
      _objc_alloc();
      param_3 = 0;
      dVar30 = dVar29;
      func_0x00010bffd4e0(dVar29,param_2,0,dVar25,
                          (param_4 * ((dVar27 * 6.283185307179586 * 6378137.0) / (dVar26 * 512.0)) *
                          0.5) / dVar28);
      uVar4 = *(undefined8 *)(param_5 + lVar18);
      func_0x00010bf29d60();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010c071800();
      _objc_release(uVar4);
      if ((int)uVar10 == 0) {
        func_0x00010bf01f00(puVar20);
        puVar24 = *(undefined **)(param_5 + lVar18);
        func_0x00010c0baae0(puVar24);
        _objc_retainAutoreleasedReturnValue();
        if (dVar30 <= 0.0) {
          param_3 = 0;
          func_0x00010c17a700(dVar29,param_2,0,puVar24);
        }
        else {
          func_0x00010c176040(puVar24);
        }
      }
      else {
        puVar24 = PTR_PTR_1126b1dc8;
        func_0x00010c271ea0(dVar29,param_2,PTR_PTR_1126b1dc8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf01f00(puVar20);
        if (dVar29 <= 0.0) {
          ppuVar8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111845a0;
        }
        else {
          ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          dVar29 = param_1;
        }
        func_0x00010bf01f00(puVar20);
        if (dVar29 <= 0.0) {
          puVar22 = (undefined *)0x0;
        }
        else {
          puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df720(dVar25,PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
        }
        puVar11 = PTR_PTR_1126b1dc8;
        func_0x00010bf2a160(PTR_PTR_1126b1dc8);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_5 + lVar18);
        func_0x00010bf29d60(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d1840();
        _objc_release(uVar10);
        _objc_release(puVar11);
        _objc_release(puVar22);
        _objc_release(ppuVar8);
      }
      _objc_release(puVar24);
      uVar10 = *(undefined8 *)(param_5 + lVar18);
      func_0x00010bf218e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar3;
      func_0x00010c0ba8e0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar23;
      func_0x00010c15a320();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21ef40(uVar10);
      _objc_release(puVar24);
      _objc_release(lVar18);
      _objc_release(lVar23);
      _objc_release(uVar10);
      lVar23 = (long)_DAT_11273d6bc;
      if ((*(long *)(param_5 + lVar23) == 0) &&
         (lVar18 = (long)_DAT_11273d6c0, *(long *)(param_5 + lVar18) != 0)) {
        puVar22 = PTR_PTR_1126c73e0;
        _objc_alloc();
        lVar6 = param_5;
        func_0x00010c29d9e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c061f60();
        _objc_release(lVar6);
        uVar10 = *(undefined8 *)(param_5 + lVar18);
        func_0x00010bf21f80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_5 + lVar23);
        *(undefined8 *)(param_5 + lVar23) = uVar10;
        _objc_release(uVar4);
        lVar18 = param_5;
        func_0x00010bf31be0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(lVar18);
        func_0x00010c219b60(*(undefined8 *)(param_5 + lVar23));
        puVar24 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar12 = *(undefined8 *)(param_5 + lVar23);
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = param_5;
        func_0x00010bf31be0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar18;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar12;
        func_0x00010bf493c0(0x4028000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_5 + lVar23);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        lVar23 = param_5;
        func_0x00010bf31be0(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar23;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar13;
        func_0x00010bf493c0(0xc024000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar24);
        _objc_release(puVar11);
        _objc_release(uVar4);
        _objc_release(lVar19);
        _objc_release(lVar23);
        _objc_release(uVar13);
        _objc_release(uVar10);
        _objc_release(lVar6);
        _objc_release(lVar18);
        _objc_release(uVar12);
        lVar23 = param_5;
        func_0x00010bf31be0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08cdc0();
        _objc_release(lVar23);
        _objc_release(puVar22);
      }
      _objc_release(puVar20);
      _objc_release(uVar2);
      _objc_release(puVar9);
    }
    else {
      dVar29 = dVar25;
      _objc_retain(puVar20);
      _objc_opt_class(puVar5);
      puVar9 = puVar20;
      _objc_opt_isKindOfClass(puVar20,puVar5);
      puVar5 = puVar20;
      if (((ulong)puVar9 & 1) == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar20);
      lVar23 = lVar3;
      func_0x00010c0ba8e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51c80();
      _objc_release(lVar23);
      pdVar1 = (double *)(param_5 + _DAT_11273d6b8);
      if ((2.220446049250313e-16 < ABS(*pdVar1 - dVar29)) ||
         (2.220446049250313e-16 < ABS(pdVar1[1] - param_2))) {
        func_0x00010bfb68e0(puVar5);
        dVar30 = 0.0;
        if (0.0 <= param_1) {
          dVar30 = param_1;
        }
        dVar26 = (double)NEON_fminnm(dVar30,0x4039800000000000);
        _exp2(dVar26);
        dVar30 = -85.0511287798066;
        if (-85.0511287798066 <= dVar29) {
          dVar30 = dVar29;
        }
        dVar27 = (double)NEON_fminnm(dVar30,0x40554345b1a549d7);
        dVar27 = dVar27 * 0.017453292519943295;
        _cos(dVar27);
        dVar28 = 0.2617993877991494;
        _tan(0x3fd0c152382d7365);
        puVar20 = PTR_PTR_1126c5a00;
        _objc_alloc(PTR_PTR_1126c5a00);
        param_3 = 0;
        dVar30 = dVar29;
        func_0x00010bffd4e0(dVar29,param_2,0,dVar25,
                            (((dVar27 * 6.283185307179586 * 6378137.0) / (dVar26 * 512.0)) * param_4
                            * 0.5) / dVar28);
        uVar4 = *(undefined8 *)(param_5 + lVar18);
        func_0x00010bf29d60();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar4;
        func_0x00010c071800();
        _objc_release(uVar4);
        if ((int)uVar10 == 0) {
          func_0x00010bf01f00(puVar20);
          puVar9 = *(undefined **)(param_5 + lVar18);
          func_0x00010c0baae0(puVar9);
          _objc_retainAutoreleasedReturnValue();
          if (dVar30 <= 0.0) {
            param_3 = 0;
            func_0x00010c17a700(dVar29,param_2,0,puVar9);
          }
          else {
            func_0x00010c176040(puVar9);
          }
        }
        else {
          puVar9 = PTR_PTR_1126b1dc8;
          dVar30 = dVar29;
          func_0x00010c271ea0(dVar29,param_2,PTR_PTR_1126b1dc8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf01f00(puVar20);
          if (dVar30 <= 0.0) {
            ppuVar8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111845a0;
          }
          else {
            ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            dVar30 = param_1;
          }
          func_0x00010bf01f00(puVar20);
          if (dVar30 <= 0.0) {
            puVar24 = (undefined *)0x0;
          }
          else {
            puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(dVar25,PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
          }
          puVar22 = PTR_PTR_1126b1dc8;
          func_0x00010bf2a160(PTR_PTR_1126b1dc8);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = *(undefined8 *)(param_5 + lVar18);
          func_0x00010bf29d60(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d1840();
          _objc_release(uVar10);
          _objc_release(puVar22);
          _objc_release(puVar24);
          _objc_release(ppuVar8);
        }
        _objc_release(puVar9);
        *pdVar1 = dVar29;
        pdVar1[1] = param_2;
        _objc_release(puVar20);
      }
    }
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b4768;
    _objc_alloc(PTR_PTR_1126b4768);
    func_0x00010bf20c00(param_5);
    lVar23 = lVar3;
    func_0x00010c0ba8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar23;
    func_0x00010c15a320();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c0ba8e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1378e0();
    lVar19 = lVar3;
    func_0x00010c0ba8e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe1e40();
    lVar14 = lVar3;
    func_0x00010c0ba8e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c117220();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar3;
    func_0x00010c0ba8e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237e00();
    func_0x00010c0286a0(param_3,puVar5);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar19);
    _objc_release(lVar6);
    _objc_release(lVar18);
    _objc_release(lVar23);
    lVar23 = param_5;
    func_0x00010c29d9e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(lVar23);
    func_0x00010c1cbe20(param_5);
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10603907c; end: 10603908f; +[SCProfileCollectionViewMapCell sizeWithViewModel:constrainedToSize:] */

void FUN_10603907c(void)

{
  return;
}



/* Entry: 106039090; end: 1060390f3; -[SCProfileCollectionViewMapCell _mapCellViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106039090(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c7358;
  uVar4 = *(ulong *)(param_1 + _DAT_11273d6a0);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060390f4; end: 1060392ef; -[SCProfileCollectionViewMapCell _snapshotViewModel:producesSameStaticMapAs:] */

ulong FUN_1060390f4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 == 0) || (param_6 == 0)) {
    uVar5 = (ulong)(param_5 == param_6);
    goto LAB_10603927c;
  }
  func_0x00010c0b9d60(param_5);
  dVar6 = param_1;
  dVar7 = param_2;
  func_0x00010c0b9d60(param_6);
  uVar5 = 0;
  if ((param_1 != dVar6) || (param_2 != dVar7)) goto LAB_10603927c;
  uVar1 = param_5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
LAB_1060391e4:
    uVar5 = param_5;
    func_0x00010c237fe0();
    uVar3 = param_6;
    func_0x00010c237fe0();
    if ((int)uVar5 == (int)uVar3) {
      uVar5 = param_5;
      func_0x00010bfe1b40();
      uVar3 = param_6;
      func_0x00010bfe1b40();
      if ((int)uVar5 == (int)uVar3) {
        uVar5 = param_5;
        func_0x00010c237e00();
        uVar3 = param_6;
        func_0x00010c237e00();
        if ((int)uVar5 == (int)uVar3) {
          uVar5 = param_5;
          func_0x00010bfe1e40();
          uVar3 = param_6;
          func_0x00010bfe1e40();
          if ((int)uVar5 == (int)uVar3) {
            uVar3 = param_5;
            func_0x00010c2bf260(param_5);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = param_6;
            func_0x00010c2bf260(param_6);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            func_0x00010bd86de8(uVar3,uVar4);
            _objc_release(uVar4);
            goto LAB_106039264;
          }
        }
      }
    }
    uVar5 = 0;
  }
  else if (uVar2 == 0) {
    uVar5 = 0;
    uVar3 = uVar1;
LAB_106039264:
    _objc_release(uVar3);
  }
  else {
    uVar5 = uVar1;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar5 != 0) goto LAB_1060391e4;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_10603927c:
  _objc_release(param_6);
  _objc_release(param_5);
  return uVar5;
}



/* Entry: 1060392f0; end: 10603932f; -[SCProfileCollectionViewMapCell setMapSnapshotScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060392f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273d6ac);
  *(undefined8 *)(param_1 + _DAT_11273d6ac) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beaf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupProfileMapView_112589648);
  return;
}



/* Entry: 106039330; end: 10603936f; -[SCProfileCollectionViewMapCell setEmbeddedMapFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106039330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273d6a4);
  *(undefined8 *)(param_1 + _DAT_11273d6a4) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beaf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupProfileMapView_112589648);
  return;
}



/* Entry: 106039370; end: 10603938b; -[SCProfileCollectionViewMapCell setTargetFrameRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106039370(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11273d6b4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c212390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273d6b0),PTR_s_setTargetFrameRate__112662308);
  return;
}



/* Entry: 10603938c; end: 10603944f; -[SCProfileCollectionViewMapCell handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10603938c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c7358;
  uVar4 = *(ulong *)(param_1 + _DAT_11273d6a0);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273d6c4);
  uVar3 = uVar1;
  func_0x00010c268c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106039450; end: 1060394e7; -[SCProfileCollectionViewMapCell friendCompassStartedFacingFriend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106039450(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar2 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ebadf8,puVar2);
  _objc_release(puVar2);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11273d6c4),param_2,param_1,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060394e8; end: 106039547; -[SCProfileCollectionViewMapCell friendCompassNearFriend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060394e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11273d6c4),param_2,param_1,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106039548; end: 1060395a7; -[SCProfileCollectionViewMapCell friendCompassStartedCompassing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106039548(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11273d6c4),param_2,param_1,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060395a8; end: 106039607; -[SCProfileCollectionViewMapCell friendCompassStoppedCompassing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060395a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11273d6c4),param_2,param_1,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106039608; end: 106039667; -[SCProfileCollectionViewMapCell viewModelSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106039608(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273d6c8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106039668; end: 106039677; -[SCProfileCollectionViewMapCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106039668(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d6a0);
}



/* Entry: 106039678; end: 106039687; -[SCProfileCollectionViewMapCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106039678(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d6c4);
}



/* Entry: 106039688; end: 1060396c7; -[SCProfileCollectionViewMapCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106039688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273d6c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060396c8; end: 1060396d7; -[SCProfileCollectionViewMapCell mapSnapshotScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060396c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d6a8);
}



/* Entry: 1060396d8; end: 106039717; -[SCProfileCollectionViewMapCell setMapSnapshotScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060396d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273d6a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106039718; end: 106039727; -[SCProfileCollectionViewMapCell mapSnapshotScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106039718(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d6ac);
}



/* Entry: 106039728; end: 106039737; -[SCProfileCollectionViewMapCell embeddedMapFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106039728(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d6a4);
}



/* Entry: 106039738; end: 106039747; -[SCProfileCollectionViewMapCell mapFriendCompassFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106039738(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d6c0);
}



/* Entry: 106039748; end: 106039787; -[SCProfileCollectionViewMapCell setMapFriendCompassFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106039748(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273d6c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106039788; end: 106039797; -[SCProfileCollectionViewMapCell newMapProfileCardEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106039788(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273d690);
}



/* Entry: 106039798; end: 1060397a7; -[SCProfileCollectionViewMapCell setNewMapProfileCardEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106039798(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273d690) = param_3;
  return;
}



/* Entry: 1060397a8; end: 1060397b7; -[SCProfileCollectionViewMapCell targetFrameRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060397a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d6b4);
}



/* Entry: 1060397b8; end: 1060397c7; -[SCProfileCollectionViewMapCell dynamicProfileMapCardDefaultZoom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060397b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d694);
}



/* Entry: 1060397c8; end: 1060397d7; -[SCProfileCollectionViewMapCell setDynamicProfileMapCardDefaultZoom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060397c8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11273d694) = param_1;
  return;
}



/* Entry: 1060397d8; end: 1060397e7; -[SCProfileCollectionViewMapCell dynamicProfileMapCardDefaultPitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060397d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d698);
}



/* Entry: 1060397e8; end: 1060397f7; -[SCProfileCollectionViewMapCell setDynamicProfileMapCardDefaultPitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060397e8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11273d698) = param_1;
  return;
}



/* Entry: 1060397f8; end: 1060398b7; -[SCProfileCollectionViewMapCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060397f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273d6c0,0);
  _objc_storeStrong(param_1 + _DAT_11273d6a4,0);
  _objc_storeStrong(param_1 + _DAT_11273d6ac,0);
  _objc_storeStrong(param_1 + _DAT_11273d6a8,0);
  _objc_storeStrong(param_1 + _DAT_11273d6c4,0);
  _objc_storeStrong(param_1 + _DAT_11273d6a0,0);
  _objc_storeStrong(param_1 + _DAT_11273d6b0,0);
  _objc_storeStrong(param_1 + _DAT_11273d6bc,0);
  _objc_storeStrong(param_1 + _DAT_11273d6c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273d69c,0);
  return;
}



/* Entry: 1060398b8; end: 106039913; -[SCProfileCollectionViewMapProfileCardCell layoutSubviews] */

void FUN_1060398b8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010c1ee980(param_1);
  func_0x00010c160fc0(param_1);
  return;
}



/* Entry: 106039914; end: 1060399b7; -[SCProfileCollectionViewMapProfileCardCell setMapProfileCardView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106039914(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11273d6cc;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == param_3) {
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf31be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar1 == lVar2) goto LAB_1060399a0;
  }
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = param_3;
  _objc_release(uVar3);
  func_0x00010beae000(param_1);
LAB_1060399a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060399b8; end: 106039aaf; -[SCProfileCollectionViewMapProfileCardCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060399b8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c7360;
  _objc_opt_class(PTR_PTR_1126c7360);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11273d6d0;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_106039a90;
    }
    uVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    func_0x00010beae000(param_1);
  }
LAB_106039a90:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106039ab0; end: 106039dbf; -[SCProfileCollectionViewMapProfileCardCell _setupMapProfileCardView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106039ab0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_11273d6cc;
  lVar1 = *(long *)(param_3 + lVar18);
  if (lVar1 != 0) {
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf31be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar1 != lVar2) {
      func_0x00010c219b60(*(undefined8 *)(param_3 + lVar18));
      lVar1 = param_3;
      func_0x00010bf31be0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar1);
      puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(param_3 + lVar18);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf31be0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_3 + lVar18);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010bf31be0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_3 + lVar18);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_3;
      func_0x00010bf31be0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_3 + lVar18);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = param_3;
      func_0x00010bf31be0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar18;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_5 = puVar15;
      func_0x00010beef8c0(puVar16);
      _objc_release(puVar15);
      _objc_release(uVar14);
      _objc_release(lVar13);
      _objc_release(lVar18);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(uVar4);
      _objc_release(uVar19);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(uVar3);
      func_0x00010c1cbe20(param_3);
      func_0x00010c08cdc0(param_3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = param_1;
    return auVar20;
  }
  ___stack_chk_fail();
  uVar19 = param_1;
  _objc_retain(param_5);
  puVar16 = PTR_PTR_1126c7360;
  _objc_opt_class(PTR_PTR_1126c7360);
  puVar15 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar16);
  puVar16 = param_5;
  if (((ulong)puVar15 & 1) == 0) {
    puVar16 = (undefined *)0x0;
  }
  _objc_retain(puVar16);
  if (puVar16 == (undefined *)0x0) {
    uVar19 = 0x406dc00000000000;
  }
  else {
    func_0x00010bf33e20(param_5);
  }
  _objc_release(puVar16);
  _objc_release(param_5);
  auVar21._8_8_ = uVar19;
  auVar21._0_8_ = param_1;
  return auVar21;
}



/* Entry: 106039dc0; end: 106039e4b; +[SCProfileCollectionViewMapProfileCardCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_106039dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = param_1;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c7360;
  _objc_opt_class(PTR_PTR_1126c7360);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar4 = 0x406dc00000000000;
  }
  else {
    func_0x00010bf33e20(param_4);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 106039e4c; end: 106039eaf; -[SCProfileCollectionViewMapProfileCardCell _mapCellViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106039e4c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c7360;
  uVar4 = *(ulong *)(param_1 + _DAT_11273d6d0);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106039eb0; end: 106039ebf; -[SCProfileCollectionViewMapProfileCardCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106039eb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d6d0);
}



/* Entry: 106039ec0; end: 106039ecf; -[SCProfileCollectionViewMapProfileCardCell mapProfileCardView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106039ec0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d6cc);
}



/* Entry: 106039ed0; end: 106039f0f; -[SCProfileCollectionViewMapProfileCardCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106039ed0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273d6cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273d6d0,0);
  return;
}



/* Entry: 106039f10; end: 106039f9f; -[SCProfileMapCardBitmojiLoader initWithBitmojiAvatarGenerator:] */

undefined1 * FUN_106039f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef340;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106039fa0; end: 10603a3a3; -[SCProfileMapCardBitmojiLoader fetchBitmojisForDataModels:] */

ulong FUN_106039fa0(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06fc80();
  if (iVar1 != 0) {
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_10603a3a4;
    puStack_110 = &UNK_110909030;
    uVar11 = param_3;
    lStack_108 = param_1;
    func_0x0001006372a4(param_3,&puStack_128);
    puStack_150 = &uStack_148;
    uStack_148 = 0;
    uStack_138 = 0x2020000000;
    uStack_130 = 0;
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_10603a450;
    puStack_168 = &UNK_11084fa08;
    puStack_140 = puStack_150;
    _objc_retain(uVar11);
    ppuVar2 = &puStack_180;
    uStack_160 = uVar11;
    lStack_158 = param_1;
    _objc_retainBlock();
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    _objc_retain(uVar11);
    uVar3 = uVar11;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar8 = *plStack_1b0;
      do {
        uVar12 = 0;
        do {
          if (*plStack_1b0 != lVar8) {
            _objc_enumerationMutation(uVar11);
          }
          lVar13 = *(long *)(lStack_1b8 + uVar12 * 8);
          lVar4 = lVar13;
          func_0x00010c2923e0(lVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar4;
          func_0x000108ffe710();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          lVar4 = lVar7;
          func_0x000106b1d04c(lVar7,0,0);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(param_1 + 0x18);
          lVar10 = lVar13;
          func_0x00010c2923e0(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar9);
          _objc_release(lVar10);
          lVar10 = lVar13;
          func_0x00010bf1acc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar10 == 0) {
            (*(code *)ppuVar2[2])(ppuVar2);
          }
          else {
            _objc_initWeak(auStack_1c8,param_1);
            uVar9 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010c269d40(uVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1acc0(lVar13);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR_PTR_1126c58b8;
            func_0x00010bf3e900(PTR_PTR_1126c58b8);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c11de00();
            _objc_retainAutoreleasedReturnValue();
            _objc_copyWeak(auStack_1d0,auStack_1c8);
            _objc_retain(ppuVar2);
            func_0x00010bfa5480(uVar9);
            _objc_release(uVar6);
            _objc_release(puVar5);
            _objc_release(lVar13);
            _objc_release(uVar9);
            _objc_release(ppuVar2);
            _objc_destroyWeak(auStack_1d0);
            _objc_destroyWeak(auStack_1c8);
          }
          _objc_release(lVar4);
          _objc_release(lVar7);
          uVar12 = uVar12 + 1;
        } while (uVar3 != uVar12);
        uVar3 = uVar11;
        func_0x00010bf52a60();
      } while (uVar3 != 0);
    }
    _objc_release(uVar11);
    _objc_release(ppuVar2);
    _objc_release(uStack_160);
    __Block_object_dispose(&uStack_148,8);
    _objc_release(uVar11);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar7 = 8;
  __Block_object_dispose(&uStack_148);
  __Unwind_Resume();
  _objc_retain(lVar7);
  lVar8 = lVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    uVar11 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0x18);
    lVar4 = lVar7;
    func_0x00010c2923e0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(lVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = (ulong)(lVar10 == 0);
    _objc_release();
    _objc_release(lVar4);
  }
  _objc_release(lVar8);
  _objc_release(lVar7);
  return uVar11;
}



/* Entry: 10603a3a4; end: 10603a44f;  */

bool FUN_10603a3a4(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    lVar3 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(lVar4);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 == 0;
    _objc_release();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10603a450; end: 10603a4c3;  */

void FUN_10603a450(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (uVar3 < uVar1) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x28) + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c116e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10603a4c4; end: 10603a557;  */

void FUN_10603a4c4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar3);
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10603a558; end: 10603a5b7; -[SCProfileMapCardBitmojiLoader bitmojiForUserId:] */

void FUN_10603a558(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0dff20(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10603a5b8; end: 10603a5bf; -[SCProfileMapCardBitmojiLoader performerQueue] */

undefined8 FUN_10603a5b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10603a5c0; end: 10603a5ef; -[SCProfileMapCardBitmojiLoader setPerformerQueue:] */

void FUN_10603a5c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10603a5f0; end: 10603a607; -[SCProfileMapCardBitmojiLoader delegate] */

void FUN_10603a5f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10603a608; end: 10603a613; -[SCProfileMapCardBitmojiLoader setDelegate:] */

void FUN_10603a608(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10603a614; end: 10603a663; -[SCProfileMapCardBitmojiLoader .cxx_destruct] */

void FUN_10603a614(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10603a664; end: 10603a6db; -[SCUnifiedProfileSnapchatterCollectionViewCellWithButton initWithFrame:] */

undefined1 * FUN_10603a664(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef348;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0(PTR_PTR_1126aec40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee160(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10603a6dc; end: 10603a7a3; -[SCUnifiedProfileSnapchatterCollectionViewCellWithButton sizeForRightIconView] */

undefined1  [16] FUN_10603a6dc(double param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong uStack_50;
  undefined *puStack_48;
  
  uVar2 = param_3;
  func_0x00010c140be0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aec40;
  _objc_opt_class(PTR_PTR_1126aec40);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    puStack_48 = PTR_PTR_1126ef348;
    uStack_50 = param_3;
    _objc_msgSendSuper2(&uStack_50,PTR_s_sizeForRightIconView_11266cee8);
  }
  else {
    func_0x00010c0699c0(uVar2);
    param_2 = 0x4030000000000000;
    param_1 = param_1 + 16.0;
    func_0x00010c0699c0(uVar2);
  }
  _objc_release(uVar1);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10603a7a4; end: 10603a9ab; -[SCUnifiedProfileSnapchatterCollectionViewCellWithButton setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10603a7a4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11273d6e8;
  uVar6 = *(ulong *)(param_1 + lVar9);
  _objc_retain(uVar6);
  _objc_retain(param_3);
  uVar1 = param_3;
  if (uVar6 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar6);
    }
    else {
      uVar1 = uVar6;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar6);
      if ((uVar1 & 1) != 0) goto LAB_10603a98c;
    }
    uVar6 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    *(ulong *)(param_1 + lVar9) = uVar6;
    _objc_release(uVar5);
    lVar2 = param_1;
    func_0x00010c140be0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11273d6ec;
    uVar5 = *(undefined8 *)(param_1 + lVar10);
    *(long *)(param_1 + lVar10) = lVar2;
    _objc_release(uVar5);
    puStack_48 = PTR_PTR_1126ef348;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_setViewModel__1126663d8,param_3);
    func_0x00010c1ee160(param_1);
    puVar3 = PTR_PTR_1126b2c10;
    uVar7 = *(ulong *)(param_1 + lVar9);
    _objc_retain(uVar7);
    _objc_opt_class(puVar3);
    uVar1 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar3);
    uVar6 = uVar7;
    if ((uVar1 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar7);
    uVar1 = uVar6;
    func_0x00010c140c00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    uVar7 = uVar1;
    if ((uVar4 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126aec40;
    uVar8 = *(ulong *)(param_1 + lVar10);
    _objc_retain(uVar8);
    _objc_opt_class(puVar3);
    uVar4 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar3);
    uVar1 = uVar8;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar8);
    func_0x00010c216260(uVar1);
    _objc_release(uVar7);
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar1);
  _objc_release(uVar6);
LAB_10603a98c:
  _objc_release(param_3);
  return;
}



/* Entry: 10603a9ac; end: 10603a9eb; -[SCUnifiedProfileSnapchatterCollectionViewCellWithButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10603a9ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273d6ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273d6e8,0);
  return;
}



/* Entry: 10603a9ec; end: 10603aa03;  */

void FUN_10603a9ec(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e396b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e396b8,
                      &PTR____CFConstantStringClassReference_110e396d8,0);
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



/* Entry: 10603aa04; end: 10603aab7; -[SCProfileMapCellViewModel initWithShouldRoundBottomCorners:tapActionModel:mapViewModel:] */

undefined1 *
FUN_10603aa04(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ef350;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 10603aab8; end: 10603aadb; -[SCProfileMapCellViewModel copyWithZone:] */

undefined8 FUN_10603aab8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10603aadc; end: 10603ab57; -[SCProfileMapCellViewModel hash] */

ulong * FUN_10603aadc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_10603abe8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10603abf4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10603abf4;
        }
        goto LAB_10603abe8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10603abf4:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 10603ab58; end: 10603ac0f; -[SCProfileMapCellViewModel isEqual:] */

long FUN_10603ab58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10603abe8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10603abf4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10603abf4;
        }
        goto LAB_10603abe8;
      }
    }
    lVar3 = 0;
  }
LAB_10603abf4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10603ac10; end: 10603ac17; -[SCProfileMapCellViewModel shouldRoundBottomCorners] */

undefined1 FUN_10603ac10(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10603ac18; end: 10603ac1f; -[SCProfileMapCellViewModel tapActionModel] */

undefined8 FUN_10603ac18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10603ac20; end: 10603ac27; -[SCProfileMapCellViewModel mapViewModel] */

undefined8 FUN_10603ac20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10603ac28; end: 10603ac57; -[SCProfileMapCellViewModel .cxx_destruct] */

void FUN_10603ac28(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10603ac58; end: 10603ad47; -[SCProfileEmbeddedMapViewModel initWithRequiresLocationPermission:selectedUserId:isActiveUser:hideErrorViewTappableContent:profileSessionID:showInferredLocation:coordinate:] */

undefined1 *
FUN_10603ac58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_6);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ef358;
  uStack_70 = param_3;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_10;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
  }
  _objc_release(param_9);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10603ad48; end: 10603ad6b; -[SCProfileEmbeddedMapViewModel copyWithZone:] */

undefined8 FUN_10603ad48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10603ad6c; end: 10603ae3b; -[SCProfileEmbeddedMapViewModel hash] */

ulong * FUN_10603ad6c(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 9);
  uStack_50 = (ulong)*(byte *)(param_1 + 10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0xb);
  uVar6 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_68;
  uStack_48 = uVar3;
  func_0x000100505190(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 != param_3) {
    puVar7 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10603af3c;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) == 0) ||
         (((((char)puVar4[1] != (char)param_3[1] ||
            (*(char *)((long)puVar4 + 9) != *(char *)((long)param_3 + 9))) ||
           (*(char *)((long)puVar4 + 10) != *(char *)((long)param_3 + 10))) ||
          ((*(char *)((long)puVar4 + 0xb) != *(char *)((long)param_3 + 0xb) ||
           (2.220446049250313e-16 < ABS((double)puVar4[4] - (double)param_3[4]))))))) ||
        (2.220446049250313e-16 < ABS((double)puVar4[5] - (double)param_3[5]))) ||
       ((uVar6 = puVar4[2], uVar6 != param_3[2] && (func_0x00010c071ae0(), (int)uVar6 == 0)))) {
      puVar7 = (ulong *)0x0;
      goto LAB_10603af3c;
    }
    puVar7 = (ulong *)puVar4[3];
    if (puVar7 != (ulong *)param_3[3]) {
      func_0x00010c071ae0();
      goto LAB_10603af3c;
    }
  }
  puVar7 = (ulong *)0x1;
LAB_10603af3c:
  _objc_release(param_3);
  return puVar7;
}


