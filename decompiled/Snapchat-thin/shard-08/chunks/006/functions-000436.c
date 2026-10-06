/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106411d60; end: 106411f1b; -[SCAdPreparationManager loadStatusForDataModel:snapCount:] */

long FUN_106411d60(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef60a0();
  if ((uVar1 == 5) || (uVar1 = param_3, func_0x00010bef60a0(), uVar1 == 0x16)) {
    uVar2 = param_3;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (param_4 <= uVar1) {
      uVar1 = param_4;
    }
    func_0x00010be4e860(param_1,param_2,param_3,uVar1);
  }
  else {
    uVar1 = param_3;
    func_0x00010bef60a0();
    uVar2 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0x12) {
      uVar3 = uVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c117ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar2);
      lVar4 = *(long *)(param_1 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c11b1e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c259cc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bf52680(uVar1);
      lVar6 = lVar4;
      func_0x00010bf64700(lVar4,param_2,uVar2,uVar3,uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(lVar4);
      if (lVar6 - 1U < 6) {
        param_1 = *(long *)(&UNK_10dddbf00 + (lVar6 - 1U) * 8);
      }
      else {
        param_1 = 0;
      }
    }
    else {
      uVar1 = uVar2;
      func_0x00010bf529e0();
      func_0x00010be4e860(param_1,param_2,param_3,uVar1);
      uVar1 = uVar2;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106411f1c; end: 106412207; -[SCAdPreparationManager _loadStatusForDataModel:snapCount:] */

undefined8 * FUN_106411f1c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
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
  puVar2 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bef60a0();
  if (puVar1 == (undefined8 *)0x7) {
    puVar9 = (undefined8 *)0x3;
  }
  else {
    puVar2 = param_3;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(puVar1);
    puVar2 = &uStack_130;
    puVar10 = puVar1;
    func_0x00010bf52a60();
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      iVar13 = 0;
      lVar11 = *plStack_120;
      do {
        puVar9 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(puVar1);
          }
          puVar12 = *(undefined8 **)(lStack_128 + (long)puVar9 * 8);
          uVar7 = *(undefined8 *)(param_1 + 0x50);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar3;
          func_0x00010bf925a0();
          puVar4 = puVar12;
          func_0x0001084c4f90(puVar12,uVar7,uVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          _objc_release(uVar7);
          lVar5 = *(long *)(param_1 + 0x58);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          puVar2 = puVar4;
          func_0x00010c0c56e0();
          _objc_release(lVar5);
          if (lVar6 != 3) {
            if (lVar6 == 1) {
              puVar9 = (undefined8 *)0x5;
            }
            else {
              if (lVar6 != 2) goto LAB_10641212c;
              puVar9 = (undefined8 *)0x6;
            }
LAB_1064121a4:
            _objc_release(puVar4);
            _objc_release(puVar1);
            goto LAB_1064121b8;
          }
          uVar7 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c242040();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          puVar2 = puVar12;
          func_0x00010c0c4d40();
          _objc_release(puVar12);
          _objc_release(uVar7);
          if ((int)uVar8 == 0) {
            puVar9 = (undefined8 *)0x8;
            goto LAB_1064121a4;
          }
          iVar13 = iVar13 + 1;
LAB_10641212c:
          _objc_release(puVar4);
          puVar9 = (undefined8 *)((long)puVar9 + 1);
        } while (puVar10 != puVar9);
        puVar2 = &uStack_130;
        puVar10 = puVar1;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined8 *)0x0);
      puVar10 = (undefined8 *)(long)iVar13;
    }
    _objc_release(puVar1);
    puVar4 = puVar1;
    func_0x00010bf529e0();
    puVar9 = (undefined8 *)0x7;
    if (puVar4 != puVar10) {
      puVar9 = (undefined8 *)0x4;
    }
LAB_1064121b8:
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  uVar7 = param_3[4];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  FUN_1063fc8d0();
  _objc_release(uVar7);
  if ((int)uVar8 != 0) {
    uVar8 = param_3[0x15];
    func_0x00010c130fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3[0x15];
    param_3[0x15] = uVar8;
    _objc_release(uVar7);
  }
  _objc_retain(puVar2);
  uVar8 = param_3[0x14];
  param_3[0x14] = puVar2;
  _objc_release(uVar8);
  puVar1 = puVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar10 != (undefined8 *)0x0) {
    uVar8 = param_3[0xd];
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bfe5ec0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf74440(uVar8);
    _objc_release(puVar1);
    _objc_release(uVar8);
    uVar8 = param_3[9];
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107d80();
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return puVar2;
}



/* Entry: 106412208; end: 10641232b; -[SCAdPreparationManager setPendingInsertAdPod:] */

