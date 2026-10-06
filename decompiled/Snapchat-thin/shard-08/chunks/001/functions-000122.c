/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e109ec; end: 105e10b47;  */

void FUN_105e109ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b27a8;
  _objc_retain(param_4);
  func_0x00010bfe9800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010b971468();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126c5018;
  _objc_alloc(PTR_PTR_1126c5018);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0dfd40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010c23d0a0(param_4);
  func_0x00010c23d0a0(param_4);
  _objc_release(param_4);
  func_0x00010bff4300(param_1,param_2,puVar3);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0dfd40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192ec0(puVar3);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e10b48; end: 105e10b7b;  */

void FUN_105e10b48(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd3380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e10b7c; end: 105e10ed7; -[SCSendToWorkflow _beginCreatePostFlowWithPreviewAssets:] */

void FUN_105e10b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  func_0x00010bdf1be0(param_1);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126b5bb8;
  _objc_alloc();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c038ee0(0x3feccccccccccccd);
  uVar9 = *(undefined8 *)(param_1 + 0x370);
  *(undefined **)(param_1 + 0x370) = puVar2;
  _objc_release(uVar9);
  uVar3 = *(ulong *)(param_1 + 0x1b8);
  func_0x000108f48664();
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x130);
    func_0x00010c075080();
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xe8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010bf8fc80();
      _objc_release(uVar4);
      if ((int)uVar9 != 0) goto LAB_105e10c50;
    }
  }
  else {
LAB_105e10c50:
    iVar1 = (int)*(undefined8 *)(param_1 + 0x1b8);
    func_0x000108f487dc();
    if (iVar1 != 0) {
      puStack_a0 = PTR_PTR_1126c5020;
      _objc_alloc();
      uVar4 = *(undefined8 *)(param_1 + 0x230);
      func_0x00010bf31200(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x230);
      func_0x00010bf4f080(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x230);
      func_0x00010c094660(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x118);
      func_0x00010c0d3720(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a5c0();
      _objc_release(uVar7);
      _objc_release(uVar9);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      goto LAB_105e10d54;
    }
  }
  puStack_a0 = (undefined *)0x0;
LAB_105e10d54:
  puVar2 = PTR_PTR_1126c5028;
  _objc_alloc();
  func_0x00010c037de0();
  uVar9 = *(undefined8 *)(param_1 + 0x230);
  func_0x00010c15d5c0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(puVar2);
  _objc_release(uVar9);
  puVar8 = PTR_PTR_1126c5030;
  _objc_alloc(PTR_PTR_1126c5030);
  uVar4 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c23f6e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06fa80();
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c240240();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002640(puVar8);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x360));
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puStack_a0);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105e10ed8; end: 105e10f0b;  */

void FUN_105e10ed8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be028c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e10f0c; end: 105e10faf; -[SCSendToWorkflow _placeTagsTracker] */

void FUN_105e10f0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x130);
  func_0x00010c275800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x1a8);
    func_0x00010c275800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      uVar5 = 0;
      goto LAB_105e10f98;
    }
    puVar4 = (undefined8 *)(param_1 + 0x1a8);
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0x130);
  }
  uVar2 = *puVar4;
  func_0x00010c275800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010010fab4();
  uVar5 = uVar2;
  if ((int)uVar3 == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar2);
LAB_105e10f98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105e10fb0; end: 105e11653; -[SCSendToWorkflow _createPostSetConfig] */

void FUN_105e10fb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined *puStack_a0;
  long lStack_90;
  undefined **ppuStack_80;
  
  lVar2 = *(long *)(param_3 + 0x210);
  func_0x00010c08d820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar3 = param_3;
  func_0x00010be742c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_3 + 0x130);
  func_0x00010c275800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_3 + 0x1a8);
    func_0x00010c275800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puVar16 = (undefined8 *)(param_3 + 0x1a8);
      goto LAB_105e11074;
    }
    ppuStack_80 = (undefined **)0x0;
  }
  else {
    puVar16 = (undefined8 *)(param_3 + 0x130);
LAB_105e11074:
    ppuVar4 = (undefined **)*puVar16;
    func_0x00010c275800();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010010fab4();
    ppuStack_80 = ppuVar4;
    if ((int)ppuVar5 == 0) {
      ppuStack_80 = (undefined **)0x0;
    }
    _objc_retain();
    _objc_release(ppuVar4);
  }
  if (lVar3 == 0) {
    lStack_90 = 0;
    lVar2 = lVar9;
  }
  else {
    lStack_90 = lVar3;
    func_0x00010c2683a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lStack_90;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    if ((lStack_90 != 0) && (lVar2 != 0)) {
      lVar9 = lVar2;
      func_0x00010bf38020(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar9;
      func_0x00010bf31740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51c80();
      _objc_release(lVar6);
      _objc_release(lVar9);
      puStack_a0 = PTR_PTR_1126c5038;
      _objc_alloc();
      func_0x00010c247be0();
      func_0x00010c27dd80(lStack_90);
      func_0x00010853f88c();
      func_0x00010c021aa0(param_1,param_2);
      puVar7 = PTR_PTR_1126c5040;
      _objc_alloc(PTR_PTR_1126c5040);
      lVar9 = lStack_90;
      func_0x00010c0fd0e0(lStack_90);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lStack_90;
      func_0x00010c0fd260(lStack_90);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar2;
      func_0x00010c0fd140(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c060840(puVar7);
      func_0x00010c1dc500(puStack_a0);
      _objc_release(puVar7);
      _objc_release(lVar8);
      _objc_release(lVar6);
      _objc_release(lVar9);
      lVar9 = lVar2;
      func_0x00010bf38020(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar9;
      func_0x00010c0fdd60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20fa40(puStack_a0);
      _objc_release(lVar6);
      _objc_release(lVar9);
      lVar9 = lVar2;
      func_0x00010c0fd140(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dc440(puStack_a0);
      _objc_release(lVar9);
      goto LAB_105e11300;
    }
  }
  lVar9 = *(long *)(param_3 + 0x378);
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    uVar12 = *(undefined8 *)(param_3 + 0x378);
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar12;
    func_0x00010c27dd80();
    _objc_release(uVar12);
    _objc_release(lVar9);
    if ((int)uVar17 == 6) {
      puStack_a0 = *(undefined **)(param_3 + 0x378);
      func_0x00010c0fd640();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105e11300;
    }
  }
  puStack_a0 = (undefined *)0x0;
LAB_105e11300:
  lVar9 = *(long *)(param_3 + 0x420);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR____NSArray0__struct_11034ab48;
  if (lVar9 != 0) {
    puVar10 = *(undefined **)(param_3 + 0x420);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar10;
    func_0x00010bf592c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
  }
  if (*(long *)(param_3 + 0x378) == 0) {
    if (ppuStack_80 == (undefined **)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar5 = ppuStack_80;
      func_0x00010c24b0a0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = PTR_PTR_1126c5048;
    _objc_alloc();
    func_0x00010beb3660(param_3);
    iVar1 = (int)*(undefined8 *)(param_3 + 0x1a8);
    func_0x00010c22eae0();
    if (iVar1 != 0) {
      func_0x00010c06f860();
    }
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(puVar7);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010be1e220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ba40();
    uVar17 = *(undefined8 *)(param_3 + 0x378);
    *(undefined **)(param_3 + 0x378) = puVar10;
    _objc_release(uVar17);
    _objc_release(lVar9);
    _objc_release(puVar11);
    _objc_release(ppuVar5);
  }
  puVar11 = PTR_PTR_1126c5048;
  _objc_alloc();
  uVar17 = *(undefined8 *)(param_3 + 0x378);
  func_0x00010bf6e620(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_3 + 0x378);
  func_0x00010c2759e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_3 + 0x378);
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_3 + 0x378);
  func_0x00010c06cb80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07c240();
  func_0x00010c22eae0();
  lVar9 = param_3;
  func_0x00010be1e200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puVar7);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010be1e220();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_3 + 0x378);
  func_0x00010bf8c580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0705c0();
  func_0x00010c00ba40();
  _objc_release(uVar15);
  _objc_release(lVar6);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(param_3 + 0x378);
  *(undefined **)(param_3 + 0x378) = puVar11;
  _objc_release(uVar17);
  _objc_release(puVar7);
  _objc_release(puStack_a0);
  _objc_release(lStack_90);
  _objc_release(ppuStack_80);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105e11654; end: 105e1189f; -[SCSendToWorkflow _resetSpotlightCover] */

void FUN_105e11654(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *(undefined8 *)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x378);
  func_0x00010bf8c580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126c5048;
    _objc_alloc();
    uVar1 = *(undefined8 *)(param_1 + 0x378);
    func_0x00010bf6e620(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x378);
    func_0x00010c2759e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x378);
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x378);
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x378);
    func_0x00010c06cb80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07c240();
    func_0x00010c22eae0();
    uVar8 = *(undefined8 *)(param_1 + 0x378);
    func_0x00010c0f29e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x378);
    func_0x00010c105780();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x378);
    func_0x00010c159e60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x378);
    func_0x00010c134420();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x378);
    func_0x00010c15a100();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x378);
    func_0x00010c246fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0705c0();
    func_0x00010c00ba40();
    uVar14 = *(undefined8 *)(param_1 + 0x378);
    *(undefined **)(param_1 + 0x378) = puVar3;
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea31b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setCreatePostUpdateSelectedCont_112586610)
    ;
    return;
  }
  return;
}



