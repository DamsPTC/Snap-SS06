/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10613646c; end: 10613672b;  */

void FUN_10613646c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
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
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
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
  
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar4 == 0) {
    puVar26 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c8480;
    _objc_alloc();
    uVar6 = *(undefined8 *)(lVar4 + 8);
    func_0x00010bf2bbc0();
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR___NSConcreteStackBlock_11034bd00;
    uVar1 = *(undefined8 *)(lVar4 + 0x140);
    uVar2 = *(undefined8 *)(lVar4 + 0x148);
    uVar17 = *(undefined8 *)(lVar4 + 0xb0);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10613672c;
    puStack_88 = &UNK_11084e7d0;
    uVar22 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar22);
    ppuVar8 = &puStack_a0;
    uStack_80 = uVar22;
    FUN_10613672c();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar4 + 0x118);
    func_0x00010c090c40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(lVar4 + 0x28);
    uVar10 = *(undefined8 *)(lVar4 + 0x10);
    func_0x00010c0b6900();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(lVar4 + 0x68);
    puStack_c8 = puVar26;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106136878;
    puStack_b0 = &UNK_11084e7d0;
    uVar22 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar22);
    ppuVar11 = &puStack_c8;
    uStack_a8 = uVar22;
    FUN_106136878();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(lVar4 + 0xd0);
    uVar21 = *(undefined8 *)(lVar4 + 0xb8);
    uVar12 = *(undefined8 *)(lVar4 + 0x98);
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(lVar4 + 0x178);
    uVar3 = *(undefined8 *)(lVar4 + 0x180);
    uVar24 = *(undefined8 *)(lVar4 + 0x170);
    uVar25 = *(undefined8 *)(lVar4 + 0x208);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010befe700();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c08d540();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(lVar4 + 600);
    uVar27 = *(undefined8 *)(lVar4 + 0x250);
    uVar23 = *(undefined8 *)(lVar4 + 400);
    uVar16 = *(undefined8 *)(lVar4 + 0x268);
    func_0x00010bef0220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc160(puVar5,param_2,uVar6,uVar7,uVar1,uVar2,uVar17,ppuVar8,uVar9,uVar18,uVar10,
                        uVar19,ppuVar11,uVar20,uVar21,uVar12,uVar3,uVar24,uVar22,uVar25,uVar15,
                        uVar27,uVar28,uVar23,uVar16);
    puVar26 = puVar5;
    func_0x00010c09ac60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(ppuVar11);
    _objc_release(uStack_a8);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(ppuVar8);
    _objc_release(uStack_80);
    _objc_release(uVar7);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return;
}



/* Entry: 10613672c; end: 106136807;  */

void FUN_10613672c(long param_1)

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



/* Entry: 106136808; end: 106136877;  */

void FUN_106136808(long param_1)

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
    func_0x00010c0d20c0(param_1);
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



/* Entry: 106136878; end: 106136953;  */

void FUN_106136878(long param_1)

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



/* Entry: 106136954; end: 1061369c3;  */

void FUN_106136954(long param_1)

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



/* Entry: 1061369c4; end: 106136a63;  */

undefined8 FUN_1061369c4(long param_1)

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
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf45e20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf7f280();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf926c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 106136a64; end: 106136bb3;  */

void FUN_106136a64(long param_1)

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



/* Entry: 106136bb4; end: 106136e73;  */

void FUN_106136bb4(long param_1,undefined8 param_2)

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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
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
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar18 = PTR_PTR_1126b0148;
    _objc_alloc();
    uVar15 = *(undefined8 *)(lVar2 + 0xd8);
    uVar3 = *(undefined8 *)(lVar2 + 0x108);
    func_0x00010bfce220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + 0x98);
    func_0x00010bf29960(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar2 + 0x98);
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfce240();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar2 + 8);
    func_0x00010bf2bbc0();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106136e74;
    puStack_88 = &UNK_11084e7d0;
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar16);
    ppuVar9 = &puStack_a0;
    uStack_80 = uVar16;
    FUN_106136e74();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106136fc0;
    puStack_b0 = &UNK_11084e7d0;
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar16);
    ppuVar10 = &puStack_c8;
    uStack_a8 = uVar16;
    FUN_106136fc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_10613710c;
    puStack_d8 = &UNK_11084e7d0;
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar16);
    ppuVar11 = &puStack_f0;
    uStack_d0 = uVar16;
    FUN_10613710c();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010c0b6900();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(lVar2 + 0x18);
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf7f4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ff20(puVar18,param_2,uVar15,uVar3,uVar4,uVar5,uVar7,uVar8,ppuVar9,ppuVar10,
                        ppuVar11,0,uVar12,uVar13,uVar17,uVar16,*(undefined8 *)(lVar2 + 0x70));
    _objc_release(uVar16);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(ppuVar11);
    _objc_release(uStack_d0);
    _objc_release(ppuVar10);
    _objc_release(uStack_a8);
    _objc_release(ppuVar9);
    _objc_release(uStack_80);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 106136e74; end: 106136f4f;  */

