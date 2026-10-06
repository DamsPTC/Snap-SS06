/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d42914; end: 105d42a43; -[SCPreviewFeatureCTLensMagicEraserImpl _ctLensBottomComponentDidTapDone:] */

void FUN_105d42914(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  puVar1 = PTR_PTR_1126c4320;
  _objc_alloc();
  func_0x00010c0246c0();
  uVar2 = *(undefined8 *)(param_1 + 200);
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f02a18;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb4a0(uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar2);
  func_0x00010be0c260(param_1);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_c0;
  pcStack_68 = FUN_105d42a44;
  puVar4[0xa8] = 1;
  uVar5 = *(undefined8 *)(puVar4 + 0xe0);
  uStack_90 = uVar2;
  puStack_88 = puVar3;
  puStack_80 = puVar1;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c4318;
  _objc_alloc(PTR_PTR_1126c4318);
  func_0x00010bff3d60();
  func_0x00010bf5cea0(uVar5);
  _objc_release(puVar1);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(puVar4 + 0x40);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7a80();
  _objc_release(uVar5);
  _objc_initWeak(auStack_98,puVar4);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105d42bbc;
  puStack_a8 = &UNK_110856cc0;
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retainBlock(&puStack_c0);
  uVar7 = *(undefined8 *)(puVar4 + 0x50);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bfbf520(0x7ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010c297260(uVar5);
  _objc_release(uVar5);
  _objc_release(ppuVar6);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  return;
}



/* Entry: 105d42a44; end: 105d42bbb; -[SCPreviewFeatureCTLensMagicEraserImpl _exitWithBurnInLensEffect] */

void FUN_105d42a44(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar3 = &puStack_60;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4318;
  _objc_alloc(PTR_PTR_1126c4318);
  func_0x00010bff3d60();
  func_0x00010bf5cea0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7a80();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105d42bbc;
  puStack_48 = &UNK_110856cc0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfbf520(0x7ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105d42bbc; end: 105d42c9f;  */

void FUN_105d42bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d42ca0;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_3);
  uStack_48 = param_3;
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105d42ca0; end: 105d42cef;  */

void FUN_105d42ca0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010bedd3a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    }
    else {
      func_0x00010bddf360(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d42cf0; end: 105d42db3; -[SCPreviewFeatureCTLensMagicEraserImpl _updatePlaybackImage:] */

void FUN_105d42cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bedd3c0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105d42db4; end: 105d42e53;  */

void FUN_105d42db4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bea53e0(param_1,param_2,0);
    func_0x00010be0c060(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128740();
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c08f640(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d140();
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d42e54; end: 105d42f47; -[SCPreviewFeatureCTLensMagicEraserImpl _updatePlaybackImage:withCompletion:] */

void FUN_105d42e54(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  if (param_5 == 0) {
    pcVar2 = *(code **)(param_6 + 0x10);
    _objc_retain(param_6);
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 0xb0);
    _objc_retain(param_6);
    func_0x00010c23d0a0(uVar3);
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0xb0));
    if (param_1 <= param_2) {
      lVar1 = *(long *)(param_3 + 0x40);
      func_0x00010c269d40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
    }
    else {
      lVar1 = param_3;
      func_0x00010bdf6240(param_3,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + 0x40);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(uVar3);
    }
    _objc_release(lVar1);
    pcVar2 = *(code **)(param_6 + 0x10);
  }
  (*pcVar2)(param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105d42f48; end: 105d42ff3; -[SCPreviewFeatureCTLensMagicEraserImpl _cropTranscodedImage:] */

void FUN_105d42f48(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0xb0);
  _objc_retain(param_5);
  func_0x00010c23d0a0(uVar1);
  dVar2 = param_2;
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0xb0));
  param_2 = param_2 / param_1;
  func_0x00010c23d0a0(param_5);
  param_1 = param_1 * param_2;
  func_0x00010c23d0a0(param_5);
  dVar2 = dVar2 - param_1;
  dVar3 = dVar2 * 0.5;
  func_0x00010c23d0a0(param_5);
  uVar1 = param_5;
  func_0x00010bf5c7a0(0,dVar3,dVar2,param_1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d42ff4; end: 105d435df; -[SCPreviewFeatureCTLensMagicEraserImpl _enterEditingMode] */

void FUN_105d42ff4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  *(undefined1 *)(param_1 + 0x78) = 1;
  func_0x00010bea3be0(0);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf926c0();
  _objc_release(uVar1);
  if ((int)uVar5 == 0) {
    lVar6 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar9 = lVar6;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xd8);
    *(long *)(param_1 + 0xd8) = lVar9;
    _objc_release(uVar5);
    _objc_release(lVar6);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bfe6060();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c186260();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126affe8;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c240640(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf60f00();
    func_0x00010c09e180(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar2;
    func_0x000107ffcb24(uVar2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = uVar16;
    _objc_release(uVar15);
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bfe6060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c240000(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x38);
    func_0x00010c240640(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf5ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107ffcd08(uVar5,lVar8,uVar1);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar9);
  }
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  func_0x00010bed64c0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  _objc_release(uVar16);
  _objc_release(uVar1);
  _objc_initWeak(auStack_78,param_1);
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar6);
  lVar9 = lVar6;
  func_0x00010bfbbbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_80;
  _objc_copyWeak(puVar10,auStack_78);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar9);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe3c80();
  _objc_release(uVar5);
  func_0x00010bea53e0(param_1);
  lVar6 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar9 = lVar6;
  func_0x00010c183960();
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar6);
  func_0x00010c0f7fe0(0x4014000000000000,lVar9);
  _objc_release(lVar9);
  lVar9 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar7 = lVar9;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 != 0) {
    lVar11 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c084c40();
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar9);
    if (lVar14 == 0x15) goto LAB_105d434b4;
    lVar9 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar9);
    lVar7 = lVar9;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb220(lVar7);
    _objc_release(puVar4);
  }
  _objc_release(lVar7);
  _objc_release(lVar9);
LAB_105d434b4:
  lVar9 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar7 = lVar9;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar7);
  _objc_release(lVar9);
  if (lVar8 == 0) {
    lVar9 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar9);
    lVar7 = lVar9;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb220(lVar7);
    _objc_release(puVar4);
    _objc_release(lVar7);
    _objc_release(lVar9);
    func_0x00010bed43a0(param_1);
    func_0x00010c292100(*(undefined8 *)(param_1 + 0xb8));
  }
  _objc_release(lVar6);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 105d435e0; end: 105d4364f;  */

void FUN_105d435e0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d43650; end: 105d43663;  */

void FUN_105d43650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c183970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setContinuousRenderingEnabled_co_11263e878,0,
             &PTR____CFConstantStringClassReference_110e292d8);
  return;
}



/* Entry: 105d43664; end: 105d4386f; -[SCPreviewFeatureCTLensMagicEraserImpl _exitEditingMode] */

void FUN_105d43664(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *(undefined1 *)(param_1 + 0x78) = 0;
  lVar7 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = lVar7;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c084c40();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  if (lVar3 == 0x15) {
    lVar7 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar7);
    lVar1 = lVar7;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb220(lVar1);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(lVar7);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13c620();
    _objc_release(uVar5);
    func_0x00010bea3be0(0x3ff0000000000000,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf926c0();
    _objc_release(uVar6);
    if ((int)uVar5 == 0) {
      lVar7 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c186260();
    }
    else {
      lVar7 = *(long *)(param_1 + 0x38);
      func_0x00010c240000(lVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c240640(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bf5ffa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107ffcd08(lVar7,uVar9,*(undefined8 *)(param_1 + 0xd8));
      _objc_release(uVar9);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar8);
    }
    _objc_release(lVar7);
    func_0x00010bed64c0(param_1);
    func_0x00010bed43a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c292070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xb8),PTR_s_userExitedInteractionState_exitT_112682240,0xc,
               *(undefined8 *)(param_1 + 0xc0));
    return;
  }
  return;
}