/* Entry: 105e118a0; end: 105e11a4f; -[SCSendToWorkflow _getCreatePostSoundConfig] */

void FUN_105e118a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  puVar1 = PTR_PTR_1126c5050;
  _objc_opt_new(PTR_PTR_1126c5050);
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c075080(uVar2);
  func_0x00010c1b1b80(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c06c980(uVar2);
  func_0x00010c16c080(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c06c8e0(uVar2);
  func_0x00010c16bc20(puVar1,param_2,uVar2);
  func_0x00010c1b2b00(puVar1,param_2,*(long *)(param_1 + 0x388) != 0);
  if (*(long *)(param_1 + 0x388) != 0) {
    puVar3 = PTR_PTR_1126c5058;
    func_0x00010c0d2fe0(PTR_PTR_1126c5058);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9e80(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  lVar4 = *(long *)(param_1 + 0x280);
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c22a7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c24ace0();
    uVar9 = (uint)uVar2 ^ 1;
    _objc_release(uVar5);
  }
  else {
    uVar9 = 1;
  }
  lVar4 = *(long *)(param_1 + 1000);
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar6 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  else {
    _objc_retain(lVar4);
    lVar8 = lVar4;
  }
  _objc_release(lVar4);
  if (uVar9 == 0) {
    func_0x000108f58954();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6860(puVar1,param_2,lVar4);
    _objc_release(lVar4);
  }
  else {
    func_0x00010c1d6860(puVar1,param_2,lVar8);
  }
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e11a50; end: 105e11c53; -[SCSendToWorkflow _getCreatePostPaidPartnershipConfig] */

void FUN_105e11a50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010c0782e0(*(undefined8 *)(param_1 + 0x130));
  lVar1 = *(long *)(param_1 + 0x280);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c22a7a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24ace0();
    _objc_release(uVar5);
  }
  puVar2 = PTR_PTR_1126b5130;
  _objc_opt_new(PTR_PTR_1126b5130);
  lVar1 = *(long *)(param_1 + 0x1a8);
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c24a0a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c24a0e0();
    func_0x00010c0df760(puVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a2c0(puVar2,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c24a0a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18fca0(puVar2,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c24a0a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4140(puVar2,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  lVar1 = *(long *)(param_1 + 0x280);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdac40();
    _objc_release(uVar5);
  }
  puVar4 = PTR_PTR_1126c5060;
  _objc_alloc(PTR_PTR_1126c5060);
  func_0x00010c019ce0();
  func_0x00010c1fb580();
  uVar5 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c24a0c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207f80(puVar4,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e11c54; end: 105e11c63; -[SCSendToWorkflow didSelectBestOfSpectaclesFirstTimePostWithOnAccept:] */

void FUN_105e11c54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2361d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showBestOfSpectaclesIntroWithOnA_11266b298,param_3,
             *(undefined8 *)(param_1 + 0x168));
  return;
}



/* Entry: 105e11c64; end: 105e11d1f; -[SCSendToWorkflow didSelectBusinessProfileForBusinessId:completion:] */

void FUN_105e11c64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105e11d20;
  puStack_58 = &UNK_110858070;
  uStack_50 = uVar2;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(uVar2);
  func_0x00010bdc2460(uVar3,param_2,param_3,uVar1,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 105e11d20; end: 105e11d77;  */

void FUN_105e11d20(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fa380();
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e11d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105e11d78; end: 105e11d87; -[SCSendToWorkflow didSelectSharedStoryWithBlockedSnapchattersInGroup:publicationId:onAccept:] */

void FUN_105e11d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showSharedStoryWithBlockedSnapch_11266c1f0);
  return;
}



/* Entry: 105e11d88; end: 105e11d97; -[SCSendToWorkflow didSelectSharedStoryToShowTrustAndSafetyPromptWithOnAccept:] */

void FUN_105e11d88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showSharedStoryTrustAndSafetyPro_11266c1e8,param_3,
             *(undefined8 *)(param_1 + 0x168));
  return;
}



/* Entry: 105e11d98; end: 105e11fd7; -[SCSendToWorkflow didSelectShareToMyStory] */

void FUN_105e11d98(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  ppuVar7 = &puStack_e0;
  uVar2 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108e00d7c();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1f8);
    uVar2 = *(undefined8 *)(param_1 + 0x200);
    uVar8 = *(undefined8 *)(param_1 + 0x208);
    _objc_retain(uVar2);
    _objc_retain(uVar3);
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c5068;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x230);
    func_0x00010c15d5c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcc00(puVar4);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x1f8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0de800();
    _objc_release(uVar5);
    func_0x00010c1cf5e0(puVar4);
    func_0x00010c1e4f40(puVar4);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105e11fd8;
    puStack_98 = &UNK_11084c4a0;
    uStack_90 = uVar2;
    uStack_88 = uVar3;
    _objc_retain(puVar4);
    ppuVar6 = &puStack_b0;
    puStack_80 = puVar4;
    uStack_78 = uVar8;
    _objc_retainBlock(ppuVar6);
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105e12068;
    puStack_c8 = &UNK_110841f80;
    puStack_c0 = puVar4;
    uStack_b8 = uVar8;
    _objc_retain(puVar4);
    _objc_retainBlock(&puStack_e0);
    uVar5 = *(undefined8 *)(param_1 + 0x1f8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cf600();
    _objc_release(uVar5);
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    uVar5 = *(undefined8 *)(param_1 + 0x1f8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8cc0();
    _objc_release(uVar5);
    func_0x00010c235fa0(*(undefined8 *)(param_1 + 8));
    _objc_release(ppuVar7);
    _objc_release(puStack_c0);
    _objc_release(ppuVar6);
    _objc_release(puStack_80);
    _objc_release(puVar4);
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 105e11fd8; end: 105e120af;  */

void FUN_105e11fd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c4c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190fa0();
  _objc_release(uVar1);
  func_0x00010c161620(*(undefined8 *)(param_1 + 0x30),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e120b0; end: 105e122ab; -[SCSendToWorkflow didSelectCustomTTL:forSelectionStory:] */

void FUN_105e120b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188d40();
  _objc_release(uVar9);
  uVar9 = param_4;
  func_0x000108f42a50(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar1 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  uVar8 = uVar9;
  func_0x00010c122a80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c122a80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c122a80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0d5140();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f42d24(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bce0(puVar1,param_2,uVar2,uVar4,uVar6,param_3);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar8);
  puVar7 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  uVar8 = uVar9;
  func_0x00010c0f4aa0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d400(puVar7,param_2,puVar1,uVar8);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c15ab20(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289b40();
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 105e122ac; end: 105e123a7; -[SCSendToWorkflow didSelectSpotlightSectionToShowBusinessAccountsFromNoAudio:] */

void FUN_105e122ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  *(undefined1 *)(param_1 + 0x3f8) = 1;
  *(char *)(param_1 + 0x3f9) = (char)param_3;
  uVar1 = *(undefined8 *)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = 0;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bdf3ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5650;
  _objc_alloc(PTR_PTR_1126b5650);
  func_0x00010c043e20();
  lVar4 = *(long *)(param_1 + 0x378);
  func_0x00010c159e60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar5 = param_1;
    func_0x00010bebc180();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 1000);
    *(long *)(param_1 + 1000) = lVar5;
  }
  else {
    _objc_retain(lVar4);
    uVar1 = *(undefined8 *)(param_1 + 1000);
    *(long *)(param_1 + 1000) = lVar4;
  }
  _objc_release(uVar1);
  _objc_release(lVar4);
  func_0x00010bf7b1c0(param_1,param_2,puVar3,0,param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105e123a8; end: 105e12467; -[SCSendToWorkflow didSelectSpotlightSectionWithSendToEducation:] */

void FUN_105e123a8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c239ca0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105e12468; end: 105e124b7;  */

void FUN_105e12468(long param_1,int param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_1 + 0x170;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf839a0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e124b8; end: 105e124eb; -[SCSendToWorkflow didSetMyStoryAudience] */

void FUN_105e124b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e124ec; end: 105e124fb; -[SCSendToWorkflow showMusicBlockedForBrandAccountsDialog] */

void FUN_105e124ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c238930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showMusicBlockedBrandAccountModa_11266bc70,
             *(undefined8 *)(param_1 + 0x168));
  return;
}



/* Entry: 105e124fc; end: 105e1282f; -[SCSendToWorkflow didTapContactWithPhoneNumber:selectionItem:selectionTypeIdentifier:source:] */

void FUN_105e124fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b50d0;
  puVar9 = *(undefined **)(param_1 + 0x1a8);
  if (*(char *)(param_1 + 0x238) == '\x01') {
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010c15ab20(puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010c15aa20(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(puVar9);
    uVar2 = param_4;
    func_0x00010c122a80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c0e00e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(puVar9);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c15ab20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb940();
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(uVar2);
  }
  else {
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010c158920(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8de60(puVar9);
    _objc_release(puVar3);
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    uVar4 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010bf4a780(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277d80();
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(uVar2);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c26b9e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c0c45a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c22c620(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x230);
    func_0x00010c15d5c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237600(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2375f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 8),PTR_s_showExternalLinkSendingTrustAndS_11266b7a0);
  return;
}



/* Entry: 105e12830; end: 105e12843; -[SCSendToWorkflow didSelectSelectableContactForFirstTimeWithOnAccept:isSnapAnyone:] */

void FUN_105e12830(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2375f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_showExternalLinkSendingTrustAndS_11266b7a0,param_3,
             *(undefined8 *)(param_1 + 0x168),param_4);
  return;
}



/* Entry: 105e12844; end: 105e1296b; -[SCSendToWorkflow longPressActionHandler:didLongPressForType:identifier:] */

void FUN_105e12844(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar2 = param_5;
  if (param_4 == 2) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c122b80(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c15ab60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c236e40(uVar4,param_2,uVar2,uVar3,*(undefined8 *)(param_1 + 0x168));
    _objc_release(uVar3);
  }
  else if (param_4 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c122b80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237aa0(uVar3,param_2,uVar2,puVar1,*(undefined8 *)(param_1 + 0x168));
  }
  else {
    if (param_4 != 0) goto LAB_105e1294c;
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c122b80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a040(uVar3,param_2,uVar2,puVar1,*(undefined8 *)(param_1 + 0x168));
  }
  _objc_release(uVar2);
LAB_105e1294c:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105e1296c; end: 105e12b27; -[SCSendToWorkflow didCreateCustomStoryWithPublicationId:displayName:type:] */

void FUN_105e1296c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf438c0(*(undefined8 *)(param_1 + 8));
  puVar6 = (undefined *)0x0;
  if (param_5 < 2) {
    if (param_5 == 0) goto LAB_105e12b00;
    if (param_5 == 1) {
      ppuVar5 = &PTR_PTR_110cb3018;
      goto LAB_105e129f4;
    }
  }
  else {
    if (param_5 == 3) {
      ppuVar5 = &PTR_PTR_110cb3028;
    }
    else {
      if (param_5 != 2) goto LAB_105e12a00;
      ppuVar5 = &PTR_PTR_110cb3020;
    }
LAB_105e129f4:
    puVar6 = *ppuVar5;
    _objc_retain(puVar6);
  }
LAB_105e12a00:
  puVar1 = PTR_PTR_1126b3558;
  _objc_alloc(PTR_PTR_1126b3558);
  func_0x00010c03d4e0();
  puVar2 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  func_0x00010c01bce0();
  puVar3 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  func_0x00010c1fb940(*(undefined8 *)(param_1 + 0x140),param_2,puVar3,1,
                      &PTR____CFConstantStringClassReference_110f12a18);
  puVar4 = PTR_PTR_1126c5070;
  _objc_alloc(PTR_PTR_1126c5070);
  func_0x00010c03bfc0();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x180),param_2,puVar4,puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar6);
LAB_105e12b00:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e12b28; end: 105e12b2f; -[SCSendToWorkflow didDismissCustomStoryCreation] */

void FUN_105e12b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf438d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_completeCustomStoryCreation_1125ae7d8);
  return;
}



/* Entry: 105e12b30; end: 105e12bb7; -[SCSendToWorkflow didCreateGroupWithGroupId:selectionItems:isExistingGroup:source:] */

void FUN_105e12b30(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x5;
  
  _objc_retain(in_x5);
  func_0x00010be9da60(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf74360();
  _objc_release(in_x5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf43a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_completeNewGroupCreation_1125ae828);
  return;
}



/* Entry: 105e12bb8; end: 105e12bef; -[SCSendToWorkflow didDismissNewGroupCreation:] */

void FUN_105e12bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c1fb980(*(undefined8 *)(param_1 + 0x140),param_2,param_3,1,
                      &PTR____CFConstantStringClassReference_110f12c58);
                    /* WARNING: Could not recover jumptable at 0x00010bf43a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_completeNewGroupCreation_1125ae828);
  return;
}



/* Entry: 105e12bf0; end: 105e12dbf; -[SCSendToWorkflow _setSelectedStateForGroupId:] */

void FUN_105e12bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined **)(param_1 + 0x1c8) = puVar1;
  _objc_release(uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0d8fc0();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1225a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf41860(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar6 = uVar5;
  func_0x00010c0e0ec0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uVar4 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 105e12dc0; end: 105e12e67;  */

void FUN_105e12dc0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar3);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  lVar4 = lVar3;
  func_0x00010c0dfd40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c0dfd40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010bea7380(param_2);
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e12e68; end: 105e12f0f;  */

void FUN_105e12e68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bea7380(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e12f10; end: 105e12f17; -[SCSendToWorkflow handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_105e12f10(void)

{
  return 0;
}



/* Entry: 105e12f18; end: 105e12fb7; -[SCSendToWorkflow shareSheetDismissedWithShareDestination:] */

void FUN_105e12f18(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x2d9) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdfce70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__didCompleteQueuedOffPlatformSha_11255cd38,
               *(undefined1 *)(param_1 + 0x2da));
    return;
  }
  if (*(char *)(param_1 + 0x2d8) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010bf4a780(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      func_0x00010c277dc0();
    }
    else {
      func_0x00010c277da0();
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_completeExternalShareSheetShare_1125ae7e8);
  return;
}



/* Entry: 105e12fb8; end: 105e12fe7; -[SCSendToWorkflow setShareDestinationSelectionHandler:] */

void FUN_105e12fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0x350);
  *(undefined8 *)(param_1 + 0x350) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e12fe8; end: 105e13043; -[SCSendToWorkflow onDragSelectionMode:] */

void FUN_105e12fe8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x170;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c21e060();
  _objc_release(lVar1);
  param_1 = param_1 + 0x170;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf89660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e13044; end: 105e131ff; -[SCSendToWorkflow _attemptSpotlightSharePromptWithSelectedItems:additionalText:] */

void FUN_105e13044(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105e13200;
  puStack_60 = &UNK_11086a868;
  lVar1 = param_3;
  lStack_58 = param_1;
  func_0x0001006372a4(param_3,&puStack_78);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if ((lVar2 == 0) || (lVar2 = lVar1, func_0x00010bf529e0(), lVar2 == 0)) {
    func_0x00010bdd0c00(param_1);
  }
  else {
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    _objc_initWeak(auStack_80,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x2b0);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c10be60(uVar4);
    _objc_release(uVar4);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e13200; end: 105e132b7;  */

undefined8 FUN_105e13200(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c122a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be43060();
  if ((uVar4 & 1) == 0) {
    uVar5 = param_2;
    func_0x000108f43240(param_2);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 105e132b8; end: 105e132f7;  */

void FUN_105e132b8(long param_1,long param_2)

{
  if (param_2 == 2) {
    return;
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e132f8; end: 105e13493; -[SCSendToWorkflow _attemptGroupchatMentionPromptWithSelectedItems:additionalText:] */

void FUN_105e132f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x2a0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292dc0(*(undefined8 *)(param_1 + 0x130));
  uVar2 = uVar1;
  func_0x00010bf56640();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar4 = PTR_PTR_1126c5078;
    _objc_alloc();
    func_0x00010c056ba0();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) {
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c10be40(puVar4);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release(puVar4);
      goto LAB_105e13450;
    }
  }
  func_0x00010be71b20(param_1);
LAB_105e13450:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e13494; end: 105e134d3;  */

void FUN_105e13494(long param_1,long param_2)

{
  if (param_2 == 2) {
    return;
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e134d4; end: 105e13627; -[SCSendToWorkflow _performDidSendWithSelectedItems:additionalText:] */

void FUN_105e134d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108eaff0);
  uVar6 = *(undefined8 *)(param_1 + 0x2e0);
  *(long *)(param_1 + 0x2e0) = lVar1;
  _objc_release(uVar6);
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x2e8);
  *(long *)(param_1 + 0x2e8) = param_3;
  _objc_release(uVar6);
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f0) = param_4;
  _objc_release(uVar6);
  lVar1 = *(long *)(param_1 + 0x2e0);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + 0x2da) = 0;
    func_0x00010bdfce60(param_1);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf529e0();
    lVar2 = *(long *)(param_1 + 0x2e0);
    func_0x00010bf529e0();
    *(bool *)(param_1 + 0x2da) = lVar1 == lVar2;
    uVar3 = *(undefined8 *)(param_1 + 0x2e0);
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c122b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be481a0(param_1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e13628; end: 105e136ab;  */

undefined8 FUN_105e13628(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c122a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105e136ac; end: 105e138bb; -[SCSendToWorkflow _shouldNavigateToSpotlight:] */

undefined ** FUN_105e136ac(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined **ppuVar9;
  uint uStack_134;
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
  ppuVar5 = param_3;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x230);
  func_0x00010c243400();
  if (lVar1 == 0x1b) {
    uStack_134 = 0;
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
    ppuVar5 = &puStack_130;
    ppuVar6 = param_3;
    func_0x00010bf52a60();
    if (ppuVar6 == (undefined **)0x0) {
LAB_105e13868:
      uStack_134 = 0;
    }
    else {
      uVar8 = 0;
      uStack_134 = 0;
      lVar1 = *plStack_120;
      do {
        ppuVar9 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          ppuVar7 = *(undefined ***)(lStack_128 + (long)ppuVar9 * 8);
          ppuVar2 = ppuVar7;
          func_0x00010c0f4aa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (ppuVar2 != (undefined **)0x0) goto LAB_105e13868;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar7;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar7);
          ppuVar7 = ppuVar2;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar7;
          ppuVar5 = &PTR____CFConstantStringClassReference_110f52df8;
          func_0x00010c0720c0();
          _objc_release(ppuVar7);
          if (((ulong)ppuVar3 & 1) == 0) {
            ppuVar7 = ppuVar2;
            func_0x00010c15ab60();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_1;
            ppuVar5 = ppuVar7;
            func_0x00010be43060();
            _objc_release(ppuVar7);
            uVar8 = (uint)lVar4 ^ 1 | uVar8;
          }
          else {
            uStack_134 = 1;
          }
          _objc_release(ppuVar2);
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
        } while (ppuVar6 != ppuVar9);
        ppuVar5 = &puStack_130;
        ppuVar6 = param_3;
        func_0x00010bf52a60();
      } while (ppuVar6 != (undefined **)0x0);
      uStack_134 = uStack_134 & (uVar8 ^ 1);
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (undefined **)(ulong)uStack_134;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  ppuVar6 = ppuVar5;
  func_0x00010c0720c0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110f52d38);
  if (((((ulong)ppuVar6 & 1) == 0) &&
      (ppuVar6 = ppuVar5,
      func_0x00010c0720c0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110f52cd8),
      ((ulong)ppuVar6 & 1) == 0)) &&
     (ppuVar6 = ppuVar5,
     func_0x00010c0720c0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110f52d58),
     ((ulong)ppuVar6 & 1) == 0)) {
    ppuVar6 = ppuVar5;
    func_0x00010c0720c0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110f52db8);
  }
  else {
    ppuVar6 = (undefined **)0x1;
  }
  _objc_release(ppuVar5);
  return ppuVar6;
}



/* Entry: 105e138bc; end: 105e1393b; -[SCSendToWorkflow _isPublicOrMyStoryOrMapOrSharedStory:] */

ulong FUN_105e138bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52d38);
  if ((((uVar1 & 1) == 0) &&
      (uVar1 = param_3,
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52cd8),
      (uVar1 & 1) == 0)) &&
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52d58),
     (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f52db8);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105e1393c; end: 105e13b17; -[SCSendToWorkflow _didCompleteQueuedOffPlatformShare:] */

