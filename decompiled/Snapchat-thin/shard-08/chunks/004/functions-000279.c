/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060d2d98; end: 1060d2f27;  */

void FUN_1060d2d98(long param_1,undefined8 param_2)

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
  undefined *puVar10;
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
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  puVar9 = PTR_PTR_1126c7cf0;
  _objc_alloc();
  puVar10 = PTR_PTR_1126ae720;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar25 = *(undefined8 *)(param_1 + 0x58);
  uVar20 = *(undefined8 *)(param_1 + 0x50);
  uVar16 = *(undefined8 *)(param_1 + 0x68);
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  uVar26 = *(undefined8 *)(param_1 + 0x78);
  uVar21 = *(undefined8 *)(param_1 + 0x70);
  uVar17 = *(undefined8 *)(param_1 + 0x88);
  uVar13 = *(undefined8 *)(param_1 + 0x80);
  uVar27 = *(undefined8 *)(param_1 + 0x98);
  uVar22 = *(undefined8 *)(param_1 + 0x90);
  uVar18 = *(undefined8 *)(param_1 + 0xa8);
  uVar14 = *(undefined8 *)(param_1 + 0xa0);
  uVar28 = *(undefined8 *)(param_1 + 0xb8);
  uVar23 = *(undefined8 *)(param_1 + 0xb0);
  uVar31 = *(undefined8 *)(param_1 + 200);
  uVar30 = *(undefined8 *)(param_1 + 0xc0);
  uVar29 = *(undefined8 *)(param_1 + 0xd8);
  uVar24 = *(undefined8 *)(param_1 + 0xd0);
  uVar19 = *(undefined8 *)(param_1 + 0xe8);
  uVar15 = *(undefined8 *)(param_1 + 0xe0);
  uVar4 = *(undefined8 *)(param_1 + 0xf0);
  uVar8 = *(undefined8 *)(param_1 + 0xf8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1060d2f28;
  puStack_78 = &UNK_11090d930;
  uVar11 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar11);
  uStack_70 = uVar11;
  func_0x00010bf11fe0(puVar10,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024d60(puVar9,param_2,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar20,uVar25,uVar12,uVar16
                      ,uVar21,uVar26,uVar13,uVar17,uVar22,uVar27,uVar14,uVar18,uVar23,uVar28,uVar30,
                      uVar31,uVar24,uVar29,uVar15,uVar19,uVar4,uVar8,puVar10,
                      *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x110),
                      *(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120),
                      *(undefined8 *)(param_1 + 0x128));
  _objc_release(puVar10);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1060d2f28; end: 1060d3077;  */

void FUN_1060d2f28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060d3078; end: 1060d3237; -[SCCameraUIScopedLensOperaServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060d3078(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f214,0);
  _objc_storeStrong(param_1 + _DAT_11273f210,0);
  _objc_storeStrong(param_1 + _DAT_11273f1dc,0);
  _objc_storeStrong(param_1 + _DAT_11273f1e4,0);
  _objc_storeStrong(param_1 + _DAT_11273f1e0,0);
  _objc_destroyWeak(param_1 + _DAT_11273f218);
  _objc_destroyWeak(param_1 + _DAT_11273f23c);
  _objc_destroyWeak(param_1 + _DAT_11273f238);
  _objc_destroyWeak(param_1 + _DAT_11273f234);
  _objc_destroyWeak(param_1 + _DAT_11273f230);
  _objc_destroyWeak(param_1 + _DAT_11273f1d8);
  _objc_destroyWeak(param_1 + _DAT_11273f22c);
  _objc_destroyWeak(param_1 + _DAT_11273f228);
  _objc_destroyWeak(param_1 + _DAT_11273f224);
  _objc_destroyWeak(param_1 + _DAT_11273f1d0);
  _objc_destroyWeak(param_1 + _DAT_11273f1cc);
  _objc_destroyWeak(param_1 + _DAT_11273f1c8);
  _objc_destroyWeak(param_1 + _DAT_11273f1c4);
  _objc_destroyWeak(param_1 + _DAT_11273f1bc);
  _objc_destroyWeak(param_1 + _DAT_11273f1c0);
  _objc_destroyWeak(param_1 + _DAT_11273f1d4);
  _objc_destroyWeak(param_1 + _DAT_11273f20c);
  _objc_destroyWeak(param_1 + _DAT_11273f220);
  _objc_destroyWeak(param_1 + _DAT_11273f208);
  _objc_destroyWeak(param_1 + _DAT_11273f204);
  _objc_destroyWeak(param_1 + _DAT_11273f200);
  _objc_destroyWeak(param_1 + _DAT_11273f1fc);
  _objc_destroyWeak(param_1 + _DAT_11273f1f8);
  _objc_destroyWeak(param_1 + _DAT_11273f1f4);
  _objc_destroyWeak(param_1 + _DAT_11273f1f0);
  _objc_destroyWeak(param_1 + _DAT_11273f1ec);
  _objc_destroyWeak(param_1 + _DAT_11273f1e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273f21c);
  return;
}