/* Entry: 105d43870; end: 105d439ff; -[SCPreviewFeatureCTLensMagicEraserImpl _setLensActive:] */

void FUN_105d43870(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(byte *)(param_1 + 0x60) != param_3) {
    *(char *)(param_1 + 0x60) = (char)param_3;
    if (param_3 == 0) {
      func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x70));
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      _objc_release(uVar3);
      if (*(long *)(param_1 + 0x68) != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12b1c0();
        _objc_release(uVar3);
        func_0x00010c27f1c0(*(undefined8 *)(param_1 + 0x18));
        uVar3 = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar3);
        return;
      }
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      puVar1 = PTR_PTR_1126c3c78;
      _objc_alloc(PTR_PTR_1126c3c78);
      func_0x00010c0258c0();
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010bf08a00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = uVar3;
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_50);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_48);
    }
  }
  return;
}



/* Entry: 105d43a00; end: 105d43a77;  */

void FUN_105d43a00(long param_1,ulong param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_2 & 1) == 0) {
      func_0x00010bddf360(param_1);
    }
    else {
      func_0x00010be2b340(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d43a78; end: 105d43ab3; -[SCPreviewFeatureCTLensMagicEraserImpl _handleLensAppliedWithId:] */

void FUN_105d43a78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d43ab4; end: 105d43cc7; -[SCPreviewFeatureCTLensMagicEraserImpl _cleanUpWithError:] */

void FUN_105d43ab4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105d43cc8;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  puVar1 = PTR_PTR_1126aed70;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c4e0(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c240640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c27ed00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0cfd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bf0c980(uVar7);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010be0c060(param_3);
    func_0x00010bea53e0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d43cc8; end: 105d43d07;  */

void FUN_105d43cc8(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be0c060(param_1);
    func_0x00010bea53e0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d43d08; end: 105d43d17;  */

void FUN_105d43d08(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105d43d18; end: 105d43fcf; -[SCPreviewFeatureCTLensMagicEraserImpl _setupBottomComponent] */

void FUN_105d43d18(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined *param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_5;
  if (*(long *)(param_5 + 0x80) == 0) {
    puVar6 = param_5 + 0x20;
    _objc_loadWeakRetained();
    puVar7 = puVar6;
    func_0x00010bfb4520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    puVar6 = param_5 + 0x20;
    _objc_loadWeakRetained(puVar6);
    if (puVar7 == (undefined *)0x0) {
      func_0x00010bf20c00();
      puVar7 = param_5 + 0x20;
      _objc_loadWeakRetained(puVar7);
      puVar2 = puVar7;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMaxY();
      param_1 = param_4 - param_1;
      _objc_release(puVar2);
      _objc_release(puVar7);
      _objc_release(puVar6);
      param_4 = 72.0;
      if (72.0 <= param_1) {
        param_4 = param_1;
      }
      puVar7 = param_5 + 0x20;
      _objc_loadWeakRetained(puVar7);
      puVar6 = puVar7;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      param_1 = 0.0;
      _objc_release(puVar6);
      puVar6 = (undefined *)0x0;
      param_2 = 0;
    }
    else {
      puVar7 = puVar6;
      func_0x00010bfb4520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puVar7 = param_5 + 0x20;
      _objc_loadWeakRetained(puVar7);
      puVar2 = puVar7;
      func_0x00010bfb42e0();
      func_0x00010c23ba80(puVar6,param_6,puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c4358;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    uVar5 = *(undefined8 *)(param_5 + 0x80);
    *(undefined **)(param_5 + 0x80) = puVar7;
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)(param_5 + 0x80),param_6,param_5);
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x80),param_6,puVar6);
    uVar5 = *(undefined8 *)(param_5 + 0x80);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_5 + 0x80);
    puVar7 = PTR_PTR_1126c4350;
    _objc_alloc();
    func_0x00010c055900();
    puVar2 = PTR_PTR_1126c4350;
    puStack_78 = puVar7;
    _objc_alloc();
    func_0x00010c055900();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c580(uVar5,param_6,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    func_0x00010bed43a0(param_5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar6 + 0x80) == 0) {
    return;
  }
  if (puVar6[0x78] == '\x01') {
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar6 + 0x88);
    *(undefined **)(puVar6 + 0x88) = puVar7;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(puVar6 + 0x88);
    puVar7 = puVar6 + 0x20;
    _objc_loadWeakRetained(puVar7);
    puVar2 = puVar7;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar5,param_6,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar6 + 0x20;
    _objc_loadWeakRetained(puVar7);
    puVar2 = puVar7;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar6 + 0x20;
    _objc_loadWeakRetained(puVar7);
    puVar2 = puVar7;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar6 + 0x20;
    _objc_loadWeakRetained(puVar7);
    puVar2 = puVar7;
    func_0x00010c0da200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar6 + 0x20;
    _objc_loadWeakRetained(puVar7);
    puVar2 = puVar7;
    func_0x00010c15b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar6 + 0x20;
    _objc_loadWeakRetained(puVar7);
    puVar2 = puVar7;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar6 + 0x20;
    _objc_loadWeakRetained(puVar7);
    puVar2 = puVar7;
    func_0x00010c14a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar2);
    _objc_release(puVar7);
    goto LAB_105d44344;
  }
  lVar4 = *(long *)(puVar6 + 0x88);
  func_0x00010bf529e0();
  puVar7 = puVar6 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = puVar7;
  func_0x00010bf20760();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar3 = puVar2;
    func_0x00010bf4b900(puVar2,param_6,*(undefined8 *)(puVar6 + 0x80));
    _objc_release(puVar2);
    _objc_release(puVar7);
    bVar1 = false;
    if ((int)puVar3 != 0) {
      puVar7 = puVar6 + 0x20;
      _objc_loadWeakRetained(puVar7);
      puVar2 = puVar7;
      func_0x00010bf20760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
      _objc_release(puVar2);
      goto LAB_105d44264;
    }
  }
  else {
    func_0x00010c12adc0(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar6 + 0x20;
    _objc_loadWeakRetained(puVar7);
    puVar2 = puVar7;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = *(undefined **)(puVar6 + 0x88);
    *(undefined8 *)(puVar6 + 0x88) = 0;
LAB_105d44264:
    _objc_release(puVar7);
    bVar1 = true;
  }
  puVar7 = puVar6 + 0x20;
  _objc_loadWeakRetained(puVar7);
  puVar2 = puVar7;
  func_0x00010c0da200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(puVar2);
  _objc_release(puVar7);
  puVar7 = puVar6 + 0x20;
  _objc_loadWeakRetained(puVar7);
  puVar2 = puVar7;
  func_0x00010c15b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(puVar2);
  _objc_release(puVar7);
  puVar7 = puVar6 + 0x20;
  _objc_loadWeakRetained(puVar7);
  puVar2 = puVar7;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(puVar2);
  _objc_release(puVar7);
  puVar7 = puVar6 + 0x20;
  _objc_loadWeakRetained(puVar7);
  puVar2 = puVar7;
  func_0x00010c14a0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(puVar2);
  _objc_release(puVar7);
  if (!bVar1) {
    return;
  }
LAB_105d44344:
  puVar6 = puVar6 + 0x20;
  _objc_loadWeakRetained(puVar6);
  func_0x00010bfaf6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105d43fd0; end: 105d44377; -[SCPreviewFeatureCTLensMagicEraserImpl _updateBottomComponent] */

void FUN_105d43fd0(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar2;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    lVar6 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar5,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010c0da200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010c15b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010c14a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    _objc_release(lVar6);
    goto LAB_105d44344;
  }
  lVar3 = *(long *)(param_1 + 0x88);
  func_0x00010bf529e0();
  lVar6 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar4 = lVar6;
  func_0x00010bf20760();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = lVar4;
    func_0x00010bf4b900(lVar4,param_2,*(undefined8 *)(param_1 + 0x80));
    _objc_release(lVar4);
    _objc_release(lVar6);
    bVar1 = false;
    if ((int)lVar3 != 0) {
      lVar6 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar6);
      lVar4 = lVar6;
      func_0x00010bf20760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
      _objc_release(lVar4);
      goto LAB_105d44264;
    }
  }
  else {
    func_0x00010c12adc0(lVar4);
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010bf20760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar6 = *(long *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
LAB_105d44264:
    _objc_release(lVar6);
    bVar1 = true;
  }
  lVar6 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar6);
  lVar4 = lVar6;
  func_0x00010c0da200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar4);
  _objc_release(lVar6);
  lVar6 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar6);
  lVar4 = lVar6;
  func_0x00010c15b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar4);
  _objc_release(lVar6);
  lVar6 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar6);
  lVar4 = lVar6;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar4);
  _objc_release(lVar6);
  lVar6 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar6);
  lVar4 = lVar6;
  func_0x00010c14a0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar4);
  _objc_release(lVar6);
  if (!bVar1) {
    return;
  }
