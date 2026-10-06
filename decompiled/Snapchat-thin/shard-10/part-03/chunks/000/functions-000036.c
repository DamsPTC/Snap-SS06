/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d93bd4; end: 107d93be3; -[SCMemoriesActivityItemProvider targetTrajectoryFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d93bd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ee84);
}



/* Entry: 107d93be4; end: 107d93c23; -[SCMemoriesActivityItemProvider setTargetTrajectoryFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ee84;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d93c24; end: 107d93c33; -[SCMemoriesActivityItemProvider circumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d93c24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ee88);
}



/* Entry: 107d93c34; end: 107d93c73; -[SCMemoriesActivityItemProvider setCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93c34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ee88;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d93c74; end: 107d93d6f; -[SCMemoriesActivityItemProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d93c74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ee88,0);
  _objc_storeStrong(param_1 + _DAT_11276ee84,0);
  _objc_storeStrong(param_1 + _DAT_11276ee80,0);
  _objc_storeStrong(param_1 + _DAT_11276ee7c,0);
  _objc_storeStrong(param_1 + _DAT_11276ee78,0);
  _objc_storeStrong(param_1 + _DAT_11276ee6c,0);
  _objc_destroyWeak(param_1 + _DAT_11276ee70);
  _objc_storeStrong(param_1 + _DAT_11276ee74,0);
  _objc_storeStrong(param_1 + _DAT_11276ee5c,0);
  _objc_storeStrong(param_1 + _DAT_11276ee58,0);
  _objc_storeStrong(param_1 + _DAT_11276ee60,0);
  _objc_storeStrong(param_1 + _DAT_11276ee68,0);
  _objc_storeStrong(param_1 + _DAT_11276ee4c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ee64,0);
  return;
}



/* Entry: 107d93d70; end: 107d93db7; -[SCMemoriesActivityProgress initWithProgressWeight:] */

void FUN_107d93d70(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb028;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 107d93db8; end: 107d93dbf; -[SCMemoriesActivityProgress progressWeight] */

undefined4 FUN_107d93db8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107d93dc0; end: 107d93f8f; -[SCGalleryActivityController initWithUserTrackedLogger:photoPermissionCoordinator:spectaclesAppLogger:memoriesActivityItemProvidingServices:dataObjectContext:galleryLogger:grapheneRegistry:circumstanceEngine:fetchLimit:] */

undefined1 *
FUN_107d93dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fb030;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
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



/* Entry: 107d93f90; end: 107d940eb; -[SCGalleryActivityController presentWithItemProviders:fromViewController:completionWithActivityType:] */

void FUN_107d93f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107d940ec;
  puStack_68 = &UNK_110849530;
  _objc_retain(param_5);
  uStack_60 = param_5;
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c10f2c0(param_1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d940ec; end: 107d9410b;  */

void FUN_107d940ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d94104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,1,0);
    return;
  }
  return;
}



/* Entry: 107d9410c; end: 107d941d3;  */

void FUN_107d9410c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0,param_2);
  }
  else {
    func_0x00010bf9d300(lVar1);
  }
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107d941d4; end: 107d94a27; -[SCGalleryActivityController presentWithoutExportingWithItemProviders:fromViewController:cancelHandler:completionWithItems:] */

void FUN_107d941d4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  bool bVar20;
  uint uVar21;
  long lVar22;
  ulong uStack_250;
  undefined1 auStack_1e0 [8];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (((*(long *)(param_5 + 8) != 0) || (*(long *)(param_5 + 0x10) != 0)) ||
     (*(long *)(param_5 + 0x18) != 0)) goto LAB_107d9495c;
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  lVar16 = param_5;
  func_0x00010be23700(param_5);
  puVar4 = puVar3;
  FUN_107e0032c(puVar3,lVar16);
  _objc_release(puVar3);
  if ((int)puVar4 != 0) {
    func_0x00010c0a5dc0(PTR_PTR_1126b2460);
    goto LAB_107d9495c;
  }
  _objc_storeWeak(param_5 + 0x28,param_8);
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  _objc_retain(param_7);
  uVar5 = param_7;
  func_0x00010bf52a60();
  uVar21 = 0;
  lVar16 = 0;
  if (uVar5 != 0) {
    lVar18 = *plStack_180;
    do {
      uVar19 = 0;
      do {
        if (*plStack_180 != lVar18) {
          _objc_enumerationMutation(param_7);
        }
        lVar22 = *(long *)(lStack_188 + uVar19 * 8);
        func_0x00010c18b5e0(lVar22);
        ppuStack_120 = &PTR____CFConstantStringClassReference_110ebd778;
        ppuStack_118 = &PTR____CFConstantStringClassReference_110ec95b8;
        ppuStack_110 = &PTR____CFConstantStringClassReference_110ebd738;
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c203140(lVar22);
        _objc_release(puVar3);
        lVar6 = lVar22;
        func_0x00010c084220();
        puVar3 = PTR_PTR_1126d7cc0;
        _objc_opt_class(PTR_PTR_1126d7cc0);
        _objc_opt_isKindOfClass(lVar22,puVar3);
        lVar16 = lVar6 + lVar16;
        uVar21 = uVar21 | (uint)lVar22;
        uVar19 = uVar19 + 1;
      } while (uVar5 != uVar19);
      uVar5 = param_7;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(param_7);
  uVar5 = param_7;
  func_0x00010bf529e0();
  if (uVar5 == 1) {
    uVar5 = param_7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d7c88;
    _objc_opt_class(PTR_PTR_1126d7c88);
    uVar19 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    _objc_release(uVar5);
    if ((uVar19 & 1) == 0) goto LAB_107d94490;
    uStack_250 = param_7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uStack_250;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar5;
    func_0x00010bf529e0();
    if (uVar19 < 2) {
      _objc_release(uVar5);
LAB_107d949d0:
      bVar20 = false;
    }
    else {
      uVar19 = uStack_250;
      func_0x00010c0781e0();
      _objc_release(uVar5);
      if ((uVar19 & 1) != 0) goto LAB_107d949d0;
      bVar20 = true;
    }
    if (uStack_250 == 0) goto LAB_107d94494;
    uVar5 = uStack_250;
    func_0x00010c0781e0();
    uVar2 = (uint)uVar5;
  }
  else {
LAB_107d94490:
    bVar20 = false;
LAB_107d94494:
    uStack_250 = 0;
    uVar2 = 0;
  }
  bVar1 = bVar20;
  if (lVar16 < 2) {
    bVar1 = true;
  }
  *(long *)(param_5 + 0x40) = lVar16;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (!bVar1 && ((uVar21 | uVar2) & 1) == 0) {
    puVar4 = PTR_PTR_1126d7ce0;
    _objc_alloc(PTR_PTR_1126d7ce0);
    func_0x00010bff0f60();
    func_0x00010befa120(puVar3);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126d7ce8;
  _objc_alloc();
  func_0x00010c05f920();
  func_0x00010befa120(puVar3);
  _objc_release();
  if (bVar20) {
    puVar4 = PTR_PTR_1126d7cf0;
    _objc_alloc();
    func_0x00010bff0f40();
    func_0x00010befa120(puVar3);
    _objc_release();
  }
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_5 + 0x48);
  _objc_retain();
  uVar17 = *(undefined8 *)(param_5 + 0x50);
  puVar8 = PTR_PTR_1126aeb08;
  _objc_alloc();
  func_0x00010bff0f80();
  puVar15 = (undefined8 *)(param_5 + 8);
  uVar14 = *puVar15;
  *puVar15 = puVar8;
  _objc_release(uVar14);
  uVar14 = param_8;
  func_0x00010c279540(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292b20();
  func_0x00010c1d79e0(*puVar15);
  _objc_release(uVar14);
  puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_107d94a28;
  puStack_1a8 = &UNK_110a0c2c0;
  _objc_retain(param_10);
  uStack_198 = param_10;
  _objc_retain(puVar4);
  puStack_1a0 = puVar4;
  func_0x00010c17fc60(*puVar15);
  uStack_148 = *(undefined8 *)PTR__UIActivityTypeSaveToCameraRoll_1103459f0;
  uStack_140 = *(undefined8 *)PTR__UIActivityTypePrint_1103459e8;
  uStack_138 = *(undefined8 *)PTR__UIActivityTypeCopyToPasteboard_110345990;
  uStack_130 = *(undefined8 *)PTR__UIActivityTypeAssignToContact_110345988;
  uStack_128 = *(undefined8 *)PTR__UIActivityTypeAddToReadingList_110345978;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197fe0(*puVar15);
  puVar13 = PTR_PTR_1126b24c0;
  _objc_alloc();
  func_0x00010bff0fa0();
  puVar15 = (undefined8 *)(param_5 + 0x10);
  uVar14 = *puVar15;
  *puVar15 = puVar13;
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_5 + 0x60);
  _objc_retain(uVar14);
  _objc_initWeak(auStack_1c8,param_5);
  _objc_copyWeak(auStack_1e0,auStack_1c8);
  _objc_retain(puVar4);
  _objc_retain(uVar7);
  uStack_1d8 = uVar17;
  _objc_retain(param_7);
  uStack_1d0 = param_6;
  _objc_retain(param_9);
  func_0x00010c178040(*puVar15);
  puVar13 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar13;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar9 & 1) == 0) {
LAB_107d948c0:
    _objc_release(puVar13);
  }
  else {
    puVar9 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c292ac0();
    _objc_release(puVar9);
    _objc_release(puVar13);
    if (puVar10 != (undefined *)0x0) {
      func_0x00010c1c8b80(*(undefined8 *)(param_5 + 8));
      uVar17 = param_8;
      func_0x00010c29bf00(param_8);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_5 + 8);
      func_0x00010c103ba0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2072a0();
      _objc_release(uVar11);
      _objc_release(uVar17);
      uVar17 = param_8;
      func_0x00010c29bf00(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      uVar11 = param_8;
      func_0x00010c29bf00(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      uVar12 = *(undefined8 *)(param_5 + 8);
      func_0x00010c103ba0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c207040(param_3 * 0.5,param_4 * 0.5,0,0);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar17);
      puVar13 = *(undefined **)(param_5 + 8);
      func_0x00010c103ba0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dac60();
      goto LAB_107d948c0;
    }
  }
  func_0x00010c10eda0(param_8);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1c8);
  _objc_release(uVar14);
  _objc_release(puVar8);
  _objc_release(puStack_1a0);
  _objc_release(uStack_198);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uStack_250);
