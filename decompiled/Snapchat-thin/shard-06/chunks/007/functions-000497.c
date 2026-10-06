/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d7bed0; end: 104d7c00f;  */

void FUN_104d7bed0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b0140;
    _objc_alloc(PTR_PTR_1126b0140);
    lVar2 = lVar1 + 0x90;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar1 + 0x98;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar1 + 200;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c08d660();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104d7c010;
    puStack_60 = &UNK_11084e7d0;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    ppuVar6 = &puStack_78;
    uStack_58 = uVar7;
    FUN_104d7c010(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023da0(puVar8,param_2,lVar2,lVar3,lVar5,ppuVar6);
    _objc_release(ppuVar6);
    _objc_release(uStack_58);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104d7c010; end: 104d7c0eb;  */

void FUN_104d7c010(long param_1)

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



/* Entry: 104d7c0ec; end: 104d7c15b;  */

void FUN_104d7c0ec(long param_1)

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
    func_0x00010bf29e60(param_1);
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



/* Entry: 104d7c15c; end: 104d7c18b;  */

bool FUN_104d7c15c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 104d7c18c; end: 104d7c30f;  */

void FUN_104d7c18c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d7c310;
  puStack_70 = &UNK_11084e920;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7c310; end: 104d7c64f;  */

void FUN_104d7c310(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined *puVar25;
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
    puVar25 = PTR_PTR_1126b0148;
    _objc_alloc();
    lVar3 = lVar2 + 0x30;
    _objc_loadWeakRetained();
    lVar4 = lVar2 + 0xf8;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bfce220();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2 + 0x38;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2 + 0x38;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2 + 0x20;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bfce240();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar2 + 8;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010bf2bbc0();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104d7c650;
    puStack_88 = &UNK_11084e7d0;
    uVar24 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar24);
    ppuVar15 = &puStack_a0;
    uStack_80 = uVar24;
    FUN_104d7c650();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_104d7c79c;
    puStack_b0 = &UNK_11084e7d0;
    uVar24 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar24);
    ppuVar16 = &puStack_c8;
    uStack_a8 = uVar24;
    FUN_104d7c79c();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_104d7c8e8;
    puStack_d8 = &UNK_11084e7d0;
    uVar24 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar24);
    ppuVar17 = &puStack_f0;
    uStack_d0 = uVar24;
    FUN_104d7c8e8();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar2 + 0xa8;
    _objc_loadWeakRetained();
    lVar19 = lVar2 + 8;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar2 + 0xa0;
    _objc_loadWeakRetained();
    uVar22 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar22;
    func_0x00010bf7f4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar2 + 0x110;
    _objc_loadWeakRetained();
    func_0x00010c05ff20(puVar25,param_2,lVar3,lVar5,lVar7,lVar9,lVar12,lVar14,ppuVar15,ppuVar16,
                        ppuVar17,lVar18,lVar20,0,lVar21,uVar24,lVar23);
    _objc_release(lVar23);
    _objc_release(uVar24);
    _objc_release(uVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(ppuVar17);
    _objc_release(uStack_d0);
    _objc_release(ppuVar16);
    _objc_release(uStack_a8);
    _objc_release(ppuVar15);
    _objc_release(uStack_80);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 104d7c650; end: 104d7c72b;  */

void FUN_104d7c650(long param_1)

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



/* Entry: 104d7c72c; end: 104d7c79b;  */

void FUN_104d7c72c(long param_1)

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



/* Entry: 104d7c79c; end: 104d7c877;  */

void FUN_104d7c79c(long param_1)

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



/* Entry: 104d7c878; end: 104d7c8e7;  */

void FUN_104d7c878(long param_1)

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



/* Entry: 104d7c8e8; end: 104d7c9c3;  */

void FUN_104d7c8e8(long param_1)

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



/* Entry: 104d7c9c4; end: 104d7ca33;  */

void FUN_104d7c9c4(long param_1)

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



/* Entry: 104d7ca34; end: 104d7cb0b;  */

long FUN_104d7ca34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfce240();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 8;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf2bbc0();
    lVar7 = lVar4;
    func_0x00010c0718c0(lVar4,param_2,lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return lVar7;
}



/* Entry: 104d7cb0c; end: 104d7cc8f;  */

void FUN_104d7cb0c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d7cc90;
  puStack_70 = &UNK_11084e950;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7cc90; end: 104d7ce5b;  */

void FUN_104d7cc90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126b0150;
    _objc_alloc(PTR_PTR_1126b0150);
    lVar2 = lVar1 + 0xa0;
    _objc_loadWeakRetained();
    lVar3 = lVar1 + 8;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104d7ce5c;
    puStack_70 = &UNK_11084e7d0;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar14);
    ppuVar5 = &puStack_88;
    uStack_68 = uVar14;
    FUN_104d7ce5c(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar1 + 0xa8;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + 0x178;
    _objc_loadWeakRetained();
    lVar11 = lVar1 + 8;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010bf2b720();
    func_0x00010bff3be0(puVar13,param_2,lVar2,lVar4,ppuVar5,lVar6,1,lVar7,lVar9,lVar10,lVar12,0);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(ppuVar5);
    _objc_release(uStack_68);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 104d7ce5c; end: 104d7cf37;  */

void FUN_104d7ce5c(long param_1)

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



/* Entry: 104d7cf38; end: 104d7cfa7;  */

void FUN_104d7cf38(long param_1)

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



/* Entry: 104d7cfa8; end: 104d7d057;  */

long FUN_104d7cfa8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf2b000();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c071900();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return lVar5;
}