LAB_105d44344:
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfaf6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d44378; end: 105d443c7; -[SCPreviewFeatureCTLensMagicEraserImpl _cancelCurrentEditingSession] */

void FUN_105d44378(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar1);
  func_0x00010bea53e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be0c070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitEditingMode_1125609b8);
  return;
}



/* Entry: 105d443c8; end: 105d444cb; -[SCPreviewFeatureCTLensMagicEraserImpl _setExistingToolViewAlpha:] */

void FUN_105d443c8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c2790a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c252b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c278d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d444cc; end: 105d4464b; -[SCPreviewFeatureCTLensMagicEraserImpl _updateCroppingState] */

void FUN_105d444cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf926c0();
  _objc_release(uVar1);
  if ((int)uVar5 == 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x000107ffcb24(lVar2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010bf27a60(&uStack_60,lVar4);
  }
  func_0x00010c2235a0(uVar5);
  _objc_release(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072ea0();
  func_0x00010c186160(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(lVar4);
  return;
}



/* Entry: 105d4464c; end: 105d44773; -[SCPreviewFeatureCTLensMagicEraserImpl _observeCTLensApplicationStateUpdate] */

void FUN_105d4464c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined **)(param_1 + 0xe8) = puVar1;
  _objc_release(uVar4);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf5ce60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105d44774; end: 105d447c3;  */

void FUN_105d44774(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be26a40(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d447c4; end: 105d44843; -[SCPreviewFeatureCTLensMagicEraserImpl _handleCTLensApplicationState:] */

void FUN_105d447c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0xf0);
  func_0x00010bf07d20();
  if (lVar2 != 2) {
    lVar2 = *(long *)(param_1 + 0xf0);
    func_0x00010bf07d20();
    if (lVar2 != 3) goto LAB_105d44834;
  }
  lVar2 = *(long *)(param_1 + 0xf0);
  func_0x00010c0ff440();
  if (lVar2 != 1) {
    lVar2 = *(long *)(param_1 + 0xf0);
    func_0x00010c0ff440();
    if (lVar2 != 0) goto LAB_105d44834;
  }
  *(undefined1 *)(param_1 + 0xa8) = 0;
LAB_105d44834:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d44844; end: 105d448e3; -[SCPreviewFeatureCTLensMagicEraserImpl setToolbarItemViewModel:] */

void FUN_105d44844(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xf8);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf8) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d448e4; end: 105d4494f; -[SCPreviewFeatureCTLensMagicEraserImpl reloadToolbarItemViewModel] */

/* WARNING: Possible PIC construction at 0x000105d44928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d4492c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105d448e4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if ((*(long *)(param_1 + 0xd0) == 0) || (uVar1 = param_1, func_0x00010c072ba0(), (uVar1 & 1) == 0)
     ) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c3cc0;
    _objc_alloc(PTR_PTR_1126c3cc0);
    func_0x00010c020360();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c216fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setToolbarItemViewModel__112663610,puVar2);
  return;
}



/* Entry: 105d44950; end: 105d44977; -[SCPreviewFeatureCTLensMagicEraserImpl toolbarItemViewModelObservable] */

void FUN_105d44950(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d44978; end: 105d4497f; -[SCPreviewFeatureCTLensMagicEraserImpl toolbarItemViewModel] */

undefined8 FUN_105d44978(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 105d44980; end: 105d44acf; -[SCPreviewFeatureCTLensMagicEraserImpl .cxx_destruct] */

void FUN_105d44980(long param_1)

{
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d44ad0; end: 105d44f0f; -[SCPreviewFeatureCTLensServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d44ad0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  if (param_1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = param_1 + _DAT_1127351a4;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar10;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar10 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar10 = 0;
  }
  _objc_retain(uVar10);
  _objc_release(uVar1);
  _objc_initWeak(auStack_80,param_1);
  puVar4 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105d44f10;
  puStack_90 = &UNK_1108e6a78;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  puStack_d8 = puVar2;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105d44f5c;
  puStack_c0 = &UNK_1108e6aa8;
  _objc_copyWeak(auStack_b0,auStack_80);
  uStack_b8 = uVar10;
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  puStack_110 = puVar2;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_105d452b8;
  puStack_f8 = &UNK_1108e6ad8;
  _objc_copyWeak(auStack_e0,auStack_80);
  uStack_f0 = uVar10;
  puStack_e8 = puVar4;
  func_0x00010bf11fe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae720;
  puStack_140 = puVar2;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_105d455bc;
  puStack_128 = &UNK_1108e6b08;
  _objc_copyWeak(auStack_118,auStack_80);
  uStack_120 = uVar10;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae720;
  puStack_180 = puVar2;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_105d45688;
  puStack_168 = &UNK_1108e6b38;
  _objc_copyWeak(auStack_148,auStack_80);
  uStack_160 = uVar10;
  puStack_158 = puVar4;
  puStack_150 = puVar7;
  func_0x00010bf11fe0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_188,auStack_80);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c43d0;
  _objc_alloc(PTR_PTR_1126c43d0);
  func_0x00010bffa460();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127351a8;
    _objc_loadWeakRetained(lVar12);
  }
  func_0x00010c1864e0(lVar12);
  _objc_release(lVar12);
  uVar11 = 0;
  if (param_1 != 0) {
    uVar11 = *(undefined8 *)(param_1 + _DAT_112735240);
  }
  _objc_retain(uVar11);
  func_0x00010bf9d660(uVar11);
  _objc_release(uVar11);
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_188);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_148);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_118);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_e0);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar10);
  return;
}



/* Entry: 105d44f10; end: 105d44f5b;  */

