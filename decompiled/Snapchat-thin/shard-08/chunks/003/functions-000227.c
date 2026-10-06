/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ff7040; end: 105ff709f;  */

void FUN_105ff7040(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e361b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e361b8,
                      &PTR____CFConstantStringClassReference_110e361d8,0);
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



/* Entry: 105ff70a0; end: 105ff7127; -[SCScanMainCameraWorkflow initWithMainCameraUIDelegate:] */

undefined1 * FUN_105ff70a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eef80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ff7128; end: 105ff7207; -[SCScanMainCameraWorkflow beginWithScanResultsDelegateActionObservable:] */

void FUN_105ff7128(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar1 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ff7208; end: 105ff724f;  */

void FUN_105ff7208(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff340();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff7250; end: 105ff728f; -[SCScanMainCameraWorkflow end] */

void FUN_105ff7250(long param_1)

{
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x10));
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c166d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff7290; end: 105ff733f; -[SCScanMainCameraWorkflow _didReceiveDelegateAction:] */

void FUN_105ff7290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ff7340;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105ff7378;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x105ff73b0;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105ff73e0;
  puStack_98 = &UNK_110842e18;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c16e0(param_3,param_2,0,&puStack_38,&puStack_60,0,0,&puStack_88,&puStack_b0);
  return;
}



/* Entry: 105ff7340; end: 105ff740f;  */

void FUN_105ff7340(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c166d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ff7410; end: 105ff743b; -[SCScanMainCameraWorkflow .cxx_destruct] */

void FUN_105ff7410(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105ff743c; end: 105ff75fb; -[SCScanEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff743c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105ff75fc;
  uStack_60 = 0x105ff760c;
  uStack_58 = 0;
  lVar2 = param_1 + _DAT_11273ca50;
  puStack_78 = &uStack_80;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf211c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105ff7614;
  puStack_90 = &UNK_110907308;
  puStack_88 = &uStack_80;
  func_0x00010c0bebe0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_b0,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273ca54);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105ff764c;
  puStack_c0 = &UNK_11086a6f0;
  _objc_copyWeak(auStack_b8,auStack_b0);
  _objc_copyWeak(auStack_e0,auStack_b0);
  func_0x00010bf9d5c0(uVar4);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  return;
}



/* Entry: 105ff75fc; end: 105ff7613;  */

void FUN_105ff75fc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105ff7614; end: 105ff764b;  */

void FUN_105ff7614(long param_1,undefined8 param_2)

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



/* Entry: 105ff764c; end: 105ff76af;  */

void FUN_105ff764c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ff76b0; end: 105ff76f7;  */

void FUN_105ff76b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd3e40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff76f8; end: 105ff77ef; -[SCScanEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff76f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar5 = (long)_DAT_11273ca58;
  lVar1 = *(long *)(param_1 + lVar5);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273ca5c);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105ff77f0;
    puStack_40 = &UNK_110842e18;
    uStack_38 = uVar3;
    _objc_retain(uVar3);
    func_0x00010bf95bc0(uVar4,param_2,&puStack_58);
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c117720(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_38);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c117720();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ff77f0; end: 105ff77f7;  */

void FUN_105ff77f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 105ff77f8; end: 105ff7dd7; -[SCScanEntryPoint _beginWithPlugIns:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff77f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_105ff75fc;
  uStack_78 = 0x105ff760c;
  uStack_70 = 0;
  lVar18 = (long)_DAT_11273ca50;
  lVar1 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf211c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bebe0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11273ca60;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126c6ef0;
  _objc_alloc();
  lVar1 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041780();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126c6ef8;
  _objc_alloc();
  lVar16 = (long)_DAT_11273ca68;
  lVar1 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010c160160();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c247520();
  lVar19 = (long)_DAT_11273ca6c;
  lVar3 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar3);
  lVar8 = lVar3;
  func_0x00010c121c20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11273ca70;
  _objc_loadWeakRetained(lVar9);
  func_0x00010c041880();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar1);
  puVar10 = PTR_PTR_1126c6f00;
  _objc_alloc();
  lVar1 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c160160();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar2);
  lVar9 = lVar2;
  func_0x00010c14ea60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041800();
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar11 = PTR_PTR_1126c6f08;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11273ca74;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030020();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar12 = PTR_PTR_1126c6f10;
  _objc_alloc();
  uVar13 = puStack_90[5];
  func_0x00010c27ee00(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027ea0();
  _objc_release(uVar13);
  puVar14 = PTR_PTR_1126c6f18;
  _objc_alloc();
  lVar1 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010c11d640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11273ca78;
  _objc_loadWeakRetained(lVar3);
  lVar8 = lVar3;
  func_0x00010c0cc620();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar15 = lVar19;
  func_0x00010c121c20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c160160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057240();
  lVar20 = (long)_DAT_11273ca5c;
  uVar13 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar14;
  _objc_release(uVar13);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar19);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(lVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar20));
  uVar13 = *(undefined8 *)(param_1 + lVar20);
  lVar1 = param_1 + lVar18;
  _objc_loadWeakRetained();
  func_0x00010c247520();
  param_1 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c247800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf19220(uVar13);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff7dd8; end: 105ff7e0f;  */