void FUN_106136e74(long param_1)

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



/* Entry: 106136f50; end: 106136fbf;  */

void FUN_106136f50(long param_1)

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



/* Entry: 106136fc0; end: 10613709b;  */

void FUN_106136fc0(long param_1)

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



/* Entry: 10613709c; end: 10613710b;  */

void FUN_10613709c(long param_1)

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



/* Entry: 10613710c; end: 1061371e7;  */

void FUN_10613710c(long param_1)

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



/* Entry: 1061371e8; end: 106137257;  */

void FUN_1061371e8(long param_1)

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



/* Entry: 106137258; end: 106137307;  */

undefined8 FUN_106137258(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf45e20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfce240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf2bbc0(uVar4);
    uVar5 = uVar3;
    func_0x00010c0718c0(uVar3,param_2,uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 106137308; end: 1061374c7;  */

void FUN_106137308(long param_1)

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



/* Entry: 1061374c8; end: 106137613;  */

void FUN_1061374c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126c8490;
    _objc_alloc(PTR_PTR_1126c8490);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106137614;
    puStack_60 = &UNK_11084e7d0;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    ppuVar2 = &puStack_78;
    uStack_58 = uVar5;
    FUN_106137614(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bf2b640(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar1 + 0x168);
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    func_0x00010bfa2b80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010bf45e20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff27c0(puVar7,param_2,ppuVar2,uVar5,uVar6,uVar3,uVar4,*(undefined8 *)(lVar1 + 0xb0)
                       );
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(ppuVar2);
    _objc_release(uStack_58);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106137614; end: 1061376ef;  */

void FUN_106137614(long param_1)

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



/* Entry: 1061376f0; end: 10613775f;  */

void FUN_1061376f0(long param_1)

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
    func_0x00010befe700(param_1);
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



/* Entry: 106137760; end: 1061377a7;  */

long FUN_106137760(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bde8740(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1061377a8; end: 106137817;  */

void FUN_1061377a8(long param_1)

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



/* Entry: 106137818; end: 1061378f3;  */

void FUN_106137818(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c8498;
    _objc_alloc(PTR_PTR_1126c8498);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2b3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(lVar1 + 0x10);
    uVar4 = *(undefined8 *)(lVar1 + 0xa0);
    func_0x00010c1302a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffbc40(puVar6,param_2,uVar3,uVar5,uVar7,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1061378f4; end: 10613795f;  */

undefined8 FUN_1061378f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c075120();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 106137960; end: 106137977;  */

void FUN_106137960(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106137978; end: 1061379af;  */

void FUN_106137978(long param_1,undefined8 param_2)

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



/* Entry: 1061379b0; end: 106137a27; -[SCCameraMainCameraFeatureProviderPluginWorkflow _contextualSurveyPromptEnabled] */

undefined8 FUN_1061379b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf45e20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4f9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf926c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 106137a28; end: 106137e1b; -[SCCameraMainCameraFeatureProviderPluginWorkflow .cxx_destruct] */

void FUN_106137a28(long param_1)

{
  _objc_destroyWeak(param_1 + 0x298);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
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
  _objc_destroyWeak(param_1 + 0xe8);
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



/* Entry: 106137e1c; end: 106138003; -[SCFeatureAudioSessionEarlyActivatorImpl initWithApplicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106137e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126efda0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740384);
    *(undefined **)((long)puVar1 + (long)_DAT_112740384) = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = param_3;
    func_0x00010c2a6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106138004;
    puStack_88 = &UNK_110846510;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010bf75dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106138004; end: 10613805b;  */

void FUN_106138004(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeb040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613805c; end: 1061381db; -[SCFeatureAudioSessionEarlyActivatorImpl _willEnterForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613805c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  *(undefined1 *)(param_1 + _DAT_112740388) = 0;
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126c82e8;
  func_0x00010beef760(PTR_PTR_1126c82e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf28e80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae970;
  func_0x00010bfe2ec0(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2a1620(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1061381dc; end: 106138207;  */

void FUN_1061381dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc4860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106138208; end: 10613825f; -[SCFeatureAudioSessionEarlyActivatorImpl _didEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106138208(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112740388) = 1;
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274038c);
  *(undefined8 *)(param_1 + _DAT_11274038c) = 0;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106138260; end: 106138347; -[SCFeatureAudioSessionEarlyActivatorImpl _activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106138260(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar4 = (long)_DAT_11274038c;
  if ((*(long *)(param_1 + lVar4) == 0) && ((*(byte *)(param_1 + _DAT_112740388) & 1) == 0)) {
    puVar1 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c154dc0();
    _objc_release(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
      func_0x00010c22ba80(PTR__OBJC_CLASS___AVAudioSession_1126b6de8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1624c0();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b6e10;
      _objc_alloc_init();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar1;
      _objc_release(uVar3);
    }
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106138348; end: 106138357; -[SCFeatureAudioSessionEarlyActivatorImpl token] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106138348(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274038c);
}



/* Entry: 106138358; end: 106138397; -[SCFeatureAudioSessionEarlyActivatorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106138358(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274038c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740384,0);
  return;
}



/* Entry: 106138398; end: 106138403; -[SCBatchCaptureActionButton initWithFrame:] */

undefined1 * FUN_106138398(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126efda8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c198080(puVar1);
    func_0x00010c160fc0(puVar1);
    func_0x00010beb0160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106138404; end: 10613864b; -[SCBatchCaptureActionButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106138404(long param_1)

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
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126efda8;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112740390));
  func_0x00010bf20c00(param_1);
  lVar12 = (long)_DAT_112740394;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar12));
  lVar11 = (long)_DAT_112740398;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = *(long *)(param_1 + lVar11);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  lStack_a0 = lVar1;
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  lStack_88 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c274200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493c0(0x4022000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  uStack_80 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  uStack_78 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a8);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(uVar2);
  lVar1 = lStack_a0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10613864c;
  puStack_d8 = PTR_PTR_1126efda8;
  lStack_e0 = lVar1;
  uStack_d0 = uVar8;
  puStack_c8 = puVar10;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_e0,PTR_s_setHighlighted__112647c38);
  func_0x00010c1a7f60(*(undefined8 *)(lVar1 + _DAT_112740394));
  return;
}



/* Entry: 10613864c; end: 1061386a3; -[SCBatchCaptureActionButton setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613864c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126efda8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setHighlighted__112647c38);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112740394));
  return;
}



/* Entry: 1061386a4; end: 1061387e7; -[SCBatchCaptureActionButton scaleDown] */

void FUN_1061386a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  func_0x00010c103b20(param_1);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103b20();
  _objc_release(uVar1);
  func_0x00010c1677c0(0x3ff0000000000000,param_1);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(param_1,param_2,&uStack_50);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x106138788;
  puStack_60 = &UNK_110842e18;
  uStack_58 = param_1;
  func_0x00010bf03420(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_78,0);
  return;
}



/* Entry: 1061387e8; end: 106138a2b; -[SCBatchCaptureActionButton scaleUp] */

void FUN_1061387e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  func_0x00010c103b20(param_1);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103b20();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c074c20();
  uVar5 = 0;
  if ((int)uVar1 == 0) {
    uVar5 = 0x3fe0000000000000;
  }
  func_0x00010c1677c0(uVar5,param_1);
  _CGAffineTransformMakeScale(&uStack_a0,0x3fe999999999999a,0x3fe999999999999a);
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  func_0x00010c219960(param_1,param_2,&uStack_d0);
  puVar2 = PTR_PTR_1126c4230;
  func_0x00010bf04100(PTR_PTR_1126c4230,param_2,&PTR____CFConstantStringClassReference_110ee4218);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193240(0x4079000000000000);
  dVar6 = 25.0;
  func_0x00010c193200(0x4039000000000000,puVar2);
  _CACurrentMediaTime();
  func_0x00010c16fd40(dVar6 + 0.1,puVar2);
  func_0x00010c216920(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184660);
  puVar3 = PTR_PTR_1126c4230;
  func_0x00010bf04100(PTR_PTR_1126c4230,param_2,&PTR____CFConstantStringClassReference_110ee3ff8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193240(0x4079000000000000);
  dVar6 = 25.0;
  func_0x00010c193200(0x4039000000000000,puVar3);
  _CACurrentMediaTime();
  func_0x00010c16fd40(dVar6 + 0.1,puVar3);
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(0x3fe999999999999a,0x3fe999999999999a,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c103a40(param_1,param_2,puVar2,&PTR____CFConstantStringClassReference_110ee4218);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a40();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 106138a2c; end: 106138c23; -[SCBatchCaptureActionButton setThumbnail:withTotalCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106138a2c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274039c));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127403a0));
  }
  else {
    uVar1 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106138c24;
    puStack_58 = &UNK_110841f80;
    _objc_retain(param_3);
    lStack_50 = param_3;
    lStack_48 = param_1;
    func_0x00010007380c(uVar1,&puStack_70);
    _objc_release(uVar1);
    uVar1 = 0x402c000000000000;
    if (9 < param_4) {
      uVar1 = 0x4024000000000000;
    }
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfe05a0(uVar1,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_1127403a0;
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar2);
    _objc_release(lStack_50);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106138c24; end: 106138cf3;  */

void FUN_106138c24(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c14e6c0(0x402c000000000000,0x4036000000000000,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106138cf4;
  puStack_48 = &UNK_110841f80;
  uStack_40 = *(undefined8 *)(param_2 + 0x28);
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 106138cf4; end: 106138d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106138cf4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274039c;
  func_0x00010c1a9f00(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),param_2,
                      *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 106138d30; end: 106138db7; -[SCBatchCaptureActionButton _setupSubViews] */

void FUN_106138d30(undefined8 param_1)

{
  func_0x00010c0ef5a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0efe60(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c26d7e0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c26dee0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c26d9e0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf6e520(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf0a220(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106138db8; end: 106138efb; -[SCBatchCaptureActionButton overlayBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106138db8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar4 = (long)_DAT_112740390;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4034000000000000);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106138efc;
    puStack_50 = &UNK_1108471b0;
    lStack_48 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106138efc; end: 106138f63;  */

void FUN_106138efc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106138f64; end: 1061390db; -[SCBatchCaptureActionButton overlayView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106138f64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar4 = (long)_DAT_112740394;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4034000000000000);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0x3dcccccd);
    _objc_release(uVar2);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1061390dc;
    puStack_50 = &UNK_1108471b0;
    lStack_48 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1061390dc; end: 106139143;  */

void FUN_1061390dc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106139144; end: 10613934f; -[SCBatchCaptureActionButton thumbnailBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106139144(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = (long)_DAT_112740398;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4008000000000000);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c1677c0(0x3fe199999999999a,*(undefined8 *)(param_1 + lVar5));
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5));
    puVar1 = PTR_PTR_1126b08d8;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010085b3c8(0x4014000000000000,0x3fb999999999999a,0,0x3ff0000000000000,puVar1,uVar3,
                        puVar2);
    _objc_release(puVar2);
    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    _CGAffineTransformRotate(&uStack_80,0xbfc65718eb895076,&uStack_b0);
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    _CGAffineTransformScale(&uStack_e0,0x3feccccccccccccd,0x3feccccccccccccd,&uStack_b0);
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    func_0x00010c219960(*(undefined8 *)(param_1 + lVar5));
    func_0x00010befbb60(param_1);
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106139350; end: 10613941b;  */

void FUN_106139350(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10613941c; end: 10613966b; -[SCBatchCaptureActionButton thumbnailImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613941c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11274039c;
  lVar9 = *(long *)(param_1 + lVar10);
  if (lVar9 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar1;
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4008000000000000);
    _objc_release(uVar8);
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar10));
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar10));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
    puVar1 = PTR_PTR_1126b08d8;
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010085b3c8(0x4014000000000000,0x3fb999999999999a,0,0x3ff0000000000000,puVar1,uVar8,
                        puVar2);
    _objc_release(puVar2);
    func_0x00010befbb60(param_1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(lVar9);
    _objc_release(uVar3);
    lVar9 = *(long *)(param_1 + lVar10);
  }
  lVar10 = lVar9;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lVar7 = (long)_DAT_1127403a0;
    lVar9 = *(long *)(lVar10 + lVar7);
    if (lVar9 == 0) {
      puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_opt_new();
      uVar8 = *(undefined8 *)(lVar10 + lVar7);
      *(undefined **)(lVar10 + lVar7) = puVar1;
      _objc_release(uVar8);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(lVar10 + lVar7));
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bfe05a0(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(lVar10 + lVar7));
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar8 = *(undefined8 *)(lVar10 + lVar7);
      func_0x00010c08c0e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe740();
      _objc_release(uVar8);
      _objc_release(puVar1);
      uVar8 = *(undefined8 *)(lVar10 + lVar7);
      func_0x00010c08c0e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe7a0(0,0x3ff0000000000000);
      _objc_release(uVar8);
      uVar8 = *(undefined8 *)(lVar10 + lVar7);
      func_0x00010c08c0e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe840(0x4010000000000000);
      _objc_release(uVar8);
      func_0x00010c21e900(*(undefined8 *)(lVar10 + lVar7));
      func_0x00010befbb60(lVar10);
      func_0x00010c0bbfc0(*(undefined8 *)(lVar10 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar9 = *(long *)(lVar10 + lVar7);
    }
    _objc_retain(lVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 10613966c; end: 106139833; -[SCBatchCaptureActionButton thumbnailCountLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613966c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar4 = (long)_DAT_1127403a0;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfe05a0(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4010000000000000);
    _objc_release(uVar2);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106139834;
    puStack_50 = &UNK_1108471b0;
    lStack_48 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106139834; end: 1061398bb;  */

void FUN_106139834(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26dee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061398bc; end: 106139a93; -[SCBatchCaptureActionButton descriptionLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061398bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar4 = (long)_DAT_1127403a4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010619f6dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x106139a2c;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c26b700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(param_1,param_2,uVar2);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106139a94; end: 106139d37; -[SCBatchCaptureActionButton arrowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106139a94(undefined8 param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_1127403a8;
  lVar9 = *(long *)(param_4 + lVar10);
  if (lVar9 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0xd4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    param_2 = 0x4028000000000000;
    puVar3 = PTR_PTR_1126b0c40;
    func_0x00010bfe7aa0(0x4028000000000000,0x4028000000000000,PTR_PTR_1126b0c40,param_5,0x87,puVar2)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_5,puVar3);
    uVar8 = *(undefined8 *)(param_4 + lVar10);
    *(undefined **)(param_4 + lVar10) = puVar1;
    _objc_release(uVar8);
    _objc_release(puVar3);
    func_0x00010c21e900(*(undefined8 *)(param_4 + lVar10),param_5,0);
    func_0x00010c219b60(*(undefined8 *)(param_4 + lVar10),param_5,0);
    func_0x00010c182220(*(undefined8 *)(param_4 + lVar10),param_5,4);
    func_0x00010befbb60(param_4,param_5,*(undefined8 *)(param_4 + lVar10));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_4 + lVar10);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf493a0(uVar4,param_5,lVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_4 + lVar10);
    uStack_78 = uVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c2793a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0xc030000000000000;
    uVar11 = uVar5;
    func_0x00010bf493c0(0xc030000000000000,uVar5,param_5,lVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_5,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar11);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar8);
    _objc_release(lVar9);
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126c2e38;
    func_0x00010bdc2b00(PTR_PTR_1126c2e38,param_5,param_4);
    if (puVar1 == (undefined *)0x1) {
      _CGAffineTransformMakeScale(&uStack_a8,0xbff0000000000000,0x3ff0000000000000);
      uStack_d8 = uStack_a0;
      uStack_e0 = uStack_a8;
      uStack_c8 = uStack_90;
      uStack_d0 = uStack_98;
      uStack_b8 = uStack_80;
      uStack_c0 = uStack_88;
      func_0x00010c219960(*(undefined8 *)(param_4 + lVar10),param_5,&uStack_e0);
      param_1 = uStack_88;
      param_2 = uStack_98;
    }
    _objc_release(puVar2);
    lVar9 = *(long *)(param_4 + lVar10);
  }
  lVar10 = lVar9;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = param_1;
    return auVar14;
  }
  ___stack_chk_fail();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = lVar10;
  func_0x00010bf6e520();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  func_0x00010bf6e520();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar10;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_150 = lVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_5,&lStack_150,&uStack_158,1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0x7fefffffffffffff;
  uVar4 = 0x7fefffffffffffff;
  uVar8 = 1;
  func_0x00010bf20ba0(0x7fefffffffffffff,0x7fefffffffffffff,lVar6,param_5,1,puVar1,0);
  _objc_release(puVar1);
  _objc_release(lVar7);
  _objc_release(lVar10);
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    dVar12 = param_3 + 42.0 + 13.0 + 16.0;
    if (dVar12 <= 100.0) {
      dVar12 = 100.0;
    }
    auVar13._8_8_ = 0x4044000000000000;
    auVar13._0_8_ = dVar12;
    return auVar13;
  }
  ___stack_chk_fail();
  lVar10 = (long)_DAT_112740390;
  _objc_retain(uVar8);
  uVar5 = *(undefined8 *)(lVar9 + lVar10);
  *(undefined8 *)(lVar9 + lVar10) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = uVar11;
  return auVar15;
}



/* Entry: 106139d38; end: 106139e97; -[SCBatchCaptureActionButton intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106139d38(undefined8 param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_4;
  func_0x00010bf6e520();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  func_0x00010bf6e520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_60 = lVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_5,&lStack_60,&uStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x7fefffffffffffff;
  uVar9 = 0x7fefffffffffffff;
  uVar5 = 1;
  func_0x00010bf20ba0(0x7fefffffffffffff,0x7fefffffffffffff,lVar6,param_5,1,puVar3,0);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    dVar8 = param_3 + 42.0 + 13.0 + 16.0;
    if (dVar8 <= 100.0) {
      dVar8 = 100.0;
    }
    auVar10._8_8_ = 0x4044000000000000;
    auVar10._0_8_ = dVar8;
    return auVar10;
  }
  ___stack_chk_fail();
  lVar6 = (long)_DAT_112740390;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(lVar1 + lVar6);
  *(undefined8 *)(lVar1 + lVar6) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = uVar7;
  return auVar11;
}



/* Entry: 106139e98; end: 106139ed7; -[SCBatchCaptureActionButton setOverlayBackgroundView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106139e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740390;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106139ed8; end: 106139f17; -[SCBatchCaptureActionButton setOverlayView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106139ed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740394;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106139f18; end: 106139f57; -[SCBatchCaptureActionButton setThumbnailBackgroundView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106139f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740398;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106139f58; end: 106139f97; -[SCBatchCaptureActionButton setThumbnailImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106139f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274039c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106139f98; end: 106139fd7; -[SCBatchCaptureActionButton setThumbnailCountLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106139f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127403a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106139fd8; end: 10613a017; -[SCBatchCaptureActionButton setDescriptionLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106139fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127403a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10613a018; end: 10613a057; -[SCBatchCaptureActionButton setArrowView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613a018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127403a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10613a058; end: 10613a0e7; -[SCBatchCaptureActionButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613a058(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127403a8,0);
  _objc_storeStrong(param_1 + _DAT_1127403a4,0);
  _objc_storeStrong(param_1 + _DAT_1127403a0,0);
  _objc_storeStrong(param_1 + _DAT_11274039c,0);
  _objc_storeStrong(param_1 + _DAT_112740398,0);
  _objc_storeStrong(param_1 + _DAT_112740394,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740390,0);
  return;
}



/* Entry: 10613a0e8; end: 10613a137; -[SCBatchCaptureCameraOverlayView initWithFrame:] */

undefined1 * FUN_10613a0e8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126efdb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10613a138; end: 10613a1c3; -[SCBatchCaptureCameraOverlayView accessibilityElements] */

undefined * FUN_10613a138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_30 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 10613a1c4; end: 10613a1cb; -[SCBatchCaptureCameraOverlayView isAccessibilityElement] */

undefined8 FUN_10613a1c4(void)

{
  return 0;
}



/* Entry: 10613a1cc; end: 10613a2bb; -[SCBatchCaptureCameraOverlayView captureFlashView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613a1cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127403ac;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(param_1);
    func_0x00010c013de0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10613a2bc; end: 10613a32f; -[SCBatchCaptureCameraOverlayView captureActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613a2bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127403b0;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c84a0;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10613a330; end: 10613a3af; -[SCBatchCaptureCameraOverlayView capturedImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613a330(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127403b4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010bf20c00(param_1);
    func_0x00010c013de0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10613a3b0; end: 10613a3d3; -[SCBatchCaptureCameraOverlayView _setupViews] */

void FUN_10613a3b0(undefined8 param_1)

{
  func_0x00010beab680();
                    /* WARNING: Could not recover jumptable at 0x00010beab6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupCapturedImageView_112588750);
  return;
}



/* Entry: 10613a3d4; end: 10613a40f; -[SCBatchCaptureCameraOverlayView _setupCapturedImageView] */

void FUN_10613a3d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf31720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10613a410; end: 10613a727; -[SCBatchCaptureCameraOverlayView _setupCaptureActionButton] */

void FUN_10613a410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_3,param_4,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf30980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  uVar14 = param_2;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf30980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar1);
  puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar1 = param_3;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  uStack_a8 = uVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar2;
  func_0x00010bf493a0(uVar1,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  uStack_b8 = uVar1;
  uStack_98 = uVar1;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uVar2;
  func_0x00010bf49420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  uStack_90 = uVar2;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  uStack_88 = uVar4;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0xc02e000000000000;
  uVar8 = uVar6;
  func_0x00010bf493c0(0xc02e000000000000,uVar6,param_4,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d0,param_4,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a8);
  _objc_release(uStack_a0);
  uVar4 = param_3;
  func_0x00010bf30980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010befbd60();
  uVar10 = uVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_10613a728;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_140 = param_1;
  uStack_138 = param_2;
  uStack_130 = uVar1;
  uStack_128 = uVar2;
  uStack_120 = uVar3;
  puStack_118 = puVar9;
  uStack_110 = uVar8;
  uStack_108 = uVar7;
  uStack_100 = uVar6;
  uStack_f8 = uVar5;
  uStack_f0 = uVar4;
  uStack_e8 = param_3;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar12);
  uVar1 = uVar10;
  func_0x00010bf30980(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  uVar1 = uVar10;
  func_0x00010bf30980(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  _objc_release(uVar1);
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar1 = uVar10;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf49420(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  uStack_158 = uVar3;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_150 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_158,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar9,param_4,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07120(uVar12,param_4,uVar10);
  _objc_release(uVar12);
  _objc_release(uVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf16760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 10613a728; end: 10613a907; -[SCBatchCaptureCameraOverlayView showCaptureActionButtonInContainer:] */

void FUN_10613a728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010bf30980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf30980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_3;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf49420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  uStack_88 = uVar4;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_4,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07120(param_5,param_4,param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf16760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10613a908; end: 10613a93f; -[SCBatchCaptureCameraOverlayView _captureActionButtonPressed] */

void FUN_10613a908(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf16760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613a940; end: 10613ab2f; -[SCBatchCaptureCameraOverlayView flashScreenWithCompletion:] */

void FUN_10613a940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf30c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar2);
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar2);
  _objc_release(puVar3);
  func_0x00010c19bc40(puVar2);
  func_0x00010c192d40(0x3fd3333333333333,puVar2);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010bf30c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bef6c40(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10613ab30; end: 10613ab97;  */

void FUN_10613ab30(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf30c80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar2);
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10613ab98; end: 10613abf7; -[SCBatchCaptureCameraOverlayView updateLastSegmentThumbnail:totalCount:animated:] */

void FUN_10613ab98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf30980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213e40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613abf8; end: 10613ae13; -[SCBatchCaptureCameraOverlayView startScreenShotAnimationWithImage:] */

void FUN_10613abf8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf31720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_5);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf31720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_3,param_4,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf30980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  uVar2 = param_3;
  func_0x00010bf30980(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51200(param_1,param_2,param_3,param_4,uVar3);
  dVar4 = param_1;
  dVar5 = param_2;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf31720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  uVar2 = param_3;
  func_0x00010bf31720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _CGAffineTransformMakeTranslation(&uStack_80,param_1 - dVar4,param_2 - dVar5);
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  _CGAffineTransformScale(&uStack_b0,0x3fa47ae147ae147b,0x3fa47ae147ae147b,&uStack_e0);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_10613ae14;
  puStack_120 = &UNK_1108700e8;
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x10613ae94;
  puStack_148 = &UNK_110841f20;
  uStack_140 = param_3;
  uStack_118 = param_3;
  func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_4,0x10000,
                      &puStack_138,&puStack_160);
  return;
}



/* Entry: 10613ae14; end: 10613af37;  */

void FUN_10613ae14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf31720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3fd0000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf31720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 10613af38; end: 10613af8f; -[SCBatchCaptureCameraOverlayView shouldHandleTouchAtPoint:] */

undefined8 FUN_10613af38(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb68e0();
  _CGRectContainsPoint();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10613af90; end: 10613afcf; -[SCBatchCaptureCameraOverlayView setCaptureActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613af90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127403b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10613afd0; end: 10613afef; -[SCBatchCaptureCameraOverlayView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613afd0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127403b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10613aff0; end: 10613b003; -[SCBatchCaptureCameraOverlayView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613aff0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127403b8,param_3);
  return;
}



/* Entry: 10613b004; end: 10613b043; -[SCBatchCaptureCameraOverlayView setCaptureFlashView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613b004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127403ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10613b044; end: 10613b083; -[SCBatchCaptureCameraOverlayView setCapturedImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613b044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127403b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10613b084; end: 10613b0df; -[SCBatchCaptureCameraOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613b084(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127403b4,0);
  _objc_storeStrong(param_1 + _DAT_1127403ac,0);
  _objc_destroyWeak(param_1 + _DAT_1127403b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127403b0,0);
  return;
}



/* Entry: 10613b0e0; end: 10613b1bb; -[SCBatchCaptureOverlayViewController initWithParentView:cameraViewType:footerItem:] */

undefined1 *
FUN_10613b0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126efdb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c84a8;
    _objc_alloc();
    func_0x00010bf20c00(param_3);
    func_0x00010c013de0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x28));
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10613b1bc; end: 10613b53b; -[SCBatchCaptureOverlayViewController addToParentView:layoutCaptureButtonAboveCameraTimer:] */

void FUN_10613b1bc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar2 = param_2;
  func_0x00010c0efe60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_4,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c0efe60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_2;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar18;
  func_0x00010bf493a0(uVar18,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  uStack_88 = uVar4;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_3,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  uStack_80 = uVar8;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c2793a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0(uVar10,param_3,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  uStack_78 = uVar12;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_4;
  func_0x00010bf2ba60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be673a0(param_2);
  uVar16 = uVar14;
  func_0x00010bf493c0(-param_1,uVar14,param_3,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar17);
  _objc_release(puVar17);
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
  _objc_release(uVar18);
  _objc_release(uVar2);
  if (param_5 != 0) {
    uVar2 = param_2;
    func_0x00010c0efe60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_4;
    func_0x00010bfe1220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2367a0(uVar2,param_3,uVar18);
    _objc_release(uVar18);
    _objc_release(uVar2);
  }
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = 1;
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar18);
  func_0x00010c0efe60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2560();
  _objc_release(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10613b53c; end: 10613b58b; -[SCBatchCaptureOverlayViewController flashScreenWithCompletion:] */

void FUN_10613b53c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0efe60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613b58c; end: 10613b67b; -[SCBatchCaptureOverlayViewController setIsCapturing:] */

void FUN_10613b58c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + 8) == param_3) {
    return;
  }
  *(char *)(param_1 + 8) = (char)param_3;
  lVar1 = param_1;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c14e4a0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c0efe60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf30980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
  }
  else {
    func_0x00010c21e900();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c0efe60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf30980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e160();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613b67c; end: 10613b6cb; -[SCBatchCaptureOverlayViewController startScreenShotAnimationWithImage:] */

void FUN_10613b67c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0efe60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2506c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613b6cc; end: 10613b87b; -[SCBatchCaptureOverlayViewController updateLastSegmentThumbnail:totalCount:animated:] */

void FUN_10613b6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c074c20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0efe60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c1a7f60();
  }
  else {
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c0efe60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf30980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213e40();
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c074c20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != (int)uVar4) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0efe60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf30980();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c074c20();
    func_0x00010bf16a40(uVar1,param_2,param_1,(uint)uVar4 ^ 1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10613b87c; end: 10613b8cf; -[SCBatchCaptureOverlayViewController shouldHandleTouchAtPoint:] */

undefined8 FUN_10613b87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c230ac0(param_1,param_2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10613b8d0; end: 10613b907; -[SCBatchCaptureOverlayViewController batchCaptureCameraOverlayViewDidPressReviewAndEdit:] */

void FUN_10613b8d0(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf16a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613b908; end: 10613b987; -[SCBatchCaptureOverlayViewController _offsetFromCameraViewFinderBottom] */

undefined8 FUN_10613b908(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = param_3;
  func_0x0001008522a8();
  uVar4 = 0;
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_3 + 0x18);
    if (lVar2 == 0) {
      uVar4 = 0x4048000000000000;
    }
    else {
      func_0x00010c0841c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c084de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      uVar4 = param_2;
    }
  }
  return uVar4;
}



/* Entry: 10613b988; end: 10613b99f; -[SCBatchCaptureOverlayViewController delegate] */

void FUN_10613b988(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10613b9a0; end: 10613b9ab; -[SCBatchCaptureOverlayViewController setDelegate:] */

void FUN_10613b9a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10613b9ac; end: 10613b9b3; -[SCBatchCaptureOverlayViewController overlayView] */

undefined8 FUN_10613b9ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10613b9b4; end: 10613b9eb; -[SCBatchCaptureOverlayViewController .cxx_destruct] */

void FUN_10613b9b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}