void FUN_105d44f10(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c4390;
    _objc_alloc_init(PTR_PTR_1126c4390);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d44f5c; end: 105d452af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d44f5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
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
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1 + _DAT_1127351bc;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126c4398;
    _objc_alloc();
    lVar2 = lVar1 + _DAT_1127351d8;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar1 + _DAT_11273521c;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c26e880();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + _DAT_112735218;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c08f0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112735234;
    uVar18 = *(undefined8 *)(lVar1 + _DAT_112735238);
    _objc_retain(uVar18);
    lVar9 = lVar1 + lVar9;
    _objc_loadWeakRetained(lVar9);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105d452b0;
    puStack_78 = &UNK_110848868;
    lStack_70 = lVar3;
    func_0x00010c039c20(puVar4,param_2,lVar2,lVar6,lVar8,uVar18,lVar9,&puStack_90);
    _objc_release(uVar18);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    puVar17 = PTR_PTR_1126c43a0;
    _objc_alloc();
    lVar2 = lVar1 + _DAT_1127351b8;
    _objc_loadWeakRetained();
    lVar5 = lVar1 + _DAT_1127351bc;
    _objc_loadWeakRetained(lVar5);
    lVar7 = lVar1 + _DAT_112735208;
    _objc_loadWeakRetained();
    uVar18 = *(undefined8 *)(param_1 + 0x20);
    lVar9 = lVar1 + _DAT_1127351d8;
    _objc_loadWeakRetained();
    lVar6 = lVar1 + _DAT_1127351e0;
    _objc_loadWeakRetained();
    lVar8 = lVar1 + _DAT_1127351e4;
    _objc_loadWeakRetained();
    lVar10 = lVar8;
    func_0x00010bfe8780();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1 + _DAT_1127351c4;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010bfe8440();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1 + _DAT_1127351e8;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar1 + _DAT_1127351ec;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010c23c760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039680(puVar17,param_2,lVar2,lVar5,lVar7,uVar18,lVar9,lVar6,lVar10,lVar12,lVar14,
                        lVar16,puVar4);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 105d452b0; end: 105d452b7;  */

void FUN_105d452b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07aff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_isPreviewRetouchFreemiumEnabled_1125fc608);
  return;
}



/* Entry: 105d452b8; end: 105d455bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d452b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined *puVar26;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar26 = (undefined *)0x0;
  }
  else {
    puVar26 = PTR_PTR_1126c43a8;
    _objc_alloc();
    lVar2 = lVar1 + _DAT_1127351b8;
    _objc_loadWeakRetained();
    lVar3 = lVar1 + _DAT_1127351bc;
    _objc_loadWeakRetained();
    lVar4 = lVar1 + _DAT_1127351c0;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf7f9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_112735208;
    _objc_loadWeakRetained();
    uVar25 = *(undefined8 *)(param_1 + 0x20);
    lVar7 = lVar1 + _DAT_1127351d8;
    _objc_loadWeakRetained();
    lVar8 = lVar1 + _DAT_1127351c4;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bfe8440();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + _DAT_1127351c8;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c29f540();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1 + _DAT_1127351d4;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c0ef680();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1 + _DAT_1127351d0;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar1 + _DAT_1127351dc;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c068880();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar1 + _DAT_1127351b0;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar1 + _DAT_1127351ac;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar1 + _DAT_1127351b4;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar1 + _DAT_1127351e0;
    _objc_loadWeakRetained();
    func_0x00010c039640(puVar26,param_2,lVar2,lVar3,lVar5,lVar6,uVar25,lVar7,lVar9,lVar11,lVar13,
                        lVar15,lVar17,lVar19,lVar21,lVar23,lVar24,*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar24);
    _objc_release(lVar23);
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
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return;
}



/* Entry: 105d455bc; end: 105d45687;  */

void FUN_105d455bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c13af60(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c43b0;
    _objc_alloc(PTR_PTR_1126c43b0);
    lVar3 = lVar2;
    func_0x00010c22b540(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c096b40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c024a40(puVar5,param_2,lVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105d45688; end: 105d46123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d45688(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  undefined8 uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined *puVar56;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_1127351b8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c06bc20();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 != 0) {
      lVar2 = lVar1 + _DAT_112735200;
      _objc_loadWeakRetained();
      lVar5 = lVar2;
      func_0x00010bf04760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar56 = PTR_PTR_1126c43b8;
      _objc_alloc();
      lVar2 = lVar1 + _DAT_1127351b8;
      _objc_loadWeakRetained();
      uVar52 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = lVar1 + _DAT_1127351d8;
      _objc_loadWeakRetained();
      lVar4 = lVar1 + _DAT_112735204;
      _objc_loadWeakRetained();
      lVar6 = lVar1 + _DAT_1127351f4;
      _objc_loadWeakRetained();
      lVar7 = lVar1 + _DAT_1127351c0;
      _objc_loadWeakRetained();
      lVar8 = lVar7;
      func_0x00010bf7f9c0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1 + _DAT_1127351c4;
      _objc_loadWeakRetained();
      lVar10 = lVar9;
      func_0x00010bfe8440();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar1 + _DAT_1127351c8;
      _objc_loadWeakRetained();
      lVar12 = lVar11;
      func_0x00010c29f540();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar1 + _DAT_1127351d4;
      _objc_loadWeakRetained();
      lVar14 = lVar13;
      func_0x00010c0ef680();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar1 + _DAT_1127351d0;
      _objc_loadWeakRetained();
      lVar16 = lVar15;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar1 + _DAT_112735208;
      _objc_loadWeakRetained();
      lVar18 = lVar1 + _DAT_1127351f0;
      _objc_loadWeakRetained();
      lVar19 = lVar18;
      func_0x00010c119b40();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar1 + _DAT_1127351b0;
      _objc_loadWeakRetained();
      lVar21 = lVar20;
      func_0x00010bf2fba0();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar1 + _DAT_1127351ac;
      _objc_loadWeakRetained();
      lVar23 = lVar22;
      func_0x00010c253b20();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar1 + _DAT_1127351b4;
      _objc_loadWeakRetained();
      lVar25 = lVar24;
      func_0x00010c23fc40();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar1 + _DAT_1127351e8;
      _objc_loadWeakRetained();
      lVar27 = lVar26;
      func_0x00010bfa2b80();
      _objc_retainAutoreleasedReturnValue();
      lVar28 = lVar1 + _DAT_1127351ec;
      _objc_loadWeakRetained();
      lVar29 = lVar28;
      func_0x00010c23c760();
      _objc_retainAutoreleasedReturnValue();
      uVar53 = *(undefined8 *)(param_1 + 0x28);
      lVar30 = lVar1 + _DAT_1127351f8;
      _objc_loadWeakRetained();
      lVar31 = lVar30;
      func_0x00010c293fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar32 = lVar1 + _DAT_11273520c;
      _objc_loadWeakRetained();
      lVar33 = lVar32;
      func_0x00010bf461c0();
      _objc_retainAutoreleasedReturnValue();
      lVar34 = lVar1 + _DAT_1127351dc;
      _objc_loadWeakRetained();
      lVar35 = lVar34;
      func_0x00010c068880();
      _objc_retainAutoreleasedReturnValue();
      uVar55 = *(undefined8 *)(lVar1 + _DAT_112735230);
      uVar36 = *(undefined8 *)(lVar1 + _DAT_112735238);
      _objc_retain();
      _objc_retain(uVar55);
      lVar37 = lVar1 + _DAT_112735234;
      _objc_loadWeakRetained();
      lVar38 = lVar1 + _DAT_1127351e0;
      _objc_loadWeakRetained();
      uVar54 = *(undefined8 *)(param_1 + 0x30);
      uVar39 = *(undefined8 *)(lVar1 + _DAT_11273523c);
      _objc_retain();
      lVar40 = lVar1 + _DAT_112735218;
      _objc_loadWeakRetained();
      lVar41 = lVar1 + _DAT_112735220;
      _objc_loadWeakRetained();
      lVar42 = lVar41;
      func_0x00010c094e60();
      _objc_retainAutoreleasedReturnValue();
      lVar43 = lVar1 + _DAT_112735224;
      _objc_loadWeakRetained();
      lVar44 = lVar1 + _DAT_112735214;
      _objc_loadWeakRetained();
      lVar45 = lVar44;
      func_0x00010c090c20();
      _objc_retainAutoreleasedReturnValue();
      lVar46 = lVar45;
      func_0x00010c090c40();
      _objc_retainAutoreleasedReturnValue();
      lVar47 = lVar1;
      func_0x00010c13af60(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      lVar48 = lVar1 + _DAT_1127351fc;
      _objc_loadWeakRetained();
      lVar49 = lVar48;
      func_0x00010befedc0();
      _objc_retainAutoreleasedReturnValue();
      lVar50 = lVar1 + _DAT_11273522c;
      _objc_loadWeakRetained();
      lVar51 = lVar50;
      func_0x00010bf07a00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0396a0(puVar56,param_2,lVar2,uVar52,lVar3,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14,
                          lVar16,lVar17,lVar19,lVar21,lVar23,lVar25,lVar27,lVar29,uVar53,lVar31,
                          lVar33,lVar35,lVar5,uVar55,uVar36,lVar37,lVar38,uVar54,uVar39,lVar40,
                          lVar42,lVar43,lVar46,lVar47,lVar49,lVar51);
      _objc_release(uVar39);
      _objc_release(lVar51);
      _objc_release(lVar50);
      _objc_release(lVar49);
      _objc_release(lVar48);
      _objc_release(lVar47);
      _objc_release(lVar46);
      _objc_release(lVar45);
      _objc_release(lVar44);
      _objc_release(lVar43);
      _objc_release(lVar42);
      _objc_release(lVar41);
      _objc_release(lVar40);
      _objc_release(uVar36);
      _objc_release(lVar38);
      _objc_release(lVar37);
      _objc_release(uVar55);
      _objc_release(lVar35);
      _objc_release(lVar34);
      _objc_release(lVar33);
      _objc_release(lVar32);
      _objc_release(lVar31);
      _objc_release(lVar30);
      _objc_release(lVar29);
      _objc_release(lVar28);
      _objc_release(lVar27);
      _objc_release(lVar26);
      _objc_release(lVar25);
      _objc_release(lVar24);
      _objc_release(lVar23);
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
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar5);
      goto LAB_105d45cf8;
    }
  }
  puVar56 = (undefined *)0x0;
LAB_105d45cf8:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar56);
  return;
}



