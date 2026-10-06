/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050302f0; end: 10503031f; -[SCEditDisplayNameAlertDialog setAlertTitle:] */

void FUN_1050302f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105030320; end: 105030327; -[SCEditDisplayNameAlertDialog alertDescription] */

undefined8 FUN_105030320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105030328; end: 105030357; -[SCEditDisplayNameAlertDialog setAlertDescription:] */

void FUN_105030328(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105030358; end: 10503035f; -[SCEditDisplayNameAlertDialog saveDisplayNameCompleteBlock] */

undefined8 FUN_105030358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105030360; end: 105030367; -[SCEditDisplayNameAlertDialog setSaveDisplayNameCompleteBlock:] */

void FUN_105030360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105030368; end: 10503036f; -[SCEditDisplayNameAlertDialog savePressedBlock] */

undefined8 FUN_105030368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105030370; end: 105030377; -[SCEditDisplayNameAlertDialog setSavePressedBlock:] */

void FUN_105030370(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105030378; end: 10503037f; -[SCEditDisplayNameAlertDialog dismissBlock] */

undefined8 FUN_105030378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105030380; end: 105030387; -[SCEditDisplayNameAlertDialog setDismissBlock:] */

void FUN_105030380(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105030388; end: 105030483; -[SCEditDisplayNameAlertDialog .cxx_destruct] */

void FUN_105030388(long param_1)

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



/* Entry: 105030484; end: 105030487; -[SCEditDisplayNameEntryPoint begin] */

void FUN_105030484(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be153d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchUserSnapchatter_112562e90);
  return;
}



/* Entry: 105030488; end: 105030607; -[SCEditDisplayNameEntryPoint _fetchUserSnapchatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105030488(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  lVar1 = param_1 + _DAT_112719ed0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112719ed4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c2448c0(lVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105030608; end: 10503064f;  */

void FUN_105030608(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a160();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105030650; end: 105030e4b; -[SCEditDisplayNameEntryPoint _presentAlertViewWithSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105030650(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3f78;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112719ed4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112719ed8;
  lVar4 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + _DAT_112719ed0;
  _objc_loadWeakRetained(lVar5);
  lVar11 = (long)_DAT_112719edc;
  lVar6 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e5e0();
  lVar13 = (long)_DAT_112719ee0;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar12);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar2 = lVar14;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar14);
  lVar2 = lVar5;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = lVar5;
    func_0x00010c11f420();
    if (lVar2 == 0x7fffffffffffffff) {
      func_0x00010c1aca20(*(undefined8 *)(param_1 + lVar13));
      func_0x00010c1acac0(*(undefined8 *)(param_1 + lVar13));
    }
    else {
      lVar2 = lVar5;
      func_0x00010c260c20(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aca20(*(undefined8 *)(param_1 + lVar13));
      _objc_release(lVar2);
      lVar2 = lVar5;
      func_0x00010c260c00(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1acac0(*(undefined8 *)(param_1 + lVar13));
      _objc_release(lVar2);
    }
  }
  _objc_initWeak(auStack_70,param_1);
  uVar8 = param_1 + lVar11;
  _objc_loadWeakRetained();
  uVar9 = uVar8;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  _objc_opt_respondsToSelector();
  _objc_release(uVar9);
  _objc_release(uVar8);
  if ((uVar10 & 1) != 0) {
    uVar12 = *(undefined8 *)(param_1 + lVar13);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105030e4c;
    puStack_80 = &UNK_110843540;
    _objc_copyWeak(auStack_78,auStack_70);
    func_0x00010c1f59a0(uVar12);
    _objc_destroyWeak(auStack_78);
  }
  uVar8 = param_1 + lVar11;
  _objc_loadWeakRetained();
  uVar9 = uVar8;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  _objc_opt_respondsToSelector();
  _objc_release(uVar9);
  _objc_release(uVar8);
  if ((uVar10 & 1) != 0) {
    uVar12 = *(undefined8 *)(param_1 + lVar13);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x105030e94;
    puStack_a8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_a0,auStack_70);
    func_0x00010c18f3e0(uVar12);
    _objc_destroyWeak(auStack_a0);
  }
  uVar8 = param_1 + lVar11;
  _objc_loadWeakRetained();
  uVar9 = uVar8;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  _objc_opt_respondsToSelector();
  _objc_release(uVar9);
  _objc_release(uVar8);
  if ((uVar10 & 1) != 0) {
    uVar12 = *(undefined8 *)(param_1 + lVar13);
    _objc_copyWeak(auStack_c8,auStack_70);
    func_0x00010c1f58a0(uVar12);
    _objc_destroyWeak(auStack_c8);
  }
  lVar2 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bf8c2c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf8c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bfb1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar6 != 0) {
      uVar12 = *(undefined8 *)(param_1 + lVar13);
      lVar2 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010bf8c2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bfb1900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19d340(uVar12);
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    lVar2 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf8c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c089760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar6 != 0) {
      uVar12 = *(undefined8 *)(param_1 + lVar13);
      lVar2 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010bf8c2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c089760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8380(uVar12);
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    lVar2 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf8c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c14a180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar6 != 0) {
      uVar12 = *(undefined8 *)(param_1 + lVar13);
      lVar2 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010bf8c2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c14a180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f57e0(uVar12);
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    lVar2 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf8c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf2e000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar6 != 0) {
      uVar12 = *(undefined8 *)(param_1 + lVar13);
      lVar2 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010bf8c2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bf2e000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c177fa0(uVar12);
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    lVar2 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf8c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010beff740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar6 != 0) {
      uVar12 = *(undefined8 *)(param_1 + lVar13);
      lVar2 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010bf8c2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010beff740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c166b80(uVar12);
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    lVar2 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf8c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010beff400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar6 != 0) {
      uVar12 = *(undefined8 *)(param_1 + lVar13);
      lVar11 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar11);
      lVar2 = lVar11;
      func_0x00010bf8c2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010beff400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c166a60(uVar12);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar11);
    }
  }
  func_0x00010c235bc0(*(undefined8 *)(param_1 + lVar13));
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 105030e4c; end: 105030ebf;  */

