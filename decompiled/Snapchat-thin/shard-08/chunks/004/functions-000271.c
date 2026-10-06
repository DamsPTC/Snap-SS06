/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060a980c; end: 1060a987b;  */

void FUN_1060a980c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf2b840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060a987c; end: 1060a9957;  */

void FUN_1060a987c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060a9958; end: 1060a99c7;  */

void FUN_1060a9958(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c093880(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060a99c8; end: 1060a99f7;  */

bool FUN_1060a99c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1060a99f8; end: 1060a9b97;  */

void FUN_1060a99f8(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined *puVar12;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126c7ae0;
    _objc_alloc();
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c0b6900(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar1 + 8);
    uVar4 = *(undefined8 *)(lVar1 + 0x78);
    func_0x00010bf29960(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0x78);
    func_0x00010bf6ffe0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0da400();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0da420();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c090500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0619c0(puVar12,param_2,uVar2,uVar3,uVar11,uVar4,uVar5,uVar9,uVar10,
                        *(undefined8 *)(lVar1 + 0x1f8));
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1060a9b98; end: 1060a9c17;  */

undefined8 FUN_1060a9b98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c090500(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf91920();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1060a9c18; end: 1060a9dbf;  */

void FUN_1060a9c18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR_PTR_1126c7ae8;
    _objc_alloc(PTR_PTR_1126c7ae8);
    uVar2 = *(undefined8 *)(lVar1 + 400);
    func_0x00010c090c40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bec8f80(lVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bf2bbc0();
    uVar6 = *(undefined8 *)(lVar1 + 0x78);
    func_0x00010bf29960(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar1 + 0x1a8);
    func_0x00010c090680(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar1 + 0x100);
    uVar8 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c096dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c0b6900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c022ec0(puVar11,param_2,uVar2,lVar4,uVar5,uVar6,uVar7,uVar12,uVar8,uVar9,uVar10,
                        *(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0xf0));
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1060a9dc0; end: 1060a9e4f;  */

bool FUN_1060a9dc0(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bec8f80(lVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    bVar1 = lVar5 != 0;
    _objc_release(lVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1060a9e50; end: 1060aa317;  */

void FUN_1060a9e50(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    puVar27 = PTR_PTR_1126c7af0;
    _objc_alloc();
    uVar3 = *(undefined8 *)(lVar2 + 0x78);
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + 0x78);
    func_0x00010bf30c00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar2 + 0x78);
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + 0x1a0);
    func_0x00010c0d1d00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010c0d1c60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010c299080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2bbc0();
    func_0x00010bf2bbc0();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1060aa318;
    puStack_88 = &UNK_11084e7d0;
    uVar28 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar28);
    ppuVar9 = &puStack_a0;
    uStack_80 = uVar28;
    FUN_1060aa318();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1060aa464;
    puStack_b0 = &UNK_11084e7d0;
    uVar28 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar28);
    ppuVar10 = &puStack_c8;
    uStack_a8 = uVar28;
    FUN_1060aa464();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar2 + 0x40);
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar2 + 0x20);
    func_0x00010c0b6900();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar14;
    func_0x00010c2bf380();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar28;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bf7f4a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1060aa5b0;
    puStack_d8 = &UNK_11084e7d0;
    uVar29 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar29);
    ppuVar18 = &puStack_f0;
    uStack_d0 = uVar29;
    FUN_1060aa5b0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010c096dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010bf70f80();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar20;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(lVar2 + 0x1b0);
    func_0x00010bf70fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b720();
    uVar22 = *(undefined8 *)(lVar2 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010bf2bd80();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(lVar2 + 0x1a8);
    func_0x00010c090680();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(lVar2 + 0x1c8);
    func_0x00010bef0220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05fd60(puVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar29);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(ppuVar18);
    _objc_release(uStack_d0);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar28);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(ppuVar10);
    _objc_release(uStack_a8);
    _objc_release(ppuVar9);
    _objc_release(uStack_80);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return;
}



/* Entry: 1060aa318; end: 1060aa3f3;  */