/* Entry: 105d46124; end: 105d4612b;  */

void FUN_105d46124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07af70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_isPreviewPerfectSelfieFreemiumEn_1125fc5e8);
  return;
}



/* Entry: 105d4612c; end: 105d461ef; -[SCPreviewFeatureCTLensServicesEntryPoint resolvedAIModeConfigForConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d4612c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010befecc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar1 = 0;
    if (param_1 != 0) {
      lVar1 = param_1 + _DAT_112735228;
      _objc_loadWeakRetained(lVar1);
    }
    lVar2 = lVar1;
    func_0x00010befed00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010befece0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf690a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    _objc_retain(param_3);
    lVar4 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105d461f0; end: 105d463ff; -[SCPreviewFeatureCTLensServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d461f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112735240,0);
  _objc_storeStrong(param_1 + _DAT_11273523c,0);
  _objc_storeStrong(param_1 + _DAT_112735238,0);
  _objc_destroyWeak(param_1 + _DAT_112735234);
  _objc_storeStrong(param_1 + _DAT_112735230,0);
  _objc_destroyWeak(param_1 + _DAT_11273522c);
  _objc_destroyWeak(param_1 + _DAT_112735228);
  _objc_destroyWeak(param_1 + _DAT_112735224);
  _objc_destroyWeak(param_1 + _DAT_112735220);
  _objc_destroyWeak(param_1 + _DAT_11273521c);
  _objc_destroyWeak(param_1 + _DAT_112735218);
  _objc_destroyWeak(param_1 + _DAT_112735214);
  _objc_destroyWeak(param_1 + _DAT_112735210);
  _objc_destroyWeak(param_1 + _DAT_11273520c);
  _objc_destroyWeak(param_1 + _DAT_112735208);
  _objc_destroyWeak(param_1 + _DAT_112735204);
  _objc_destroyWeak(param_1 + _DAT_112735200);
  _objc_destroyWeak(param_1 + _DAT_1127351fc);
  _objc_destroyWeak(param_1 + _DAT_1127351f8);
  _objc_destroyWeak(param_1 + _DAT_1127351f4);
  _objc_destroyWeak(param_1 + _DAT_1127351f0);
  _objc_destroyWeak(param_1 + _DAT_1127351ec);
  _objc_destroyWeak(param_1 + _DAT_1127351e8);
  _objc_destroyWeak(param_1 + _DAT_1127351e4);
  _objc_destroyWeak(param_1 + _DAT_1127351e0);
  _objc_destroyWeak(param_1 + _DAT_1127351dc);
  _objc_destroyWeak(param_1 + _DAT_1127351d8);
  _objc_destroyWeak(param_1 + _DAT_1127351d4);
  _objc_destroyWeak(param_1 + _DAT_1127351d0);
  _objc_destroyWeak(param_1 + _DAT_1127351cc);
  _objc_destroyWeak(param_1 + _DAT_1127351c8);
  _objc_destroyWeak(param_1 + _DAT_1127351c4);
  _objc_destroyWeak(param_1 + _DAT_1127351c0);
  _objc_destroyWeak(param_1 + _DAT_1127351bc);
  _objc_destroyWeak(param_1 + _DAT_1127351b8);
  _objc_destroyWeak(param_1 + _DAT_1127351b4);
  _objc_destroyWeak(param_1 + _DAT_1127351b0);
  _objc_destroyWeak(param_1 + _DAT_1127351ac);
  _objc_destroyWeak(param_1 + _DAT_1127351a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127351a4);
  return;
}



/* Entry: 105d46400; end: 105d465f3; -[SCPreviewFeatureCTLensServicesPluginEntryPoint begin] */

