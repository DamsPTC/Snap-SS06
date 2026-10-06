/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ca5a24; end: 108ca5ab7;  */

void FUN_108ca5a24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282340();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c282320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 != 0) goto LAB_108ca5aa4;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
LAB_108ca5aa4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108ca5ab8; end: 108ca5ae7;  */

void FUN_108ca5ab8(void)

{
  _objc_alloc(PTR_PTR_1126db868);
  func_0x00010c023720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ca5ae8; end: 108ca5b77;  */

void FUN_108ca5ae8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_PTR_1126db870;
  _objc_alloc(PTR_PTR_1126db870);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf34a60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023b80(puVar4,param_2,uVar1,uVar3,uVar2,uVar5,*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108ca5b78; end: 108ca5bfb;  */

void FUN_108ca5b78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126db878;
  _objc_alloc(PTR_PTR_1126db878);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025120(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ca5bfc; end: 108ca5c8f; -[SCLensProcessingLensModeEntryPoint _cameraModeWithLensModeFactory:configuration:] */

void FUN_108ca5bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108ca5c90;
  puStack_30 = &UNK_110ac11d8;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010bfb2660(param_3,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108ca5c90; end: 108ca5d3f;  */

void FUN_108ca5c90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf29f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf29ea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0955c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108ca5d40; end: 108ca5efb;  */

void FUN_108ca5d40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_108ca5efc;
  puStack_78 = &UNK_11084f340;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar8;
  _objc_retain(uVar9);
  uStack_68 = uVar9;
  func_0x00010bf54280(puVar1,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db888;
  _objc_alloc(PTR_PTR_1126db888);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf29ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf29f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b660(puVar2,param_2,uVar8,uVar9,puVar1,uVar5,uVar6,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ca5efc; end: 108ca6057;  */

void FUN_108ca5efc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c15f780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0cae20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108ca6058; end: 108ca61d7;  */

void FUN_108ca6058(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bef0bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c105c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010bf09f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = uVar2;
  func_0x00010bfb2040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ca61d8; end: 108ca620b;  */

void FUN_108ca61d8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ca620c; end: 108ca634b; -[SCLensProcessingLensModeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ca620c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112779a8c,0);
  _objc_destroyWeak(param_1 + _DAT_112779a88);
  _objc_destroyWeak(param_1 + _DAT_112779a84);
  _objc_destroyWeak(param_1 + _DAT_112779a80);
  _objc_destroyWeak(param_1 + _DAT_112779a54);
  _objc_destroyWeak(param_1 + _DAT_112779a4c);
  _objc_destroyWeak(param_1 + _DAT_112779a7c);
  _objc_destroyWeak(param_1 + _DAT_112779a6c);
  _objc_destroyWeak(param_1 + _DAT_112779a50);
  _objc_destroyWeak(param_1 + _DAT_112779a78);
  _objc_destroyWeak(param_1 + _DAT_112779a74);
  _objc_destroyWeak(param_1 + _DAT_112779a40);
  _objc_destroyWeak(param_1 + _DAT_112779a70);
  _objc_storeStrong(param_1 + _DAT_112779a68,0);
  _objc_storeStrong(param_1 + _DAT_112779a60,0);
  _objc_storeStrong(param_1 + _DAT_112779a64,0);
  _objc_storeStrong(param_1 + _DAT_112779a5c,0);
  _objc_storeStrong(param_1 + _DAT_112779a58,0);
  _objc_storeStrong(param_1 + _DAT_112779a3c,0);
  _objc_storeStrong(param_1 + _DAT_112779a48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779a44,0);
  return;
}



/* Entry: 108ca634c; end: 108ca651f; -[SCLensModeFactoryImpl initWithLensEffectFetcher:lensProcessingLensModeAggregator:scheduleServiceProvider:centralizedLensMetadataStoreProvider:bundledLensProvider:lensDataConfigProvider:performer:] */

undefined1 *
FUN_108ca634c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  puStack_68 = PTR_PTR_1126fe0c8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c13e3e0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
      func_0x00010bfb2660();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
      *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ca6520; end: 108ca6593;  */

void FUN_108ca6520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c8c48;
  _objc_retain(param_2);
  func_0x00010bf29fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf34a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ca6594; end: 108ca6923; -[SCLensModeFactoryImpl lensModeWithLensId:identifier:] */

void FUN_108ca6594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x108ca672c;
  puStack_90 = &UNK_110ac12c8;
  uStack_88 = uVar6;
  uStack_80 = param_3;
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  uStack_68 = param_4;
  uStack_60 = uVar2;
  uStack_58 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(param_4);
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  _objc_retain(uVar6);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ca6924; end: 108ca69e7; -[SCLensModeFactoryImpl lensModeWithMode:identifier:] */

void FUN_108ca6924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108ca69e8;
  puStack_48 = &UNK_110ac12f8;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ca69e8; end: 108ca6a17;  */

void FUN_108ca69e8(void)

{
  _objc_alloc(PTR_PTR_1126db888);
  func_0x00010c01b760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ca6a18; end: 108ca6d47; -[SCLensModeFactoryImpl lensModeWithUcoBundledCode:identifier:] */

void FUN_108ca6a18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x108ca6b88;
  puStack_88 = &UNK_110ac1328;
  uStack_80 = uVar4;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = uVar2;
  uStack_60 = uVar3;
  uStack_58 = uVar5;
  _objc_retain(uVar5);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ca6d48; end: 108ca6dbf; -[SCLensModeFactoryImpl .cxx_destruct] */

void FUN_108ca6d48(long param_1)

{
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



/* Entry: 108ca6dc0; end: 108ca6e8f;  */

void FUN_108ca6dc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ca6e90; end: 108ca6f83;  */

void FUN_108ca6e90(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar2 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    func_0x00010c0c0760(param_2);
    _objc_release(uVar1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108ca6f84; end: 108ca700f;  */

void FUN_108ca6f84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ca7010; end: 108ca71ff;  */

undefined ** FUN_108ca7010(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef0b18;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef0af8;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuVar9 = (undefined ***)ppuVar1;
      _objc_retain(ppuVar1);
      puStack_130 = PTR_PTR_1126fe0d0;
      ppuVar8 = &puStack_138;
      puStack_138 = puVar2;
      _objc_msgSendSuper2(ppuVar8,PTR_s_init_1125d9248);
      if (ppuVar8 != (undefined **)0x0) {
        _objc_retain(ppuVar1);
        puVar2 = ppuVar8[1];
        ppuVar8[1] = (undefined *)ppuVar1;
        _objc_release(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        puVar11 = ppuVar8[3];
        ppuVar8[3] = puVar2;
        _objc_release(puVar11);
        *(undefined4 *)(ppuVar8 + 4) = 0;
        ppuStack_128 = &PTR____CFConstantStringClassReference_110f27538;
        ppuVar3 = ppuVar8;
        func_0x00010be4b6c0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_120 = &PTR____CFConstantStringClassReference_110f27518;
        ppuVar4 = ppuVar8;
        ppuStack_108 = ppuVar3;
        func_0x00010be4b6c0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_118 = &PTR____CFConstantStringClassReference_110f27558;
        ppuVar5 = ppuVar8;
        ppuStack_100 = ppuVar4;
        func_0x00010be4b6c0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_110 = &PTR____CFConstantStringClassReference_110f27618;
        ppuVar6 = ppuVar8;
        ppuStack_f8 = ppuVar5;
        func_0x00010be4b6c0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar9 = &ppuStack_108;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuStack_f0 = ppuVar6;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = ppuVar8[2];
        ppuVar8[2] = puVar2;
        _objc_release(puVar11);
        _objc_release(ppuVar6);
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
        return ppuVar8;
      }
      ___stack_chk_fail();
      _objc_retain(pppuVar9);
      pppuVar7 = pppuVar9;
      func_0x00010c08fa60();
      if (pppuVar7 == (undefined ***)0x0) {
        ppuVar8 = (undefined **)0x0;
      }
      else {
        ppuVar8 = (undefined **)ppuVar1[2];
        func_0x00010c0e00e0(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(pppuVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return ppuVar8;
}



/* Entry: 108ca7200; end: 108ca73ef; -[SCLensProcessingLensModeProvider initWithLensModeFactory:studySettingsProvider:] */

undefined8 * FUN_108ca7200(undefined8 param_1,undefined8 param_2,undefined8 **param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_3;
  _objc_retain(param_3);
  puStack_90 = PTR_PTR_1126fe0d0;
  puVar8 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
  if (puVar8 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar1 = puVar8[1];
    puVar8[1] = param_3;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar1 = puVar8[3];
    puVar8[3] = puVar2;
    _objc_release(uVar1);
    *(undefined4 *)(puVar8 + 4) = 0;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f27538;
    puVar3 = puVar8;
    func_0x00010be4b6c0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_80 = &PTR____CFConstantStringClassReference_110f27518;
    puVar4 = puVar8;
    puStack_68 = puVar3;
    func_0x00010be4b6c0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f27558;
    puVar5 = puVar8;
    puStack_60 = puVar4;
    func_0x00010be4b6c0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110f27618;
    puVar6 = puVar8;
    puStack_58 = puVar5;
    func_0x00010be4b6c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &puStack_68;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar6;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = puVar8[2];
    puVar8[2] = puVar2;
    _objc_release(uVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  ppuVar7 = ppuVar9;
  func_0x00010c08fa60();
  if (ppuVar7 == (undefined8 **)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = param_3[2];
    func_0x00010c0e00e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 108ca73f0; end: 108ca744f; -[SCLensProcessingLensModeProvider bundledLensModeForFilterName:] */

void FUN_108ca73f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ca7450; end: 108ca7553; -[SCLensProcessingLensModeProvider lensModeForEffectId:] */

void FUN_108ca7450(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      lVar3 = *(long *)(param_1 + 8);
      puVar2 = PTR_PTR_1126b9b28;
      func_0x00010bf69ca0(PTR_PTR_1126b9b28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0955c0(lVar3,param_2,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4,param_2,lVar3,param_3);
      _objc_release(puVar2);
    }
    else {
      _objc_retain(lVar1);
      lVar3 = lVar1;
    }
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108ca7554; end: 108ca76ff; -[SCLensProcessingLensModeProvider lensModeForEffectId:modeIdentifier:] */

void FUN_108ca7554(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_3;
  func_0x00010c08fa60();
  if ((lVar4 == 0) || (lVar4 = param_4, func_0x00010c08fa60(), lVar4 == 0)) {
    lVar4 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 == 0) || (lVar4 = lVar1, func_0x00010c06f880(), (int)lVar4 == 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      lVar4 = *(long *)(param_1 + 8);
      func_0x00010c0955c0(lVar4,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5,param_2,lVar4,param_3);
    }
    else {
      lVar4 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0720c0();
      _objc_release(lVar2);
      _objc_release(lVar4);
      if ((int)lVar3 == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        lVar4 = *(long *)(param_1 + 8);
        lVar2 = lVar1;
        func_0x00010c269d40(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0955e0(lVar4,param_2,lVar2,param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar5,param_2,lVar4,param_3);
        _objc_release(lVar2);
      }
      else {
        _objc_retain(lVar1);
        lVar4 = lVar1;
      }
    }
    _objc_release(lVar1);
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108ca7700; end: 108ca777b; -[SCLensProcessingLensModeProvider _lensModeWithBundleCode:] */

void FUN_108ca7700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9b28;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf69ca0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c095600(uVar2,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ca777c; end: 108ca77b7; -[SCLensProcessingLensModeProvider .cxx_destruct] */

void FUN_108ca777c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ca77b8; end: 108ca787f;  */

void FUN_108ca77b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126db890;
  _objc_opt_new(PTR_PTR_1126db890);
  puVar2 = PTR_PTR_1126db860;
  _objc_alloc(PTR_PTR_1126db860);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ef80(puVar2,param_2,uVar3,uVar4,puVar1,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ca7880; end: 108ca7913;  */

void FUN_108ca7880(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282340();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c282320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 != 0) goto LAB_108ca7900;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
LAB_108ca7900:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108ca7914; end: 108ca7953;  */

void FUN_108ca7914(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db868;
  _objc_alloc(PTR_PTR_1126db868);
  func_0x00010c023720();
  func_0x00010c228cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ca7954; end: 108ca7a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ca7954(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126db870;
    _objc_alloc();
    uVar8 = *(undefined8 *)(lVar1 + _DAT_112779ac8);
    uVar10 = *(undefined8 *)(lVar1 + _DAT_112779ac4);
    lVar2 = lVar1 + _DAT_112779ad0;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c150160();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112779ad4;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf34a60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = lVar1 + _DAT_112779ae8;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c092300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023b80(puVar9,param_2,uVar8,uVar10,lVar3,lVar5,uVar11,lVar7,
                        *(undefined8 *)(param_1 + 0x28));
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



/* Entry: 108ca7a9c; end: 108ca7b47; -[SCLensProcessingLensModeServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ca7a9c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112779aec);
  _objc_destroyWeak(param_1 + _DAT_112779ae8);
  _objc_destroyWeak(param_1 + _DAT_112779acc);
  _objc_destroyWeak(param_1 + _DAT_112779ae4);
  _objc_destroyWeak(param_1 + _DAT_112779ad4);
  _objc_destroyWeak(param_1 + _DAT_112779ad0);
  _objc_destroyWeak(param_1 + _DAT_112779ae0);
  _objc_destroyWeak(param_1 + _DAT_112779adc);
  _objc_destroyWeak(param_1 + _DAT_112779ad8);
  _objc_storeStrong(param_1 + _DAT_112779ac8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779ac4,0);
  return;
}



/* Entry: 108ca7b48; end: 108ca7c43; -[SCLensProcessingOffscreenAggregator prepareProcessingWithMemento:frameDimensionUpdateObservable:cleanupEnabled:] */

void FUN_108ca7b48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108ca7c44;
  puStack_68 = &UNK_11084c4a0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  puStack_48 = puVar1;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar3,param_2,&puStack_80);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ca7c44; end: 108ca7c53;  */

void FUN_108ca7c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be78f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__prepareProcessingWithMemento_fr_11257bd60,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 108ca7c54; end: 108ca7caf; -[SCLensProcessingOffscreenAggregator reset] */

void FUN_108ca7c54(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108ca7cb0;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010c0f88c0(*(long *)(param_1 + 0x78),param_2,&puStack_38);
  }
  return;
}



/* Entry: 108ca7cb0; end: 108ca7cb7;  */

void FUN_108ca7cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__reset_1125821f0);
  return;
}



/* Entry: 108ca7cb8; end: 108ca7d13; -[SCLensProcessingOffscreenAggregator clearProcessorResources] */

void FUN_108ca7cb8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108ca7d14;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010c0f88c0(*(long *)(param_1 + 0x78),param_2,&puStack_38);
  }
  return;
}



/* Entry: 108ca7d14; end: 108ca7d1b;  */

void FUN_108ca7d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde0cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clearProcessorResources_112555cd0);
  return;
}



/* Entry: 108ca7d1c; end: 108ca7d77; -[SCLensProcessingOffscreenAggregator resetForCurrentBatch] */

void FUN_108ca7d1c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108ca7d78;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010c0f88c0(*(long *)(param_1 + 0x78),param_2,&puStack_38);
  }
  return;
}



/* Entry: 108ca7d78; end: 108ca7d7f;  */

void FUN_108ca7d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetEffectForCurrentBatch_112582450);
  return;
}



/* Entry: 108ca7d80; end: 108ca814b; -[SCLensProcessingOffscreenAggregator _prepareProcessingWithMemento:frameDimensionUpdateObservable:componentsPromise:] */

void FUN_108ca7d80(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined ***pppuVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined **unaff_x27;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x78));
  pppuVar2 = (undefined ***)PTR_PTR_1126db8a0;
  _objc_retain(param_3);
  _objc_opt_class();
  uVar3 = param_3;
  _objc_opt_isKindOfClass();
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (uVar3 == 0) {
    uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110ef0b78;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_70 = ppuVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    _objc_release(param_2);
    puVar6 = puVar7;
    func_0x00010bf43ca0(param_5);
    _objc_release(puVar7);
  }
  else {
    uVar3 = uVar1;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (*(long *)(param_1 + 0x80) == 0) {
      func_0x00010bde55c0(param_1);
      uVar3 = uVar1;
      func_0x00010c08fb40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2005c0();
      _objc_release(uVar3);
    }
    else {
      lVar4 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar4);
      uVar3 = uVar1;
      func_0x00010c08fb40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beea7e0(param_1);
      _objc_release(uVar3);
      _objc_release(lVar4);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x60));
    }
    puVar8 = PTR_PTR_1126db410;
    _objc_alloc();
    func_0x00010c00f100();
    _objc_initWeak(&ppuStack_70,param_1);
    uVar9 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bf07ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108ca814c;
    puStack_a0 = &UNK_110ac1448;
    unaff_x27 = &puStack_b8;
    pppuVar2 = &ppuStack_70;
    _objc_copyWeak(auStack_90);
    _objc_retain(param_5);
    puVar6 = puVar10;
    uStack_98 = param_5;
    func_0x00010bf083e0(uVar9);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(&ppuStack_70);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 5);
  _objc_destroyWeak(&ppuStack_70);
  __Unwind_Resume();
  _objc_retain(puVar6);
  lVar4 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    if (pppuVar2 == (undefined ***)0x2) {
      func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x20));
    }
    else {
      puVar7 = PTR_PTR_1126db8a8;
      _objc_alloc(PTR_PTR_1126db8a8);
      lVar11 = lVar4 + 0x28;
      _objc_loadWeakRetained(lVar11);
      func_0x00010c009980(puVar7);
      _objc_release(lVar11);
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      puVar8 = PTR_PTR_1126db8b0;
      _objc_alloc(PTR_PTR_1126db8b0);
      func_0x00010c025480();
      func_0x00010bf43d60(uVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 108ca814c; end: 108ca8237;  */

void FUN_108ca814c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 2) {
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      puVar2 = PTR_PTR_1126db8a8;
      _objc_alloc(PTR_PTR_1126db8a8);
      lVar3 = lVar1 + 0x28;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c009980(puVar2);
      _objc_release(lVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puVar4 = PTR_PTR_1126db8b0;
      _objc_alloc(PTR_PTR_1126db8b0);
      func_0x00010c025480();
      func_0x00010bf43d60(uVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ca8238; end: 108ca866b; -[SCLensProcessingOffscreenAggregator _configureProcessorWithMemento:frameDimensionUpdateObservable:] */

void FUN_108ca8238(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x78));
  lVar1 = param_3;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    uVar7 = param_4;
    func_0x00010bf870a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf59b00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar8;
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bf07ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae720;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108ca866c;
    puStack_98 = &UNK_110ac1478;
    _objc_retain();
    uStack_90 = uVar6;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf57500();
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x78);
    _objc_retain(uVar10);
    puStack_d8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d0 = 0x3032000000;
    pcStack_c8 = FUN_108ca8694;
    uStack_c0 = 0x108ca86a4;
    uStack_b8 = 0;
    _objc_initWeak(auStack_e8,param_1);
    puStack_130 = puVar3;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_108ca86ac;
    puStack_118 = &UNK_110857da0;
    _objc_copyWeak(auStack_f0,auStack_e8);
    _objc_retain(puVar2);
    puStack_110 = puVar2;
    _objc_retain(uVar10);
    puStack_f8 = &uStack_e0;
    uStack_108 = uVar10;
    _objc_retain(param_3);
    lStack_100 = param_3;
    func_0x00010bcbe2c4("APPSTORE",&puStack_130);
    uVar8 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bf44420(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c129ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    func_0x00010bead320(param_1);
    lVar1 = param_3;
    func_0x00010c08fb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beea7e0(param_1);
    _objc_release(lVar1);
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    lVar1 = param_3;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar8);
    _objc_release(puVar3);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126db790;
    _objc_alloc(PTR_PTR_1126db790);
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bf44420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c29ad60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0610a0(puVar3);
    _objc_release(uVar8);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126db8c0;
    _objc_alloc();
    func_0x00010c062420();
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar5;
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(lStack_100);
    _objc_release(uStack_108);
    _objc_release(puStack_110);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_e8);
    __Block_object_dispose(&uStack_e0,8);
    _objc_release(uStack_b8);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar2);
    _objc_release(uStack_90);
    _objc_release(uVar6);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_e8);
  __Block_object_dispose(&uStack_e0,8);
  __Unwind_Resume();
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 108ca866c; end: 108ca8693;  */

void FUN_108ca866c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ca8694; end: 108ca86ab;  */

void FUN_108ca8694(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108ca86ac; end: 108ca897f;  */

void FUN_108ca86ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_108ca895c;
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  puVar2 = PTR_PTR_1126db8b8;
  _objc_opt_new(PTR_PTR_1126db8b8);
  puVar6 = PTR_PTR_1126db8b8;
  _objc_opt_new(PTR_PTR_1126db8b8);
  puVar3 = PTR_PTR_1126db8b8;
  _objc_opt_new(PTR_PTR_1126db8b8);
  func_0x00010bf23340(uVar8,param_2,puVar2,puVar6,puVar3,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar2);
  lVar9 = lVar1 + 8;
  _objc_loadWeakRetained(lVar9);
  func_0x00010bf9d620();
  _objc_release(lVar9);
  lVar9 = *(long *)(lVar1 + 0x50);
  if (lVar9 == 0) {
    lVar9 = lVar1;
    func_0x00010bdf54e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar9);
  }
  uVar4 = *(undefined8 *)(lVar1 + 0x50);
  *(long *)(lVar1 + 0x50) = lVar9;
  _objc_release(uVar4);
  if (*(long *)(lVar1 + 0x68) == 0) {
    uVar10 = *(undefined8 *)(lVar1 + 0x50);
    uVar5 = *(undefined8 *)(lVar1 + 0x80);
    func_0x00010bf44420(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c28f300();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108ca8980;
    puStack_60 = &UNK_110893390;
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c126e60(uVar10,param_2,uVar4,&puStack_78);
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x68) = uVar5;
    _objc_release(uVar4);
  }
  puVar6 = *(undefined **)(lVar1 + 0x80);
  func_0x00010bf44420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010bf1b120();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
LAB_108ca894c:
    _objc_release(puVar6);
  }
  else {
    lVar9 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    lVar7 = lVar9;
    func_0x00010c071800();
    _objc_release(lVar9);
    _objc_release(puVar2);
    _objc_release(puVar6);
    if ((int)lVar7 != 0) {
      puVar6 = PTR_PTR_1126db4a8;
      _objc_alloc(PTR_PTR_1126db4a8);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c08fb40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(lVar1 + 0x80);
      func_0x00010bf44420(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bf1b120();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126ae6b8;
      func_0x00010c0d83a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c022720(puVar6,param_2,uVar5,uVar4,0,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar4);
      _objc_release(uVar10);
      _objc_release(uVar5);
      lVar9 = lVar1 + 0x20;
      _objc_loadWeakRetained(lVar9);
      func_0x00010bf9d620();
      _objc_release(lVar9);
      goto LAB_108ca894c;
    }
  }
  _objc_release(uVar8);
LAB_108ca895c:
  _objc_release(lVar1);
  return;
}



/* Entry: 108ca8980; end: 108ca8ae7;  */

void FUN_108ca8980(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar7 = param_2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_2);
      }
      uVar1 = *(undefined8 *)(lVar8 * 8);
      func_0x00010bfd3220();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x000107c318f8();
      uVar4 = uVar1;
      if ((int)uVar2 == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar1);
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar2 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined8 *)(lVar6 + 0x28) = uVar4;
      _objc_release(uVar2);
      if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) != 0) goto LAB_108ca8a9c;
      lVar8 = lVar8 + 1;
    } while (lVar7 != lVar8);
    lVar7 = param_2;
    func_0x00010bf52a60();
  }
