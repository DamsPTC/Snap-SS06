/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d0d2ac; end: 106d0d2b7; -[SCMemoriesSnapsSectionDataProvider setDelegate:] */

void FUN_106d0d2ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 106d0d2b8; end: 106d0d2bf; -[SCMemoriesSnapsSectionDataProvider selectMode] */

undefined1 FUN_106d0d2b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 106d0d2c0; end: 106d0d347; -[SCMemoriesSnapsSectionDataProvider .cxx_destruct] */

void FUN_106d0d2c0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 106d0d348; end: 106d0d353; +[SCMemoriesSubscreenHeaderDataProvider announcerIdentifier] */

undefined ** FUN_106d0d348(void)

{
  return &PTR____CFConstantStringClassReference_110e84458;
}



/* Entry: 106d0d354; end: 106d0d35b; -[SCMemoriesSubscreenHeaderDataProvider addListener:] */

void FUN_106d0d354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106d0d35c; end: 106d0d363; -[SCMemoriesSubscreenHeaderDataProvider removeListener:] */

void FUN_106d0d35c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106d0d364; end: 106d0d4af; -[SCMemoriesSubscreenHeaderDataProvider initWithDataCoordinator:snapThumbnailGenerator:type:subscreenHeaderDataProviderAccessories:title:] */

undefined1 *
FUN_106d0d364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f68a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_3);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    uVar4 = param_6;
    func_0x00010c078640();
    *(char *)((long)puVar1 + 0x30) = (char)uVar4;
    uVar4 = param_6;
    func_0x00010bf622a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_7;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)((long)puVar1 + 0x20);
    _objc_loadWeakRetained(puVar3);
    func_0x00010bef9980();
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d0d4b0; end: 106d0d547; -[SCMemoriesSubscreenHeaderDataProvider setSelectMode:] */

void FUN_106d0d4b0(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(byte *)(param_1 + 0x40) != param_3) {
    *(char *)(param_1 + 0x40) = (char)param_3;
    if (param_3 == 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      func_0x00010c121e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106d0d548;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x58),param_2,&puStack_48);
  }
  return;
}



/* Entry: 106d0d548; end: 106d0d557;  */

void FUN_106d0d548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSectionDataModel__11265beb0,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 106d0d558; end: 106d0d68b; -[SCMemoriesSubscreenHeaderDataProvider sectionDataModelFromSubscreenDataModel:] */

undefined ** FUN_106d0d558(long param_1,undefined **param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar5 = param_3;
  if (*(long *)(param_1 + 0x28) == 2) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106d0d68c;
    puStack_50 = &UNK_110975b98;
    param_2 = &puStack_68;
    lStack_48 = param_1;
    func_0x0001006372a4();
    _objc_release(param_3);
  }
  lVar2 = lVar5;
  func_0x00010bf529e0();
  *(long *)(param_1 + 0x18) = lVar2;
  lVar2 = lVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = lVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  ppuVar3 = param_2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar3;
  func_0x00010bf977c0();
  if ((int)ppuVar6 - 1U < 2) {
    _objc_release(ppuVar3);
    lVar5 = *(long *)(param_3 + 0x20);
    if (*(char *)(lVar5 + 0x30) != '\x01') {
      ppuVar6 = (undefined **)0x0;
      goto LAB_106d0d778;
    }
    bVar1 = true;
LAB_106d0d734:
    ppuVar3 = param_2;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar3;
    func_0x00010b5fab34();
    if ((((ulong)ppuVar6 & 1) == 0) && (bVar1)) {
      lVar5 = *(long *)(param_3 + 0x20);
      ppuVar6 = (undefined **)0x1;
      goto LAB_106d0d778;
    }
  }
  else {
    ppuVar6 = param_2;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar6;
    func_0x00010bf977c0();
    bVar1 = (int)ppuVar4 == 3;
    _objc_release(ppuVar6);
    _objc_release(ppuVar3);
    lVar5 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar5 + 0x30) & 1) != 0) goto LAB_106d0d734;
    ppuVar6 = (undefined **)0x0;
    if ((int)ppuVar4 != 3) goto LAB_106d0d7c0;
LAB_106d0d778:
    ppuVar7 = *(undefined ***)(lVar5 + 0x38);
    ppuVar4 = param_2;
    func_0x00010bf97060(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar4;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)(ulong)(ppuVar7 == ppuVar8);
    _objc_release();
    _objc_release(ppuVar4);
    iVar9 = (int)ppuVar6;
    ppuVar6 = ppuVar8;
    if (iVar9 == 0) goto LAB_106d0d7c0;
  }
  _objc_release(ppuVar3);
LAB_106d0d7c0:
  _objc_release(param_2);
  return ppuVar6;
}



/* Entry: 106d0d68c; end: 106d0d7df;  */

ulong FUN_106d0d68c(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf977c0();
  if ((int)uVar5 - 1U < 2) {
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x20);
    if (*(char *)(lVar4 + 0x30) != '\x01') {
      uVar5 = 0;
      goto LAB_106d0d778;
    }
    bVar1 = true;
LAB_106d0d734:
    uVar2 = param_2;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010b5fab34();
    if (((uVar5 & 1) == 0) && (bVar1)) {
      lVar4 = *(long *)(param_1 + 0x20);
      uVar5 = 1;
      goto LAB_106d0d778;
    }
  }
  else {
    uVar5 = param_2;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf977c0();
    bVar1 = (int)uVar3 == 3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar4 + 0x30) & 1) != 0) goto LAB_106d0d734;
    uVar5 = 0;
    if ((int)uVar3 != 3) goto LAB_106d0d7c0;
LAB_106d0d778:
    uVar6 = *(ulong *)(lVar4 + 0x38);
    uVar3 = param_2;
    func_0x00010bf97060(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = (ulong)(uVar6 == uVar7);
    _objc_release();
    _objc_release(uVar3);
    iVar8 = (int)uVar5;
    uVar5 = uVar7;
    if (iVar8 == 0) goto LAB_106d0d7c0;
  }
  _objc_release(uVar2);
LAB_106d0d7c0:
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 106d0d7e0; end: 106d0d82b; -[SCMemoriesSubscreenHeaderDataProvider setSectionDataModel:] */

void FUN_106d0d7e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d0d82c; end: 106d0d89b; -[SCMemoriesSubscreenHeaderDataProvider numberOfItemsInSection:] */

