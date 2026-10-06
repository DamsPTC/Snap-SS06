/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086334b0; end: 1086334db;  */

long FUN_1086334b0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1086334dc; end: 10863350f;  */

void FUN_1086334dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108633510; end: 10863360b;  */

void FUN_108633510(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar3 = PTR_PTR_1126dab08;
  _objc_alloc(PTR_PTR_1126dab08);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar4 = param_1 + 2;
  func_0x000107c28138(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1 + 6;
  func_0x000107c28138(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1 + 10;
  FUN_10863360c(puVar6);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  FUN_10863360c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0072a0(puVar3,param_2,uVar1,uVar2,puVar4,puVar5,puVar6,param_1);
  func_0x0001086336cc();
  func_0x0001086336c4();
  _objc_release(puVar5);
  func_0x0001086336bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10863360c; end: 1086336bb;  */

void FUN_10863360c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_1[1] - *param_1 >> 3)
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 8) {
    lVar3 = lVar4;
    func_0x00010086dbe4(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar3);
    func_0x0001086336c4();
  }
  func_0x00010bf51e00(puVar2);
  func_0x0001086336bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1086336bc; end: 1086336d7;  */

void FUN_1086336bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086336d8; end: 1086338b7;  */

void FUN_1086336d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126dab10;
  _objc_alloc(PTR_PTR_1126dab10);
  lVar2 = param_1;
  func_0x0001006ab3d4(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) / 0x28);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x20);
  for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != lVar6; lVar5 = lVar5 + 0x28) {
    lVar4 = lVar5;
    FUN_1086233f4(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,lVar4);
    FUN_1086338b8();
  }
  func_0x00010bf51e00(puVar3);
  func_0x0001086338c0();
  lVar5 = param_1 + 0x30;
  FUN_108633510(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x88;
  FUN_108622194(lVar6);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x4bc) == '\x01') {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 0x4b8)
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  param_1 = param_1 + 0x4c0;
  func_0x000107c28138(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0598e0(puVar1,param_2,lVar2,puVar3,lVar5,lVar6,puVar7,param_1);
  func_0x0001086338c8();
  _objc_release(puVar7);
  FUN_1086338b8();
  func_0x0001086338c0();
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1086338b8; end: 1086338d3;  */

void FUN_1086338b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086338d4; end: 10863396b;  */

void FUN_1086338d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dab18;
  _objc_alloc(PTR_PTR_1126dab18);
  lVar2 = param_1;
  func_0x0001006ab464(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x5d8;
  FUN_10863c8b0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b480(puVar1,param_2,lVar2,param_1);
  FUN_10863396c();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10863396c; end: 108633977;  */

void FUN_10863396c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108633978; end: 1086339e7;  */

void FUN_108633978(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dab20;
  _objc_alloc(PTR_PTR_1126dab20);
  lVar2 = param_1;
  FUN_108633a64(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b9a0(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20));
  FUN_1086339e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1086339e8; end: 1086339f3;  */

void FUN_1086339e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086339f4; end: 108633a63;  */

void FUN_1086339f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010bf6eec0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10861c36c(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000107c27a04(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 108633a64; end: 108633ac3;  */

void FUN_108633a64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c29a0;
  _objc_alloc(PTR_PTR_1126c29a0);
  func_0x000107c285c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00bbe0(puVar1,param_2,param_1);
  FUN_108633ac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108633ac4; end: 108633acf;  */

void FUN_108633ac4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108633ad0; end: 108633b87;  */

void FUN_108633ad0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a5e710;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_108633b88);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_108633dd0(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108633b88; end: 108633c87;  */

void FUN_108633b88(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a5e750;
  puVar4[3] = &PTR_DAT_110a5e7c8;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a5e7a0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108633dd0(&uStack_50);
  return;
}



/* Entry: 108633c88; end: 108633c8b;  */

void FUN_108633c88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5e750;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108633c8c; end: 108633c9f;  */

void FUN_108633c8c(void)

{
  FUN_108633dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108633ca0; end: 108633cab;  */

long FUN_108633ca0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e710;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108633cac; end: 108633ceb;  */

void FUN_108633cac(void)

{
  FUN_108633dfc();
  return;
}



/* Entry: 108633cec; end: 108633d2b;  */

void FUN_108633cec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e2fc0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108633d2c; end: 108633dbf;  */

long FUN_108633d2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e710;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108633dc0; end: 108633dcf;  */

void FUN_108633dc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5e750;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108633dd0; end: 108633dfb;  */

long FUN_108633dd0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108633dfc; end: 108633e07;  */

long FUN_108633dfc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e710;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108633e08; end: 108633f23;  */

void FUN_108633e08(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126dab30;
  _objc_alloc(PTR_PTR_1126dab30);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x28);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  lVar6 = *(long *)PTR__kCFNull_11034abd8;
  for (lVar5 = *param_1; lVar5 != lVar1; lVar5 = lVar5 + 0x28) {
    if ((*(byte *)(lVar5 + 0x20) & 1) == 0) {
      _objc_retain(lVar6);
      lVar4 = lVar6;
    }
    else {
      lVar4 = lVar5;
      FUN_108635060(lVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010befa120(puVar3,param_2,lVar4);
    _objc_release(lVar4);
  }
  func_0x00010bf51e00(puVar3);
  FUN_108633f24();
  func_0x00010c062780(puVar2,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108633f24; end: 108633f33;  */

void FUN_108633f24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108633f34; end: 10863403b;  */

void FUN_108633f34(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar5 = PTR_PTR_1126dab38;
  _objc_alloc(PTR_PTR_1126dab38);
  lVar6 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  iVar3 = *(int *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 0x1c))
    ;
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  uVar2 = *(undefined1 *)(param_1 + 0x25);
  iVar4 = *(int *)(param_1 + 0x28);
  param_1 = param_1 + 0x30;
  FUN_10861b344();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00bb60(puVar5,param_2,lVar6,(long)iVar3,puVar7,uVar1,uVar2,(long)iVar4,param_1);
  func_0x00010863404c();
  func_0x00010863403c();
  func_0x000108634044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10863403c; end: 108634057;  */

void FUN_10863403c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108634058; end: 10863410f;  */

void FUN_108634058(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a5e838;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_108634110);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_108634408(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108634110; end: 108634207;  */

void FUN_108634110(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a5e878;
  puVar4[3] = &PTR_DAT_110a5e8f0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x000108634440();
  puVar4[3] = &PTR_FUN_110a5e8c8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108634408(&uStack_50);
  return;
}



/* Entry: 108634208; end: 10863420b;  */

void FUN_108634208(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5e878;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10863420c; end: 10863421f;  */

void FUN_10863420c(void)

{
  FUN_1086343f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108634220; end: 10863422b;  */

long FUN_108634220(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e838;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10863422c; end: 10863426b;  */

void FUN_10863422c(void)

{
  FUN_108634434();
  return;
}



/* Entry: 10863426c; end: 108634363;  */

void FUN_10863426c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2[1];
  for (lVar6 = *param_2; lVar6 != lVar1; lVar6 = lVar6 + 0x20) {
    lVar4 = lVar6;
    FUN_108634448(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(lVar4);
  }
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  func_0x00010c0e2fc0(uVar5);
  func_0x000108634440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 108634364; end: 1086343f7;  */

long FUN_108634364(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e838;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1086343f8; end: 108634407;  */

void FUN_1086343f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5e878;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108634408; end: 108634433;  */

long FUN_108634408(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108634434; end: 108634447;  */

long FUN_108634434(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e838;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108634448; end: 1086344b3;  */

void FUN_108634448(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dab48;
  _objc_alloc(PTR_PTR_1126dab48);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0053c0(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x18));
  FUN_1086344b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1086344b4; end: 1086344bf;  */

void FUN_1086344b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086344c0; end: 108634517;  */

void FUN_1086344c0(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x00010bd471f8(&UNK_10f4ad7a3,&PTR____CFConstantStringClassReference_110ea5478);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108634504);
  (*pcVar1)();
}



/* Entry: 108634518; end: 1086345cf;  */

void FUN_108634518(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a5e960;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_1086345d0);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_108634848(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1086345d0; end: 1086346cf;  */

void FUN_1086345d0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a5e9a0;
  puVar4[3] = &PTR_DAT_110a5ea20;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a5e9f0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108634848(&uStack_50);
  return;
}



/* Entry: 1086346d0; end: 1086346d3;  */

void FUN_1086346d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5e9a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086346d4; end: 1086346e7;  */

void FUN_1086346d4(void)

{
  FUN_108634838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086346e8; end: 1086346f3;  */

long FUN_1086346e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e960;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1086346f4; end: 108634733;  */

void FUN_1086346f4(void)

{
  func_0x000108634880();
  return;
}



/* Entry: 108634734; end: 1086347a3;  */

void FUN_108634734(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e2fc0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1086347a4; end: 108634837;  */

long FUN_1086347a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e960;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108634838; end: 108634847;  */

void FUN_108634838(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5e9a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108634848; end: 108634873;  */

long FUN_108634848(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108634874; end: 10863488b;  */

void FUN_108634874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10863488c; end: 1086348ef;  */

undefined1  [16] FUN_10863488c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0cb5a0(param_1);
  uVar2 = param_1;
  func_0x00010bf864a0(param_1);
  _objc_release(param_1);
  auVar3._8_8_ = uVar2 & 0xffffffff;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1086348f0; end: 10863495f;  */

void FUN_1086348f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c0de940();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_38);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108634960; end: 1086349bf;  */

void FUN_108634960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba340;
  _objc_alloc(PTR_PTR_1126ba340);
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0(puVar1,param_2,param_1);
  FUN_1086349c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1086349c0; end: 1086349cb;  */

void FUN_1086349c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086349cc; end: 108634be3;  */

void FUN_1086349cc(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 in_x7;
  undefined1 auStack_210 [360];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28248(auStack_88);
  uVar2 = param_2;
  func_0x00010c0ccde0();
  uVar3 = param_2;
  func_0x00010c0ccdc0();
  uVar4 = param_2;
  func_0x00010c120ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_108634be4();
  uVar6 = param_2;
  func_0x00010c120ca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000108634c04();
  uVar8 = param_2;
  func_0x00010bf0d920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c285bc(auStack_a8);
  uVar9 = param_2;
  func_0x00010c291080();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x000107c28134();
  func_0x00010c15c1c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108634c24(auStack_210);
  func_0x00010529669c(param_1,auStack_88,uVar2,uVar3,uVar5 & 0xffffffffff,uVar7 & 0xffffffffff,
                      auStack_a8,in_x7,uVar10,param_3 & 0xff,auStack_210);
  func_0x000104bee6e8(auStack_210);
  _objc_release(param_2);
  _objc_release(uVar9);
  func_0x000107c279dc(auStack_a8);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  func_0x000107c279c4(auStack_88);
  _objc_release(uVar1);
  FUN_108634ebc();
  return;
}



/* Entry: 108634be4; end: 108634c23;  */

ulong FUN_108634be4(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_108634e4c();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 108634c24; end: 108634c9b;  */

void FUN_108634c24(undefined1 *param_1,long param_2)

{
  undefined1 auStack_190 [352];
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x160] = 0;
  }
  else {
    FUN_108638bec(auStack_190,param_2);
    func_0x000105296720(param_1,auStack_190);
    func_0x000104bee708(auStack_190);
  }
  FUN_108634ebc();
  return;
}



/* Entry: 108634c9c; end: 108634e4b;  */

void FUN_108634c9c(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar3 = PTR_PTR_1126da7b8;
  _objc_alloc(PTR_PTR_1126da7b8);
  lVar4 = param_1;
  func_0x0001006d1308(param_1);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 0x28))
    ;
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  if (*(char *)(param_1 + 0x34) == '\x01') {
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 0x30))
    ;
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  lVar5 = param_1 + 0x38;
  func_0x0001006a8018(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x58;
  func_0x000107c28138();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x1c8) == '\x01') {
    param_1 = param_1 + 0x68;
    FUN_108638dc4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  func_0x00010c002ca0(puVar3,param_2,lVar4,(long)iVar1,(long)iVar2,puVar7,puVar8,lVar5,lVar6,param_1
                     );
  func_0x000108634ec4();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x000108634ebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108634e4c; end: 108634e83;  */

undefined8 FUN_108634e4c(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c067fc0(param_1);
  FUN_108634ebc();
  return param_1;
}



/* Entry: 108634e84; end: 108634ebb;  */

undefined8 FUN_108634e84(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c067fc0(param_1);
  FUN_108634ebc();
  return param_1;
}



/* Entry: 108634ebc; end: 108634ecf;  */

void FUN_108634ebc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108634ed0; end: 108634f7f;  */

void FUN_108634ed0(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  
  puVar3 = PTR_PTR_1126dab50;
  _objc_alloc(PTR_PTR_1126dab50);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  piVar4 = param_1 + 2;
  func_0x000107c28138(piVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 6;
  FUN_108634f90(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037b20(puVar3,param_2,(long)iVar1,iVar2,piVar4,param_1);
  func_0x000108634f88();
  func_0x000108634f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108634f80; end: 108634f8f;  */

void FUN_108634f80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108634f90; end: 108635043;  */

void FUN_108634f90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dab58;
  _objc_alloc(PTR_PTR_1126dab58);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    lVar2 = param_1;
    FUN_10861968c(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = 0;
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    param_1 = param_1 + 0x28;
    FUN_108633e08(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  func_0x00010bff31e0(puVar1,param_2,lVar2,param_1);
  func_0x000108635054();
  func_0x000108635044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108635044; end: 10863505f;  */

void FUN_108635044(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108635060; end: 1086350d3;  */

void FUN_108635060(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dab60;
  _objc_alloc(PTR_PTR_1126dab60);
  lVar2 = param_1;
  func_0x000107c285c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0627c0(puVar1,param_2,lVar2,*(undefined1 *)(param_1 + 0x18));
  FUN_1086350d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1086350d4; end: 1086350db;  */

void FUN_1086350d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086350dc; end: 10863513f;  */

ulong FUN_1086350dc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c25bde0(param_1);
  uVar2 = param_1;
  func_0x00010c0cbba0(param_1);
  _objc_release(param_1);
  return uVar1 & 0xffffffff | uVar2 << 0x20;
}



/* Entry: 108635140; end: 10863526f;  */

void FUN_108635140(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126dab70;
  _objc_alloc(PTR_PTR_1126dab70);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x000107c27f28(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x30;
  FUN_108635430(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x80;
  func_0x0001006a8a34(lVar5);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x90;
  func_0x00010088f8a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018de0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,param_1);
  FUN_108635270();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108635270; end: 10863527b;  */

void FUN_108635270(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10863527c; end: 10863540f;  */

void FUN_10863527c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  func_0x00010c275280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_78);
  uVar1 = param_2;
  func_0x00010c276960();
  uVar2 = param_2;
  func_0x00010c26e3a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_90);
  uVar3 = param_2;
  func_0x00010c06fd60();
  uVar4 = param_2;
  func_0x00010bf158a0();
  uVar5 = param_2;
  func_0x00010c076ae0();
  func_0x00010bf96980();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  FUN_108635410();
  param_1[1] = uStack_70;
  *param_1 = uStack_78;
  param_1[2] = uStack_68;
  uStack_70 = 0;
  uStack_68 = 0;
  *(int *)(param_1 + 3) = (int)uVar1;
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[6] = uStack_80;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  *(char *)(param_1 + 7) = (char)uVar3;
  *(int *)((long)param_1 + 0x3c) = (int)uVar4;
  *(char *)(param_1 + 8) = (char)uVar5;
  *(ulong *)((long)param_1 + 0x44) = uVar6 & 0xffffffffff;
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
  func_0x000108635578();
  func_0x000108635570();
  return;
}



/* Entry: 108635410; end: 10863542f;  */

ulong FUN_108635410(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_108635538();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 108635430; end: 108635537;  */

void FUN_108635430(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  puVar5 = PTR_PTR_1126dab78;
  _objc_alloc(PTR_PTR_1126dab78);
  lVar6 = param_1;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  lVar7 = param_1 + 0x20;
  func_0x000107c27f28(lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined1 *)(param_1 + 0x38);
  iVar4 = *(int *)(param_1 + 0x3c);
  uVar3 = *(undefined1 *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 0x44))
    ;
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  func_0x00010c054460(puVar5,param_2,lVar6,uVar1,lVar7,uVar2,(long)iVar4,uVar3,puVar8);
  func_0x000108635580();
  func_0x000108635578();
  func_0x000108635570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108635538; end: 10863556f;  */

undefined8 FUN_108635538(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c067fc0(param_1);
  FUN_108635570();
  return param_1;
}



/* Entry: 108635570; end: 10863558b;  */

void FUN_108635570(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10863558c; end: 108635603;  */

void FUN_10863558c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dab80;
  _objc_alloc(PTR_PTR_1126dab80);
  lVar2 = param_1;
  func_0x0001006a7df8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044680(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x20),
                      *(undefined1 *)(param_1 + 0x24));
  FUN_108635604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108635604; end: 10863560b;  */

void FUN_108635604(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10863560c; end: 1086356c3;  */

void FUN_10863560c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a5ea98;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_1086356c4);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_108635a00(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1086356c4; end: 1086357bb;  */

void FUN_1086356c4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a5ead8;
  puVar4[3] = &PTR_DAT_110a5eb58;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x000108635a38();
  puVar4[3] = &PTR_FUN_110a5eb28;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108635a00(&uStack_50);
  return;
}



/* Entry: 1086357bc; end: 1086357bf;  */

void FUN_1086357bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5ead8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086357c0; end: 1086357d3;  */

void FUN_1086357c0(void)

{
  FUN_1086359f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086357d4; end: 1086357df;  */

long FUN_1086357d4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5ea98;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1086357e0; end: 10863581f;  */

void FUN_1086357e0(void)

{
  FUN_108635a2c();
  return;
}



/* Entry: 108635820; end: 10863591b;  */

void FUN_108635820(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2[1];
  for (lVar6 = *param_2; lVar6 != lVar1; lVar6 = lVar6 + 0x448) {
    lVar4 = lVar6;
    FUN_10862aea0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(lVar4);
  }
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  func_0x00010c0e6c80(uVar5);
  func_0x000108635a38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 10863591c; end: 10863595b;  */

void FUN_10863591c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e3f00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10863595c; end: 1086359ef;  */

long FUN_10863595c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5ea98;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1086359f0; end: 1086359ff;  */

void FUN_1086359f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5ead8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108635a00; end: 108635a2b;  */

long FUN_108635a00(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108635a2c; end: 108635a3f;  */

long FUN_108635a2c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5ea98;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108635a40; end: 108635ac3;  */

void FUN_108635a40(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dab88;
  _objc_alloc(PTR_PTR_1126dab88);
  iVar1 = *param_1;
  if ((char)param_1[0x8c] == '\x01') {
    param_1 = param_1 + 2;
    FUN_108635ad0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = (int *)0x0;
  }
  func_0x00010c04c200(puVar2,param_2,(long)iVar1,param_1);
  FUN_108635ac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108635ac4; end: 108635acf;  */

void FUN_108635ac4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108635ad0; end: 108635dfb;  */

void FUN_108635ad0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar5 = PTR_PTR_1126dab90;
  _objc_alloc();
  lVar6 = param_1;
  func_0x000107c28044();
  _objc_retainAutoreleasedReturnValue();
  iVar4 = *(int *)(param_1 + 0x18);
  lVar7 = param_1 + 0x20;
  func_0x0001006abd0c();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x40;
  func_0x0001006ae34c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + 0x60;
  func_0x0001006ae380();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0x78;
  func_0x0001006a7d84();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  lVar11 = param_1 + 0xa0;
  func_0x0001006a7d84();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined1 *)(param_1 + 0xb8);
  param_1 = param_1 + 200;
  func_0x0001006a7df8();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c285c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001006afaa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001006b0320();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001006afad4();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001006afb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001006afb2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001006b0388();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002c20(puVar5,param_2,lVar6,(long)iVar4,lVar7,lVar8,lVar9,lVar10,uVar1,uVar2,lVar11,
                      uVar3);
  func_0x000108635e10();
  func_0x000108635e38();
  func_0x000108635e20();
  func_0x000108635e18();
  func_0x000108635e30();
  func_0x000108635e50();
  func_0x000108635dfc();
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  func_0x000108635e28();
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108635dfc; end: 108635e5b;  */

void FUN_108635dfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108635e5c; end: 108635e6f;  */

void FUN_108635e5c(void)

{
  FUN_1086360f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108635e70; end: 108635e7b;  */

long FUN_108635e70(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5ebd0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108635e7c; end: 108635ebb;  */

void FUN_108635e7c(void)

{
  func_0x000108636124();
  return;
}


