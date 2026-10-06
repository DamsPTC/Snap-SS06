/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059e3428; end: 1059e3467;  */

void FUN_1059e3428(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd0060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059e3468; end: 1059e360f; -[SCSpectaclesServerNetworkingServiceProvider _atlasGwGrpcService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e3468(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ebf80(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd9618);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11272d19c;
    _objc_loadWeakRetained(lVar9);
  }
  lVar2 = lVar9;
  func_0x00010bfcfa00(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_11272d1a0;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = lVar4;
  func_0x00010c0f98e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010bf56360(lVar3,param_2,&PTR____CFConstantStringClassReference_110dd9638,puVar1,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1059e3610; end: 1059e384f; -[SCSpectaclesServerNetworkingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e3610(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272d1a0);
  _objc_destroyWeak(param_1 + _DAT_11272d19c);
  _objc_destroyWeak(param_1 + _DAT_11272d194);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d198);
  return;
}



/* Entry: 1059e3850; end: 1059e38f7;  */

void FUN_1059e3850(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c249060();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bdf3e80(lVar1,param_2,lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1059e38f8; end: 1059e396b;  */

void FUN_1059e38f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c0d00;
  _objc_alloc(PTR_PTR_1126c0d00);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c04b0c0(puVar1,param_2,lVar2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059e396c; end: 1059e39fb;  */

void FUN_1059e396c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c249040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059e39fc; end: 1059e3a8b; -[SCSpectaclesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e39fc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = (long)_DAT_11272d1c0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23b4e0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
  }
  puStack_38 = PTR_PTR_1126eb3d8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059e3a8c; end: 1059e3ad3; -[SCSpectaclesEntryPoint _createCentralManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e3a8c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0d20;
  func_0x00010c22b6a0(PTR_PTR_1126c0d20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059e3ad4; end: 1059e3daf; -[SCSpectaclesEntryPoint _createStatusCoordinatorWithServices:spectaclesManagingDataFlow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e3ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126c0d28;
  _objc_retain(param_3);
  _objc_alloc();
  lVar14 = (long)_DAT_11272d1e0;
  lVar2 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c249020(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bfb0bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf027a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11272d234;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf054a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11272d1e4;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cba0(puVar1,param_2,lVar4,uVar5,uVar13,uVar6,lVar8,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar11 = PTR_PTR_1126c0d30;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272d214;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c15f420();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11272d218;
  _objc_loadWeakRetained(lVar7);
  lVar4 = lVar7;
  func_0x00010c0e35c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c249020(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar8 = lVar14;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11272d238;
  _objc_loadWeakRetained(lVar9);
  lVar12 = lVar9;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044d40(puVar11,param_2,lVar3,lVar4,uVar5,lVar10,lVar12);
  uVar13 = *(undefined8 *)(param_1 + _DAT_11272d23c);
  *(undefined **)(param_1 + _DAT_11272d23c) = puVar11;
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar9);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar14);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059e3db0; end: 1059e3fdb; -[SCSpectaclesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e3db0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272d220,0);
  _objc_storeStrong(param_1 + _DAT_11272d204,0);
  _objc_storeStrong(param_1 + _DAT_11272d1c4,0);
  _objc_storeStrong(param_1 + _DAT_11272d1b4,0);
  _objc_storeStrong(param_1 + _DAT_11272d1ac,0);
  _objc_storeStrong(param_1 + _DAT_11272d1cc,0);
  _objc_storeStrong(param_1 + _DAT_11272d1d8,0);
  _objc_storeStrong(param_1 + _DAT_11272d1d4,0);
  _objc_storeStrong(param_1 + _DAT_11272d1d0,0);
  _objc_storeStrong(param_1 + _DAT_11272d1c8,0);
  _objc_destroyWeak(param_1 + _DAT_11272d224);
  _objc_destroyWeak(param_1 + _DAT_11272d1b0);
  _objc_destroyWeak(param_1 + _DAT_11272d230);
  _objc_destroyWeak(param_1 + _DAT_11272d214);
  _objc_destroyWeak(param_1 + _DAT_11272d218);
  _objc_destroyWeak(param_1 + _DAT_11272d228);
  _objc_destroyWeak(param_1 + _DAT_11272d210);
  _objc_destroyWeak(param_1 + _DAT_11272d1f0);
  _objc_destroyWeak(param_1 + _DAT_11272d238);
  _objc_destroyWeak(param_1 + _DAT_11272d1a8);
  _objc_destroyWeak(param_1 + _DAT_11272d22c);
  _objc_destroyWeak(param_1 + _DAT_11272d234);
  _objc_destroyWeak(param_1 + _DAT_11272d20c);
  _objc_destroyWeak(param_1 + _DAT_11272d200);
  _objc_destroyWeak(param_1 + _DAT_11272d21c);
  _objc_destroyWeak(param_1 + _DAT_11272d208);
  _objc_destroyWeak(param_1 + _DAT_11272d1f4);
  _objc_destroyWeak(param_1 + _DAT_11272d1fc);
  _objc_destroyWeak(param_1 + _DAT_11272d1f8);
  _objc_destroyWeak(param_1 + _DAT_11272d1ec);
  _objc_destroyWeak(param_1 + _DAT_11272d1e8);
  _objc_destroyWeak(param_1 + _DAT_11272d1e0);
  _objc_destroyWeak(param_1 + _DAT_11272d1e4);
  _objc_destroyWeak(param_1 + _DAT_11272d1a4);
  _objc_destroyWeak(param_1 + _DAT_11272d1dc);
  _objc_storeStrong(param_1 + _DAT_11272d23c,0);
  _objc_storeStrong(param_1 + _DAT_11272d1c0,0);
  _objc_storeStrong(param_1 + _DAT_11272d1bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272d1b8,0);
  return;
}



/* Entry: 1059e3fdc; end: 1059e40fb; -[SCSpectaclesContentStatusProvider initWithSpectaclesServices:spectaclesAppStatusServices:] */

undefined1 *
FUN_1059e3fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb3e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_4;
    func_0x00010c253460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c249020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar5);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x10));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059e40fc; end: 1059e42c7; -[SCSpectaclesContentStatusProvider currentContentStatus] */

void FUN_1059e40fc(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf486e0(lVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bde80a0(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1059e42a4;
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf4cb00(lVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010bde80a0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bf06300(lVar3,param_2,lVar1);
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf4d740();
    if (lVar4 == 1) {
      lVar4 = lVar2;
      func_0x00010c282be0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      _objc_release(lVar4);
      if (lVar5 != 0) goto LAB_1059e4198;
      uVar7 = 2;
    }
    else {
LAB_1059e4198:
      if (lVar3 - 0x14U < 8) {
        uVar7 = *(undefined8 *)(&UNK_10ddc85d8 + (lVar3 - 0x14U) * 8);
      }
      else {
        uVar7 = 0;
      }
    }
    param_1 = PTR_PTR_1126c0d40;
    _objc_alloc(PTR_PTR_1126c0d40);
    lVar3 = lVar2;
    func_0x00010c282be0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c27a440(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c27a420(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf610a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003c60(param_1,param_2,uVar7,lVar1,lVar3,lVar4,lVar5,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
LAB_1059e42a4:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1059e42c8; end: 1059e432b; -[SCSpectaclesContentStatusProvider _contentStatusNoneForDevice:] */

void FUN_1059e42c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0d40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c003c60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059e432c; end: 1059e432f; -[SCSpectaclesContentStatusProvider syncCurrentStatus] */

void FUN_1059e432c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContentStatus_1125931e8);
  return;
}



/* Entry: 1059e4330; end: 1059e4387; -[SCSpectaclesContentStatusProvider _updateContentStatus] */

void FUN_1059e4330(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf5e4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4d740();
  if (lVar2 == 2) {
    func_0x00010be65100(param_1,param_2,lVar1);
  }
  else {
    func_0x00010be650e0(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1059e4388; end: 1059e43f3; -[SCSpectaclesContentStatusProvider _notifyStatus:] */

void FUN_1059e4388(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bddadc0(param_1);
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = param_3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    func_0x00010be64de0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059e43f4; end: 1059e44d7; -[SCSpectaclesContentStatusProvider _notifyStatusAfterDelay:] */

void FUN_1059e43f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bddadc0(param_1);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1059e44d8;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uVar1 = 0;
  uStack_48 = param_3;
  func_0x0001008553e8(0,&puStack_68);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  func_0x000100c749e0(0x3f800000,"APPSTORE",*(undefined8 *)(param_1 + 0x28));
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e44d8; end: 1059e450b;  */

void FUN_1059e44d8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be650e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059e450c; end: 1059e4547; -[SCSpectaclesContentStatusProvider _cancelStatusNotifyBlock] */

void FUN_1059e450c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1059e4548; end: 1059e4633; -[SCSpectaclesContentStatusProvider _notifyNoNewSnapStatusResetBlockAfterDelayIfNeeded] */

void FUN_1059e4548(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bddab20();
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf4d740();
  if (lVar1 == 2) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x1059e4608;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    uVar2 = 0;
    func_0x0001008553e8(0,&puStack_50);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    _objc_release(uVar3);
    func_0x000100c749e0(0x40400000,"APPSTORE",*(undefined8 *)(param_1 + 0x30));
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1059e4634; end: 1059e466f; -[SCSpectaclesContentStatusProvider _cancelNoNewSnapStatusResetBlock] */

void FUN_1059e4634(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1059e4670; end: 1059e46b7; -[SCSpectaclesContentStatusProvider _resetFoundNoNewSnaps] */

void FUN_1059e4670(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContentStatus_1125931e8);
    return;
  }
  return;
}



/* Entry: 1059e46b8; end: 1059e46bb; -[SCSpectaclesContentStatusProvider statusCoordinatorBluetoothTurnedOff:] */

void FUN_1059e46b8(void)

{
  return;
}



/* Entry: 1059e46bc; end: 1059e46bf; -[SCSpectaclesContentStatusProvider statusCoordinatorBluetoothTurnedOn:] */

void FUN_1059e46bc(void)

{
  return;
}



/* Entry: 1059e46c0; end: 1059e46c3; -[SCSpectaclesContentStatusProvider statusCoordinatorNumberOfDevicesUpdated:] */

void FUN_1059e46c0(void)

{
  return;
}



/* Entry: 1059e46c4; end: 1059e46cf; -[SCSpectaclesContentStatusProvider statusCoordinator:needsToUpdateStateForDevice:] */

void FUN_1059e46c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContentStatus_1125931e8);
    return;
  }
  return;
}



/* Entry: 1059e46d0; end: 1059e46d3; -[SCSpectaclesContentStatusProvider statusCoordinatorPressedLearnMoreForBluetoothOverloadError:] */

void FUN_1059e46d0(void)

{
  return;
}



/* Entry: 1059e46d4; end: 1059e46d7; -[SCSpectaclesContentStatusProvider statusCoordinatorNeedsToPair:deviceProductType:] */

void FUN_1059e46d4(void)

{
  return;
}



/* Entry: 1059e46d8; end: 1059e46db; -[SCSpectaclesContentStatusProvider spectaclesDeviceDidUpdateContentList:] */

void FUN_1059e46d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContentStatus_1125931e8);
  return;
}



/* Entry: 1059e46dc; end: 1059e46df; -[SCSpectaclesContentStatusProvider spectaclesDeviceDidUpdateBackupStatus:] */

void FUN_1059e46dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContentStatus_1125931e8);
  return;
}



/* Entry: 1059e46e0; end: 1059e46e3; -[SCSpectaclesContentStatusProvider spectaclesTransferSession:onTransferUpdate:] */

void FUN_1059e46e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContentStatus_1125931e8);
  return;
}



/* Entry: 1059e46e4; end: 1059e471b; -[SCSpectaclesContentStatusProvider spectaclesDeviceDidUpdateState:] */

void FUN_1059e46e4(undefined8 param_1,undefined8 param_2,int param_3)

{
  func_0x00010c082060();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContentStatus_1125931e8);
    return;
  }
  return;
}



/* Entry: 1059e471c; end: 1059e4723; -[SCSpectaclesContentStatusProvider statusObservable] */

undefined8 FUN_1059e471c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1059e4724; end: 1059e4783; -[SCSpectaclesContentStatusProvider .cxx_destruct] */

void FUN_1059e4724(long param_1)

{
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



/* Entry: 1059e4784; end: 1059e4867; -[SCSpectaclesLensServiceProvider provide] */

void FUN_1059e4784(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0d48;
  _objc_alloc(PTR_PTR_1126c0d48);
  func_0x00010c04aea0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059e4868; end: 1059e48a7;  */

void FUN_1059e4868(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4b200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059e48a8; end: 1059e4963; -[SCSpectaclesLensServiceProvider _lensInfoCardHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e48a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c0d50;
  _objc_alloc(PTR_PTR_1126c0d50);
  lVar2 = param_1 + _DAT_11272d258;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272d25c;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c281240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04afa0(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059e4964; end: 1059e49f3; -[SCSpectaclesLensServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e4964(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272d25c);
  _objc_destroyWeak(param_1 + _DAT_11272d258);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d260);
  return;
}



/* Entry: 1059e49f4; end: 1059e4a97; -[SCSpectaclesLensHandler initWithSpectaclesManager:unlockableNetworkManagerProvider:] */

undefined1 *
FUN_1059e49f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb3e8;
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



/* Entry: 1059e4a98; end: 1059e4b33; -[SCSpectaclesLensHandler lensLaunchableDeviceName] */

void FUN_1059e4a98(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bde6340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010be4b2e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0d4f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a52e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1059e4b34; end: 1059e4b67; -[SCSpectaclesLensHandler hasConnectedLensLaunchableDevice] */

bool FUN_1059e4b34(long param_1)

{
  func_0x00010bde6340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1059e4b68; end: 1059e4bf7; -[SCSpectaclesLensHandler _connectedLaunchableDevice] */

void FUN_1059e4b68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0b8300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfb0fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x0001059e49a8();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(uVar2);
    uVar3 = uVar2;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1059e4bf8; end: 1059e4da7; -[SCSpectaclesLensHandler checkIfLensPinned:completion:] */

void FUN_1059e4bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_1;
  func_0x00010be73fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4ae60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  func_0x00010bfab160(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e4da8; end: 1059e4e0f;  */

void FUN_1059e4da8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be41760();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001059e4e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar2);
  return;
}



/* Entry: 1059e4e10; end: 1059e4e1f;  */

void FUN_1059e4e10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059e4e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1059e4e20; end: 1059e4f3f; -[SCSpectaclesLensHandler hasSpectaclesWithPinLensCapability] */

long FUN_1059e4e20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
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
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar4 = *(ulong *)(lStack_108 + lVar5 * 8);
        func_0x00010c263960();
        if ((uVar4 & 1) != 0) {
          lVar1 = 1;
          goto LAB_1059e4f00;
        }
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar3 != 0);
    lVar1 = 0;
  }
LAB_1059e4f00:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x00010be4b2e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf48d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf48920();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return lVar1;
}



/* Entry: 1059e4f40; end: 1059e4fab; -[SCSpectaclesLensHandler canLaunchLens] */

long FUN_1059e4f40(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010be4b2e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf48d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf48920();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1059e4fac; end: 1059e5107; -[SCSpectaclesLensHandler lens:supportsOpeningIn:] */

void FUN_1059e4fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c0d58;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010c025a00();
  func_0x00010be73fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0b4ca0(param_3);
  _objc_release(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1059e5108;
  puStack_60 = &UNK_11089de98;
  _objc_retain(param_4);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1059e52a8;
  puStack_88 = &UNK_11089dec8;
  uStack_80 = param_4;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010bfa8ae0(param_1,param_2,uVar3,2,puVar2,param_3,&puStack_78,&puStack_a0);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(puVar2);
  return;
}



/* Entry: 1059e5108; end: 1059e52a7;  */

void FUN_1059e5108(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bf07540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c069880(param_2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c069880(param_2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar3,lVar4);
    _objc_release();
    param_1 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059e52bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x10))(lVar5,0,0);
    return;
  }
  return;
}



/* Entry: 1059e52a8; end: 1059e52c3;  */

void FUN_1059e52a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059e52bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    return;
  }
  return;
}



/* Entry: 1059e52c4; end: 1059e52cb; -[SCSpectaclesLensHandler pinLens:] */

void FUN_1059e52c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be73f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pinLens_completion__11257a960,param_3,0);
  return;
}



/* Entry: 1059e52cc; end: 1059e5427; -[SCSpectaclesLensHandler _pinLens:completion:] */

void FUN_1059e52cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010be4b2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0b4ca0(param_3);
  _objc_release(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1059e5428;
  puStack_68 = &UNK_110875d40;
  uStack_60 = uVar2;
  _objc_retain(param_4);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1059e5534;
  puStack_90 = &UNK_11089dec8;
  uStack_88 = param_4;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(uVar2);
  func_0x00010c0fc120(param_1,param_2,uVar3,param_3,&puStack_80,&puStack_a8);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 1059e5428; end: 1059e54ef;  */

void FUN_1059e5428(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1c80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094d00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059e54f0;
  puStack_40 = &UNK_110859a38;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uStack_38 = uVar4;
  func_0x00010c266120(uVar3,param_2,&puStack_58);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  return;
}



/* Entry: 1059e54f0; end: 1059e5533;  */

void FUN_1059e54f0(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059e5534; end: 1059e554b;  */

void FUN_1059e5534(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059e5544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1059e554c; end: 1059e56b3; -[SCSpectaclesLensHandler unpinLens:] */

void FUN_1059e554c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be4b2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0b4ca0(param_3);
  _objc_release(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1059e5644;
  puStack_40 = &UNK_110855e40;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010c281da0(param_1,param_2,uVar2,param_3,&puStack_58,
                      &PTR___NSConcreteGlobalBlock_1108cc758);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 1059e56b4; end: 1059e56b7;  */

void FUN_1059e56b4(void)

{
  return;
}



/* Entry: 1059e56b8; end: 1059e577f; -[SCSpectaclesLensHandler launchLens:] */

void FUN_1059e56b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be4b2e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1059e5780;
    puStack_50 = &UNK_1108500c8;
    lStack_48 = param_1;
    _objc_retain(lVar1);
    lStack_40 = lVar1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010bf37f80(param_1,param_2,param_3,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e5780; end: 1059e5793;  */

void FUN_1059e5780(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be47b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__launchLensOnDevice_lensId_isPin_11256f860,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2);
  return;
}



/* Entry: 1059e5794; end: 1059e58a7; -[SCSpectaclesLensHandler _launchLensOnDevice:lensId:isPinned:] */

void FUN_1059e5794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c094d00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  if (param_5 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1059e58a8;
    puStack_58 = &UNK_110848bd8;
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010be73f00(param_1,param_2,param_4,&puStack_70);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
  }
  else {
    func_0x00010c08b9c0(uVar2,param_2,param_4);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 1059e58a8; end: 1059e593b;  */

void FUN_1059e58a8(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1059e593c;
    puStack_38 = &UNK_110841f80;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uStack_30 = uVar2;
    _objc_retain(uVar1);
    uStack_28 = uVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(uStack_28);
    _objc_release(uStack_30);
  }
  return;
}



/* Entry: 1059e593c; end: 1059e5947;  */

void FUN_1059e593c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_launchLensWithLensId__112600880,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1059e5948; end: 1059e5a73; -[SCSpectaclesLensHandler _lensLaunchableDevice] */

void FUN_1059e5948(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
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
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        uVar5 = *(ulong *)(lStack_108 + lVar7 * 8);
        uVar3 = uVar5;
        func_0x0001059e49a8();
        if ((uVar3 & 1) != 0) {
          _objc_retain(uVar5);
          goto LAB_1059e5a34;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  uVar5 = 0;
LAB_1059e5a34:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    uVar4 = *(ulong *)(lVar2 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c281220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1059e5a74; end: 1059e5adf; -[SCSpectaclesLensHandler _pinnedLensAPI] */

void FUN_1059e5a74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c281220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1059e5ae0; end: 1059e5b77; -[SCSpectaclesLensHandler _lensGroups] */

undefined * FUN_1059e5ae0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 *puStack_68;
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar5 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6790;
  _objc_alloc();
  func_0x00010c0590e0();
  lVar6 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  func_0x00010bfcf760(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar3;
  func_0x00010c281780(lVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1059e5c78;
  puStack_70 = &UNK_1108cc778;
  puStack_68 = (undefined1 *)ppuVar5;
  _objc_retain(ppuVar5);
  lVar4 = lVar6;
  func_0x00010bfb2040(lVar6,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puStack_68);
  _objc_release(ppuVar5);
  _objc_release(lVar6);
  _objc_release(lVar3);
  return (undefined *)(ulong)(lVar4 != 0);
}



/* Entry: 1059e5b78; end: 1059e5cdf; -[SCSpectaclesLensHandler _isLensPinned:data:] */

bool FUN_1059e5b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bfcf760(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010c281780(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1059e5c78;
  puStack_40 = &UNK_1108cc778;
  uStack_38 = param_3;
  _objc_retain(param_3);
  lVar3 = lVar2;
  func_0x00010bfb2040(lVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 0;
}



/* Entry: 1059e5ce0; end: 1059e5d0f; -[SCSpectaclesLensHandler .cxx_destruct] */

void FUN_1059e5ce0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059e5d10; end: 1059e5e0f; -[SCSpectaclesOnDemandResources initWithSimpleContentFetcher:playbackAssetRepository:asyncQueueProvider:] */

undefined1 *
FUN_1059e5d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eb3f0;
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
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11e0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059e5e10; end: 1059e5e17; -[SCSpectaclesOnDemandResources prefetchUrl:resourceType:] */

void FUN_1059e5e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be96630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__retrieveContentWithUrl_resource_112583328,param_3,param_4,0);
  return;
}



/* Entry: 1059e5e18; end: 1059e5ed7; -[SCSpectaclesOnDemandResources imageFutureWithUrl:] */

void FUN_1059e5e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_alloc_init();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059e5ed8;
  puStack_40 = &UNK_11086dbb8;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010be96760(param_1,param_2,param_3,&puStack_58);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059e5ed8; end: 1059e5eeb;  */

void FUN_1059e5ed8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1059e5eec; end: 1059e5ef3; -[SCSpectaclesOnDemandResources imageFutureWithUrl2X:url3X:] */

void FUN_1059e5eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe7d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_imageFutureWithUrl2X_url3X_modif_1125d7920,param_3,param_4,0);
  return;
}



/* Entry: 1059e5ef4; end: 1059e6007; -[SCSpectaclesOnDemandResources imageFutureWithUrl:modifications:] */

void FUN_1059e5ef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_alloc_init();
  lVar2 = param_1;
  func_0x00010bfe7d80(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1059e6008;
  puStack_58 = &UNK_1108cc7a8;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puStack_50 = puVar1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(puVar1);
  func_0x00010c297260(lVar2,param_2,&puStack_70,uVar4);
  _objc_release(lVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(puStack_50);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1059e6008; end: 1059e60a7;  */

void FUN_1059e6008(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) {
      func_0x00010bf43d60(uVar1);
    }
    else {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(uVar1);
      _objc_release(lVar2);
    }
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059e60a8; end: 1059e620f; -[SCSpectaclesOnDemandResources imageFutureWithUrl2X:url3X:modifications:] */

void FUN_1059e60a8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126ae560;
  _objc_retain(param_6);
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar3);
  uVar1 = param_4;
  if ((int)param_1 != 2) {
    uVar1 = param_5;
  }
  _objc_retain(uVar1);
  lVar4 = param_2;
  func_0x00010bfe7da0(param_2,param_3,uVar1,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1059e6210;
  puStack_60 = &UNK_11086dbb8;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  puStack_58 = puVar2;
  _objc_retain(puVar2);
  func_0x00010c297260(lVar4,param_3,&puStack_78,uVar5);
  _objc_release(lVar4);
  puVar3 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_58);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1059e6210; end: 1059e6223;  */

void FUN_1059e6210(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1059e6224; end: 1059e638b; -[SCSpectaclesOnDemandResources animatedImageFutureWithUrl:] */

void FUN_1059e6224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_alloc_init();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1059e62e8;
  puStack_40 = &UNK_1108b71b0;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010be96640(param_1,param_2,param_3,2,&puStack_58);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059e638c; end: 1059e644b; -[SCSpectaclesOnDemandResources videoFutureWithUrl:] */

void FUN_1059e638c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_alloc_init();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059e644c;
  puStack_40 = &UNK_1108cc7d8;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010be96100(param_1,param_2,param_3,&puStack_58);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059e644c; end: 1059e645f;  */

void FUN_1059e644c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1059e6460; end: 1059e6523; -[SCSpectaclesOnDemandResources dataFutureWithUrl:] */

void FUN_1059e6460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_alloc_init();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059e6524;
  puStack_40 = &UNK_1108b71b0;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010be96640(param_1,param_2,param_3,4,&puStack_58);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059e6524; end: 1059e6537;  */

void FUN_1059e6524(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1059e6538; end: 1059e668b; -[SCSpectaclesOnDemandResources videoObjectModelsFutureForUrl:] */

void FUN_1059e6538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  _objc_initWeak(auStack_48,param_1);
  func_0x00010bf63be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  puVar2 = auStack_50;
  _objc_copyWeak(puVar2,auStack_48);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_1);
  _objc_release(puVar2);
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1059e668c; end: 1059e6717;  */

void FUN_1059e668c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010be4ea40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  else {
    func_0x00010bf43ca0(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059e6718; end: 1059e673b; -[SCSpectaclesOnDemandResources _mediaTypeForResourceType:] */

undefined8 FUN_1059e6718(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return *(undefined8 *)(&UNK_10ddc8618 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 1059e673c; end: 1059e684f; -[SCSpectaclesOnDemandResources _retrieveImageWithUrl:completion:] */

void FUN_1059e673c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_2;
  _objc_retain(param_3);
  func_0x00010be96640(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e6850; end: 1059e69bf;  */

void FUN_1059e6850(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (lVar1 != 0) {
    if (param_3 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010c14d080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = *(long *)(param_1 + 0x28);
        if (lVar2 != 0) {
          lVar5 = lVar1;
          func_0x00010be0b2a0(lVar1);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar2 + 0x10))(lVar2,0,lVar5);
          _objc_release(lVar5);
        }
        _objc_release(puVar3);
      }
      else {
        lVar2 = *(long *)(param_1 + 0x28);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x10))(lVar2,puVar4,0);
        }
      }
      _objc_release(puVar4);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2,0,param_3);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059e69c0; end: 1059e6ad3; -[SCSpectaclesOnDemandResources _retrieveAVAssetWithUrl:completion:] */

void FUN_1059e69c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be96620(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e6ad4; end: 1059e6c33;  */

void FUN_1059e6ad4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar7 = param_2;
    func_0x00010bfcaaa0();
    if (lVar7 == 0) {
      puVar3 = *(undefined **)(lVar1 + 0x10);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf549c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      lVar7 = *(long *)(param_1 + 0x28);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x10))(lVar7,puVar6,0);
      }
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_1 + 0x28);
      if (lVar7 != 0) {
        lVar2 = lVar1;
        func_0x00010be0b2a0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar7 + 0x10))(lVar7,0,lVar2);
        _objc_release(lVar2);
      }
    }
    _objc_release(puVar6);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059e6c34; end: 1059e6d4b; -[SCSpectaclesOnDemandResources _retrieveDataWithUrl:resourceType:completion:] */

void FUN_1059e6c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be96620(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1059e6d4c; end: 1059e6e4f;  */

void FUN_1059e6d4c(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = param_2;
    func_0x00010bfcaaa0();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = param_2;
      func_0x00010b7f5374(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 0x28);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,puVar2,0);
      }
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 0x28);
      if (lVar4 != 0) {
        lVar3 = lVar1;
        func_0x00010be0b2a0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar4 + 0x10))(lVar4,0,lVar3);
        _objc_release(lVar3);
      }
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059e6e50; end: 1059e7003; -[SCSpectaclesOnDemandResources _retrieveContentWithUrl:resourceType:completion:] */

void FUN_1059e6e50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  puVar3 = PTR_PTR_1126b19f8;
  func_0x00010c248460();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003a80(puVar2,param_2,puVar1,0x23,0x2760,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar5 = param_1;
  func_0x00010be5ed00(param_1,param_2,param_4);
  func_0x00010c1c5440(puVar2,param_2,lVar5);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1059e7004;
  puStack_70 = &UNK_110860410;
  uStack_68 = param_5;
  _objc_retain(param_5);
  func_0x00010c13e600(uVar6,param_2,puVar2,&puStack_88);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059e7010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1059e7004; end: 1059e7017;  */

void FUN_1059e7004(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059e7010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1059e7018; end: 1059e70ef; -[SCSpectaclesOnDemandResources _errorWithDescription:] */

void FUN_1059e7018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110e15838;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar8);
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    if (puVar2 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      uVar12 = 0;
      _objc_retain(puVar2);
      puVar10 = puVar2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar10 != (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar2);
          }
          puVar3 = puVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          puVar5 = puVar3;
          _objc_opt_isKindOfClass(puVar3,puVar4);
          puVar4 = puVar3;
          if (((ulong)puVar5 & 1) == 0) {
            puVar4 = (undefined *)0x0;
          }
          _objc_retain(puVar4);
          _objc_release(puVar3);
          puVar3 = puVar4;
          func_0x00010c296f60(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar3 = puVar4;
          func_0x00010c296f60(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar3 = puVar4;
          func_0x00010c296f60(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          _objc_release(puVar3);
          puVar3 = puVar4;
          func_0x00010c296f60(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          uVar13 = uVar12;
          _objc_release(puVar3);
          puVar3 = puVar4;
          func_0x00010c296f60(puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          func_0x00010bf885a0(puVar3);
          _objc_release(puVar3);
          puVar4 = PTR_PTR_1126c0d60;
          _objc_alloc(PTR_PTR_1126c0d60);
          func_0x00010c061400(uVar12,uVar13);
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar4);
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar11 = puVar11 + 1;
        } while (puVar10 != puVar11);
        puVar10 = puVar2;
        func_0x00010bf52a60();
      }
      _objc_release(puVar2);
      puVar10 = puVar7;
      func_0x00010bf51e00();
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(0);
    _objc_release(ppuVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
      ___stack_chk_fail();
      _objc_storeStrong(ppuVar8 + 3,0);
      _objc_storeStrong(ppuVar8 + 2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(ppuVar8 + 1,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1059e70f0; end: 1059e743f; -[SCSpectaclesOnDemandResources _loadSucceededWithResponse:] */

void FUN_1059e70f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (puVar2 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar11 = 0;
    _objc_retain(puVar2);
    puVar9 = puVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar9 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar2);
        }
        puVar3 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        puVar5 = puVar3;
        _objc_opt_isKindOfClass(puVar3,puVar4);
        puVar4 = puVar3;
        if (((ulong)puVar5 & 1) == 0) {
          puVar4 = (undefined *)0x0;
        }
        _objc_retain(puVar4);
        _objc_release(puVar3);
        puVar3 = puVar4;
        func_0x00010c296f60(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = puVar4;
        func_0x00010c296f60(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = puVar4;
        func_0x00010c296f60(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        _objc_release(puVar3);
        puVar3 = puVar4;
        func_0x00010c296f60(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        uVar12 = uVar11;
        _objc_release(puVar3);
        puVar3 = puVar4;
        func_0x00010c296f60(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        func_0x00010bf885a0(puVar3);
        _objc_release(puVar3);
        puVar4 = PTR_PTR_1126c0d60;
        _objc_alloc(PTR_PTR_1126c0d60);
        func_0x00010c061400(uVar11,uVar12);
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar10 = puVar10 + 1;
      } while (puVar9 != puVar10);
      puVar9 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    puVar9 = puVar7;
    func_0x00010bf51e00();
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(0);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1059e7440; end: 1059e74bb; -[SCSpectaclesOnDemandResources .cxx_destruct] */

void FUN_1059e7440(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059e74bc; end: 1059e7583; -[SCSpectaclesOnDemandResourcesServiceProvider _createOnDemandResources] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e74bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c0d70;
  _objc_alloc(PTR_PTR_1126c0d70);
  lVar2 = param_1 + _DAT_11272d280;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272d27c);
  param_1 = param_1 + _DAT_11272d284;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0468a0(puVar1,param_2,lVar3,uVar5,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059e7584; end: 1059e75f3; -[SCSpectaclesOnDemandResourcesServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e7584(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272d27c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1283e0();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126eb3f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059e75f4; end: 1059e7653; -[SCSpectaclesOnDemandResourcesServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e75f4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272d284);
  _objc_destroyWeak(param_1 + _DAT_11272d278);
  _objc_destroyWeak(param_1 + _DAT_11272d280);
  _objc_destroyWeak(param_1 + _DAT_11272d288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272d27c,0);
  return;
}



/* Entry: 1059e7654; end: 1059e7bef; -[SCSpotlightNetworkServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e7654(long param_1,undefined8 param_2)

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
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11272d28c;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar23;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  lVar23 = param_1;
  FUN_1059e7bf0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar23;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  lVar23 = param_1;
  FUN_1059e7bf0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar23;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11272d2a0;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar23;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11272d2a4;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar23;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  lVar23 = param_1;
  func_0x0001059e7c14();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar23;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  lVar23 = param_1;
  func_0x0001059e7c14();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar23;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11272d298;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar23;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11272d2ac;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar23;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11272d2b0;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar23;
  func_0x00010bf6da80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  puVar11 = PTR_PTR_1126c0d78;
  _objc_alloc();
  lVar23 = lVar1;
  func_0x00010c2923e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b6c0(puVar11,param_2,lVar23,lVar8,lVar9);
  _objc_release(lVar23);
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11272d290;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar23;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11272d2a8;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar23;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  puVar16 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1059e7c38;
  puStack_a8 = &UNK_1108cc8c8;
  puVar14 = PTR_PTR_1126ae720;
  lStack_a0 = lVar1;
  lStack_98 = lVar6;
  lStack_90 = lVar7;
  lStack_88 = lVar3;
  lStack_80 = lVar5;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar16;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_1059e7c70;
  puStack_110 = &UNK_1108cc8f8;
  puVar15 = PTR_PTR_1126ae720;
  lStack_108 = lVar1;
  lStack_100 = lVar6;
  lStack_f8 = lVar7;
  lStack_f0 = lVar3;
  lStack_e8 = lVar4;
  lStack_e0 = lVar13;
  lStack_d8 = lVar8;
  lStack_d0 = lVar9;
  lStack_c8 = lVar10;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_128);
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar16;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1059e7d30;
  puStack_158 = &UNK_1108cc928;
  puVar16 = PTR_PTR_1126ae720;
  lStack_150 = lVar2;
  lStack_148 = lVar4;
  puStack_140 = puVar11;
  lStack_138 = lVar12;
  lStack_130 = lVar13;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_170);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108cc978);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126c0da8;
  _objc_alloc(PTR_PTR_1126c0da8);
  func_0x00010c054500();
  if (param_1 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(param_1 + _DAT_11272d2b4);
  }
  func_0x00010bf9d660(uVar19,param_2,puVar18);
  puVar20 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108cc9b8);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108cc9f8);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126c0dc0;
  _objc_alloc(PTR_PTR_1126c0dc0);
  func_0x00010c021fc0();
  if (param_1 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(param_1 + _DAT_11272d2b8);
  }
  func_0x00010bf9d660(uVar19,param_2,puVar22);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1059e7bf0; end: 1059e7c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059e7bf0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272d294);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