void FUN_106412208(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1063fc8d0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c130fa0(uVar2,param_2,*(undefined8 *)(param_1 + 0xa0),param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    _objc_release(uVar1);
  }
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa0) = param_3;
  _objc_release(uVar2);
  lVar3 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf74440(uVar2,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107d80();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10641232c; end: 106412343; -[SCAdPreparationManager delegate] */

void FUN_10641232c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106412344; end: 10641234f; -[SCAdPreparationManager setDelegate:] */

void FUN_106412344(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 106412350; end: 106412357; -[SCAdPreparationManager currentAdPlacement] */

undefined8 FUN_106412350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106412358; end: 106412387; -[SCAdPreparationManager setCurrentAdPlacement:] */

void FUN_106412358(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106412388; end: 10641238f; -[SCAdPreparationManager pendingInsertAdPod] */

undefined8 FUN_106412388(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106412390; end: 106412397; -[SCAdPreparationManager brandSafetyInsertAdPods] */

undefined8 FUN_106412390(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 106412398; end: 1064123c7; -[SCAdPreparationManager setBrandSafetyInsertAdPods:] */

void FUN_106412398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064123c8; end: 1064123cf; -[SCAdPreparationManager viewLocation] */

undefined8 FUN_1064123c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1064123d0; end: 1064123d7; -[SCAdPreparationManager setViewLocation:] */

void FUN_1064123d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 1064123d8; end: 1064124db; -[SCAdPreparationManager .cxx_destruct] */

void FUN_1064123d8(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x88,0);
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



/* Entry: 1064124dc; end: 106412503; -[SCAdVerticalEndCardExitDeferral pendingPageId] */

void FUN_1064124dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106412504; end: 10641259f; -[SCAdVerticalEndCardExitDeferral beginForPage:adIdentifier:] */

void FUN_106412504(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _objc_release(uVar2);
  _objc_release(param_3);
  uVar3 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar3;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1064125a0; end: 1064125ef; -[SCAdVerticalEndCardExitDeferral appendAction:] */

void FUN_1064125a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00(param_3);
  uVar1 = param_3;
  _objc_retainBlock();
  func_0x00010befa120(uVar2,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064125f0; end: 1064126b3; -[SCAdVerticalEndCardExitDeferral resolveForOpenedPage:adIdentifier:] */

void FUN_1064125f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar1 = PTR_PTR_1126ca220;
    func_0x00010c0f1420(PTR_PTR_1126ca220,param_2,param_3);
    if ((int)puVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0720c0(uVar2,param_2,param_4);
      if ((int)uVar2 != 0) {
        uVar3 = *(ulong *)(param_1 + 0x10);
        uVar2 = param_3;
        func_0x00010be36bc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(uVar3,param_2,uVar2);
        _objc_release(uVar2);
        if ((uVar3 & 1) == 0) {
          func_0x00010be01f60(param_1);
          goto LAB_106412688;
        }
      }
    }
    func_0x00010bf42760(param_1);
  }
LAB_106412688:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064126b4; end: 1064127c3; -[SCAdVerticalEndCardExitDeferral commit] */

void FUN_1064126b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
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
  lVar3 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar3);
  func_0x00010be01f60(param_1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        (**(code **)(*(long *)(lStack_108 + lVar5 * 8) + 0x10))();
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar3 + 8);
  *(undefined8 *)(lVar3 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064127c4; end: 1064127ff; -[SCAdVerticalEndCardExitDeferral _discardPendingExit] */

void FUN_1064127c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106412800; end: 10641283b; -[SCAdVerticalEndCardExitDeferral .cxx_destruct] */

void FUN_106412800(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10641283c; end: 10641284b; +[SCAdVerticalEndCardHelper endCardIdForPrimaryId:] */

void FUN_10641283c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110e4e438);
  return;
}



/* Entry: 10641284c; end: 1064128d3; +[SCAdVerticalEndCardHelper endCardIsInjectedInController:primaryId:] */

bool FUN_10641284c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf94400(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c1014c0(param_3,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1064128d4; end: 106412943; +[SCAdVerticalEndCardHelper pageIsVerticalEndCardPrimary:] */

uint FUN_1064128d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) ||
     (uVar1 = param_1,
     func_0x00010be6f7a0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110e4e458),
     (int)uVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    func_0x00010be6f7a0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110e4e478);
    uVar2 = (uint)param_1 ^ 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106412944; end: 1064129b3; +[SCAdVerticalEndCardHelper pageIsVerticalEndCard:] */

undefined8 FUN_106412944(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if ((param_3 == 0) ||
     (uVar1 = param_1,
     func_0x00010be6f7a0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110e4e458),
     (int)uVar1 == 0)) {
    param_1 = 0;
  }
  else {
    func_0x00010be6f7a0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110e4e478);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1064129b4; end: 106412a0f; +[SCAdVerticalEndCardHelper pageIsVerticalEndCardAd:] */

ulong FUN_1064129b4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f1440(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010c0f1400(param_1,param_2,param_3);
  }
  else {
    param_1 = 1;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106412a10; end: 106412a17; +[SCAdVerticalEndCardHelper shouldUseVerticalEndCardForPrimarySnap:] */

void FUN_106412a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0780f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isMultiSegmentVerticalEndCard_1125fba48);
  return;
}



/* Entry: 106412a18; end: 106412a97; +[SCAdVerticalEndCardHelper _pagePropertyBool:key:] */

undefined8
FUN_106412a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106412a98; end: 106412b33; -[SCAdPlaylistItemView initWithIsAd:playlistItemId:playlistItemsRemaining:playlistIdx:] */

undefined1 *
FUN_106412a98(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f1260;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106412b34; end: 106412b57; -[SCAdPlaylistItemView copyWithZone:] */

undefined8 FUN_106412b34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106412b58; end: 106412bd3; -[SCAdPlaylistItemView hash] */

ulong * FUN_106412b58(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  puVar2 = &uStack_48;
  uStack_40 = uVar1;
  func_0x000100505190(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_106412c78;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((((char)puVar2[1] != (char)param_3[1] || (puVar2[3] != param_3[3])) ||
        (puVar2[4] != param_3[4])))) {
      puVar4 = (ulong *)0x0;
      goto LAB_106412c78;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_106412c78;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_106412c78:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 106412bd4; end: 106412c93; -[SCAdPlaylistItemView isEqual:] */

long FUN_106412bd4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106412c78;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
        (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_106412c78;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106412c78;
    }
  }
  lVar3 = 1;
LAB_106412c78:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106412c94; end: 106412c9b; -[SCAdPlaylistItemView isAd] */

undefined1 FUN_106412c94(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106412c9c; end: 106412ca3; -[SCAdPlaylistItemView playlistItemId] */

undefined8 FUN_106412c9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106412ca4; end: 106412cab; -[SCAdPlaylistItemView playlistItemsRemaining] */

undefined8 FUN_106412ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106412cac; end: 106412cb3; -[SCAdPlaylistItemView playlistIdx] */

undefined8 FUN_106412cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106412cb4; end: 106412cbf; -[SCAdPlaylistItemView .cxx_destruct] */

void FUN_106412cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106412cc0; end: 106412d97; -[SCAdPlaylistGroupChange initWithPlaylistGroupId:optionalAdSlotIndexes:priorityAdSlotIndexes:] */

undefined1 *
FUN_106412cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f1268;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106412d98; end: 106412dbb; -[SCAdPlaylistGroupChange copyWithZone:] */

undefined8 FUN_106412d98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106412dbc; end: 106412dc3; -[SCAdPlaylistGroupChange playlistGroupId] */

undefined8 FUN_106412dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106412dc4; end: 106412dcb; -[SCAdPlaylistGroupChange optionalAdSlotIndexes] */

undefined8 FUN_106412dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106412dcc; end: 106412dd3; -[SCAdPlaylistGroupChange priorityAdSlotIndexes] */

undefined8 FUN_106412dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106412dd4; end: 106412e0f; -[SCAdPlaylistGroupChange .cxx_destruct] */

void FUN_106412dd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106412e10; end: 106412e57; -[SCAdSlot initWithLoadStatus:] */

void FUN_106412e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1270;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 106412e58; end: 106412e7b; -[SCAdSlot copyWithZone:] */

undefined8 FUN_106412e58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106412e7c; end: 106412e8b; -[SCAdSlot hash] */

long FUN_106412e7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 106412e8c; end: 106412f13; -[SCAdSlot isEqual:] */

bool FUN_106412e8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106412f14; end: 106412f1b; -[SCAdSlot loadStatus] */

undefined8 FUN_106412f14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106412f1c; end: 106412fc7; -[SCAdPublisherRequest initWithAdRequestClientId:targetingMap:] */

undefined1 *
FUN_106412f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1278;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106412fc8; end: 106412feb; -[SCAdPublisherRequest copyWithZone:] */

undefined8 FUN_106412fc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106412fec; end: 10641305f; -[SCAdPublisherRequest hash] */

undefined8 * FUN_106412fec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1064130e0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1064130ec;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1064130ec;
        }
        goto LAB_1064130e0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1064130ec:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106413060; end: 106413107; -[SCAdPublisherRequest isEqual:] */

long FUN_106413060(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1064130e0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1064130ec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1064130ec;
        }
        goto LAB_1064130e0;
      }
    }
    lVar3 = 0;
  }
LAB_1064130ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106413108; end: 10641310f; -[SCAdPublisherRequest adRequestClientId] */

undefined8 FUN_106413108(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106413110; end: 106413117; -[SCAdPublisherRequest targetingMap] */

undefined8 FUN_106413110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106413118; end: 106413147; -[SCAdPublisherRequest .cxx_destruct] */

void FUN_106413118(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106413148; end: 106413467; -[SCAdOperaMediaManager initWithPlaybackAssetRepository:adContentDelivery:promotedStoryStateProvider:adConfigProvider:adConfigProviderV2:adCrashLogger:] */

undefined1 *
FUN_106413148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f1280;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar5);
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_5;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_8;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar2;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + 0x78) = 0;
    func_0x00010befa240(*(undefined8 *)((long)puVar1 + 0x70));
    func_0x00010befa240(*(undefined8 *)((long)puVar1 + 0x70));
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067f60();
    *(undefined8 *)((long)puVar1 + 0x80) = uVar5;
    _objc_release(uVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106413468; end: 10641368b; -[SCAdOperaMediaManager prepareProfileIcon:mediaId:contexts:completion:] */

void FUN_106413468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010c10a4c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c1169a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      if (param_6 != 0) {
        _objc_initWeak(auStack_58,param_1);
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_10641368c;
        puStack_80 = &UNK_110857fd0;
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_4);
        uStack_78 = param_4;
        _objc_retain(param_6);
        lStack_68 = param_6;
        _objc_retain(lVar1);
        lStack_70 = lVar1;
        func_0x0001000d76cc("APPSTORE",&puStack_98);
        _objc_release(lStack_70);
        _objc_release(lStack_68);
        _objc_release(uStack_78);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
      goto LAB_10641362c;
    }
  }
  func_0x00010be78f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_6;
  _objc_retain(param_6);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_1);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_1);
