/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091d1d18; end: 1091d1f7b; -[SCLensStateWorkflowImpl _beginLensFunnelStateForLensSource:preferredLensSessionBaseId:] */

void FUN_1091d1d18(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdca5c0(param_1);
  lVar2 = param_1;
  func_0x00010bee6580(param_1);
  func_0x00010c064020(uVar1,param_2,lVar3,lVar2);
  _objc_release(uVar1);
  lVar3 = param_4;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    lVar3 = param_4;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_1 + 0x38;
      _objc_loadWeakRetained();
      lVar4 = lVar2;
      func_0x00010c096b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = param_4;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        _objc_retain(lVar4);
        _objc_release(lVar3);
        lVar3 = lVar4;
      }
      lVar2 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar2);
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0974c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1baec0();
      _objc_release(uVar1);
      _objc_release(lVar2);
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0974c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bafa0(uVar1,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar1);
      _objc_release(lVar4);
    }
  }
  func_0x00010be090c0(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c2509a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1091d1f7c;
  puStack_60 = &UNK_1108450c8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1091d1fb0;
  puStack_88 = &UNK_110849810;
  lStack_80 = lVar3;
  lStack_58 = param_1;
  _objc_retain(lVar3);
  func_0x00010c0c0800(uVar1,param_2,&puStack_78,&puStack_a0);
  _objc_release(lStack_80);
  _objc_release(lVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091d1f7c; end: 1091d1faf;  */

void FUN_1091d1f7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091d1fb0; end: 1091d1fb3;  */

void FUN_1091d1fb0(void)

{
  return;
}



/* Entry: 1091d1fb4; end: 1091d1fbb; -[SCLensStateWorkflowImpl beginLensStateForLensSource:] */

void FUN_1091d1fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf18370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_beginLensStateForLensSource_pref_1125a3a80,param_3,0);
  return;
}



/* Entry: 1091d1fbc; end: 1091d2047; -[SCLensStateWorkflowImpl beginLensStateForLensSource:preferredLensSessionBaseId:] */

void FUN_1091d1fbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2569c0();
      _objc_release(uVar2);
    }
  }
  func_0x00010bdd3640(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091d2048; end: 1091d204f; -[SCLensStateWorkflowImpl currentLensSource] */

void FUN_1091d2048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c096cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_lensSource_112603538)
  ;
  return;
}



/* Entry: 1091d2050; end: 1091d21b3; -[SCLensStateWorkflowImpl restoreOrRecreateStateForLens:] */

