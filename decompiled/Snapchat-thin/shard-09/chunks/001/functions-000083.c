/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10698a0f4; end: 10698a20f; -[SCAddFriendsCameraRollPickerDriver scanForImage:originalImage:cellImage:scaleStep:rotateStep:shouldScanQRCode:] */

void FUN_10698a0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10698a210;
  puStack_88 = &UNK_11094eca0;
  uStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_5;
  uStack_68 = param_4;
  uStack_60 = param_6;
  uStack_5c = param_7;
  uStack_58 = param_8;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_a0);
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10698a210; end: 10698a697;  */

void FUN_10698a210(double param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10698a698;
  puStack_90 = &UNK_110842e18;
  uStack_88 = *(undefined8 *)(param_2 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_a8);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf684a0();
  _objc_release(uVar2);
  if ((int)uVar13 == 0) {
LAB_10698a45c:
    uVar10 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010bfe5fc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010c0cff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38);
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
    uVar10 = uVar8;
    func_0x00010bfe70c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar13);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar6 = uVar10;
    _objc_opt_respondsToSelector(uVar10,PTR_s_runDeepScanWithBatchImages_image_11262e408);
    if ((uVar6 & 1) == 0) {
      _objc_release(uVar10);
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      goto LAB_10698a45c;
    }
    puVar9 = PTR_PTR_1126b30e0;
    _objc_alloc(PTR_PTR_1126b30e0);
    param_1 = 0.0;
    func_0x00010bff3e00();
    uStack_80 = *(undefined8 *)(param_2 + 0x28);
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010c1427a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar9);
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  }
  _objc_release(uVar10);
  uVar7 = uVar6;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf529e0();
  _objc_release(uVar7);
  if (uVar8 == 0) {
    if (*(char *)(param_2 + 0x48) == '\x01') {
      iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
      func_0x00010bdfb940();
      if (iVar1 != 0) goto LAB_10698a4b8;
    }
    func_0x00010c23d0a0(*(undefined8 *)(param_2 + 0x28));
    dVar14 = 100.0;
    if (param_1 <= 100.0) {
      if (5 < *(int *)(param_2 + 0x44)) {
        func_0x00010c256920(*(undefined8 *)(param_2 + 0x30));
        *(undefined1 *)(*(long *)(param_2 + 0x20) + 0x21) = 1;
        goto LAB_10698a524;
      }
      uVar13 = *(undefined8 *)(param_2 + 0x20);
      puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8a20(0x404e000000000000,PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14ebc0(uVar13);
    }
    else {
      uVar13 = *(undefined8 *)(param_2 + 0x20);
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c23d0a0(uVar2);
      dVar15 = param_1 * 0.5;
      func_0x00010c23d0a0(*(undefined8 *)(param_2 + 0x28));
      puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010c14e6c0(dVar15,dVar14 * 0.5,param_1,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14ebc0(uVar13);
      _objc_release(uVar2);
    }
  }
  else {
LAB_10698a4b8:
    *(undefined1 *)(*(long *)(param_2 + 0x20) + 0x21) = 1;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x10698a6a4;
    puStack_b8 = &UNK_110842e18;
    puVar12 = *(undefined **)(param_2 + 0x30);
    puStack_d0 = puVar9;
    _objc_retain(puVar12);
    puStack_b0 = puVar12;
    func_0x000100c749e0(0x3f800000,"APPSTORE",&puStack_d0);
    lVar11 = *(long *)(param_2 + 0x20) + 0x48;
    _objc_loadWeakRetained(lVar11);
    func_0x00010c10e040();
    _objc_release(lVar11);
    puVar9 = puStack_b0;
  }
  _objc_release(puVar9);
LAB_10698a524:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(uVar6 + 0x20) + 0x21) = 0;
  return;
}



/* Entry: 10698a698; end: 10698a6af;  */

void FUN_10698a698(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x21) = 0;
  return;
}



/* Entry: 10698a6b0; end: 10698a89b; -[SCAddFriendsCameraRollPickerDriver _detectBarcodesWithImage:] */

ulong FUN_10698a6b0(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d0160();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf04b00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf15b60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf6f920(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c0bf0a0(uVar8);
  bVar1 = *(byte *)(puStack_78 + 3);
  _objc_release(uVar8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (ulong)(bVar1 & 1);
  }
  ___stack_chk_fail();
  __Unwind_Resume(param_3);
  return param_3;
}



/* Entry: 10698a89c; end: 10698a89f;  */

void FUN_10698a89c(void)

{
  return;
}



/* Entry: 10698a8a0; end: 10698a8eb;  */

void FUN_10698a8a0(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c265b00();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 == 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10698a8ec; end: 10698a99f; -[SCAddFriendsCameraRollPickerDriver addFriendsCameraRollCellView:updateState:] */

void FUN_10698a8ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfecfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = lVar2;
    func_0x00010c0840e0(lVar2);
    func_0x00010c1d04c0(uVar4,param_2,puVar3,lVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10698a9a0; end: 10698a9a7; -[SCAddFriendsCameraRollPickerDriver itemSize] */

undefined1  [16] FUN_10698a9a0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x58);
}



/* Entry: 10698a9a8; end: 10698a9af; -[SCAddFriendsCameraRollPickerDriver setItemSize:] */

void FUN_10698a9a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x58) = param_1;
  *(undefined8 *)(param_3 + 0x60) = param_2;
  return;
}