LAB_108ca8a9c:
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf0ae40(*(undefined8 *)(param_2 + 0x78));
  func_0x00010bde0cc0(param_2);
  lVar7 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar7;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar7);
  if (lVar3 != 0) {
    lVar7 = param_2 + 8;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar7);
  }
  lVar7 = *(long *)(param_2 + 0x50);
  if (lVar7 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    func_0x00010bf44420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c28f300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1392e0(lVar7);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  lVar7 = param_2 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar7;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar7);
  if (lVar3 != 0) {
    lVar7 = param_2 + 0x20;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar7);
  }
  _objc_storeWeak(param_2 + 0x28,0);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108ca8ae8; end: 108ca8c27; -[SCLensProcessingOffscreenAggregator _reset] */

void FUN_108ca8ae8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x78));
  func_0x00010bde0cc0(param_1);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = lVar4;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar1 != 0) {
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bf44420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c28f300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1392e0(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = lVar4;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar1 != 0) {
    lVar4 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  _objc_storeWeak(param_1 + 0x28,0);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108ca8c28; end: 108ca8c67; -[SCLensProcessingOffscreenAggregator _resetEffectForCurrentBatch] */

void FUN_108ca8c28(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x78));
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf07ce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ca8c68; end: 108ca8cd7; -[SCLensProcessingOffscreenAggregator _clearProcessorResources] */

void FUN_108ca8c68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x78));
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    func_0x00010bf07ce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a820();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c115b00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 108ca8cd8; end: 108ca8d63; -[SCLensProcessingOffscreenAggregator _setupInmemoryAssetsProvider:remoteAssetsComponent:] */

