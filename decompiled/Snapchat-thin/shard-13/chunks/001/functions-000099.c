/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a0ebf08; end: 10a0ebf13;  */

long FUN_10a0ebf08(long param_1)

{
  long lStack_28;
  
  FUN_10a0ebf90(param_1 + 0xd0);
  lStack_28 = param_1 + 0xb8;
  func_0x00010a0ec100(&lStack_28);
  lStack_28 = param_1 + 0xa0;
  func_0x00010a0ec188(&lStack_28);
  func_0x00010a0ea980(param_1 + 0x90);
  lStack_28 = param_1 + 0x78;
  func_0x00010a0ec1f8(&lStack_28);
  __ZNSt3__15mutexD1Ev(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x18;
}



/* Entry: 10a0ebf14; end: 10a0ebf8f;  */

long FUN_10a0ebf14(long param_1)

{
  long lStack_28;
  
  FUN_10a0ebf90(param_1 + 0xb8);
  lStack_28 = param_1 + 0xa0;
  func_0x00010a0ec100(&lStack_28);
  lStack_28 = param_1 + 0x88;
  func_0x00010a0ec188(&lStack_28);
  func_0x00010a0ea980(param_1 + 0x78);
  lStack_28 = param_1 + 0x60;
  func_0x00010a0ec1f8(&lStack_28);
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a0ebf90; end: 10a0ec0b3;  */

long * FUN_10a0ebf90(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar6 = puVar5;
  if ((undefined8 *)param_1[2] != puVar5) {
    uVar4 = param_1[4];
    plVar7 = puVar5 + (uVar4 >> 8);
    lVar2 = *plVar7;
    lVar3 = lVar2 + (uVar4 & 0xff) * 0x10;
    lVar1 = puVar5[param_1[5] + uVar4 >> 8] + (param_1[5] + uVar4 & 0xff) * 0x10;
    puVar6 = (undefined8 *)param_1[2];
    if (lVar3 != lVar1) {
      do {
        if (*(long *)(lVar3 + 8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          lVar2 = *plVar7;
        }
        lVar3 = lVar3 + 0x10;
        if (lVar3 - lVar2 == 0x1000) {
          plVar7 = plVar7 + 1;
          lVar2 = *plVar7;
          lVar3 = lVar2;
        }
      } while (lVar3 != lVar1);
      puVar5 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar6 - (long)puVar5;
  while (uVar4 = lVar3 >> 3, 2 < uVar4) {
    __ZdlPv(*puVar5);
    puVar6 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar5;
    lVar3 = (long)puVar6 - (long)puVar5;
  }
  if (uVar4 == 1) {
    lVar3 = 0x80;
  }
  else {
    if (uVar4 != 2) goto LAB_10a0ec090;
    lVar3 = 0x100;
  }
  param_1[4] = lVar3;
LAB_10a0ec090:
  for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    __ZdlPv(*puVar5);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a0ec0b4; end: 10a0ec13f;  */

long * FUN_10a0ec0b4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a0ec140; end: 10a0ec267;  */

void FUN_10a0ec140(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a0ec268; end: 10a0ec41f;  */

long FUN_10a0ec268(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0ec420; end: 10a0ec4f3;  */

undefined8 * FUN_10a0ec420(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 **ppuVar5;
  undefined8 *apuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined8 *apuStack_80 [2];
  char cStack_69;
  long lStack_68;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  iVar4 = (int)&puStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&puStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    puStack_40 = (undefined8 *)*param_2;
    lStack_30 = param_2[2];
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = param_1;
  FUN_10a102f04(param_1,&puStack_40,&lStack_28,1);
  if (lStack_30 < 0) {
    puVar2 = puStack_40;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppuVar5 = apuStack_80;
  pcStack_48 = FUN_10a0ec4f4;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_10f63b255;
  if (iVar4 == 0) {
    puVar1 = &UNK_10f63b257;
  }
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000107c2b054(apuStack_80,puVar1);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar3 = puVar2;
  FUN_10a102f04(puVar2,apuStack_80,&lStack_68,1);
  if (cStack_69 < '\0') {
    puVar3 = apuStack_80[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  if (cStack_69 < '\0') {
    __ZdlPv(apuStack_80[0]);
  }
  puVar2 = puVar3;
  __Unwind_Resume();
  pcStack_88 = FUN_10a0ec5bc;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = (undefined1 *)apuStack_80;
  puStack_98 = puVar3;
  ppuStack_90 = &puStack_50;
  __ZNSt3__19to_stringEi(apuStack_c0,ppuVar5);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar3 = puVar2;
  FUN_10a102f04(puVar2,apuStack_c0,&lStack_a8,1);
  if (cStack_a9 < '\0') {
    puVar3 = apuStack_c0[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  if (cStack_a9 < '\0') {
    __ZdlPv(apuStack_c0[0]);
  }
  __Unwind_Resume();
  puVar2 = puVar3;
  FUN_10a0ec6a0();
  *(int *)(puVar3 + 0x20) = (int)puVar2;
  return puVar3;
}



/* Entry: 10a0ec4f4; end: 10a0ec5bb;  */

undefined8 * FUN_10a0ec4f4(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 *apuStack_80 [2];
  char cStack_69;
  long lStack_68;
  undefined1 *puStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 *apuStack_40 [2];
  char cStack_29;
  long lStack_28;
  
  ppuVar4 = apuStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_10f63b255;
  if (param_2 == 0) {
    puVar1 = &UNK_10f63b257;
  }
  func_0x000107c2b054(apuStack_40,puVar1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = param_1;
  FUN_10a102f04(param_1,apuStack_40,&lStack_28,1);
  if (cStack_29 < '\0') {
    puVar2 = apuStack_40[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_29 < '\0') {
    __ZdlPv(apuStack_40[0]);
  }
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_48 = FUN_10a0ec5bc;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = (undefined1 *)apuStack_40;
  puStack_58 = puVar2;
  puStack_50 = &stack0xfffffffffffffff0;
  __ZNSt3__19to_stringEi(apuStack_80,ppuVar4);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar2 = puVar3;
  FUN_10a102f04(puVar3,apuStack_80,&lStack_68,1);
  if (cStack_69 < '\0') {
    puVar2 = apuStack_80[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  if (cStack_69 < '\0') {
    __ZdlPv(apuStack_80[0]);
  }
  __Unwind_Resume();
  puVar3 = puVar2;
  FUN_10a0ec6a0();
  *(int *)(puVar2 + 0x20) = (int)puVar3;
  return puVar2;
}



/* Entry: 10a0ec5bc; end: 10a0ec66f;  */

undefined8 * FUN_10a0ec5bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *apuStack_40 [2];
  char cStack_29;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__19to_stringEi(apuStack_40,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1;
  FUN_10a102f04(param_1,apuStack_40,&lStack_28,1);
  if (cStack_29 < '\0') {
    puVar1 = apuStack_40[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_29 < '\0') {
    __ZdlPv(apuStack_40[0]);
  }
  __Unwind_Resume();
  puVar2 = puVar1;
  FUN_10a0ec6a0();
  *(int *)(puVar1 + 0x20) = (int)puVar2;
  return puVar1;
}



/* Entry: 10a0ec670; end: 10a0ec69f;  */

long FUN_10a0ec670(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a0ec6a0(param_1,0x20,param_2 + 1);
  *(int *)(param_1 + 0x100) = (int)lVar1;
  return param_1;
}



/* Entry: 10a0ec6a0; end: 10a0ec6ef;  */

undefined4 FUN_10a0ec6a0(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined8 uStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  undefined8 uStack_18;
  
  iStack_1c = param_3 + 1;
  uStack_18 = 0;
  uStack_28 = param_1;
  uStack_20 = param_2;
  __Unwind_Backtrace(FUN_10a103044,&uStack_28);
  return uStack_18._4_4_;
}



/* Entry: 10a0ec6f0; end: 10a0ec8a7;  */

uint FUN_10a0ec6f0(long param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar6 = *(float *)(param_1 + 0x24);
  fVar9 = *(float *)(param_1 + 0x38);
  fVar11 = *(float *)(param_1 + 0x4c);
  fVar12 = (fVar6 - fVar9) - fVar11;
  fVar14 = (fVar9 - fVar6) - fVar11;
  fVar16 = (fVar11 - fVar6) - fVar9;
  fVar11 = fVar6 + fVar9 + fVar11;
  fVar6 = fVar12;
  if (fVar12 <= fVar11) {
    fVar6 = fVar11;
  }
  bVar1 = 2;
  if (fVar14 <= fVar6) {
    fVar14 = fVar6;
    bVar1 = fVar11 < fVar12;
  }
  bVar2 = 3;
  if (fVar16 <= fVar14) {
    fVar16 = fVar14;
    bVar2 = bVar1;
  }
  fVar7 = SQRT(fVar16 + 1.0) * 0.5;
  fVar12 = 0.25 / fVar7;
  fVar9 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x2c)) * fVar12;
  fVar13 = (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x34)) * fVar12;
  fVar15 = (*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x48)) * fVar12;
  fVar11 = (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x34)) * fVar12;
  fVar8 = (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x44)) * fVar12;
  fVar10 = fVar9;
  fVar6 = fVar15;
  fVar14 = fVar7;
  fVar16 = fVar13;
  if (bVar2 != 2) {
    fVar10 = fVar11;
    fVar6 = fVar7;
    fVar14 = fVar15;
    fVar16 = fVar8;
  }
  fVar12 = (*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x48)) * fVar12;
  fVar15 = fVar7;
  if (bVar2 != 0) {
    fVar15 = fVar12;
    fVar11 = fVar8;
    fVar9 = fVar13;
    fVar12 = fVar7;
  }
  if (bVar2 < 2) {
    fVar10 = fVar15;
    fVar6 = fVar11;
    fVar14 = fVar9;
    fVar16 = fVar12;
  }
  fVar9 = fVar6 * fVar10 + fVar14 * fVar16;
  fVar9 = fVar9 + fVar9;
  fVar12 = ABS(fVar9);
  fVar11 = 0.0;
  bVar3 = false;
  bVar4 = true;
  if (ABS(((fVar16 * fVar16 + fVar10 * fVar10) - fVar14 * fVar14) - fVar6 * fVar6) <= 1.1920929e-07)
  {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar12)) {
      bVar3 = fVar12 == 1.1920929e-07;
      bVar4 = 1.1920929e-07 <= fVar12;
    }
  }
  if (bVar4 && !bVar3) {
    fVar11 = fVar9;
    _atan2f();
  }
  if (0.17453292 <= ABS(fVar11 + -1.5707964)) {
    if (0.17453292 <= ABS(ABS(fVar11) + -3.1415927)) {
      uVar5 = (uint)(ABS(fVar11 + 1.5707964) < 0.17453292);
    }
    else {
      uVar5 = 2;
    }
  }
  else {
    uVar5 = 3;
  }
  return *(uint *)(param_1 + 100) | uVar5;
}



/* Entry: 10a0ec8a8; end: 10a0eca23;  */

void FUN_10a0ec8a8(int *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (*param_1 != -1) {
    uVar3 = (ulong)(uint)param_1[7];
    if (NAN((float)param_1[7])) {
      uVar4 = NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20) + -1,
                                  (int)*(undefined8 *)(param_1 + 1) + -1),4);
      uVar3 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 0.5,(float)uVar4 * 0.5);
      *(ulong *)(param_1 + 7) = uVar3;
    }
    uVar2 = (ulong)(uint)param_1[4];
    if ((float)param_1[4] == -1.0) {
      uVar2 = (ulong)(uint)param_1[8];
      fVar5 = (float)param_1[3];
      FUN_10a0ecc90(uVar2,param_1[6],fVar5,1.0 / ((float)param_1[1] / (float)param_1[2]));
      param_1[4] = (int)uVar2;
    }
    else {
      fVar5 = (float)param_1[3];
    }
    if (fVar5 == -1.0) {
      fVar6 = (float)param_1[5];
      FUN_10a0ecc90(uVar3,fVar6,uVar2,(float)param_1[1] / (float)param_1[2]);
      fVar5 = (float)uVar3;
      param_1[3] = (int)fVar5;
    }
    else {
      fVar6 = (float)param_1[5];
    }
    if (fVar6 == -1.0) {
      iVar1 = param_1[1];
      fVar5 = fVar5 * 0.5 * 0.017453292;
      _tanf();
      param_1[5] = (int)(((float)iVar1 / fVar5) * 0.5);
    }
    if ((float)param_1[6] == -1.0) {
      iVar1 = param_1[2];
      fVar5 = (float)uVar2 * 0.5 * 0.017453292;
      _tanf();
      param_1[6] = (int)(((float)iVar1 / fVar5) * 0.5);
    }
  }
  return;
}



/* Entry: 10a0eca24; end: 10a0ecc8f;  */

undefined8 * FUN_10a0eca24(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0ecc90; end: 10a0ecd47;  */

float FUN_10a0ecc90(float param_1,float param_2,float param_3,float param_4,int param_5)

{
  float fVar1;
  
  if (param_2 == -1.0) {
    fVar1 = param_3 * 0.017453292 * 0.5;
    _tanf(fVar1);
    param_4 = param_4 * fVar1;
    _atanf(param_4);
    param_4 = param_4 + param_4;
  }
  else {
    param_4 = (param_1 + 0.5) / param_2;
    _atanf(param_4);
    param_2 = (((float)param_5 - param_1) + -0.5) / param_2;
    _atanf(param_2);
    param_4 = param_4 + param_2;
  }
  return param_4 * 57.29578;
}



/* Entry: 10a0ecd48; end: 10a0ecd77;  */

undefined4 FUN_10a0ecd48(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  FUN_10a0ec6f0();
  puVar1 = (undefined4 *)(param_1 + 0xc);
  if ((uVar2 & 1) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
  }
  return *puVar1;
}



/* Entry: 10a0ecd78; end: 10a0ecdbf;  */

float FUN_10a0ecd78(long param_1)

{
  return *(float *)(param_1 + 0x14) / (float)*(int *)(param_1 + 4);
}



/* Entry: 10a0ecdc0; end: 10a0ed35f;  */

void FUN_10a0ecdc0(undefined4 *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  long *plVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  byte bStack_60;
  undefined5 uStack_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 uStack_4b;
  undefined1 uStack_41;
  
  plVar11 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110ba3900,0xffffffff);
  *param_1 = (int)plVar11;
  plVar11 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110ba3960);
  if ((int)plVar11 == 0) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = param_2;
    FUN_10a1030d8(param_2,&PTR_DAT_110ba3960);
  }
  *(long **)(param_1 + 1) = plVar11;
  (**(code **)(*param_2 + 0x1b0))(&plStack_b0,param_2,&PTR_DAT_110ba3980,&UNK_10e482b48);
  *(long **)(param_1 + 0xb) = plStack_a8;
  *(long **)(param_1 + 9) = plStack_b0;
  *(undefined8 *)(param_1 + 0xf) = uStack_98;
  *(undefined8 *)(param_1 + 0xd) = uStack_a0;
  *(undefined8 *)(param_1 + 0x13) = uStack_88;
  *(undefined8 *)(param_1 + 0x11) = uStack_90;
  *(undefined8 *)(param_1 + 0x17) = uStack_78;
  *(undefined8 *)(param_1 + 0x15) = uStack_80;
  plVar11 = param_2;
  uVar14 = uStack_a0;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110ba2398);
  if ((int)plVar11 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110ba2398);
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110ba3680,0);
    (**(code **)(*param_2 + 0x220))(param_2);
    uVar2 = (uint)plVar11 & 3;
    fVar9 = 0.70710677;
    if (uVar2 == 1 || ((ulong)plVar11 & 3) == 0) {
      if (((ulong)plVar11 & 3) == 0) {
        fVar9 = 1.0;
        fVar12 = 0.0;
        fVar16 = 0.0;
        fVar15 = 0.0;
      }
      else {
        fVar12 = -0.0;
        fVar16 = -0.0;
        fVar15 = -0.70710677;
      }
    }
    else if (uVar2 == 3) {
      fVar12 = 0.0;
      fVar16 = 0.0;
      fVar15 = fVar9;
    }
    else {
      fVar15 = 1.0;
      fVar12 = 0.0;
      fVar9 = -4.371139e-08;
      fVar16 = 0.0;
    }
    fStack_f0 = (fVar16 * fVar16 + fVar15 * fVar15) * -2.0 + 1.0;
    fStack_ec = fVar12 * fVar16 + fVar15 * fVar9;
    fStack_ec = fStack_ec + fStack_ec;
    fStack_e8 = fVar12 * fVar15 - fVar16 * fVar9;
    fStack_e8 = fStack_e8 + fStack_e8;
    fStack_e0 = fVar12 * fVar16 - fVar15 * fVar9;
    fStack_e0 = fStack_e0 + fStack_e0;
    fStack_dc = (fVar12 * fVar12 + fVar15 * fVar15) * -2.0 + 1.0;
    fStack_d8 = fVar16 * fVar15 + fVar12 * fVar9;
    fStack_d8 = fStack_d8 + fStack_d8;
    fStack_d0 = fVar12 * fVar15 + fVar16 * fVar9;
    fStack_d0 = fStack_d0 + fStack_d0;
    fStack_cc = fVar16 * fVar15 - fVar12 * fVar9;
    fStack_cc = fStack_cc + fStack_cc;
    uStack_e4 = 0;
    uStack_d4 = 0;
    fStack_c8 = (fVar12 * fVar12 + fVar16 * fVar16) * -2.0 + 1.0;
    uStack_bc = 0;
    uStack_c4 = 0;
    uStack_b4 = 0x3f800000;
    func_0x000109519fd0(&plStack_b0,param_1 + 9,&fStack_f0);
    *(long **)(param_1 + 0xb) = plStack_a8;
    *(long **)(param_1 + 9) = plStack_b0;
    *(undefined8 *)(param_1 + 0xf) = uStack_98;
    *(undefined8 *)(param_1 + 0xd) = uStack_a0;
    *(undefined8 *)(param_1 + 0x13) = uStack_88;
    *(undefined8 *)(param_1 + 0x11) = uStack_90;
    *(undefined8 *)(param_1 + 0x17) = uStack_78;
    *(undefined8 *)(param_1 + 0x15) = uStack_80;
    uVar14 = uStack_a0;
  }
  uVar13 = (undefined4)uVar14;
  uVar10 = 0xbf800000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110ba23b8);
  param_1[3] = uVar10;
  uVar10 = 0xbf800000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110ba23d8);
  param_1[4] = uVar10;
  plVar11 = (long *)NEON_fmov(0xbf800000,4);
  plStack_b0 = plVar11;
  (**(code **)(*param_2 + 0xe0))(param_2,&PTR_DAT_110ba39a0,&plStack_b0);
  param_1[5] = (int)plVar11;
  param_1[6] = uVar13;
  uVar10 = 0x7fc00000;
  plStack_b0 = (long *)0x7fc000007fc00000;
  (**(code **)(*param_2 + 0xe0))(param_2,&PTR_DAT_110ba23f8,&plStack_b0);
  param_1[7] = uVar10;
  param_1[8] = uVar13;
  plVar11 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110ba2418,0);
  param_1[0x1a] = (int)plVar11;
  plVar11 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110ba2438);
  if ((int)plVar11 == 0) {
LAB_10a0ed1b0:
    lStack_108 = 0;
    lStack_100 = 0;
    lStack_f8 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1d8))(&uStack_70,param_2,&PTR_DAT_110ba2438);
    uVar6 = uStack_68;
    if (bStack_60 != 1) {
      uStack_41 = 0xd;
      uStack_58 = 0x6f74736964;
      uStack_53 = 0x507472;
      uStack_50 = 0x736d617261;
      uStack_4b = 0;
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&fStack_f0,&UNK_10f63b9fc,&uStack_58);
      FUN_10a012db0(&plStack_b0,&fStack_f0,&UNK_10f63cc0e);
      FUN_10a0029c0(&plStack_b0);
      goto LAB_10a0ed2dc;
    }
    if (uStack_68 == 0) goto LAB_10a0ed1b0;
    if ((uStack_68 < 8) || ((uStack_68 & 7) != 0)) {
      uStack_41 = 0xd;
      uStack_58 = 0x6f74736964;
      uStack_53 = 0x507472;
      uStack_50 = 0x736d617261;
      uStack_4b = 0;
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&fStack_f0,&UNK_10f63b9fc,&uStack_58);
      FUN_10a012db0(&plStack_b0,&fStack_f0,&UNK_10f6854b4);
      FUN_10a0029c0(&plStack_b0);
LAB_10a0ed2dc:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a0ed2e0);
      (*pcVar7)();
    }
    lStack_108 = 0;
    lStack_100 = 0;
    lStack_f8 = 0;
    FUN_10a0cf094(&lStack_108,uStack_68 >> 3);
    lVar8 = lStack_100;
    _bzero(lStack_100,uVar6);
    lStack_100 = lVar8 + uVar6;
    if ((bStack_60 & 1) == 0) goto LAB_10a0ed2dc;
    _memcpy(lStack_108,uStack_70,uStack_68);
    lVar5 = lStack_100;
    lVar8 = lStack_108;
    if (lStack_108 != lStack_100) {
      plVar11 = (long *)0x30;
      __Znwm();
      plVar11[1] = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110ba4ca8;
      plStack_b0 = plVar11 + 3;
      *plStack_b0 = lVar8;
      plVar11[4] = lVar5;
      plVar11[5] = lStack_f8;
      lStack_100 = 0;
      lStack_f8 = 0;
      lStack_108 = 0;
      plStack_a8 = plVar11;
      goto LAB_10a0ed1bc;
    }
  }
  plStack_b0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
LAB_10a0ed1bc:
  FUN_10a0eca24(param_1 + 0x1c,&plStack_b0);
  plVar11 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  FUN_10a0ec8a8(param_1);
  return;
}



/* Entry: 10a0ed360; end: 10a0ed543;  */

void FUN_10a0ed360(long *param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110ba3900,(int)*param_1);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110ba3960);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110ba3940,*(undefined4 *)((long)param_1 + 4));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110ba3920,(int)param_1[1]);
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)((long)param_1 + 0xc),param_2,&PTR_DAT_110ba23b8);
  (**(code **)(*param_2 + 0x60))((int)param_1[2],param_2,&PTR_DAT_110ba23d8);
  (**(code **)(*param_2 + 0xf0))(param_2,&PTR_DAT_110ba3980,(long)param_1 + 0x24);
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110ba39a0,(long)param_1 + 0x14);
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110ba23f8,(long)param_1 + 0x1c);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110ba2418,(int)param_1[0xd]);
  func_0x00010a0ed4c8();
                    /* WARNING: Could not recover jumptable at 0x00010a0ed4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110ba2438,*param_1,param_1[1] - *param_1);
  return;
}



/* Entry: 10a0ed544; end: 10a0ed88f;  */

