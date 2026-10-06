/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050b0fa0; end: 1050b101f;  */

void FUN_1050b0fa0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be85c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1050b1020; end: 1050b10a3;  */

void FUN_1050b1020(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  func_0x00010bf529e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1050b10a4; end: 1050b11eb; -[SCFriendProfileCharmsSectionDataProvider _rankCharms:] */

void FUN_1050b10a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c29eb00();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1050b1158;
  puStack_40 = &UNK_1108661f8;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  FUN_1050d5948(param_3,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050b11ec; end: 1050b1343; -[SCFriendProfileCharmsSectionDataProvider _updateRankedCharms:hiddenCharmsCount:friend:] */

void FUN_1050b11ec(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar3 = *(ulong *)(param_1 + 0x40);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (param_3 == 0 && uVar3 == 0) {
LAB_1050b123c:
    if (*(long *)(param_1 + 0x48) != param_4) goto LAB_1050b12d0;
    uVar3 = *(ulong *)(param_1 + 0x38);
    _objc_retain(uVar3);
    _objc_retain(param_5);
    if (uVar3 != param_5) {
      if (param_5 == 0) goto LAB_1050b12c8;
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_5);
      _objc_release(param_5);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_1050b1318;
      goto LAB_1050b12d0;
    }
    _objc_release(param_5);
  }
  else {
    if ((param_3 == 0) || (uVar3 == 0)) {
      _objc_release(param_3);
LAB_1050b12c8:
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071b60(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((int)uVar1 != 0) goto LAB_1050b123c;
    }
LAB_1050b12d0:
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = param_3;
    _objc_release(uVar2);
    *(long *)(param_1 + 0x48) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = param_5;
    _objc_release(uVar2);
    uVar3 = param_1 + 0x60;
    _objc_loadWeakRetained(uVar3);
    func_0x00010c155aa0();
  }
  _objc_release(uVar3);
LAB_1050b1318:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050b1344; end: 1050b15fb; -[SCFriendProfileCharmsSectionDataProvider supplementaryViewModels] */

void FUN_1050b1344(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *unaff_x22;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x48) == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dc37d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37d8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = &PTR____CFConstantStringClassReference_110dc4d58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4d58,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dc4658;
    uStack_88 = uVar1;
    func_0x00010c14de00(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(ppuVar7);
    puVar2 = PTR_PTR_1126b4810;
    _objc_alloc(PTR_PTR_1126b4810);
    puVar3 = PTR_PTR_1126b3ce8;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c2923e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb9260(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar1);
    unaff_x22 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc37d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37d8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc4d78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4d78,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = *(undefined ***)(param_1 + 0x48);
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar4;
    func_0x000108f72ae0(ppuVar4,puVar3,unaff_x22);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(unaff_x22);
    _objc_release(puVar2);
  }
  _objc_release(ppuVar6);
  uStack_68 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110beb70;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_70 = ppuVar7;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_60;
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  ppuVar5 = ppuVar7;
  _objc_release(ppuVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_98 = FUN_1050b15fc;
    puStack_c0 = unaff_x22;
    puStack_b8 = puVar3;
    ppuStack_b0 = ppuVar7;
    ppuStack_a8 = ppuVar4;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar6);
    _objc_initWeak(auStack_c8,ppuVar5);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1050b16c4;
    puStack_d8 = &UNK_11085e2f8;
    _objc_copyWeak(auStack_d0,auStack_c8);
    ppuVar4 = ppuVar6;
    func_0x000100504554(ppuVar6,&puStack_f0);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 1050b15fc; end: 1050b16c3; -[SCFriendProfileCharmsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1050b15fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1050b16c4;
  puStack_48 = &UNK_11085e2f8;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050b16c4; end: 1050b1727;  */

void FUN_1050b16c4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf4abc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050b1728; end: 1050b2157; -[SCFriendProfileCharmsSectionDataProvider containerCellViewModelForIndexPath:] */

void FUN_1050b1728(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  long lVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puStack_260;
  undefined8 uStack_210;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar22 = param_3;
  _objc_retain(param_3);
  ppuVar20 = param_3;
  func_0x00010c0840e0();
  ppuVar6 = *(undefined ***)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (ppuVar20 < ppuVar6) {
    puVar24 = *(undefined **)(param_1 + 0x40);
    func_0x00010c0840e0(param_3);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar7 = puVar24;
    func_0x00010bf6e400();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf6e6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar8;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar7 != (undefined *)0x0) {
      puVar27 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar8);
        }
        ppuVar22 = *(undefined ***)((long)puVar27 * 8);
        lVar9 = param_1;
        func_0x00010bee7ec0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar9 == 0) {
          ppuVar20 = (undefined **)0x0;
          goto LAB_1050b20f8;
        }
        func_0x00010befa120(puVar21);
        _objc_release(lVar9);
        puVar27 = puVar27 + 1;
      } while (puVar7 != puVar27);
      puVar7 = puVar8;
      func_0x00010bf52a60();
    }
    _objc_release(puVar8);
    puVar7 = puVar24;
    func_0x00010bf6e400();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar7;
    func_0x00010bf6e600();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar27;
    FUN_1050d2578();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar27);
    _objc_release(puVar7);
    ppuVar20 = (undefined **)PTR_PTR_1126aea98;
    _objc_alloc();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    cVar3 = *(char *)(param_1 + 0x50);
    _objc_retain(puVar24);
    _objc_retain(uVar1);
    _objc_retain(uVar2);
    _objc_retain(puVar8);
    uVar10 = uVar2;
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar11 = puVar24;
    if (((ulong)puVar27 & 1) == 0) {
      ppuVar22 = &PTR____CFConstantStringClassReference_110dc4db8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4db8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar22 = &PTR____CFConstantStringClassReference_110dc4d98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4d98,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(ppuVar22);
    puVar11 = PTR_PTR_1126b4838;
    _objc_alloc_init();
    func_0x00010c2b62e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf35b80(puVar24);
    func_0x00010c2aa500(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b08a0(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126b47f8;
    _objc_alloc();
    puVar27 = PTR_PTR_1126b3ce8;
    uVar14 = uVar2;
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb9260(puVar27);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35b80(puVar24);
    func_0x00010bfe2e20(puVar24);
    func_0x00010bffd7c0();
    _objc_release(puVar27);
    _objc_release(uVar14);
    puVar27 = puVar24;
    func_0x00010bfce020();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar27;
    func_0x00010c110560();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar1;
    func_0x00010c2923e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar15;
    func_0x00010c0720c0();
    _objc_release(uVar14);
    _objc_release(puVar15);
    _objc_release(puVar27);
    uStack_210 = uVar1;
    if (((ulong)puVar26 & 1) == 0) {
      puVar27 = puVar24;
      func_0x00010bfce020();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar27;
      func_0x00010c110560();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar2;
      func_0x00010c2923e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar15;
      func_0x00010c0720c0();
      _objc_release(uVar14);
      _objc_release(puVar15);
      _objc_release(puVar27);
      uStack_210 = uVar2;
      if ((int)puVar26 != 0) goto LAB_1050b1bc4;
      uStack_210 = 0;
    }
    else {
LAB_1050b1bc4:
      _objc_retain(uStack_210);
    }
    puVar27 = puVar24;
    func_0x00010bfce020();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar27;
    func_0x00010bf1c5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar1;
    func_0x00010c2923e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar15;
    func_0x00010c0720c0();
    _objc_release(uVar14);
    _objc_release(puVar15);
    _objc_release(puVar27);
    if ((int)puVar26 == 0) {
      puVar27 = puVar24;
      func_0x00010bfce020();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar27;
      func_0x00010bf1c5c0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar2;
      func_0x00010c2923e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar15;
      func_0x00010c0720c0();
      _objc_release(uVar14);
      _objc_release(puVar15);
      _objc_release(puVar27);
      _objc_retain(uVar2);
      uVar14 = uVar2;
      uVar25 = uVar2;
      if ((int)puVar26 == 0) {
        uVar14 = uVar1;
      }
    }
    else {
      _objc_retain(uVar1);
      uVar14 = uVar1;
      uVar25 = uVar1;
    }
    _objc_retain();
    puVar27 = puVar24;
    func_0x00010bfce020();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar27;
    func_0x00010bf1c5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar1;
    func_0x00010c2923e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar15;
    func_0x00010c0720c0();
    _objc_release(uVar16);
    _objc_release(puVar15);
    _objc_release(puVar27);
    uVar16 = uVar1;
    if (((ulong)puVar26 & 1) == 0) {
      puVar27 = puVar24;
      func_0x00010bfce020(puVar24);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar27;
      func_0x00010bf1c5e0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar2;
      func_0x00010c2923e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(puVar15);
      _objc_release(uVar16);
      _objc_release(puVar15);
      _objc_release(puVar27);
      uVar16 = uVar2;
    }
    _objc_retain(uVar16);
    puVar27 = puVar24;
    func_0x00010bf35b80();
    if (((int)puVar27 == 0x2718) && (cVar3 != '\0')) {
      puStack_260 = PTR_PTR_1126b4880;
      _objc_alloc();
      puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010901d924(uVar2);
      func_0x00010c0df760(puVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0488a0();
LAB_1050b1f78:
      _objc_release(puVar27);
    }
    else {
      puVar27 = puVar24;
      func_0x00010bf35b80();
      if ((int)puVar27 == 1) {
        puVar15 = puVar24;
        func_0x00010bf6e400();
        _objc_retainAutoreleasedReturnValue();
        puVar27 = puVar15;
        func_0x00010bf6e6a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        puVar15 = puVar27;
        func_0x00010bf52a60();
        lVar4 = lRam0000000000000000;
        if (puVar15 == (undefined *)0x0) {
          puStack_260 = (undefined *)0x0;
        }
        else {
          do {
            puVar26 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar4) {
                _objc_enumerationMutation(puVar27);
              }
              iVar5 = (int)*(undefined8 *)((long)puVar26 * 8);
              func_0x00010c296d80();
              if (iVar5 == 4) {
                puStack_260 = PTR_PTR_1126b4880;
                _objc_alloc();
                puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010901d924();
                func_0x00010c0b51e0();
                func_0x00010c0df7c0(puVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0488a0();
                _objc_release(puVar15);
                goto LAB_1050b1f78;
              }
              puVar26 = puVar26 + 1;
            } while (puVar15 != puVar26);
            puVar15 = puVar27;
            func_0x00010bf52a60();
          } while (puVar15 != (undefined *)0x0);
          puStack_260 = (undefined *)0x0;
        }
        goto LAB_1050b1f78;
      }
      puStack_260 = (undefined *)0x0;
    }
    puVar27 = PTR_PTR_1126b4888;
    _objc_alloc();
    puVar15 = puVar24;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar24;
    func_0x00010c282d00(puVar24);
    puVar17 = puVar15;
    FUN_1050b07f0(puVar15,puVar26);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar24;
    func_0x00010bfce020(puVar24);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar26;
    FUN_1050afe4c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282d00(puVar24);
    func_0x00010c053cc0();
    _objc_release(puVar18);
    _objc_release(puVar26);
    _objc_release(puVar17);
    _objc_release(puVar15);
    _objc_release(puStack_260);
    _objc_release(uVar16);
    _objc_release(uVar14);
    _objc_release(uVar25);
    _objc_release(uStack_210);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(uVar10);
    _objc_release(puVar8);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar24);
    ppuVar22 = &PTR____CFConstantStringClassReference_110dc4ed8;
    func_0x00010bffd260();
    _objc_release(puVar27);
LAB_1050b20f8:
    _objc_release(puVar8);
    _objc_release(puVar21);
    _objc_release(puVar24);
  }
  else {
    ppuVar20 = (undefined **)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(ppuVar22);
  ppuVar19 = ppuVar22;
  func_0x00010c296d80();
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar20 = &PTR____CFConstantStringClassReference_110daafd8;
  iVar5 = (int)ppuVar19;
  if (iVar5 < 1) {
    if (iVar5 == -2) {
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      func_0x00010c22d3a0(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = param_3[7];
      func_0x00010901d430(puVar21);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar21;
      func_0x00010901ccf8();
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = ppuVar6;
      func_0x00010c25d400(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar21);
LAB_1050b22b0:
      _objc_release(ppuVar6);
    }
    else if (iVar5 == -1) {
      func_0x00010901d924(param_3[7]);
      func_0x00010c0df760(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1050b2298;
    }
  }
  else {
    if (iVar5 == 4) {
      func_0x00010901d924();
      func_0x00010c0b51e0();
      func_0x00010c0df7c0(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
LAB_1050b2298:
      ppuVar20 = ppuVar6;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1050b22b0;
    }
    if (iVar5 == 1) {
      ppuVar20 = (undefined **)param_3[7];
      func_0x00010901d7c4(ppuVar20);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(ppuVar22);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar20);
  return;
}



/* Entry: 1050b2158; end: 1050b22d3; -[SCFriendProfileCharmsSectionDataProvider _valueOfDescriptionVariable:] */

void FUN_1050b2158(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c296d80();
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  iVar1 = (int)lVar2;
  if (iVar1 < 1) {
    if (iVar1 != -2) {
      if (iVar1 != -1) goto LAB_1050b22b4;
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010901d924(uVar3);
      func_0x00010c0df760(ppuVar6,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1050b2298;
    }
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x00010c22d3a0(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010901d430(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010901ccf8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar6;
    func_0x00010c25d400(ppuVar6,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar5);
  }
  else {
    if (iVar1 != 4) {
      if (iVar1 == 1) {
        ppuVar4 = *(undefined ***)(param_1 + 0x38);
        func_0x00010901d7c4(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_1050b22b4;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x00010901d924();
    lVar2 = param_3;
    func_0x00010c0b51e0();
    if (lVar2 <= iVar1) {
      lVar2 = (long)iVar1;
    }
    func_0x00010c0df7c0(ppuVar6,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
LAB_1050b2298:
    ppuVar4 = ppuVar6;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar6);
LAB_1050b22b4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 1050b22d4; end: 1050b2357; -[SCFriendProfileCharmsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_1050b22d4(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 0x40),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1050b2358; end: 1050b235f; -[SCFriendProfileCharmsSectionDataProvider numberOfItemsInSection:] */

void FUN_1050b2358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1050b2360; end: 1050b2527; -[SCFriendProfileCharmsSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_1050b2360(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined1 *puStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1050b2444;
  puStack_58 = &UNK_11085bb28;
  uStack_50 = param_1;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dc4ed8;
  puVar3 = (undefined1 *)ppuVar2;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar4 = PTR_PTR_1126b47f0;
  _objc_opt_class(PTR_PTR_1126b47f0);
  uVar5 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar4);
  uVar1 = param_2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  lVar6 = *(long *)(*(long *)((long)ppuVar2 + 0x20) + 0x58);
  if (lVar6 == 0) {
    puVar4 = PTR_PTR_1126b4330;
    _objc_alloc();
    func_0x00010bff3160();
    uVar7 = *(undefined8 *)(*(long *)((long)ppuVar2 + 0x20) + 0x58);
    *(undefined **)(*(long *)((long)ppuVar2 + 0x20) + 0x58) = puVar4;
    _objc_release(uVar7);
    lVar6 = *(long *)(*(long *)((long)ppuVar2 + 0x20) + 0x58);
  }
  func_0x00010c14fc00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d1840(uVar1);
  _objc_release(lVar6);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050b2528; end: 1050b2603; -[SCFriendProfileCharmsSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_1050b2528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050b2604; end: 1050b2633;  */

void FUN_1050b2604(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f9220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050b2634; end: 1050b272f; -[SCFriendProfileCharmsSectionDataProvider dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_1050b2634(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0288;
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == puVar1) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050b2730; end: 1050b275f;  */

void FUN_1050b2730(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f9220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050b2760; end: 1050b2777; -[SCFriendProfileCharmsSectionDataProvider dataProviderDelegate] */

void FUN_1050b2760(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050b2778; end: 1050b2783; -[SCFriendProfileCharmsSectionDataProvider setDataProviderDelegate:] */

void FUN_1050b2778(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1050b2784; end: 1050b278b; -[SCFriendProfileCharmsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1050b2784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1050b278c; end: 1050b27bb; -[SCFriendProfileCharmsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1050b278c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050b27bc; end: 1050b27c3; -[SCFriendProfileCharmsSectionDataProvider sectionDataModel] */

undefined8 FUN_1050b27bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1050b27c4; end: 1050b2867; -[SCFriendProfileCharmsSectionDataProvider .cxx_destruct] */

void FUN_1050b27c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 1050b2868; end: 1050b28f7; -[SCFriendProfileCharmsSectionDescriptorProvider initWithDataSource:] */

undefined1 * FUN_1050b2868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5fd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    func_0x00010bedf2c0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050b28f8; end: 1050b2a33; -[SCFriendProfileCharmsSectionDescriptorProvider _updateSectionDescriptors] */

ulong FUN_1050b28f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (((uVar2 != 0) && (uVar2 = uVar1, func_0x000100bf119c(), (int)uVar2 != 0)) &&
     (uVar2 = uVar1, func_0x000100bec434(), (uVar2 & 1) == 0)) {
    puVar3 = PTR_PTR_1126b1260;
    _objc_alloc();
    ppuVar7 = &PTR____CFConstantStringClassReference_110e57898;
    func_0x000106639650(&PTR____CFConstantStringClassReference_110e57898,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055bc0();
    _objc_release(ppuVar7);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar1;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar1 + 0x10);
}



/* Entry: 1050b2a34; end: 1050b2a3b; -[SCFriendProfileCharmsSectionDescriptorProvider sectionDescriptors] */

undefined8 FUN_1050b2a34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050b2a3c; end: 1050b2a6b; -[SCFriendProfileCharmsSectionDescriptorProvider .cxx_destruct] */

void FUN_1050b2a3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050b2a6c; end: 1050b2b83; -[SCGroupProfileCharmsSectionDataProvider initWithDataSource:charmsDataCoordinator:charmsViewingDataCoordinator:imageDownloader:] */

undefined1 *
FUN_1050b2a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5fe0;
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
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050b2b84; end: 1050b2b8f; +[SCGroupProfileCharmsSectionDataProvider announcerIdentifier] */

undefined ** FUN_1050b2b84(void)

{
  return &PTR____CFConstantStringClassReference_110dc4dd8;
}



/* Entry: 1050b2b90; end: 1050b2b97; -[SCGroupProfileCharmsSectionDataProvider addListener:] */

void FUN_1050b2b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1050b2b98; end: 1050b2b9f; -[SCGroupProfileCharmsSectionDataProvider removeListener:] */

void FUN_1050b2b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1050b2ba0; end: 1050b2bd7; -[SCGroupProfileCharmsSectionDataProvider setUp] */

void FUN_1050b2ba0(long param_1,undefined8 param_2)

{
  func_0x00010befc780(*(undefined8 *)(param_1 + 8),param_2,param_1);
  func_0x00010bef7c60(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bec9770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__syncCharms_11258ff80);
  return;
}



/* Entry: 1050b2bd8; end: 1050b2c9b; -[SCGroupProfileCharmsSectionDataProvider _syncCharms] */

void FUN_1050b2bd8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b3ce8;
    func_0x00010bf36700(PTR_PTR_1126b3ce8,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3cf0;
    _objc_alloc(PTR_PTR_1126b3cf0);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c15ffa0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd8a0(puVar4,param_2,puVar3,uVar5);
    _objc_release(uVar5);
    func_0x00010bfd0a00(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050b2c9c; end: 1050b2ccb; -[SCGroupProfileCharmsSectionDataProvider tearDown] */

void FUN_1050b2c9c(long param_1,undefined8 param_2)

{
  func_0x00010c12eea0(*(undefined8 *)(param_1 + 8),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c12bd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeDataUpdateListener__112628978,param_1);
  return;
}



/* Entry: 1050b2ccc; end: 1050b3113; -[SCGroupProfileCharmsSectionDataProvider setSectionDataModel:] */

void FUN_1050b2ccc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined **unaff_x27;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c08fa60();
  if (lVar8 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfce980();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lVar6 = *(long *)(param_1 + 8);
    func_0x00010bfcee40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar11 = *plStack_140;
      do {
        lVar9 = 0;
        do {
          if (*plStack_140 != lVar11) {
            _objc_enumerationMutation(lVar6);
          }
          uVar10 = *(undefined8 *)(lStack_148 + lVar9 * 8);
          uVar12 = uVar10;
          func_0x00010c244280(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c244280(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar10;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5);
          _objc_release(uVar7);
          _objc_release(uVar10);
          _objc_release(uVar12);
          lVar9 = lVar9 + 1;
        } while (lVar8 != lVar9);
        lVar8 = lVar6;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release();
    _dispatch_group_create();
    uStack_180 = 0;
    uStack_170 = 0x3032000000;
    pcStack_168 = FUN_1050b3114;
    uStack_160 = 0x1050b3124;
    uStack_158 = 0;
    puStack_178 = &uStack_180;
    _objc_initWeak(auStack_188,param_1);
    _dispatch_group_enter(lVar6);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_1050b312c;
    puStack_1a8 = &UNK_110866198;
    unaff_x27 = &puStack_1c0;
    puStack_198 = &uStack_180;
    _objc_copyWeak(auStack_190,auStack_188);
    _objc_retain(lVar6);
    lStack_1a0 = lVar6;
    func_0x00010bfa5960(uVar12);
    uStack_1e0 = 0;
    uStack_1d0 = 0x2020000000;
    uStack_1c8 = 0;
    puStack_1d8 = &uStack_1e0;
    _dispatch_group_enter(lVar6);
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    puStack_210 = puVar1;
    uStack_208 = 0xc2000000;
    pcStack_200 = FUN_1050b31ac;
    puStack_1f8 = &UNK_110860220;
    puStack_1e8 = &uStack_1e0;
    _objc_retain(lVar6);
    lStack_1f0 = lVar6;
    func_0x00010bfa76c0(uVar12);
    uVar12 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c11de00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puStack_268 = puVar1;
    uStack_260 = 0xc2000000;
    uStack_258 = 0x1050b31e8;
    puStack_250 = &UNK_110866228;
    _objc_copyWeak(auStack_218,auStack_188);
    puStack_228 = &uStack_180;
    puStack_220 = &uStack_1e0;
    _objc_retain(lVar2);
    lStack_248 = lVar2;
    uStack_240 = uVar3;
    uStack_238 = uVar4;
    puStack_230 = puVar5;
    _objc_retain(puVar5);
    _objc_retain(uVar4);
    _objc_retain(uVar3);
    func_0x000100bc0718(lVar6,uVar12,&puStack_268);
    _objc_release(uVar12);
    _objc_release(puStack_230);
    _objc_release(uStack_238);
    _objc_release(uStack_240);
    _objc_release(lStack_248);
    _objc_destroyWeak(auStack_218);
    _objc_release(lStack_1f0);
    __Block_object_dispose(&uStack_1e0,8);
    _objc_release(lStack_1a0);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
    __Block_object_dispose(&uStack_180,8);
    _objc_release(uStack_158);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar6);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 6);
  _objc_destroyWeak(auStack_188);
  lVar8 = 8;
  __Block_object_dispose(&uStack_180);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  return;
}



/* Entry: 1050b3114; end: 1050b312b;  */

void FUN_1050b3114(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050b312c; end: 1050b31ab;  */

void FUN_1050b312c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be85c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1050b31ac; end: 1050b3233;  */

void FUN_1050b31ac(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  func_0x00010bf529e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1050b3234; end: 1050b337b; -[SCGroupProfileCharmsSectionDataProvider _rankCharms:] */

void FUN_1050b3234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c29eb00();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1050b32e8;
  puStack_40 = &UNK_1108661f8;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  FUN_1050d5948(param_3,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050b337c; end: 1050b358b; -[SCGroupProfileCharmsSectionDataProvider _updateRankedCharms:hiddenCharmsCount:groupID:groupName:groupDisplayName:groupMembers:] */

void FUN_1050b337c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar4 = *(ulong *)(param_1 + 0x30);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (param_3 == 0 && uVar4 == 0) {
LAB_1050b33f8:
    if (*(long *)(param_1 + 0x38) != param_4) goto LAB_1050b34bc;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x00010c0720c0();
    if (iVar1 == 0) goto LAB_1050b34bc;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bc823d8(uVar2,param_6);
    if ((int)uVar2 == 0) goto LAB_1050b34bc;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
    func_0x00010c0720c0();
    if (iVar1 == 0) goto LAB_1050b34bc;
    uVar4 = *(ulong *)(param_1 + 0x58);
    _objc_retain(uVar4);
    _objc_retain(param_8);
    if (uVar4 != param_8) {
      if (param_8 == 0) goto LAB_1050b34b4;
      uVar3 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_8);
      _objc_release(uVar4);
      if ((uVar3 & 1) != 0) goto LAB_1050b3540;
      goto LAB_1050b34bc;
    }
    _objc_release(param_8);
  }
  else {
    if ((param_3 == 0) || (uVar4 == 0)) {
      _objc_release(param_3);
LAB_1050b34b4:
      _objc_release(uVar4);
    }
    else {
      uVar3 = uVar4;
      func_0x00010c071b60();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((int)uVar3 != 0) goto LAB_1050b33f8;
    }
LAB_1050b34bc:
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = param_3;
    _objc_release(uVar2);
    *(long *)(param_1 + 0x38) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = param_8;
    _objc_release(uVar2);
    uVar4 = param_1 + 0x60;
    _objc_loadWeakRetained(uVar4);
    func_0x00010c155aa0();
  }
  _objc_release(uVar4);
LAB_1050b3540:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050b358c; end: 1050b3837; -[SCGroupProfileCharmsSectionDataProvider supplementaryViewModels] */

void FUN_1050b358c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x38) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc37d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37d8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x48);
    func_0x00010c08fa60();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar1 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dc4e18;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4e18,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc4df8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4df8,0);
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = *(undefined8 *)(param_1 + 0x48);
      ppuStack_90 = &PTR____CFConstantStringClassReference_110dc4658;
      func_0x00010c14de00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
    }
    puVar4 = PTR_PTR_1126b4810;
    _objc_alloc(PTR_PTR_1126b4810);
    puVar5 = PTR_PTR_1126b3ce8;
    func_0x00010bf36700(PTR_PTR_1126b3ce8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd8c0(puVar4);
    _objc_release(puVar5);
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    ppuVar7 = &PTR____CFConstantStringClassReference_110dc37d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37d8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar8 = &PTR____CFConstantStringClassReference_110dc4d78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4d78,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = *(undefined ***)(param_1 + 0x38);
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar7;
    func_0x000108f72ae0(ppuVar7,puVar5,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release(ppuVar2);
  uStack_68 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110beb88;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_70 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &puStack_60;
  puStack_60 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_98 = FUN_1050b3838;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1050b388c;
    puStack_b0 = &UNK_110845ab0;
    ppuStack_a8 = ppuVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000100504554(ppuVar2,&puStack_c8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050b3838; end: 1050b388b; -[SCGroupProfileCharmsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1050b3838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1050b388c;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050b388c; end: 1050b3977;  */

void FUN_1050b388c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0840e0();
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    puVar4 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(lVar3 + 0x30);
    func_0x00010c0840e0(param_2);
    func_0x00010c0dfd40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddccc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd260(puVar4);
    _objc_release(lVar3);
    _objc_release(uVar5);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1050b3978; end: 1050b39fb; -[SCGroupProfileCharmsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_1050b3978(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 0x30),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1050b39fc; end: 1050b3a03; -[SCGroupProfileCharmsSectionDataProvider numberOfItemsInSection:] */

void FUN_1050b39fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1050b3a04; end: 1050b3b5b; -[SCGroupProfileCharmsSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_1050b3a04(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined1 *puStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1050b3ae8;
  puStack_58 = &UNK_11085bb28;
  uStack_50 = param_1;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dc4ed8;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = (undefined1 *)ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126b47f0;
  _objc_opt_class(PTR_PTR_1126b47f0);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  uVar1 = param_2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050b3b5c; end: 1050b3c5f; -[SCGroupProfileCharmsSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_1050b3b5c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((((uVar1 & 1) != 0) || (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) != 0)) ||
     (uVar1 = param_3, func_0x00010c0720c0(), (int)uVar1 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050b3c60; end: 1050b3c8f;  */

void FUN_1050b3c60(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f9220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050b3c90; end: 1050b3d8b; -[SCGroupProfileCharmsSectionDataProvider dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_1050b3c90(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0288;
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == puVar1) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050b3d8c; end: 1050b3dbb;  */

void FUN_1050b3d8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f9220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050b3dbc; end: 1050b427b; -[SCGroupProfileCharmsSectionDataProvider _charmsCardViewModel:] */

void FUN_1050b3dbc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfce020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c110560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uStack_68 = 0;
  }
  else {
    uStack_68 = *(undefined8 *)(param_1 + 0x58);
    lVar2 = param_3;
    func_0x00010bfce020(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c110560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfce020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf1c5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uStack_70 = 0;
  }
  else {
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    lVar2 = param_3;
    func_0x00010bfce020(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1c5c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfce020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf1c5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uStack_78 = 0;
  }
  else {
    uStack_78 = *(undefined8 *)(param_1 + 0x58);
    lVar2 = param_3;
    func_0x00010bfce020(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1c5e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar4 = *(long *)(param_1 + 0x48);
  func_0x00010c08fa60();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  if (lVar4 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc4e58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4e58,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc4e38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4e38,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(ppuVar5);
  puVar7 = PTR_PTR_1126b4838;
  _objc_alloc_init();
  func_0x00010c2b62e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf35b80(param_3);
  func_0x00010c2aa500(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0a80(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b47f8;
  _objc_alloc();
  puVar10 = PTR_PTR_1126b3ce8;
  func_0x00010bf36700(PTR_PTR_1126b3ce8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35b80(param_3);
  func_0x00010bfe2e20(param_3);
  func_0x00010bffd7c0();
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126b4888;
  _objc_alloc();
  lVar1 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c282d00(param_3);
  lVar2 = lVar1;
  FUN_1050b07f0(lVar1,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bfce020(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  FUN_1050afe4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddcc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282d00(param_3);
  func_0x00010c053cc0();
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  _objc_release(uStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1050b427c; end: 1050b443b; -[SCGroupProfileCharmsSectionDataProvider _charmDescription:] */

void FUN_1050b427c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar6 = param_3;
  func_0x00010bf6e400();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010bf6e6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  ppuVar6 = ppuVar7;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    lVar8 = *plStack_120;
    do {
      ppuVar9 = (undefined **)0x0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(ppuVar7);
        }
        uVar2 = param_1;
        func_0x00010bee7ec0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(uVar2);
        ppuVar9 = (undefined **)((long)ppuVar9 + 1);
      } while (ppuVar6 != ppuVar9);
      ppuVar6 = ppuVar7;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar7);
  ppuVar7 = param_3;
  func_0x00010bf6e400();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar7;
  func_0x00010bf6e600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar9;
  FUN_1050d2578();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  _objc_release(ppuVar7);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar3 = (undefined1 *)puVar5;
  func_0x00010c296d80();
  if ((int)puVar3 == 3) {
    puVar3 = (undefined1 *)puVar5;
    func_0x00010bfcf020();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    if (puVar4 == (undefined1 *)0x0) goto LAB_1050b4500;
    ppuVar7 = (undefined **)param_3[0xb];
    puVar3 = (undefined1 *)puVar5;
    func_0x00010bfcf020(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar6 = ppuVar7;
      func_0x00010901d7c4(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar7);
  }
  else if ((int)puVar3 == 2) {
    ppuVar6 = (undefined **)param_3[10];
    _objc_retain(ppuVar6);
  }
  else {
LAB_1050b4500:
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_release(puVar5);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 1050b443c; end: 1050b4537; -[SCGroupProfileCharmsSectionDataProvider _valueOfDescriptionVariable:] */

void FUN_1050b443c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c296d80();
  if ((int)lVar1 == 3) {
    lVar1 = param_3;
    func_0x00010bfcf020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      ppuVar4 = *(undefined ***)(param_1 + 0x58);
      lVar1 = param_3;
      func_0x00010bfcf020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(ppuVar4,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        ppuVar3 = ppuVar4;
        func_0x00010901d7c4(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar4);
      goto LAB_1050b451c;
    }
  }
  else if ((int)lVar1 == 2) {
    ppuVar3 = *(undefined ***)(param_1 + 0x50);
    _objc_retain(ppuVar3);
    goto LAB_1050b451c;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_1050b451c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1050b4538; end: 1050b454f; -[SCGroupProfileCharmsSectionDataProvider dataProviderDelegate] */

void FUN_1050b4538(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050b4550; end: 1050b455b; -[SCGroupProfileCharmsSectionDataProvider setDataProviderDelegate:] */

void FUN_1050b4550(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1050b455c; end: 1050b4563; -[SCGroupProfileCharmsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1050b455c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1050b4564; end: 1050b4593; -[SCGroupProfileCharmsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1050b4564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050b4594; end: 1050b459b; -[SCGroupProfileCharmsSectionDataProvider sectionDataModel] */

undefined8 FUN_1050b4594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1050b459c; end: 1050b464b; -[SCGroupProfileCharmsSectionDataProvider .cxx_destruct] */

void FUN_1050b459c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1050b464c; end: 1050b4757; -[SCGroupProfileCharmsSectionDescriptorProvider init] */

undefined1 * FUN_1050b464c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = &uStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_48 = PTR_PTR_1126e5fe8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b1260;
    _objc_alloc();
    ppuVar5 = &PTR____CFConstantStringClassReference_110e579d8;
    func_0x000106639650(&PTR____CFConstantStringClassReference_110e579d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055bc0();
    _objc_release(ppuVar5);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  return *(undefined1 **)(puVar2 + 8);
}



/* Entry: 1050b4758; end: 1050b475f; -[SCGroupProfileCharmsSectionDescriptorProvider sectionDescriptors] */

undefined8 FUN_1050b4758(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050b4760; end: 1050b476b; -[SCGroupProfileCharmsSectionDescriptorProvider .cxx_destruct] */

void FUN_1050b4760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050b476c; end: 1050b489f; -[SCProfileCharmsSection initWithProfileSessionId:emptyStateText:supplementaryViewProvider:] */

undefined1 *
FUN_1050b476c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e5ff0;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050b48a0; end: 1050b495b; -[SCProfileCharmsSection setUp] */

void FUN_1050b48a0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x78);
  _objc_opt_respondsToSelector(uVar1,PTR_s_setUp_112664a70);
  if ((uVar1 & 1) != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1050b495c; end: 1050b499f;  */

void FUN_1050b495c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf35ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c120();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050b49a0; end: 1050b4a6f; -[SCProfileCharmsSection tearDown] */

void FUN_1050b49a0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x78);
  _objc_opt_respondsToSelector(uVar1,PTR_s_tearDown_112678508);
  if ((uVar1 & 1) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_storeWeak(param_1 + 0x48,0);
  return;
}



/* Entry: 1050b4a70; end: 1050b4ab3;  */

void FUN_1050b4a70(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf35ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ab80();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050b4ab4; end: 1050b4b9f; -[SCProfileCharmsSection applyConfiguration:] */

void FUN_1050b4ab4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4890;
  _objc_opt_class(PTR_PTR_1126b4890);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar5 = *(ulong *)(param_1 + 0x18);
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  if (uVar1 == uVar5) {
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_1050b4b80;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = uVar5;
    _objc_release(uVar4);
    func_0x00010bee4680(param_1);
  }
LAB_1050b4b80:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050b4ba0; end: 1050b4c1f; -[SCProfileCharmsSection reuseCellClassesByIdentifiers] */

undefined * FUN_1050b4ba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dc4e78;
  puVar1 = PTR_PTR_1126b4898;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 1050b4c20; end: 1050b4c27; -[SCProfileCharmsSection numberOfCellsInSection] */

undefined8 FUN_1050b4c20(void)

{
  return 1;
}



/* Entry: 1050b4c28; end: 1050b508b; -[SCProfileCharmsSection cellForItemAtIndexInSection:] */

undefined1  [16]
FUN_1050b4c28(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dStack_190;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_5 + 0x60;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b4898;
  _objc_opt_class(PTR_PTR_1126b4898);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  lVar5 = param_5 + 0x48;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar5 == 0) {
    _objc_storeWeak(param_5 + 0x48,uVar1);
    _objc_retain();
    uVar2 = uVar1;
    func_0x00010bf4c080(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189840();
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar5 = param_5 + 0x80;
    _objc_loadWeakRetained(lVar5);
    lVar6 = param_5 + 0x48;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c17ad60();
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = param_5 + 0x48;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c1e44c0();
    _objc_release(lVar5);
    puVar3 = PTR_PTR_1126b48a0;
    _objc_opt_new(PTR_PTR_1126b48a0);
    uVar7 = *(undefined8 *)(param_5 + 0x10);
    func_0x000108f5f2e8(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(puVar3);
    _objc_release(uVar7);
    lVar5 = param_5 + 0x48;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e9a0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    param_1 = 0.0;
    lVar8 = *(long *)(param_5 + 0x28);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar8);
        }
        lVar9 = param_5 + 0x48;
        _objc_loadWeakRetained(lVar9);
        lVar10 = lVar9;
        func_0x00010bf4c080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(*(undefined8 *)(param_5 + 0x28));
        func_0x00010c126000(lVar10);
        _objc_release(lVar10);
        _objc_release(lVar9);
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    lVar5 = param_5 + 0x48;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    func_0x00010c126000(lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar3);
  }
  lVar5 = param_5 + 0x48;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(lVar6);
  _objc_release(lVar5);
  func_0x00010bfb68e0(uVar1);
  uVar2 = param_5 + 0x48;
  dVar13 = param_1;
  dVar14 = param_2;
  uVar7 = param_3;
  dVar15 = param_4;
  _objc_loadWeakRetained();
  uVar4 = uVar2;
  func_0x00010bfb68e0();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,dVar13,dVar14,uVar7,dVar15);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    func_0x00010bfb68e0(uVar1);
    lVar5 = param_5 + 0x48;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c19f0e0(param_1,param_2,param_3);
    _objc_release(lVar5);
  }
  func_0x00010bf529e0(*(undefined8 *)(param_5 + 0x20));
  lVar5 = param_5 + 0x48;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf14800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  param_5 = param_5 + 0x48;
  _objc_loadWeakRetained();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = param_1;
    return auVar17;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)(uVar1 + 0x20);
  func_0x00010bf529e0();
  if (lVar11 == 0) {
    puVar3 = PTR_PTR_1126b48a0;
    _objc_opt_class(PTR_PTR_1126b48a0);
    uVar7 = *(undefined8 *)(uVar1 + 0x18);
    func_0x00010c156140(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2aa0();
    dStack_190 = (param_1 - param_2) - param_4;
    dVar13 = 1.79769313486232e+308;
    func_0x00010c23d6e0(dStack_190,0x7fefffffffffffff,puVar3);
  }
  else {
    uVar7 = *(undefined8 *)(uVar1 + 0x18);
    func_0x00010c156140(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2aa0();
    param_4 = (param_1 - param_2) - param_4;
    dStack_190 = param_4;
    func_0x00010b816218();
    dVar13 = dStack_190;
    func_0x00010b816218();
    dStack_190 = (double)(long)(dStack_190 * param_4) / dStack_190;
    dVar13 = (double)(long)(dVar13 * 124.0) / dVar13;
  }
  _objc_release(uVar7);
  auVar16._8_8_ = dVar13;
  auVar16._0_8_ = dStack_190;
  return auVar16;
}



/* Entry: 1050b508c; end: 1050b5183; -[SCProfileCharmsSection sizeForItemAtIndexInSection:withWidth:] */

undefined1  [16]
FUN_1050b508c(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  
  lVar1 = *(long *)(param_5 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126b48a0;
    _objc_opt_class(PTR_PTR_1126b48a0);
    uVar2 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010c156140(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2aa0();
    uStack_40 = (param_1 - param_2) - param_4;
    dVar4 = 1.79769313486232e+308;
    func_0x00010c23d6e0(uStack_40,0x7fefffffffffffff,puVar3,param_6,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010c156140(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2aa0();
    param_4 = (param_1 - param_2) - param_4;
    uStack_40 = param_4;
    func_0x00010b816218();
    dVar4 = uStack_40;
    func_0x00010b816218();
    uStack_40 = (double)(long)(uStack_40 * param_4) / uStack_40;
    dVar4 = (double)(long)(dVar4 * 124.0) / dVar4;
  }
  _objc_release(uVar2);
  auVar5._8_8_ = dVar4;
  auVar5._0_8_ = uStack_40;
  return auVar5;
}



/* Entry: 1050b5184; end: 1050b51ab; -[SCProfileCharmsSection supplementaryViewProvider] */

void FUN_1050b5184(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050b51ac; end: 1050b522f; -[SCProfileCharmsSection sectionInfo] */

void FUN_1050b51ac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f120d8;
  pppuVar5 = &ppuStack_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar5);
  if (*(undefined ****)(puVar1 + 0x78) != pppuVar5) {
    func_0x00010c1896c0();
    func_0x00010c21c740(*(undefined8 *)(puVar1 + 0x78));
    _objc_retain(pppuVar5);
    uVar2 = *(undefined8 *)(puVar1 + 0x78);
    *(undefined ****)(puVar1 + 0x78) = pppuVar5;
    _objc_release(uVar2);
    func_0x00010c1896c0(*(undefined8 *)(puVar1 + 0x78));
    func_0x00010c21c740(*(undefined8 *)(puVar1 + 0x78));
    uVar3 = *(undefined8 *)(puVar1 + 0x78);
    func_0x00010bf4bfc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(puVar1 + 0x28);
    *(undefined8 *)(puVar1 + 0x28) = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar4 = *(ulong *)(puVar1 + 0x78);
    _objc_opt_respondsToSelector(uVar4,PTR_s_configurationBlocksByReuseIdenti_1125af330);
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 0x78);
      func_0x00010bf46620();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)(puVar1 + 0x30);
      *(undefined8 *)(puVar1 + 0x30) = uVar2;
      _objc_release(uVar6);
      _objc_release(uVar3);
    }
    _objc_initWeak(auStack_68,puVar1);
    uVar2 = *(undefined8 *)(puVar1 + 0x40);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(pppuVar5);
  return;
}



/* Entry: 1050b5230; end: 1050b53b3; -[SCProfileCharmsSection setCharmsDataProvider:] */

void FUN_1050b5230(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x78) != param_3) {
    func_0x00010c1896c0();
    func_0x00010c21c740(*(undefined8 *)(param_1 + 0x78));
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = param_3;
    _objc_release(uVar1);
    func_0x00010c1896c0(*(undefined8 *)(param_1 + 0x78));
    func_0x00010c21c740(*(undefined8 *)(param_1 + 0x78));
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf4bfc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar3 = *(ulong *)(param_1 + 0x78);
    _objc_opt_respondsToSelector(uVar3,PTR_s_configurationBlocksByReuseIdenti_1125af330);
    if ((uVar3 & 1) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010bf46620();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = uVar1;
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050b53b4; end: 1050b53df;  */

void FUN_1050b53b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050b53e0; end: 1050b53ef; -[SCProfileCharmsSection handleActionWithSender:actionModel:fromSourceView:] */

void FUN_1050b53e0(long param_1)

{
  if (*(long *)(param_1 + 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x70),PTR_s_handleActionWithSender_actionMod_1125d19f8);
    return;
  }
  return;
}



/* Entry: 1050b53f0; end: 1050b54b3; -[SCProfileCharmsSection sectionDataProviderDidUpdateViewModels:] */

void FUN_1050b53f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1050b54b4; end: 1050b5557;  */

void FUN_1050b54b4(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1050b5558;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_48);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4640();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1050b5558; end: 1050b55bb;  */

void FUN_1050b5558(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c08cdc0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1050b55bc; end: 1050b55c3; -[SCProfileCharmsSection numberOfSectionsInCollectionView:] */

undefined8 FUN_1050b55bc(void)

{
  return 1;
}



/* Entry: 1050b55c4; end: 1050b55cb; -[SCProfileCharmsSection collectionView:numberOfItemsInSection:] */

void FUN_1050b55c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1050b55cc; end: 1050b57a3; -[SCProfileCharmsSection collectionView:cellForItemAtIndexPath:] */

void FUN_1050b55cc(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0840e0();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0840e0(param_4);
    func_0x00010c0dfd40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf34020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf6e0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b47f0;
    _objc_opt_class(PTR_PTR_1126b47f0);
    uVar5 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar4);
    uVar1 = uVar2;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    lVar7 = *(long *)(param_1 + 0x30);
    uVar3 = uVar6;
    func_0x00010bf34020(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7,uVar1);
    }
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010c17e6e0(uVar1);
    _objc_release(param_1);
    func_0x00010c161980(uVar1);
    uVar3 = uVar6;
    func_0x00010bf4ddc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(uVar1);
    _objc_release(uVar3);
    _objc_release(lVar7);
    _objc_release(uVar6);
  }
  else {
    uVar1 = param_3;
    func_0x00010bf6e0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050b57a4; end: 1050b58cb; -[SCProfileCharmsSection _updateWithConfiguration] */

void FUN_1050b57a4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x68) = 1;
  puVar2 = PTR_PTR_1126b48b0;
  func_0x00010c128f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar2;
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf51e00();
  _objc_release(uVar3);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 1050b58cc; end: 1050b591f;  */

void FUN_1050b58cc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf35ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9220();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050b5920; end: 1050b597f; -[SCProfileCharmsSection _reloadSupplementaryViewModels] */

void FUN_1050b5920(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c262e20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf409c0(lVar1,param_2,param_1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050b5980; end: 1050b59d7; -[SCProfileCharmsSection _reloadSection] */

void FUN_1050b5980(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b48b0;
  func_0x00010c128f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar2);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf40a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050b59d8; end: 1050b5a9b; -[SCProfileCharmsSection _applyContainerCellViewModelsForCountTransition:] */

void FUN_1050b59d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf14800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050b5a9c; end: 1050b5c0f; -[SCProfileCharmsSection _updateWithCharmsDataProvider] */

void FUN_1050b5a9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar4 = *(long *)(param_1 + 0x78);
    lVar2 = lVar4;
    func_0x00010c0deec0(lVar4,param_2,0);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc0000000;
    puStack_48 = &UNK_108fd6d04;
    puStack_40 = &UNK_110ad1ef8;
    uStack_38 = 0;
    uVar3 = 0;
    func_0x00010bd86bb4(0,lVar2,&puStack_58);
    func_0x00010bf4ac00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (lVar4 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010c262e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(&puStack_58,param_1);
      puStack_90 = puVar1;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1050b5c10;
      puStack_78 = &UNK_110848218;
      _objc_copyWeak(auStack_60,&puStack_58);
      _objc_retain(lVar4);
      lStack_70 = lVar4;
      _objc_retain(uVar3);
      uStack_68 = uVar3;
      func_0x00010bcbe2c4("APPSTORE",&puStack_90);
      _objc_release(uStack_68);
      _objc_release(lStack_70);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(&puStack_58);
      _objc_release(uVar3);
    }
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 1050b5c10; end: 1050b5c43;  */

void FUN_1050b5c10(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee46e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050b5c44; end: 1050b62c3; -[SCProfileCharmsSection _updateWithContainerCellViewModels:supplementaryViewModels:] */

/* WARNING: Possible PIC construction at 0x0001050b6260: Changing call to branch */

void FUN_1050b5c44(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined8 *)(param_1 + 0x68) = 2;
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c262e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_4);
  if (uVar1 == param_4) {
    _objc_release(param_4);
    _objc_release(uVar1);
    _objc_release(uVar1);
  }
  else {
    if (param_4 == 0) {
      _objc_release();
      _objc_release(uVar1);
    }
    else {
      uVar2 = uVar1;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(uVar1);
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_1050b5d48;
    }
    uVar1 = param_4;
    func_0x00010bf51e00(param_4);
    func_0x00010c20fe40(*(undefined8 *)(param_1 + 0x38));
    _objc_release(uVar1);
    func_0x00010be8ad60(param_1);
  }
LAB_1050b5d48:
  lVar4 = param_1 + 0x48;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar4 == 0) {
LAB_1050b6244:
    func_0x00010bf51e00();
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = param_3;
    _objc_release(uVar12);
  }
  else {
    puVar15 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar15);
    _objc_retain(param_3);
    if (puVar15 == param_3) {
      _objc_release(param_3);
LAB_1050b5db0:
      _objc_release(puVar15);
    }
    else if (param_3 == (undefined *)0x0) {
      _objc_release(puVar15);
LAB_1050b5dc0:
      puVar15 = param_3;
      func_0x00010bf529e0();
      if (puVar15 == (undefined *)0x0) {
        lVar4 = *(long *)(param_1 + 0x20);
        func_0x00010bf529e0();
        if (lVar4 == 0) goto LAB_1050b5dcc;
        lVar4 = param_1 + 0x48;
        _objc_loadWeakRetained();
        lVar11 = lVar4;
        func_0x00010c252440();
        _objc_release(lVar4);
        if (lVar11 - 1U < 2) {
          param_1 = param_1 + 0x48;
          _objc_loadWeakRetained(param_1);
          lVar4 = param_1;
          func_0x00010c0f1fa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_3);
          func_0x00010bf9fa00(lVar4);
          _objc_release(lVar4);
          _objc_release(param_1);
          puVar15 = param_3;
          goto LAB_1050b5db0;
        }
        if (lVar11 != 0) goto LAB_1050b6264;
LAB_1050b6238:
        if (*(char *)(param_1 + 0x50) == '\x01') goto LAB_1050b6244;
        func_0x00010bdcde60(param_1);
      }
      else {
LAB_1050b5dcc:
        puVar15 = param_3;
        func_0x00010bf529e0();
        if (puVar15 != (undefined *)0x0) {
          lVar4 = *(long *)(param_1 + 0x20);
          func_0x00010bf529e0();
          if (lVar4 == 0) goto LAB_1050b6238;
        }
        puVar15 = param_3;
        func_0x00010bf529e0();
        if (puVar15 != (undefined *)0x0) {
          lVar4 = *(long *)(param_1 + 0x20);
          func_0x00010bf529e0();
          if (lVar4 != 0) {
            lVar5 = *(long *)(param_1 + 0x20);
            func_0x00010b813c80(lVar5,param_3,&PTR___NSConcreteGlobalBlock_110d622f0);
            _objc_release(&PTR___NSConcreteGlobalBlock_110d622f0);
            puVar15 = param_3;
            func_0x00010bf51e00();
            uVar12 = *(undefined8 *)(param_1 + 0x20);
            *(undefined **)(param_1 + 0x20) = puVar15;
            _objc_release(uVar12);
            puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
            puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
            puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
            lVar7 = lVar5;
            func_0x00010c286820();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar7;
            func_0x00010bf52a60();
            lVar11 = lRam0000000000000000;
            while (lVar4 != 0) {
              lVar16 = 0;
              do {
                if (lRam0000000000000000 != lVar11) {
                  _objc_enumerationMutation(lVar7);
                }
                uVar12 = *(undefined8 *)(lVar16 * 8);
                uVar1 = param_1 + 0x48;
                _objc_loadWeakRetained();
                uVar2 = uVar1;
                func_0x00010bf4c080();
                _objc_retainAutoreleasedReturnValue();
                puVar8 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
                func_0x00010c0e1e60(uVar12);
                func_0x00010bfed020(puVar8);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar2;
                func_0x00010bf33b60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar8);
                _objc_release(uVar2);
                _objc_release(uVar1);
                puVar8 = PTR_PTR_1126b47f0;
                _objc_opt_class(PTR_PTR_1126b47f0);
                uVar2 = uVar9;
                _objc_opt_isKindOfClass(uVar9,puVar8);
                uVar1 = uVar9;
                if ((uVar2 & 1) == 0) {
                  uVar1 = 0;
                }
                _objc_retain(uVar1);
                _objc_release(uVar9);
                puVar8 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
                if (uVar1 == 0) {
                  func_0x00010c0e1e60(uVar12);
                  func_0x00010bfed020(puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar15);
                }
                else {
                  func_0x00010c0d8ae0(uVar12);
                  puVar8 = param_3;
                  func_0x00010c0dfd40(param_3);
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = puVar8;
                  func_0x00010bf4ddc0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c2226c0(uVar9);
                  _objc_release(puVar10);
                }
                _objc_release(puVar8);
                _objc_release(uVar1);
                lVar16 = lVar16 + 1;
              } while (lVar4 != lVar16);
              lVar4 = lVar7;
              func_0x00010bf52a60();
            }
            _objc_release(lVar7);
            lVar4 = lVar5;
            func_0x00010c066900(lVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar3);
            func_0x00010bf97bc0(lVar4);
            _objc_release(lVar4);
            lVar4 = lVar5;
            func_0x00010bf6c000(lVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar6);
            func_0x00010bf97bc0(lVar4);
            _objc_release(lVar4);
            puVar8 = puVar3;
            func_0x00010bf529e0();
            if (((puVar8 != (undefined *)0x0) ||
                (puVar8 = puVar6, func_0x00010bf529e0(), puVar8 != (undefined *)0x0)) ||
               (puVar8 = puVar15, func_0x00010bf529e0(), puVar8 != (undefined *)0x0)) {
              param_1 = param_1 + 0x48;
              _objc_loadWeakRetained(param_1);
              lVar4 = param_1;
              func_0x00010bf4c080();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c128b60();
              _objc_release(lVar4);
              _objc_release(param_1);
            }
            _objc_release(puVar6);
            _objc_release(puVar3);
            _objc_release(puVar6);
            _objc_release(puVar3);
            _objc_release(puVar15);
            _objc_release(lVar5);
          }
        }
      }
    }
    else {
      puVar3 = puVar15;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(puVar15);
      if (((ulong)puVar3 & 1) == 0) goto LAB_1050b5dc0;
    }
LAB_1050b6264:
    _objc_release(param_4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return;
    }
    ___stack_chk_fail();
    uVar12 = *(undefined8 *)(param_3 + 0x28);
    if (*(char *)(*(long *)(param_3 + 0x20) + 0x50) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdcde70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_3 + 0x20),PTR_s__applyContainerCellViewModelsFor_112551138);
      return;
    }
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x20);
    *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x20) = uVar12;
    _objc_release(uVar14);
    param_1 = *(long *)(param_3 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadSection_112580478);
  return;
}



/* Entry: 1050b62c4; end: 1050b63b7;  */

void FUN_1050b62c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x50) == '\x01') {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = uVar1;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be8ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__reloadSection_112580478);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdcde70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__applyContainerCellViewModelsFor_112551138);
  return;
}



/* Entry: 1050b63b8; end: 1050b649f; -[SCProfileCharmsSection dismissTransitionShouldBeginWithView:touchLocation:] */

bool FUN_1050b63b8(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  _objc_retain(param_5);
  lVar1 = param_3 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf512a0(param_1,param_2,param_5,param_4,lVar1);
  _objc_release(param_5);
  _objc_release(lVar1);
  lVar1 = param_3 + 0x48;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c102b20(param_1,param_2);
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    bVar3 = true;
  }
  else {
    param_3 = param_3 + 0x48;
    _objc_loadWeakRetained(param_3);
    lVar1 = param_3;
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    bVar3 = param_1 <= 0.0;
    _objc_release(lVar1);
    _objc_release(param_3);
  }
  return bVar3;
}



/* Entry: 1050b64a0; end: 1050b64e7; -[SCProfileCharmsSection dismissTransitionWillBegin] */

void FUN_1050b64a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050b64e8; end: 1050b652f; -[SCProfileCharmsSection dismissTransitionDidEnd] */

void FUN_1050b64e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050b6530; end: 1050b6537; -[SCProfileCharmsSection sectionUpdateModel] */

undefined8 FUN_1050b6530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1050b6538; end: 1050b653f; -[SCProfileCharmsSection setSectionUpdateModel:] */

void FUN_1050b6538(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1050b6540; end: 1050b6557; -[SCProfileCharmsSection delegate] */

void FUN_1050b6540(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050b6558; end: 1050b6563; -[SCProfileCharmsSection setDelegate:] */

void FUN_1050b6558(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1050b6564; end: 1050b656b; -[SCProfileCharmsSection dataLoadingStatus] */

undefined8 FUN_1050b6564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1050b656c; end: 1050b6573; -[SCProfileCharmsSection setDataLoadingStatus:] */

void FUN_1050b656c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}