/* Entry: 1060d3238; end: 1060d3c97; -[SCOffCameraLensOperaEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060d3238(long param_1)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
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
  undefined *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar35 = param_1 + _DAT_11273f240;
  _objc_loadWeakRetained();
  lVar1 = lVar35;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar35);
  lVar35 = param_1 + _DAT_11273f244;
  _objc_loadWeakRetained();
  lVar2 = lVar35;
  func_0x00010c1490a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar35);
  lVar35 = param_1 + _DAT_11273f248;
  _objc_loadWeakRetained();
  lVar3 = lVar35;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar35);
  lVar35 = param_1 + _DAT_11273f24c;
  _objc_loadWeakRetained();
  lVar4 = lVar35;
  func_0x00010bf70ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar35);
  lVar35 = param_1 + _DAT_11273f250;
  _objc_loadWeakRetained();
  lVar5 = lVar35;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar35);
  lVar35 = param_1 + _DAT_11273f254;
  _objc_loadWeakRetained();
  lVar6 = lVar35;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar35);
  lVar35 = param_1 + _DAT_11273f258;
  _objc_loadWeakRetained();
  lVar7 = lVar35;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar35);
  lVar35 = param_1 + _DAT_11273f25c;
  _objc_loadWeakRetained();
  lVar8 = lVar35;
  func_0x00010bef3d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar35);
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_11273f2ac;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar35;
  func_0x00010c23d860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar35);
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_11273f2b4;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar35;
  func_0x00010c108380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar35);
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_11273f2b0;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar35;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar35);
  uVar12 = *(undefined8 *)(param_1 + _DAT_11273f260);
  _objc_retain();
  lVar35 = param_1 + _DAT_11273f2c4;
  _objc_loadWeakRetained();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11273f264);
  _objc_retain();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11273f268);
  _objc_retain();
  lVar15 = param_1 + _DAT_11273f2b8;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c0911e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_11273f2bc;
  _objc_loadWeakRetained();
  lVar17 = lVar15;
  func_0x00010c291140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_11273f26c;
  _objc_loadWeakRetained();
  lVar18 = lVar15;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_11273f270;
  _objc_loadWeakRetained();
  lVar19 = lVar15;
  func_0x00010bf157e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_11273f274;
  _objc_loadWeakRetained();
  lVar20 = lVar15;
  func_0x00010bf17600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_11273f278;
  _objc_loadWeakRetained();
  lVar21 = lVar15;
  func_0x00010c25e020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar36 = (long)_DAT_11273f27c;
  lVar15 = param_1 + lVar36;
  _objc_loadWeakRetained();
  lVar22 = lVar15;
  func_0x00010c22a220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar36 = param_1 + lVar36;
  _objc_loadWeakRetained();
  lVar23 = lVar36;
  func_0x00010c08d520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar36);
  lVar15 = param_1 + _DAT_11273f280;
  _objc_loadWeakRetained();
  lVar24 = lVar15;
  func_0x00010c100e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_11273f284;
  _objc_loadWeakRetained();
  lVar25 = lVar15;
  func_0x00010c0ea6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_11273f288;
  _objc_loadWeakRetained();
  lVar26 = lVar15;
  func_0x00010bf62b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_11273f28c;
  _objc_loadWeakRetained();
  lVar27 = lVar15;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  uVar37 = *(undefined8 *)(param_1 + _DAT_11273f290);
  _objc_retain(uVar37);
  uVar34 = *(undefined8 *)(param_1 + _DAT_11273f294);
  _objc_retain(uVar34);
  lVar15 = param_1 + _DAT_11273f298;
  _objc_loadWeakRetained();
  _objc_initWeak(auStack_80,param_1);
  puVar28 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + _DAT_11273f29c;
  _objc_loadWeakRetained();
  lVar29 = lVar36;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar36);
  lVar36 = param_1 + _DAT_11273f2c0;
  _objc_loadWeakRetained();
  lVar30 = lVar36;
  func_0x00010c113e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar36);
  lVar36 = param_1 + _DAT_11273f2a0;
  _objc_loadWeakRetained();
  lVar31 = lVar36;
  func_0x00010bf82be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar36);
  puVar32 = PTR_PTR_1126ae720;
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  _objc_retain(lVar3);
  _objc_retain(lVar4);
  _objc_retain(lVar5);
  _objc_retain(lVar6);
  _objc_retain(lVar9);
  _objc_retain(lVar10);
  _objc_retain(lVar11);
  _objc_retain(uVar12);
  _objc_retain(lVar35);
  _objc_retain(uVar14);
  _objc_retain(uVar13);
  _objc_retain(lVar16);
  _objc_retain(lVar17);
  _objc_retain(lVar7);
  _objc_retain(lVar18);
  _objc_retain(lVar19);
  _objc_retain(lVar20);
  _objc_retain(lVar21);
  _objc_retain(lVar22);
  _objc_retain(lVar23);
  _objc_retain(lVar24);
  _objc_retain(lVar25);
  _objc_retain(lVar26);
  _objc_retain(lVar27);
  _objc_retain(puVar28);
  _objc_retain(lVar29);
  _objc_retain(lVar30);
  _objc_retain(lVar31);
  _objc_retain(uVar37);
  _objc_retain(uVar34);
  _objc_retain(lVar15);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR_PTR_1126c7d00;
  _objc_alloc();
  func_0x00010c025280();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273f2a4));
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(lVar15);
  _objc_release(uVar34);
  _objc_release(uVar37);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(puVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar7);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(lVar35);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(puVar28);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar15);
  _objc_release(uVar34);
  _objc_release(uVar37);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar35);
  _objc_release(uVar12);
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
  return;
}



/* Entry: 1060d3c98; end: 1060d3d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060d3c98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c7ce8;
    _objc_alloc(PTR_PTR_1126c7ce8);
    puVar1 = PTR_PTR_1126b2400;
    _objc_alloc(PTR_PTR_1126b2400);
    func_0x00010c018aa0(0);
    lVar2 = param_1 + _DAT_11273f29c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045040(puVar4,param_2,0,puVar1,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060d3d8c; end: 1060d3f1b;  */

void FUN_1060d3d8c(long param_1,undefined8 param_2)

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
  undefined *puVar10;
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
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  puVar9 = PTR_PTR_1126c7cf0;
  _objc_alloc();
  puVar10 = PTR_PTR_1126ae720;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar25 = *(undefined8 *)(param_1 + 0x58);
  uVar20 = *(undefined8 *)(param_1 + 0x50);
  uVar16 = *(undefined8 *)(param_1 + 0x68);
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  uVar26 = *(undefined8 *)(param_1 + 0x78);
  uVar21 = *(undefined8 *)(param_1 + 0x70);
  uVar17 = *(undefined8 *)(param_1 + 0x88);
  uVar13 = *(undefined8 *)(param_1 + 0x80);
  uVar27 = *(undefined8 *)(param_1 + 0x98);
  uVar22 = *(undefined8 *)(param_1 + 0x90);
  uVar18 = *(undefined8 *)(param_1 + 0xa8);
  uVar14 = *(undefined8 *)(param_1 + 0xa0);
  uVar28 = *(undefined8 *)(param_1 + 0xb8);
  uVar23 = *(undefined8 *)(param_1 + 0xb0);
  uVar31 = *(undefined8 *)(param_1 + 200);
  uVar30 = *(undefined8 *)(param_1 + 0xc0);
  uVar29 = *(undefined8 *)(param_1 + 0xd8);
  uVar24 = *(undefined8 *)(param_1 + 0xd0);
  uVar19 = *(undefined8 *)(param_1 + 0xe8);
  uVar15 = *(undefined8 *)(param_1 + 0xe0);
  uVar4 = *(undefined8 *)(param_1 + 0xf0);
  uVar8 = *(undefined8 *)(param_1 + 0xf8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1060d3f1c;
  puStack_78 = &UNK_11090d930;
  uVar11 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar11);
  uStack_70 = uVar11;
  func_0x00010bf11fe0(puVar10,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024d60(puVar9,param_2,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar20,uVar25,uVar12,uVar16
                      ,uVar21,uVar26,uVar13,uVar17,uVar22,uVar27,uVar14,uVar18,uVar23,uVar28,uVar30,
                      uVar31,uVar24,uVar29,uVar15,uVar19,uVar4,uVar8,puVar10,
                      *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x110),
                      *(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120),
                      *(undefined8 *)(param_1 + 0x128));
  _objc_release(puVar10);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1060d3f1c; end: 1060d3f43;  */

void FUN_1060d3f1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060d3f44; end: 1060d4113; -[SCOffCameraLensOperaEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060d3f44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f294,0);
  _objc_storeStrong(param_1 + _DAT_11273f290,0);
  _objc_storeStrong(param_1 + _DAT_11273f260,0);
  _objc_storeStrong(param_1 + _DAT_11273f268,0);
  _objc_storeStrong(param_1 + _DAT_11273f264,0);
  _objc_storeStrong(param_1 + _DAT_11273f2a4,0);
  _objc_destroyWeak(param_1 + _DAT_11273f298);
  _objc_destroyWeak(param_1 + _DAT_11273f2c4);
  _objc_destroyWeak(param_1 + _DAT_11273f2c0);
  _objc_destroyWeak(param_1 + _DAT_11273f2bc);
  _objc_destroyWeak(param_1 + _DAT_11273f2b8);
  _objc_destroyWeak(param_1 + _DAT_11273f25c);
  _objc_destroyWeak(param_1 + _DAT_11273f2b4);
  _objc_destroyWeak(param_1 + _DAT_11273f2b0);
  _objc_destroyWeak(param_1 + _DAT_11273f2ac);
  _objc_destroyWeak(param_1 + _DAT_11273f254);
  _objc_destroyWeak(param_1 + _DAT_11273f250);
  _objc_destroyWeak(param_1 + _DAT_11273f24c);
  _objc_destroyWeak(param_1 + _DAT_11273f248);
  _objc_destroyWeak(param_1 + _DAT_11273f240);
  _objc_destroyWeak(param_1 + _DAT_11273f244);
  _objc_destroyWeak(param_1 + _DAT_11273f258);
  _objc_destroyWeak(param_1 + _DAT_11273f2a0);
  _objc_destroyWeak(param_1 + _DAT_11273f29c);
  _objc_destroyWeak(param_1 + _DAT_11273f28c);
  _objc_destroyWeak(param_1 + _DAT_11273f288);
  _objc_destroyWeak(param_1 + _DAT_11273f284);
  _objc_destroyWeak(param_1 + _DAT_11273f280);
  _objc_destroyWeak(param_1 + _DAT_11273f27c);
  _objc_destroyWeak(param_1 + _DAT_11273f278);
  _objc_destroyWeak(param_1 + _DAT_11273f274);
  _objc_destroyWeak(param_1 + _DAT_11273f270);
  _objc_destroyWeak(param_1 + _DAT_11273f26c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273f2a8);
  return;
}