void FUN_105d46400(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  FUN_105d465f4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000105d46618(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5ce40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_105d465f4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000105d46618(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c094ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_105d465f4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000105d46618(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_105d465f4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105d46618(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0f7f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d465f4; end: 105d4663b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d465f4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112735244);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d4663c; end: 105d4667f; -[SCPreviewFeatureCTLensServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d4663c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273524c);
  _objc_destroyWeak(param_1 + _DAT_112735248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735244);
  return;
}



/* Entry: 105d46680; end: 105d46873; -[SCPreviewFeatureCTLensToolbarItemProviderEntryPoint begin] */

void FUN_105d46680(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  FUN_105d46874();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000105d46898(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c094ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_105d46874(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000105d46898(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_105d46874(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000105d46898(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f7f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_105d46874(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105d46898(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf5ce40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d46874; end: 105d468bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d46874(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112735250);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d468bc; end: 105d468ff; -[SCPreviewFeatureCTLensToolbarItemProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d468bc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735258);
  _objc_destroyWeak(param_1 + _DAT_112735254);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735250);
  return;
}



/* Entry: 105d46900; end: 105d4690b; -[SCPreviewAiModeDisclaimerVC viewHeight] */

undefined8 FUN_105d46900(void)

{
  return 0x4081f80000000000;
}



/* Entry: 105d4690c; end: 105d46943; -[SCPreviewAiModeDisclaimerVC setHeaderImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d4690c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273525c);
  *(undefined8 *)(param_1 + _DAT_11273525c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d46944; end: 105d46973; -[SCPreviewAiModeDisclaimerVC _handleCloseAction] */

void FUN_105d46944(undefined8 param_1)

{
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d46974; end: 105d4781f; -[SCPreviewAiModeDisclaimerVC viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d46974(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined *puVar61;
  undefined *puVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined *puVar65;
  undefined *puVar66;
  undefined *puVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined *puVar70;
  undefined *puVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined *puVar74;
  undefined *puVar75;
  undefined *puVar76;
  undefined *puVar77;
  undefined8 uVar78;
  undefined *puVar79;
  undefined *puVar80;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = PTR_PTR_1126ecfc8;
  uStack_148 = param_1;
  _objc_msgSendSuper2(&uStack_148,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar1);
  _objc_release(puVar3);
  func_0x00010c182220(puVar1);
  func_0x00010c21e900(puVar1);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(puVar1);
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  func_0x00010c1a9f00(puVar5);
  func_0x00010c182220(puVar5);
  func_0x00010c17d4c0(puVar5);
  puVar6 = PTR_PTR_1126aea58;
  _objc_opt_new();
  puVar3 = puVar6;
  func_0x000105d48290();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar6);
  _objc_release(puVar3);
  func_0x00010c21ad00(puVar6);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar6);
  _objc_release(puVar3);
  puVar7 = PTR_PTR_1126aea58;
  _objc_opt_new();
  puVar3 = puVar7;
  func_0x000105d482a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar7);
  _objc_release(puVar3);
  func_0x00010c1cfce0(puVar7);
  func_0x00010c165e20(puVar7);
  func_0x00010c21ad00(puVar7);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar7);
  _objc_release(puVar3);
  _objc_initWeak(auStack_150,param_1);
  puVar8 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  func_0x00010c20eaa0(puVar8);
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_105d47820;
  puStack_160 = &UNK_1108434b0;
  _objc_copyWeak(auStack_158,auStack_150);
  func_0x00010c1d3960(puVar8);
  puVar9 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  func_0x00010c20eaa0(puVar9);
  _objc_copyWeak(auStack_180,auStack_150);
  func_0x00010c1d3960(puVar9);
  puVar10 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar8;
  puStack_88 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar3);
  func_0x00010c207380(0x4024000000000000,puVar10);
  func_0x00010c16e060(puVar10);
  func_0x00010c190b80(puVar10);
  func_0x00010c219b60(puVar1);
  func_0x00010c219b60(puVar5);
  func_0x00010c219b60(puVar6);
  func_0x00010c219b60(puVar7);
  func_0x00010c219b60(puVar10);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar11 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  puStack_138 = puVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  puStack_130 = puVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar16;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar1;
  puStack_128 = puVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar20;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar5;
  puStack_120 = puVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar5;
  puStack_118 = puVar27;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar5;
  puStack_110 = puVar31;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar33;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar32;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar5;
  puStack_108 = puVar35;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar36;
  func_0x00010bf494e0(0x4069000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar6;
  puStack_100 = puVar37;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar38;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar41 = puVar6;
  puStack_f8 = puVar40;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar42;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = puVar41;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar45 = puVar6;
  puStack_f0 = puVar44;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar46;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = puVar45;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar6;
  puStack_e8 = puVar48;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar49;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar51 = puVar7;
  puStack_e0 = puVar50;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar52 = puVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar53 = puVar51;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar54 = puVar7;
  puStack_d8 = puVar53;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar55 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = uVar55;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar57 = puVar54;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar58 = puVar7;
  puStack_d0 = puVar57;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar60 = uVar59;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar61 = puVar58;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar62 = puVar7;
  puStack_c8 = puVar61;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar63 = puVar62;
  func_0x00010bf49420(0x405f400000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar64 = puVar10;
  puStack_c0 = puVar63;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar65 = puVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar66 = puVar64;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar67 = puVar10;
  puStack_b8 = puVar66;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar68 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar69 = uVar68;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar70 = puVar67;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar71 = puVar10;
  puStack_b0 = puVar70;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar72 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar73 = uVar72;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar74 = puVar71;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar75 = puVar10;
  puStack_a8 = puVar74;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar76 = puVar75;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar77 = puVar10;
  puStack_a0 = puVar76;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar78 = param_1;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar78;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar79 = puVar77;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar80 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar79;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar80);
  _objc_release(puVar79);
  _objc_release(uVar2);
  _objc_release(uVar78);
  _objc_release(param_1);
  _objc_release(puVar77);
  _objc_release(puVar76);
  _objc_release(puVar75);
  _objc_release(puVar74);
  _objc_release(uVar73);
  _objc_release(uVar72);
  _objc_release(puVar71);
  _objc_release(puVar70);
  _objc_release(uVar69);
  _objc_release(uVar68);
  _objc_release(puVar67);
  _objc_release(puVar66);
  _objc_release(puVar65);
  _objc_release(puVar64);
  _objc_release(puVar63);
  _objc_release(puVar62);
  _objc_release(puVar61);
  _objc_release(uVar60);
  _objc_release(uVar59);
  _objc_release(puVar58);
  _objc_release(puVar57);
  _objc_release(uVar56);
  _objc_release(uVar55);
  _objc_release(puVar54);
  _objc_release(puVar53);
  _objc_release(puVar52);
  _objc_release(puVar51);
  _objc_release(puVar50);
  _objc_release(puVar49);
  _objc_release(puVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(puVar45);
  _objc_release(puVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_180);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_150);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_150);
  __Unwind_Resume();
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    puVar3 = puVar1 + _DAT_112735260;
    _objc_loadWeakRetained(puVar3);
    func_0x00010bfd0740();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d47820; end: 105d478b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d47820(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112735260;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfd0740();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d478b8; end: 105d478d7; -[SCPreviewAiModeDisclaimerVC actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d478b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112735260);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d478d8; end: 105d478eb; -[SCPreviewAiModeDisclaimerVC setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d478d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112735260,param_3);
  return;
}



/* Entry: 105d478ec; end: 105d47927; -[SCPreviewAiModeDisclaimerVC .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d478ec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735260);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273525c,0);
  return;
}



/* Entry: 105d47928; end: 105d47983; -[SCPreviewCTLensBottomComponentButtonConfig initWithType:backgroundColor:titleColor:] */

void FUN_105d47928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ecfd0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 105d47984; end: 105d4798b; -[SCPreviewCTLensBottomComponentButtonConfig type] */

undefined8 FUN_105d47984(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d4798c; end: 105d47993; -[SCPreviewCTLensBottomComponentButtonConfig setType:] */

void FUN_105d4798c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105d47994; end: 105d4799b; -[SCPreviewCTLensBottomComponentButtonConfig backgroundColor] */

undefined8 FUN_105d47994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105d4799c; end: 105d479a3; -[SCPreviewCTLensBottomComponentButtonConfig setBackgroundColor:] */

void FUN_105d4799c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 105d479a4; end: 105d479ab; -[SCPreviewCTLensBottomComponentButtonConfig titleColor] */

undefined8 FUN_105d479a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105d479ac; end: 105d479b3; -[SCPreviewCTLensBottomComponentButtonConfig setTitleColor:] */

void FUN_105d479ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 105d479b4; end: 105d479f3; -[SCPreviewCTLensBottomComponent updateWithButtonConfigs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d479b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112735270);
  *(undefined8 *)(param_1 + _DAT_112735270) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beb14f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupViews_112589ee0);
  return;
}



/* Entry: 105d479f4; end: 105d4807b; -[SCPreviewCTLensBottomComponent _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_105d479f4(undefined *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [256];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1e8 = 0;
  puStack_1f0 = (undefined *)0x0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lVar21 = (long)_DAT_112735274;
  lVar17 = *(long *)(param_1 + lVar21);
  _objc_retain(lVar17);
  ppuVar15 = &puStack_1f0;
  lVar2 = lVar17;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar19 = *plStack_1e0;
    do {
      lVar20 = 0;
      do {
        if (*plStack_1e0 != lVar19) {
          _objc_enumerationMutation(lVar17);
        }
        func_0x00010c12c960(*(undefined8 *)(lStack_1e8 + lVar20 * 8));
        lVar20 = lVar20 + 1;
      } while (lVar2 != lVar20);
      ppuVar15 = &puStack_1f0;
      lVar2 = lVar17;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar17);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar5;
  _objc_release(uVar16);
  lVar17 = (long)_DAT_112735270;
  lVar2 = *(long *)(param_1 + lVar17);
  func_0x00010bf529e0();
  ppuVar4 = (undefined **)0x0;
  if (lVar2 != 0) {
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    lVar17 = *(long *)(param_1 + lVar17);
    _objc_retain(lVar17);
    lVar2 = lVar17;
    func_0x00010bf52a60(lVar17,param_2,&uStack_230,auStack_180,0x10);
    if (lVar2 != 0) {
      lVar19 = *plStack_220;
      do {
        puVar5 = PTR_s__didTapButton__11252d3d0;
        lVar20 = 0;
        do {
          if (*plStack_220 != lVar19) {
            _objc_enumerationMutation(lVar17);
          }
          uVar22 = *(undefined8 *)(lStack_228 + lVar20 * 8);
          puVar6 = PTR_PTR_1126aec40;
          func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar22;
          func_0x00010c27dd80(uVar22);
          puVar3 = param_1;
          func_0x00010bdd71a0(param_1,param_2,uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c160fc0(puVar6,param_2,puVar3);
          _objc_release(puVar3);
          uVar16 = uVar22;
          func_0x00010bf13d40(uVar22);
          func_0x00010c16e480(puVar6,param_2,uVar16,0);
          uVar16 = uVar22;
          func_0x00010c27dd80(uVar22);
          puVar3 = param_1;
          func_0x00010bdd7480(param_1,param_2,uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c216260(puVar6,param_2,puVar3,0);
          _objc_release(puVar3);
          func_0x00010c271240(uVar22);
          func_0x00010c216380(puVar6,param_2,uVar22,0);
          func_0x00010befbd60(puVar6,param_2,param_1,puVar5,0x40);
          func_0x00010c219b60(puVar6,param_2,0);
          func_0x00010befbb60(param_1,param_2,puVar6);
          func_0x00010befa120(*(undefined8 *)(param_1 + lVar21),param_2,puVar6);
          _objc_release(puVar6);
          lVar20 = lVar20 + 1;
        } while (lVar2 != lVar20);
        lVar2 = lVar17;
        func_0x00010bf52a60(lVar17,param_2,&uStack_230,auStack_180,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar17);
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + lVar21);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar18 = 0;
      do {
        puVar5 = *(undefined **)(param_1 + lVar21);
        func_0x00010c0dfd40(puVar5,param_2,uVar18);
        _objc_retainAutoreleasedReturnValue();
        if (uVar18 == 0) {
LAB_105d47e48:
          puVar6 = puVar5;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = param_1;
          func_0x00010c274200(param_1);
          _objc_retainAutoreleasedReturnValue();
          puStack_238 = puVar6;
          func_0x00010bf493c0(0x4030000000000000,puVar6,param_2,puVar3);
          _objc_retainAutoreleasedReturnValue();
          puStack_240 = puVar5;
          puStack_1a8 = puStack_238;
          func_0x00010c08e400();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = param_1;
          func_0x00010c08e400(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puStack_240;
          func_0x00010bf493c0(0x4036000000000000,puStack_240,param_2,puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_1a0 = puVar12;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1a8,2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(ppuVar4,param_2,puVar13);
        }
        else {
          puVar6 = *(undefined **)(param_1 + lVar21);
          func_0x00010c0dfd40(puVar6,param_2,uVar18 - 1);
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 == (undefined *)0x0) goto LAB_105d47e48;
          puVar3 = puVar5;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          puStack_238 = puVar6;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          puStack_240 = puVar3;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar5;
          puStack_198 = puStack_240;
          func_0x00010c08e400();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar6;
          func_0x00010c1408a0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar11;
          func_0x00010bf493c0(0x4010000000000000,puVar11,param_2,puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          puStack_190 = puVar13;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010c2a5060(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010bf493a0(puVar7,param_2,puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_188 = puVar9;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_198,3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(ppuVar4,param_2,puVar10);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
        }
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puStack_240);
        _objc_release(puStack_238);
        _objc_release(puVar3);
        _objc_release(puVar6);
        puVar6 = puVar5;
        func_0x00010bfe0660(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar6;
        func_0x00010bf49420(0x4044000000000000);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar4,param_2,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar6);
        lVar2 = *(long *)(param_1 + lVar21);
        func_0x00010bf529e0();
        if (uVar18 == lVar2 - 1U) {
          puVar6 = puVar5;
          func_0x00010c1408a0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = param_1;
          func_0x00010c1408a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar6;
          func_0x00010bf493c0(0xc036000000000000,puVar6,param_2,puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar4,param_2,puVar11);
          _objc_release(puVar11);
          _objc_release(puVar3);
          _objc_release(puVar6);
        }
        _objc_release(puVar5);
        uVar18 = uVar18 + 1;
        uVar14 = *(ulong *)(param_1 + lVar21);
        func_0x00010bf529e0();
      } while (uVar18 < uVar14);
    }
    ppuVar15 = ppuVar4;
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x00010c08d140(param_1);
    _objc_release(ppuVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dc6f18;
  if (ppuVar15 != (undefined **)0x1) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db2a78;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e293f8;
  if (ppuVar15 != (undefined **)0x2) {
    ppuVar1 = ppuVar4;
  }
  return ppuVar1;
}



/* Entry: 105d4807c; end: 105d480a7; -[SCPreviewCTLensBottomComponent _buttonAccessibilityIdentifierForType:] */

undefined ** FUN_105d4807c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc6f18;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db2a78;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e293f8;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 105d480a8; end: 105d480f7; -[SCPreviewCTLensBottomComponent _buttonTitleForType:] */

void FUN_105d480a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 2) {
    func_0x000108ede858();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 1) {
    func_0x000108ede780();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    func_0x000108ede840();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d480f8; end: 105d4817b; -[SCPreviewCTLensBottomComponent _didTapButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d480f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112735270);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112735274);
  func_0x00010bfecde0(uVar1);
  func_0x00010c0dfd20(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  _objc_release(uVar2);
  param_1 = param_1 + _DAT_112735278;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5ce80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d4817c; end: 105d48193; -[SCPreviewCTLensBottomComponent preferredHeight] */

undefined8 FUN_105d4817c(void)

{
  undefined8 in_d3;
  
  func_0x00010bfb68e0();
  return in_d3;
}



/* Entry: 105d48194; end: 105d48197; -[SCPreviewCTLensBottomComponent componentView] */

void FUN_105d48194(void)

{
  return;
}



/* Entry: 105d48198; end: 105d481b7; -[SCPreviewCTLensBottomComponent delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d48198(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112735278);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d481b8; end: 105d481cb; -[SCPreviewCTLensBottomComponent setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d481b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112735278,param_3);
  return;
}



/* Entry: 105d481cc; end: 105d48217; -[SCPreviewCTLensBottomComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d481cc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735278);
  _objc_storeStrong(param_1 + _DAT_112735274,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112735270,0);
  return;
}



/* Entry: 105d48218; end: 105d482bf;  */

void FUN_105d48218(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e29418;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e29418,
                      &PTR____CFConstantStringClassReference_110e29438,0);
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



/* Entry: 105d482c0; end: 105d4833b;  */

void FUN_105d482c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126c43d8;
  _objc_opt_class(PTR_PTR_1126c43d8);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e29518,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d4833c; end: 105d484d3; -[SCPreviewFeatureCTRecommendationServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d4833c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + _DAT_112735290;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar5;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c43e8;
  _objc_alloc(PTR_PTR_1126c43e8);
  func_0x00010c006cc0();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112735294);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  return;
}



/* Entry: 105d484d4; end: 105d4861b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d484d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126c43e0;
    _objc_alloc(PTR_PTR_1126c43e0);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + _DAT_11273527c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar1 + _DAT_112735280;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar1 + _DAT_112735284;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf324a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_112735288;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c2527c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1 + _DAT_11273528c;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c039820(puVar9,param_2,uVar10,lVar2,lVar3,lVar5,lVar7,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105d4861c; end: 105d48693; -[SCPreviewFeatureCTRecommendationServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d4861c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112735294,0);
  _objc_destroyWeak(param_1 + _DAT_11273528c);
  _objc_destroyWeak(param_1 + _DAT_11273527c);
  _objc_destroyWeak(param_1 + _DAT_112735288);
  _objc_destroyWeak(param_1 + _DAT_112735284);
  _objc_destroyWeak(param_1 + _DAT_112735280);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735290);
  return;
}



/* Entry: 105d48694; end: 105d4873f; -[SCPreviewFeatureCTRecommendationServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d48694(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735298;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127352a4;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf5cfc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d48740; end: 105d4878f; -[SCPreviewFeatureCTRecommendationServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d48740(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127352a4);
  _objc_destroyWeak(param_1 + _DAT_1127352a0);
  _objc_destroyWeak(param_1 + _DAT_11273529c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735298);
  return;
}



/* Entry: 105d48790; end: 105d4894f; -[SCPreviewFeatureCTRecommendationImpl initWithPreviewConfiguration:musicRecommendationServices:objcMusicServices:carouselController:filterUIStateProvider:musicServices:] */

undefined1 *
FUN_105d48790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ecfd8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x30) = 0;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    _objc_release(uVar3);
    uVar3 = param_8;
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar3;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d48950; end: 105d489f3; -[SCPreviewFeatureCTRecommendationImpl blocklistCTContext:] */

void FUN_105d48950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105d489f4;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105d489f4; end: 105d489ff;  */

void FUN_105d489f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105d48a00; end: 105d48b5b; -[SCPreviewFeatureCTRecommendationImpl snapEditor:didTriggerLifecycle:] */

void FUN_105d48a00(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c095700();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    _objc_release(uVar7);
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c123180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c1231e0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bdf6340(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bdf6760(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010be61800(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00010bf582c0(uVar1,param_2,lVar2,lVar5,lVar6,
                          &PTR____CFConstantStringClassReference_110de3df8);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = uVar7;
      _objc_release(uVar8);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 105d48b5c; end: 105d48cbb; -[SCPreviewFeatureCTRecommendationImpl activate] */

void FUN_105d48b5c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0eca00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c06e320();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    func_0x00010be26fc0(param_1);
  }
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105d48cbc; end: 105d48db7;  */

void FUN_105d48cbc(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d48db8;
  puStack_50 = &UNK_1108e6bc8;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0e3b20(param_2);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0e3b60(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105d48db8; end: 105d48e47;  */

void FUN_105d48db8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29d80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d48e48; end: 105d48f0f; -[SCPreviewFeatureCTRecommendationImpl currentCTRecommendationObservable] */

void FUN_105d48e48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c09a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07f200();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ae6b8;
  if ((int)uVar2 == 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      puVar4 = *(undefined **)(param_1 + 0x20);
      func_0x00010bf5e2a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = PTR_PTR_1126ae750;
      func_0x00010c0ec800(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar4,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
  }
  else {
    func_0x00010c0d83a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d48f10; end: 105d4903f; -[SCPreviewFeatureCTRecommendationImpl currentRecommendationsDict] */

void FUN_105d48f10(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c123180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126ae750;
  puVar5 = PTR_PTR_1126ae6b8;
  if (lVar2 == 0) {
    puVar5 = *(undefined **)(param_1 + 0x20);
    func_0x00010bf5fd60(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec800(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12def0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + 0x20),PTR_s_removeRecommendationWithContext__1126291d8);
  return;
}



/* Entry: 105d49040; end: 105d49047; -[SCPreviewFeatureCTRecommendationImpl removeRecommendationWithContext:] */

void FUN_105d49040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12def0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeRecommendationWithContext__1126291d8);
  return;
}



/* Entry: 105d49048; end: 105d490c7; -[SCPreviewFeatureCTRecommendationImpl _handleCarouselExpanded:] */

void FUN_105d49048(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((param_3 != 0) && ((*(byte *)(param_1 + 0x30) & 1) == 0)) && (*(long *)(param_1 + 0x40) == 0)
     ) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf00280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}



/* Entry: 105d490c8; end: 105d4916b; -[SCPreviewFeatureCTRecommendationImpl _handleFilterSeen:] */

void FUN_105d490c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105d4916c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105d4916c; end: 105d491db;  */

void FUN_105d4916c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010bf4b900(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010bf00560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d491dc; end: 105d492bb; -[SCPreviewFeatureCTRecommendationImpl _ctContextsObservable] */

void FUN_105d491dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d492bc; end: 105d4932f;  */

void FUN_105d492bc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdeb960(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d49330; end: 105d4952b; -[SCPreviewFeatureCTRecommendationImpl _ctContextsDictionaryObservable] */

void FUN_105d49330(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c43f0;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126c43f8;
  _objc_opt_new(PTR_PTR_1126c43f8);
  func_0x00010c203c80(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110df42d8;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_initWeak(auStack_68,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_68;
  _objc_copyWeak(auStack_70,puVar6);
  _objc_retain(puVar2);
  uVar7 = uVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    __Unwind_Resume();
    _objc_retain(puVar6);
    puVar2 = puVar1 + 0x28;
    _objc_loadWeakRetained();
    if (puVar2 == (undefined *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar3 = puVar2;
      func_0x00010bdeb960(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(puVar1 + 0x20));
      uVar7 = *(undefined8 *)(puVar1 + 0x20);
      _objc_retain(uVar7);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 105d4952c; end: 105d495cb;  */

void FUN_105d4952c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bdeb960(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d495cc; end: 105d49707; -[SCPreviewFeatureCTRecommendationImpl _currentCTContextObservable] */

void FUN_105d495cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1599a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf65f60(0x3fe0000000000000,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105d49708; end: 105d497df;  */

void FUN_105d49708(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010bdeb9a0();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
    func_0x00010bf4b900();
    puVar3 = PTR_PTR_1126ae750;
    if ((iVar1 == 0) && (lVar2 != 0)) {
      func_0x00010c0ec800(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d497e0; end: 105d498ab; -[SCPreviewFeatureCTRecommendationImpl _createCTContextArrayWithFilterItems:] */

void FUN_105d497e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105d498ac;
  puStack_48 = &UNK_1108e6cb8;
  uStack_40 = param_1;
  _objc_retain();
  puStack_38 = puVar3;
  func_0x00010bf97e80(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  puVar1 = puStack_38;
  _objc_retain(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d498ac; end: 105d498f3;  */

void FUN_105d498ac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bdeb9a0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