/* Entry: 104d7d058; end: 104d7d1db;  */

void FUN_104d7d058(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d7d1dc;
  puStack_70 = &UNK_11084e980;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7d1dc; end: 104d7d3bb;  */

void FUN_104d7d1dc(long param_1,undefined8 param_2)

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
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR_PTR_1126b0158;
    _objc_alloc();
    lVar2 = lVar1 + 0x38;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + 0x38;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + 0x40;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c135640();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1 + 0x48;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c12f720();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + 8;
    _objc_loadWeakRetained(lVar10);
    uVar13 = *(undefined8 *)(lVar1 + 0x148);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104d7d3bc;
    puStack_70 = &UNK_11084e7d0;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar14);
    ppuVar11 = &puStack_88;
    uStack_68 = uVar14;
    FUN_104d7d3bc();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1 + 0xa8;
    _objc_loadWeakRetained();
    func_0x00010bffb5e0(puVar15,param_2,lVar3,lVar5,lVar7,lVar9,lVar10,0,uVar13,ppuVar11,lVar12);
    _objc_release(lVar12);
    _objc_release(ppuVar11);
    _objc_release(uStack_68);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 104d7d3bc; end: 104d7d497;  */

void FUN_104d7d3bc(long param_1)

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



/* Entry: 104d7d498; end: 104d7d507;  */

void FUN_104d7d498(long param_1)

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



/* Entry: 104d7d508; end: 104d7d537;  */