void FUN_1060aa318(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060aa3f4; end: 1060aa463;  */

void FUN_1060aa3f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c2726a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060aa464; end: 1060aa53f;  */

void FUN_1060aa464(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060aa540; end: 1060aa5af;  */

void FUN_1060aa540(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c14e820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060aa5b0; end: 1060aa68b;  */

void FUN_1060aa5b0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060aa68c; end: 1060aa78b;  */

void FUN_1060aa68c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c140f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060aa78c; end: 1060aaa33;  */

void FUN_1060aa78c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR_PTR_1126b0148;
    _objc_alloc();
    uVar14 = *(undefined8 *)(lVar2 + 0xc0);
    uVar3 = *(undefined8 *)(lVar2 + 0x1a0);
    func_0x00010bfce220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + 0x78);
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar2 + 0x78);
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010bfce240();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010bf2bbc0();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1060aaa34;
    puStack_88 = &UNK_11084e7d0;
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar15);
    ppuVar8 = &puStack_a0;
    uStack_80 = uVar15;
    FUN_1060aaa34();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1060aab80;
    puStack_b0 = &UNK_11084e7d0;
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar15);
    ppuVar9 = &puStack_c8;
    uStack_a8 = uVar15;
    FUN_1060aab80();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1060aaccc;
    puStack_d8 = &UNK_11084e7d0;
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar15);
    ppuVar10 = &puStack_f0;
    uStack_d0 = uVar15;
    FUN_1060aaccc();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar2 + 0x20);
    func_0x00010c0b6900();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(lVar2 + 8);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf7f4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ff20(puVar17,param_2,uVar14,uVar3,uVar4,uVar5,uVar6,uVar7,ppuVar8,ppuVar9,
                        ppuVar10,0,uVar11,uVar12,uVar16,uVar15,*(undefined8 *)(lVar2 + 0x178));
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(ppuVar10);
    _objc_release(uStack_d0);
    _objc_release(ppuVar9);
    _objc_release(uStack_a8);
    _objc_release(ppuVar8);
    _objc_release(uStack_80);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 1060aaa34; end: 1060aab0f;  */

