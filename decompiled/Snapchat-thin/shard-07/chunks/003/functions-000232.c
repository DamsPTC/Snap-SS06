/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10541d61c; end: 10541d6c3; -[SCAdCanOpenURLImpl getAppInstallStatusForAppId:] */

undefined8 FUN_10541d61c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar2);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x00010bf2cee0(param_1,param_2,lVar1);
      uVar3 = 1;
      if ((int)param_1 == 0) {
        uVar3 = 2;
      }
    }
    _objc_release(lVar1);
  }
  return uVar3;
}



/* Entry: 10541d6c4; end: 10541d73f; -[SCAdCanOpenURLImpl .cxx_destruct] */

void FUN_10541d6c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10541d740; end: 10541d7c3; -[SCAdsCanOpenURLServiceProvider _buildAdsCanOpenURLProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10541d740(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b8e18;
  _objc_alloc(PTR_PTR_1126b8e18);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112723360;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bef2520(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1060(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10541d7c4; end: 10541d7fb; -[SCAdsCanOpenURLServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10541d7c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112723360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272335c);
  return;
}



/* Entry: 10541d7fc; end: 10541d807; -[SCSKAdNetworkDefaultImpl startImpression:completionHandler:] */

void FUN_10541d7fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___SKAdNetwork_1126b8e20,
             PTR_s_startImpression_completionHandle_112671608);
  return;
}



/* Entry: 10541d808; end: 10541d813; -[SCSKAdNetworkDefaultImpl endImpression:completionHandler:] */

void FUN_10541d808(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___SKAdNetwork_1126b8e20,
             PTR_s_endImpression_completionHandler__1125c2c48);
  return;
}



/* Entry: 10541d814; end: 10541d8b7; -[SCSKAdNetworkStatefulImpl initWithPerformer:metricsManager:] */

undefined1 *
FUN_10541d814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8448;
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



/* Entry: 10541d8b8; end: 10541d9b7; -[SCSKAdNetworkStatefulImpl startImpression:completionHandler:] */

void FUN_10541d8b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10541d9b8; end: 10541d9eb;  */

void FUN_10541d9b8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec01c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10541d9ec; end: 10541daa3; -[SCSKAdNetworkStatefulImpl _startImpression:completionHandler:] */

