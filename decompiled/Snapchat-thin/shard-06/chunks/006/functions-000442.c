/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c718fc; end: 104c71a27; -[SCBillboardFHPCampaignDataProviderImpl markFeedHeaderPromptAsTappedWithCampaign:] */

void FUN_104c718fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf3f4c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c262a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c262a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284580(uVar5,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126ae828;
    func_0x00010bf3c700(PTR_PTR_1126ae828);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07900(param_1,param_2,param_3,puVar4);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf2bf80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0a6180(uVar5,param_2,lVar1,0,0);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 104c71a28; end: 104c71beb; -[SCBillboardFHPCampaignDataProviderImpl markFeedHeaderPromptAsDismissedWithCampaign:] */

void FUN_104c71a28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    lVar1 = param_3;
    func_0x00010bf3f4c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c262a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c262a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2852e0(uVar5,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126ae828;
    func_0x00010bf82f40(PTR_PTR_1126ae828);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07900(param_1,param_2,param_3,puVar4);
    _objc_release(puVar4);
    lVar1 = param_3;
    func_0x00010bf3f4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c262860(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0720c0(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x4b3d3b00);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19ab60();
      _objc_release(uVar5);
      _objc_release(puVar4);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf2bf80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6180(uVar5,param_2,lVar1,1,0);
    _objc_release(lVar1);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c71bec; end: 104c71d63; -[SCBillboardFHPCampaignDataProviderImpl markFeedHeaderPromptExtraButtonAsTappedWithCampaign:] */

void FUN_104c71bec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf3f4c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c262a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c262a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284580(uVar5,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126ae828;
    func_0x00010bf3c8e0(PTR_PTR_1126ae828);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07900(param_1,param_2,param_3,puVar4);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf2bf80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6180(uVar5,param_2,lVar1,0,0);
    _objc_release(lVar1);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf2bf80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0a6180(uVar5,param_2,lVar1,3,0);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 104c71d64; end: 104c71d8b; -[SCBillboardFHPCampaignDataProviderImpl fhpCampaignEventObservable] */

void FUN_104c71d64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c71d8c; end: 104c71e73; -[SCBillboardFHPCampaignDataProviderImpl _rankingCategoryOverrideForFhpCampaignCOFName:] */

void FUN_104c71d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae830;
  func_0x00010c071820();
  if ((int)puVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x70);
    func_0x00010c121900();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf51be0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf33240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_104c86570(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dab4b8
                    ,1);
      _objc_retain(lVar3);
      lVar4 = lVar3;
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104c71e74; end: 104c71fab; -[SCBillboardFHPCampaignDataProviderImpl _emitCampaignActionUpdate:action:] */

void FUN_104c71e74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ae838;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar6 = param_3;
  func_0x00010bf2bf80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf3f4c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0844e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0b3cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c055920(puVar1,param_2,0,uVar6,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  puVar5 = PTR_PTR_1126ae840;
  _objc_alloc(PTR_PTR_1126ae840);
  func_0x00010bffc300();
  _objc_release(param_4);
  func_0x00010c0d9840(uVar6,param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c71fac; end: 104c7238b; -[SCBillboardFHPCampaignDataProviderImpl _getCampaignWithCampaignInfoPromise:snapshots:index:ineligibleList:readOnlyBillboardSignals:isChannelWithinDefaultCooldown:defaultChannelGlobalRules:requestor:] */

void FUN_104c71fac(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined1 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [8];
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar1 <= param_5) {
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1a40();
    _objc_release(uVar8);
    func_0x00010bf43d60(param_3);
    FUN_104c863fc(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dab4b8,1
                 );
    goto LAB_104c72318;
  }
  uVar1 = param_4;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2bea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c262860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    _objc_release(lVar3);
LAB_104c7217c:
    puVar6 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    _objc_initWeak(auStack_70,param_1);
    puVar7 = puVar6;
    func_0x00010bfbc3e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_70);
    _objc_retain(uVar2);
    _objc_retain(param_6);
    uStack_88 = param_5;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_7);
    uStack_78 = param_8;
    _objc_retain(param_9);
    uStack_80 = param_10;
    func_0x00010c297260(puVar7);
    _objc_release(puVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010be85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc3680(uVar8);
    _objc_release(param_1);
    _objc_release(param_9);
    _objc_release(param_7);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar6);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    FUN_104c766f0();
    _objc_release(uVar5);
    _objc_release(lVar3);
    if ((uVar4 & 1) != 0) goto LAB_104c7217c;
    lVar3 = param_1;
    func_0x00010be39020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_6);
    _objc_release(lVar3);
    func_0x00010be1d9e0(param_1);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_104c72318:
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104c7238c; end: 104c72a93;  */

void FUN_104c7238c(long param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **unaff_x26;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_104c72a08;
  if (param_3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lVar11 = lVar2;
    func_0x00010be39040(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6);
    _objc_release(lVar11);
    func_0x00010be1d9e0(lVar2);
    goto LAB_104c72a08;
  }
  lVar11 = lVar2;
  func_0x00010beb2a60();
  if ((int)lVar11 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lVar11 = lVar2;
    func_0x00010be39020(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6);
    _objc_release(lVar11);
    func_0x00010be1d9e0(lVar2);
    func_0x00010be59720(lVar2);
    goto LAB_104c72a08;
  }
  iVar1 = (int)*(undefined8 *)(lVar2 + 8);
  func_0x00010bf1f440();
  if (iVar1 == 0) {
LAB_104c72718:
    puVar8 = param_2;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar3 = puVar8;
    func_0x00010bf46120();
    if ((int)puVar3 == 2) {
      puVar3 = puVar8;
      func_0x00010bfac2a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = (undefined8 *)0x0;
    }
    _objc_release(puVar8);
    _objc_release(puVar8);
    ppuVar9 = *(undefined ***)(lVar2 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = ppuVar9;
    func_0x00010bf1f3c0();
    _objc_release(ppuVar9);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    puVar8 = param_2;
    func_0x00010bf2bf80(param_2);
    _objc_retainAutoreleasedReturnValue();
    if ((int)unaff_x26 == 0) {
      func_0x00010c27ec60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      func_0x00010bde8800(lVar2);
      _objc_release(uVar6);
    }
    else {
      func_0x00010c27ec80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_initWeak(&uStack_a8,lVar2);
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0xc2000000;
      pcStack_140 = FUN_104c72a94;
      puStack_138 = &UNK_110842ac8;
      unaff_x26 = &puStack_150;
      puVar10 = &uStack_a8;
      _objc_copyWeak(auStack_f0,puVar10);
      _objc_retain(puVar3);
      puStack_130 = puVar3;
      _objc_retain(param_2);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      puStack_128 = param_2;
      _objc_retain(uVar12);
      uVar13 = *(undefined8 *)(param_1 + 0x30);
      uStack_120 = uVar12;
      _objc_retain(uVar13);
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      uStack_118 = uVar13;
      _objc_retain(uVar12);
      uStack_e8 = *(undefined8 *)(param_1 + 0x58);
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      uStack_110 = uVar12;
      _objc_retain(uVar13);
      uVar12 = *(undefined8 *)(param_1 + 0x40);
      uStack_108 = uVar13;
      _objc_retain(uVar12);
      uStack_d8 = *(undefined1 *)(param_1 + 0x68);
      uVar13 = *(undefined8 *)(param_1 + 0x48);
      uStack_100 = uVar12;
      _objc_retain(uVar13);
      uStack_e0 = *(undefined8 *)(param_1 + 0x60);
      uStack_f8 = uVar13;
      func_0x00010c297260(uVar6);
      _objc_release(uStack_f8);
      _objc_release(uStack_100);
      _objc_release(uStack_108);
      _objc_release(uStack_110);
      _objc_release(uStack_118);
      _objc_release(uStack_120);
      _objc_release(puStack_128);
      _objc_release(puStack_130);
      _objc_destroyWeak(auStack_f0);
      _objc_destroyWeak(&uStack_a8);
      _objc_release(uVar6);
    }
  }
  else {
    puVar3 = *(undefined8 **)(lVar2 + 0x70);
    func_0x00010c121900();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined8 *)0x0) goto LAB_104c72718;
    _objc_retain();
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_104c74ac4;
    uStack_88 = 0x104c74ad4;
    uStack_80 = 0;
    puVar10 = puVar3;
    puStack_a0 = &uStack_a8;
    func_0x00010c294e20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_104c74d7c;
    puStack_b8 = &UNK_110842be8;
    puStack_b0 = &uStack_a8;
    func_0x00010c0bdc40();
    _objc_release(puVar10);
    lVar11 = puStack_a0[5];
    _objc_retain(lVar11);
    puVar10 = (undefined8 *)0x8;
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(puVar3);
    puVar8 = puVar3;
    func_0x00010bf51be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar11);
    if ((lVar11 == 0) || (puVar8 == (undefined8 *)0x0)) {
LAB_104c7296c:
      _objc_release(lVar11);
LAB_104c72974:
      puVar10 = *(undefined8 **)(param_1 + 0x20);
      FUN_104c86858(*(undefined8 *)(lVar2 + 0x28),puVar10,1);
      unaff_x26 = *(undefined ***)(param_1 + 0x28);
      lVar4 = lVar2;
      func_0x00010be39020(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(unaff_x26);
      _objc_release(lVar4);
      func_0x00010be1d9e0(lVar2);
    }
    else {
      lVar4 = lVar11;
      func_0x00010c113080();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      _objc_release(lVar4);
      if (lVar5 == 0) goto LAB_104c7296c;
      lVar4 = lVar11;
      FUN_104c73168();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) goto LAB_104c7296c;
      lVar4 = lVar11;
      func_0x00010c0e6f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) goto LAB_104c7296c;
      lVar4 = lVar11;
      func_0x00010c08d220();
      _objc_release(lVar11);
      if (4 < (uint)lVar4) goto LAB_104c72974;
      uVar6 = *(undefined8 *)(lVar2 + 0x48);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = (undefined **)(param_1 + 0x20);
      lVar4 = lVar2;
      func_0x00010be073e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_78 = lVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1a40(uVar6);
      _objc_release(puVar7);
      _objc_release(lVar4);
      _objc_release(uVar6);
      func_0x00010bde2960(lVar2);
    }
    _objc_release(puVar8);
    _objc_release(lVar11);
  }
  _objc_release(puVar3);
LAB_104c72a08:
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 0xc);
  _objc_destroyWeak(&uStack_a8);
  __Unwind_Resume();
  _objc_retain(puVar10);
  param_2 = param_2 + 0xc;
  _objc_loadWeakRetained();
  if (param_2 != (undefined8 *)0x0) {
    func_0x00010bde8800(param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 104c72a94; end: 104c72b23;  */

void FUN_104c72a94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bde8800(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c72b24; end: 104c72b73;  */

void FUN_104c72b24(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_release(*(undefined8 *)(param_1 + 0x48));
  _objc_release(*(undefined8 *)(param_1 + 0x40));
  _objc_release(*(undefined8 *)(param_1 + 0x38));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104c72b74; end: 104c72e8f; -[SCBillboardFHPCampaignDataProviderImpl _continueCampaignEvaluationWithClientUIConfig:cofUiConfig:campaign:campaignCOFName:campaignInfoPromise:snapshots:index:ineligibleList:readOnlyBillboardSignals:isChannelWithinDefaultCooldown:defaultChannelGlobalRules:requestor:] */

void FUN_104c72b74(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  undefined4 param_12,undefined4 param_13,undefined8 param_14)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_10);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar12 = param_7;
  if (lVar2 == 0) {
    lVar2 = param_4;
    func_0x00010c113100();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) goto LAB_104c72c8c;
    _objc_release(param_4);
    _objc_release(param_3);
  }
  else {
    _objc_release(lVar1);
LAB_104c72c8c:
    lVar1 = param_3;
    FUN_104c705c0(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_4);
    _objc_release(param_3);
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010be073e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1a40(uVar4);
      _objc_release(param_10);
      _objc_release(puVar5);
      _objc_release(lVar1);
      _objc_release(uVar4);
      lVar1 = param_6;
      param_9 = param_5;
      lVar2 = param_4;
      lVar3 = param_3;
      func_0x00010bde2940(param_1);
      goto LAB_104c72e14;
    }
  }
  FUN_104c86858(*(undefined8 *)(param_1 + 0x28),param_6,1);
  lVar1 = param_1;
  func_0x00010be39020(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010befa120(param_10);
  _objc_release(lVar1);
  param_9 = param_9 + 1;
  lVar1 = param_8;
  lVar2 = param_10;
  lVar3 = param_11;
  func_0x00010be1d9e0(param_1);
  param_6 = param_7;
  param_7 = param_10;
LAB_104c72e14:
  _objc_release(param_14);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar12);
  _objc_retain(lVar3);
  _objc_retain(lVar2);
  _objc_retain(param_9);
  _objc_retain(lVar1);
  lVar13 = lVar2;
  func_0x00010bf2bee0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c262a40(lVar2);
  _objc_release(lVar2);
  lVar2 = lVar3;
  FUN_104c7a258(lVar3,lVar13,0,lVar6,lVar1,*(undefined8 *)(param_3 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar13);
  puVar7 = PTR_PTR_1126ae848;
  _objc_alloc();
  lVar13 = param_9;
  func_0x00010c113080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_9;
  func_0x00010c155120(param_9);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_9;
  func_0x00010beecf60(param_9);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_9;
  func_0x00010bf9e800(param_9);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_9;
  func_0x00010bf9e7e0(param_9);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae850;
  lVar10 = param_9;
  FUN_104c73168(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28fae0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_9;
  func_0x00010c0e6f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08d220();
  _objc_release(param_9);
  func_0x00010c053540();
  _objc_release(lVar11);
  _objc_release(puVar5);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar13);
  puVar5 = puVar7;
  FUN_104c73260(puVar7,lVar1,&PTR____CFConstantStringClassReference_110dab258,
                *(undefined8 *)(param_3 + 0x28));
  _objc_release(lVar1);
  if (((ulong)puVar5 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(lVar12);
    _objc_release(puVar5);
  }
  else {
    func_0x00010bf43d60(lVar12);
  }
  _objc_release(puVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar12);
  return;
}



/* Entry: 104c72e90; end: 104c73167; -[SCBillboardFHPCampaignDataProviderImpl _completeCampaignInfoFromServerMetadataWithPromise:campaignName:fhpUxConfig:cooldownConfig:defaultChannelGlobalRules:] */

void FUN_104c72e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_6;
  func_0x00010bf2bee0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c262a40(param_6);
  _objc_release(param_6);
  uVar3 = param_7;
  FUN_104c7a258(param_7,uVar1,0,uVar2,param_4,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ae848;
  _objc_alloc();
  uVar1 = param_5;
  func_0x00010c113080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c155120(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010beecf60(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010bf9e800(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010bf9e7e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ae850;
  uVar8 = param_5;
  FUN_104c73168(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28fae0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_5;
  func_0x00010c0e6f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08d220();
  _objc_release(param_5);
  func_0x00010c053540();
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar9 = puVar4;
  FUN_104c73260(puVar4,param_4,&PTR____CFConstantStringClassReference_110dab258,
                *(undefined8 *)(param_1 + 0x28));
  _objc_release(param_4);
  if (((ulong)puVar9 & 1) == 0) {
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_3);
    _objc_release(puVar9);
  }
  else {
    func_0x00010bf43d60(param_3);
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c73168; end: 104c7325f;  */

void FUN_104c73168(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104c74ac4;
  uStack_40 = 0x104c74ad4;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bfe5400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be420();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c73260; end: 104c734fb;  */

undefined8 *
FUN_104c73260(undefined **param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined8 *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
  ppuStack_90 = ppuVar11;
  if (ppuVar1 != (undefined **)0x0) {
    ppuStack_90 = ppuVar1;
  }
  ppuVar2 = param_1;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = ppuVar11;
  if (ppuVar2 != (undefined **)0x0) {
    ppuStack_88 = ppuVar2;
  }
  ppuVar14 = param_1;
  func_0x00010beecf00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = ppuVar11;
  if (ppuVar14 != (undefined **)0x0) {
    ppuStack_80 = ppuVar14;
  }
  ppuVar3 = param_1;
  func_0x00010bf9e800();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = ppuVar11;
  if (ppuVar3 != (undefined **)0x0) {
    ppuStack_78 = ppuVar3;
  }
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar14);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(puVar4);
  puVar8 = &uStack_150;
  puVar9 = auStack_110;
  uVar10 = 0x10;
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 == (undefined *)0x0) {
    puVar13 = (undefined8 *)0x1;
  }
  else {
    lVar15 = *plStack_140;
    ppuVar2 = &PTR____CFConstantStringClassReference_110dab4d8;
    ppuVar11 = (undefined **)0x7fffffffffffffff;
    puStack_160 = param_3;
    uStack_158 = param_2;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_140 != lVar15) {
          _objc_enumerationMutation(puVar4);
        }
        ppuVar14 = *(undefined ***)(lStack_148 + (long)puVar12 * 8);
        _objc_retain(ppuVar14);
        ppuVar1 = ppuVar14;
        func_0x00010c08fa60();
        if (ppuVar1 == (undefined **)0x0) {
          _objc_release(ppuVar14);
        }
        else {
          ppuVar3 = ppuVar14;
          func_0x00010c11f440();
          _objc_release(ppuVar14);
          param_2 = uStack_158;
          param_3 = puStack_160;
          if (ppuVar3 != (undefined **)0x7fffffffffffffff) {
            puVar9 = (undefined1 *)0x1;
            puVar8 = puStack_160;
            FUN_104c89c98(param_4,uStack_158);
            puVar13 = (undefined8 *)0x0;
            goto LAB_104c7348c;
          }
        }
        puVar12 = puVar12 + 1;
      } while (puVar5 != puVar12);
      puVar8 = &uStack_150;
      puVar9 = auStack_110;
      uVar10 = 0x10;
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
    puVar13 = (undefined8 *)0x1;
    param_2 = uStack_158;
    param_3 = puStack_160;
  }
LAB_104c7348c:
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  ppuVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_168 = FUN_104c734fc;
    puStack_1c0 = param_3;
    ppuStack_1b8 = ppuVar3;
    ppuStack_1b0 = ppuVar14;
    ppuStack_1a8 = ppuVar2;
    puStack_1a0 = puVar13;
    puStack_198 = puVar4;
    uStack_190 = param_4;
    uStack_188 = param_2;
    ppuStack_180 = ppuVar11;
    ppuStack_178 = param_1;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    _objc_retain(uVar10);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar6 = param_6;
    func_0x00010c113100(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000104c7a214();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = param_6;
    func_0x00010c1551c0(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000104c7a214();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = param_6;
    func_0x00010beecf20(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000104c7a214();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = param_6;
    func_0x00010bf9e820(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000104c7a214();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    puVar12 = ppuVar1[3];
    func_0x00010c269d40(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar12;
    func_0x00010c25d180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    FUN_104c85e2c(ppuVar1[5],puVar9,1);
    _objc_initWeak(auStack_1c8,ppuVar1);
    _objc_copyWeak(auStack_1d0,auStack_1c8);
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    _objc_retain(puVar4);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(uVar10);
    _objc_retain(param_8);
    func_0x00010c297260(puVar5);
    _objc_release(param_8);
    _objc_release(uVar10);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_1d0);
    _objc_destroyWeak(auStack_1c8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    return puVar8;
  }
  return puVar13;
}



/* Entry: 104c734fc; end: 104c73827; -[SCBillboardFHPCampaignDataProviderImpl _completeCampaignInfoFromClientConfigWithPromise:campaignCOFName:campaignCOFConfig:cofUiConfig:clientUiConfig:defaultChannelGlobalRules:] */

void FUN_104c734fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = param_6;
  func_0x00010c113100(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000104c7a214();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa140(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_6;
  func_0x00010c1551c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000104c7a214();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa140(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_6;
  func_0x00010beecf20(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000104c7a214();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa140(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_6;
  func_0x00010bf9e820(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000104c7a214();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa140(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c25d180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  FUN_104c85e2c(*(undefined8 *)(param_1 + 0x28),param_4,1);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_8);
  func_0x00010c297260(uVar2);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104c73828; end: 104c74117;  */

void FUN_104c73828(long param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  int iVar32;
  ulong uVar33;
  long lVar34;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_158;
  undefined8 uStack_150;
  
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar28 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (param_3 == (undefined *)0x0) {
      lVar30 = *(long *)(param_1 + 0x30);
      _objc_retain(lVar30);
      lVar3 = lVar30;
      func_0x00010bf52a60();
      lVar19 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar34 = 0;
        do {
          if (lRam0000000000000000 != lVar19) {
            _objc_enumerationMutation(lVar30);
          }
          uVar33 = *(ulong *)(lVar34 * 8);
          iVar32 = (int)uVar33;
          lVar4 = param_2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c08fa60();
          _objc_release(lVar4);
          if (lVar5 != 0) goto LAB_104c73ad0;
          lVar5 = *(long *)(param_1 + 0x38);
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar5;
          func_0x00010c08fa60();
          if (lVar4 == 0) {
            uStack_158 = *(undefined8 *)(param_1 + 0x40);
            func_0x00010c113100();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0720c0();
            if (iVar32 == 0) goto LAB_104c73988;
            _objc_release(uStack_158);
            _objc_release(lVar5);
LAB_104c73df0:
            uVar31 = *(undefined8 *)(param_1 + 0x20);
            param_4 = 2;
            puVar28 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf43ca0(uVar31);
            _objc_release(puVar28);
            puVar28 = (undefined *)0x1;
            FUN_104c86288(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(param_1 + 0x28));
            _objc_release(lVar30);
            goto LAB_104c740c4;
          }
LAB_104c73988:
          lVar6 = *(long *)(param_1 + 0x38);
          func_0x00010c260dc0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c08fa60();
          if (lVar7 == 0) {
            uStack_150 = *(undefined8 *)(param_1 + 0x40);
            func_0x00010c1551c0();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar33;
            func_0x00010c0720c0();
            if ((uVar8 & 1) == 0) goto LAB_104c739d4;
            uVar33 = 1;
LAB_104c73aa8:
            iVar32 = (int)uVar33;
            _objc_release(uStack_150);
            _objc_release(lVar6);
          }
          else {
LAB_104c739d4:
            lVar9 = *(long *)(param_1 + 0x38);
            func_0x00010bf9e800();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            func_0x00010c08fa60();
            if (lVar10 == 0) {
              uVar31 = *(undefined8 *)(param_1 + 0x40);
              func_0x00010bf9e820(uVar31);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0720c0();
              _objc_release(uVar31);
              _objc_release(lVar9);
              if (lVar7 != 0) goto LAB_104c73a60;
              goto LAB_104c73aa8;
            }
            _objc_release(lVar9);
            uVar33 = 0;
            if (lVar7 == 0) goto LAB_104c73aa8;
LAB_104c73a60:
            iVar32 = (int)uVar33;
            _objc_release(lVar6);
          }
          if (lVar4 == 0) {
            _objc_release(uStack_158);
            _objc_release(lVar5);
            if ((uVar33 & 1) != 0) goto LAB_104c73df0;
          }
          else {
            _objc_release(lVar5);
            if (iVar32 != 0) goto LAB_104c73df0;
          }
LAB_104c73ad0:
          lVar34 = lVar34 + 1;
        } while (lVar3 != lVar34);
        lVar3 = lVar30;
        func_0x00010bf52a60();
      }
      _objc_release(lVar30);
      uVar11 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c262a00();
      _objc_retainAutoreleasedReturnValue();
      uVar31 = uVar11;
      FUN_104c798d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      iVar32 = (int)*(undefined8 *)(param_1 + 0x48);
      func_0x00010bfd5100();
      if (iVar32 == 0) {
        uVar11 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010bf2bec0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar12;
        func_0x00010c0eff00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
      }
      iVar32 = (int)*(undefined8 *)(param_1 + 0x48);
      func_0x00010bfd5100();
      if (iVar32 == 0) {
        uVar12 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010bf2bec0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar13;
        func_0x00010c0eff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
      }
      uVar13 = *(undefined8 *)(param_1 + 0x48);
      uVar14 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c262a40(uVar13);
      FUN_104c7a258(uVar14,uVar11,uVar12,uVar13,*(undefined8 *)(param_1 + 0x28),
                    *(undefined8 *)(lVar2 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + 0x38);
      FUN_104c705c0(uVar13,*(undefined8 *)(param_1 + 0x40));
      _objc_retainAutoreleasedReturnValue();
      iVar32 = (int)*(undefined8 *)(param_1 + 0x40);
      func_0x00010bfd9a40();
      lVar3 = 0x40;
      if (iVar32 == 0) {
        lVar3 = 0x38;
      }
      uVar15 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c0e6f20();
      _objc_retainAutoreleasedReturnValue();
      iVar32 = (int)*(undefined8 *)(param_1 + 0x40);
      func_0x00010bfd6ee0();
      lVar3 = 0x40;
      if (iVar32 == 0) {
        lVar3 = 0x38;
      }
      uVar16 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010bf9e7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126ae848;
      _objc_alloc();
      uVar18 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c113100();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar3;
      if (lVar3 == 0) {
        lVar19 = *(long *)(param_1 + 0x38);
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar20 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c1551c0();
      _objc_retainAutoreleasedReturnValue();
      lVar30 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_178 = lVar30;
      if (lVar30 == 0) {
        lStack_178 = *(long *)(param_1 + 0x38);
        func_0x00010c260dc0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar21 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010beecf20();
      _objc_retainAutoreleasedReturnValue();
      lVar34 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_180 = lVar34;
      if (lVar34 == 0) {
        lStack_180 = *(long *)(param_1 + 0x38);
        func_0x00010beecf00();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar22 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf9e820();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      if (lVar4 == 0) {
        lVar5 = *(long *)(param_1 + 0x38);
        func_0x00010bf9e800();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c0da680();
      func_0x00010c1047c0();
      func_0x00010be764a0();
      uVar23 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf2bf80();
      _objc_retainAutoreleasedReturnValue();
      uVar24 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      uVar25 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0b3cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_1 + 0x38);
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(lVar7);
      _objc_retain(uVar1);
      uVar26 = uVar1;
      func_0x00010bfa3c80();
      if (((int)uVar26 != 0) || (lVar6 = lVar7, func_0x00010c294ee0(), lVar6 != 0)) {
        uVar26 = uVar1;
        func_0x00010bfa3c80();
        if ((int)uVar26 == 0) {
          lVar6 = lVar7;
          func_0x00010c294ee0();
          if (lVar6 != 0) {
            func_0x00010c294ee0();
          }
        }
        else {
          func_0x00010bfa3c80();
        }
      }
      _objc_release(uVar1);
      _objc_release(lVar7);
      func_0x00010c053540();
      _objc_release(uVar25);
      _objc_release(uVar24);
      _objc_release(uVar23);
      if (lVar4 == 0) {
        _objc_release(lVar5);
      }
      _objc_release(lVar4);
      _objc_release(uVar22);
      if (lVar34 == 0) {
        _objc_release(lStack_180);
      }
      _objc_release(lVar34);
      _objc_release(uVar21);
      if (lVar30 == 0) {
        _objc_release(lStack_178);
      }
      _objc_release(lVar30);
      _objc_release(uVar20);
      if (lVar3 == 0) {
        _objc_release(lVar19);
      }
      _objc_release(lVar3);
      _objc_release(uVar18);
      param_4 = *(undefined8 *)(lVar2 + 0x28);
      puVar28 = puVar17;
      FUN_104c73260(puVar17,*(undefined8 *)(param_1 + 0x28),
                    &PTR____CFConstantStringClassReference_110dab238,param_4);
      uVar18 = *(undefined8 *)(param_1 + 0x20);
      if (((ulong)puVar28 & 1) == 0) {
        param_4 = 1;
        puVar27 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        puVar28 = puVar27;
        func_0x00010bf43ca0(uVar18);
        _objc_release(puVar27);
      }
      else {
        puVar28 = puVar17;
        func_0x00010bf43d60(uVar18);
      }
      _objc_release(puVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar13);
      _objc_release(uVar14);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar31);
    }
    else {
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
      puVar28 = (undefined *)0x1;
      FUN_104c85fa0(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(param_1 + 0x28));
    }
  }
LAB_104c740c4:
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar28);
  _objc_retain(param_4);
  puVar17 = puVar28;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar17;
  func_0x00010c0720c0();
  _objc_release(puVar17);
  if ((int)puVar27 != 0) {
    func_0x00010bf3ec40();
  }
  func_0x00010be39020(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 104c74118; end: 104c741eb; -[SCBillboardFHPCampaignDataProviderImpl _ineligibleCampaignFromDataProviderError:campaignCOFName:rankingIndex:] */

void FUN_104c74118(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf3ec40();
    if (lVar1 - 1U < 0xb) {
      uVar3 = *(undefined8 *)(&UNK_10dd8a650 + (lVar1 - 1U) * 8);
      goto LAB_104c741a8;
    }
  }
  uVar3 = 0xffffffffffffffff;
LAB_104c741a8:
  func_0x00010be39020(param_1,param_2,param_4,param_5,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104c741ec; end: 104c7424f; -[SCBillboardFHPCampaignDataProviderImpl _eligibleCampaign:rankingIndex:] */

void FUN_104c741ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae860;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1778a0();
  _objc_release(param_3);
  func_0x00010c1e73a0(puVar1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c74250; end: 104c742c3; -[SCBillboardFHPCampaignDataProviderImpl _ineligibleCampaign:rankingIndex:ineligibleReason:] */

void FUN_104c74250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae868;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1778a0();
  _objc_release(param_3);
  func_0x00010c1e73a0(puVar1,param_2,param_4);
  func_0x00010c1e8080(puVar1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c742c4; end: 104c742db; -[SCBillboardFHPCampaignDataProviderImpl _postClickNoOpEnabled] */

void FUN_104c742c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dab3d8,0,0);
  return;
}



/* Entry: 104c742dc; end: 104c74333; -[SCBillboardFHPCampaignDataProviderImpl suicidePreventionCampaignCOFName] */

void FUN_104c742dc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = *(undefined ***)(param_1 + 8);
  FUN_104c7968c(ppuVar2,&PTR____CFConstantStringClassReference_110dab398);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab3b8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104c74334; end: 104c7436f; -[SCBillboardFHPCampaignDataProviderImpl _fhpChannelFullSignals] */

void FUN_104c74334(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf16520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c74370; end: 104c7450f; -[SCBillboardFHPCampaignDataProviderImpl _updateHasConversationWithNonTeamSnapchat:] */

undefined1 * FUN_104c74370(double param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_238 [128];
  long lStack_1b8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_4;
  _objc_retain(param_4);
  if ((*(byte *)(param_2 + 0x68) & 1) == 0) {
    param_1 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_4);
    puVar8 = param_4;
    func_0x00010bf52a60();
    if (puVar8 != (undefined1 *)0x0) {
      lVar11 = *plStack_120;
      do {
        puVar12 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(param_4);
          }
          uVar9 = *(ulong *)(lStack_128 + (long)puVar12 * 8);
          uVar1 = uVar9;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x000107cfa560();
          _objc_release(uVar1);
          if ((uVar2 & 1) == 0) {
            uVar1 = uVar9;
            func_0x00010bef0c80();
            _objc_retainAutoreleasedReturnValue();
            if (uVar1 != 0) {
              func_0x00010bef0c80();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar9;
              func_0x00010c0cb940();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(uVar9);
              _objc_release(uVar1);
              if (uVar2 != 0) {
                *(undefined1 *)(param_2 + 0x68) = 1;
                goto LAB_104c744c4;
              }
            }
          }
          puVar12 = puVar12 + 1;
        } while (puVar8 != puVar12);
        puVar8 = param_4;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined1 *)0x0);
    }
LAB_104c744c4:
    _objc_release(param_4);
    puVar8 = (undefined1 *)puVar7;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_4;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_280;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  param_4[0x69] = 0;
  lVar11 = *(long *)(param_4 + 8);
  func_0x00010c0b5020(lVar11,param_3,&PTR____CFConstantStringClassReference_110dab458,0,0);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar3);
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  _objc_retain(puVar8);
  puVar12 = puVar8;
  func_0x00010bf52a60(puVar8,param_3,&uStack_280,auStack_238,0x10);
  if (puVar12 != (undefined1 *)0x0) {
    dVar15 = (double)lVar11;
    dVar16 = dVar15 / 1000.0;
    lVar13 = *plStack_270;
    do {
      puVar14 = (undefined1 *)0x0;
      do {
        if (*plStack_270 != lVar13) {
          _objc_enumerationMutation(puVar8);
        }
        lVar10 = *(long *)(lStack_278 + (long)puVar14 * 8);
        lVar4 = lVar10;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x000107cfa560();
        _objc_release(lVar4);
        if ((int)lVar5 != 0) {
          if (0 < lVar11) {
            lVar4 = lVar10;
            func_0x00010bef0c80();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c0891c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar4);
            if (lVar5 != 0) {
              func_0x00010bef0c80(lVar10);
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar10;
              func_0x00010c0891c0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f320();
              _objc_release(lVar4);
              _objc_release(lVar10);
              dVar15 = param_1 - dVar15;
              if (dVar16 < dVar15) goto LAB_104c746b8;
            }
          }
          param_4[0x69] = 1;
          goto LAB_104c746ec;
        }
LAB_104c746b8:
        puVar14 = puVar14 + 1;
      } while (puVar12 != puVar14);
      puVar12 = puVar8;
      puVar7 = &uStack_280;
      func_0x00010bf52a60(puVar8,param_3,&uStack_280,auStack_238,0x10);
    } while (puVar12 != (undefined1 *)0x0);
  }
LAB_104c746ec:
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  uVar6 = *(undefined8 *)(puVar8 + 8);
  func_0x00010bf1f440(uVar6,param_3,&PTR____CFConstantStringClassReference_110dab438,0,0);
  if (((int)uVar6 == 0) || (puVar8[0x69] != '\x01')) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    func_0x00010be3e740(puVar8,param_3,puVar7);
  }
  _objc_release(puVar7);
  return puVar8;
}



/* Entry: 104c74510; end: 104c7473f; -[SCBillboardFHPCampaignDataProviderImpl _updateHasUnreadTeamSnapchatConversation:] */

long FUN_104c74510(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  puVar7 = &uStack_150;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  *(undefined1 *)(param_2 + 0x69) = 0;
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c0b5020(lVar1,param_3,&PTR____CFConstantStringClassReference_110dab458,0,0);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf52a60(param_4,param_3,&uStack_150,auStack_108,0x10);
  if (lVar3 != 0) {
    dVar11 = (double)lVar1;
    dVar12 = dVar11 / 1000.0;
    lVar9 = *plStack_140;
    do {
      lVar10 = 0;
      do {
        if (*plStack_140 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        lVar8 = *(long *)(lStack_148 + lVar10 * 8);
        lVar4 = lVar8;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x000107cfa560();
        _objc_release(lVar4);
        if ((int)lVar5 != 0) {
          if (0 < lVar1) {
            lVar4 = lVar8;
            func_0x00010bef0c80();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c0891c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar4);
            if (lVar5 != 0) {
              func_0x00010bef0c80(lVar8);
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar8;
              func_0x00010c0891c0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f320();
              _objc_release(lVar4);
              _objc_release(lVar8);
              dVar11 = param_1 - dVar11;
              if (dVar12 < dVar11) goto LAB_104c746b8;
            }
          }
          *(undefined1 *)(param_2 + 0x69) = 1;
          goto LAB_104c746ec;
        }
LAB_104c746b8:
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = param_4;
      puVar7 = &uStack_150;
      func_0x00010bf52a60(param_4,param_3,&uStack_150,auStack_108,0x10);
    } while (lVar3 != 0);
  }
LAB_104c746ec:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  uVar6 = *(undefined8 *)(param_4 + 8);
  func_0x00010bf1f440(uVar6,param_3,&PTR____CFConstantStringClassReference_110dab438,0,0);
  if (((int)uVar6 == 0) || (*(char *)(param_4 + 0x69) != '\x01')) {
    param_4 = 0;
  }
  else {
    func_0x00010be3e740(param_4,param_3,puVar7);
  }
  _objc_release(puVar7);
  return param_4;
}



/* Entry: 104c74740; end: 104c747b3; -[SCBillboardFHPCampaignDataProviderImpl _shouldBlockCampaignFetchbyUnreadTeamSnapchatConversation:] */

long FUN_104c74740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dab438,0,0);
  if (((int)uVar1 == 0) || (*(char *)(param_1 + 0x69) != '\x01')) {
    param_1 = 0;
  }
  else {
    func_0x00010be3e740(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104c747b4; end: 104c748a7; -[SCBillboardFHPCampaignDataProviderImpl _isBlockedCategoryForCampaign:] */

undefined * FUN_104c747b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfd5100();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf2bec0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf33240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_3;
      func_0x00010bf2bec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf33240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                          &PTR__OBJC_CLASS___NSConstantArray_11117e1f0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf4b900();
      _objc_release(puVar4);
      _objc_release(lVar2);
      goto LAB_104c7488c;
    }
  }
  puVar5 = (undefined *)0x1;
LAB_104c7488c:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 104c748a8; end: 104c748bb; -[SCBillboardFHPCampaignDataProviderImpl _logSuppressionWithCampaignName:timing:] */

void FUN_104c748a8(double param_1,long param_2,undefined8 param_3,char *param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 0x28);
  uVar8 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_4;
  pcVar6 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar10 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = "";
    unaff_x23 = acStack_98;
    pcVar6 = acStack_98;
    uVar8 = 1;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110844110,pcVar6,1);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar1 = 0;
    puVar10 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_5);
  pcVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_104c89344;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcVar7 = pcVar6;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar10;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_5;
  pcStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar6);
  if (pcVar4 != (char *)0x0) {
    plVar9 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar3 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar5 = "\x01";
    pcVar7 = acStack_138;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110844160,pcVar7,uVar8);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar1 = 0;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar2);
  __Unwind_Resume();
  _objc_retain(pcVar5);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    FUN_104c89344(pcVar3,pcVar5,pcVar7,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
  return;
}



/* Entry: 104c748bc; end: 104c7499f; -[SCBillboardFHPCampaignDataProviderImpl _resetFeatureSettingInfo] */

void FUN_104c748bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20fce0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20fcc0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ab60();
  _objc_release(uVar1);
  lVar2 = 0x263;
  do {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19ab60();
    _objc_release(uVar1);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x26e);
  return;
}



/* Entry: 104c749a0; end: 104c749df; -[SCBillboardFHPCampaignDataProviderImpl _resetLastImpressionTime] */

void FUN_104c749a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ab60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104c749e0; end: 104c74ac3; -[SCBillboardFHPCampaignDataProviderImpl .cxx_destruct] */

void FUN_104c749e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 104c74ac4; end: 104c74adb;  */

void FUN_104c74ac4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104c74adc; end: 104c74b6b;  */

void FUN_104c74adc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126ae850;
    func_0x00010c28fae0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(puVar4);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar4;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c74b6c; end: 104c74ceb;  */

void FUN_104c74b6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126ae850;
    func_0x00010bf1c1c0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(puVar4);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar4;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c74cec; end: 104c74d7b;  */

void FUN_104c74cec(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126ae850;
    func_0x00010bf8ea60();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(puVar4);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar4;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c74d7c; end: 104c74db3;  */

void FUN_104c74d7c(long param_1,undefined8 param_2)

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



/* Entry: 104c74db4; end: 104c74db7;  */

void FUN_104c74db4(void)

{
  return;
}



/* Entry: 104c74db8; end: 104c74e17;  */

void FUN_104c74db8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = param_2;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c74e18; end: 104c74ff7; -[SCBillboardFHPConfigProviderPluginManager initWithCircumstanceEngine:grapheneRegistry:fhpUIConfigScopeExposer:fhpUIConfigFactoryServices:performer:] */

undefined8 *
FUN_104c74e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e3780;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[5];
    puVar1[5] = 0;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae818;
    func_0x00010bed0c80();
    puVar1[7] = (double)(long)puVar3;
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104c74ff8; end: 104c75037;  */

void FUN_104c74ff8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be15800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104c75038; end: 104c75133; -[SCBillboardFHPConfigProviderPluginManager loadAllUIConfigsWithCompletion:] */

void FUN_104c75038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104c75134; end: 104c75187;  */

void FUN_104c75134(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4c960();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c75188; end: 104c7518f; -[SCBillboardFHPConfigProviderPluginManager uiConfigForCampaignId:] */

void FUN_104c75188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 104c75190; end: 104c752db; -[SCBillboardFHPConfigProviderPluginManager _loadAllUIConfigsWithProviders:completion:] */

void FUN_104c75190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc(PTR_PTR_1126ae560);
  func_0x00010c01bf20();
  _objc_initWeak(auStack_48,param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c297260(puVar2);
  _objc_release(puVar2);
  func_0x00010bdd7de0(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104c752dc; end: 104c75337;  */

void FUN_104c752dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be59fa0();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000104c75334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104c75338; end: 104c7565f; -[SCBillboardFHPConfigProviderPluginManager _cacheUIConfigWithProviders:uiConfigLoadingPromise:] */

void FUN_104c75338(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [136];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar6);
  lVar2 = param_1;
  func_0x00010beb0960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_initWeak(auStack_110,param_1);
  uVar6 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    lVar9 = *plStack_140;
    do {
      lVar7 = 0;
      do {
        uVar10 = uVar6;
        if (*plStack_140 != lVar9) {
          _objc_enumerationMutation(param_3);
          uVar10 = uVar6;
        }
        uVar8 = *(undefined8 *)(lStack_148 + lVar7 * 8);
        _CACurrentMediaTime();
        uVar6 = uVar10;
        func_0x00010bf464c0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        puStack_180 = puVar1;
        uStack_178 = 0xc2000000;
        pcStack_170 = FUN_104c75660;
        puStack_168 = &UNK_110842d18;
        _objc_copyWeak(auStack_160,auStack_110);
        uStack_158 = uVar10;
        func_0x00010c297260(uVar8);
        func_0x00010befa120(puVar3);
        _objc_destroyWeak(auStack_160);
        _objc_release(uVar8);
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = param_3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  puVar5 = auStack_110;
  _objc_copyWeak(auStack_188,puVar5);
  _objc_retain(param_4);
  func_0x00010c297260(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_188);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_110);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_110);
  __Unwind_Resume();
  _objc_retain(puVar5);
  lVar2 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010beb0da0(*(undefined8 *)(param_3 + 0x28));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104c75660; end: 104c756b3;  */

void FUN_104c75660(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beb0da0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104c756b4; end: 104c756f3;  */

void FUN_104c756b4(long param_1)

{
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde34a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c756f4; end: 104c757f3; -[SCBillboardFHPConfigProviderPluginManager _fhpUIConfigProviders] */

void FUN_104c756f4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010bf9d5c0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c757f4; end: 104c7583f;  */

void FUN_104c757f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae880;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c75840; end: 104c758fb;  */

void FUN_104c75840(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = param_2;
  func_0x00010c0d3c80(param_2);
  _objc_release(param_2);
  if (lVar2 != 0) {
    puVar4 = *(undefined **)(lVar2 + 0x18);
    func_0x00010bf22660();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      puVar1 = puVar4;
    }
    _objc_retain(puVar1);
    _objc_release(puVar4);
    func_0x00010befa160(uVar3);
    _objc_release(puVar1);
  }
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104c758fc; end: 104c759df; -[SCBillboardFHPConfigProviderPluginManager _setupTimerToCompletePromise:] */

void FUN_104c758fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010beacba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104c759e0; end: 104c75a3f;  */

void FUN_104c759e0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae818;
  func_0x00010bed0c60(PTR_PTR_1126ae818);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde34a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c75a40; end: 104c75abb; -[SCBillboardFHPConfigProviderPluginManager _logUIConfigLoadingTimeout:] */

void FUN_104c75a40(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x38),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_104c882f8(uVar3,param_3 == 0,puVar2,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c75abc; end: 104c75ae7; +[SCBillboardFHPConfigProviderPluginManager _uiConfigLoadingTimeoutMs:] */

long FUN_104c75abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c067f00(param_3,param_2,&PTR____CFConstantStringClassReference_110dab538,0xffffffff,0)
  ;
  return (long)(int)param_3;
}



/* Entry: 104c75ae8; end: 104c75b07; +[SCBillboardFHPConfigProviderPluginManager _uiConfigLoadingTimeoutError] */

void FUN_104c75ae8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110dab418,
             &PTR____CFConstantStringClassReference_110dab558,1);
  return;
}



/* Entry: 104c75b08; end: 104c75c7b; -[SCBillboardFHPConfigProviderPluginManager _setupUIConfigsMapAndLogLatency:startTime:] */

void FUN_104c75b08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  puVar2 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _CACurrentMediaTime();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  puVar3 = auStack_f8;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_130;
    do {
      lVar6 = 0;
      do {
        if (*plStack_130 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_138 + lVar6 * 8);
        func_0x00010bf2bf80(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
        func_0x00010be59f80(param_1);
        _objc_release(uVar4);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      puVar3 = auStack_f8;
      lVar1 = param_3;
      puVar2 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (puVar3 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_completeWithError__1125ae8d0,puVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar2,PTR_s_completeWithValue__1125ae900,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bdbf8);
  return;
}



/* Entry: 104c75c7c; end: 104c75c97; -[SCBillboardFHPConfigProviderPluginManager _completeUILoadingPromise:withError:] */

void FUN_104c75c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_completeWithError__1125ae8d0,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_completeWithValue__1125ae900,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bdbf8);
  return;
}



/* Entry: 104c75c98; end: 104c75d47; -[SCBillboardFHPConfigProviderPluginManager _setupGCDTimerWithTimeoutBlock:] */

void FUN_104c75c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar2 = PTR_PTR_1126ae888;
  dVar3 = *(double *)(param_1 + 0x38);
  if (0.0 <= dVar3) {
    _objc_retain(param_3);
    _objc_alloc(puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0522e0(dVar3 / 1000.0,puVar2,param_2,uVar1,param_3,0);
    _objc_release(param_3);
    _objc_release(uVar1);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c75d48; end: 104c75d57; -[SCBillboardFHPConfigProviderPluginManager _logUIConfigLoadingLatencyWithCampaignId:durationMs:] */

void FUN_104c75d48(double param_1,long param_2,undefined8 param_3,char *param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 8);
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_4;
  pcVar6 = param_5;
  pcVar4 = param_5;
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110843f80,acStack_80,param_5);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar6 = pcVar3;
    pcVar4 = param_5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar6 = pcVar3;
      pcVar4 = param_5;
    }
  }
  pcVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcVar7 = pcVar6;
  _objc_retain(pcVar2);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_f8,pcVar3);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar3 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_e0,pcVar3);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar5 = "\x01";
    pcVar7 = acStack_118;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110843fd0,pcVar7,pcVar4);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar1 = 0;
    do {
      if ((&cStack_c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar2);
  __Unwind_Resume();
  _objc_retain(pcVar5);
  _objc_retain(pcVar7);
  if (pcVar4 != (char *)0x0) {
    FUN_104c88658(pcVar4,pcVar5,pcVar7,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
  return;
}



/* Entry: 104c75d58; end: 104c75ea3; -[SCBillboardFHPConfigProviderPluginManager uiConfigFutureForCampaignId:] */

void FUN_104c75d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104c75ea4; end: 104c75f17;  */

void FUN_104c75ea4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010be4ec60(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c75f18; end: 104c75fbb; -[SCBillboardFHPConfigProviderPluginManager _loadUIConfigForCampaignId:providers:resultPromise:] */

void FUN_104c75f18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be83b00(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010be59fa0(param_1,param_2,0);
    func_0x00010bf43d60(param_5,param_2,0);
  }
  else {
    func_0x00010be4ec80(param_1,param_2,lVar1,param_3,param_5);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c75fbc; end: 104c760f7; -[SCBillboardFHPConfigProviderPluginManager _providerForCampaignId:fromProviders:] */

void FUN_104c75fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 auStack_200 [8];
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar8 = auStack_d8;
  uVar9 = 0x10;
  lVar2 = param_4;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    lVar12 = *plStack_110;
    do {
      lVar13 = 0;
      do {
        if (*plStack_110 != lVar12) {
          _objc_enumerationMutation(param_4);
        }
        lVar11 = *(long *)(lStack_118 + lVar13 * 8);
        lVar3 = lVar11;
        func_0x00010bf2cb40();
        if ((int)lVar3 != 0 && lVar10 == 0) {
          _objc_retain(lVar11);
          lVar10 = lVar11;
        }
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      puVar8 = auStack_d8;
      uVar9 = 0x10;
      lVar2 = param_4;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  puVar4 = PTR_PTR_1126ae560;
  _objc_alloc();
  func_0x00010c01bf20();
  _objc_initWeak(auStack_198,param_3);
  puVar5 = puVar4;
  func_0x00010bfbc3e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_104c7636c;
  puStack_1b0 = &UNK_110842de8;
  _objc_copyWeak(auStack_1a0,auStack_198);
  _objc_retain(uVar9);
  uStack_1a8 = uVar9;
  func_0x00010c297260(puVar5);
  _objc_release(puVar5);
  puStack_1f0 = puVar1;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_104c763e0;
  puStack_1d8 = &UNK_110842e18;
  _objc_retain(puVar4);
  puStack_1d0 = puVar4;
  func_0x00010beacba0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  puVar6 = (undefined1 *)puVar7;
  func_0x00010bf464c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(puVar8);
  uStack_1f8 = CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13(uVar17,
                                                  CONCAT12(uVar16,CONCAT11(uVar15,uVar14)))))));
  _objc_copyWeak(auStack_200,auStack_198);
  _objc_retain(puVar4);
  func_0x00010c297260(puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_200);
  _objc_release(puVar8);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puStack_1d0);
  _objc_release(uStack_1a8);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_198);
  _objc_release(puVar4);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 104c760f8; end: 104c7636b; -[SCBillboardFHPConfigProviderPluginManager _loadUIConfigFromProvider:campaignId:resultPromise:] */

void FUN_104c760f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126ae560;
  _objc_alloc();
  func_0x00010c01bf20();
  _objc_initWeak(auStack_78,param_2);
  puVar3 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104c7636c;
  puStack_90 = &UNK_110842de8;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_6);
  uStack_88 = param_6;
  func_0x00010c297260(puVar3);
  _objc_release(puVar3);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_104c763e0;
  puStack_b8 = &UNK_110842e18;
  _objc_retain(puVar2);
  puStack_b0 = puVar2;
  func_0x00010beacba0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  uVar4 = param_4;
  func_0x00010bf464c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_5);
  uStack_d8 = param_1;
  _objc_copyWeak(auStack_e0,auStack_78);
  _objc_retain(puVar2);
  func_0x00010c297260(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_e0);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(puStack_b0);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104c7636c; end: 104c763df;  */

void FUN_104c7636c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be59fa0();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c763e0; end: 104c76423;  */

void FUN_104c763e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae818;
  func_0x00010bed0c60(PTR_PTR_1126ae818);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c76424; end: 104c765ff;  */

void FUN_104c76424(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x20));
  if (param_3 == 0) {
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar6 = *(ulong *)(lVar7 * 8);
        uVar3 = uVar6;
        func_0x00010bf2bf80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          _objc_retain(uVar6);
          _objc_release(param_2);
          if (uVar6 == 0) goto LAB_104c765a8;
          _CACurrentMediaTime();
          lVar2 = param_1 + 0x38;
          _objc_loadWeakRetained(lVar2);
          uVar3 = uVar6;
          func_0x00010bf2bf80(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be59f80(lVar2);
          _objc_release(uVar3);
          goto LAB_104c765a0;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_2;
      func_0x00010bf52a60();
    }
    uVar6 = 0;
    lVar2 = param_2;
LAB_104c765a0:
    _objc_release(lVar2);
  }
  else {
    uVar6 = 0;
  }
LAB_104c765a8:
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar6);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_2 + 0x30,0);
  _objc_storeStrong(param_2 + 0x28,0);
  _objc_storeStrong(param_2 + 0x20,0);
  _objc_storeStrong(param_2 + 0x18,0);
  _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 104c76600; end: 104c7665f; -[SCBillboardFHPConfigProviderPluginManager .cxx_destruct] */

void FUN_104c76600(long param_1)

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



/* Entry: 104c76660; end: 104c7666b; -[SCFeatureSettingsService isSuicidePreventionFlaggedAtSecsAvailable] */

void FUN_104c76660(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dab578);
  return;
}



/* Entry: 104c7666c; end: 104c76677; -[SCFeatureSettingsService suicidePreventionFlaggedAtSecsServerParam] */

undefined ** FUN_104c7666c(void)

{
  return &PTR____CFConstantStringClassReference_110dab578;
}



/* Entry: 104c76678; end: 104c76687; -[SCFeatureSettingsService setSuicidePreventionFlaggedAtSecs:] */

void FUN_104c76678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dab578,param_3);
  return;
}