LAB_10641362c:
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10641368c; end: 10641372f;  */

void FUN_10641368c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c0df780(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x28));
    _objc_release(puVar3);
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106413730; end: 106413743;  */

void FUN_106413730(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010641373c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106413744; end: 106413747; -[SCAdOperaMediaManager removeProfileIconForMediaId:] */

void FUN_106413744(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12dc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removePreparedAdMediaForMediaId__112629138);
  return;
}



/* Entry: 106413748; end: 10641393b; -[SCAdOperaMediaManager prepareToViewAdMedia:profileInfo:mediaId:contexts:forceFullDownload:completion:] */

void FUN_106413748(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar1 = param_1;
  func_0x00010c10a4c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010be78cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    uVar2 = param_3;
    _objc_retain(param_3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_1);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(param_8);
  }
  else {
    if (param_8 == 0) goto LAB_1064138f0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10641393c;
    puStack_78 = &UNK_1108465d0;
    lStack_70 = param_1;
    _objc_retain(param_5);
    lStack_68 = param_5;
    _objc_retain(param_8);
    lStack_58 = param_8;
    _objc_retain(lVar1);
    lStack_60 = lVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_release(lStack_60);
    _objc_release(lStack_58);
    param_1 = lStack_68;
  }
  _objc_release(param_1);