void FUN_10a0ed544(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63b267;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63b26e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0ed890(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63b277;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0ed890();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63b27d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0ed890();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63b284;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0ed890();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63b28e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0ed890();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63b295;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0ed890();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63b299;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0ed890();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63b29f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0ed890();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63b2a6;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0ed890();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63b2b2;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0ed890();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63b2ba;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0ed890();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63b2c1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0ed890();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a0ed890; end: 10a0ed937;  */

undefined8 * FUN_10a0ed890(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0ed938);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)(int)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a0ed938; end: 10a0edb9f;  */

undefined4 FUN_10a0ed938(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 - 1 < 0x1f && param_2 - 1U < 0xc) {
    if (((0x13 < param_1) && (param_2 == 1)) || ((param_1 < 0x13 && (param_2 == 2)))) {
      return 0;
    }
    if (((0x12 < param_1) && (param_2 == 2)) || ((param_1 < 0x15 && (param_2 == 3)))) {
      return 7;
    }
    if (((0x14 < param_1) && (param_2 == 3)) || ((param_1 < 0x14 && (param_2 == 4)))) {
      return 1;
    }
    if (((0x13 < param_1) && (param_2 == 4)) || ((param_1 < 0x15 && (param_2 == 5)))) {
      return 10;
    }
    if (((0x14 < param_1) && (param_2 == 5)) || ((param_1 < 0x15 && (param_2 == 6)))) {
      return 4;
    }
    if (((0x14 < param_1) && (param_2 == 6)) || ((param_1 < 0x17 && (param_2 == 7)))) {
      return 2;
    }
    if (((0x16 < param_1) && (param_2 == 7)) || ((param_1 < 0x17 && (param_2 == 8)))) {
      return 5;
    }
    if (((0x16 < param_1) && (param_2 == 8)) || ((param_1 < 0x17 && (param_2 == 9)))) {
      return 0xb;
    }
    if (((0x16 < param_1) && (param_2 == 9)) || ((param_1 < 0x17 && (param_2 == 10)))) {
      return 6;
    }
    if (((0x16 < param_1) && (param_2 == 10)) || ((param_1 < 0x16 && (param_2 == 0xb)))) {
      return 9;
    }
  }
  else {
    param_1 = 0xf63b2c7;
    FUN_10a00946c();
  }
  uVar1 = 8;
  if ((0x15 < param_1 || param_2 != 0xc) && (param_1 < 0x16 || param_2 != 0xb)) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 10a0edba0; end: 10a0edce3;  */

void FUN_10a0edba0(undefined4 *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 auStack_98 [2];
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  undefined1 auStack_30 [16];
  
  if (param_3 == 0) {
    *param_1 = 0x42ff0000;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 7) = 0;
    *(undefined8 *)(param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 0xb) = 0;
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
    *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
    *(undefined8 *)(param_1 + 0x16) = 0;
  }
  else {
    *param_1 = 0x42ff0000;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 7) = 0;
    *(undefined8 *)(param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 0xb) = 0;
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
    *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
    *(undefined8 *)(param_1 + 0x16) = 0;
    auStack_98[0] = 0xc1020000;
    uStack_88 = (undefined4)param_3;
    uStack_84 = 1;
    uStack_90 = param_2;
    func_0x000109b7f878(auStack_80,auStack_98,6,param_1);
    if (lStack_48 != 0) {
      piVar1 = (int *)(lStack_48 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(auStack_80);
      }
    }
    lStack_48 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (0 < iStack_7c) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_40 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iStack_7c);
    }
    if (puStack_38 != auStack_30 && puStack_38 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_38 + -8));
    }
  }
  return;
}



/* Entry: 10a0edce4; end: 10a0edd9f;  */

void FUN_10a0edce4(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  long lStack_38;
  long lStack_30;
  
  if (*(long *)(param_3 + 0x10) != 0) {
    uVar1 = (ulong)*(uint *)(param_3 + 4);
    if ((int)*(uint *)(param_3 + 4) < 3) {
      lVar2 = (long)*(int *)(param_3 + 0xc) * (long)*(int *)(param_3 + 8);
    }
    else {
      lVar2 = 1;
      piVar3 = *(int **)(param_3 + 0x40);
      do {
        lVar2 = lVar2 * *piVar3;
        uVar1 = uVar1 - 1;
        piVar3 = piVar3 + 1;
      } while (uVar1 != 0);
    }
    if (lVar2 != 0) {
      func_0x00010a0edb1c(&lStack_38,param_3,param_4);
      (**(code **)(*param_1 + 0x28))(param_1,param_2,lStack_38,lStack_30 - lStack_38);
      if (lStack_38 != 0) {
        lStack_30 = lStack_38;
        __ZdlPv();
      }
    }
  }
  return;
}



/* Entry: 10a0edda0; end: 10a0edf4b;  */

void FUN_10a0edda0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x200))();
  if ((int)plVar5 != 0) {
    lStack_48 = 0;
    lStack_40 = 0;
    uStack_38 = 0;
    FUN_10a108f40(param_1,param_2,&lStack_48);
    FUN_10a0edba0(&uStack_b0,lStack_48,lStack_40 - lStack_48);
    if (param_3[7] != 0) {
      piVar1 = (int *)(param_3[7] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(param_3);
      }
    }
    param_3[7] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    if (0 < *(int *)((long)param_3 + 4)) {
      lVar6 = 0;
      lVar8 = param_3[8];
      do {
        *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_3 + 4));
    }
    param_3[1] = uStack_a8;
    *param_3 = CONCAT44(iStack_ac,uStack_b0);
    param_3[3] = uStack_98;
    param_3[2] = uStack_a0;
    param_3[5] = uStack_88;
    param_3[4] = uStack_90;
    param_3[7] = uStack_78;
    param_3[6] = uStack_80;
    puVar9 = (undefined8 *)param_3[9];
    puVar7 = param_3 + 10;
    if (puVar9 != puVar7) {
      if (puVar9 != (undefined8 *)0x0) {
        _free(puVar9[-1]);
      }
      param_3[8] = param_3 + 1;
      param_3[9] = puVar7;
      puVar9 = puVar7;
    }
    if (iStack_ac < 3) {
      puVar7 = (undefined8 *)((ulong)&uStack_b0 | 4);
      *puVar9 = *puStack_68;
      puVar9[1] = puStack_68[1];
      uStack_b0 = 0x42ff0000;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined8 *)((long)puVar7 + 0x2c) = 0;
      if (puStack_68 != auStack_60) {
        _free(puStack_68[-1]);
      }
    }
    else {
      param_3[8] = uStack_70;
      param_3[9] = puStack_68;
    }
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a0edf4c; end: 10a0edfc3;  */

void FUN_10a0edf4c(undefined8 *param_1)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar4 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if ((uVar4 != 0) && ((bRam000000011330a9e8 & 1) != 0)) {
    func_0x00010ae06f08(0,1,&UNK_10f63b2f1,&UNK_10f63b310,0xf,&UNK_10f63b333);
  }
  FUN_10a109200();
  uVar4 = param_1[1];
  if (0x7ffffffffffffff7 < uVar4) {
    func_0x000109ffde50();
  }
  uVar5 = *param_1;
  if (uVar4 < 0x17) {
    uStack_68 = CONCAT17((char)uVar4,(undefined7)uStack_68);
    ppppuVar3 = &pppuStack_78;
    if (uVar4 == 0) goto LAB_10a0ee040;
  }
  else {
    ppppuVar1 = (undefined8 ****)0x19;
    if ((uVar4 | 7) != 0x17) {
      ppppuVar1 = (undefined8 ****)((uVar4 | 7) + 1);
    }
    ppppuVar3 = ppppuVar1;
    __Znwm();
    uStack_68 = (ulong)ppppuVar1 | 0x8000000000000000;
    pppuStack_78 = ppppuVar3;
    uStack_70 = uVar4;
  }
  _memmove(ppppuVar3,uVar5,uVar4);
LAB_10a0ee040:
  *(undefined1 *)((long)ppppuVar3 + uVar4) = 0;
  FUN_10a0edf4c(&pppuStack_78);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0ee050);
  (*pcVar2)();
}



/* Entry: 10a0edfc4; end: 10a0ee06b;  */

void FUN_10a0edfc4(undefined8 *param_1)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uVar4 = param_1[1];
  if (0x7ffffffffffffff7 < uVar4) {
    func_0x000109ffde50();
  }
  uVar5 = *param_1;
  if (uVar4 < 0x17) {
    uStack_38 = CONCAT17((char)uVar4,(undefined7)uStack_38);
    pppuVar3 = &ppuStack_48;
    if (uVar4 == 0) goto LAB_10a0ee040;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if ((uVar4 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)((uVar4 | 7) + 1);
    }
    pppuVar3 = pppuVar1;
    __Znwm();
    uStack_38 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_48 = pppuVar3;
    uStack_40 = uVar4;
  }
  _memmove(pppuVar3,uVar5,uVar4);
LAB_10a0ee040:
  *(undefined1 *)((long)pppuVar3 + uVar4) = 0;
  FUN_10a0edf4c(&ppuStack_48);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0ee050);
  (*pcVar2)();
}



/* Entry: 10a0ee06c; end: 10a0ee0af;  */

void FUN_10a0ee06c(undefined8 param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c2b054(auStack_38,param_1);
  FUN_10a0edf4c(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0ee094);
  (*pcVar1)();
}



/* Entry: 10a0ee0b0; end: 10a0ee223;  */

undefined4 * FUN_10a0ee0b0(undefined4 *param_1,long param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  int iVar17;
  byte *pbVar18;
  uint *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined4 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar9 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0x42ff0000;
  puVar1 = param_1 + 2;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(uint **)(param_1 + 0x10) = puVar1;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  uStack_40 = *(undefined8 *)(param_2 + 8);
  uVar8 = 2;
  uVar10 = 5;
  puVar5 = param_1;
  func_0x000109a83fd0();
  fVar20 = 0.003921569;
  fVar4 = 6.030863e-08;
  if ((int)param_3 == 0) {
    fVar20 = 6.030863e-08;
    fVar4 = 0.003921569;
  }
  uVar2 = *puVar1;
  if (0 < (int)uVar2) {
    uVar11 = 0;
    lVar12 = *(long *)(param_2 + 0x10);
    lVar13 = **(long **)(param_2 + 0x48);
    lVar14 = *(long *)(param_1 + 4);
    lVar15 = **(long **)(param_1 + 0x12);
    iVar3 = param_1[3];
    do {
      if (0 < iVar3) {
        pbVar18 = (byte *)(lVar12 + uVar11 * lVar13);
        pfVar16 = (float *)(lVar14 + uVar11 * lVar15);
        iVar17 = iVar3;
        do {
          fVar21 = (float)NEON_ucvtf((uint)*pbVar18);
          fVar22 = (float)NEON_ucvtf((uint)pbVar18[1]);
          fVar23 = (float)NEON_ucvtf((uint)pbVar18[2]);
          fVar24 = (float)NEON_ucvtf((uint)pbVar18[3]);
          fVar22 = fVar22 * 1.53787e-05 + fVar4 * fVar21 + fVar20 * fVar23 + fVar24 * 2.3650443e-10;
          fVar21 = 1.0;
          if (fVar22 <= 1.0) {
            fVar21 = fVar22;
          }
          *pfVar16 = fVar21;
          pbVar18 = pbVar18 + 4;
          iVar17 = iVar17 + -1;
          pfVar16 = pfVar16 + 1;
        } while (iVar17 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_48 = FUN_10a0ee224;
    puVar19 = (uint *)&UNK_110ba2468;
    lVar12 = 0xa8;
    puStack_90 = (undefined1 *)puVar9;
    uStack_88 = uVar10;
    puStack_80 = puVar5;
    uStack_78 = uVar8;
    puStack_70 = puVar1;
    uStack_68 = param_3;
    lStack_60 = param_2;
    puStack_58 = param_1;
    puStack_50 = &stack0xfffffffffffffff0;
    while( true ) {
      uVar8 = *(undefined8 *)(puVar19 + -4);
      uVar10 = *(undefined8 *)(puVar19 + -2);
      ppuVar6 = &puStack_80;
      FUN_10a0ee2b4(ppuVar6,uVar8,uVar10,0);
      if ((ppuVar6 != (undefined4 **)0xffffffffffffffff) ||
         (ppuVar7 = &puStack_90, FUN_10a0ee2b4(&puStack_90,uVar8,uVar10,0),
         ppuVar7 != (undefined1 **)0xffffffffffffffff)) break;
      puVar19 = puVar19 + 6;
      lVar12 = lVar12 + -0x18;
      if (lVar12 == 0) {
        return (undefined4 *)0x6;
      }
    }
    return (undefined4 *)(ulong)*puVar19;
  }
  return puVar5;
}



/* Entry: 10a0ee224; end: 10a0ee2b3;  */

undefined4
FUN_10a0ee224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = (undefined4 *)&UNK_110ba2468;
  lVar5 = 0xa8;
  uStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_2;
  while( true ) {
    uVar1 = *(undefined8 *)(puVar4 + -4);
    uVar2 = *(undefined8 *)(puVar4 + -2);
    puVar3 = &uStack_40;
    FUN_10a0ee2b4(puVar3,uVar1,uVar2,0);
    if ((puVar3 != (undefined8 *)0xffffffffffffffff) ||
       (puVar3 = &uStack_50, FUN_10a0ee2b4(&uStack_50,uVar1,uVar2,0),
       puVar3 != (undefined8 *)0xffffffffffffffff)) break;
    puVar4 = puVar4 + 6;
    lVar5 = lVar5 + -0x18;
    if (lVar5 == 0) {
      return 6;
    }
  }
  return *puVar4;
}



/* Entry: 10a0ee2b4; end: 10a0ee367;  */

ulong FUN_10a0ee2b4(long *param_1,char *param_2,long param_3,ulong param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = param_1[1];
  lVar4 = uVar5 - param_4;
  if (uVar5 < param_4) {
    param_4 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    lVar7 = *param_1;
    lVar1 = lVar7 + uVar5;
    lVar6 = lVar1;
    if (param_3 <= lVar4) {
      lVar3 = lVar7 + param_4;
      cVar2 = *param_2;
      do {
        lVar6 = lVar1;
        if (((0xfffffffffffffffe < (ulong)(lVar4 - param_3)) ||
            (_memchr(lVar3,(long)cVar2,(lVar4 - param_3) + 1), lVar3 == 0)) ||
           (lVar4 = lVar3, _memcmp(), lVar6 = lVar3, (int)lVar4 == 0)) break;
        lVar3 = lVar3 + 1;
        lVar4 = lVar1 - lVar3;
        lVar6 = lVar1;
      } while (param_3 <= lVar4);
    }
    param_4 = lVar6 - lVar7;
    if (lVar6 == lVar1) {
      param_4 = 0xffffffffffffffff;
    }
  }
  return param_4;
}



/* Entry: 10a0ee368; end: 10a0ee403;  */

undefined4 FUN_10a0ee368(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000113834ba0 & 1) == 0) {
    uVar1 = 0x113834ba0;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      FUN_10a0ee404();
      uVar2 = uVar1;
      uVar3 = param_2;
      FUN_10a0ee478();
      FUN_10a0ee224(uVar1,param_2,uVar2,uVar3);
      uRam0000000113834b98 = (undefined4)uVar1;
      ___cxa_guard_release(0x113834ba0);
    }
  }
  return uRam0000000113834b98;
}



/* Entry: 10a0ee404; end: 10a0ee477;  */

undefined1  [16] FUN_10a0ee404(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  if ((bRam0000000113834c90 & 1) == 0) {
    uVar2 = 0x113834c90;
    ___cxa_guard_acquire();
    if ((int)uVar2 != 0) {
      func_0x00010a10935c();
      uRam0000000113834c80 = uVar2;
      uRam0000000113834c88 = param_2;
      ___cxa_guard_release(0x113834c90);
    }
  }
  auVar1._8_8_ = uRam0000000113834c88;
  auVar1._0_8_ = uRam0000000113834c80;
  return auVar1;
}



/* Entry: 10a0ee478; end: 10a0ee4eb;  */

undefined1  [16] FUN_10a0ee478(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  if ((bRam0000000113834bf8 & 1) == 0) {
    uVar2 = 0x113834bf8;
    ___cxa_guard_acquire();
    if ((int)uVar2 != 0) {
      FUN_10a1092d0();
      uRam0000000113834be8 = uVar2;
      uRam0000000113834bf0 = param_2;
      ___cxa_guard_release(0x113834bf8);
    }
  }
  auVar1._8_8_ = uRam0000000113834bf0;
  auVar1._0_8_ = uRam0000000113834be8;
  return auVar1;
}



/* Entry: 10a0ee4ec; end: 10a0ee553;  */

undefined4 FUN_10a0ee4ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)&UNK_110ba2510;
  lVar3 = 0x498;
  uStack_30 = param_1;
  uStack_28 = param_2;
  do {
    puVar1 = &uStack_30;
    FUN_10a0ee2b4(&uStack_30,puVar2[-1],*puVar2,0);
    if (puVar1 != (undefined8 *)0xffffffffffffffff) {
      if (lVar3 == 0) {
        return 0x31;
      }
      return *(undefined4 *)(puVar2 + -2);
    }
    puVar2 = puVar2 + 3;
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != 0);
  return 0x31;
}



/* Entry: 10a0ee554; end: 10a0ee5e7;  */

undefined4 FUN_10a0ee554(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000113834bb0 & 1) == 0) {
    uVar1 = 0x113834bb0;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      FUN_10a0ee404();
      FUN_10a0ee478();
      FUN_10a0ee4ec(uVar1,param_2);
      uRam0000000113834ba8 = (undefined4)uVar1;
      ___cxa_guard_release(0x113834bb0);
    }
  }
  return uRam0000000113834ba8;
}



/* Entry: 10a0ee5e8; end: 10a0ee65b;  */

undefined1  [16] FUN_10a0ee5e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  if ((bRam0000000113834d28 & 1) == 0) {
    uVar2 = 0x113834d28;
    ___cxa_guard_acquire();
    if ((int)uVar2 != 0) {
      func_0x00010a1093e8();
      uRam0000000113834d18 = uVar2;
      uRam0000000113834d20 = param_2;
      ___cxa_guard_release(0x113834d28);
    }
  }
  auVar1._8_8_ = uRam0000000113834d20;
  auVar1._0_8_ = uRam0000000113834d18;
  return auVar1;
}



/* Entry: 10a0ee65c; end: 10a0ee71b;  */

undefined8 FUN_10a0ee65c(void)

{
  int iVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if ((bRam0000000113834bd0 & 1) == 0) {
    iVar1 = 0x13834bd0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10ad5b1fc(auStack_38);
      FUN_10a10271c(0x113834bb8,auStack_38,0x2e);
      uRam0000000113834bc8 = 1;
      if (cStack_21 < '\0') {
        __ZdlPv(auStack_38[0]);
      }
      ___cxa_guard_release(0x113834bd0);
    }
  }
  return 0x113834bb8;
}



/* Entry: 10a0ee71c; end: 10a0ee743;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a0ee71c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    lVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar2;
    param_1[2] = param_2[2];
    return;
  }
  lVar2 = *param_2;
  uVar1 = param_2[1];
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a0ee744; end: 10a0ee87f;  */

void FUN_10a0ee744(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (*param_2 == 0) {
    func_0x000107c2b054(param_1,&UNK_10f63b364);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,param_2);
  __ZSt17rethrow_exceptionSt13exception_ptr();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0ee794);
  (*pcVar1)();
}



/* Entry: 10a0ee880; end: 10a0ee8ff;  */

long FUN_10a0ee880(long param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  func_0x000104c5e210();
  if (param_1 != 0) {
    return param_1 + 0x28;
  }
  FUN_10a0ee900(auStack_38,&UNK_10f63b395,0x17);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0ee8e4);
  (*pcVar1)();
}



/* Entry: 10a0ee900; end: 10a0ee927;  */

void FUN_10a0ee900(undefined8 param_1,undefined8 param_2)

{
  FUN_10a101be4(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 10a0ee928; end: 10a0eeaf7;  */

void FUN_10a0ee928(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x3f800000;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar6 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)param_2[1];
  if (puVar6 != puVar3) {
    do {
      puVar1 = (undefined8 *)*puVar6;
      puVar4 = (undefined *)puVar6[1];
      if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
        puVar1 = puVar6;
        puVar4 = (undefined *)(ulong)*(byte *)((long)puVar6 + 0x17);
      }
      lVar8 = 0x300;
      ppuVar7 = &PTR_PTR_110ba29a8;
      do {
        if (ppuVar7[-1] == puVar4) {
          puVar5 = ppuVar7[-2];
          _memcmp(puVar5,puVar1,puVar4);
          if ((int)puVar5 == 0) {
            if (lVar8 != 0) {
              FUN_10a0eeaf8(&uStack_b0,param_1,*ppuVar7,ppuVar7[1]);
              lStack_b8 = (long)*(char *)((long)puVar6 + 0x17);
              puStack_c0 = puVar6;
              if (lStack_b8 < 0) {
                lStack_b8 = puVar6[1];
                puStack_c0 = (undefined8 *)*puVar6;
              }
              func_0x0001086af96c(&uStack_80,&puStack_c0,&puStack_c0);
            }
            break;
          }
        }
        ppuVar7 = ppuVar7 + 4;
        lVar8 = lVar8 + -0x20;
      } while (lVar8 != 0);
      puVar6 = puVar6 + 3;
    } while (puVar6 != puVar3);
  }
  lVar8 = 0;
  do {
    puVar6 = &uStack_80;
    func_0x0001086eb2c8(puVar6,(undefined8 *)((long)&PTR_DAT_110ba2c98 + lVar8));
    if (puVar6 == (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)((long)&PTR_DAT_110ba2c98 + lVar8);
      puVar4 = *(undefined **)(&UNK_110ba2ca0 + lVar8);
      lVar9 = 0x300;
      ppuVar7 = &PTR_PTR_110ba29a8;
      do {
        if (ppuVar7[-1] == puVar4) {
          puVar5 = ppuVar7[-2];
          _memcmp(puVar5,uVar2,puVar4);
          if ((int)puVar5 == 0) {
            if (lVar9 != 0) {
              FUN_10a0eeaf8(&uStack_b0,param_1,*ppuVar7,ppuVar7[1]);
            }
            break;
          }
        }
        ppuVar7 = ppuVar7 + 4;
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != 0);
    }
    lVar8 = lVar8 + 0x10;
    if (lVar8 == 0x160) {
      func_0x00010a109474(&uStack_b0);
      func_0x0001086af8b0(&uStack_80);
      return;
    }
  } while( true );
}



/* Entry: 10a0eeaf8; end: 10a0ef2e3;  */