/* Entry: 104c76688; end: 104c7668f; -[SCFeatureSettingsService suicide_prevention_flagged_at_secs_client_value:] */

void FUN_104c76688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 104c76690; end: 104c76697; -[SCFeatureSettingsService suicide_prevention_flagged_at_secs_server_value:] */

void FUN_104c76690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 104c76698; end: 104c766a7; -[SCFeatureSettingsService suicidePreventionFlaggedAtSecs] */

void FUN_104c76698(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dab578,0);
  return;
}



/* Entry: 104c766a8; end: 104c766b3; -[SCFeatureSettingsService isSuicidePreventionFirstSeenAtSecsAvailable] */

void FUN_104c766a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dab598);
  return;
}



/* Entry: 104c766b4; end: 104c766bf; -[SCFeatureSettingsService suicidePreventionFirstSeenAtSecsServerParam] */

undefined ** FUN_104c766b4(void)

{
  return &PTR____CFConstantStringClassReference_110dab598;
}



/* Entry: 104c766c0; end: 104c766cf; -[SCFeatureSettingsService setSuicidePreventionFirstSeenAtSecs:] */

void FUN_104c766c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dab598,param_3);
  return;
}



/* Entry: 104c766d0; end: 104c766d7; -[SCFeatureSettingsService suicide_prevention_first_seen_at_secs_client_value:] */

