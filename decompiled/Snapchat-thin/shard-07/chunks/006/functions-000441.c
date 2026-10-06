/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10581c768; end: 10581c7a3; -[SCFriendingInlineSuggestionsImpressionLimitManager .cxx_destruct] */

void FUN_10581c768(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10581c7a4; end: 10581c88f; -[SCFriendingInlineSuggestionsServiceProvider provide] */

void FUN_10581c7a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bdeeb00();
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126beda0;
  _objc_alloc(PTR_PTR_1126beda0);
  func_0x00010c015f80();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10581c890; end: 10581c8cf;  */

void FUN_10581c890(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeec20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10581c8d0; end: 10581ca9f; -[SCFriendingInlineSuggestionsServiceProvider _createInlineSuggestionsDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10581c8d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1);
  _objc_release(puVar2);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bedb0;
  _objc_alloc(PTR_PTR_1126bedb0);
  lVar6 = (long)_DAT_11272a3f8;
  lVar4 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049a60(puVar3);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10581caa0; end: 10581cbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10581caa0(long param_1,undefined8 param_2)

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
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126beda8;
    _objc_alloc(PTR_PTR_1126beda8);
    lVar1 = param_1 + _DAT_11272a3fc;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf9a540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11272a3f8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c244b40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_11272a414;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_11272a410;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010a60(puVar9,param_2,lVar2,lVar4,lVar6,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10581cbf0; end: 10581cda7; -[SCFriendingInlineSuggestionsServiceProvider _createImpressionLoggers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10581cbf0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bedb8;
  _objc_alloc();
  lVar4 = param_1 + _DAT_11272a3fc;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf9a540();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11272a400;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c11e240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00cc20();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11272a404);
  *(undefined **)(param_1 + _DAT_11272a404) = puVar3;
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10581cda8; end: 10581ce57;  */

void FUN_10581cda8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2fe42b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,9,0,0x17);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10581ce58; end: 10581ced3; -[SCFriendingInlineSuggestionsServiceProvider _grapheneMetricLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10581ce58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bedc0;
  _objc_alloc(PTR_PTR_1126bedc0);
  param_1 = param_1 + _DAT_11272a408;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0184a0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10581ced4; end: 10581cf57; -[SCFriendingInlineSuggestionsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10581ced4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a414);
  _objc_destroyWeak(param_1 + _DAT_11272a410);
  _objc_destroyWeak(param_1 + _DAT_11272a400);
  _objc_destroyWeak(param_1 + _DAT_11272a3fc);
  _objc_destroyWeak(param_1 + _DAT_11272a408);
  _objc_destroyWeak(param_1 + _DAT_11272a3f8);
  _objc_destroyWeak(param_1 + _DAT_11272a40c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a404,0);
  return;
}



/* Entry: 10581cf58; end: 10581cf83; +[SCGrapheneInlineSuggestionsMetric seenSuggestions] */

void FUN_10581cf58(void)

{
  _objc_alloc(PTR_PTR_1126bed80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10581cf84; end: 10581cfaf; +[SCGrapheneInlineSuggestionsMetric addedSuggestions] */

void FUN_10581cf84(void)

{
  _objc_alloc(PTR_PTR_1126bed80);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10581cfb0; end: 10581d04f; -[SCGrapheneInlineSuggestionsMetric description] */

void FUN_10581cfb0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e055d8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e055d8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ea7d0;
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



/* Entry: 10581d050; end: 10581d1db; -[SCGrapheneRegistry inlineSuggestionsGraphene] */

void FUN_10581d050(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10581d0d8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c0ac0 != -1) {
    func_0x00010002a2fc(0x1136c0ac0,&puStack_48);
  }
  uVar1 = uRam00000001136c0ab8;
  _objc_retain(uRam00000001136c0ab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10581d1dc; end: 10581d43f; -[SCFriendingReliablePinningServiceProvider _createFriendingNotificationProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10581d1dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar1 = param_1 + _DAT_11272a41c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272a420;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272a424;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126bedd0;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11272a428;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c0fc680();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126bedd8;
  _objc_opt_new(PTR_PTR_1126bedd8);
  lVar9 = param_1;
  func_0x00010be228e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11272a42c;
  lVar3 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar10 = lVar3;
  func_0x00010bf15380();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar11 = lVar15;
  func_0x00010c129440();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11272a430;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf05240();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272a434;
  _objc_loadWeakRetained();
  lVar14 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00dfc0(puVar6,param_2,lVar4,lVar2,lVar7,puVar8,lVar9,lVar5,lVar10,lVar11,lVar13,
                      lVar14);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar15);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10581d440; end: 10581d4e3; -[SCFriendingReliablePinningServiceProvider _getSharedUserDefaultsForFriendingNotificationPayload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10581d440(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b7490;
  _objc_alloc(PTR_PTR_1126b7490);
  param_1 = param_1 + _DAT_11272a438;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef900(puVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110e12b18,0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10581d4e4; end: 10581d583; -[SCFriendingReliablePinningServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10581d4e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a434);
  _objc_destroyWeak(param_1 + _DAT_11272a430);
  _objc_destroyWeak(param_1 + _DAT_11272a42c);
  _objc_destroyWeak(param_1 + _DAT_11272a428);
  _objc_destroyWeak(param_1 + _DAT_11272a420);
  _objc_destroyWeak(param_1 + _DAT_11272a41c);
  _objc_destroyWeak(param_1 + _DAT_11272a438);
  _objc_destroyWeak(param_1 + _DAT_11272a424);
  _objc_storeStrong(param_1 + _DAT_11272a43c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a418,0);
  return;
}



/* Entry: 10581d584; end: 10581d86b;  */

void FUN_10581d584(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_70;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0dcb20();
  if (lVar1 == 1) {
    uStack_70 = PTR_PTR_1126bb3e0;
    _objc_alloc_init();
  }
  else {
    uStack_70 = (undefined *)0x0;
  }
  puVar2 = PTR_PTR_1126bb3f8;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010c261d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010beec460(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2622e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c083540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf1f3c0();
  func_0x00010c04f5a0(puVar2,param_2,lVar1,lVar3,lVar4,lVar6,0,1,0);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126b15c8;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0d3d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b14b8;
  _objc_alloc(PTR_PTR_1126b14b8);
  lVar5 = param_1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf1c000(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf1af00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7be0(puVar8,param_2,lVar5,lVar6,lVar9,lVar10,0,0);
  lVar11 = param_1;
  func_0x00010c0d3d20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c0d3d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c05c0e0(puVar7,param_2,lVar1,lVar3,lVar4,0,0,puVar8,0,0);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puVar8);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10581d86c; end: 10581d907; -[SCFriendingReliablePinningConverter convertNotificationSnapchatter:] */

void FUN_10581d86c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108b64d0);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10581d9a8;
    puStack_30 = &UNK_1108b64f0;
    lVar1 = param_3;
    uStack_28 = param_1;
    func_0x00010050471c(param_3,&puStack_48,&PTR___NSConcreteGlobalBlock_1108b6540);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10581d908; end: 10581d9a7;  */

uint FUN_10581d908(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 10581d9a8; end: 10581da87;  */

void FUN_10581d9a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b84c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c115ac0(param_3);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0dcb20(param_3);
  uVar3 = param_3;
  func_0x00010c073c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be740a0(uVar4);
  func_0x00010c05b4a0(param_1,puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10581da88; end: 10581da8f;  */

void FUN_10581da88(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_70;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c0dcb20();
  if (lVar1 == 1) {
    uStack_70 = PTR_PTR_1126bb3e0;
    _objc_alloc_init();
  }
  else {
    uStack_70 = (undefined *)0x0;
  }
  puVar2 = PTR_PTR_1126bb3f8;
  _objc_alloc();
  lVar1 = param_2;
  func_0x00010c261d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010beec460(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c2622e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010c083540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c04f5a0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b15c8;
  _objc_alloc();
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c0d3d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b14b8;
  _objc_alloc(PTR_PTR_1126b14b8);
  lVar5 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010bf1c000(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2;
  func_0x00010bf1af00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7be0(puVar7);
  lVar11 = param_2;
  func_0x00010c0d3d20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2;
  func_0x00010c0d3d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c05c0e0();
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puVar7);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10581da90; end: 10581dacf; -[SCFriendingReliablePinningConverter _pinningSuggestedTypeFromNotificationType:isFromIMC:] */

undefined4 FUN_10581da90(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return 1;
  }
  if (param_3 == 1) {
    func_0x00010bf1f3c0();
    uVar1 = 2;
    if (param_4 == 0) {
      uVar1 = 3;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 10581dad0; end: 10581ddd7; -[SCFriendingReliablePinningConverter convertNotificationSnapchattersToBadgeInfo:] */

void FUN_10581dad0(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined *puStack_100;
  undefined **ppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  uVar10 = 0x10;
  puVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar4 == (undefined *)0x0) {
      _objc_release(param_3);
      puVar4 = PTR_PTR_1126bd750;
      _objc_alloc();
      puVar11 = PTR_PTR_1126bd758;
      func_0x00010bf126e0(PTR_PTR_1126bd758);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126bd760;
      func_0x00010c0dca00(PTR_PTR_1126bd760);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c056040();
      _objc_release(puVar7);
      _objc_release(puVar11);
      ppuVar5 = (undefined **)PTR_PTR_1126bd750;
      _objc_alloc();
      puVar11 = PTR_PTR_1126bd758;
      func_0x00010c122960(PTR_PTR_1126bd758);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126bd760;
      func_0x00010c0dca00(PTR_PTR_1126bd760);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c056040();
      _objc_release(puVar7);
      _objc_release(puVar11);
      ppuVar8 = &puStack_100;
      puVar9 = (undefined *)0x2;
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_100 = puVar4;
      ppuStack_f8 = ppuVar5;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
LAB_10581dd70:
      _objc_release(ppuVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
        return;
      }
      ___stack_chk_fail();
      _objc_retain(ppuVar8);
      _objc_retain(puVar9);
      _objc_retain(uVar10);
      _objc_retain(param_6);
      ppuVar5 = ppuVar8;
      func_0x00010bf529e0();
      if (ppuVar5 != (undefined **)0x0) {
        _objc_initWeak(auStack_1a8,param_3);
        _objc_copyWeak(auStack_1b0,auStack_1a8);
        _objc_retain(ppuVar8);
        _objc_retain(ppuVar8);
        _objc_retain(param_6);
        func_0x00010c0f8500(puVar9);
        _objc_release(param_6);
        _objc_release(ppuVar8);
        _objc_release(ppuVar8);
        _objc_destroyWeak(auStack_1b0);
        _objc_destroyWeak(auStack_1a8);
      }
      _objc_release(param_6);
      _objc_release(uVar10);
      _objc_release(puVar9);
      _objc_release(ppuVar8);
      return;
    }
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      ppuVar12 = *(undefined ***)((long)puVar11 * 8);
      ppuVar5 = ppuVar12;
      FUN_10581d584();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126bede0;
      _objc_alloc(PTR_PTR_1126bede0);
      puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010c115ac0(ppuVar12);
      func_0x00010bf655e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar5;
      puVar9 = puVar7;
      func_0x00010c049160(puVar6);
      _objc_release(puVar7);
      func_0x00010c0dcb20();
      puVar7 = puVar2;
      if ((ppuVar12 == (undefined **)0x0) || (puVar7 = puVar3, ppuVar12 == (undefined **)0x1)) {
        func_0x00010befa120(puVar7,puVar7,puVar6);
      }
      else if (ppuVar12 == (undefined **)0x2) {
        _objc_release(puVar6);
        puVar11 = (undefined *)0x0;
        puVar4 = param_3;
        goto LAB_10581dd70;
      }
      _objc_release(puVar6);
      _objc_release(ppuVar5);
      puVar11 = puVar11 + 1;
    } while (puVar4 != puVar11);
    uVar10 = 0x10;
    puVar4 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10581ddd8; end: 10581df4f; -[SCFriendingReliablePinningSnapchatterUpserter upsertSnapchatters:docObjectContext:completionQueue:completionHandler:] */

void FUN_10581ddd8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_3);
    _objc_retain(param_6);
    func_0x00010c0f8500(param_4);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10581df50; end: 10581dfa3;  */

void FUN_10581df50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee6220();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10581dfa4; end: 10581dff7;  */

void FUN_10581dfa4(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((param_2 & 1) == 0) {
    func_0x000100504554(*(undefined8 *)(param_1 + 0x20),&PTR___NSConcreteGlobalBlock_1108b6560);
    _objc_release();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010581dfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10581dff8; end: 10581dfff;  */

void FUN_10581dff8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10581e000; end: 10581e193; -[SCFriendingReliablePinningSnapchatterUpserter _upsertSnapchatters:transactionContext:] */

void FUN_10581e000(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined8 *puVar28;
  undefined1 *puVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  undefined1 *puStack_1a8;
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
  
  puVar28 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar29 = auStack_e8;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar31 = *plStack_120;
    do {
      lVar32 = 0;
      do {
        if (*plStack_120 != lVar31) {
          _objc_enumerationMutation(param_3);
        }
        uVar30 = *(undefined8 *)(lStack_128 + lVar32 * 8);
        uVar2 = uVar30;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_4;
        func_0x000100bed2fc(param_4,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (lVar3 == 0) {
          func_0x000108c1d01c(param_4,uVar30);
        }
        else {
          uVar2 = param_1;
          func_0x00010be5fa80();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108c1d0a8(param_4,uVar2);
          _objc_release(uVar2);
        }
        _objc_release(lVar3);
        lVar32 = lVar32 + 1;
      } while (lVar1 != lVar32);
      puVar29 = auStack_e8;
      lVar1 = param_3;
      puVar28 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar28);
  _objc_retain(puVar29);
  puVar4 = puVar29;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)puVar28;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c261d20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c08fa60();
  puVar8 = puVar4;
  if (puVar7 != (undefined1 *)0x0) {
    puVar8 = puVar5;
  }
  func_0x00010c261d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar7 = puVar5;
  func_0x00010beec460();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c08fa60();
  puVar6 = puVar4;
  if (puVar9 != (undefined1 *)0x0) {
    puVar6 = puVar5;
  }
  func_0x00010beec460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar9 = puVar5;
  func_0x00010c2622e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c08fa60();
  puVar7 = puVar4;
  if (puVar10 != (undefined1 *)0x0) {
    puVar7 = puVar5;
  }
  func_0x00010c2622e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar11 = PTR_PTR_1126bb3f8;
  _objc_alloc();
  func_0x00010c083540(puVar5);
  func_0x00010c04f5a0();
  puVar9 = puVar29;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 == (undefined1 *)0x0) {
    puStack_1a8 = (undefined1 *)puVar28;
    func_0x00010bf4a3a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar9);
    puStack_1a8 = puVar9;
  }
  _objc_release(puVar9);
  puVar12 = PTR_PTR_1126b15c8;
  _objc_alloc();
  puVar9 = puVar29;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar29;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar29;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6a0();
  puVar14 = puVar29;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar29;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar29;
  func_0x00010bf8e9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d560();
  puVar17 = puVar29;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar29;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar29;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar29;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar29;
  func_0x00010c08f840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102000();
  puVar22 = puVar29;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar29;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar29;
  func_0x00010beef400();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar29;
  func_0x00010c105040();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar29;
  func_0x00010c1022a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar29;
  func_0x00010c149b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb80();
  func_0x00010c05c0e0();
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puStack_1a8);
  _objc_release(puVar11);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar29);
  _objc_release(puVar28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10581e194; end: 10581e63f; -[SCFriendingReliablePinningSnapchatterUpserter _mergeSnapchatter:withLocalSnapchatter:] */

void FUN_10581e194(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c261d20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08fa60();
  uVar5 = uVar1;
  if (uVar4 != 0) {
    uVar5 = uVar2;
  }
  func_0x00010c261d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar4 = uVar2;
  func_0x00010beec460();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c08fa60();
  uVar3 = uVar1;
  if (uVar6 != 0) {
    uVar3 = uVar2;
  }
  func_0x00010beec460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar6 = uVar2;
  func_0x00010c2622e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c08fa60();
  uVar4 = uVar1;
  if (uVar7 != 0) {
    uVar4 = uVar2;
  }
  func_0x00010c2622e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar8 = PTR_PTR_1126bb3f8;
  _objc_alloc();
  uVar6 = uVar2;
  func_0x00010c083540(uVar2);
  func_0x00010c04f5a0(puVar8,param_2,uVar5,uVar3,uVar4,uVar6,0,0,0);
  uVar6 = param_4;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    uStack_78 = param_3;
    func_0x00010bf4a3a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar6);
    uStack_78 = uVar6;
  }
  _objc_release(uVar6);
  puVar9 = PTR_PTR_1126b15c8;
  _objc_alloc();
  uVar6 = param_4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c07a6a0();
  uVar12 = param_4;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_4;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_4;
  func_0x00010bf8e9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_4;
  func_0x00010c06d560();
  uVar16 = param_4;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_4;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_4;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_4;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_4;
  func_0x00010c08f840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102000();
  uVar21 = param_4;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_4;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_4;
  func_0x00010beef400();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010c105040();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_4;
  func_0x00010c1022a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_4;
  func_0x00010c149b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb80();
  func_0x00010c05c0e0(puVar9,param_2,uVar6,uVar7,uVar10,uVar11 & 0xffffffff,uVar12,uVar13,uVar14,
                      (char)uVar15);
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
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uStack_78);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10581e640; end: 10581eabf; -[SCFriendingReliablePinningStoredNotificationPickerAndConverter initWithDocObjectContext:performerProvider:pinningMetadataRepository:pinningMetadataConveter:extensionSharedFile:applicationLifecycleEventsObservable:friendingBadgeMutator:friendingReminderPinMutator:appGroupUserDefaults:circumstanceEngine:] */

undefined8 *
FUN_10581e640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_80 = PTR_PTR_1126ea7d8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bd770;
    _objc_alloc();
    func_0x00010c05cd80();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[2];
    puVar1[2] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bede8;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[0xe];
    func_0x00010bf05fe0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100a046e8();
    _objc_release(uVar2);
    uVar2 = puVar1[0xe];
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067f00();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bedf0;
    _objc_alloc();
    func_0x00010c02c920();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf72840(param_8);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10581eac0;
    puStack_a0 = &UNK_110846510;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = puVar1[2];
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
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
  return puVar1;
}



/* Entry: 10581eac0; end: 10581eb17;  */

void FUN_10581eac0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10581eb18; end: 10581ebf3; -[SCFriendingReliablePinningStoredNotificationPickerAndConverter didReceiveNotificationWithUserInfo:] */

void FUN_10581eb18(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10581ebf4; end: 10581ec27;  */

void FUN_10581ebf4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10581ec28; end: 10581edab; -[SCFriendingReliablePinningStoredNotificationPickerAndConverter _didReceiveNotificationWithUserInfoInPerformer:] */

void FUN_10581ec28(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_f0 = 0;
  puVar2 = PTR_PTR_1126bedf8;
  func_0x00010bdc2360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_f0;
  _objc_retain(lStack_f0);
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf51120();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar5 = lVar4;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar4);
          }
          uVar6 = *(undefined8 *)(param_1 + 0x58);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c066680();
          _objc_release(uVar6);
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
        lVar5 = lVar4;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    func_0x00010bee6240(param_1);
    _objc_release(lVar4);
  }
  _objc_release(puVar2);
  lVar5 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_150 = lVar1;
  pcStack_138 = FUN_10581edac;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_158,lVar5);
  uVar6 = *(undefined8 *)(lVar5 + 0x10);
  _objc_copyWeak(auStack_160,auStack_158);
  func_0x00010c0f7fc0(uVar6);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  return;
}



/* Entry: 10581edac; end: 10581ee53; -[SCFriendingReliablePinningStoredNotificationPickerAndConverter _appDidBecomeActive] */

void FUN_10581edac(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10581ee54; end: 10581ee7f;  */

void FUN_10581ee54(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4c9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10581ee80; end: 10581f09f; -[SCFriendingReliablePinningStoredNotificationPickerAndConverter _loadAndConvertStoredNotificationSnapchatters] */

void FUN_10581ee80(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **unaff_x23;
  long lVar5;
  long lVar6;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be73c20();
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar1 = param_1;
    func_0x00010be4e260();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010bf51120();
      _objc_retainAutoreleasedReturnValue();
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain();
      lVar2 = lVar3;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar5 = *plStack_120;
        do {
          lVar6 = 0;
          do {
            if (*plStack_120 != lVar5) {
              _objc_enumerationMutation(lVar3);
            }
            uVar4 = *(undefined8 *)(param_1 + 0x58);
            func_0x00010c269d40(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c066680();
            _objc_release(uVar4);
            lVar6 = lVar6 + 1;
          } while (lVar2 != lVar6);
          lVar2 = lVar3;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      _objc_release(lVar3);
      _objc_initWeak(auStack_138,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar4);
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_10581f0a0;
      puStack_150 = &UNK_110841fb0;
      unaff_x23 = &puStack_168;
      _objc_copyWeak(auStack_140,auStack_138);
      _objc_retain(uVar4);
      uStack_148 = uVar4;
      func_0x00010bee6240(param_1);
      _objc_release(uStack_148);
      _objc_destroyWeak(auStack_140);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_138);
      _objc_release(lVar3);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  lVar1 = lVar1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfa040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10581f0a0; end: 10581f0d3;  */

void FUN_10581f0a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10581f0d4; end: 10581f317; -[SCFriendingReliablePinningStoredNotificationPickerAndConverter _upsertSnapchattersAndPinningMetadata:completion:] */

void FUN_10581f0d4(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  ppuVar1 = &PTR___NSConcreteGlobalBlock_1108b6580;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  _objc_retain(param_3);
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf51100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    _objc_retain(lVar5);
    func_0x00010c28f220(uVar7);
    _objc_release(uVar6);
    _dispatch_group_enter(lVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar4);
    _objc_retain(lVar5);
    func_0x00010c28f200(uVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100bc0718(lVar5,uVar6,ppuVar1);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 10581f318; end: 10581f32b;  */

void FUN_10581f318(void)

{
  return;
}



/* Entry: 10581f32c; end: 10581f38b; -[SCFriendingReliablePinningStoredNotificationPickerAndConverter _pickUpStoredReminderUserIds] */

void FUN_10581f32c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c1211a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fa140();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10581f38c; end: 10581f49b; -[SCFriendingReliablePinningStoredNotificationPickerAndConverter _loadNotificationSnapchattersFromExtensionSharedFile:] */

void FUN_10581f38c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfacbc0();
  if ((int)lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c121280();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      _objc_alloc();
      func_0x00010bfeea60();
      func_0x00010c1ec620();
      puVar3 = puVar2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar5);
      puVar5 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10581f49c; end: 10581f4eb; -[SCFriendingReliablePinningStoredNotificationPickerAndConverter _deleteExtensionSharedFile:] */

void FUN_10581f49c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfacbc0();
  if ((int)uVar1 != 0) {
    uStack_28 = 0;
    func_0x00010bf6bde0(param_3,param_2,&uStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10581f4ec; end: 10581f5ab; -[SCFriendingReliablePinningStoredNotificationPickerAndConverter .cxx_destruct] */

void FUN_10581f4ec(long param_1)

{
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



/* Entry: 10581f5ac; end: 10581f5f7; -[SCFriendingReliablePinningSnapchatterPinningMetadataUpserter initWithMostRecentX:impressionThreshold:] */

void FUN_10581f5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea7e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10581f5f8; end: 10581f7c3; -[SCFriendingReliablePinningSnapchatterPinningMetadataUpserter upsertSnapchatterPinningMetadatas:docObjectContext:completionQueue:completionHandler:] */

void FUN_10581f5f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    uStack_70 = uVar2;
    _objc_retain(param_3);
    _objc_retain(param_6);
    func_0x00010c0f8500(param_4);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10581f7c4; end: 10581f84b;  */

void FUN_10581f7c4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee6220(param_1);
    func_0x00010bdfa4a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10581f84c; end: 10581f89f;  */

void FUN_10581f84c(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((param_2 & 1) == 0) {
    func_0x000100504554(*(undefined8 *)(param_1 + 0x20),&PTR___NSConcreteGlobalBlock_1108b65f0);
    _objc_release();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010581f890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10581f8a0; end: 10581f8bf;  */

void FUN_10581f8a0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10581f8c0; end: 10581fa4f; -[SCFriendingReliablePinningSnapchatterPinningMetadataUpserter _upsertSnapchatters:transactionContext:] */

void FUN_10581f8c0(undefined8 param_1,undefined ***param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined ***pppuVar11;
  undefined *unaff_x22;
  undefined ***unaff_x23;
  long lVar12;
  undefined ***pppuVar13;
  undefined4 *puStack_3e0;
  undefined4 *puStack_3d8;
  undefined4 uStack_390;
  undefined1 uStack_389;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  long lStack_370;
  long lStack_368;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined4 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  undefined1 uStack_2e1;
  undefined **ppuStack_2e0;
  undefined4 uStack_2d8;
  undefined8 uStack_2d0;
  undefined2 uStack_2c8;
  undefined2 uStack_2c6;
  undefined4 uStack_2c4;
  undefined1 auStack_2b8 [16];
  undefined1 *puStack_2a8;
  undefined ***pppuStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined4 auStack_270 [4];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_248 [144];
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined4 uStack_1ac;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  long alStack_198 [3];
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  puVar10 = auStack_d8;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x23 = (undefined ***)*puStack_110;
    do {
      lVar12 = 0;
      do {
        if ((undefined ***)*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(undefined **)(lStack_118 + lVar12 * 8);
        param_2 = (undefined ***)0x0;
        FUN_105820c44(unaff_x22,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(unaff_x22);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      puVar10 = auStack_d8;
      lVar2 = param_3;
      puVar9 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    alStack_198[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar10);
    if ((0 < (long)puVar9) && (puVar10 != (undefined1 *)0x0)) {
      _objc_opt_class(PTR_PTR_1126b84c8);
      func_0x00010bfa6be0(auStack_270,puVar10);
      puVar3 = &uStack_2e1;
      func_0x000100a14b1c();
      ppuStack_350 = (undefined **)CONCAT44(ppuStack_350._4_4_,0xf);
      uStack_340 = 0x100;
      uStack_328 = (undefined4)*(undefined8 *)(lVar2 + 0x10);
      ppuStack_358 = &PTR_FUN_110864c08;
      uStack_318 = 0;
      uStack_320 = 0;
      lStack_308 = 0;
      lStack_310 = 0;
      plStack_2f8 = (long *)0x0;
      uStack_300 = 0;
      plStack_2f0 = (long *)0x0;
      uStack_2c6 = *(undefined2 *)(puVar3 + 0x1a);
      uStack_2d8 = 6;
      uStack_2c8 = 0x100;
      ppuStack_2e0 = &PTR_FUN_110866be0;
      pppuStack_2a0 = &ppuStack_358;
      lStack_290 = 0;
      lStack_298 = 0;
      plStack_280 = (long *)0x0;
      uStack_288 = 0;
      plStack_278 = (long *)0x0;
      puVar4 = &uStack_389;
      puStack_2a8 = puVar3;
      FUN_105820218();
      uStack_1b8 = *(undefined8 *)(puVar4 + 0x10);
      uStack_1b0 = puVar4[0x19];
      uStack_1af = puVar4[0x18];
      uStack_1a0 = *(undefined8 *)(puVar4 + 0x28);
      uStack_1ac = 1;
      pcStack_1a8 = FUN_10581ff60;
      lStack_380 = 0;
      uStack_378 = 0;
      lStack_388 = 0;
      func_0x000100c435d0(&lStack_388,&uStack_1b8,alStack_198,1);
      func_0x000100c436b8(&lStack_370,&lStack_388);
      uStack_390 = SUB84(puVar9,0);
      puStack_3e0 = auStack_270;
      func_0x0001000e77a0(puStack_3e0,&ppuStack_2e0,&lStack_370,&uStack_390);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_370 != 0) {
        lStack_368 = lStack_370;
        __ZdlPv();
      }
      if (lStack_388 != 0) {
        lStack_380 = lStack_388;
        __ZdlPv();
      }
      plVar1 = plStack_278;
      ppuStack_2e0 = &PTR_FUN_110866be0;
      plStack_278 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_280;
      plStack_280 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_298 != 0) {
        lStack_290 = lStack_298;
        __ZdlPv();
      }
      plVar1 = plStack_2f0;
      ppuStack_358 = &PTR_FUN_110864c08;
      plStack_2f0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_2f8;
      plStack_2f8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_310 != 0) {
        lStack_308 = lStack_310;
        __ZdlPv();
      }
      func_0x0001000e76e0(auStack_248);
      _objc_release(uStack_258);
      _objc_release(uStack_260);
      puVar5 = puStack_3e0;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      puStack_3d8 = puVar5;
      func_0x000100504554();
      _objc_release(puVar5);
      unaff_x22 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b84c8);
      func_0x00010bfa6be0(&ppuStack_2e0,puVar10);
      ppuStack_358 = (undefined **)0x0;
      ppuStack_350 = (undefined **)0x0;
      uStack_348 = 0;
      auStack_270[0] = 0;
      unaff_x23 = &ppuStack_2e0;
      param_2 = &ppuStack_358;
      func_0x00010054c81c(unaff_x23,param_2,auStack_270);
      _objc_retainAutoreleasedReturnValue();
      if (ppuStack_358 != (undefined **)0x0) {
        ppuStack_350 = ppuStack_358;
        __ZdlPv();
      }
      func_0x0001000e76e0(auStack_2b8);
      _objc_release(CONCAT44(uStack_2c4,CONCAT22(uStack_2c6,uStack_2c8)));
      _objc_release(uStack_2d0);
      pppuVar6 = unaff_x23;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (pppuVar6 != (undefined ***)0x0) {
        pppuVar11 = (undefined ***)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(unaff_x23);
          }
          pppuVar13 = *(undefined ****)((long)pppuVar11 * 8);
          pppuVar7 = pppuVar13;
          func_0x00010c2923e0(pppuVar13);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = unaff_x22;
          func_0x00010bf4b900();
          _objc_release(pppuVar7);
          if (((ulong)puVar8 & 1) == 0) {
            puVar8 = PTR_PTR_1126b84d0;
            FUN_105820bd0(PTR_PTR_1126b84d0,pppuVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(puVar10);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar8);
            param_2 = pppuVar13;
          }
          pppuVar11 = (undefined ***)((long)pppuVar11 + 1);
        } while (pppuVar6 != pppuVar11);
        pppuVar6 = unaff_x23;
        func_0x00010bf52a60();
      }
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(puStack_3d8);
      _objc_release(puStack_3e0);
    }
    puVar3 = puVar10;
    _objc_release(puVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_198[0]) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puStack_3d8);
    _objc_release(puStack_3e0);
    _objc_release(puVar10);
    __Unwind_Resume(puVar3);
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 10581fa50; end: 10581ff3f; -[SCFriendingReliablePinningSnapchatterPinningMetadataUpserter _deletePinningMetadataOlderThanMostRecentX:transactionContext:] */

void FUN_10581fa50(long param_1,undefined ***param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined ***pppuVar9;
  undefined *unaff_x22;
  undefined ***unaff_x23;
  undefined ***pppuVar10;
  undefined4 *puStack_2c0;
  undefined4 *puStack_2b8;
  undefined4 uStack_270;
  undefined1 uStack_269;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined1 uStack_1c1;
  undefined **ppuStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined2 uStack_1a8;
  undefined2 uStack_1a6;
  undefined4 uStack_1a4;
  undefined1 auStack_198 [16];
  undefined1 *puStack_188;
  undefined ***pppuStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined4 auStack_150 [4];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_128 [144];
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  alStack_78[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if ((0 < param_3) && (param_4 != 0)) {
    _objc_opt_class(PTR_PTR_1126b84c8);
    func_0x00010bfa6be0(auStack_150,param_4);
    puVar2 = &uStack_1c1;
    func_0x000100a14b1c();
    ppuStack_230 = (undefined **)CONCAT44(ppuStack_230._4_4_,0xf);
    uStack_220 = 0x100;
    uStack_208 = (undefined4)*(undefined8 *)(param_1 + 0x10);
    ppuStack_238 = &PTR_FUN_110864c08;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_1e8 = 0;
    lStack_1f0 = 0;
    plStack_1d8 = (long *)0x0;
    uStack_1e0 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1a6 = *(undefined2 *)(puVar2 + 0x1a);
    uStack_1b8 = 6;
    uStack_1a8 = 0x100;
    ppuStack_1c0 = &PTR_FUN_110866be0;
    pppuStack_180 = &ppuStack_238;
    lStack_170 = 0;
    lStack_178 = 0;
    plStack_160 = (long *)0x0;
    uStack_168 = 0;
    plStack_158 = (long *)0x0;
    puVar3 = &uStack_269;
    puStack_188 = puVar2;
    FUN_105820218();
    uStack_98 = *(undefined8 *)(puVar3 + 0x10);
    uStack_90 = puVar3[0x19];
    uStack_8f = puVar3[0x18];
    uStack_80 = *(undefined8 *)(puVar3 + 0x28);
    uStack_8c = 1;
    pcStack_88 = FUN_10581ff60;
    lStack_260 = 0;
    uStack_258 = 0;
    lStack_268 = 0;
    func_0x000100c435d0(&lStack_268,&uStack_98,alStack_78,1);
    func_0x000100c436b8(&lStack_250,&lStack_268);
    uStack_270 = (undefined4)param_3;
    puStack_2c0 = auStack_150;
    func_0x0001000e77a0(puStack_2c0,&ppuStack_1c0,&lStack_250,&uStack_270);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_250 != 0) {
      lStack_248 = lStack_250;
      __ZdlPv();
    }
    if (lStack_268 != 0) {
      lStack_260 = lStack_268;
      __ZdlPv();
    }
    plVar1 = plStack_158;
    ppuStack_1c0 = &PTR_FUN_110866be0;
    plStack_158 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_160;
    plStack_160 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_178 != 0) {
      lStack_170 = lStack_178;
      __ZdlPv();
    }
    plVar1 = plStack_1d0;
    ppuStack_238 = &PTR_FUN_110864c08;
    plStack_1d0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1d8;
    plStack_1d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_1f0 != 0) {
      lStack_1e8 = lStack_1f0;
      __ZdlPv();
    }
    func_0x0001000e76e0(auStack_128);
    _objc_release(uStack_138);
    _objc_release(uStack_140);
    puVar4 = puStack_2c0;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    puStack_2b8 = puVar4;
    func_0x000100504554();
    _objc_release(puVar4);
    unaff_x22 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b84c8);
    func_0x00010bfa6be0(&ppuStack_1c0,param_4);
    ppuStack_238 = (undefined **)0x0;
    ppuStack_230 = (undefined **)0x0;
    uStack_228 = 0;
    auStack_150[0] = 0;
    unaff_x23 = &ppuStack_1c0;
    param_2 = &ppuStack_238;
    func_0x00010054c81c(unaff_x23,param_2,auStack_150);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_238 != (undefined **)0x0) {
      ppuStack_230 = ppuStack_238;
      __ZdlPv();
    }
    func_0x0001000e76e0(auStack_198);
    _objc_release(CONCAT44(uStack_1a4,CONCAT22(uStack_1a6,uStack_1a8)));
    _objc_release(uStack_1b0);
    pppuVar5 = unaff_x23;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (pppuVar5 != (undefined ***)0x0) {
      pppuVar9 = (undefined ***)0x0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(unaff_x23);
        }
        pppuVar10 = *(undefined ****)((long)pppuVar9 * 8);
        pppuVar6 = pppuVar10;
        func_0x00010c2923e0(pppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = unaff_x22;
        func_0x00010bf4b900();
        _objc_release(pppuVar6);
        if (((ulong)puVar7 & 1) == 0) {
          puVar7 = PTR_PTR_1126b84d0;
          FUN_105820bd0(PTR_PTR_1126b84d0,pppuVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(param_4);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar7);
          param_2 = pppuVar10;
        }
        pppuVar9 = (undefined ***)((long)pppuVar9 + 1);
      } while (pppuVar5 != pppuVar9);
      pppuVar5 = unaff_x23;
      func_0x00010bf52a60();
    }
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puStack_2b8);
    _objc_release(puStack_2c0);
  }
  lVar8 = param_4;
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_78[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(puStack_2b8);
  _objc_release(puStack_2c0);
  _objc_release(param_4);
  __Unwind_Resume(lVar8);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10581ff40; end: 10581ff5f;  */

void FUN_10581ff40(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10581ff60; end: 105820013;  */

undefined4 FUN_10581ff60(double param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain();
  _objc_retain(param_3);
  (*param_4)(param_2,&bStack_41);
  dVar4 = param_1;
  (*param_4)(param_3,&bStack_42);
  uVar3 = 2;
  uVar1 = uVar3;
  if (bStack_42 == 0) {
    uVar1 = 0;
  }
  if (bStack_41 == 0) {
    uVar1 = 1;
  }
  if (dVar4 < param_1) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (dVar4 <= param_1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar1;
  if ((bStack_42 & 1) == 0) {
    uVar3 = uVar2;
  }
  if ((bStack_41 & 1) == 0) {
    uVar1 = uVar3;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105820014; end: 105820077;  */

undefined ** FUN_105820014(void)

{
  int iVar1;
  
  if ((bRam000000011381a2e0 & 1) == 0) {
    iVar1 = 0x1381a2e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_113103e90,0x100000000);
      ___cxa_guard_release(0x11381a2e0);
    }
  }
  return &PTR_PTR_113103e90;
}



/* Entry: 105820078; end: 1058200ff;  */

void FUN_105820078(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105820100; end: 10582018b;  */

void FUN_105820100(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10582018c; end: 1058201c3;  */

undefined4 FUN_10582018c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1058201c4; end: 105820217;  */

undefined8 FUN_1058201c4(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bfea640(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105820218; end: 1058202d3;  */

undefined8 FUN_105820218(void)

{
  int iVar1;
  
  if ((bRam000000011381a3d0 & 1) == 0) {
    iVar1 = 0x1381a3d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381a368 = 0xe;
      puRam000000011381a370 = &UNK_10f2fe5d3;
      uRam000000011381a378 = 0x1010000;
      pcRam000000011381a380 = FUN_1058202d4;
      pcRam000000011381a388 = FUN_105820308;
      ppuRam000000011381a360 = &PTR_FUN_11086d7d0;
      uRam000000011381a3a0 = 0;
      uRam000000011381a398 = 0;
      uRam000000011381a3b0 = 0;
      uRam000000011381a3a8 = 0;
      uRam000000011381a3c0 = 0;
      uRam000000011381a3b8 = 0;
      uRam000000011381a3c8 = 0;
      ___cxa_atexit(FUN_105187b98,0x11381a360,0x100000000);
      ___cxa_guard_release(0x11381a3d0);
    }
  }
  return 0x11381a360;
}



/* Entry: 1058202d4; end: 105820307;  */

undefined8 FUN_1058202d4(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 105820308; end: 105820363;  */

undefined8 FUN_105820308(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010c122300(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105820364; end: 10582041b;  */

undefined8 FUN_105820364(void)

{
  int iVar1;
  
  if ((bRam000000011381a448 & 1) == 0) {
    iVar1 = 0x1381a448;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381a3e0 = 0xe;
      puRam000000011381a3e8 = &UNK_10f2fe5e5;
      uRam000000011381a3f0 = 0x100;
      pcRam000000011381a3f8 = FUN_10582041c;
      pcRam000000011381a400 = FUN_105820454;
      ppuRam000000011381a3d8 = &PTR_SUB_110883850;
      uRam000000011381a418 = 0;
      uRam000000011381a410 = 0;
      uRam000000011381a428 = 0;
      uRam000000011381a420 = 0;
      uRam000000011381a438 = 0;
      uRam000000011381a430 = 0;
      uRam000000011381a440 = 0;
      ___cxa_atexit(0x1053cfde4,0x11381a3d8,0x100000000);
      ___cxa_guard_release(0x11381a448);
    }
  }
  return 0x11381a3d8;
}



/* Entry: 10582041c; end: 105820453;  */

undefined4 FUN_10582041c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 105820454; end: 1058204a7;  */

undefined8 FUN_105820454(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c0fc6a0(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1058204a8; end: 1058205df; +[SCSnapchattersPinningMetadata immutableObjectParse:bufferSize:] */

void FUN_1058204a8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126b84c8;
  _objc_alloc(PTR_PTR_1126b84c8);
  lVar7 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar7);
  if (uVar3 < 5) {
    puVar9 = (undefined *)0x0;
    uVar5 = 0;
    uVar6 = 0;
    uVar10 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - lVar7))[2];
    if (uVar8 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar7);
    }
    uVar10 = 0;
    if (uVar3 < 7) {
      uVar5 = 0;
    }
    else {
      uVar8 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar7));
      if (uVar8 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)((long)piVar1 + uVar8);
      }
      if (10 < uVar3) {
        uVar8 = (ulong)*(ushort *)((long)piVar1 + (10 - lVar7));
        if (uVar8 != 0) {
          uVar10 = *(undefined8 *)((long)piVar1 + uVar8);
        }
        if ((0xc < uVar3) && (uVar8 = (ulong)*(ushort *)((long)piVar1 + (0xc - lVar7)), uVar8 != 0))
        {
          uVar6 = *(undefined4 *)((long)piVar1 + uVar8);
          goto LAB_1058205a0;
        }
      }
    }
    uVar6 = 0;
  }
LAB_1058205a0:
  func_0x00010c05b4a0(uVar10,puVar4,param_2,puVar9,uVar5,uVar6);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058205e0; end: 1058205f3; +[SCSnapchattersPinningMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_1058205e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_105820640;
  auVar1._0_8_ = FUN_1058205f4;
  return auVar1;
}



/* Entry: 1058205f4; end: 10582063f;  */

void FUN_1058205f4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf2fe618;
  _strcmp(&UNK_10f2fe618,param_1);
  if (iVar1 != 0) {
    _strcmp(&UNK_10f2fe627,param_1);
  }
  return;
}



/* Entry: 105820640; end: 10582072f;  */

bool FUN_105820640(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 == 1) {
    func_0x0001001b9e08(param_2,&UNK_10f2fe6a2);
    _sqlite3_bind_int64();
    if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar2 != 0)) {
      uVar2 = (ulong)*(uint *)((long)piVar1 + uVar2);
      goto LAB_1058206fc;
    }
  }
  else {
    if (param_1 != 0) {
      return false;
    }
    func_0x0001001b9e08(param_2,&UNK_10f2fe63c);
    _sqlite3_bind_int64();
    if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
      uVar2 = (ulong)*(int *)((long)piVar1 + uVar2);
      goto LAB_1058206fc;
    }
  }
  uVar2 = 0;
LAB_1058206fc:
  _sqlite3_bind_int64(param_2,2,uVar2);
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 105820730; end: 1058207ef;  */

undefined1 *
FUN_105820730(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_58 = PTR_PTR_1126ea7e8;
    lStack_60 = param_2;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x28) = param_1;
      *(undefined4 *)((long)plVar1 + 0x14) = param_5;
      *(undefined4 *)((long)plVar1 + 0x18) = param_6;
    }
  }
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 1058207f0; end: 105820863;  */

void FUN_1058207f0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105820864();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105820864; end: 105820bcf;  */

void FUN_105820864(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar6,&UNK_10f2fe714);
        if (puVar6 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c2923e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar6,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar6;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar6;
            _sqlite3_column_int64(puVar6,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b84c8);
            _sqlite3_column_blob(puVar6,1);
            _sqlite3_column_bytes(puVar6,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar6);
            if (puVar3 == (undefined *)0x0) goto LAB_105820b30;
            puVar6 = PTR_PTR_1126b84d0;
            _objc_alloc(PTR_PTR_1126b84d0);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bfea640(puVar3);
            func_0x00010c122300(puVar3);
            puVar5 = puVar3;
            func_0x00010c0fc6a0(puVar3);
            FUN_105820730(param_1,puVar6,puVar1,puVar2,puVar4,puVar5);
            param_2 = puVar3;
            goto LAB_105820964;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar6 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b84c8);
      puVar3 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126b84d0;
        _objc_alloc(PTR_PTR_1126b84d0);
        puVar2 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bfea640(puVar3);
        func_0x00010c122300(puVar3);
        puVar5 = puVar3;
        func_0x00010c0fc6a0(puVar3);
        FUN_105820730(param_1,puVar6,puVar1,puVar2,puVar4,puVar5);
        param_2 = puVar3;
LAB_105820964:
        _objc_release(puVar2);
        goto LAB_105820b38;
      }
LAB_105820b30:
      param_2 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_105820b38:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105820bd0; end: 105820c43;  */

void FUN_105820bd0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105820864();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105820c44; end: 105820e1f;  */

void FUN_105820c44(undefined8 param_1,long param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b84d0;
  FUN_1058207f0(PTR_PTR_1126b84d0,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar5 = PTR_PTR_1126b84d0;
    _objc_retain(param_2);
    _objc_opt_self(puVar5);
    puVar5 = PTR_PTR_1126b84d0;
    if (param_2 == 0) {
      _objc_opt_new();
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      lVar2 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010bfea640(param_2);
      func_0x00010c122300(param_2);
      lVar4 = param_2;
      func_0x00010c0fc6a0(param_2);
      FUN_105820730(param_1,puVar5,0xffffffffffffffff,lVar2,lVar3,lVar4);
      _objc_release(lVar2);
    }
    *(undefined4 *)(puVar5 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    lVar2 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea640();
    *(int *)(puVar1 + 0x14) = (int)lVar2;
    func_0x00010c122300(param_2);
    *(undefined8 *)(puVar1 + 0x28) = param_1;
    lVar2 = param_2;
    func_0x00010c0fc6a0();
    *(int *)(puVar1 + 0x18) = (int)lVar2;
    _objc_retain(puVar1);
    puVar5 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105820e20; end: 105820e87;  */

void FUN_105820e20(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b84c8;
    _objc_alloc(PTR_PTR_1126b84c8);
    func_0x00010c05b4a0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105820e88; end: 105820e93; -[SCSnapchattersPinningMetadataChangeRequest .cxx_destruct] */

void FUN_105820e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 105820e94; end: 105820e9f; -[SCSnapchattersPinningMetadataChangeRequest table] */

undefined * FUN_105820e94(void)

{
  return &UNK_10f2fe5fa;
}



/* Entry: 105820ea0; end: 105820fb3; -[SCSnapchattersPinningMetadataChangeRequest createTableWithSQLite:] */

void FUN_105820ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddbefaa,0x8b,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddbf035,0x81,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10ddbf0b6,0xa0,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddbf156,0x8d,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10ddbf1e3,0xb2,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 105820fb4; end: 105821677; -[SCSnapchattersPinningMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105820fb4(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar3 == 1) {
    FUN_105820e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_105821678(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar14 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar14;
    puVar12 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar12;
    func_0x00010bf636c0();
    FUN_1050da3a4();
    _objc_release(puVar12);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2fe838);
    if (lVar7 == 0) goto LAB_1058215d0;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
    puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_1058215d0;
    uVar13 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      lVar7 = param_3;
      func_0x0001001b9e08(param_3,&UNK_10f2fe63c);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar11 == 0)) {
        lVar10 = 0;
      }
      else {
        lVar10 = (long)*(int *)((long)piVar1 + uVar11);
      }
      _sqlite3_bind_int64(lVar7,2,lVar10);
      _sqlite3_step();
      if ((int)lVar7 != 0x65) goto LAB_1058215d0;
    }
    if (((uint)puVar8 >> 8 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f2fe6a2);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar11 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)((long)piVar1 + uVar11);
      }
      _sqlite3_bind_int64(param_3,2,uVar9);
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_1058215d0;
    }
    *(undefined8 *)(param_1 + 8) = uVar13;
    func_0x00010c1eeb60(puVar6);
    puVar12 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b84c8);
    func_0x00010c21c9a0(puVar12);
LAB_1058215a8:
    _objc_release(puVar12);
    _objc_retain(puVar6);
    puVar12 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f2fe75f);
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            lVar7 = param_3;
            func_0x0001001b9e08(param_3,&UNK_10f2fe798);
            if (lVar7 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar7 != 0x65) goto LAB_105821114;
            }
            func_0x0001001b9e08(param_3,&UNK_10f2fe7e5);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_105821114;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b84c8);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar12);
            _objc_release(puVar6);
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1058215dc;
          }
        }
      }