void FUN_10541d9ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010bf0ae40(uVar1);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aeaa0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c24ef80(PTR__OBJC_CLASS___SKAdNetwork_1126b8e20,param_2,param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10541daa4; end: 10541dba3; -[SCSKAdNetworkStatefulImpl endImpression:completionHandler:] */

void FUN_10541daa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10541dba4; end: 10541dbd7;  */

void FUN_10541dba4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be09a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10541dbd8; end: 10541dc57; -[SCSKAdNetworkStatefulImpl _endImpression:completionHandler:] */

void FUN_10541dbd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
  }
  func_0x00010bf94a80(PTR__OBJC_CLASS___SKAdNetwork_1126b8e20,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10541dc58; end: 10541dc93; -[SCSKAdNetworkStatefulImpl .cxx_destruct] */

void FUN_10541dc58(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10541dc94; end: 10541dca3; -[SCSKAdServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10541dc94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112723370);
  return;
}



/* Entry: 10541dca4; end: 10541dd17; -[SCGrapheneAdRequestMetadataMetric2 init] */

undefined1 * FUN_10541dca4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8450;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10541dd18; end: 10541dd8f;  */

void FUN_10541dd18(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108872b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10541dd90; end: 10541de07;  */

void FUN_10541dd90(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110887300,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10541de08; end: 10541e4c7; +[SCAdTrackEvent adTrackEventWithSqlEvent:] */

void FUN_10541de08(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b8e38;
  _objc_alloc();
  if (param_3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    uVar12 = 0;
    uVar4 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar10 = 0;
    uStack_b8 = 0;
    uVar5 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar11 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar16 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain(uVar5);
    uVar8 = *(undefined8 *)(param_3 + 0x40);
    uStack_b8 = *(undefined8 *)(param_3 + 0x48);
    _objc_retain(uVar8);
    uVar16 = *(undefined8 *)(param_3 + 0x70);
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar10);
    uStack_c0 = *(undefined8 *)(param_3 + 0x30);
    uStack_c8 = *(undefined8 *)(param_3 + 0x38);
    uVar11 = *(undefined8 *)(param_3 + 0x50);
    uVar14 = *(undefined8 *)(param_3 + 0x58);
    uVar12 = *(undefined8 *)(param_3 + 0x60);
    uVar4 = *(undefined8 *)(param_3 + 0x68);
    uVar13 = *(undefined8 *)(param_3 + 0x158);
  }
  _objc_retain(uVar13);
  func_0x00010bff1840(uVar16,puVar2,param_2,uVar5,uStack_b8,uVar8,uVar9,uVar10,uStack_c0,uStack_c8,
                      uVar11,uVar4,0,uVar14,uVar12,uVar13);
  fVar15 = (float)uVar16;
  _objc_release(uVar13);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126b8e40;
  if (param_3 == 0) {
LAB_10541dfb8:
    puVar6 = (undefined *)0x0;
    goto LAB_10541e3e4;
  }
  if (*(long *)(param_3 + 0x78) < 0) {
    if (*(long *)(param_3 + 0x120) < 0) {
      puVar7 = (undefined *)0x0;
      goto LAB_10541e430;
    }
    puVar6 = PTR_PTR_1126b8e60;
    _objc_alloc(PTR_PTR_1126b8e60);
    func_0x00010c0000e0((double)*(long *)(param_3 + 0x130),(double)*(long *)(param_3 + 0x138),
                        (double)*(long *)(param_3 + 0x140),(double)*(long *)(param_3 + 0x148));
    puVar7 = PTR_PTR_1126b8e50;
    func_0x00010c068980(PTR_PTR_1126b8e50,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10541e428;
  }
  puVar7 = PTR_PTR_1126b8e48;
  switch(*(long *)(param_3 + 0x78)) {
  case 1:
    func_0x00010c274d60(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    func_0x00010c2749a0(PTR_PTR_1126b8e40,param_2,*(undefined1 *)(param_3 + 0xd));
    _objc_retainAutoreleasedReturnValue();
    break;
  case 3:
    uVar8 = *(undefined8 *)(param_3 + 0xc0);
    uVar16 = *(undefined8 *)(param_3 + 200);
    if (*(long *)(param_3 + 0xa8) == 2) {
      func_0x00010c2697e0(uVar8,uVar16,*(undefined8 *)(param_3 + 0xd0),
                          *(undefined8 *)(param_3 + 0xd8),*(undefined8 *)(param_3 + 0x110),
                          PTR_PTR_1126b8e48,param_2,*(undefined8 *)(param_3 + 0x108));
      _objc_retainAutoreleasedReturnValue();
    }
    else if (*(long *)(param_3 + 0xa8) == 1) {
      uVar11 = *(undefined8 *)(param_3 + 0xe0);
      _objc_retain(uVar11);
      func_0x00010bfb2c80(uVar11);
      dVar17 = (double)fVar15;
      uVar12 = *(undefined8 *)(param_3 + 0xe8);
      _objc_retain(uVar12);
      func_0x00010bfb2c80(uVar12);
      dVar18 = (double)fVar15;
      _objc_release(uVar12);
      _objc_release(uVar11);
      puVar7 = PTR_PTR_1126b8e48;
      uVar14 = *(undefined8 *)(param_3 + 0xd0);
      uVar4 = *(undefined8 *)(param_3 + 0xd8);
      uVar11 = *(undefined8 *)(param_3 + 0xf0);
      _objc_retain(uVar11);
      func_0x00010bfb2c80(uVar11);
      dVar19 = (double)fVar15;
      uVar12 = *(undefined8 *)(param_3 + 0xf8);
      _objc_retain(uVar12);
      func_0x00010bfb2c80(uVar12);
      func_0x00010c2653e0(uVar8,uVar16,uVar14,uVar4,dVar17,dVar18,dVar19,(double)fVar15,puVar7,
                          param_2,*(undefined8 *)(param_3 + 0x118));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(uVar11);
    }
    else {
      puVar7 = (undefined *)0x0;
    }
    puVar6 = PTR_PTR_1126b8e40;
    uVar8 = *(undefined8 *)(param_3 + 0xa8);
    uVar16 = *(undefined8 *)(param_3 + 0x40);
    _objc_retain(uVar16);
    func_0x00010bf0d500(puVar6,param_2,uVar8,uVar16,puVar7,0);
    _objc_retainAutoreleasedReturnValue();
code_r0x00010541e3d8:
    _objc_release(uVar16);
    goto code_r0x00010541e3e0;
  case 4:
    uVar16 = *(undefined8 *)(param_3 + 0xa8);
    puVar7 = *(undefined **)(param_3 + 0x40);
    _objc_retain(puVar7);
    func_0x00010bf0cd20(puVar6,param_2,uVar16,puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x00010541e3e0;
  case 5:
    puVar7 = *(undefined **)(param_3 + 0xb0);
    _objc_retain(puVar7);
    puVar3 = puVar7;
    func_0x00010c08fa60();
    if (puVar3 != (undefined *)0x0) {
      uVar16 = *(undefined8 *)(param_3 + 0xb0);
      _objc_retain(uVar16);
      func_0x00010bf0d4a0(puVar6,param_2,uVar16);
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010541e3d8;
    }
    func_0x00010bf0d4a0(puVar6,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x00010541e3e0;
  case 6:
    func_0x00010bf0d780(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 7:
    func_0x00010bf0cce0(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 8:
    func_0x00010bf0cd40(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 9:
    func_0x00010bfb5460(PTR_PTR_1126b8e40,param_2,*(undefined1 *)(param_3 + 0xb),
                        *(undefined1 *)(param_3 + 0xc));
    _objc_retainAutoreleasedReturnValue();
    break;
  case 10:
    func_0x00010bf141c0(PTR_PTR_1126b8e40,param_2,*(undefined1 *)(param_3 + 0xb));
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xb:
    func_0x00010c2a4a00(PTR_PTR_1126b8e40,param_2,*(undefined8 *)(param_3 + 0x80));
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xc:
    uVar1 = *(undefined1 *)(param_3 + 8);
    uVar16 = *(undefined8 *)(param_3 + 0x88);
    puVar7 = *(undefined **)(param_3 + 0x90);
    _objc_retain(puVar7);
    func_0x00010bf68a40(puVar6,param_2,uVar16,uVar1,puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x00010541e3e0;
  case 0xd:
    func_0x00010bf057a0(*(undefined8 *)(param_3 + 0xa0),PTR_PTR_1126b8e40,param_2,
                        *(undefined8 *)(param_3 + 0x98),*(undefined1 *)(param_3 + 9),
                        *(undefined1 *)(param_3 + 10));
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xe:
    func_0x00010bfb35c0(PTR_PTR_1126b8e40,param_2,*(undefined8 *)(param_3 + 0xb8));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  case 0xf:
    puVar6 = PTR_PTR_1126b8e40;
    func_0x00010c2749c0(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x10:
    func_0x00010c274a60(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x11:
    func_0x00010c2749e0(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x12:
    func_0x00010c27ce00(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x13:
    func_0x00010bf943a0(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x14:
    func_0x00010bf943e0(PTR_PTR_1126b8e40);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x15:
    func_0x00010c2697e0(*(undefined8 *)(param_3 + 0xc0),*(undefined8 *)(param_3 + 200),
                        *(undefined8 *)(param_3 + 0xd0),*(undefined8 *)(param_3 + 0xd8),
                        *(undefined8 *)(param_3 + 0x110),PTR_PTR_1126b8e48,param_2,
                        *(undefined8 *)(param_3 + 0x108));
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b8e40;
    func_0x00010c254500(PTR_PTR_1126b8e40,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
code_r0x00010541e3e0:
    _objc_release(puVar7);
    break;
  default:
    goto LAB_10541dfb8;
  }
LAB_10541e3e4:
  puVar7 = PTR_PTR_1126b8e50;
  puVar3 = PTR_PTR_1126b8e58;
  _objc_alloc(PTR_PTR_1126b8e58);
  func_0x00010c000140();
  func_0x00010c098ea0(puVar7,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
LAB_10541e428:
  _objc_release(puVar6);
LAB_10541e430:
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10541e4c8; end: 10541eb23; +[SCAdTrackEvent adTrackEventWithSqlWebViewEvent:] */

void FUN_10541e4c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8e38;
  _objc_alloc();
  if (param_3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    uVar5 = 0;
    uVar7 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar17 = 0;
    uStack_88 = 0;
    uVar10 = 0;
    uVar3 = 0;
    uVar15 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar21 = 0;
    uVar24 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain(uVar10);
    uVar3 = *(undefined8 *)(param_3 + 0x40);
    uStack_88 = *(undefined8 *)(param_3 + 0x48);
    _objc_retain(uVar3);
    uVar24 = *(undefined8 *)(param_3 + 0x78);
    uVar15 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar15);
    uVar17 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar17);
    uStack_90 = *(undefined8 *)(param_3 + 0x30);
    uStack_98 = *(undefined8 *)(param_3 + 0x38);
    uVar4 = *(undefined8 *)(param_3 + 0x50);
    uVar6 = *(undefined8 *)(param_3 + 0x58);
    uVar5 = *(undefined8 *)(param_3 + 0x60);
    uVar7 = *(undefined8 *)(param_3 + 0x68);
    uVar21 = *(undefined8 *)(param_3 + 0x128);
  }
  _objc_retain(uVar21);
  func_0x00010bff1840(uVar24,puVar1,param_2,uVar10,uStack_88,uVar3,uVar15,uVar17,uStack_90,uStack_98
                      ,uVar4,uVar7,&PTR____CFConstantStringClassReference_110daafd8,uVar6,uVar5,
                      uVar21);
  _objc_release(uVar21);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar3);
  _objc_release(uVar10);
  puVar12 = PTR_PTR_1126b8e68;
  if (param_3 != 0) {
    puVar11 = (undefined *)0x0;
    lVar9 = *(long *)(param_3 + 0x70);
    puVar8 = PTR_PTR_1126b8e70;
    if (lVar9 < 5) {
      if (lVar9 < 3) {
        if (lVar9 == 1) {
          _objc_alloc();
          puVar12 = PTR_PTR_1126b8e68;
          func_0x00010bf0d520(PTR_PTR_1126b8e68);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (lVar9 != 2) goto LAB_10541ea98;
          _objc_alloc();
          puVar12 = PTR_PTR_1126b8e68;
          func_0x00010c29c680(PTR_PTR_1126b8e68);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        if (lVar9 != 3) {
          if (lVar9 != 4) goto LAB_10541ea98;
          puVar12 = PTR_PTR_1126b8e78;
          _objc_alloc();
          uVar24 = *(undefined8 *)(param_3 + 0x80);
          _objc_retain();
          uVar3 = *(undefined8 *)(param_3 + 0x88);
          _objc_retain();
          uVar4 = *(undefined8 *)(param_3 + 0x90);
          _objc_retain();
          uVar5 = *(undefined8 *)(param_3 + 0x98);
          _objc_retain();
          uVar6 = *(undefined8 *)(param_3 + 0xa0);
          _objc_retain();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                              *(undefined1 *)(param_3 + 8));
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(param_3 + 0xa8);
          _objc_retain();
          uVar10 = *(undefined8 *)(param_3 + 0xb0);
          _objc_retain();
          uVar15 = *(undefined8 *)(param_3 + 200);
          _objc_retain();
          uVar17 = *(undefined8 *)(param_3 + 0xd0);
          _objc_retain();
          uVar21 = *(undefined8 *)(param_3 + 0xd8);
          _objc_retain();
          uVar13 = *(undefined8 *)(param_3 + 0xe0);
          _objc_retain(uVar13);
          uVar20 = *(undefined8 *)(param_3 + 0xe8);
          _objc_retain(uVar20);
          uVar23 = *(undefined8 *)(param_3 + 0xf0);
          _objc_retain(uVar23);
          uVar22 = *(undefined8 *)(param_3 + 0xf8);
          _objc_retain(uVar22);
          uVar14 = *(undefined8 *)(param_3 + 0x100);
          _objc_retain(uVar14);
          uVar16 = *(undefined8 *)(param_3 + 0x108);
          _objc_retain(uVar16);
          uVar18 = *(undefined8 *)(param_3 + 0xb8);
          _objc_retain(uVar18);
          uVar19 = *(undefined8 *)(param_3 + 0xc0);
          _objc_retain(uVar19);
          func_0x00010c00e260(puVar12,param_2,uVar24,uVar3,uVar4,uVar5,uVar6,puVar8,uVar7,uVar10,
                              uVar15,uVar17,uVar21,uVar13,uVar20,uVar23,uVar22,uVar14,uVar16,uVar18,
                              uVar19,PTR____kCFBooleanFalse_11034ab60);
          _objc_release(uVar19);
          _objc_release(uVar18);
          _objc_release(uVar16);
          _objc_release(uVar14);
          _objc_release(uVar22);
          _objc_release(uVar23);
          _objc_release(uVar20);
          _objc_release(uVar13);
          _objc_release(uVar21);
          _objc_release(uVar17);
          _objc_release(uVar15);
          _objc_release(uVar10);
          _objc_release(uVar7);
          _objc_release(puVar8);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar24);
          puVar11 = PTR_PTR_1126b8e68;
          func_0x00010c2a4120(PTR_PTR_1126b8e68,param_2,puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126b8e70;
          _objc_alloc();
          goto LAB_10541ea48;
        }
        _objc_alloc();
        puVar12 = PTR_PTR_1126b8e68;
        func_0x00010c29c920(PTR_PTR_1126b8e68,param_2,*(undefined8 *)(param_3 + 0x138));
        _objc_retainAutoreleasedReturnValue();
      }
LAB_10541e9f0:
      func_0x00010c000140();
    }
    else {
      if (lVar9 < 7) {
        if (lVar9 == 5) {
          uVar24 = *(undefined8 *)(param_3 + 0x110);
          _objc_retain(uVar24);
          uVar3 = *(undefined8 *)(param_3 + 0x118);
          _objc_retain(uVar3);
          uVar4 = *(undefined8 *)(param_3 + 0x120);
          _objc_retain(uVar4);
          func_0x00010bfbca60(puVar12,param_2,uVar24,uVar3,uVar4,*(undefined1 *)(param_3 + 9),
                              *(undefined1 *)(param_3 + 10));
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar24);
          puVar8 = PTR_PTR_1126b8e70;
          _objc_alloc();
          goto LAB_10541e9f0;
        }
        if (lVar9 != 6) goto LAB_10541ea98;
        _objc_alloc();
        puVar2 = PTR_PTR_1126b8e68;
        puVar12 = *(undefined **)(param_3 + 0xb8);
        _objc_retain(puVar12);
        puVar11 = *(undefined **)(param_3 + 0xc0);
        _objc_retain(puVar11);
        func_0x00010bf21560(puVar2,param_2,puVar12,puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c000140(puVar8,param_2,puVar1,puVar2);
        _objc_release(puVar2);
      }
      else {
        if (lVar9 == 7) {
          _objc_alloc();
          puVar11 = PTR_PTR_1126b8e68;
          puVar12 = *(undefined **)(param_3 + 0xa0);
          _objc_retain(puVar12);
          func_0x00010bf885a0(puVar12);
          func_0x00010c09bfe0(puVar11);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (lVar9 != 10) goto LAB_10541ea98;
          _objc_alloc();
          puVar11 = PTR_PTR_1126b8e68;
          puVar12 = *(undefined **)(param_3 + 0x130);
          _objc_retain(puVar12);
          func_0x00010c0e4720(puVar11,param_2,puVar12);
          _objc_retainAutoreleasedReturnValue();
        }
LAB_10541ea48:
        func_0x00010c000140();
      }
      _objc_release(puVar11);
    }
    _objc_release(puVar12);
    if (puVar8 != (undefined *)0x0) {
      puVar11 = PTR_PTR_1126b8e50;
      func_0x00010c2a4a20(PTR_PTR_1126b8e50,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      goto LAB_10541ea98;
    }
  }
  puVar11 = (undefined *)0x0;
LAB_10541ea98:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10541eb24; end: 10541ee3b; +[SCAdTrackEvent adTrackEventWithSqlDeeplinkEvent:] */

void FUN_10541eb24(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8e38;
  _objc_alloc();
  if (param_3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    uVar12 = 0;
    uVar4 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uVar10 = 0;
    uStack_80 = 0;
    uVar5 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar11 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar15 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain(uVar5);
    uVar8 = *(undefined8 *)(param_3 + 0x40);
    uStack_80 = *(undefined8 *)(param_3 + 0x48);
    _objc_retain(uVar8);
    uVar15 = *(undefined8 *)(param_3 + 0x50);
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar10);
    uStack_88 = *(undefined8 *)(param_3 + 0x30);
    uStack_90 = *(undefined8 *)(param_3 + 0x38);
    uVar11 = *(undefined8 *)(param_3 + 0x58);
    uVar14 = *(undefined8 *)(param_3 + 0x60);
    uVar12 = *(undefined8 *)(param_3 + 0x68);
    uVar4 = *(undefined8 *)(param_3 + 0x70);
    uVar13 = *(undefined8 *)(param_3 + 0x98);
  }
  _objc_retain(uVar13);
  func_0x00010bff1840(uVar15,puVar1,param_2,uVar5,uStack_80,uVar8,uVar9,uVar10,uStack_88,uStack_90,
                      uVar11,uVar4,&PTR____CFConstantStringClassReference_110daafd8,uVar14,uVar12,
                      uVar13);
  _objc_release(uVar13);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b8e80;
  if (param_3 == 0) {
    lVar6 = 0;
LAB_10541ec60:
    _objc_retain(lVar6);
    _objc_release(lVar6);
    puVar3 = PTR_PTR_1126b8e80;
    if (lVar6 != 0) {
      if (param_3 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(param_3 + 0x90);
      }
      _objc_retain(uVar15);
      func_0x00010bf0d5e0(puVar3,param_2,uVar15);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10541eca0;
    }
    if (param_3 != 0) {
      if (*(long *)(param_3 + 0x80) < 1) {
        if (*(long *)(param_3 + 0x88) < 1) {
          if (*(char *)(param_3 + 9) == '\x01') {
            func_0x00010bfa4820();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126b8e88;
          }
          else {
            if (*(char *)(param_3 + 10) != '\x01') goto LAB_10541ed9c;
            func_0x00010bfa4800();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR_PTR_1126b8e88;
          }
        }
        else {
          func_0x00010bfa47e0(PTR_PTR_1126b8e80,param_2,*(undefined1 *)(param_3 + 0xb));
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126b8e88;
        }
      }
      else {
        func_0x00010bf68680(PTR_PTR_1126b8e80,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b8e88;
      }
      goto joined_r0x00010541ed98;
    }
  }
  else {
    if (*(char *)(param_3 + 8) != '\x01') {
      lVar6 = *(long *)(param_3 + 0x90);
      goto LAB_10541ec60;
    }
    uVar15 = *(undefined8 *)(param_3 + 0x90);
    _objc_retain(uVar15);
    func_0x00010bf68540(puVar3,param_2,uVar15);
    _objc_retainAutoreleasedReturnValue();
LAB_10541eca0:
    _objc_release(uVar15);
    puVar2 = PTR_PTR_1126b8e88;
joined_r0x00010541ed98:
    PTR_PTR_1126b8e88 = puVar2;
    if (puVar3 != (undefined *)0x0) {
      _objc_alloc(puVar2);
      func_0x00010c000140();
      puVar7 = PTR_PTR_1126b8e50;
      func_0x00010bf689c0(PTR_PTR_1126b8e50,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar3);
      goto LAB_10541eda0;
    }
  }
LAB_10541ed9c:
  puVar7 = (undefined *)0x0;
LAB_10541eda0:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10541ee3c; end: 10541f54f; +[SQLAdTrackLifecycle sqlLifecycleWithAdLifecycleEvent:] */

void FUN_10541ee3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined *puStack_e8;
  undefined *puStack_e0;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = lVar1;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c25e900(param_5);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c2709c0(lVar1);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b8e90;
  _objc_alloc();
  lVar2 = lVar1;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c278820();
  lVar9 = lVar1;
  func_0x00010c29e160();
  lVar10 = lVar1;
  func_0x00010bf3fe80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010c2415a0();
  lVar12 = lVar1;
  func_0x00010bef60a0();
  lVar13 = lVar1;
  func_0x00010c106900();
  lVar14 = lVar1;
  func_0x00010bef19e0();
  lVar15 = lVar1;
  func_0x00010bef4240();
  func_0x00010c2709c0(lVar1);
  lVar16 = param_5;
  uVar40 = param_1;
  func_0x00010c25e900();
  lVar17 = param_5;
  func_0x00010c2a47e0();
  lVar18 = param_5;
  func_0x00010bf68580();
  lVar19 = param_5;
  func_0x00010bf68980();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_5;
  func_0x00010bf61aa0();
  func_0x00010bf055a0();
  func_0x00010c0f2320(param_5);
  uVar41 = uVar40;
  func_0x00010c0f1740();
  func_0x00010c0f1720();
  func_0x00010c079060();
  func_0x00010c0725e0();
  func_0x00010c072320();
  func_0x00010bf0d4e0();
  lVar21 = param_5;
  func_0x00010bf0cde0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_5;
  func_0x00010bfb35e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar22 != 0) {
    lStack_1e8 = param_5;
    func_0x00010bfb35e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
  }
  lVar23 = lVar1;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_5;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fec0();
  lVar25 = param_5;
  uVar42 = uVar41;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fec0();
  lVar26 = param_5;
  uVar45 = param_2;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f260();
  lVar27 = param_5;
  uVar43 = uVar42;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f280();
  lVar28 = param_5;
  uVar44 = uVar43;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010bf95080();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar29 == 0) {
    puStack_e0 = (undefined *)0x0;
  }
  else {
    lStack_1f0 = param_5;
    func_0x00010c2772e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_1f8 = lStack_1f0;
    func_0x00010bf95080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1060();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar30 = param_5;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010bf95080();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar31 == 0) {
    puStack_e8 = (undefined *)0x0;
  }
  else {
    lStack_200 = param_5;
    func_0x00010c2772e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_208 = lStack_200;
    func_0x00010bf95080();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = uVar45;
    func_0x00010bdc1060();
    func_0x00010c0df720(uVar44);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar32 = param_5;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010bf94ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_5;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar34;
  func_0x00010bf94d00();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_5;
  func_0x00010c2772e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2648a0();
  lVar37 = param_5;
  uVar45 = uVar44;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c269360();
  lVar38 = param_5;
  func_0x00010c2772e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c269400();
  lVar39 = param_5;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264e20();
  FUN_10542dbb4(param_1,uVar40,uVar41,param_2,uVar42,uVar43,uVar44,uVar45,puVar3,puVar5,lVar2,lVar6,
                lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,
                lVar19,(char)lVar20);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  if (lVar31 != 0) {
    _objc_release(puStack_e8);
    _objc_release(lStack_208);
    _objc_release(lStack_200);
  }
  _objc_release(lVar31);
  _objc_release(lVar30);
  if (lVar29 != 0) {
    _objc_release(puStack_e0);
    _objc_release(lStack_1f8);
    _objc_release(lStack_1f0);
  }
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  if (lVar22 != 0) {
    _objc_release(lStack_1e8);
  }
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar19);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10541f550; end: 10541f823; +[SQLAdTrackInteraction sqlInteractionWithAdInteractionEvent:] */

void FUN_10541f550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = uVar1;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf9a440(param_5);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c2709c0(uVar1);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b8e98;
  _objc_alloc();
  uVar2 = uVar1;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c278820();
  uVar9 = uVar1;
  func_0x00010c29e160();
  uVar10 = uVar1;
  func_0x00010bf3fe80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c2415a0();
  uVar12 = uVar1;
  func_0x00010bef60a0();
  uVar13 = uVar1;
  func_0x00010c106900();
  uVar14 = uVar1;
  func_0x00010bef19e0();
  uVar15 = uVar1;
  func_0x00010bef4240();
  func_0x00010c2709c0(uVar1);
  uVar16 = param_5;
  uVar20 = param_1;
  func_0x00010bf9a440();
  uVar17 = param_5;
  func_0x00010c068280();
  func_0x00010c09ea00(param_5);
  uVar21 = uVar20;
  func_0x00010c09ea00(param_5);
  func_0x00010c09f940(param_5);
  uVar22 = uVar21;
  func_0x00010c09f980(param_5);
  uVar18 = param_5;
  func_0x00010c2648c0();
  _objc_release(param_5);
  uVar19 = uVar1;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  FUN_10542e800(param_1,uVar20,param_2,uVar21,uVar22,puVar3,puVar5,uVar2,uVar6,uVar7,uVar8,uVar9,
                uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19);
  _objc_release(uVar19);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10541f824; end: 1054201a3; +[SQLAdTrackWebView sqlWebViewWithAdWebViewEvent:] */

void FUN_10541f824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
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
  uVar2 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = uVar2;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0f4880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c2709c0(uVar2);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(uVar5);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1054201a4;
  uStack_88 = 0x1054201b4;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1054201a4;
  uStack_b8 = 0x1054201b4;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_1054201a4;
  uStack_e8 = 0x1054201b4;
  uStack_e0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_1054201a4;
  uStack_118 = 0x1054201b4;
  uStack_110 = 0;
  puStack_150 = &uStack_158;
  uStack_158 = 0;
  uStack_148 = 0x2020000000;
  uStack_140 = 0;
  puStack_170 = &uStack_178;
  uStack_178 = 0;
  uStack_168 = 0x2020000000;
  uStack_160 = 0;
  puStack_1a0 = &uStack_1a8;
  uStack_1a8 = 0;
  uStack_198 = 0x3032000000;
  pcStack_190 = FUN_1054201a4;
  uStack_188 = 0x1054201b4;
  uStack_180 = 0;
  puStack_1d0 = &uStack_1d8;
  uStack_1d8 = 0;
  uStack_1c8 = 0x3032000000;
  pcStack_1c0 = FUN_1054201a4;
  uStack_1b8 = 0x1054201b4;
  uStack_1b0 = 0;
  puStack_200 = &uStack_208;
  uStack_208 = 0;
  uStack_1f8 = 0x3032000000;
  pcStack_1f0 = FUN_1054201a4;
  uStack_1e8 = 0x1054201b4;
  uStack_1e0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x3032000000;
  pcStack_220 = FUN_1054201a4;
  uStack_218 = 0x1054201b4;
  uStack_210 = 0;
  puStack_250 = &uStack_258;
  uStack_258 = 0;
  uStack_248 = 0x2020000000;
  uStack_240 = 0;
  uVar5 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  dVar36 = 1.60807493534087e-314;
  func_0x00010c0c1780();
  _objc_release(uVar5);
  uVar5 = puStack_a0[5];
  func_0x00010c09bfa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar37 = dVar36;
  func_0x00010bf885a0(puStack_1d0[5]);
  puVar1 = puStack_1d0;
  if (dVar36 <= dVar37) {
    uVar6 = puStack_1d0[5];
    _objc_retain(uVar6);
    uVar7 = puVar1[5];
    puVar1[5] = uVar6;
  }
  else {
    uVar6 = puStack_a0[5];
    func_0x00010c09bfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puStack_1d0[5];
    puStack_1d0[5] = uVar6;
  }
  _objc_release(uVar7);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b8ea0;
  _objc_alloc();
  uVar5 = uVar2;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c278820();
  uVar9 = uVar2;
  func_0x00010c29e160();
  uVar10 = uVar2;
  func_0x00010bf3fe80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010c2415a0();
  uVar12 = uVar2;
  func_0x00010bef60a0();
  uVar13 = uVar2;
  func_0x00010c106900();
  uVar14 = uVar2;
  func_0x00010bef19e0();
  uVar15 = uVar2;
  func_0x00010bef4240();
  uVar16 = param_3;
  func_0x00010c25e900();
  func_0x00010c2709c0(uVar2);
  uVar17 = puStack_a0[5];
  func_0x00010bf87c80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = puStack_a0[5];
  func_0x00010bf87d60();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = puStack_a0[5];
  func_0x00010bfb1020();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = puStack_a0[5];
  func_0x00010bfbb900();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = puStack_1d0[5];
  uVar21 = puStack_a0[5];
  func_0x00010bfdce60();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010bf1f3c0();
  uVar23 = puStack_a0[5];
  func_0x00010c291200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = puStack_a0[5];
  func_0x00010c0f1ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = puStack_a0[5];
  func_0x00010c0d6c00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = puStack_a0[5];
  func_0x00010c13bca0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = puStack_a0[5];
  func_0x00010bf87d20();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = puStack_a0[5];
  func_0x00010bf87be0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = puStack_a0[5];
  func_0x00010bf87ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = puStack_a0[5];
  func_0x00010c13b060();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = puStack_a0[5];
  func_0x00010c15f4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = puStack_a0[5];
  func_0x00010c15f4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = puStack_a0[5];
  func_0x00010c15f500();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  FUN_10542eee0(dVar37,puVar3,puVar4,uVar5,uVar7,uVar6,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar35,(char)uVar22);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_258,8);
  __Block_object_dispose(&uStack_238,8);
  _objc_release(uStack_210);
  __Block_object_dispose(&uStack_208,8);
  _objc_release(uStack_1e0);
  __Block_object_dispose(&uStack_1d8,8);
  _objc_release(uStack_1b0);
  __Block_object_dispose(&uStack_1a8,8);
  _objc_release(uStack_180);
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
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054201a4; end: 1054201bb;  */

void FUN_1054201a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054201bc; end: 1054201f3;  */

void FUN_1054201bc(long param_1,undefined8 param_2)

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



/* Entry: 1054201f4; end: 1054202df;  */

void FUN_1054201f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = param_5;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = param_6;
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054202e0; end: 10542039f;  */

void FUN_1054202e0(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  return;
}



/* Entry: 1054203a0; end: 1054203a7;  */

void FUN_1054203a0(void)

{
  return;
}



/* Entry: 1054203a8; end: 10542041b;  */

void FUN_1054203a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10542041c; end: 10542045f;  */

void FUN_10542041c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105420460; end: 105420467;  */

void FUN_105420460(void)

{
  return;
}



/* Entry: 105420468; end: 10542049f;  */

void FUN_105420468(long param_1,undefined8 param_2)

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



/* Entry: 1054204a0; end: 1054204af;  */

void FUN_1054204a0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1054204b0; end: 10542099f; +[SQLAdTrackDeeplink sqlDeeplinkWithAdDeeplinkEvent:] */

void FUN_1054204b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar2;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0f4880();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c2709c0(uVar2);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x2020000000;
  uStack_c0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x2020000000;
  uStack_e0 = 0;
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  puStack_140 = &uStack_148;
  uStack_148 = 0;
  uStack_138 = 0x3032000000;
  pcStack_130 = FUN_1054201a4;
  uStack_128 = 0x1054201b4;
  uStack_120 = 0;
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x2020000000;
  uStack_150 = 0;
  uVar3 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = 0xc2000000;
  func_0x00010c0bc960();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b8ea8;
  _objc_alloc();
  uVar3 = uVar2;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c278820();
  uVar9 = uVar2;
  func_0x00010c29e160();
  uVar10 = uVar2;
  func_0x00010bf3fe80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010c2415a0();
  func_0x00010c2709c0(uVar2);
  uVar12 = uVar2;
  func_0x00010bef60a0();
  uVar13 = uVar2;
  func_0x00010c106900();
  uVar14 = uVar2;
  func_0x00010bef19e0();
  uVar15 = uVar2;
  func_0x00010bef4240();
  uVar16 = param_3;
  func_0x00010bf68580();
  uVar1 = *(undefined1 *)(puStack_d0 + 3);
  uVar17 = uVar2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  FUN_10542fd08(uVar18,puVar5,puVar6,uVar3,uVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                uVar14,uVar15,uVar16,uVar1);
  _objc_release(uVar17);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_168,8);
  __Block_object_dispose(&uStack_148,8);
  _objc_release(uStack_120);
  __Block_object_dispose(&uStack_118,8);
  __Block_object_dispose(&uStack_f8,8);
  __Block_object_dispose(&uStack_d8,8);
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054209a0; end: 105420a1f;  */

void FUN_1054209a0(long param_1,undefined8 param_2)

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



/* Entry: 105420a20; end: 105420a7b;  */

void FUN_105420a20(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105420a7c; end: 105420b6f; -[SCAdTrackEventObservableRepositoryAdaptor initWithBlizzardLogger:backgroundTaskWrapper:adConfigProviderV2:] */

undefined1 *
FUN_105420a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e8458;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105420b70; end: 105420c63; -[SCAdTrackEventObservableRepositoryAdaptor adTrackEventObservableForRepository:] */

void FUN_105420b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010bef5ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010bfad7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105420c64; end: 105420cbf;  */

long FUN_105420c64(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be679a0();
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105420cc0; end: 105420def; -[SCAdTrackEventObservableRepositoryAdaptor adUnifiedEventStreamsForRepository:] */

void FUN_105420cc0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar3 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_adWebviewEventObservable_11259b2e8);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = param_3;
    func_0x00010bef6500(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar2 = uVar1;
    func_0x00010c0b8600(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105420df0; end: 105420e53;  */

void FUN_105420df0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be679c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105420e54; end: 105420e5f; -[SCAdTrackEventObservableRepositoryAdaptor _onAdWebviewEvent:] */

void FUN_105420e54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a4a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b8e50,PTR_s_webviewWithWebviewEvent__112686cb0)
  ;
  return;
}



/* Entry: 105420e60; end: 1054211f7; -[SCAdTrackEventObservableRepositoryAdaptor _onAdTrackEvent:] */

byte FUN_105420e60(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  byte bVar13;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_1054211f8;
  uStack_78 = 0x105421208;
  uStack_70 = 0;
  func_0x00010c0be9e0(param_3);
  lVar2 = puStack_90[5];
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar13 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c098ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c25e900();
    if (lVar2 == 3) {
      lVar2 = param_3;
      func_0x00010c098ba0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c25e900();
      if (lVar4 == 3) {
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bf428e0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar5;
        func_0x00010bef2c60();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_3;
        func_0x00010bf428e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010bef2c60();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar12;
        func_0x00010c071ae0();
        if ((int)uVar7 == 0) {
          bVar1 = false;
        }
        else {
          lVar8 = *(long *)(param_1 + 0x30);
          func_0x00010bf428e0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c278820();
          lVar10 = param_3;
          func_0x00010bf428e0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c278820();
          bVar1 = lVar9 == lVar11;
          _objc_release(lVar10);
          _objc_release(lVar8);
        }
        _objc_release(lVar6);
        _objc_release(lVar4);
        _objc_release(uVar12);
        _objc_release(uVar5);
      }
      else {
        bVar1 = false;
      }
      _objc_release(lVar2);
    }
    else {
      bVar1 = false;
    }
    _objc_release(lVar3);
    lVar2 = param_3;
    func_0x00010bf51e00();
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar2;
    _objc_release(uVar12);
    if (bVar1 == false) {
      func_0x00010c0ad6c0(*(undefined8 *)(param_1 + 8));
    }
    bVar13 = bVar1 ^ 1;
  }
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(param_3);
  return bVar13;
}



/* Entry: 1054211f8; end: 10542120f;  */

void FUN_1054211f8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105421210; end: 1054212cf;  */

void FUN_105421210(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c25e900();
  if (lVar1 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bf428e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c278820();
    func_0x00010be6c080(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054212d0; end: 10542158f;  */

void FUN_1054212d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105421590; end: 105421593;  */

void FUN_105421590(void)

{
  return;
}



/* Entry: 105421594; end: 1054216eb; -[SCAdTrackEventObservableRepositoryAdaptor beginBackgroundTaskWithIdentifier:trackSeqNum:] */

void FUN_105421594(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if (((int)uVar2 != 0) && (lVar4 = param_3, func_0x00010c08fa60(), lVar4 != 0)) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ddd4f8);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c296f60(lVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf17d00();
      _objc_release(uVar1);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar5,puVar3);
      _objc_release(puVar5);
    }
    _os_unfair_lock_unlock(param_1 + 0x20);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054216ec; end: 1054217ff; -[SCAdTrackEventObservableRepositoryAdaptor didEndBackgroundTaskWithIdentifier:trackSeqNum:] */

void FUN_1054216ec(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if (((int)uVar5 != 0) && (lVar2 = param_3, func_0x00010c08fa60(), lVar2 != 0)) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ddd4f8);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x20);
    uVar4 = *(ulong *)(param_1 + 0x28);
    func_0x00010c296f60(uVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 0x20);
    if (uVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c282760(uVar4);
      func_0x00010bf94260(uVar5,param_2,uVar6 & 0xffffffff);
      _objc_release(uVar5);
    }
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105421800; end: 10542187f; -[SCAdTrackEventObservableRepositoryAdaptor _onTopSnapPresentWithAdIdentifier:trackSeqNum:] */

void FUN_105421800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf17ce0(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105421880; end: 1054218d3; -[SCAdTrackEventObservableRepositoryAdaptor .cxx_destruct] */

void FUN_105421880(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054218d4; end: 105421ab7;  */

void FUN_1054218d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be906c0(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105421ab8; end: 105421af7;  */

void FUN_105421ab8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc5a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105421af8; end: 105421b6b;  */

void FUN_105421af8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be19e40(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105421b6c; end: 105421be3;  */

void FUN_105421b6c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee6e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee6e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105421be4; end: 105421c9f; -[SCAdTrackEventRepositoryServiceProvider _adTrackSeqNumProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105421be4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b8ec0;
  _objc_alloc(PTR_PTR_1126b8ec0);
  lVar2 = param_1 + _DAT_112723398;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bef25c0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272339c;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff13c0(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105421ca0; end: 105421dd3; -[SCAdTrackEventRepositoryServiceProvider _adTrackEventRepositoryWithRepositoryAdaptor:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105421ca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b8ec8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_1127233a0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127233a4;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c2798e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112723398;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bef25c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1320(puVar1,param_2,lVar3,lVar5,param_3,lVar6,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105421dd4; end: 10542219f; -[SCAdTrackEventRepositoryServiceProvider _adTrackEventRepositoryV2WithPerformer:adWebviewConfigRepository:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105421dd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1054221a0;
  puStack_98 = &UNK_110887850;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  uStack_90 = param_3;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_e0 = puVar3;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1054221e8;
  puStack_c8 = &UNK_110887880;
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(param_3);
  uStack_c0 = param_3;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_e8,auStack_80);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b8ed0;
  _objc_alloc(PTR_PTR_1126b8ed0);
  lVar5 = param_1 + _DAT_1127233a4;
  _objc_loadWeakRetained(lVar5);
  lVar12 = lVar5;
  func_0x00010c2798e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112723398;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bef25c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_1127233a8;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c14c340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055140(puVar4);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  lVar5 = param_1 + _DAT_1127233ac;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar10 = PTR_PTR_1126b8ed8;
  _objc_alloc();
  lVar5 = param_1 + _DAT_11272339c;
  _objc_loadWeakRetained(lVar5);
  lVar8 = lVar5;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8700();
  lVar12 = (long)_DAT_1127233b0;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar10;
  _objc_release(uVar11);
  _objc_release(lVar8);
  _objc_release(lVar5);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar12));
  _objc_release(lVar6);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puVar2);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puVar1);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054221a0; end: 105422277;  */

void FUN_1054221a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beeac60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105422278; end: 10542234f; -[SCAdTrackEventRepositoryServiceProvider _webviewAsmLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105422278(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b8ee0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_1127233a0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127233b4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c249b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0014a0(puVar1,param_2,lVar3,param_3,lVar4);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105422350; end: 10542244b; -[SCAdTrackEventRepositoryServiceProvider _instantPageOperationalEventLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105422350(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_1127233a8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c14c340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf90840();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b8ee8;
    _objc_alloc(PTR_PTR_1126b8ee8);
    param_1 = param_1 + _DAT_1127233ac;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff89e0(puVar5,param_2,lVar1,param_3);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10542244c; end: 1054224e3; -[SCAdTrackEventRepositoryServiceProvider _instantPagePaymentEventLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10542244c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b8ef0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_1127233b4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c249b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0350e0(puVar1,param_2,param_3,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054224e4; end: 1054225bb; -[SCAdTrackEventRepositoryServiceProvider _adWebviewConfigRepositoryWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054224e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b8ef8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_1127233a4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2798e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112723398;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bef25c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055160(puVar1,param_2,lVar3,lVar4,param_3);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054225bc; end: 105422797; -[SCAdTrackEventRepositoryServiceProvider _repositoryAdaptorWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054225bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_1127233ac;
  _objc_retain(param_3);
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar1 = lVar8;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = param_1 + _DAT_112723398;
  _objc_loadWeakRetained(lVar8);
  lVar2 = lVar8;
  func_0x00010bef25c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = param_1 + _DAT_1127233a0;
  _objc_loadWeakRetained();
  lVar3 = lVar8;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf8f1a0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar8);
  if ((int)lVar5 == 0) {
    puVar6 = PTR_PTR_1126b8f08;
    _objc_alloc(PTR_PTR_1126b8f08);
    func_0x00010bff8a00();
  }
  else {
    puVar6 = PTR_PTR_1126b8f00;
    _objc_alloc(PTR_PTR_1126b8f00);
    func_0x00010bff89e0();
  }
  _objc_release(param_3);
  lVar8 = param_1 + _DAT_1127233b8;
  _objc_loadWeakRetained(lVar8);
  lVar3 = lVar8;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  puVar7 = PTR_PTR_1126b8f10;
  _objc_alloc(PTR_PTR_1126b8f10);
  param_1 = param_1 + _DAT_11272339c;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8580(puVar7,param_2,puVar6,lVar3,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105422798; end: 1054229d3; -[SCAdTrackEventRepositoryServiceProvider _funnelEventTrackerWithPerformer:adTrackEventRepository:playbackSessionObservableRepository:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105422798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + _DAT_1127233a0;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf8f1e0();
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_112723398;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bef25c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_1127233ac;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar9 = (long)_DAT_11272339c;
    lVar1 = param_1 + lVar9;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf1f480();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    puVar10 = PTR_PTR_1126b8f18;
    _objc_alloc(PTR_PTR_1126b8f18);
    func_0x00010bff8a20();
    if ((int)lVar6 != 0) {
      puVar7 = PTR_PTR_1126b8f20;
      _objc_alloc();
      lVar9 = param_1 + lVar9;
      _objc_loadWeakRetained(lVar9);
      lVar1 = lVar9;
      func_0x00010bef2520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff10e0(puVar7,param_2,lVar1,lVar2,param_4,puVar10,param_5,param_3);
      uVar8 = *(undefined8 *)(param_1 + _DAT_1127233bc);
      *(undefined **)(param_1 + _DAT_1127233bc) = puVar7;
      _objc_release(uVar8);
      _objc_release(lVar1);
      _objc_release(lVar9);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1054229d4; end: 105422a97; -[SCAdTrackEventRepositoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054229d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112723390);
  _objc_destroyWeak(param_1 + _DAT_112723398);
  _objc_destroyWeak(param_1 + _DAT_1127233b4);
  _objc_destroyWeak(param_1 + _DAT_112723394);
  _objc_destroyWeak(param_1 + _DAT_1127233ac);
  _objc_destroyWeak(param_1 + _DAT_1127233a4);
  _objc_destroyWeak(param_1 + _DAT_1127233b8);
  _objc_destroyWeak(param_1 + _DAT_1127233a8);
  _objc_destroyWeak(param_1 + _DAT_11272339c);
  _objc_destroyWeak(param_1 + _DAT_1127233a0);
  _objc_destroyWeak(param_1 + _DAT_1127233c0);
  _objc_storeStrong(param_1 + _DAT_1127233b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127233bc,0);
  return;
}



/* Entry: 105422a98; end: 105422c67; -[SCAdTrackEventRepositoryV1 initWithAdConfigProvider:transactorProvider:repositoryAdaptor:adCrashLogger:performer:] */

undefined8 *
FUN_105422a98(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e8460;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    _objc_retain(param_3);
    uVar5 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar5);
    uVar3 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf8f1c0();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      func_0x00010bfee6e0(puVar1);
    }
    _objc_retain(param_5);
    uVar5 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar5);
    _objc_release(param_4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105422c68; end: 105422cdb;  */

void FUN_105422c68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8f28;
  _objc_opt_class(PTR_PTR_1126b8f28);
  uVar3 = uVar1;
  func_0x00010c279940(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110ddd558,0,0,1,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105422cdc; end: 105422de7; -[SCAdTrackEventRepositoryV1 beginObservationWithAdUnifiedEventStreams:] */

void FUN_105422cdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bef6160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105422de8; end: 105422e2f;  */

void FUN_105422de8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be679a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105422e30; end: 105422f3b; -[SCAdTrackEventRepositoryV1 beginTrackEventObservationWithRepository:] */

void FUN_105422e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bef5d00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105422f3c; end: 105422f83;  */

void FUN_105422f3c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be679a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105422f84; end: 105423097; -[SCAdTrackEventRepositoryV1 trackEventsForAdIdentifier:viewSeqNum:] */

void FUN_105422f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2798c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105423098;
  puStack_58 = &UNK_110887940;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x000100589538(uVar1,0,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be30c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105423098; end: 1054230b7;  */

void FUN_105423098(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar3 = param_2 + 0x28;
      func_0x0001005fc990(lVar3,*(undefined8 *)(param_2 + 8),&UNK_10ddaaec7,0x6b);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar3,1,uVar2);
      func_0x0001005fcb64(lVar3,FUN_10542ac88);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10542b6a4;
    }
  }
  lVar3 = 0;
LAB_10542b6a4:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1054230b8; end: 1054230c3; -[SCAdTrackEventRepositoryV1 trackEventsForAdIdentifier:trackSeqNum:] */

void FUN_1054230b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bece290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__trackUiEventsForAdIdentifier_tr_112591248,param_3,param_4,0,3);
  return;
}



/* Entry: 1054230c4; end: 1054231c7; -[SCAdTrackEventRepositoryV1 trackEventSequencesForAdIdentifier:trackSeqNum:viewSeqNum:adType:] */

void FUN_1054230c4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010bece280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010becdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar5 = &puStack_58;
  uVar6 = 2;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_58 = puVar1;
  puStack_50 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_68 = FUN_1054231c8;
    puStack_a0 = puVar1;
    puStack_98 = param_1;
    uStack_90 = param_3;
    uStack_88 = param_4;
    puStack_80 = puVar2;
    puStack_78 = puVar3;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar5);
    puVar1 = puVar4;
    func_0x00010c2798c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_1054232e4;
    puStack_c0 = &UNK_1108879b0;
    ppuStack_b8 = ppuVar5;
    uStack_b0 = uVar6;
    uStack_a8 = param_5;
    _objc_retain(ppuVar5);
    puVar2 = puVar1;
    func_0x000100589538(puVar1,0,&puStack_d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010be30c60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x000100504554();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(ppuStack_b8);
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054231c8; end: 1054232e3; -[SCAdTrackEventRepositoryV1 trackEventsForAdIdentifier:trackSeqNum:snapIndex:] */

void FUN_1054231c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2798c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1054232e4;
  puStack_60 = &UNK_1108879b0;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x000100589538(uVar1,0,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be30c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054232e4; end: 105423307;  */

void FUN_1054232e4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar3 = param_2 + 0x20;
      func_0x0001005fc990(lVar3,*(undefined8 *)(param_2 + 8),&UNK_10ddaae3e,0x88);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar3,1,uVar2);
      func_0x0001005edcd4(lVar3,2,uVar4);
      func_0x0001005fcb64(lVar3,FUN_10542ac88);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10542b528;
    }
  }
  lVar3 = 0;
LAB_10542b528:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105423308; end: 1054234db; -[SCAdTrackEventRepositoryV1 webViewMetricEventsForAdIdentifier:viewSeqNum:] */

void FUN_105423308(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ada0(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    puVar3 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1054234dc;
    puStack_58 = &UNK_110887940;
    _objc_retain(param_3);
    puVar4 = puVar3;
    lStack_50 = param_3;
    uStack_48 = param_4;
    func_0x000100589538(puVar3,0,&puStack_70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010be30c80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bf529e0();
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 != (undefined *)0x0) {
      puVar3 = param_1;
      func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_110887a20);
    }
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(lStack_50);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054234dc; end: 1054234fb;  */

void FUN_1054234dc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar3 = param_2 + 0x38;
      func_0x0001005fc990(lVar3,*(undefined8 *)(param_2 + 8),&UNK_10ddaafa3,0x6d);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar3,1,uVar2);
      func_0x0001005fcb64(lVar3,FUN_10542b8d8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10542c104;
    }
  }
  lVar3 = 0;
LAB_10542c104:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1054234fc; end: 1054234ff; -[SCAdTrackEventRepositoryV1 resetForAdIdentifier:] */

void FUN_1054234fc(void)

{
  return;
}



/* Entry: 105423500; end: 105423537; -[SCAdTrackEventRepositoryV1 initDatabase] */

void FUN_105423500(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105423538; end: 10542356f; -[SCAdTrackEventRepositoryV1 transactor] */

void FUN_105423538(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    func_0x00010bfee6e0();
    lVar1 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105423570; end: 1054236f3; -[SCAdTrackEventRepositoryV1 _trackUiEventsForAdIdentifier:trackSeqNum:viewSeqNum:adType:] */

void FUN_105423570(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 auStack_f0 [6];
  undefined8 auStack_c0 [6];
  undefined8 auStack_90 [6];
  
  puVar2 = auStack_f0;
  _objc_retain(param_3);
  if (param_6 == 6) {
    pcVar3 = (code *)0x105423714;
  }
  else if (param_6 == 3) {
    pcVar3 = FUN_1054236f4;
    puVar2 = auStack_90;
    param_5 = param_4;
  }
  else {
    if (param_6 != 1) {
      puVar4 = (undefined *)0x0;
      goto LAB_105423668;
    }
    pcVar3 = (code *)0x105423704;
    puVar2 = auStack_c0;
  }
  puVar1 = param_1;
  func_0x00010c2798c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puVar2[1] = 0xc2000000;
  puVar2[2] = pcVar3;
  puVar2[3] = &UNK_110887940;
  _objc_retain(param_3);
  puVar2[4] = param_3;
  puVar2[5] = param_5;
  puVar4 = puVar1;
  func_0x000100589538(puVar1,0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2[4]);
LAB_105423668:
  func_0x00010be30c60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_110887a40);
  }
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054236f4; end: 105423733;  */

void FUN_1054236f4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar3 = param_2 + 0x18;
      func_0x0001005fc990(lVar3,*(undefined8 *)(param_2 + 8),&UNK_10ddaadd0,0x6d);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar3,1,uVar2);
      func_0x0001005fcb64(lVar3,FUN_10542ac88);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10542b394;
    }
  }
  lVar3 = 0;
LAB_10542b394:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105423734; end: 105423807; -[SCAdTrackEventRepositoryV1 _trackMetricEventsForAdIdentifier:trackSeqNum:viewSeqNum:snapIndex:adType:] */

void FUN_105423734(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8f2c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (param_7 == 6) {
      func_0x00010c277c40(param_1,param_2,param_3,param_5,param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
    }
  }
  else {
    func_0x00010bece300(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105423808; end: 1054239db; -[SCAdTrackEventRepositoryV1 _trackWebViewEventsForAdIdentifier:trackSeqNum:] */

void FUN_105423808(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ada0(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    puVar3 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1054239dc;
    puStack_58 = &UNK_110887940;
    _objc_retain(param_3);
    puVar4 = puVar3;
    lStack_50 = param_3;
    uStack_48 = param_4;
    func_0x000100589538(puVar3,0,&puStack_70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010be30c80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bf529e0();
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 != (undefined *)0x0) {
      puVar3 = param_1;
      func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_110887a60);
    }
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(lStack_50);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054239dc; end: 1054239fb;  */

void FUN_1054239dc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar3 = param_2 + 0x30;
      func_0x0001005fc990(lVar3,*(undefined8 *)(param_2 + 8),&UNK_10ddaaf33,0x6f);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar3,1,uVar2);
      func_0x0001005fcb64(lVar3,FUN_10542b8d8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10542b81c;
    }
  }
  lVar3 = 0;
LAB_10542b81c:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1054239fc; end: 105423bdf; -[SCAdTrackEventRepositoryV1 trackDeeplinkEventsForAdIdentifier:viewSeqNum:snapIndex:] */

void FUN_1054239fc(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ada0(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    puVar3 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105423be0;
    puStack_70 = &UNK_1108879b0;
    _objc_retain(param_3);
    puVar4 = puVar3;
    lStack_68 = param_3;
    uStack_60 = param_4;
    uStack_58 = param_5;
    func_0x000100589538(puVar3,0,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010be30c40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bf529e0();
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 != (undefined *)0x0) {
      puVar3 = param_1;
      func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_110887aa0);
    }
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(lStack_68);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105423be0; end: 105423c03;  */

void FUN_105423be0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar3 = param_2 + 0x40;
      func_0x0001005fc990(lVar3,*(undefined8 *)(param_2 + 8),&UNK_10ddab011,0x89);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar3,1,uVar2);
      func_0x0001005edcd4(lVar3,2,uVar4);
      func_0x0001005fcb64(lVar3,FUN_10542c358);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10542c298;
    }
  }
  lVar3 = 0;
LAB_10542c298:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105423c04; end: 105423cf7; -[SCAdTrackEventRepositoryV1 _onAdTrackEvent:] */

void FUN_105423c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105423cf8;
  puStack_20 = &UNK_110887ac0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105423d04;
  puStack_48 = &UNK_110887af0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x105423d10;
  puStack_70 = &UNK_110887b20;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105423d1c;
  puStack_98 = &UNK_110887b50;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0be9e0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0,
                      &PTR___NSConcreteGlobalBlock_110887ba0,&PTR___NSConcreteGlobalBlock_110887be0,
                      &PTR___NSConcreteGlobalBlock_110887c20,&PTR___NSConcreteGlobalBlock_110887c60,
                      &PTR___NSConcreteGlobalBlock_110887ca0,&PTR___NSConcreteGlobalBlock_110887cc0)
  ;
  return;
}



/* Entry: 105423cf8; end: 105423d3f;  */

void FUN_105423cf8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be69d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onLifecycleEvent__1125780f0,param_2);
  return;
}



/* Entry: 105423d40; end: 105423efb; -[SCAdTrackEventRepositoryV1 _onWebviewEvent:] */

void FUN_105423d40(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126b8ea0;
    func_0x00010c24cac0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105423efc;
    puStack_70 = &UNK_110887ce0;
    puStack_68 = puVar3;
    _objc_retain(puVar3);
    uVar5 = uVar4;
    func_0x00010b5edefc(uVar4,0,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    lVar1 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c278820();
    lVar6 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e160();
    lVar7 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2415a0();
    func_0x00010be30be0(param_1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_release(puStack_68);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105423efc; end: 10542449f;  */

undefined * FUN_105423efc(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  
  lVar29 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  if (lVar29 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar29 + 0x10);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  _objc_retain();
  lVar29 = *(long *)(param_1 + 0x20);
  if (lVar29 == 0) {
    uStack_128 = 0;
    uStack_120 = 0;
    uVar6 = 0;
  }
  else {
    uStack_128 = *(undefined8 *)(lVar29 + 0x30);
    uStack_120 = *(undefined8 *)(lVar29 + 0x38);
    uVar6 = *(undefined8 *)(lVar29 + 0x40);
  }
  _objc_retain();
  lVar29 = *(long *)(param_1 + 0x20);
  if (lVar29 == 0) {
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uVar7 = 0;
    uVar31 = 0;
  }
  else {
    uStack_130 = *(undefined8 *)(lVar29 + 0x48);
    uStack_138 = *(undefined8 *)(lVar29 + 0x50);
    uStack_140 = *(undefined8 *)(lVar29 + 0x58);
    uStack_150 = *(undefined8 *)(lVar29 + 0x60);
    uStack_148 = *(undefined8 *)(lVar29 + 0x68);
    uStack_158 = *(undefined8 *)(lVar29 + 0x70);
    uVar31 = *(undefined8 *)(lVar29 + 0x78);
    uVar7 = *(undefined8 *)(lVar29 + 0x80);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  }
  _objc_retain();
  lVar29 = *(long *)(param_1 + 0x20);
  if (lVar29 == 0) {
    bVar1 = 0;
    uVar12 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar29 + 8);
    uVar12 = *(undefined8 *)(lVar29 + 0xa8);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 200);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe8);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x100);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x108);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar25 = 0;
  }
  else {
    uVar25 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x110);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar26 = 0;
  }
  else {
    uVar26 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x118);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar27 = 0;
  }
  else {
    uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x120);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x128);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar30 = 0;
  }
  else {
    uVar30 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x130);
  }
  _objc_retain(uVar30);
  FUN_10542d0c0(uVar31,param_2,uVar2,uVar3,uVar4,uVar5,uStack_128,uStack_120,uVar6,uStack_130,
                uStack_138,uStack_140,uStack_150,uStack_148,uStack_158,uVar7,uVar8,uVar9,uVar10,
                uVar11,bVar1 & 1);
  _objc_release(param_2);
  _objc_release(uVar30);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
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
  _objc_release(uVar3);
  _objc_release(uVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 1054244a0; end: 10542466f; -[SCAdTrackEventRepositoryV1 _onDeeplinkEvent:] */

void FUN_1054244a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126b8ea8;
    func_0x00010c24ca60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105424670;
    puStack_78 = &UNK_110887d10;
    puStack_70 = puVar3;
    _objc_retain(param_3);
    lStack_68 = param_3;
    _objc_retain(puVar3);
    uVar5 = uVar4;
    func_0x00010b5edefc(uVar4,0,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    lVar1 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c278820();
    lVar6 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e160();
    lVar7 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2415a0();
    func_0x00010be30be0(param_1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_release(lStack_68);
    _objc_release(puStack_70);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105424670; end: 105424877;  */

undefined * FUN_105424670(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 0x10);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain(uVar5);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uVar7 = 0;
  }
  else {
    uStack_a0 = *(undefined8 *)(lVar4 + 0x30);
    uStack_98 = *(undefined8 *)(lVar4 + 0x38);
    uVar7 = *(undefined8 *)(lVar4 + 0x40);
  }
  _objc_retain(uVar7);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uVar10 = 0;
  }
  else {
    uStack_a8 = *(undefined8 *)(lVar4 + 0x48);
    uVar10 = *(undefined8 *)(lVar4 + 0x50);
    uStack_b0 = *(undefined8 *)(lVar4 + 0x58);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf68580();
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    bVar9 = 0;
    uVar8 = 0;
  }
  else {
    bVar9 = *(byte *)(lVar4 + 8);
    uVar8 = *(undefined8 *)(lVar4 + 0x90);
  }
  _objc_retain(uVar8);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  }
  _objc_retain(uVar6);
  FUN_10542d840(uVar10,param_2,uVar1,uVar2,uVar5,uStack_a0,uStack_98,uVar7,uStack_a8,uStack_b0,uVar3
                ,bVar9 & 1);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105424878; end: 105424a33; -[SCAdTrackEventRepositoryV1 _onLifecycleEvent:] */

void FUN_105424878(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126b8e90;
    func_0x00010c24caa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105424a34;
    puStack_70 = &UNK_110887ce0;
    puStack_68 = puVar3;
    _objc_retain(puVar3);
    uVar5 = uVar4;
    func_0x00010b5edefc(uVar4,0,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    lVar1 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c278820();
    lVar6 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e160();
    lVar7 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2415a0();
    func_0x00010be30be0(param_1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_release(puStack_68);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105424a34; end: 105424e1f;  */

undefined * FUN_105424a34(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  lVar14 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  if (lVar14 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar14 + 0x10);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  _objc_retain();
  lVar14 = *(long *)(param_1 + 0x20);
  if (lVar14 == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uVar6 = 0;
  }
  else {
    uStack_c0 = *(undefined8 *)(lVar14 + 0x30);
    uStack_b8 = *(undefined8 *)(lVar14 + 0x38);
    uVar6 = *(undefined8 *)(lVar14 + 0x40);
  }
  _objc_retain();
  lVar14 = *(long *)(param_1 + 0x20);
  uVar17 = 0;
  if (lVar14 == 0) {
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uVar11 = 0;
    uVar18 = 0;
  }
  else {
    uStack_c8 = *(undefined8 *)(lVar14 + 0x48);
    uStack_d0 = *(undefined8 *)(lVar14 + 0x50);
    uStack_d8 = *(undefined8 *)(lVar14 + 0x58);
    uStack_e8 = *(undefined8 *)(lVar14 + 0x60);
    uStack_e0 = *(undefined8 *)(lVar14 + 0x68);
    uVar18 = *(undefined8 *)(lVar14 + 0x70);
    uStack_f0 = *(undefined8 *)(lVar14 + 0x78);
    uStack_100 = *(undefined8 *)(lVar14 + 0x80);
    uStack_f8 = *(undefined8 *)(lVar14 + 0x88);
    uVar11 = *(undefined8 *)(lVar14 + 0x90);
  }
  _objc_retain();
  lVar14 = *(long *)(param_1 + 0x20);
  if (lVar14 == 0) {
    bVar1 = 0;
    uVar12 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar14 + 8);
    uVar17 = *(undefined8 *)(lVar14 + 0xa0);
    uVar12 = *(undefined8 *)(lVar14 + 0xb0);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
  }
  _objc_retain();
  lVar14 = *(long *)(param_1 + 0x20);
  if (lVar14 == 0) {
    uVar7 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(lVar14 + 200);
    uVar20 = *(undefined8 *)(lVar14 + 0xd0);
    uVar22 = *(undefined8 *)(lVar14 + 0xd8);
    uVar19 = *(undefined8 *)(lVar14 + 0xe0);
    uVar7 = *(undefined8 *)(lVar14 + 0xe8);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x100);
  }
  _objc_retain();
  lVar14 = *(long *)(param_1 + 0x20);
  if (lVar14 == 0) {
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(lVar14 + 0x108);
    uVar16 = *(undefined8 *)(lVar14 + 0x118);
  }
  FUN_10542c680(uVar18,uVar17,uVar21,uVar20,uVar22,uVar19,uVar15,uVar16,param_2,uVar2,uVar3,uVar4,
                uVar5,uStack_c0,uStack_b8,uVar6,uStack_c8,uStack_d0,uStack_d8,uStack_e8,uStack_e0,
                uStack_f0,uStack_100,uStack_f8,uVar11,bVar1 & 1);
  _objc_release(param_2);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105424e20; end: 105424fdb; -[SCAdTrackEventRepositoryV1 _onInteractionEvent:] */

void FUN_105424e20(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126b8e98;
    func_0x00010c24ca80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105424fdc;
    puStack_70 = &UNK_110887ce0;
    puStack_68 = puVar3;
    _objc_retain(puVar3);
    uVar5 = uVar4;
    func_0x00010b5edefc(uVar4,0,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    lVar1 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c278820();
    lVar6 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e160();
    lVar7 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2415a0();
    func_0x00010be30be0(param_1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_release(puStack_68);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