LAB_1064138f0:
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10641393c; end: 1064139c7;  */

void FUN_10641393c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001064139c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 1064139c8; end: 1064139db;  */

void FUN_1064139c8(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001064139d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1064139dc; end: 1064139e3; -[SCAdOperaMediaManager preparedAdMediaForMediaId:] */

void FUN_1064139dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1064139e4; end: 106413b63; -[SCAdOperaMediaManager _addCacheItems:] */

long FUN_1064139e4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
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
  
  puVar5 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar4 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar4);
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0e00e0(uVar1,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c067ec0();
        func_0x00010c0df760(puVar3,param_2,(int)uVar2 + 1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar3,uVar7);
        _objc_release(puVar3);
        _objc_release(uVar1);
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      lVar6 = lVar4;
      puVar5 = &uStack_130;
      func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  lVar4 = *(long *)(param_3 + 0x30);
  func_0x00010c0e00e0(lVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar6 = lVar4;
    func_0x00010c067ec0();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)lVar6 + -1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x30),param_2,puVar3,puVar5);
    _objc_release(puVar3);
    if (1 < (int)lVar6) {
      lVar6 = 0;
      goto LAB_106413c10;
    }
    func_0x00010c12d3e0(*(undefined8 *)(param_3 + 0x30),param_2,puVar5);
  }
  func_0x00010c12d3e0(*(undefined8 *)(param_3 + 0x18),param_2,puVar5);
  lVar6 = 1;
LAB_106413c10:
  _objc_release(lVar4);
  _objc_release(puVar5);
  return lVar6;
}



/* Entry: 106413b64; end: 106413c37; -[SCAdOperaMediaManager _removeCacheItemForMediaId:] */

undefined8 FUN_106413b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c067ec0();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)lVar2 + -1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar3,param_3);
    _objc_release(puVar3);
    if (1 < (int)lVar2) {
      uVar4 = 0;
      goto LAB_106413c10;
    }
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  }
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  uVar4 = 1;
LAB_106413c10:
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106413c38; end: 10641407f; -[SCAdOperaMediaManager removePreparedAdMediaForMediaId:] */