void FUN_108ca8cd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar2);
  puVar1 = PTR_PTR_1126db440;
  _objc_alloc(PTR_PTR_1126db440);
  func_0x00010c01d600();
  _objc_storeWeak(param_1 + 0x28,param_3);
  _objc_release(param_3);
  func_0x00010c1aba40(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ca8d64; end: 108ca8e4f; -[SCLensProcessingOffscreenAggregator _warmupInMemoryAssetProvider:withAssetsFromLens:] */

void FUN_108ca8d64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_4);
  func_0x00010bf0ae40(uVar2);
  puVar1 = PTR_PTR_1126ae6a8;
  uVar2 = param_4;
  func_0x00010c0b8380(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1375a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108ca8e50;
  puStack_40 = &UNK_110ac0f78;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf97ce0(puVar1,param_2,&puStack_58);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ca8e50; end: 108ca8fdb;  */

void FUN_108ca8e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b9660;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_2);
  uVar3 = param_2;
  func_0x00010bf12ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf93ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf93e80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bff43e0(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1ea220(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ca8fdc; end: 108ca913b; -[SCLensProcessingOffscreenAggregator _createUriSystemAggregatorWithLensApplicator:] */

void FUN_108ca8fdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar2);
  _objc_retain(puVar1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108ca913c;
  puStack_60 = &UNK_110855710;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf11fe0(puVar3,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110ac14a8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126db430;
  _objc_alloc(PTR_PTR_1126db430);
  lVar6 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c0255c0(puVar5,param_2,lVar6,0,0,puVar4,puVar3,param_3,*(undefined8 *)(param_1 + 0x78)
                     );
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_58);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108ca913c; end: 108ca9163;  */

void FUN_108ca913c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ca9164; end: 108ca917f;  */

void FUN_108ca9164(void)

{
  _objc_opt_new(PTR_PTR_1126db8c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ca9180; end: 108ca9187; -[SCLensProcessingOffscreenAggregator performer] */

undefined8 FUN_108ca9180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108ca9188; end: 108ca91b7; -[SCLensProcessingOffscreenAggregator setPerformer:] */

void FUN_108ca9188(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108ca91b8; end: 108ca91bf; -[SCLensProcessingOffscreenAggregator lensProcessingFacade] */

undefined8 FUN_108ca91b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108ca91c0; end: 108ca91ef; -[SCLensProcessingOffscreenAggregator setLensProcessingFacade:] */

void FUN_108ca91c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108ca91f0; end: 108ca92ab; -[SCLensProcessingOffscreenAggregator .cxx_destruct] */

void FUN_108ca91f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108ca92ac; end: 108ca934f; -[SCLensProcessingOffscreenConfigurator initWithDecoratedConfigurator:inMemoryAssetsProvider:] */

undefined1 *
FUN_108ca92ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe0e0;
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



/* Entry: 108ca9350; end: 108ca9357; -[SCLensProcessingOffscreenConfigurator setConfigurationMetadata:] */

void FUN_108ca9350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c180ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setConfigurationMetadata__11263dcd0);
  return;
}



/* Entry: 108ca9358; end: 108ca944b; -[SCLensProcessingOffscreenConfigurator setConfigurationAsset:] */

void FUN_108ca9358(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126db8d0;
  _objc_opt_class(PTR_PTR_1126db8d0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_3;
    func_0x00010bf0b500();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar4 != 0) {
      uVar3 = param_3;
      func_0x00010bf0b500(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf97ce0();
      _objc_release(uVar3);
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ca944c; end: 108ca945f;  */

void FUN_108ca944c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ea230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_setRemoteAssetPath_forAsset__1126582b0,param_2,param_3);
  return;
}



/* Entry: 108ca9460; end: 108ca948f; -[SCLensProcessingOffscreenConfigurator .cxx_destruct] */

void FUN_108ca9460(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ca9490; end: 108ca9503; -[SCLensEffectMetadataProvider initWithAppliedLensMetadata:] */

undefined1 * FUN_108ca9490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe0e8;
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



/* Entry: 108ca9504; end: 108ca950b; -[SCLensEffectMetadataProvider lensId] */

void FUN_108ca9504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_lensId_112602b60);
  return;
}



/* Entry: 108ca950c; end: 108ca9513; -[SCLensEffectMetadataProvider isGenerativeAILens] */

void FUN_108ca950c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isGenerativeAiLens_1125fab60);
  return;
}



/* Entry: 108ca9514; end: 108ca951b; -[SCLensEffectMetadataProvider isPostCaptureDynamicLens] */

void FUN_108ca9514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isPostCaptureDynamicLens_1125fc410);
  return;
}