void FUN_104c766d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 104c766d8; end: 104c766df; -[SCFeatureSettingsService suicide_prevention_first_seen_at_secs_server_value:] */

void FUN_104c766d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 104c766e0; end: 104c766ef; -[SCFeatureSettingsService suicidePreventionFirstSeenAtSecs] */

void FUN_104c766e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dab598,0);
  return;
}



/* Entry: 104c766f0; end: 104c767fb;  */

bool FUN_104c766f0(double param_1,long param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c2628a0();
  lVar3 = param_2;
  func_0x00010c262880();
  _objc_release(param_2);
  uVar4 = param_3;
  func_0x00010c067f00(param_3);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar5);
  uVar6 = param_3;
  func_0x00010bf1f440();
  _objc_release(param_3);
  if ((uVar6 & 1) == 0) {
    if (lVar2 < 0x4b3d3b01) {
      bVar1 = false;
    }
    else {
      bVar1 = lVar3 <= lVar2 || (long)param_1 - lVar3 <= (long)(int)uVar4;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 104c767fc; end: 104c76877;  */

void FUN_104c767fc(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c2628a0();
  lVar2 = param_2;
  func_0x00010c262880();
  if (lVar2 <= lVar1) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar3);
    func_0x00010c20fcc0(param_2,param_3,(long)param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c76878; end: 104c768c3;  */

void FUN_104c76878(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c156e00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010beed680();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (int)uVar1 == 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c768c4; end: 104c76b6f; -[SCBillboardFSTCampaignDataProviderImpl initWithDataProvider:circumstanceEngine:protoCOFReader:stringFetcher:grapheneRegistry:localStorage:inAppWarningDataProvider:userSessionContext:logger:cooldownCapManager:] */

undefined8 *
FUN_104c768c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
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
  puStack_b8 = PTR_PTR_1126e3788;
  puVar2 = &uStack_c0;
  uStack_c0 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[4];
    puVar2[4] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[5];
    puVar2[5] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[6];
    puVar2[6] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[7];
    puVar2[7] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    puStack_90 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104c76878;
    puStack_98 = &UNK_110842e78;
    puStack_80 = puStack_90;
    func_0x00010c0be020(param_10);
    uVar1 = *(undefined1 *)(puStack_80 + 3);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(param_10);
    *(undefined1 *)(puVar2 + 10) = uVar1;
    _objc_retain(param_11);
    uVar3 = puVar2[8];
    puVar2[8] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[9];
    puVar2[9] = param_12;
    _objc_release(uVar3);
  }
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
  return puVar2;
}



/* Entry: 104c76b70; end: 104c76c83; -[SCBillboardFSTCampaignDataProviderImpl getCampaignInfoWithLauchTriggerType:appOpenFromPushType:requestor:] */

void FUN_104c76b70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_68,auStack_48);
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(puVar1);
  uStack_50 = param_5;
  func_0x00010c2a13c0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c76c84; end: 104c76cbf;  */

void FUN_104c76c84(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1d980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c76cc0; end: 104c76e8f; -[SCBillboardFSTCampaignDataProviderImpl _getCampaignInfoWithLauchTriggerType:appOpenFromPushType:campaignInfoPromise:requestor:] */

void FUN_104c76cc0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  lVar2 = param_1;
  func_0x00010be19b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  if (param_4 == 0xad) {
    func_0x00010bdd9860(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 2) {
      _objc_initWeak(auStack_48,param_1);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_104c76e90;
      puStack_70 = &UNK_110842a98;
      _objc_copyWeak(auStack_58,auStack_48);
      _objc_retain(param_5);
      uStack_68 = param_5;
      _objc_retain(lVar2);
      ppuVar4 = &puStack_88;
      lStack_60 = lVar2;
      uStack_50 = param_6;
      _objc_retainBlock(ppuVar4);
      func_0x00010bfc8fa0(*(undefined8 *)(param_1 + 8));
      _objc_release(ppuVar4);
      _objc_release(lStack_60);
      _objc_release(uStack_68);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
      goto LAB_104c76e4c;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010bf1f440();
    if (iVar1 == 0) {
      func_0x00010bf43d60(param_5);
      goto LAB_104c76e4c;
    }
    func_0x00010bdd9840(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be81f40(param_1);
  _objc_release(lVar3);
LAB_104c76e4c:
  _objc_release(lVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 104c76e90; end: 104c76ee7;  */

void FUN_104c76e90(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81f40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c76ee8; end: 104c7700b; -[SCBillboardFSTCampaignDataProviderImpl _processRankingAndGetCampaign:campaignPromise:billboardSignals:requestor:] */

void FUN_104c76ee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfc38c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dab638);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071680();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf2c260(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c0dfe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be1d9c0(param_1,param_2,param_4,uVar3,param_5,(uint)uVar2 ^ 1,uVar4,param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104c7700c; end: 104c7724f; -[SCBillboardFSTCampaignDataProviderImpl _getCampaignWithCampaignInfoPromise:campaignSnapshotEnumerator:readOnlyBillboardSignals:isChannelWithinDefaultCooldown:defaultChannelGlobalRules:requestor:] */

void FUN_104c7700c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010c0d9ba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bf43d60(param_3);
    FUN_104c863fc(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dab6f8,1
                 );
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    _objc_initWeak(auStack_68,param_1);
    puVar3 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(lVar1);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    uStack_70 = param_6;
    _objc_retain(param_7);
    uStack_78 = param_8;
    func_0x00010c297260(puVar3);
    _objc_release(puVar3);
    func_0x00010bfc3680(*(undefined8 *)(param_1 + 8));
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104c77250; end: 104c77443;  */

void FUN_104c77250(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2bea0();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      uVar5 = param_2;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      FUN_104c77444();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_initWeak(auStack_58,lVar1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_104c7749c;
      puStack_90 = &UNK_110842ed8;
      _objc_copyWeak(auStack_60,auStack_58);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar5);
      uStack_88 = uVar5;
      _objc_retain(param_2);
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      uStack_80 = param_2;
      _objc_retain(uVar5);
      uStack_78 = uVar5;
      _objc_retain(uVar2);
      uStack_70 = uVar2;
      _objc_retain(uVar3);
      ppuVar4 = &puStack_a8;
      uStack_68 = uVar3;
      _objc_retainBlock(ppuVar4);
      func_0x00010bdebc20(lVar1);
      _objc_release(ppuVar4);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
      _objc_release(uStack_78);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(uVar3);
    }
    else {
      func_0x00010be1d9c0(lVar1);
    }
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104c77444; end: 104c7749b;  */

void FUN_104c77444(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf46120();
  if ((int)uVar1 == 3) {
    uVar1 = param_1;
    func_0x00010bfbb5c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c7749c; end: 104c77603;  */

void FUN_104c7749c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c262a00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_104c798d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar4 = lVar1;
      func_0x00010be5fb00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      FUN_104c77604(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      puVar5 = PTR_PTR_1126ae890;
      _objc_alloc(PTR_PTR_1126ae890);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf2bf80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffc2c0(puVar5);
      func_0x00010bf43d60(uVar7);
      _objc_release(puVar5);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(lVar4);
      _objc_release(uVar3);
    }
    else {
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c77604; end: 104c776a3;  */

void FUN_104c77604(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010bfd5580();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf3c7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfd3a00();
    if ((int)uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x00010bf3c7c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104c776a4; end: 104c777d7; -[SCBillboardFSTCampaignDataProviderImpl _mergeSupStorageIdsWithDefaultChannelGlobalRules:campaignServerConfig:campaignName:] */

void FUN_104c776a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar3 = param_4;
  func_0x00010bfd5100();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = param_4;
    func_0x00010bf2bec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0eff00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010bfd5100();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_4;
    func_0x00010bf2bec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0eff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c262a40(param_4);
  uVar2 = param_3;
  FUN_104c7a258(param_3,uVar3,uVar4,uVar1,param_5,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104c777d8; end: 104c77cab; -[SCBillboardFSTCampaignDataProviderImpl _createCampaignUXConfigWithFSTConfig:campaignCOFName:completion:] */

void FUN_104c777d8(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  long param_5)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined **unaff_x23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined ***pppuStack_328;
  undefined *puStack_320;
  undefined ***pppuStack_300;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == (undefined **)0x0) {
    pppuVar16 = (undefined ***)0x0;
    ppuVar18 = (undefined **)0x0;
    (**(code **)(param_5 + 0x10))(param_5);
  }
  else {
    puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    ppuVar18 = param_3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar18;
    func_0x00010c26c260();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x000104c7a214();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar18);
    if (ppuVar4 != (undefined **)0x0) {
      func_0x00010befa120(puVar23);
    }
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    puStack_130 = (undefined8 *)0x0;
    ppuVar18 = param_3;
    func_0x00010c27ec20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar18;
    func_0x00010bf52a60();
    if (ppuVar3 != (undefined **)0x0) {
      unaff_x23 = (undefined **)*puStack_130;
      do {
        ppuVar20 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_130 != unaff_x23) {
            _objc_enumerationMutation(ppuVar18);
          }
          lVar24 = *(long *)(lStack_138 + (long)ppuVar20 * 8);
          lVar19 = lVar24;
          func_0x00010bf44460();
          if ((int)lVar19 == 2) {
            func_0x00010c26b700();
            _objc_retainAutoreleasedReturnValue();
            lVar19 = lVar24;
            func_0x00010c26c260();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar19;
            func_0x000104c7a214();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar19);
            _objc_release(lVar24);
            if (lVar5 != 0) {
              func_0x00010befa120(puVar23);
            }
            _objc_release(lVar5);
          }
          ppuVar20 = (undefined **)((long)ppuVar20 + 1);
        } while (ppuVar3 != ppuVar20);
        ppuVar3 = ppuVar18;
        func_0x00010bf52a60();
      } while (ppuVar3 != (undefined **)0x0);
    }
    _objc_release(ppuVar18);
    ppuVar18 = param_3;
    func_0x00010bf3c7c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar18;
    func_0x00010c26c260();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar3;
    func_0x000104c7a214();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar18);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if (ppuVar20 == (undefined **)0x0) {
      ppuStack_80 = &PTR____CFConstantStringClassReference_110dab918;
      ppuStack_78 = &PTR____CFConstantStringClassReference_110dab718;
      puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar21);
      pppuVar16 = (undefined ***)0x0;
      ppuVar18 = ppuVar3;
      (**(code **)(param_5 + 0x10))(param_5);
    }
    else {
      func_0x00010befa120(puVar23);
      ppuVar18 = param_3;
      func_0x00010bf83340();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar18;
      func_0x00010c26c260();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar6;
      func_0x000104c7a214();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      _objc_release(ppuVar18);
      if (ppuVar3 != (undefined **)0x0) {
        func_0x00010befa120(puVar23);
      }
      _objc_initWeak(&ppuStack_78,param_1);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c25d180();
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_190 = 0xc2000000;
      pcStack_188 = FUN_104c77cac;
      puStack_180 = &UNK_110842f38;
      unaff_x23 = &puStack_198;
      pppuVar16 = &ppuStack_78;
      _objc_copyWeak(auStack_148);
      _objc_retain(param_5);
      lStack_150 = param_5;
      _objc_retain(param_4);
      uStack_178 = param_4;
      _objc_retain(ppuVar4);
      ppuStack_170 = ppuVar4;
      _objc_retain(ppuVar20);
      ppuStack_168 = ppuVar20;
      _objc_retain(param_3);
      ppuStack_160 = param_3;
      _objc_retain(ppuVar3);
      ppuVar18 = &puStack_198;
      ppuStack_158 = ppuVar3;
      func_0x00010c297260(uVar8);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(ppuStack_158);
      _objc_release(ppuStack_160);
      _objc_release(ppuStack_168);
      _objc_release(ppuStack_170);
      _objc_release(uStack_178);
      _objc_release(lStack_150);
      _objc_destroyWeak(auStack_148);
      _objc_destroyWeak(&ppuStack_78);
    }
    _objc_release(ppuVar3);
    _objc_release(ppuVar20);
    _objc_release(ppuVar4);
    _objc_release(puVar23);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 10);
  _objc_destroyWeak(&ppuStack_78);
  __Unwind_Resume();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar17 = pppuVar16;
  _objc_retain(pppuVar16);
  _objc_retain(ppuVar18);
  ppuVar3 = param_3 + 10;
  _objc_loadWeakRetained();
  if (ppuVar3 != (undefined **)0x0) {
    if (ppuVar18 == (undefined **)0x0) {
      if (param_3[5] == (undefined *)0x0) {
        bVar1 = false;
      }
      else {
        pppuVar17 = pppuVar16;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar9 = pppuVar17;
        func_0x00010c08fa60();
        bVar1 = pppuVar9 == (undefined ***)0x0;
        _objc_release(pppuVar17);
      }
      pppuVar17 = pppuVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar17;
      func_0x00010c08fa60();
      _objc_release(pppuVar17);
      if ((bVar1) || (pppuVar9 == (undefined ***)0x0)) {
        puVar21 = param_3[9];
        puVar23 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(puVar21 + 0x10))(puVar21,0,puVar23);
        _objc_release(puVar23);
        pppuVar17 = (undefined ***)param_3[4];
        FUN_104c86288(ppuVar3[5],pppuVar17,1);
      }
      else {
        puVar10 = param_3[7];
        func_0x00010c0b69c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar23 = puVar10;
        func_0x00010bfe8f00();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar23;
        func_0x000104c7a214();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar23);
        if (puVar21 == (undefined *)0x0) {
          puStack_320 = (undefined *)0x0;
        }
        else {
          puVar25 = puVar10;
          func_0x00010bfd9e60();
          puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)puVar25 == 0) {
            puVar23 = (undefined *)0x0;
          }
          else {
            puVar25 = puVar10;
            func_0x00010c0f05e0(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c296d80();
            func_0x00010c0df740(puVar23);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar25);
          }
          puVar26 = puVar10;
          func_0x00010bfd9e00();
          puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)puVar26 == 0) {
            puVar25 = (undefined *)0x0;
          }
          else {
            puVar26 = puVar10;
            func_0x00010c0f0040(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c296d80();
            func_0x00010c0df740(puVar25);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar26);
          }
          puVar22 = puVar10;
          func_0x00010bfd9e40();
          puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)puVar22 == 0) {
            puVar26 = (undefined *)0x0;
          }
          else {
            puVar22 = puVar10;
            func_0x00010c0f04e0(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c296d80();
            func_0x00010c0df6e0(puVar26);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar22);
          }
          puStack_320 = PTR_PTR_1126ae8c8;
          _objc_alloc();
          func_0x00010c01cfc0();
          _objc_release(puVar26);
          _objc_release(puVar25);
          _objc_release(puVar23);
        }
        _objc_release(puVar21);
        _objc_release(puVar10);
        _objc_release(puVar10);
        if (param_3[5] == (undefined *)0x0) {
          pppuStack_328 = (undefined ***)0x0;
        }
        else {
          pppuStack_328 = pppuVar16;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
        }
        if (param_3[8] == (undefined *)0x0) {
          pppuStack_300 = (undefined ***)0x0;
        }
        else {
          pppuStack_300 = pppuVar16;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar10 = param_3[7];
        func_0x00010c27ec20();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(pppuVar16);
        puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        _objc_retain(puVar10);
        puVar23 = puVar10;
        func_0x00010bf52a60();
        lVar24 = lRam0000000000000000;
        while (puVar23 != (undefined *)0x0) {
          puVar25 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar24) {
              _objc_enumerationMutation(puVar10);
            }
            puVar22 = *(undefined **)((long)puVar25 * 8);
            puVar26 = puVar22;
            func_0x00010bf44460();
            if ((int)puVar26 == 2) {
              func_0x00010c26b700();
              _objc_retainAutoreleasedReturnValue();
              puVar26 = puVar22;
              func_0x00010c26c260();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar26;
              func_0x000104c7a214();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar26);
              if (puVar11 == (undefined *)0x0) {
                pppuVar17 = (undefined ***)0x0;
              }
              else {
                pppuVar17 = pppuVar16;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
              }
              pppuVar9 = pppuVar17;
              func_0x00010c08fa60();
              if (pppuVar9 != (undefined ***)0x0) {
                func_0x00010c27dd80();
                puVar26 = puVar22;
                func_0x00010bfdd200();
                if ((int)puVar26 == 0) {
                  puVar26 = (undefined *)0x0;
                }
                else {
                  puVar12 = puVar22;
                  func_0x00010c268340();
                  _objc_retainAutoreleasedReturnValue();
                  puVar26 = puVar12;
                  func_0x00010c123fa0();
                  if (puVar26 == (undefined *)0x0) {
                    puVar26 = (undefined *)0x0;
                  }
                  else {
                    puVar13 = puVar12;
                    func_0x00010c123f80(puVar12);
                    _objc_retainAutoreleasedReturnValue();
                    puVar26 = puVar13;
                    func_0x00010050471c();
                    _objc_release(puVar13);
                  }
                  _objc_release(puVar12);
                }
                puVar12 = PTR_PTR_1126ae8c0;
                func_0x00010c26cda0(PTR_PTR_1126ae8c0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar21);
                _objc_release(puVar12);
                _objc_release(puVar26);
              }
              _objc_release(pppuVar17);
              puVar26 = puVar22;
LAB_104c78250:
              _objc_release(puVar11);
LAB_104c78258:
              _objc_release(puVar26);
            }
            else if ((int)puVar26 == 1) {
              func_0x00010bfe6ac0();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar22;
              func_0x00010bfe8f00();
              _objc_retainAutoreleasedReturnValue();
              puVar26 = puVar11;
              func_0x000104c7a214();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar11);
              _objc_release(puVar22);
              if (puVar26 != (undefined *)0x0) {
                puVar11 = PTR_PTR_1126ae8c0;
                func_0x00010bfe9840(PTR_PTR_1126ae8c0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar21);
                goto LAB_104c78250;
              }
              goto LAB_104c78258;
            }
            puVar25 = puVar25 + 1;
          } while (puVar23 != puVar25);
          puVar23 = puVar10;
          func_0x00010bf52a60();
        }
        _objc_release(puVar10);
        _objc_release(pppuVar16);
        _objc_release(puVar10);
        _objc_release(puVar10);
        puVar10 = param_3[7];
        func_0x00010bf84980();
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar10;
        func_0x00010bf529e0();
        if (puVar23 == (undefined *)0x0) {
          puVar23 = (undefined *)0x0;
        }
        else {
          puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          _objc_retain();
          func_0x00010bf980c0(puVar10);
          _objc_release(puVar23);
        }
        _objc_release(puVar10);
        puVar25 = param_3[9];
        pppuVar9 = (undefined ***)PTR_PTR_1126ae898;
        _objc_alloc();
        pppuVar14 = pppuVar16;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        iVar2 = (int)param_3[7];
        func_0x00010bfd5b40();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (iVar2 == 0) {
          puVar10 = (undefined *)0x0;
          pppuVar15 = pppuVar16;
        }
        else {
          pppuVar15 = (undefined ***)param_3[7];
          func_0x00010bf4c680(pppuVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296d80();
          func_0x00010c0df740();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c01c600();
        pppuVar17 = pppuVar9;
        (**(code **)(puVar25 + 0x10))(puVar25,pppuVar9,0);
        _objc_release(pppuVar9);
        if (iVar2 != 0) {
          _objc_release(puVar10);
          _objc_release(pppuVar15);
        }
        _objc_release(pppuVar14);
        _objc_release(puVar23);
        _objc_release(puVar21);
        _objc_release(pppuStack_300);
        _objc_release(pppuStack_328);
        _objc_release(puStack_320);
      }
    }
    else {
      (**(code **)(param_3[9] + 0x10))(param_3[9],0,ppuVar18);
      pppuVar17 = (undefined ***)param_3[4];
      FUN_104c85fa0(ppuVar3[5],pppuVar17,1);
    }
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar18);
  _objc_release(pppuVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar17[4]);
  _objc_retain(pppuVar17[5]);
  _objc_retain(pppuVar17[6]);
  _objc_retain(pppuVar17[7]);
  _objc_retain(pppuVar17[8]);
  __Block_object_assign(pppuVar16 + 9,pppuVar17[9],7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(pppuVar16 + 10,pppuVar17 + 10);
  return;
}