void FUN_10a0eeaf8(long *param_1,long *param_2,ulong *param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *******pppppppuVar13;
  long *plVar14;
  undefined8 ******ppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 ******ppppppuVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *******unaff_x20;
  undefined8 *******pppppppuVar21;
  ulong uVar22;
  undefined4 *puVar23;
  undefined8 *******pppppppuVar24;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******ppppppuStack_88;
  undefined8 ******ppppppuStack_80;
  undefined8 uStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 ******ppppppuStack_68;
  
  if (param_4 != 0) {
    puVar2 = param_3 + param_4 * 2;
    plVar1 = param_1 + 2;
    do {
      uVar22 = *param_3;
      uVar11 = ((ulong)(uint)((int)uVar22 << 3) + 8 ^ uVar22 >> 0x20) * -0x622015f714c7d297;
      uVar11 = (uVar22 >> 0x20 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
      pppppppuVar21 = (undefined8 *******)((uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297);
      pppppppuVar24 = (undefined8 *******)param_1[1];
      if (pppppppuVar24 != (undefined8 *******)0x0) {
        uVar11 = (long)pppppppuVar24 - 1;
        if (((ulong)pppppppuVar24 & uVar11) == 0) {
          unaff_x20 = (undefined8 *******)((ulong)pppppppuVar21 & uVar11);
        }
        else {
          unaff_x20 = pppppppuVar21;
          if (pppppppuVar24 <= pppppppuVar21) {
            uVar5 = 0;
            if (pppppppuVar24 != (undefined8 *******)0x0) {
              uVar5 = (ulong)pppppppuVar21 / (ulong)pppppppuVar24;
            }
            unaff_x20 = (undefined8 *******)((long)pppppppuVar21 - uVar5 * (long)pppppppuVar24);
          }
        }
        plVar12 = *(long **)(*param_1 + (long)unaff_x20 * 8);
        if (plVar12 != (long *)0x0) {
          do {
            while( true ) {
              plVar12 = (long *)*plVar12;
              if (plVar12 == (long *)0x0) goto LAB_10a0eec08;
              pppppppuVar16 = (undefined8 *******)plVar12[1];
              if (pppppppuVar16 != pppppppuVar21) break;
              if (plVar12[2] == uVar22) goto LAB_10a0ef1b0;
            }
            if (((ulong)pppppppuVar24 & uVar11) == 0) {
              pppppppuVar16 = (undefined8 *******)((ulong)pppppppuVar16 & uVar11);
            }
            else if (pppppppuVar24 <= pppppppuVar16) {
              uVar5 = 0;
              if (pppppppuVar24 != (undefined8 *******)0x0) {
                uVar5 = (ulong)pppppppuVar16 / (ulong)pppppppuVar24;
              }
              pppppppuVar16 =
                   (undefined8 *******)((long)pppppppuVar16 - uVar5 * (long)pppppppuVar24);
            }
          } while (pppppppuVar16 == unaff_x20);
        }
      }
LAB_10a0eec08:
      plVar12 = (long *)0x18;
      __Znwm();
      *plVar12 = 0;
      plVar12[1] = (long)pppppppuVar21;
      plVar12[2] = uVar22;
      if ((pppppppuVar24 == (undefined8 *******)0x0) ||
         (*(float *)(param_1 + 4) * (float)pppppppuVar24 < (float)(param_1[3] + 1))) {
        uVar11 = 1;
        if ((undefined8 *******)0x2 < pppppppuVar24) {
          uVar11 = (ulong)(((ulong)pppppppuVar24 & (long)pppppppuVar24 - 1U) != 0);
        }
        pppppppuVar16 = (undefined8 *******)(uVar11 | (long)pppppppuVar24 << 1);
        pppppppuVar13 =
             (undefined8 *******)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (pppppppuVar16 <= pppppppuVar13) {
          pppppppuVar16 = pppppppuVar13;
        }
        if ((long)pppppppuVar16 - 1U == 0) {
          pppppppuVar16 = (undefined8 *******)0x2;
        }
        else if (((ulong)pppppppuVar16 & (long)pppppppuVar16 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          pppppppuVar24 = (undefined8 *******)param_1[1];
        }
        if (pppppppuVar24 < pppppppuVar16) {
LAB_10a0eeca0:
          if ((ulong)pppppppuVar16 >> 0x3d != 0) {
            func_0x000109ffded8();
            goto LAB_10a0ef244;
          }
          lVar8 = (long)pppppppuVar16 << 3;
          __Znwm();
          lVar9 = *param_1;
          *param_1 = lVar8;
          if (lVar9 != 0) {
            __ZdlPv();
          }
          pppppppuVar24 = (undefined8 *******)0x0;
          param_1[1] = (long)pppppppuVar16;
          do {
            *(undefined8 *)(*param_1 + (long)pppppppuVar24 * 8) = 0;
            pppppppuVar24 = (undefined8 *******)((long)pppppppuVar24 + 1);
          } while (pppppppuVar16 != pppppppuVar24);
          plVar14 = (long *)*plVar1;
          pppppppuVar24 = pppppppuVar16;
          if (plVar14 != (long *)0x0) {
            pppppppuVar13 = (undefined8 *******)plVar14[1];
            uVar11 = (long)pppppppuVar16 - 1;
            if (((ulong)pppppppuVar16 & uVar11) == 0) {
              pppppppuVar13 = (undefined8 *******)((ulong)pppppppuVar13 & uVar11);
            }
            else if (pppppppuVar16 <= pppppppuVar13) {
              uVar22 = 0;
              if (pppppppuVar16 != (undefined8 *******)0x0) {
                uVar22 = (ulong)pppppppuVar13 / (ulong)pppppppuVar16;
              }
              pppppppuVar13 =
                   (undefined8 *******)((long)pppppppuVar13 - uVar22 * (long)pppppppuVar16);
            }
            *(long **)(*param_1 + (long)pppppppuVar13 * 8) = plVar1;
            plVar18 = (long *)*plVar14;
            while (plVar18 != (long *)0x0) {
              pppppppuVar20 = (undefined8 *******)plVar18[1];
              if (((ulong)pppppppuVar16 & uVar11) == 0) {
                pppppppuVar20 = (undefined8 *******)((ulong)pppppppuVar20 & uVar11);
              }
              else if (pppppppuVar16 <= pppppppuVar20) {
                uVar22 = 0;
                if (pppppppuVar16 != (undefined8 *******)0x0) {
                  uVar22 = (ulong)pppppppuVar20 / (ulong)pppppppuVar16;
                }
                pppppppuVar20 =
                     (undefined8 *******)((long)pppppppuVar20 - uVar22 * (long)pppppppuVar16);
              }
              plVar19 = plVar18;
              if (pppppppuVar20 != pppppppuVar13) {
                lVar8 = *param_1;
                if (*(long *)(lVar8 + (long)pppppppuVar20 * 8) == 0) {
                  *(long **)(lVar8 + (long)pppppppuVar20 * 8) = plVar14;
                  pppppppuVar13 = pppppppuVar20;
                }
                else {
                  *plVar14 = *plVar18;
                  *plVar18 = **(undefined8 **)(lVar8 + (long)pppppppuVar20 * 8);
                  **(long **)(lVar8 + (long)pppppppuVar20 * 8) = (long)plVar18;
                  plVar19 = plVar14;
                }
              }
              plVar14 = plVar19;
              plVar18 = (long *)*plVar19;
            }
          }
        }
        else if (pppppppuVar16 < pppppppuVar24) {
          pppppppuVar13 =
               (undefined8 *******)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          if ((pppppppuVar24 < (undefined8 *******)0x3) ||
             (((ulong)pppppppuVar24 & (long)pppppppuVar24 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((undefined8 *******)0x1 < pppppppuVar13) {
            pppppppuVar13 = (undefined8 *******)(1L << (-LZCOUNT((long)pppppppuVar13 + -1) & 0x3fU))
            ;
          }
          if (pppppppuVar16 <= pppppppuVar13) {
            pppppppuVar16 = pppppppuVar13;
          }
          if (pppppppuVar16 < pppppppuVar24) {
            if (pppppppuVar16 != (undefined8 *******)0x0) goto LAB_10a0eeca0;
            lVar8 = *param_1;
            *param_1 = 0;
            if (lVar8 != 0) {
              __ZdlPv();
            }
            param_1[1] = 0;
            pppppppuVar24 = (undefined8 *******)0x0;
          }
          else {
            pppppppuVar24 = (undefined8 *******)param_1[1];
          }
        }
        if (((ulong)pppppppuVar24 & (long)pppppppuVar24 - 1U) == 0) {
          unaff_x20 = (undefined8 *******)((long)pppppppuVar24 - 1U & (ulong)pppppppuVar21);
        }
        else {
          unaff_x20 = pppppppuVar21;
          if (pppppppuVar24 <= pppppppuVar21) {
            uVar11 = 0;
            if (pppppppuVar24 != (undefined8 *******)0x0) {
              uVar11 = (ulong)pppppppuVar21 / (ulong)pppppppuVar24;
            }
            unaff_x20 = (undefined8 *******)((long)pppppppuVar21 - uVar11 * (long)pppppppuVar24);
          }
        }
      }
      lVar8 = *param_1;
      plVar14 = *(long **)(lVar8 + (long)unaff_x20 * 8);
      if (plVar14 == (long *)0x0) {
        *plVar12 = *plVar1;
        *plVar1 = (long)plVar12;
        *(long **)(lVar8 + (long)unaff_x20 * 8) = plVar1;
        if (*plVar12 != 0) {
          pppppppuVar21 = *(undefined8 ********)(*plVar12 + 8);
          if (((ulong)pppppppuVar24 & (long)pppppppuVar24 - 1U) == 0) {
            pppppppuVar21 = (undefined8 *******)((ulong)pppppppuVar21 & (long)pppppppuVar24 - 1U);
          }
          else if (pppppppuVar24 <= pppppppuVar21) {
            uVar11 = 0;
            if (pppppppuVar24 != (undefined8 *******)0x0) {
              uVar11 = (ulong)pppppppuVar21 / (ulong)pppppppuVar24;
            }
            pppppppuVar21 = (undefined8 *******)((long)pppppppuVar21 - uVar11 * (long)pppppppuVar24)
            ;
          }
          plVar14 = (long *)(*param_1 + (long)pppppppuVar21 * 8);
          goto LAB_10a0eee80;
        }
      }
      else {
        *plVar12 = *plVar14;
LAB_10a0eee80:
        *plVar14 = (long)plVar12;
      }
      param_1[3] = param_1[3] + 1;
      ppppppuStack_b0 = (undefined8 *******)0x0;
      ppppppuStack_a8 = (undefined8 *******)0x0;
      ppppppuStack_a0 = (undefined8 *******)0x0;
      if (param_3[1] != 0) {
        puVar23 = (undefined4 *)(*param_3 + 0x10);
        lVar8 = param_3[1] << 5;
        do {
          uVar3 = *(undefined8 *)(puVar23 + -4);
          pppppppuVar24 = *(undefined8 ********)(puVar23 + -2);
          if (((bRam00000001137ea558 & 1) == 0) &&
             (iVar7 = 0x137ea558, ___cxa_guard_acquire(), iVar7 != 0)) {
            FUN_10a103160();
            ___cxa_atexit(0x10a0f5100,0x1137ea5a8,0x100000000);
            ___cxa_guard_release(0x1137ea558);
          }
          if ((undefined8 *******)0x7ffffffffffffff7 < pppppppuVar24) {
            func_0x000109ffde50();
            goto LAB_10a0ef244;
          }
          if (pppppppuVar24 < (undefined8 *******)0x17) {
            uStack_78 = (undefined8 *******)CONCAT17((char)pppppppuVar24,(undefined7)uStack_78);
            pppppppuVar16 = &ppppppuStack_88;
            if (pppppppuVar24 != (undefined8 *******)0x0) goto LAB_10a0eef04;
          }
          else {
            pppppppuVar21 = (undefined8 *******)0x19;
            if (((ulong)pppppppuVar24 | 7) != 0x17) {
              pppppppuVar21 = (undefined8 *******)(((ulong)pppppppuVar24 | 7) + 1);
            }
            pppppppuVar16 = pppppppuVar21;
            __Znwm();
            uStack_78 = (undefined8 *******)((ulong)pppppppuVar21 | 0x8000000000000000);
            ppppppuStack_88 = pppppppuVar16;
            ppppppuStack_80 = pppppppuVar24;
LAB_10a0eef04:
            _memmove(pppppppuVar16,uVar3,pppppppuVar24);
          }
          *(undefined1 *)((long)pppppppuVar16 + (long)pppppppuVar24) = 0;
          pppppppuVar24 = &ppppppuStack_88;
          lVar9 = 0x1137ea5a8;
          func_0x0001067e045c();
          pppppppuVar21 = (undefined8 *******)ppppppuStack_a8;
          if ((long)uStack_78 < 0) {
            __ZdlPv(ppppppuStack_88);
            pppppppuVar21 = (undefined8 *******)ppppppuStack_a8;
          }
          ppppppuStack_a8 = pppppppuVar21;
          if (lVar9 != 0) {
            if (pppppppuVar21 < ppppppuStack_a0) {
              FUN_10a1035ac(pppppppuVar21,*(undefined8 *)(puVar23 + -4),
                            *(undefined8 *)(puVar23 + -2),*puVar23,*(undefined1 *)(puVar23 + 1),
                            puVar23[2],*(undefined1 *)(puVar23 + 3));
              ppppppuStack_a8 = pppppppuVar21 + 5;
            }
            else {
              lVar9 = (long)pppppppuVar21 - (long)ppppppuStack_b0;
              ppppppuVar15 = (undefined8 ******)((lVar9 >> 3) * -0x3333333333333333 + 1);
              if ((undefined8 ******)0x666666666666666 < ppppppuVar15) {
                FUN_10a103434();
                goto LAB_10a0ef244;
              }
              lVar10 = (long)ppppppuStack_a0 - (long)ppppppuStack_b0 >> 3;
              ppppppuVar17 = (undefined8 ******)(lVar10 * -0x6666666666666666);
              if (ppppppuVar17 < ppppppuVar15 || (long)ppppppuVar17 - (long)ppppppuVar15 == 0) {
                ppppppuVar17 = ppppppuVar15;
              }
              if (0x333333333333332 < (ulong)(lVar10 * -0x3333333333333333)) {
                ppppppuVar17 = (undefined8 ******)0x666666666666666;
              }
              ppppppuStack_68 = &ppppppuStack_b0;
              if (ppppppuVar17 == (undefined8 ******)0x0) {
                ppppppuVar17 = (undefined8 ******)0x0;
                pppppppuVar24 = (undefined8 *******)0x0;
              }
              else {
                func_0x00010a103448();
              }
              lVar9 = (long)ppppppuVar17 + lVar9;
              ppppppuStack_88 = ppppppuVar17;
              ppppppuStack_80 = (undefined8 ******)lVar9;
              uStack_78 = (undefined8 *******)lVar9;
              ppppppuStack_70 = ppppppuVar17 + (long)pppppppuVar24 * 5;
              FUN_10a1035ac(lVar9,*(undefined8 *)(puVar23 + -4),*(undefined8 *)(puVar23 + -2),
                            *puVar23,*(undefined1 *)(puVar23 + 1),puVar23[2],
                            *(undefined1 *)(puVar23 + 3));
              pppppppuVar21 =
                   (undefined8 *******)((long)ppppppuStack_b0 + (lVar9 - (long)ppppppuStack_a8));
              func_0x00010a10348c(ppppppuStack_b0,ppppppuStack_a8,pppppppuVar21);
              uStack_78 = (undefined8 *******)ppppppuStack_b0;
              ppppppuStack_70 = ppppppuStack_a0;
              ppppppuStack_88 = ppppppuStack_b0;
              ppppppuStack_80 = ppppppuStack_b0;
              ppppppuStack_b0 = pppppppuVar21;
              ppppppuStack_a8 = (undefined8 *******)(lVar9 + 0x28);
              ppppppuStack_a0 = ppppppuVar17 + (long)pppppppuVar24 * 5;
              func_0x00010a10350c(&ppppppuStack_88);
              ppppppuStack_a8 = (undefined8 *******)(lVar9 + 0x28);
            }
          }
          ppppppuVar17 = ppppppuStack_a8;
          ppppppuVar15 = ppppppuStack_b0;
          puVar23 = puVar23 + 8;
          lVar8 = lVar8 + -0x20;
        } while (lVar8 != 0);
        unaff_x20 = (undefined8 *******)ppppppuStack_b0;
        if (ppppppuStack_b0 != ppppppuStack_a8) {
          puVar4 = (undefined8 *)param_2[1];
          if (puVar4 < (undefined8 *)param_2[2]) {
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[1] = ppppppuStack_a8;
            *puVar4 = ppppppuStack_b0;
            puVar4[2] = ppppppuStack_a0;
            ppppppuStack_b0 = (undefined8 *******)0x0;
            ppppppuStack_a8 = (undefined8 *******)0x0;
            ppppppuStack_a0 = (undefined8 *******)0x0;
            unaff_x20 = (undefined8 *******)(puVar4 + 3);
          }
          else {
            lVar8 = *param_2;
            uVar11 = ((long)puVar4 - lVar8 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar11) {
              FUN_10a1033b0();
LAB_10a0ef244:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0ef248);
              (*pcVar6)();
            }
            lVar9 = param_2[2] - lVar8 >> 3;
            uVar22 = lVar9 * 0x5555555555555556;
            if (uVar22 < uVar11 || uVar22 - uVar11 == 0) {
              uVar22 = uVar11;
            }
            if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
              uVar22 = 0xaaaaaaaaaaaaaaa;
            }
            if (0xaaaaaaaaaaaaaaa < uVar22) {
              func_0x000109ffded8();
              goto LAB_10a0ef244;
            }
            lVar9 = uVar22 * 0x18;
            __Znwm();
            puVar4 = (undefined8 *)(lVar9 + ((long)puVar4 - lVar8));
            *puVar4 = ppppppuVar15;
            puVar4[1] = ppppppuVar17;
            puVar4[2] = ppppppuStack_a0;
            ppppppuStack_a8 = (undefined8 *******)0x0;
            ppppppuStack_a0 = (undefined8 *******)0x0;
            ppppppuStack_b0 = (undefined8 *******)0x0;
            unaff_x20 = (undefined8 *******)(puVar4 + 3);
            _memcpy();
            *param_2 = lVar9;
            param_2[1] = (long)unaff_x20;
            param_2[2] = lVar9 + uVar22 * 0x18;
            if (lVar8 != 0) {
              __ZdlPv(lVar8);
            }
          }
          param_2[1] = (long)unaff_x20;
        }
      }
      ppppppuStack_88 = &ppppppuStack_b0;
      func_0x00010a10356c(&ppppppuStack_88);
LAB_10a0ef1b0:
      param_3 = param_3 + 2;
    } while (param_3 != puVar2);
  }
  return;
}



/* Entry: 10a0ef2e4; end: 10a0ef52b;  */

/* WARNING: Removing unreachable block (ram,0x00010a0ef36c) */

void FUN_10a0ef2e4(undefined8 *param_1,long *param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  puVar4 = (undefined8 *)*param_2;
  puVar5 = (undefined8 *)param_2[1];
  if (puVar4 == puVar5) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    return;
  }
  puStack_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  uVar6 = 0x7fffffff;
  uStack_68 = 0;
  do {
    if (*(char *)((long)puVar4 + 0x24) == '\x01') {
      if (-1 < *(char *)((long)puVar4 + 0x17)) goto LAB_10a0ef488;
      func_0x000107c3192c(&ppuStack_a0,*puVar4,puVar4[1]);
      goto LAB_10a0ef498;
    }
    uVar3 = *(int *)(puVar4 + 3) - param_3;
    uVar1 = -uVar3;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    if ((int)uVar1 <= (int)uVar6) {
      if (uVar1 < uVar6) {
        for (; puStack_70 != puStack_78; puStack_70 = puStack_70 + -5) {
        }
        puStack_70 = puStack_78;
        uVar6 = uVar1;
      }
      if (puStack_78 == puStack_70) {
        FUN_10a0ef578(&puStack_78,puVar4);
      }
      else if (*(int *)(puStack_78 + 3) == *(int *)(puVar4 + 3)) {
        FUN_10a0ef578(&puStack_78,puVar4);
      }
    }
    puVar4 = puVar4 + 5;
  } while (puVar4 != puVar5);
  puVar4 = puStack_78;
  if (param_4 == 0) {
    puVar5 = puStack_78;
    if (puStack_78 != puStack_70) {
      do {
        puVar4 = puVar5;
        if (*(char *)((long)puVar5 + 0x1c) != '\x01') break;
        puVar5 = puVar5 + 5;
        puVar4 = puStack_70;
      } while (puVar5 != puStack_70);
      goto LAB_10a0ef444;
    }
LAB_10a0ef478:
    if (puVar4 != puStack_70) {
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_a0,*puVar4,puVar4[1]);
      }
      else {
LAB_10a0ef488:
        uStack_98 = puVar4[1];
        ppuStack_a0 = (undefined8 **)*puVar4;
        uStack_90 = puVar4[2];
      }
LAB_10a0ef498:
      uVar2 = *(undefined4 *)(puVar4 + 4);
      param_1[1] = uStack_98;
      *param_1 = ppuStack_a0;
      param_1[2] = uStack_90;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined1 *)(param_1 + 4) = 1;
      goto LAB_10a0ef4b8;
    }
  }
  else {
    puVar5 = puStack_78;
    if (puStack_78 == puStack_70) goto LAB_10a0ef478;
    do {
      puVar4 = puVar5;
      if ((*(byte *)((long)puVar5 + 0x1c) & 1) != 0) break;
      puVar5 = puVar5 + 5;
      puVar4 = puStack_70;
    } while (puVar5 != puStack_70);
LAB_10a0ef444:
    if (((param_4 == 0) || (puVar4 != puStack_70)) ||
       (puVar4 = puStack_78, puStack_78 == puStack_70)) goto LAB_10a0ef478;
    do {
      if (*(char *)((long)puVar4 + 0x1c) != '\x01') goto LAB_10a0ef478;
      puVar4 = puVar4 + 5;
    } while (puVar4 != puStack_70);
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
LAB_10a0ef4b8:
  ppuStack_a0 = &puStack_78;
  func_0x00010a10356c(&ppuStack_a0);
  return;
}



/* Entry: 10a0ef52c; end: 10a0ef577;  */

/* WARNING: Removing unreachable block (ram,0x00010a0ef558) */

void FUN_10a0ef52c(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a0ef578; end: 10a0ef713;  */

ulong FUN_10a0ef578(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong *param_5
                   ,ulong *param_6)

{
  ulong *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  undefined8 uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fStack_b50;
  uint auStack_b4c [623];
  undefined8 uStack_190;
  undefined1 auStack_184 [4];
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  float *pfStack_168;
  float *pfStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  
  puVar5 = (ulong *)param_5[1];
  if (puVar5 < (ulong *)param_5[2]) {
    if (*(char *)((long)param_6 + 0x17) < '\0') {
      func_0x000107c3192c(puVar5,*param_6,param_6[1]);
    }
    else {
      uVar7 = param_6[1];
      param_1 = *param_6;
      puVar5[2] = param_6[2];
      puVar5[1] = uVar7;
      *puVar5 = param_1;
    }
    uVar7 = param_6[3];
    *(undefined8 *)((long)puVar5 + 0x1d) = *(undefined8 *)((long)param_6 + 0x1d);
    puVar5[3] = uVar7;
    puVar5 = puVar5 + 5;
    param_5[1] = (ulong)puVar5;
  }
  else {
    lVar14 = (long)puVar5 - *param_5;
    uVar7 = (lVar14 >> 3) * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar7) {
      FUN_10a103434();
      func_0x00010a10350c(&uStack_68);
      __Unwind_Resume();
      uVar7 = *param_5;
      uVar10 = param_5[1];
      if (uVar7 == uVar10) {
        return 0;
      }
      func_0x00010a103678(uVar7,uVar10,
                          LZCOUNT(((long)(uVar10 - uVar7) >> 2) * -0x5555555555555555) * -2 + 0x7e,1
                         );
      pfStack_168 = (float *)0x0;
      pfStack_160 = (float *)0x0;
      uStack_158 = 0;
      lStack_180 = 0;
      lStack_178 = 0;
      uStack_170 = 0;
      func_0x00010983ca2c(&pfStack_168,((long)(param_5[1] - *param_5) >> 2) * -0x5555555555555555);
      func_0x0001073b504c(&lStack_180,((long)(param_5[1] - *param_5) >> 2) * -0x5555555555555555);
      if (param_5[1] != *param_5) {
        FUN_10a0efe48(&pfStack_168);
        pfVar8 = (float *)*param_5;
        if ((float *)param_5[1] != pfVar8) {
          fVar21 = (float)*(undefined8 *)(pfVar8 + 1);
          fVar25 = (float)((ulong)*(undefined8 *)(pfVar8 + 1) >> 0x20);
          fStack_b50 = SQRT(*pfVar8 * *pfVar8 + fVar21 * fVar21 + fVar25 * fVar25);
          FUN_10a001c34(&lStack_180,&fStack_b50);
          uVar7 = *param_5;
          uVar10 = param_5[1];
          if (1 < (ulong)(((long)(uVar10 - uVar7) >> 2) * -0x5555555555555555)) {
            uVar15 = 1;
            do {
              puVar6 = (undefined8 *)(uVar7 + uVar15 * 0xc);
              uVar22 = *puVar6;
              fVar21 = (float)uVar22;
              fVar25 = (float)((ulong)uVar22 >> 0x20);
              fVar24 = *(float *)(puVar6 + 1);
              param_4 = (ulong)(uint)(fVar24 * fVar24);
              uVar11 = ((long)pfStack_160 - (long)pfStack_168 >> 2) * -0x5555555555555555;
              uVar12 = uVar11;
              do {
                uVar12 = uVar12 - 1;
                if ((int)uVar12 < 0) {
LAB_10a0ef8e0:
                  FUN_10a0efe48(&pfStack_168);
                  uVar7 = ((long)(param_5[1] - *param_5) >> 2) * -0x5555555555555555;
                  if (uVar7 < uVar15 || uVar7 - uVar15 == 0) goto LAB_10a0efdf4;
                  pfVar8 = (float *)(*param_5 + uVar15 * 0xc);
                  fVar21 = *pfVar8;
                  uVar22 = *(undefined8 *)(pfVar8 + 1);
                  fVar25 = (float)uVar22;
                  fVar24 = (float)((ulong)uVar22 >> 0x20);
                  fStack_b50 = SQRT(fVar21 * fVar21 + fVar25 * fVar25 + fVar24 * fVar24);
                  FUN_10a001c34(&lStack_180,&fStack_b50);
                  uVar7 = *param_5;
                  uVar10 = param_5[1];
                  break;
                }
                uVar13 = uVar12 & 0x7fffffff;
                if ((ulong)(lStack_178 - lStack_180 >> 2) <= uVar13) goto LAB_10a0efdf4;
                fVar29 = SQRT(fVar21 * fVar21 + fVar25 * fVar25 + fVar24 * fVar24) -
                         *(float *)(lStack_180 + uVar13 * 4);
                param_4 = (ulong)(uint)fVar29;
                if (0.049999997 < fVar29) goto LAB_10a0ef8e0;
                if (uVar11 < uVar13 || uVar11 - uVar13 == 0) goto LAB_10a0efdf4;
                fVar29 = fVar24 - (pfStack_168 + uVar13 * 3)[2];
                uVar22 = *(undefined8 *)(pfStack_168 + uVar13 * 3);
                fVar32 = fVar21 - (float)uVar22;
                fVar35 = fVar25 - (float)((ulong)uVar22 >> 0x20);
                fVar29 = SQRT(fVar32 * fVar32 + fVar35 * fVar35 + fVar29 * fVar29);
                param_4 = (ulong)(uint)fVar29;
              } while (0.01 <= fVar29);
              uVar15 = uVar15 + 1;
              uVar12 = ((long)(uVar10 - uVar7) >> 2) * -0x5555555555555555;
            } while (uVar15 <= uVar12 && uVar12 - uVar15 != 0);
          }
          func_0x000107c2b070(auStack_184);
          puVar4 = auStack_184;
          __ZNSt3__113random_deviceclEv();
          fStack_b50 = SUB84(puVar4,0);
          lVar14 = 1;
          do {
            uVar2 = (int)lVar14 + ((uint)puVar4 ^ (uint)puVar4 >> 0x1e) * 0x6c078965;
            puVar4 = (undefined1 *)(ulong)uVar2;
            auStack_b4c[lVar14 + -1] = uVar2;
            lVar14 = lVar14 + 1;
          } while (lVar14 != 0x270);
          uStack_190 = 0;
          if (0xc < (long)pfStack_160 - (long)pfStack_168) {
            uStack_138 = 0x7fffffffffffffff;
            uStack_140 = 0;
            pfVar8 = pfStack_160 + -3;
            if (pfStack_168 < pfVar8) {
              uVar7 = (ulong)((long)pfStack_160 - (long)pfStack_168) / 0xc;
              pfVar17 = pfStack_168;
              pfVar18 = pfStack_168;
              do {
                uVar7 = uVar7 - 1;
                uStack_150 = 0;
                puVar6 = &uStack_140;
                uStack_148 = uVar7;
                func_0x000109453a74(puVar6,&fStack_b50,&uStack_150);
                if (puVar6 != (undefined8 *)0x0) {
                  pfVar16 = pfVar18 + (long)puVar6 * 3;
                  fVar21 = pfVar17[2];
                  uVar22 = *(undefined8 *)pfVar17;
                  fVar25 = pfVar16[2];
                  *(undefined8 *)pfVar17 = *(undefined8 *)pfVar16;
                  pfVar17[2] = fVar25;
                  *(undefined8 *)pfVar16 = uVar22;
                  pfVar16[2] = fVar21;
                }
                pfVar17 = pfVar17 + 3;
                pfVar18 = pfVar18 + 3;
              } while (pfVar17 < pfVar8);
            }
          }
          pfVar8 = pfStack_168;
          uVar7 = 0;
          if (pfStack_168 == pfStack_160) {
            uVar10 = 0;
          }
          else {
            uVar11 = ((long)pfStack_160 - (long)pfStack_168 >> 2) * -0x5555555555555555;
            uVar10 = (ulong)(uint)*pfStack_168;
            uVar15 = (ulong)(uint)pfStack_168[1];
            uVar12 = (ulong)(uint)pfStack_168[2];
            if (1 < uVar11) {
              uVar13 = 1;
              do {
                pfVar17 = pfVar8 + uVar13 * 3;
                fVar29 = *pfVar17;
                fVar32 = pfVar17[1];
                fVar21 = fVar29 - (float)uVar10;
                fVar25 = fVar32 - (float)uVar15;
                fVar35 = pfVar17[2];
                fVar24 = fVar35 - (float)uVar12;
                if ((float)uVar7 * (float)uVar7 + 1.1920929e-07 <
                    fVar21 * fVar21 + fVar25 * fVar25 + fVar24 * fVar24) {
                  uVar19 = 0;
                  uVar7 = 0;
                  uVar10 = (ulong)(uint)fVar29;
                  uVar15 = (ulong)(uint)fVar32;
                  uVar12 = (ulong)(uint)fVar35;
                  uVar31 = param_4;
                  do {
                    pfVar18 = pfVar8 + uVar19 * 3;
                    fVar40 = *pfVar18;
                    fVar41 = pfVar18[1];
                    fVar21 = fVar40 - (float)uVar10;
                    fVar24 = fVar41 - (float)uVar15;
                    fVar42 = pfVar18[2];
                    fVar25 = fVar42 - (float)uVar12;
                    fVar25 = fVar25 * fVar25;
                    uVar28 = (ulong)(uint)fVar25;
                    fVar25 = fVar21 * fVar21 + fVar24 * fVar24 + fVar25;
                    uVar23 = (ulong)(uint)fVar25;
                    fVar21 = (float)uVar7 * (float)uVar7 + 1.1920929e-07;
                    uVar27 = (ulong)(uint)fVar21;
                    param_4 = uVar31;
                    if ((fVar21 < fVar25) &&
                       (FUN_10a104900(pfVar17,pfVar18), param_4 = uVar31, uVar7 = uVar31,
                       uVar10 = uVar23, uVar15 = uVar27, uVar12 = uVar28, uVar19 != 0)) {
                      fVar40 = fVar40 - fVar29;
                      fVar41 = fVar41 - fVar32;
                      fVar42 = fVar42 - fVar35;
                      fVar21 = fVar40 * fVar40 + fVar41 * fVar41 + fVar42 * fVar42;
                      fVar25 = (float)uVar23;
                      pfVar16 = pfVar8;
                      uVar20 = uVar19;
                      do {
                        fVar24 = *pfVar16 - (float)uVar23;
                        fVar33 = pfVar16[1] - (float)uVar15;
                        fVar36 = pfVar16[2] - (float)uVar12;
                        fVar24 = fVar24 * fVar24 + fVar33 * fVar33 + fVar36 * fVar36;
                        param_4 = (ulong)(uint)fVar24;
                        if ((float)uVar7 * (float)uVar7 + 1.1920929e-07 < fVar24) {
                          fVar33 = *pfVar16 - fVar29;
                          fVar24 = pfVar16[1] - fVar32;
                          fVar36 = pfVar16[2] - fVar35;
                          fVar30 = -(fVar24 * fVar42) + fVar36 * fVar41;
                          uVar7 = (ulong)(uint)fVar30;
                          fVar34 = -(fVar36 * fVar40) + fVar33 * fVar42;
                          fVar37 = -(fVar33 * fVar41) + fVar24 * fVar40;
                          fVar39 = fVar33 * fVar33 + fVar24 * fVar24 + fVar36 * fVar36;
                          fVar38 = fVar37 * fVar37 + fVar30 * fVar30 + fVar34 * fVar34;
                          if (fVar38 <= fVar21 * 1e-10 * fVar39) {
                            FUN_10a104900(pfVar17,pfVar16);
                            param_4 = uVar7;
                            fVar38 = fVar36;
                            fVar30 = fVar24;
                            fVar37 = fVar33;
                            FUN_10a104900(pfVar18,pfVar16);
                            fVar34 = (float)uVar7;
                            if ((float)uVar7 <= (float)uVar31) {
                              fVar36 = (float)uVar28;
                              fVar24 = (float)uVar27;
                              fVar33 = fVar25;
                              fVar34 = (float)uVar31;
                            }
                            fVar26 = (float)param_4;
                            fVar39 = fVar26;
                            if (fVar26 <= fVar34) {
                              fVar39 = fVar34;
                            }
                            uVar7 = (ulong)(uint)fVar39;
                            if (fVar26 <= fVar34) {
                              fVar38 = fVar36;
                            }
                            uVar12 = (ulong)(uint)fVar38;
                            if (fVar26 <= fVar34) {
                              fVar30 = fVar24;
                            }
                            uVar15 = (ulong)(uint)fVar30;
                            uVar23 = (ulong)(uint)fVar37;
                            if (fVar26 <= fVar34) {
                              uVar23 = (ulong)(uint)fVar33;
                            }
                          }
                          else {
                            fVar38 = fVar38 + fVar38;
                            param_4 = (ulong)(uint)fVar38;
                            fVar26 = (fVar39 * (fVar37 * -fVar41 + fVar42 * fVar34) +
                                     fVar21 * (-(fVar34 * fVar36) + fVar37 * fVar24)) / fVar38;
                            fVar36 = (fVar21 * (-(fVar37 * fVar33) + fVar30 * fVar36) +
                                     fVar39 * (fVar30 * -fVar42 + fVar40 * fVar37)) / fVar38;
                            fVar38 = (fVar21 * (-(fVar30 * fVar24) + fVar34 * fVar33) +
                                     fVar39 * (fVar34 * -fVar40 + fVar41 * fVar30)) / fVar38;
                            uVar23 = (ulong)(uint)(fVar29 + fVar26);
                            uVar15 = (ulong)(uint)(fVar32 + fVar36);
                            uVar12 = (ulong)(uint)(fVar35 + fVar38);
                            uVar7 = (ulong)(uint)SQRT(fVar38 * fVar38 +
                                                      fVar26 * fVar26 + fVar36 * fVar36);
                          }
                        }
                        pfVar16 = pfVar16 + 3;
                        uVar20 = uVar20 - 1;
                        uVar10 = uVar23;
                      } while (uVar20 != 0);
                    }
                    uVar19 = uVar19 + 1;
                    uVar31 = param_4;
                  } while (uVar19 != uVar13);
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 != uVar11);
            }
          }
          __ZNSt3__113random_deviceD1Ev(auStack_184);
          if (lStack_180 != 0) {
            lStack_178 = lStack_180;
            __ZdlPv();
          }
          if (pfStack_168 == (float *)0x0) {
            return uVar10;
          }
          pfStack_160 = pfStack_168;
          __ZdlPv();
          return uVar10;
        }
      }
LAB_10a0efdf4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0efdf8);
      (*pcVar3)();
    }
    lVar9 = (long)((long)param_5[2] - *param_5) >> 3;
    uVar10 = lVar9 * -0x6666666666666666;
    if (uVar10 < uVar7 || uVar10 - uVar7 == 0) {
      uVar10 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
      uVar10 = 0x666666666666666;
    }
    puStack_48 = param_5;
    if (uVar10 == 0) {
      puVar5 = (ulong *)0x0;
    }
    else {
      puVar5 = param_6;
      FUN_10a103448();
    }
    puVar1 = (ulong *)(uVar10 + lVar14);
    uVar7 = uVar10 + (long)puVar5 * 0x28;
    uStack_68 = uVar10;
    puStack_60 = puVar1;
    puStack_58 = puVar1;
    uStack_50 = uVar7;
    if (*(char *)((long)param_6 + 0x17) < '\0') {
      func_0x000107c3192c(puVar1,*param_6,param_6[1]);
    }
    else {
      uVar10 = param_6[1];
      param_1 = *param_6;
      puVar1[2] = param_6[2];
      puVar1[1] = uVar10;
      *puVar1 = param_1;
    }
    uVar10 = param_6[3];
    *(undefined8 *)((long)puVar1 + 0x1d) = *(undefined8 *)((long)param_6 + 0x1d);
    puVar1[3] = uVar10;
    puVar5 = puVar1 + 5;
    uVar10 = (long)puVar1 + (*param_5 - param_5[1]);
    func_0x00010a10348c(*param_5,param_5[1],uVar10);
    uStack_68 = *param_5;
    *param_5 = uVar10;
    param_5[1] = (ulong)puVar5;
    uStack_50 = param_5[2];
    param_5[2] = uVar7;
    puStack_60 = (ulong *)uStack_68;
    puStack_58 = (ulong *)uStack_68;
    func_0x00010a10350c(&uStack_68);
  }
  param_5[1] = (ulong)puVar5;
  return param_1;
}



/* Entry: 10a0ef714; end: 10a0efe47;  */

ulong FUN_10a0ef714(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  undefined8 uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  ulong in_d3;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fStack_ae0;
  uint auStack_adc [623];
  undefined8 uStack_120;
  undefined1 auStack_114 [4];
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  float *pfStack_f8;
  float *pfStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  lVar3 = *param_1;
  lVar5 = param_1[1];
  if (lVar3 == lVar5) {
    return 0;
  }
  func_0x00010a103678(lVar3,lVar5,LZCOUNT((lVar5 - lVar3 >> 2) * -0x5555555555555555) * -2 + 0x7e,1)
  ;
  pfStack_f8 = (float *)0x0;
  pfStack_f0 = (float *)0x0;
  uStack_e8 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_100 = 0;
  func_0x00010983ca2c(&pfStack_f8,(param_1[1] - *param_1 >> 2) * -0x5555555555555555);
  func_0x0001073b504c(&lStack_110,(param_1[1] - *param_1 >> 2) * -0x5555555555555555);
  if (param_1[1] != *param_1) {
    FUN_10a0efe48(&pfStack_f8);
    pfVar7 = (float *)*param_1;
    if ((float *)param_1[1] != pfVar7) {
      fVar19 = (float)*(undefined8 *)(pfVar7 + 1);
      fVar23 = (float)((ulong)*(undefined8 *)(pfVar7 + 1) >> 0x20);
      fStack_ae0 = SQRT(*pfVar7 * *pfVar7 + fVar19 * fVar19 + fVar23 * fVar23);
      FUN_10a001c34(&lStack_110,&fStack_ae0);
      lVar3 = *param_1;
      lVar5 = param_1[1];
      if (1 < (ulong)((lVar5 - lVar3 >> 2) * -0x5555555555555555)) {
        uVar11 = 1;
        do {
          puVar6 = (undefined8 *)(lVar3 + uVar11 * 0xc);
          uVar20 = *puVar6;
          fVar19 = (float)uVar20;
          fVar23 = (float)((ulong)uVar20 >> 0x20);
          fVar22 = *(float *)(puVar6 + 1);
          in_d3 = (ulong)(uint)(fVar22 * fVar22);
          uVar8 = ((long)pfStack_f0 - (long)pfStack_f8 >> 2) * -0x5555555555555555;
          uVar9 = uVar8;
          do {
            uVar9 = uVar9 - 1;
            if ((int)uVar9 < 0) {
LAB_10a0ef8e0:
              FUN_10a0efe48(&pfStack_f8);
              uVar9 = (param_1[1] - *param_1 >> 2) * -0x5555555555555555;
              if (uVar9 < uVar11 || uVar9 - uVar11 == 0) goto LAB_10a0efdf4;
              pfVar7 = (float *)(*param_1 + uVar11 * 0xc);
              fVar19 = *pfVar7;
              uVar20 = *(undefined8 *)(pfVar7 + 1);
              fVar23 = (float)uVar20;
              fVar22 = (float)((ulong)uVar20 >> 0x20);
              fStack_ae0 = SQRT(fVar19 * fVar19 + fVar23 * fVar23 + fVar22 * fVar22);
              FUN_10a001c34(&lStack_110,&fStack_ae0);
              lVar3 = *param_1;
              lVar5 = param_1[1];
              break;
            }
            uVar10 = uVar9 & 0x7fffffff;
            if ((ulong)(lStack_108 - lStack_110 >> 2) <= uVar10) goto LAB_10a0efdf4;
            fVar27 = SQRT(fVar19 * fVar19 + fVar23 * fVar23 + fVar22 * fVar22) -
                     *(float *)(lStack_110 + uVar10 * 4);
            in_d3 = (ulong)(uint)fVar27;
            if (0.049999997 < fVar27) goto LAB_10a0ef8e0;
            if (uVar8 < uVar10 || uVar8 - uVar10 == 0) goto LAB_10a0efdf4;
            fVar27 = fVar22 - (pfStack_f8 + uVar10 * 3)[2];
            uVar20 = *(undefined8 *)(pfStack_f8 + uVar10 * 3);
            fVar30 = fVar19 - (float)uVar20;
            fVar33 = fVar23 - (float)((ulong)uVar20 >> 0x20);
            fVar27 = SQRT(fVar30 * fVar30 + fVar33 * fVar33 + fVar27 * fVar27);
            in_d3 = (ulong)(uint)fVar27;
          } while (0.01 <= fVar27);
          uVar11 = uVar11 + 1;
          uVar9 = (lVar5 - lVar3 >> 2) * -0x5555555555555555;
        } while (uVar11 <= uVar9 && uVar9 - uVar11 != 0);
      }
      func_0x000107c2b070(auStack_114);
      puVar4 = auStack_114;
      __ZNSt3__113random_deviceclEv();
      fStack_ae0 = SUB84(puVar4,0);
      lVar3 = 1;
      do {
        uVar1 = (int)lVar3 + ((uint)puVar4 ^ (uint)puVar4 >> 0x1e) * 0x6c078965;
        puVar4 = (undefined1 *)(ulong)uVar1;
        auStack_adc[lVar3 + -1] = uVar1;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x270);
      uStack_120 = 0;
      if (0xc < (long)pfStack_f0 - (long)pfStack_f8) {
        uStack_c8 = 0x7fffffffffffffff;
        uStack_d0 = 0;
        pfVar7 = pfStack_f0 + -3;
        if (pfStack_f8 < pfVar7) {
          uVar11 = (ulong)((long)pfStack_f0 - (long)pfStack_f8) / 0xc;
          pfVar13 = pfStack_f8;
          pfVar14 = pfStack_f8;
          do {
            uVar11 = uVar11 - 1;
            uStack_e0 = 0;
            puVar6 = &uStack_d0;
            uStack_d8 = uVar11;
            func_0x000109453a74(puVar6,&fStack_ae0,&uStack_e0);
            if (puVar6 != (undefined8 *)0x0) {
              pfVar12 = pfVar14 + (long)puVar6 * 3;
              fVar19 = pfVar13[2];
              uVar20 = *(undefined8 *)pfVar13;
              fVar23 = pfVar12[2];
              *(undefined8 *)pfVar13 = *(undefined8 *)pfVar12;
              pfVar13[2] = fVar23;
              *(undefined8 *)pfVar12 = uVar20;
              pfVar12[2] = fVar19;
            }
            pfVar13 = pfVar13 + 3;
            pfVar14 = pfVar14 + 3;
          } while (pfVar13 < pfVar7);
        }
      }
      pfVar7 = pfStack_f8;
      uVar11 = 0;
      if (pfStack_f8 == pfStack_f0) {
        uVar9 = 0;
      }
      else {
        uVar15 = ((long)pfStack_f0 - (long)pfStack_f8 >> 2) * -0x5555555555555555;
        uVar9 = (ulong)(uint)*pfStack_f8;
        uVar8 = (ulong)(uint)pfStack_f8[1];
        uVar10 = (ulong)(uint)pfStack_f8[2];
        if (1 < uVar15) {
          uVar16 = 1;
          do {
            pfVar13 = pfVar7 + uVar16 * 3;
            fVar27 = *pfVar13;
            fVar30 = pfVar13[1];
            fVar19 = fVar27 - (float)uVar9;
            fVar23 = fVar30 - (float)uVar8;
            fVar33 = pfVar13[2];
            fVar22 = fVar33 - (float)uVar10;
            if ((float)uVar11 * (float)uVar11 + 1.1920929e-07 <
                fVar19 * fVar19 + fVar23 * fVar23 + fVar22 * fVar22) {
              uVar17 = 0;
              uVar11 = 0;
              uVar9 = (ulong)(uint)fVar27;
              uVar8 = (ulong)(uint)fVar30;
              uVar10 = (ulong)(uint)fVar33;
              uVar29 = in_d3;
              do {
                pfVar14 = pfVar7 + uVar17 * 3;
                fVar38 = *pfVar14;
                fVar39 = pfVar14[1];
                fVar19 = fVar38 - (float)uVar9;
                fVar22 = fVar39 - (float)uVar8;
                fVar40 = pfVar14[2];
                fVar23 = fVar40 - (float)uVar10;
                fVar23 = fVar23 * fVar23;
                uVar26 = (ulong)(uint)fVar23;
                fVar23 = fVar19 * fVar19 + fVar22 * fVar22 + fVar23;
                uVar21 = (ulong)(uint)fVar23;
                fVar19 = (float)uVar11 * (float)uVar11 + 1.1920929e-07;
                uVar25 = (ulong)(uint)fVar19;
                in_d3 = uVar29;
                if ((fVar19 < fVar23) &&
                   (FUN_10a104900(pfVar13,pfVar14), in_d3 = uVar29, uVar11 = uVar29, uVar9 = uVar21,
                   uVar8 = uVar25, uVar10 = uVar26, uVar17 != 0)) {
                  fVar38 = fVar38 - fVar27;
                  fVar39 = fVar39 - fVar30;
                  fVar40 = fVar40 - fVar33;
                  fVar19 = fVar38 * fVar38 + fVar39 * fVar39 + fVar40 * fVar40;
                  fVar23 = (float)uVar21;
                  pfVar12 = pfVar7;
                  uVar18 = uVar17;
                  do {
                    fVar22 = *pfVar12 - (float)uVar21;
                    fVar31 = pfVar12[1] - (float)uVar8;
                    fVar34 = pfVar12[2] - (float)uVar10;
                    fVar22 = fVar22 * fVar22 + fVar31 * fVar31 + fVar34 * fVar34;
                    in_d3 = (ulong)(uint)fVar22;
                    if ((float)uVar11 * (float)uVar11 + 1.1920929e-07 < fVar22) {
                      fVar31 = *pfVar12 - fVar27;
                      fVar22 = pfVar12[1] - fVar30;
                      fVar34 = pfVar12[2] - fVar33;
                      fVar28 = -(fVar22 * fVar40) + fVar34 * fVar39;
                      uVar11 = (ulong)(uint)fVar28;
                      fVar32 = -(fVar34 * fVar38) + fVar31 * fVar40;
                      fVar35 = -(fVar31 * fVar39) + fVar22 * fVar38;
                      fVar37 = fVar31 * fVar31 + fVar22 * fVar22 + fVar34 * fVar34;
                      fVar36 = fVar35 * fVar35 + fVar28 * fVar28 + fVar32 * fVar32;
                      if (fVar36 <= fVar19 * 1e-10 * fVar37) {
                        FUN_10a104900(pfVar13,pfVar12);
                        in_d3 = uVar11;
                        fVar36 = fVar34;
                        fVar28 = fVar22;
                        fVar35 = fVar31;
                        FUN_10a104900(pfVar14,pfVar12);
                        fVar32 = (float)uVar11;
                        if ((float)uVar11 <= (float)uVar29) {
                          fVar34 = (float)uVar26;
                          fVar22 = (float)uVar25;
                          fVar31 = fVar23;
                          fVar32 = (float)uVar29;
                        }
                        fVar24 = (float)in_d3;
                        fVar37 = fVar24;
                        if (fVar24 <= fVar32) {
                          fVar37 = fVar32;
                        }
                        uVar11 = (ulong)(uint)fVar37;
                        if (fVar24 <= fVar32) {
                          fVar36 = fVar34;
                        }
                        uVar10 = (ulong)(uint)fVar36;
                        if (fVar24 <= fVar32) {
                          fVar28 = fVar22;
                        }
                        uVar8 = (ulong)(uint)fVar28;
                        uVar21 = (ulong)(uint)fVar35;
                        if (fVar24 <= fVar32) {
                          uVar21 = (ulong)(uint)fVar31;
                        }
                      }
                      else {
                        fVar36 = fVar36 + fVar36;
                        in_d3 = (ulong)(uint)fVar36;
                        fVar24 = (fVar37 * (fVar35 * -fVar39 + fVar40 * fVar32) +
                                 fVar19 * (-(fVar32 * fVar34) + fVar35 * fVar22)) / fVar36;
                        fVar34 = (fVar19 * (-(fVar35 * fVar31) + fVar28 * fVar34) +
                                 fVar37 * (fVar28 * -fVar40 + fVar38 * fVar35)) / fVar36;
                        fVar36 = (fVar19 * (-(fVar28 * fVar22) + fVar32 * fVar31) +
                                 fVar37 * (fVar32 * -fVar38 + fVar39 * fVar28)) / fVar36;
                        uVar21 = (ulong)(uint)(fVar27 + fVar24);
                        uVar8 = (ulong)(uint)(fVar30 + fVar34);
                        uVar10 = (ulong)(uint)(fVar33 + fVar36);
                        uVar11 = (ulong)(uint)SQRT(fVar36 * fVar36 +
                                                   fVar24 * fVar24 + fVar34 * fVar34);
                      }
                    }
                    pfVar12 = pfVar12 + 3;
                    uVar18 = uVar18 - 1;
                    uVar9 = uVar21;
                  } while (uVar18 != 0);
                }
                uVar17 = uVar17 + 1;
                uVar29 = in_d3;
              } while (uVar17 != uVar16);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar15);
        }
      }
      __ZNSt3__113random_deviceD1Ev(auStack_114);
      if (lStack_110 != 0) {
        lStack_108 = lStack_110;
        __ZdlPv();
      }
      if (pfStack_f8 == (float *)0x0) {
        return uVar9;
      }
      pfStack_f0 = pfStack_f8;
      __ZdlPv();
      return uVar9;
    }
  }
LAB_10a0efdf4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0efdf8);
  (*pcVar2)();
}



/* Entry: 10a0efe48; end: 10a0eff3f;  */

ulong FUN_10a0efe48(undefined8 param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar10 = (undefined4)((ulong)param_1 >> 0x20);
  fVar11 = (float)param_1;
  puVar1 = *(undefined8 **)(param_2 + 2);
  if (puVar1 < *(undefined8 **)(param_2 + 4)) {
    uVar3 = *(undefined8 *)param_3;
    *(float *)(puVar1 + 1) = param_3[2];
    *puVar1 = uVar3;
    lVar8 = (long)puVar1 + 0xc;
  }
  else {
    lVar8 = (long)puVar1 - *(long *)param_2;
    uVar5 = (lVar8 >> 2) * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar5) {
      FUN_10a051b10();
      fVar22 = *param_2;
      fVar18 = param_2[1];
      fVar21 = *param_3;
      fVar20 = param_3[1];
      fVar19 = param_2[2];
      fVar17 = param_3[2];
      fVar9 = fVar22 * fVar21 + fVar18 * fVar20 + fVar19 * fVar17;
      if (fVar9 <= 0.99999) {
        if (-0.99999 <= fVar9) {
          _acosf();
          fVar16 = (1.0 - fVar11) * fVar9;
          _sinf(fVar16);
          fVar11 = fVar11 * fVar9;
          _sinf(fVar11);
          fVar22 = fVar22 * fVar16 + fVar21 * fVar11;
          fVar9 = fVar18 * fVar16 + fVar20 * fVar11;
          fVar19 = fVar19 * fVar16 + fVar17 * fVar11;
          fVar19 = fVar19 * fVar19;
          fVar11 = fVar22 * fVar22 + fVar9 * fVar9;
        }
        else {
          fVar14 = 1.0;
          fVar16 = 0.0;
          if (0.9999999 <= fVar9) {
            fVar12 = 0.0;
            fVar9 = 0.0;
            fVar15 = 0.0;
            fVar13 = 1.0;
          }
          else if (-0.9999999 <= fVar9) {
            fVar13 = SQRT(fVar9 + 1.0 + fVar9 + 1.0);
            fVar15 = 1.0 / fVar13;
            fVar13 = fVar13 * 0.5;
            fVar12 = (-(fVar20 * fVar19) + fVar17 * fVar18) * fVar15;
            fVar9 = (-(fVar17 * fVar22) + fVar21 * fVar19) * fVar15;
            fVar15 = (-(fVar21 * fVar18) + fVar20 * fVar22) * fVar15;
          }
          else {
            fVar12 = fVar19 * 0.0 - fVar18;
            fVar9 = fVar22 + fVar19 * -0.0;
            fVar20 = fVar22 * -0.0 + fVar18 * 0.0;
            fVar17 = fVar20 * fVar20 + fVar12 * fVar12 + fVar9 * fVar9;
            fVar15 = fVar18 * -0.0 + fVar19 * 0.0;
            fVar21 = fVar22 * 0.0 - fVar19;
            fVar13 = fVar22 * -0.0 + fVar18;
            if (fVar17 < 1.1920929e-07) {
              fVar20 = fVar13;
              fVar9 = fVar21;
              fVar12 = fVar15;
              fVar17 = fVar13 * fVar13 + fVar15 * fVar15 + fVar21 * fVar21;
            }
            fVar15 = 1.0 / SQRT(fVar17);
            fVar12 = fVar12 * fVar15;
            fVar9 = fVar9 * fVar15;
            fVar15 = fVar15 * fVar20;
            fVar13 = -4.371139e-08;
          }
          fVar11 = fVar11 * 3.1415927;
          fVar20 = 1.0 - fVar13 * fVar13;
          fVar17 = 0.0;
          if (0.0 < fVar20) {
            fVar14 = 1.0 / SQRT(fVar20);
            fVar17 = fVar12 * fVar14;
            fVar16 = fVar9 * fVar14;
            fVar14 = fVar15 * fVar14;
          }
          fVar9 = fVar11 * 0.5;
          ___sincosf_stret(fVar9);
          fVar17 = fVar9 * fVar17;
          fVar16 = fVar9 * fVar16;
          fVar9 = fVar9 * fVar14;
          fVar21 = -(fVar18 * fVar9) + fVar19 * fVar16;
          fVar14 = -(fVar19 * fVar17) + fVar22 * fVar9;
          fVar12 = -(fVar22 * fVar16) + fVar18 * fVar17;
          fVar20 = fVar11 * fVar21 + -(fVar14 * fVar9) + fVar12 * fVar16;
          fVar9 = fVar11 * fVar14 + -(fVar12 * fVar17) + fVar21 * fVar9;
          fVar11 = fVar11 * fVar12 + -(fVar21 * fVar16) + fVar14 * fVar17;
          fVar22 = fVar22 + fVar20 + fVar20;
          fVar18 = fVar18 + fVar9 + fVar9;
          fVar19 = fVar19 + fVar11 + fVar11;
          fVar19 = fVar19 * fVar19;
          fVar11 = fVar18 * fVar18 + fVar22 * fVar22;
        }
        fVar19 = fVar19 + fVar11;
      }
      else {
        fVar9 = 1.0 - fVar11;
        fVar22 = fVar9 * fVar22 + fVar11 * fVar21;
        fVar18 = fVar9 * fVar18 + fVar11 * fVar20;
        fVar11 = fVar9 * fVar19 + fVar11 * fVar17;
        fVar19 = fVar22 * fVar22 + fVar18 * fVar18 + fVar11 * fVar11;
      }
      return (ulong)(uint)(fVar22 * (1.0 / SQRT(fVar19)));
    }
    lVar4 = (long)*(undefined8 **)(param_2 + 4) - *(long *)param_2 >> 2;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0x1555555555555555;
    }
    pfVar2 = param_2;
    FUN_10a051b24();
    puVar1 = (undefined8 *)((long)pfVar2 + lVar8);
    uVar3 = *(undefined8 *)param_3;
    *(float *)(puVar1 + 1) = param_3[2];
    *puVar1 = uVar3;
    lVar8 = (long)puVar1 + 0xc;
    lVar7 = (long)puVar1 - (*(long *)(param_2 + 2) - *(long *)param_2);
    _memcpy(lVar7);
    lVar4 = *(long *)param_2;
    *(long *)param_2 = lVar7;
    *(long *)(param_2 + 2) = lVar8;
    *(float **)(param_2 + 4) = pfVar2 + uVar6 * 3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
  }
  *(long *)(param_2 + 2) = lVar8;
  return CONCAT44(uVar10,fVar11);
}