/* Entry: 108ca951c; end: 108ca9523; -[SCLensEffectMetadataProvider requiresMySelfie] */

void FUN_108ca951c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_requiresMySelfie_11262b880);
  return;
}



/* Entry: 108ca9524; end: 108ca952b; -[SCLensEffectMetadataProvider twoPersonsAILens] */

void FUN_108ca9524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27dd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_twoPersonsAILens_11267d178);
  return;
}



/* Entry: 108ca952c; end: 108ca9533; -[SCLensEffectMetadataProvider usesContentReadiness] */

void FUN_108ca952c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_usesContentReadiness_112682c88);
  return;
}



/* Entry: 108ca9534; end: 108ca9563; -[SCLensEffectMetadataProvider .cxx_destruct] */

void FUN_108ca9534(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ca9564; end: 108ca975f; -[SCLensEffectOffscreenProcessingComponentsProvider initWithLensProcessingFacade:offscreenConfigurator:viewportConfigurator:processingPerformer:] */

undefined8 *
FUN_108ca9564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126fe0f0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c115b00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126db8d8;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010bf07ce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf07da0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3de0();
    uVar6 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108ca9760; end: 108ca97db;  */

void FUN_108ca9760(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126db788;
  _objc_alloc(PTR_PTR_1126db788);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf44420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf9e620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011420(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ca97dc; end: 108ca97e3; -[SCLensEffectOffscreenProcessingComponentsProvider processor] */

undefined8 FUN_108ca97dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ca97e4; end: 108ca97eb; -[SCLensEffectOffscreenProcessingComponentsProvider processingPerformer] */

undefined8 FUN_108ca97e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ca97ec; end: 108ca97f3; -[SCLensEffectOffscreenProcessingComponentsProvider configurator] */

undefined8 FUN_108ca97ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ca97f4; end: 108ca97fb; -[SCLensEffectOffscreenProcessingComponentsProvider metadataProvider] */

undefined8 FUN_108ca97f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ca97fc; end: 108ca9803; -[SCLensEffectOffscreenProcessingComponentsProvider externalStreamProvider] */

undefined8 FUN_108ca97fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ca9804; end: 108ca980b; -[SCLensEffectOffscreenProcessingComponentsProvider viewportConfigurator] */

undefined8 FUN_108ca9804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ca980c; end: 108ca986b; -[SCLensEffectOffscreenProcessingComponentsProvider .cxx_destruct] */

void FUN_108ca980c(long param_1)

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



/* Entry: 108ca986c; end: 108ca98df; -[SCLensEffectViewportConfigurator initWithViewportProvider:] */

undefined1 * FUN_108ca986c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe0f8;
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



/* Entry: 108ca98e0; end: 108ca99db; -[SCLensEffectViewportConfigurator configureViewportProviderWithFrameSize:] */

void FUN_108ca98e0(undefined8 param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (double)(float)(int)(param_2 * 0.125);
  dVar6 = (double)(float)(int)((float)(int)(param_2 * 0.125) * 0.5);
  uVar1 = 0;
  dVar2 = dVar6;
  uVar3 = param_1;
  dVar4 = param_2;
  func_0x00010be7fe80(0,dVar6,param_1);
  func_0x00010c1a1680(0,dVar6,param_1,param_2,*(undefined8 *)(param_3 + 8));
  func_0x00010c2285e0(0,param_2 - dVar5,param_1,dVar5,*(undefined8 *)(param_3 + 8));
  func_0x00010c2297e0(0,0,param_1,dVar5,*(undefined8 *)(param_3 + 8));
  func_0x00010c2291c0(uVar1,dVar2,uVar3,dVar4,*(undefined8 *)(param_3 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf852d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 8),PTR_s_dispatchViewportData_1125bee58);
  return;
}



/* Entry: 108ca99dc; end: 108ca9b67; -[SCLensEffectViewportConfigurator _previewRectWithFullRect:] */

void FUN_108ca99dc(double param_1,undefined8 param_2,double param_3,double param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = param_1;
  func_0x000107c2aaf0();
  dVar2 = param_3;
  dVar6 = param_4;
  func_0x00010b690934(param_3,param_4,dVar1);
  dVar1 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar3 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  FUN_10904647c(dVar1,dVar3,dVar2,dVar6);
  func_0x000107c30a74();
  dVar5 = dVar1;
  dVar7 = dVar3;
  dVar4 = dVar2;
  if (param_5 != 0) {
    dVar7 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar4 = dVar1;
    _CGRectGetHeight(dVar1,dVar3,dVar2,dVar6);
    dVar7 = dVar7 - dVar4;
    _CGRectGetMinX(dVar1,dVar3,dVar2,dVar6);
    dVar4 = dVar1;
    _CGRectGetWidth(dVar1,dVar3,dVar2,dVar6);
    _CGRectGetHeight(dVar1,dVar3,dVar2,dVar6);
    dVar6 = dVar1;
  }
  dVar1 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectOffset_1103475f0)(dVar5,dVar7,dVar4,dVar6,dVar1,param_1);
  return;
}



/* Entry: 108ca9b68; end: 108ca9b73; -[SCLensEffectViewportConfigurator .cxx_destruct] */

void FUN_108ca9b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ca9b74; end: 108ca9c07;  */

void FUN_108ca9b74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_PTR_1126db8e0;
  _objc_alloc(PTR_PTR_1126db8e0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023820(puVar4,param_2,uVar1,uVar3,uVar2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108ca9c08; end: 108ca9cdb; -[SCLensEffectOffscreenRenderingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ca9c08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112779b88,0);
  _objc_storeStrong(param_1 + _DAT_112779b80,0);
  _objc_storeStrong(param_1 + _DAT_112779b78,0);
  _objc_destroyWeak(param_1 + _DAT_112779b90);
  _objc_destroyWeak(param_1 + _DAT_112779b60);
  _objc_destroyWeak(param_1 + _DAT_112779b8c);
  _objc_destroyWeak(param_1 + _DAT_112779b74);
  _objc_destroyWeak(param_1 + _DAT_112779b70);
  _objc_destroyWeak(param_1 + _DAT_112779b6c);
  _objc_destroyWeak(param_1 + _DAT_112779b68);
  _objc_destroyWeak(param_1 + _DAT_112779b84);
  _objc_destroyWeak(param_1 + _DAT_112779b64);
  _objc_destroyWeak(param_1 + _DAT_112779b7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112779b94);
  return;
}



/* Entry: 108ca9cdc; end: 108ca9d6f;  */

void FUN_108ca9cdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_PTR_1126db8e0;
  _objc_alloc(PTR_PTR_1126db8e0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023820(puVar4,param_2,uVar1,uVar3,uVar2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108ca9d70; end: 108ca9e43; -[SCUserSessionScopedLensEffectOffscreenRenderingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ca9d70(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112779bc0,0);
  _objc_storeStrong(param_1 + _DAT_112779bb8,0);
  _objc_storeStrong(param_1 + _DAT_112779bb0,0);
  _objc_destroyWeak(param_1 + _DAT_112779bc8);
  _objc_destroyWeak(param_1 + _DAT_112779b98);
  _objc_destroyWeak(param_1 + _DAT_112779bc4);
  _objc_destroyWeak(param_1 + _DAT_112779bac);
  _objc_destroyWeak(param_1 + _DAT_112779ba8);
  _objc_destroyWeak(param_1 + _DAT_112779ba4);
  _objc_destroyWeak(param_1 + _DAT_112779ba0);
  _objc_destroyWeak(param_1 + _DAT_112779bbc);
  _objc_destroyWeak(param_1 + _DAT_112779b9c);
  _objc_destroyWeak(param_1 + _DAT_112779bb4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112779bcc);
  return;
}



/* Entry: 108ca9e44; end: 108ca9f03; -[SCLensEffectOffscreenRenderingFactoryImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ca9e44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112779bf0,0);
  _objc_storeStrong(param_1 + _DAT_112779bec,0);
  _objc_storeStrong(param_1 + _DAT_112779be8,0);
  _objc_storeStrong(param_1 + _DAT_112779bf4,0);
  _objc_storeStrong(param_1 + _DAT_112779bd0,0);
  _objc_storeStrong(param_1 + _DAT_112779be4,0);
  _objc_storeStrong(param_1 + _DAT_112779be0,0);
  _objc_storeStrong(param_1 + _DAT_112779bdc,0);
  _objc_storeStrong(param_1 + _DAT_112779bd4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779bd8,0);
  return;
}



/* Entry: 108ca9f04; end: 108ca9fab; -[SCLensProcessingOffscreenURIHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ca9f04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126db908;
  _objc_opt_new(PTR_PTR_1126db908);
  puVar2 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  param_1 = param_1 + _DAT_112779bf8;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c28f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ca9fac; end: 108ca9fbb; -[SCLensProcessingOffscreenURIHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ca9fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112779bf8);
  return;
}



/* Entry: 108ca9fbc; end: 108ca9fbf; -[SCLensEffectOffscreenNullEffectUpdater playButtonDidPerformActionWithLensWithId:] */

void FUN_108ca9fbc(void)

{
  return;
}



/* Entry: 108ca9fc0; end: 108ca9fc3; -[SCLensEffectOffscreenNullEffectUpdater snapButtonDidPerformLongTapReleaseActionWithLensWithId:] */

void FUN_108ca9fc0(void)

{
  return;
}



/* Entry: 108ca9fc4; end: 108ca9fc7; -[SCLensEffectOffscreenNullEffectUpdater snapButtonDidPerformLongTapStartActionWithLensWithId:] */

void FUN_108ca9fc4(void)

{
  return;
}



/* Entry: 108ca9fc8; end: 108ca9fcb; -[SCLensEffectOffscreenNullEffectUpdater snapButtonDidPerformTriggerActionWithLensWithId:] */

void FUN_108ca9fc8(void)

{
  return;
}



/* Entry: 108ca9fcc; end: 108ca9fcf; -[SCLensEffectOffscreenNullEffectUpdater fullScreenDidEnterWithLensWithId:] */

void FUN_108ca9fcc(void)

{
  return;
}