/* Entry: 10698a9b0; end: 10698a9c7; -[SCAddFriendsCameraRollPickerDriver collectionView] */

void FUN_10698a9b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10698a9c8; end: 10698a9d3; -[SCAddFriendsCameraRollPickerDriver setCollectionView:] */

void FUN_10698a9c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 10698a9d4; end: 10698aa43; -[SCAddFriendsCameraRollPickerDriver .cxx_destruct] */

void FUN_10698a9d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 10698aa44; end: 10698adcf; -[SCAddFriendsCameraRollPickerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698aa44(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
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
  
  uVar2 = param_1;
  FUN_10698add0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  FUN_10698add0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010befce80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  FUN_10698add0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c073e20();
  _objc_release(uVar2);
  uVar1 = 0x130;
  if ((int)uVar5 == 0) {
    uVar1 = 0x131;
  }
  lVar6 = param_1 + (long)_DAT_112754774;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  puVar8 = PTR_PTR_1126b0870;
  _objc_alloc_init();
  lVar6 = param_1 + (long)_DAT_112754778;
  _objc_loadWeakRetained();
  lVar9 = lVar6;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar6);
  puVar11 = PTR_PTR_1126cf608;
  _objc_alloc(PTR_PTR_1126cf608);
  lVar6 = param_1 + (long)_DAT_11275477c;
  _objc_loadWeakRetained();
  lVar12 = lVar6;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + (long)_DAT_112754780;
  _objc_loadWeakRetained();
  lVar13 = lVar9;
  func_0x00010c0d0060();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + (long)_DAT_112754784;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf68480();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + (long)_DAT_112754788;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c14f0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_11275478c;
  lVar18 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar20 = lVar26;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + (long)_DAT_112754790;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + (long)_DAT_112754794;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + (long)_DAT_112754798;
  _objc_loadWeakRetained();
  func_0x00010c007220(puVar11,param_2,lVar7,uVar1,uVar5 & 0xffffffff,lVar12,lVar13,lVar15,lVar17,
                      uVar4,lVar19,puVar8,lVar20,lVar22,lVar24,lVar10,lVar25);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar26);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar9);
  _objc_release(lVar12);
  _objc_release(lVar6);
  func_0x00010bf0c980(uVar3,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10698add0; end: 10698adf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698add0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275479c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10698adf4; end: 10698ae23;  */

void FUN_10698adf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 10698ae24; end: 10698aed3; -[SCAddFriendsCameraRollPickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698ae24(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112754778);
  _objc_destroyWeak(param_1 + _DAT_112754788);
  _objc_destroyWeak(param_1 + _DAT_11275478c);
  _objc_destroyWeak(param_1 + _DAT_112754774);
  _objc_destroyWeak(param_1 + _DAT_112754784);
  _objc_destroyWeak(param_1 + _DAT_112754780);
  _objc_destroyWeak(param_1 + _DAT_11275477c);
  _objc_destroyWeak(param_1 + _DAT_112754790);
  _objc_destroyWeak(param_1 + _DAT_1127547a0);
  _objc_destroyWeak(param_1 + _DAT_112754798);
  _objc_destroyWeak(param_1 + _DAT_112754794);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275479c);
  return;
}



/* Entry: 10698aed4; end: 10698aee3; -[SCAddFriendsCameraRollPickerViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10698aed4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127547a8);
}



/* Entry: 10698aee4; end: 10698b233; -[SCAddFriendsCameraRollPickerViewController initWithCurrentPageTracker:pageViewName:isPageSourceFromSettings:snapcodeIdentifierProvider:modelProvider:deepScanConfiguration:scanScopeLauncher:addfriendsCameraRollPickerWorkflowDelegate:photoPermissionCoordinator:snapcodeContainer:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:fetchLimit:scanScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10698aee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f3f50;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_1127547ac;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127547b0) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127547b4) = 1;
    func_0x00010c20eaa0(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127547a8) = param_4;
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127547b8,param_10);
    ppuVar3 = &PTR____CFConstantStringClassReference_110df0e58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df0e58,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_release(ppuVar3);
    lVar5 = (long)_DAT_1127547bc;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127547c0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127547c4;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_17;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127547c8;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127547cc;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127547d0;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127547d4;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_15;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127547d8;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_16;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126cf610;
    _objc_alloc();
    func_0x00010c01f3c0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127547dc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127547dc) = puVar4;
    _objc_release(uVar2);
  }
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
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10698b234; end: 10698b4bf; -[SCAddFriendsCameraRollPickerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698b234(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f3f50;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc();
  func_0x00010bff0f20();
  lVar5 = (long)_DAT_1127547e0;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar5));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_1127547e4;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e66818;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e66818,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
  _objc_release(ppuVar3);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  func_0x00010bead140(param_1);
  lVar5 = (long)_DAT_1127547c8;
  func_0x00010c1d96a0(*(undefined8 *)(param_1 + lVar5));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c14c940(*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 10698b4c0; end: 10698b547;  */