void FUN_105e1393c(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x2e8);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = *(undefined8 *)(param_1 + 0x1e0);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105e13b18;
  puStack_90 = &UNK_110841fb0;
  _objc_copyWeak(auStack_80,auStack_78);
  uStack_88 = uVar2;
  func_0x00010c0f7fc0(uVar4);
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x2f0);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x1d8);
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105e13b4c;
    puStack_c8 = &UNK_110848218;
    _objc_copyWeak(auStack_b0,auStack_78);
    uStack_c0 = uVar2;
    uStack_b8 = uVar3;
    func_0x00010c0f7fc0(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x1e0);
    _objc_copyWeak(auStack_e8,auStack_78);
    func_0x00010c0f7fc0(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c1fb980(*(undefined8 *)(param_1 + 0x140));
    *(undefined1 *)(param_1 + 0x408) = 0;
  }
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar2);
  return;
}



/* Entry: 105e13b18; end: 105e13bb3;  */

void FUN_105e13b18(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e13bb4; end: 105e13cfb; -[SCSendToWorkflow _didSendWithSelectedItems:additionalText:] */

void FUN_105e13bb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x180);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010be005a0(param_1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x140);
    uVar2 = *(undefined8 *)(param_1 + 0x180);
    func_0x00010bf002e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15aa20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x180);
    func_0x00010bf002e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105e13cfc;
    puStack_58 = &UNK_1108eb010;
    uStack_50 = uVar4;
    lStack_48 = param_1;
    _objc_retain(uVar4);
    uVar2 = uVar3;
    func_0x000100504554(uVar3,&puStack_70);
    _objc_release(uVar3);
    func_0x00010be005a0(param_1);
    _objc_release(uVar2);
    _objc_release(uStack_50);
    _objc_release(uVar4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e13cfc; end: 105e13d87;  */

void FUN_105e13cfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x180);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e13d88; end: 105e13def; -[SCSendToWorkflow _persistLastSnapSendFriendRequestAndLogGrapheneMetricsWithSelectedItems:] */