bool FUN_104d7d508(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 104d7d538; end: 104d7d6bb;  */

void FUN_104d7d538(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d7d6bc;
  puStack_70 = &UNK_11084e9b0;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7d6bc; end: 104d7d743;  */

void FUN_104d7d6bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bdd9120(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d7d744; end: 104d7d8af;  */

void FUN_104d7d744(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5c420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d7d8b0;
  puStack_68 = &UNK_11084e9e0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7d8b0; end: 104d7da63;  */

void FUN_104d7d8b0(long param_1,undefined8 param_2)

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
  long lVar12;
  undefined *puVar13;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126b0160;
    _objc_alloc();
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf10e60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c272320();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c12f720();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + 8;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + 0xa0;
    _objc_loadWeakRetained(lVar11);
    lVar12 = param_1 + 0x1a0;
    _objc_loadWeakRetained();
    func_0x00010bffc7e0(puVar13,param_2,lVar2,lVar4,lVar6,lVar8,lVar10,lVar11,0,0,lVar12,
                        &PTR____CFConstantStringClassReference_110f594b8);
    _objc_release(lVar12);
    _objc_release(lVar11);
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
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 104d7da64; end: 104d7da93;  */

bool FUN_104d7da64(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 104d7da94; end: 104d7dc17;  */

void FUN_104d7da94(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dabc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d7dc18;
  puStack_70 = &UNK_11084ea40;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7dc18; end: 104d7dc9f;  */

void FUN_104d7dc18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bdf56e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d7dca0; end: 104d7de8f; -[SCDirectorModeFeatureProviderPluginWorkflow _createVerticalToolbar:] */

void FUN_104d7dca0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf29f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b0168;
  _objc_opt_class(PTR_PTR_1126b0168);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b0170;
  _objc_alloc(PTR_PTR_1126b0170);
  lVar5 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar7);
  lVar8 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d7de90;
  puStack_70 = &UNK_11084e7d0;
  uStack_68 = param_3;
  _objc_retain(param_3);
  ppuVar10 = &puStack_88;
  FUN_104d7de90(ppuVar10);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c02c580(puVar4);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(ppuVar10);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104d7de90; end: 104d7df6b;  */

void FUN_104d7de90(long param_1)

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



/* Entry: 104d7df6c; end: 104d7dfdb;  */

void FUN_104d7df6c(long param_1)

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



/* Entry: 104d7dfdc; end: 104d7e14f; -[SCDirectorModeFeatureProviderPluginWorkflow _cameraBottomUIArbitrator:] */

undefined * FUN_104d7dfdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126b0178;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_3;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c091780();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  lStack_78 = lVar3;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar5 = lVar4;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002b00(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(lVar2 + 0x160);
  func_0x00010bf0bae0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  return (undefined *)(ulong)(lVar2 != 0);
}



/* Entry: 104d7e150; end: 104d7e1a7; -[SCDirectorModeFeatureProviderPluginWorkflow _shouldEnableRemixFeature] */

bool FUN_104d7e150(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x160);
  func_0x00010bf0bae0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 104d7e1a8; end: 104d7e29f;  */

undefined1 FUN_104d7e1a8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d7e2a0;
  puStack_60 = &UNK_11084e5f0;
  ppuVar2 = &puStack_78;
  puStack_48 = puStack_58;
  _objc_retainBlock(ppuVar2);
  uVar3 = param_2;
  func_0x00010c0c5900(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcda0();
  _objc_release(uVar3);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104d7e2a0; end: 104d7e2b3;  */

void FUN_104d7e2a0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104d7e2b4; end: 104d7e4c3; -[SCDirectorModeFeatureProviderPluginWorkflow .cxx_destruct] */

void FUN_104d7e2b4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1d0);
  _objc_destroyWeak(param_1 + 0x1c8);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_destroyWeak(param_1 + 0x1a8);
  _objc_destroyWeak(param_1 + 0x1a0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_destroyWeak(param_1 + 400);
  _objc_destroyWeak(param_1 + 0x188);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_destroyWeak(param_1 + 0x178);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_destroyWeak(param_1 + 0x158);
  _objc_destroyWeak(param_1 + 0x150);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_destroyWeak(param_1 + 0x138);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_destroyWeak(param_1 + 0x128);
  _objc_destroyWeak(param_1 + 0x120);
  _objc_destroyWeak(param_1 + 0x118);
  _objc_destroyWeak(param_1 + 0x110);
  _objc_destroyWeak(param_1 + 0x108);
  _objc_destroyWeak(param_1 + 0x100);
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_destroyWeak(param_1 + 0xe8);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_destroyWeak(param_1 + 200);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104d7e4c4; end: 104d7e53b;  */

void FUN_104d7e4c4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db18f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db18f8,
                      &PTR____CFConstantStringClassReference_110db18d8,0);
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



/* Entry: 104d7e53c; end: 104d7e91b; -[SCMusicCameraFeatureProviderPluginWorkflow initWithUserDataFeedService:musicNotificationPresenter:trackId:blizzardLogger:sourcePageType:contextSessionId:memoriesRecentThumbnailProvidingServices:memoriesSideButtonStateProvidingServices:circumstanceEngine:memoriesExperimentService:memoriesUserDefaultsManager:memoriesQuickPostScopeExposer:musicCameraScope:musicServices:creativeToolsABProvider:lensCarouselManager:lensCarouselOnCameraScopeDataProvider:spotlightSubmissionScopeLauncher:spotlightSubmissionScopeServices:businessProfileId:] */

undefined8 *
FUN_104d7e53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126e41a8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    puVar1[4] = param_5;
    _objc_storeWeak(puVar1 + 2,param_6);
    puVar1[5] = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104d7e91c; end: 104d7e9eb; -[SCMusicCameraFeatureProviderPluginWorkflow configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_104d7e91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c0d2ca0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1265e0(param_3,param_2,uVar2,9);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0c9880(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1265e0(param_3,param_2,uVar2,3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d7e9ec; end: 104d7e9f3; -[SCMusicCameraFeatureProviderPluginWorkflow cameraFeatureCategory] */

undefined8 FUN_104d7e9ec(void)

{
  return 0;
}



/* Entry: 104d7e9f4; end: 104d7e9fb; -[SCMusicCameraFeatureProviderPluginWorkflow pluginResolutionOrder] */

undefined8 FUN_104d7e9f4(void)

{
  return 2;
}



/* Entry: 104d7e9fc; end: 104d7ebb7; -[SCMusicCameraFeatureProviderPluginWorkflow setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

void FUN_104d7e9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar3 = &puStack_100;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104d7ebb8;
  puStack_80 = &UNK_11084e830;
  uStack_78 = param_1;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_5);
  uStack_68 = param_5;
  _objc_retain(param_3);
  ppuVar2 = &puStack_98;
  FUN_104d7ebb8(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9da0(param_3,param_2,ppuVar2);
  _objc_release(ppuVar2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_104d7eeb4;
  puStack_b0 = &UNK_11084ea10;
  uStack_a8 = param_1;
  _objc_retain(param_4);
  ppuVar2 = &puStack_c8;
  uStack_a0 = param_4;
  FUN_104d7eeb4(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c64a0(param_3,param_2,ppuVar2);
  _objc_release(ppuVar2);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_104d7f130;
  puStack_e8 = &UNK_11084e830;
  uStack_e0 = param_1;
  uStack_d8 = param_4;
  uStack_d0 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  FUN_104d7f130(&puStack_100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9f20(param_3,param_2,ppuVar3);
  _objc_release(param_3);
  _objc_release(ppuVar3);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104d7ebb8; end: 104d7ed3b;  */

void FUN_104d7ebb8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d7ed3c;
  puStack_70 = &UNK_11084eab0;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7ed3c; end: 104d7ee83;  */

void FUN_104d7ed3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  
  lVar7 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar7 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR_PTR_1126b0180;
    _objc_alloc();
    lVar8 = lVar7 + 8;
    _objc_loadWeakRetained();
    uVar1 = *(undefined8 *)(lVar7 + 0x18);
    uVar4 = *(undefined8 *)(lVar7 + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar7 + 0x10;
    _objc_loadWeakRetained(lVar11);
    uVar2 = *(undefined8 *)(lVar7 + 0x28);
    uVar5 = *(undefined8 *)(lVar7 + 0x30);
    uVar3 = *(undefined8 *)(lVar7 + 0x78);
    uVar6 = *(undefined8 *)(lVar7 + 0x80);
    uVar12 = *(undefined8 *)(lVar7 + 0x70);
    func_0x00010bf9c660();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bfa1200();
    func_0x00010c05ab00(puVar15,param_2,lVar8,uVar1,uVar4,uVar10,lVar11,uVar2,uVar5,uVar3,uVar6,
                        (char)uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
  }
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 104d7ee84; end: 104d7eeb3;  */

bool FUN_104d7ee84(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 104d7eeb4; end: 104d7f01f;  */

void FUN_104d7eeb4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5c420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d7f020;
  puStack_68 = &UNK_11084eae0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7f020; end: 104d7f0e7;  */

void FUN_104d7f020(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b0188;
    _objc_alloc(PTR_PTR_1126b0188);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0c95c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0c9900(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03d360(puVar3,param_2,uVar1,uVar2,*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),0,0);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7f0e8; end: 104d7f12f;  */

long FUN_104d7f0e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010be41dc0(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104d7f130; end: 104d7f2b3;  */

void FUN_104d7f130(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d7f2b4;
  puStack_70 = &UNK_11084eb10;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d7f2b4; end: 104d7f3b3;  */

void FUN_104d7f2b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b0190;
    _objc_alloc(PTR_PTR_1126b0190);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02ae20(puVar6,param_2,uVar3,uVar5,*(undefined8 *)(lVar1 + 0x60),
                        *(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar1 + 0x70),
                        *(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x98),
                        *(undefined8 *)(lVar1 + 0xa0));
    _objc_release(uVar5);
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



/* Entry: 104d7f3b4; end: 104d7f3fb;  */

long FUN_104d7f3b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010be41dc0(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104d7f3fc; end: 104d7f433; -[SCMusicCameraFeatureProviderPluginWorkflow _isMemoriesButtonEnabled] */

void FUN_104d7f3fc(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  func_0x00010c071800();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0779f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x68),PTR_s_isMemoriesButtonEnabled_1125fb888);
    return;
  }
  return;
}



/* Entry: 104d7f434; end: 104d7f51b; -[SCMusicCameraFeatureProviderPluginWorkflow .cxx_destruct] */

void FUN_104d7f434(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104d7f51c; end: 104d7fa1f; -[SCMusicCameraPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7f51c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  
  if (param_1 == 0) {
    lVar40 = 0;
  }
  else {
    lVar40 = param_1 + _DAT_112712638;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar40;
  func_0x00010c150aa0();
  _objc_release(lVar40);
  if (lVar1 == 7) {
    puVar2 = PTR_PTR_1126b0198;
    _objc_alloc();
    lVar40 = param_1 + _DAT_1127125f8;
    _objc_loadWeakRetained();
    lVar3 = lVar40;
    func_0x00010c2918c0();
    _objc_retainAutoreleasedReturnValue();
    lVar38 = (long)_DAT_1127125fc;
    lVar1 = param_1 + lVar38;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010c0dc680();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0d8ca0();
    lVar41 = (long)_DAT_112712600;
    lVar7 = param_1 + lVar41;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c277e80();
    lVar9 = param_1 + _DAT_112712604;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + lVar41;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c247a20();
    lVar13 = param_1 + lVar41;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010bde8540(param_1,param_2,lVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + _DAT_112712608;
    _objc_loadWeakRetained();
    lVar17 = param_1 + _DAT_11271260c;
    _objc_loadWeakRetained();
    lVar18 = param_1 + _DAT_112712610;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_112712614;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + _DAT_112712618;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010c0ca000();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(param_1 + _DAT_11271261c);
    lVar41 = param_1 + lVar41;
    _objc_loadWeakRetained();
    lVar38 = param_1 + lVar38;
    _objc_loadWeakRetained();
    lVar24 = param_1 + _DAT_112712620;
    _objc_loadWeakRetained();
    lVar25 = lVar24;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1 + _DAT_112712624;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010c08d660();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = param_1 + _DAT_112712628;
    _objc_loadWeakRetained();
    lVar29 = lVar28;
    func_0x00010c090ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = (long)_DAT_11271262c;
    lVar30 = param_1 + lVar39;
    _objc_loadWeakRetained();
    lVar31 = lVar30;
    func_0x00010c24c620();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = param_1 + lVar39;
    _objc_loadWeakRetained();
    lVar32 = lVar39;
    func_0x00010c24c640();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = param_1 + _DAT_112712630;
    _objc_loadWeakRetained();
    lVar34 = lVar33;
    func_0x00010c2932e0();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = lVar34;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = lVar35;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05aae0(puVar2,param_2,lVar3,lVar6,lVar8,lVar10,lVar12,lVar15,lVar16,lVar17,lVar19,
                        lVar21,lVar23,uVar37,lVar41,lVar38,lVar25,lVar27,lVar29,lVar31,lVar32,lVar36
                       );
    uVar37 = *(undefined8 *)(param_1 + _DAT_112712634);
    *(undefined **)(param_1 + _DAT_112712634) = puVar2;
    _objc_release(uVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar39);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar38);
    _objc_release(lVar41);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar40);
    param_1 = param_1 + _DAT_11271263c;
    _objc_loadWeakRetained(param_1);
    lVar40 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d7fa20; end: 104d7fb3b; -[SCMusicCameraPluginEntryPoint _contextSessionIdFromReplyConfiguration:] */

void FUN_104d7fa20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104d7fb3c;
  uStack_30 = 0x104d7fb4c;
  uStack_28 = 0;
  func_0x00010c0bcaa0(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d7fb3c; end: 104d7fb53;  */

void FUN_104d7fb3c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d7fb54; end: 104d7fbd3;  */

void FUN_104d7fb54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d7fbd4; end: 104d7fcd3; -[SCMusicCameraPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d7fbd4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112712630);
  _objc_destroyWeak(param_1 + _DAT_11271262c);
  _objc_storeStrong(param_1 + _DAT_11271261c,0);
  _objc_destroyWeak(param_1 + _DAT_112712628);
  _objc_destroyWeak(param_1 + _DAT_112712624);
  _objc_destroyWeak(param_1 + _DAT_112712620);
  _objc_destroyWeak(param_1 + _DAT_112712618);
  _objc_destroyWeak(param_1 + _DAT_112712614);
  _objc_destroyWeak(param_1 + _DAT_112712610);
  _objc_destroyWeak(param_1 + _DAT_11271260c);
  _objc_destroyWeak(param_1 + _DAT_112712608);
  _objc_destroyWeak(param_1 + _DAT_112712604);
  _objc_destroyWeak(param_1 + _DAT_1127125fc);
  _objc_destroyWeak(param_1 + _DAT_1127125f8);
  _objc_destroyWeak(param_1 + _DAT_112712600);
  _objc_destroyWeak(param_1 + _DAT_11271263c);
  _objc_destroyWeak(param_1 + _DAT_112712638);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712634,0);
  return;
}



/* Entry: 104d7fcd4; end: 104d8002f; -[SCFeatureRemixCamModeImpl initWithValdiRuntimeProvider:cameraHardwareServicesAPI:cameraHardwareResource:captureDeviceManager:lensMode:featureUpdateEventSubject:cameraUIServices:contentDeliveryServices:cameraTooltipsService:remixCamModeConfig:cameraViewType:toggleCameraRef:mainCameraScan:cameraUserBlizzardLogger:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:applicationLifecycleEvents:zoom:directorModePresenting:cameraFeaturePerformanceFeatureScopedLoggerFactory:userPreferences:conversationIdResolver:replyParameters:remixCaptureStatusSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104d7fcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined4 param_22,undefined4 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_16);
  _objc_retain(param_20);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  puStack_70 = PTR_PTR_1126e41b0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithCameraModeConfig_cameraH_112526150,param_12,param_5,
                      param_7,param_8,param_13,param_15,param_9,param_10,param_11,param_17,param_18,
                      param_19,param_21);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712644,param_3);
    lVar5 = (long)_DAT_112712648;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271264c,param_4);
    lVar5 = (long)_DAT_112712650;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712654;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712658,param_24);
    lVar5 = (long)_DAT_11271265c;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_20;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712660;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_25;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712664;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_26;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712668;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_27;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b01a0;
    _objc_alloc();
    puVar4 = puVar1;
    func_0x00010bf29f00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffbf40();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271266c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271266c) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712670);
    *(undefined **)((long)puVar1 + (long)_DAT_112712670) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712674);
    *(undefined **)((long)puVar1 + (long)_DAT_112712674) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_20);
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104d80030; end: 104d8007f; -[SCFeatureRemixCamModeImpl cameraModeLensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80030(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712650);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf29f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104d80080; end: 104d80163; -[SCFeatureRemixCamModeImpl detailedCameraModeLogInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80080(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined4 *)(param_1 + _DAT_112712678));
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = puVar1;
  func_0x00010bf29f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &puStack_48;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_40 = param_1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar4);
  uVar3 = *(undefined8 *)(puVar1 + _DAT_11271267c);
  *(undefined ***)(puVar1 + _DAT_11271267c) = ppuVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104d80164; end: 104d8019b; -[SCFeatureRemixCamModeImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80164(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271267c);
  *(undefined8 *)(param_1 + _DAT_11271267c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8019c; end: 104d802c3; -[SCFeatureRemixCamModeImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8019c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf18700(*(undefined8 *)(param_1 + _DAT_11271266c));
  func_0x00010bdd3860(param_1);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d802c4; end: 104d80387;  */

void FUN_104d802c4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104d80388; end: 104d803c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80388(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf84c20(*(undefined8 *)(param_1 + _DAT_112712680));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d803c4; end: 104d803e7; -[SCFeatureRemixCamModeImpl secondaryButtonState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_104d803c4(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + _DAT_112712678) + 4;
  if (4 < *(int *)(param_1 + _DAT_112712678) - 1U) {
    iVar1 = 4;
  }
  return iVar1;
}



/* Entry: 104d803e8; end: 104d803f7; -[SCFeatureRemixCamModeImpl toolbarButtonPositionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d803e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712680),
             PTR_s_onLayoutDMToolbarItemViewComplet_112616d10);
  return;
}



/* Entry: 104d803f8; end: 104d803fb; -[SCFeatureRemixCamModeImpl isCameraModeActivated] */

void FUN_104d803f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isCameraModeEnabled_1125f91c0);
  return;
}



/* Entry: 104d803fc; end: 104d8040b; -[SCFeatureRemixCamModeImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d803fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07abf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712680),PTR_s_isPresentingLayoutWidget_1125fc508);
  return;
}



/* Entry: 104d8040c; end: 104d8049f; -[SCFeatureRemixCamModeImpl onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8040c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c0cfda0();
  func_0x00010c0e70a0(*(undefined8 *)(param_1 + (long)_DAT_112712680));
  if (((int)uVar1 == (int)param_3) && (uVar1 = param_1, func_0x00010c06dec0(), (uVar1 & 1) == 0)) {
    func_0x00010c0e3e00(*(undefined8 *)(param_1 + (long)_DAT_11271266c));
  }
  puStack_38 = PTR_PTR_1126e41b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_onTap__1126175d8,param_3);
  return;
}



/* Entry: 104d804a0; end: 104d804d7; -[SCFeatureRemixCamModeImpl secondaryOnTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d804a0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712680);
  func_0x00010c0cfda0();
                    /* WARNING: Could not recover jumptable at 0x00010c0e70f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_onTapSecondaryButtonOfDualStream_112617650,param_3 == (int)param_1);
  return;
}



/* Entry: 104d804d8; end: 104d804e3; -[SCFeatureRemixCamModeImpl incompatibleModes] */

undefined ** FUN_104d804d8(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_11117e2b0;
}



/* Entry: 104d804e4; end: 104d8057b; -[SCFeatureRemixCamModeImpl targetZoomDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d804e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + _DAT_112712678) == 2) {
    param_1 = param_1 + _DAT_11271264c;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5e320();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c154f00();
    func_0x0001007089bc();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    return lVar3;
  }
  return 1;
}



/* Entry: 104d8057c; end: 104d8058b; -[SCFeatureRemixCamModeImpl didTapNonDMDualStreamCamPrimaryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8057c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271266c),
             PTR_s_didTapNonDMDualStreamCamPrimaryB_1125bcd18);
  return;
}



/* Entry: 104d8058c; end: 104d80597; -[SCFeatureRemixCamModeImpl didChangeSelectionOfNonDMDualStreamCamPrimaryButton:] */

void FUN_104d8058c(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf8ef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_enable_1125c1570);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_disable_1125bd820);
  return;
}



/* Entry: 104d80598; end: 104d805ef; -[SCFeatureRemixCamModeImpl didSelectDualStreamCamLayoutFromWidgetMenu:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80598(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf7cc60(*(undefined8 *)(param_1 + _DAT_11271266c));
                    /* WARNING: Could not recover jumptable at 0x00010bea32b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setCurrentLayout_animated_needU_112586650,param_3,
             (int)param_3 != *(int *)(param_1 + _DAT_112712678),1);
  return;
}



/* Entry: 104d805f0; end: 104d8064f; -[SCFeatureRemixCamModeImpl configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d805f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_112712684;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != param_3) {
    func_0x00010bdf51e0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d80650; end: 104d80783; -[SCFeatureRemixCamModeImpl _createUIIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80650(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b01a8;
  lVar7 = (long)_DAT_112712680;
  if (*(long *)(param_1 + lVar7) != 0) {
    return;
  }
  _objc_retain(param_3);
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271267c);
  lVar2 = param_1 + _DAT_112712644;
  _objc_loadWeakRetained(lVar2);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112712650);
  lVar3 = param_1;
  func_0x00010bf2b520(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0753e0(param_1);
  func_0x00010c002820(puVar1,param_2,uVar5,param_3,lVar2,uVar6,lVar3,lVar4,
                      *(undefined1 *)(param_1 + _DAT_112712688));
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d80784; end: 104d8078b; -[SCFeatureRemixCamModeImpl cameraModeType] */

undefined8 FUN_104d80784(void)

{
  return 0x16;
}



/* Entry: 104d8078c; end: 104d80843; -[SCFeatureRemixCamModeImpl enable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8078c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271266c);
  func_0x00010c06b6a0(param_1);
  func_0x00010c2a62c0(uVar3);
  func_0x00010c212700(*(undefined8 *)(param_1 + _DAT_11271265c));
  puStack_38 = PTR_PTR_1126e41b0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_enable_1125c1570);
  return;
}



/* Entry: 104d80844; end: 104d808b3; -[SCFeatureRemixCamModeImpl disable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80844(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e41b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_disable_1125bd820);
  func_0x00010c0e3d80(*(undefined8 *)(param_1 + _DAT_112712680));
  func_0x00010c0e3be0(*(undefined8 *)(param_1 + _DAT_11271266c));
  func_0x00010c212700(*(undefined8 *)(param_1 + _DAT_11271265c));
  return;
}



/* Entry: 104d808b4; end: 104d80927; -[SCFeatureRemixCamModeImpl autoEnable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d808b4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e41b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_autoEnable_1125a1f48);
  func_0x00010be1ff80(param_1);
  func_0x00010c0e3000(*(undefined8 *)(param_1 + _DAT_112712680));
  func_0x00010bea32a0(param_1);
  return;
}



/* Entry: 104d80928; end: 104d80943; -[SCFeatureRemixCamModeImpl autoEnableWithLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80928(long param_1,undefined8 param_2,int param_3)

{
  if (4 < param_3 - 1U) {
    param_3 = 0;
  }
  *(int *)(param_1 + _DAT_112712678) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bf11690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_autoEnable_1125a1f48);
  return;
}



/* Entry: 104d80944; end: 104d809f7; -[SCFeatureRemixCamModeImpl autoEnableFromDeepLinkWithQueryParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80944(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x0001060bdb3c(uVar1);
  _objc_release(uVar1);
  func_0x00010bf117a0(param_1);
  func_0x00010c0a23e0(*(undefined8 *)(param_1 + _DAT_11271266c));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d809f8; end: 104d80a17; -[SCFeatureRemixCamModeImpl onCameraModeReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d809f8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112712688) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0e3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712680),
             PTR_s_onDualStreamCamModeReadyToEnable_112616980);
  return;
}



/* Entry: 104d80a18; end: 104d80a53; -[SCFeatureRemixCamModeImpl onCaptureDevicePositionDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80a18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf926c0();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf73150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11271266c),
               PTR_s_didChangeDevicePositionWhileMode_1125ba5f8);
    return;
  }
  return;
}



/* Entry: 104d80a54; end: 104d80a87; -[SCFeatureRemixCamModeImpl didFailToEnableLensModeWithError:] */

void FUN_104d80a54(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e41b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_didFailToEnableLensModeWithError_1125bb278);
  return;
}



/* Entry: 104d80a88; end: 104d80a8b; -[SCFeatureRemixCamModeImpl enabled] */

void FUN_104d80a88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isCameraModeEnabled_1125f91c0);
  return;
}



/* Entry: 104d80a8c; end: 104d80adf; -[SCFeatureRemixCamModeImpl loggingParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80a8c(int param_1)

{
  func_0x00010bf926c0();
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126b01b0);
    func_0x00010c013300();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d80ae0; end: 104d80b33; -[SCFeatureRemixCamModeImpl contextInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80ae0(int param_1)

{
  func_0x00010bf926c0();
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126b01b8);
    func_0x00010c021cc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d80b34; end: 104d80b43; -[SCFeatureRemixCamModeImpl toolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80b34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712680),PTR_s_toolbarItem_11267a8a8);
  return;
}



/* Entry: 104d80b44; end: 104d80c8b; -[SCFeatureRemixCamModeImpl _setCurrentLayout:animated:needUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80b44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  int iVar2;
  undefined **ppuVar3;
  
  iVar2 = (int)param_3;
  *(int *)(param_1 + _DAT_112712678) = iVar2;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112712670);
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bdf10;
    }
    else if (iVar2 == 1) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112712670);
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bdf28;
    }
    else {
      if (iVar2 != 2) goto LAB_104d80c48;
      uVar1 = *(undefined8 *)(param_1 + _DAT_112712670);
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bdf58;
    }
    func_0x00010c0d9840(uVar1,param_2,ppuVar3);
    func_0x00010be187c0(param_1);
  }
  else {
    if (iVar2 == 3) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112712670);
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bdf40;
    }
    else if (iVar2 == 4) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112712670);
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bdf70;
    }
    else {
      if (iVar2 != 5) goto LAB_104d80c48;
      uVar1 = *(undefined8 *)(param_1 + _DAT_112712670);
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bdf88;
    }
    func_0x00010c0d9840(uVar1,param_2,ppuVar3);
    func_0x00010be08bc0(param_1);
  }
LAB_104d80c48:
  func_0x00010c0e2de0(*(undefined8 *)(param_1 + _DAT_112712680));
  if (param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beda510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateLastPersistedLayout__1125942e8,param_3);
    return;
  }
  return;
}



/* Entry: 104d80c8c; end: 104d80d43; -[SCFeatureRemixCamModeImpl _enableFrontCameraIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80c8c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010c06dec0();
  puVar4 = PTR_PTR_1126aff08;
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + _DAT_11271264c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf70d80();
    func_0x00010c06cea0(puVar4,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)puVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_112712654);
      func_0x00010bfa1820(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c272720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
  }
  return;
}



/* Entry: 104d80d44; end: 104d80d47; -[SCFeatureRemixCamModeImpl _forceEnableFrontCameraIfEnabled] */

void FUN_104d80d44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableFrontCameraIfNeeded_11255fc90);
  return;
}



/* Entry: 104d80d48; end: 104d80dcb; -[SCFeatureRemixCamModeImpl _updateLastPersistedLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80d48(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112712658;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d80dcc; end: 104d80f07; -[SCFeatureRemixCamModeImpl _getLastPersistedLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_104d80dcc(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_112712650;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c072800();
  _objc_release(uVar2);
  uVar8 = 4;
  if ((int)uVar3 != 0) {
    uVar8 = 5;
  }
  uVar9 = (ulong)uVar8;
  uVar4 = param_1 + _DAT_112712658;
  _objc_loadWeakRetained();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar6);
  uVar4 = uVar7;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar7);
  if ((uVar4 != 0) && (func_0x00010c067ec0(), uVar9 = uVar7, (int)uVar7 == 5)) {
    uVar7 = *(ulong *)(param_1 + lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c072800();
    _objc_release(uVar7);
    uVar1 = 5;
    if ((uVar5 & 1) == 0) {
      uVar1 = uVar8;
    }
    uVar9 = (ulong)uVar1;
  }
  _objc_release(uVar4);
  return uVar9;
}



/* Entry: 104d80f08; end: 104d80f93; -[SCFeatureRemixCamModeImpl setCameraModeParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d80f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf90100();
  if ((int)uVar1 != 0) {
    lVar2 = (long)_DAT_11271268c;
    if (*(long *)(param_1 + lVar2) == 0) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = param_3;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010bf8ae40(uVar1);
      func_0x00010bf117a0(param_1,param_2,uVar1);
      func_0x00010c0a2400(*(undefined8 *)(param_1 + _DAT_11271266c),param_2,
                          *(undefined8 *)(param_1 + lVar2));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d80f94; end: 104d80fc7; -[SCFeatureRemixCamModeImpl onViewWillDisappear] */

void FUN_104d80f94(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e41b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_onViewWillDisappear_112617878);
  return;
}