/* Entry: 10a0eff40; end: 10a0f0253;  */

float FUN_10a0eff40(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = *param_2;
  fVar8 = param_2[1];
  fVar11 = *param_3;
  fVar10 = param_3[1];
  fVar9 = param_2[2];
  fVar7 = param_3[2];
  fVar1 = fVar12 * fVar11 + fVar8 * fVar10 + fVar9 * fVar7;
  if (fVar1 <= 0.99999) {
    if (-0.99999 <= fVar1) {
      _acosf();
      fVar6 = (1.0 - param_1) * fVar1;
      _sinf(fVar6);
      param_1 = param_1 * fVar1;
      _sinf(param_1);
      fVar12 = fVar12 * fVar6 + fVar11 * param_1;
      fVar1 = fVar8 * fVar6 + fVar10 * param_1;
      fVar9 = fVar9 * fVar6 + fVar7 * param_1;
      fVar9 = fVar9 * fVar9;
      fVar1 = fVar12 * fVar12 + fVar1 * fVar1;
    }
    else {
      fVar4 = 1.0;
      fVar6 = 0.0;
      if (0.9999999 <= fVar1) {
        fVar2 = 0.0;
        fVar1 = 0.0;
        fVar5 = 0.0;
        fVar3 = 1.0;
      }
      else if (-0.9999999 <= fVar1) {
        fVar3 = SQRT(fVar1 + 1.0 + fVar1 + 1.0);
        fVar5 = 1.0 / fVar3;
        fVar3 = fVar3 * 0.5;
        fVar2 = (-(fVar10 * fVar9) + fVar7 * fVar8) * fVar5;
        fVar1 = (-(fVar7 * fVar12) + fVar11 * fVar9) * fVar5;
        fVar5 = (-(fVar11 * fVar8) + fVar10 * fVar12) * fVar5;
      }
      else {
        fVar2 = fVar9 * 0.0 - fVar8;
        fVar1 = fVar12 + fVar9 * -0.0;
        fVar10 = fVar12 * -0.0 + fVar8 * 0.0;
        fVar7 = fVar10 * fVar10 + fVar2 * fVar2 + fVar1 * fVar1;
        fVar5 = fVar8 * -0.0 + fVar9 * 0.0;
        fVar11 = fVar12 * 0.0 - fVar9;
        fVar3 = fVar12 * -0.0 + fVar8;
        if (fVar7 < 1.1920929e-07) {
          fVar10 = fVar3;
          fVar1 = fVar11;
          fVar2 = fVar5;
          fVar7 = fVar3 * fVar3 + fVar5 * fVar5 + fVar11 * fVar11;
        }
        fVar5 = 1.0 / SQRT(fVar7);
        fVar2 = fVar2 * fVar5;
        fVar1 = fVar1 * fVar5;
        fVar5 = fVar5 * fVar10;
        fVar3 = -4.371139e-08;
      }
      param_1 = param_1 * 3.1415927;
      fVar10 = 1.0 - fVar3 * fVar3;
      fVar7 = 0.0;
      if (0.0 < fVar10) {
        fVar4 = 1.0 / SQRT(fVar10);
        fVar7 = fVar2 * fVar4;
        fVar6 = fVar1 * fVar4;
        fVar4 = fVar5 * fVar4;
      }
      fVar1 = param_1 * 0.5;
      ___sincosf_stret(fVar1);
      fVar7 = fVar1 * fVar7;
      fVar6 = fVar1 * fVar6;
      fVar1 = fVar1 * fVar4;
      fVar11 = -(fVar8 * fVar1) + fVar9 * fVar6;
      fVar4 = -(fVar9 * fVar7) + fVar12 * fVar1;
      fVar2 = -(fVar12 * fVar6) + fVar8 * fVar7;
      fVar10 = param_1 * fVar11 + -(fVar4 * fVar1) + fVar2 * fVar6;
      fVar1 = param_1 * fVar4 + -(fVar2 * fVar7) + fVar11 * fVar1;
      fVar7 = param_1 * fVar2 + -(fVar11 * fVar6) + fVar4 * fVar7;
      fVar12 = fVar12 + fVar10 + fVar10;
      fVar8 = fVar8 + fVar1 + fVar1;
      fVar9 = fVar9 + fVar7 + fVar7;
      fVar9 = fVar9 * fVar9;
      fVar1 = fVar8 * fVar8 + fVar12 * fVar12;
    }
    fVar9 = fVar9 + fVar1;
  }
  else {
    fVar1 = 1.0 - param_1;
    fVar12 = fVar1 * fVar12 + param_1 * fVar11;
    fVar8 = fVar1 * fVar8 + param_1 * fVar10;
    fVar1 = fVar1 * fVar9 + param_1 * fVar7;
    fVar9 = fVar12 * fVar12 + fVar8 * fVar8 + fVar1 * fVar1;
  }
  return fVar12 * (1.0 / SQRT(fVar9));
}



