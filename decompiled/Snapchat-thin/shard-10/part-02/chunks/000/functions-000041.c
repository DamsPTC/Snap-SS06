/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a665d4; end: 107a66643; -[SCTopicViewerMusicEntryPoint topicViewerViewControllerShouldDismissWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a665d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112768c48;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a66644; end: 107a66783; -[SCTopicViewerMusicEntryPoint _storiesTopicShareManagerImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a66644(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126d6120;
  _objc_alloc(PTR_PTR_1126d6120);
  lVar2 = param_1 + _DAT_112768c98;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112768c70;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112768c74);
  lVar6 = param_1 + _DAT_112768c78;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_112768c7c;
  _objc_loadWeakRetained(lVar7);
  param_1 = param_1 + _DAT_112768c90;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b5c0(puVar1,param_2,lVar3,lVar5,uVar9,lVar6,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a66784; end: 107a668d7; -[SCTopicViewerMusicEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a66784(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768ca4,0);
  _objc_storeStrong(param_1 + _DAT_112768c64,0);
  _objc_storeStrong(param_1 + _DAT_112768ca0,0);
  _objc_storeStrong(param_1 + _DAT_112768c74,0);
  _objc_destroyWeak(param_1 + _DAT_112768c78);
  _objc_storeStrong(param_1 + _DAT_112768c68,0);
  _objc_destroyWeak(param_1 + _DAT_112768c90);
  _objc_destroyWeak(param_1 + _DAT_112768c54);
  _objc_destroyWeak(param_1 + _DAT_112768c50);
  _objc_destroyWeak(param_1 + _DAT_112768c9c);
  _objc_destroyWeak(param_1 + _DAT_112768c5c);
  _objc_destroyWeak(param_1 + _DAT_112768c60);
  _objc_destroyWeak(param_1 + _DAT_112768c4c);
  _objc_destroyWeak(param_1 + _DAT_112768c58);
  _objc_destroyWeak(param_1 + _DAT_112768c88);
  _objc_destroyWeak(param_1 + _DAT_112768c80);
  _objc_destroyWeak(param_1 + _DAT_112768c8c);
  _objc_destroyWeak(param_1 + _DAT_112768c84);
  _objc_destroyWeak(param_1 + _DAT_112768c48);
  _objc_destroyWeak(param_1 + _DAT_112768c98);
  _objc_destroyWeak(param_1 + _DAT_112768c6c);
  _objc_destroyWeak(param_1 + _DAT_112768c7c);
  _objc_destroyWeak(param_1 + _DAT_112768c94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112768c70);
  return;
}



/* Entry: 107a668d8; end: 107a66e07; -[SCTopicViewerRemixesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a668d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar28 = (long)_DAT_112768ca8;
  lVar1 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c129b20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release();
  func_0x000107a80228();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d6150;
  _objc_alloc();
  lVar2 = param_1 + lVar28;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c258ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_112768cac;
  lVar27 = param_1 + lVar29;
  _objc_loadWeakRetained(lVar27);
  lVar6 = lVar27;
  func_0x00010c258d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d2e0();
  _objc_release(lVar6);
  _objc_release(lVar27);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_initWeak(auStack_70,param_1);
  puVar7 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126d6118;
  _objc_alloc();
  lVar29 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar9 = lVar29;
  func_0x00010c258d80();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_112768cb0;
  lVar2 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar10 = lVar2;
  func_0x00010c275380();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  (**(code **)(lVar10 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar13 = lVar27;
  func_0x00010c2755a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112768cb4;
  _objc_loadWeakRetained();
  lVar16 = lVar5;
  func_0x00010c275480();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar18 = lVar6;
  func_0x00010c247a00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar28;
  _objc_loadWeakRetained();
  func_0x00010c247a20();
  lVar20 = param_1 + _DAT_112768cb8;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c275aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126c9168;
  _objc_alloc();
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x00010c01c5c0();
  lVar24 = param_1 + _DAT_112768cc0;
  _objc_loadWeakRetained();
  lVar25 = param_1 + _DAT_112768cc4;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_107a6eff4();
  func_0x00010c0543a0();
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(puVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar6);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar5);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar27);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(lVar29);
  func_0x00010c18b5e0(puVar8);
  func_0x00010c1c8b80(puVar8);
  param_1 = param_1 + lVar28;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(lVar3);
  return;
}



/* Entry: 107a66e08; end: 107a66e47;  */

void FUN_107a66e08(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec4620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a66e48; end: 107a66ebb; -[SCTopicViewerRemixesEntryPoint topicViewerViewControllerDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a66e48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112768ca8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf740e0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a66ebc; end: 107a66f2b; -[SCTopicViewerRemixesEntryPoint topicViewerViewControllerShouldDismissWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a66ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112768ca8;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a66f2c; end: 107a66fd3; -[SCTopicViewerRemixesEntryPoint presentCameraWorkflowWithPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a66f2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112768ca8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf2a300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010bf2a300();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a66fd4; end: 107a67113; -[SCTopicViewerRemixesEntryPoint _storiesTopicShareManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a66fd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126d6120;
  _objc_alloc(PTR_PTR_1126d6120);
  lVar2 = param_1 + _DAT_112768cc8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112768ccc;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112768cd0);
  lVar6 = param_1 + _DAT_112768cd4;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_112768cd8;
  _objc_loadWeakRetained(lVar7);
  param_1 = param_1 + _DAT_112768cc0;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b5c0(puVar1,param_2,lVar3,lVar5,uVar9,lVar6,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a67114; end: 107a671e3; -[SCTopicViewerRemixesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a67114(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768cbc,0);
  _objc_storeStrong(param_1 + _DAT_112768cd0,0);
  _objc_destroyWeak(param_1 + _DAT_112768cd4);
  _objc_destroyWeak(param_1 + _DAT_112768cc0);
  _objc_destroyWeak(param_1 + _DAT_112768cc4);
  _objc_destroyWeak(param_1 + _DAT_112768cd8);
  _objc_destroyWeak(param_1 + _DAT_112768cac);
  _objc_destroyWeak(param_1 + _DAT_112768cb8);
  _objc_destroyWeak(param_1 + _DAT_112768cc8);
  _objc_destroyWeak(param_1 + _DAT_112768cb0);
  _objc_destroyWeak(param_1 + _DAT_112768cb4);
  _objc_destroyWeak(param_1 + _DAT_112768ccc);
  _objc_destroyWeak(param_1 + _DAT_112768cdc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112768ca8);
  return;
}



/* Entry: 107a671e4; end: 107a67737; -[SCTopicViewerThirdPartyAppEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a671e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar32 = (long)_DAT_112768ce0;
  lVar1 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c26d220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c0dfa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_70,param_1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_78,auStack_70);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d6118;
    _objc_alloc();
    lVar5 = lVar2;
    func_0x00010c0dfa00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf05ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_112768ce4;
    _objc_loadWeakRetained();
    lVar7 = lVar1;
    func_0x00010c258d80();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = (long)_DAT_112768ce8;
    lVar8 = param_1 + lVar33;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010c275380();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    (**(code **)(lVar9 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = param_1 + lVar33;
    _objc_loadWeakRetained();
    lVar12 = lVar33;
    func_0x00010c2755a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + _DAT_112768cec;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010c275480();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + lVar32;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c247a00();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + lVar32;
    _objc_loadWeakRetained();
    func_0x00010c247a20();
    lVar21 = param_1 + _DAT_112768cf0;
    _objc_loadWeakRetained();
    lVar22 = lVar21;
    func_0x00010c275aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126d6158;
    _objc_alloc();
    lVar25 = param_1 + _DAT_112768cf4;
    _objc_loadWeakRetained();
    lVar26 = lVar25;
    func_0x00010bf89340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051c00();
    lVar27 = lVar2;
    func_0x00010bfe5040();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR_PTR_1126c9168;
    _objc_alloc();
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010c01c5c0();
    lVar29 = param_1 + _DAT_112768cfc;
    _objc_loadWeakRetained();
    lVar30 = param_1 + _DAT_112768d00;
    _objc_loadWeakRetained();
    lVar31 = lVar30;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_107a6eff4();
    func_0x00010c0543a0(puVar4);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(puVar28);
    _objc_release(lVar27);
    _objc_release(puVar24);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(puVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar33);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    func_0x00010c18b5e0(puVar4);
    func_0x00010c1c8b80(puVar4);
    param_1 = param_1 + lVar32;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 107a67738; end: 107a67777;  */

void FUN_107a67738(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec4640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a67778; end: 107a677eb; -[SCTopicViewerThirdPartyAppEntryPoint topicViewerViewControllerDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a67778(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112768ce0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74120(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a677ec; end: 107a6785b; -[SCTopicViewerThirdPartyAppEntryPoint topicViewerViewControllerShouldDismissWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a677ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112768ce0;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a6785c; end: 107a6799b; -[SCTopicViewerThirdPartyAppEntryPoint _storiesTopicShareManagerImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6785c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126d6120;
  _objc_alloc(PTR_PTR_1126d6120);
  lVar2 = param_1 + _DAT_112768d04;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112768d08;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112768d0c);
  lVar6 = param_1 + _DAT_112768d10;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_112768d14;
  _objc_loadWeakRetained(lVar7);
  param_1 = param_1 + _DAT_112768cfc;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b5c0(puVar1,param_2,lVar3,lVar5,uVar9,lVar6,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a6799c; end: 107a67a6b; -[SCTopicViewerThirdPartyAppEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a6799c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768d0c,0);
  _objc_destroyWeak(param_1 + _DAT_112768d10);
  _objc_storeStrong(param_1 + _DAT_112768cf8,0);
  _objc_destroyWeak(param_1 + _DAT_112768cfc);
  _objc_destroyWeak(param_1 + _DAT_112768d00);
  _objc_destroyWeak(param_1 + _DAT_112768cf4);
  _objc_destroyWeak(param_1 + _DAT_112768ce8);
  _objc_destroyWeak(param_1 + _DAT_112768cec);
  _objc_destroyWeak(param_1 + _DAT_112768cf0);
  _objc_destroyWeak(param_1 + _DAT_112768ce4);
  _objc_destroyWeak(param_1 + _DAT_112768ce0);
  _objc_destroyWeak(param_1 + _DAT_112768d04);
  _objc_destroyWeak(param_1 + _DAT_112768d14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112768d08);
  return;
}



/* Entry: 107a67a6c; end: 107a67c13; -[SCTopicViewerLensHeaderProvider initWithLensInfo:lensContentServices:lensFavoritesServices:lensFavoritesNotificationService:lensFavoritesLoggingServices:lensExplorerNavigationServices:lensCreatorProfilePresenter:studySettings:] */

undefined1 *
FUN_107a67a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126f9838;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_10;
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



/* Entry: 107a67c14; end: 107a67db7; -[SCTopicViewerLensHeaderProvider headerSectionWithActionHandler:presentingController:sessionId:] */

void FUN_107a67c14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126d6160;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c094480(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c093ba0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c093c60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c093ae0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c093b20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c093320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024aa0(puVar1,param_2,uVar10,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x10),param_4);
  _objc_release(param_4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126d6168;
  _objc_alloc(PTR_PTR_1126d6168);
  func_0x00010c024140();
  puVar9 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  func_0x00010c161980(puVar9,param_2,puVar1);
  _objc_release(puVar8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107a67db8; end: 107a67e53; -[SCTopicViewerLensHeaderProvider dynamicHeaderTrackerForTopicView:] */

void FUN_107a67db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d6170;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x000107a80138();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c095760(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0546a0(puVar1,param_2,param_3,puVar2,uVar3);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a67e54; end: 107a67ecb; -[SCTopicViewerLensHeaderProvider .cxx_destruct] */

void FUN_107a67e54(long param_1)

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



/* Entry: 107a67ecc; end: 107a67ed3; -[SCTopicViewerNullHeaderProvider headerSectionWithActionHandler:presentingController:sessionId:] */

undefined8 FUN_107a67ecc(void)

{
  return 0;
}



/* Entry: 107a67ed4; end: 107a67edb; -[SCTopicViewerNullHeaderProvider dynamicHeaderTrackerForTopicView:] */

undefined8 FUN_107a67ed4(void)

{
  return 0;
}



/* Entry: 107a67edc; end: 107a67f7f; -[SCTopicViewerThirdPartyAppHeaderProvider initWithThirdPartyAppInfo:onDemandResourceDownloader:] */

undefined1 *
FUN_107a67edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9840;
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



/* Entry: 107a67f80; end: 107a6800b; -[SCTopicViewerThirdPartyAppHeaderProvider headerSectionWithActionHandler:presentingController:sessionId:] */

void FUN_107a67f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d6178;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c051c00();
  puVar2 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  func_0x00010c161980(puVar2,param_2,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a6800c; end: 107a680a7; -[SCTopicViewerThirdPartyAppHeaderProvider dynamicHeaderTrackerForTopicView:] */

void FUN_107a6800c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d6170;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x000107a80180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf05ba0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0546a0(puVar1,param_2,param_3,puVar2,uVar3);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a680a8; end: 107a680d7; -[SCTopicViewerThirdPartyAppHeaderProvider .cxx_destruct] */

void FUN_107a680a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a680d8; end: 107a6817b; -[SCTopicLensCreatorProfileScopePresenter initWithLensCreatorProfileScopeExposer:lensCreatorProfileScopeServices:] */

undefined1 *
FUN_107a680d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9848;
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



/* Entry: 107a6817c; end: 107a682d3; -[SCTopicLensCreatorProfileScopePresenter presentCreatorProfileWithLensInfo:presentingViewController:] */

void FUN_107a6817c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c078fa0();
  lVar3 = param_3;
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf5b600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126b6560;
    if (lVar2 != 0) {
      func_0x00010bf5b600(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11a820(puVar4,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107a6826c;
    }
  }
  puVar4 = PTR_PTR_1126b6560;
  func_0x00010bf5b440(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf5b580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf430e0(puVar4,param_2,lVar3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
LAB_107a6826c:
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf232e0(uVar5,param_2,puVar4,0,param_4,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a682d4; end: 107a682f3; -[SCTopicLensCreatorProfileScopePresenter lensCreatorProfiledDismissedWithScope:] */

void FUN_107a682d4(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107a682f4; end: 107a68323; -[SCTopicLensCreatorProfileScopePresenter .cxx_destruct] */

void FUN_107a682f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a68324; end: 107a683c7; -[SCTopicViewerMusicAdditionalTopicsRequester initWithMusicServices:sourceSnapStoryId:] */

undefined1 *
FUN_107a68324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9850;
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



/* Entry: 107a683c8; end: 107a6859f; -[SCTopicViewerMusicAdditionalTopicsRequester fetchSnapsForTopic:topicStoryType:lastStreamToken:isCameosEnabled:suggestiveFilterMode:completion:] */

void FUN_107a683c8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 in_x7;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar6 = &puStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(in_x7);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c275520();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar7);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = lVar1;
  if (lVar2 == 0) {
    uStack_58 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaa280(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_50 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaa260(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107a685a0;
  puStack_78 = &UNK_11086f388;
  uStack_70 = param_3;
  uStack_68 = uVar7;
  uStack_60 = in_x7;
  _objc_retain(in_x7);
  _objc_retain(uVar7);
  uVar5 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar4);
  _objc_release(uVar5);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(in_x7);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((param_2 == 0) || (ppuVar6 != (undefined **)0x0)) {
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000107a685e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x30) + 0x10))
            (*(long *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x20),param_2,0,0,uVar7,0,0);
  return;
}



/* Entry: 107a685a0; end: 107a685eb;  */

void FUN_107a685a0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_2 == 0) || (param_3 != 0)) {
    param_2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000107a685e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),param_2,0,0,uVar1,0,0);
  return;
}



/* Entry: 107a685ec; end: 107a6861b; -[SCTopicViewerMusicAdditionalTopicsRequester .cxx_destruct] */

void FUN_107a685ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a6861c; end: 107a68ccb; -[SCTopicViewerMusicHeaderInteractor initWithMusicInfo:isPrivateMusic:sourcePageSessionId:musicServices:musicTopicViewerServices:urlInterceptorProvider:notificationPresenter:soundTopicPresenter:topicViewerMusicScopeBuilderServices:userDataFeedServices:businessProfilesPresenterScopeExposer:webBrowsingScopeExposer:textSender:scopedConversationParser:sendToScopeExposer:sendToScopeServices:notificationServices:] */

undefined8 *
FUN_107a6861c(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
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
  puStack_d0 = PTR_PTR_1126f9858;
  puVar1 = &uStack_d8;
  uStack_d8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x91) = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bfdfdc0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar11;
    func_0x00010bfdf020();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[5];
    puVar1[5] = uVar10;
    _objc_release(uVar9);
    _objc_release(uVar11);
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[6];
    puVar1[6] = uVar11;
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[1];
    puVar1[1] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d6180;
    _objc_alloc();
    uVar2 = param_7;
    func_0x00010c2473c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051aa0();
    uVar11 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar11);
    _objc_release(uVar2);
    lVar12 = puVar1[1];
    lVar4 = param_3;
    FUN_107a68ccc();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    func_0x00010c2918c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    puVar3 = PTR_PTR_1126ae6b8;
    puVar13 = (undefined *)0x0;
    if ((lVar4 != 0) && (lVar5 != 0)) {
      lVar12 = lVar5;
      func_0x00010c0726a0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbc400();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(lVar12);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_107a6b18c;
      puStack_88 = &UNK_1109f80b8;
      _objc_retain(lVar4);
      ppuVar7 = &puStack_a0;
      lStack_80 = lVar4;
      _objc_retainBlock(ppuVar7);
      lVar12 = lVar5;
      func_0x00010c291a20();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar12;
      func_0x00010bf43280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      puVar13 = (undefined *)0x0;
      if ((puVar6 != (undefined *)0x0) && (lVar8 != 0)) {
        puVar3 = puVar6;
        func_0x00010c268560();
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0xc2000000;
        pcStack_b8 = FUN_107a6b228;
        puStack_b0 = &UNK_110855030;
        puVar13 = puVar3;
        lStack_a8 = lVar8;
        func_0x00010bfb26a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      _objc_release(lVar8);
      _objc_release(ppuVar7);
      _objc_release(lStack_80);
      _objc_release(puVar6);
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar13;
    _objc_release(uVar2);
    _objc_release(lVar4);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar13 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar13);
    uVar2 = param_7;
    func_0x00010c27ba60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar11);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    func_0x00010be66100(puVar1);
    func_0x00010be66f80(puVar1);
    func_0x00010be150a0(puVar1);
  }
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107a68ccc; end: 107a68d8f;  */

void FUN_107a68ccc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c278260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c277e80();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126be9e8;
    _objc_alloc(PTR_PTR_1126be9e8);
    lVar1 = param_1;
    func_0x00010c278260(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c277e80();
    func_0x00010841fab4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b3c0(puVar3,param_2,lVar2,7,0);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a68d90; end: 107a68de3; -[SCTopicViewerMusicHeaderInteractor dealloc] */

void FUN_107a68d90(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f9858;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107a68de4; end: 107a68e1b; -[SCTopicViewerMusicHeaderInteractor musicHeaderViewModel] */

void FUN_107a68de4(void)

{
  _objc_alloc(PTR_PTR_1126d6188);
  func_0x00010c011880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a68e1c; end: 107a68e1f; -[SCTopicViewerMusicHeaderInteractor handleTopicViewerHiddenDueToPresentation] */

void FUN_107a68e1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be70e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pausePlaybackIfNeeded_112579d30);
  return;
}



/* Entry: 107a68e20; end: 107a68e4f; -[SCTopicViewerMusicHeaderInteractor updateSessionId:] */

void FUN_107a68e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a68e50; end: 107a68e5b; -[SCTopicViewerMusicHeaderInteractor updatePresentingViewController:] */

void FUN_107a68e50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 107a68e5c; end: 107a68ea3; -[SCTopicViewerMusicHeaderInteractor _currentTrack] */

void FUN_107a68e5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c296d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107a68ea4; end: 107a692cb; -[SCTopicViewerMusicHeaderInteractor handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_107a68ea4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d6190;
  func_0x00010c247080(PTR_PTR_1126d6190);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)uVar8 == 0) {
    puVar2 = PTR_PTR_1126d6190;
    func_0x00010c247100(PTR_PTR_1126d6190);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)uVar8 == 0) {
      puVar2 = PTR_PTR_1126d6190;
      func_0x00010c2470c0(PTR_PTR_1126d6190);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar1;
      func_0x00010c0720c0(uVar1,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)uVar8 == 0) {
        puVar2 = PTR_PTR_1126d6190;
        func_0x00010c2470e0(PTR_PTR_1126d6190);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar1;
        func_0x00010c0720c0(uVar1,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)uVar8 == 0) {
          puVar2 = PTR_PTR_1126d6190;
          func_0x00010c2470a0(PTR_PTR_1126d6190);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar1;
          func_0x00010c0720c0(uVar1,param_2,puVar2);
          _objc_release(puVar2);
          if ((int)uVar8 == 0) {
            puVar2 = PTR_PTR_1126d6190;
            func_0x00010c247120(PTR_PTR_1126d6190);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar1;
            func_0x00010c0720c0(uVar1,param_2,puVar2);
            _objc_release(puVar2);
            if ((int)uVar8 == 0) {
              uVar8 = *(undefined8 *)(param_1 + 0x28);
              puVar2 = param_1 + 0x60;
              _objc_loadWeakRetained(puVar2);
              func_0x00010bfd0100(uVar8,param_2,param_1,param_4,param_5,param_3,puVar2);
              _objc_release(puVar2);
              goto LAB_107a69170;
            }
            func_0x00010be70e40(param_1);
            func_0x00010c0af720(*(undefined8 *)(param_1 + 0x30));
            puVar9 = *(undefined **)(param_1 + 0x30);
            _objc_retain(puVar9);
            uVar10 = *(undefined8 *)(param_1 + 200);
            uVar7 = *(undefined8 *)(param_1 + 0x18);
            func_0x00010c278260(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c277e80();
            param_1 = param_1 + 0x60;
            _objc_loadWeakRetained(param_1);
            puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_80 = 0xc2000000;
            pcStack_78 = FUN_107a692cc;
            puStack_70 = &UNK_110842e18;
            puStack_68 = puVar9;
            _objc_retain(puVar9);
            func_0x00010c22b180(uVar10,param_2,uVar8,param_1,&puStack_88);
            _objc_release(param_1);
            _objc_release(uVar7);
            puVar2 = puStack_68;
            goto LAB_107a690c8;
          }
          func_0x00010be7a2c0(param_1);
        }
        else {
          lVar6 = *(long *)(param_1 + 0x18);
          func_0x00010c128040();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar6 != 0) {
            func_0x00010be7e9e0(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
          }
        }
      }
      else {
        puVar9 = param_1;
        func_0x00010bdf73e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar9;
        func_0x00010c277900();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bf9e560();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c08fa60();
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
        if (puVar4 != (undefined *)0x0) {
          puVar3 = puVar9;
          func_0x00010c277900(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf9e560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3460(puVar2,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(puVar3);
          func_0x00010be78960(param_1,param_2,puVar2);
          puVar3 = puVar9;
          func_0x00010c277900(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c277e80();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010af28d38();
          _objc_release(puVar4);
          _objc_release(puVar3);
          uVar8 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010841fab4(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a99c0(uVar8,param_2,puVar5);
          _objc_release(puVar5);
LAB_107a690c8:
          _objc_release(puVar2);
        }
        _objc_release(puVar9);
      }
    }
    else {
      func_0x00010becce80(param_1);
    }
  }
  else {
    func_0x00010be0e7a0(param_1);
  }
  uVar8 = 1;
LAB_107a69170:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 107a692cc; end: 107a692d3;  */

void FUN_107a692cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0af6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logShareSoundSubmitted_1126097c8);
  return;
}



/* Entry: 107a692d4; end: 107a693ef; -[SCTopicViewerMusicHeaderInteractor _observeFavoriteState] */

void FUN_107a692d4(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    puVar1 = auStack_48;
    _objc_initWeak(puVar1,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0ea0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar2 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 107a693f0; end: 107a6944f;  */

void FUN_107a693f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be0e6c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a69450; end: 107a69457; -[SCTopicViewerMusicHeaderInteractor _favoriteStateDidChange:] */

void FUN_107a69450(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 107a69458; end: 107a695d3; -[SCTopicViewerMusicHeaderInteractor _favoritesButtonTapped] */

void FUN_107a69458(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_58 [8];
  byte bStack_50;
  undefined1 auStack_48 [8];
  
  lVar2 = *(long *)(param_1 + 0x18);
  FUN_107a68ccc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x90);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2918c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    if ((~bVar1 & 1) == 0) {
      func_0x00010c12c360();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bef81c0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c0a5f60(*(undefined8 *)(param_1 + 0x30));
    _objc_initWeak(auStack_48,param_1);
    puVar6 = auStack_58;
    _objc_copyWeak(puVar6,auStack_48);
    bStack_50 = (bVar1 ^ 0xff) & 1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar5);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar5);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 107a695d4; end: 107a69827;  */

void FUN_107a695d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  
  if (param_3 != 0) {
    return;
  }
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa1200();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar5 = lVar1;
    if ((int)uVar4 == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        func_0x00010be36920();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010be368e0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      func_0x00010be36820();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be367e0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar13 = *(long *)(lVar1 + 0x18);
    _objc_retain(lVar13);
    lVar6 = lVar13;
    func_0x00010c278260();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010beff2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar7 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126b3020;
      _objc_alloc(PTR_PTR_1126b3020);
      lVar6 = lVar13;
      func_0x00010c278260(lVar13);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010beff2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar13;
      func_0x00010c278260(lVar13);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010beff260();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar13;
      func_0x00010c278260(lVar13);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010beff240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059fe0(puVar14,param_2,lVar7,lVar9,lVar11);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    _objc_release(lVar13);
    puVar12 = PTR_PTR_1126bfd18;
    _objc_alloc(PTR_PTR_1126bfd18);
    func_0x00010c03e040();
    func_0x00010c25f100(*(undefined8 *)(lVar1 + 0x10),param_2,puVar12,
                        *(undefined1 *)(param_1 + 0x28),0);
    _objc_release(puVar12);
    _objc_release(puVar14);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a69828; end: 107a6996b; -[SCTopicViewerMusicHeaderInteractor _presentSoundTopicPageForTrackInfo:] */

void FUN_107a69828(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar1 = param_3;
    func_0x00010c128040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010be70e40(param_1);
      puVar2 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      lVar1 = param_1 + 0x60;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c038f40(puVar2,param_2,lVar1,1);
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126c5608;
      _objc_alloc(PTR_PTR_1126c5608);
      lVar1 = param_3;
      func_0x00010c128040(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01f360(puVar3,param_2,0,lVar1,0);
      _objc_release(lVar1);
      uVar4 = *(undefined8 *)(param_1 + 0xa0);
      func_0x00010bf23440(uVar4,param_2,puVar3,*(undefined8 *)(param_1 + 0xb0),0x7c,0,puVar2,0,
                          param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08bf20(*(undefined8 *)(param_1 + 0x98),param_2,uVar4,param_1);
      _objc_release(uVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a6996c; end: 107a69b5b; -[SCTopicViewerMusicHeaderInteractor _fetchTrack] */

void FUN_107a6996c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar6 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126bfdd0;
  puVar3 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126d6198;
  func_0x00010bfdef60(PTR_PTR_1126d6198);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c275840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d2960(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2781e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c278260(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277e80();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010bfcb640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107a69b5c;
  puStack_58 = &UNK_1109f8048;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  puVar7 = (undefined1 *)ppuVar6;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar4);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107a69b5c; end: 107a69bc3;  */

void FUN_107a69b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe120();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a69bc4; end: 107a69cc7; -[SCTopicViewerMusicHeaderInteractor _didFetchTrack:error:] */

void FUN_107a69bc4(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if ((param_3 == (undefined *)0x0) || (param_4 != 0)) {
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
  }
  else {
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c27b980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar2 == (undefined *)0x0) goto LAB_107a69cb4;
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    puVar2 = param_3;
    func_0x00010c27b980(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f520();
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
LAB_107a69cb4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a69cc8; end: 107a69dcb; -[SCTopicViewerMusicHeaderInteractor _observeTrack] */

void FUN_107a69cc8(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107a69ee4;
  puStack_58 = &UNK_11084eff0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf870c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107a69dcc; end: 107a69ee3;  */

bool FUN_107a69dcc(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_2 == 0 && lVar2 == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_2 != 0) && (lVar2 != 0)) {
      lVar3 = param_2;
      func_0x00010c277900(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c277e80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010af28d38();
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar3 = lVar2;
      func_0x00010c277900(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c277e80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010af28d38();
      _objc_release(lVar4);
      _objc_release(lVar3);
      bVar1 = lVar5 == lVar6;
    }
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107a69ee4; end: 107a69f37;  */

void FUN_107a69ee4(long param_1,long param_2)

{
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be3b900();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a69f38; end: 107a69f8f; -[SCTopicViewerMusicHeaderInteractor _pausePlaybackIfNeeded] */

/* WARNING: Possible PIC construction at 0x000107a69f68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107a69f6c) */

void FUN_107a69f38(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010c07a400();
  if (iVar1 != 0) {
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x50),PTR_s_next__112614028,
               PTR____kCFBooleanFalse_11034ab60);
    return;
  }
  return;
}



/* Entry: 107a69f90; end: 107a6a13b; -[SCTopicViewerMusicHeaderInteractor _initializePlayerWithTrack:] */

void FUN_107a69f90(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107a6a13c;
    puStack_60 = &UNK_1109094f0;
    _objc_retain(param_3);
    ppuVar1 = &puStack_78;
    lStack_58 = param_3;
    _objc_retainBlock(ppuVar1);
    puVar2 = PTR_PTR_1126c47f0;
    _objc_alloc();
    func_0x00010bff54a0();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar2;
    _objc_release(uVar4);
    func_0x00010c108f40(*(undefined8 *)(param_1 + 0x48));
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x50));
    _objc_initWeak(auStack_80,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0f9980(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(ppuVar1);
    _objc_release(lStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a6a13c; end: 107a6a1c7;  */

void FUN_107a6a13c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0ef80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)PTR__UTTypeWAV_11034b158;
  func_0x00010bfe5ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0082a0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a6a1c8; end: 107a6a2c3;  */

void FUN_107a6a1c8(double param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x48) == 0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_58);
    }
    _CMTimeGetSeconds(&uStack_58);
    if (0.0 < param_1) {
      dVar3 = param_1;
      if (param_3 == 0) {
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
      }
      else {
        func_0x00010bdc1140(&uStack_58,param_3);
      }
      _CMTimeGetSeconds(&uStack_58);
      dVar4 = 1.0;
      if (dVar3 / param_1 <= 1.0) {
        dVar4 = dVar3 / param_1;
      }
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      uVar2 = *(undefined8 *)(param_2 + 0x58);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2);
      _objc_release(puVar1);
    }
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 107a6a2c4; end: 107a6a3eb; -[SCTopicViewerMusicHeaderInteractor _togglePlayback] */

void FUN_107a6a2c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    func_0x00010c07a400();
    if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be70e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pausePlaybackIfNeeded_112579d30);
      return;
    }
    func_0x00010c157260(*(undefined8 *)(param_1 + 0x48));
    func_0x00010c0fe360(*(undefined8 *)(param_1 + 0x48));
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x50));
    lVar1 = param_1;
    func_0x00010bdf73e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010c277900(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c277e80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010af28d38();
      _objc_release(lVar3);
      _objc_release(lVar2);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010841fab4(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b1da0(0,uVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 107a6a3ec; end: 107a6a57b; -[SCTopicViewerMusicHeaderInteractor _prepareLinkfire:] */

void FUN_107a6a3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010be70e40(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c099960(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar1);
    func_0x000108065c5c(param_3,lVar1,1,*(undefined8 *)(param_1 + 0x68),param_1,0x13,uVar2);
    _objc_release(lVar1);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c150520(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf217e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c297260(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a6a57c; end: 107a6a5d3;  */

void FUN_107a6a57c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a6a5d4; end: 107a6a5db; -[SCTopicViewerMusicHeaderInteractor didCompleteTopicViewerMusicScope:] */

void FUN_107a6a5d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_endLaunchTopicViewerMusicFeature_1125c2ca8);
  return;
}



/* Entry: 107a6a5dc; end: 107a6a603; -[SCTopicViewerMusicHeaderInteractor linkfireURLInterceptor:baseViewControllerForAlertDialog:] */

void FUN_107a6a5dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a6a604; end: 107a6a607; -[SCTopicViewerMusicHeaderInteractor linkfireURLInterceptor:willPresentDisclaimerForURL:] */

void FUN_107a6a604(void)

{
  return;
}



/* Entry: 107a6a608; end: 107a6a757; -[SCTopicViewerMusicHeaderInteractor linkfireURLInterceptor:didAcceptAgreement:forURL:] */

void FUN_107a6a608(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar1 = *(long *)(param_1 + 0x68);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c150520(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010bf6f440(uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  else if (*(long *)(param_1 + 0x80) != 0) {
    func_0x00010c09c520();
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107a6a758; end: 107a6a7bb;  */

void FUN_107a6a758(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x68);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = 0;
      _objc_release(uVar2);
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a6a7bc; end: 107a6a7f3; -[SCTopicViewerMusicHeaderInteractor webBrowser:willInterceptWithInterceptor:] */

void FUN_107a6a7bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a6a7f4; end: 107a6a847; -[SCTopicViewerMusicHeaderInteractor webBrowserDidDismiss:] */

void FUN_107a6a7f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a6a848; end: 107a6a9af; -[SCTopicViewerMusicHeaderInteractor webBrowser:didStartNavigationWithURL:] */

void FUN_107a6a848(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bdf73e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_4;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      uVar3 = param_4;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf4bb00();
      if ((uVar4 & 1) == 0) {
        uVar4 = param_4;
        func_0x00010bfe4420();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf4bb00();
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar5 & 1) != 0) goto LAB_107a6a98c;
        uVar2 = uVar1;
        func_0x00010c277900(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c277e80();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010af28d38();
        _objc_release(uVar4);
        _objc_release(uVar2);
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        uVar2 = param_4;
        func_0x00010bfe4420(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010841fab4(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a9980(uVar6,param_2,uVar2,uVar3);
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
LAB_107a6a98c:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107a6a9b0; end: 107a6aa5b; -[SCTopicViewerMusicHeaderInteractor webBrowserDidTapShare:] */

void FUN_107a6a9b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bdf73e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c277900(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010af28d38();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010841fab4(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a99e0(uVar5,param_2,lVar4);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a6aa5c; end: 107a6ab07; -[SCTopicViewerMusicHeaderInteractor webBrowserDidTapOpenInBrowser:] */

void FUN_107a6aa5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bdf73e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c277900(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010af28d38();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010841fab4(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a99a0(uVar5,param_2,lVar4);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a6ab08; end: 107a6ab83; -[SCTopicViewerMusicHeaderInteractor _iconHeartFillImage] */

void FUN_107a6ab08(undefined8 param_1,undefined8 param_2)

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



/* Entry: 107a6ab84; end: 107a6abff; -[SCTopicViewerMusicHeaderInteractor _iconHeartOutlineImage] */

void FUN_107a6ab84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
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



/* Entry: 107a6ac00; end: 107a6ac7b; -[SCTopicViewerMusicHeaderInteractor _iconBookmarkFillImage] */

void FUN_107a6ac00(undefined8 param_1,undefined8 param_2)

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



/* Entry: 107a6ac7c; end: 107a6acf7; -[SCTopicViewerMusicHeaderInteractor _iconBookmarkOutlineImage] */

void FUN_107a6ac7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
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



/* Entry: 107a6acf8; end: 107a6aeb3; -[SCTopicViewerMusicHeaderInteractor _presentArtistProfile] */

void FUN_107a6acf8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bdf73e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar1;
      func_0x00010bf0a4a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c11a720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010c08fa60();
      if (lVar2 != 0) {
        func_0x00010bfd2ee0(param_1);
        puVar5 = PTR_PTR_1126b4158;
        _objc_alloc(PTR_PTR_1126b4158);
        lVar3 = lVar4;
        func_0x00010c0b5ac0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1 + 0x60;
        _objc_loadWeakRetained(lVar2);
        uVar6 = 0x7c;
        func_0x00010bc9107c(0x7c);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = 0x1d;
        func_0x00010bb0584c(0x1d);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03bd00(puVar5,param_2,lVar3,param_1,lVar2,uVar6,uVar7,1,0);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(lVar2);
        _objc_release(lVar3);
        func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x70),param_2,puVar5);
        _objc_release(puVar5);
      }
      _objc_release(lVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107a6aeb4; end: 107a6aefb; -[SCTopicViewerMusicHeaderInteractor businessProfilesPresenterScopeWillDismiss:] */

void FUN_107a6aeb4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a6aefc; end: 107a6b02f; -[SCTopicViewerMusicHeaderInteractor .cxx_destruct] */

void FUN_107a6aefc(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
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



/* Entry: 107a6b030; end: 107a6b127;  */

void FUN_107a6b030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107a6b128;
  uStack_30 = 0x107a6b138;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = puVar1;
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107a6b128; end: 107a6b13f;  */

void FUN_107a6b128(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107a6b140; end: 107a6b18b;  */

void FUN_107a6b140(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a6b18c; end: 107a6b227;  */

void FUN_107a6b18c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf33240();
  lVar3 = param_2;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c071ae0();
  _objc_release(lVar3);
  lVar3 = 0;
  if ((lVar1 == 1) && ((int)lVar2 != 0)) {
    lVar3 = param_2;
    func_0x00010bfa1240(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107a6b228; end: 107a6b233;  */

void FUN_107a6b228(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2519f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_startWith__1126720a0,param_2);
  return;
}



/* Entry: 107a6b234; end: 107a6b61b; -[SCTopicViewerMusicHeaderProvider initWithMusicInfo:isPrivateMusic:sourcePageSessionId:useClusteringInfo:urlInterceptorProvider:musicServices:musicTopicViewerServices:objcMusicServices:soundTopicPresenter:topicViewerMusicScopeBuilderServices:userDataFeedServices:businessProfilesPresenterScopeExposer:webBrowsingScopeExposer:textSender:scopedConversationParser:sendToScopeExposer:sendToScopeServices:notificationServices:soundTopicPageImprovementsEnabled:soundTopicHeaderStylingEnabled:topicPageNewSnapGridEnabled:sharingSoundFromTopicPageEnabled:] */

undefined8 *
FUN_107a6b234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined4 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
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
  puStack_70 = PTR_PTR_1126f9860;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[3];
    puVar1[3] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[4];
    puVar1[4] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[6];
    puVar1[6] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[7];
    puVar1[7] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_5;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xc) = param_4;
    *(undefined1 *)((long)puVar1 + 0x61) = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_7;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xe];
    puVar1[0xe] = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xf) = (undefined1)param_21;
    *(undefined1 *)((long)puVar1 + 0x79) = param_21._1_1_;
    *(undefined1 *)((long)puVar1 + 0x7a) = param_21._2_1_;
    *(undefined1 *)((long)puVar1 + 0x7b) = param_21._3_1_;
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_20;
    _objc_release(uVar2);
  }
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
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107a6b61c; end: 107a6b72f; -[SCTopicViewerMusicHeaderProvider headerSectionWithActionHandler:presentingController:sessionId:] */

void FUN_107a6b61c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bdeed00(param_1);
  func_0x00010c288be0(*(undefined8 *)(param_1 + 0x28),param_2,param_4);
  _objc_release(param_4);
  func_0x00010c289cc0(*(undefined8 *)(param_1 + 0x28),param_2,param_5);
  _objc_release(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfdfdc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d2f80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfdfe40(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  func_0x00010c161980(puVar5,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a6b730; end: 107a6b997; -[SCTopicViewerMusicHeaderProvider dynamicHeaderTrackerForTopicView:] */

void FUN_107a6b730(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010c278260();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010c278260();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf0a460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    iVar2 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c0795c0();
    puVar8 = puVar7;
    if (iVar2 == 0) {
      puVar8 = puVar6;
    }
    _objc_retain(puVar8);
    iVar2 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c0795c0();
    puVar1 = puVar6;
    if (iVar2 == 0) {
      puVar1 = puVar7;
    }
    _objc_retain(puVar1);
    puVar3 = puVar1;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      _objc_retain(puVar8);
      puVar4 = puVar8;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dde098);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126d6170;
    _objc_alloc(PTR_PTR_1126d6170);
    func_0x00010c0546c0();
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar8);
  }
  else {
    if (*(char *)(param_1 + 0x79) == '\x01') {
      uVar5 = *(ulong *)(param_1 + 8);
      func_0x00010c0795c0();
      puVar3 = *(undefined **)(param_1 + 8);
      func_0x00010c278260(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      if ((uVar5 & 1) == 0) {
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf0a460();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126d6170;
      _objc_alloc(PTR_PTR_1126d6170);
      func_0x00010c0546c0();
      goto LAB_107a6b968;
    }
    puVar3 = PTR_PTR_1126d6170;
    _objc_alloc(PTR_PTR_1126d6170);
    puVar6 = puVar3;
    func_0x000107a80150();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = *(undefined **)(param_1 + 8);
    func_0x00010c278260(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0546a0(puVar3,param_2,param_3,puVar6,puVar8);
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
LAB_107a6b968:
  _objc_release(puVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a6b998; end: 107a6b9e7; -[SCTopicViewerMusicHeaderProvider updateWithSessionId:] */

void FUN_107a6b998(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c289cc0(uVar1,param_2,param_3);
  func_0x00010c1fda00(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a6b9e8; end: 107a6ba13; -[SCTopicViewerMusicHeaderProvider updateWithNumSnaps:] */

void FUN_107a6b9e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1cf3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_setNumSnaps__112651718,param_3);
  return;
}



/* Entry: 107a6ba14; end: 107a6ba1b; -[SCTopicViewerMusicHeaderProvider handleTopicViewerHiddenDueToPresentation] */

void FUN_107a6ba14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd2ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_handleTopicViewerHiddenDueToPres_1125d2560);
  return;
}



/* Entry: 107a6ba1c; end: 107a6ba23; -[SCTopicViewerMusicHeaderProvider extraLoggingParams] */

void FUN_107a6ba1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_extraLoggingParams_1125c53f8);
  return;
}



/* Entry: 107a6ba24; end: 107a6ba43; -[SCTopicViewerMusicHeaderProvider hasSoundShareButton] */

byte FUN_107a6ba24(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x7b);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 107a6ba44; end: 107a6bbef; -[SCTopicViewerMusicHeaderProvider customHeaderSectionViewModelForAdditionalTopics] */

void FUN_107a6ba44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (*(char *)(param_1 + 0x61) == '\x01') {
    lVar2 = param_1;
    if ((*(byte *)(param_1 + 0x7a) & 1) == 0) {
      func_0x000107a80288();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107a802a0();
      _objc_retainAutoreleasedReturnValue();
    }
    if ((*(byte *)(param_1 + 0x7a) & 1) == 0) {
      func_0x00010be369e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
    }
    else {
      lVar3 = 0;
    }
    puVar5 = PTR_PTR_1126d61a0;
    _objc_alloc(PTR_PTR_1126d61a0);
    func_0x00010c053940();
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c128040();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _objc_release();
    if (lVar1 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_107a6bbd4;
    }
    if ((*(byte *)(param_1 + 0x7a) & 1) == 0) {
      func_0x000107a80258();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107a80270();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR_PTR_1126d61a0;
    _objc_alloc(PTR_PTR_1126d61a0);
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c128040(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    FUN_107a6cf0c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be369e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d6190;
    func_0x00010c2470e0(PTR_PTR_1126d6190);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053940(puVar5);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_107a6bbd4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a6bbf0; end: 107a6bc1f; -[SCTopicViewerMusicHeaderProvider customActionHandler] */

void FUN_107a6bbf0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdeed00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a6bc20; end: 107a6bcfb; -[SCTopicViewerMusicHeaderProvider _createInteractorIfNeeded] */

void FUN_107a6bc20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0dc680();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0d8ca0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d61a8;
  _objc_alloc();
  func_0x00010c02ce00();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a6bcfc; end: 107a6bd83; -[SCTopicViewerMusicHeaderProvider _iconMusicImage] */

void FUN_107a6bcfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b0c40;
  uVar3 = 0x4028000000000000;
  if (*(char *)(param_1 + 0x7a) == '\0') {
    uVar3 = 0x402e000000000000;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(uVar3,uVar3,puVar2,param_2,0x1a6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a6bd84; end: 107a6be73; -[SCTopicViewerMusicHeaderProvider .cxx_destruct] */

void FUN_107a6bd84(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 107a6be74; end: 107a6bfc7; -[SCTopicViewerSoundShareSender initWithTextSender:scopedConversationParser:sendToScopeExposer:sendToScopeServices:notificationServices:sendToPreviewProvider:] */

undefined1 *
FUN_107a6be74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126f9868;
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a6bfc8; end: 107a6c1bf; -[SCTopicViewerSoundShareSender shareTrackId:fromPresentingViewController:onSend:] */

void FUN_107a6bfc8(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  uVar5 = param_5;
  _objc_retain();
  if ((((param_4 != 0) && (param_3 != 0)) && (*(long *)(param_1 + 0x48) == 0)) &&
     ((*(long *)(param_1 + 0x20) != 0 && (*(long *)(param_1 + 0x18) != 0)))) {
    *(ulong *)(param_1 + 0x38) = param_3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    _objc_release(uVar4);
    uVar5 = param_5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126b0818;
    _objc_alloc();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010841fab4();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c044540(puVar1,param_2,uVar5,0,0x25,0xffffffffffffffff,0x149,0,0,0,param_3,0,0);
    _objc_release(param_3);
    lVar2 = param_1;
    func_0x00010bde78c0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b0810;
    _objc_alloc(PTR_PTR_1126b0810);
    func_0x00010c046120();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0b76a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf23ee0(uVar4,param_2,*(undefined8 *)(param_1 + 0x48),
                        PTR____NSArray0__struct_11034ab48,uVar5,0,puVar3,0,0,puVar1,
                        uVar6 & 0xffffffffffff0000,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