void FUN_105e13d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8860();
  _objc_release(uVar1);
  func_0x00010be9f1e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e13df0; end: 105e13e8f; -[SCSendToWorkflow _updateOffPlatformShareTimestampsWithSelectedItems:] */

void FUN_105e13df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x248);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e13e90;
  puStack_30 = &UNK_110847628;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfc69a0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105e13e90; end: 105e14083;  */

void FUN_105e13e90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
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
  puVar1 = PTR_PTR_1126c5080;
  func_0x00010bfbc0e0(PTR_PTR_1126c5080,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar8);
  puVar4 = &uStack_130;
  lVar2 = lVar8;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar8);
        }
        uVar10 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar5 = uVar10;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar6;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar9;
        func_0x00010c0720c0();
        _objc_release(uVar9);
        _objc_release(uVar6);
        _objc_release(uVar5);
        if ((int)uVar3 != 0) {
          func_0x00010c122a80(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar10;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar6;
          func_0x000108f94c24();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar10);
          func_0x000108f95f00(uVar9);
          func_0x00010c2850e0(puVar1);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      puVar4 = &uStack_130;
      lVar2 = lVar8;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x000100504554(puVar4,&PTR___NSConcreteGlobalBlock_1108eb040);
  uVar9 = *(undefined8 *)(puVar1 + 0x60);
  _objc_retain(uVar9);
  uVar5 = *(undefined8 *)(puVar1 + 0x50);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar1 + 0x1e0);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar9);
  _objc_retain(puVar4);
  func_0x00010c244e80(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(puVar4);
  _objc_release(uVar9);
  _objc_release(puVar4);
  return;
}



/* Entry: 105e14084; end: 105e1421f; -[SCSendToWorkflow _sendFriendRequestsIfNecessaryToSelected:] */

