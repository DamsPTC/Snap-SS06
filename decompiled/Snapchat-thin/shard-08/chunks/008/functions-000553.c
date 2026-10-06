/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106686f30; end: 106686f6f; -[SCLensExplorerARBarSessionEntryPoint setModularCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106686f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d774;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106686f70; end: 106686f7f; -[SCLensExplorerARBarSessionEntryPoint collectionsCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106686f70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d778);
}



/* Entry: 106686f80; end: 106686fbf; -[SCLensExplorerARBarSessionEntryPoint setCollectionsCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106686f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d778;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106686fc0; end: 106687123; -[SCLensExplorerARBarSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106686fc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274d778,0);
  _objc_storeStrong(param_1 + _DAT_11274d774,0);
  _objc_storeStrong(param_1 + _DAT_11274d770,0);
  _objc_storeStrong(param_1 + _DAT_11274d76c,0);
  _objc_storeStrong(param_1 + _DAT_11274d768,0);
  _objc_storeStrong(param_1 + _DAT_11274d764,0);
  _objc_storeStrong(param_1 + _DAT_11274d760,0);
  _objc_destroyWeak(param_1 + _DAT_11274d75c);
  _objc_destroyWeak(param_1 + _DAT_11274d758);
  _objc_destroyWeak(param_1 + _DAT_11274d754);
  _objc_destroyWeak(param_1 + _DAT_11274d750);
  _objc_destroyWeak(param_1 + _DAT_11274d74c);
  _objc_destroyWeak(param_1 + _DAT_11274d748);
  _objc_destroyWeak(param_1 + _DAT_11274d73c);
  _objc_storeStrong(param_1 + _DAT_11274d744,0);
  _objc_storeStrong(param_1 + _DAT_11274d740,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274d738,0);
  return;
}



/* Entry: 106687124; end: 10668724b; -[SCLensExplorerBadgeServiceProvider _lensExplorerBadgeTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106687124(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126cc998;
  _objc_alloc(PTR_PTR_1126cc998);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11274d784;
    _objc_loadWeakRetained(lVar8);
  }
  lVar2 = lVar8;
  func_0x00010c1067a0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_11274d780;
    _objc_loadWeakRetained(lVar5);
  }
  lVar6 = lVar5;
  func_0x00010c0937c0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0382a0(puVar1,param_2,lVar3,puVar4,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10668724c; end: 10668728f; -[SCLensExplorerBadgeServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668724c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274d784);
  _objc_destroyWeak(param_1 + _DAT_11274d780);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274d77c);
  return;
}



/* Entry: 106687290; end: 10668730f;  */