/* Entry: 1060d4114; end: 1060d467b; -[SCLensOperaPresentersFactory initWithOperaConfigurationFactory:presenterDelegate:fromViewController:lensLogger:safeBrowsingAPI:deepLinkHandler:userTrackedLogger:adConfigProvider:skAdNetworkMetricsManager:skStoreProductPrefetcher:currentPageTracker:operaSessionScopeExposer:operaSessionScopeServices:commerceShoppingScopeExposer:commerceProductCatalogScopeExposer:studySettingsProvider:audioSession:networkBandwidthEstimator:batteryLogger:customStatusBarStyleContextController:shakeInfoHolder:shakeEventAnnouncer:playerProvider:operaLayerProvider:customVolumeController:valdiRuntimeProvider:operaConfigProvider:] */

undefined8 *
FUN_1060d4114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  puStack_70 = PTR_PTR_1126ef998;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_storeWeak(puVar1 + 3,param_5);
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
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
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
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_29;
    _objc_release(uVar2);
  }
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
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
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1060d467c; end: 1060d4b4b; -[SCLensOperaPresentersFactory initWithPresenterDelegate:fromViewController:lensLogger:safeBrowsingAPI:urlInterceptor:deepLinkHandler:deviceMotionManager:userTrackedLogger:adConfigProvider:adPluginProvider:skAdNetworkMetricsManager:skStoreProductPrefetcher:currentPageTracker:operaSessionScopeExposer:operaSessionScopeServices:commerceShoppingScopeExposer:commerceProductCatalogScopeExposer:studySettingsProvider:userAdIdProvider:grapheneRegistry:audioSession:networkBandwidthEstimator:batteryLogger:customStatusBarStyleContextController:shakeInfoHolder:shakeEventAnnouncer:playerProvider:operaLayerProvider:customVolumeController:valdiRuntimeProvider:operaConfigProvider:circumstanceEngine:browserPrivacyConsentInfoManager:discoverVideoCatalogService:webBrowsingScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:] */

undefined8
FUN_1060d467c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7d08;
  _objc_retain();
  _objc_retain(param_38);
  _objc_retain(param_37);
  _objc_retain(param_36);
  _objc_retain(param_35);
  _objc_retain(param_34);
  _objc_retain(param_33);
  _objc_retain(param_32);
  _objc_retain(param_31);
  _objc_retain(param_30);
  _objc_retain(param_29);
  _objc_retain(param_28);
  _objc_retain(param_27);
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c041260();
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_7);
  func_0x00010c031c20(param_1,param_2,puVar1,param_3,param_4,param_5,param_6,param_8,param_10,
                      param_11,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                      param_20,param_23,param_24,param_25,param_26,param_27,param_28,param_29,
                      param_30,param_31,param_32,param_33);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1060d4b4c; end: 1060d4d27; -[SCLensOperaPresentersFactory ctaOperaPresenterForLens:] */