void FUN_105e14084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108eb040);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  _objc_retain(param_3);
  func_0x00010c244e80(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105e14220; end: 105e143d3;  */

void FUN_105e14220(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (param_3 == 0) {
    uVar1 = param_2;
    func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108eb060);
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    lVar3 = *(long *)(param_1 + 0x20);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105e14434;
    puStack_70 = &UNK_110856a28;
    puStack_68 = puVar2;
    func_0x0001006372a4(lVar3,&puStack_88);
    lVar4 = lVar3;
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      uVar1 = param_2;
      func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_1108eb080,
                          &PTR___NSConcreteGlobalBlock_1108eb0a0);
      puStack_b0 = puVar6;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_105e14484;
      puStack_98 = &UNK_11089b0f0;
      lVar4 = lVar3;
      uStack_90 = uVar1;
      func_0x000100504554(lVar3,&puStack_b0);
      lVar5 = lVar4;
      func_0x000100504554();
      puVar6 = PTR_PTR_1126ae5c0;
      func_0x00010c0d1b80(PTR_PTR_1126ae5c0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd2960();
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(uVar1);
    }
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e143d4; end: 105e14433;  */

void FUN_105e143d4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105e14434; end: 105e14453;  */

uint FUN_105e14434(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105e14454; end: 105e1445b;  */

void FUN_105e14454(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105e1445c; end: 105e14483;  */

void FUN_105e1445c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105e14484; end: 105e14577;  */

void FUN_105e14484(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126b15c8;
    if (lVar1 == 0) {
      _objc_retain(param_2);
      _objc_alloc(puVar2);
      func_0x00010c05c0e0();
      _objc_release(param_2);
    }
    else {
      puVar2 = *(undefined **)(param_1 + 0x20);
      func_0x00010c0e00e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e14578; end: 105e145d7;  */

void FUN_105e14578(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1940;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010901cb9c(param_2);
  func_0x00010c048c40(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e145d8; end: 105e15517; -[SCSendToWorkflow _didSendWithSelectedItems:additionalText:newlyCreatedCustomStories:] */

void FUN_105e145d8(long param_1,undefined *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  long lVar17;
  int iVar18;
  undefined *puVar19;
  uint uVar20;
  undefined1 uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uStack_308;
  uint uStack_2dc;
  long lStack_2b8;
  undefined1 auStack_238 [8];
  undefined1 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  lVar12 = param_3;
  func_0x00010bf52a60();
  if (lVar12 == 0) {
    _objc_release(param_3);
    uVar20 = 0;
    uStack_308 = 0;
  }
  else {
    uStack_308 = 0;
    uStack_2dc = 0;
    uVar20 = 0;
    lVar17 = *plStack_140;
    do {
      lVar23 = 0;
      do {
        if (*plStack_140 != lVar17) {
          _objc_enumerationMutation(param_3);
        }
        uVar22 = *(ulong *)(lStack_148 + lVar23 * 8);
        uVar4 = uVar22;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0720c0();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar4 = uVar22;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        if ((int)uVar7 == 0) {
          uVar6 = uVar5;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c0720c0();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          uVar4 = uVar22;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          if ((int)uVar7 == 0) {
            uVar5 = uVar4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c15ab60();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c0720c0();
            if ((int)uVar7 == 0) {
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(uVar4);
            }
            else {
              iVar18 = (int)*(undefined8 *)(param_1 + 0x1b8);
              func_0x000108f4837c();
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(uVar4);
              if (iVar18 != 0) {
                _objc_retain(uVar22);
                _objc_release(uStack_308);
                uStack_308 = uVar22;
                goto LAB_105e14a2c;
              }
            }
            uVar4 = uVar22;
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c122b80();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = *(undefined8 *)(param_1 + 0xa8);
            func_0x00010c269d40(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar9;
            func_0x00010c116a20();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c0720c0();
            _objc_release(uVar11);
            _objc_release(uVar9);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar4);
            func_0x00010befa120(puVar1);
            uStack_2dc = (uint)uVar7 | uStack_2dc;
          }
          else {
            uVar5 = uVar4;
            func_0x00010befcf80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            param_2 = PTR_PTR_1126c24d0;
            _objc_opt_class();
            uVar6 = uVar5;
            _objc_opt_isKindOfClass();
            uVar4 = uVar5;
            if ((uVar6 & 1) == 0) {
              uVar4 = 0;
            }
            _objc_retain(uVar4);
            _objc_release(uVar5);
            uVar5 = uVar4;
            func_0x00010c0faf60();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c08fa60();
            _objc_release(uVar5);
            if (uVar6 != 0) {
              puVar19 = PTR__OBJC_CLASS___CNPhoneNumber_1126b4ae0;
              _objc_alloc(PTR__OBJC_CLASS___CNPhoneNumber_1126b4ae0);
              uVar5 = uVar4;
              func_0x00010c0faf60(uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c04e8c0(puVar19);
              param_2 = (undefined *)0x1;
              puVar8 = puVar19;
              func_0x000108f92780();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar19);
              _objc_release(uVar5);
              func_0x00010befa120(puVar2);
              _objc_release(puVar8);
            }
            _objc_release(uVar4);
          }
        }
        else {
          uVar6 = uVar5;
          func_0x00010c122b80(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
        }
LAB_105e14a2c:
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar22;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar22);
        uVar20 = (uint)uVar6 | uVar20;
        lVar23 = lVar23 + 1;
      } while (lVar12 != lVar23);
      lVar12 = param_3;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
    _objc_release(param_3);
    if (uStack_308 != 0 && (uStack_2dc & 1) == 0) {
      func_0x00010befa120(puVar1);
    }
  }
  lVar23 = *(long *)(param_1 + 0x210);
  func_0x00010c08d820();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar17;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  _objc_release(lVar23);
  lVar17 = param_1;
  func_0x00010be742c0();
  _objc_retainAutoreleasedReturnValue();
  lStack_2b8 = lVar12;
  if (lVar17 != 0) {
    lVar23 = lVar17;
    func_0x00010c2683a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_2b8 = lVar23;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    lVar12 = lVar23;
    func_0x00010c27dd80();
    if (lVar12 == 4) {
      uVar9 = *(undefined8 *)(param_1 + 0x210);
      func_0x00010c08d980(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar23;
      func_0x00010c0fd0e0(lVar23);
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lStack_2b8;
      func_0x00010c15ffa0(lStack_2b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247be0(lStack_2b8);
      func_0x00010c0ac520(uVar11);
      _objc_release(lVar24);
      _objc_release(lVar12);
      _objc_release(uVar11);
      _objc_release(uVar9);
    }
    lVar12 = lVar17;
    func_0x00010bf12940();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar12;
    func_0x00010bf529e0();
    _objc_release(lVar12);
    lVar12 = 0;
    if (lVar24 != 0) {
      lVar10 = *(long *)(param_1 + 0x210);
      func_0x00010c08d280(lVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar17;
      func_0x00010bf12940(lVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x130);
      func_0x00010c23f6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c243400();
      uVar9 = *(undefined8 *)(param_1 + 0x130);
      func_0x00010bf5aac0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ac560(lVar12);
      _objc_release(uVar9);
      _objc_release(uVar11);
      _objc_release(lVar24);
      _objc_release(lVar12);
      _objc_release(lVar10);
    }
    _objc_release(lVar23);
  }
  lVar23 = *(long *)(param_1 + 0x1a8);
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar23 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010c24a0e0();
    _objc_release(uVar9);
    iVar18 = (int)uVar11;
    if ((iVar18 == 5) || (iVar18 == 2)) {
      lVar12 = *(long *)(param_1 + 0x1a8);
      func_0x00010c24a0a0(lVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar12;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar23 = 0;
    }
    _objc_retain(lVar23);
    if (((iVar18 == 5) || (iVar18 == 2)) && ((_objc_release(lVar23), iVar18 == 5 || (iVar18 == 2))))
    {
      _objc_release(lVar12);
    }
    puVar19 = PTR_PTR_1126c4ea0;
    _objc_alloc();
    uVar9 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c24a0a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ae60();
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(lVar23);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c14fd80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c272d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(param_1 + 0x1a8);
  func_0x00010c275800();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c4ea8;
  uVar13 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c22a7a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x280));
  func_0x00010c285e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  if ((uVar20 & lVar12 != 0) == 1) {
    lVar23 = *(long *)(param_1 + 0x378);
    if (lVar23 == 0) {
      iVar18 = (int)*(undefined8 *)(param_1 + 0x1a8);
      func_0x00010c22eae0();
      if (iVar18 == 0) {
        uVar21 = 0;
      }
      else {
        uVar21 = (undefined1)*(undefined8 *)(param_1 + 0x1a8);
        func_0x00010c06f860();
      }
      lVar23 = param_1;
      func_0x00010beb6660();
      if ((int)lVar23 != 0) {
        func_0x00010c22dfa0();
        uVar13 = *(undefined8 *)(param_1 + 0x270);
        func_0x00010c269d40(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28a2e0();
        _objc_release(uVar13);
      }
      lVar23 = param_1;
      func_0x00010beb5b20();
      if ((int)lVar23 != 0) {
        func_0x00010bede760(param_1);
      }
      _objc_initWeak(auStack_158,param_1);
      param_2 = auStack_158;
      _objc_copyWeak(auStack_238);
      _objc_retain(puVar1);
      _objc_retain(puVar2);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(lStack_2b8);
      uStack_230 = uVar21;
      _objc_retain(puVar8);
      _objc_retain(puVar19);
      _objc_retain(uVar11);
      _objc_retain(uVar9);
      _objc_retain(puVar3);
      uVar13 = *(undefined8 *)(param_1 + 0x1d8);
      func_0x00010c11de00(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfca060(lVar12);
      _objc_release(uVar13);
      _objc_release(puVar3);
      _objc_release(uVar9);
      _objc_release(uVar11);
      _objc_release(puVar19);
      _objc_release(puVar8);
      _objc_release(lStack_2b8);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_238);
      _objc_destroyWeak(auStack_158);
    }
    else {
      _objc_retain(lVar23);
      lVar24 = lVar23;
      func_0x00010c2759e0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar24;
      func_0x00010853fb20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar24);
      iVar18 = (int)*(undefined8 *)(param_1 + 0x1b8);
      func_0x000108faa2c4();
      if (iVar18 == 0) {
        lVar24 = 0;
      }
      else {
        lVar24 = *(long *)(param_1 + 0x380);
      }
      _objc_retain(lVar24);
      _objc_initWeak(auStack_158,param_1);
      puVar16 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1d0 = 0xc2000000;
      pcStack_1c8 = FUN_105e15518;
      puStack_1c0 = &UNK_1108eb0e0;
      param_2 = auStack_158;
      _objc_copyWeak(auStack_160);
      _objc_retain(puVar1);
      puStack_1b8 = puVar1;
      _objc_retain(puVar2);
      puStack_1b0 = puVar2;
      _objc_retain(param_4);
      uStack_1a8 = param_4;
      _objc_retain(param_5);
      uStack_1a0 = param_5;
      _objc_retain(lVar10);
      lStack_198 = lVar10;
      _objc_retain(lStack_2b8);
      lStack_190 = lStack_2b8;
      lStack_188 = lVar23;
      _objc_retain(puVar8);
      puStack_180 = puVar8;
      _objc_retain(puVar19);
      puStack_178 = puVar19;
      _objc_retain(uVar11);
      uStack_170 = uVar11;
      _objc_retain(puVar3);
      ppuVar14 = &puStack_1d8;
      puStack_168 = puVar3;
      _objc_retainBlock();
      if (lVar24 == 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x1d8);
        puStack_228 = puVar16;
        uStack_220 = 0xc2000000;
        uStack_218 = 0x105e156c8;
        puStack_210 = &UNK_110849530;
        _objc_retain(ppuVar14);
        ppuStack_208 = ppuVar14;
        func_0x00010c0f7fc0(uVar13);
        ppuVar15 = ppuStack_208;
      }
      else {
        puStack_200 = puVar16;
        uStack_1f8 = 0xc2000000;
        pcStack_1f0 = FUN_105e156bc;
        puStack_1e8 = &UNK_1108eb110;
        _objc_retain(ppuVar14);
        ppuStack_1e0 = ppuVar14;
        func_0x00010c297260(lVar24);
        ppuVar15 = ppuStack_1e0;
      }
      _objc_release(ppuVar15);
      uVar13 = *(undefined8 *)(param_1 + 0x378);
      *(undefined8 *)(param_1 + 0x378) = 0;
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)(param_1 + 0x380);
      *(undefined8 *)(param_1 + 0x380) = 0;
      _objc_release(uVar13);
      _objc_release(ppuVar14);
      _objc_release(puStack_168);
      _objc_release(uStack_170);
      _objc_release(puStack_178);
      _objc_release(puStack_180);
      _objc_release(lStack_190);
      _objc_release(lStack_198);
      _objc_release(uStack_1a0);
      _objc_release(uStack_1a8);
      _objc_release(puStack_1b0);
      _objc_release(puStack_1b8);
      _objc_destroyWeak(auStack_160);
      _objc_destroyWeak(auStack_158);
      _objc_release(lVar24);
      _objc_release(lVar10);
      _objc_release(lVar23);
    }
  }
  else {
    func_0x00010be005c0(param_1);
  }
  *(undefined1 *)(param_1 + 0x428) = 1;
  uVar13 = *(undefined8 *)(param_1 + 0x240);
  puVar16 = PTR_PTR_1126c4eb0;
  _objc_opt_new(PTR_PTR_1126c4eb0);
  func_0x00010c0d9840(uVar13);
  _objc_release(puVar16);
  _objc_release(puVar8);
  _objc_release(lVar12);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(puVar19);
  _objc_release(lVar17);
  _objc_release(lStack_2b8);
  _objc_release(uStack_308);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_158);
    __Unwind_Resume();
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_2);
    lVar12 = param_3 + 0x78;
    _objc_loadWeakRetained();
    uVar11 = *(undefined8 *)(param_3 + 0x50);
    func_0x00010bf6e620();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x50);
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22eae0();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c07c240(*(undefined8 *)(param_3 + 0x50));
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be005c0(lVar12);
    _objc_release(param_2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar9);
    _objc_release(uVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105e156c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar12 + 0x20) + 0x10))();
      return;
    }
    return;
  }
  return;
}



/* Entry: 105e15518; end: 105e156bb;  */

void FUN_105e15518(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf6e620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22eae0();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07c240(*(undefined8 *)(param_1 + 0x50));
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be005c0(lVar1);
  _objc_release(param_2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105e156c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e156bc; end: 105e156d7;  */

void FUN_105e156bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105e156c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105e156d8; end: 105e15773;  */

void FUN_105e156d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010be005c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e15774; end: 105e15a07; -[SCSendToWorkflow _didSendWithSelectedItems:selectedPhoneNumbers:additionalText:newlyCreatedCustomStories:selectedTopics:placeTagsMetadata:spotlightDescription:spotlightDescriptionMentions:shouldCreateHighlight:shareAnonymously:selectedSponsor:goLiveTimestamp:toggleValues:spotlightTile:externalDestinations:] */

void FUN_105e15774(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  
  puVar1 = PTR_PTR_1126c4eb8;
  _objc_retain();
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c043c00();
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010be99580(param_1);
  _objc_release(param_3);
  if (*(char *)(param_1 + 0x218) == '\x01') {
    puVar2 = (undefined *)(param_1 + 0x160);
    _objc_loadWeakRetained(puVar2);
    func_0x00010bf7b5e0();
  }
  else {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105e15a08;
    puStack_80 = &UNK_110841f80;
    lStack_78 = param_1;
    _objc_retain(puVar1);
    puStack_70 = puVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_98);
    puVar2 = puStack_70;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105e15a08; end: 105e15a3f;  */

void FUN_105e15a08(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x160;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf7b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e15a40; end: 105e15d0f; -[SCSendToWorkflow _setSelectedStateForGroupId:onNextNewSelectionGroups:nextRecentSelectionGroups:] */

ulong FUN_105e15a40(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010bf52a60(param_5,param_2,&uStack_1c0,auStack_f0,0x10);
  lVar7 = param_5;
  if (lVar2 != 0) {
    lVar8 = *plStack_1b0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1b0 != lVar8) {
          _objc_enumerationMutation(param_5);
        }
        lVar7 = *(long *)(lStack_1b8 + lVar9 * 8);
        lVar3 = lVar7;
        func_0x00010bfceb20(lVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c0720c0(param_3,param_2,lVar3);
        _objc_release(lVar3);
        if ((uVar4 & 1) != 0) {
          _objc_retain(lVar7);
          _objc_release(param_5);
          if (lVar7 == 0) goto LAB_105e15cbc;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          lStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          plStack_1f0 = (long *)0x0;
          _objc_retain(param_4);
          lVar2 = param_4;
          func_0x00010bf52a60(param_4,param_2,&uStack_200,auStack_170,0x10);
          if (lVar2 == 0) goto LAB_105e15c1c;
          lVar8 = *plStack_1f0;
          goto LAB_105e15ba4;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_5;
      func_0x00010bf52a60(param_5,param_2,&uStack_1c0,auStack_f0,0x10);
      lVar7 = param_5;
    } while (lVar2 != 0);
  }
  goto LAB_105e15cb4;
LAB_105e15ba4:
  do {
    lVar9 = 0;
    do {
      if (*plStack_1f0 != lVar8) {
        _objc_enumerationMutation(param_4);
      }
      uVar6 = *(undefined8 *)(lStack_1f8 + lVar9 * 8);
      func_0x00010bfceb20(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0720c0(param_3,param_2,uVar6);
      _objc_release(uVar6);
      if ((uVar4 & 1) != 0) {
        bVar1 = true;
        goto LAB_105e15c28;
      }
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_4;
    func_0x00010bf52a60(param_4,param_2,&uStack_200,auStack_170,0x10);
  } while (lVar2 != 0);
LAB_105e15c1c:
  bVar1 = false;
LAB_105e15c28:
  _objc_release(param_4);
  lVar8 = lVar7;
  func_0x000108ef7600();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x140);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_178 = lVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_178,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0x98;
  if (!bVar1) {
    lVar2 = 0x18;
  }
  func_0x00010c1fb980(uVar6,param_2,puVar5,1,*(undefined8 *)((long)&PTR_PTR_110acf8d0 + lVar2));
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  _objc_release(uVar6);
  _objc_release(lVar8);
LAB_105e15cb4:
  _objc_release(lVar7);
LAB_105e15cbc:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar6 = *(undefined8 *)(param_3 + 0x1b8);
    func_0x0001005929c0(uVar6);
    lVar7 = *(long *)(param_3 + 0x270);
    func_0x00010c269d40(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c24bde0();
    _objc_release(lVar7);
    return (ulong)((uint)(lVar2 == 0) & (uint)uVar6);
  }
  return param_3;
}



/* Entry: 105e15d10; end: 105e15d6b; -[SCSendToWorkflow _shouldShowSpotlightRepliesToggle] */

uint FUN_105e15d10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  func_0x0001005929c0(uVar1);
  lVar2 = *(long *)(param_1 + 0x270);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c24bde0();
  _objc_release(lVar2);
  return (uint)(lVar3 == 0) & (uint)uVar1;
}



/* Entry: 105e15d6c; end: 105e15e6f; -[SCSendToWorkflow _shouldPromptScheduleEligibilityWithSelectedItems:] */

bool FUN_105e15d6c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x1a8);
  func_0x00010c14fd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108eb170);
    lVar3 = lVar2;
    func_0x00010bf529e0();
    bVar1 = lVar3 != 0;
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105e15e70; end: 105e15f1f; -[SCSendToWorkflow _selectNewGroupWithGroupId:selectedItems:isExistingGroup:] */

void FUN_105e15e70(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c1fb980(*(undefined8 *)(param_1 + 0x140),param_2,param_4,0,
                      &PTR____CFConstantStringClassReference_110f12c58);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bea7360(param_1,param_2,param_3);
  }
  if ((param_5 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x430),param_2,param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x1a8);
    puVar2 = PTR_PTR_1126b50d0;
    func_0x00010bf5a5e0(PTR_PTR_1126b50d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8de60(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e15f20; end: 105e1602b; -[SCSendToWorkflow _signedInUserMemberRoleProfile] */

void FUN_105e15f20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126c5088;
  _objc_alloc(PTR_PTR_1126c5088);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c06f860(uVar8);
  func_0x00010c00d580(puVar1,param_2,uVar4,uVar7,1,0,uVar8,1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e1602c; end: 105e16067; -[SCSendToWorkflow didFetchMemberRolesForSpotlightPosting:] */

void FUN_105e1602c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf780c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e16068; end: 105e160af; -[SCSendToWorkflow webBrowserDidDismiss:] */

void FUN_105e16068(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x228);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x228));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105e160b0; end: 105e16677; -[SCSendToWorkflow didDismissAccountSelectorWithViewModel:] */

void FUN_105e160b0(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 **ppuVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_105e16678;
    uStack_88 = 0x105e16688;
    uStack_80 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_105e16678;
    uStack_b8 = 0x105e16688;
    uStack_b0 = 0;
    puStack_100 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x3032000000;
    pcStack_f0 = FUN_105e16678;
    uStack_e8 = 0x105e16688;
    uStack_e0 = 0;
    puStack_130 = &uStack_138;
    uStack_138 = 0;
    uStack_128 = 0x3032000000;
    pcStack_120 = FUN_105e16678;
    uStack_118 = 0x105e16688;
    uStack_110 = 0;
    puStack_150 = &uStack_158;
    uStack_158 = 0;
    uStack_148 = 0x2020000000;
    uStack_140 = 0;
    puStack_170 = &uStack_178;
    uStack_178 = 0;
    uStack_168 = 0x2020000000;
    uStack_160 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x158);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7ac20();
    _objc_release(uVar2);
    puStack_190 = &uStack_198;
    uStack_198 = 0;
    uStack_188 = 0x2020000000;
    uStack_180 = 1;
    func_0x00010c0bed20(param_3);
    puVar12 = PTR_PTR_1126c5088;
    _objc_alloc();
    func_0x00010c00d580();
    uVar2 = *(undefined8 *)(param_1 + 1000);
    *(undefined **)(param_1 + 1000) = puVar12;
    _objc_release(uVar2);
    uVar2 = puStack_130[5];
    func_0x00010beec820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + 1000));
    _objc_release(uVar2);
    func_0x00010c1e4140(*(undefined8 *)(param_1 + 1000));
    func_0x00010c177ce0(*(undefined8 *)(param_1 + 0x1a8));
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167240();
    _objc_release(uVar2);
    uVar3 = *(ulong *)(param_1 + 0x1b8);
    func_0x000108f48934();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c12e780();
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((uVar4 & 1) == 0) {
      func_0x000108f5848c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x00010c14de00(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    else {
      puVar12 = (undefined *)0x0;
    }
    lVar5 = puStack_d0[5];
    func_0x00010c08fa60();
    ppuVar1 = &puStack_100;
    if (lVar5 != 0) {
      ppuVar1 = &puStack_d0;
    }
    uVar13 = (*ppuVar1)[5];
    _objc_retain(uVar13);
    uVar2 = *(undefined8 *)(param_1 + 0x398);
    *(undefined8 *)(param_1 + 0x398) = uVar13;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126b3558;
    _objc_alloc(PTR_PTR_1126b3558);
    func_0x00010c03d4e0();
    lVar7 = *(long *)(param_1 + 0x1b8);
    func_0x000108f48934();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c08fa60();
    if (lVar8 == 0) {
      func_0x000108f5833c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar8 = lVar7;
      func_0x00010c2711a0(lVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar5);
    puVar9 = PTR_PTR_1126b3560;
    _objc_alloc(PTR_PTR_1126b3560);
    func_0x00010c01bce0();
    puVar10 = PTR_PTR_1126b3568;
    _objc_alloc(PTR_PTR_1126b3568);
    func_0x00010c03d400();
    uVar4 = param_1;
    func_0x00010bdd4ea0();
    if ((uVar4 & 1) == 0) {
      puVar11 = PTR_PTR_1126b5650;
      _objc_alloc(PTR_PTR_1126b5650);
      func_0x00010c043e20();
      func_0x00010bf7b1c0(param_1);
      *(undefined1 *)(param_1 + 0x3f9) = 0;
      _objc_release(puVar11);
    }
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(puVar6);
    _objc_release(puVar12);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_198,8);
    __Block_object_dispose(&uStack_178,8);
    __Block_object_dispose(&uStack_158,8);
    __Block_object_dispose(&uStack_138,8);
    _objc_release(uStack_110);
    __Block_object_dispose(&uStack_108,8);
    _objc_release(uStack_e0);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e16678; end: 105e1668f;  */

void FUN_105e16678(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105e16690; end: 105e167c3;  */

void FUN_105e16690(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x280);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x280) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = param_6;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = param_7;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = param_8;
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e167c4; end: 105e168af;  */

void FUN_105e167c4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  return;
}



/* Entry: 105e168b0; end: 105e169bf;  */

void FUN_105e168b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x280);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x280) = 0;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar1 = (undefined1)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1a8);
  func_0x00010c06f860();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar1;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = 0;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = 1;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e169c0; end: 105e16a07; -[SCSendToWorkflow _setCreatePostStateForEditButton] */