LAB_105821114:
      puVar12 = (undefined *)0x0;
      goto LAB_1058215dc;
    }
    FUN_105820e20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_105821678(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar14 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar14;
    uVar13 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2fe87e);
    if (lVar7 != 0) {
      _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar7,2,uVar13);
      piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
      puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
      _sqlite3_bind_text(lVar7,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar7 == 0x65) {
        puVar12 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b84c8);
        puVar8 = puVar12;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        puVar12 = puVar8;
        func_0x00010bfea640();
        puVar5 = puVar6;
        func_0x00010bfea640();
        if ((int)puVar12 == (int)puVar5) {
LAB_10582147c:
          puVar12 = puVar8;
          func_0x00010c0fc6a0();
          puVar5 = puVar6;
          func_0x00010c0fc6a0();
          if ((int)puVar12 != (int)puVar5) {
            func_0x0001001b9e08(param_3,&UNK_10f2fe934);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
               (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar11 == 0)) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined4 *)((long)piVar1 + uVar11);
            }
            _sqlite3_bind_int64(param_3,1,uVar9);
            _sqlite3_bind_int64(param_3,2,uVar13);
            _sqlite3_step();
            if ((int)param_3 != 0x65) goto LAB_1058215c0;
          }
          _objc_release(puVar8);
          _objc_release(puVar6);
          puVar12 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126b84c8);
          func_0x00010c21c9a0(puVar12);
          goto LAB_1058215a8;
        }
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f2fe8ce);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar11 == 0)) {
          lVar10 = 0;
        }
        else {
          lVar10 = (long)*(int *)((long)piVar1 + uVar11);
        }
        _sqlite3_bind_int64(lVar7,1,lVar10);
        _sqlite3_bind_int64(lVar7,2,uVar13);
        _sqlite3_step();
        if ((int)lVar7 == 0x65) goto LAB_10582147c;