LAB_107d9495c:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1c8);
  __Unwind_Resume();
  if (*(long *)(param_7 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d94a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_7 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107d94a28; end: 107d94a4b;  */

void FUN_107d94a28(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d94a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107d94a4c; end: 107d94b67;  */

void FUN_107d94a4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = param_1 + 0x48;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126b2460;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  _objc_opt_class();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110ebd6d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73d80(puVar3,param_2,uVar1,uVar2,uVar7,uVar8,0,0,puVar6,1,0,
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar4 + 0x58),
                      *(undefined8 *)(lVar4 + 0x88));
  _objc_release(puVar6);
  _objc_release(uVar5);
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  }
  func_0x00010bddf4c0(lVar4);
  func_0x00010bddf420(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107d94b68; end: 107d9521f; -[SCGalleryActivityController exportWithActivityType:itemProviders:completed:activityError:exportSessionId:memoriesSessionId:currentMemoriesTab:completionWithActivityType:] */

void FUN_107d94b68(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
                  undefined4 param_10,long param_11)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c18f780();
  _objc_release(lVar3);
  func_0x00010c0bb520(PTR_PTR_1126b2460);
  func_0x00010bddf440(param_1);
  func_0x00010bddf420(param_1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_5 == 0) {
    if (param_6 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010bf3ec40(param_6);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    puVar1 = PTR_PTR_1126b2460;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73d80(puVar1);
    _objc_release(puVar4);
    _objc_release(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c18f780();
    _objc_release(param_1);
    if (param_11 != 0) {
      (**(code **)(param_11 + 0x10))(param_11,0,1,param_3);
    }
    _objc_release(puVar5);
    goto LAB_107d94de8;
  }
  iVar2 = 0x10ebd778;
  func_0x00010c0720c0();
  if (iVar2 != 0) {
    func_0x00010be9a200(param_1);
    goto LAB_107d94de8;
  }
  iVar2 = 0x10ec95b8;
  func_0x00010c0720c0();
  if (iVar2 != 0) {
    func_0x00010bdd2e00(param_1);
    goto LAB_107d94de8;
  }
  iVar2 = 0x10ebd738;
  func_0x00010c0720c0();
  if (iVar2 != 0) {
    func_0x00010be616a0(param_1);
    goto LAB_107d94de8;
  }
  lVar3 = param_3;
  func_0x00010c08fa60();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = PTR__UIActivityTypeSaveToCameraRoll_1103459f0;
  if (param_6 != 0 || lVar3 == 0) {
    if (param_6 == 0) goto LAB_107d94f48;
    func_0x00010bf3ec40(param_6);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    func_0x000107d95048(param_4,*(undefined8 *)(param_1 + 0x58),param_3,
                        *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x70),
                        *(undefined8 *)(param_1 + 0x80));
    iVar2 = (int)*(undefined8 *)puVar5;
    func_0x00010c0720c0();
    if (iVar2 != 0) {
      func_0x00010beb8c40(param_1);
    }
LAB_107d94f48:
    puStack_88 = (undefined *)0x0;
  }
  puVar4 = PTR_PTR_1126b2460;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  func_0x00010bf73d80(puVar4);
  _objc_release(puVar5);
  _objc_release(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c18f780();
  _objc_release(param_1);
  if (param_11 != 0) {
    (**(code **)(param_11 + 0x10))(param_11,param_6 == 0 && lVar3 != 0,0,param_3);
  }
  _objc_release(puStack_88);
LAB_107d94de8:
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d95220; end: 107d954a7; -[SCGalleryActivityController presentFromViewController:forGalleryItems:snaps:allSnapsCount:userContext:completion:] */

void FUN_107d95220(undefined *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_storeWeak(param_1 + 0x28,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c7580();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f400();
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  _objc_release(uVar1);
  lVar3 = param_4;
  func_0x00010bf529e0();
  if ((lVar3 == 1) && (lVar3 = param_5, func_0x00010bf529e0(), lVar3 == 0)) {
    puVar4 = param_1;
    func_0x00010be207a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010bfb1920(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bef1780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar4);
    if (puVar5 == (undefined *)0x0) goto LAB_107d953d0;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = param_1;
    func_0x00010be207a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bef18c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bfb1920(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x38,puVar5);
  _objc_release(puVar5);
  *(undefined8 *)(param_1 + 0x40) = param_6;
  _objc_retain(param_8);
  func_0x00010c10f0e0(param_1);
  _objc_release(param_8);
  _objc_release(puVar4);
LAB_107d953d0:
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d954bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107d954a8; end: 107d954c3;  */

void FUN_107d954a8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d954bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107d954c4; end: 107d95557; -[SCGalleryActivityController dealloc] */

void FUN_107d954c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf84740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == param_1) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c18f780();
    _objc_release(lVar1);
  }
  puStack_38 = PTR_PTR_1126fb030;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107d95558; end: 107d95747; -[SCGalleryActivityController activityItemProviderRequestsItem:] */

void FUN_107d95558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar5 = &puStack_c0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    func_0x00010bef1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4b900();
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      func_0x00010c239680(*(undefined8 *)(param_1 + 0x10));
    }
  }
  _objc_initWeak(auStack_58,param_1);
  _objc_initWeak(auStack_60,param_3);
  puVar4 = PTR_PTR_1126d7ca0;
  func_0x00010c263a20();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)puVar4 == 0) {
    func_0x00010c250ac0(*(undefined8 *)(param_1 + 0x10));
    ppuVar6 = (undefined **)0x0;
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107d95748;
    puStack_78 = &UNK_110a0c320;
    _objc_copyWeak(auStack_70,auStack_60);
    _objc_copyWeak(auStack_68,auStack_58);
    ppuVar6 = &puStack_90;
    _objc_retainBlock(ppuVar6);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_70);
  }
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107d95804;
  puStack_a8 = &UNK_110a0c350;
  _objc_copyWeak(auStack_a0,auStack_60);
  _objc_copyWeak(auStack_98,auStack_58);
  _objc_retainBlock(&puStack_c0);
  func_0x00010bfbf640(PTR_PTR_1126d7ca0);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_a0);
  _objc_release(ppuVar6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 107d95748; end: 107d95803;  */

void FUN_107d95748(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_2 = param_2 + 0x28;
    _objc_loadWeakRetained();
    if (param_2 != 0) {
      lVar4 = *(long *)(param_2 + 0x10);
      _objc_retain(lVar4);
      if (lVar4 != 0) {
        lVar2 = lVar4;
        func_0x00010bef1920();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf4b900();
        _objc_release(lVar2);
        if ((int)lVar3 != 0) {
          func_0x00010c1e46c0(param_1,lVar4,param_3,1,lVar1);
        }
      }
      _objc_release(lVar4);
    }
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d95804; end: 107d95963;  */

void FUN_107d95804(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      _objc_retain(lVar4);
      if (lVar4 != 0) {
        lVar2 = lVar4;
        func_0x00010bef1920();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf4b900();
        _objc_release(lVar2);
        if ((int)lVar3 != 0) {
          func_0x00010c0bb340(lVar4);
          lVar2 = lVar4;
          func_0x00010bef1920();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar2);
          if (lVar3 == lVar1) {
            func_0x00010bfe26c0(lVar4);
          }
        }
      }
      _objc_release(lVar4);
    }
    if ((param_2 == 0) || (param_3 != 0)) {
      func_0x00010bddf4c0(param_1);
      func_0x00010bddf420(param_1);
      if (param_1 != 0) {
        lVar4 = param_1 + 0x28;
        _objc_loadWeakRetained(lVar4);
        func_0x000107dffcbc();
        _objc_release(lVar4);
      }
    }
    else {
      func_0x00010bf77180(lVar1);
    }
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d95964; end: 107d959bb; -[SCGalleryActivityController activityItemProviderIsFirstItemProvider:] */

bool FUN_107d95964(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  return param_3 == param_1;
}



/* Entry: 107d959bc; end: 107d95dc3; -[SCGalleryActivityController activityItemProviderRequestsThumbnail:] */

void FUN_107d959bc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_107d95d04;
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126d7c90;
  _objc_opt_class(PTR_PTR_1126d7c90);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR_PTR_1126d7c88;
    _objc_opt_class(PTR_PTR_1126d7c88);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    _objc_release(uVar1);
    uVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar1;
      func_0x00010bf27760(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00010c245680(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108ec16c0(*(undefined8 *)(param_1 + 0x90));
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x107d95dd0;
      puStack_88 = &UNK_11097ce30;
      _objc_retain(param_3);
      lStack_80 = param_3;
      func_0x00010c134d00(*(undefined8 *)PTR__CGSizeZero_110347620,
                          *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar3);
      lVar5 = lStack_80;
      goto LAB_107d95cf8;
    }
    puVar2 = PTR_PTR_1126d7cc0;
    _objc_opt_class(PTR_PTR_1126d7cc0);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    _objc_release(uVar1);
    uVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if ((uVar3 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0fb3c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x107d95ddc;
      puStack_b0 = &UNK_11097bad8;
      _objc_retain(param_3);
      lStack_a8 = param_3;
      FUN_107f6e46c(puVar2,uVar3,1,1,0,&puStack_c8);
      _objc_release(uVar3);
      _objc_release(puVar2);
      lVar5 = lStack_a8;
      goto LAB_107d95cf8;
    }
    puVar2 = PTR_PTR_1126d7c98;
    _objc_opt_class(PTR_PTR_1126d7c98);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) goto LAB_107d95d04;
    uVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    uVar3 = uVar1;
    func_0x00010c0c6c20();
    uVar6 = uVar1;
    func_0x00010bf46560(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    if (uVar3 == 0) {
      func_0x00010c0fd9a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c29a1e0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar6);
    (**(code **)(param_3 + 0x10))(param_3,uVar7);
    _objc_release(uVar7);
  }
  else {
    uVar3 = uVar1;
    func_0x00010bf27760(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c23f220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108ec16c0(*(undefined8 *)(param_1 + 0x90));
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107d95dc4;
    puStack_60 = &UNK_11097ce30;
    _objc_retain(param_3);
    lStack_58 = param_3;
    func_0x00010c134d00(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar3);
    lVar5 = lStack_58;
LAB_107d95cf8:
    _objc_release(lVar5);
  }
  _objc_release(uVar1);
LAB_107d95d04:
  _objc_release(param_3);
  return;
}



/* Entry: 107d95dc4; end: 107d95de7;  */

void FUN_107d95dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107d95dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107d95de8; end: 107d95def; -[SCGalleryActivityController activityItemProviderRequestsItemCount] */

undefined8 FUN_107d95de8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d95df0; end: 107d95df7; -[SCGalleryActivityController shouldPopToRootViewController] */

undefined8 FUN_107d95df0(void)

{
  return 0;
}



/* Entry: 107d95df8; end: 107d95dff; -[SCGalleryActivityController shouldPopToRootViewControllerLater] */

undefined8 FUN_107d95df8(void)

{
  return 0;
}



/* Entry: 107d95e00; end: 107d95ea3; -[SCGalleryActivityController _showDropdownForSavedToCameraRoll] */

void FUN_107d95e00(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e06ff8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e06ff8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238780(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 107d95ea4; end: 107d95ee3; -[SCGalleryActivityController _cleanupActivityViewController] */

void FUN_107d95ea4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010c17fc60(*(long *)(param_1 + 8),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107d95ee4; end: 107d95f63; -[SCGalleryActivityController _cleanupAndDismissActivityViewController] */

void FUN_107d95ee4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    _objc_retain(lVar3);
    func_0x00010c17fc60(lVar3,param_2,0);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar1);
    lVar2 = lVar3;
    func_0x00010c10fd00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010bf84b00(lVar2,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 107d95f64; end: 107d95fc7; -[SCGalleryActivityController _cleanupActivityProgressController] */

void FUN_107d95f64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    _objc_retain(lVar2);
    func_0x00010c178040(lVar2,param_2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
    func_0x00010bfe26c0(lVar2);
    func_0x00010c069d00(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 107d95fc8; end: 107d9605f; -[SCGalleryActivityController saveToCameraRollWithItemProviders:completion:] */

void FUN_107d95fc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb520(PTR_PTR_1126b2460,param_2,param_3,uVar1,*(undefined8 *)(param_1 + 0x88));
  func_0x00010be9a200(param_1,param_2,param_3,uVar1,&PTR____CFConstantStringClassReference_110ebd778
                      ,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d96060; end: 107d961eb; -[SCGalleryActivityController _saveToCameraRollWithItemProviders:exportSessionId:activityType:completion:] */

void FUN_107d96060(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = PTR_PTR_1126d7cf8;
    _objc_alloc();
    func_0x00010c0088c0();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c14b6e0(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d961ec; end: 107d9641f;  */

void FUN_107d961ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *unaff_x27;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),param_2,param_5,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    if ((int)param_2 != 0) {
      func_0x00010beb8c40(lVar3);
      func_0x000107d95048(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar3 + 0x58),0,
                          *(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x70),
                          *(undefined8 *)(lVar3 + 0x80));
    }
    iVar2 = 0x10ec95b8;
    func_0x00010c0720c0();
    lVar5 = 0x18;
    if (iVar2 == 0) {
      lVar5 = 0x10;
    }
    uVar6 = *(undefined8 *)((long)&PTR_PTR_110a0c108 + lVar5);
    _objc_retain(uVar6);
    puVar1 = PTR_PTR_1126b2460;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (param_3 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      func_0x00010bf3ec40(param_3);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = puVar4;
    }
    func_0x00010bf73d80(puVar1);
    if (param_3 != 0) {
      _objc_release(puVar7);
      _objc_release(unaff_x27);
    }
    lVar5 = lVar3 + 0x28;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c18f780();
    _objc_release(lVar5);
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x10))
                (lVar5,param_2,param_5 & 0xffffffff,*(undefined8 *)(param_1 + 0x20));
    }
    func_0x00010bddfa20(lVar3);
    _objc_release(uVar6);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d96420; end: 107d96437; -[SCGalleryActivityController _cleanupSaveToCameraRollActivityController] */

void FUN_107d96420(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 107d96438; end: 107d965e7; -[SCGalleryActivityController _batchExportToCameraRollWithItemProviders:exportSessionId:activityType:completion:] */

void FUN_107d96438(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d7c88;
  _objc_opt_class(PTR_PTR_1126d7c88);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c18f780();
    _objc_release(param_1);
    (**(code **)(param_6 + 0x10))(param_6,0,0,param_5);
    lVar5 = param_5;
  }
  else {
    lVar4 = param_1;
    func_0x00010be207a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar3 = param_3;
    func_0x00010c245680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2917c0(param_3);
    lVar5 = lVar4;
    func_0x00010bef18c0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(lVar4);
    func_0x00010be9a200(param_1);
    _objc_release(param_6);
    param_6 = param_5;
  }
  _objc_release(param_6);
  _objc_release(lVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107d965e8; end: 107d967b3; -[SCGalleryActivityController _multiExportToCameraRollWithItemProviders:exportSessionId:activityType:completion:] */

void FUN_107d965e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = PTR_PTR_1126d7d00;
    _objc_alloc();
    func_0x00010c0088c0();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar4);
  }
  lVar2 = param_1;
  func_0x00010be207a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf418a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c14b6c0(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d967b4; end: 107d969bf;  */

void FUN_107d967b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),param_2,param_5,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    if ((int)param_2 != 0) {
      func_0x00010beb8c40(lVar2);
      func_0x000107d95048(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar2 + 0x58),0,
                          *(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x70),
                          *(undefined8 *)(lVar2 + 0x80));
    }
    puVar1 = PTR_PTR_1126b2460;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (param_3 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010bf3ec40(param_3);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      param_5 = param_5 & 0xffffffff;
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = puVar3;
    }
    func_0x00010bf73d80(puVar1);
    if (param_3 != 0) {
      _objc_release(puVar5);
      _objc_release(uStack_78);
    }
    lVar4 = lVar2 + 0x28;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c18f780();
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,param_2,param_5,*(undefined8 *)(param_1 + 0x20));
    }
    func_0x00010bddf840(lVar2);
    func_0x00010bddfa20(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d969c0; end: 107d969d7; -[SCGalleryActivityController _cleanupMultiExportActivityController] */

void FUN_107d969c0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 107d969d8; end: 107d96adb; -[SCGalleryActivityController _getTotalMediaSizeWithItemProviders:] */

long FUN_107d969d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
  lVar4 = 0;
  if (lVar2 != 0) {
    uVar3 = 0;
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        lVar1 = *(long *)(lStack_108 + lVar5 * 8);
        func_0x00010bf997c0();
        uVar3 = lVar1 + uVar3;
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
    lVar4 = (long)((double)uVar3 / 1048576.0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar4;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(param_3 + 0x78);
  func_0x00010c0c7ce0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return lVar4;
}



/* Entry: 107d96adc; end: 107d96b23; -[SCGalleryActivityController _getMemoriesActivityItemProviderBuilder] */

void FUN_107d96adc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c0c7ce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107d96b24; end: 107d96bff; -[SCGalleryActivityController .cxx_destruct] */

void FUN_107d96b24(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d96c00; end: 107d96d5f; -[SCGalleryActivityProgressController initWithActivityProgressables:] */

undefined8 * FUN_107d96c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_e0 = PTR_PTR_1126fb038;
  puVar2 = &uStack_e8;
  uStack_e8 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar6 = puVar2[5];
    puVar2[5] = uVar3;
    _objc_release(uVar6);
    *(undefined4 *)(puVar2 + 1) = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar7 = puVar2[5];
    _objc_retain(lVar7);
    lVar4 = lVar7;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar7);
          }
          func_0x00010c117b00(*(undefined8 *)(lStack_128 + lVar9 * 8));
          fVar1 = (float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10))) +
                  *(float *)(puVar2 + 1);
          uVar10 = SUB41(fVar1,0);
          uVar11 = (undefined1)((uint)fVar1 >> 8);
          uVar12 = (undefined1)((uint)fVar1 >> 0x10);
          uVar13 = (undefined1)((uint)fVar1 >> 0x18);
          *(float *)(puVar2 + 1) = fVar1;
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        lVar4 = lVar7;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar7);
  }
  uVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_160;
  pcStack_138 = FUN_107d96d60;
  puStack_150 = puVar2;
  uStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c069d00();
  puStack_158 = PTR_PTR_1126fb038;
  uStack_160 = uVar3;
  _objc_msgSendSuper2(&uStack_160,PTR_s_dealloc_112525b20);
  return puVar5;
}