void FUN_105e169c0(long param_1)

{
  func_0x00010bdf1be0();
  func_0x00010c1fb940(*(undefined8 *)(param_1 + 0x140));
  func_0x00010be3a580(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea31b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setCreatePostUpdateSelectedCont_112586610);
  return;
}



/* Entry: 105e16a08; end: 105e16b07; -[SCSendToWorkflow _immediatelyLoadThumbnailIfElligible] */

void FUN_105e16a08(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x130);
  func_0x00010c071620();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf8fcc0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      puVar4 = auStack_38;
      _objc_initWeak(puVar4,param_1);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c0f7fc0(puVar4);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 105e16b08; end: 105e16b33;  */

void FUN_105e16b08(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3a580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e16b34; end: 105e16ceb; -[SCSendToWorkflow _initSpotlightPosterImage] */

void FUN_105e16b34(double param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_68 [8];
  double dStack_60;
  undefined1 auStack_58 [8];
  
  iVar1 = (int)*(undefined8 *)(param_2 + 0x130);
  func_0x00010c071620();
  if (iVar1 != 0) {
    _CACurrentMediaTime();
    puVar2 = *(undefined **)(param_2 + 0x118);
    dVar7 = param_1;
    func_0x00010bf4c1a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    lVar5 = *(long *)(param_2 + 0x410);
    _CACurrentMediaTime();
    if (lVar5 != 0) {
      FUN_105e19f40(lVar5,(long)((dVar7 - param_1) * 1000.0));
    }
    puVar3 = puVar4;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar2 = puVar3;
    }
    _objc_release(puVar3);
    uVar6 = *(undefined8 *)(param_2 + 0x410);
    _objc_retain(uVar6);
    _objc_initWeak(auStack_58,param_2);
    dStack_60 = param_1;
    _objc_copyWeak(auStack_68,auStack_58);
    func_0x00010c297260(puVar2);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 105e16cec; end: 105e16e27;  */

void FUN_105e16cec(double param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  param_1 = param_1 - *(double *)(param_2 + 0x30);
  if (param_3 == 0) {
    uVar1 = param_4;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf3ec40(param_4);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar1);
    FUN_105e1a12c(param_1,*(undefined8 *)(param_2 + 0x20),puVar3);
  }
  else {
    FUN_105e1a12c(param_1,*(undefined8 *)(param_2 + 0x20),0);
    puVar3 = (undefined *)(param_2 + 0x28);
    _objc_loadWeakRetained();
    if (puVar3 != (undefined *)0x0) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(puVar3 + 0x3b0);
      *(long *)(puVar3 + 0x3b0) = param_3;
      _objc_release(uVar1);
      func_0x00010bee0820(puVar3);
    }
  }
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e16e28; end: 105e170df; -[SCSendToWorkflow _setCreatePostUpdateSelectedContentsInSpotlightSection] */

void FUN_105e16e28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    puVar1 = PTR_PTR_1126b52a8;
    _objc_alloc_init(PTR_PTR_1126b52a8);
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c07de40(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x1c0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010c067fc0();
    uVar4 = *(undefined8 *)(param_1 + 0x1b8);
    func_0x000108f48818(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c073920();
    puVar7 = puVar1;
    func_0x00010bfc02e0(puVar1,param_2,uVar2,uVar13,uVar4,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar1);
    puVar8 = puVar7;
    func_0x00010c26b700(puVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_1 + 0x378);
    func_0x00010bf6e620();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c08fa60();
    _objc_release(lVar9);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar14 = puVar7;
    if (*(char *)(param_1 + 0x3f8) == '\x01') {
      FUN_105e19eb4();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(param_1 + 1000);
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c08fa60();
      uVar13 = *(undefined8 *)(param_1 + 1000);
      if (lVar12 == 0) {
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c14de00(puVar1,param_2,lVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(uVar13);
      _objc_release(lVar11);
      _objc_release(lVar9);
      puVar14 = PTR_PTR_1126b5218;
      _objc_alloc(PTR_PTR_1126b5218);
      puVar8 = puVar7;
      func_0x00010c072240(puVar7);
      func_0x00010c0513c0(puVar14,param_2,puVar1,0,0,puVar8);
      _objc_release(puVar7);
      puVar8 = puVar1;
    }
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar7 = puVar14;
    if (lVar10 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x378);
      func_0x00010bf6e620();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e2b998);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(uVar13);
      puVar7 = PTR_PTR_1126b5218;
      _objc_alloc(PTR_PTR_1126b5218);
      puVar8 = puVar14;
      func_0x00010c072240(puVar14);
      func_0x00010c0513c0(puVar7,param_2,puVar1,0,0,puVar8);
      _objc_release(puVar14);
      puVar8 = puVar1;
    }
    func_0x00010bea3180(param_1,param_2,puVar7,lVar10 != 0,1);
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return;
  }
  return;
}



/* Entry: 105e170e0; end: 105e172ef; -[SCSendToWorkflow _updateSpotlightSectionOnPosterImageReady] */

void FUN_105e170e0(ulong param_1,undefined8 param_2,undefined *param_3,ulong param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x130) == 0) goto LAB_105e172bc;
  lVar1 = *(long *)(param_1 + 0x368);
  if (lVar1 == 0) {
LAB_105e17208:
    uVar4 = *(ulong *)(param_1 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c073920();
    if ((uVar3 & 1) == 0) {
      func_0x000108f5836c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f583e4();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar4);
    puVar7 = PTR_PTR_1126b5218;
    _objc_alloc();
    func_0x00010c0513c0();
    lVar9 = *(long *)(param_1 + 0x378);
    func_0x00010bf6e620();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar9;
    func_0x00010c08fa60();
    param_4 = (ulong)(lVar1 != 0);
    _objc_release(lVar9);
    param_5 = 0;
    param_3 = puVar7;
    func_0x00010bea3180(param_1,param_2,puVar7,param_4,0);
    _objc_release(puVar7);
    param_1 = uVar3;
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x140);
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 1;
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15aa20(uVar8,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar9);
    _objc_release(lVar1);
    puVar2 = *(undefined **)(param_1 + 0x368);
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    param_3 = puVar7;
    func_0x00010c0e00e0(uVar8,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    _objc_release(puVar7);
    _objc_release(puVar2);
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar8);
      goto LAB_105e17208;
    }
    func_0x00010bea31a0(param_1);
    param_1 = uVar8;
  }
  _objc_release();
