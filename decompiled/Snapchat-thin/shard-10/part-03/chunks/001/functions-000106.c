/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f117b0; end: 107f11907;  */

void FUN_107f117b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107f11908;
  uStack_40 = 0x107f11918;
  uStack_38 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c0c0800(param_2);
  puVar1 = PTR_PTR_1126d85a0;
  _objc_alloc(PTR_PTR_1126d85a0);
  uVar2 = puStack_58[5];
  FUN_107f0123c(uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047f40(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f11908; end: 107f1191f;  */

void FUN_107f11908(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f11920; end: 107f11957;  */

void FUN_107f11920(long param_1,undefined8 param_2)

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



/* Entry: 107f11958; end: 107f119db;  */

void FUN_107f11958(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_107f19bac(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_2);
  _objc_release(param_2);
  func_0x00010c0a1780(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = PTR____NSDictionary0__struct_11034ab58;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f119dc; end: 107f11a3b; -[SCCloudSyncTranscodeStep .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f119dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771554,0);
  _objc_storeStrong(param_1 + _DAT_112771550,0);
  _objc_storeStrong(param_1 + _DAT_11277154c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112771548,0);
  return;
}



/* Entry: 107f11a3c; end: 107f11d07; -[SCCloudSyncUpdateEntriesStep initWithCloudFS:dataVault:dataObjectContext:thumbnailFileGenerator:networker:logger:progressReporter:shouldUseCups:memoriesAssetRepository:shouldWriteToAssetRespository:performer:timeProvider:dbTimeoutInSeconds:dependencyProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107f11a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_78 = PTR_PTR_1126fba50;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112771558;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277155c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771560;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771564;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771568;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277156c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771570;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771574;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112771578) = param_14;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277157c) = param_11;
    lVar3 = (long)_DAT_112771580;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771584;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771588) = param_1;
    lVar3 = (long)_DAT_11277158c;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107f11d08; end: 107f11d0f; -[SCCloudSyncUpdateEntriesStep stepName] */

undefined8 FUN_107f11d08(void)

{
  return 6;
}



/* Entry: 107f11d10; end: 107f11f73; -[SCCloudSyncUpdateEntriesStep runWithStepData:] */

void FUN_107f11d10(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_107eff9fc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c28e000();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (lVar3 = lVar1, func_0x00010bf529e0(), lVar3 == 0)) {
    _objc_release(lVar2);
  }
  else {
    lVar3 = param_3;
    func_0x00010bf42aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      _objc_initWeak(auStack_58,param_1);
      puVar5 = PTR_PTR_1126ae6b8;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_107f11f74;
      puStack_78 = &UNK_110858c30;
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      lStack_70 = param_3;
      _objc_retain(lVar1);
      lStack_68 = lVar1;
      func_0x00010bf54280(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_98,auStack_58);
      _objc_retain(param_3);
      puVar6 = puVar5;
      func_0x00010bfb2660(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_destroyWeak(auStack_98);
      _objc_release(puVar5);
      _objc_release(lStack_68);
      _objc_release(lStack_70);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_107f11f18;
    }
  }
  puVar5 = PTR_PTR_1126af5d0;
  puVar6 = PTR_PTR_1126ae6b8;
  uVar4 = 0x14;
  FUN_107f188fc(0x14,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
LAB_107f11f18:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f11f74; end: 107f1228f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f11f74(long param_1,undefined *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar11 = param_2;
    FUN_107eff934(param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107f12290;
    puStack_80 = &UNK_110a12bd0;
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar15);
    uStack_78 = uVar15;
    _objc_retain(param_2);
    ppuVar3 = &puStack_98;
    puStack_70 = param_2;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010befb600();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c6c00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c2413a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar15;
    func_0x00010c23f220(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar13 = *(undefined8 *)(lVar2 + _DAT_112771558);
    uVar12 = *(undefined8 *)(lVar2 + _DAT_112771564);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97120();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c28e000();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined1 *)(lVar2 + _DAT_11277157c);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf42aa0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(lVar2 + _DAT_11277155c);
    uVar18 = *(undefined8 *)(lVar2 + _DAT_112771568);
    uVar14 = *(undefined8 *)(lVar2 + _DAT_112771570);
    uVar17 = *(undefined8 *)(lVar2 + _DAT_11277156c);
    uVar19 = *(undefined8 *)(lVar2 + _DAT_112771560);
    uVar20 = *(undefined8 *)(lVar2 + _DAT_11277158c);
    uVar10 = *(undefined8 *)(lVar2 + _DAT_112771580);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    FUN_107f01788(uVar13,uVar12,uVar7,uVar8,uVar4,uVar1,uVar15,uVar9,uVar6,uVar16,uVar18,uVar14,
                  uVar17,uVar19,uVar20,uVar10,ppuVar3);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar11 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar15);
    _objc_release(ppuVar3);
    _objc_release(puStack_70);
    _objc_release(uStack_78);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 107f12290; end: 107f1241b;  */

void FUN_107f12290(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0a00(param_2);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f1241c; end: 107f12647;  */

void FUN_107f1241c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8358;
  _objc_retain(param_2);
  func_0x00010bf3e420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ad460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107f12648; end: 107f127eb;  */

void FUN_107f12648(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    lVar2 = 1;
    FUN_107f188fc(1,0,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    lVar2 = param_2;
    FUN_107effc6c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar3 = puVar1;
      func_0x00010bee2e40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      _objc_retain(param_2);
      puVar4 = puVar3;
      func_0x00010c0b8600(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(uVar5);
      _objc_release(puVar3);
    }
    else {
      puVar4 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f127ec; end: 107f12883;  */

void FUN_107f127ec(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_107effc6c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af5d0;
  if (param_2 == 0) {
    puVar2 = *(undefined **)(param_1 + 0x28);
    _objc_retain(puVar2);
  }
  else {
    lVar1 = param_2;
    func_0x000107f18da8(param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f12884; end: 107f12aa3; -[SCCloudSyncUpdateEntriesStep _updateUploadStateInAssetRepository:uploadStateEnum:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f12884(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  if (*(char *)(param_1 + _DAT_112771578) == '\x01') {
    lVar1 = param_3;
    func_0x00010bf67b40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dba00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      puVar6 = *(undefined **)(param_1 + _DAT_112771574);
      func_0x00010bf67b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c0dba00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126d84b8;
      _objc_alloc(PTR_PTR_1126d84b8);
      func_0x00010c0105c0();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112771580);
      uVar8 = *(undefined8 *)(param_1 + _DAT_11277156c);
      lVar3 = param_1;
      func_0x00010c253780(param_1);
      FUN_107f194d4();
      _objc_retainAutoreleasedReturnValue();
      FUN_107eaca74(*(undefined8 *)(param_1 + _DAT_112771588),puVar6,lVar2,puVar5,uVar7,uVar8,lVar3,
                    *(undefined8 *)(param_1 + _DAT_112771584));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(puVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_107f12a74;
    }
  }
  puVar5 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
LAB_107f12a74:
  _objc_release(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f12aa4; end: 107f12b67;  */

void FUN_107f12aa4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010befb600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f12b68; end: 107f12c37; -[SCCloudSyncUpdateEntriesStep .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f12b68(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277158c,0);
  _objc_storeStrong(param_1 + _DAT_112771584,0);
  _objc_storeStrong(param_1 + _DAT_112771580,0);
  _objc_storeStrong(param_1 + _DAT_112771574,0);
  _objc_storeStrong(param_1 + _DAT_112771570,0);
  _objc_storeStrong(param_1 + _DAT_11277156c,0);
  _objc_storeStrong(param_1 + _DAT_112771568,0);
  _objc_storeStrong(param_1 + _DAT_112771564,0);
  _objc_storeStrong(param_1 + _DAT_112771560,0);
  _objc_storeStrong(param_1 + _DAT_11277155c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112771558,0);
  return;
}



/* Entry: 107f12c38; end: 107f12d1f; -[SCCloudSyncUpdateEntryOperationStep initWithDataObjectContext:networker:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107f12c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fba58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112771590;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771594;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771598;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f12d20; end: 107f12d27; -[SCCloudSyncUpdateEntryOperationStep stepName] */

undefined8 FUN_107f12d20(void)

{
  return 0xc;
}



/* Entry: 107f12d28; end: 107f12e9f; -[SCCloudSyncUpdateEntryOperationStep runWithStepData:] */

void FUN_107f12d28(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2859a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    uVar2 = 0x2c;
    FUN_107f188fc(0x2c,0,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puVar4 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bf54280(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f12ea0; end: 107f1312f;  */

void FUN_107f12ea0(long param_1,undefined *param_2)

{
  long lVar1;
  undefined **ppuVar2;
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
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar14 = param_2;
    FUN_107eff934(param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107f13130;
    puStack_78 = &UNK_110a12d80;
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar15);
    uStack_70 = uVar15;
    _objc_retain(param_2);
    ppuVar2 = &puStack_90;
    puStack_68 = param_2;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97120();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010befb600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2859a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf6cfc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2859a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2859a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c7c0();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2859a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c28d5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c28e000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed7820(lVar1);
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
    _objc_release(uVar15);
    _objc_release(uVar3);
    puVar14 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(puStack_68);
    _objc_release(uStack_70);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 107f13130; end: 107f132c3;  */

void FUN_107f13130(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c09c0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f132c4; end: 107f134f3;  */

void FUN_107f132c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8358;
  _objc_retain(param_2);
  func_0x00010bf3e420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ad460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107f134f4; end: 107f1361f; -[SCCloudSyncUpdateEntryOperationStep _updateEntriesWithEntryId:addSnapEntity:deletedSnapId:title:deleteSharedSnapForAll:updatedSnapsOrder:snapsUploadInfo:resultHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f134f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112771594);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771590);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112771598);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  FUN_107f026c4(param_3,param_4,param_5,param_6,uVar2,param_7,param_9,param_8,uVar1,uVar3,param_10);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107f13620; end: 107f1366f; -[SCCloudSyncUpdateEntryOperationStep .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f13620(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771598,0);
  _objc_storeStrong(param_1 + _DAT_112771594,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112771590,0);
  return;
}



/* Entry: 107f13670; end: 107f1388b; -[SCCloudSyncUploadMediaStep initWithCloudFS:networker:logger:progressReporter:memoriesAssetRepository:shouldWriteToAssetRespository:performer:timeProvider:dbTimeoutInSeconds:fileManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107f13670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126fba60;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277159c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127715a0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127715a4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127715a8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127715ac;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127715b0;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127715b4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127715b8) = param_9;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127715bc) = param_1;
    lVar3 = (long)_DAT_1127715c0;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107f1388c; end: 107f13893; -[SCCloudSyncUploadMediaStep stepName] */

undefined8 FUN_107f1388c(void)

{
  return 5;
}



/* Entry: 107f13894; end: 107f13a5b; -[SCCloudSyncUploadMediaStep runWithStepData:] */

void FUN_107f13894(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_107eff9fc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bf42aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      _objc_initWeak(auStack_48,param_1);
      func_0x00010be98180(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      puVar5 = param_1;
      func_0x00010bfb2660(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_48);
      goto LAB_107f13a0c;
    }
  }
  puVar4 = PTR_PTR_1126af5d0;
  puVar5 = PTR_PTR_1126ae6b8;
  uVar3 = 0x10;
  FUN_107f188fc(0x10,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
LAB_107f13a0c:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107f13a5c; end: 107f13b43;  */

void FUN_107f13a5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 1;
    FUN_107f188fc(1,0,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  else {
    puVar4 = puVar1;
    func_0x00010be32cc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f13b44; end: 107f13c83; -[SCCloudSyncUploadMediaStep _runUploadMediaStepWithStepData:uploadRequestInfoMap:] */

void FUN_107f13b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010bee2e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfb2660(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f13c84; end: 107f13def;  */

void FUN_107f13c84(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126af5d0;
  puVar5 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x1;
    FUN_107f188fc(1,0,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = param_2;
    FUN_107effc6c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    puVar5 = PTR_PTR_1126ae6b8;
    if (puVar3 == (undefined *)0x0) {
      puVar5 = puVar1;
      func_0x00010be32ca0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107f13dbc;
    }
    puVar4 = puVar3;
    func_0x000107f18be8(puVar3,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
LAB_107f13dbc:
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107f13df0; end: 107f13f03; -[SCCloudSyncUploadMediaStep _handleUploadMedia:uploadRequestInfoMap:] */

void FUN_107f13df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f13f04; end: 107f14113;  */

void FUN_107f13f04(long param_1,undefined *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 == 0) {
    puVar7 = param_2;
    FUN_107eff934(param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107f14114;
    puStack_88 = &UNK_1108420a0;
    _objc_retain(param_2);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    puStack_80 = param_2;
    _objc_retain(uVar8);
    ppuVar2 = &puStack_a0;
    uStack_78 = uVar8;
    _objc_retainBlock();
    puStack_d0 = puVar7;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x107f14184;
    puStack_b8 = &UNK_110a12db0;
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    uStack_b0 = uVar8;
    _objc_retain(param_2);
    ppuVar3 = &puStack_d0;
    puStack_a8 = param_2;
    _objc_retainBlock(ppuVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf42aa0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c6c00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010befb600(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf147c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5c680(lVar1);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar7 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(puStack_a8);
    _objc_release(uStack_b0);
    _objc_release(ppuVar2);
    _objc_release(uStack_78);
    _objc_release(puStack_80);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107f14114; end: 107f1424f;  */

void FUN_107f14114(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126af5d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = 0x11;
  FUN_107f188fc(0x11,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f14250; end: 107f143cf; -[SCCloudSyncUploadMediaStep _handleUploadResult:stepData:] */

void FUN_107f14250(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  FUN_107effc6c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010bee2e40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(param_3);
    puVar2 = param_1;
    func_0x00010c0b8600(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_48);
  }
  else {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f143d0; end: 107f144db;  */

void FUN_107f143d0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126af5d0;
  if (lVar1 == 0) {
    lVar3 = 1;
    FUN_107f188fc(1,0,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = param_2;
    FUN_107effc6c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126af5d0;
    if (lVar3 == 0) {
      puVar4 = *(undefined **)(param_1 + 0x28);
      _objc_retain(puVar4);
    }
    else {
      lVar2 = lVar3;
      func_0x000107f18be8(lVar3,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f144dc; end: 107f146db; -[SCCloudSyncUploadMediaStep _makeUploadRequestWithCommonProps:mediaTranscodingResult:addSnapEntities:uploadRequestInfoMap:backgroundUploadedSnapIds:successHandler:failureHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f144dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

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
  undefined8 uVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain();
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_3;
  func_0x00010c2412e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c2413a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = param_3;
  func_0x00010c241320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11277159c);
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127715a0);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127715a4);
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127715a8);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127715ac);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107f07d94(param_6,uVar2,uVar3,uVar4,uVar5,param_7,0,uVar7,uVar10,uVar8,uVar9,uVar6,
                      *(undefined8 *)(param_1 + _DAT_1127715c0),puVar1,param_9,param_8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f146dc; end: 107f146e3;  */

void FUN_107f146dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snap_11266d6b0);
  return;
}



/* Entry: 107f146e4; end: 107f14907; -[SCCloudSyncUploadMediaStep _updateUploadStateInAssetRepository:uploadStateEnum:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f146e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  if (*(char *)(param_1 + _DAT_1127715b8) == '\x01') {
    lVar1 = param_3;
    func_0x00010bf67b40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dba00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      puVar6 = *(undefined **)(param_1 + _DAT_1127715b4);
      func_0x00010bf67b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c0dba00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126d84b8;
      _objc_alloc(PTR_PTR_1126d84b8);
      func_0x00010c0105c0();
      uVar7 = *(undefined8 *)(param_1 + _DAT_1127715ac);
      uVar8 = *(undefined8 *)(param_1 + _DAT_1127715a4);
      lVar3 = param_1;
      func_0x00010c253780(param_1);
      FUN_107f194d4();
      _objc_retainAutoreleasedReturnValue();
      FUN_107eaca74(*(undefined8 *)(param_1 + _DAT_1127715bc),puVar6,lVar2,puVar5,uVar7,uVar8,lVar3,
                    *(undefined8 *)(param_1 + _DAT_1127715b0));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(puVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_107f148d8;
    }
  }
  puVar5 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
LAB_107f148d8:
  _objc_release(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f14908; end: 107f149cb;  */

void FUN_107f14908(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010befb600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f149cc; end: 107f14a6b; -[SCCloudSyncUploadMediaStep .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f149cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127715c0,0);
  _objc_storeStrong(param_1 + _DAT_1127715b4,0);
  _objc_storeStrong(param_1 + _DAT_1127715b0,0);
  _objc_storeStrong(param_1 + _DAT_1127715ac,0);
  _objc_storeStrong(param_1 + _DAT_1127715a8,0);
  _objc_storeStrong(param_1 + _DAT_1127715a4,0);
  _objc_storeStrong(param_1 + _DAT_1127715a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277159c,0);
  return;
}



/* Entry: 107f14a6c; end: 107f14b53; -[SCCloudSyncUploadSnapDocStep initWithSnapUploadWorkflow:logger:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107f14a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fba68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127715c4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127715c8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127715cc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f14b54; end: 107f14b5b; -[SCCloudSyncUploadSnapDocStep stepName] */

undefined8 FUN_107f14b54(void)

{
  return 8;
}



/* Entry: 107f14b5c; end: 107f14da7; -[SCCloudSyncUploadSnapDocStep runWithStepData:] */

void FUN_107f14b5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010befb620();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126af5d0;
    puVar6 = PTR_PTR_1126ae6b8;
    if (lVar3 == 0) {
      uVar4 = 0x25;
      FUN_107f188fc(0x25,0,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(uVar4);
      goto LAB_107f14ce4;
    }
  }
  else {
    _objc_release();
  }
  _objc_initWeak(auStack_58,param_1);
  puVar5 = PTR_PTR_1126ae6b8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107f14da8;
  puStack_70 = &UNK_110851360;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  lStack_68 = param_3;
  func_0x00010bf54280(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(param_3);
  puVar6 = puVar5;
  func_0x00010c0b8600(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar5);
  _objc_release(lStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
LAB_107f14ce4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f14da8; end: 107f14f3b;  */

void FUN_107f14da8(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puVar5 = param_2;
    FUN_107eff934(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23fe00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010befb620(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000108017660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_retain(param_2);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    func_0x00010bee5a40(lVar1);
    puVar5 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(param_2);
    _objc_release(uVar4);
    _objc_release(uVar6);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107f14f3c; end: 107f151a7;  */

void FUN_107f14f3c(long param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == (undefined *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    param_3 = param_2;
    func_0x00010c23fe00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
  }
  else {
    puVar1 = param_3;
    func_0x00010bf3ec40();
    if ((puVar1 == (undefined *)0x1) ||
       (puVar1 = param_3, func_0x00010bf3ec40(), puVar3 = PTR_PTR_1126af5d0,
       puVar1 == (undefined *)0x2)) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar1 = param_3;
      func_0x00010bf6e340(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf993c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_release(puVar1);
      puVar2 = PTR_PTR_1126af5d0;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puVar1 = (undefined *)0x27;
      FUN_107f188fc(0x27,puVar3,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar2);
      param_3 = puVar3;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puVar1 = param_3;
      func_0x000107f19090(param_3,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f151a8; end: 107f152c7; -[SCCloudSyncUploadSnapDocStep _uploadMediaInSnapDoc:snapDocKey:resultHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f151a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d85a8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = puVar1;
  func_0x00010c2bc0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127715c4);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c28de20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  func_0x00010c297260(uVar5,param_2,param_5,*(undefined8 *)(param_1 + _DAT_1127715cc));
  _objc_release(param_5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107f152c8; end: 107f153fb; -[SCCloudSyncUploadSnapDocStep _updateStepData:resultHandlerReulst:] */

void FUN_107f152c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_107f153fc;
  uStack_50 = 0x107f1540c;
  uStack_48 = 0;
  _objc_retain(param_3);
  func_0x00010c0c0800(param_4);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f153fc; end: 107f15413;  */

void FUN_107f153fc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f15414; end: 107f154db;  */

void FUN_107f15414(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d8580;
  _objc_retain(param_2);
  func_0x00010bf3e460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107f154dc; end: 107f15523;  */

void FUN_107f154dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f15524; end: 107f15573; -[SCCloudSyncUploadSnapDocStep .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f15524(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127715cc,0);
  _objc_storeStrong(param_1 + _DAT_1127715c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127715c4,0);
  return;
}



/* Entry: 107f15574; end: 107f1568f; -[SCCloudSyncUploadSnapDocThumbnailStep initWithBoltDataUploader:logger:notificationPool:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107f15574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fba70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127715d0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127715d4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127715d8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127715dc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f15690; end: 107f15697; -[SCCloudSyncUploadSnapDocThumbnailStep stepName] */

undefined8 FUN_107f15690(void)

{
  return 10;
}



/* Entry: 107f15698; end: 107f157ab; -[SCCloudSyncUploadSnapDocThumbnailStep runWithStepData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f15698(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010befb620();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    lVar2 = 0x22;
    FUN_107f188fc(0x22,0,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    func_0x00010bee5d60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    puVar4 = param_1;
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f157ac; end: 107f15b27; -[SCCloudSyncUploadSnapDocThumbnailStep _uploadSnapDocThumbnailWithStepData:boltDataUploader:performer:] */

void FUN_107f157ac(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010c26da00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126d8580;
    func_0x00010bf3e460();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c2baf60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae6b8;
    _objc_retain(puVar6);
    func_0x00010bf54280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010befb620();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c26da00(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = puVar2;
    FUN_107ef8444(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    FUN_107ef832c(puVar6,9,1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae6b8;
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(puVar4);
    func_0x00010bf54280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar4);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar4);
    _objc_retain(param_3);
    puVar5 = puVar1;
    func_0x00010c0b8600(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_release(puVar1);
    _objc_retain(param_3);
    puVar6 = puVar5;
    func_0x00010c0b8600(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = param_3;
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f15b28; end: 107f15b9f;  */

void FUN_107f15b28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  _objc_retain(param_2);
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 107f15ba0; end: 107f15cc7;  */

void FUN_107f15ba0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_107f15cc8;
  uStack_50 = 0x107f15cd8;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f15cc8; end: 107f15cdf;  */

void FUN_107f15cc8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f15ce0; end: 107f15dcb;  */

void FUN_107f15ce0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d8580;
  _objc_retain(param_2);
  func_0x00010bf3e460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c28ea80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x00010c2baf60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107f15dcc; end: 107f15e13;  */

void FUN_107f15dcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f15e14; end: 107f15f2b;  */

void FUN_107f15e14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107f15cc8;
  uStack_30 = 0x107f15cd8;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f15f2c; end: 107f16073;  */

void FUN_107f15f2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d8488;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar4 = param_2;
  func_0x00010bf4db80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar4;
  func_0x00010beec820(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059c60(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f16074; end: 107f161c3;  */

void FUN_107f16074(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  
  _objc_retain(param_2);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107f161c4;
  puStack_68 = &UNK_110a12360;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uStack_60 = uVar4;
  _objc_retain(param_2);
  ppuVar1 = &puStack_80;
  uStack_58 = param_2;
  _objc_retainBlock(ppuVar1);
  puStack_a8 = puVar3;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107f16290;
  puStack_90 = &UNK_11086e258;
  uStack_88 = param_2;
  _objc_retain(param_2);
  ppuVar2 = &puStack_a8;
  _objc_retainBlock(ppuVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28eb40();
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(uStack_88);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f161c4; end: 107f1628f;  */

void FUN_107f161c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d84b0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bf0b760(*(undefined8 *)(param_1 + 0x20));
  uVar3 = param_2;
  func_0x00010bf4db80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bff4400(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f16290; end: 107f162ff;  */

void FUN_107f16290(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f16300; end: 107f1635f; -[SCCloudSyncUploadSnapDocThumbnailStep .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f16300(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127715dc,0);
  _objc_storeStrong(param_1 + _DAT_1127715d8,0);
  _objc_storeStrong(param_1 + _DAT_1127715d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127715d0,0);
  return;
}



/* Entry: 107f16360; end: 107f16537;  */

ulong FUN_107f16360(ulong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                   long param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long unaff_x24;
  undefined8 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar11 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c1356e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  puVar1 = param_4;
  FUN_107f16538();
  _objc_release(param_4);
  iVar8 = (int)param_2;
  lVar2 = unaff_x24;
  if ((uVar10 & 1) == 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    param_4 = param_3;
    func_0x00010bf97260();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_4;
    func_0x00010bf52a60();
    iVar8 = (int)param_2;
    uVar10 = 0;
    if (puVar1 != (undefined1 *)0x0) {
      lVar12 = *plStack_120;
      do {
        puVar13 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(param_4);
          }
          puVar11 = *(undefined8 **)(lStack_128 + (long)puVar13 * 8);
          lVar2 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 != 0) {
            lVar3 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010bf529e0();
            _objc_release(lVar3);
            _objc_release(lVar2);
            iVar8 = (int)param_2;
            unaff_x24 = lVar2;
            if (lVar4 != 0) {
              uVar10 = 1;
              goto LAB_107f164d8;
            }
          }
          puVar13 = puVar13 + 1;
        } while (puVar1 != puVar13);
        puVar1 = param_4;
        puVar11 = &uStack_130;
        func_0x00010bf52a60();
        iVar8 = (int)param_2;
      } while (puVar1 != (undefined1 *)0x0);
      uVar10 = 0;
      lVar2 = unaff_x24;
    }
LAB_107f164d8:
    _objc_release(param_4);
  }
  else {
    uVar10 = 1;
    puVar11 = (undefined8 *)puVar1;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  uVar5 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar10;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_107f16538;
  lStack_170 = lVar2;
  uStack_168 = uVar10;
  puStack_160 = param_4;
  lStack_158 = param_5;
  puStack_150 = param_3;
  uStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar11);
  if (iVar8 == 0) {
    uVar9 = 0;
  }
  else {
    uVar10 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar10 == 0) ||
       (puVar1 = (undefined1 *)puVar11, func_0x00010c08fa60(), puVar1 == (undefined1 *)0x0)) {
      uVar9 = 0;
    }
    else {
      func_0x00010c2a1280(uVar10);
      uVar6 = 0;
      _dispatch_semaphore_create();
      puStack_188 = &uStack_190;
      uStack_190 = 0;
      uStack_180 = 0x2020000000;
      uStack_178 = 0;
      _objc_retain();
      func_0x00010bfd9b60(uVar10);
      uVar7 = 0;
      _dispatch_time(0,3000000000);
      _dispatch_semaphore_wait(uVar6,uVar7);
      _objc_retain(uVar10);
      _objc_sync_enter(uVar10);
      uVar9 = (uint)*(byte *)(puStack_188 + 3);
      _objc_sync_exit(uVar10);
      _objc_release(uVar10);
      _objc_release(uVar6);
      __Block_object_dispose(&uStack_190,8);
      _objc_release(uVar6);
    }
    _objc_release(uVar10);
  }
  _objc_release(puVar11);
  _objc_release(uVar5);
  return (ulong)(uVar9 & 1);
}



/* Entry: 107f16538; end: 107f166c3;  */

byte FUN_107f16538(long param_1,int param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain();
  _objc_retain(param_3);
  if (param_2 == 0) {
    bVar5 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 == 0) || (lVar2 = param_3, func_0x00010c08fa60(), lVar2 == 0)) {
      bVar5 = 0;
    }
    else {
      func_0x00010c2a1280(lVar1);
      uVar3 = 0;
      _dispatch_semaphore_create();
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      _objc_retain();
      func_0x00010bfd9b60(lVar1);
      uVar4 = 0;
      _dispatch_time(0,3000000000);
      _dispatch_semaphore_wait(uVar3,uVar4);
      _objc_retain(lVar1);
      _objc_sync_enter(lVar1);
      bVar5 = *(byte *)(puStack_58 + 3);
      _objc_sync_exit(lVar1);
      _objc_release(lVar1);
      _objc_release(uVar3);
      __Block_object_dispose(&uStack_60,8);
      _objc_release(uVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return bVar5 & 1;
}



/* Entry: 107f166c4; end: 107f1671f;  */

void FUN_107f166c4(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_2;
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107f16720; end: 107f1674b; +[SCGrapheneMemoriesCupsMetric verifyServerDedup] */

void FUN_107f16720(void)

{
  _objc_alloc(PTR_PTR_1126d81d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f1674c; end: 107f167eb; -[SCGrapheneMemoriesCupsMetric description] */

void FUN_107f1674c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ec40b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ec40b8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fba78;
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



/* Entry: 107f167ec; end: 107f1692f; -[SCGrapheneRegistry memoriesCupsGraphene] */

void FUN_107f167ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x107f16874;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam0000000113728488 != -1) {
    func_0x00010002a2fc(0x113728488,&puStack_48);
  }
  uVar1 = uRam0000000113728480;
  _objc_retain(uRam0000000113728480);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f16930; end: 107f169a7;  */

void FUN_107f16930(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110a12e90,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107f169a8; end: 107f16b5b; -[SCCloudUpdateEntryAssetSnapshot initWithCoder:] */

undefined1 * FUN_107f169a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fba88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f16b5c; end: 107f16d23; -[SCCloudUpdateEntryAssetSnapshot initWithTargetEntryId:snapDocData:addEntryAssetEntities:userContext:shouldRemoveSyncedSnaps:addSnapEntities:snapDataVaultEncryptions:profile:entryPlaceholder:] */

undefined1 *
FUN_107f16b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fba88;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f16d24; end: 107f16d47; -[SCCloudUpdateEntryAssetSnapshot copyWithZone:] */

undefined8 FUN_107f16d24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f16d48; end: 107f16e33; -[SCCloudUpdateEntryAssetSnapshot encodeWithCoder:] */

void FUN_107f16d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ec4198);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ec41b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ec41d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ec41f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110ec4218);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ec4238);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ec4258);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110dbf098);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110ec4278);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f16e34; end: 107f16ef3; -[SCCloudUpdateEntryAssetSnapshot hash] */

undefined8 * FUN_107f16e34(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107f17014:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107f17020;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                    if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_107f17020;
                    }
                    goto LAB_107f17014;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107f17020:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107f16ef4; end: 107f1703b; -[SCCloudUpdateEntryAssetSnapshot isEqual:] */

long FUN_107f16ef4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107f17014:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f17020;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if (lVar3 != *(long *)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_107f17020;
                    }
                    goto LAB_107f17014;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107f17020:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107f1703c; end: 107f17043; -[SCCloudUpdateEntryAssetSnapshot targetEntryId] */

undefined8 FUN_107f1703c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f17044; end: 107f1704b; -[SCCloudUpdateEntryAssetSnapshot snapDocData] */

undefined8 FUN_107f17044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f1704c; end: 107f17053; -[SCCloudUpdateEntryAssetSnapshot addEntryAssetEntities] */

undefined8 FUN_107f1704c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f17054; end: 107f1705b; -[SCCloudUpdateEntryAssetSnapshot userContext] */

undefined8 FUN_107f17054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f1705c; end: 107f17063; -[SCCloudUpdateEntryAssetSnapshot shouldRemoveSyncedSnaps] */

undefined1 FUN_107f1705c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107f17064; end: 107f1706b; -[SCCloudUpdateEntryAssetSnapshot addSnapEntities] */

undefined8 FUN_107f17064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107f1706c; end: 107f17073; -[SCCloudUpdateEntryAssetSnapshot snapDataVaultEncryptions] */

undefined8 FUN_107f1706c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107f17074; end: 107f1707b; -[SCCloudUpdateEntryAssetSnapshot profile] */

undefined8 FUN_107f17074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107f1707c; end: 107f17083; -[SCCloudUpdateEntryAssetSnapshot entryPlaceholder] */

undefined8 FUN_107f1707c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107f17084; end: 107f170fb; -[SCCloudUpdateEntryAssetSnapshot .cxx_destruct] */

void FUN_107f17084(long param_1)

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



/* Entry: 107f170fc; end: 107f1729b; -[SCCloudSyncCreateSnapDocEntrySnapshot initWithCoder:] */

undefined1 * FUN_107f170fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fba90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f1729c; end: 107f1745b; -[SCCloudSyncCreateSnapDocEntrySnapshot initWithSnapDoc:userContext:addSnapEntity:dataVaultEncryption:profile:entryPlaceholder:snapIdToReplace:snapsOrder:] */

undefined1 *
FUN_107f1729c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fba90;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
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



/* Entry: 107f1745c; end: 107f1747f; -[SCCloudSyncCreateSnapDocEntrySnapshot copyWithZone:] */

undefined8 FUN_107f1745c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f17480; end: 107f17557; -[SCCloudSyncCreateSnapDocEntrySnapshot encodeWithCoder:] */

void FUN_107f17480(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ec4298);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ec41f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ec42b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ec42d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110dbf098);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ec4278);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ec42f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110ec4318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f17558; end: 107f17613; -[SCCloudSyncCreateSnapDocEntrySnapshot hash] */

undefined8 * FUN_107f17558(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107f17724:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107f17730;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[7];
                  if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = (undefined8 *)puVar3[8];
                    if (puVar6 != (undefined8 *)param_3[8]) {
                      func_0x00010c071ae0();
                      goto LAB_107f17730;
                    }
                    goto LAB_107f17724;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107f17730:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107f17614; end: 107f1774b; -[SCCloudSyncCreateSnapDocEntrySnapshot isEqual:] */

long FUN_107f17614(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107f17724:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f17730;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if (lVar3 != *(long *)(param_3 + 0x40)) {
                      func_0x00010c071ae0();
                      goto LAB_107f17730;
                    }
                    goto LAB_107f17724;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107f17730:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107f1774c; end: 107f17753; -[SCCloudSyncCreateSnapDocEntrySnapshot snapDoc] */

undefined8 FUN_107f1774c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f17754; end: 107f1775b; -[SCCloudSyncCreateSnapDocEntrySnapshot userContext] */

undefined8 FUN_107f17754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f1775c; end: 107f17763; -[SCCloudSyncCreateSnapDocEntrySnapshot addSnapEntity] */

undefined8 FUN_107f1775c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f17764; end: 107f1776b; -[SCCloudSyncCreateSnapDocEntrySnapshot dataVaultEncryption] */

undefined8 FUN_107f17764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f1776c; end: 107f17773; -[SCCloudSyncCreateSnapDocEntrySnapshot profile] */

undefined8 FUN_107f1776c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