void FUN_106413c38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  if (lVar7 < 2) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
    if (param_3 == 0) goto LAB_106414040;
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010c0e00e0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010c2750a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 != (undefined *)0x0) {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        puVar3 = puVar2;
        func_0x00010c2750a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar6,param_2,puVar3);
        _objc_release(puVar3);
      }
      puVar3 = puVar2;
      func_0x00010c2744c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 != (undefined *)0x0) {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        puVar3 = puVar2;
        func_0x00010c2744c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar6,param_2,puVar3);
        _objc_release(puVar3);
      }
      puVar3 = puVar2;
      func_0x00010c275100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if ((puVar3 != (undefined *)0x0) &&
         (lVar7 = param_1, func_0x00010be8b880(param_1,param_2,param_3), (int)lVar7 != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x68);
        puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f8 = 0xc2000000;
        pcStack_f0 = FUN_106414080;
        puStack_e8 = &UNK_110842e18;
        _objc_retain(puVar2);
        puStack_e0 = puVar2;
        func_0x00010c0f7fc0(uVar6,param_2,&puStack_100);
        _objc_release(puStack_e0);
      }
      puVar3 = puVar2;
      func_0x00010c2750c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 != (undefined *)0x0) {
        puVar3 = puVar2;
        func_0x00010c2750c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_1;
        func_0x00010be8b880(param_1,param_2,puVar3);
        _objc_release(puVar3);
        if ((int)lVar7 != 0) {
          puVar3 = puVar2;
          func_0x00010c2750c0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c139c60(param_1,param_2,puVar3);
          _objc_release(puVar3);
        }
      }
      puVar3 = puVar2;
      func_0x00010bf055c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 != (undefined *)0x0) {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        puVar3 = puVar2;
        func_0x00010bf055c0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar6,param_2,puVar3);
        _objc_release(puVar3);
      }
      puVar3 = puVar2;
      func_0x00010bf68620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 != (undefined *)0x0) {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        puVar3 = puVar2;
        func_0x00010bf68620(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar6,param_2,puVar3);
        _objc_release(puVar3);
      }
      puVar3 = puVar2;
      func_0x00010bf3fe20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 != (undefined *)0x0) {
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        lStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        plStack_130 = (long *)0x0;
        puVar3 = puVar2;
        func_0x00010bf3fe20();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf00d20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = puVar4;
        func_0x00010bf52a60(puVar4,param_2,&uStack_140,auStack_d8,0x10);
        if (puVar3 != (undefined *)0x0) {
          lVar7 = *plStack_130;
          do {
            puVar8 = (undefined *)0x0;
            do {
              if (*plStack_130 != lVar7) {
                _objc_enumerationMutation(puVar4);
              }
              func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,
                                  *(undefined8 *)(lStack_138 + (long)puVar8 * 8));
              puVar8 = puVar8 + 1;
            } while (puVar3 != puVar8);
            puVar3 = puVar4;
            func_0x00010bf52a60(puVar4,param_2,&uStack_140,auStack_d8,0x10);
          } while (puVar3 != (undefined *)0x0);
        }
        _objc_release(puVar4);
      }
      puVar3 = puVar2;
      func_0x00010c1169a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 != (undefined *)0x0) {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        puVar3 = puVar2;
        func_0x00010c1169a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar6,param_2,puVar3);
        _objc_release(puVar3);
      }
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar7 + -1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar2,param_3);
  }
  _objc_release(puVar2);
LAB_106414040:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c275100(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar2,param_2,uVar6,0);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106414080; end: 106414103;  */