void FUN_106687290(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126cc9a0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be914e0(puVar5,param_2,uVar1,uVar3,uVar2,uVar4,*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106687310; end: 106687323;  */

void FUN_106687310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be916d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cc9a0,PTR_s__requestRankerWithNetworkService_112581f50,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106687324; end: 106687523; +[SCLensExplorerDataServiceProvider _requestManagerWithNetworkServices:userUnifiedGRPCServices:performerServices:requestProviderFactory:studySettings:lensCoreVersionProvider:] */

void FUN_106687324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c095b60(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_5);
  uVar1 = param_7;
  func_0x00010c092ec0();
  _objc_release(param_7);
  if ((int)uVar1 == 0) {
    puVar3 = PTR_PTR_1126cc9c8;
    _objc_alloc(PTR_PTR_1126cc9c8);
    uVar1 = param_3;
    func_0x00010bfe4c00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bfe4d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0198c0(puVar3,param_2,uVar4,uVar6,uVar2,param_8);
    _objc_release(param_8);
  }
  else {
    puVar3 = PTR_PTR_1126cc9c0;
    _objc_alloc(PTR_PTR_1126cc9c0);
    uVar1 = param_4;
    func_0x00010bfcfa00(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_6;
    func_0x00010bf16040(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c019580(puVar3,param_2,uVar4,uVar5,uVar2,param_8);
    uVar6 = param_8;
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106687524; end: 1066875b7; +[SCLensExplorerDataServiceProvider _requestRankerWithNetworkServices:] */

void FUN_106687524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cc9d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfe4c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019840(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066875b8; end: 10668768b; -[SCLensExplorerDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066875b8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274d7c0);
  _objc_destroyWeak(param_1 + _DAT_11274d7bc);
  _objc_destroyWeak(param_1 + _DAT_11274d7b8);
  _objc_destroyWeak(param_1 + _DAT_11274d7b4);
  _objc_destroyWeak(param_1 + _DAT_11274d7b0);
  _objc_destroyWeak(param_1 + _DAT_11274d7ac);
  _objc_destroyWeak(param_1 + _DAT_11274d7a8);
  _objc_destroyWeak(param_1 + _DAT_11274d7a4);
  _objc_destroyWeak(param_1 + _DAT_11274d7a0);
  _objc_destroyWeak(param_1 + _DAT_11274d79c);
  _objc_destroyWeak(param_1 + _DAT_11274d798);
  _objc_destroyWeak(param_1 + _DAT_11274d794);
  _objc_destroyWeak(param_1 + _DAT_11274d790);
  _objc_destroyWeak(param_1 + _DAT_11274d78c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274d788);
  return;
}



/* Entry: 10668768c; end: 10668777b; -[SCLensExplorerDependencyProviderFactoryServiceProvider provide] */

void FUN_10668768c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126cc9f0;
  _objc_alloc(PTR_PTR_1126cc9f0);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b880(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10668777c; end: 1066877bb;  */

void FUN_10668777c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1066877bc; end: 106687c3b; -[SCLensExplorerDependencyProviderFactoryServiceProvider _makeDependencyProviderFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066877bc(long param_1,undefined8 param_2)

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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  
  puVar1 = PTR_PTR_1126cc9f8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar6 = 0;
    lVar3 = 0;
    lVar8 = 0;
    lVar5 = 0;
    uStack_120 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_b0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    lVar7 = 0;
    uStack_128 = 0;
    lVar9 = 0;
    lVar4 = 0;
    lVar2 = 0;
    param_1 = 0;
  }
  else {
    uStack_70 = param_1 + _DAT_11274d7c8;
    _objc_loadWeakRetained();
    uStack_78 = param_1 + _DAT_11274d7cc;
    _objc_loadWeakRetained();
    uStack_80 = param_1 + _DAT_11274d7d0;
    _objc_loadWeakRetained();
    uStack_88 = param_1 + _DAT_11274d7d4;
    _objc_loadWeakRetained();
    uStack_90 = param_1 + _DAT_11274d7d8;
    _objc_loadWeakRetained();
    uStack_98 = param_1 + _DAT_11274d7dc;
    _objc_loadWeakRetained();
    uStack_a8 = param_1 + _DAT_11274d7e0;
    _objc_loadWeakRetained();
    uStack_d0 = param_1 + _DAT_11274d7e4;
    _objc_loadWeakRetained();
    uStack_c8 = param_1 + _DAT_11274d7e8;
    _objc_loadWeakRetained();
    uStack_e0 = param_1 + _DAT_11274d7ec;
    _objc_loadWeakRetained();
    uStack_d8 = param_1 + _DAT_11274d7f0;
    _objc_loadWeakRetained();
    uStack_b0 = param_1 + _DAT_11274d7f4;
    _objc_loadWeakRetained();
    uStack_a0 = param_1 + _DAT_11274d7f8;
    _objc_loadWeakRetained();
    uStack_f0 = param_1 + _DAT_11274d7fc;
    _objc_loadWeakRetained();
    uStack_b8 = param_1 + _DAT_11274d800;
    _objc_loadWeakRetained();
    uStack_f8 = param_1 + _DAT_11274d804;
    _objc_loadWeakRetained();
    uStack_c0 = param_1 + _DAT_11274d808;
    _objc_loadWeakRetained();
    uStack_e8 = param_1 + _DAT_11274d80c;
    _objc_loadWeakRetained();
    uStack_118 = param_1 + _DAT_11274d810;
    _objc_loadWeakRetained();
    uStack_108 = param_1 + _DAT_11274d814;
    _objc_loadWeakRetained();
    uStack_100 = param_1 + _DAT_11274d818;
    _objc_loadWeakRetained();
    lVar7 = param_1 + _DAT_11274d81c;
    _objc_loadWeakRetained();
    uStack_120 = param_1 + _DAT_11274d820;
    _objc_loadWeakRetained();
    uStack_128 = param_1 + _DAT_11274d824;
    _objc_loadWeakRetained();
    lVar5 = param_1 + _DAT_11274d828;
    _objc_loadWeakRetained();
    lVar9 = param_1 + _DAT_11274d82c;
    _objc_loadWeakRetained();
    lVar8 = param_1 + _DAT_11274d830;
    _objc_loadWeakRetained();
    lVar4 = param_1 + _DAT_11274d834;
    _objc_loadWeakRetained();
    lVar3 = param_1 + _DAT_11274d838;
    _objc_loadWeakRetained();
    lVar2 = param_1 + _DAT_11274d83c;
    _objc_loadWeakRetained();
    lVar6 = param_1 + _DAT_11274d840;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_11274d844;
    _objc_loadWeakRetained();
  }
  func_0x00010c05ee80(puVar1,param_2,uStack_70,uStack_78,uStack_80,uStack_88,uStack_90,uStack_98,
                      uStack_a8,uStack_d0,uStack_c8,uStack_e0,uStack_d8,uStack_b0,uStack_a0,
                      uStack_f0,uStack_b8,uStack_f8,uStack_c0,uStack_e8,uStack_118,uStack_108,
                      uStack_100,lVar7,uStack_120,uStack_128,lVar5,lVar9,lVar8,lVar4,lVar3,lVar2,
                      lVar6,param_1);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(uStack_128);
  _objc_release(uStack_120);
  _objc_release(lVar7);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_e8);
  _objc_release(uStack_c0);
  _objc_release(uStack_f8);
  _objc_release(uStack_b8);
  _objc_release(uStack_f0);
  _objc_release(uStack_a0);
  _objc_release(uStack_b0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_a8);
  _objc_release(uStack_98);
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106687c3c; end: 106687de7; -[SCLensExplorerDependencyProviderFactoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106687c3c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274d844);
  _objc_destroyWeak(param_1 + _DAT_11274d840);
  _objc_destroyWeak(param_1 + _DAT_11274d83c);
  _objc_destroyWeak(param_1 + _DAT_11274d838);
  _objc_destroyWeak(param_1 + _DAT_11274d834);
  _objc_destroyWeak(param_1 + _DAT_11274d830);
  _objc_destroyWeak(param_1 + _DAT_11274d82c);
  _objc_destroyWeak(param_1 + _DAT_11274d828);
  _objc_destroyWeak(param_1 + _DAT_11274d824);
  _objc_destroyWeak(param_1 + _DAT_11274d820);
  _objc_destroyWeak(param_1 + _DAT_11274d81c);
  _objc_destroyWeak(param_1 + _DAT_11274d818);
  _objc_destroyWeak(param_1 + _DAT_11274d814);
  _objc_destroyWeak(param_1 + _DAT_11274d810);
  _objc_destroyWeak(param_1 + _DAT_11274d80c);
  _objc_destroyWeak(param_1 + _DAT_11274d808);
  _objc_destroyWeak(param_1 + _DAT_11274d804);
  _objc_destroyWeak(param_1 + _DAT_11274d800);
  _objc_destroyWeak(param_1 + _DAT_11274d7fc);
  _objc_destroyWeak(param_1 + _DAT_11274d7f8);
  _objc_destroyWeak(param_1 + _DAT_11274d7f4);
  _objc_destroyWeak(param_1 + _DAT_11274d7f0);
  _objc_destroyWeak(param_1 + _DAT_11274d7ec);
  _objc_destroyWeak(param_1 + _DAT_11274d7e8);
  _objc_destroyWeak(param_1 + _DAT_11274d7e4);
  _objc_destroyWeak(param_1 + _DAT_11274d7e0);
  _objc_destroyWeak(param_1 + _DAT_11274d7dc);
  _objc_destroyWeak(param_1 + _DAT_11274d7d8);
  _objc_destroyWeak(param_1 + _DAT_11274d7d4);
  _objc_destroyWeak(param_1 + _DAT_11274d7d0);
  _objc_destroyWeak(param_1 + _DAT_11274d7cc);
  _objc_destroyWeak(param_1 + _DAT_11274d7c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274d7c4);
  return;
}



/* Entry: 106687de8; end: 1066883e7; -[SCLensExplorerDirectorsSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106687de8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  
  lVar1 = param_1;
  func_0x00010bf6da20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6da00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf6da40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_11274d848;
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  *(long *)(param_1 + lVar20) = lVar4;
  _objc_release(uVar19);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  FUN_1066883e8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf7f8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126cc930;
  _objc_alloc();
  puVar7 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044100(puVar6,param_2,0,puVar7,0);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126cc938;
  _objc_alloc();
  lVar1 = lVar2;
  func_0x00010bf64740(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1556e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf4b3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar2;
  func_0x00010bf33160();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c11d320();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf330e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c0dc660();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar2;
  func_0x00010c11d3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010668840c();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar2;
  func_0x00010c0914e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bdf9080();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126cc940;
  _objc_opt_new();
  puVar15 = PTR_PTR_1126cc948;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b7a0(puVar7,param_2,uVar5,lVar1,lVar3,lVar4,lVar21,lVar8,lVar9,uVar19,lVar20,lVar11
                      ,lVar12,lVar13,1);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar20);
  _objc_release(uVar19);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar21);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar14 = PTR_PTR_1126b1b50;
  func_0x00010bf6a8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126b1b58;
  _objc_alloc(PTR_PTR_1126b1b58);
  func_0x00010c04a5a0();
  puVar16 = PTR_PTR_1126cca00;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010668840c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126cc950;
  func_0x00010bf690c0(PTR_PTR_1126cc950);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar5;
  func_0x00010c25df60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be88640(param_1,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126cca08;
  _objc_opt_new();
  func_0x00010c023ca0(puVar16,param_2,puVar7,uVar5,lVar3,puVar15,puVar17,lVar4,puVar18,0x204,0,0);
  _objc_release(puVar18);
  _objc_release(lVar4);
  _objc_release(uVar19);
  _objc_release(puVar17);
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010c1bb880(puVar7,param_2,puVar16);
  lVar1 = param_1;
  func_0x000106688430(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar16,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x000106688430(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c098b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd8a0(puVar16,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar21 = (long)_DAT_11274d84c;
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar16;
  _objc_retain(puVar16);
  _objc_release(uVar19);
  lVar3 = param_1;
  FUN_1066883e8();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefd60();
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  func_0x000106688430(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfbb120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cac0(uVar19,param_2,lVar1,0);
  _objc_release(puVar16);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1066883e8; end: 106688453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066883e8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274d858);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106688454; end: 1066885a7; -[SCLensExplorerDirectorsSessionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106688454(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar6 = param_1;
  FUN_1066883e8();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65d00();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = (long)_DAT_11274d84c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c07ab40();
  if (iVar1 == 0) {
    puStack_70 = PTR_PTR_1126f24c0;
    plVar4 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11274d850;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar3;
    _objc_retain();
    _objc_release(uVar5);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1066885a8;
    puStack_50 = &UNK_110842e18;
    puStack_48 = puVar3;
    func_0x00010bf83b40(*(undefined8 *)(param_1 + lVar6));
    plVar4 = *(long **)(param_1 + lVar7);
    func_0x00010c117720(plVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 1066885a8; end: 1066885af;  */

void FUN_1066885a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1066885b0; end: 1066886f7; -[SCLensExplorerDirectorsSessionEntryPoint _refreshHandlerWithStudySettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066885b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126cc988;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11274d868;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar2;
  func_0x00010c093ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024020(puVar1,param_2,lVar4,param_3);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126cc958;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d980(puVar8,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (puVar1 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = puVar1 + _DAT_11274d864;
      _objc_loadWeakRetained();
    }
    puVar5 = puVar8;
    func_0x00010bf68700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    uVar6 = *(undefined8 *)(puVar1 + _DAT_11274d848);
    func_0x00010bf6d9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08fd80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar8 = PTR_PTR_1126ae720;
    uVar6 = *(undefined8 *)(puVar1 + _DAT_11274d86c);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106688820;
    puStack_b0 = &UNK_110932a58;
    puStack_a8 = puVar5;
    uStack_a0 = uVar7;
    uStack_98 = uVar6;
    _objc_retain(uVar6);
    func_0x00010bf11fe0(puVar8,param_2,&puStack_c8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1066886f8; end: 10668881f; -[SCLensExplorerDirectorsSessionEntryPoint _deeplinkHandlerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066886f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11274d864;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010bf68700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d848);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d86c);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106688820;
  puStack_60 = &UNK_110932a58;
  lStack_58 = lVar1;
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106688820; end: 106688887;  */

void FUN_106688820(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc970;
  _objc_alloc(PTR_PTR_1126cc970);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009d20(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106688888; end: 1066888a7; -[SCLensExplorerDirectorsSessionEntryPoint dependencyProviderFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106688888(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274d85c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066888a8; end: 1066888bb; -[SCLensExplorerDirectorsSessionEntryPoint setDependencyProviderFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066888a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274d85c,param_3);
  return;
}



/* Entry: 1066888bc; end: 1066888cb; -[SCLensExplorerDirectorsSessionEntryPoint searchScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066888bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d870);
}



/* Entry: 1066888cc; end: 10668890b; -[SCLensExplorerDirectorsSessionEntryPoint setSearchScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066888cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d870;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668890c; end: 10668891b; -[SCLensExplorerDirectorsSessionEntryPoint lensExplorerStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668890c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d874);
}



/* Entry: 10668891c; end: 10668895b; -[SCLensExplorerDirectorsSessionEntryPoint setLensExplorerStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668891c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d874;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668895c; end: 10668896b; -[SCLensExplorerDirectorsSessionEntryPoint creatorProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668895c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d878);
}



/* Entry: 10668896c; end: 1066889ab; -[SCLensExplorerDirectorsSessionEntryPoint setCreatorProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668896c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d878;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066889ac; end: 1066889bb; -[SCLensExplorerDirectorsSessionEntryPoint infoCardsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066889ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d87c);
}



/* Entry: 1066889bc; end: 1066889fb; -[SCLensExplorerDirectorsSessionEntryPoint setInfoCardsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066889bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d87c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066889fc; end: 106688a0b; -[SCLensExplorerDirectorsSessionEntryPoint modularCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066889fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d880);
}



/* Entry: 106688a0c; end: 106688a4b; -[SCLensExplorerDirectorsSessionEntryPoint setModularCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106688a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d880;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106688a4c; end: 106688a5b; -[SCLensExplorerDirectorsSessionEntryPoint collectionsCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106688a4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d884);
}



/* Entry: 106688a5c; end: 106688a9b; -[SCLensExplorerDirectorsSessionEntryPoint setCollectionsCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106688a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d884;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106688a9c; end: 106688ba3; -[SCLensExplorerDirectorsSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106688a9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274d884,0);
  _objc_storeStrong(param_1 + _DAT_11274d880,0);
  _objc_storeStrong(param_1 + _DAT_11274d87c,0);
  _objc_storeStrong(param_1 + _DAT_11274d878,0);
  _objc_storeStrong(param_1 + _DAT_11274d874,0);
  _objc_storeStrong(param_1 + _DAT_11274d870,0);
  _objc_storeStrong(param_1 + _DAT_11274d86c,0);
  _objc_destroyWeak(param_1 + _DAT_11274d868);
  _objc_destroyWeak(param_1 + _DAT_11274d864);
  _objc_destroyWeak(param_1 + _DAT_11274d860);
  _objc_destroyWeak(param_1 + _DAT_11274d85c);
  _objc_destroyWeak(param_1 + _DAT_11274d858);
  _objc_destroyWeak(param_1 + _DAT_11274d854);
  _objc_storeStrong(param_1 + _DAT_11274d850,0);
  _objc_storeStrong(param_1 + _DAT_11274d84c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274d848,0);
  return;
}



/* Entry: 106688ba4; end: 10668924b; -[SCLensExplorerGamesSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106688ba4(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long lVar25;
  
  lVar1 = param_1;
  func_0x00010bf6da20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6da00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf6da40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11274d888;
  uVar24 = *(undefined8 *)(param_1 + lVar25);
  *(long *)(param_1 + lVar25) = lVar4;
  _objc_release(uVar24);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar24 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  FUN_10668924c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11d2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126cc930;
  _objc_alloc();
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044100(puVar5,param_2,0,puVar6,0);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126cc938;
  _objc_alloc();
  lVar1 = lVar2;
  func_0x00010bf64740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1556e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf4b3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf33160();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c11d320();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf330e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c0dc660();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar2;
  func_0x00010c11d3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x000106689270();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010c0914e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bdf9080();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126cc940;
  _objc_opt_new();
  lVar16 = param_1;
  FUN_10668924c();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c25e1a0();
  puVar19 = PTR_PTR_1126cc948;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b7a0(puVar6,param_2,uVar24,lVar1,lVar3,lVar4,lVar7,lVar8,lVar9,uVar10,lVar25,lVar12
                      ,lVar13,lVar14,1,puVar5,0,puVar15,lVar18,0x101);
  _objc_release(puVar19);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar25);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar15 = PTR_PTR_1126b1b58;
  _objc_alloc();
  lVar1 = param_1;
  FUN_10668924c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c10f7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a5a0(puVar15,param_2,3,1,lVar3,0,0);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar19 = PTR_PTR_1126cc950;
  _objc_alloc(PTR_PTR_1126cc950);
  func_0x00010c043060();
  puVar20 = PTR_PTR_1126cc958;
  _objc_alloc();
  func_0x00010c03d980();
  puVar21 = PTR_PTR_1126cc960;
  _objc_alloc();
  lVar1 = param_1;
  func_0x000106689270(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_10668924c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023ce0(puVar21,param_2,puVar6,0,uVar24,lVar3,puVar15,puVar19,puVar20,puVar22,lVar7,
                      puVar23,0,0x4000,0,0);
  _objc_release(puVar23);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(puVar22);
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010c1bb880(puVar6,param_2,puVar21);
  lVar1 = param_1;
  FUN_10668924c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar21,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  FUN_10668924c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c098b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd8a0(puVar21,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11274d88c);
  *(undefined **)(param_1 + _DAT_11274d88c) = puVar21;
  _objc_retain(puVar21);
  _objc_release(uVar10);
  lVar1 = param_1;
  func_0x000106689294(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefd60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  FUN_10668924c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cc60(puVar21,param_2,lVar1);
  _objc_release(puVar21);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar15);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar24);
  return;
}



/* Entry: 10668924c; end: 1066892b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668924c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274d894);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066892b8; end: 10668940b; -[SCLensExplorerGamesSessionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066892b8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar6 = param_1;
  func_0x000106689294();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65d00();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = (long)_DAT_11274d88c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c07ab40();
  if (iVar1 == 0) {
    puStack_70 = PTR_PTR_1126f24c8;
    plVar4 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11274d890;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar3;
    _objc_retain();
    _objc_release(uVar5);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10668940c;
    puStack_50 = &UNK_110842e18;
    puStack_48 = puVar3;
    func_0x00010bf83b40(*(undefined8 *)(param_1 + lVar6));
    plVar4 = *(long **)(param_1 + lVar7);
    func_0x00010c117720(plVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 10668940c; end: 106689413;  */

void FUN_10668940c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 106689414; end: 10668953b; -[SCLensExplorerGamesSessionEntryPoint _deeplinkHandlerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106689414(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11274d8a4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010bf68700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d888);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d8a8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10668953c;
  puStack_60 = &UNK_110932a58;
  lStack_58 = lVar1;
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10668953c; end: 1066895a3;  */

void FUN_10668953c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc970;
  _objc_alloc(PTR_PTR_1126cc970);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009d20(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066895a4; end: 1066895c3; -[SCLensExplorerGamesSessionEntryPoint dependencyProviderFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066895a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274d89c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066895c4; end: 1066895d7; -[SCLensExplorerGamesSessionEntryPoint setDependencyProviderFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066895c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274d89c,param_3);
  return;
}



/* Entry: 1066895d8; end: 1066895e7; -[SCLensExplorerGamesSessionEntryPoint searchScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066895d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d8ac);
}



/* Entry: 1066895e8; end: 106689627; -[SCLensExplorerGamesSessionEntryPoint setSearchScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066895e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d8ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106689628; end: 106689637; -[SCLensExplorerGamesSessionEntryPoint lensExplorerStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106689628(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d8b0);
}



/* Entry: 106689638; end: 106689677; -[SCLensExplorerGamesSessionEntryPoint setLensExplorerStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106689638(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d8b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106689678; end: 106689687; -[SCLensExplorerGamesSessionEntryPoint creatorProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106689678(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d8b4);
}



/* Entry: 106689688; end: 1066896c7; -[SCLensExplorerGamesSessionEntryPoint setCreatorProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106689688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d8b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066896c8; end: 1066896d7; -[SCLensExplorerGamesSessionEntryPoint infoCardsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066896c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d8b8);
}



/* Entry: 1066896d8; end: 106689717; -[SCLensExplorerGamesSessionEntryPoint setInfoCardsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066896d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d8b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106689718; end: 106689727; -[SCLensExplorerGamesSessionEntryPoint modularCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106689718(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d8bc);
}



/* Entry: 106689728; end: 106689767; -[SCLensExplorerGamesSessionEntryPoint setModularCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106689728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d8bc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106689768; end: 106689777; -[SCLensExplorerGamesSessionEntryPoint collectionsCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106689768(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d8c0);
}



/* Entry: 106689778; end: 1066897b7; -[SCLensExplorerGamesSessionEntryPoint setCollectionsCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106689778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d8c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066897b8; end: 1066898b3; -[SCLensExplorerGamesSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066897b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274d8c0,0);
  _objc_storeStrong(param_1 + _DAT_11274d8bc,0);
  _objc_storeStrong(param_1 + _DAT_11274d8b8,0);
  _objc_storeStrong(param_1 + _DAT_11274d8b4,0);
  _objc_storeStrong(param_1 + _DAT_11274d8b0,0);
  _objc_storeStrong(param_1 + _DAT_11274d8ac,0);
  _objc_storeStrong(param_1 + _DAT_11274d8a8,0);
  _objc_destroyWeak(param_1 + _DAT_11274d8a4);
  _objc_destroyWeak(param_1 + _DAT_11274d8a0);
  _objc_destroyWeak(param_1 + _DAT_11274d89c);
  _objc_destroyWeak(param_1 + _DAT_11274d898);
  _objc_destroyWeak(param_1 + _DAT_11274d894);
  _objc_storeStrong(param_1 + _DAT_11274d890,0);
  _objc_storeStrong(param_1 + _DAT_11274d88c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274d888,0);
  return;
}



/* Entry: 1066898b4; end: 10668a073; -[SCLensExplorerInfoCardSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066898b4(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  long lVar26;
  ulong in_stack_fffffffffffffed0;
  
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + (long)_DAT_11274d8dc;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar26;
  func_0x00010c160180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar26);
  uVar2 = param_1;
  func_0x00010bf6da20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6da00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf6da40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_11274d8c4;
  uVar25 = *(undefined8 *)(param_1 + lVar26);
  *(ulong *)(param_1 + lVar26) = uVar5;
  _objc_release(uVar25);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar25 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  FUN_10668a074();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf64240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126ae750;
  uVar2 = param_1;
  FUN_10668a074(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2468a0(puVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126cc930;
  _objc_alloc();
  uVar2 = param_1;
  FUN_10668a074(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c077d80();
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044100(puVar7,param_2,uVar4,puVar8,0x2d);
  _objc_release(puVar8);
  _objc_release(uVar2);
  uVar2 = param_1;
  FUN_10668a074();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c077d80();
  _objc_release(uVar2);
  puVar9 = PTR_PTR_1126cc938;
  _objc_alloc();
  uVar2 = uVar3;
  func_0x00010bf64740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c1556e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf4b3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010bf33160();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c11d320();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf330e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c0dc660();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010c11d3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar1;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010c0914e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  func_0x00010bdf9080();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126cc940;
  _objc_opt_new();
  puVar18 = PTR_PTR_1126cc948;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b7a0(puVar9,param_2,uVar25,uVar2,uVar5,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,
                      lVar26,uVar16,uVar17,in_stack_fffffffffffffed0 & 0xffffffffffffff00,puVar7,0,
                      puVar8,uVar4 & 0xffffffff,0x100);
  _objc_release(puVar18);
  _objc_release(puVar8);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(lVar26);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126b1b50;
  uVar2 = param_1;
  FUN_10668a074(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33380(puVar8,param_2,uVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar18 = PTR_PTR_1126b1b58;
  _objc_alloc();
  func_0x00010c04a5a0();
  puVar19 = PTR_PTR_1126cc950;
  _objc_alloc(PTR_PTR_1126cc950);
  func_0x00010c043060();
  puVar20 = PTR_PTR_1126cc958;
  _objc_alloc();
  func_0x00010c03d980();
  puVar21 = PTR_PTR_1126cca10;
  _objc_alloc();
  uVar2 = param_1;
  FUN_10668a074(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c077d80();
  func_0x00010c05a660(puVar21,param_2,1,0,0,(uint)uVar5 ^ 1,uVar4 & 0xffffffff);
  _objc_release(uVar2);
  puVar22 = PTR_PTR_1126cca18;
  _objc_alloc();
  func_0x00010c004140();
  puVar23 = PTR_PTR_1126cc960;
  _objc_alloc();
  lVar26 = lVar1;
  func_0x00010c0b37c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  FUN_10668a074();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c15fb60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023ce0(puVar23,param_2,puVar9,0,uVar25,lVar26,puVar18,puVar19,puVar20,puVar24,puVar21
                      ,uVar4,0,4,0,puVar22);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar24);
  _objc_release(lVar26);
  func_0x00010c1bb880(puVar9,param_2,puVar23);
  uVar4 = param_1;
  FUN_10668a074();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar23,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = param_1;
  FUN_10668a074();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c098b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd8a0(puVar23,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar14 = *(undefined8 *)(param_1 + (long)_DAT_11274d8c8);
  *(undefined **)(param_1 + (long)_DAT_11274d8c8) = puVar23;
  _objc_retain(puVar23);
  _objc_release(uVar14);
  uVar2 = param_1;
  func_0x00010668a098(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefd60();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  FUN_10668a074(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cc60(puVar23,param_2,uVar2);
  _objc_release(puVar23);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10668a074; end: 10668a0bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668a074(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274d8d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10668a0bc; end: 10668a20f; -[SCLensExplorerInfoCardSessionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668a0bc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar6 = param_1;
  func_0x00010668a098();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65d00();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = (long)_DAT_11274d8c8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c07ab40();
  if (iVar1 == 0) {
    puStack_70 = PTR_PTR_1126f24d0;
    plVar4 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11274d8cc;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar3;
    _objc_retain();
    _objc_release(uVar5);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10668a210;
    puStack_50 = &UNK_110842e18;
    puStack_48 = puVar3;
    func_0x00010bf83b40(*(undefined8 *)(param_1 + lVar6));
    plVar4 = *(long **)(param_1 + lVar7);
    func_0x00010c117720(plVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 10668a210; end: 10668a217;  */

void FUN_10668a210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10668a218; end: 10668a33f; -[SCLensExplorerInfoCardSessionEntryPoint _deeplinkHandlerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668a218(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11274d8e0;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010bf68700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d8c4);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d8e4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10668a340;
  puStack_60 = &UNK_110932a58;
  lStack_58 = lVar1;
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10668a340; end: 10668a3a7;  */

void FUN_10668a340(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc970;
  _objc_alloc(PTR_PTR_1126cc970);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009d20(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10668a3a8; end: 10668a3c7; -[SCLensExplorerInfoCardSessionEntryPoint dependencyProviderFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668a3a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274d8d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10668a3c8; end: 10668a3db; -[SCLensExplorerInfoCardSessionEntryPoint setDependencyProviderFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668a3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274d8d8,param_3);
  return;
}



/* Entry: 10668a3dc; end: 10668a3eb; -[SCLensExplorerInfoCardSessionEntryPoint searchScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668a3dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d8e8);
}



/* Entry: 10668a3ec; end: 10668a42b; -[SCLensExplorerInfoCardSessionEntryPoint setSearchScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668a3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d8e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668a42c; end: 10668a43b; -[SCLensExplorerInfoCardSessionEntryPoint lensExplorerStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668a42c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d8ec);
}



/* Entry: 10668a43c; end: 10668a47b; -[SCLensExplorerInfoCardSessionEntryPoint setLensExplorerStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668a43c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d8ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668a47c; end: 10668a48b; -[SCLensExplorerInfoCardSessionEntryPoint creatorProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668a47c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d8f0);
}



/* Entry: 10668a48c; end: 10668a4cb; -[SCLensExplorerInfoCardSessionEntryPoint setCreatorProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668a48c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d8f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668a4cc; end: 10668a4db; -[SCLensExplorerInfoCardSessionEntryPoint infoCardsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668a4cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d8f4);
}



/* Entry: 10668a4dc; end: 10668a51b; -[SCLensExplorerInfoCardSessionEntryPoint setInfoCardsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668a4dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d8f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668a51c; end: 10668a52b; -[SCLensExplorerInfoCardSessionEntryPoint modularCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668a51c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d8f8);
}



/* Entry: 10668a52c; end: 10668a56b; -[SCLensExplorerInfoCardSessionEntryPoint setModularCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668a52c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d8f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668a56c; end: 10668a57b; -[SCLensExplorerInfoCardSessionEntryPoint collectionsCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668a56c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d8fc);
}



/* Entry: 10668a57c; end: 10668a5bb; -[SCLensExplorerInfoCardSessionEntryPoint setCollectionsCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668a57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d8fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668a5bc; end: 10668a6b7; -[SCLensExplorerInfoCardSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668a5bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274d8fc,0);
  _objc_storeStrong(param_1 + _DAT_11274d8f8,0);
  _objc_storeStrong(param_1 + _DAT_11274d8f4,0);
  _objc_storeStrong(param_1 + _DAT_11274d8f0,0);
  _objc_storeStrong(param_1 + _DAT_11274d8ec,0);
  _objc_storeStrong(param_1 + _DAT_11274d8e8,0);
  _objc_storeStrong(param_1 + _DAT_11274d8e4,0);
  _objc_destroyWeak(param_1 + _DAT_11274d8e0);
  _objc_destroyWeak(param_1 + _DAT_11274d8dc);
  _objc_destroyWeak(param_1 + _DAT_11274d8d8);
  _objc_destroyWeak(param_1 + _DAT_11274d8d4);
  _objc_destroyWeak(param_1 + _DAT_11274d8d0);
  _objc_storeStrong(param_1 + _DAT_11274d8c4,0);
  _objc_storeStrong(param_1 + _DAT_11274d8cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274d8c8,0);
  return;
}



/* Entry: 10668a6b8; end: 10668ad47; -[SCLensExplorerMemoriesTemplateSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668a6b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  long lVar23;
  
  lVar1 = param_1;
  func_0x00010bf6da20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6da00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf6da40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_11274d900;
  uVar22 = *(undefined8 *)(param_1 + lVar23);
  *(long *)(param_1 + lVar23) = lVar4;
  _objc_release(uVar22);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar22 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  FUN_10668ad48();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c9ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126cc930;
  _objc_alloc();
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044100(puVar5,param_2,0,puVar6,0);
  _objc_release(puVar6);
  puVar7 = PTR_PTR_1126cc938;
  _objc_alloc();
  lVar1 = lVar2;
  func_0x00010bf64740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1556e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf4b3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf33160();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c11d320();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010bf330e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c0dc660();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar2;
  func_0x00010c11d3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010668ad6c();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010c0914e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bdf9080();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126cc940;
  _objc_opt_new();
  lVar16 = param_1;
  func_0x00010668ad90();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c0901e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b7a0(puVar7,param_2,uVar22,lVar1,lVar3,lVar4,lVar8,lVar9,lVar10,uVar11,lVar23,
                      lVar13,lVar14,lVar15,0);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(puVar6);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar23);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126cca20;
  lVar3 = param_1;
  func_0x00010668ad90(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c159bc0();
  lVar1 = param_1 + _DAT_11274d920;
  _objc_loadWeakRetained(lVar1);
  lVar8 = lVar1;
  func_0x00010c0937c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c093300();
  func_0x00010bfa3d40(puVar6,param_2,lVar4,lVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(lVar3);
  puVar18 = PTR_PTR_1126b1b50;
  func_0x00010bf33380(PTR_PTR_1126b1b50,param_2,puVar6,1);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126b1b58;
  _objc_alloc(PTR_PTR_1126b1b58);
  func_0x00010c04a5a0();
  puVar20 = PTR_PTR_1126cca28;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010668ad6c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0b37c0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126cc950;
  func_0x00010bf690c0(PTR_PTR_1126cc950);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023cc0(puVar20,param_2,puVar7,uVar22,lVar3,puVar19,puVar21,4,0);
  _objc_release(puVar21);
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010c1bb880(puVar7,param_2,puVar20);
  lVar1 = param_1;
  func_0x00010668ad90(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0935a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(puVar20,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010668ad90(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c098b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd8a0(puVar20,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  uVar11 = *(undefined8 *)(param_1 + _DAT_11274d904);
  *(undefined **)(param_1 + _DAT_11274d904) = puVar20;
  _objc_retain(puVar20);
  _objc_release(uVar11);
  lVar3 = param_1;
  FUN_10668ad48();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefd60();
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar1 = param_1;
  func_0x00010668ad90(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010668ad90(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cbe0(puVar20,param_2,lVar3,lVar4);
  _objc_release(puVar20);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar22);
  return;
}



/* Entry: 10668ad48; end: 10668adb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668ad48(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274d910);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10668adb4; end: 10668af07; -[SCLensExplorerMemoriesTemplateSessionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668adb4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar6 = param_1;
  FUN_10668ad48();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c136360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65d00();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = (long)_DAT_11274d904;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c07ab40();
  if (iVar1 == 0) {
    puStack_70 = PTR_PTR_1126f24d8;
    plVar4 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11274d908;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar3;
    _objc_retain();
    _objc_release(uVar5);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10668af08;
    puStack_50 = &UNK_110842e18;
    puStack_48 = puVar3;
    func_0x00010bf83b40(*(undefined8 *)(param_1 + lVar6));
    plVar4 = *(long **)(param_1 + lVar7);
    func_0x00010c117720(plVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 10668af08; end: 10668af0f;  */

void FUN_10668af08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10668af10; end: 10668b037; -[SCLensExplorerMemoriesTemplateSessionEntryPoint _deeplinkHandlerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668af10(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11274d91c;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar5;
  func_0x00010bf68700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d900);
  func_0x00010bf6d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d924);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10668b038;
  puStack_60 = &UNK_110932a58;
  lStack_58 = lVar1;
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10668b038; end: 10668b09f;  */

void FUN_10668b038(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc970;
  _objc_alloc(PTR_PTR_1126cc970);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009d20(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10668b0a0; end: 10668b0bf; -[SCLensExplorerMemoriesTemplateSessionEntryPoint dependencyProviderFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668b0a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274d914);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10668b0c0; end: 10668b0d3; -[SCLensExplorerMemoriesTemplateSessionEntryPoint setDependencyProviderFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668b0c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274d914,param_3);
  return;
}



/* Entry: 10668b0d4; end: 10668b0e3; -[SCLensExplorerMemoriesTemplateSessionEntryPoint searchScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668b0d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d928);
}



/* Entry: 10668b0e4; end: 10668b123; -[SCLensExplorerMemoriesTemplateSessionEntryPoint setSearchScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668b0e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d928;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668b124; end: 10668b133; -[SCLensExplorerMemoriesTemplateSessionEntryPoint lensExplorerStoryScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668b124(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d92c);
}



/* Entry: 10668b134; end: 10668b173; -[SCLensExplorerMemoriesTemplateSessionEntryPoint setLensExplorerStoryScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668b134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d92c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668b174; end: 10668b183; -[SCLensExplorerMemoriesTemplateSessionEntryPoint creatorProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668b174(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d930);
}



/* Entry: 10668b184; end: 10668b1c3; -[SCLensExplorerMemoriesTemplateSessionEntryPoint setCreatorProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668b184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d930;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668b1c4; end: 10668b1d3; -[SCLensExplorerMemoriesTemplateSessionEntryPoint infoCardsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668b1c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d934);
}



/* Entry: 10668b1d4; end: 10668b213; -[SCLensExplorerMemoriesTemplateSessionEntryPoint setInfoCardsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668b1d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d934;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668b214; end: 10668b223; -[SCLensExplorerMemoriesTemplateSessionEntryPoint modularCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668b214(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d938);
}



/* Entry: 10668b224; end: 10668b263; -[SCLensExplorerMemoriesTemplateSessionEntryPoint setModularCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668b224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d938;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668b264; end: 10668b273; -[SCLensExplorerMemoriesTemplateSessionEntryPoint collectionsCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10668b264(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d93c);
}



/* Entry: 10668b274; end: 10668b2b3; -[SCLensExplorerMemoriesTemplateSessionEntryPoint setCollectionsCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668b274(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d93c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10668b2b4; end: 10668b3bb; -[SCLensExplorerMemoriesTemplateSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10668b2b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274d93c,0);
  _objc_storeStrong(param_1 + _DAT_11274d938,0);
  _objc_storeStrong(param_1 + _DAT_11274d934,0);
  _objc_storeStrong(param_1 + _DAT_11274d930,0);
  _objc_storeStrong(param_1 + _DAT_11274d92c,0);
  _objc_storeStrong(param_1 + _DAT_11274d928,0);
  _objc_storeStrong(param_1 + _DAT_11274d924,0);
  _objc_destroyWeak(param_1 + _DAT_11274d920);
  _objc_destroyWeak(param_1 + _DAT_11274d91c);
  _objc_destroyWeak(param_1 + _DAT_11274d918);
  _objc_destroyWeak(param_1 + _DAT_11274d914);
  _objc_destroyWeak(param_1 + _DAT_11274d910);
  _objc_destroyWeak(param_1 + _DAT_11274d90c);
  _objc_storeStrong(param_1 + _DAT_11274d908,0);
  _objc_storeStrong(param_1 + _DAT_11274d904,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274d900,0);
  return;
}