/* Entry: 10a0f0254; end: 10a0f0373;  */

float FUN_10a0f0254(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar4 = param_2[2];
  fVar3 = param_2[3] - fVar1;
  fVar5 = param_2[4] - fVar2;
  fVar6 = param_2[5] - fVar4;
  fVar7 = param_2[6] - fVar1;
  fVar8 = param_2[7] - fVar2;
  fVar9 = param_2[8] - fVar4;
  fVar10 = fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6;
  fVar11 = fVar3 * fVar7 + fVar5 * fVar8 + fVar6 * fVar9;
  fVar12 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
  fVar3 = fVar3 * (*param_1 - fVar1) + fVar5 * (param_1[1] - fVar2) + fVar6 * (param_1[2] - fVar4);
  fVar2 = fVar7 * (*param_1 - fVar1) + fVar8 * (param_1[1] - fVar2) + fVar9 * (param_1[2] - fVar4);
  fVar4 = -(fVar11 * fVar11) + fVar12 * fVar10;
  fVar5 = 1.0 / fVar4;
  fVar1 = 0.0;
  if (1.1920929e-07 <= fVar12) {
    fVar1 = fVar2 / fVar12;
  }
  fVar6 = 0.0;
  if (1.1920929e-07 <= fVar10) {
    fVar6 = fVar3 / fVar10;
  }
  fVar7 = 0.0;
  if (fVar12 < fVar10) {
    fVar1 = 0.0;
    fVar7 = fVar6;
  }
  fVar6 = fVar5 * (fVar2 * -fVar11 + fVar3 * fVar12);
  fVar2 = fVar5 * (fVar3 * -fVar11 + fVar2 * fVar10);
  if (ABS(fVar4) < 1.1920929e-07) {
    fVar6 = fVar7;
    fVar2 = fVar1;
  }
  return (1.0 - fVar6) - fVar2;
}



/* Entry: 10a0f0374; end: 10a0f04df;  */

float FUN_10a0f0374(float param_1,float param_2,float param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  double dStack_60;
  double dStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  double dStack_40;
  double dStack_38;
  
  uVar5 = NEON_scvtf(*(undefined8 *)(param_4 + 4),4);
  fVar6 = param_1 * (float)uVar5 + -0.5;
  fVar7 = param_2 * (float)((ulong)uVar5 >> 0x20) + -0.5;
  FUN_10a0f04e0(&puStack_50,param_4);
  if (puStack_50 == (undefined8 *)0x0) {
    fVar6 = (fVar6 - (float)*(undefined8 *)(param_4 + 0x1c)) /
            (float)*(undefined8 *)(param_4 + 0x14);
    fVar7 = (fVar7 - (float)((ulong)*(undefined8 *)(param_4 + 0x1c) >> 0x20)) /
            (float)((ulong)*(undefined8 *)(param_4 + 0x14) >> 0x20);
  }
  else {
    dStack_40 = (double)puStack_50[6] * ((double)fVar6 - (double)puStack_50[8]);
    dStack_38 = (double)puStack_50[7] * ((double)fVar7 - (double)puStack_50[9]);
    (**(code **)(*(long *)*puStack_50 + 0x20))(&dStack_60,(long *)*puStack_50,&dStack_40);
    fVar6 = (float)dStack_60;
    fVar7 = (float)dStack_58;
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return param_3 * fVar6 * *(float *)(param_4 + 0x24) +
         -(fVar7 * param_3) * *(float *)(param_4 + 0x34) +
         (*(float *)(param_4 + 0x54) - param_3 * *(float *)(param_4 + 0x44));
}



/* Entry: 10a0f04e0; end: 10a0f063b;  */

void FUN_10a0f04e0(undefined8 *param_1,long param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x68) != 0) {
    if ((bRam00000001137ea560 & 1) == 0) {
      iVar1 = 0x137ea560;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_110346798,0x1132ffda0,0x100000000);
        ___cxa_guard_release(0x1137ea560);
      }
    }
    if ((bRam00000001137ea568 & 1) == 0) {
      iVar1 = 0x137ea568;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_10a104ba8(0x1137ea588,4);
        ___cxa_atexit(FUN_10a104958,0x1137ea588,0x100000000);
        ___cxa_guard_release(0x1137ea568);
      }
    }
    __ZNSt3__15mutex4lockEv(0x1132ffda0);
    FUN_10a104990(param_1,0x1137ea588,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x1132ffda0);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a0f063c; end: 10a0f07b3;  */

float FUN_10a0f063c(float param_1,float param_2,float param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  double dStack_90;
  double dStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  double dStack_70;
  float fStack_68;
  undefined8 uStack_60;
  float fStack_58;
  undefined8 uStack_50;
  float fStack_48;
  undefined8 uStack_40;
  float fStack_38;
  
  func_0x0001094f5708(&dStack_70,param_4 + 0x24);
  uVar4 = (ulong)dStack_70 >> 0x20;
  fVar6 = param_1 * fStack_68 + param_2 * fStack_58 + param_3 * fStack_48 + fStack_38;
  fVar7 = (SUB84(dStack_70,0) * param_1 + (float)uStack_60 * param_2 +
          (float)uStack_50 * param_3 + (float)uStack_40) / -fVar6;
  FUN_10a0f04e0(&puStack_80,param_4);
  if (puStack_80 == (undefined8 *)0x0) {
    fVar6 = fVar7 * (float)*(undefined8 *)(param_4 + 0x14) + (float)*(undefined8 *)(param_4 + 0x1c);
  }
  else {
    dStack_90 = (double)fVar7;
    dStack_88 = (double)(((float)uVar4 * param_1 + (float)((ulong)uStack_60 >> 0x20) * param_2 +
                         (float)((ulong)uStack_50 >> 0x20) * param_3 +
                         (float)((ulong)uStack_40 >> 0x20)) / fVar6);
    (**(code **)(*(long *)*puStack_80 + 0x28))(&dStack_70,(long *)*puStack_80,&dStack_90);
    fVar6 = (float)((double)puStack_80[8] + dStack_70 * (double)puStack_80[4]);
  }
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  return (fVar6 + 0.5) / (float)*(int *)(param_4 + 4);
}