void FUN_1060d4b4c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c070460(param_1,param_2,param_3);
  puVar2 = PTR_PTR_1126c7d10;
  if ((int)puVar1 == 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c022860(puVar2,param_2,param_3,uVar3,uVar4,uVar5,uVar6,uVar7,1);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar8 = PTR_PTR_1126c7d18;
    _objc_alloc(PTR_PTR_1126c7d18);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    uVar4 = *(undefined8 *)(param_1 + 0xd8);
    puVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(puVar1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar9 = param_1 + 0x10;
    _objc_loadWeakRetained(puVar9);
    func_0x00010c031ea0(puVar8,param_2,uVar3,uVar4,puVar1,uVar5,puVar2,puVar9,
                        *(undefined8 *)(param_1 + 0x38),param_3);
    _objc_release(param_3);
    _objc_release(puVar9);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bdf9020(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1060d4d28; end: 1060d4fc7; -[SCLensOperaPresentersFactory _deeplinkCtaOperaPresenterForLens:] */

void FUN_1060d4d28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  ulong in_stack_ffffffffffffff80;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7d10;
  _objc_alloc(PTR_PTR_1126c7d10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022860(puVar1,param_2,param_3,uVar2,uVar3,uVar4,uVar5,uVar6,
                      in_stack_ffffffffffffff80 & 0xffffffffffffff00);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126b1068;
  _objc_alloc();
  puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar2 = param_3;
  func_0x00010c281520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2a4480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar11,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057c40(puVar7,param_2,puVar11,0);
  _objc_release(puVar11);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar11 = puVar7;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar11;
  func_0x00010c0720c0();
  _objc_release(puVar11);
  puVar11 = (undefined *)0x0;
  if ((int)puVar8 != 0) {
    puVar11 = PTR_PTR_1126c7d20;
    _objc_alloc(PTR_PTR_1126c7d20);
    lVar9 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar9);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = uVar4;
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + 0x10;
    _objc_loadWeakRetained();
    func_0x00010c016900(puVar11,param_2,lVar9,uVar4,puVar7,param_3,uVar3,puVar1,lVar10,
                        *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
    _objc_release(lVar10);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar9);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1060d4fc8; end: 1060d5243; -[SCLensOperaPresentersFactory isDeeplinkPresenterSupportedForLensCTA:] */

undefined * FUN_1060d4fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c281520();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf0d600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar2 != 0) {
    uVar1 = param_3;
    func_0x00010c281520(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c2a3bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c2a4480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80(puVar7,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if ((int)puVar7 != 0) {
      uVar1 = param_3;
      func_0x00010c281520(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c2a3bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c2a4480();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010c082da0();
      _objc_release(uVar4);
      if ((int)uVar1 == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar5 = PTR_PTR_1126b1068;
        _objc_alloc(PTR_PTR_1126b1068);
        puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
        uVar1 = param_3;
        func_0x00010c281520(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c2a3bc0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010c2a4480();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar7,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c057c40(puVar5,param_2,puVar7,0);
        _objc_release(puVar7);
        _objc_release(uVar2);
        _objc_release(uVar4);
        _objc_release(uVar1);
        puVar6 = puVar5;
        func_0x00010bfa1820(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c0720c0();
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      _objc_release(puVar3);
      goto LAB_1060d5220;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_1060d5220:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 1060d5244; end: 1060d5397; -[SCLensOperaPresentersFactory .cxx_destruct] */

void FUN_1060d5244(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060d5398; end: 1060d572b; -[SCCommerceLensOperaPresenter initWithFromViewController:lensLogger:deepLinkURL:lens:lensSessionId:lensOperaViewingSessionFactory:delegate:commerceShoppingScopeExposer:commerceProductCatalogScopeExposer:] */

undefined8 *
FUN_1060d5398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
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
  puStack_68 = PTR_PTR_1126ef9a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_9);
    _objc_retain(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    lVar3 = param_5;
    func_0x00010bf423e0();
    if ((lVar3 == 1) || (lVar3 = param_5, func_0x00010bf423e0(), lVar3 == 2)) {
      puVar9 = PTR_PTR_1126b0500;
      puVar10 = param_6;
      func_0x00010c094540(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbb180();
      uVar4 = param_4;
      func_0x00010c269d40(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c096ca0();
      func_0x00010bb000e4();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_4;
      func_0x00010c269d40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5f200();
      func_0x00010c07f200(param_6);
      func_0x00010bf29b20(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(puVar10);
      puVar10 = PTR_PTR_1126b0508;
      _objc_alloc();
      lVar3 = param_5;
      func_0x00010c257800(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_5;
      func_0x00010c115e60(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c039400();
      uVar2 = puVar1[5];
      puVar1[5] = puVar10;
      _objc_release(uVar2);
      _objc_release(lVar7);
      _objc_release(lVar3);
      func_0x00010c18b5e0(puVar1[5]);
    }
    else {
      puVar8 = PTR_PTR_1126c7d28;
      _objc_alloc();
      puVar10 = PTR_PTR_1126b0528;
      puVar9 = param_6;
      func_0x00010c094540(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c098120(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c016860();
      uVar2 = puVar1[7];
      puVar1[7] = puVar8;
      _objc_release(uVar2);
      _objc_release(puVar10);
    }
    _objc_release(puVar9);
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



/* Entry: 1060d572c; end: 1060d57bf; -[SCCommerceLensOperaPresenter present] */

void FUN_1060d572c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c29f3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_exposeScope__1125c4f30,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x38),PTR_s_present_1126205a0);
    return;
  }
  return;
}



/* Entry: 1060d57c0; end: 1060d57ff; -[SCCommerceLensOperaPresenter dismissWithDidBackground:] */

void FUN_1060d57c0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c10fbc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1060d5800; end: 1060d5807; -[SCCommerceLensOperaPresenter isPresenting] */

undefined8 FUN_1060d5800(void)

{
  return 0;
}



/* Entry: 1060d5808; end: 1060d588f; -[SCCommerceLensOperaPresenter commerceBrowserWillPresent] */

void FUN_1060d5808(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1060d5890;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1060d5890; end: 1060d58fb;  */

void FUN_1060d5890(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0959c0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060d58fc; end: 1060d5983; -[SCCommerceLensOperaPresenter commerceBrowserWillDismiss] */

void FUN_1060d58fc(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1060d5984;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1060d5984; end: 1060d59ef;  */

void FUN_1060d5984(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0959a0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060d59f0; end: 1060d5a57; -[SCCommerceLensOperaPresenter didDismissShoppingScope] */

void FUN_1060d59f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf3daa0(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0959a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060d5a58; end: 1060d5a93; -[SCCommerceLensOperaPresenter didPresentShoppingScope] */

void FUN_1060d5a58(long param_1)

{
  func_0x00010c0e8f20(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0959c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060d5a94; end: 1060d5aab; -[SCCommerceLensOperaPresenter delegate] */

void FUN_1060d5a94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060d5aac; end: 1060d5ab7; -[SCCommerceLensOperaPresenter setDelegate:] */

void FUN_1060d5aac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1060d5ab8; end: 1060d5abf; -[SCCommerceLensOperaPresenter lensOperaViewingSessionFactory] */

undefined8 FUN_1060d5ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060d5ac0; end: 1060d5aef; -[SCCommerceLensOperaPresenter setLensOperaViewingSessionFactory:] */

void FUN_1060d5ac0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060d5af0; end: 1060d5af7; -[SCCommerceLensOperaPresenter operaViewingSession] */

undefined8 FUN_1060d5af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060d5af8; end: 1060d5b27; -[SCCommerceLensOperaPresenter setOperaViewingSession:] */

void FUN_1060d5af8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060d5b28; end: 1060d5b2f; -[SCCommerceLensOperaPresenter lensLogger] */

undefined8 FUN_1060d5b28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060d5b30; end: 1060d5b5f; -[SCCommerceLensOperaPresenter setLensLogger:] */

void FUN_1060d5b30(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060d5b60; end: 1060d5b67; -[SCCommerceLensOperaPresenter shoppingScope] */

undefined8 FUN_1060d5b60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1060d5b68; end: 1060d5b97; -[SCCommerceLensOperaPresenter setShoppingScope:] */

void FUN_1060d5b68(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060d5b98; end: 1060d5b9f; -[SCCommerceLensOperaPresenter commerceShoppingScopeExposer] */

undefined8 FUN_1060d5b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1060d5ba0; end: 1060d5bcf; -[SCCommerceLensOperaPresenter setCommerceShoppingScopeExposer:] */

void FUN_1060d5ba0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060d5bd0; end: 1060d5bd7; -[SCCommerceLensOperaPresenter showcasePresenter] */

undefined8 FUN_1060d5bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1060d5bd8; end: 1060d5c07; -[SCCommerceLensOperaPresenter setShowcasePresenter:] */

void FUN_1060d5bd8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060d5c08; end: 1060d5c6f; -[SCCommerceLensOperaPresenter .cxx_destruct] */

void FUN_1060d5c08(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1060d5c70; end: 1060d5e07; -[SCLensOperaPresenterV2 initWithOperaSessionScopeExposer:operaSessionScopeServices:fromViewController:operaConfigurationFactory:lensOperaViewingSessionFactory:delegate:adConfigProvider:lens:] */

undefined1 *
FUN_1060d5c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126ef9a8;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
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



/* Entry: 1060d5e08; end: 1060d60bf; -[SCLensOperaPresenterV2 present] */

void FUN_1060d5e08(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29f3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126c7d30;
  _objc_alloc();
  func_0x00010c0226c0();
  puVar3 = PTR_PTR_1126c7d38;
  _objc_alloc();
  func_0x00010c009080();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar3;
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  puVar4 = puVar2;
  func_0x00010bfce940();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bfce940(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0087a0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2400;
  _objc_alloc(PTR_PTR_1126b2400);
  puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd00();
  func_0x00010c018aa0(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b23f0;
  _objc_alloc(PTR_PTR_1126b23f0);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011ae0(puVar6);
  _objc_release(puVar7);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar8 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar8);
  func_0x00010bf23920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar2 + 0x50),PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 1060d60c0; end: 1060d60c7; -[SCLensOperaPresenterV2 dismissWithDidBackground:] */

void FUN_1060d60c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_dismiss_1125be578);
  return;
}



/* Entry: 1060d60c8; end: 1060d60ff; -[SCLensOperaPresenterV2 isPresenting] */

bool FUN_1060d60c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1060d6100; end: 1060d6103; -[SCLensOperaPresenterV2 operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_1060d6100(void)

{
  return;
}



/* Entry: 1060d6104; end: 1060d6107; -[SCLensOperaPresenterV2 operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_1060d6104(void)

{
  return;
}



/* Entry: 1060d6108; end: 1060d610b; -[SCLensOperaPresenterV2 operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_1060d6108(void)

{
  return;
}



/* Entry: 1060d610c; end: 1060d610f; -[SCLensOperaPresenterV2 operaPresenterDidCancelDismissing:] */

void FUN_1060d610c(void)

{
  return;
}



/* Entry: 1060d6110; end: 1060d6113; -[SCLensOperaPresenterV2 operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_1060d6110(void)

{
  return;
}



/* Entry: 1060d6114; end: 1060d6117; -[SCLensOperaPresenterV2 operaPresenterDidFailToPresent:] */

void FUN_1060d6114(void)

{
  return;
}



/* Entry: 1060d6118; end: 1060d611b; -[SCLensOperaPresenterV2 operaPresenterDidFinishDismissing:] */

void FUN_1060d6118(void)

{
  return;
}



/* Entry: 1060d611c; end: 1060d6153; -[SCLensOperaPresenterV2 operaPresenterDidTearDown:] */

void FUN_1060d611c(long param_1)

{
  func_0x00010be92140();
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0959a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060d6154; end: 1060d6157; -[SCLensOperaPresenterV2 operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_1060d6154(void)

{
  return;
}



/* Entry: 1060d6158; end: 1060d615b; -[SCLensOperaPresenterV2 operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_1060d6158(void)

{
  return;
}



/* Entry: 1060d615c; end: 1060d61b7; -[SCLensOperaPresenterV2 _reset] */

void FUN_1060d615c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1060d61b8; end: 1060d623f; -[SCLensOperaPresenterV2 .cxx_destruct] */

void FUN_1060d61b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060d6240; end: 1060d632f; -[SCLensesOperaPlaylistDataSource initWithLens:adConfigProvider:] */

undefined **
FUN_1060d6240(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar1 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef9b0;
  puStack_50 = param_1;
  _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
  if (ppuVar1 != (undefined **)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_40 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = ppuVar1[4];
    ppuVar1[4] = puVar2;
    _objc_release(puVar3);
    _objc_retain(param_4);
    puVar2 = ppuVar1[1];
    ppuVar1[1] = param_4;
    _objc_release(puVar2);
    *(undefined4 *)(ppuVar1 + 3) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e3dcd8;
}



/* Entry: 1060d6330; end: 1060d633b; -[SCLensesOperaPlaylistDataSource itemType] */

undefined ** FUN_1060d6330(void)

{
  return &PTR____CFConstantStringClassReference_110e3dcd8;
}



/* Entry: 1060d633c; end: 1060d639f; -[SCLensesOperaPlaylistDataSource dataModelFor:] */

void FUN_1060d633c(long param_1,undefined8 param_2,undefined **param_3)

{
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == &PTR____CFConstantStringClassReference_110e3dcb8) {
    func_0x00010bfb1920(*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060d63a0; end: 1060d6403; -[SCLensesOperaPlaylistDataSource dataModelForGroup:] */

void FUN_1060d63a0(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined8 uVar1;
  
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == &PTR____CFConstantStringClassReference_110e3dc98) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060d6404; end: 1060d6413; -[SCLensesOperaPlaylistDataSource canResolvePlaylistItemGroupDataModel:] */

bool FUN_1060d6404(long param_1,undefined8 param_2,long param_3)

{
  return param_3 == *(long *)(param_1 + 0x20);
}



/* Entry: 1060d6414; end: 1060d6483; -[SCLensesOperaPlaylistDataSource playlistItemGroupModelForDataModel:] */

void FUN_1060d6414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b23e8;
  _objc_alloc(PTR_PTR_1126b23e8);
  func_0x00010c084c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ade0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3dc98,param_1,1,1,1)
  ;
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060d6484; end: 1060d657b; -[SCLensesOperaPlaylistDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_1060d6484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b23d8;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c084c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0558c0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c13a9c0(param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_unresolveGroup_11267e2e0);
  return;
}



/* Entry: 1060d657c; end: 1060d6583; -[SCLensesOperaPlaylistDataSource unresolvePlaylistItemGroupWithMutator:] */

void FUN_1060d657c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_unresolveGroup_11267e2e0);
  return;
}



/* Entry: 1060d6584; end: 1060d6697; -[SCLensesOperaPlaylistDataSource pageDataForDataModel:completion:] */

void FUN_1060d6584(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_1060d6678;
  puVar2 = PTR_PTR_1126ae6a8;
  _objc_opt_class(PTR_PTR_1126ae6a8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
LAB_1060d6604:
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != uVar3) goto LAB_1060d6604;
    puVar2 = PTR_PTR_1126b23e0;
    _objc_alloc(PTR_PTR_1126b23e0);
    func_0x00010c0f1980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033240(puVar2);
    (**(code **)(param_4 + 0x10))(param_4,puVar2);
    _objc_release(puVar2);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
LAB_1060d6678:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060d6698; end: 1060d672f; -[SCLensesOperaPlaylistDataSource pageProperties] */

void FUN_1060d6698(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb1920(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0f1a60(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1060d6730; end: 1060d6773; -[SCLensesOperaPlaylistDataSource pagePropertiesForLens:] */

void FUN_1060d6730(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f19a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1531a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060d6774; end: 1060d6b73; -[SCLensesOperaPlaylistDataSource pagePropertiesBuilderForLens:] */

void FUN_1060d6774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c281520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0d600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c281520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  if ((int)uVar3 == 0) {
    uVar3 = uVar1;
    func_0x00010bf0d600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c281520();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar5 != 0) {
      uVar3 = uVar1;
      func_0x00010c0b4b40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c29a460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c281520(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c0b4b40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c29bbe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf6500(param_1,param_2,uVar7,uVar6);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1060d692c;
    }
    uVar3 = uVar1;
    func_0x00010bf0d600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c281520();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar5 != 0) {
      uVar3 = uVar1;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c06aee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2813a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee9a20(param_1,param_2,uVar7,uVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1060d6940;
    }
    uVar2 = uVar1;
    func_0x00010bf0d600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      param_1 = 0;
      goto LAB_1060d6960;
    }
    uVar1 = param_3;
    func_0x00010c281520();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf67dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c281520(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    if ((int)uVar5 == 0) {
      func_0x00010c06aee0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c2813a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee9a20(param_1,param_2,uVar2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1060d6938;
    }
    func_0x00010bf68380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee9ac0(param_1,param_2,uVar7,0,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = uVar1;
    func_0x00010c2a3bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c2a4480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c281520(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c2a3bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c22dfc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf1f3c0();
    func_0x00010bee9ac0(param_1,param_2,uVar7,uVar4,1);
    _objc_retainAutoreleasedReturnValue();
LAB_1060d692c:
    _objc_release(uVar6);
LAB_1060d6938:
    _objc_release(uVar5);
LAB_1060d6940:
    _objc_release(uVar2);
  }
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar1);
LAB_1060d6960:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1060d6b74; end: 1060d6e57; -[SCLensesOperaPlaylistDataSource viewModelWithWebUrl:] */

void FUN_1060d6b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126b2368;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = puVar1;
  func_0x00010c2b53a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc2d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e3dcf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e3dcf8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b8238;
  func_0x00010c291260();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010c2b53e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c7cd0;
  func_0x00010bf21760(PTR_PTR_1126c7cd0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1060d6e58; end: 1060d6e5b; -[SCLensesOperaPlaylistDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_1060d6e58(void)

{
  return;
}



/* Entry: 1060d6e5c; end: 1060d6e5f; -[SCLensesOperaPlaylistDataSource removeMediaForItem:] */

void FUN_1060d6e5c(void)

{
  return;
}



/* Entry: 1060d6e60; end: 1060d6e67; -[SCLensesOperaPlaylistDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_1060d6e60(void)

{
  return 0;
}



/* Entry: 1060d6e68; end: 1060d6edf; -[SCLensesOperaPlaylistDataSource _viewModelWithWebUrl:shouldAutoFill:disableSwipeDownToDismiss:] */

void FUN_1060d6e68(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bdc5ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b2368;
    _objc_opt_new(PTR_PTR_1126b2368);
    puVar3 = puVar2;
    func_0x00010c2b53e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060d6ee0; end: 1060d70d7; -[SCLensesOperaPlaylistDataSource _adWebViewPagePropertiesWithWebUrl:shouldAutoFill:disableSwipeDownToDismiss:] */

void FUN_1060d6ee0(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7d40;
  _objc_opt_new(PTR_PTR_1126c7d40);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c7d48;
  func_0x00010c082440(PTR_PTR_1126c7d48,param_2,param_3);
  puVar3 = param_3;
  if ((int)puVar2 != 0) {
    puVar3 = PTR_PTR_1126c7d48;
    func_0x00010bf93280(PTR_PTR_1126c7d48,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc200(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2ace60(puVar1,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac580(puVar1,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2368;
  _objc_opt_new(PTR_PTR_1126b2368);
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106d5c450();
  puVar6 = puVar4;
  FUN_106425f3c(puVar4,param_2,PTR____NSDictionary0__struct_11034ab58,0,0,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c2b53e0(puVar2,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010c2b53a0(puVar7,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010c1531a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060d70d8; end: 1060d7343; -[SCLensesOperaPlaylistDataSource _ctaViewModelWithVideoId:videoUrl:] */

void FUN_1060d70d8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined ***pppuVar19;
  long lVar20;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f0e358;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f0ca38;
  puStack_88 = PTR____kCFBooleanTrue_11034ab68;
  puStack_80 = PTR____kCFBooleanFalse_11034ab60;
  puStack_78 = PTR____kCFBooleanFalse_11034ab60;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f0c0f8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f0ca58;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f0ca98;
  puStack_70 = puVar1;
  func_0x00010bdf6460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f0bcf8;
  puStack_60 = puVar5;
  pppuVar19 = &ppuStack_b8;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_68 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0d3c80();
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  if (param_4 == 0) {
    if (param_3 == 0) goto LAB_1060d7264;
    ppuVar3 = &PTR_PTR_110acdfa0;
  }
  else {
    ppuVar3 = &PTR_PTR_110acdfd0;
  }
  pppuVar19 = (undefined ***)*ppuVar3;
  func_0x00010c1d0640(ppuVar4);
LAB_1060d7264:
  puVar5 = PTR_PTR_1126b2368;
  _objc_opt_new();
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0c878;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c2b53a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar4;
  func_0x00010bf51e00();
  puVar1 = puVar2;
  ppuVar3 = ppuVar7;
  func_0x00010c2b53e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(puVar2);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar3);
    _objc_retain(pppuVar19);
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    if (ppuVar4 == (undefined **)0x0) {
      _objc_release(ppuVar3);
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    func_0x00010c1d0640();
    pppuVar8 = pppuVar19;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar19);
    uVar9 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c23d840();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x000100873628();
    _objc_retainAutoreleasedReturnValue();
    pppuVar19 = pppuVar8;
    func_0x0001084c1688(pppuVar8,uVar10,uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    pppuVar13 = pppuVar19;
    FUN_10641d528();
    _objc_retainAutoreleasedReturnValue();
    pppuVar14 = pppuVar13;
    func_0x00010bf529e0();
    if (pppuVar14 != (undefined ***)0x0) {
      func_0x00010bef7f60(puVar5);
    }
    puVar2 = PTR_PTR_1126b2368;
    _objc_opt_new(PTR_PTR_1126b2368);
    puVar15 = puVar2;
    func_0x00010c2b53a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126bfe00;
    func_0x00010c257a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar15;
    func_0x00010c2b53e0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar2);
    _objc_release(pppuVar13);
    _objc_release(pppuVar19);
    _objc_release(pppuVar8);
    _objc_release(puVar5);
    _objc_release(ppuVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
      ___stack_chk_fail();
      puVar5 = PTR_PTR_1126c3450;
      func_0x00010c098380(PTR_PTR_1126c3450);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      func_0x00010c25ce00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060d7344; end: 1060d75eb; -[SCLensesOperaPlaylistDataSource _viewModelWithAppId:unlockableTrackInfo:] */

void FUN_1060d7344(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_3;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    _objc_release(param_3);
    param_3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  func_0x00010c1d0640();
  lVar3 = param_4;
  func_0x00010c23d7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c23d840();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000100873628();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x0001084c1688(lVar3,uVar5,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  lVar9 = lVar8;
  FUN_10641d528();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf529e0();
  if (lVar10 != 0) {
    func_0x00010bef7f60(puVar2);
  }
  puVar11 = PTR_PTR_1126b2368;
  _objc_opt_new(PTR_PTR_1126b2368);
  puVar12 = puVar11;
  func_0x00010c2b53a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126bfe00;
  func_0x00010c257a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar12;
  func_0x00010c2b53e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126c3450;
    func_0x00010c098380(PTR_PTR_1126c3450);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar2;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1060d75ec; end: 1060d763f; -[SCLensesOperaPlaylistDataSource _ctaCacheDirectory] */

void FUN_1060d75ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3450;
  func_0x00010c098380(PTR_PTR_1126c3450);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060d7640; end: 1060d7647; -[SCLensesOperaPlaylistDataSource groupDataModel] */

undefined8 FUN_1060d7640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060d7648; end: 1060d7683; -[SCLensesOperaPlaylistDataSource .cxx_destruct] */

void FUN_1060d7648(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060d7684; end: 1060d7727; -[SCLensesOperaPlaylistFeaturePlugin initWithDataSource:operaConfigurationFactory:] */

undefined1 *
FUN_1060d7684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef9b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060d7728; end: 1060d776b; -[SCLensesOperaPlaylistFeaturePlugin dismiss] */

void FUN_1060d7728(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060d776c; end: 1060d776f; -[SCLensesOperaPlaylistFeaturePlugin setPlaylistItemController:] */

void FUN_1060d776c(void)

{
  return;
}



/* Entry: 1060d7770; end: 1060d7773; -[SCLensesOperaPlaylistFeaturePlugin addEventListenersWithEventAnnouncing:] */

void FUN_1060d7770(void)

{
  return;
}



/* Entry: 1060d7774; end: 1060d779b; -[SCLensesOperaPlaylistFeaturePlugin playlistDataSource] */

void FUN_1060d7774(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060d779c; end: 1060d77a3; -[SCLensesOperaPlaylistFeaturePlugin type] */

void FUN_1060d779c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_itemType_1125fed20);
  return;
}



/* Entry: 1060d77a4; end: 1060d77af; -[SCLensesOperaPlaylistFeaturePlugin setOperaControlling:] */

void FUN_1060d77a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1060d77b0; end: 1060d77b7; -[SCLensesOperaPlaylistFeaturePlugin updateOperaDependencies:] */

void FUN_1060d77b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ea370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_operaDependencies_1126182f0);
  return;
}



/* Entry: 1060d77b8; end: 1060d782f; -[SCLensesOperaPlaylistFeaturePlugin updateOperaConfiguration:] */

void FUN_1060d77b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0f1980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf469a0(uVar1,param_2,uVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060d7830; end: 1060d7867; -[SCLensesOperaPlaylistFeaturePlugin .cxx_destruct] */

void FUN_1060d7830(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060d7868; end: 1060d786b; -[SCEmptyLensOperaViewingSession openAttachment] */

void FUN_1060d7868(void)

{
  return;
}



/* Entry: 1060d786c; end: 1060d786f; -[SCEmptyLensOperaViewingSession closeAttachment] */

void FUN_1060d786c(void)

{
  return;
}



/* Entry: 1060d7870; end: 1060d79cb; -[SCLensViewingSessionFactory initWithLens:lensLogger:userTrackedLogger:skAdNetworkMetricsManager:skStoreProductPrefetcher:adConfigProvider:processOperaViewEvents:] */

undefined1 *
FUN_1060d7870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ef9c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060d79cc; end: 1060d7a8f; -[SCLensViewingSessionFactory viewingSession] */

void FUN_1060d79cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar7 = PTR_PTR_1126c7d58;
  _objc_alloc(PTR_PTR_1126c7d58);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  puVar8 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  puVar9 = puVar8;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022880(puVar7,param_2,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,puVar8,puVar9,
                      *(undefined1 *)(param_1 + 0x38));
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1060d7a90; end: 1060d7aef; -[SCLensViewingSessionFactory .cxx_destruct] */

void FUN_1060d7a90(long param_1)

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



/* Entry: 1060d7af0; end: 1060d7cdb; -[SCLensOperaViewingSession initWithLens:lensLogger:userTrackedLogger:skAdNetworkMetricsManager:skStoreProductPrefetcher:adConfigProvider:timeProvider:mainQueuePerformer:processOperaViewEvents:] */

undefined1 *
FUN_1060d7af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  puStack_68 = PTR_PTR_1126ef9c8;
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
    uVar2 = param_4;
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0xa8) = param_11;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
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



/* Entry: 1060d7cdc; end: 1060d7d77; -[SCLensOperaViewingSession openAttachment] */

void FUN_1060d7cdc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *(undefined **)(param_2 + 0x60) = puVar1;
  _objc_release(uVar4);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x38));
  *(undefined8 *)(param_2 + 0x68) = param_1;
  func_0x00010be133a0(param_2);
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c281520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126c7d60;
    func_0x00010c07a180();
    *(char *)(param_2 + 0x90) = (char)puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e8fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x10),PTR_s_openAttachmentView_112617e00);
  return;
}



/* Entry: 1060d7d78; end: 1060d7db7; -[SCLensOperaViewingSession closeAttachment] */

void FUN_1060d7d78(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x68);
  if (0.0 < dVar1) {
    func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x38));
    *(double *)(param_1 + 0x70) = dVar1 - *(double *)(param_1 + 0x68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fireMetrics_112563808);
  return;
}



/* Entry: 1060d7db8; end: 1060d8037; -[SCLensOperaViewingSession registeredEventsForOperaSession] */

void FUN_1060d7db8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  double dVar15;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c7d68;
  func_0x00010c100360();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7d68;
  puStack_b0 = puVar1;
  func_0x00010c0ffd20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c7d68;
  puStack_a8 = puVar2;
  func_0x00010c0fffc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c7d68;
  puStack_a0 = puVar3;
  func_0x00010c1003e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c7d68;
  puStack_98 = puVar4;
  func_0x00010c0ff000();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c7d68;
  puStack_90 = puVar5;
  func_0x00010c0ffc40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2338;
  puStack_88 = puVar6;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c7d70;
  puStack_80 = puVar7;
  func_0x00010bf3c700();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c7d70;
  puStack_78 = puVar8;
  func_0x00010c257e00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = &puStack_b0;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  puVar2 = puVar10;
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010c0e9cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2330;
    puStack_c8 = puVar1;
    func_0x00010bf3df20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2330;
    puStack_c0 = puVar3;
    func_0x00010bf96940();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_c8,3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar11;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(ppuVar11);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar14);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c7d68;
  func_0x00010c100360(PTR_PTR_1126c7d68);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar14;
  func_0x00010c0720c0(ppuVar14,param_3,puVar2);
  if ((int)ppuVar11 == 0) {
    puVar3 = PTR_PTR_1126c7d68;
    func_0x00010c0fffc0(PTR_PTR_1126c7d68);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar14;
    func_0x00010c0720c0(ppuVar14,param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)ppuVar11 == 0) {
      puVar2 = PTR_PTR_1126c7d68;
      func_0x00010c0ffd20(PTR_PTR_1126c7d68);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar14;
      func_0x00010c0720c0(ppuVar14,param_3,puVar2);
      if (((ulong)ppuVar11 & 1) == 0) {
        puVar3 = PTR_PTR_1126c7d68;
        func_0x00010c1003e0(PTR_PTR_1126c7d68);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar14;
        func_0x00010c0720c0(ppuVar14,param_3,puVar3);
        if ((int)ppuVar11 != 0) {
          _objc_release(puVar3);
          goto LAB_1060d81ac;
        }
        puVar4 = PTR_PTR_1126c7d68;
        func_0x00010c0ff000(PTR_PTR_1126c7d68);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar14;
        func_0x00010c0720c0(ppuVar14,param_3,puVar4);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        if (((ulong)ppuVar11 & 1) == 0) {
          puVar2 = PTR_PTR_1126c7d68;
          func_0x00010c0ffc40(PTR_PTR_1126c7d68);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar14;
          func_0x00010c0720c0(ppuVar14,param_3,puVar2);
          _objc_release(puVar2);
          if ((int)ppuVar11 == 0) {
            puVar2 = PTR_PTR_1126c7d70;
            func_0x00010bf3c700(PTR_PTR_1126c7d70);
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar14;
            func_0x00010c0720c0(ppuVar14,param_3,puVar2);
            _objc_release(puVar2);
            if ((int)ppuVar11 == 0) {
              puVar2 = PTR_PTR_1126c7d70;
              func_0x00010c257e00(PTR_PTR_1126c7d70);
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar14;
              func_0x00010c0720c0(ppuVar14,param_3,puVar2);
              _objc_release(puVar2);
              if ((int)ppuVar11 == 0) {
                puVar2 = PTR_PTR_1126b2330;
                func_0x00010c0e9cc0(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                ppuVar11 = ppuVar14;
                func_0x00010c0720c0(ppuVar14,param_3,puVar2);
                _objc_release(puVar2);
                if ((int)ppuVar11 == 0) {
                  puVar2 = PTR_PTR_1126b2330;
                  func_0x00010bf3df20(PTR_PTR_1126b2330);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar11 = ppuVar14;
                  func_0x00010c0720c0(ppuVar14,param_3,puVar2);
                  _objc_release(puVar2);
                  if ((int)ppuVar11 == 0) {
                    puVar2 = PTR_PTR_1126b2330;
                    func_0x00010bf96940(PTR_PTR_1126b2330);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar11 = ppuVar14;
                    func_0x00010c0720c0(ppuVar14,param_3,puVar2);
                    _objc_release(puVar2);
                    if ((int)ppuVar11 == 0) goto LAB_1060d8138;
                  }
                  func_0x00010bf3daa0(puVar1);
                }
                else {
                  func_0x00010c0e8f20(puVar1);
                }
              }
              else {
                func_0x00010be6ba40(puVar1,param_3,param_6);
              }
            }
            else {
              func_0x00010be580c0(puVar1,param_3,param_6);
            }
          }
          else {
            puVar2 = PTR_PTR_1126b2348;
            func_0x00010c29aa60(PTR_PTR_1126b2348);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = param_6;
            func_0x00010c0e00e0(param_6,param_3,puVar2);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            func_0x00010bf1f3c0();
            puVar1[0x58] = (char)uVar13;
            _objc_release(uVar12);
            _objc_release(puVar2);
          }
          goto LAB_1060d8138;
        }
      }
      else {
LAB_1060d81ac:
        _objc_release(puVar2);
      }
      dVar15 = *(double *)(puVar1 + 0x78);
      if (0.0 < dVar15) {
        func_0x00010bf5fd80(*(undefined8 *)(puVar1 + 0x38));
        *(double *)(puVar1 + 0x80) =
             *(double *)(puVar1 + 0x80) + (dVar15 - *(double *)(puVar1 + 0x78));
        *(undefined8 *)(puVar1 + 0x78) = 0xbff0000000000000;
      }
      goto LAB_1060d8138;
    }
  }
  else {
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010bf8b340(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_6;
  func_0x00010c0e00e0(param_6,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  param_1 = param_1 / 1000.0;
  *(double *)(puVar1 + 0x88) = param_1;
  _objc_release(uVar12);
  _objc_release(puVar2);
  func_0x00010bf5fd80(*(undefined8 *)(puVar1 + 0x38));
  *(double *)(puVar1 + 0x78) = param_1;
LAB_1060d8138:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar14);
  return;
}



/* Entry: 1060d8038; end: 1060d83cf; -[SCLensOperaViewingSession operaViewDidSendEvent:page:params:] */

void FUN_1060d8038(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c7d68;
  func_0x00010c100360(PTR_PTR_1126c7d68);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0(param_4,param_3,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126c7d68;
    func_0x00010c0fffc0(PTR_PTR_1126c7d68);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0720c0(param_4,param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126c7d68;
      func_0x00010c0ffd20(PTR_PTR_1126c7d68);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c0720c0(param_4,param_3,puVar1);
      if ((uVar2 & 1) == 0) {
        puVar3 = PTR_PTR_1126c7d68;
        func_0x00010c1003e0(PTR_PTR_1126c7d68);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_4;
        func_0x00010c0720c0(param_4,param_3,puVar3);
        if ((int)uVar2 != 0) {
          _objc_release(puVar3);
          goto LAB_1060d81ac;
        }
        puVar4 = PTR_PTR_1126c7d68;
        func_0x00010c0ff000(PTR_PTR_1126c7d68);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_4;
        func_0x00010c0720c0(param_4,param_3,puVar4);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar1);
        if ((uVar2 & 1) == 0) {
          puVar1 = PTR_PTR_1126c7d68;
          func_0x00010c0ffc40(PTR_PTR_1126c7d68);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_4;
          func_0x00010c0720c0(param_4,param_3,puVar1);
          _objc_release(puVar1);
          if ((int)uVar2 == 0) {
            puVar1 = PTR_PTR_1126c7d70;
            func_0x00010bf3c700(PTR_PTR_1126c7d70);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_4;
            func_0x00010c0720c0(param_4,param_3,puVar1);
            _objc_release(puVar1);
            if ((int)uVar2 == 0) {
              puVar1 = PTR_PTR_1126c7d70;
              func_0x00010c257e00(PTR_PTR_1126c7d70);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_4;
              func_0x00010c0720c0(param_4,param_3,puVar1);
              _objc_release(puVar1);
              if ((int)uVar2 == 0) {
                puVar1 = PTR_PTR_1126b2330;
                func_0x00010c0e9cc0(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_4;
                func_0x00010c0720c0(param_4,param_3,puVar1);
                _objc_release(puVar1);
                if ((int)uVar2 == 0) {
                  puVar1 = PTR_PTR_1126b2330;
                  func_0x00010bf3df20(PTR_PTR_1126b2330);
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = param_4;
                  func_0x00010c0720c0(param_4,param_3,puVar1);
                  _objc_release(puVar1);
                  if ((int)uVar2 == 0) {
                    puVar1 = PTR_PTR_1126b2330;
                    func_0x00010bf96940(PTR_PTR_1126b2330);
                    _objc_retainAutoreleasedReturnValue();
                    uVar2 = param_4;
                    func_0x00010c0720c0(param_4,param_3,puVar1);
                    _objc_release(puVar1);
                    if ((int)uVar2 == 0) goto LAB_1060d8138;
                  }
                  func_0x00010bf3daa0(param_2);
                }
                else {
                  func_0x00010c0e8f20(param_2);
                }
              }
              else {
                func_0x00010be6ba40(param_2,param_3,param_6);
              }
            }
            else {
              func_0x00010be580c0(param_2,param_3,param_6);
            }
          }
          else {
            puVar1 = PTR_PTR_1126b2348;
            func_0x00010c29aa60(PTR_PTR_1126b2348);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = param_6;
            func_0x00010c0e00e0(param_6,param_3,puVar1);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010bf1f3c0();
            *(char *)(param_2 + 0x58) = (char)uVar6;
            _objc_release(uVar5);
            _objc_release(puVar1);
          }
          goto LAB_1060d8138;
        }
      }
      else {
LAB_1060d81ac:
        _objc_release(puVar1);
      }
      dVar7 = *(double *)(param_2 + 0x78);
      if (0.0 < dVar7) {
        func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x38));
        *(double *)(param_2 + 0x80) =
             *(double *)(param_2 + 0x80) + (dVar7 - *(double *)(param_2 + 0x78));
        *(undefined8 *)(param_2 + 0x78) = 0xbff0000000000000;
      }
      goto LAB_1060d8138;
    }
  }
  else {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010bf8b340(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c0e00e0(param_6,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  param_1 = param_1 / 1000.0;
  *(double *)(param_2 + 0x88) = param_1;
  _objc_release(uVar5);
  _objc_release(puVar1);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x38));
  *(double *)(param_2 + 0x78) = param_1;
LAB_1060d8138:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060d83d0; end: 1060d8767; -[SCLensOperaViewingSession _logSKAdClickMetricsWithParams:] */

void FUN_1060d83d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  puVar12 = PTR_PTR_1126c7d78;
  func_0x00010c13ca20(PTR_PTR_1126c7d78);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  puVar2 = PTR_PTR_1126c7d78;
  func_0x00010bf987e0(PTR_PTR_1126c7d78);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c7d78;
  func_0x00010c08ad40(PTR_PTR_1126c7d78);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c0aea60(uVar13);
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(puVar12);
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  if (lVar6 == 0x10) {
    puVar12 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc();
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2813a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    func_0x00010c057e80();
    _objc_release(uVar1);
    _objc_release(uVar7);
  }
  else {
    puVar12 = (undefined *)0x0;
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c23d7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c23d840(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c23d8e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x0001084c1688(uVar1,uVar13,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar13);
  _objc_release(uVar1);
  _objc_release(uVar8);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = puVar12;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2813a0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar10;
  func_0x00010bef4d80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf3ca00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010c29e460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2bfa0();
  func_0x00010c247820();
  puVar3 = PTR_PTR_1126c7d78;
  func_0x00010bf987e0(PTR_PTR_1126c7d78);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aea80(0,0,uVar11);
  _objc_release(uVar9);
  _objc_release(puVar3);
  _objc_release(uVar13);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060d8768; end: 1060d88bf; -[SCLensOperaViewingSession _onStoreViewClosed:] */

void FUN_1060d8768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126c7d80;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR_PTR_1126c7d88;
  func_0x00010c0f1720(PTR_PTR_1126c7d88);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf1f3c0();
  puVar4 = PTR_PTR_1126c7d88;
  func_0x00010c0f1740(PTR_PTR_1126c7d88);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1f3c0();
  puVar7 = PTR_PTR_1126c7d88;
  func_0x00010c0f2320(PTR_PTR_1126c7d88);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf885a0(uVar8);
  func_0x00010c0266a0(puVar1,param_2,uVar9,uVar6);
  uVar9 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar1;
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}