/* Entry: 107d96d60; end: 107d96da3; -[SCGalleryActivityProgressController dealloc] */

void FUN_107d96d60(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00();
  puStack_28 = PTR_PTR_1126fb038;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107d96da4; end: 107d96ddf; -[SCGalleryActivityProgressController progressOverlayViewDidCancel:] */

void FUN_107d96da4(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    func_0x00010bfe26c0();
                    /* WARNING: Could not recover jumptable at 0x000107d96dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107d96de0; end: 107d96e8f; -[SCGalleryActivityProgressController invalidate] */

void FUN_107d96de0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107d96e90;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 107d96e90; end: 107d96e97;  */

void FUN_107d96e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 107d96e98; end: 107d97173; -[SCGalleryActivityProgressController showProgressOverlay] */

void FUN_107d96e98(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar3 != (undefined *)0x0) {
      param_1[0x20] = 0;
      puVar1 = PTR_PTR_1126c3290;
      _objc_alloc();
      func_0x00010bf20c00(puVar3);
      func_0x00010c013de0();
      uVar15 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar1;
      _objc_release(uVar15);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
      func_0x00010befbb60(puVar3,param_2,*(undefined8 *)(param_1 + 0x18));
      func_0x00010c219b60(*(undefined8 *)(param_1 + 0x18),param_2,0);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar4;
      func_0x00010bf493a0(uVar4,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      uStack_88 = uVar15;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010bf1ff80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf493a0(uVar5,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      uStack_80 = uVar7;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010c08de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bf493a0(uVar8,param_2,puVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uStack_78 = uVar10;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar3;
      func_0x00010c2793a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar11;
      func_0x00010bf493a0(uVar11,param_2,puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar13;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1,param_2,puVar14);
      _objc_release(puVar14);
      _objc_release(uVar13);
      _objc_release(puVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(uVar15);
      _objc_release(puVar2);
      _objc_release(uVar4);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar3 + 0x18) != 0) {
    func_0x00010c12c960();
    func_0x00010c18b5e0(*(undefined8 *)(puVar3 + 0x18),param_2,0);
    uVar15 = *(undefined8 *)(puVar3 + 0x18);
    *(undefined8 *)(puVar3 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar15);
    return;
  }
  return;
}



/* Entry: 107d97174; end: 107d971bb; -[SCGalleryActivityProgressController hideProgressOverlay] */

void FUN_107d97174(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010c12c960();
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107d971bc; end: 107d971c3; -[SCGalleryActivityProgressController setProgress:animated:] */

void FUN_107d971bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setProgress_animated__112656bd0);
  return;
}



/* Entry: 107d971c4; end: 107d971c7; -[SCGalleryActivityProgressController startSimulatedProgressForActivityProgressable:] */

void FUN_107d971c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec1310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startProgressSimulationTimerFor_11258de68);
  return;
}



/* Entry: 107d971c8; end: 107d9731f; -[SCGalleryActivityProgressController setProgress:animated:forActivityProgressable:] */

void FUN_107d971c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_120;
    do {
      lVar4 = 0;
      do {
        if (*plStack_120 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        if (param_4 == *(long *)(lStack_128 + lVar4 * 8)) goto LAB_107d972b4;
        func_0x00010c117b00();
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
LAB_107d972b4:
  _objc_release(lVar2);
  func_0x00010c117b00(param_4);
  func_0x00010c1e46a0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    func_0x00010bec3720(param_4);
    func_0x00010c1e46c0(param_4,param_2,1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 107d97320; end: 107d97367; -[SCGalleryActivityProgressController markCompleteForActivityProgressable:] */

void FUN_107d97320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bec3720(param_1);
  func_0x00010c1e46c0(0x3f800000,param_1,param_2,1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d97368; end: 107d97447; -[SCGalleryActivityProgressController _startProgressSimulationTimerForActivityProgressable:] */

void FUN_107d97368(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == param_3) goto LAB_107d97434;
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x10));
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(0x3fb999999999999a,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__progressSimulatorTimerDidFire__112535208,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
  _objc_release(puVar3);
LAB_107d97434:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d97448; end: 107d97483; -[SCGalleryActivityProgressController _stopProgressSimulatorTimer] */

void FUN_107d97448(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107d97484; end: 107d97667; -[SCGalleryActivityProgressController _progressSimulatorTimerDidFire:] */

long FUN_107d97484(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x18) != 0) && (lVar1 = *(long *)(param_1 + 0x10), lVar1 == param_3)) {
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) &&
       (lVar2 = lVar1, func_0x00010010fab4(lVar1,PTR_DAT_1126a5a30), (int)lVar2 != 0)) {
      uVar8 = 0;
      lVar5 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar5);
      lVar3 = lVar5;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      fVar7 = (float)uVar8;
      if (lVar3 == 0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = 0.0;
        do {
          lVar6 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar5);
            }
            fVar7 = (float)uVar8;
            if (lVar1 == *(long *)(lVar6 * 8)) goto LAB_107d975a8;
            func_0x00010c117b00();
            fVar10 = fVar10 + (float)uVar8;
            lVar6 = lVar6 + 1;
          } while (lVar3 != lVar6);
          lVar3 = lVar5;
          func_0x00010bf52a60();
          fVar7 = (float)uVar8;
        } while (lVar3 != 0);
      }
