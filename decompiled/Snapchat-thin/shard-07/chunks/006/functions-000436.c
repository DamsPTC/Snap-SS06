/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058054c8; end: 10580554b; +[SCCTPClientSearchTagsInverted_CTMetadata descriptor] */

undefined * FUN_1058054c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0910 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6dfa0,
                        &PTR____CFConstantStringClassReference_110e04c38,&PTR_DAT_1131027d8,
                        &PTR_DAT_113102870,1,4,0x1c);
    func_0x00010c228780();
    puRam00000001136c0910 = puVar1;
  }
  return puRam00000001136c0910;
}



/* Entry: 10580554c; end: 1058055cf; +[SCCTPClientSearchTagsInverted_CTResult descriptor] */

undefined * FUN_10580554c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0918 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6dfc8,
                        &PTR____CFConstantStringClassReference_110e04c58,&PTR_DAT_1131027d8,
                        &PTR_DAT_113102ab0,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c0918 = puVar1;
  }
  return puRam00000001136c0918;
}



/* Entry: 1058055d0; end: 105805653; +[SCCTPClientSearchTagsInverted_CTIdList descriptor] */

undefined * FUN_1058055d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0920 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6dff0,
                        &PTR____CFConstantStringClassReference_110e04d38,&PTR_DAT_1131027d8,
                        &PTR_DAT_113102890,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c0920 = puVar1;
  }
  return puRam00000001136c0920;
}



/* Entry: 105805654; end: 1058056bb; +[SCCTPQueryString descriptor] */

void FUN_105805654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0928 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6dd70,
                        &PTR____CFConstantStringClassReference_110e04d58,&PTR_DAT_1131027d8,
                        &PTR_DAT_1131028b0,1,0x10,0x1c);
    puRam00000001136c0928 = puVar1;
  }
  return;
}



/* Entry: 1058056bc; end: 105805723; +[SCCTPSearchTagsByStickerId descriptor] */

void FUN_1058056bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0930 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6e018,
                        &PTR____CFConstantStringClassReference_110e04d78,&PTR_DAT_1131027d8,
                        &PTR_DAT_1131028d0,1,0x10,0x1c);
    puRam00000001136c0930 = puVar1;
  }
  return;
}



/* Entry: 105805724; end: 1058057a7; +[SCCTPSearchTagsByStickerId_StickerInfo descriptor] */

undefined * FUN_105805724(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0938 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6e040,
                        &PTR____CFConstantStringClassReference_110e04d98,&PTR_DAT_1131027d8,
                        &PTR_DAT_113102af0,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c0938 = puVar1;
  }
  return puRam00000001136c0938;
}



/* Entry: 1058057a8; end: 1058057e7;  */

void FUN_1058057a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_1 != 0) {
    _objc_alloc_init(PTR_PTR_1126beb68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058057e8; end: 105805897;  */

void FUN_1058057e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126beb70;
    _objc_alloc(PTR_PTR_1126beb70);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    FUN_105805898();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c153660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02f4e0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105805898; end: 1058058bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105805898(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272a14c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058058bc; end: 105805a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058058bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126beb78;
    _objc_alloc(PTR_PTR_1126beb78);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar1 + _DAT_11272a144;
      _objc_loadWeakRetained(lVar7);
    }
    lVar2 = lVar7;
    func_0x00010bf1a840(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    FUN_105805a34();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = param_1 + _DAT_11272a158;
      _objc_loadWeakRetained(lVar9);
    }
    lVar6 = lVar9;
    func_0x00010c09f2a0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a8a0(puVar8,param_2,lVar2,lVar5,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar9);
    _objc_release(param_1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar7);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105805a34; end: 105805a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105805a34(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272a148);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105805a58; end: 105805b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105805a58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  puVar1 = (undefined *)0x0;
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126beb80;
    _objc_alloc(PTR_PTR_1126beb80);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_1 + _DAT_11272a140;
      _objc_loadWeakRetained(lVar3);
    }
    lVar2 = lVar3;
    func_0x00010c293fc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0271a0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105805b0c; end: 105805cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105805b0c(long param_1,undefined8 param_2)

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
  undefined *puVar12;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126beb88;
    _objc_alloc(PTR_PTR_1126beb88);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    FUN_105805898();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb48a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    FUN_105805cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c1541c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    FUN_105805a34();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = param_1 + _DAT_11272a154;
      _objc_loadWeakRetained(lVar11);
    }
    lVar10 = lVar11;
    func_0x00010bf398e0(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02f200(puVar12,param_2,lVar3,lVar6,lVar9,lVar10);
    _objc_release(lVar10);
    _objc_release(lVar11);
    _objc_release(param_1);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105805cc0; end: 105805ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105805cc0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272a150);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105805ce4; end: 105805de3;  */