void FUN_105ff7dd8(long param_1,undefined8 param_2)

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



/* Entry: 105ff7e10; end: 105ff7e93; -[SCScanEntryPoint _createScanResultsAnalyzerPlugInScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff7e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c6f20;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_11273ca50;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c247520();
  func_0x00010c037460(puVar1,param_2,param_3,lVar2);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ff7e94; end: 105ff7f07; -[SCScanEntryPoint workflowWantsEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff7e94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273ca50;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c14f640(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ff7f08; end: 105ff7fbb; -[SCScanEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ff7f08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ca54,0);
  _objc_storeStrong(param_1 + _DAT_11273ca64,0);
  _objc_destroyWeak(param_1 + _DAT_11273ca70);
  _objc_destroyWeak(param_1 + _DAT_11273ca60);
  _objc_destroyWeak(param_1 + _DAT_11273ca74);
  _objc_destroyWeak(param_1 + _DAT_11273ca78);
  _objc_destroyWeak(param_1 + _DAT_11273ca6c);
  _objc_destroyWeak(param_1 + _DAT_11273ca68);
  _objc_destroyWeak(param_1 + _DAT_11273ca50);
  _objc_storeStrong(param_1 + _DAT_11273ca58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ca5c,0);
  return;
}



/* Entry: 105ff7fbc; end: 105ff82cf; -[SCScanWorkflow initWithUIContainer:queryObservable:scanMetadataProvider:scanResultsPresenter:scanResultsAnalyzerWorkflow:scanToastPresenter:realTimeScanConfiguration:performer:scanMainCameraWorkflow:scanSessionLogger:] */

undefined8 *
FUN_105ff7fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
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
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126eef88;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c6f28;
    _objc_alloc();
    puVar3 = PTR_PTR_1126b0870;
    _objc_alloc_init(PTR_PTR_1126b0870);
    func_0x00010c041820();
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar4 = auStack_78;
    _objc_initWeak(puVar4,puVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(puVar4);
    _objc_release(puVar4);
    _objc_retain(param_4);
    uVar5 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar5 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar5);
    _objc_retain(param_10);
    uVar5 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar5);
    _objc_retain(param_11);
    uVar5 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar5);
    _objc_retain(param_12);
    uVar5 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar5 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
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



/* Entry: 105ff82d0; end: 105ff830b;  */

void FUN_105ff82d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(lVar1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ff830c; end: 105ff83eb; -[SCScanWorkflow beginWithSource:sourceId:] */

void FUN_105ff830c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 105ff83ec; end: 105ff8423;  */

void FUN_105ff83ec(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd3e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff8424; end: 105ff84fb; -[SCScanWorkflow endWithCompletion:] */

void FUN_105ff8424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff84fc; end: 105ff852f;  */

void FUN_105ff84fc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be09fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff8530; end: 105ff86d7; -[SCScanWorkflow _beginWithSource:sourceId:] */

void FUN_105ff8530(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = param_4;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _objc_release(uVar2);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14eb20();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf6b040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf191e0(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 105ff86d8; end: 105ff872b;  */

void FUN_105ff86d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff872c; end: 105ff87c7; -[SCScanWorkflow _endWithCompletion:] */

void FUN_105ff872c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x18));
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar1);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x50));
    func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x40));
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14eb40();
    _objc_release(uVar1);
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ff87c8; end: 105ff8807; -[SCScanWorkflow _endWorkflowWithError:] */