void FUN_1060aaa34(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060aab10; end: 1060aab7f;  */

void FUN_1060aab10(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf2b840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060aab80; end: 1060aac5b;  */

void FUN_1060aab80(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060aac5c; end: 1060aaccb;  */

void FUN_1060aac5c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c14e820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060aaccc; end: 1060aada7;  */

void FUN_1060aaccc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060aada8; end: 1060aae17;  */

void FUN_1060aada8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c2726a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060aae18; end: 1060aae5f;  */

long FUN_1060aae18(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010beb5300(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1060aae60; end: 1060ab1af;  */

void FUN_1060aae60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
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
  undefined *puVar25;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    puVar25 = PTR_PTR_1126c7af8;
    _objc_alloc();
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010c15b060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + 0x78);
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar2 + 0x1a0);
    func_0x00010c15b0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010bf2bbc0();
    uVar19 = *(undefined8 *)(lVar2 + 0x20);
    uVar22 = *(undefined8 *)(lVar2 + 0x198);
    uVar20 = *(undefined8 *)(lVar2 + 0xd8);
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(lVar2 + 8);
    uVar8 = *(undefined8 *)(lVar2 + 0x60);
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1060ab1b0;
    puStack_88 = &UNK_11084e7d0;
    uVar23 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar23);
    ppuVar9 = &puStack_a0;
    uStack_80 = uVar23;
    FUN_1060ab1b0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1060ab2fc;
    puStack_b0 = &UNK_11084e7d0;
    uVar23 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar23);
    ppuVar10 = &puStack_c8;
    uStack_a8 = uVar23;
    FUN_1060ab2fc();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1060ab448;
    puStack_d8 = &UNK_11084e7d0;
    uVar23 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar23);
    ppuVar11 = &puStack_f0;
    uStack_d0 = uVar23;
    FUN_1060ab448();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf7f4a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar1;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_1060ab594;
    puStack_100 = &UNK_11084e7d0;
    uVar23 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar23);
    ppuVar14 = &puStack_118;
    uStack_f8 = uVar23;
    FUN_1060ab594();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(lVar2 + 0x1c0);
    uVar15 = *(undefined8 *)(lVar2 + 0x1c8);
    func_0x00010bef0220();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(lVar2 + 0x178);
    uVar16 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010c23c780();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c142ea0();
    func_0x00010c0441c0(puVar25,param_2,uVar3,uVar4,uVar5,uVar6,uVar19,uVar22,uVar20,uVar7,0,uVar21,
                        uVar8,0,ppuVar9,ppuVar10,ppuVar11,uVar13,ppuVar14,uVar23,0,uVar15,uVar24,
                        (char)uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(ppuVar14);
    _objc_release(uStack_f8);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(ppuVar11);
    _objc_release(uStack_d0);
    _objc_release(ppuVar10);
    _objc_release(uStack_a8);
    _objc_release(ppuVar9);
    _objc_release(uStack_80);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 1060ab1b0; end: 1060ab28b;  */

void FUN_1060ab1b0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060ab28c; end: 1060ab2fb;  */

void FUN_1060ab28c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c14e820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060ab2fc; end: 1060ab3d7;  */

void FUN_1060ab2fc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060ab3d8; end: 1060ab447;  */

void FUN_1060ab3d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c122c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060ab448; end: 1060ab523;  */

void FUN_1060ab448(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060ab524; end: 1060ab593;  */

void FUN_1060ab524(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c140f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060ab594; end: 1060ab66f;  */

void FUN_1060ab594(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060ab670; end: 1060ab76f;  */

void FUN_1060ab670(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf2b840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060ab770; end: 1060ab82b;  */

void FUN_1060ab770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c7b00;
    _objc_alloc(PTR_PTR_1126c7b00);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf29960(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c150aa0(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x1e0);
    func_0x00010bfd3220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffb3c0(puVar4,param_2,uVar1,uVar2,uVar3,*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060ab82c; end: 1060ab85b;  */

bool FUN_1060ab82c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1060ab85c; end: 1060aba03;  */

void FUN_1060ab85c(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined *puVar12;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126c7b08;
    _objc_alloc();
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010bfb6fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x78);
    func_0x00010bf29960(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0x78);
    func_0x00010bf6ffe0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0da400();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0da420();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar1 + 0x1b0);
    func_0x00010bf70fc0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c29c2c0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0016c0(puVar12,param_2,uVar3,uVar4,uVar5,uVar9,uVar10,uVar11);
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
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1060aba04; end: 1060aba83;  */

undefined8 FUN_1060aba04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfb6fa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071800();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1060aba84; end: 1060abc17;  */

void FUN_1060aba84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126c7b10;
    _objc_alloc(PTR_PTR_1126c7b10);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b9e00;
    _objc_alloc(PTR_PTR_1126b9e00);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc840(puVar3,param_2,uVar5);
    uVar11 = *(undefined8 *)(param_1 + 0x158);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c150aa0(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf29d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x1c8);
    func_0x00010bef0220(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffb540(puVar10,param_2,uVar2,puVar3,uVar11,uVar6,uVar8,uVar9,
                        *(undefined8 *)(param_1 + 8));
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1060abc18; end: 1060abc47;  */

bool FUN_1060abc18(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1060abc48; end: 1060abd0f;  */

void FUN_1060abc48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c7b18;
    _objc_alloc(PTR_PTR_1126c7b18);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf29960(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf299a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf30c00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffb340(puVar4,param_2,uVar1,uVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060abd10; end: 1060abd3f;  */

bool FUN_1060abd10(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1060abd40; end: 1060abdeb;  */

void FUN_1060abd40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c7b20;
    _objc_alloc(PTR_PTR_1126c7b20);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2b460(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 400);
    func_0x00010c090c40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bdca5c0(param_1);
    func_0x00010bffbc60(puVar4,param_2,uVar1,uVar2,lVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060abdec; end: 1060abe1b;  */

bool FUN_1060abdec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1060abe1c; end: 1060abf0b;  */

void FUN_1060abe1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c7b28;
    _objc_alloc(PTR_PTR_1126c7b28);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf29960(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2a060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf52280(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffb520(puVar5,param_2,uVar1,uVar6,uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1060abf0c; end: 1060abf3b;  */

bool FUN_1060abf0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1060abf3c; end: 1060abffb;  */

void FUN_1060abf3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x2b8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11ea20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11ea60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0b7920(uVar1,param_2,uVar2,uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1060abffc; end: 1060ac0d7;  */

void FUN_1060abffc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060ac0d8; end: 1060ac147;  */

void FUN_1060ac0d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf2b840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060ac148; end: 1060ac223;  */

void FUN_1060ac148(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060ac224; end: 1060ac303;  */

void FUN_1060ac224(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c14e820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060ac304; end: 1060ac45f; -[SCCameraCoreFeatureProviderPluginWorkflow _tapToFocusAndExposureCommands] */

undefined * FUN_1060ac304(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c7b40;
  _objc_alloc();
  lVar2 = *(long *)(param_1 + 0x78);
  func_0x00010bf299a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf30c00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffb620(puVar1,param_2,lVar2,uVar3);
  puVar4 = PTR_PTR_1126c7b48;
  puStack_68 = puVar1;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf299a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf30c00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffb620(puVar4,param_2,uVar5,uVar6);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(lVar2 + 0x10);
  func_0x00010c150aa0(lVar2);
  return (undefined *)(ulong)(lVar2 != 0xb);
}



/* Entry: 1060ac460; end: 1060ac47f; -[SCCameraCoreFeatureProviderPluginWorkflow _coolRecordingEnabled] */

bool FUN_1060ac460(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150aa0(lVar1);
  return lVar1 != 0xb;
}



/* Entry: 1060ac480; end: 1060ac497; -[SCCameraCoreFeatureProviderPluginWorkflow _ghostImageAnimationDisabled] */

void FUN_1060ac480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf0),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e3d038,0,0);
  return;
}



/* Entry: 1060ac498; end: 1060ac7bf; -[SCCameraCoreFeatureProviderPluginWorkflow _cameraModeSelectionManagerFeatures:] */

void FUN_1060ac498(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar2 = param_3;
  func_0x00010c11a2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2726a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c11a2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c11a2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c11a2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf7f420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c11a2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfce220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c11a2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c249ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c11a2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c270700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c11a2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c140f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_1 + 0x28);
  func_0x00010c104920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf87260();
  _objc_release(uVar5);
  _objc_release(uVar4);
  if ((uVar6 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c11a2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfea440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8360(puVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c11a2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf7f360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1060ac7c0; end: 1060ac81f; -[SCCameraCoreFeatureProviderPluginWorkflow _alwaysOnCarouselEnabled] */

undefined8 FUN_1060ac7c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c091180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf02120();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1060ac820; end: 1060ac947; -[SCCameraCoreFeatureProviderPluginWorkflow _supportedCameraModes:] */

void FUN_1060ac820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c0d1c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c1295e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfce220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c15b000(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8360(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0da400(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bef8360(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060ac948; end: 1060ac95b;  */

void FUN_1060ac948(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1060ac95c; end: 1060acd4b; -[SCCameraCoreFeatureProviderPluginWorkflow .cxx_destruct] */

void FUN_1060ac95c(long param_1)

{
  _objc_storeStrong(param_1 + 0x2c0,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_destroyWeak(param_1 + 0x2a8);
  _objc_destroyWeak(param_1 + 0x2a0);
  _objc_destroyWeak(param_1 + 0x298);
  _objc_destroyWeak(param_1 + 0x290);
  _objc_destroyWeak(param_1 + 0x288);
  _objc_destroyWeak(param_1 + 0x280);
  _objc_destroyWeak(param_1 + 0x278);
  _objc_destroyWeak(param_1 + 0x270);
  _objc_destroyWeak(param_1 + 0x268);
  _objc_destroyWeak(param_1 + 0x260);
  _objc_destroyWeak(param_1 + 600);
  _objc_destroyWeak(param_1 + 0x250);
  _objc_destroyWeak(param_1 + 0x248);
  _objc_destroyWeak(param_1 + 0x240);
  _objc_destroyWeak(param_1 + 0x238);
  _objc_destroyWeak(param_1 + 0x230);
  _objc_destroyWeak(param_1 + 0x228);
  _objc_destroyWeak(param_1 + 0x220);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
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



/* Entry: 1060acd4c; end: 1060aceb3;  */

void FUN_1060acd4c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3d058;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e3d058,
                      &PTR____CFConstantStringClassReference_110e3d078,0);
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



/* Entry: 1060aceb4; end: 1060ad0b7; -[SCFeatureCTRecommendationImpl initWithLensCarouselFeatureServices:musicRecommendationServices:scopedCameraType:musicServices:musicExperiments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1060aceb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126ef880;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_78,puVar1);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273eaa4);
    *(undefined **)((long)puVar1 + (long)_DAT_11273eaa4) = puVar2;
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010c090c40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_78);
    _objc_retain(param_4);
    uStack_80 = param_5;
    _objc_retain(param_6);
    puVar2 = PTR_PTR_1126ae790;
    puVar3 = puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1060ad0b8; end: 1060ad13f;  */

void FUN_1060ad0b8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    lVar1 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010beab460(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060ad140; end: 1060ad143; -[SCFeatureCTRecommendationImpl activate] */

void FUN_1060ad140(void)

{
  return;
}



/* Entry: 1060ad144; end: 1060ad147; -[SCFeatureCTRecommendationImpl configureWithView:] */

void FUN_1060ad144(void)

{
  return;
}



/* Entry: 1060ad148; end: 1060ad167; -[SCFeatureCTRecommendationImpl currentCTRecommendationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ad148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb26b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273eaa4),PTR_s_flatMapLatest__1125ca350,
             &PTR___NSConcreteGlobalBlock_11090c810);
  return;
}



/* Entry: 1060ad168; end: 1060ad187; -[SCFeatureCTRecommendationImpl currentRecommendationsDict] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ad168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb26b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273eaa4),PTR_s_flatMapLatest__1125ca350,
             &PTR___NSConcreteGlobalBlock_11090c830);
  return;
}



/* Entry: 1060ad188; end: 1060ad1e7; -[SCFeatureCTRecommendationImpl removeRecommendationWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ad188(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_11273eaa4);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12dee0(lVar1,param_2,param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060ad1e8; end: 1060ad3b7; -[SCFeatureCTRecommendationImpl _setupCTRecommendationsManagerWithMusicRecommendationServices:scopedCameraType:musicServices:lensCarouselManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ad1e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar7 = PTR_PTR_1126c4410;
  if (param_4 == 3) {
    _objc_retain(param_5);
    _objc_alloc(puVar7);
    uVar1 = param_5;
    func_0x00010bf9c660(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    uVar2 = uVar1;
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b6680();
    func_0x00010bffa800(puVar7,param_2,&PTR____CFConstantStringClassReference_110e3d258);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  uVar1 = param_3;
  func_0x00010c1231e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c7aa8;
  func_0x00010bdf6360(PTR_PTR_1126c7aa8,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c7aa8;
  func_0x00010bdf6780(PTR_PTR_1126c7aa8,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c7aa8;
  func_0x00010c25dae0(PTR_PTR_1126c7aa8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf582a0(uVar2,param_2,puVar3,puVar4,puVar7,puVar5,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11273eaa4),param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060ad3b8; end: 1060ad407; +[SCFeatureCTRecommendationImpl _currentCTContextObservableWithLensCarouselManager:] */

void FUN_1060ad3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bef0b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060ad408; end: 1060ad523;  */

void FUN_1060ad408(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d3a80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126c7aa8;
    puVar5 = PTR_PTR_1126ae750;
    if (lVar3 == 0) {
      lVar1 = param_2;
      func_0x00010c0ec5e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdeb9c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ec800(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(lVar1);
      goto LAB_1060ad508;
    }
  }
  puVar5 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
LAB_1060ad508:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1060ad524; end: 1060ad63f; +[SCFeatureCTRecommendationImpl _ctContextsObservableWithLensCarouselManager:] */

void FUN_1060ad524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef0d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c14f680(uVar1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_11090c870);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf870a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c095ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010bf870a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf41860(uVar1,param_2,uVar5,&PTR___NSConcreteGlobalBlock_11090c8b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1060ad640; end: 1060ad6a3;  */

void FUN_1060ad640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_2;
  func_0x00010bf1f3c0();
  uVar1 = param_2;
  if ((int)uVar2 == 0) {
    uVar1 = param_3;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060ad6a4; end: 1060ad717;  */

void FUN_1060ad6a4(undefined8 param_1,int param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010bf1f3c0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if ((param_2 != 0) &&
     (lVar1 = param_3, func_0x00010bf529e0(), puVar2 = PTR____NSArray0__struct_11034ab48, lVar1 != 0
     )) {
    puVar2 = PTR_PTR_1126c7aa8;
    func_0x00010bdeb980(PTR_PTR_1126c7aa8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060ad718; end: 1060ad7af; +[SCFeatureCTRecommendationImpl _createCTContextWithLensMetadata:] */

void FUN_1060ad718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c43f0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126c4400;
  _objc_opt_new(PTR_PTR_1126c4400);
  uVar3 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1bbd60(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c1bb420(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060ad7b0; end: 1060ad857; +[SCFeatureCTRecommendationImpl _createCTContextArrayWithLensMetadatas:] */

void FUN_1060ad7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1060ad858;
  puStack_30 = &UNK_11090c8d0;
  _objc_retain();
  puStack_28 = puVar2;
  func_0x00010bf97e80(param_3,param_2,&puStack_48);
  _objc_release(param_3);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060ad858; end: 1060ad8e3;  */

void FUN_1060ad858(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if (((uVar2 & 1) == 0) && (uVar2 = param_2, func_0x00010c07f200(), (uVar2 & 1) == 0)) {
    puVar1 = PTR_PTR_1126c7aa8;
    func_0x00010bdeb9c0(PTR_PTR_1126c7aa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060ad8e4; end: 1060ad90b; +[SCFeatureCTRecommendationImpl stringifyScopedCameraType:] */

undefined ** FUN_1060ad8e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xd) {
    return (undefined **)(&PTR_PTR_11090c900)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e3d278;
}



/* Entry: 1060ad90c; end: 1060ad91f; -[SCFeatureCTRecommendationImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ad90c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273eaa4,0);
  return;
}



/* Entry: 1060ad920; end: 1060adb93; -[SCFeatureMusicFavoritesButtonImpl initWithUserDataFeedService:notificationPresenter:trackId:musicFeature:blizzardLogger:sourcePageType:contextSessionId:creativeToolsABProvider:lensCarouselManager:favoriteToSaveEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1060ad920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ef888;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010841fab4();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126be9e8;
    _objc_alloc();
    func_0x00010c01b3c0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273eaa8);
    *(undefined **)((long)puVar1 + (long)_DAT_11273eaa8) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273eaac;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273eab0);
    *(undefined **)((long)puVar1 + (long)_DAT_11273eab0) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273eab4;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273eab8);
    *(undefined **)((long)puVar1 + (long)_DAT_11273eab8) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273eabc;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273eac0;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273eac4) = param_8;
    lVar4 = (long)_DAT_11273eac8;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273eacc;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273ead0;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273ead4) = param_12;
    _objc_release(param_5);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1060adb94; end: 1060ade97; -[SCFeatureMusicFavoritesButtonImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060adb94(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273eaac);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c291a20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0e0ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1060ade98;
  puStack_88 = &UNK_11090c968;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar5 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273ead0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0e0ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1060adf54;
  puStack_b0 = &UNK_110842a38;
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar5 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11273eabc);
  func_0x00010bfa1820(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0d32c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 1060ade98; end: 1060ae08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ade98(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c071ae0();
    if ((int)lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010bf33240();
      _objc_release(lVar1);
      if (lVar2 != 1) goto LAB_1060adf38;
      lVar1 = param_2;
      func_0x00010bfa1240(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010bed7e60(param_1);
    }
    _objc_release(lVar1);
  }
LAB_1060adf38:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060ae08c; end: 1060ae233; -[SCFeatureMusicFavoritesButtonImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ae08c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  lVar3 = (long)_DAT_11273ead8;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  _objc_retain(param_3);
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1aab40();
  func_0x0001008522a8();
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273eaa8);
  func_0x00010bfe5e40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0a00(param_1);
  _objc_release(uVar2);
  _objc_storeWeak(param_1 + _DAT_11273eadc,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be49170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__layoutFeatureContainer__11256fdf8,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 1060ae234; end: 1060ae497; -[SCFeatureMusicFavoritesButtonImpl _layoutFeatureContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ae234(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  uint uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_3;
  _objc_retain(param_3);
  uVar10 = (uint)lVar3;
  lVar13 = (long)_DAT_11273eadc;
  lVar3 = param_1 + lVar13;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_1 + lVar13;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bfe12e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c219b60(param_3);
    lVar3 = lVar4;
    func_0x00010befbb60();
    iVar2 = (int)lVar3;
    func_0x0001008522a8();
    lVar5 = param_3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar13;
    _objc_loadWeakRetained(lVar3);
    lVar7 = lVar3;
    lVar8 = lVar5;
    if (iVar2 == 0) {
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf493c0(0xc014000000000000);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c149040();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf493c0(0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
    }
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(lVar5);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar3 = param_3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar13;
    _objc_loadWeakRetained(param_1);
    lVar13 = param_1;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar13;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010beef8c0(puVar1);
    uVar10 = (uint)puVar11;
    _objc_release(puVar9);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar13);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_11273ead8),PTR_s_setHidden__1126479f8,uVar10 ^ 1);
  return;
}



/* Entry: 1060ae498; end: 1060ae4ab; -[SCFeatureMusicFavoritesButtonImpl setCameraUIVisible:animated:arbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ae498(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273ead8),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 1060ae4ac; end: 1060ae513; -[SCFeatureMusicFavoritesButtonImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060ae4ac(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273ead8;
  uVar1 = *(ulong *)(param_1 + lVar3);
  if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfb68e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return uVar2;
  }
  return 0;
}



/* Entry: 1060ae514; end: 1060ae5e3; -[SCFeatureMusicFavoritesButtonImpl _updateActivationState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ae514(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  
  lVar1 = (long)_DAT_11273eae0;
  cVar2 = *(char *)(param_1 + lVar1);
  if ((*(char *)(param_1 + _DAT_11273eae4) == '\x01') &&
     (lVar3 = param_1, func_0x00010be420c0(), (int)lVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273ead8);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273ead8);
    if (*(long *)(param_1 + _DAT_11273eaa8) != 0) {
      func_0x00010c1a7f60(uVar4,param_2,0);
      cVar5 = '\x01';
      goto LAB_1060ae598;
    }
  }
  func_0x00010c1a7f60(uVar4,param_2,1);
  cVar5 = '\0';
LAB_1060ae598:
  *(char *)(param_1 + lVar1) = cVar5;
  if (cVar2 == cVar5) {
    return;
  }
  param_1 = param_1 + _DAT_11273eadc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c138480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060ae5e4; end: 1060ae7b7; -[SCFeatureMusicFavoritesButtonImpl _updateFavoritesState:] */

void FUN_1060ae5e4(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 1060ae7b8; end: 1060ae7c7; -[SCFeatureMusicFavoritesButtonImpl _setLensesActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ae7b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273eae4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed27b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateActivationState_112592390);
  return;
}



/* Entry: 1060ae7c8; end: 1060ae90f; -[SCFeatureMusicFavoritesButtonImpl _favoritesButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ae7c8(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  byte bStack_50;
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + _DAT_11273eaa8) != 0) {
    lVar5 = (long)_DAT_11273eae8;
    cVar1 = *(char *)(param_1 + lVar5);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273eaac);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    if (cVar1 == '\x01') {
      func_0x00010c12c360();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bef81c0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar3);
    bVar2 = *(byte *)(param_1 + lVar5);
    _objc_initWeak(auStack_48,param_1);
    bStack_50 = bVar2 ^ 1;
    _objc_copyWeak(auStack_58,auStack_48);
    func_0x00010c297260(uVar4);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 1060ae910; end: 1060aead3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ae910(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      if (*(char *)(lVar1 + _DAT_11273ead4) == '\x01') {
        if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
          func_0x00010be36820();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010be367e0();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        func_0x00010be36920(lVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010be368e0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar3 = PTR_PTR_1126bfd18;
      _objc_alloc();
      func_0x00010c03e040();
      lVar4 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar4);
      func_0x00010be4fc20();
      _objc_release(lVar4);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,param_1 + 0x20);
      _objc_retain(puVar3);
      uStack_58 = *(undefined1 *)(param_1 + 0x28);
      func_0x00010c0f7fc0(lVar4);
      _objc_release(lVar4);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_60);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1060aead4; end: 1060aeb1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060aead4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c25f100(*(undefined8 *)(lVar1 + _DAT_11273eab4),param_2,
                        *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x30),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060aeb20; end: 1060aec3b; -[SCFeatureMusicFavoritesButtonImpl _logAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060aeb20(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3d418;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3d438;
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273eac4);
  _objc_retain(ppuVar1);
  func_0x00010bc9107c(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7b58;
  _objc_opt_new(PTR_PTR_1126c7b58);
  func_0x00010c161c40();
  _objc_release(ppuVar1);
  func_0x00010c1833c0(puVar2,param_2,*(undefined8 *)(param_1 + _DAT_11273eac8));
  func_0x00010c185ae0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e33d18);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273eaa8);
  func_0x00010bfe5e40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c206c40(puVar2,param_2,uVar4);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273eac0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1060aec3c; end: 1060aedbf; -[SCFeatureMusicFavoritesButtonImpl _updateStateForTrackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060aec3c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273eaa8);
    *(undefined8 *)(param_1 + _DAT_11273eaa8) = 0;
    _objc_release(uVar3);
    func_0x00010bed27a0(param_1);
  }
  else {
    puVar1 = PTR_PTR_1126be9e8;
    _objc_alloc();
    func_0x00010c01b3c0();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273eaa8);
    *(undefined **)(param_1 + _DAT_11273eaa8) = puVar1;
    _objc_release(uVar3);
    func_0x00010bed27a0(param_1);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273eaac);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0726a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1060aedc0; end: 1060aee27;  */

void FUN_1060aedc0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bed7e60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060aee28; end: 1060aee6f; -[SCFeatureMusicFavoritesButtonImpl _isMusicCameraFavoriteButtonIgnoreLensCarouselDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060aee28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273eacc);
  func_0x00010c087020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078240();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1060aee70; end: 1060aeeeb; -[SCFeatureMusicFavoritesButtonImpl _iconHeartFillDarkModeImage] */

void FUN_1060aee70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x14d,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060aeeec; end: 1060aef67; -[SCFeatureMusicFavoritesButtonImpl _iconHeartFillImage] */

void FUN_1060aeeec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x14d,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060aef68; end: 1060aefe3; -[SCFeatureMusicFavoritesButtonImpl _iconHeartOutlineDarkModeImage] */

void FUN_1060aef68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x14e,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060aefe4; end: 1060af05f; -[SCFeatureMusicFavoritesButtonImpl _iconHeartOutlineImage] */

void FUN_1060aefe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x14e,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060af060; end: 1060af0db; -[SCFeatureMusicFavoritesButtonImpl _iconBookmarkFillDarkModeImage] */

void FUN_1060af060(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x59,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060af0dc; end: 1060af157; -[SCFeatureMusicFavoritesButtonImpl _iconBookmarkFillImage] */

void FUN_1060af0dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x59,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060af158; end: 1060af1d3; -[SCFeatureMusicFavoritesButtonImpl _iconBookmarkOutlineDarkModeImage] */

void FUN_1060af158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x5a,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