/* Entry: 104c77cac; end: 104c7848f;  */

void FUN_104c77cac(long param_1,undefined *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_150;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    if (param_3 == 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        bVar1 = false;
      }
      else {
        puVar8 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010c08fa60();
        bVar1 = puVar10 == (undefined *)0x0;
        _objc_release(puVar8);
      }
      puVar8 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c08fa60();
      _objc_release(puVar8);
      if ((bVar1) || (puVar10 == (undefined *)0x0)) {
        lVar12 = *(long *)(param_1 + 0x48);
        puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar12 + 0x10))(lVar12,0,puVar8);
        _objc_release(puVar8);
        puVar8 = *(undefined **)(param_1 + 0x20);
        FUN_104c86288(*(undefined8 *)(lVar3 + 0x28),puVar8,1);
      }
      else {
        lVar4 = *(long *)(param_1 + 0x38);
        func_0x00010c0b69c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        lVar12 = lVar4;
        func_0x00010bfe8f00();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar12;
        func_0x000104c7a214();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        if (lVar6 == 0) {
          puStack_170 = (undefined *)0x0;
        }
        else {
          lVar12 = lVar4;
          func_0x00010bfd9e60();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)lVar12 == 0) {
            puVar8 = (undefined *)0x0;
          }
          else {
            lVar12 = lVar4;
            func_0x00010c0f05e0(lVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c296d80();
            func_0x00010c0df740(puVar8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar12);
          }
          lVar12 = lVar4;
          func_0x00010bfd9e00();
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)lVar12 == 0) {
            puVar10 = (undefined *)0x0;
          }
          else {
            lVar12 = lVar4;
            func_0x00010c0f0040(lVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c296d80();
            func_0x00010c0df740(puVar10);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar12);
          }
          lVar12 = lVar4;
          func_0x00010bfd9e40();
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)lVar12 == 0) {
            puVar11 = (undefined *)0x0;
          }
          else {
            lVar12 = lVar4;
            func_0x00010c0f04e0(lVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c296d80();
            func_0x00010c0df6e0(puVar11);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar12);
          }
          puStack_170 = PTR_PTR_1126ae8c8;
          _objc_alloc();
          func_0x00010c01cfc0();
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar8);
        }
        _objc_release(lVar6);
        _objc_release(lVar4);
        _objc_release(lVar4);
        if (*(long *)(param_1 + 0x28) == 0) {
          puStack_178 = (undefined *)0x0;
        }
        else {
          puStack_178 = param_2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
        }
        if (*(long *)(param_1 + 0x40) == 0) {
          puStack_150 = (undefined *)0x0;
        }
        else {
          puStack_150 = param_2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
        }
        lVar4 = *(long *)(param_1 + 0x38);
        func_0x00010c27ec20();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(param_2);
        puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        _objc_retain(lVar4);
        lVar12 = lVar4;
        func_0x00010bf52a60();
        lVar6 = lRam0000000000000000;
        while (lVar12 != 0) {
          lVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar6) {
              _objc_enumerationMutation(lVar4);
            }
            puVar11 = *(undefined **)(lVar13 * 8);
            puVar8 = puVar11;
            func_0x00010bf44460();
            if ((int)puVar8 == 2) {
              func_0x00010c26b700();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar11;
              func_0x00010c26c260();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar8;
              func_0x000104c7a214();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar8);
              if (puVar14 == (undefined *)0x0) {
                puVar8 = (undefined *)0x0;
              }
              else {
                puVar8 = param_2;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
              }
              puVar15 = puVar8;
              func_0x00010c08fa60();
              if (puVar15 != (undefined *)0x0) {
                func_0x00010c27dd80();
                puVar15 = puVar11;
                func_0x00010bfdd200();
                if ((int)puVar15 == 0) {
                  puVar15 = (undefined *)0x0;
                }
                else {
                  puVar5 = puVar11;
                  func_0x00010c268340();
                  _objc_retainAutoreleasedReturnValue();
                  puVar15 = puVar5;
                  func_0x00010c123fa0();
                  if (puVar15 == (undefined *)0x0) {
                    puVar15 = (undefined *)0x0;
                  }
                  else {
                    puVar7 = puVar5;
                    func_0x00010c123f80(puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    puVar15 = puVar7;
                    func_0x00010050471c();
                    _objc_release(puVar7);
                  }
                  _objc_release(puVar5);
                }
                puVar5 = PTR_PTR_1126ae8c0;
                func_0x00010c26cda0(PTR_PTR_1126ae8c0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar10);
                _objc_release(puVar5);
                _objc_release(puVar15);
              }
              _objc_release(puVar8);
              puVar8 = puVar11;
LAB_104c78250:
              _objc_release(puVar14);
LAB_104c78258:
              _objc_release(puVar8);
            }
            else if ((int)puVar8 == 1) {
              func_0x00010bfe6ac0();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar11;
              func_0x00010bfe8f00();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar14;
              func_0x000104c7a214();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar14);
              _objc_release(puVar11);
              if (puVar8 != (undefined *)0x0) {
                puVar14 = PTR_PTR_1126ae8c0;
                func_0x00010bfe9840(PTR_PTR_1126ae8c0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar10);
                goto LAB_104c78250;
              }
              goto LAB_104c78258;
            }
            lVar13 = lVar13 + 1;
          } while (lVar12 != lVar13);
          lVar12 = lVar4;
          func_0x00010bf52a60();
        }
        _objc_release(lVar4);
        _objc_release(param_2);
        _objc_release(lVar4);
        _objc_release(lVar4);
        lVar6 = *(long *)(param_1 + 0x38);
        func_0x00010bf84980();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar6;
        func_0x00010bf529e0();
        if (lVar12 == 0) {
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          _objc_retain();
          func_0x00010bf980c0(lVar6);
          _objc_release(puVar11);
        }
        _objc_release(lVar6);
        lVar12 = *(long *)(param_1 + 0x48);
        puVar15 = PTR_PTR_1126ae898;
        _objc_alloc();
        puVar5 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        iVar2 = (int)*(undefined8 *)(param_1 + 0x38);
        func_0x00010bfd5b40();
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (iVar2 == 0) {
          puVar14 = (undefined *)0x0;
          puVar7 = param_2;
        }
        else {
          puVar7 = *(undefined **)(param_1 + 0x38);
          func_0x00010bf4c680(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296d80();
          func_0x00010c0df740();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c01c600();
        puVar8 = puVar15;
        (**(code **)(lVar12 + 0x10))(lVar12,puVar15,0);
        _objc_release(puVar15);
        if (iVar2 != 0) {
          _objc_release(puVar14);
          _objc_release(puVar7);
        }
        _objc_release(puVar5);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puStack_150);
        _objc_release(puStack_178);
        _objc_release(puStack_170);
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,param_3);
      puVar8 = *(undefined **)(param_1 + 0x20);
      FUN_104c85fa0(*(undefined8 *)(lVar3 + 0x28),puVar8,1);
    }
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(puVar8 + 0x20));
  _objc_retain(*(undefined8 *)(puVar8 + 0x28));
  _objc_retain(*(undefined8 *)(puVar8 + 0x30));
  _objc_retain(*(undefined8 *)(puVar8 + 0x38));
  _objc_retain(*(undefined8 *)(puVar8 + 0x40));
  __Block_object_assign(param_2 + 0x48,*(undefined8 *)(puVar8 + 0x48),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_2 + 0x50,puVar8 + 0x50);
  return;
}



/* Entry: 104c78490; end: 104c784ef;  */

void FUN_104c78490(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 104c784f0; end: 104c78643; -[SCBillboardFSTCampaignDataProviderImpl markCampaignAsDisplayedWithCampaign:additionalData:] */

void FUN_104c784f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010bf3f4c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c262a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c262a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286700(uVar4,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    lVar1 = param_3;
    func_0x00010bf2bf80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a70c0(uVar4,param_2,lVar1,2,param_4);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf3f4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2866e0();
      _objc_release(uVar4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c78644; end: 104c78797; -[SCBillboardFSTCampaignDataProviderImpl markCampaignAsTappedWithCampaign:additionalData:] */

void FUN_104c78644(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010bf3f4c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c262a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c262a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284580(uVar4,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    lVar1 = param_3;
    func_0x00010bf2bf80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a70c0(uVar4,param_2,lVar1,0,param_4);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf3f4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c284560();
      _objc_release(uVar4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