void FUN_105030e4c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be98c00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105030ec0; end: 105030f17;  */

void FUN_105030ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be98ec0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105030f18; end: 105030fc3; -[SCEditDisplayNameEntryPoint _saveButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105030f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112719edc;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8c320();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105030fc4; end: 10503104f; -[SCEditDisplayNameEntryPoint _dismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105030fc4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112719edc;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8c2e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105031050; end: 105031103; -[SCEditDisplayNameEntryPoint _saveDisplayNameComplete:errorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105031050(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112719edc;
  _objc_retain(param_4);
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8c300();
  _objc_release(param_4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105031104; end: 10503116f; -[SCEditDisplayNameEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105031104(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112719ed4);
  _objc_destroyWeak(param_1 + _DAT_112719ee4);
  _objc_destroyWeak(param_1 + _DAT_112719ed8);
  _objc_destroyWeak(param_1 + _DAT_112719ed0);
  _objc_destroyWeak(param_1 + _DAT_112719edc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112719ee0,0);
  return;
}



/* Entry: 105031170; end: 10503117b; -[SCDismissOnBackgroundingDialog backgroundExitBehavior] */

void FUN_105031170(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aecb0,PTR_s_exitImmediately_1125c47b0);
  return;
}



/* Entry: 10503117c; end: 105031343; -[SCDeepLinkMiniProfileController initWithNavigationDelegate:authenticatedNetworkServices:immediateUserFeatureLaunchServices:grapheneRegistry:snapTokenProvider:addFriendSheetScopeExposer:addFriendSheetScopeServices:circumstanceEngine:pageLauncher:] */

undefined1 *
FUN_10503117c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126e5b58;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_11;
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



/* Entry: 105031344; end: 105031357; -[SCDeepLinkMiniProfileController identifier] */

void FUN_105031344(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 105031358; end: 10503135f; -[SCDeepLinkMiniProfileController priority] */

undefined8 FUN_105031358(void)

{
  return 1000;
}



/* Entry: 105031360; end: 105031373; -[SCDeepLinkMiniProfileController canProvideProcessorForFeature:] */

void FUN_105031360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110e04f78);
  return;
}



/* Entry: 105031374; end: 105031477; -[SCDeepLinkMiniProfileController isValidDeepLink:] */

undefined8 FUN_105031374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  uVar2 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057c40(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b3f80;
  func_0x00010bfcbf40(PTR_PTR_1126b3f80,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bfa1820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2d2a0(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105031478; end: 10503147b; -[SCDeepLinkMiniProfileController makeDeepLinkProcessor] */

void FUN_105031478(void)

{
  return;
}



/* Entry: 10503147c; end: 10503197f; -[SCDeepLinkMiniProfileController processDeepLinkURL:additionalInfo:delegate:] */

void FUN_10503147c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_storeWeak(param_1 + 0x28,param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b3f88;
  func_0x00010bf0d880(PTR_PTR_1126b3f88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  puVar4 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057c40(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b3f80;
  func_0x00010bfcbf40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126b3f88;
    func_0x00010bf9fac0(PTR_PTR_1126b3f88);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5fe0(param_5);
    func_0x00010bf94700(param_5);
  }
  else {
    puVar5 = param_3;
    func_0x00010c0f5820();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    if ((int)puVar6 != 0) {
      func_0x00010be2f8e0(param_1);
      goto LAB_105031938;
    }
    puVar6 = param_3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c11db20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010c071ae0();
    *(char *)(param_1 + 0x58) = (char)puVar6;
    puVar6 = param_3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c11db20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = param_3;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar8;
      _objc_release(uVar1);
      _objc_release(puVar6);
      puVar6 = param_3;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar7);
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar7;
      _objc_release(uVar1);
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = puVar6;
    func_0x00010c11db20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar8;
    _objc_release(uVar1);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b3f80;
    func_0x00010c0b71a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar8 = PTR_PTR_1126b3f88;
      func_0x00010bf9fac0(PTR_PTR_1126b3f88);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0(uVar2);
      _objc_release(puVar10);
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5fe0(param_5);
      func_0x00010bf94700(param_5);
    }
    else {
      _objc_storeWeak(param_1 + 0x28,param_5);
      puVar10 = PTR_PTR_1126b3f90;
      puVar8 = *(undefined **)(param_1 + 0x10);
      func_0x00010bf10b80(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c298800(puVar10);
      _objc_release(uVar1);
      _objc_release(puVar9);
    }
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
LAB_105031938:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105031980; end: 105031987;  */

void FUN_105031980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee8570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__verifyDeepLinkResult__112597b00);
  return;
}



/* Entry: 105031988; end: 10503199f; -[SCDeepLinkMiniProfileController shouldForceNavigation] */

void FUN_105031988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dc3458,0,0);
  return;
}



/* Entry: 1050319a0; end: 105031cdf; -[SCDeepLinkMiniProfileController processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_1050319a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_storeWeak(param_1 + 0x28,param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b3f88;
  func_0x00010bf0d880(PTR_PTR_1126b3f88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar3);
  lVar4 = param_3;
  func_0x00010c13cca0();
  if ((int)lVar4 == 4) {
    lVar4 = param_3;
    func_0x00010bef88e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    puVar3 = PTR_PTR_1126b3f80;
    if (lVar5 != 0) {
      lVar4 = param_3;
      func_0x00010bef88e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b71c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (puVar3 == (undefined *)0x0) {
        puVar6 = PTR_PTR_1126b3f88;
        func_0x00010bf9fac0(PTR_PTR_1126b3f88);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0(uVar2);
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a5fe0(param_5);
        func_0x00010bf94700(param_5);
      }
      else {
        _objc_storeWeak(param_1 + 0x28,param_5);
        puVar8 = PTR_PTR_1126b3f90;
        puVar6 = *(undefined **)(param_1 + 0x10);
        func_0x00010bf10b80(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298800(puVar8);
        _objc_release(uVar1);
        _objc_release(puVar7);
      }
      _objc_release(puVar6);
      goto LAB_105031ca4;
    }
  }
  puVar3 = PTR_PTR_1126b3f88;
  func_0x00010bf9fac0(PTR_PTR_1126b3f88);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5fe0(param_5);
  func_0x00010bf94700(param_5);
LAB_105031ca4:
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105031ce0; end: 105031ce7;  */

void FUN_105031ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee8570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__verifyDeepLinkResult__112597b00);
  return;
}



/* Entry: 105031ce8; end: 105031d57; -[SCDeepLinkMiniProfileController friendProfileDidDismiss:] */

void FUN_105031ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf94700();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfb8800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105031d58; end: 105031d87; -[SCDeepLinkMiniProfileController friendProfileWillAppear] */

void FUN_105031d58(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a6880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105031d88; end: 105031d8b; -[SCDeepLinkMiniProfileController friendProfileDidAppear:] */

void FUN_105031d88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be79f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentAddFriendPrompt_11257c168);
  return;
}



/* Entry: 105031d8c; end: 105031dd3; -[SCDeepLinkMiniProfileController endAddFriendSheetScope] */

void FUN_105031d8c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105031dd4; end: 105032057; -[SCDeepLinkMiniProfileController _handleSavedStoryDeeplinkWithURL:] */

void FUN_105031dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0ea8;
  _objc_opt_new();
  func_0x00010c19a840();
  puVar2 = PTR_PTR_1126b3f98;
  _objc_opt_new(PTR_PTR_1126b3f98);
  func_0x00010c1e57e0(puVar1);
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010c0f5820(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c11a640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f760();
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010c11a640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4c300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a00();
  _objc_release(puVar4);
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010c0f5820(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c11a640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4c300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d1a0();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0f5820(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c11a640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4c300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010c11a640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2c80();
  _objc_release(puVar2);
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a5fe0();
  _objc_release(param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105032058;
  puStack_60 = &UNK_110841fb0;
  _objc_copyWeak(auStack_50,auStack_48);
  puStack_58 = puVar1;
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105032058; end: 10503208b;  */

void FUN_105032058(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6f360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10503208c; end: 105032177; -[SCDeepLinkMiniProfileController _pageLaunchWithCommand:] */

void FUN_10503208c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c08c020(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105032178; end: 1050321bf;  */

void FUN_105032178(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a6880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050321c0; end: 1050322f3; -[SCDeepLinkMiniProfileController _verifyDeepLinkResult:] */

void FUN_1050321c0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfb8080();
  if ((int)puVar1 != 0) {
    puVar1 = param_3;
    func_0x00010bfb91c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar3 != (undefined *)0x0) {
      puVar1 = param_3;
      func_0x00010bfb91c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7dbe0(param_1,param_2,puVar2);
      _objc_release(puVar2);
      goto LAB_1050322d4;
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110dc3338,
                      &PTR____CFConstantStringClassReference_110dc3478,1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0a5fe0();
  _objc_release(lVar4);
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf94700();
  _objc_release(lVar4);
  func_0x00010be04500(param_1);
LAB_1050322d4:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050322f4; end: 1050324df; -[SCDeepLinkMiniProfileController _presentProfileForUserId:] */

void FUN_1050322f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be60dc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110dc3338,
                        &PTR____CFConstantStringClassReference_110dc3498,2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0a5fe0();
    _objc_release(lVar3);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf94700();
  }
  else {
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0a5fe0();
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010c015a00();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfb8800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar3;
    func_0x00010bfb7fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126b3f88;
    func_0x00010c261740(PTR_PTR_1126b3f88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(param_1,param_2,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1050324e0; end: 1050326a3; -[SCDeepLinkMiniProfileController _displayError] */

void FUN_1050324e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x000105032e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b3fa8;
  _objc_alloc(PTR_PTR_1126b3fa8);
  puVar4 = puVar3;
  func_0x000105032e48();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c4e0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar1 = param_1;
  func_0x00010be60dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfb7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126b3f88;
  func_0x00010bf9fac0(PTR_PTR_1126b3f88);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1050326a4; end: 1050326b3;  */

void FUN_1050326a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1050326b4; end: 10503277b; -[SCDeepLinkMiniProfileController _presentAddFriendPrompt] */

void FUN_1050326b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = param_1;
  func_0x00010be60dc0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x48) != 0 && lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010bdc1b20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf23ba0(uVar5,param_2,lVar2,param_1,uVar1,0,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,uVar5);
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10503277c; end: 1050327cf; -[SCDeepLinkMiniProfileController _modalContainer] */

void FUN_10503277c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0b50;
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0cf9e0(puVar1,param_2,param_1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050327d0; end: 10503286f; -[SCDeepLinkMiniProfileController .cxx_destruct] */

void FUN_1050327d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105032870; end: 105032983; +[SCFriendDeepLinkHelper makeFriendDeeplinkRequest:] */

void FUN_105032870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be23b20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be455c0(param_1,param_2,uVar1);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b3fb0;
    _objc_alloc_init(PTR_PTR_1126b3fb0);
    func_0x00010c18a760();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a0440(puVar3,param_2,uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010be1d120(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be452c0(param_1,param_2,uVar2);
    if ((int)param_1 != 0) {
      func_0x00010c1bdde0(puVar3,param_2,uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105032984; end: 105032987; +[SCFriendDeepLinkHelper getUsernameFromFriendDeeplink:] */

void FUN_105032984(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be23b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getUsername__112566868);
  return;
}



/* Entry: 105032988; end: 105032ad3; +[SCFriendDeepLinkHelper makeFriendDeeplinkRequestWithResult:] */

void FUN_105032988(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be455c0(param_1,param_2,lVar1);
  if ((int)uVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b3fb0;
    _objc_alloc_init(PTR_PTR_1126b3fb0);
    func_0x00010c18a760();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1a0440(puVar3,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c099720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar5 = param_3;
      func_0x00010c099720(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be452c0(param_1,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      if ((int)param_1 != 0) {
        lVar4 = param_3;
        func_0x00010c099720(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bdde0(puVar3,param_2,lVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar4);
      }
    }
    puVar6 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105032ad4; end: 105032adf; +[SCFriendDeepLinkHelper _getUsername:] */

void FUN_105032ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_pathComponentAtIndex__11261b028,1);
  return;
}



/* Entry: 105032ae0; end: 105032aef; +[SCFriendDeepLinkHelper _getAutoFriendLinkId:] */

void FUN_105032ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_pathComponentAtIndex_forceLowerC_11261b030,2,0);
  return;
}



/* Entry: 105032af0; end: 105032b47; +[SCFriendDeepLinkHelper _isValidUsername:] */

bool FUN_105032af0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (uVar2 = param_3, func_0x00010c08fa60(), uVar2 == 0)) {
    bVar1 = false;
  }
  else {
    uVar2 = param_3;
    func_0x00010c08fa60(param_3);
    bVar1 = uVar2 < 0x33;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105032b48; end: 105032b73; +[SCFriendDeepLinkHelper _isValidAutoFriendLinkId:] */

bool FUN_105032b48(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c08fa60(param_3);
    return param_3 != 0;
  }
  return false;
}



/* Entry: 105032b74; end: 105032d9f; -[SCFriendProfileDeepLinkProcessorPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105032b74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined8 uVar16;
  
  puVar1 = PTR_PTR_1126b3fb8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112719f1c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112719f20;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + _DAT_112719f24;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_112719f28;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112719f2c;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + _DAT_112719f30);
  lVar11 = param_1 + _DAT_112719f34;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_112719f38;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112719f3c;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e5a0(puVar1,param_2,lVar4,lVar5,lVar6,lVar8,lVar10,uVar16,lVar11,lVar13,lVar15);
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
  param_1 = param_1 + _DAT_112719f40;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105032da0; end: 105032e47; -[SCFriendProfileDeepLinkProcessorPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105032da0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112719f30,0);
  _objc_destroyWeak(param_1 + _DAT_112719f34);
  _objc_destroyWeak(param_1 + _DAT_112719f3c);
  _objc_destroyWeak(param_1 + _DAT_112719f2c);
  _objc_destroyWeak(param_1 + _DAT_112719f28);
  _objc_destroyWeak(param_1 + _DAT_112719f24);
  _objc_destroyWeak(param_1 + _DAT_112719f20);
  _objc_destroyWeak(param_1 + _DAT_112719f1c);
  _objc_destroyWeak(param_1 + _DAT_112719f44);
  _objc_destroyWeak(param_1 + _DAT_112719f38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112719f40);
  return;
}



/* Entry: 105032e48; end: 105032e77;  */

void FUN_105032e48(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc34d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc34d8,
                      &PTR____CFConstantStringClassReference_110dc34f8,0);
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



/* Entry: 105032e78; end: 105032ea3; +[SCGrapheneFriendDeepLinkMetric attempt] */

void FUN_105032e78(void)

{
  _objc_alloc(PTR_PTR_1126b3f88);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105032ea4; end: 105032ecf; +[SCGrapheneFriendDeepLinkMetric fail] */

void FUN_105032ea4(void)

{
  _objc_alloc(PTR_PTR_1126b3f88);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105032ed0; end: 105032efb; +[SCGrapheneFriendDeepLinkMetric success] */

void FUN_105032ed0(void)

{
  _objc_alloc(PTR_PTR_1126b3f88);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105032efc; end: 105032f9b; -[SCGrapheneFriendDeepLinkMetric description] */

void FUN_105032efc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc3518;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc3518,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e5b60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105032f9c; end: 1050330f3; -[SCGrapheneRegistry friendDeepLinkGraphene] */

void FUN_105032f9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105033024;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b92f0 != -1) {
    func_0x00010002a2fc(0x1136b92f0,&puStack_48);
  }
  uVar1 = uRam00000001136b92e8;
  _objc_retain(uRam00000001136b92e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050330f4; end: 105033107;  */

void FUN_1050330f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dc3538,0,0);
  return;
}



/* Entry: 105033108; end: 10503320b; -[SCCallFriendAction initWithFriendSnapchatter:context:callLauncherServices:circumstanceEngine:] */

undefined1 *
FUN_105033108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5b68;
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
    *(undefined8 *)((long)puVar1 + 0x30) = 2;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10503320c; end: 1050332db; -[SCCallFriendAction prominentActionButton] */

void FUN_10503320c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b3fc0;
  _objc_alloc(PTR_PTR_1126b3fc0);
  func_0x00010c00a2c0();
  puVar2 = PTR_PTR_1126b3fc8;
  _objc_alloc(PTR_PTR_1126b3fc8);
  func_0x000100bf0c60(*(undefined8 *)(param_1 + 8),0);
  func_0x00010c03b4e0(puVar2);
  func_0x00010c28d0c0(puVar1);
  puVar3 = puVar1;
  func_0x00010c1af000(puVar1);
  func_0x00010506bb04();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1);
  _objc_release(puVar3);
  func_0x00010c160fc0(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050332dc; end: 1050332df; -[SCCallFriendAction prominentActionView:handleActionWithModel:] */

void FUN_1050332dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be25070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAction_112566db8);
  return;
}



/* Entry: 1050332e0; end: 1050333f3; -[SCCallFriendAction _handleAction] */

void FUN_1050332e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10),param_2,0x9b);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf280c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfb7880(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 1050333f4; end: 105033427;  */

void FUN_1050333f4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc98c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105033428; end: 1050334b3; -[SCCallFriendAction _afterDetachCallFriendWithCalllauncher:] */

void FUN_105033428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b01c0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294260(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c24e080(param_3,param_2,puVar1,1,9);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050334b4; end: 1050334bb; -[SCCallFriendAction actionSheetCell] */

undefined8 FUN_1050334b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1050334bc; end: 1050334c3; -[SCCallFriendAction position] */

undefined8 FUN_1050334bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1050334c4; end: 105033517; -[SCCallFriendAction .cxx_destruct] */

void FUN_1050334c4(long param_1)

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



/* Entry: 105033518; end: 105033607; -[SCChatFriendAction initWithFriendId:context:navigationServices:] */

undefined1 *
FUN_105033518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e5b70;
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
    *(undefined8 *)((long)puVar1 + 0x28) = 1;
    uVar2 = param_5;
    func_0x00010c0d6760(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105033608; end: 1050336c3; -[SCChatFriendAction prominentActionButton] */

void FUN_105033608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b3fc0;
  _objc_alloc(PTR_PTR_1126b3fc0);
  func_0x00010c00a2c0();
  puVar2 = PTR_PTR_1126b3fc8;
  _objc_alloc(PTR_PTR_1126b3fc8);
  func_0x00010c03b4e0();
  func_0x00010c28d0c0(puVar1,param_2,puVar2);
  puVar3 = puVar1;
  func_0x00010c1af000(puVar1,param_2,1);
  FUN_10506baec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc35b8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050336c4; end: 1050336c7; -[SCChatFriendAction prominentActionView:handleActionWithModel:] */

void FUN_1050336c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be25070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAction_112566db8);
  return;
}



/* Entry: 1050336c8; end: 10503379b; -[SCChatFriendAction _handleAction] */

void FUN_1050336c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10),param_2,0);
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfb7880(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10503379c; end: 1050337c7;  */

void FUN_10503379c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc98e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050337c8; end: 1050338b3; -[SCChatFriendAction _afterDetachNavigateToChat] */

void FUN_1050337c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb7920();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar5 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar6 = lVar5;
    func_0x00010010fab4(lVar5,PTR_DAT_1126a4ee8);
    lVar1 = lVar5;
    if ((int)lVar6 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar5);
    func_0x00010c183a80(lVar1);
    func_0x00010c0d5fa0(lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1050338b4; end: 1050338bb; -[SCChatFriendAction actionSheetCell] */

undefined8 FUN_1050338b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1050338bc; end: 1050338c3; -[SCChatFriendAction position] */

undefined8 FUN_1050338bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1050338c4; end: 105033907; -[SCChatFriendAction .cxx_destruct] */

void FUN_1050338c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105033908; end: 105033977; -[SCFriendActionSheetModalViewController initWithSourcePageType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105033908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5b78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112719f74) = param_3;
    func_0x00010c18b480(puVar1);
    func_0x00010c1c8b80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105033978; end: 105033987; -[SCFriendActionSheetModalViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105033978(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112719f74);
}



/* Entry: 105033988; end: 105033d83; -[SCFriendActionSheetEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105033988(long param_1)

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
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  
  lVar20 = (long)_DAT_112719f78;
  lVar1 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    puVar16 = (undefined *)(param_1 + lVar20);
    _objc_loadWeakRetained(puVar16);
    puVar17 = puVar16;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = (undefined *)(param_1 + lVar20);
    _objc_loadWeakRetained(puVar18);
    func_0x00010bfb78e0(puVar17);
  }
  else {
    puVar16 = PTR_PTR_1126b3fd0;
    _objc_alloc();
    lVar1 = param_1 + lVar20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c247a20();
    func_0x00010c04aae0();
    _objc_release(lVar1);
    lVar1 = param_1 + lVar20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_storeWeak(param_1 + _DAT_112719f7c,puVar16);
    lVar1 = param_1 + _DAT_112719f80;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf1c460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5e220();
    *(long *)(param_1 + _DAT_112719f84) = lVar4;
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar17 = PTR_PTR_1126b3fd8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112719fb0;
    _objc_loadWeakRetained();
    lVar5 = lVar1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112719f88;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010bf50420();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112719f8c;
    _objc_loadWeakRetained();
    lVar4 = param_1 + _DAT_112719f90;
    _objc_loadWeakRetained();
    lVar7 = param_1 + _DAT_112719f98;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_112719f9c;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bfe7760();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + lVar20;
    _objc_loadWeakRetained();
    lVar13 = param_1 + _DAT_112719fa0;
    _objc_loadWeakRetained();
    lVar14 = param_1 + _DAT_112719fa4;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05d520();
    lVar21 = (long)_DAT_112719fa8;
    uVar19 = *(undefined8 *)(param_1 + lVar21);
    *(undefined **)(param_1 + lVar21) = puVar17;
    _objc_release(uVar19);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar1);
    func_0x00010c1e1580(*(undefined8 *)(param_1 + lVar21));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar21));
    lVar1 = param_1 + lVar20;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      func_0x00010bfaa400(param_1);
      goto LAB_105033d60;
    }
    puVar17 = (undefined *)(param_1 + lVar20);
    _objc_loadWeakRetained(puVar17);
    puVar18 = puVar17;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be79e60(param_1);
  }
  _objc_release(puVar18);
  _objc_release(puVar17);
LAB_105033d60:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar16);
  return;
}



/* Entry: 105033d84; end: 105033f5f; -[SCFriendActionSheetEntryPoint fetchSnapchatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105033d84(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_68,param_1);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112719fb4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar9;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112719f78;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = lVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar7 = auStack_68;
  _objc_copyWeak(auStack_70,puVar7);
  puVar8 = puVar4;
  func_0x00010c09d7c0(lVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_destroyWeak(auStack_70);
  puVar5 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(puVar5);
  _objc_retain(puVar8);
  _objc_retain(puVar7);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  puVar6 = puVar7;
  func_0x00010bfb1920(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010bfd2200(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105033f60; end: 105033fe7;  */

void FUN_105033f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfd2200(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105033fe8; end: 10503406b; -[SCFriendActionSheetEntryPoint handlePublicInfoResult:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105033fe8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_112719f78;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c205e40();
  _objc_release(lVar1);
  if ((param_3 == 0) || (param_4 != 0)) {
    func_0x00010bdfb780(param_1,param_2,0,0);
  }
  else {
    func_0x00010be79e60(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10503406c; end: 10503435f; -[SCFriendActionSheetEntryPoint _presentActionSheet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503406c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
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
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar19 = (long)_DAT_112719f78;
  uVar1 = param_1 + lVar19;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bfe2700();
  lVar3 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0daca0();
  lVar5 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c0dac60();
  lVar7 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c247a20();
  lVar9 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c247b60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar11);
  uVar16 = param_3;
  if ((uVar2 & 1) == 0) {
    lVar12 = lVar11;
    func_0x00010bfce860();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + lVar19;
    _objc_loadWeakRetained(lVar13);
    lVar14 = lVar13;
    func_0x00010c237b80();
    lVar19 = param_1 + lVar19;
    _objc_loadWeakRetained();
    lVar15 = lVar19;
    func_0x00010bfe2d20();
    func_0x000107d53bb4(param_3,lVar4,lVar6,lVar8,lVar10,1,lVar12,lVar14,(char)lVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
  }
  else {
    lVar14 = lVar11;
    func_0x00010bfe27c0();
    lVar12 = param_1 + lVar19;
    _objc_loadWeakRetained(lVar12);
    lVar13 = lVar12;
    func_0x00010bfce860();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d53cc8(param_3,lVar4,lVar6,lVar8,lVar10,lVar14,lVar13);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar1);
  uVar2 = uVar16;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126b3fe0;
  _objc_opt_class(PTR_PTR_1126b3fe0);
  uVar18 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar17);
  uVar1 = uVar2;
  if ((uVar18 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  puVar17 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c2c0(*(undefined8 *)(param_1 + _DAT_112719fa8));
  _objc_release(puVar17);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(uVar16);
  _objc_release(param_3);
  return;
}



/* Entry: 105034360; end: 10503439f;  */

void FUN_105034360(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be0de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050343a0; end: 105034407; -[SCFriendActionSheetEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050343a0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_112719fa8));
  func_0x00010bdfb780(param_1);
  puStack_28 = PTR_PTR_1126e5b80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105034408; end: 1050344cf; -[SCFriendActionSheetEntryPoint friendActionSheetShowCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105034408(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + _DAT_112719f78;
  _objc_loadWeakRetained();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105034494;
  puStack_30 = &UNK_110842e18;
  lStack_28 = lVar1;
  _objc_retain();
  func_0x00010bdfb780(param_1,param_2,0,&puStack_48);
  _objc_release(lStack_28);
  _objc_release(lVar1);
  return;
}



/* Entry: 1050344d0; end: 105034597; -[SCFriendActionSheetEntryPoint friendActionSheetShowProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050344d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + _DAT_112719f78;
  _objc_loadWeakRetained();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10503455c;
  puStack_30 = &UNK_110842e18;
  lStack_28 = lVar1;
  _objc_retain();
  func_0x00010bdfb780(param_1,param_2,0,&puStack_48);
  _objc_release(lStack_28);
  _objc_release(lVar1);
  return;
}



/* Entry: 105034598; end: 1050346d7; -[SCFriendActionSheetEntryPoint friendActionSheetShowProfileForSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105034598(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_112719f78;
  _objc_loadWeakRetained();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105034654;
  puStack_48 = &UNK_110841f80;
  lStack_40 = lVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(lVar1);
  func_0x00010bdfb780(param_1,param_2,0,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(lStack_40);
  _objc_release(param_3);
  _objc_release(lVar1);
  return;
}



/* Entry: 1050346d8; end: 1050347d3; -[SCFriendActionSheetEntryPoint friendActionSheetNavigateToChat:deepLinkURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1050346d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = (long)_DAT_112719f78;
  uVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar6;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfb7900(lVar5);
    _objc_release(param_1);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (uint)uVar3 & 1;
}



/* Entry: 1050347d4; end: 1050348af; -[SCFriendActionSheetEntryPoint friendActionSheetShowMap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050347d4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112719f78;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained();
    _objc_retain();
    func_0x00010bdfb780(param_1);
    _objc_release(lVar4);
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 1050348b0; end: 1050348eb;  */

void FUN_1050348b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb7940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050348ec; end: 1050348f7; -[SCFriendActionSheetEntryPoint friendActionDismissActionSheetWithCompletion:] */

void FUN_1050348ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfb790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__detachUIAnimated_completion__11255c780,1,param_3);
  return;
}



/* Entry: 1050348f8; end: 105034a6b; -[SCFriendActionSheetEntryPoint _detachUIAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050348f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  if (*(char *)(param_1 + _DAT_112719fac) != '\x01') {
    *(undefined1 *)(param_1 + _DAT_112719fac) = 1;
    lVar5 = (long)_DAT_112719f78;
    lVar2 = param_1 + lVar5;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + lVar5;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bfb78e0(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar4 = (long)_DAT_112719f7c;
    lVar2 = param_1 + lVar4;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      _objc_storeWeak(param_1 + lVar4,0);
      param_1 = param_1 + lVar5;
      _objc_loadWeakRetained();
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_retain(param_4);
      _objc_retain(param_1);
      func_0x00010c0f9680(puVar1);
      _objc_release(param_4);
      _objc_release(param_1);
      _objc_release(param_1);
      goto LAB_105034a4c;
    }
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
LAB_105034a4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105034a6c; end: 105034aa7;  */

void FUN_105034a6c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105034aa8; end: 10503516f; -[SCFriendActionSheetEntryPoint _factory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105034aa8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
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
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  long lVar62;
  long lVar63;
  
  puVar1 = PTR_PTR_1126b3fe8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112719fb0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112719fb4;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_112719fb8;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_112719fbc;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = (long)_DAT_112719fc0;
  lVar8 = param_1 + lVar62;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112719fc4;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar62;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1 + lVar62;
  _objc_loadWeakRetained();
  lVar14 = lVar62;
  func_0x00010bf620a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112719fc8;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112719fcc;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112719fd0;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c14c300();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112719fd4;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c24a720();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112719fd8;
  _objc_loadWeakRetained();
  lVar24 = param_1 + _DAT_112719fdc;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c0fc460();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112719f88;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_112719fe0;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_112719fe4;
  _objc_loadWeakRetained();
  lVar31 = param_1 + _DAT_112719fa4;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar58 = *(undefined8 *)(param_1 + _DAT_112719fe8);
  lVar33 = param_1 + _DAT_112719f8c;
  _objc_loadWeakRetained();
  lVar34 = param_1 + _DAT_112719fec;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010bfb98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + _DAT_112719ff0;
  _objc_loadWeakRetained();
  lVar37 = param_1 + _DAT_112719ff4;
  _objc_loadWeakRetained();
  lVar63 = (long)_DAT_112719ff8;
  lVar38 = param_1 + lVar63;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c08e1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = param_1 + lVar63;
  _objc_loadWeakRetained();
  lVar40 = lVar63;
  func_0x00010c08e1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = *(undefined8 *)(param_1 + _DAT_112719ffc);
  lVar41 = param_1 + _DAT_11271a000;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010bfb8f40();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_11271a004;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010bf1b320();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_11271a008;
  _objc_loadWeakRetained();
  uVar60 = *(undefined8 *)(param_1 + _DAT_11271a00c);
  lVar46 = param_1 + _DAT_11271a010;
  _objc_loadWeakRetained();
  lVar47 = param_1 + _DAT_11271a014;
  _objc_loadWeakRetained();
  lVar48 = param_1 + _DAT_11271a018;
  _objc_loadWeakRetained();
  uVar61 = *(undefined8 *)(param_1 + _DAT_11271a01c);
  lVar49 = param_1 + _DAT_11271a020;
  _objc_loadWeakRetained();
  lVar50 = lVar49;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + _DAT_11271a024;
  _objc_loadWeakRetained();
  lVar52 = lVar51;
  func_0x00010c23c800();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + _DAT_112719f78;
  _objc_loadWeakRetained();
  lVar54 = lVar53;
  func_0x00010c117020();
  lVar55 = param_1 + _DAT_11271a028;
  _objc_loadWeakRetained();
  lVar56 = lVar55;
  func_0x00010bfa0c40();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = lVar56;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e600(puVar1,param_2,lVar3,lVar4,lVar5,lVar7,lVar9,lVar11,lVar13,lVar14,lVar16,
                      lVar18,lVar20,lVar22,lVar23,lVar25,lVar27,lVar29,lVar30,lVar32,uVar58,lVar33,
                      lVar35,lVar36,lVar37,lVar39,lVar40,uVar59,lVar42,lVar44,lVar45,uVar60,lVar46,
                      lVar47,lVar48,uVar61,lVar50,lVar52,lVar54,lVar57,
                      *(undefined8 *)(param_1 + _DAT_112719f84),
                      *(undefined8 *)(param_1 + _DAT_11271a02c));
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar53);
  _objc_release(lVar52);
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
  _objc_release(lVar63);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
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
  _objc_release(lVar62);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