/* Entry: 10a0f07b4; end: 10a0f086b;  */

void FUN_10a0f07b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar3;
  ulong uVar2;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  fVar1 = (float)*param_3 - (float)*param_2;
  fVar3 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
  fVar4 = *(float *)(param_3 + 1) - *(float *)(param_2 + 1);
  fVar5 = fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4;
  if (1.1920929e-07 <= ABS(fVar5)) {
    fVar5 = 1.0 / SQRT(fVar5);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    uVar6 = NEON_fmov(0x3f800000,4);
    uVar2 = CONCAT44((float)((ulong)uVar6 >> 0x20) / (fVar3 * fVar5),(float)uVar6 / (fVar1 * fVar5))
    ;
    uVar2 = uVar2 ^ (uVar2 ^ 0x7f7fffff7f7fffff) &
                    CONCAT44(-(uint)(fVar3 * fVar5 == 0.0),-(uint)(fVar1 * fVar5 == 0.0));
    fVar1 = 3.4028235e+38;
    if (fVar4 * fVar5 != 0.0) {
      fVar1 = 1.0 / (fVar4 * fVar5);
    }
  }
  else {
    *param_1 = 0x7f7fffff7f7fffff;
    *(undefined4 *)(param_1 + 1) = 0x7f7fffff;
    uVar2 = 0x7f7fffff3f800000;
    fVar1 = 3.4028235e+38;
  }
  *(ulong *)((long)param_1 + 0xc) = uVar2;
  *(float *)((long)param_1 + 0x14) = fVar1;
  return;
}



/* Entry: 10a0f086c; end: 10a0f09e3;  */

void FUN_10a0f086c(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Axis";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63b3ad;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "X";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63b3ad;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0f09e4(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Y";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63b3ad;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0f09e4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Z";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63b3ad;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0f09e4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a0f09e4; end: 10a0f0a8b;  */

undefined8 * FUN_10a0f09e4(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f0a8c);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a0f0a8c; end: 10a0f0c23;  */

float FUN_10a0f0a8c(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float afStack_5c [3];
  
  fVar11 = param_1[2];
  fVar6 = param_1[3];
  fVar5 = fVar6 * fVar6;
  fVar7 = *param_1;
  fVar13 = param_1[1];
  fVar12 = fVar7 * fVar7;
  fVar8 = fVar13 * fVar13;
  fVar10 = fVar11 * fVar11;
  fVar4 = fVar5 + fVar12 + fVar8 + fVar10;
  fVar9 = (-(fVar13 * fVar6) + fVar11 * fVar7) / fVar4;
  if (fVar9 <= fVar4 * 0.4999) {
    if (fVar4 * -0.4999 <= fVar9) {
      fVar4 = fVar6 * fVar7 + fVar11 * fVar13;
      fVar4 = fVar4 + fVar4;
      _atan2f(fVar4,fVar5 + (-fVar12 - fVar8) + fVar10);
      fVar9 = fVar9 * -2.0;
      _asinf();
      fVar7 = fVar6 * fVar11 + fVar13 * fVar7;
      fVar7 = fVar7 + fVar7;
      _atan2f(fVar7,fVar5 + ((fVar12 - fVar8) - fVar10));
    }
    else {
      _atan2f(fVar7,fVar6);
      fVar4 = fVar7 + fVar7;
      fVar7 = 0.0;
      fVar9 = 1.5707964;
    }
  }
  else {
    _atan2f(fVar7,fVar6);
    fVar4 = fVar7 + fVar7;
    fVar7 = 0.0;
    fVar9 = -1.5707964;
  }
  iVar3 = 0;
  afStack_5c[1] = fVar9;
  afStack_5c[2] = fVar4;
  afStack_5c[0] = fVar7;
  do {
    pfVar1 = afStack_5c + 2;
    if (iVar3 == 1) {
      pfVar1 = afStack_5c + 1;
    }
    pfVar2 = afStack_5c;
    if (iVar3 != 2) {
      pfVar2 = pfVar1;
    }
    if (*pfVar2 < 0.0) {
      pfVar1 = afStack_5c + 2;
      if (iVar3 == 1) {
        pfVar1 = afStack_5c + 1;
      }
      pfVar2 = afStack_5c;
      if (iVar3 != 2) {
        pfVar2 = pfVar1;
      }
      *pfVar2 = *pfVar2 + 6.2831855;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  return afStack_5c[2];
}



/* Entry: 10a0f0c24; end: 10a0f0da7;  */

/* WARNING: Removing unreachable block (ram,0x00010a0f0cc8) */

undefined1 * FUN_10a0f0c24(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 auStack_38 [8];
  ulong uStack_30;
  byte bStack_21;
  
  func_0x000107c2b054(auStack_50,"grpc-status");
  func_0x000107c2b054(auStack_68,&UNK_10f63b3ad);
  FUN_10a0f0da8(auStack_38,param_1,auStack_50,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
  }
  if (uStack_30 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = auStack_38;
    __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(puVar1,0,10);
  }
  return puVar1;
}



/* Entry: 10a0f0da8; end: 10a0f0e07;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a0f0da8(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  param_2 = param_2 + 0x90;
  func_0x000104c5e210();
  if (param_2 != 0) {
    param_4 = (long *)(param_2 + 0x28);
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    lVar2 = *param_4;
    uVar1 = param_4[1];
    if (0x16 < uVar1) {
      if (uVar1 < 0x7ffffffffffffff7) {
        lVar2 = 0x19;
        if ((uVar1 | 7) != 0x17) {
          lVar2 = (uVar1 | 7) + 1;
        }
      }
      else {
        func_0x000104bd47d4();
      }
      func_0x000107c60e20(lVar2);
      return;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
    return;
  }
  lVar3 = param_4[1];
  lVar2 = *param_4;
  param_1[2] = param_4[2];
  param_1[1] = lVar3;
  *param_1 = lVar2;
  return;
}



/* Entry: 10a0f0e08; end: 10a0f0eb7;  */

void FUN_10a0f0e08(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c2b054(auStack_38,&UNK_10f63b425);
  func_0x000107c2b054(auStack_50,&UNK_10f63b432);
  FUN_10a0f0da8(param_1,param_2,auStack_38,auStack_50);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a0f0eb8; end: 10a0f0fc7;  */

undefined8 FUN_10a0f0eb8(long param_1)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  if (*(int *)(param_1 + 0x30) - 200U < 100) {
    lVar2 = param_1;
    FUN_10a0f0c24();
    if ((int)lVar2 == 0) {
      if (4 < *(ulong *)(param_1 + 0x80)) {
        return 1;
      }
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f63b3b3,&UNK_10f63b442,0x4c,&UNK_10f63b495);
      }
    }
    else {
      FUN_10a0f0e08(appuStack_38,param_1);
      if ((bRam000000011330a9e8 & 1) != 0) {
        pppuVar1 = (undefined8 ***)appuStack_38[0];
        if (-1 < cStack_21) {
          pppuVar1 = appuStack_38;
        }
        func_0x00010ae06f08(0,1,&UNK_10f63b3b3,&UNK_10f63b442,0x46,&UNK_10f63b478,in_x6,in_x7,
                            pppuVar1);
      }
      if (cStack_21 < '\0') {
        __ZdlPv(appuStack_38[0]);
      }
    }
  }
  return 0;
}



/* Entry: 10a0f0fc8; end: 10a0f102b;  */

void FUN_10a0f0fc8(long *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x28))();
  FUN_10a0dc020(param_1,(long)plVar1 + 5);
  FUN_10a0f102c(*param_1,param_1[1] - *param_1,param_2);
  return;
}



/* Entry: 10a0f102c; end: 10a0f10ab;  */

long * FUN_10a0f102c(undefined1 *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  undefined *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *extraout_x8;
  ulong uVar13;
  long *plVar14;
  undefined8 unaff_x20;
  uint uVar15;
  undefined8 unaff_x21;
  ulong uVar16;
  ulong uVar17;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar10 = param_3;
  uVar11 = param_2;
  plVar12 = param_3;
  (**(code **)(*param_3 + 0x28))();
  plVar14 = param_3;
  (**(code **)(*param_3 + 0x28))();
  if ((long)plVar14 + 5U <= param_2) {
    *param_1 = 0;
    uVar15 = (uint)plVar10;
    uVar6 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    *(uint *)(param_1 + 1) = uVar6 >> 0x10 | uVar6 << 0x10;
    func_0x000107c39c74(param_3,param_1 + 5);
    func_0x000107c39c7c();
    if ((ulong)param_3 >> 0x1f == 0) {
      if ((long)param_3 <= (long)(int)uVar15) {
        func_0x000107c30354(unaff_x20,unaff_x21,param_3);
        return (long *)0x1;
      }
    }
    else {
      func_0x00010b4d1d28();
      func_0x00010bdb2988(&puStack_40);
      func_0x00010b4d1d00(&pcStack_58);
      func_0x00010b4d1d08();
      func_0x00010b4d1cd8();
      func_0x00010b4d1cf8();
      func_0x00010b4d1cf0();
      func_0x00010b4d1ce8();
    }
    return (long *)0x0;
  }
  plVar10 = (long *)&UNK_10f63b4c6;
  FUN_10a00946c(&UNK_10f63b4c6);
  pcStack_38 = FUN_10a0f10ac;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((long *)0x4 < plVar12) {
    lStack_48 = (long)((int)plVar12 + -5);
    lStack_50 = uVar11 + 5;
    func_0x000107c30348();
    return plVar10;
  }
  puVar9 = &UNK_10f63b495;
  FUN_10a00946c();
  pcStack_58 = FUN_10a0f10f0;
  puVar4 = &UNK_10f636fe2;
  if (((ulong)plVar12 & 2) != 0) {
    puVar4 = &UNK_10f63c76a;
  }
  plVar10 = extraout_x8;
  FUN_10a00280c(extraout_x8,(long)((float)uVar11 / 3.0) << 2,0);
  if (uVar11 < 3) {
    uVar13 = 0;
    uVar16 = 0;
  }
  else {
    uVar17 = 0;
    uVar16 = 0;
    do {
      uVar1 = uVar16 + 4;
      bVar5 = *(byte *)((long)extraout_x8 + 0x17);
      uVar2 = extraout_x8[1];
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      uVar13 = uVar17;
      if (uVar2 < uVar1) break;
      pbVar3 = puVar9 + uVar17;
      plVar10 = (long *)(ulong)*pbVar3;
      FUN_10a105774(plVar10,pbVar3[1],pbVar3[2],puVar4,0x40);
      if (uVar2 < uVar16) goto LAB_10a0f14d8;
      plVar14 = (long *)*extraout_x8;
      if (-1 < (char)bVar5) {
        plVar14 = extraout_x8;
      }
      *(char *)((long)plVar14 + uVar16) = (char)plVar10;
      bVar5 = *(byte *)((long)extraout_x8 + 0x17);
      uVar2 = extraout_x8[1];
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar2 <= uVar16) goto LAB_10a0f14d8;
      plVar14 = (long *)*extraout_x8;
      if (-1 < (char)bVar5) {
        plVar14 = extraout_x8;
      }
      *(char *)((long)plVar14 + uVar16 + 1) = (char)((ulong)plVar10 >> 8);
      bVar5 = *(byte *)((long)extraout_x8 + 0x17);
      uVar2 = extraout_x8[1];
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar2 < uVar16 + 2) goto LAB_10a0f14d8;
      plVar14 = (long *)*extraout_x8;
      if (-1 < (char)bVar5) {
        plVar14 = extraout_x8;
      }
      *(char *)((long)plVar14 + uVar16 + 2) = (char)((ulong)plVar10 >> 0x10);
      bVar5 = *(byte *)((long)extraout_x8 + 0x17);
      uVar2 = extraout_x8[1];
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar2 < uVar16 + 3) goto LAB_10a0f14d8;
      plVar14 = (long *)*extraout_x8;
      if (-1 < (char)bVar5) {
        plVar14 = extraout_x8;
      }
      *(char *)((long)plVar14 + uVar16 + 3) = (char)((ulong)plVar10 >> 0x18);
      uVar13 = uVar17 + 3;
      uVar2 = uVar17 + 6;
      uVar16 = uVar1;
      uVar17 = uVar13;
    } while (uVar2 <= uVar11);
  }
  if (uVar11 <= uVar13) {
    return plVar10;
  }
  iVar7 = (int)uVar11 - (int)uVar13;
  if (iVar7 == 1) {
    plVar10 = (long *)(ulong)(byte)puVar9[uVar13];
    FUN_10a105774(plVar10,0,0,puVar4,0x40);
    bVar5 = *(byte *)((long)extraout_x8 + 0x17);
    uVar11 = extraout_x8[1];
    if (-1 < (char)bVar5) {
      uVar11 = (ulong)bVar5;
    }
    if (uVar16 <= uVar11) {
      plVar14 = (long *)*extraout_x8;
      if (-1 < (char)bVar5) {
        plVar14 = extraout_x8;
      }
      *(char *)((long)plVar14 + uVar16) = (char)plVar10;
      bVar5 = *(byte *)((long)extraout_x8 + 0x17);
      uVar11 = extraout_x8[1];
      if (-1 < (char)bVar5) {
        uVar11 = (ulong)bVar5;
      }
      if (uVar16 < uVar11) {
        plVar14 = (long *)*extraout_x8;
        if (-1 < (char)bVar5) {
          plVar14 = extraout_x8;
        }
        *(char *)((long)plVar14 + uVar16 + 1) = (char)((ulong)plVar10 >> 8);
        bVar5 = *(byte *)((long)extraout_x8 + 0x17);
        uVar11 = extraout_x8[1];
        if (-1 < (char)bVar5) {
          uVar11 = (ulong)bVar5;
        }
        if ((uVar16 | 2) <= uVar11) {
          plVar14 = (long *)*extraout_x8;
          if (-1 < (char)bVar5) {
            plVar14 = extraout_x8;
          }
          *(undefined1 *)((long)plVar14 + (uVar16 | 2)) = 0x3d;
          bVar5 = *(byte *)((long)extraout_x8 + 0x17);
          uVar11 = extraout_x8[1];
          if (-1 < (char)bVar5) {
            uVar11 = (ulong)bVar5;
          }
          if ((uVar16 | 3) <= uVar11) {
            plVar14 = (long *)*extraout_x8;
            if (-1 < (char)bVar5) {
              plVar14 = extraout_x8;
            }
            *(undefined1 *)((long)plVar14 + (uVar16 | 3)) = 0x3d;
            if (((ulong)plVar12 & 1) == 0) {
              return plVar10;
            }
            uVar11 = extraout_x8[1];
            if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
              uVar11 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
            }
            plVar10 = extraout_x8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (extraout_x8,uVar11 - 2,0);
            return plVar10;
          }
        }
      }
    }
  }
  else {
    if (iVar7 != 2) {
      return plVar10;
    }
    plVar10 = (long *)(ulong)(byte)puVar9[uVar13];
    FUN_10a105774(plVar10,(puVar9 + uVar13)[1],0,puVar4,0x40);
    bVar5 = *(byte *)((long)extraout_x8 + 0x17);
    uVar11 = extraout_x8[1];
    if (-1 < (char)bVar5) {
      uVar11 = (ulong)bVar5;
    }
    if (uVar16 <= uVar11) {
      plVar14 = (long *)*extraout_x8;
      if (-1 < (char)bVar5) {
        plVar14 = extraout_x8;
      }
      *(char *)((long)plVar14 + uVar16) = (char)plVar10;
      bVar5 = *(byte *)((long)extraout_x8 + 0x17);
      uVar11 = extraout_x8[1];
      if (-1 < (char)bVar5) {
        uVar11 = (ulong)bVar5;
      }
      if (uVar16 < uVar11) {
        plVar14 = (long *)*extraout_x8;
        if (-1 < (char)bVar5) {
          plVar14 = extraout_x8;
        }
        *(char *)((long)plVar14 + uVar16 + 1) = (char)((ulong)plVar10 >> 8);
        bVar5 = *(byte *)((long)extraout_x8 + 0x17);
        uVar11 = extraout_x8[1];
        if (-1 < (char)bVar5) {
          uVar11 = (ulong)bVar5;
        }
        if ((uVar16 | 2) <= uVar11) {
          plVar14 = (long *)*extraout_x8;
          if (-1 < (char)bVar5) {
            plVar14 = extraout_x8;
          }
          *(char *)((long)plVar14 + (uVar16 | 2)) = (char)((ulong)plVar10 >> 0x10);
          bVar5 = *(byte *)((long)extraout_x8 + 0x17);
          uVar11 = extraout_x8[1];
          if (-1 < (char)bVar5) {
            uVar11 = (ulong)bVar5;
          }
          if ((uVar16 | 3) <= uVar11) {
            plVar14 = (long *)*extraout_x8;
            if (-1 < (char)bVar5) {
              plVar14 = extraout_x8;
            }
            *(undefined1 *)((long)plVar14 + (uVar16 | 3)) = 0x3d;
            if (((ulong)plVar12 & 1) == 0) {
              return plVar10;
            }
            uVar11 = extraout_x8[1];
            if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
              uVar11 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
            }
            plVar10 = extraout_x8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (extraout_x8,uVar11 - 1,0);
            return plVar10;
          }
        }
      }
    }
  }
LAB_10a0f14d8:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a0f14dc);
  (*pcVar8)();
}



/* Entry: 10a0f10ac; end: 10a0f10ef;  */

void FUN_10a0f10ac(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  ushort uVar7;
  uint uVar8;
  undefined *puVar9;
  ulong uVar10;
  long *extraout_x8;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_20;
  long lStack_18;
  
  if (4 < param_3) {
    lStack_18 = (long)((int)param_3 + -5);
    lStack_20 = param_2 + 5;
    func_0x000107c30348(param_1,&lStack_20);
    return;
  }
  puVar9 = &UNK_10f63b495;
  FUN_10a00946c();
  puVar3 = &UNK_10f636fe2;
  if ((param_3 & 2) != 0) {
    puVar3 = &UNK_10f63c76a;
  }
  FUN_10a00280c(extraout_x8,(long)((float)param_2 / 3.0) << 2,0);
  if (param_2 < 3) {
    uVar11 = 0;
    uVar13 = 0;
  }
  else {
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar10 = uVar13 + 4;
      bVar4 = *(byte *)((long)extraout_x8 + 0x17);
      uVar1 = extraout_x8[1];
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      uVar11 = uVar14;
      if (uVar1 < uVar10) break;
      pbVar2 = puVar9 + uVar14;
      uVar8 = (uint)*pbVar2;
      FUN_10a105774(*pbVar2,pbVar2[1],pbVar2[2],puVar3,0x40);
      if (uVar1 < uVar13) goto LAB_10a0f14d8;
      plVar12 = (long *)*extraout_x8;
      if (-1 < (char)bVar4) {
        plVar12 = extraout_x8;
      }
      *(char *)((long)plVar12 + uVar13) = (char)uVar8;
      bVar4 = *(byte *)((long)extraout_x8 + 0x17);
      uVar1 = extraout_x8[1];
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      if (uVar1 <= uVar13) goto LAB_10a0f14d8;
      plVar12 = (long *)*extraout_x8;
      if (-1 < (char)bVar4) {
        plVar12 = extraout_x8;
      }
      *(char *)((long)plVar12 + uVar13 + 1) = (char)(uVar8 >> 8);
      bVar4 = *(byte *)((long)extraout_x8 + 0x17);
      uVar1 = extraout_x8[1];
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      if (uVar1 < uVar13 + 2) goto LAB_10a0f14d8;
      plVar12 = (long *)*extraout_x8;
      if (-1 < (char)bVar4) {
        plVar12 = extraout_x8;
      }
      *(char *)((long)plVar12 + uVar13 + 2) = (char)(uVar8 >> 0x10);
      bVar4 = *(byte *)((long)extraout_x8 + 0x17);
      uVar1 = extraout_x8[1];
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      if (uVar1 < uVar13 + 3) goto LAB_10a0f14d8;
      plVar12 = (long *)*extraout_x8;
      if (-1 < (char)bVar4) {
        plVar12 = extraout_x8;
      }
      *(char *)((long)plVar12 + uVar13 + 3) = (char)(uVar8 >> 0x18);
      uVar11 = uVar14 + 3;
      uVar1 = uVar14 + 6;
      uVar13 = uVar10;
      uVar14 = uVar11;
    } while (uVar1 <= param_2);
  }
  if (param_2 <= uVar11) {
    return;
  }
  iVar5 = (int)param_2 - (int)uVar11;
  if (iVar5 == 1) {
    uVar7 = (ushort)(byte)puVar9[uVar11];
    FUN_10a105774(puVar9[uVar11],0,0,puVar3,0x40);
    bVar4 = *(byte *)((long)extraout_x8 + 0x17);
    uVar14 = extraout_x8[1];
    if (-1 < (char)bVar4) {
      uVar14 = (ulong)bVar4;
    }
    if (uVar13 <= uVar14) {
      plVar12 = (long *)*extraout_x8;
      if (-1 < (char)bVar4) {
        plVar12 = extraout_x8;
      }
      *(char *)((long)plVar12 + uVar13) = (char)uVar7;
      bVar4 = *(byte *)((long)extraout_x8 + 0x17);
      uVar14 = extraout_x8[1];
      if (-1 < (char)bVar4) {
        uVar14 = (ulong)bVar4;
      }
      if (uVar13 < uVar14) {
        plVar12 = (long *)*extraout_x8;
        if (-1 < (char)bVar4) {
          plVar12 = extraout_x8;
        }
        *(char *)((long)plVar12 + uVar13 + 1) = (char)(uVar7 >> 8);
        bVar4 = *(byte *)((long)extraout_x8 + 0x17);
        uVar14 = extraout_x8[1];
        if (-1 < (char)bVar4) {
          uVar14 = (ulong)bVar4;
        }
        if ((uVar13 | 2) <= uVar14) {
          plVar12 = (long *)*extraout_x8;
          if (-1 < (char)bVar4) {
            plVar12 = extraout_x8;
          }
          *(undefined1 *)((long)plVar12 + (uVar13 | 2)) = 0x3d;
          bVar4 = *(byte *)((long)extraout_x8 + 0x17);
          uVar14 = extraout_x8[1];
          if (-1 < (char)bVar4) {
            uVar14 = (ulong)bVar4;
          }
          if ((uVar13 | 3) <= uVar14) {
            plVar12 = (long *)*extraout_x8;
            if (-1 < (char)bVar4) {
              plVar12 = extraout_x8;
            }
            *(undefined1 *)((long)plVar12 + (uVar13 | 3)) = 0x3d;
            if ((param_3 & 1) == 0) {
              return;
            }
            uVar13 = extraout_x8[1];
            if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (extraout_x8,uVar13 - 2,0);
            return;
          }
        }
      }
    }
  }
  else {
    if (iVar5 != 2) {
      return;
    }
    uVar10 = (ulong)(byte)puVar9[uVar11];
    FUN_10a105774(uVar10,(puVar9 + uVar11)[1],0,puVar3,0x40);
    bVar4 = *(byte *)((long)extraout_x8 + 0x17);
    uVar14 = extraout_x8[1];
    if (-1 < (char)bVar4) {
      uVar14 = (ulong)bVar4;
    }
    if (uVar13 <= uVar14) {
      plVar12 = (long *)*extraout_x8;
      if (-1 < (char)bVar4) {
        plVar12 = extraout_x8;
      }
      *(char *)((long)plVar12 + uVar13) = (char)uVar10;
      bVar4 = *(byte *)((long)extraout_x8 + 0x17);
      uVar14 = extraout_x8[1];
      if (-1 < (char)bVar4) {
        uVar14 = (ulong)bVar4;
      }
      if (uVar13 < uVar14) {
        plVar12 = (long *)*extraout_x8;
        if (-1 < (char)bVar4) {
          plVar12 = extraout_x8;
        }
        *(char *)((long)plVar12 + uVar13 + 1) = (char)(uVar10 >> 8);
        bVar4 = *(byte *)((long)extraout_x8 + 0x17);
        uVar14 = extraout_x8[1];
        if (-1 < (char)bVar4) {
          uVar14 = (ulong)bVar4;
        }
        if ((uVar13 | 2) <= uVar14) {
          plVar12 = (long *)*extraout_x8;
          if (-1 < (char)bVar4) {
            plVar12 = extraout_x8;
          }
          *(char *)((long)plVar12 + (uVar13 | 2)) = (char)(uVar10 >> 0x10);
          bVar4 = *(byte *)((long)extraout_x8 + 0x17);
          uVar14 = extraout_x8[1];
          if (-1 < (char)bVar4) {
            uVar14 = (ulong)bVar4;
          }
          if ((uVar13 | 3) <= uVar14) {
            plVar12 = (long *)*extraout_x8;
            if (-1 < (char)bVar4) {
              plVar12 = extraout_x8;
            }
            *(undefined1 *)((long)plVar12 + (uVar13 | 3)) = 0x3d;
            if ((param_3 & 1) == 0) {
              return;
            }
            uVar13 = extraout_x8[1];
            if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
              uVar13 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (extraout_x8,uVar13 - 1,0);
            return;
          }
        }
      }
    }
  }