void FUN_105805ce4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126beb90;
    _objc_alloc(PTR_PTR_1126beb90);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    FUN_105805cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1541c0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    FUN_105805a34();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c042ae0(puVar6,param_2,lVar3,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105805de4; end: 105805e73; -[CTPSearchServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105805de4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272a15c,0);
  _objc_destroyWeak(param_1 + _DAT_11272a158);
  _objc_destroyWeak(param_1 + _DAT_11272a154);
  _objc_destroyWeak(param_1 + _DAT_11272a150);
  _objc_destroyWeak(param_1 + _DAT_11272a14c);
  _objc_destroyWeak(param_1 + _DAT_11272a148);
  _objc_destroyWeak(param_1 + _DAT_11272a144);
  _objc_destroyWeak(param_1 + _DAT_11272a140);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a13c);
  return;
}



/* Entry: 105805e74; end: 105805f17; -[CTPSearchLoggerDefault initWithSession:logger:] */

undefined1 *
FUN_105805e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea6c8;
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



/* Entry: 105805f18; end: 105806017; -[CTPSearchLoggerDefault logSearchRankingQueryFromCache:queryEntityId:] */

void FUN_105805f18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0aee20(param_1,param_2,param_3,param_4);
  puVar1 = PTR_PTR_1126beba0;
  _objc_alloc(PTR_PTR_1126beba0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11d4a0(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051580(puVar1,param_2,param_3,uVar2,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aee80(param_1,param_2,1,puVar1,puVar3,param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  func_0x00010bfec720(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105806018; end: 10580601f; -[CTPSearchLoggerDefault logSearchRankingQuery:] */

void FUN_105806018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0aee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logSearchRankingQuery_queryEntit_112609598,param_3,0);
  return;
}



/* Entry: 105806020; end: 10580623b; -[CTPSearchLoggerDefault logSearchRankingQuery:queryEntityId:] */

void FUN_105806020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be45520(param_1,param_2,param_3);
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126beba8;
    _objc_alloc_init(PTR_PTR_1126beba8);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c262c20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20fdc0(puVar2,param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c15ffa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8a40(puVar2,param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11d4a0(uVar3);
    func_0x00010c1f8700(puVar2,param_2,uVar3);
    func_0x00010c1f86e0(puVar2,param_2,param_4);
    func_0x00010c1f87a0(puVar2,param_2,1);
    lVar1 = param_1;
    func_0x00010be988a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8780(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010be98340(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ef080(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bee6de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e9e0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    func_0x00010c1e6420(puVar2,param_2,0);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf45e20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0ed1a0();
    lVar1 = param_1;
    func_0x00010bebe700(param_1,param_2,uVar3);
    func_0x00010c206c40(puVar2,param_2,lVar1);
    _objc_release(uVar4);
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c0ed1a0();
    _objc_release(lVar5);
    if (lVar1 - 1U < 3) {
      func_0x00010c1f86c0(puVar2,param_2,*(undefined8 *)(&UNK_10ddbee28 + (lVar1 - 1U) * 8));
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10580623c; end: 105806403; -[CTPSearchLoggerDefault logSearchRankingResultsFromCache:query:endTime:queryEntityId:] */

void FUN_10580623c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar2 = param_5;
  func_0x00010c250f20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(param_6,param_3,uVar2);
  _objc_release(param_6);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126bebb0;
  _objc_alloc_init(PTR_PTR_1126bebb0);
  func_0x00010c1be9a0();
  uVar2 = param_5;
  func_0x00010c11d4a0(param_5);
  func_0x00010c1f8700(puVar1,param_3,uVar2);
  uVar2 = param_5;
  func_0x00010c26b700(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c1f8780(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010c1f86e0(puVar1,param_3,param_7);
  _objc_release(param_7);
  func_0x00010c1f8940(param_1 / 1000.0,puVar1);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c15ffa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8a40(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf45e20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0ed1a0();
  lVar4 = param_2;
  func_0x00010bebe700(param_2,param_3,uVar2);
  func_0x00010c206c40(puVar1,param_3,lVar4);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c262c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20fdc0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105806404; end: 10580665b; -[CTPSearchLoggerDefault logSearchRankingActionAtScreenLocation:section:sectionIndex:resultId:itemIndex:] */

void FUN_105806404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be959a0(param_1,param_2,param_3);
  puVar2 = PTR_PTR_1126bebb8;
  _objc_alloc_init(PTR_PTR_1126bebb8);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c262c20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20fdc0(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15ffa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8a40(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11d4a0(uVar3);
  func_0x00010c1f8700(puVar2,param_2,uVar3);
  func_0x00010c1f88a0(puVar2,param_2,param_4);
  func_0x00010c1f8880(puVar2,param_2,lVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8840(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e04dd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c1f8800(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c161620(puVar2,param_2,0);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e04df8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161d00(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c1a2e40(puVar2,param_2,5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf45e20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0ed1a0();
  lVar1 = param_1;
  func_0x00010bebe700(param_1,param_2,uVar3);
  func_0x00010c206c40(puVar2,param_2,lVar1);
  _objc_release(uVar5);
  lVar6 = *(long *)(param_1 + 8);
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c0ed1a0();
  _objc_release(lVar6);
  if (lVar1 == 1) {
    func_0x00010c182d40(puVar2,param_2,3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10580665c; end: 1058067f7; -[CTPSearchLoggerDefault logSearchRankingResultOnScreenForSection:resultId:itemIndex:initialLoad:] */

void FUN_10580665c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be959a0(param_1,param_2,param_3);
  puVar2 = PTR_PTR_1126bebc0;
  _objc_opt_new(PTR_PTR_1126bebc0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c262c20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20fdc0(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15ffa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8a40(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11d4a0(uVar3);
  func_0x00010c1f8700(puVar2,param_2,uVar3);
  func_0x00010c1f8880(puVar2,param_2,lVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8840(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e04dd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1f8800(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c1f88e0(puVar2,param_2,param_6 ^ 1);
  func_0x00010c206c40(puVar2,param_2,0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1058067f8; end: 105806817; -[CTPSearchLoggerDefault _isValidSearchQuery:] */

bool FUN_1058067f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c08fa60(param_3);
  return param_3 != 0;
}



/* Entry: 105806818; end: 10580689b; -[CTPSearchLoggerDefault _sanitizeSearchTerm:] */

void FUN_105806818(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (uVar1 = param_3, func_0x00010c08fa60(), uVar1 < 2)) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c08fa60();
    uVar2 = param_3;
    if (uVar1 < 100) {
      _objc_retain(param_3);
    }
    else {
      func_0x00010c260c20(param_3,param_2,100);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10580689c; end: 10580695f; -[CTPSearchLoggerDefault _s2CellId] */

void FUN_10580689c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b6598;
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bf51c80(lVar2);
    func_0x00010bf33ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc6400();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e04e18);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105806960; end: 1058069cf; -[CTPSearchLoggerDefault _userLanguagePrefencesString] */

void FUN_105806960(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf45e20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c087fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1058069d0; end: 1058069f3; -[CTPSearchLoggerDefault _resultSectionFromSection:] */

undefined8 FUN_1058069d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xb) {
    return *(undefined8 *)(&UNK_10ddbee40 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 1058069f4; end: 105806a03; -[CTPSearchLoggerDefault _sourceTypeFromOrigin:] */

undefined8 FUN_1058069f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x50;
  if (param_3 != 1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 105806a04; end: 105806a33; -[CTPSearchLoggerDefault .cxx_destruct] */

void FUN_105806a04(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105806a34; end: 105806aa7; -[CTPSearchLoggerFactoryDefault initWithLogger:] */

undefined1 * FUN_105806a34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea6d0;
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



/* Entry: 105806aa8; end: 105806b03; -[CTPSearchLoggerFactoryDefault loggerWithSession:] */

void FUN_105806aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bebc8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c044fa0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105806b04; end: 105806b0f; -[CTPSearchLoggerFactoryDefault .cxx_destruct] */

void FUN_105806b04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105806b10; end: 105806c03; -[CTPSearchPersistenceImplementation initWithSearchSectionPersistenceService:bitmojiAvatarProvider:] */

undefined1 *
FUN_105806b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea6d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105806c04; end: 105806d23; -[CTPSearchPersistenceImplementation addPersistedSearchTerms:] */

long FUN_105806c04(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
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
  
  puVar2 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar3 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar1 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0b5ac0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar4,param_2,uVar1);
        _objc_release(uVar1);
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = param_3;
      puVar2 = &uStack_120;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(param_3 + 8);
  func_0x00010c0b5ac0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(lVar3,param_2,puVar2);
  _objc_release(puVar2);
  return lVar3;
}



/* Entry: 105806d24; end: 105806d6f; -[CTPSearchPersistenceImplementation shouldChatSearchTermPersist:] */

undefined8 FUN_105806d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1,param_2,param_3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105806d70; end: 105806e2b; -[CTPSearchPersistenceImplementation cacheChatSearchSectionResults:forSearchTerm:userHasCameo:] */

void FUN_105806d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c22e8c0(param_1,param_2,param_4);
  if ((int)uVar1 != 0) {
    lStack_48 = 0;
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,&lStack_48);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_48 == 0) {
      func_0x00010be73080(param_1,param_2,puVar2,param_4,param_5);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105806e2c; end: 105806fa3; -[CTPSearchPersistenceImplementation fetchPersistedSearchSectionForTerm:userHasCameo:] */

void FUN_105806e2c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c22e8c0();
  if ((int)lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0b5ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c154180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(puVar5);
    uStack_60 = param_4;
    func_0x00010c297260(uVar4);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105806fa4; end: 105807143;  */

void FUN_105806fa4(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_80;
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105807144;
    puStack_68 = &UNK_110841f80;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uStack_60 = uVar7;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retainBlock();
    if ((param_2 == 0) || (uVar3 = uVar1, func_0x00010be3e8c0(), (uVar3 & 1) == 0)) {
      (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
    }
    else {
      lVar4 = param_2;
      func_0x00010bf63640(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bed0e40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if ((uVar3 == 0) || (uVar5 = uVar3, func_0x00010bf529e0(), uVar5 == 0)) {
        (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        puVar6 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar7);
        _objc_release(puVar6);
      }
      _objc_release(uVar3);
    }
    _objc_release(ppuVar2);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105807144; end: 10580718b;  */

void FUN_105807144(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10580718c; end: 1058072af; -[CTPSearchPersistenceImplementation _persistChatSearchSectionData:forSearchTerm:userHasCameo:] */

void FUN_10580718c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bad40;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar5 = param_5;
  func_0x00010c0b5ac0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfd46e0();
  func_0x00010c042da0(puVar1,param_3,2,uVar5,(long)param_1,uVar4,param_6,param_4);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28f1e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058072b0; end: 10580738b; -[CTPSearchPersistenceImplementation _unarchiveSectionResultsData:] */

void FUN_1058072b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar2 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar2);
    puVar4 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10580738c; end: 105807417; -[CTPSearchPersistenceImplementation _isCachedSearchSectionValid:userHasCameo:] */

undefined * FUN_10580738c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126bebd0;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfd46e0();
  func_0x00010c07d520(puVar2,param_2,param_3,4,&PTR____CFConstantStringClassReference_110e04e38,
                      uVar1,param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  return puVar2;
}



/* Entry: 105807418; end: 10580745f; -[CTPSearchPersistenceImplementation .cxx_destruct] */

void FUN_105807418(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105807460; end: 1058075ff; +[SCStickerSearchPersistenceValidator isSearchSectionValid:cacheDuration:cacheVariant:hasBitmoji:hasCameo:] */

undefined *
FUN_105807460(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
             int param_6,uint param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bfd4a60();
  uVar2 = param_3;
  func_0x00010bfd5000();
  puVar6 = (undefined *)0x0;
  if ((param_6 != (int)uVar1) || (((param_7 ^ (uint)uVar2) & 1) != 0)) goto LAB_105807584;
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar1 = param_3;
  func_0x00010c08a800(param_3);
  func_0x00010c052380((double)uVar1,puVar3);
  uVar4 = param_5;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  if ((int)uVar5 == 0) {
    uVar4 = param_5;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      param_4 = param_4 * 0x3c;
      goto LAB_105807574;
    }
    uVar4 = param_5;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((int)uVar5 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR_PTR_1126bebd0;
      func_0x00010be438a0(PTR_PTR_1126bebd0,param_2,puVar3,param_4);
    }
  }
  else {
LAB_105807574:
    puVar6 = PTR_PTR_1126bebd0;
    func_0x00010be438c0(PTR_PTR_1126bebd0,param_2,puVar3,param_4);
  }
  _objc_release(puVar3);
LAB_105807584:
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105807600; end: 10580767b; +[SCStickerSearchPersistenceValidator _isSearchSectionValidMinuteComparisonWithLastUpdatedDate:cacheDuration:] */

bool FUN_105807600(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c26f380();
  _objc_release(param_4);
  _objc_release(puVar1);
  return param_1 < (double)(ulong)(param_5 * 0x3c);
}



/* Entry: 10580767c; end: 10580776b; +[SCStickerSearchPersistenceValidator _isSearchSectionValidDailyComparisonWithLastUpdatedDate:duration:] */

bool FUN_10580767c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_4);
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar3 = puVar1;
  func_0x00010bf64ea0(puVar1,param_3,param_5 / 100,param_5 % 100,0,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c26f380(param_4,param_3,puVar3);
  _objc_release(param_4);
  _objc_release(puVar3);
  return 0.0 < param_1;
}



/* Entry: 10580776c; end: 1058079f7; -[CTPSearchEngineDefault initWithSession:inputProvider:taskScheduler:inputProcessor:strategy:outputProcessor:] */

undefined8 *
FUN_10580776c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ea6e0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
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
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_alloc_init();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    func_0x00010c1e62c0(puVar1[7]);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puVar4 = puVar1;
    func_0x00010bdf2e40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    puVar6 = puVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010bddcb60(puVar1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1058079f8; end: 105807a3f;  */

void FUN_1058079f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2fb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105807a40; end: 105807b23; -[CTPSearchEngineDefault _createSearchLogic:] */

void FUN_105807a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bfc6600(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010be9b6a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010be234c0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be81540(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be9ca20(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be821e0(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105807b24; end: 105807bcb; -[CTPSearchEngineDefault _handleSearchLogicResult:] */

void FUN_105807b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c13cf20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105807bcc;
  puStack_48 = &UNK_110860d58;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0c0800(uVar1,param_2,&puStack_60,0);
  _objc_release(uVar1);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105807bcc; end: 105807cbb;  */

void FUN_105807bcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c11d080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf66180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddcb60(uVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11d080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf66180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddcb60(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105807cbc; end: 105807d03; -[CTPSearchEngineDefault stopSearch] */

void FUN_105807cbc(long param_1,undefined8 param_2)

{
  func_0x00010bea4d00(param_1,param_2,1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bddcb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__changeStateTo_text_query_result_112554c78,8,0,0,0,0,0);
  return;
}



/* Entry: 105807d04; end: 105807d43; -[CTPSearchEngineDefault _isCancelled] */

undefined1 FUN_105807d04(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105807d44; end: 105807d7f; -[CTPSearchEngineDefault _setIsCancelled:] */

void FUN_105807d44(long param_1,undefined8 param_2,undefined1 param_3)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  *(undefined1 *)(param_1 + 8) = param_3;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105807d80; end: 105807f67; -[CTPSearchEngineDefault _scheduleSearchTask:] */

void FUN_105807d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_1;
  func_0x00010c26a900(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c150200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0e1440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e0e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105807f68;
  puStack_78 = &UNK_1108a9e40;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar1;
  func_0x00010bfad7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c265720();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar5 = uVar4;
  func_0x00010bf87460(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105807f68; end: 105807fcb;  */

uint FUN_105807f68(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010be3eae0();
    uVar3 = (uint)lVar2 ^ 1;
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 105807fcc; end: 10580800f;  */

void FUN_105807fcc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddcb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105808010; end: 105808197; -[CTPSearchEngineDefault _getTextFromProvider:] */

void FUN_105808010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  func_0x00010c0e1440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e0e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105808198;
  puStack_68 = &UNK_1108a9e40;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = uVar1;
  func_0x00010bfad7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar3 = uVar2;
  func_0x00010bf87460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105808198; end: 1058081fb;  */

uint FUN_105808198(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010be3eae0();
    uVar3 = (uint)lVar2 ^ 1;
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 1058081fc; end: 105808257;  */

void FUN_1058081fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddcb60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105808258; end: 10580843f; -[CTPSearchEngineDefault _processInputString:] */

void FUN_105808258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_1;
  func_0x00010c065e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c114d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0e1440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e0e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105808440;
  puStack_78 = &UNK_1108a9e40;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar1;
  func_0x00010bfad7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c265720();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar5 = uVar4;
  func_0x00010bf87460(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105808440; end: 105808563;  */

bool FUN_105808440(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010be3eae0();
    if ((uVar4 & 1) == 0) {
      lVar5 = param_2;
      func_0x00010c08fa60(param_2);
      bVar1 = lVar5 != 0;
    }
    else {
      bVar1 = false;
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 105808564; end: 1058087d7; -[CTPSearchEngineDefault _searchWithProcessedInput:] */

void FUN_105808564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1058087d8;
  puStack_88 = &UNK_1108b5838;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar2 = param_3;
  func_0x00010bf43280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c25bde0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c1549a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c0e1440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c0e0e60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1058088a4;
  puStack_b0 = &UNK_1108b5868;
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar4 = uVar3;
  func_0x00010bfad7a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c265720();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_78);
  uVar7 = uVar6;
  func_0x00010bf87460(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_d0);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1058087d8; end: 1058088a3;  */

void FUN_1058087d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126beba0;
    _objc_alloc(PTR_PTR_1126beba0);
    lVar2 = param_1;
    func_0x00010c15fac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11d4a0();
    func_0x00010c051580(puVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058088a4; end: 105808a37;  */

uint FUN_1058088a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar1 = param_2;
  puStack_58 = &uStack_60;
  func_0x00010c13cf20(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105808a38;
  puStack_70 = &UNK_110850558;
  puStack_68 = &uStack_60;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0c0800(uVar1);
  _objc_release(uVar1);
  if (*(char *)(puStack_58 + 3) == '\x01') {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      lVar3 = param_1;
      func_0x00010be3eae0();
      uVar4 = (uint)lVar3 ^ 1;
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_2);
  _objc_destroyWeak(auStack_90);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 105808a38; end: 105808a4b;  */

void FUN_105808a38(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105808a4c; end: 105808aeb;  */

void FUN_105808a4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11d080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf66180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddcb60(lVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105808aec; end: 105808bc3;  */

void FUN_105808aec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c13cf20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0c0800(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105808bc4; end: 105808c63;  */

void FUN_105808bc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11d080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf66180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddcb60(lVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105808c64; end: 105808e4b; -[CTPSearchEngineDefault _processSearchResult:] */

void FUN_105808c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_1;
  func_0x00010c0ef000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c115000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0e1440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e0e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105808e4c;
  puStack_78 = &UNK_1108b5868;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar1;
  func_0x00010bfad7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c265720();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar5 = uVar4;
  func_0x00010bf87460(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105808e4c; end: 105808eaf;  */

uint FUN_105808e4c(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010be3eae0();
    uVar3 = (uint)lVar2 ^ 1;
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 105808eb0; end: 105808f87;  */

void FUN_105808eb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c13cf20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0c0800(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105808f88; end: 105809027;  */

void FUN_105808f88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11d080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf66180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddcb60(lVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105809028; end: 105809103; -[CTPSearchEngineDefault _changeStateTo:text:query:results:error:debugHTML:] */

void FUN_105809028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bebd8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c04bfc0();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105809104; end: 10580910b; -[CTPSearchEngineDefault session] */

undefined8 FUN_105809104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10580910c; end: 10580913b; -[CTPSearchEngineDefault setSession:] */

void FUN_10580910c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10580913c; end: 105809143; -[CTPSearchEngineDefault taskScheduler] */

undefined8 FUN_10580913c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105809144; end: 105809173; -[CTPSearchEngineDefault setTaskScheduler:] */

void FUN_105809144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105809174; end: 10580917b; -[CTPSearchEngineDefault inputProcessor] */

undefined8 FUN_105809174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10580917c; end: 1058091ab; -[CTPSearchEngineDefault setInputProcessor:] */

void FUN_10580917c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058091ac; end: 1058091b3; -[CTPSearchEngineDefault strategy] */

undefined8 FUN_1058091ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1058091b4; end: 1058091e3; -[CTPSearchEngineDefault setStrategy:] */

void FUN_1058091b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058091e4; end: 1058091eb; -[CTPSearchEngineDefault outputProcessor] */

undefined8 FUN_1058091e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1058091ec; end: 10580921b; -[CTPSearchEngineDefault setOutputProcessor:] */

void FUN_1058091ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10580921c; end: 105809223; -[CTPSearchEngineDefault observingQueue] */

undefined8 FUN_10580921c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105809224; end: 105809253; -[CTPSearchEngineDefault setObservingQueue:] */

void FUN_105809224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105809254; end: 10580925b; -[CTPSearchEngineDefault stateObservable] */

undefined8 FUN_105809254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10580925c; end: 10580928b; -[CTPSearchEngineDefault setStateObservable:] */

void FUN_10580925c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10580928c; end: 105809293; -[CTPSearchEngineDefault disposable] */

undefined8 FUN_10580928c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105809294; end: 1058092c3; -[CTPSearchEngineDefault setDisposable:] */

void FUN_105809294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058092c4; end: 10580933b; -[CTPSearchEngineDefault .cxx_destruct] */

void FUN_1058092c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10580933c; end: 10580945b; -[CTPSearchEngineDefaultFactory createSearchEngineWithConfig:] */

void FUN_10580933c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15fac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c065e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26a900(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c065e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c25bde0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0ef000(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf58aa0(param_1,param_2,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10580945c; end: 105809537; -[CTPSearchEngineDefaultFactory createSearchEngineWithSession:inputProvider:taskScheduler:inputProcessor:strategy:outputProcessor:] */

void FUN_10580945c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bebe0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c044f80();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105809538; end: 105809667; -[CTPSearchForYouImplementation initWithNetworkForYouClient:searchSectionPersistenceService:bitmojiAvatarProvider:circumstanceEngine:] */

undefined1 *
FUN_105809538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea6e8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105809668; end: 10580978f; -[CTPSearchForYouImplementation previewStickerSearchPreTypeWithHasCameo:] */

void FUN_105809668(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c154180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  _objc_retain(puVar1);
  func_0x00010c297260(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105809790; end: 1058098d7;  */

void FUN_105809790(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be43880();
    lVar3 = lVar1;
    if ((int)lVar2 == 0) {
      func_0x00010be91960();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = *(undefined **)(param_1 + 0x20);
      _objc_retain(puVar5);
      lVar2 = lVar3;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar1 + 0x30);
      *(long *)(lVar1 + 0x30) = lVar2;
      _objc_release(uVar4);
    }
    else {
      func_0x00010be9c680(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puVar5 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
    }
    _objc_release(puVar5);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1058098d8; end: 1058098e3;  */

void FUN_1058098d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 1058098e4; end: 1058099cf; -[CTPSearchForYouImplementation _isSearchSectionValid:userHasCameo:] */

undefined * FUN_1058098e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(param_3);
    func_0x00010c067f00(uVar5,param_2,&PTR____CFConstantStringClassReference_110e04eb8,300,0);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110e04ed8,
                        &PTR____CFConstantStringClassReference_110e04e98,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bebd0;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd46e0();
    func_0x00010c07d520(puVar4,param_2,param_3,(long)(int)uVar5,uVar1,uVar3,param_4);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    return puVar4;
  }
  return (undefined *)0x0;
}



/* Entry: 1058099d0; end: 105809b03; -[CTPSearchForYouImplementation _requestStickerSearchForYouSectionWithHasCameo:] */

void FUN_1058099d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c111dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  _objc_retain(puVar1);
  uVar2 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