LAB_107d975a8:
      _objc_release(lVar5);
      func_0x00010c117b00(lVar1);
      dVar9 = (double)(fVar7 / *(float *)(param_1 + 8)) / (((double)fVar7 * 0.3) / 0.1);
      fVar11 = (float)dVar9;
      func_0x00010c117720(*(undefined8 *)(param_1 + 0x18));
      if (SUB84(dVar9,0) + fVar11 < (fVar10 + fVar7) / *(float *)(param_1 + 8)) {
        func_0x00010c1e46a0(*(undefined8 *)(param_1 + 0x18));
      }
    }
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + 0x28);
}



/* Entry: 107d97668; end: 107d9766f; -[SCGalleryActivityProgressController activityProgressables] */

undefined8 FUN_107d97668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d97670; end: 107d97677; -[SCGalleryActivityProgressController cancelHandler] */

undefined8 FUN_107d97670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d97678; end: 107d9767f; -[SCGalleryActivityProgressController setCancelHandler:] */

void FUN_107d97678(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d97680; end: 107d97687; -[SCGalleryActivityProgressController cancelled] */

undefined1 FUN_107d97680(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 107d97688; end: 107d976cf; -[SCGalleryActivityProgressController .cxx_destruct] */

void FUN_107d97688(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d976d0; end: 107d97787; -[SCGalleryMultiExportActivity initWithActivityItemProviders:photoPermissionCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107d976d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb040;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276eef4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276eef4) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11276eef8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d97788; end: 107d97793; -[SCGalleryMultiExportActivity activityType] */

undefined ** FUN_107d97788(void)

{
  return &PTR____CFConstantStringClassReference_110ebd738;
}



/* Entry: 107d97794; end: 107d977c3; -[SCGalleryMultiExportActivity activityTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d97794(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276eefc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d977c4; end: 107d977d7; -[SCGalleryMultiExportActivity activityImage] */

void FUN_107d977c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110ebd758);
  return;
}



/* Entry: 107d977d8; end: 107d97847; -[SCGalleryMultiExportActivity canPerformWithActivityItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d977d8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if ((puVar1 != (undefined *)0x2) &&
     (puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
     puVar1 != (undefined *)0x1)) {
    func_0x000108dfd5cc();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276eefc);
    *(undefined **)(param_1 + _DAT_11276eefc) = puVar1;
    _objc_release(uVar2);
    return 1;
  }
  return 0;
}



/* Entry: 107d97848; end: 107d9787f; -[SCGalleryMultiExportActivity prepareWithActivityItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d97848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ef00);
  *(undefined8 *)(param_1 + _DAT_11276ef00) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d97880; end: 107d978ff; -[SCGalleryMultiExportActivity performActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d97880(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276eef8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134a40();
  _objc_release(uVar1);
  return;
}



/* Entry: 107d97900; end: 107d97987;  */

void FUN_107d97900(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 107d97988; end: 107d97997;  */

void FUN_107d97988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef1510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_activityDidFinish__112599ee8,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 107d97998; end: 107d979f7; -[SCGalleryMultiExportActivity .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d97998(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276eef8,0);
  _objc_storeStrong(param_1 + _DAT_11276eef4,0);
  _objc_storeStrong(param_1 + _DAT_11276ef00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276eefc,0);
  return;
}



/* Entry: 107d979f8; end: 107d97ae7; -[SCGallerySaveToCameraRollActivity initWithUsesBatchExportActivity:photoPermissionCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107d979f8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb048;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db2cf8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2cf8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ef04);
    *(undefined ***)((long)puVar1 + (long)_DAT_11276ef04) = ppuVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ef08);
    *(undefined **)((long)puVar1 + (long)_DAT_11276ef08) = puVar3;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276ef0c) = param_3;
    lVar5 = (long)_DAT_11276ef10;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107d97ae8; end: 107d97af3; -[SCGallerySaveToCameraRollActivity activityType] */

undefined ** FUN_107d97ae8(void)

{
  return &PTR____CFConstantStringClassReference_110ebd778;
}



/* Entry: 107d97af4; end: 107d97b23; -[SCGallerySaveToCameraRollActivity activityTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d97af4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ef04);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d97b24; end: 107d97b53; -[SCGallerySaveToCameraRollActivity activityImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d97b24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ef08);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d97b54; end: 107d97f43; -[SCGallerySaveToCameraRollActivity canPerformWithActivityItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d97b54(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_3;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if ((puVar1 == (undefined *)0x2) ||
     (puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
     puVar1 == (undefined *)0x1)) {
LAB_107d97d54:
    uVar5 = 0;
    goto LAB_107d97d58;
  }
  if (*(char *)(param_1 + _DAT_11276ef0c) == '\x01') {
    func_0x000108dfd5cc();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276ef04);
    *(undefined **)(param_1 + _DAT_11276ef04) = puVar1;
    _objc_release(uVar5);
    ppuVar4 = &PTR____CFConstantStringClassReference_110ebd758;
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    ppuVar4 = &puStack_130;
    ppuVar2 = param_3;
    func_0x00010bf52a60();
    if (ppuVar2 == (undefined **)0x0) {
      lVar7 = 0;
      lVar8 = 0;
      ppuVar4 = param_3;
LAB_107d97da8:
      _objc_release(ppuVar4);
      if ((ulong)(lVar8 + lVar7) < 2) goto LAB_107d97e98;
      ppuVar4 = &PTR____CFConstantStringClassReference_110ebd798;
    }
    else {
      lVar8 = 0;
      lVar7 = 0;
      lVar9 = *plStack_120;
      do {
        ppuVar10 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          uVar6 = *(ulong *)(lStack_128 + (long)ppuVar10 * 8);
          puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
          _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
          uVar3 = uVar6;
          _objc_opt_isKindOfClass(uVar6,puVar1);
          if ((uVar3 & 1) == 0) {
            puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
            _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
            _objc_opt_isKindOfClass(uVar6,puVar1);
            if ((uVar6 & 1) == 0) {
              _objc_release(param_3);
              goto LAB_107d97d54;
            }
            lVar7 = lVar7 + 1;
          }
          else {
            lVar8 = lVar8 + 1;
          }
          ppuVar10 = (undefined **)((long)ppuVar10 + 1);
        } while (ppuVar2 != ppuVar10);
        ppuVar4 = &puStack_130;
        ppuVar2 = param_3;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
      _objc_release(param_3);
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((lVar8 != 0) && (lVar7 != 0)) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110ebd7b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebd7b8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = *(undefined ***)(param_1 + _DAT_11276ef04);
        *(undefined ***)(param_1 + _DAT_11276ef04) = ppuVar2;
LAB_107d97f34:
        _objc_release(ppuVar10);
        goto LAB_107d97da8;
      }
      if (lVar8 != 0) {
        if (lVar8 == 1) {
          ppuVar4 = &PTR____CFConstantStringClassReference_110ebd7f8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebd7f8,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar4;
        }
        else {
          ppuVar4 = &PTR____CFConstantStringClassReference_110ebd7d8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebd7d8,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
        }
        lVar9 = (long)_DAT_11276ef04;
        _objc_retain(ppuVar2);
        uVar5 = *(undefined8 *)(param_1 + lVar9);
        *(undefined ***)(param_1 + lVar9) = ppuVar2;
        _objc_release(uVar5);
        ppuVar10 = ppuVar2;
        lVar9 = lVar8;
joined_r0x000107d97e8c:
        if (lVar9 == 1) goto LAB_107d97da8;
        goto LAB_107d97f34;
      }
      if (lVar7 != 0) {
        if (lVar7 == 1) {
          ppuVar4 = &PTR____CFConstantStringClassReference_110ebd838;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebd838,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar4;
        }
        else {
          ppuVar4 = &PTR____CFConstantStringClassReference_110ebd818;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebd818,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
        }
        lVar8 = (long)_DAT_11276ef04;
        _objc_retain(ppuVar2);
        uVar5 = *(undefined8 *)(param_1 + lVar8);
        *(undefined ***)(param_1 + lVar8) = ppuVar2;
        _objc_release(uVar5);
        lVar8 = 0;
        ppuVar10 = ppuVar2;
        lVar9 = lVar7;
        goto joined_r0x000107d97e8c;
      }
LAB_107d97e98:
      ppuVar4 = &PTR____CFConstantStringClassReference_110ebd758;
    }
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276ef08);
  *(undefined **)(param_1 + _DAT_11276ef08) = puVar1;
  _objc_release(uVar5);
  uVar5 = 1;
LAB_107d97d58:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar5;
  }
  ___stack_chk_fail();
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)((long)param_3 + (long)_DAT_11276ef14);
  *(undefined ***)((long)param_3 + (long)_DAT_11276ef14) = ppuVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return uVar5;
}



/* Entry: 107d97f44; end: 107d97f7b; -[SCGallerySaveToCameraRollActivity prepareWithActivityItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d97f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ef14);
  *(undefined8 *)(param_1 + _DAT_11276ef14) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d97f7c; end: 107d97ffb; -[SCGallerySaveToCameraRollActivity performActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d97f7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ef10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134a40();
  _objc_release(uVar1);
  return;
}



/* Entry: 107d97ffc; end: 107d98083;  */

void FUN_107d97ffc(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 107d98084; end: 107d98093;  */

void FUN_107d98084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef1510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_activityDidFinish__112599ee8,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 107d98094; end: 107d980f3; -[SCGallerySaveToCameraRollActivity .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d98094(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ef10,0);
  _objc_storeStrong(param_1 + _DAT_11276ef14,0);
  _objc_storeStrong(param_1 + _DAT_11276ef08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ef04,0);
  return;
}



/* Entry: 107d980f4; end: 107d9867f; -[SCGalleryStoryExporter initWithGallerySnaps:cloudFiles:userSession:addVR180Metadata:compositionMode:spectaclesAuxiliaryContentServices:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:videoFilterFactory:lazyBackgroundTaskWrapper:imageToVideoWriterScopeExposer:imageToVideoWriterScopeServices:targetTrajectoryFactory:snapVideoFilterScopeExposer:cachingMediaManager:dataObjectContext:memoriesCloudFS:memoriesTranscodingHelper:creativeToolsMemoriesResources:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107d980f4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined4 param_6,long param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19,long param_20,undefined8 param_21,
             undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain();
  _objc_retain();
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = param_3;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        func_0x00010c241220(uVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        if (lVar3 == 0) {
          lVar4 = param_20;
          func_0x00010c269d40(param_20);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar4;
          func_0x00010c13a8c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
        }
        puVar5 = PTR_PTR_1126d7d08;
        _objc_alloc(PTR_PTR_1126d7d08);
        func_0x00010c046e60();
        func_0x00010befa120(puVar1);
        _objc_release(puVar5);
        _objc_release(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar9;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  lVar9 = param_7;
  func_0x00010854b8d8(param_7);
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_107d98680;
  puStack_168 = &UNK_110a0c3c0;
  _objc_retain(param_5);
  uStack_160 = param_5;
  _objc_retain(param_9);
  uStack_158 = param_9;
  _objc_retain(param_10);
  uStack_150 = param_10;
  _objc_retain(param_11);
  uStack_148 = param_11;
  _objc_retain(param_16);
  uStack_140 = param_16;
  _objc_retain(param_22);
  uStack_138 = param_22;
  puStack_188 = PTR_PTR_1126fb050;
  puVar6 = &uStack_190;
  uStack_190 = param_1;
  _objc_msgSendSuper2(puVar6,PTR_s_initWithStories_aspectRatio_aspe_1125f0d88,puVar5,lVar9,
                      param_7 == 4,param_6,&puStack_180,param_13,param_9,0);
  _objc_release(lVar9);
  _objc_release(puVar5);
  if (puVar6 != (undefined8 *)0x0) {
    lVar9 = (long)_DAT_11276ef50;
    _objc_retain(param_9);
    uVar11 = *(undefined8 *)((long)puVar6 + lVar9);
    *(undefined8 *)((long)puVar6 + lVar9) = param_9;
    _objc_release(uVar11);
    lVar9 = (long)_DAT_11276ef54;
    _objc_retain(param_14);
    uVar11 = *(undefined8 *)((long)puVar6 + lVar9);
    *(undefined8 *)((long)puVar6 + lVar9) = param_14;
    _objc_release(uVar11);
    lVar9 = (long)_DAT_11276ef58;
    _objc_retain(param_15);
    uVar11 = *(undefined8 *)((long)puVar6 + lVar9);
    *(undefined8 *)((long)puVar6 + lVar9) = param_15;
    _objc_release(uVar11);
    lVar9 = (long)_DAT_11276ef5c;
    _objc_retain(param_19);
    uVar11 = *(undefined8 *)((long)puVar6 + lVar9);
    *(undefined8 *)((long)puVar6 + lVar9) = param_19;
    _objc_release(uVar11);
    lVar9 = (long)_DAT_11276ef60;
    _objc_retain(param_23);
    uVar11 = *(undefined8 *)((long)puVar6 + lVar9);
    *(undefined8 *)((long)puVar6 + lVar9) = param_23;
    _objc_release(uVar11);
  }
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(puVar1);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar6 = (undefined8 *)PTR_PTR_1126b1350;
  _objc_alloc(PTR_PTR_1126b1350);
  uVar11 = *(undefined8 *)(param_3 + 0x48);
  func_0x00010c2542a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x48);
  func_0x00010bf5d860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cee0(puVar6);
  _objc_release(uVar7);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 107d98680; end: 107d98737;  */

void FUN_107d98680(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = PTR_PTR_1126b1350;
  _objc_alloc(PTR_PTR_1126b1350);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c2542a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf5d860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cee0(puVar6,param_2,uVar1,uVar4,uVar2,uVar5,uVar3,uVar7,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107d98738; end: 107d987fb; -[SCGalleryStoryExporter createCompositeFromItems:] */

void FUN_107d98738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010beced40(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107d987fc; end: 107d98827;  */

void FUN_107d987fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf455a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d98828; end: 107d9889b; -[SCGalleryStoryExporter didProceedToProgress:] */

void FUN_107d98828(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_2;
  func_0x00010bf455e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef16a0((float)param_1);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126fb050;
  uStack_40 = param_2;
  _objc_msgSendSuper2(param_1,&uStack_40,PTR_s_didProceedToProgress__1125bbc98);
  return;
}



/* Entry: 107d9889c; end: 107d98967; -[SCGalleryStoryExporter didFinishExportingToURL:withError:] */

void FUN_107d9889c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  if (param_3 == 0) {
    if (param_4 == 0) goto LAB_107d98920;
    func_0x00010bf455e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1660();
  }
  else {
    func_0x00010bf455e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1680();
  }
  _objc_release(uVar1);
LAB_107d98920:
  puStack_38 = PTR_PTR_1126fb050;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_didFinishExportingToURL_withErro_1125bb3b0,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d98968; end: 107d98c7b; -[SCGalleryStoryExporter _transformItemsToUrls:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d98968(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong param_5,long param_6)

{
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  ulong uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) goto LAB_107d98c24;
  uVar2 = param_5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  else {
    uVar3 = param_5;
    func_0x00010c0d3c80();
    func_0x00010c12d3c0();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    uVar5 = param_3;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    if (uVar4 < uVar6) {
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      uVar5 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar7);
      if ((uVar5 & 1) == 0) {
        puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
        _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
        uVar5 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar7);
        if ((uVar5 & 1) != 0) {
          _objc_initWeak(auStack_78,param_3);
          _objc_retain(uVar2);
          uVar5 = param_3;
          func_0x00010bf455e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef16c0();
          uVar10 = param_1;
          _objc_release(uVar5);
          uVar9 = *(undefined8 *)(param_3 + (long)_DAT_11276ef54);
          uVar8 = *(undefined8 *)(param_3 + (long)_DAT_11276ef58);
          func_0x00010c23d0a0(uVar2);
          fVar1 = (float)param_1;
          if ((float)param_1 == 0.0) {
            fVar1 = 3.0;
          }
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0xc2000000;
          pcStack_a8 = FUN_107d98ee0;
          puStack_a0 = &UNK_110a0c3f0;
          _objc_copyWeak(auStack_88,auStack_78);
          uStack_80 = uVar4;
          _objc_retain(param_6);
          lStack_90 = param_6;
          _objc_retain(uVar3);
          uStack_98 = uVar3;
          FUN_107d98c7c(uVar10,param_2,fVar1,uVar9,uVar8,uVar2,0,&puStack_b8);
          _objc_release(uStack_98);
          _objc_release(lStack_90);
          _objc_destroyWeak(auStack_88);
          _objc_release(uVar2);
          _objc_destroyWeak(auStack_78);
          goto LAB_107d98c14;
        }
      }
      else {
        _objc_retain(uVar2);
        func_0x00010bdd7e20(param_3);
        uVar4 = param_3;
        func_0x00010c28fbc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010c258040(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar4);
        _objc_release(uVar2);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      func_0x00010beced40(param_3);
    }
    else {
      (**(code **)(param_6 + 0x10))(param_6);
    }
LAB_107d98c14:
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
LAB_107d98c24:
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107d98c7c; end: 107d98edf;  */

void FUN_107d98c7c(undefined8 param_1,undefined8 param_2,float param_3,long param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7,long param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_5;
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_6 == (undefined *)0x0) {
    _objc_retain(0);
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    puVar7 = (undefined *)0x0;
    puVar8 = puVar3;
    (**(code **)(param_8 + 0x10))(param_8);
  }
  else {
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_107d9a934;
    puStack_a0 = &UNK_110857fa0;
    _objc_retain(param_8);
    lStack_98 = param_8;
    _objc_retain(param_6);
    ppuVar1 = &puStack_b8;
    _objc_retainBlock();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = param_6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(ppuVar1);
    puVar2 = param_5;
    func_0x00010bf23240(param_1,param_2,(double)param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar8 = puVar2;
    func_0x00010bf9d620(param_4);
    _objc_release(puVar2);
    _objc_release(param_4);
    _objc_release(ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(lStack_98);
    puVar3 = param_6;
  }
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  uVar4 = param_4 + 0x30;
  _objc_loadWeakRetained();
  if ((puVar7 != (undefined *)0x0) && (puVar8 == (undefined *)0x0)) {
    func_0x00010bdd7e20(uVar4);
    uVar9 = *(ulong *)(param_4 + 0x38);
    uVar5 = uVar4;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    if (uVar6 <= uVar9) {
      (**(code **)(*(long *)(param_4 + 0x28) + 0x10))();
      goto LAB_107d98fd8;
    }
    uVar5 = uVar4;
    func_0x00010c28fbc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c258040(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  func_0x00010beced40(uVar4);
LAB_107d98fd8:
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 107d98ee0; end: 107d98ff7;  */

void FUN_107d98ee0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_3 == 0)) {
    func_0x00010bdd7e20(uVar1);
    uVar4 = *(ulong *)(param_1 + 0x38);
    uVar2 = uVar1;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (uVar3 <= uVar4) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
      goto LAB_107d98fd8;
    }
    uVar2 = uVar1;
    func_0x00010c28fbc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c258040(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010beced40(uVar1);
LAB_107d98fd8:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d98ff8; end: 107d9905b; -[SCGalleryStoryExporter _cacheUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d98ff8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276ef50);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc900();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d9905c; end: 107d9907b; -[SCGalleryStoryExporter compositingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d9905c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ef64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d9907c; end: 107d9908f; -[SCGalleryStoryExporter setCompositingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d9907c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276ef64,param_3);
  return;
}



/* Entry: 107d99090; end: 107d9909f; -[SCGalleryStoryExporter activityItemProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d99090(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ef68);
}



/* Entry: 107d990a0; end: 107d990df; -[SCGalleryStoryExporter setActivityItemProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d990a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ef68;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d990e0; end: 107d9916b; -[SCGalleryStoryExporter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d990e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ef68,0);
  _objc_destroyWeak(param_1 + _DAT_11276ef64);
  _objc_storeStrong(param_1 + _DAT_11276ef60,0);
  _objc_storeStrong(param_1 + _DAT_11276ef5c,0);
  _objc_storeStrong(param_1 + _DAT_11276ef58,0);
  _objc_storeStrong(param_1 + _DAT_11276ef54,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ef50,0);
  return;
}



/* Entry: 107d9916c; end: 107d99483; -[SCGalleryStoryExporterItem initWithSnap:cloudFile:userSession:spectaclesAuxiliaryContentServices:videoFilterFactory:imageToVideoWriterScopeExposer:imageToVideoWriterScopeServices:targetTrajectoryFactory:snapVideoFilterScopeExposer:cachingMediaManager:dataObjectContext:memoriesCloudFS:memoriesTranscodingHelper:circumstanceEngine:] */

undefined8 *
FUN_107d9916c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126fb058;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[7];
    puVar1[7] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_11);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[3];
    puVar1[3] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[4];
    puVar1[4] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[5];
    puVar1[5] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[6];
    puVar1[6] = param_16;
    _objc_release(uVar2);
  }
  _objc_release(param_16);
  _objc_release(param_15);
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



/* Entry: 107d99484; end: 107d9948b; -[SCGalleryStoryExporterItem createTimeUtc] */

void FUN_107d99484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_createTimeUtc_1125b4000);
  return;
}



/* Entry: 107d9948c; end: 107d99493; -[SCGalleryStoryExporterItem isLagunaMedia] */

uint FUN_107d9948c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  _objc_retain();
  uVar2 = uVar1;
  func_0x00010b5fa088();
  if (uVar2 - 2 < 0xb) {
    uVar2 = uVar1;
    func_0x00010b5fa088();
    uVar3 = 0;
    if (uVar2 < 0xd) {
      uVar3 = 0x1566 >> (ulong)((uint)uVar2 & 0x1f);
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  return uVar3 & 1;
}



/* Entry: 107d99494; end: 107d994b7; -[SCGalleryStoryExporterItem isSpectaclesMedia] */

bool FUN_107d99494(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010b5fa088(lVar1);
  return lVar1 - 2U < 0xb;
}