LAB_10a0f14d8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0f14dc);
  (*pcVar6)();
}



/* Entry: 10a0f10f0; end: 10a0f14fb;  */

void FUN_10a0f10f0(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  byte *pbVar2;
  undefined *puVar3;
  long *plVar4;
  byte bVar5;
  int iVar6;
  code *pcVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar3 = &UNK_10f636fe2;
  if ((param_4 & 2) != 0) {
    puVar3 = &UNK_10f63c76a;
  }
  FUN_10a00280c(param_1,(long)((float)param_3 / 3.0) << 2,0);
  if (param_3 < 3) {
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    do {
      uVar10 = uVar12 + 4;
      bVar5 = *(byte *)((long)param_1 + 0x17);
      uVar1 = param_1[1];
      if (-1 < (char)bVar5) {
        uVar1 = (ulong)bVar5;
      }
      uVar11 = uVar13;
      if (uVar1 < uVar10) break;
      pbVar2 = (byte *)(param_2 + uVar13);
      uVar9 = (uint)*pbVar2;
      FUN_10a105774(*pbVar2,pbVar2[1],pbVar2[2],puVar3,0x40);
      if (uVar1 < uVar12) goto LAB_10a0f14d8;
      plVar4 = (long *)*param_1;
      if (-1 < (char)bVar5) {
        plVar4 = param_1;
      }
      *(char *)((long)plVar4 + uVar12) = (char)uVar9;
      bVar5 = *(byte *)((long)param_1 + 0x17);
      uVar1 = param_1[1];
      if (-1 < (char)bVar5) {
        uVar1 = (ulong)bVar5;
      }
      if (uVar1 <= uVar12) goto LAB_10a0f14d8;
      plVar4 = (long *)*param_1;
      if (-1 < (char)bVar5) {
        plVar4 = param_1;
      }
      *(char *)((long)plVar4 + uVar12 + 1) = (char)(uVar9 >> 8);
      bVar5 = *(byte *)((long)param_1 + 0x17);
      uVar1 = param_1[1];
      if (-1 < (char)bVar5) {
        uVar1 = (ulong)bVar5;
      }
      if (uVar1 < uVar12 + 2) goto LAB_10a0f14d8;
      plVar4 = (long *)*param_1;
      if (-1 < (char)bVar5) {
        plVar4 = param_1;
      }
      *(char *)((long)plVar4 + uVar12 + 2) = (char)(uVar9 >> 0x10);
      bVar5 = *(byte *)((long)param_1 + 0x17);
      uVar1 = param_1[1];
      if (-1 < (char)bVar5) {
        uVar1 = (ulong)bVar5;
      }
      if (uVar1 < uVar12 + 3) goto LAB_10a0f14d8;
      plVar4 = (long *)*param_1;
      if (-1 < (char)bVar5) {
        plVar4 = param_1;
      }
      *(char *)((long)plVar4 + uVar12 + 3) = (char)(uVar9 >> 0x18);
      uVar11 = uVar13 + 3;
      uVar1 = uVar13 + 6;
      uVar12 = uVar10;
      uVar13 = uVar11;
    } while (uVar1 <= param_3);
  }
  if (param_3 <= uVar11) {
    return;
  }
  iVar6 = (int)param_3 - (int)uVar11;
  if (iVar6 == 1) {
    uVar8 = (ushort)*(byte *)(param_2 + uVar11);
    FUN_10a105774(*(byte *)(param_2 + uVar11),0,0,puVar3,0x40);
    bVar5 = *(byte *)((long)param_1 + 0x17);
    uVar13 = param_1[1];
    if (-1 < (char)bVar5) {
      uVar13 = (ulong)bVar5;
    }
    if (uVar12 <= uVar13) {
      plVar4 = (long *)*param_1;
      if (-1 < (char)bVar5) {
        plVar4 = param_1;
      }
      *(char *)((long)plVar4 + uVar12) = (char)uVar8;
      bVar5 = *(byte *)((long)param_1 + 0x17);
      uVar13 = param_1[1];
      if (-1 < (char)bVar5) {
        uVar13 = (ulong)bVar5;
      }
      if (uVar12 < uVar13) {
        plVar4 = (long *)*param_1;
        if (-1 < (char)bVar5) {
          plVar4 = param_1;
        }
        *(char *)((long)plVar4 + uVar12 + 1) = (char)(uVar8 >> 8);
        bVar5 = *(byte *)((long)param_1 + 0x17);
        uVar13 = param_1[1];
        if (-1 < (char)bVar5) {
          uVar13 = (ulong)bVar5;
        }
        if ((uVar12 | 2) <= uVar13) {
          plVar4 = (long *)*param_1;
          if (-1 < (char)bVar5) {
            plVar4 = param_1;
          }
          *(undefined1 *)((long)plVar4 + (uVar12 | 2)) = 0x3d;
          bVar5 = *(byte *)((long)param_1 + 0x17);
          uVar13 = param_1[1];
          if (-1 < (char)bVar5) {
            uVar13 = (ulong)bVar5;
          }
          if ((uVar12 | 3) <= uVar13) {
            plVar4 = (long *)*param_1;
            if (-1 < (char)bVar5) {
              plVar4 = param_1;
            }
            *(undefined1 *)((long)plVar4 + (uVar12 | 3)) = 0x3d;
            if ((param_4 & 1) == 0) {
              return;
            }
            uVar12 = param_1[1];
            if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
              uVar12 = (ulong)*(byte *)((long)param_1 + 0x17);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (param_1,uVar12 - 2,0);
            return;
          }
        }
      }
    }
  }
  else {
    if (iVar6 != 2) {
      return;
    }
    uVar10 = (ulong)*(byte *)(param_2 + uVar11);
    FUN_10a105774(uVar10,((byte *)(param_2 + uVar11))[1],0,puVar3,0x40);
    bVar5 = *(byte *)((long)param_1 + 0x17);
    uVar13 = param_1[1];
    if (-1 < (char)bVar5) {
      uVar13 = (ulong)bVar5;
    }
    if (uVar12 <= uVar13) {
      plVar4 = (long *)*param_1;
      if (-1 < (char)bVar5) {
        plVar4 = param_1;
      }
      *(char *)((long)plVar4 + uVar12) = (char)uVar10;
      bVar5 = *(byte *)((long)param_1 + 0x17);
      uVar13 = param_1[1];
      if (-1 < (char)bVar5) {
        uVar13 = (ulong)bVar5;
      }
      if (uVar12 < uVar13) {
        plVar4 = (long *)*param_1;
        if (-1 < (char)bVar5) {
          plVar4 = param_1;
        }
        *(char *)((long)plVar4 + uVar12 + 1) = (char)(uVar10 >> 8);
        bVar5 = *(byte *)((long)param_1 + 0x17);
        uVar13 = param_1[1];
        if (-1 < (char)bVar5) {
          uVar13 = (ulong)bVar5;
        }
        if ((uVar12 | 2) <= uVar13) {
          plVar4 = (long *)*param_1;
          if (-1 < (char)bVar5) {
            plVar4 = param_1;
          }
          *(char *)((long)plVar4 + (uVar12 | 2)) = (char)(uVar10 >> 0x10);
          bVar5 = *(byte *)((long)param_1 + 0x17);
          uVar13 = param_1[1];
          if (-1 < (char)bVar5) {
            uVar13 = (ulong)bVar5;
          }
          if ((uVar12 | 3) <= uVar13) {
            plVar4 = (long *)*param_1;
            if (-1 < (char)bVar5) {
              plVar4 = param_1;
            }
            *(undefined1 *)((long)plVar4 + (uVar12 | 3)) = 0x3d;
            if ((param_4 & 1) == 0) {
              return;
            }
            uVar12 = param_1[1];
            if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
              uVar12 = (ulong)*(byte *)((long)param_1 + 0x17);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (param_1,uVar12 - 1,0);
            return;
          }
        }
      }
    }
  }
LAB_10a0f14d8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a0f14dc);
  (*pcVar7)();
}



/* Entry: 10a0f14fc; end: 10a0f18a3;  */

void FUN_10a0f14fc(long *param_1,byte ****param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  byte ***pppbStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  pppbStack_78 = (byte ***)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (param_3 == 0) {
LAB_10a0f1608:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
LAB_10a0f1830:
    if ((long)uStack_68 < 0) {
      __ZdlPv(pppbStack_78);
    }
    return;
  }
  uVar5 = 0;
LAB_10a0f1548:
  if (0x20 < *(byte *)((long)param_2 + uVar5) ||
      (1L << ((ulong)*(byte *)((long)param_2 + uVar5) & 0x3f) & 0x100003600U) == 0)
  goto code_r0x00010a0f1560;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&pppbStack_78,param_3);
  do {
    bVar4 = *(byte *)param_2;
    if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100003600U) == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&pppbStack_78,(int)(char)bVar4);
    }
    param_2 = (byte ****)((long)param_2 + 1);
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  param_3 = uStack_70;
  param_2 = (byte ****)pppbStack_78;
  if (-1 < (long)uStack_68) {
    param_3 = uStack_68 >> 0x38;
    param_2 = &pppbStack_78;
  }
joined_r0x00010a0f156c:
  if (param_3 == 0) goto LAB_10a0f1608;
  FUN_10a0dc020(param_1,(long)((float)param_3 / 4.0) * 3);
  if (param_3 < 4) {
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    while( true ) {
      uVar8 = uVar5 + 3;
      lVar3 = *param_1;
      uVar9 = param_1[1] - lVar3;
      uVar2 = uVar6;
      if (uVar9 < uVar8) break;
      if ((((param_3 <= uVar6) || (param_3 <= uVar6 + 1)) || (param_3 <= uVar6 + 2)) ||
         (param_3 <= uVar6 + 3)) goto LAB_10a0f1860;
      uVar2 = (ulong)*(byte *)((long)param_2 + uVar6);
      FUN_10a0f18a4(uVar2,(long)(char)*(byte *)((long)param_2 + uVar6 + 1),
                    (long)(char)*(byte *)((long)param_2 + uVar6 + 2),
                    (long)(char)*(byte *)((long)param_2 + uVar6 + 3),param_4);
      if (uVar9 <= uVar5) goto LAB_10a0f1860;
      *(char *)(lVar3 + uVar5) = (char)uVar2;
      if ((ulong)(param_1[1] - *param_1) <= uVar5 + 1) goto LAB_10a0f1860;
      *(char *)(*param_1 + uVar5 + 1) = (char)(uVar2 >> 8);
      if ((ulong)(param_1[1] - *param_1) <= uVar5 + 2) goto LAB_10a0f1860;
      *(char *)(*param_1 + uVar5 + 2) = (char)(uVar2 >> 0x10);
      uVar2 = uVar6 + 4;
      uVar9 = uVar6 + 8;
      uVar5 = uVar8;
      uVar6 = uVar2;
      if (param_3 < uVar9) break;
    }
  }
  if (uVar2 == param_3) {
    if (param_3 == 1) goto LAB_10a0f1860;
    if (*(byte *)((long)param_2 + (param_3 - 2)) == 0x3d) {
      lVar3 = -2;
    }
    else {
      if (*(byte *)((long)param_2 + (param_3 - 1)) != 0x3d) goto LAB_10a0f1754;
      lVar3 = -1;
    }
    uVar8 = param_1[1] - *param_1;
    uVar6 = uVar8 + lVar3;
    if (uVar8 < uVar6) {
      func_0x000107c27d58(param_1);
    }
    else if (uVar8 != uVar6) {
      param_1[1] = *param_1 + uVar6;
    }
  }
LAB_10a0f1754:
  if (uVar2 < param_3) {
    lVar3 = (long)(char)*(byte *)((long)param_2 + uVar2);
    if ((uVar2 | 1) < param_3) {
      bVar4 = *(byte *)((long)param_2 + (uVar2 | 1));
    }
    else {
      bVar4 = 0x41;
    }
    if ((uVar2 | 2) < param_3) {
      bVar7 = *(byte *)((long)param_2 + (uVar2 | 2));
    }
    else {
      bVar7 = 0x41;
    }
    FUN_10a0f18a4(lVar3,(int)(char)bVar4,(int)(char)bVar7,0x41,param_4);
    uStack_7c = (short)lVar3;
    uStack_7a = (char)((ulong)lVar3 >> 0x10);
    if (param_3 + ~uVar2 == 0) {
      uVar6 = 3;
    }
    else {
      lVar3 = 0;
      uVar6 = (uVar2 - param_3) + 4;
      do {
        if ((lVar3 == 3) || ((ulong)(param_1[1] - *param_1) <= uVar5)) {
LAB_10a0f1860:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f1864);
          (*pcVar1)();
        }
        *(undefined1 *)(*param_1 + uVar5) = *(undefined1 *)((long)&uStack_7c + lVar3);
        lVar3 = lVar3 + 1;
        uVar5 = uVar5 + 1;
      } while (param_3 + ~uVar2 != lVar3);
    }
    uVar5 = param_1[1] - *param_1;
    if (uVar5 < uVar6) {
      func_0x000107c27d58(param_1,-uVar6);
    }
    else if (uVar5 - uVar6 < uVar5) {
      param_1[1] = *param_1 + (uVar5 - uVar6);
    }
  }
  goto LAB_10a0f1830;
code_r0x00010a0f1560:
  uVar5 = uVar5 + 1;
  if (param_3 == uVar5) goto joined_r0x00010a0f156c;
  goto LAB_10a0f1548;
}



/* Entry: 10a0f18a4; end: 10a0f1977;  */

uint FUN_10a0f18a4(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
  if (param_5 == 0) {
    uVar4 = (uint)(byte)(&UNK_10e496459)[param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)] << 0xc;
    uVar3 = uVar4 | (uint)(byte)(&UNK_10e496459)[(int)param_1] << 0x12;
    bVar2 = (&UNK_10e496459)[param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)];
    uVar5 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
  }
  else {
    uVar4 = param_1;
    if ((param_1 & 0xff) == 0x2d) {
      uVar4 = 0x2b;
    }
    uVar3 = 0x2f;
    if (param_1 != 0x5f) {
      uVar3 = uVar4;
    }
    param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
    uVar4 = param_2;
    if (param_2 == 0x2d) {
      uVar4 = 0x2b;
    }
    uVar5 = 0x2f;
    if (param_2 != 0x5f) {
      uVar5 = uVar4;
    }
    uVar4 = (uint)(byte)(&UNK_10e496459)[(int)uVar5] << 0xc;
    uVar3 = (uint)(byte)(&UNK_10e496459)[(int)uVar3] << 0x12 |
            (uint)(byte)(&UNK_10e496459)[(int)uVar5] << 0xc;
    param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
    uVar5 = param_3;
    if (param_3 == 0x2d) {
      uVar5 = 0x2b;
    }
    uVar1 = 0x2f;
    if (param_3 != 0x5f) {
      uVar1 = uVar5;
    }
    bVar2 = (&UNK_10e496459)[(int)uVar1];
    param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
    uVar1 = param_4;
    if (param_4 == 0x2d) {
      uVar1 = 0x2b;
    }
    uVar5 = 0x2f;
    if (param_4 != 0x5f) {
      uVar5 = uVar1;
    }
  }
  return (uVar4 | (uint)bVar2 << 6) & 0xff00 |
         ((uint)(byte)(&UNK_10e496459)[(int)uVar5] | (uint)bVar2 << 6) << 0x10 |
         uVar3 >> 0x10 & 0xff;
}



/* Entry: 10a0f1978; end: 10a0f19df;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a0f1978(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_48;
  
  if ((param_3 & 1) != 0) {
    plVar5 = param_2;
    func_0x00010ad03330();
    uVar4 = plVar5[1];
    if (-1 < (char)*(byte *)((long)plVar5 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)plVar5 + 0x17);
    }
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    FUN_10a003c90(param_1,uVar1 + uVar4,(long)&uStack_48 + 7);
    plVar2 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar2 = param_1;
    }
    if (uVar4 != 0) {
      plVar3 = (long *)*plVar5;
      if (-1 < *(char *)((long)plVar5 + 0x17)) {
        plVar3 = plVar5;
      }
      _memmove(plVar2,plVar3,uVar4);
    }
    if (uVar1 != 0) {
      plVar5 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar5 = param_2;
      }
      _memmove((long)plVar2 + uVar4,plVar5,uVar1);
    }
    *(undefined1 *)((long)plVar2 + uVar4 + uVar1) = 0;
    return;
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    uStack_48 = *param_2;
    uVar4 = param_2[1];
    if (0x16 < uVar4) {
      if (uVar4 < 0x7ffffffffffffff7) {
        lVar6 = 0x19;
        if ((uVar4 | 7) != 0x17) {
          lVar6 = (uVar4 | 7) + 1;
        }
      }
      else {
        lVar6 = uStack_48;
        func_0x000104bd47d4();
      }
      func_0x000107c60e20(lVar6);
      return;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_1,uStack_48,uVar4 + 1);
    return;
  }
  lVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar6;
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10a0f19e0; end: 10a0f1a4f;  */

void FUN_10a0f19e0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10a0f1978(auStack_38);
  FUN_10a0f1a50(param_1,auStack_38,param_3 & 2,0);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a0f1a50; end: 10a0f1b1b;  */

void FUN_10a0f1a50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte bStack_28;
  
  FUN_10a0f1bfc(&uStack_58);
  uVar2 = uStack_50;
  uVar1 = uStack_58;
  if ((bStack_28 & 1) != 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    *param_1 = uVar1;
    param_1[2] = uStack_48;
    param_1[1] = uVar2;
    param_1[3] = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    FUN_10a0f1ea0(&uStack_58);
    return;
  }
  FUN_10a0ee900(auStack_70,&UNK_10f63b4fb,0x14);
  FUN_10a0029c0(auStack_70);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0f1aec);
  (*pcVar3)();
}



/* Entry: 10a0f1b1c; end: 10a0f1b8b;  */

void FUN_10a0f1b1c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10a08d2e0(auStack_38);
  FUN_10a0f1a50(param_1,auStack_38,param_3 & 2,0);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a0f1b8c; end: 10a0f1bfb;  */

void FUN_10a0f1b8c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10a0f1978(auStack_38);
  FUN_10a0f1bfc(param_1,auStack_38,param_3 & 2,0);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a0f1bfc; end: 10a0f1e2f;  */

void FUN_10a0f1bfc(undefined8 *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *****pppppuVar2;
  code *pcVar3;
  ulong *puVar4;
  long *plVar5;
  ulong *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_68;
  undefined8 ****appppuStack_60 [2];
  char cStack_49;
  undefined1 auStack_48 [24];
  
  func_0x000107c2b054(appppuStack_60,&UNK_10f63b3ad);
  if ((param_3 & 0xfffffffd) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (appppuStack_60,0x72);
  }
  if ((param_4 >> 2 & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (appppuStack_60,0x62);
  }
  if (param_3 != 2) {
    if (param_3 == 0) {
      puVar1 = (undefined8 *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        puVar1 = param_2;
      }
      pppppuVar2 = (undefined8 *****)appppuStack_60[0];
      if (-1 < cStack_49) {
        pppppuVar2 = appppuStack_60;
      }
      FUN_10ad04424(&puStack_90,puVar1,pppppuVar2);
      puVar4 = puStack_90;
      if (puStack_90 != (ulong *)0x0) goto LAB_10a0f1cd0;
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
LAB_10a0f1d68:
    if (cStack_49 < '\0') {
      __ZdlPv(appppuStack_60[0]);
    }
    return;
  }
  puVar1 = (undefined8 *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar1 = param_2;
  }
  FUN_10a7d88b0(puVar1,1);
  puVar4 = (ulong *)0x10;
  __Znwm();
  func_0x0001092c0568();
LAB_10a0f1cd0:
  puStack_90 = puVar4;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_88,*param_2,param_2[1]);
  }
  else {
    uStack_80 = param_2[1];
    uStack_88 = *param_2;
    uStack_78 = param_2[2];
  }
  uStack_70 = 0;
  uStack_68 = 0;
  if ((uint)puStack_90[1] < 5) {
    plVar5 = (long *)*puStack_90;
    (**(code **)(*plVar5 + 0x10))();
    puVar4 = puStack_90;
    if (((ulong)plVar5 & 1) != 0) {
      puStack_90 = (ulong *)0x0;
      *param_1 = puVar4;
      param_1[2] = uStack_80;
      param_1[1] = uStack_88;
      param_1[3] = uStack_78;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 1;
      FUN_10a0f1ea0(&puStack_90);
      goto LAB_10a0f1d68;
    }
  }
  FUN_10a0ee900(auStack_48,&UNK_10f63b510,0x20);
  FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0f1dc0);
  (*pcVar3)();
}



/* Entry: 10a0f1e30; end: 10a0f1e9f;  */