void FUN_10698b4c0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10698b548; end: 10698b73b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698b548(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127547e0);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10698b73c; end: 10698b7cf; -[SCAddFriendsCameraRollPickerViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698b73c(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  double dVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f3f50;
  lStack_40 = param_4;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillLayoutSubviews_112526958);
  lVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar1);
  dVar2 = (double)(int)(param_3 / 3.0 + -1.0);
  func_0x00010c1b6260(dVar2,dVar2,*(undefined8 *)(param_4 + _DAT_1127547dc));
  return;
}



/* Entry: 10698b7d0; end: 10698b893; -[SCAddFriendsCameraRollPickerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698b7d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f3f50;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc40();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_1127547a4) = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  return;
}



/* Entry: 10698b894; end: 10698b8f3; -[SCAddFriendsCameraRollPickerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698b894(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f3f50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127547ac);
  func_0x00010be6fa80(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 10698b8f4; end: 10698b96b; -[SCAddFriendsCameraRollPickerViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698b8f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f3f50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010be033c0(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  return;
}



/* Entry: 10698b96c; end: 10698b99f; -[SCAddFriendsCameraRollPickerViewController viewDidDisappear:] */

void FUN_10698b96c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3f50;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidDisappear__112684c48);
  return;
}



/* Entry: 10698b9a0; end: 10698b9ff; -[SCAddFriendsCameraRollPickerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698b9a0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_1127547b8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010befce60();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126f3f50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10698ba00; end: 10698bb47; -[SCAddFriendsCameraRollPickerViewController _setupImageFetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698ba00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126b2670;
  _objc_alloc();
  func_0x00010c035d40();
  lVar4 = (long)_DAT_1127547e8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b2688;
  _objc_opt_new(PTR_PTR_1126b2688);
  func_0x00010c2b4b40();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfab780(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10698bb48; end: 10698bbbb;  */

void FUN_10698bb48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bfa9d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee4b00(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10698bbbc; end: 10698bc47; -[SCAddFriendsCameraRollPickerViewController _updateWithPHFetchResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698bbbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_1127547e0));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127547e4),param_2,1);
  func_0x00010c28c780(*(undefined8 *)(param_1 + _DAT_1127547dc),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10698bc48; end: 10698bc67; -[SCAddFriendsCameraRollPickerViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698bc48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf40b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGRectZero_110347608,*(undefined8 *)(PTR__CGRectZero_110347608 + 8)
             ,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),
             *(undefined8 *)(param_1 + _DAT_1127547dc),PTR_s_collectionWithFrame__1125adc78);
  return;
}



/* Entry: 10698bc68; end: 10698bd37; -[SCAddFriendsCameraRollPickerViewController presentScanResultWithImage:] */

void FUN_10698bc68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10698bd38;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10698bd38; end: 10698c06b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698bd38(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar13 = (long)_DAT_1127547c0;
    uVar1 = *(ulong *)(param_1 + lVar13);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c076220();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      uVar12 = *(undefined8 *)(param_1 + _DAT_1127547ec);
      *(undefined **)(param_1 + _DAT_1127547ec) = puVar3;
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)(param_1 + _DAT_1127547c4);
      puVar3 = PTR_PTR_1126b5f78;
      func_0x00010c104620(PTR_PTR_1126b5f78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf23f80(uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uVar4 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08bcc0();
      _objc_release(uVar4);
      _objc_release(uVar12);
    }
    puVar3 = PTR_PTR_1126b3140;
    func_0x00010bf30ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b3140;
    func_0x00010c277300(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar5 = PTR_PTR_1126b30f8;
    func_0x00010bfe94a0(PTR_PTR_1126b30f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3100;
    puVar7 = puVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9500(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    puVar9 = PTR_PTR_1126b5f70;
    _objc_alloc(PTR_PTR_1126b5f70);
    puVar10 = puVar9;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c400(puVar9);
    _objc_release(puVar10);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127547ec));
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be033d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10698c06c; end: 10698c06f; -[SCAddFriendsCameraRollPickerViewController scanWantsDismiss:] */

void FUN_10698c06c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be033d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissScanIfNecessary_11255e690);
  return;
}



/* Entry: 10698c070; end: 10698c073; -[SCAddFriendsCameraRollPickerViewController scanWantsQueryWithSource:requestedAnalyzerServiceIds:] */

void FUN_10698c070(void)

{
  return;
}



/* Entry: 10698c074; end: 10698c173; -[SCAddFriendsCameraRollPickerViewController _dismissScanIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698c074(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = (long)_DAT_1127547c0;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf84460(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10698c174; end: 10698c19f;  */

