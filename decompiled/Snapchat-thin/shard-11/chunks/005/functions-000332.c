/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108635ebc; end: 108635f63;  */

undefined8 FUN_108635ebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7d84(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28044(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fa080(uVar2);
  func_0x000107c31b2c();
  func_0x000107c31b28();
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 108635f64; end: 108635fdf;  */

undefined8 FUN_108635f64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7d84(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cce0(uVar2);
  func_0x000108636104();
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 108635fe0; end: 10863605f;  */

undefined8 FUN_108635fe0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7d84(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1363a0(uVar2);
  func_0x000108636104();
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 108636060; end: 1086360f3;  */

long FUN_108636060(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5ebd0;
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



/* Entry: 1086360f4; end: 10863612f;  */

void FUN_1086360f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5ec10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108636130; end: 1086361c3;  */

void FUN_108636130(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dab98;
  _objc_alloc(PTR_PTR_1126dab98);
  lVar2 = param_1;
  FUN_1086362d0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x30;
  func_0x000107c28138(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03cea0(puVar1,param_2,lVar2,lVar3,*(undefined1 *)(param_1 + 0x40));
  func_0x0001086361cc();
  func_0x0001086361c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1086361c4; end: 1086361d3;  */

void FUN_1086361c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086361d4; end: 1086362cf;  */

void FUN_1086361d4(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0682a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28134();
  func_0x00010bf8e2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(&uStack_60);
  *param_1 = uVar1;
  param_1[1] = param_3 & 0xff;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (cStack_48 == '\x01') {
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
    param_1[4] = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  func_0x000107c279a4(&uStack_60);
  _objc_release(param_2);
  func_0x000108636370();
  func_0x000108636368();
  return;
}



/* Entry: 1086362d0; end: 108636367;  */

void FUN_1086362d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b6070;
  _objc_alloc(PTR_PTR_1126b6070);
  lVar2 = param_1;
  func_0x000107c28138(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  func_0x0001006a7df8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01e5e0(puVar1,param_2,lVar2,param_1);
  func_0x000108636370();
  func_0x000108636368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108636368; end: 108636393;  */

void FUN_108636368(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108636394; end: 108636533;  */

void FUN_108636394(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_PTR_1126daba0;
  _objc_alloc(PTR_PTR_1126daba0);
  puVar4 = param_1 + 4;
  uVar9 = *param_1;
  puVar3 = param_1 + 1;
  func_0x000107c27f28(puVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1086362d0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1 + 10;
  func_0x000107c28044(puVar5);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = *(int *)(param_1 + 0xd);
  puVar6 = param_1 + 0xe;
  FUN_108634c9c(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1 + 0x48;
  func_0x000107c28138();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1 + 0x4a;
  func_0x000107c28138();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x4c;
  func_0x00010063676c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03cee0(puVar2,param_2,uVar9,puVar3,puVar4,puVar5,(long)iVar1,puVar6,puVar7,puVar8,
                      param_1);
  FUN_108636610();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108636534; end: 10863660f;  */

undefined8 *
FUN_108636534(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined2 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[3] = param_3[2];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uVar2 = param_4[1];
  uVar1 = *param_4;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(char *)(param_4 + 5) == '\x01') {
    uVar2 = param_4[3];
    uVar1 = param_4[2];
    param_1[8] = param_4[4];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[2] = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = *param_5;
  param_1[0xb] = param_5[1];
  param_1[10] = uVar1;
  param_1[0xc] = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  *(undefined4 *)(param_1 + 0xd) = param_6;
  func_0x00010528cf6c(param_1 + 0xe,param_7);
  param_1[0x48] = param_9;
  param_1[0x49] = param_10;
  param_1[0x4a] = param_11;
  param_1[0x4b] = param_12;
  *(undefined2 *)(param_1 + 0x4c) = param_13;
  return param_1;
}



/* Entry: 108636610; end: 10863661b;  */

void FUN_108636610(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10863661c; end: 10863693b;  */

void FUN_10863661c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  long *plVar16;
  
  puVar7 = PTR_PTR_1126daba8;
  _objc_alloc();
  lVar8 = param_1;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + 0x18;
  func_0x0001006a7d84();
  _objc_retainAutoreleasedReturnValue();
  iVar4 = *(int *)(param_1 + 0x30);
  lVar10 = param_1 + 0x38;
  FUN_108622754();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + 0x58;
  func_0x0001006d1308();
  _objc_retainAutoreleasedReturnValue();
  iVar5 = *(int *)(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,
                      *(undefined8 *)(param_1 + 0xa8));
  _objc_retainAutoreleasedReturnValue();
  plVar16 = (long *)(param_1 + 0xa0);
  while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
    lVar13 = (long)(plVar16 + 3);
    func_0x00010086dbe4(lVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = (ulong)*(uint *)(plVar16 + 2);
    FUN_108637110(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar12,param_2,lVar13,uVar14);
    func_0x000108637154();
    func_0x00010863714c();
  }
  func_0x00010bf51e00();
  func_0x000108637164();
  iVar6 = *(int *)(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    uVar14 = (ulong)*(uint *)(param_1 + 0xbc);
    FUN_108637110();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar14 = 0;
  }
  if (*(char *)(param_1 + 200) == '\x01') {
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 0xc4))
    ;
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar15 = (undefined *)0x0;
  }
  uVar3 = *(undefined1 *)(param_1 + 0xcc);
  param_1 = param_1 + 0xd8;
  FUN_108623b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28138();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2d00(puVar7,param_2,lVar8,lVar9,(long)iVar4,lVar10,lVar11,(long)iVar5,uVar1,uVar2,
                      puVar12,(long)iVar6,uVar14,puVar15,uVar3);
  func_0x000108637178();
  _objc_release(param_1);
  func_0x00010863714c();
  func_0x000108637154();
  func_0x000108637164();
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10863693c; end: 108636ab7;  */

undefined8 *
FUN_10863693c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined4 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
             undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
             undefined1 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined4 *)(param_1 + 6) = param_4;
  FUN_108636ab8(param_1 + 7,param_5);
  func_0x0001006b78fc(param_1 + 0xb,param_6);
  *(undefined4 *)(param_1 + 0xf) = param_7;
  param_1[0x10] = param_8;
  param_1[0x11] = param_9;
  func_0x000108636ae4(param_1 + 0x12,param_10);
  *(undefined4 *)(param_1 + 0x17) = param_11;
  *(undefined8 *)((long)param_1 + 0xbc) = param_13;
  *(undefined8 *)((long)param_1 + 0xc4) = param_14;
  *(undefined1 *)((long)param_1 + 0xcc) = param_15;
  *(undefined4 *)(param_1 + 0x1a) = param_16;
  *(undefined4 *)((long)param_1 + 0xd4) = param_17;
  param_1[0x1b] = param_19;
  param_1[0x1c] = param_20;
  *(undefined1 *)(param_1 + 0x1d) = (undefined1)param_21;
  *(undefined1 *)((long)param_1 + 0xe9) = param_21._1_1_;
  *(undefined1 *)((long)param_1 + 0xea) = param_21._2_1_;
  param_1[0x1e] = param_23;
  param_1[0x1f] = param_24;
  *(undefined1 *)(param_1 + 0x20) = param_25;
  param_1[0x22] = param_28;
  param_1[0x21] = param_27;
  param_1[0x23] = param_29;
  return param_1;
}



/* Entry: 108636ab8; end: 108636b53;  */

void FUN_108636ab8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return;
}



/* Entry: 108636b54; end: 108636bcf;  */

long FUN_108636b54(long param_1)

{
  func_0x000108636b7c(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_108636bd0(param_1,0);
  return param_1;
}



/* Entry: 108636bd0; end: 108636be7;  */

void FUN_108636bd0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108636be8; end: 108636caf;  */

void FUN_108636be8(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_108636c30;
    }
    return;
  }
LAB_108636c30:
  if (param_2 == 0) {
    FUN_108636db0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_108636dc8(plVar2);
    FUN_108636db0(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108636cb0; end: 108636daf;  */

void FUN_108636cb0(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_108636db0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_108636dc8(plVar3);
    FUN_108636db0(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108636db0; end: 108636dc7;  */

void FUN_108636db0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108636dc8; end: 108636de3;  */

long FUN_108636dc8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_108636e08();
  return param_1;
}



/* Entry: 108636de4; end: 108636e07;  */

undefined8 FUN_108636de4(undefined8 param_1)

{
  FUN_108636e08(param_1,0);
  return param_1;
}



/* Entry: 108636e08; end: 108636e1f;  */

void FUN_108636e08(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108636e20; end: 108636e7b;  */

undefined8 * FUN_108636e20(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_108636be8(param_1,*(undefined8 *)(param_2 + 8));
  FUN_108636e7c(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 108636e7c; end: 108636ebb;  */

void FUN_108636e7c(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    FUN_108636ebc(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 108636ebc; end: 108636eef;  */

void FUN_108636ebc(void)

{
  func_0x000108636ed4();
  return;
}



/* Entry: 108636ef0; end: 10863710f;  */

undefined1  [16] FUN_108636ef0(long *param_1,int *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar10 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_108636fa4;
          uVar6 = plVar8[1];
          if (uVar6 != uVar10) break;
          if ((int)plVar8[2] == *param_2) {
            uVar3 = 0;
            goto LAB_1086370dc;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar9 <= uVar6) {
          uVar2 = 0;
          if (uVar9 != 0) {
            uVar2 = uVar6 / uVar9;
          }
          uVar6 = uVar6 - uVar2 * uVar9;
        }
      } while (uVar6 == unaff_x24);
    }
  }
LAB_108636fa4:
  plVar1 = param_1 + 2;
  plVar8 = (long *)0x20;
  __Znwm();
  uStack_58 = 1;
  *plVar8 = 0;
  plVar8[1] = uVar10;
  lVar5 = *param_3;
  plVar8[3] = param_3[1];
  plVar8[2] = lVar5;
  plStack_68 = plVar8;
  plStack_60 = plVar1;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    FUN_108636be8(param_1,uVar4);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar4 * uVar9;
      }
    }
  }
  plVar8 = plStack_68;
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    *plStack_68 = *plVar1;
    *plVar1 = (long)plStack_68;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar1;
    if (*plStack_68 != 0) {
      uVar10 = *(ulong *)(*plStack_68 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar4 * uVar9;
      }
      *(long **)(lVar5 + uVar10 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar7;
    *plVar7 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_108636de4(&plStack_68);
  uVar3 = 1;
LAB_1086370dc:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 108637110; end: 10863713f;  */

void FUN_108637110(int param_1,undefined8 param_2)

{
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108637140; end: 108637183;  */

void FUN_108637140(void)

{
  return;
}



/* Entry: 108637184; end: 10863723b;  */

void FUN_108637184(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dabb0;
  _objc_alloc(PTR_PTR_1126dabb0);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    lVar2 = param_1;
    FUN_10863e318(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = 0;
  }
  if (*(char *)(param_1 + 200) == '\x01') {
    param_1 = param_1 + 0x78;
    FUN_10862b74c(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  func_0x00010c049400(puVar1,param_2,lVar2,param_1);
  func_0x00010863740c();
  func_0x000108637404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10863723c; end: 10863726b;  */

long FUN_10863723c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10863726c();
  FUN_1086372c8(lVar1 + 0x78,param_3);
  return param_1;
}



/* Entry: 10863726c; end: 108637297;  */

undefined1 * FUN_10863726c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x70] = 0;
  FUN_108637298();
  return param_1;
}



/* Entry: 108637298; end: 1086372ab;  */

void FUN_108637298(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_10862b41c();
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
  return;
}



/* Entry: 1086372ac; end: 1086372c7;  */

void FUN_1086372ac(long param_1)

{
  FUN_10862b41c();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 1086372c8; end: 1086372f3;  */

undefined1 * FUN_1086372c8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x50] = 0;
  FUN_1086372f4();
  return param_1;
}



/* Entry: 1086372f4; end: 108637307;  */

void FUN_1086372f4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_108637324();
    *(undefined1 *)(param_1 + 0x50) = 1;
    return;
  }
  return;
}



/* Entry: 108637308; end: 108637323;  */

void FUN_108637308(long param_1)

{
  FUN_108637324();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 108637324; end: 108637393;  */

undefined8 * FUN_108637324(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  FUN_10862b888(param_1 + 4,param_2 + 4);
  uVar1 = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 108637394; end: 1086373b3;  */

void FUN_108637394(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_1086373b4();
  }
  return;
}



/* Entry: 1086373b4; end: 1086373db;  */

void FUN_1086373b4(long param_1)

{
  FUN_10862b094(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 1086373dc; end: 1086373fb;  */

void FUN_1086373dc(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x00010862b144();
  }
  return;
}



/* Entry: 1086373fc; end: 108637417;  */

void FUN_1086373fc(void)

{
  return;
}



/* Entry: 108637418; end: 10863753f;  */

void FUN_108637418(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126dabb8;
  _objc_alloc(PTR_PTR_1126dabb8);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = param_1 + 0x20;
  func_0x000107c28308(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x28;
  FUN_108637184(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0xf8;
  func_0x000107c28138(lVar5);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x108;
  func_0x0001006a7e58(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005060(puVar1,param_2,lVar2,uVar6,lVar3,lVar4,lVar5,param_1);
  FUN_10863760c();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108637540; end: 1086375af;  */

undefined8 *
FUN_108637540(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined2 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = param_3;
  *(undefined2 *)(param_1 + 4) = param_4;
  FUN_1086375b0(param_1 + 5,param_5);
  param_1[0x1f] = param_6;
  param_1[0x20] = param_7;
  param_1[0x21] = param_8;
  return param_1;
}



/* Entry: 1086375b0; end: 10863760b;  */

long FUN_1086375b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10863726c();
  FUN_1086372c8(lVar1 + 0x78,param_2 + 0x78);
  return param_1;
}



/* Entry: 10863760c; end: 108637617;  */

void FUN_10863760c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108637618; end: 10863768f; -[SCNMessagingRecipientProvider initWithCpp:] */

undefined1 * FUN_108637618(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd2c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10863821c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108637b1c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108637690; end: 10863794f; -[SCNMessagingRecipientProvider fetchAllRecipients] */

/* WARNING: Type propagation algorithm not settling */

void FUN_108637690(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int extraout_w10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long alStack_78 [7];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(&uStack_d0);
  uStack_d8 = uStack_c8;
  uStack_e0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar2 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar3 = puVar2;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  alStack_78[5] = 0;
  alStack_78[6] = 0;
  alStack_78[1] = 0;
  alStack_78[2] = 0;
  FUN_108637b44(alStack_78 + 3,&uStack_e0,alStack_78 + 1);
  FUN_108637ba0(alStack_78 + 5,alStack_78 + 3);
  func_0x00010863829c();
  func_0x000108638294();
  func_0x000107c27b48(alStack_78);
  func_0x000107c27b4c(alStack_78 + 3,alStack_78[0]);
  lStack_88 = alStack_78[0];
  alStack_78[0] = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_b0 = alStack_78[5] + 0x58;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  puStack_90 = puVar2;
  __ZNSt3__15mutex4lockEv();
  lVar4 = alStack_78[5];
  func_0x000108637bd8();
  if ((int)lVar4 == 0) {
    puVar5 = (undefined8 *)0x18;
    __Znwm();
    lVar4 = lStack_88;
    puVar1 = puStack_90;
    *puVar5 = &PTR_FUN_110a5ed10;
    puStack_90 = (undefined *)0x0;
    lStack_88 = 0;
    puVar5[2] = lVar4;
    puVar5[1] = puVar1;
    plVar6 = *(long **)(alStack_78[5] + 0xa0);
    *(undefined8 **)(alStack_78[5] + 0xa0) = puVar5;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  else {
    FUN_108637ba0(&lStack_a0,alStack_78 + 5);
  }
  func_0x000107c2798c(&lStack_b0);
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x00010863821c();
      } while (extraout_w10 != 0);
    }
    FUN_108637c24(&puStack_90);
    func_0x000108637a10(&lStack_b0);
  }
  uStack_b8 = alStack_78[4];
  uStack_c0 = alStack_78[3];
  alStack_78[3] = 0;
  alStack_78[4] = 0;
  func_0x000108637a10(&lStack_a0);
  func_0x0001086381f0(&puStack_90);
  func_0x000107c27b58(alStack_78 + 3);
  lVar4 = alStack_78[0];
  alStack_78[0] = 0;
  if (lVar4 != 0) {
    func_0x00010863827c();
  }
  func_0x000108637a10(alStack_78 + 5);
  func_0x000107c27b58(&uStack_c0);
  _objc_release(0);
  _objc_release(puVar2);
  func_0x000108638260();
  func_0x000108637a10(&uStack_d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108637950; end: 10863797b;  */

void FUN_108637950(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108637a38();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863797c; end: 1086379cf; -[SCNMessagingRecipientProvider .cxx_destruct] */

void FUN_10863797c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5ecf0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108637b1c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 1086379d0; end: 108637a37; -[SCNMessagingRecipientProvider .cxx_construct] */

undefined8 * FUN_1086379d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10863821c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108637a38; end: 108637aab;  */

void FUN_108637a38(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5ecf0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10863821c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108637aac);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108638270();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108637aac; end: 108637b1b;  */

void FUN_108637aac(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dabc0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10863821c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108637b1c(&uStack_30);
  return;
}



/* Entry: 108637b1c; end: 108637b43;  */

long FUN_108637b1c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108637b44; end: 108637b9f;  */

void FUN_108637b44(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 108637ba0; end: 108637c23;  */

undefined8 * FUN_108637ba0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000108638260();
  return param_1;
}



/* Entry: 108637c24; end: 108637fef;  */

void FUN_108637c24(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  char cStack_a0;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  uStack_d8 = param_2;
  lStack_d0 = param_3;
  if (param_3 != 0) {
    do {
      FUN_10863821c();
    } while (extraout_w10 != 0);
    do {
      FUN_10863821c();
    } while (extraout_w10_00 != 0);
  }
  uVar7 = *param_1;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_c8 = param_2;
  lStack_c0 = param_3;
  FUN_108637b44(&lStack_70,&uStack_c8,&uStack_80);
  FUN_108637ba0(&uStack_60,&lStack_70);
  func_0x000108638294();
  func_0x000108637a10(&uStack_80);
  lStack_70 = uStack_60 + 0x58;
  uStack_68 = 1;
  __ZNSt3__15mutex4lockEv();
  uVar2 = uStack_60;
  uStack_90 = uStack_60;
  lStack_88 = lStack_58;
  if (lStack_58 != 0) {
    do {
      FUN_10863821c();
    } while (extraout_w10_01 != 0);
  }
  while (uVar4 = uVar2, func_0x000108637bd8(), (uVar4 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(uVar2 + 0x28,&lStack_70);
  }
  func_0x000108637a10(&uStack_90);
  if (*(long *)(uStack_60 + 0x98) == 0) {
    func_0x000108638084(&uStack_b8);
    func_0x000107c2798c(&lStack_70);
    func_0x00010863829c();
    puVar1 = PTR_PTR_1126b9638;
    if (cStack_a0 == '\x01') {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      for (lVar8 = CONCAT44(uStack_b4,uStack_b8); lVar8 != lStack_b0; lVar8 = lVar8 + 0x110) {
        lVar6 = lVar8;
        FUN_108637418(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(lVar6);
      }
      func_0x00010bf51e00(puVar5);
      func_0x000108638258();
      func_0x00010bfbaec0(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_10862cdc4(uStack_b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbaba0(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x000108638268();
    func_0x00010c220160(uVar7);
    func_0x000108638258();
    FUN_1086380f8(&uStack_b8);
    func_0x000108637a10(&uStack_c8);
    func_0x000108637a10(&uStack_d8);
    func_0x000107c27b68(param_1[1]);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_98,(long *)(uStack_60 + 0x98));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_98);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x108637e44);
  (*pcVar3)();
}



/* Entry: 108637ff0; end: 108637ff3;  */

undefined8 * FUN_108637ff0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5ed10;
  func_0x0001086381f0(param_1 + 1);
  return param_1;
}



/* Entry: 108637ff4; end: 108638007;  */

void FUN_108637ff4(void)

{
  FUN_108638058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108638008; end: 108638057;  */

void FUN_108638008(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_10863821c();
    } while (extraout_w10 != 0);
  }
  FUN_108637c24(param_1 + 8);
  func_0x000108638260();
  return;
}



/* Entry: 108638058; end: 1086380cb;  */

undefined8 * FUN_108638058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5ed10;
  func_0x0001086381f0(param_1 + 1);
  return param_1;
}



/* Entry: 1086380cc; end: 1086380f7;  */

void FUN_1086380cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1086380f8; end: 108638117;  */

void FUN_1086380f8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_108638118();
  }
  return;
}



/* Entry: 108638118; end: 108638183;  */

undefined8 FUN_108638118(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000108638144(&uStack_28);
  return param_1;
}



/* Entry: 108638184; end: 10863818b;  */

void FUN_108638184(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x110;
    func_0x0001086381c8();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10863818c; end: 10863821b;  */

void FUN_10863818c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x110;
    func_0x0001086381c8();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10863821c; end: 1086382ab;  */

void FUN_10863821c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1086382ac; end: 1086383b7;  */

void FUN_1086382ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  _objc_retain();
  func_0x00010bf4cce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28248(auStack_60);
  uVar1 = param_2;
  func_0x00010c08f1a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_80);
  uVar2 = param_2;
  func_0x00010c0c6c20(param_2);
  func_0x00010bfd44a0(param_2);
  func_0x000105299660(param_1,auStack_60,auStack_80,uVar2,param_2);
  func_0x000107c279a4(auStack_80);
  _objc_release(uVar1);
  func_0x000107c279c4(auStack_60);
  FUN_108638458();
  func_0x000108638460();
  return;
}



/* Entry: 1086383b8; end: 108638457;  */

void FUN_1086383b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dabc8;
  _objc_alloc(PTR_PTR_1126dabc8);
  lVar2 = param_1;
  func_0x0001006d1308(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x20;
  func_0x0001006a7df8(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003940(puVar1,param_2,lVar2,lVar3,(long)*(int *)(param_1 + 0x40),
                      *(undefined1 *)(param_1 + 0x44));
  FUN_108638458();
  func_0x000108638460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108638458; end: 108638467;  */

void FUN_108638458(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108638468; end: 1086384db;  */

void FUN_108638468(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dabd0;
  _objc_alloc(PTR_PTR_1126dabd0);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05af40(puVar1,param_2,lVar2,*(undefined4 *)(param_1 + 0x18));
  FUN_1086384dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1086384dc; end: 1086384e3;  */

void FUN_1086384dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086384e4; end: 108638593;  */

void FUN_1086384e4(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_110a5ed98;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_108638594);
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
    FUN_108638910(&uStack_50);
  }
  FUN_10863893c();
  return;
}



/* Entry: 108638594; end: 108638697;  */

void FUN_108638594(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_110a5edd8;
  puVar4[3] = &PTR_DAT_1107e82b0;
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
  puVar4[3] = &PTR_FUN_110a5ee28;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108638910(&uStack_50);
  return;
}



/* Entry: 108638698; end: 10863869b;  */

void FUN_108638698(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5edd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10863869c; end: 1086386af;  */

void FUN_10863869c(void)

{
  FUN_108638900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086386b0; end: 1086386bb;  */

long FUN_1086386b0(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5ed98;
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



/* Entry: 1086386bc; end: 1086386fb;  */

void FUN_1086386bc(void)

{
  func_0x000108638944();
  return;
}



/* Entry: 1086386fc; end: 10863882b;  */

void FUN_1086386fc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  FUN_10862839c(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3[1];
  for (lVar7 = *param_3; lVar7 != lVar1; lVar7 = lVar7 + 0x10) {
    lVar4 = lVar7;
    FUN_108624988(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(lVar4);
  }
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  func_0x00010c0e6cc0(uVar6);
  _objc_release(puVar5);
  FUN_10863893c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 10863882c; end: 10863886b;  */

void FUN_10863882c(long param_1)

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



/* Entry: 10863886c; end: 1086388ff;  */

long FUN_10863886c(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5ed98;
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



/* Entry: 108638900; end: 10863890f;  */

void FUN_108638900(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5edd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108638910; end: 10863893b;  */

long FUN_108638910(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10863893c; end: 108638953;  */

void FUN_10863893c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108638954; end: 108638967;  */

void FUN_108638954(void)

{
  FUN_108638b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108638968; end: 108638973;  */

long FUN_108638968(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5eea0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x000108638ba0();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108638974; end: 1086389b3;  */

void FUN_108638974(void)

{
  func_0x000108638be0();
  return;
}



/* Entry: 1086389b4; end: 108638a4f;  */

void FUN_1086389b4(undefined8 param_1)

{
  func_0x000108638b8c();
  FUN_1086323c4();
  _objc_retainAutoreleasedReturnValue();
  FUN_10862ffe4();
  _objc_retainAutoreleasedReturnValue();
  FUN_108641a14();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108638bc0();
  func_0x00010c286780();
  func_0x000108638bb8();
  func_0x000108638ba0();
  func_0x000107c31b34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 108638a50; end: 108638aeb;  */

void FUN_108638a50(undefined8 param_1)

{
  func_0x000108638b8c();
  FUN_1086324b4();
  _objc_retainAutoreleasedReturnValue();
  FUN_10862ffe4();
  _objc_retainAutoreleasedReturnValue();
  FUN_108623cc8();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108638bc0();
  func_0x00010bf968a0();
  func_0x000108638bb8();
  func_0x000108638ba0();
  func_0x000107c31b34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 108638aec; end: 108638b7b;  */

long FUN_108638aec(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5eea0;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x000108638ba0();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108638b7c; end: 108638beb;  */

void FUN_108638b7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5eee0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108638bec; end: 108638dc3;  */

void FUN_108638bec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1b8 [32];
  undefined1 auStack_198 [32];
  undefined1 auStack_178 [32];
  undefined1 auStack_158 [224];
  undefined1 auStack_78 [24];
  
  _objc_retain();
  func_0x00010c247520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(auStack_78);
  uVar1 = param_2;
  func_0x00010c122b20(param_2);
  func_0x00010bf50900(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10861c4ec(auStack_158);
  func_0x00010bf50980(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_178);
  func_0x00010c0e8220(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862f0e4(auStack_198);
  func_0x00010bfce880(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862f0e4(auStack_1b8);
  func_0x00010529a3a0(param_1,auStack_78,uVar1,auStack_158,auStack_178,auStack_198,auStack_1b8);
  func_0x000104bee748(auStack_1b8);
  _objc_release(param_2);
  func_0x000104bee748(auStack_198);
  func_0x000108638ef4();
  func_0x000107c279a4(auStack_178);
  func_0x000108638f0c();
  func_0x00010066d68c(auStack_158);
  func_0x000108638efc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  func_0x000108638eec();
  func_0x000108638f04();
  return;
}



/* Entry: 108638dc4; end: 108638eeb;  */

void FUN_108638dc4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126dabd8;
  _objc_alloc(PTR_PTR_1126dabd8);
  lVar3 = param_1;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  lVar4 = param_1 + 0x20;
  func_0x0001006a9128(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x100;
  func_0x0001006a7df8(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x120;
  FUN_10862f168(lVar6);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x140;
  FUN_10862f168(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a8c0(puVar2,param_2,lVar3,uVar1,lVar4,lVar5,lVar6,param_1);
  func_0x000108638ef4();
  func_0x000108638f0c();
  func_0x000108638efc();
  func_0x000108638eec();
  func_0x000108638f04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108638eec; end: 108638f13;  */

void FUN_108638eec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108638f14; end: 108638fcb;  */

void FUN_108638f14(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_110a5efc8;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_108638fcc);
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
    FUN_10863926c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108638fcc; end: 1086390cf;  */

void FUN_108638fcc(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_110a5f008;
  puVar4[3] = &PTR_DAT_1107e80e0;
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
  puVar4[3] = &PTR_FUN_110a5f058;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10863926c(&uStack_50);
  return;
}



/* Entry: 1086390d0; end: 1086390d3;  */

void FUN_1086390d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5f008;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086390d4; end: 1086390e7;  */

void FUN_1086390d4(void)

{
  FUN_10863925c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086390e8; end: 1086390f3;  */

void FUN_1086390e8(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x0001086392a4(param_1);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  _objc_autoreleasePoolPop(param_1);
  return;
}