void FUN_10a0f1e30(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10a08d2e0(auStack_38);
  FUN_10a0f1bfc(param_1,auStack_38,param_3 & 2,0);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a0f1ea0; end: 10a0f1edb;  */

long FUN_10a0f1ea0(long param_1)

{
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  func_0x00010a109514(param_1,0);
  return param_1;
}



/* Entry: 10a0f1edc; end: 10a0f1f4b;  */

void FUN_10a0f1edc(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c2b054(auStack_38,&UNK_10f63b3ad);
  if (param_2 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(auStack_38,0x72);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(auStack_38,0x62);
  FUN_10a00946c(&UNK_10f63b531);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f1f2c);
  (*pcVar1)();
}



/* Entry: 10a0f1f4c; end: 10a0f2023;  */

void FUN_10a0f1f4c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 uStack_31;
  
  (**(code **)(**(long **)*param_2 + 0x28))(*(long **)*param_2,0);
  (**(code **)(**(long **)*param_2 + 0x28))(*(long **)*param_2,0);
  plVar1 = *(long **)*param_2;
  (**(code **)(*plVar1 + 0x18))();
  uStack_31 = 0;
  FUN_10a0cf3f0(param_1,plVar1,&uStack_31);
  param_2 = (undefined8 *)*param_2;
  uVar3 = *param_1;
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x18))();
  plVar2 = (long *)*param_2;
  (**(code **)(*plVar2 + 0x20))(plVar2,uVar3,1,plVar1);
  return;
}



/* Entry: 10a0f2024; end: 10a0f20bf;  */

void FUN_10a0f2024(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)*param_1;
  (**(code **)(*plVar1 + 0x18))();
  plVar2 = (long *)(param_2[1] - *param_2);
  if (plVar1 < plVar2 || (long)plVar1 - (long)plVar2 == 0) {
    if (plVar1 < plVar2) {
      param_2[1] = *param_2 + (long)plVar1;
    }
  }
  else {
    FUN_10a105930(param_2,(long)plVar1 - (long)plVar2);
  }
  (**(code **)(**(long **)*param_1 + 0x28))(*(long **)*param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010a0f20bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)*param_1 + 0x20))(*(long **)*param_1,*param_2,1,plVar1);
  return;
}



/* Entry: 10a0f20c0; end: 10a0f2177;  */

void FUN_10a0f20c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = *(long **)*param_2;
  (**(code **)(*plVar2 + 0x18))();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_1,plVar2,0);
  (**(code **)(**(long **)*param_2 + 0x28))(*(long **)*param_2,0);
  puVar1 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar1 = param_1;
  }
  (**(code **)(**(long **)*param_2 + 0x20))(*(long **)*param_2,puVar1,1,plVar2);
  return;
}



/* Entry: 10a0f2178; end: 10a0f2223;  */

void FUN_10a0f2178(long *param_1)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  char *extraout_x8;
  undefined8 extraout_x8_00;
  char *pcVar4;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  long lStack_1080;
  undefined1 auStack_1039 [4097];
  long lStack_38;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _bzero(auStack_1039,0x1001);
  lVar2 = *param_1;
  func_0x0001092c0638(lVar2,auStack_1039,0x1000);
  if (lVar2 == 0) {
    extraout_x8[0] = '\0';
    extraout_x8[1] = '\0';
    extraout_x8[2] = '\0';
    extraout_x8[3] = '\0';
    extraout_x8[4] = '\0';
    extraout_x8[5] = '\0';
    extraout_x8[6] = '\0';
    extraout_x8[7] = '\0';
    extraout_x8[8] = '\0';
    extraout_x8[9] = '\0';
    extraout_x8[10] = '\0';
    extraout_x8[0xb] = '\0';
    extraout_x8[0xc] = '\0';
    extraout_x8[0xd] = '\0';
    extraout_x8[0xe] = '\0';
    extraout_x8[0xf] = '\0';
    extraout_x8[0x10] = '\0';
    extraout_x8[0x11] = '\0';
    extraout_x8[0x12] = '\0';
    extraout_x8[0x13] = '\0';
    extraout_x8[0x14] = '\0';
    extraout_x8[0x15] = '\0';
    extraout_x8[0x16] = '\0';
    extraout_x8[0x17] = '\0';
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = extraout_x8;
    func_0x000107c2b054(extraout_x8,auStack_1039);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  bVar1 = pcVar3[0x17];
  if ((char)bVar1 < '\0') {
    if (*(ulong *)(pcVar3 + 8) < 4) goto LAB_10a0f2324;
    pcVar4 = *(char **)pcVar3;
  }
  else {
    pcVar4 = pcVar3;
    if (bVar1 < 4) goto LAB_10a0f2324;
  }
  if (((*pcVar4 == '/') && (pcVar4[1] == '~')) && (pcVar4[2] == '/')) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      pcVar4 = pcVar3;
      if ((char)bVar1 < '\0') {
        pcVar4 = *(char **)pcVar3;
      }
      func_0x00010ae06f08(0,1,&UNK_10f63b53f,&UNK_10f63b560,0xe3,&UNK_10f63b59b,in_x6,in_x7,pcVar4);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(pcVar3,0,1);
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      pcVar4 = pcVar3;
      if (pcVar3[0x17] < '\0') {
        pcVar4 = *(char **)pcVar3;
      }
      func_0x00010ae06f08(1,2,&UNK_10f63b53f,&UNK_10f63b560,0xe6,&UNK_10f63b5ce,in_x6,in_x7,pcVar4);
    }
  }
LAB_10a0f2324:
  uStack_1088 = *(undefined8 *)(pcVar3 + 8);
  uStack_1090 = *(undefined8 *)pcVar3;
  lStack_1080 = *(long *)(pcVar3 + 0x10);
  pcVar3[8] = '\0';
  pcVar3[9] = '\0';
  pcVar3[10] = '\0';
  pcVar3[0xb] = '\0';
  pcVar3[0xc] = '\0';
  pcVar3[0xd] = '\0';
  pcVar3[0xe] = '\0';
  pcVar3[0xf] = '\0';
  pcVar3[0x10] = '\0';
  pcVar3[0x11] = '\0';
  pcVar3[0x12] = '\0';
  pcVar3[0x13] = '\0';
  pcVar3[0x14] = '\0';
  pcVar3[0x15] = '\0';
  pcVar3[0x16] = '\0';
  pcVar3[0x17] = '\0';
  pcVar3[0] = '\0';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  FUN_10ad03508(extraout_x8_00,&uStack_1090);
  if (lStack_1080 < 0) {
    __ZdlPv(uStack_1090);
  }
  return;
}



/* Entry: 10a0f2224; end: 10a0f2387;  */

void FUN_10a0f2224(undefined8 param_1,char *param_2)

{
  byte bVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  bVar1 = param_2[0x17];
  if ((char)bVar1 < '\0') {
    if (*(ulong *)(param_2 + 8) < 4) goto LAB_10a0f2324;
    pcVar2 = *(char **)param_2;
  }
  else {
    pcVar2 = param_2;
    if (bVar1 < 4) goto LAB_10a0f2324;
  }
  if (((*pcVar2 == '/') && (pcVar2[1] == '~')) && (pcVar2[2] == '/')) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      pcVar2 = param_2;
      if ((char)bVar1 < '\0') {
        pcVar2 = *(char **)param_2;
      }
      func_0x00010ae06f08(0,1,&UNK_10f63b53f,&UNK_10f63b560,0xe3,&UNK_10f63b59b,in_x6,in_x7,pcVar2);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(param_2,0,1);
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      pcVar2 = param_2;
      if (param_2[0x17] < '\0') {
        pcVar2 = *(char **)param_2;
      }
      func_0x00010ae06f08(1,2,&UNK_10f63b53f,&UNK_10f63b560,0xe6,&UNK_10f63b5ce,in_x6,in_x7,pcVar2);
    }
  }
LAB_10a0f2324:
  uStack_48 = *(undefined8 *)(param_2 + 8);
  uStack_50 = *(undefined8 *)param_2;
  lStack_40 = *(long *)(param_2 + 0x10);
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  FUN_10ad03508(param_1,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return;
}



/* Entry: 10a0f2388; end: 10a0f250f;  */

void FUN_10a0f2388(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uStack_4a;
  char *pcStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  
  uVar9 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar9 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  if (uVar9 == 0) {
LAB_10a0f23dc:
    uVar9 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar9 == 0) goto LAB_10a0f23dc;
      lVar4 = uVar9 - 1;
      uVar9 = uVar9 - 1;
    } while (*(char *)((long)puVar3 + lVar4) != '.');
  }
  uStack_4a = 0x5c2f;
  pcStack_40 = (char *)0x0;
  uStack_38 = 0;
  pcStack_48 = (char *)0x0;
  FUN_10a105aa8(&pcStack_48,&uStack_4a,&pcStack_48,2);
  if (pcStack_48 == pcStack_40) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    pcVar7 = pcStack_48;
    puVar3 = (undefined8 *)*param_2;
    uVar2 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar3 = param_2;
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      if (uVar2 != 0) {
        uVar8 = uVar2;
        do {
          if (uVar8 == 0) goto LAB_10a0f2464;
          lVar4 = uVar8 - 1;
          uVar8 = uVar8 - 1;
        } while (*(char *)((long)puVar3 + lVar4) != *pcVar7);
        uVar1 = uVar6;
        if (uVar6 <= uVar8) {
          uVar1 = uVar8;
        }
        if (uVar8 != 0xffffffffffffffff) {
          uVar6 = uVar1;
        }
      }
LAB_10a0f2464:
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 != pcStack_40);
  }
  if (uVar9 != 0xffffffffffffffff) {
    uVar2 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    bVar5 = uVar9 == uVar2 - 1;
    if ((!bVar5 && uVar6 <= uVar9) && (bVar5 || uVar9 != uVar6)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (param_1,param_2,uVar9 + 1,0xffffffffffffffff,&uStack_4a);
      goto LAB_10a0f24d0;
    }
  }
  func_0x000107c2b054(param_1,&UNK_10f63b3ad);
LAB_10a0f24d0:
  if (pcStack_48 != (char *)0x0) {
    pcStack_40 = pcStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a0f2510; end: 10a0f284f;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10a0f2510(ulong param_1,ulong param_2)

{
  uint3 *******pppppppuVar1;
  undefined8 *******pppppppuVar2;
  undefined *puVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *******pppppppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 *******pppppppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  uint3 *******pppppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar12 = param_1;
  if (param_2 == 0) {
    uVar9 = 0xffffffffffffffff;
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3f;
    _memchr(param_1,0x3f,param_2);
    uVar9 = uVar12 - param_1;
    if (uVar12 == 0) {
      uVar9 = 0xffffffffffffffff;
    }
  }
  if (uVar9 <= param_2) {
    param_2 = uVar9;
  }
  if (0x7ffffffffffffff7 < param_2) {
    func_0x000109ffde50();
    if (uStack_48._7_1_ < '\0') {
      __ZdlPv(pppppppuStack_58);
    }
    if ((char)bStack_59 < '\0') {
      __ZdlPv(pppppppuStack_70);
    }
    if (uStack_78._7_1_ < '\0') {
      __ZdlPv(pppppppuStack_88);
    }
    __Unwind_Resume();
    uVar9 = *(ulong *)(uVar12 + 0x30);
    if (uVar8 <= *(ulong *)(uVar12 + 0x30)) {
      uVar9 = uVar8;
    }
    *(ulong *)(uVar12 + 0x20) = uVar9;
    return uVar12;
  }
  if (param_2 < 0x17) {
    uStack_78 = CONCAT17((char)param_2,(undefined7)uStack_78);
    pppppppuVar6 = &pppppppuStack_88;
    if (param_2 != 0) goto LAB_10a0f25ac;
  }
  else {
    pppppppuVar2 = (undefined8 *******)0x19;
    if ((param_2 | 7) != 0x17) {
      pppppppuVar2 = (undefined8 *******)((param_2 | 7) + 1);
    }
    pppppppuVar6 = pppppppuVar2;
    __Znwm();
    uStack_78 = (ulong)pppppppuVar2 | 0x8000000000000000;
    pppppppuStack_88 = pppppppuVar6;
    uStack_80 = param_2;
LAB_10a0f25ac:
    _memmove(pppppppuVar6,param_1,param_2);
  }
  *(undefined1 *)((long)pppppppuVar6 + param_2) = 0;
  FUN_10a0f2388(&pppppppuStack_70,&pppppppuStack_88);
  uVar12 = uStack_68;
  pppppppuVar2 = pppppppuStack_70;
  if (-1 < (char)bStack_59) {
    uVar12 = (ulong)bStack_59;
    pppppppuVar2 = &pppppppuStack_70;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  pppppppuStack_58 = (uint3 *******)0x0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&pppppppuStack_58,uVar12,0);
  puVar3 = PTR___DefaultRuneLocale_11034bcf8;
  if (uVar12 != 0) {
    uVar9 = 0;
    do {
      cVar5 = *(char *)((long)pppppppuVar2 + uVar9);
      lVar7 = (long)cVar5;
      if ((-1 < lVar7) && ((*(uint *)(puVar3 + lVar7 * 4 + 0x3c) >> 0xf & 1) != 0)) {
        ___tolower();
        cVar5 = (char)lVar7;
      }
      uVar8 = uStack_50;
      if (-1 < (long)uStack_48) {
        uVar8 = uStack_48 >> 0x38;
      }
      if (uVar8 < uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0f2804);
        (*pcVar4)();
      }
      pppppppuVar1 = pppppppuStack_58;
      if (-1 < (long)uStack_48) {
        pppppppuVar1 = (uint3 *******)&pppppppuStack_58;
      }
      *(char *)((long)pppppppuVar1 + uVar9) = cVar5;
      uVar9 = uVar9 + 1;
    } while (uVar12 != uVar9);
  }
  if ((char)bStack_59 < '\0') {
    __ZdlPv(pppppppuStack_70);
  }
  if ((long)uStack_78 < 0) {
    __ZdlPv(pppppppuStack_88);
  }
  uVar12 = uStack_50;
  if (-1 < (long)uStack_48) {
    uVar12 = uStack_48 >> 0x38;
  }
  if (uVar12 == 3) {
    pppppppuVar1 = pppppppuStack_58;
    if (-1 < (long)uStack_48) {
      pppppppuVar1 = (uint3 *******)&pppppppuStack_58;
    }
    if (*(short *)pppppppuVar1 != 0x706a || *(char *)((long)pppppppuVar1 + 2) != 'g') {
      if (*(short *)pppppppuVar1 == 0x6e70 && *(char *)((long)pppppppuVar1 + 2) == 'g') {
        uVar12 = 2;
      }
      else if (*(short *)pppppppuVar1 == 0x706d && *(char *)((long)pppppppuVar1 + 2) == '4') {
        uVar12 = 4;
      }
      else if (*(short *)pppppppuVar1 == 0x706d && *(char *)((long)pppppppuVar1 + 2) == '3') {
        uVar12 = 5;
      }
      else {
        uVar10 = *(uint3 *)pppppppuVar1 & 0xff00ff;
        uVar11 = uVar10 >> 8 | ((*(uint3 *)pppppppuVar1 & 0xff00ff00) >> 8 | uVar10 << 8) << 0x10;
        uVar10 = (uint)(uVar11 < 0x676c6200);
        if (0x676c6200 < uVar11) {
          uVar10 = 0xffffffff;
        }
        uVar11 = 6;
        if (uVar10 != 0) {
          uVar11 = 0;
        }
        uVar12 = (ulong)uVar11;
      }
      goto joined_r0x00010a0f27f8;
    }
  }
  else {
    if (uVar12 != 4) {
      uVar12 = 0;
      goto joined_r0x00010a0f27f8;
    }
    pppppppuVar1 = pppppppuStack_58;
    if (-1 < (long)uStack_48) {
      pppppppuVar1 = (uint3 *******)&pppppppuStack_58;
    }
    if (*(int *)pppppppuVar1 != 0x6765706a) {
      uVar10 = 0;
      if (*(int *)pppppppuVar1 == 0x70626577) {
        uVar10 = 3;
      }
      uVar12 = (ulong)uVar10;
      goto joined_r0x00010a0f27f8;
    }
  }
  uVar12 = 1;
joined_r0x00010a0f27f8:
  if ((long)uStack_48 < 0) {
    __ZdlPv(pppppppuStack_58);
  }
  return uVar12;
}



/* Entry: 10a0f2850; end: 10a0f2887;  */

void FUN_10a0f2850(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (param_2 <= *(ulong *)(param_1 + 0x30)) {
    uVar1 = param_2;
  }
  *(ulong *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 10a0f2888; end: 10a0f28db;  */

ulong FUN_10a0f2888(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x20);
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  _memcpy(param_2,*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20),uVar1);
  *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + uVar1;
  return uVar1;
}



/* Entry: 10a0f28dc; end: 10a0f296b;  */

void FUN_10a0f28dc(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_10a0d918c(&uStack_40,*(long *)(param_2 + 0x28),
                *(long *)(param_2 + 0x28) + *(long *)(param_2 + 0x30));
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x30);
  *param_1 = 0;
  param_1[1] = &UNK_1092bf4b8;
  param_1[2] = &PTR_DAT_110ae9528;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = uStack_38;
  param_1[0xb] = uStack_40;
  param_1[0xd] = uStack_30;
  return;
}



/* Entry: 10a0f296c; end: 10a0f2a4f;  */

undefined8 * FUN_10a0f296c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_110ba5188;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 1,*param_3,param_3[1]);
  }
  else {
    uVar4 = param_3[1];
    uVar3 = *param_3;
    param_1[3] = param_3[2];
    param_1[2] = uVar4;
    param_1[1] = uVar3;
  }
  puVar2 = (undefined8 *)*param_2;
  *param_2 = 0;
  param_1[4] = puVar2;
  *param_1 = &PTR_FUN_110ba2e08;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar2 = (undefined8 *)*puVar2;
  (**(code **)*puVar2)();
  plVar1 = *(long **)param_1[4];
  (**(code **)(*plVar1 + 0x18))();
  param_1[5] = puVar2;
  param_1[6] = plVar1;
  return param_1;
}



/* Entry: 10a0f2a50; end: 10a0f2b33;  */

undefined8 * FUN_10a0f2a50(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_110ba5188;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 1,param_2[1],param_2[2]);
  }
  else {
    uVar4 = param_2[2];
    uVar3 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[1] = uVar3;
  }
  *param_1 = &PTR_FUN_110ba2e08;
  puVar2 = (undefined8 *)*param_2;
  param_1[4] = puVar2;
  *param_2 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar2 = (undefined8 *)*puVar2;
  (**(code **)*puVar2)();
  plVar1 = *(long **)param_1[4];
  (**(code **)(*plVar1 + 0x18))();
  param_1[5] = puVar2;
  param_1[6] = plVar1;
  return param_1;
}



/* Entry: 10a0f2b34; end: 10a0f2b7b;  */

undefined8 * FUN_10a0f2b34(undefined8 *param_1)

{
  func_0x00010a109514(param_1 + 4,0);
  *param_1 = &PTR_FUN_110ba5188;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10a0f2b7c; end: 10a0f2b7f;  */

undefined8 * FUN_10a0f2b7c(undefined8 *param_1)

{
  func_0x00010a109514(param_1 + 4,0);
  *param_1 = &PTR_FUN_110ba5188;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10a0f2b80; end: 10a0f2b93;  */

void FUN_10a0f2b80(void)

{
  FUN_10a0f2b34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0f2b94; end: 10a0f2bcf;  */

long * FUN_10a0f2b94(long param_1)

{
  long *plVar1;
  
  if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
    plVar1 = (long *)**(undefined8 **)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010a0f2ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))();
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 10a0f2bd0; end: 10a0f2c23;  */

void FUN_10a0f2bd0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    (**(code **)(*plVar1 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00010a0f2c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*plVar2 + 0x28))((long *)*plVar2,(long)plVar1 + param_2);
    return;
  }
  return;
}



/* Entry: 10a0f2c24; end: 10a0f2c97;  */

void FUN_10a0f2c24(long param_1)

{
  long *plVar1;
  
  if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
    plVar1 = (long *)**(undefined8 **)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010a0f2c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    return;
  }
  return;
}



/* Entry: 10a0f2c98; end: 10a0f2d7f;  */

void FUN_10a0f2c98(undefined4 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2 + 5,param_4);
  *(undefined4 *)(param_2 + 8) = param_1;
  plVar4 = (long *)param_2[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      puVar5 = (undefined8 *)*param_2;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,param_3,param_4);
      }
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a0f2d80; end: 10a0f2e47;  */

void FUN_10a0f2d80(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    if (param_1[6] == 0) {
      return;
    }
    *(undefined1 *)param_1[5] = 0;
    param_1[6] = 0;
  }
  else {
    if (*(char *)((long)param_1 + 0x3f) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)((long)param_1 + 0x3f) = 0;
  }
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 != (long *)0x0))
  {
    plVar4 = (long *)*param_1;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,param_1 + 2);
    }
    plVar4 = plVar3 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a0f2e48; end: 10a0f2ec7;  */

void FUN_10a0f2e48(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  bVar3 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)param_1 + 0x3f);
  uVar2 = param_1[6];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 == uVar2) {
    plVar7 = (long *)*param_2;
    if (-1 < (char)bVar3) {
      plVar7 = param_2;
    }
    plVar8 = (long *)param_1[5];
    if (-1 < (char)bVar4) {
      plVar8 = param_1 + 5;
    }
    _memcmp(plVar7,plVar8);
    if ((int)plVar7 == 0) {
      if (*(char *)((long)param_1 + 0x3f) < '\0') {
        if (param_1[6] == 0) {
          return;
        }
        *(undefined1 *)param_1[5] = 0;
        param_1[6] = 0;
      }
      else {
        if (*(char *)((long)param_1 + 0x3f) == '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)((long)param_1 + 0x3f) = 0;
      }
      plVar7 = (long *)param_1[1];
      if ((plVar7 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
        plVar8 = (long *)*param_1;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))(plVar8,param_1 + 2);
        }
        plVar8 = plVar7 + 1;
        do {
          lVar9 = *plVar8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10a0f2ec8; end: 10a0f2f67;  */

undefined8 *
FUN_10a0f2ec8(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = &PTR_FUN_110ba2e58;
  uVar3 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar3;
  *param_3 = 0;
  param_3[1] = 0;
  uVar3 = *param_4;
  uVar1 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110b3f6a0;
  puVar2[3] = uVar3;
  puVar2[4] = uVar1;
  param_1[4] = puVar2 + 3;
  param_1[5] = puVar2;
  return param_1;
}



/* Entry: 10a0f2f68; end: 10a0f2fff;  */

void FUN_10a0f2f68(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar6 = (undefined8 *)0x30;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = uVar2;
  *puVar6 = &PTR_FUN_110b3f650;
  puVar6[4] = lVar3;
  *(undefined2 *)(puVar6 + 5) = 0x101;
  *param_1 = puVar6 + 3;
  param_1[1] = puVar6;
  return;
}