void FUN_10698c174(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10698c1a0; end: 10698c1b3; -[SCAddFriendsCameraRollPickerViewController _detachScanUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698c1a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127547c8),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 10698c1b4; end: 10698c1b7; -[SCAddFriendsCameraRollPickerViewController scanWithCategoryId:] */

void FUN_10698c1b4(void)

{
  return;
}



/* Entry: 10698c1b8; end: 10698c1d7; -[SCAddFriendsCameraRollPickerViewController _pagenameForPageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10698c1b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xe6;
  if (*(char *)(param_1 + _DAT_1127547b0) == '\0') {
    uVar1 = 0xda;
  }
  return uVar1;
}



/* Entry: 10698c1d8; end: 10698c1e7; -[SCAddFriendsCameraRollPickerViewController loadingText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10698c1d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127547e4);
}



/* Entry: 10698c1e8; end: 10698c227; -[SCAddFriendsCameraRollPickerViewController setLoadingText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698c1e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127547e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10698c228; end: 10698c237; -[SCAddFriendsCameraRollPickerViewController loadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10698c228(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127547e0);
}



/* Entry: 10698c238; end: 10698c277; -[SCAddFriendsCameraRollPickerViewController setLoadingIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698c238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127547e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10698c278; end: 10698c383; -[SCAddFriendsCameraRollPickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698c278(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127547e0,0);
  _objc_storeStrong(param_1 + _DAT_1127547e4,0);
  _objc_storeStrong(param_1 + _DAT_1127547d8,0);
  _objc_storeStrong(param_1 + _DAT_1127547d4,0);
  _objc_storeStrong(param_1 + _DAT_1127547d0,0);
  _objc_storeStrong(param_1 + _DAT_1127547cc,0);
  _objc_storeStrong(param_1 + _DAT_1127547ec,0);
  _objc_storeStrong(param_1 + _DAT_1127547c4,0);
  _objc_storeStrong(param_1 + _DAT_1127547c0,0);
  _objc_storeStrong(param_1 + _DAT_1127547c8,0);
  _objc_storeStrong(param_1 + _DAT_1127547bc,0);
  _objc_destroyWeak(param_1 + _DAT_1127547b8);
  _objc_storeStrong(param_1 + _DAT_1127547dc,0);
  _objc_storeStrong(param_1 + _DAT_1127547ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127547e8,0);
  return;
}



/* Entry: 10698c384; end: 10698cc37; -[SCAddFriendsRecentlyActionPageComposerViewController initWithSnapchattersDataFetcher:snapchattersDataTracker:circumstanceEngine:blockedSnapchatterFetcher:snapchattersPublicInfoFetcher:hiddenSuggestionCoordinator:friendmojiPresenter:imageDownloader:placement:currentPageTracker:currentPageName:friendOperationType:seenAndAddEventLogger:viewedIncomingFriendsTracker:valdiRuntimeProvider:recentFriendOperationPageDelegate:performerProvider:isIncomingFriendStoreV2Enabled:composerPeopleBridgeFriendServices:userPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10698c384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             long param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined4 param_21,undefined4 param_22,long param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_23);
  _objc_retain(param_24);
  puStack_80 = PTR_PTR_1126f3f58;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar15 = (long)_DAT_1127547f4;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_13;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127547f8) = param_14;
    lVar15 = (long)_DAT_1127547fc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_3;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112754800;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_15;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112754804;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_16;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112754808,param_19);
    lVar15 = (long)_DAT_11275480c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_5;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112754810;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(long *)((long)puVar1 + lVar15) = param_23;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112754814);
    *(undefined **)((long)puVar1 + (long)_DAT_112754814) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112754818);
    *(undefined **)((long)puVar1 + (long)_DAT_112754818) = puVar3;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_11275481c;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_24;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b0c98;
    _objc_alloc();
    func_0x00010c0368e0();
    lVar15 = param_23;
    func_0x00010bfb8b80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar15;
    (**(code **)(lVar15 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar15);
    puVar7 = PTR_PTR_1126cf618;
    _objc_alloc();
    func_0x00010c01a680();
    puVar8 = PTR_PTR_1126cf620;
    _objc_opt_new(PTR_PTR_1126cf620);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar15 = param_17;
    func_0x00010c269d40(param_17);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar15;
    func_0x00010bfebee0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010c0b4ca0();
    func_0x00010c0df720(((double)lVar9 / 1000.0) * 1000.0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b83e0(puVar8);
    _objc_release(puVar3);
    _objc_release(lVar5);
    _objc_release(lVar15);
    func_0x00010c1a0100(puVar8);
    puVar3 = PTR_PTR_1126b1530;
    _objc_alloc();
    func_0x00010c0460e0();
    lVar15 = param_23;
    func_0x00010bfebe60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar15;
    (**(code **)(lVar15 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112754820);
    *(long *)((long)puVar1 + (long)_DAT_112754820) = lVar9;
    _objc_release(uVar2);
    _objc_release(lVar5);
    _objc_release(lVar15);
    func_0x00010c1abec0(puVar8);
    func_0x00010c1e84a0(puVar8);
    lVar15 = param_23;
    func_0x00010bf1d860(param_23);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171da0(puVar8);
    _objc_release(lVar5);
    _objc_release(lVar15);
    puVar10 = PTR_PTR_1126b1580;
    _objc_opt_new(PTR_PTR_1126b1580);
    func_0x00010c166b20(puVar8);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126cf628;
    _objc_alloc(PTR_PTR_1126cf628);
    func_0x00010c016100();
    func_0x00010c1a0680(puVar8);
    _objc_release(puVar10);
    puVar11 = puVar1;
    func_0x00010be5c120(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d1a00(puVar8);
    _objc_release(puVar11);
    puVar11 = puVar1;
    func_0x00010be5c160(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d2fa0(puVar8);
    _objc_release(puVar11);
    puVar11 = puVar1;
    func_0x00010be5c160(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d2f40(puVar8);
    _objc_release(puVar11);
    puVar11 = puVar1;
    func_0x00010be5c140(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d2f80(puVar8);
    _objc_release(puVar11);
    puVar11 = puVar1;
    func_0x00010be5c140(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d2fc0(puVar8);
    _objc_release(puVar11);
    _objc_initWeak(auStack_90,puVar1);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10698cec4;
    puStack_a0 = &UNK_110855460;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010c1d26e0(puVar8);
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c1d26a0(puVar8);
    func_0x00010c1d14a0(puVar8);
    func_0x00010c1d14c0(puVar8);
    puVar12 = PTR_PTR_1126cf630;
    _objc_alloc();
    func_0x00010c03d2e0();
    puVar10 = PTR_PTR_1126cf638;
    _objc_alloc();
    uVar13 = param_18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar13;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    uVar14 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275482c);
    *(undefined **)((long)puVar1 + (long)_DAT_11275482c) = puVar10;
    _objc_release(uVar14);
    _objc_release(uVar2);
    _objc_release();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_112754830;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = uVar13;
    _objc_release(uVar2);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
    _objc_release(puVar12);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(puVar4);
  }
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_13);
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



/* Entry: 10698cc38; end: 10698cec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698cc38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  func_0x00010bf84b00(param_2);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c14dc60(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10698cec4; end: 10698cf53;  */

void FUN_10698cec4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5d8c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10698cf54; end: 10698cf5b;  */

void FUN_10698cf54(void)

{
  return;
}



/* Entry: 10698cf5c; end: 10698cf5f; -[SCAddFriendsRecentlyActionPageComposerViewController preferredStatusBarStyle] */

undefined8 FUN_10698cf5c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 10698cf60; end: 10698d027; -[SCAddFriendsRecentlyActionPageComposerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698cf60(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f3f58;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bdc6600(param_1);
  func_0x00010c24fc40(*(undefined8 *)(param_1 + _DAT_1127547f4));
  uVar3 = *(undefined8 *)(param_1 + _DAT_112754814);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29cac0(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_112754824) = puVar2;
  _objc_release(puVar1);
  return;
}



/* Entry: 10698d028; end: 10698d2e3; -[SCAddFriendsRecentlyActionPageComposerViewController _addContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698d028(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11275482c;
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar9);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  lStack_98 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  lStack_a8 = lVar2;
  lStack_88 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_b8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  uStack_80 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  uStack_78 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_release(lStack_a8);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  lVar9 = lStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_10698d2e4;
  puStack_108 = PTR_PTR_1126f3f58;
  lStack_110 = lVar9;
  uStack_100 = uVar5;
  uStack_f8 = uVar8;
  lStack_f0 = lVar2;
  lStack_e8 = lVar1;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_110,PTR_s_viewWillAppear__1126853f0);
  uVar8 = *(undefined8 *)(lVar9 + _DAT_112754814);
  puVar7 = PTR_PTR_1126b1560;
  func_0x00010c29e700(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar8);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(lVar9);
  func_0x00010c14dc60(puVar7);
  _objc_release(puVar7);
  func_0x00010be3cf00(lVar9);
  return;
}



/* Entry: 10698d2e4; end: 10698d39f; -[SCAddFriendsRecentlyActionPageComposerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698d2e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f3f58;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112754814);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29e700(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  func_0x00010be3cf00(param_1);
  return;
}



/* Entry: 10698d3a0; end: 10698d3d7; -[SCAddFriendsRecentlyActionPageComposerViewController _installPullToDismissIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698d3a0(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127547f0;
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    func_0x00010be3cee0();
    *(undefined1 *)(param_1 + lVar1) = 1;
  }
  return;
}



/* Entry: 10698d3d8; end: 10698d46f; -[SCAddFriendsRecentlyActionPageComposerViewController _installPullToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698d3d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112754830);
  uStack_30 = *(undefined8 *)(param_1 + _DAT_11275482c);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puStack_68 = PTR_PTR_1126f3f58;
  puStack_70 = puVar1;
  _objc_msgSendSuper2(&puStack_70,PTR_s_viewDidDisappear__112684c48);
  uVar3 = *(undefined8 *)(puVar1 + _DAT_112754814);
  puVar2 = PTR_PTR_1126b1560;
  func_0x00010c29c860(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar2);
  func_0x00010c0aef40(*(undefined8 *)(puVar1 + _DAT_112754804));
  return;
}



/* Entry: 10698d470; end: 10698d503; -[SCAddFriendsRecentlyActionPageComposerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698d470(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f3f58;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112754814);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29c860(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  func_0x00010c0aef40(*(undefined8 *)(param_1 + _DAT_112754804));
  return;
}



/* Entry: 10698d504; end: 10698d5a3; -[SCAddFriendsRecentlyActionPageComposerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698d504(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112754814);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c2a5e20(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  lVar2 = param_1 + _DAT_112754808;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c122700();
  _objc_release(lVar2);
  puStack_38 = PTR_PTR_1126f3f58;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10698d5a4; end: 10698d61b; -[SCAddFriendsRecentlyActionPageComposerViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10698d5a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + _DAT_11275482c);
  if ((param_5 == uVar1) && (func_0x00010bf2d520(param_1,param_2,uVar1,param_4,1), (uVar1 & 1) != 0)
     ) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 10698d61c; end: 10698d61f; -[SCAddFriendsRecentlyActionPageComposerViewController cardToExpandTransition] */

void FUN_10698d61c(void)

{
  return;
}



/* Entry: 10698d620; end: 10698d673; -[SCAddFriendsRecentlyActionPageComposerViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698d620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf84b00(param_1,param_2,1,0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10698d674; end: 10698d677; -[SCAddFriendsRecentlyActionPageComposerViewController cardTransitionDidUpdateProgress:] */

void FUN_10698d674(void)

{
  return;
}



/* Entry: 10698d678; end: 10698d6cb; -[SCAddFriendsRecentlyActionPageComposerViewController cardTransitionEndedWithView:transitionType:] */

void FUN_10698d678(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_4 != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10698d6cc; end: 10698d6d3; -[SCAddFriendsRecentlyActionPageComposerViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_10698d6cc(void)

{
  return 1;
}



/* Entry: 10698d6d4; end: 10698d6db; -[SCAddFriendsRecentlyActionPageComposerViewController viewControllerPrefersSelfDismiss] */

undefined8 FUN_10698d6d4(void)

{
  return 0;
}



/* Entry: 10698d6dc; end: 10698d6e7; -[SCAddFriendsRecentlyActionPageComposerViewController defaultProjectNameV2] */

undefined ** FUN_10698d6dc(void)

{
  return &PTR____CFConstantStringClassReference_110db7938;
}



/* Entry: 10698d6e8; end: 10698d74b; -[SCAddFriendsRecentlyActionPageComposerViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10698d6e8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + _DAT_112754800);
  if (puVar2 == PTR_PTR_11316b408) {
    return 0xb;
  }
  if (puVar2 != PTR_PTR_11316b410) {
    uVar1 = 9;
    if (puVar2 != PTR_PTR_11316b418) {
      uVar1 = 0xb;
    }
    return uVar1;
  }
  return 10;
}



/* Entry: 10698d74c; end: 10698d807; -[SCAddFriendsRecentlyActionPageComposerViewController _makeSafeCall:] */

void FUN_10698d74c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10698d808;
  puStack_50 = &UNK_110848708;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10698d808; end: 10698d897;  */

void FUN_10698d808(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10698d898;
    puStack_38 = &UNK_11084aaa8;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    lStack_30 = lVar1;
    uStack_28 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(uStack_28);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10698d898; end: 10698d8a7;  */

void FUN_10698d898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010698d8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10698d8a8; end: 10698da0f; -[SCAddFriendsRecentlyActionPageComposerViewController _makeSafeCallWithSnapchatter:] */

void FUN_10698d8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10698d964;
  puStack_50 = &UNK_11094eec0;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10698da10; end: 10698da23;  */

void FUN_10698da10(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010698da20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 10698da24; end: 10698dbb7; -[SCAddFriendsRecentlyActionPageComposerViewController _makeSafeCallWithSnapchatterString:] */

void FUN_10698da24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10698dae0;
  puStack_50 = &UNK_11094ef20;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10698dbb8; end: 10698dbcf;  */

void FUN_10698dbb8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010698dbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),param_2,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10698dbd0; end: 10698dccb; -[SCAddFriendsRecentlyActionPageComposerViewController _ensureSnapchatterWithUser:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698dbd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127547fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10698dccc;
  puStack_48 = &UNK_1108553d0;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2448c0(uVar1,param_2,uVar2,PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10698dccc; end: 10698df8b;  */

void FUN_10698dccc(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b14b8;
    _objc_alloc(PTR_PTR_1126b14b8);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1bae0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1bae0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1bae0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c14fa80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1bae0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf14060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7be0(puVar1);
    _objc_release(uVar9);
    _objc_release(uVar5);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar2);
    param_2 = PTR_PTR_1126b15c8;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2923e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c294420(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf85d80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07a6a0(*(undefined8 *)(param_1 + 0x20));
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c0e0();
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar1);
  }
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10698df8c;
  puStack_80 = &UNK_11084aaa8;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  puStack_78 = param_2;
  uStack_70 = uVar6;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_98);
  _objc_release(puStack_78);
  _objc_release(uStack_70);
  _objc_release(param_2);
  return;
}



/* Entry: 10698df8c; end: 10698df9b;  */

void FUN_10698df8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010698df98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10698df9c; end: 10698e0f7; -[SCAddFriendsRecentlyActionPageComposerViewController _markSuggestedFriendAsSeen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698df9c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010699eb74(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + _DAT_112754804);
  uVar2 = param_4;
  func_0x00010c07be00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbbc0(uVar5,param_3,uVar1,0,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b15e0;
  _objc_alloc(PTR_PTR_1126b15e0);
  func_0x00010bfec9e0(param_4);
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043720(puVar3,param_3,&PTR____CFConstantStringClassReference_110ea9018,(long)param_1,
                      uVar2,0,0,0,0);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b1560;
  func_0x00010c2a6080(PTR_PTR_1126b1560,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_2 + _DAT_112754814),param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10698e0f8; end: 10698e243; -[SCAddFriendsRecentlyActionPageComposerViewController _markIncomingFriendAsSeen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698e0f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b15d8;
  uVar5 = *(ulong *)(param_1 + _DAT_112754820);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  _objc_initWeak(auStack_38,param_1);
  uVar4 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfebea0(uVar1);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10698e244; end: 10698e2a3;  */

void FUN_10698e244(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfec9e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be5d500(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10698e2a4; end: 10698e3b3; -[SCAddFriendsRecentlyActionPageComposerViewController _markIncomingFriendAsSeen:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698e2a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112754804);
    _objc_retain(param_3);
    func_0x00010c0bb700(uVar4,param_2,param_3);
    puVar1 = PTR_PTR_1126b15e0;
    _objc_alloc(PTR_PTR_1126b15e0);
    lVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c043720(puVar1,param_2,&PTR____CFConstantStringClassReference_110ea8ff8,param_4,
                        lVar2,0,0,0,0);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b1560;
    func_0x00010c2a6080(PTR_PTR_1126b1560,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112754814),param_2,puVar3);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10698e3b4; end: 10698e3c3; -[SCAddFriendsRecentlyActionPageComposerViewController actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10698e3b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112754828);
}



/* Entry: 10698e3c4; end: 10698e403; -[SCAddFriendsRecentlyActionPageComposerViewController setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698e3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112754828;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10698e404; end: 10698e413; -[SCAddFriendsRecentlyActionPageComposerViewController pageEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10698e404(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112754814);
}



/* Entry: 10698e414; end: 10698e453; -[SCAddFriendsRecentlyActionPageComposerViewController setPageEventObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698e414(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112754814;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10698e454; end: 10698e463; -[SCAddFriendsRecentlyActionPageComposerViewController addFriendsActionEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10698e454(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112754818);
}



/* Entry: 10698e464; end: 10698e4a3; -[SCAddFriendsRecentlyActionPageComposerViewController setAddFriendsActionEventObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698e464(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112754818;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10698e4a4; end: 10698e59f; -[SCAddFriendsRecentlyActionPageComposerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698e4a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112754828,0);
  _objc_storeStrong(param_1 + _DAT_11275481c,0);
  _objc_storeStrong(param_1 + _DAT_112754820,0);
  _objc_storeStrong(param_1 + _DAT_112754810,0);
  _objc_destroyWeak(param_1 + _DAT_112754808);
  _objc_storeStrong(param_1 + _DAT_112754800,0);
  _objc_storeStrong(param_1 + _DAT_112754830,0);
  _objc_storeStrong(param_1 + _DAT_11275482c,0);
  _objc_storeStrong(param_1 + _DAT_112754818,0);
  _objc_storeStrong(param_1 + _DAT_112754814,0);
  _objc_storeStrong(param_1 + _DAT_112754804,0);
  _objc_storeStrong(param_1 + _DAT_11275480c,0);
  _objc_storeStrong(param_1 + _DAT_1127547fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127547f4,0);
  return;
}



/* Entry: 10698e5a0; end: 10698ec93; -[SCAddFriendsRecentlyActionPageEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698e5a0(long param_1)

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
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  lVar27 = param_1;
  FUN_10698ec94();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar27;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  lVar27 = param_1;
  FUN_10698ec94();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar27;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  lVar27 = param_1;
  FUN_10698ec94();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar27;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  lVar27 = param_1;
  FUN_10698ec94();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar27;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  lVar27 = param_1;
  FUN_10698ec94();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar27;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  lVar27 = param_1;
  FUN_10698ec94();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar27;
  func_0x00010bfe1440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112754874;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar27;
  func_0x00010bfb98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11275486c;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar27;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112754870;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar27;
  func_0x00010c11e240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c11e260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112754868;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar27;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  lVar27 = param_1;
  func_0x00010698ecb8();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar27;
  func_0x00010c0f0dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1e60();
  _objc_release(lVar12);
  _objc_release(lVar27);
  lVar27 = param_1;
  FUN_10698ec94();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar27;
  func_0x00010c29ec60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  lVar27 = param_1 + _DAT_112754834;
  _objc_loadWeakRetained();
  lVar14 = lVar27;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  puVar15 = PTR_PTR_1126cf640;
  _objc_alloc();
  lVar27 = param_1 + _DAT_112754838;
  _objc_loadWeakRetained();
  lVar16 = lVar27;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010be86de0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010698ecb8();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11275483c;
  _objc_loadWeakRetained();
  lVar20 = lVar12;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be411c0();
  lVar21 = param_1 + _DAT_112754840;
  _objc_loadWeakRetained();
  lVar29 = param_1 + _DAT_112754844;
  _objc_loadWeakRetained();
  lVar22 = lVar29;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049a20();
  _objc_release(lVar22);
  _objc_release(lVar29);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar12);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar27);
  puVar23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11275487c;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar27;
  func_0x00010bfb9460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  lVar27 = lVar21;
  func_0x00010c269d40(lVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126b1698;
  func_0x00010befe6e0(PTR_PTR_1126b1698);
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar27;
  func_0x00010bf1f320(lVar27);
  _objc_release(puVar24);
  _objc_release(lVar27);
  uVar26 = *(undefined8 *)(param_1 + _DAT_112754848);
  uVar28 = *(undefined8 *)(param_1 + _DAT_11275484c);
  uVar30 = *(undefined8 *)(param_1 + _DAT_112754850);
  lVar27 = param_1 + _DAT_112754854;
  _objc_loadWeakRetained(lVar27);
  uVar31 = *(undefined8 *)(param_1 + _DAT_112754858);
  lVar12 = param_1 + _DAT_11275485c;
  _objc_loadWeakRetained();
  puVar24 = puVar15;
  FUN_10699f4e0(puVar15,uVar26,uVar28,uVar30,lVar27,uVar31,lVar29,0,0,lVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar27);
  func_0x00010bef7f60(puVar23);
  puVar25 = PTR_PTR_1126b16b0;
  _objc_alloc(PTR_PTR_1126b16b0);
  lVar29 = (long)_DAT_112754860;
  lVar27 = param_1 + lVar29;
  _objc_loadWeakRetained(lVar27);
  lVar12 = lVar27;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049c40(puVar25);
  _objc_release(lVar12);
  _objc_release(lVar27);
  func_0x00010c161980(puVar15);
  param_1 = param_1 + lVar29;
  _objc_loadWeakRetained(param_1);
  lVar27 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar27);
  _objc_release(param_1);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(lVar21);
  _objc_release(puVar23);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10698ec94; end: 10698ecdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698ec94(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112754864);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10698ecdc; end: 10698ed2b; -[SCAddFriendsRecentlyActionPageEntryPoint _recentFriendOperationTypeFromPageType:] */

void FUN_10698ecdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR_PTR_11316b410;
  if (param_3 != 1) {
    ppuVar1 = &PTR_PTR_11316b408;
  }
  ppuVar2 = &PTR_PTR_11316b418;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  puVar3 = *ppuVar2;
  _objc_retain(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10698ed2c; end: 10698ed9b; -[SCAddFriendsRecentlyActionPageEntryPoint _isIncomingFriendStoreV2Enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10698ed2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112754838;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 10698ed9c; end: 10698eeaf; -[SCAddFriendsRecentlyActionPageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698ed9c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275485c);
  _objc_storeStrong(param_1 + _DAT_11275484c,0);
  _objc_storeStrong(param_1 + _DAT_112754858,0);
  _objc_destroyWeak(param_1 + _DAT_112754854);
  _objc_storeStrong(param_1 + _DAT_112754850,0);
  _objc_storeStrong(param_1 + _DAT_112754848,0);
  _objc_destroyWeak(param_1 + _DAT_11275487c);
  _objc_destroyWeak(param_1 + _DAT_112754844);
  _objc_destroyWeak(param_1 + _DAT_112754840);
  _objc_destroyWeak(param_1 + _DAT_112754838);
  _objc_destroyWeak(param_1 + _DAT_112754878);
  _objc_destroyWeak(param_1 + _DAT_11275483c);
  _objc_destroyWeak(param_1 + _DAT_112754834);
  _objc_destroyWeak(param_1 + _DAT_112754874);
  _objc_destroyWeak(param_1 + _DAT_112754870);
  _objc_destroyWeak(param_1 + _DAT_11275486c);
  _objc_destroyWeak(param_1 + _DAT_112754868);
  _objc_destroyWeak(param_1 + _DAT_112754864);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112754860);
  return;
}



/* Entry: 10698eeb0; end: 10698ef53; -[SCComposerPeopleHiddenSuggestedFriendStore initWithHiddenSuggestionCoordinator:snapchattersDataTracker:] */

undefined1 *
FUN_10698eeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3f60;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10698ef54; end: 10698ef5f; -[SCComposerPeopleHiddenSuggestedFriendStore pushToValdiMarshaller:] */

undefined8 FUN_10698ef54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf658;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  FUN_10698f858();
  return param_3;
}



/* Entry: 10698ef60; end: 10698f1db; -[SCComposerPeopleHiddenSuggestedFriendStore getHiddenSuggestedFriendsWithCompletion:] */

void FUN_10698ef60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010bfa76e0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10698f1dc; end: 10698f3e7; -[SCComposerPeopleHiddenSuggestedFriendStore onHiddenSuggestedFriendsUpdatedWithCallback:] */

void FUN_10698f1dc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  if (param_3 == 0) {
    ppuVar5 = &PTR___NSConcreteGlobalBlock_11094ef90;
  }
  else {
    puVar2 = PTR_PTR_1126cf650;
    _objc_alloc();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10698f3ec;
    puStack_78 = &UNK_11094efb0;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c04ba80();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126afd78;
    _objc_alloc();
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x10698f5f0;
    puStack_a8 = &UNK_110841fb0;
    _objc_copyWeak(auStack_98,auStack_68);
    _objc_retain(puVar2);
    puStack_a0 = puVar2;
    func_0x00010bffae00();
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_10698f64c;
    puStack_d0 = &UNK_110842e18;
    puStack_c8 = puVar4;
    _objc_retain();
    ppuVar5 = &puStack_e8;
    _objc_retainBlock(ppuVar5);
    _objc_release(puStack_c8);
    _objc_release(puVar4);
    _objc_release(puStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_70);
  }
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10698f3e8; end: 10698f3eb;  */

void FUN_10698f3e8(void)

{
  return;
}



/* Entry: 10698f3ec; end: 10698f4f7;  */

void FUN_10698f3ec(long param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  if (param_3 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10698f4f8;
    puStack_50 = &UNK_1108ad4b0;
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_copyWeak(auStack_70,param_1 + 0x20);
    func_0x00010c0bc6c0(param_2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10698f4f8; end: 10698f64b;  */

void FUN_10698f4f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c3e0(param_1);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10698f64c; end: 10698f653;  */

void FUN_10698f64c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}