ulong FUN_106d0d82c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar4 = *(ulong *)(param_1 + 0x50);
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
  uVar3 = uVar1;
  func_0x00010bf529e0(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106d0d89c; end: 106d0dc03; -[SCMemoriesSubscreenHeaderDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_106d0d89c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar7 = param_1;
  func_0x00010c1559c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar6 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar4);
  uVar2 = uVar7;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar7);
  uVar7 = *(ulong *)(param_1 + 0x68);
  if (uVar7 == 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    uVar7 = uVar2;
    _objc_retain();
    if (lVar5 == 2) {
      uVar6 = uVar2;
      FUN_106d0e4d0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      if (uVar6 == 0) {
        func_0x000108dfd8e4();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(uVar6);
      }
      _objc_release(uVar6);
    }
    else if (lVar5 == 1) {
      func_0x000108dfd884();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar7 = 0;
    }
    _objc_release(uVar2);
  }
  else {
    _objc_retain(uVar7);
  }
  lVar5 = *(long *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = uVar2;
  FUN_106d0e444(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_106d0e680(uVar8,uVar6,1,lVar5 == 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = *(ulong *)(param_1 + 0x28);
  if (uVar6 < 4) {
    uVar9 = *(undefined8 *)(&UNK_10ddede20 + uVar6 * 8);
  }
  else {
    uVar9 = 2;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e84438;
  if (uVar6 != 2) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110e84418;
  if (uVar6 != 1) {
    ppuVar3 = ppuVar1;
  }
  _objc_retain(ppuVar3);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x106d0db04;
  puStack_80 = &UNK_110975be8;
  uStack_78 = uVar2;
  uStack_70 = uVar7;
  uStack_68 = uVar8;
  ppuStack_60 = ppuVar3;
  uStack_58 = uVar9;
  _objc_retain(ppuVar3);
  _objc_retain(uVar8);
  _objc_retain(uVar7);
  _objc_retain(uVar2);
  uVar9 = param_3;
  func_0x000100504554(param_3,&puStack_98);
  _objc_release(param_3);
  _objc_release(ppuStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(ppuVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 106d0dc04; end: 106d0dcc3; -[SCMemoriesSubscreenHeaderDataProvider contentCellClassesByReuseIdentifier] */

void FUN_106d0dc04(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &PTR____CFConstantStringClassReference_110e84438;
  if (*(long *)(param_1 + 0x28) != 2) {
    ppuVar5 = (undefined **)0x0;
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110e84418;
  if (*(long *)(param_1 + 0x28) != 1) {
    ppuVar4 = ppuVar5;
  }
  _objc_retain(ppuVar4);
  _objc_opt_class();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_a0,ppuVar4);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106d0de2c;
    puStack_b0 = &UNK_110845ae0;
    puVar7 = auStack_a0;
    _objc_copyWeak(auStack_a8,puVar7);
    ppuVar5 = &puStack_c8;
    _objc_retainBlock();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e84438;
    if (ppuVar4[5] != (undefined *)0x2) {
      ppuVar1 = (undefined **)0x0;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e84418;
    if (ppuVar4[5] != (undefined *)0x1) {
      ppuVar2 = ppuVar1;
    }
    _objc_retain(ppuVar2);
    ppuVar4 = ppuVar5;
    ppuStack_98 = ppuVar2;
    _objc_retainBlock();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_90 = ppuVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
    _objc_release(ppuVar5);
    _objc_destroyWeak(auStack_a8);
    puVar6 = auStack_a0;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_a0);
      __Unwind_Resume(puVar6);
      _objc_retain(puVar7);
      puVar6 = puVar6 + 0x20;
      _objc_loadWeakRetained(puVar6);
      func_0x00010bde4ec0();
      _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d0dcc4; end: 106d0de2b; -[SCMemoriesSubscreenHeaderDataProvider configurationBlocksByReuseIdentifier] */

void FUN_106d0dcc4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_60,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106d0de2c;
  puStack_70 = &UNK_110845ae0;
  puVar6 = auStack_60;
  _objc_copyWeak(auStack_68,puVar6);
  ppuVar2 = &puStack_88;
  _objc_retainBlock();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e84438;
  if (*(long *)(param_1 + 0x28) != 2) {
    ppuVar3 = (undefined **)0x0;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e84418;
  if (*(long *)(param_1 + 0x28) != 1) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  ppuVar3 = ppuVar2;
  ppuStack_58 = ppuVar1;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_50 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_68);
  puVar5 = auStack_60;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume(puVar5);
  _objc_retain(puVar6);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bde4ec0();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106d0de2c; end: 106d0de73;  */

void FUN_106d0de2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4ec0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d0de74; end: 106d0df0f; -[SCMemoriesSubscreenHeaderDataProvider memoriesSubscreenDataCoordinator:didUpdateDataModels:] */

void FUN_106d0de74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106d0df10;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106d0df10; end: 106d0df53;  */

void FUN_106d0df10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c155a00(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9220(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d0df54; end: 106d0dfe3; -[SCMemoriesSubscreenHeaderDataProvider _configureCollectionViewCell:] */

void FUN_106d0df54(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d2358;
  _objc_opt_class(PTR_PTR_1126d2358);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    func_0x00010c214100(param_3);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d0dfe4; end: 106d0dffb; -[SCMemoriesSubscreenHeaderDataProvider dataProviderDelegate] */

void FUN_106d0dfe4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d0dffc; end: 106d0e007; -[SCMemoriesSubscreenHeaderDataProvider setDataProviderDelegate:] */

void FUN_106d0dffc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 106d0e008; end: 106d0e00f; -[SCMemoriesSubscreenHeaderDataProvider sectionDataModel] */

undefined8 FUN_106d0e008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106d0e010; end: 106d0e017; -[SCMemoriesSubscreenHeaderDataProvider updateQueuePerformer] */

undefined8 FUN_106d0e010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106d0e018; end: 106d0e047; -[SCMemoriesSubscreenHeaderDataProvider setUpdateQueuePerformer:] */

void FUN_106d0e018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d0e048; end: 106d0e05f; -[SCMemoriesSubscreenHeaderDataProvider actionDelegate] */

void FUN_106d0e048(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d0e060; end: 106d0e06b; -[SCMemoriesSubscreenHeaderDataProvider setActionDelegate:] */

void FUN_106d0e060(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 106d0e06c; end: 106d0e073; -[SCMemoriesSubscreenHeaderDataProvider selectMode] */

undefined1 FUN_106d0e06c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 106d0e074; end: 106d0e07b; -[SCMemoriesSubscreenHeaderDataProvider title] */

undefined8 FUN_106d0e074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106d0e07c; end: 106d0e0f3; -[SCMemoriesSubscreenHeaderDataProvider .cxx_destruct] */

void FUN_106d0e07c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d0e0f4; end: 106d0e443;  */

void FUN_106d0e0f4(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf529e0();
  puVar3 = (undefined *)0x0;
  if ((param_2 != 0) && (lVar1 != 0)) {
    lVar1 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d2368;
    _objc_alloc(PTR_PTR_1126d2368);
    if (param_4 == 0) {
      lVar2 = lVar1;
      func_0x00010c241220(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(param_3);
      func_0x00010c03a060(puVar3);
      _objc_release(lVar2);
    }
    else {
      func_0x00010c03a060(puVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d0e444; end: 106d0e4cf;  */

void FUN_106d0e444(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000106d0e324(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106d0e4d0; end: 106d0e5ab;  */

void FUN_106d0e4d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000106d0e324();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106d0e5ac;
  uStack_30 = 0x106d0e5bc;
  uStack_28 = 0;
  func_0x00010bf97e80();
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d0e5ac; end: 106d0e5c3;  */

void FUN_106d0e5ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106d0e5c4; end: 106d0e67f;  */

void FUN_106d0e5c4(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d0e680; end: 106d0e8af;  */

void FUN_106d0e680(ulong param_1,undefined *param_2,int param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  puVar1 = param_2;
  _objc_retain();
  if (param_1 < 2) {
    if (param_1 == 1) {
      func_0x000108dfd854();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 0) {
      func_0x000108dfd824();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108dfd83c();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    _objc_alloc_init();
    puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf3e0(puVar2);
    _objc_release(puVar1);
    func_0x00010c1d02e0(puVar2);
    func_0x00010c21fa60(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c25d4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = puVar4;
    func_0x000108dfd86c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  if (((param_4 & 1) != 0) || (puVar2 = param_2, func_0x00010b5fab34(), (int)puVar2 != 0)) {
    _objc_retain(puVar1);
    puVar2 = puVar1;
    goto LAB_106d0e880;
  }
  puVar2 = param_2;
  func_0x00010bf977c0();
  if ((int)puVar2 - 1U < 2) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e2b818;
LAB_106d0e834:
    func_0x00010bcbeaa8(ppuVar6,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_2;
    func_0x00010bf977c0();
    if ((int)puVar2 == 3) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dc75f8;
      goto LAB_106d0e834;
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
LAB_106d0e880:
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d0e8b0; end: 106d0ea87;  */

void FUN_106d0e8b0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *in_x5;
  
  _objc_retain();
  _objc_retain(in_x5);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010b5fa088();
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if ((uVar2 < 0xd) && ((1L << (uVar2 & 0x3f) & 0x1566U) != 0)) {
    uVar2 = param_2;
    func_0x00010bd86870(param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8f38,
                        &PTR___NSConcreteGlobalBlock_110975c68);
    func_0x00010bf885a0();
    _objc_release(uVar2);
    ppuVar3 = (undefined **)PTR_PTR_1126b6600;
    func_0x00010bfb6060(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (in_x5 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126cfb58;
    func_0x00010c27f660();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(in_x5);
    puVar4 = in_x5;
  }
  puVar5 = PTR_PTR_1126cfb60;
  _objc_alloc(PTR_PTR_1126cfb60);
  puVar6 = PTR_PTR_1126cfb60;
  func_0x00010bf7ece0(PTR_PTR_1126cfb60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5fc690(uVar1);
  func_0x00010c00c720(puVar5);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(uVar1);
  _objc_release(in_x5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106d0ea88; end: 106d0eaf3;  */

void FUN_106d0ea88(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010bf885a0(param_4);
  dVar2 = param_1;
  func_0x00010bf8b160(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 + (double)SUB84(dVar2,0),puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 106d0eaf4; end: 106d0ee77;  */

long FUN_106d0eaf4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar9 = param_1;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar10 = *plStack_130;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        uStack_170 = 0;
        uStack_160 = 0x3032000000;
        pcStack_158 = FUN_106d0ee78;
        uStack_150 = 0x106d0ee88;
        uStack_148 = 0;
        puStack_168 = &uStack_170;
        func_0x00010c0bff00(*(undefined8 *)(lStack_138 + lVar11 * 8));
        uVar4 = puStack_168[5];
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = puStack_168[5];
        FUN_106d0eecc();
        if ((uVar5 & 1) != 0) {
          uVar5 = uVar4;
          func_0x00010bfbdda0();
          func_0x00010b5fad2c();
          if ((uVar5 & 1) == 0) {
            uVar5 = uVar4;
            func_0x00010bfbdda0();
            func_0x00010b5fa33c();
            if (uVar5 == 8) goto LAB_106d0ec90;
            uVar6 = puStack_168[5];
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar6;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar6);
            uVar6 = uVar5;
            func_0x00010c0e0160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (uVar6 != 0) {
              uVar6 = uVar5;
              func_0x00010b6f8630(uVar5,uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              _objc_release(uVar6);
            }
          }
          else {
LAB_106d0ec90:
            _objc_retain(uVar4);
            uVar6 = uVar4;
            func_0x00010010fab4(uVar4,PTR_DAT_1126a4ec0);
            uVar5 = uVar4;
            if ((int)uVar6 == 0) {
              uVar5 = 0;
            }
            _objc_retain(uVar5);
            _objc_release(uVar4);
            if (uVar5 == 0) goto LAB_106d0ed5c;
            func_0x00010befa120(puVar1);
            uVar5 = uVar4;
          }
          _objc_release(uVar5);
        }
LAB_106d0ed5c:
        _objc_release(uVar4);
        __Block_object_dispose(&uStack_170,8);
        _objc_release(uStack_148);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar9;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar9);
  puVar7 = puVar1;
  func_0x00010bf51e00(puVar1);
  puVar8 = puVar2;
  func_0x00010bf51e00(puVar2);
  lVar9 = param_2;
  func_0x00010c06d100(param_2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return lVar9;
  }
  ___stack_chk_fail();
  lVar9 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return param_1;
}



/* Entry: 106d0ee78; end: 106d0ee8f;  */

void FUN_106d0ee78(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106d0ee90; end: 106d0eec7;  */

void FUN_106d0ee90(long param_1,undefined8 param_2)

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



/* Entry: 106d0eec8; end: 106d0eecb;  */

void FUN_106d0eec8(void)

{
  return;
}



/* Entry: 106d0eecc; end: 106d0ef8f;  */

bool FUN_106d0eecc(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010b5fc5e4();
  if (((int)lVar3 == 0) || (lVar3 = param_1, func_0x00010c06ece0(), (int)lVar3 == 0)) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar4 = param_1;
      func_0x00010c11eb20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c252440();
      bVar1 = (int)lVar5 != 3;
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 106d0ef90; end: 106d0f353;  */

/* WARNING: Possible PIC construction at 0x000106d0f1e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106d0f258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d0f1e8) */
/* WARNING: Removing unreachable block (ram,0x000106d0f25c) */

void FUN_106d0ef90(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar5 = param_1;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar15 = *(undefined8 *)(lVar13 * 8);
      _objc_retain(puVar4);
      func_0x00010c0bff00(uVar15);
      _objc_release(puVar4);
      lVar13 = lVar13 + 1;
    } while (lVar6 != lVar13);
    lVar6 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_retain(puVar4);
  puVar7 = puVar4;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  do {
    if (puVar7 == (undefined *)0x0) {
      _objc_release(puVar4);
      puVar7 = puVar2;
      func_0x00010bf51e00(puVar2);
      puVar12 = puVar3;
      func_0x00010bf51e00(puVar3);
      func_0x00010bf171a0(param_2);
      _objc_release(puVar12);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        return;
      }
      ___stack_chk_fail();
      puVar2 = *(undefined **)(param_1 + 0x20);
      puVar8 = puVar10;
code_r0x00010befa120:
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_addObject__11259c1f0,puVar8);
      return;
    }
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar4);
      }
      puVar14 = *(undefined **)((long)puVar12 * 8);
      puVar8 = puVar14;
      func_0x00010bf97060();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar14;
      FUN_106d0eecc();
      if ((int)puVar9 != 0) {
        puVar9 = puVar8;
        func_0x00010bfbdda0();
        func_0x00010b5fad2c();
        if (((ulong)puVar9 & 1) == 0) {
          puVar9 = puVar8;
          func_0x00010bfbdda0();
          func_0x00010b5fa33c();
          if (puVar9 != (undefined *)0x8) {
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar14;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar14);
            puVar14 = puVar9;
            func_0x00010c0e0160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar14 == (undefined *)0x0) {
              _objc_release(puVar9);
              goto LAB_106d0f26c;
            }
            func_0x00010b6f8630(puVar9,puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar3;
            puVar8 = puVar9;
            goto code_r0x00010befa120;
          }
        }
        puVar10 = PTR_DAT_1126a4ec0;
        _objc_retain(puVar8);
        puVar14 = puVar8;
        func_0x00010010fab4(puVar8,puVar10);
        puVar9 = puVar8;
        if ((int)puVar14 == 0) {
          puVar9 = (undefined *)0x0;
        }
        _objc_retain(puVar9);
        _objc_release(puVar8);
        if (puVar9 != (undefined *)0x0) goto code_r0x00010befa120;
      }
LAB_106d0f26c:
      _objc_release(puVar8);
      puVar12 = puVar12 + 1;
    } while (puVar7 != puVar12);
    puVar7 = puVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106d0f354; end: 106d0f363;  */

void FUN_106d0f354(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 106d0f364; end: 106d0f577; -[SCMemoriesSubscreenViewController initWithWithSubscreenViewControllerType:streamingContentPrefetcher:dataCoordinator:operaPresenter:snapThumbnailGenerator:applicationLifecycleEvents:memoriesSelectionFooterBarControllerFactory:memoriesExperimentService:memoriesMonetizationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106d0f364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f68a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275cbc4) = param_3;
    lVar4 = (long)_DAT_11275cbc8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275cbcc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275cbd0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_11275cbd4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275cbd8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275cbdc;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    func_0x00010be65ba0(puVar1);
    uVar2 = param_9;
    func_0x00010bf23620();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275cbe0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275cbe0) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106d0f578; end: 106d0f67f; -[SCMemoriesSubscreenViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0f578(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f68a8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010becc3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(param_1);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  _objc_release(puVar2);
  func_0x00010c20eaa0(param_1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11275cbe4));
  _objc_release(puVar2);
  func_0x00010bfe2ae0(*(undefined8 *)(param_1 + _DAT_11275cbe8));
  return;
}



/* Entry: 106d0f680; end: 106d0f6df; -[SCMemoriesSubscreenViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0f680(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f68a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)uVar1 != 0) {
    func_0x00010bdfd700(param_1);
  }
  return;
}



/* Entry: 106d0f6e0; end: 106d0f737; -[SCMemoriesSubscreenViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0f6e0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bea9a00();
  func_0x00010bea8fa0(param_1);
  func_0x00010bea9a20(param_1);
  func_0x00010bea9c00(param_1);
  func_0x00010bea9920(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275cbe4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d0f738; end: 106d0f74f; -[SCMemoriesSubscreenViewController _applicationWillEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0f738(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11275cbc0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be03bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWithAnimated__11255e890,0);
  return;
}



/* Entry: 106d0f750; end: 106d0f77f; -[SCMemoriesSubscreenViewController _dismissWithAnimated:] */

void FUN_106d0f750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010beeafa0();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,param_3,0);
  return;
}



/* Entry: 106d0f780; end: 106d0f817; -[SCMemoriesSubscreenViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106d0f780(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + _DAT_11275cbe0);
  func_0x00010c07d640();
  if ((uVar1 & 1) == 0) {
    lVar3 = (long)_DAT_11275cbe4;
    if (param_5 == *(long *)(param_3 + lVar3)) {
      func_0x00010bf4cdc0();
      func_0x00010befda00(*(undefined8 *)(param_3 + lVar3));
      bVar2 = param_2 + param_1 <= 0.0;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_5);
  return bVar2;
}



/* Entry: 106d0f818; end: 106d0f88f; -[SCMemoriesSubscreenViewController cardTransitionEndedWithView:transitionType:] */

void FUN_106d0f818(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    func_0x00010beeafa0(param_1);
  }
  puStack_38 = PTR_PTR_1126f68a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_cardTransitionEndedWithView_tran_1125aa1a8,param_3,param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d0f890; end: 106d0f8ef; -[SCMemoriesSubscreenViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_106d0f890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  func_0x00010beeafa0(param_1);
  puStack_28 = PTR_PTR_1126f68a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didSelectDismissalActionWithHead_1125bc3f8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 106d0f8f0; end: 106d0f9f3; -[SCMemoriesSubscreenViewController _observeApplicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0f8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010bf75dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275cbec);
  *(undefined8 *)(param_1 + _DAT_11275cbec) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d0f9f4; end: 106d0fa27;  */

void FUN_106d0f9f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdcd900(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d0fa28; end: 106d0fa2b; -[SCMemoriesSubscreenViewController _willDismiss] */

void FUN_106d0fa28(void)

{
  return;
}



/* Entry: 106d0fa2c; end: 106d0fa2f; -[SCMemoriesSubscreenViewController _didEndDismissing:] */

void FUN_106d0fa2c(void)

{
  return;
}



/* Entry: 106d0fa30; end: 106d0fa33; -[SCMemoriesSubscreenViewController _didCreateStory:] */

void FUN_106d0fa30(void)

{
  return;
}



/* Entry: 106d0fa34; end: 106d0fa3b; -[SCMemoriesSubscreenViewController _title] */

undefined8 FUN_106d0fa34(void)

{
  return 0;
}



/* Entry: 106d0fa3c; end: 106d0fa43; -[SCMemoriesSubscreenViewController _sectionControllerConfiguration] */

undefined8 FUN_106d0fa3c(void)

{
  return 0;
}



/* Entry: 106d0fa44; end: 106d0fb73; -[SCMemoriesSubscreenViewController _showTitleIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0fa44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  _objc_retain(param_7);
  func_0x00010bfed060(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_5 + _DAT_11275cbe4);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d2358;
  _objc_opt_class(PTR_PTR_1126d2358);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bf4cdc0(param_7);
  func_0x00010bfb68e0(param_7);
  _objc_release(param_7);
  func_0x00010c080f80(param_1,param_2,param_3,param_4,uVar1);
  _objc_release(uVar1);
  func_0x00010bfdf5e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2162c0();
  _objc_release(param_5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106d0fb74; end: 106d0fc47; -[SCMemoriesSubscreenViewController _setUpSnapsCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0fb74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_new(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c014040(puVar2,param_2,puVar1);
  lVar5 = (long)_DAT_11275cbe4;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  _objc_release(lVar3);
  func_0x00010c14cd40(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1f7e20(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5),param_2,
                      &PTR____CFConstantStringClassReference_110e84478);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d0fc48; end: 106d0fce7; -[SCMemoriesSubscreenViewController _setUpCollectionViewSelectionHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0fc48(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c3bb0;
  _objc_alloc();
  func_0x00010bfff900();
  lVar3 = (long)_DAT_11275cbf0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c2115c0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setDelegate__112640798,param_1);
  return;
}



/* Entry: 106d0fce8; end: 106d0fd4f; -[SCMemoriesSubscreenViewController _setUpSnapsCollectionViewUpdater] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0fce8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b1318;
  func_0x00010c1555c0(PTR_PTR_1126b1318,param_2,*(undefined8 *)(param_1 + _DAT_11275cbe4));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11275cbf4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c17e720(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setDelegate__112640798,param_1);
  return;
}



/* Entry: 106d0fd50; end: 106d0fdf3; -[SCMemoriesSubscreenViewController _setUpTimelineScrubber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0fd50(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126cfa98;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000107e8580c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033de0();
  lVar5 = (long)_DAT_11275cbe8;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar5),PTR_s_setDelegate__112640798,param_1);
  return;
}



/* Entry: 106d0fdf4; end: 106d0feeb; -[SCMemoriesSubscreenViewController _setUpSectionController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0fdf4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1;
  func_0x00010be9cc20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2370;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275cbf4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11275cbc8);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11275cbf0);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11275cbd4);
  uVar8 = *(undefined8 *)(param_1 + _DAT_11275cbcc);
  lVar3 = param_1;
  func_0x00010becc3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001740(puVar2,param_2,lVar1,uVar4,uVar5,uVar6,uVar7,param_1,param_1,param_1,uVar8,
                      lVar3,*(undefined8 *)(param_1 + _DAT_11275cbd8),
                      *(undefined8 *)(param_1 + _DAT_11275cbdc));
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275cbf8);
  *(undefined **)(param_1 + _DAT_11275cbf8) = puVar2;
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d0feec; end: 106d1002f; -[SCMemoriesSubscreenViewController _cellViewModelForIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106d0feec(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                    long param_6,undefined *param_7)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  lVar2 = *(long *)(param_5 + _DAT_11275cbf8);
  func_0x00010bf64180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
    goto LAB_106d0ffec;
  }
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  param_6 = *(long *)(param_5 + _DAT_11275cbc4);
  puVar3 = puVar8;
  FUN_106d10030();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar3;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
LAB_106d0ffd8:
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = param_7;
    func_0x00010c0840e0();
    puVar9 = puVar3;
    func_0x00010bf529e0();
    if (puVar9 <= puVar8) goto LAB_106d0ffd8;
    func_0x00010c0840e0(param_7);
    puVar8 = puVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
LAB_106d0ffec:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar8 = PTR____NSArray0__struct_11034ab48;
    if (param_6 - 2U < 3) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0.0;
      _objc_retain(param_7);
      puVar8 = param_7;
      func_0x00010bf52a60();
      lVar7 = lRam0000000000000000;
      while (puVar8 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(param_7);
          }
          uVar4 = *(ulong *)((long)puVar9 * 8);
          func_0x00010c1559c0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
          uVar6 = uVar4;
          _objc_opt_isKindOfClass(uVar4,puVar5);
          uVar1 = uVar4;
          if ((uVar6 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar4);
          uVar6 = uVar1;
          func_0x00010bf529e0();
          if (uVar6 != 0) {
            func_0x00010befa160(puVar3);
          }
          _objc_release(uVar1);
          puVar9 = puVar9 + 1;
        } while (puVar8 != puVar9);
        puVar8 = param_7;
        func_0x00010bf52a60();
      }
      _objc_release(param_7);
      puVar8 = puVar3;
      func_0x00010bf51e00(puVar3);
      _objc_release(puVar3);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
      ___stack_chk_fail();
      lVar2 = (long)_DAT_11275cbe4;
      func_0x00010bf20c00(*(undefined8 *)(param_7 + lVar2));
      if (param_4 == 0.0) {
        param_2 = 0.0;
      }
      else {
        func_0x00010bf4cdc0(*(undefined8 *)(param_7 + lVar2));
        func_0x00010bf20c00(*(undefined8 *)(param_7 + lVar2));
        param_2 = param_2 / param_4;
      }
      return param_2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return param_1;
}



/* Entry: 106d10030; end: 106d101e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106d10030(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                    long param_6)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (param_6 - 2U < 3) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    _objc_retain(param_5);
    lVar4 = param_5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_5);
        }
        uVar5 = *(ulong *)(lVar9 * 8);
        func_0x00010c1559c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
        uVar7 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar6);
        uVar1 = uVar5;
        if ((uVar7 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar5);
        uVar7 = uVar1;
        func_0x00010bf529e0();
        if (uVar7 != 0) {
          func_0x00010befa160(puVar3);
        }
        _objc_release(uVar1);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
    puVar6 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return param_1;
  }
  ___stack_chk_fail();
  lVar8 = (long)_DAT_11275cbe4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar8));
  if (param_4 == 0.0) {
    param_2 = 0.0;
  }
  else {
    func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar8));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar8));
    param_2 = param_2 / param_4;
  }
  return param_2;
}



/* Entry: 106d101e4; end: 106d1023f; -[SCMemoriesSubscreenViewController _pageHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106d101e4(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                    long param_5)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275cbe4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  if (param_4 == 0.0) {
    param_2 = 0.0;
  }
  else {
    func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar1));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
    param_2 = param_2 / param_4;
  }
  return param_2;
}



/* Entry: 106d10240; end: 106d1033b; -[SCMemoriesSubscreenViewController _operaPresenterScrollToSnapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d10240(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  lVar6 = (long)_DAT_11275cbfc;
  lVar1 = *(long *)(param_1 + lVar6);
  if (lVar1 != 0) {
    func_0x00010c0840e0();
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c1554e0(uVar2);
    func_0x00010bfed020(puVar3,param_2,lVar1 + -1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    lVar1 = *(long *)(param_1 + lVar6);
    func_0x00010c0840e0(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c1554e0(uVar2);
    func_0x00010bfed020(puVar4,param_2,lVar1 + 1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010be6dd40(param_1,param_2,*(undefined8 *)(param_1 + lVar6),param_3);
    if (((uVar5 & 1) == 0) &&
       (uVar5 = param_1, func_0x00010be6dd40(param_1,param_2,puVar3,param_3), (uVar5 & 1) == 0)) {
      func_0x00010be6dd40(param_1,param_2,puVar4,param_3);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d1033c; end: 106d10523; -[SCMemoriesSubscreenViewController _operaPresenterScrollToIndexPathIfNeeded:snapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d1033c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bddc460(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = lVar1;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar6 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(lVar2);
          }
          uVar3 = *(undefined8 *)(lStack_128 + lVar7 * 8);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((int)uVar4 != 0) {
            lVar5 = (long)_DAT_11275cbfc;
            _objc_retain(param_3);
            uVar4 = *(undefined8 *)(param_1 + lVar5);
            *(long *)(param_1 + lVar5) = param_3;
            _objc_release(uVar4);
            lVar5 = param_1;
            func_0x00010bebe740();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar5 != 0) goto LAB_106d10494;
            func_0x00010c1525a0(*(undefined8 *)(param_1 + _DAT_11275cbe4),param_2,param_3,2,0);
            uVar4 = 1;
            goto LAB_106d104c4;
          }
          lVar7 = lVar7 + 1;
        } while (lVar5 != lVar7);
        lVar5 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar5 != 0);
    }
LAB_106d10494:
    uVar4 = 0;
LAB_106d104c4:
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar3 = *(undefined8 *)(param_3 + _DAT_11275cbe4);
    func_0x00010bf33b60(uVar3,param_2,*(undefined8 *)(param_3 + _DAT_11275cbfc));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return uVar4;
  }
  return uVar4;
}



/* Entry: 106d10524; end: 106d10583; -[SCMemoriesSubscreenViewController _sourceViewOfOperaPresentingIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d10524(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275cbe4);
  func_0x00010bf33b60(uVar2,param_2,*(undefined8 *)(param_1 + _DAT_11275cbfc));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d10584; end: 106d10607; -[SCMemoriesSubscreenViewController _updateOperaGroupsIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d10584(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11275cbd0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c07aae0();
  if ((iVar1 != 0) && (lVar2 = param_3, func_0x00010bf529e0(), lVar2 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010be6db00(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286380(uVar4,param_2,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d10608; end: 106d10bd3; -[SCMemoriesSubscreenViewController _operaGroups:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d10608(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 *puStack_230;
  undefined **ppuStack_208;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + _DAT_11275cbc4) - 2U < 3) {
      puVar1 = param_3;
      FUN_106d10030();
      _objc_retainAutoreleasedReturnValue();
      lStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      puVar14 = &uStack_1b0;
      param_4 = auStack_f0;
      puStack_230 = puVar1;
      func_0x00010bf52a60();
      if (puStack_230 != (undefined8 *)0x0) {
        lVar12 = *plStack_1a0;
        do {
          puVar14 = (undefined8 *)0x0;
          do {
            if (*plStack_1a0 != lVar12) {
              _objc_enumerationMutation(puVar1);
            }
            ppuVar16 = *(undefined ***)(lStack_1a8 + (long)puVar14 * 8);
            ppuVar3 = ppuVar16;
            func_0x00010c113000();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar3;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(ppuVar3);
            if (ppuVar4 != (undefined **)0x0) {
              puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
              func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar16;
              func_0x00010bf97060();
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = ppuVar3;
              func_0x00010c2711a0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar15 = ppuVar4;
              func_0x00010c08fa60();
              _objc_release(ppuVar4);
              if (ppuVar15 == (undefined **)0x0) {
                ppuVar4 = ppuVar3;
                func_0x00010bfbdda0();
                func_0x00010b5fa33c();
                ppuStack_208 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                if (ppuVar4 == (undefined **)0x2) {
                  ppuStack_208 = &PTR____CFConstantStringClassReference_110db1e38;
                  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1e38,0);
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  func_0x000108dfda1c();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar15 = ppuVar3;
                  func_0x00010b5f6c38();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c14de00();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar15);
                  _objc_release(ppuVar4);
                }
              }
              else {
                ppuStack_208 = ppuVar3;
                func_0x00010c2711a0();
                _objc_retainAutoreleasedReturnValue();
              }
              ppuVar4 = ppuVar3;
              func_0x00010bf977c0();
              lVar7 = (long)(int)ppuVar4;
              func_0x00010b5f5864(lVar7,ppuVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR_PTR_1126b2600;
              _objc_alloc();
              func_0x00010bfbdda0();
              func_0x00010bf977c0();
              func_0x00010c07b240();
              func_0x00010b5fc5e4();
              func_0x00010c0f7a20();
              ppuVar4 = ppuVar3;
              func_0x00010c0e0160();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c080ca0();
              ppuVar15 = ppuVar3;
              func_0x00010bf97200();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf3d240();
              ppuVar9 = ppuVar3;
              func_0x00010bf9e140();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c010560(puVar8);
              _objc_release(ppuVar9);
              _objc_release(ppuVar15);
              _objc_release(ppuVar4);
              _objc_release(lVar7);
              _objc_release(ppuStack_208);
              _objc_release(ppuVar3);
              ppuVar4 = ppuVar16;
              func_0x00010c245680();
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar4;
              func_0x00010bf52a60();
              lVar7 = lRam0000000000000000;
              while (ppuVar3 != (undefined **)0x0) {
                ppuVar15 = (undefined **)0x0;
                do {
                  if (lRam0000000000000000 != lVar7) {
                    _objc_enumerationMutation(ppuVar4);
                  }
                  uVar13 = *(undefined8 *)((long)ppuVar15 * 8);
                  puVar10 = PTR_PTR_1126b2608;
                  func_0x00010c243fe0(PTR_PTR_1126b2608);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar5);
                  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c074da0(ppuVar16);
                  func_0x00010c0df6e0(puVar11);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c241220(uVar13);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar6);
                  _objc_release(uVar13);
                  _objc_release(puVar11);
                  _objc_release(puVar10);
                  ppuVar15 = (undefined **)((long)ppuVar15 + 1);
                } while (ppuVar3 != ppuVar15);
                ppuVar3 = ppuVar4;
                func_0x00010bf52a60();
              }
              _objc_release(ppuVar4);
              puVar11 = PTR_PTR_1126b2610;
              _objc_alloc(PTR_PTR_1126b2610);
              func_0x00010c113000(ppuVar16);
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar16;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar6;
              func_0x00010bf51e00(puVar6);
              func_0x00010c019020(puVar11);
              _objc_release(puVar10);
              _objc_release(ppuVar3);
              _objc_release(ppuVar16);
              func_0x00010befa120(puVar2);
              _objc_release(puVar11);
              _objc_release(puVar8);
              _objc_release(puVar6);
              _objc_release(puVar5);
            }
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          } while (puVar14 != puStack_230);
          puVar14 = &uStack_1b0;
          param_4 = auStack_f0;
          puStack_230 = puVar1;
          func_0x00010bf52a60();
        } while (puStack_230 != (undefined8 *)0x0);
      }
      _objc_release(puVar1);
    }
    puVar5 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)((long)param_3 + (long)_DAT_11275cbe0);
  func_0x00010c267c60(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bf96c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar13,PTR_s_enterSelectionModeWithTabType_he_1125c34b8,puVar14,1,param_4);
  return;
}



/* Entry: 106d10bd4; end: 106d10c13; -[SCMemoriesSubscreenViewController _enterSelectMode:isFromLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d10bd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275cbe0);
  func_0x00010c267c60(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf96c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_enterSelectionModeWithTabType_he_1125c34b8,param_3,1,param_4);
  return;
}



/* Entry: 106d10c14; end: 106d10cb7; -[SCMemoriesSubscreenViewController _didChangeSelectedItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d10c14(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = param_1;
  func_0x00010c159760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (((param_3 & 1) == 0) && (lVar2 == -lVar4)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9baf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11275cbe0),PTR_s_exitSelectionMode_1125c4860);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c15ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275cbe0),PTR_s_selectionUpdated_112634500);
  return;
}



/* Entry: 106d10cb8; end: 106d10cfb; -[SCMemoriesSubscreenViewController _entryForIndexPath:] */

void FUN_106d10cb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bddc460();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d10cfc; end: 106d10d5f; -[SCMemoriesSubscreenViewController _snapForIndexPath:] */

void FUN_106d10cfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bddc460();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106d10d60; end: 106d10dd3; -[SCMemoriesSubscreenViewController memoriesCollectionViewSelectionHelper:galleryItemAtIndexPath:] */

void FUN_106d10d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bddc460(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010010fab4();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d10dd4; end: 106d10ff7; -[SCMemoriesSubscreenViewController memoriesCollectionViewSelectionHelper:didTapItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106d10dd4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_5;
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_2 + (long)_DAT_11275cbe4);
  uVar5 = param_5;
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cfc70;
  _objc_opt_class(PTR_PTR_1126cfc70);
  uVar11 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar6 = uVar1;
  if ((uVar11 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar1);
  if (uVar6 != 0) {
    uVar11 = param_2;
    uVar5 = param_5;
    func_0x00010bddc460();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar11;
    func_0x00010c06ece0();
    if ((int)uVar1 != 0) {
      lVar3 = *(long *)(param_2 + (long)_DAT_11275cbf8);
      uVar5 = param_5;
      func_0x00010bf64180();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        *(undefined1 *)(param_2 + (long)_DAT_11275cc00) = 0;
        lVar12 = (long)_DAT_11275cbfc;
        _objc_retain(param_5);
        uVar4 = *(undefined8 *)(param_2 + lVar12);
        *(ulong *)(param_2 + lVar12) = param_5;
        _objc_release(uVar4);
        uVar10 = *(undefined8 *)(param_2 + (long)_DAT_11275cbd0);
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_2;
        func_0x00010be6db00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0840e0();
        func_0x00010be6f200(param_2);
        func_0x00010c0f2220();
        uVar4 = *(undefined8 *)(param_2 + (long)_DAT_11275cbd8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c22f180();
        uVar8 = uVar5;
        func_0x00010c10d5e0(param_1,0,uVar10);
        _objc_release(uVar4);
        _objc_release(uVar5);
        _objc_release(puVar2);
        uVar5 = param_2;
      }
      _objc_release(lVar3);
    }
    _objc_release(uVar11);
  }
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_5;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar5);
  _objc_retain(uVar8);
  uVar6 = param_5;
  func_0x00010bddc460();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    uVar11 = 0;
    goto LAB_106d111a8;
  }
  uVar11 = uVar6;
  func_0x00010c06ece0();
  if ((int)uVar11 == 0) {
    uVar11 = 1;
    goto LAB_106d111a8;
  }
  uVar1 = param_5;
  func_0x00010be0aa60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010bfbdda0();
  func_0x00010b5fad2c();
  if ((uVar11 & 1) == 0) {
    uVar11 = uVar1;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (uVar11 == 8) goto LAB_106d110a4;
    func_0x00010bebcca0();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      uVar7 = uVar6;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar7;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (uVar11 != 0) {
        uVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(uVar7);
          }
          uVar4 = *(undefined8 *)(uVar13 * 8);
          func_0x00010b6f8630(uVar4,uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c272be0(uVar5);
          _objc_release(uVar4);
          uVar13 = uVar13 + 1;
        } while (uVar11 != uVar13);
        uVar11 = uVar7;
        func_0x00010bf52a60();
      }
      _objc_release(uVar7);
    }
    _objc_release(param_5);
    uVar11 = 1;
  }
  else {
LAB_106d110a4:
    uVar11 = 0;
  }
  _objc_release(uVar1);
LAB_106d111a8:
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return uVar11;
  }
  ___stack_chk_fail();
  func_0x00010bddc460();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c06ece0();
  _objc_release(uVar5);
  return uVar6;
}



/* Entry: 106d10ff8; end: 106d111ff; -[SCMemoriesSubscreenViewController memoriesCollectionViewSelectionHelper:overrideTapHandlingAtIndexPath:] */

undefined8 FUN_106d10ff8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010bddc460();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar7 = 0;
    goto LAB_106d111a8;
  }
  uVar3 = uVar2;
  func_0x00010c06ece0();
  if ((int)uVar3 == 0) {
    uVar7 = 1;
    goto LAB_106d111a8;
  }
  uVar3 = param_1;
  func_0x00010be0aa60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfbdda0();
  func_0x00010b5fad2c();
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar3;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (uVar4 == 8) goto LAB_106d110a4;
    func_0x00010bebcca0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      uVar5 = uVar2;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar4 != 0) {
        uVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar5);
          }
          uVar7 = *(undefined8 *)(uVar8 * 8);
          func_0x00010b6f8630(uVar7,uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c272be0(param_3);
          _objc_release(uVar7);
          uVar8 = uVar8 + 1;
        } while (uVar4 != uVar8);
        uVar4 = uVar5;
        func_0x00010bf52a60();
      }
      _objc_release(uVar5);
    }
    _objc_release(param_1);
    uVar7 = 1;
  }
  else {
LAB_106d110a4:
    uVar7 = 0;
  }
  _objc_release(uVar3);
LAB_106d111a8:
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar7;
  }
  ___stack_chk_fail();
  func_0x00010bddc460();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c06ece0();
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 106d11200; end: 106d1123f; -[SCMemoriesSubscreenViewController memoriesCollectionViewSelectionHelper:shouldChangeSelectedAtIndexPath:] */

undefined8
FUN_106d11200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bddc460(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c06ece0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106d11240; end: 106d11247; -[SCMemoriesSubscreenViewController memoriesCollectionViewSelectionHelper:didChangeSelected:forItem:] */

void FUN_106d11240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfcad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didChangeSelectedItem__11255cc50,param_4);
  return;
}



/* Entry: 106d11248; end: 106d1124f; -[SCMemoriesSubscreenViewController memoriesCollectionViewSelectionHelper:didChangeSelected:forSnapItem:] */

void FUN_106d11248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfcad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didChangeSelectedItem__11255cc50,param_4);
  return;
}



/* Entry: 106d11250; end: 106d11257; -[SCMemoriesSubscreenViewController memoriesCollectionViewSelectionHelper:didChangeSelected:forItems:snapItems:] */

void FUN_106d11250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfcad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didChangeSelectedItem__11255cc50,param_4);
  return;
}



/* Entry: 106d11258; end: 106d1126f; -[SCMemoriesSubscreenViewController memoriesCollectionViewSelectionHelperRequestSelectMode:isFromLongPress:] */

undefined8 FUN_106d11258(void)

{
  func_0x00010be0a880();
  return 1;
}



/* Entry: 106d11270; end: 106d11277; -[SCMemoriesSubscreenViewController memoriesCollectionViewIsFullyVisible:] */

undefined8 FUN_106d11270(void)

{
  return 1;
}



/* Entry: 106d11278; end: 106d1127b; -[SCMemoriesSubscreenViewController memoriesCollectionViewSelectionHelper:handleLongPress:itemAtIndexPath:] */

void FUN_106d11278(void)

{
  return;
}



/* Entry: 106d1127c; end: 106d112f3; -[SCMemoriesSubscreenViewController operaPresenterWillOpenViewWithOperaItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d1127c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if ((*(byte *)(param_1 + _DAT_11275cc00) & 1) == 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_106d112f4;
    puStack_20 = &UNK_110953598;
    lStack_18 = param_1;
    func_0x00010c0bfe40(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110975cc8,
                        &PTR___NSConcreteGlobalBlock_110975ce8);
  }
  return;
}



/* Entry: 106d112f4; end: 106d11333;  */

void FUN_106d112f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6dd60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d11334; end: 106d1133b;  */

void FUN_106d11334(void)

{
  return;
}



/* Entry: 106d1133c; end: 106d1139b; -[SCMemoriesSubscreenViewController operaPresenterDidOpenView] */

void FUN_106d1133c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3b30;
  _objc_alloc(PTR_PTR_1126c3b30);
  func_0x00010bebe740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7280(0,puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d1139c; end: 106d113bf; -[SCMemoriesSubscreenViewController operaPresenterDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d1139c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_11275cc00) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275cbfc);
  *(undefined8 *)(param_1 + _DAT_11275cbfc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d113c0; end: 106d113c3; -[SCMemoriesSubscreenViewController operaPresenterDidPresent] */

void FUN_106d113c0(void)

{
  return;
}



/* Entry: 106d113c4; end: 106d113df; -[SCMemoriesSubscreenViewController operaPresenterOverrideTransitionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d113c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  if (*(char *)(param_1 + _DAT_11275cc00) != '\0') {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 106d113e0; end: 106d114af; -[SCMemoriesSubscreenViewController subscreenDataProviderDidUpdateSectionDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d113e0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_5;
  _objc_retain(param_5);
  puVar1 = param_5;
  func_0x00010010fab4(param_5,PTR_DAT_1126a5248);
  puVar2 = param_5;
  if ((int)puVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bedc6a0(param_3);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  func_0x00010bf4cdc0(puVar3);
  if (0.0 <= param_2) {
    func_0x00010bebb6e0(param_5);
  }
  else if (*(long *)(param_5 + _DAT_11275cbc4) != 4) {
    puVar2 = param_5;
    func_0x00010bfdf5e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2162c0();
    _objc_release(puVar2);
  }
  uVar5 = *(undefined8 *)(param_5 + _DAT_11275cbe8);
  func_0x00010becd620(param_5);
  func_0x00010c28ab80(param_1,0,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106d114b0; end: 106d1155f; -[SCMemoriesSubscreenViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d114b0(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  func_0x00010bf4cdc0(param_5);
  if (0.0 <= param_2) {
    func_0x00010bebb6e0(param_3,param_4,param_5);
  }
  else if (*(long *)(param_3 + _DAT_11275cbc4) != 4) {
    lVar1 = param_3;
    func_0x00010bfdf5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2162c0();
    _objc_release(lVar1);
  }
  uVar2 = *(undefined8 *)(param_3 + _DAT_11275cbe8);
  func_0x00010becd620(param_3);
  func_0x00010c28ab80(param_1,0,uVar2,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106d11560; end: 106d11607; -[SCMemoriesSubscreenViewController scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d11560(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetHeight();
  _objc_release(puVar1);
  func_0x00010bf4d5e0(param_5);
  if (param_1 + param_1 < param_2) {
    lVar3 = (long)_DAT_11275cbe8;
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010becd620(param_3);
    func_0x00010c1f7d80(uVar2,param_4,param_5);
    func_0x00010c23a640(*(undefined8 *)(param_3 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106d11608; end: 106d1161f; -[SCMemoriesSubscreenViewController scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d11608(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf75b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275cbe8),PTR_s_didEndScrolling_1125bb078);
  return;
}