LAB_1058215c0:
        _objc_release(puVar8);
      }
    }
    _objc_release(puVar6);
LAB_1058215d0:
    puVar12 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_1058215dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105821678; end: 1058218a7;  */

ulong FUN_105821678(undefined8 param_1,ulong param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  pcVar4 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_105821780;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_2;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_2,pcVar5,pcVar6);
    goto LAB_105821780;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_105821740;
    uVar9 = 0;
  }
  else {
LAB_105821740:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_2,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_105821780:
  _objc_release(pcVar4);
  pcVar5 = param_3;
  func_0x00010bfea640(param_3);
  func_0x00010c122300(param_3);
  pcVar6 = param_3;
  func_0x00010c0fc6a0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(param_1,0,param_2,10);
  func_0x0001001ce354(param_2,0xc,pcVar6,0);
  func_0x000100c3b024(param_2,6,pcVar5,0);
  func_0x0001001ce2e4(param_2,4,uVar9 & 0xffffffff);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 1058218a8; end: 1058219bf; -[SCFriendingSuggestionsSeenLoggingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058218a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bee00;
  _objc_alloc(PTR_PTR_1126bee00);
  func_0x00010c043900();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272a4a4);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1058219c0; end: 1058219ff;  */

void FUN_1058219c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105821a00; end: 105821acf; -[SCFriendingSuggestionsSeenLoggingServicesEntryPoint _createSuggestionsSeenRequestSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105821a00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bee08;
  _objc_alloc(PTR_PTR_1126bee08);
  lVar2 = param_1 + _DAT_11272a498;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + _DAT_11272a49c;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108b6660);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02f600(puVar1,param_2,lVar2,lVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105821ad0; end: 105821adb;  */

void FUN_105821ad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bb598,PTR_s_sharedInstance_1126688c8);
  return;
}