void FUN_106414080(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c275100(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar1,param_2,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106414104; end: 106414173; -[SCAdOperaMediaManager imageForKey:completion:] */

void FUN_106414104(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010bfe78e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,param_1);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106414174; end: 106414223; -[SCAdOperaMediaManager imageForKeySync:] */

void FUN_106414174(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d040(puVar3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_106414208;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_106414208:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106414224; end: 106414273; -[SCAdOperaMediaManager videoAssetFutureForKey:] */

void FUN_106414224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c2991c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106414274; end: 1064143f3; -[SCAdOperaMediaManager videoAssetForKey:] */

void FUN_106414274(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b3e90;
        func_0x00010befdec0(PTR_PTR_1126b3e90);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0ada0(uVar3);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(uVar3);
        lVar1 = 0;
      }
      else {
        lVar1 = param_3;
        FUN_1064143f4(param_3,lVar2,*(undefined8 *)(param_1 + 0x40));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
      }
      _objc_release(lVar2);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x20);
      func_0x00010c0e00e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1064143f4; end: 106414477;  */

void FUN_1064143f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf549c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106414478; end: 10641450b; -[SCAdOperaMediaManager resetVideoAssetForKey:] */

void FUN_106414478(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128420(uVar2,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar2);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10641450c; end: 10641458f; -[SCAdOperaMediaManager mediaExistInMap:mediaId:] */

bool FUN_10641450c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c11d200();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  return lVar1 == 0;
}



/* Entry: 106414590; end: 1064145c3; -[SCAdOperaMediaManager tearDown] */

void FUN_106414590(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1283e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064145c4; end: 10641477f; -[SCAdOperaMediaManager _prepareOperaMediaForAdMedia:profileInfo:mediaId:forceFullDownload:contexts:] */

void FUN_1064145c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010be5e500(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  _objc_retain(param_5);
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_6;
  _objc_retain(param_4);
  func_0x00010c297260(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106414780; end: 10641488f;  */

void FUN_106414780(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99280(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = (undefined *)(param_1 + 0x38);
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010bed47e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106414890; end: 106414a1f; -[SCAdOperaMediaManager _prepareProfileIconForProfileInfo:mediaId:contexts:] */

void FUN_106414890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010be82d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010c297260(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106414a20; end: 106414b2b;  */

void FUN_106414a20(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99280(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = (undefined *)(param_1 + 0x38);
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010bed4800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106414b2c; end: 106414c7b; -[SCAdOperaMediaManager _profileIconDataForProfileInfo:contexts:] */

void FUN_106414b2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106414c7c; end: 106414d3f;  */

void FUN_106414c7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106414d40;
    puStack_50 = &UNK_110850738;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uStack_48 = uVar5;
    func_0x00010c13ee60(uVar4,param_2,uVar1,uVar2,&puStack_68);
    _objc_release(uVar4);
    _objc_release(uStack_48);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 106414d40; end: 106414d4b;  */

void FUN_106414d40(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106414d4c; end: 106414edb; -[SCAdOperaMediaManager _mediaContentForAdMedia:profileInfo:mediaId:contexts:] */

void FUN_106414d4c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x80) < 1) {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106414edc;
    puStack_88 = &UNK_110868f80;
    puStack_80 = param_1;
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_5);
    uStack_68 = param_5;
    _objc_retain(param_6);
    uStack_60 = param_6;
    puStack_58 = puVar1;
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_a0);
    param_1 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(puVar1);
  }
  else {
    func_0x00010be96520(param_1,param_2,param_3,*(long *)(param_1 + 0x80),param_4,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106414edc; end: 106414f97;  */

void FUN_106414edc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106414f98;
  puStack_50 = &UNK_110921a70;
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar6);
  uStack_48 = uVar6;
  func_0x00010c13e4c0(uVar5,param_2,uVar1,uVar3,uVar2,uVar4,&puStack_68);
  _objc_release(uVar5);
  _objc_release(uStack_48);
  return;
}



/* Entry: 106414f98; end: 106414fa3;  */

void FUN_106414f98(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106414fa4; end: 106415153; -[SCAdOperaMediaManager _retrieveContentForAdMedia:prefetchDurationMs:profileInfo:mediaId:contexts:] */

void FUN_106414fa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_60 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106415154; end: 106415213;  */

void FUN_106415154(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar5 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106415214;
  puStack_60 = &UNK_110921a70;
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uStack_58 = uVar6;
  func_0x00010be76f40(lVar5,param_2,uVar1,uVar7,uVar3,uVar2,uVar4,&puStack_78);
  _objc_release(lVar5);
  _objc_release(uStack_58);
  return;
}



/* Entry: 106415214; end: 10641521f;  */

void FUN_106415214(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106415220; end: 1064152ef; -[SCAdOperaMediaManager _prefetchAdMedia:prefetchDurationMs:profileInfo:mediaId:contexts:completion:] */

void FUN_106415220(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c107140();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064152f0; end: 106415507; -[SCAdOperaMediaManager _updateCacheWithProfileIcon:profileInfo:mediaId:] */

void FUN_1064152f0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ca618;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c070580();
    if ((uVar4 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b6260(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar5);
    }
    puVar5 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106415508;
    puStack_80 = &UNK_110850cf8;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_5);
    uStack_78 = param_5;
    _objc_retain(puVar5);
    puStack_70 = puVar5;
    _objc_retain(puVar3);
    puStack_68 = puVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_98);
    puVar1 = puStack_68;
    _objc_retain(puVar5);
    _objc_release(puVar1);
    _objc_release(puStack_70);
    _objc_release(uStack_78);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106415508; end: 1064155b3;  */

void FUN_106415508(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x20));
    func_0x00010bef7f60(*(undefined8 *)(lVar1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x30));
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = *(long *)(lVar1 + 0x28);
    func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    func_0x00010c0df780(puVar4,param_2,lVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x28),param_2,puVar4,*(undefined8 *)(param_1 + 0x20)
                       );
    _objc_release(puVar4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064155b4; end: 106415b03; -[SCAdOperaMediaManager _updateCacheWithMediaContent:mediaId:forceFullDownload:profileInfo:] */

void FUN_1064155b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ca618;
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c274720(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106415b04;
    puStack_b8 = &UNK_110921aa0;
    _objc_retain(param_4);
    uStack_b0 = param_4;
    _objc_retain(puVar2);
    puStack_a8 = puVar2;
    _objc_retain(puVar5);
    puStack_a0 = puVar5;
    uStack_98 = param_1;
    uStack_80 = param_5;
    _objc_retain(puVar4);
    puStack_90 = puVar4;
    _objc_retain(puVar3);
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_106416194;
    puStack_f0 = &UNK_110921ad0;
    puStack_88 = puVar3;
    _objc_retain(param_4);
    uStack_e8 = param_4;
    _objc_retain(puVar2);
    puStack_e0 = puVar2;
    _objc_retain(puVar3);
    puStack_130 = puVar1;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_10641626c;
    puStack_118 = &UNK_1108480f8;
    puStack_d8 = puVar3;
    _objc_retain(puVar2);
    puStack_110 = puVar2;
    func_0x00010c0c1460(lVar6);
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010bf20360(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puVar1;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_106416294;
    puStack_150 = &UNK_1108b4f10;
    _objc_retain(param_4);
    uStack_148 = param_4;
    _objc_retain(puVar2);
    puStack_140 = puVar2;
    _objc_retain(puVar3);
    puStack_1a0 = puVar1;
    uStack_198 = 0xc2000000;
    uStack_190 = 0x106416344;
    puStack_188 = &UNK_1108b4f10;
    puStack_138 = puVar3;
    _objc_retain(param_4);
    uStack_180 = param_4;
    _objc_retain(puVar2);
    puStack_178 = puVar2;
    _objc_retain(puVar3);
    puStack_1d8 = puVar1;
    uStack_1d0 = 0xc2000000;
    uStack_1c8 = 0x1064163f4;
    puStack_1c0 = &UNK_1108b4f10;
    puStack_170 = puVar3;
    _objc_retain(param_4);
    uStack_1b8 = param_4;
    _objc_retain(puVar2);
    puStack_1b0 = puVar2;
    _objc_retain(puVar3);
    puStack_210 = puVar1;
    uStack_208 = 0xc2000000;
    pcStack_200 = FUN_1064164a4;
    puStack_1f8 = &UNK_1108b9698;
    puStack_1a8 = puVar3;
    _objc_retain(param_4);
    uStack_1f0 = param_4;
    _objc_retain(puVar3);
    puStack_1e8 = puVar3;
    _objc_retain(puVar2);
    puStack_1e0 = puVar2;
    func_0x00010c0bc860(lVar6);
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010c116960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      uVar7 = param_6;
      func_0x00010c070580();
      _objc_release(lVar6);
      if ((uVar7 & 1) == 0) {
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b6260(puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar6 = param_3;
        func_0x00010c116960(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(lVar6);
        _objc_release(puVar8);
      }
    }
    puVar8 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puStack_260 = puVar1;
    uStack_258 = 0xc2000000;
    pcStack_250 = FUN_1064166e4;
    puStack_248 = &UNK_110868f80;
    uStack_240 = param_1;
    _objc_retain(param_4);
    uStack_238 = param_4;
    _objc_retain(puVar8);
    puStack_230 = puVar8;
    puStack_228 = puVar3;
    puStack_220 = puVar4;
    puStack_218 = puVar5;
    _objc_retain(puVar5);
    _objc_retain(puVar4);
    _objc_retain(puVar3);
    func_0x0001000d76cc("APPSTORE",&puStack_260);
    puVar1 = puStack_218;
    _objc_retain(puVar8);
    _objc_release(puVar1);
    _objc_release(puStack_220);
    _objc_release(puStack_228);
    _objc_release(puStack_230);
    _objc_release(uStack_238);
    _objc_release(puVar8);
    _objc_release(puStack_1e0);
    _objc_release(puStack_1e8);
    _objc_release(uStack_1f0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_1b0);
    _objc_release(uStack_1b8);
    _objc_release(puStack_170);
    _objc_release(puStack_178);
    _objc_release(uStack_180);
    _objc_release(puStack_138);
    _objc_release(puStack_140);
    _objc_release(uStack_148);
    _objc_release(puStack_110);
    _objc_release(puStack_d8);
    _objc_release(puStack_e0);
    _objc_release(uStack_e8);
    _objc_release(puStack_88);
    _objc_release(puStack_90);
    _objc_release(puStack_a0);
    _objc_release(puStack_a8);
    _objc_release(uStack_b0);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106415b04; end: 1064160eb;  */

void FUN_106415b04(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  puVar2 = param_4;
  func_0x00010c29b0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_4;
  func_0x00010c0fee80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010bfc68a0();
    bVar1 = *(byte *)(param_3 + 0x50);
    uVar7 = *(undefined8 *)(param_3 + 0x20);
    if (((uint)puVar3 == 0) || ((bVar1 & 1) != 0)) {
      _objc_retain(puVar2);
      _objc_retain(uVar7);
      puVar6 = puVar2;
      func_0x00010bfcaaa0();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((((uint)puVar3 | (uint)bVar1) & 1) == 0) && (puVar6 != (undefined *)0x0)) {
        puVar6 = (undefined *)0x0;
      }
      else {
        func_0x0001005c6500();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bfad300();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010b7f5374();
        _objc_retainAutoreleasedReturnValue();
        uStack_88 = 0;
        puVar5 = puVar6;
        func_0x00010c14e080();
        _objc_release(puVar6);
        puVar6 = (undefined *)0x0;
        if ((int)puVar5 != 0) {
          _objc_retain(puVar3);
          puVar6 = puVar3;
        }
        _objc_release(puVar3);
        _objc_release(puVar4);
      }
      _objc_release(uVar7);
      _objc_release(puVar2);
      puVar4 = PTR__OBJC_CLASS___AVAsset_1126aff38;
      func_0x00010bf0b9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar4 != (undefined *)0x0) {
        uVar7 = *(undefined8 *)(param_3 + 0x28);
        func_0x00010bf8b160(&uStack_88,puVar4);
        _CMTimeGetSeconds(&uStack_88);
        func_0x00010c0df720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bb5c0(uVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      if (puVar6 == (undefined *)0x0) goto LAB_106415fcc;
      func_0x00010c2bb600(*(undefined8 *)(param_3 + 0x28));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_3 + 0x40);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bb5a0(*(undefined8 *)(param_3 + 0x28));
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = puVar6;
      FUN_1064143f4(puVar6,puVar2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x40));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x30));
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      uVar7 = *(undefined8 *)(param_3 + 0x28);
      puVar5 = puVar4;
      func_0x00010c0d5720(puVar4);
      _objc_retainAutoreleasedReturnValue();
      FUN_1064160ec();
      func_0x00010c297120(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bb5e0(uVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar5);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar7 = *(undefined8 *)(param_3 + 0x28);
      puVar5 = puVar4;
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_88,puVar5);
      }
      _CMTimeGetSeconds(&uStack_88);
      func_0x00010c0df720(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bb5c0(uVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar5);
      uVar7 = *(undefined8 *)(param_3 + 0x40);
    }
    func_0x00010c1d0640(uVar7);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb5a0(*(undefined8 *)(param_3 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = param_4;
    func_0x00010c0fee80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x30));
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    puVar5 = puVar4;
    func_0x00010c0d5720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_1064160ec();
    uStack_70 = param_1;
    uStack_68 = param_2;
    func_0x00010c297120(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb5e0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    puVar5 = puVar4;
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_88,puVar5);
    }
    _CMTimeGetSeconds(&uStack_88);
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb5c0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
LAB_106415fcc:
  _objc_release(puVar4);
  _objc_release(puVar6);
  puVar3 = param_4;
  func_0x00010bfb1280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb580(*(undefined8 *)(param_3 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = param_4;
    func_0x00010bfb1280(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x48));
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  puVar3 = puVar2;
  func_0x00010bfc79a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf1ee80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aade0(uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 1064160ec; end: 106416193;  */

undefined1  [16] FUN_1064160ec(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  long lVar2;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  func_0x00010c279200(param_3,param_4,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 == 0) {
    dStack_58 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    dStack_60 = *(double *)PTR__CGSizeZero_110347620;
  }
  else {
    func_0x00010c0d5d20(lVar2);
    func_0x00010c106f40(&dStack_50,lVar2);
    dStack_60 = dStack_40 * param_2 + dStack_50 * param_1;
    dStack_58 = dStack_38 * param_2 + dStack_48 * param_1;
  }
  _objc_release(lVar2);
  auVar1._8_8_ = dStack_58;
  auVar1._0_8_ = dStack_60;
  return auVar1;
}



/* Entry: 106416194; end: 10641626b;  */

void FUN_106416194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb4c0(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_2);
  func_0x00010c2aade0(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10641626c; end: 10641628f;  */

void FUN_10641626c(long param_1,undefined8 param_2)

{
  func_0x00010c2b56a0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106416290; end: 106416293;  */

void FUN_106416290(void)

{
  return;
}



/* Entry: 106416294; end: 1064164a3;  */

void FUN_106416294(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a8520(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1064164a4; end: 1064166e3;  */

void FUN_1064164a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c067ec0(*(undefined8 *)(lVar9 * 8));
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_retain(uVar10);
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(puVar5);
        func_0x00010c1d0640(puVar3);
        lVar7 = param_2;
        func_0x00010c0e00e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
        _objc_release(lVar7);
        _objc_release(puVar6);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    puVar6 = puVar3;
    func_0x00010bf51e00();
    func_0x00010c2aa880(uVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_2 + 0x20) + 8));
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
  func_0x00010bdc6260(*(undefined8 *)(param_2 + 0x20));
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20));
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28);
  func_0x00010c0e00e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 1064166e4; end: 10641679b;  */

void FUN_1064166e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                      *(undefined8 *)(param_1 + 0x38));
  func_0x00010bdc6260(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,
                      *(undefined8 *)(param_1 + 0x48));
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar3,param_2,lVar2 + 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),param_2,puVar3,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