void FUN_105ff87c8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c10e800(*(undefined8 *)(param_1 + 0x28));
  }
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2bd500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff8808; end: 105ff8a77; -[SCScanWorkflow _didReceiveQuery:sessionId:] */

void FUN_105ff8808(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = param_3;
  _objc_release(uVar2);
  puVar8 = param_3;
  func_0x00010c1371e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010bf529e0();
  _objc_release(puVar8);
  if (puVar3 == (undefined *)0x1) {
    puVar8 = param_3;
    func_0x00010c1371e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == PTR_PTR_113316300) {
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar8);
    }
    else {
      puVar5 = param_3;
      func_0x00010c1371e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_113316308;
      _objc_release();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar8);
      if (puVar7 != puVar1) {
        puVar8 = (undefined *)0x0;
        goto LAB_105ff8964;
      }
    }
    func_0x00010be48360(param_1);
  }
  else {
    puVar8 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
LAB_105ff8964:
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c297260(puVar8);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff8a78; end: 105ff8af7;  */

void FUN_105ff8a78(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010be48360(param_1);
  }
  else {
    func_0x00010be0a000(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ff8af8; end: 105ff8c77; -[SCScanWorkflow _launchScanResultsWithQuery:sessionId:scanCategoryMetadata:] */

void FUN_105ff8af8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c11d4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11d4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010be03420(param_1);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff8c78; end: 105ff8caf;  */

void FUN_105ff8c78(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff8cb0; end: 105ff8eb3; -[SCScanWorkflow _presentScanResultsWithSessionId:query:scanCategoryMetadata:] */

void FUN_105ff8cb0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c11d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c11d4a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(lVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf19200();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    dVar4 = 1.60807493534087e-314;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(uVar3);
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar2 = param_4;
    func_0x00010c11d960();
    if (lVar2 == 6) {
      param_1 = *(long *)(param_1 + 0x30);
      func_0x00010c269d40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14f540();
      dVar4 = dVar4 * 0.0010000000474974513;
    }
    else {
      dVar4 = 0.0;
    }
    func_0x00010c0f7fe0(dVar4,uVar1);
    if (lVar2 == 6) {
      _objc_release(param_1);
    }
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff8eb4; end: 105ff8eeb;  */

void FUN_105ff8eb4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff8eec; end: 105ff90e3; -[SCScanWorkflow _presentScanResultsWithScanAnalysisObservables:query:scanSessionId:] */

void FUN_105ff8eec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c11d4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c11d4a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c14efc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bf63f60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10e060(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf6b040(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff90e4; end: 105ff912b;  */

void FUN_105ff90e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff340();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff912c; end: 105ff913b; -[SCScanWorkflow _dismissScanResultsWithCompletion:] */

void FUN_105ff912c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_dismissScanResultsWithCompletion_1125beab8,
             param_3,*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 105ff913c; end: 105ff91a7; -[SCScanWorkflow _didReceiveDelegateAction:] */

void FUN_105ff913c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ff91a8;
  puStack_20 = &UNK_110849810;
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_18 = param_1;
  func_0x00010c0c16e0(param_3,param_2,&puStack_38,0,0,0,0,0,0);
  return;
}



/* Entry: 105ff91a8; end: 105ff927f;  */

void FUN_105ff91a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_2);
  func_0x00010be03420(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ff9280; end: 105ff92b3;  */

void FUN_105ff9280(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0a000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff92b4; end: 105ff92cb; -[SCScanWorkflow delegate] */

void FUN_105ff92b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ff92cc; end: 105ff92d7; -[SCScanWorkflow setDelegate:] */

void FUN_105ff92cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 105ff92d8; end: 105ff9387; -[SCScanWorkflow .cxx_destruct] */

void FUN_105ff92d8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
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



/* Entry: 105ff9388; end: 105ff93f3; -[SCScanActionRouter initWithScanDelegate:] */

undefined1 * FUN_105ff9388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eef90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ff93f4; end: 105ff943f; -[SCScanActionRouter scanWithRequestedAnalyzerServiceIds:] */

void FUN_105ff93f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c14f660();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ff9440; end: 105ff9447; -[SCScanActionRouter .cxx_destruct] */

void FUN_105ff9440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105ff9448; end: 105ff95b3; -[SCScanResultsPresenter initWithScanResultsScopeExposer:scanActionRouter:scanSessionLogger:scanSource:realTimeScanConfiguration:scanResultsScopeServices:] */

undefined1 *
FUN_105ff9448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eef98;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ff95b4; end: 105ff95db; -[SCScanResultsPresenter delegateActionObservable] */

void FUN_105ff95b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ff95dc; end: 105ff95e3; -[SCScanResultsPresenter invalidate] */

void FUN_105ff95dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ae810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setInvalidated__112649428,1);
  return;
}



/* Entry: 105ff95e4; end: 105ff9737; -[SCScanResultsPresenter presentScanResultsWithUIContainer:scanAnalysisObservables:dataObservable:scanSessionId:] */

void FUN_105ff95e4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) && (param_6 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105ff9738;
    puStack_70 = &UNK_110850cf8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    lStack_68 = param_3;
    _objc_retain(param_4);
    lStack_60 = param_4;
    _objc_retain(param_6);
    lStack_58 = param_6;
    func_0x0001000d76cc("APPSTORE",&puStack_88);
    _objc_release(lStack_58);
    _objc_release(lStack_60);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff9738; end: 105ff97cf;  */

void FUN_105ff9738(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((uVar1 != 0) && (uVar2 = uVar1, func_0x00010c06a280(), (uVar2 & 1) == 0)) {
    lVar3 = *(long *)(uVar1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      uVar4 = *(undefined8 *)(uVar1 + 0x10);
      func_0x00010bf23fc0(uVar4,param_2,*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(uVar1 + 0x18),*(undefined8 *)(uVar1 + 0x28),uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(uVar1 + 8),param_2,uVar4);
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ff97d0; end: 105ff98cf; -[SCScanResultsPresenter dismissScanResultsWithCompletion:performer:] */

void FUN_105ff97d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105ff98d0;
  puStack_58 = &UNK_110848378;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  uStack_50 = param_4;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ff98d0; end: 105ff9a9f;  */

void FUN_105ff98d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105ff9aa0;
    puStack_50 = &UNK_110849530;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar2);
    lStack_48 = lVar2;
    func_0x00010c0f7fc0(uVar3);
    lVar2 = lStack_48;
  }
  else {
    lVar2 = *(long *)(lVar1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x105ff9ab4;
      puStack_78 = &UNK_110849530;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      uStack_70 = uVar4;
      func_0x00010c0f7fc0(uVar3);
      uVar3 = uStack_70;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c12e1c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_98,param_1 + 0x30);
      _objc_retain(lVar2);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      func_0x00010c2a4ae0(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_98);
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105ff9aa0; end: 105ff9ac7;  */

void FUN_105ff9aa0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105ff9aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105ff9ac8; end: 105ff9bb3;  */

void FUN_105ff9ac8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010be97fe0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 105ff9bb4; end: 105ff9c8f;  */

void FUN_105ff9bb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010bf6f440(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 105ff9c90; end: 105ff9d3b;  */

void FUN_105ff9c90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ff9d3c; end: 105ff9da3;  */

void FUN_105ff9d3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14efe0();
    _objc_release(uVar2);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ff9da4; end: 105ff9dab; -[SCScanResultsPresenter _runOnMainQueuePerformer:] */

void FUN_105ff9da4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f88d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_performImmediatelyIfCurrentPerfo_11261bc50);
  return;
}



/* Entry: 105ff9dac; end: 105ff9def; -[SCScanResultsPresenter resultsWantsDismiss:] */

void FUN_105ff9dac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c6f30;
  func_0x00010c2a1a20(PTR_PTR_1126c6f30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ff9df0; end: 105ff9e33; -[SCScanResultsPresenter resultsDidDeflate] */

void FUN_105ff9df0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c6f30;
  func_0x00010bf74600(PTR_PTR_1126c6f30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ff9e34; end: 105ff9e77; -[SCScanResultsPresenter resultsDidInflate] */

void FUN_105ff9e34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c6f30;
  func_0x00010bf774e0(PTR_PTR_1126c6f30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ff9e78; end: 105ff9ebb; -[SCScanResultsPresenter didDisplayResultViewWithViewModel:] */

void FUN_105ff9e78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c6f30;
  func_0x00010bf75540(PTR_PTR_1126c6f30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ff9ebc; end: 105ff9eff; -[SCScanResultsPresenter didActionOnResultViewWithId:] */

void FUN_105ff9ebc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c6f30;
  func_0x00010bf72160(PTR_PTR_1126c6f30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ff9f00; end: 105ff9f43; -[SCScanResultsPresenter resultActionDidDismissFullscreenModal] */

void FUN_105ff9f00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c6f30;
  func_0x00010beee320(PTR_PTR_1126c6f30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ff9f44; end: 105ff9f87; -[SCScanResultsPresenter resultActionDidDisplayFullscreenModal] */

void FUN_105ff9f44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c6f30;
  func_0x00010beee340(PTR_PTR_1126c6f30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ff9f88; end: 105ff9f8f; -[SCScanResultsPresenter mainQueuePerformer] */

undefined8 FUN_105ff9f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105ff9f90; end: 105ff9fbf; -[SCScanResultsPresenter setMainQueuePerformer:] */

void FUN_105ff9f90(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105ff9fc0; end: 105ff9fcb; -[SCScanResultsPresenter invalidated] */

byte FUN_105ff9fc0(long param_1)

{
  return *(byte *)(param_1 + 0x48) & 1;
}



/* Entry: 105ff9fcc; end: 105ff9fd3; -[SCScanResultsPresenter setInvalidated:] */

void FUN_105ff9fcc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 105ff9fd4; end: 105ffa03f; -[SCScanResultsPresenter .cxx_destruct] */

void FUN_105ff9fd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ffa040; end: 105ffa14f; -[SCScanResultsAnalyzerWorkflow initWithScanResultsAnalyzerPlugIns:scanSessionLogger:scanConfiguration:] */

undefined1 *
FUN_105ffa040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eefa0;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf028e0();
    *(char *)((long)puVar1 + 0x38) = (char)uVar2;
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined ***)((long)puVar1 + 0x48) = &PTR___NSConcreteGlobalBlock_1109073b8;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x3c) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ffa150; end: 105ffa1bf;  */

void FUN_105ffa150(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270920(PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,0,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ffa1c0; end: 105ffa4ef; -[SCScanResultsAnalyzerWorkflow beginWithSessionId:query:scanCategoryMetadata:] */

void FUN_105ffa1c0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar8 = (undefined *)0x0;
  if ((param_3 != 0) && (param_4 != 0)) {
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      func_0x00010bf940a0(param_1);
    }
    _os_unfair_lock_lock(param_1 + 0x3c);
    *(undefined1 *)(param_1 + 0x40) = 1;
    _os_unfair_lock_unlock(param_1 + 0x3c);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e880();
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010be97c80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c14f020();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_78,param_1);
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    lVar7 = *(long *)(param_1 + 0x48);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105ffa4f0;
    puStack_88 = &UNK_1108b0900;
    _objc_copyWeak(auStack_80,auStack_78);
    (**(code **)(lVar7 + 0x10))(0x4024000000000000,lVar7,&puStack_a0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar7;
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010c14f040();
    _objc_release(lVar4);
    puVar6 = PTR_PTR_1126b7e38;
    if (lVar7 == 0) {
      puVar6 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar6;
      _objc_release(uVar1);
      _objc_retain(puVar6);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14f040();
      func_0x00010c131720();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar6;
      _objc_release(uVar5);
      _objc_retain(puVar6);
      _objc_release(uVar1);
    }
    puStack_c8 = puVar8;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105ffa51c;
    puStack_b0 = &UNK_1109073d8;
    _objc_retain(puVar6);
    puStack_a8 = puVar6;
    _objc_copyWeak(auStack_d0,auStack_78);
    lVar7 = lVar3;
    func_0x00010c25ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar7;
    _objc_release(uVar1);
    puVar8 = PTR_PTR_1126b31d0;
    _objc_alloc(PTR_PTR_1126b31d0);
    func_0x00010c041860();
    _objc_destroyWeak(auStack_d0);
    _objc_release(puStack_a8);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105ffa4f0; end: 105ffa51b;  */

void FUN_105ffa4f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdca640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ffa51c; end: 105ffa527;  */

void FUN_105ffa51c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 105ffa528; end: 105ffa553;  */

void FUN_105ffa528(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf940a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ffa554; end: 105ffa6fb; -[SCScanResultsAnalyzerWorkflow end] */

/* WARNING: Possible PIC construction at 0x000105ffa618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105ffa61c) */
/* WARNING: Removing unreachable block (ram,0x000105ffa628) */

void FUN_105ffa554(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar13 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1 + 0x3c;
  _os_unfair_lock_lock();
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x3c);
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x40) = 0;
    _os_unfair_lock_unlock(param_1 + 0x3c);
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      puStack_108 = (undefined8 *)0x0;
      uStack_110 = 0;
      uStack_f8 = 0;
      plStack_100 = (long *)0x0;
      lVar16 = *(long *)(param_1 + 8);
      _objc_retain(lVar16);
      param_4 = auStack_c8;
      lVar3 = lVar16;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        if (*plStack_100 != *plStack_100) {
          _objc_enumerationMutation(lVar16);
        }
        param_3 = (undefined1 *)*puStack_108;
        goto code_r0x00010bf940a0;
      }
      _objc_release(lVar16);
      func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      _objc_release(uVar2);
      param_3 = (undefined1 *)puVar13;
    }
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e8c0();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar16 = *(long *)(lVar3 + 8);
  func_0x00010bf529e0();
  if (lVar16 == 0) {
    puVar10 = PTR_PTR_1126b31d0;
    _objc_alloc(PTR_PTR_1126b31d0);
    puVar11 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c041860(puVar10);
    _objc_release(puVar11);
  }
  else {
    puVar4 = param_4;
    func_0x00010c1371e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c6f38;
    _objc_alloc(PTR_PTR_1126c6f38);
    puVar5 = param_4;
    func_0x00010c11d4a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11d960(param_4);
    puVar6 = param_4;
    func_0x00010bf63f60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0451c0(puVar11);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar17 = *(long *)(lVar3 + 8);
    _objc_retain(lVar17);
    lVar3 = lVar17;
    func_0x00010bf52a60();
    lVar16 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(lVar17);
        }
        uVar2 = *(undefined8 *)(lVar15 * 8);
        if (puVar4 == (undefined1 *)0x0) {
LAB_105ffa870:
          func_0x00010bf19080(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar2;
          func_0x00010c14f020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar7);
          _objc_release(uVar8);
          _objc_release(uVar2);
        }
        else {
          func_0x00010c11d960(param_4);
          uVar8 = uVar2;
          func_0x00010c263b80();
          if ((int)uVar8 != 0) goto LAB_105ffa870;
        }
        lVar15 = lVar15 + 1;
      } while (lVar3 != lVar15);
      lVar3 = lVar17;
      func_0x00010bf52a60();
    }
    _objc_release(lVar17);
    puVar9 = puVar7;
    func_0x00010bf529e0();
    puVar10 = PTR_PTR_1126b31d0;
    _objc_alloc(PTR_PTR_1126b31d0);
    puVar12 = PTR_PTR_1126ae6b8;
    if (puVar9 == (undefined *)0x0) {
      func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0cab40();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c041860(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar7);
    _objc_release(puVar11);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_lock(param_3 + 0x3c);
  cVar1 = param_3[0x40];
  _os_unfair_lock_unlock(param_3 + 0x3c);
  if (cVar1 != '\x01') {
    return;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e8e0();
  _objc_release(uVar2);
code_r0x00010bf940a0:
                    /* WARNING: Could not recover jumptable at 0x00010bf940b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_end_1125c29d0);
  return;
}



/* Entry: 105ffa6fc; end: 105ffa9f7; -[SCScanResultsAnalyzerWorkflow _runAnalysisWithSessionId:query:] */

void FUN_105ffa6fc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar8 = PTR_PTR_1126b31d0;
    _objc_alloc(PTR_PTR_1126b31d0);
    puVar9 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c041860(puVar8);
    _objc_release(puVar9);
  }
  else {
    lVar3 = param_4;
    func_0x00010c1371e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c6f38;
    _objc_alloc(PTR_PTR_1126c6f38);
    lVar2 = param_4;
    func_0x00010c11d4a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11d960(param_4);
    lVar4 = param_4;
    func_0x00010bf63f60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0451c0(puVar9);
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar13 = *(long *)(param_1 + 8);
    _objc_retain(lVar13);
    lVar2 = lVar13;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar13);
        }
        uVar14 = *(undefined8 *)(lVar12 * 8);
        if (lVar3 == 0) {
LAB_105ffa870:
          func_0x00010bf19080(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar14;
          func_0x00010c14f020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar6);
          _objc_release(uVar14);
        }
        else {
          func_0x00010c11d960(param_4);
          uVar6 = uVar14;
          func_0x00010c263b80();
          if ((int)uVar6 != 0) goto LAB_105ffa870;
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    puVar7 = puVar5;
    func_0x00010bf529e0();
    puVar8 = PTR_PTR_1126b31d0;
    _objc_alloc(PTR_PTR_1126b31d0);
    puVar10 = PTR_PTR_1126ae6b8;
    if (puVar7 == (undefined *)0x0) {
      func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0cab40();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c041860(puVar8);
    _objc_release(puVar10);
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(lVar3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_lock(param_3 + 0x3c);
  cVar1 = *(char *)(param_3 + 0x40);
  _os_unfair_lock_unlock(param_3 + 0x3c);
  if (cVar1 == '\x01') {
    uVar14 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e8e0();
    _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bf940b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_end_1125c29d0);
    return;
  }
  return;
}



/* Entry: 105ffa9f8; end: 105ffaa5f; -[SCScanResultsAnalyzerWorkflow _analysisDidTimeout] */

void FUN_105ffa9f8(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x3c);
  cVar1 = *(char *)(param_1 + 0x40);
  _os_unfair_lock_unlock(param_1 + 0x3c);
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e8e0();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf940b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_end_1125c29d0);
    return;
  }
  return;
}



/* Entry: 105ffaa60; end: 105ffaa67; -[SCScanResultsAnalyzerWorkflow scheduledTimerFactoryBlock] */

undefined8 FUN_105ffaa60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105ffaa68; end: 105ffaa6f; -[SCScanResultsAnalyzerWorkflow setScheduledTimerFactoryBlock:] */

void FUN_105ffaa68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105ffaa70; end: 105ffaadb; -[SCScanResultsAnalyzerWorkflow .cxx_destruct] */

void FUN_105ffaa70(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105ffaadc; end: 105ffab63; -[SCScanSIGNotificationToastPresenter initWithNotificationPool:] */

undefined1 * FUN_105ffaadc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eefa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined ***)((long)puVar1 + 0x10) = &PTR___NSConcreteGlobalBlock_110907428;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ffab64; end: 105ffab77;  */

void FUN_105ffab64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf57f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126afde0,PTR_s_createPresenterWithText_accessib_1125b3988,param_2,0);
  return;
}



/* Entry: 105ffab78; end: 105ffabbb; -[SCScanSIGNotificationToastPresenter presentToastWithError:] */

void FUN_105ffab78(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf3ec40();
  if (param_3 == 0x7fffffffffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00010be04a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayNoResultsToast_11255ec28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be045b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayErrorToast_11255eb08);
  return;
}



/* Entry: 105ffabbc; end: 105ffac7b; -[SCScanSIGNotificationToastPresenter _displayErrorToast] */

void FUN_105ffabbc(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ffac7c; end: 105ffacc7;  */

void FUN_105ffac7c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x000105ffafec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7ef80(param_1,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ffacc8; end: 105ffad87; -[SCScanSIGNotificationToastPresenter _displayNoResultsToast] */

void FUN_105ffacc8(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ffad88; end: 105ffadd3;  */

void FUN_105ffad88(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x000105ffb004();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7ef80(param_1,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ffadd4; end: 105ffae37; -[SCScanSIGNotificationToastPresenter _presentToastWithMessage:] */

void FUN_105ffadd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  (**(code **)(lVar1 + 0x10))(lVar1,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ffae38; end: 105ffae3f; -[SCScanSIGNotificationToastPresenter sigNotificationPresenterFactoryBlock] */

undefined8 FUN_105ffae38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105ffae40; end: 105ffae47; -[SCScanSIGNotificationToastPresenter setSigNotificationPresenterFactoryBlock:] */

void FUN_105ffae40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105ffae48; end: 105ffae77; -[SCScanSIGNotificationToastPresenter .cxx_destruct] */

void FUN_105ffae48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ffae78; end: 105ffaf03; -[SCScanViewController initWithScanResultsContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105ffae78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eefb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273cb08;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ffaf04; end: 105ffaf3f; -[SCScanViewController loadView] */

void FUN_105ffaf04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c6f40;
  _objc_alloc_init(PTR_PTR_1126c6f40);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ffaf40; end: 105ffafc7; -[SCScanViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ffaf40(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126eefb0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  lVar2 = (long)_DAT_11273cb08;
  func_0x00010c1d96a0(*(undefined8 *)(param_1 + lVar2));
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c14c940(*(undefined8 *)(param_1 + lVar2));
  return;
}



/* Entry: 105ffafc8; end: 105ffafd7; -[SCScanViewController scanResultsContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ffafc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273cb08);
}