/* Entry: 105821adc; end: 105821b2f; -[SCFriendingSuggestionsSeenLoggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105821adc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272a4a4,0);
  _objc_destroyWeak(param_1 + _DAT_11272a49c);
  _objc_destroyWeak(param_1 + _DAT_11272a498);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a4a0);
  return;
}



/* Entry: 105821b30; end: 105821bfb; -[SCFriendingSuggestionsSeenRequestSenderImpl initWithNetworkServices:preferences:blizzardSessionIDProvider:] */

undefined1 *
FUN_105821b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea7f0;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105821bfc; end: 105821d8b; -[SCFriendingSuggestionsSeenRequestSenderImpl sendSeenEventRequest:] */

void FUN_105821bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
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
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfed3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010befcd60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c157460(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0fdba0(param_3);
  func_0x00010901fab4();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfea900();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0b4fe0();
  uVar7 = param_3;
  func_0x00010bfeab20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0b4fe0();
  uVar9 = param_3;
  func_0x00010c247f00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c292560();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c0f1c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bea01e0(param_1,param_2,uVar1,uVar2,uVar3,uVar4,uVar6,uVar8,uVar9,uVar10,uVar11);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105821d8c; end: 10582238f; -[SCFriendingSuggestionsSeenRequestSenderImpl _sendSeenEventRequestForIndexedSuggestedSnapchatters:addedSuggestedSnapchatters:seenAddedMeSnapchatters:placementString:impressionId:impressionTimeMs:snapchatterSources:userIdToIsRecentlyActive:pageSessionId:] */

void FUN_105821d8c(long param_1,long param_2,undefined **param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined *param_8,undefined8 param_9,
                  undefined **param_10,undefined8 param_11)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  int iVar14;
  undefined **ppuVar15;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
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
  ppuVar7 = param_3;
  _objc_retain(param_3);
  lStack_148 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  ppuStack_138 = param_10;
  _objc_retain(param_10);
  _objc_retain(param_11);
  ppuVar15 = param_3;
  func_0x00010bf529e0();
  if ((ppuVar15 != (undefined **)0x0) || (lVar1 = param_5, func_0x00010bf529e0(), lVar1 != 0)) {
    puVar2 = PTR_PTR_1126bee10;
    _objc_opt_new();
    func_0x00010c161620();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1dcc20(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    param_10 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ab280(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ab420(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar4 = param_9;
    func_0x00010c2a4f20(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225640(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = param_9;
    func_0x00010c0f1ce0(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d86a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = param_9;
    func_0x00010bf97440(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196980(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c1d8620(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c262460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19b4c0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d0e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar5);
    puStack_150 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c271c60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010c0d3c80();
    _objc_release(puVar6);
    _objc_release(puVar2);
    func_0x00010c1d0640(puVar3);
    ppuVar7 = param_3;
    func_0x00010bf529e0();
    if (ppuVar7 != (undefined **)0x0) {
      uStack_170 = param_11;
      uStack_168 = param_9;
      puStack_180 = puVar3;
      lStack_178 = param_1;
      lStack_158 = param_5;
      _objc_retain(param_3);
      lStack_160 = param_6;
      _objc_retain(param_6);
      _objc_retain(ppuStack_138);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      ppuVar7 = param_3;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_140 = ppuVar7;
      func_0x00010bf52a60();
      if (ppuVar7 != (undefined **)0x0) {
        param_10 = (undefined **)*plStack_120;
        do {
          ppuVar15 = (undefined **)0x0;
          do {
            if ((undefined **)*plStack_120 != param_10) {
              _objc_enumerationMutation(ppuStack_140);
            }
            iVar14 = (int)*(undefined8 *)(lStack_128 + (long)ppuVar15 * 8);
            ppuVar8 = param_3;
            func_0x00010c0e00e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            param_2 = (long)iVar14;
            ppuVar9 = ppuVar8;
            func_0x000100bf119c(ppuVar8);
            ppuVar10 = ppuVar8;
            func_0x00010c2923e0(ppuVar8);
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuStack_138;
            func_0x00010c0e00e0(ppuStack_138);
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = ppuVar8;
            FUN_10582274c(ppuVar8,param_2,ppuVar9,ppuVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(ppuVar12);
            _objc_release(ppuVar11);
            _objc_release(ppuVar10);
            _objc_release(ppuVar8);
            ppuVar15 = (undefined **)((long)ppuVar15 + 1);
          } while (ppuVar7 != ppuVar15);
          ppuVar7 = ppuStack_140;
          func_0x00010bf52a60();
        } while (ppuVar7 != (undefined **)0x0);
      }
      _objc_release(ppuStack_140);
      puVar2 = puVar3;
      FUN_105822960(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(ppuStack_138);
      param_6 = lStack_160;
      _objc_release(lStack_160);
      _objc_release(param_3);
      puVar3 = puStack_180;
      func_0x00010c1d0640(puStack_180);
      _objc_release(puVar2);
      param_11 = uStack_170;
      param_5 = lStack_158;
      param_9 = uStack_168;
      param_1 = lStack_178;
    }
    lVar1 = lStack_148;
    lVar13 = lStack_148;
    func_0x00010bf529e0();
    if (lVar13 != 0) {
      param_2 = param_6;
      FUN_105822390(lVar1,param_6,ppuStack_138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(lVar1);
    }
    lVar1 = param_5;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      lVar1 = param_5;
      param_2 = param_6;
      FUN_105822390(param_5,param_6,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(lVar1);
    }
    param_8 = puVar3;
    func_0x00010bf51e00();
    ppuVar7 = &PTR____CFConstantStringClassReference_110e05658;
    func_0x00010bec65a0(param_1);
    _objc_release(param_8);
    _objc_release(puVar3);
    _objc_release(puStack_150);
  }
  _objc_release(param_11);
  _objc_release(ppuStack_138);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lStack_148);
  ppuVar15 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_105822390;
  ppuStack_1b0 = param_3;
  uStack_1a8 = param_11;
  puStack_1a0 = param_8;
  ppuStack_198 = param_10;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(ppuVar7);
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  uStack_1d0 = 0x105822a84;
  puStack_1c8 = &UNK_1108b6680;
  lStack_1c0 = param_2;
  ppuStack_1b8 = ppuVar7;
  _objc_retain(ppuVar7);
  _objc_retain(param_2);
  func_0x00010bd86420(ppuVar15,&puStack_1e0);
  ppuVar8 = ppuVar15;
  FUN_105822960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar15);
  _objc_release(ppuStack_1b8);
  _objc_release(lStack_1c0);
  _objc_release(ppuVar7);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 105822390; end: 10582245f;  */

void FUN_105822390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105822a84;
  puStack_48 = &UNK_1108b6680;
  uStack_40 = param_2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bd86420(param_1,&puStack_60);
  uVar1 = param_1;
  FUN_105822960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105822460; end: 1058226bf; -[SCFriendingSuggestionsSeenRequestSenderImpl _submitRequestToSuggestFriendEndpoint:parameters:] */

void FUN_105822460(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc34c0(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  uVar5 = uVar4;
  func_0x00010bf225e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4c00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c25f600(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1058226c0; end: 10582270b;  */

void FUN_1058226c0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c28fde0(param_2);
  func_0x00010c290d20(param_2);
  func_0x00010c290a40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10582270c; end: 10582270f;  */

void FUN_10582270c(void)

{
  return;
}



/* Entry: 105822710; end: 10582274b; -[SCFriendingSuggestionsSeenRequestSenderImpl .cxx_destruct] */

void FUN_105822710(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10582274c; end: 10582295f;  */

void FUN_10582274c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bee18;
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c294420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f780(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c262240(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2622e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20fb80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a400(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c190060(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a81e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0d3e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1ca5e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aefe0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1b3bc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105822960; end: 105822b37;  */

void FUN_105822960(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126bee10;
    func_0x00010c2b1e20(PTR_PTR_1126bee10,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010c20f960();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar6);
    puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    puVar6 = puVar3;
    func_0x00010c271e60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25da60(puVar2,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e056d8;
    func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110e056d8);
    puVar5 = puVar2;
    func_0x00010c08fa60(puVar2);
    puVar6 = puVar2;
    func_0x00010c260c80(puVar2,param_2,ppuVar4,puVar5 + ~(ulong)ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105822b38; end: 105822bbb; -[SCAddFriendsTakeoverActionHandler initWithSnapchattersDataMutator:] */

undefined1 * FUN_105822b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea7f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bee20;
    _objc_alloc();
    func_0x00010c049c20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105822bbc; end: 105822c93; -[SCAddFriendsTakeoverActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_105822bbc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfd0140();
  if (iVar1 == 0) {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bee28;
    _objc_opt_class(PTR_PTR_1126bee28);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    _objc_release(uVar2);
    uVar5 = 0;
    if (((uVar4 & 1) == 0) || (uVar2 == 0)) goto LAB_105822c74;
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf77280();
  }
  else {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf77260();
  }
  _objc_release(param_1);
  uVar5 = 1;
LAB_105822c74:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 105822c94; end: 105822cab; -[SCAddFriendsTakeoverActionHandler delegate] */

void FUN_105822c94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105822cac; end: 105822cb7; -[SCAddFriendsTakeoverActionHandler setDelegate:] */

void FUN_105822cac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105822cb8; end: 105822ce3; -[SCAddFriendsTakeoverActionHandler .cxx_destruct] */

void FUN_105822cb8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105822ce4; end: 105822f37; -[SCAddFriendsTakeoverViewController initWithSnapchatters:imageDownloader:takeoverPreference:quickAddLogger:actionHandler:workflowDelegate:confettiImage:featureSettings:grapheneLogger:takeoverType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105822ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
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
  puStack_68 = PTR_PTR_1126ea800;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1c8b80(puVar1);
    lVar3 = (long)_DAT_11272a4bc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272a4c0) = 0;
    lVar3 = (long)_DAT_11272a4c4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272a4c8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272a4cc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272a4d0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar3));
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272a4d4,param_8);
    lVar3 = (long)_DAT_11272a4d8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272a4dc;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272a4e0;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272a4e4) = param_12;
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
  return puVar1;
}