void FUN_1091d2050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x2) {
    uVar3 = param_1;
    func_0x00010bf2b9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06c280();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      uVar3 = param_1;
      func_0x00010be95680(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      uVar4 = param_3;
      _objc_retain(param_3);
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar3);
      _objc_release(uVar4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
      _objc_release(uVar3);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1091d21b4; end: 1091d2217;  */

void FUN_1091d21b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf1f3c0(param_2);
    func_0x00010be014a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091d2218; end: 1091d23bb; -[SCLensStateWorkflowImpl _didTryToRestoreStateForLens:success:] */

void FUN_1091d2218(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256a20();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b00f8;
    uVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158d00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b0240;
    _objc_alloc(PTR_PTR_1126b0240);
    func_0x00010bff0c60();
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bef0080(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bec0160(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1091d23bc; end: 1091d23ef;  */

void FUN_1091d23bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bec0160(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091d23f0; end: 1091d23f7; -[SCLensStateWorkflowImpl _resetLensStateIfNeeded] */

void FUN_1091d23f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetLensStateForce__11262bdf0,0);
  return;
}



/* Entry: 1091d23f8; end: 1091d2553; -[SCLensStateWorkflowImpl resetLensStateForce:] */

void FUN_1091d23f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar1 = param_1;
  func_0x00010c07ac80();
  if ((uVar1 & 1) == 0) {
    lVar6 = param_1 + 0x78;
    _objc_loadWeakRetained();
    lVar3 = lVar6;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c079380();
    if ((int)lVar4 == 0) {
      uVar5 = *(ulong *)(param_1 + 0x58);
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010c07aae0();
      _objc_release(uVar5);
      _objc_release(lVar3);
      _objc_release(lVar6);
      goto joined_r0x0001091d24c0;
    }
    _objc_release(lVar3);
  }
  else {
    uVar5 = param_1 + 0x70;
    _objc_loadWeakRetained();
    uVar2 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c10fc60();
    _objc_release(uVar2);
    _objc_release(uVar5);
joined_r0x0001091d24c0:
    if ((uVar1 & 1) != 0) goto joined_r0x0001091d2454;
    lVar6 = *(long *)(param_1 + 0x80);
    func_0x00010bfe6360(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256a20();
  }
  _objc_release(lVar6);
joined_r0x0001091d2454:
  if (((param_3 & 1) == 0) && (uVar1 = param_1, func_0x00010c07ac80(), (uVar1 & 1) != 0)) {
    return;
  }
  func_0x00010bf3b7a0(param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  puVar7 = PTR_PTR_1126ddbe0;
  func_0x00010bf7a0e0(PTR_PTR_1126ddbe0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar8,param_2,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1091d2554; end: 1091d25d3; -[SCLensStateWorkflowImpl _cancelResetLensStateBlockIfNeeded] */

void FUN_1091d2554(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c138f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _dispatch_block_cancel(lVar2);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ec7e0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1091d25d4; end: 1091d272f; -[SCLensStateWorkflowImpl _scheduleResetLensStateBlock] */

void FUN_1091d25d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      _objc_initWeak(auStack_38,param_1);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      dVar5 = 1.60807493534087e-314;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_1091d2730;
      puStack_48 = &UNK_1108434b0;
      _objc_copyWeak(auStack_40,auStack_38);
      uVar4 = 0;
      func_0x000107c27d90(0,&puStack_60);
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ec7e0();
      _objc_release(param_1);
      func_0x00010c090f80(lVar3);
      _dispatch_time(0,(long)(dVar5 * 1000000000.0));
      func_0x000107c27d84();
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 1091d2730; end: 1091d2763;  */

void FUN_1091d2730(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be931e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091d2764; end: 1091d278b; -[SCLensStateWorkflowImpl clearLensState] */

void FUN_1091d2764(undefined8 param_1)

{
  func_0x00010bddacc0();
                    /* WARNING: Could not recover jumptable at 0x00010bec40d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__storeLens__11258e9d8,0);
  return;
}



/* Entry: 1091d278c; end: 1091d288f; -[SCLensStateWorkflowImpl saveLensState] */

void FUN_1091d278c(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef0a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x00010c06c2e0();
  uVar1 = 0;
  if ((int)uVar3 == 0) {
    uVar1 = uVar2;
  }
  func_0x00010bec40c0(param_1,param_2,uVar1);
  uVar4 = param_1;
  func_0x00010bfd86e0();
  uVar5 = *(ulong *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar4 & 1) == 0) {
    func_0x00010c256a20(uVar5,param_2,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar4 = uVar5;
    func_0x00010c07da80();
    _objc_release(uVar5);
    if ((uVar4 & 1) != 0) goto LAB_1091d2854;
    uVar5 = *(ulong *)(param_1 + 0x80);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6040();
  }
  _objc_release(uVar5);
LAB_1091d2854:
  func_0x00010bddacc0(param_1);
  uVar4 = param_1;
  func_0x00010c07ac80();
  if (((uVar4 & 1) == 0) && (uVar4 = param_1, func_0x00010c232ac0(), (uVar4 & 1) == 0)) {
    func_0x00010be9b640(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091d2890; end: 1091d28e7; -[SCLensStateWorkflowImpl isPresentingPreviewViewController] */

long FUN_1091d2890(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c10fc40();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1091d28e8; end: 1091d292b; -[SCLensStateWorkflowImpl shouldRestoreAnyway] */

undefined8 FUN_1091d28e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c096f00();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1091d292c; end: 1091d2963; -[SCLensStateWorkflowImpl _startHandlingVolumeButtonEventsIfNeeded] */

void FUN_1091d292c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c096f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091d2964; end: 1091d2977; -[SCLensStateWorkflowImpl _isReplyCamera] */

bool FUN_1091d2964(long param_1)

{
  return *(long *)(param_1 + 0x48) - 1U < 2;
}



/* Entry: 1091d2978; end: 1091d29b7; -[SCLensStateWorkflowImpl _alwaysOnCarouselEnabled] */

undefined8 FUN_1091d2978(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf02120();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1091d29b8; end: 1091d29c7; -[SCLensStateWorkflowImpl _useCameraNavigationTypeForLoggerEntranceType] */

bool FUN_1091d29b8(long param_1)

{
  return *(long *)(param_1 + 0x48) == 10;
}



/* Entry: 1091d29c8; end: 1091d2a5f; -[SCLensStateWorkflowImpl _storeLens:] */

void FUN_1091d29c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd080();
  _objc_release(param_3);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126ddbe0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfd86e0(param_1);
  func_0x00010bf736a0(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1091d2a60; end: 1091d2a6b; -[SCLensStateWorkflowImpl setDelegate:] */

void FUN_1091d2a60(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 1091d2a6c; end: 1091d2b3b; -[SCLensStateWorkflowImpl .cxx_destruct] */

void FUN_1091d2a6c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 1091d2b3c; end: 1091d2baf; -[SCLensesUIControllerStudySettingsProvider initWithCircumstanceEngine:] */

undefined1 * FUN_1091d2b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700cd8;
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



/* Entry: 1091d2bb0; end: 1091d2bc7; -[SCLensesUIControllerStudySettingsProvider interceptDeeplinkEnabled] */

void FUN_1091d2bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f2baf8,0,0);
  return;
}



/* Entry: 1091d2bc8; end: 1091d2bdf; -[SCLensesUIControllerStudySettingsProvider pushForwardMultipleFacesPhotosInsideBatch] */

void FUN_1091d2bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f2bb18,1,0);
  return;
}



/* Entry: 1091d2be0; end: 1091d2c0b; -[SCLensesUIControllerStudySettingsProvider pickerMediaLoadBatchSize] */

long FUN_1091d2be0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110f2bb38,10,0);
  return (long)(int)uVar1;
}



/* Entry: 1091d2c0c; end: 1091d2c23; -[SCLensesUIControllerStudySettingsProvider multiSelectPhotoPickerEnabled] */

void FUN_1091d2c0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f2bb58,0,0);
  return;
}



/* Entry: 1091d2c24; end: 1091d2c37; -[SCLensesUIControllerStudySettingsProvider hevcDecodeAllowed] */

void FUN_1091d2c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf66c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ba150,PTR_s_decodeAllowed__1125b74a8,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1091d2c38; end: 1091d2c4b; -[SCLensesUIControllerStudySettingsProvider av1DecodeAllowed] */

void FUN_1091d2c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf12430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ba150,PTR_s_av1DecodeAllowed__1125a22b0,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1091d2c4c; end: 1091d2cb7; -[SCLensesUIControllerStudySettingsProvider mainCameraGamesButtonAlwaysEnabledWithoutExposure] */

undefined8 FUN_1091d2c4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b84a0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f2bb78,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1091d2cb8; end: 1091d2cc3; -[SCLensesUIControllerStudySettingsProvider .cxx_destruct] */

void FUN_1091d2cb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091d2cc4; end: 1091d2d37; -[SCLensSideButtonStudySettingsProvider initWithCircumstanceEngine:] */

undefined1 * FUN_1091d2cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700ce0;
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



/* Entry: 1091d2d38; end: 1091d2dc7; -[SCLensSideButtonStudySettingsProvider lensSideButtonHolidaysUrl] */

void FUN_1091d2d38(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010be4bd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    iVar1 = 2;
    func_0x000107c31924(2,0x11,0,0);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (iVar1 == 0) {
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bdc3480();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091d2dc8; end: 1091d2e0b; -[SCLensSideButtonStudySettingsProvider _lensSideButtonHolidaysUrlString] */

void FUN_1091d2dc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be4bd40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25d0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091d2e0c; end: 1091d2e27; -[SCLensSideButtonStudySettingsProvider _lensSideButtonHolidaysUrlStringRaw] */

void FUN_1091d2e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110f2bb98,
             &PTR____CFConstantStringClassReference_110daafd8,0);
  return;
}



/* Entry: 1091d2e28; end: 1091d2e33; -[SCLensSideButtonStudySettingsProvider .cxx_destruct] */

void FUN_1091d2e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091d2e34; end: 1091d2ecf; -[SCLensSideButtonHolidaysFetcher initWithResourceDownloader:] */

undefined8 FUN_1091d2e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar2,param_2,0x19,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f980(param_1,param_2,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1091d2ed0; end: 1091d301b; -[SCLensSideButtonHolidaysFetcher initWithResourceDownloader:performer:] */

undefined8 *
FUN_1091d2ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112700ce8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1091d301c; end: 1091d306b;  */

void FUN_1091d301c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdecb80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091d306c; end: 1091d318b; -[SCLensSideButtonHolidaysFetcher fetchHolidaysWithUrl:] */

void FUN_1091d306c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010be10da0(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091d318c; end: 1091d3217;  */

void FUN_1091d318c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (param_2 == 0)) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar2 = lVar1;
    func_0x00010be70280(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091d3218; end: 1091d32e3; -[SCLensSideButtonHolidaysFetcher fetchHolidayIconWithUrl:] */

void FUN_1091d3218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091d32e4;
  puStack_48 = &UNK_11084a078;
  uStack_40 = param_3;
  puStack_38 = puVar1;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010be11c80(param_1,param_2,param_3,&puStack_60);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091d32e4; end: 1091d32ef;  */

void FUN_1091d32e4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1091d32f0; end: 1091d3413; -[SCLensSideButtonHolidaysFetcher _fetchDataWithUrl:completion:] */

void FUN_1091d32f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091d3414; end: 1091d3557;  */

void FUN_1091d3414(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aebd8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beec820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e320(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    func_0x00010bf88760(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1091d3558; end: 1091d360f;  */

void FUN_1091d3558(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1091d3610; end: 1091d361f;  */

void FUN_1091d3610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001091d361c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1091d3620; end: 1091d3743; -[SCLensSideButtonHolidaysFetcher _fetchImageWithUrl:completion:] */

void FUN_1091d3620(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091d3744; end: 1091d38df;  */

void FUN_1091d3744(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aebd8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beec820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e320(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    lVar6 = lVar1;
    _objc_opt_class(lVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar5);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar9);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar7);
    func_0x00010bf88c20(uVar2);
    _objc_release(puVar5);
    _objc_release(lVar6);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar8);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1091d38e0; end: 1091d3997;  */

void FUN_1091d38e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1091d3998; end: 1091d39a7;  */

void FUN_1091d3998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001091d39a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1091d39a8; end: 1091d3aaf; -[SCLensSideButtonHolidaysFetcher _parseHolidays:] */

void FUN_1091d39a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008340();
  _objc_release(param_3);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c0d96e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf44700(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1091d3ab0;
    puStack_40 = &UNK_11089c520;
    puVar2 = puVar3;
    uStack_38 = param_1;
    func_0x00010c0b8620(puVar3,param_2,&puStack_58,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091d3ab0; end: 1091d3abb;  */

void FUN_1091d3ab0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be70270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__parseHoliday__112579a38,param_2);
  return;
}



/* Entry: 1091d3abc; end: 1091d3d6f; -[SCLensSideButtonHolidaysFetcher _parseHoliday:] */

void FUN_1091d3abc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110e86758,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 < 5) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf65160(lVar3,param_2,uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(lVar3);
    lVar5 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010bf65160(lVar5,param_2,uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(lVar5);
    uVar11 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be702c0(param_1,param_2,uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar11 = uVar1;
    func_0x00010bf529e0();
    if (4 < uVar11) {
      uVar11 = 4;
      do {
        uVar7 = uVar1;
        func_0x00010c0dfd40(uVar1,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c25d0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        uVar7 = uVar8;
        func_0x00010c08fa60();
        if (uVar7 != 0) {
          func_0x00010befa120(puVar6,param_2,uVar8);
        }
        _objc_release(uVar8);
        uVar11 = uVar11 + 1;
        uVar7 = uVar1;
        func_0x00010bf529e0();
      } while (uVar11 < uVar7);
    }
    puVar10 = (undefined *)0x0;
    if (((lVar4 != 0) && (lVar3 != 0)) && (param_1 != 0)) {
      puVar10 = puVar6;
      func_0x00010bf529e0();
      if (puVar10 == (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = PTR_PTR_1126ddbe8;
        _objc_alloc(PTR_PTR_1126ddbe8);
        puVar9 = puVar6;
        func_0x00010bf51e00(puVar6);
        func_0x00010c02dac0(puVar10,param_2,uVar2,lVar4,lVar3,param_1,puVar9);
        _objc_release(puVar9);
      }
    }
    _objc_release(puVar6);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1091d3d70; end: 1091d3df3; -[SCLensSideButtonHolidaysFetcher _parseIconUrl:] */

void FUN_1091d3d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  func_0x00010c25d0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = 2;
  func_0x000107c31924(2,0x11,0,0);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (iVar1 == 0) {
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdc3480();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091d3df4; end: 1091d3e8b; -[SCLensSideButtonHolidaysFetcher _createDateFormatter] */

void FUN_1091d3df4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  _objc_alloc(PTR__OBJC_CLASS___NSLocale_1126af788);
  func_0x00010c026a60();
  func_0x00010c1bf3e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c189b60(puVar1,param_2,&PTR____CFConstantStringClassReference_110e126d8);
  puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010bf6a760(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215860(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091d3e8c; end: 1091d3ec7; -[SCLensSideButtonHolidaysFetcher .cxx_destruct] */

void FUN_1091d3e8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091d3ec8; end: 1091d3fcf; -[SCLensSideButtonImageProvider initWithHolidaysUrl:holidaysFetcher:preferences:notificationCenter:timeProvider:countryCodeProvider:] */

undefined8
FUN_1091d3ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01a900(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1091d3fd0; end: 1091d41c7; -[SCLensSideButtonImageProvider initWithHolidaysUrl:holidaysFetcher:preferences:notificationCenter:timeProvider:countryCodeProvider:screenScale:performer:] */

undefined1 *
FUN_1091d3fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_112700cf0;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    if (param_10 == 0) {
      puVar3 = PTR_PTR_1126ae790;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021520();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
      *(undefined **)((long)puVar1 + 0x40) = puVar3;
      _objc_release(uVar2);
    }
    else {
      _objc_retain(param_10);
      puVar4 = *(undefined **)((long)puVar1 + 0x40);
      *(long *)((long)puVar1 + 0x40) = param_10;
    }
    _objc_release(puVar4);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1091d41c8; end: 1091d41cb; -[SCLensSideButtonImageProvider buttonImageObservable] */

void FUN_1091d41c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be37530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__imageObservable_11256b6e8);
  return;
}



/* Entry: 1091d41cc; end: 1091d42bb; -[SCLensSideButtonImageProvider buttonTooltipImages] */

void FUN_1091d41cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be374e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f2bbd8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_50 = lVar1;
  func_0x00010be374e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f2bbf8);
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = lVar2;
  func_0x00010be374e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f2bc18);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_40 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar4 = *(undefined **)(lVar1 + 0x48);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar3 = *(undefined8 *)(lVar1 + 0x48);
      *(undefined **)(lVar1 + 0x48) = puVar4;
      _objc_release(uVar3);
      lVar2 = lVar1;
      func_0x00010bdf94a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be64a60(lVar1,param_2,lVar2);
      _objc_release(lVar2);
      func_0x00010bead040(lVar1);
      puVar4 = *(undefined **)(lVar1 + 0x48);
    }
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091d42bc; end: 1091d433b; -[SCLensSideButtonImageProvider _imageObservable] */

void FUN_1091d42bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010bdf94a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be64a60(param_1,param_2,lVar3);
    _objc_release(lVar3);
    func_0x00010bead040(param_1);
    lVar3 = *(long *)(param_1 + 0x48);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091d433c; end: 1091d43a7; -[SCLensSideButtonImageProvider _defaultImage] */

void FUN_1091d433c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,0x105,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091d43a8; end: 1091d43b7; -[SCLensSideButtonImageProvider _notifyImageChanged:] */

void FUN_1091d43a8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_next__112614028);
    return;
  }
  return;
}



/* Entry: 1091d43b8; end: 1091d4437; -[SCLensSideButtonImageProvider _notifyHolidayIconChanged:] */

void FUN_1091d43b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bdd7940(param_1,param_2,param_3);
  if (param_3 == 0) {
    lVar1 = param_1;
    func_0x00010bdf94a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010bfe6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be64a60(param_1,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091d4438; end: 1091d44df; -[SCLensSideButtonImageProvider _setupHolidaysObserving] */

void FUN_1091d4438(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1091d44e0; end: 1091d4513;  */

void FUN_1091d44e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be66300(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091d4514; end: 1091d4537; -[SCLensSideButtonImageProvider _observeHolidays] */

void FUN_1091d4514(undefined8 param_1)

{
  func_0x00010be4cb80();
                    /* WARNING: Could not recover jumptable at 0x00010be4d750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadHolidays_112570f70);
  return;
}



/* Entry: 1091d4538; end: 1091d4673; -[SCLensSideButtonImageProvider _loadCachedHolidayIcon] */

void FUN_1091d4538(double param_1,double param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = param_3;
  func_0x00010bdd8020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010bfe3d20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf5e5e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfe3ae0(uVar2,param_4,uVar3);
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      uVar4 = uVar1;
      func_0x00010bfe6ac0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((param_1 == 44.0) && (param_2 == 44.0)) {
        uVar2 = uVar1;
        func_0x00010bfe3d20();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_3 + 0x58);
        *(ulong *)(param_3 + 0x58) = uVar2;
        _objc_release(uVar3);
        uVar2 = uVar1;
        func_0x00010bfe6ac0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be64a60(param_3,param_4,uVar2);
        _objc_release(uVar2);
        goto LAB_1091d4658;
      }
    }
    func_0x00010be3d940(param_3);
  }
LAB_1091d4658:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091d4674; end: 1091d476b; -[SCLensSideButtonImageProvider _loadHolidays] */

void FUN_1091d4674(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 8) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfa7780(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c297260(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea4670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setHolidays__112586b40,0);
  return;
}



/* Entry: 1091d476c; end: 1091d47bb;  */

void FUN_1091d476c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bea4660(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091d47bc; end: 1091d480f; -[SCLensSideButtonImageProvider _setHolidays:] */

void FUN_1091d47bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x50) == 0) {
    func_0x00010bec32c0(param_1);
  }
  else {
    func_0x00010bec0920(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed9490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateHolidayIcon_112593ec8);
  return;
}



/* Entry: 1091d4810; end: 1091d4a07; -[SCLensSideButtonImageProvider _updateHolidayIcon] */

void FUN_1091d4810(ulong param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5e5e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = *(undefined ***)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f13d78;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  uVar5 = param_1;
  func_0x00010be362a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c071ae0();
  if ((uVar6 & 1) == 0) {
    if (uVar5 == 0) {
      if (*(long *)(param_1 + 0x58) != 0) {
        *(undefined8 *)(param_1 + 0x58) = 0;
        _objc_release();
        func_0x00010be649c0(param_1);
      }
    }
    else {
      _objc_retain(uVar5);
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      *(ulong *)(param_1 + 0x58) = uVar5;
      _objc_release(uVar7);
      _objc_initWeak(auStack_58,param_1);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = uVar5;
      func_0x00010bfe5be0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7760(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(uVar5);
      func_0x00010c297260(uVar7);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(uVar5);
  _objc_release(ppuVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1091d4a08; end: 1091d4ac7;  */

void FUN_1091d4a08(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c071ae0();
    if (iVar1 != 0) {
      lVar3 = lVar2;
      func_0x00010be9a980();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        func_0x00010be649c0(lVar2);
      }
      else {
        puVar4 = PTR_PTR_1126ddbf0;
        _objc_alloc(PTR_PTR_1126ddbf0);
        func_0x00010c01a8c0();
        func_0x00010be649c0(lVar2);
        _objc_release(puVar4);
      }
      _objc_release(lVar3);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091d4ac8; end: 1091d4c4b; -[SCLensSideButtonImageProvider _holidayForDate:countryCode:] */

void FUN_1091d4ac8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = *(long *)(param_1 + 0x50);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(ulong *)(lVar8 * 8);
        uVar3 = uVar7;
        func_0x00010bfe3ae0();
        if ((int)uVar3 != 0) {
          uVar3 = uVar7;
          func_0x00010bf535c0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf4b900();
          _objc_release(uVar3);
          if ((uVar4 & 1) != 0) {
            _objc_retain(uVar7);
            goto LAB_1091d4bf4;
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar6;
      func_0x00010bf52a60();
    }
    uVar7 = 0;
LAB_1091d4bf4:
    _objc_release(lVar6);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bec0960();
                    /* WARNING: Could not recover jumptable at 0x00010bec0910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__startObserveCountryCode_11258dbe8);
  return;
}



/* Entry: 1091d4c4c; end: 1091d4c6f; -[SCLensSideButtonImageProvider _startObserveExternalEvents] */

void FUN_1091d4c4c(undefined8 param_1)

{
  func_0x00010bec0960();
                    /* WARNING: Could not recover jumptable at 0x00010bec0910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startObserveCountryCode_11258dbe8);
  return;
}



/* Entry: 1091d4c70; end: 1091d4c93; -[SCLensSideButtonImageProvider _stopObserveExternalEvents] */

void FUN_1091d4c70(undefined8 param_1)

{
  func_0x00010bec32e0();
                    /* WARNING: Could not recover jumptable at 0x00010bec32b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopObserveCountryCode_11258e650);
  return;
}



/* Entry: 1091d4c94; end: 1091d4c97; -[SCLensSideButtonImageProvider _externalEventOccured] */

void FUN_1091d4c94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed9490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateHolidayIcon_112593ec8);
  return;
}



/* Entry: 1091d4c98; end: 1091d4ccf; -[SCLensSideButtonImageProvider _startObserveTimeChanges] */

void FUN_1091d4c98(long param_1)

{
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010befa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObserver_selector_name_object_11259c238,
             param_1,PTR_s__timeChanged__11253fd68,
             *(undefined8 *)PTR__UIApplicationSignificantTimeChangeNotification_110345ab0,0);
  return;
}



/* Entry: 1091d4cd0; end: 1091d4cff; -[SCLensSideButtonImageProvider _stopObserveTimeChanges] */

void FUN_1091d4cd0(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c12d5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_removeObserver_name_object__112628f90,param_1,
               *(undefined8 *)PTR__UIApplicationSignificantTimeChangeNotification_110345ab0,0);
    return;
  }
  return;
}



/* Entry: 1091d4d00; end: 1091d4dc3; -[SCLensSideButtonImageProvider _timeChanged:] */

void FUN_1091d4d00(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091d4dc4; end: 1091d4df7;  */

void FUN_1091d4dc4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be0d6c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091d4df8; end: 1091d4fbf; -[SCLensSideButtonImageProvider _startObserveCountryCode] */

void FUN_1091d4df8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar1;
    _objc_release(uVar5);
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_1091d4fc0;
    uStack_50 = 0x1091d4fd0;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = uVar5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
  }
  return;
}



/* Entry: 1091d4fc0; end: 1091d4fd7;  */

void FUN_1091d4fc0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091d4fd8; end: 1091d505f;  */

void FUN_1091d4fd8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    func_0x00010c071ae0();
    if ((uVar2 & 1) == 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      _objc_retain(param_2);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(lVar4 + 0x28) = param_2;
      _objc_release(uVar3);
      func_0x00010be0d6c0(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091d5060; end: 1091d5077; -[SCLensSideButtonImageProvider _stopObserveCountryCode] */

void FUN_1091d5060(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 1091d5078; end: 1091d50c7; -[SCLensSideButtonImageProvider _cachedHolidayIcon] */

void FUN_1091d5078(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091d50c8; end: 1091d511f; -[SCLensSideButtonImageProvider _cacheHolidayIcon:] */

void FUN_1091d50c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091d5120; end: 1091d5127; -[SCLensSideButtonImageProvider _invalidateHolidayIconCache] */

void FUN_1091d5120(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd7950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cacheHolidayIcon__1125537f0,0);
  return;
}



/* Entry: 1091d5128; end: 1091d5173; -[SCLensSideButtonImageProvider _scaleHolidayIcon:] */

void FUN_1091d5128(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c14e720(0x4046000000000000,0x4046000000000000,*(undefined8 *)(param_1 + 0x38),
                        param_3,param_2,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091d5174; end: 1091d5207; -[SCLensSideButtonImageProvider _imageNamed:] */

void FUN_1091d5174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf249e0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar2,param_2,param_3,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091d5208; end: 1091d52a3; -[SCLensSideButtonImageProvider .cxx_destruct] */

void FUN_1091d5208(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 1091d52a4; end: 1091d539b;  */

bool FUN_1091d52a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_3);
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf43460();
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2 != (undefined *)0x1;
}



/* Entry: 1091d539c; end: 1091d542f; -[SCLensSideButtonHoliday hitsDate:] */

undefined8 FUN_1091d539c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c24e820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c098920();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf94680(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfce180();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1091d5430; end: 1091d5557; -[SCLensSideButton initWithImageProvider:isNewLensIconEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1091d5430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112700cf8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112782fc4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112782fc8) = param_4;
    func_0x00010c198080(puVar1);
    func_0x00010c1c3c80(0x3ff1f06f60000000,puVar1);
    func_0x00010c160fc0(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfe90c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(puVar3);
    func_0x00010c1aac60(puVar1);
    func_0x00010be66340(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091d5558; end: 1091d55f3; -[SCLensSideButton pointInside:withEvent:] */

void FUN_1091d5558(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = param_1;
  func_0x00010c086200(PTR_PTR_1126c84e0);
  func_0x00010bf20c00(param_5);
  dVar2 = (double)((float)uVar1 * 0.5) + param_4 * -0.5;
  dVar4 = -dVar2;
  dVar3 = -10.0;
  dVar5 = dVar4;
  if (dVar2 <= 10.0) {
    dVar5 = -10.0;
  }
  func_0x00010bf20c00(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (dVar3 + 0.0,dVar4 + dVar5,param_3 + 10.0,param_4 - (dVar5 + dVar5),param_1,param_2);
  return;
}


