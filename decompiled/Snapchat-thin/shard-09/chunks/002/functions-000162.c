/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106afd844; end: 106afd883;  */

void FUN_106afd844(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdefb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106afd884; end: 106afda97; -[SCLensExplorerARBarCategoriesLoggerEntryPoint _createLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afd884(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112757f44;
    _objc_loadWeakRetained(lVar9);
  }
  lVar1 = lVar9;
  func_0x00010c095b60(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b3d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar9);
  puVar4 = PTR_PTR_1126d06a8;
  _objc_alloc(PTR_PTR_1126d06a8);
  lVar9 = param_1;
  func_0x00010be4abe0(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  lVar1 = param_1;
  FUN_106afda98();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112757f4c;
    _objc_loadWeakRetained(lVar10);
  }
  lVar6 = lVar10;
  func_0x00010c0d79a0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112757f48;
    _objc_loadWeakRetained(lVar11);
  }
  lVar7 = lVar11;
  func_0x00010bfcdfa0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be82c00();
  lVar8 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023d60(puVar4,param_2,lVar9,puVar5,lVar3,lVar2,lVar6,lVar7,param_1,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(lVar9);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106afda98; end: 106afdabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afda98(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112757f40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106afdabc; end: 106afdb53; -[SCLensExplorerARBarCategoriesLoggerEntryPoint _lensExplorerLoggerWithPerformer:] */

void FUN_106afdabc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d06b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  FUN_106afda98(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034a60(puVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106afdb54; end: 106afdbe3; -[SCLensExplorerARBarCategoriesLoggerEntryPoint _productMode] */

undefined8 FUN_106afdb54(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  FUN_106afdbe4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07c4c0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    FUN_106afdbe4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf2afc0();
    _objc_release(param_1);
    uVar1 = 9;
    if (uVar2 != 7) {
      uVar1 = 4;
    }
    uVar4 = 10;
    if (uVar2 != 3) {
      uVar4 = uVar1;
    }
  }
  else {
    uVar4 = 6;
  }
  return uVar4;
}



/* Entry: 106afdbe4; end: 106afdc07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afdbe4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112757f38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106afdc08; end: 106afdc7f; -[SCLensExplorerARBarCategoriesLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afdc08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112757f50,0);
  _objc_destroyWeak(param_1 + _DAT_112757f4c);
  _objc_destroyWeak(param_1 + _DAT_112757f48);
  _objc_destroyWeak(param_1 + _DAT_112757f44);
  _objc_destroyWeak(param_1 + _DAT_112757f40);
  _objc_destroyWeak(param_1 + _DAT_112757f3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757f38);
  return;
}



/* Entry: 106afdc80; end: 106afdd97; -[SCLensExplorerCategoriesLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afdc80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0698;
  _objc_alloc(PTR_PTR_1126d0698);
  func_0x00010c027680();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112757f6c);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106afdd98; end: 106afddd7;  */

void FUN_106afdd98(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdefb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106afddd8; end: 106afdfcf; -[SCLensExplorerCategoriesLoggerEntryPoint _createLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afddd8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112757f60;
    _objc_loadWeakRetained(lVar10);
  }
  lVar1 = lVar10;
  func_0x00010c095b60(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b3d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar10);
  puVar4 = PTR_PTR_1126d06a8;
  _objc_alloc(PTR_PTR_1126d06a8);
  lVar10 = param_1;
  func_0x00010be4abe0(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  lVar1 = param_1;
  FUN_106afdfd0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112757f68;
    _objc_loadWeakRetained(lVar11);
  }
  lVar6 = lVar11;
  func_0x00010c0d79a0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112757f64;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar7;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023d60(puVar4,param_2,lVar10,puVar5,lVar3,lVar2,lVar6,lVar8,0,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(lVar10);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106afdfd0; end: 106afdff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afdfd0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112757f5c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106afdff4; end: 106afe08b; -[SCLensExplorerCategoriesLoggerEntryPoint _lensExplorerLoggerWithPerformer:] */

void FUN_106afdff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d06b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  FUN_106afdfd0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034a60(puVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106afe08c; end: 106afe103; -[SCLensExplorerCategoriesLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afe08c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112757f6c,0);
  _objc_destroyWeak(param_1 + _DAT_112757f68);
  _objc_destroyWeak(param_1 + _DAT_112757f64);
  _objc_destroyWeak(param_1 + _DAT_112757f60);
  _objc_destroyWeak(param_1 + _DAT_112757f5c);
  _objc_destroyWeak(param_1 + _DAT_112757f58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757f54);
  return;
}



/* Entry: 106afe104; end: 106afe21b; -[SCLensExplorerDirectorsCategoriesLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afe104(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0698;
  _objc_alloc(PTR_PTR_1126d0698);
  func_0x00010c027680();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112757f88);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106afe21c; end: 106afe25b;  */

void FUN_106afe21c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdefb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106afe25c; end: 106afe457; -[SCLensExplorerDirectorsCategoriesLoggerEntryPoint _createLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afe25c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112757f7c;
    _objc_loadWeakRetained(lVar10);
  }
  lVar1 = lVar10;
  func_0x00010c095b60(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b3d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar10);
  puVar4 = PTR_PTR_1126d06a8;
  _objc_alloc(PTR_PTR_1126d06a8);
  lVar10 = param_1;
  func_0x00010be4abe0(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  lVar1 = param_1;
  FUN_106afe458();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112757f84;
    _objc_loadWeakRetained(lVar11);
  }
  lVar6 = lVar11;
  func_0x00010c0d79a0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112757f80;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar7;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023d60(puVar4,param_2,lVar10,puVar5,lVar3,lVar2,lVar6,lVar8,3,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(lVar10);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106afe458; end: 106afe47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afe458(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112757f78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106afe47c; end: 106afe513; -[SCLensExplorerDirectorsCategoriesLoggerEntryPoint _lensExplorerLoggerWithPerformer:] */

void FUN_106afe47c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d06b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  FUN_106afe458(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034a60(puVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106afe514; end: 106afe58b; -[SCLensExplorerDirectorsCategoriesLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afe514(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112757f88,0);
  _objc_destroyWeak(param_1 + _DAT_112757f84);
  _objc_destroyWeak(param_1 + _DAT_112757f80);
  _objc_destroyWeak(param_1 + _DAT_112757f7c);
  _objc_destroyWeak(param_1 + _DAT_112757f78);
  _objc_destroyWeak(param_1 + _DAT_112757f74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757f70);
  return;
}



/* Entry: 106afe58c; end: 106afe6a3; -[SCLensExplorerGamesCategoriesLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afe58c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0698;
  _objc_alloc(PTR_PTR_1126d0698);
  func_0x00010c027680();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112757fa4);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106afe6a4; end: 106afe6e3;  */

void FUN_106afe6a4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdefb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106afe6e4; end: 106afe8df; -[SCLensExplorerGamesCategoriesLoggerEntryPoint _createLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afe6e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112757f98;
    _objc_loadWeakRetained(lVar10);
  }
  lVar1 = lVar10;
  func_0x00010c095b60(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b3d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar10);
  puVar4 = PTR_PTR_1126d06a8;
  _objc_alloc(PTR_PTR_1126d06a8);
  lVar10 = param_1;
  func_0x00010be4abe0(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  lVar1 = param_1;
  FUN_106afe8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112757fa0;
    _objc_loadWeakRetained(lVar11);
  }
  lVar6 = lVar11;
  func_0x00010c0d79a0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112757f9c;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar7;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023d60(puVar4,param_2,lVar10,puVar5,lVar3,lVar2,lVar6,lVar8,8,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(lVar10);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106afe8e0; end: 106afe903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afe8e0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112757f94);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106afe904; end: 106afe99b; -[SCLensExplorerGamesCategoriesLoggerEntryPoint _lensExplorerLoggerWithPerformer:] */

void FUN_106afe904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d06b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  FUN_106afe8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034a60(puVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106afe99c; end: 106afea13; -[SCLensExplorerGamesCategoriesLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afe99c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112757fa4,0);
  _objc_destroyWeak(param_1 + _DAT_112757fa0);
  _objc_destroyWeak(param_1 + _DAT_112757f9c);
  _objc_destroyWeak(param_1 + _DAT_112757f98);
  _objc_destroyWeak(param_1 + _DAT_112757f94);
  _objc_destroyWeak(param_1 + _DAT_112757f90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757f8c);
  return;
}



/* Entry: 106afea14; end: 106afeb2b; -[SCLensExplorerMemoriesTemplateLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afea14(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0698;
  _objc_alloc(PTR_PTR_1126d0698);
  func_0x00010c027680();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112757fc0);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106afeb2c; end: 106afeb6b;  */

void FUN_106afeb2c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdefb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106afeb6c; end: 106afed67; -[SCLensExplorerMemoriesTemplateLoggerEntryPoint _createLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afeb6c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112757fb4;
    _objc_loadWeakRetained(lVar10);
  }
  lVar1 = lVar10;
  func_0x00010c095b60(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b3d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar10);
  puVar4 = PTR_PTR_1126d06a8;
  _objc_alloc(PTR_PTR_1126d06a8);
  lVar10 = param_1;
  func_0x00010be4abe0(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  lVar1 = param_1;
  FUN_106afed68();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112757fbc;
    _objc_loadWeakRetained(lVar11);
  }
  lVar6 = lVar11;
  func_0x00010c0d79a0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112757fb8;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar7;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023d60(puVar4,param_2,lVar10,puVar5,lVar3,lVar2,lVar6,lVar8,7,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(lVar10);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106afed68; end: 106afed8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afed68(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112757fb0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106afed8c; end: 106afee23; -[SCLensExplorerMemoriesTemplateLoggerEntryPoint _lensExplorerLoggerWithPerformer:] */

void FUN_106afed8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d06b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  FUN_106afed68(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034a60(puVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106afee24; end: 106afee9b; -[SCLensExplorerMemoriesTemplateLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afee24(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112757fc0,0);
  _objc_destroyWeak(param_1 + _DAT_112757fbc);
  _objc_destroyWeak(param_1 + _DAT_112757fb8);
  _objc_destroyWeak(param_1 + _DAT_112757fb4);
  _objc_destroyWeak(param_1 + _DAT_112757fb0);
  _objc_destroyWeak(param_1 + _DAT_112757fac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757fa8);
  return;
}



/* Entry: 106afee9c; end: 106afefb3; -[SCLensExplorerSpectaclesCategoriesLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afee9c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0698;
  _objc_alloc(PTR_PTR_1126d0698);
  func_0x00010c027680();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112757fdc);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106afefb4; end: 106afeff3;  */

void FUN_106afefb4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdefb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106afeff4; end: 106aff1ef; -[SCLensExplorerSpectaclesCategoriesLoggerEntryPoint _createLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106afeff4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112757fd0;
    _objc_loadWeakRetained(lVar10);
  }
  lVar1 = lVar10;
  func_0x00010c095b60(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b3d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar10);
  puVar4 = PTR_PTR_1126d06a8;
  _objc_alloc(PTR_PTR_1126d06a8);
  lVar10 = param_1;
  func_0x00010be4abe0(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  lVar1 = param_1;
  FUN_106aff1f0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112757fd8;
    _objc_loadWeakRetained(lVar11);
  }
  lVar6 = lVar11;
  func_0x00010c0d79a0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112757fd4;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar7;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023d60(puVar4,param_2,lVar10,puVar5,lVar3,lVar2,lVar6,lVar8,2,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(lVar10);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106aff1f0; end: 106aff213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aff1f0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112757fcc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106aff214; end: 106aff2ab; -[SCLensExplorerSpectaclesCategoriesLoggerEntryPoint _lensExplorerLoggerWithPerformer:] */

void FUN_106aff214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d06b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  FUN_106aff1f0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034a60(puVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106aff2ac; end: 106aff323; -[SCLensExplorerSpectaclesCategoriesLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106aff2ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112757fdc,0);
  _objc_destroyWeak(param_1 + _DAT_112757fd8);
  _objc_destroyWeak(param_1 + _DAT_112757fd4);
  _objc_destroyWeak(param_1 + _DAT_112757fd0);
  _objc_destroyWeak(param_1 + _DAT_112757fcc);
  _objc_destroyWeak(param_1 + _DAT_112757fc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112757fc4);
  return;
}



/* Entry: 106aff324; end: 106aff4af; -[SCLensExplorerCategoriesLoggerFactory initWithLensExplorerLogger:timeProvider:performer:blizzardLogger:networkConnectivityMonitor:grapheneRegistry:productMode:sessionIdentifier:] */

undefined1 *
FUN_106aff324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f4e18;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
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
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106aff4b0; end: 106aff5a3; -[SCLensExplorerCategoriesLoggerFactory createPageLoggerWithCommonLoggingParameters:isLensPickerMode:] */

void FUN_106aff4b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d06b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = param_3;
  func_0x00010c156360(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0f1860(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0933c0(param_3);
  _objc_release(param_3);
  func_0x00010c0453a0(puVar1,param_2,uVar6,uVar2,uVar3,uVar4,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126d06c0;
  _objc_alloc(PTR_PTR_1126d06c0);
  func_0x00010c0273e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106aff5a4; end: 106aff6db; -[SCLensExplorerCategoriesLoggerFactory createActionLoggerWithCommonLoggingParameters:layoutType:sectionPosition:] */

void FUN_106aff5a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d06b8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = param_3;
  func_0x00010c156360(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0f1860(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0933c0(param_3);
  _objc_release(param_3);
  func_0x00010c0453a0(puVar1,param_2,uVar7,uVar2,uVar3,uVar4,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126d06c8;
  _objc_alloc(PTR_PTR_1126d06c8);
  func_0x00010c0042c0();
  _objc_release(param_5);
  puVar6 = PTR_PTR_1126d06d0;
  _objc_alloc(PTR_PTR_1126d06d0);
  func_0x00010c027380();
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106aff6dc; end: 106aff86b; -[SCLensExplorerCategoriesLoggerFactory createImpressionsLoggerWithCommonLoggingParameters:layoutType:sectionPosition:] */

void FUN_106aff6dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126d06b8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar9 = param_3;
  func_0x00010c156360(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0f1860(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0933c0(param_3);
  _objc_release(param_3);
  func_0x00010c0453a0(puVar1,param_2,uVar8,uVar9,uVar2,uVar3,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
  _objc_release(uVar9);
  puVar4 = PTR_PTR_1126d06c8;
  _objc_alloc(PTR_PTR_1126d06c8);
  func_0x00010c0042c0();
  _objc_release(param_5);
  puVar5 = PTR_PTR_1126d06d8;
  _objc_alloc(PTR_PTR_1126d06d8);
  func_0x00010c0524c0(0x3f99999a);
  puVar6 = PTR_PTR_1126d06e0;
  _objc_alloc(PTR_PTR_1126d06e0);
  uVar9 = *(undefined8 *)(param_1 + 8);
  lVar7 = param_1;
  func_0x00010be37d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0273a0(puVar6,param_2,uVar9,puVar4,puVar5,lVar7,*(undefined8 *)(param_1 + 0x18));
  _objc_release(lVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106aff86c; end: 106affa3b; -[SCLensExplorerCategoriesLoggerFactory createImpressionsLoggerWithCommonLoggingParameters:layoutType:sectionPosition:shortImpressionEventName:longImpressionEventName:impressionTime:] */

void FUN_106aff86c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126d06b8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  uVar9 = param_4;
  func_0x00010c156360(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0f1860(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0933c0(param_4);
  _objc_release(param_4);
  func_0x00010c0453a0(puVar1,param_3,uVar8,uVar9,uVar2,uVar3,*(undefined8 *)(param_2 + 0x20));
  _objc_release(uVar2);
  _objc_release(uVar9);
  puVar4 = PTR_PTR_1126d06c8;
  _objc_alloc(PTR_PTR_1126d06c8);
  func_0x00010c0042c0();
  _objc_release(param_6);
  puVar5 = PTR_PTR_1126d06d8;
  _objc_alloc(PTR_PTR_1126d06d8);
  func_0x00010c0524c0(param_1);
  puVar6 = PTR_PTR_1126d06e0;
  _objc_alloc(PTR_PTR_1126d06e0);
  uVar9 = *(undefined8 *)(param_2 + 8);
  lVar7 = param_2;
  func_0x00010be37d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0273c0(puVar6,param_3,uVar9,puVar4,puVar5,lVar7,*(undefined8 *)(param_2 + 0x18),
                      param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(lVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106affa3c; end: 106affa6f; -[SCLensExplorerCategoriesLoggerFactory createSessionLogger] */

void FUN_106affa3c(void)

{
  _objc_alloc(PTR_PTR_1126d06e8);
  func_0x00010bff8a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106affa70; end: 106affb33; -[SCLensExplorerCategoriesLoggerFactory createPerformanceLogger] */

void FUN_106affa70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c092ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d06f0;
  _objc_alloc(PTR_PTR_1126d06f0);
  puVar4 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c0524e0(puVar3,param_2,puVar4,*(undefined8 *)(param_1 + 0x18));
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d06f8;
  _objc_alloc(PTR_PTR_1126d06f8);
  func_0x00010c034ce0();
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106affb34; end: 106affb6b; -[SCLensExplorerCategoriesLoggerFactory createButtonActionLogger] */

void FUN_106affb34(void)

{
  _objc_alloc(PTR_PTR_1126d0700);
  func_0x00010c0275a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106affb6c; end: 106affbbb; -[SCLensExplorerCategoriesLoggerFactory _impressionPerformanceLoggger] */

void FUN_106affb6c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bf577e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x40);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106affbbc; end: 106affc33; -[SCLensExplorerCategoriesLoggerFactory .cxx_destruct] */

void FUN_106affbbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106affc34; end: 106affd9b; +[SCLensExplorerSessionLoggingBuilder sessionLoggingServicesWithBlizzardServices:lensPerformerServices:grapheneServices:networkConnectivityServices:productMode:] */

void FUN_106affc34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106affd9c;
  puStack_70 = &UNK_110960d80;
  uStack_68 = param_4;
  uStack_60 = param_3;
  uStack_58 = uVar1;
  uStack_50 = param_5;
  uStack_48 = param_7;
  _objc_retain(param_5);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d0698;
  _objc_alloc(PTR_PTR_1126d0698);
  func_0x00010c027680();
  _objc_release(puVar2);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106affd9c; end: 106affedf;  */

void FUN_106affd9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c095b60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126d06b0;
  _objc_alloc(PTR_PTR_1126d06b0);
  func_0x00010c034a60();
  puVar5 = PTR_PTR_1126d06a8;
  _objc_alloc(PTR_PTR_1126d06a8);
  puVar6 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = uVar7;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023d60(puVar5,param_2,puVar4,puVar6,uVar3,uVar2,uVar1,uVar7,uVar9,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106affee0; end: 106afff0f; -[SCLensExplorerCategoriesImpressionLogger initWithLogger:loggingContext:strategy:performanceLogging:performer:] */

void FUN_106affee0(void)

{
  func_0x00010c0273c0();
  return;
}



/* Entry: 106afff10; end: 106b0008b; -[SCLensExplorerCategoriesImpressionLogger initWithLogger:loggingContext:strategy:performanceLogging:performer:shortImpressionEventName:longImpressionEventName:] */

undefined1 *
FUN_106afff10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f4e20;
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
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
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



/* Entry: 106b0008c; end: 106b0011b; -[SCLensExplorerCategoriesImpressionLogger willAppearItemWithLoggingData:] */

void FUN_106b0008c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b0011c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106b0011c; end: 106b0016f;  */

void FUN_106b0011c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c278000(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c22d280(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be54b40(*(long *)(param_1 + 0x20),param_2,uVar1,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b00170; end: 106b001ff; -[SCLensExplorerCategoriesImpressionLogger didHandleInterfactionWithLoggingData:] */

void FUN_106b00170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b00200;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106b00200; end: 106b0023f;  */

void FUN_106b00200(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bfd14c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0a5ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
             PTR_s_logFailedToHandleInteractionForI_1126071c8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106b00240; end: 106b002cf; -[SCLensExplorerCategoriesImpressionLogger didDisappearItemWithLoggingData:] */

void FUN_106b00240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b002d0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106b002d0; end: 106b0032b;  */

void FUN_106b002d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c0b4c00(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    func_0x00010c0a5ec0(*(undefined8 *)(lVar2 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  }
  else {
    func_0x00010be54b40(lVar2,param_2,lVar1,*(undefined8 *)(lVar2 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b0032c; end: 106b005bb; -[SCLensExplorerCategoriesImpressionLogger _logImpressionItem:event:] */

void FUN_106b0032c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  if (param_3 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bfea940(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0b39c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d3c80();
    _objc_release(uVar2);
    lVar4 = param_3;
    func_0x00010c084c40(param_3);
    FUN_106b007e0();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar5 = lVar1;
    func_0x00010c084960(lVar1);
    func_0x00010c0df820(puVar6,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,puVar6,&PTR____CFConstantStringClassReference_110e72518);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar5 = lVar1;
    func_0x00010c088f20(lVar1);
    func_0x00010c0df820(puVar6,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,puVar6,&PTR____CFConstantStringClassReference_110e72498);
    _objc_release(puVar6);
    lVar5 = param_3;
    func_0x00010c11fc00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,lVar5,&PTR____CFConstantStringClassReference_110e723d8);
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010c11fc20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,lVar5,&PTR____CFConstantStringClassReference_110e723f8);
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,lVar5,&PTR____CFConstantStringClassReference_110e72418);
    _objc_release(lVar5);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,puVar6,&PTR____CFConstantStringClassReference_110e72458);
    _objc_release(puVar6);
    lVar4 = param_3;
    func_0x00010bfea920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2810a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,lVar5,&PTR____CFConstantStringClassReference_110e72478);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010bf4ae20(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1d0640(uVar3,param_2,lVar4,&PTR____CFConstantStringClassReference_110e72558);
    _objc_release(lVar4);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar2 = uVar3;
    func_0x00010bf51e00(uVar3);
    func_0x00010c0a5a00(uVar7,param_2,param_4,uVar2);
    _objc_release(param_4);
    _objc_release(uVar2);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106b005bc; end: 106b005c3; -[SCLensExplorerCategoriesImpressionLogger _logFailedHandleInterfactionWithLoggingData:] */

void FUN_106b005bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logFailedToHandleInteractionForI_1126071c8);
  return;
}



/* Entry: 106b005c4; end: 106b005cb; -[SCLensExplorerCategoriesImpressionLogger _logFailedDisappearItemWithLoggingData:] */

void FUN_106b005c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logFailedToHandleDisappearForIte_1126071c0);
  return;
}



/* Entry: 106b005cc; end: 106b00637; -[SCLensExplorerCategoriesImpressionLogger .cxx_destruct] */

void FUN_106b005cc(long param_1)

{
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



/* Entry: 106b00638; end: 106b006e3; -[SCLensExplorerCategoriesImpressionLoggingContext initWithContext:layoutType:sectionPosition:] */

undefined1 *
FUN_106b00638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f4e28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b006e4; end: 106b007af; -[SCLensExplorerCategoriesImpressionLoggingContext loggingContext] */

void FUN_106b006e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b39c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  uVar4 = *(long *)(param_1 + 0x10) - 1;
  if (uVar4 < 3) {
    uVar1 = *(undefined8 *)(&UNK_10dde57c0 + uVar4 * 8);
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e72438);
  _objc_release(puVar3);
  func_0x00010c1d0640(uVar2,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e723b8);
  uVar1 = uVar2;
  func_0x00010bf51e00(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b007b0; end: 106b007df; -[SCLensExplorerCategoriesImpressionLoggingContext .cxx_destruct] */

void FUN_106b007b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b007e0; end: 106b00803;  */

undefined8 FUN_106b007e0(long param_1)

{
  if (param_1 - 1U < 7) {
    return *(undefined8 *)(&UNK_10dde57d8 + (param_1 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 106b00804; end: 106b008a7; -[SCLensExplorerImpressionLoggerStrategy initWithTimeProvider:impressionTime:] */

undefined1 *
FUN_106b00804(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4e30;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = param_1;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106b008a8; end: 106b008ab; -[SCLensExplorerImpressionLoggerStrategy shortImpressionForLoggingData:] */

void FUN_106b008a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be17650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishedImpressionForLoggingDat_112563730);
  return;
}



/* Entry: 106b008ac; end: 106b00977; -[SCLensExplorerImpressionLoggerStrategy longImpressionForLoggingData:] */

void FUN_106b008ac(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_2;
  func_0x00010be17640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010bf5e5e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bfea940(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c08a660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    func_0x00010c26f380(uVar2,param_3,lVar3);
    lVar4 = lVar1;
    if (ABS(param_1) < (double)*(float *)(param_2 + 0x10)) {
      lVar4 = 0;
    }
    _objc_retain(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106b00978; end: 106b00b67; -[SCLensExplorerImpressionLoggerStrategy trackItemWithLoggingData:] */

void FUN_106b00978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x20);
  puVar2 = PTR_PTR_1126d0708;
  _objc_alloc(PTR_PTR_1126d0708);
  uVar3 = param_3;
  func_0x00010c084640(param_3);
  func_0x00010c030600(puVar2,param_2,0,0,0,uVar3,uVar1,0);
  puVar4 = PTR_PTR_1126d0710;
  _objc_alloc(PTR_PTR_1126d0710);
  uVar3 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059180(puVar4,param_2,uVar3);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126d0718;
  _objc_alloc(PTR_PTR_1126d0718);
  uVar3 = param_3;
  func_0x00010c11fc00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c11fc20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c084c40(param_3);
  uVar9 = param_3;
  func_0x00010bf4ae20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d420(puVar5,param_2,puVar4,puVar2,uVar3,uVar6,uVar7,uVar8,uVar9);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar5,puVar4);
  _objc_release(puVar5);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b00b68; end: 106b00e23; -[SCLensExplorerImpressionLoggerStrategy handleInteractionWithLoggingData:] */

bool FUN_106b00b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x20);
  puVar2 = PTR_PTR_1126d0710;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059180(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d0720;
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x00010bfea940(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c093040(puVar6,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010c2b2420(puVar6,param_2,uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfea940(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0df4c0();
    func_0x00010c2b4ae0(puVar6,param_2,(int)lVar7 + 1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar8 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126d0718;
    _objc_alloc();
    lVar5 = lVar4;
    func_0x00010bfea920(lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c11fc00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010c11fc20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010c084c40(param_3);
    uVar13 = param_3;
    func_0x00010bf4ae20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d420(puVar9,param_2,lVar5,puVar8,uVar3,uVar10,uVar11,uVar12,uVar13);
    _objc_release(uVar13);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar3);
    _objc_release(lVar5);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar9,puVar2);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
  }
  _objc_release(lVar4);
  _objc_release(puVar2);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(uVar1);
  _objc_release(param_3);
  return lVar4 != 0;
}



/* Entry: 106b00e24; end: 106b01137; -[SCLensExplorerImpressionLoggerStrategy _finishedImpressionForLoggingData:] */

void FUN_106b00e24(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  double dVar14;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_2 + 0x20);
  puVar2 = PTR_PTR_1126d0710;
  _objc_alloc();
  uVar3 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059180(puVar2,param_3,uVar3);
  _objc_release(uVar3);
  lVar4 = *(long *)(param_2 + 0x18);
  func_0x00010c0e00e0(lVar4,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d0720;
  if (lVar4 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar5 = lVar4;
    func_0x00010bfea940(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c093040(puVar6,param_3,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    uVar3 = param_4;
    func_0x00010c084640(param_4);
    func_0x00010c2b1b60(puVar6,param_3,uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfea940();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c08a660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010c26f380(uVar1,param_3,lVar7);
    dVar14 = 0.0;
    if (0.0 <= param_1) {
      dVar14 = param_1;
    }
    func_0x00010c2b2160(puVar6,param_3,(int)dVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bb880(puVar6,param_3,(int)dVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126d0718;
    _objc_alloc(PTR_PTR_1126d0718);
    lVar5 = lVar4;
    func_0x00010bfea920(lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c11fc00(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_4;
    func_0x00010c11fc20(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_4;
    func_0x00010c084c40(param_4);
    uVar12 = param_4;
    func_0x00010bf4ae20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d420(puVar13,param_3,lVar5,puVar8,uVar3,uVar9,uVar10,uVar11,uVar12);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(lVar5);
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18),param_3,puVar13,puVar2);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(puVar6);
  }
  _objc_release(lVar4);
  _objc_release(puVar2);
  _os_unfair_lock_unlock(param_2 + 0x20);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106b01138; end: 106b01167; -[SCLensExplorerImpressionLoggerStrategy .cxx_destruct] */

void FUN_106b01138(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b01168; end: 106b0120b; -[SCLensExplorerFeedLogger initWithPerformer:blizzardLogger:] */

undefined1 *
FUN_106b01168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4e38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b0120c; end: 106b0130b; -[SCLensExplorerFeedLogger logEvent:data:] */

void FUN_106b0120c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b0130c; end: 106b01373;  */

void FUN_106b0130c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be8caa0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52bc0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b01374; end: 106b0149f; -[SCLensExplorerFeedLogger _logEvent:data:] */

void FUN_106b01374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72578);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72598);
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e725b8);
      if ((int)uVar1 == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e58e78);
        if ((int)uVar1 == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e725f8);
          if ((int)uVar1 == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72618);
            if ((int)uVar1 == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e725d8);
              if ((int)uVar1 != 0) {
                func_0x00010be50e80(param_1,param_2,param_4);
              }
            }
            else {
              func_0x00010be531e0(param_1,param_2,param_4);
            }
          }
          else {
            func_0x00010be53200(param_1,param_2,param_4);
          }
        }
        else {
          func_0x00010be53220(param_1,param_2,param_4);
        }
      }
      else {
        func_0x00010be531c0(param_1,param_2,param_4);
      }
    }
    else {
      func_0x00010be56dc0(param_1,param_2,param_4);
    }
  }
  else {
    func_0x00010be56d60(param_1,param_2,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b014a0; end: 106b01583; -[SCLensExplorerFeedLogger _logFeedItemCriticalActionWithData:] */

void FUN_106b014a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0728;
  _objc_alloc_init(PTR_PTR_1126d0728);
  func_0x00010be15c60(param_1,param_2,puVar1,param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72338);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72338);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    func_0x00010c161620(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b01584; end: 106b01607; -[SCLensExplorerFeedLogger _logFeedItemImpressionWithData:] */

void FUN_106b01584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0730;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be15c60(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b01608; end: 106b016e7; -[SCLensExplorerFeedLogger _logFeedItemMRCLongImpressionWithData:] */

void FUN_106b01608(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0738;
  _objc_alloc_init(PTR_PTR_1126d0738);
  func_0x00010be15c60(param_1,param_2,puVar1,param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72498);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72498);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1aaea0(puVar1);
    _objc_release(lVar2);
  }
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b016e8; end: 106b017c7; -[SCLensExplorerFeedLogger _logFeedItemLongImpressionWithData:] */

void FUN_106b016e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0740;
  _objc_alloc_init(PTR_PTR_1126d0740);
  func_0x00010be15c60(param_1,param_2,puVar1,param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72498);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72498);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1aaea0(puVar1);
    _objc_release(lVar2);
  }
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b017c8; end: 106b018ab; -[SCLensExplorerFeedLogger _logPageOpenWithData:] */

void FUN_106b017c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0748;
  _objc_alloc_init(PTR_PTR_1126d0748);
  func_0x00010be15da0(param_1,param_2,puVar1,param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e724d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e724d8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    func_0x00010c1769e0(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b018ac; end: 106b0198b; -[SCLensExplorerFeedLogger _logPageViewWithData:] */

void FUN_106b018ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0750;
  _objc_alloc_init(PTR_PTR_1126d0750);
  func_0x00010be15da0(param_1,param_2,puVar1,param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e724b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e724b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c215780(puVar1);
    _objc_release(lVar2);
  }
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b0198c; end: 106b01ab7; -[SCLensExplorerFeedLogger _logButtonActionWithData:] */

void FUN_106b0198c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0758;
  _objc_alloc_init(PTR_PTR_1126d0758);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e724f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9da0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72478);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72538);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72538);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    func_0x00010c1bb840(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b01ab8; end: 106b01c0b; -[SCLensExplorerFeedLogger _fillPageBaseFieldsForEvent:data:] */

void FUN_106b01ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d84e0(param_3,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e724f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9da0(param_3,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72378);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72378);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    func_0x00010c1d8800(param_3,param_2,lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72538);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72538);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    func_0x00010c1bb840(param_3,param_2,lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b01c0c; end: 106b01fdf; -[SCLensExplorerFeedLogger _fillFeedItemBaseFieldsForEvent:data:] */

void FUN_106b01c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72478);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(param_3,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e723d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e74c0(param_3,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e723f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e74e0(param_3,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72398);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9520(param_3,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e723b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e723b8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b4ca0();
    func_0x00010c1f95a0(param_3,param_2,lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72518);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b4ca0();
  _objc_release(lVar1);
  if (lVar2 != 0x7fffffffffffffff) {
    func_0x00010c1b61a0(param_3,param_2,lVar2);
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e724f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9da0(param_3,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(param_3,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d84e0(param_3,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72438);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72438);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    func_0x00010c1b6080(param_3,param_2,lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72458);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72458);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    func_0x00010c1b6340(param_3,param_2,lVar2);
    if (lVar2 == 3) {
      func_0x00010c1b5f20(param_3,param_2,0);
    }
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72378);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72378);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    func_0x00010c1d8800(param_3,param_2,lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72538);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72538);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    func_0x00010c1bb840(param_3,param_2,lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e72558);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1819c0(param_3,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b01fe0; end: 106b01fe7; -[SCLensExplorerFeedLogger blizzardLogger] */

void FUN_106b01fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 106b01fe8; end: 106b02087; -[SCLensExplorerFeedLogger _removeNullsFromDictionary:] */

void FUN_106b01fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d3c80();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106b02088;
  puStack_30 = &UNK_1108c0a90;
  uStack_28 = uVar1;
  _objc_retain();
  func_0x00010bf97ce0(param_3,param_2,&puStack_48);
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf51e00(uVar1);
  _objc_release(uStack_28);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106b02088; end: 106b02103;  */

void FUN_106b02088(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  if ((uVar2 & 1) != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b02104; end: 106b02133; -[SCLensExplorerFeedLogger .cxx_destruct] */

void FUN_106b02104(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b02134; end: 106b0221b; -[SCLensExplorerCategoriesPageLogger initWithLogger:loggingContext:timeProvider:isLensPickerMode:] */

undefined1 *
FUN_106b02134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f4e40;
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
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    func_0x00010c1d89a0(0,puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b0221c; end: 106b022ef; -[SCLensExplorerCategoriesPageLogger logPageOpenEvent] */

void FUN_106b0221c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c1d89a0(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0b39c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = 5;
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = 0;
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110e724d8);
  _objc_release(puVar3);
  func_0x00010c0a5a00(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110e72578,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b022f0; end: 106b023f3; -[SCLensExplorerCategoriesPageLogger logPageClosedEvent] */

void FUN_106b022f0(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  func_0x00010c0f22a0();
  if (0.0 < param_1) {
    func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x18));
    dVar4 = param_1;
    func_0x00010c0f22a0(param_2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0b39c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72020(puVar2,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 - dVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_3,puVar3,&PTR____CFConstantStringClassReference_110e724b8);
    _objc_release(puVar3);
    func_0x00010c0a5a00(*(undefined8 *)(param_2 + 8),param_3,
                        &PTR____CFConstantStringClassReference_110e72598,puVar2);
    func_0x00010c1d89a0(0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106b023f4; end: 106b023fb; -[SCLensExplorerCategoriesPageLogger pageViewTimeInterval] */

undefined8 FUN_106b023f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106b023fc; end: 106b02403; -[SCLensExplorerCategoriesPageLogger setPageViewTimeInterval:] */

void FUN_106b023fc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 106b02404; end: 106b0243f; -[SCLensExplorerCategoriesPageLogger .cxx_destruct] */

void FUN_106b02404(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b02440; end: 106b02597; -[SCLensExplorerPerformanceLogger initWithPerformer:graphene:timeTracker:logger:networkConnectivityMonitor:productMode:] */

undefined1 *
FUN_106b02440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f4e48;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b02598; end: 106b025bf; -[SCLensExplorerPerformanceLogger timeTracker] */

void FUN_106b02598(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b025c0; end: 106b02673; -[SCLensExplorerPerformanceLogger logLensExplorerAppearenceWithEntryPoint:viewType:contentSource:] */

void FUN_106b025c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010bfc4440(*(undefined8 *)(param_2 + 0x10));
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106b02674;
  puStack_70 = &UNK_1108714c0;
  lStack_68 = param_2;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_1;
  uStack_48 = param_6;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_88);
  _objc_release(uStack_60);
  _objc_release(param_4);
  return;
}



/* Entry: 106b02674; end: 106b0295b;  */

void FUN_106b02674(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bdd9b80(uVar1,param_3,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30))
  ;
  if (((int)uVar1 != 0) &&
     (func_0x00010c093380(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10),param_3,
                          *(undefined8 *)(param_2 + 0x28)), 0.0 < param_1)) {
    dVar9 = *(double *)(param_2 + 0x38);
    puVar2 = PTR_PTR_1126d0760;
    func_0x00010bf9cde0(PTR_PTR_1126d0760);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf48f60();
    _objc_release(uVar3);
    if (*(long *)(param_2 + 0x40) == 1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110de3db8;
    }
    else {
      ppuVar4 = (undefined **)PTR_PTR_1126ba4e8;
      func_0x00010c272260(PTR_PTR_1126ba4e8,param_3,uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR_PTR_1126b2930;
    func_0x00010bf5e640(PTR_PTR_1126b2930);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfd3880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar7 = *(long *)(*(long *)(param_2 + 0x20) + 0x30) - 1;
    if (uVar7 < 0xb) {
      uVar1 = *(undefined8 *)(&UNK_10dde5810 + uVar7 * 8);
    }
    else {
      uVar1 = 0;
    }
    puVar5 = puVar2;
    func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dd7ff8,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110e722b8,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110db16f8,
                        *(undefined8 *)(param_2 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar3 = uVar1;
    func_0x00010baff720(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110e722d8,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar3);
    func_0x00010bfec2a0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18),param_3,puVar2);
    lVar8 = (long)(double)(long)((dVar9 - param_1) * 1000.0);
    func_0x00010befbfe0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18),param_3,puVar2,lVar8);
    puVar5 = PTR_PTR_1126d0768;
    _objc_opt_new(PTR_PTR_1126d0768);
    func_0x00010c18cba0();
    func_0x00010c1d84a0(puVar5,param_3,lVar8);
    func_0x00010c1beae0(puVar5,param_3,*(undefined8 *)(param_2 + 0x28));
    func_0x00010c1bb840(puVar5,param_3,uVar1);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010be6fa60(uVar1,param_3,*(undefined8 *)(param_2 + 0x30));
    func_0x00010c1d89e0(puVar5,param_3,uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar1);
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38),param_3,
                        *(undefined8 *)(param_2 + 0x28));
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106b0295c; end: 106b029cb; -[SCLensExplorerPerformanceLogger logPreviewLoadingWithType:] */

void FUN_106b0295c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bfc4440(*(undefined8 *)(param_2 + 0x10));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b029cc;
  puStack_40 = &UNK_110858dc0;
  lStack_38 = param_2;
  uStack_30 = param_4;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_58);
  return;
}