LAB_105e172bc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = *(undefined **)(param_1 + 0x3b0);
  _objc_retain(puVar7);
  lVar9 = *(long *)(param_1 + 0x378);
  _objc_retain(param_3);
  func_0x00010bf8c580();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010c130480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar1;
  func_0x00010c08fa60();
  if (lVar9 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      _objc_retain(puVar2);
      _objc_release(puVar7);
      puVar7 = puVar2;
    }
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b5220;
  _objc_alloc(PTR_PTR_1126b5220);
  func_0x00010c01f440();
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x210);
  func_0x00010c08d820(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be76a40(param_1,param_2,uVar6,param_4,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x288);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fba60();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105e172f0; end: 105e174b3; -[SCSendToWorkflow _setCreatePostUpdateInSpotlightSectionWithInstructionText:hasSpotlightDescriptionText:showAddSoundError:] */

void FUN_105e172f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar5 = *(undefined **)(param_1 + 0x3b0);
  _objc_retain(puVar5);
  lVar6 = *(long *)(param_1 + 0x378);
  _objc_retain(param_3);
  func_0x00010bf8c580();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c130480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar1;
  func_0x00010c08fa60();
  if (lVar6 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      _objc_retain(puVar2);
      _objc_release(puVar5);
      puVar5 = puVar2;
    }
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b5220;
  _objc_alloc(PTR_PTR_1126b5220);
  func_0x00010c01f440();
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x210);
  func_0x00010c08d820(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be76a40(param_1,param_2,uVar4,param_4,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x288);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fba60();
  _objc_release(uVar4);
  _objc_release(lVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105e174b4; end: 105e17693; -[SCSendToWorkflow _postingHintObservableWithPlaceTagsTracker:hasSpotlightDescriptionText:instructionText:showAddSoundError:] */

void FUN_105e174b4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined1 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 0) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x1b8);
    func_0x000108f48664();
    _objc_initWeak(auStack_80,param_1);
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfed660();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_80);
    uVar4 = uVar3;
    uStack_88 = uVar1;
    uStack_87 = param_6;
    func_0x00010c0b8600(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_90);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
  }
  else {
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfed660();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105e17694;
    puStack_60 = &UNK_1108eb220;
    _objc_retain(param_5);
    uVar4 = uVar3;
    uStack_58 = param_5;
    func_0x00010c0b8600(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_58);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e17694; end: 105e17797;  */

void FUN_105e17694(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_2 == 0) {
    puVar5 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126b5218;
    _objc_alloc(PTR_PTR_1126b5218);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26b700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0e540(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0513c0(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105e17798; end: 105e1798b;  */

void FUN_105e17798(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_2;
  if (puVar1 != (undefined *)0x0) {
    _objc_retain(param_2);
    goto LAB_105e17960;
  }
  puVar2 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar2 == (undefined *)0x0) {
LAB_105e17934:
    _objc_retain(param_2);
  }
  else {
    if (((*(char *)(param_1 + 0x28) == '\x01') && (*(char *)(param_1 + 0x29) == '\x01')) &&
       (puVar3 = puVar2, func_0x00010beb5ac0(), (int)puVar3 != 0)) {
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c23bba0(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x000108f583fc();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b5218;
      _objc_alloc(PTR_PTR_1126b5218);
      func_0x00010c0513c0();
      puVar8 = PTR_PTR_1126ae750;
      func_0x00010c0ec800(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    else {
      lVar9 = *(long *)(puVar2 + 0x388);
      if (lVar9 == 0) goto LAB_105e17934;
      _objc_retain(lVar9);
      lVar6 = lVar9;
      func_0x00010c278a00(lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar9;
      func_0x00010bf0a460(lVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      puVar3 = puVar2;
      func_0x00010be618a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      if (puVar3 == (undefined *)0x0) {
        _objc_retain(param_2);
      }
      else {
        puVar8 = PTR_PTR_1126ae750;
        func_0x00010c0ec800(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_105e17960:
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105e1798c; end: 105e17b7b; -[SCSendToWorkflow _blockPostingIfNeededWithSelectedUsername:nameToDisplay:] */

ulong FUN_105e1798c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126b3558;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c03d4e0();
  puVar2 = PTR_PTR_1126b3560;
  _objc_alloc();
  func_0x00010c01bce0();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b3568;
  _objc_alloc();
  func_0x00010c03d400();
  puVar4 = PTR_PTR_1126b5650;
  _objc_alloc();
  func_0x00010c043e20();
  puVar5 = PTR_PTR_1126b5658;
  _objc_alloc(PTR_PTR_1126b5658);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043e40(puVar5,param_2,puVar6);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  uVar7 = *(ulong *)(param_1 + 0x3a0);
  func_0x00010bfd0140(uVar7,param_2,param_1,puVar6,0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar7;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(puVar1 + 0x130);
  if (lVar8 == 0) {
    lVar8 = *(long *)(puVar1 + 0x118);
    func_0x00010c0d3a40(lVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = (ulong)(lVar8 == 0);
    _objc_release();
  }
  else {
    lVar11 = *(long *)(puVar1 + 0x388);
    func_0x00010c075080();
    uVar9 = *(undefined8 *)(puVar1 + 0x130);
    func_0x00010c06c980(uVar9);
    uVar10 = *(undefined8 *)(puVar1 + 0x130);
    func_0x00010c06c8e0(uVar10);
    if (lVar11 == 0) {
      uVar7 = (ulong)((uint)lVar8 | (uint)uVar9 & (uint)uVar10 ^ 1);
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7;
}



/* Entry: 105e17b7c; end: 105e17c03; -[SCSendToWorkflow _shouldShowAddSoundError] */

uint FUN_105e17b7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x130);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x118);
    func_0x00010c0d3a40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = (uint)(lVar1 == 0);
    _objc_release();
  }
  else {
    lVar5 = *(long *)(param_1 + 0x388);
    func_0x00010c075080();
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c06c980(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c06c8e0(uVar3);
    if (lVar5 == 0) {
      uVar4 = (uint)lVar1 | (uint)uVar2 & (uint)uVar3 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* Entry: 105e17c04; end: 105e17cef; -[SCSendToWorkflow _createStoriesExpandedRowsObservable] */

void FUN_105e17c04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x210);
  func_0x00010c08d820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010bf6d420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c239200(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010bf41860(uVar4,param_2,uVar3,&PTR___NSConcreteGlobalBlock_1108eb280);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e17cf0; end: 105e17d1f;  */

void FUN_105e17cf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067ec0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,param_2);
  return;
}



/* Entry: 105e17d20; end: 105e17d27; -[SCSendToWorkflow _shouldShowAllowSpotlightRemixingToggle] */

undefined8 FUN_105e17d20(void)

{
  return 1;
}



/* Entry: 105e17d28; end: 105e17daf; -[SCSendToWorkflow _shouldEnableAllowSpotlightRemixingToggle] */

undefined8 FUN_105e17d28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x278);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  FUN_105e19d54(uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105e17db0; end: 105e17e2f; -[SCSendToWorkflow _updateRemixToggleFeatureSetting] */

void FUN_105e17db0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x278);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105e19dec(uVar2,uVar3,*(undefined8 *)(param_1 + 0x1a8));
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e17e30; end: 105e17ebb; -[SCSendToWorkflow _isStandardUserOver18] */

bool FUN_105e17e30(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x278);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010befe800(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  return 0x11 < lVar1;
}



/* Entry: 105e17ebc; end: 105e17f33; -[SCSendToWorkflow _isUser16or17] */

undefined8 FUN_105e17ebc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0824a0();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdac40();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105e17f34; end: 105e17f6b; -[SCSendToWorkflow _getSaveToProfileDefaultToggleValue] */

undefined8 FUN_105e17f34(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be45020();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x1a8);
                    /* WARNING: Could not recover jumptable at 0x00010c06f870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_isCreateHighlightEnabled_1125f9828);
  return uVar2;
}



/* Entry: 105e17f6c; end: 105e18047; -[SCSendToWorkflow _createSendToTracker] */

void FUN_105e17f6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c5090;
  _objc_alloc();
  func_0x00010c043fc0();
  uVar3 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined **)(param_1 + 0x1a8) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010beb6660(param_1);
  func_0x00010c201340(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar2);
  lVar2 = param_1;
  func_0x00010beb5b20(param_1);
  func_0x00010c201020(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar2);
  lVar2 = param_1;
  func_0x00010beb3660(param_1);
  func_0x00010c1fff20(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar2);
  func_0x00010c1e9f00(*(undefined8 *)(param_1 + 0x1a8),param_2,*(undefined8 *)(param_1 + 0x2b8));
  func_0x00010c1994e0(*(undefined8 *)(param_1 + 0x1a8),param_2,param_1);
  lVar2 = param_1;
  func_0x00010be22460(param_1);
  func_0x00010c200360(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar2);
  puVar1 = PTR_PTR_1126c4ea8;
  func_0x00010c0cc8a0(PTR_PTR_1126c4ea8,param_2,*(undefined8 *)(param_1 + 0xa8),
                      *(undefined8 *)(param_1 + 0x1f8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1feac0(*(undefined8 *)(param_1 + 0x1a8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


