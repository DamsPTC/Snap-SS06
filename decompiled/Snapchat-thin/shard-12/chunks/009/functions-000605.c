/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c4d9cc; end: 109c4dc13;  */

long * FUN_109c4d9cc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  float fVar11;
  int iStack_ec;
  undefined1 auStack_e8 [72];
  long lStack_a0;
  long *plStack_98;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar8 = *plVar10;
  bVar3 = *(byte *)(param_1 + 0x6b);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar10[1];
    lStack_a0 = lVar8;
    if (plStack_98 != (long *)0x0) {
      plVar7 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_e8,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar8 + 8,
               *(undefined1 *)(lVar8 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_e8);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar7 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_e8);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar8 = *(long *)*param_3;
  fVar11 = *(float *)(param_1 + 0x98);
  FUN_109c1a514(&lStack_a0,*(undefined8 *)(param_1 + 0x70),lVar8);
  FUN_109c18fcc(-fVar11,lVar8);
  uVar9 = *(undefined8 *)(lVar8 + 0x40);
  uVar2 = *(uint *)(lVar8 + 8) & ((int)*(uint *)(lVar8 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  iVar6 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar8 + 0xc,uVar2);
  iStack_ec = iVar6;
  _vvexpf(uVar9,uVar9,&iStack_ec);
  iStack_ec = 0x3f800000;
  _vDSP_vsadd(uVar9,1,&iStack_ec,uVar9,1,(long)iVar6);
  _vDSP_vdiv(uVar9,1,*(undefined8 *)(lStack_a0 + 0x40),1,uVar9,1,(long)iVar6);
  plVar7 = &lStack_a0;
  FUN_109c180ec();
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_e8);
    __Unwind_Resume();
    *plVar7 = (long)&PTR_FUN_110b2c3e0;
    func_0x000109c20db4(plVar7 + 0xd);
    if (*(char *)((long)plVar7 + 0x5f) < '\0') {
      __ZdlPv(plVar7[9]);
    }
    if (*(char *)((long)plVar7 + 0x47) < '\0') {
      __ZdlPv(plVar7[6]);
    }
    FUN_109c61bbc(plVar7 + 1);
    return plVar7;
  }
  return plVar7;
}



/* Entry: 109c4dc14; end: 109c4dc17;  */

undefined8 * FUN_109c4dc14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4dc18; end: 109c4dc3b;  */

void FUN_109c4dc18(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4dc3c; end: 109c4dc43;  */

long * FUN_109c4dc3c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  float fVar11;
  int iStack_ec;
  undefined1 auStack_e8 [72];
  long lStack_a0;
  long *plStack_98;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar8 = *plVar10;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar10[1];
    lStack_a0 = lVar8;
    if (plStack_98 != (long *)0x0) {
      plVar7 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_e8,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar8 + 8,
               *(undefined1 *)(lVar8 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_e8);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar7 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_e8);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar8 = *(long *)*param_3;
  fVar11 = *(float *)(param_1 + 0x90);
  FUN_109c1a514(&lStack_a0,*(undefined8 *)(param_1 + 0x68),lVar8);
  FUN_109c18fcc(-fVar11,lVar8);
  uVar9 = *(undefined8 *)(lVar8 + 0x40);
  uVar2 = *(uint *)(lVar8 + 8) & ((int)*(uint *)(lVar8 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar2) {
    uVar2 = 5;
  }
  iVar6 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar8 + 0xc,uVar2);
  iStack_ec = iVar6;
  _vvexpf(uVar9,uVar9,&iStack_ec);
  iStack_ec = 0x3f800000;
  _vDSP_vsadd(uVar9,1,&iStack_ec,uVar9,1,(long)iVar6);
  _vDSP_vdiv(uVar9,1,*(undefined8 *)(lStack_a0 + 0x40),1,uVar9,1,(long)iVar6);
  plVar7 = &lStack_a0;
  FUN_109c180ec();
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_e8);
    __Unwind_Resume();
    *plVar7 = (long)&PTR_FUN_110b2c3e0;
    func_0x000109c20db4(plVar7 + 0xd);
    if (*(char *)((long)plVar7 + 0x5f) < '\0') {
      __ZdlPv(plVar7[9]);
    }
    if (*(char *)((long)plVar7 + 0x47) < '\0') {
      __ZdlPv(plVar7[6]);
    }
    FUN_109c61bbc(plVar7 + 1);
    return plVar7;
  }
  return plVar7;
}



/* Entry: 109c4dc44; end: 109c4dc93;  */

long FUN_109c4dc44(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4dc94; end: 109c4debf;  */

undefined8 * FUN_109c4dc94(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar10 = *plVar15;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar15[1];
    lStack_a0 = lVar10;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar10 + 8,
               *(undefined1 *)(lVar10 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar10 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar15);
  lVar10 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar10 + 8);
  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar8 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar10 + 0xc,uVar3);
  uVar3 = *(uint *)(lVar10 + 0xc + (long)(int)*(uint *)(lVar10 + 8) * 4 + -4);
  uVar9 = (ulong)uVar3;
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar5 = (int)puVar8 / (int)uVar3;
  }
  if (0 < (int)uVar5) {
    uVar11 = 0;
    pfVar12 = *(float **)(lVar10 + 0x40);
    do {
      if (0 < (int)uVar3) {
        fVar16 = 0.0;
        pfVar13 = pfVar12;
        uVar14 = uVar9;
        do {
          fVar16 = fVar16 + *pfVar13 * *pfVar13;
          uVar14 = uVar14 - 1;
          pfVar13 = pfVar13 + 1;
        } while (uVar14 != 0);
        lVar10 = 0;
        fVar17 = 1e-06;
        if (1e-06 <= SQRT(fVar16)) {
          fVar17 = SQRT(fVar16);
        }
        do {
          *(float *)((long)pfVar12 + lVar10) = *(float *)((long)pfVar12 + lVar10) / fVar17;
          lVar10 = lVar10 + 4;
        } while (uVar9 * 4 - lVar10 != 0);
      }
      uVar11 = uVar11 + 1;
      pfVar12 = pfVar12 + uVar9;
    } while (uVar11 != uVar5);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar15 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4dec0; end: 109c4dec3;  */

undefined8 * FUN_109c4dec0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4dec4; end: 109c4dee7;  */

void FUN_109c4dec4(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4dee8; end: 109c4deef;  */

undefined8 * FUN_109c4dee8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar10 = *plVar15;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar15[1];
    lStack_a0 = lVar10;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar10 + 8,
               *(undefined1 *)(lVar10 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar10 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar15);
  lVar10 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar10 + 8);
  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar8 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar10 + 0xc,uVar3);
  uVar3 = *(uint *)(lVar10 + 0xc + (long)(int)*(uint *)(lVar10 + 8) * 4 + -4);
  uVar9 = (ulong)uVar3;
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar5 = (int)puVar8 / (int)uVar3;
  }
  if (0 < (int)uVar5) {
    uVar11 = 0;
    pfVar12 = *(float **)(lVar10 + 0x40);
    do {
      if (0 < (int)uVar3) {
        fVar16 = 0.0;
        pfVar13 = pfVar12;
        uVar14 = uVar9;
        do {
          fVar16 = fVar16 + *pfVar13 * *pfVar13;
          uVar14 = uVar14 - 1;
          pfVar13 = pfVar13 + 1;
        } while (uVar14 != 0);
        lVar10 = 0;
        fVar17 = 1e-06;
        if (1e-06 <= SQRT(fVar16)) {
          fVar17 = SQRT(fVar16);
        }
        do {
          *(float *)((long)pfVar12 + lVar10) = *(float *)((long)pfVar12 + lVar10) / fVar17;
          lVar10 = lVar10 + 4;
        } while (uVar9 * 4 - lVar10 != 0);
      }
      uVar11 = uVar11 + 1;
      pfVar12 = pfVar12 + uVar9;
    } while (uVar11 != uVar5);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar15 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4def0; end: 109c4df3f;  */

long FUN_109c4def0(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4df40; end: 109c4e0eb;  */

undefined8 * FUN_109c4df40(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar10[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  iVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  _vDSP_vsq(puVar8,1,puVar8,1,(long)iVar7);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4e0ec; end: 109c4e0ef;  */

undefined8 * FUN_109c4e0ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4e0f0; end: 109c4e113;  */

void FUN_109c4e0f0(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4e114; end: 109c4e11b;  */

undefined8 * FUN_109c4e114(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar10;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar10[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar9 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  iVar7 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  puVar8 = *(undefined8 **)(lVar9 + 0x40);
  _vDSP_vsq(puVar8,1,puVar8,1,(long)iVar7);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar8 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar8 + 0xd);
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    if (*(char *)((long)puVar8 + 0x47) < '\0') {
      __ZdlPv(puVar8[6]);
    }
    FUN_109c61bbc(puVar8 + 1);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 109c4e11c; end: 109c4e16b;  */

long FUN_109c4e11c(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4e16c; end: 109c4e36f;  */

void FUN_109c4e16c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar11 = *plVar13;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar13[1];
    lStack_90 = lVar11;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar11 + 8,
               *(undefined1 *)(lVar11 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar11 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar13);
  lVar11 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar11 + 8) & ((int)*(uint *)(lVar11 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  iVar8 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar11 + 0xc,uVar3);
  if (*(char *)(lVar11 + 0x48) == '\x04') {
    if (iVar8 != 0) {
      lVar12 = (long)iVar8 << 2;
      piVar10 = *(int **)(lVar11 + 0x40);
      do {
        *piVar10 = -*piVar10;
        lVar12 = lVar12 + -4;
        piVar10 = piVar10 + 1;
      } while (lVar12 != 0);
    }
  }
  else {
    if (*(char *)(lVar11 + 0x48) != '\x01') goto LAB_109c4e344;
    if (iVar8 != 0) {
      lVar12 = (long)iVar8 << 2;
      pfVar9 = *(float **)(lVar11 + 0x40);
      do {
        *pfVar9 = -*pfVar9;
        lVar12 = lVar12 + -4;
        pfVar9 = pfVar9 + 1;
      } while (lVar12 != 0);
    }
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar13 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
LAB_109c4e344:
  func_0x000105688514(&UNK_10f5a5b17);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109c4e354);
  (*pcVar7)();
}



/* Entry: 109c4e370; end: 109c4e373;  */

undefined8 * FUN_109c4e370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4e374; end: 109c4e397;  */

void FUN_109c4e374(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4e398; end: 109c4e39f;  */

void FUN_109c4e398(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar11 = *plVar13;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar13[1];
    lStack_90 = lVar11;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar11 + 8,
               *(undefined1 *)(lVar11 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar11 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar13);
  lVar11 = *(long *)*param_3;
  uVar3 = *(uint *)(lVar11 + 8) & ((int)*(uint *)(lVar11 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  iVar8 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar11 + 0xc,uVar3);
  if (*(char *)(lVar11 + 0x48) == '\x04') {
    if (iVar8 != 0) {
      lVar12 = (long)iVar8 << 2;
      piVar10 = *(int **)(lVar11 + 0x40);
      do {
        *piVar10 = -*piVar10;
        lVar12 = lVar12 + -4;
        piVar10 = piVar10 + 1;
      } while (lVar12 != 0);
    }
  }
  else {
    if (*(char *)(lVar11 + 0x48) != '\x01') goto LAB_109c4e344;
    if (iVar8 != 0) {
      lVar12 = (long)iVar8 << 2;
      pfVar9 = *(float **)(lVar11 + 0x40);
      do {
        *pfVar9 = -*pfVar9;
        lVar12 = lVar12 + -4;
        pfVar9 = pfVar9 + 1;
      } while (lVar12 != 0);
    }
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar13 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
LAB_109c4e344:
  func_0x000105688514(&UNK_10f5a5b17);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109c4e354);
  (*pcVar7)();
}



/* Entry: 109c4e3a0; end: 109c4e3ef;  */

long FUN_109c4e3a0(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4e3f0; end: 109c4e5b7;  */

undefined8 * FUN_109c4e3f0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  undefined4 uVar13;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar12[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    lVar10 = (long)(int)puVar7 << 2;
    puVar8 = *(undefined4 **)(lVar9 + 0x40);
    do {
      uVar13 = 0x3f800000;
      if (!NAN(*pfVar11)) {
        uVar13 = 0;
      }
      *puVar8 = uVar13;
      lVar10 = lVar10 + -4;
      puVar8 = puVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4e5b8; end: 109c4e5bb;  */

undefined8 * FUN_109c4e5b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4e5bc; end: 109c4e5df;  */

void FUN_109c4e5bc(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4e5e0; end: 109c4e5e7;  */

undefined8 * FUN_109c4e5e0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  undefined4 uVar13;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar12[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    lVar10 = (long)(int)puVar7 << 2;
    puVar8 = *(undefined4 **)(lVar9 + 0x40);
    do {
      uVar13 = 0x3f800000;
      if (!NAN(*pfVar11)) {
        uVar13 = 0;
      }
      *puVar8 = uVar13;
      lVar10 = lVar10 + -4;
      puVar8 = puVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4e5e8; end: 109c4e637;  */

long FUN_109c4e5e8(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4e638; end: 109c4e80f;  */

undefined8 * FUN_109c4e638(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar12[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    fVar13 = *(float *)(param_1 + 0x98);
    lVar10 = (long)(int)puVar7 << 2;
    puVar8 = *(undefined4 **)(lVar9 + 0x40);
    do {
      uVar14 = 0x3f800000;
      if (fVar13 <= *pfVar11) {
        uVar14 = 0;
      }
      *puVar8 = uVar14;
      lVar10 = lVar10 + -4;
      puVar8 = puVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4e810; end: 109c4e813;  */

undefined8 * FUN_109c4e810(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4e814; end: 109c4e837;  */

void FUN_109c4e814(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4e838; end: 109c4e83f;  */

undefined8 * FUN_109c4e838(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar12[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    fVar13 = *(float *)(param_1 + 0x90);
    lVar10 = (long)(int)puVar7 << 2;
    puVar8 = *(undefined4 **)(lVar9 + 0x40);
    do {
      uVar14 = 0x3f800000;
      if (fVar13 <= *pfVar11) {
        uVar14 = 0;
      }
      *puVar8 = uVar14;
      lVar10 = lVar10 + -4;
      puVar8 = puVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4e840; end: 109c4e88f;  */

long FUN_109c4e840(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4e890; end: 109c4ea4f;  */

undefined8 * FUN_109c4e890(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  long *plVar10;
  undefined4 uVar11;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar8 = *plVar10;
  bVar3 = *(byte *)(param_1 + 0x6b);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar10[1];
    lStack_a0 = lVar8;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar8 + 8,
               *(undefined1 *)(lVar8 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar8 = *(long *)*param_3;
  puVar9 = *(undefined4 **)(lVar8 + 0x40);
  uVar7 = *(uint *)(lVar8 + 8) & ((int)*(uint *)(lVar8 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar7) {
    uVar7 = 5;
  }
  puVar6 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar8 + 0xc,uVar7);
  if (0 < (int)puVar6) {
    uVar11 = *(undefined4 *)(param_1 + 0x98);
    uVar7 = (int)puVar6 + 1;
    do {
      *puVar9 = uVar11;
      uVar7 = uVar7 - 1;
      puVar9 = puVar9 + 1;
    } while (1 < uVar7);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar6 + 0xd);
    if (*(char *)((long)puVar6 + 0x5f) < '\0') {
      __ZdlPv(puVar6[9]);
    }
    if (*(char *)((long)puVar6 + 0x47) < '\0') {
      __ZdlPv(puVar6[6]);
    }
    FUN_109c61bbc(puVar6 + 1);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 109c4ea50; end: 109c4ea53;  */

undefined8 * FUN_109c4ea50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4ea54; end: 109c4ea77;  */

void FUN_109c4ea54(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4ea78; end: 109c4ea7f;  */

undefined8 * FUN_109c4ea78(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  long *plVar10;
  undefined4 uVar11;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar8 = *plVar10;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar10[1];
    lStack_a0 = lVar8;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar8 + 8,
               *(undefined1 *)(lVar8 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar8 = *(long *)*param_3;
  puVar9 = *(undefined4 **)(lVar8 + 0x40);
  uVar7 = *(uint *)(lVar8 + 8) & ((int)*(uint *)(lVar8 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar7) {
    uVar7 = 5;
  }
  puVar6 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar8 + 0xc,uVar7);
  if (0 < (int)puVar6) {
    uVar11 = *(undefined4 *)(param_1 + 0x90);
    uVar7 = (int)puVar6 + 1;
    do {
      *puVar9 = uVar11;
      uVar7 = uVar7 - 1;
      puVar9 = puVar9 + 1;
    } while (1 < uVar7);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar6 + 0xd);
    if (*(char *)((long)puVar6 + 0x5f) < '\0') {
      __ZdlPv(puVar6[9]);
    }
    if (*(char *)((long)puVar6 + 0x47) < '\0') {
      __ZdlPv(puVar6[6]);
    }
    FUN_109c61bbc(puVar6 + 1);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 109c4ea80; end: 109c4eacf;  */

long FUN_109c4ea80(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4ead0; end: 109c4ec93;  */

undefined8 * FUN_109c4ead0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 uVar13;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar8 = *plVar10;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar10[1];
    lStack_a0 = lVar8;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar8 + 8,
               *(undefined1 *)(lVar8 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar8 = *(long *)*param_3;
  puVar9 = *(undefined4 **)(lVar8 + 0x40);
  uVar3 = *(uint *)(lVar8 + 8) & ((int)*(uint *)(lVar8 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar8 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    lVar12 = (long)(int)puVar7 << 2;
    puVar11 = *(undefined4 **)(lVar8 + 0x40);
    do {
      uVar13 = *puVar9;
      _erff();
      *puVar11 = uVar13;
      lVar12 = lVar12 + -4;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar12 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4ec94; end: 109c4ec97;  */

undefined8 * FUN_109c4ec94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4ec98; end: 109c4ecbb;  */

void FUN_109c4ec98(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4ecbc; end: 109c4ecc3;  */

undefined8 * FUN_109c4ecbc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 uVar13;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar8 = *plVar10;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar10[1];
    lStack_a0 = lVar8;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar8 + 8,
               *(undefined1 *)(lVar8 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar10);
  lVar8 = *(long *)*param_3;
  puVar9 = *(undefined4 **)(lVar8 + 0x40);
  uVar3 = *(uint *)(lVar8 + 8) & ((int)*(uint *)(lVar8 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar8 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    lVar12 = (long)(int)puVar7 << 2;
    puVar11 = *(undefined4 **)(lVar8 + 0x40);
    do {
      uVar13 = *puVar9;
      _erff();
      *puVar11 = uVar13;
      lVar12 = lVar12 + -4;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar12 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar10 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4ecc4; end: 109c4ee37;  */

undefined1  [16]
FUN_109c4ecc4(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4,uint param_5,
             uint param_6)

{
  long *plVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  long *aplStack_a0 [9];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar9 = (undefined1 *)(long)(int)(param_6 - param_5);
  plVar6 = param_1;
  FUN_109c1ea1c();
  if (param_5 < param_6) {
    uVar18 = (ulong)param_5;
    do {
      uVar12 = *(ulong *)(param_2 + 0x20);
      puVar2 = (ulong *)(param_2 + 0x20);
      if ((uVar12 & 1) != 0) {
        puVar2 = (ulong *)(uVar12 + uVar18 * 8 + 7);
      }
      FUN_109c19dfc(aplStack_a0,*param_4,param_3,*(undefined8 *)(*puVar2 + 0x20),
                    ((long)*(int *)(*puVar2 + 0x18) & 0x3fffffffffffffffU) << 1);
      FUN_109c18570(auStack_b0,aplStack_a0);
      FUN_109c180ec(aplStack_a0);
      plVar6 = param_1;
      puVar9 = auStack_b0;
      func_0x000109c1eab4();
      plVar7 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar1 = plStack_a8 + 1;
        do {
          lVar14 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar6 = plVar7;
        }
      }
      uVar18 = uVar18 + 1;
    } while (param_6 != (uint)uVar18);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar19._8_8_ = puVar9;
    auVar19._0_8_ = plVar6;
    return auVar19;
  }
  ___stack_chk_fail();
  aplStack_a0[0] = param_1;
  FUN_109c2070c(aplStack_a0);
  __Unwind_Resume();
  lVar14 = *plVar6;
  if ((undefined1 *)(plVar6[2] - lVar14 >> 2) < puVar9) {
    if ((ulong)puVar9 >> 0x3e != 0) {
      FUN_109c4ef88();
      puVar3 = (undefined4 *)plVar6[1];
      uVar16 = SUB84(puVar9,0);
      if (puVar3 < (undefined4 *)plVar6[2]) {
        puVar17 = puVar3 + 1;
        *puVar3 = uVar16;
        plVar7 = plVar6;
        puVar11 = puVar9;
      }
      else {
        lVar14 = (long)puVar3 - *plVar6;
        uVar18 = (lVar14 >> 2) + 1;
        if (uVar18 >> 0x3e != 0) {
          FUN_109c4ef88();
          puVar8 = &DAT_10f62a4d8;
          func_0x000104c4f6cc();
          if ((ulong)puVar8 >> 0x3e == 0) {
            lVar14 = (long)puVar8 << 2;
            __Znwm(lVar14);
            auVar22._8_8_ = puVar8;
            auVar22._0_8_ = lVar14;
            return auVar22;
          }
          func_0x000104c4f740();
          FUN_109c21610(puVar8 + 8);
          auVar23._8_8_ = puVar9;
          auVar23._0_8_ = puVar8;
          return auVar23;
        }
        uVar13 = plVar6[2] - *plVar6;
        uVar12 = (long)uVar13 >> 1;
        if (uVar12 <= uVar18) {
          uVar12 = uVar18;
        }
        if (0x7ffffffffffffffb < uVar13) {
          uVar12 = 0x3fffffffffffffff;
        }
        FUN_109c4ef9c();
        puVar11 = (undefined1 *)*plVar6;
        puVar3 = (undefined4 *)(uVar12 + lVar14);
        lVar14 = (long)puVar3 - (plVar6[1] - (long)puVar11);
        puVar17 = puVar3 + 1;
        *puVar3 = uVar16;
        _memcpy(lVar14,puVar11);
        plVar7 = (long *)*plVar6;
        *plVar6 = lVar14;
        plVar6[1] = (long)puVar17;
        plVar6[2] = uVar12 + (long)puVar9 * 4;
        if (plVar7 != (long *)0x0) {
          __ZdlPv();
        }
      }
      plVar6[1] = (long)puVar17;
      auVar21._8_8_ = puVar11;
      auVar21._0_8_ = plVar7;
      return auVar21;
    }
    lVar15 = plVar6[1];
    puVar10 = puVar9;
    FUN_109c4ef9c();
    puVar11 = puVar9 + (lVar15 - lVar14);
    puVar10 = puVar9 + (long)puVar10 * 4;
    puVar9 = (undefined1 *)*plVar6;
    lVar15 = (long)puVar11 - (plVar6[1] - (long)puVar9);
    _memcpy(lVar15);
    lVar14 = *plVar6;
    *plVar6 = lVar15;
    plVar6[1] = (long)puVar11;
    plVar6[2] = (long)puVar10;
    plVar6 = (long *)0x0;
    if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar24._8_8_ = puVar9;
      auVar24._0_8_ = lVar14;
      return auVar24;
    }
  }
  auVar20._8_8_ = puVar9;
  auVar20._0_8_ = plVar6;
  return auVar20;
}



/* Entry: 109c4ee38; end: 109c4eec7;  */

undefined1  [16] FUN_109c4ee38(ulong *param_1,ulong param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar4 = *param_1;
  if ((ulong)((long)(param_1[2] - uVar4) >> 2) < param_2) {
    if (param_2 >> 0x3e != 0) {
      FUN_109c4ef88();
      puVar1 = (undefined4 *)param_1[1];
      uVar7 = (undefined4)param_2;
      if (puVar1 < (undefined4 *)param_1[2]) {
        puVar10 = puVar1 + 1;
        *puVar1 = uVar7;
        puVar2 = param_1;
        uVar4 = param_2;
      }
      else {
        lVar9 = (long)puVar1 - *param_1;
        uVar4 = (lVar9 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) {
          FUN_109c4ef88();
          puVar3 = &DAT_10f62a4d8;
          func_0x000104c4f6cc();
          if ((ulong)puVar3 >> 0x3e == 0) {
            lVar9 = (long)puVar3 << 2;
            __Znwm(lVar9);
            auVar13._8_8_ = puVar3;
            auVar13._0_8_ = lVar9;
            return auVar13;
          }
          func_0x000104c4f740();
          FUN_109c21610(puVar3 + 8);
          auVar14._8_8_ = param_2;
          auVar14._0_8_ = puVar3;
          return auVar14;
        }
        uVar5 = (long)param_1[2] - *param_1;
        uVar6 = (long)uVar5 >> 1;
        if (uVar6 <= uVar4) {
          uVar6 = uVar4;
        }
        if (0x7ffffffffffffffb < uVar5) {
          uVar6 = 0x3fffffffffffffff;
        }
        FUN_109c4ef9c();
        uVar4 = *param_1;
        puVar1 = (undefined4 *)(uVar6 + lVar9);
        uVar5 = (long)puVar1 - (param_1[1] - uVar4);
        puVar10 = puVar1 + 1;
        *puVar1 = uVar7;
        _memcpy(uVar5,uVar4);
        puVar2 = (ulong *)*param_1;
        *param_1 = uVar5;
        param_1[1] = (ulong)puVar10;
        param_1[2] = uVar6 + param_2 * 4;
        if (puVar2 != (ulong *)0x0) {
          __ZdlPv();
        }
      }
      param_1[1] = (ulong)puVar10;
      auVar12._8_8_ = uVar4;
      auVar12._0_8_ = puVar2;
      return auVar12;
    }
    uVar5 = param_1[1];
    uVar6 = param_2;
    FUN_109c4ef9c();
    uVar4 = param_2 + (uVar5 - uVar4);
    uVar6 = param_2 + uVar6 * 4;
    param_2 = *param_1;
    uVar8 = uVar4 - (param_1[1] - param_2);
    _memcpy(uVar8);
    uVar5 = *param_1;
    *param_1 = uVar8;
    param_1[1] = uVar4;
    param_1[2] = uVar6;
    param_1 = (ulong *)0x0;
    if (uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar15._8_8_ = param_2;
      auVar15._0_8_ = uVar5;
      return auVar15;
    }
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 109c4eec8; end: 109c4ef87;  */

undefined1  [16] FUN_109c4eec8(long *param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  puVar2 = (undefined4 *)param_1[1];
  uVar8 = (undefined4)param_2;
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar10 = puVar2 + 1;
    *puVar2 = uVar8;
    plVar3 = param_1;
    lVar5 = param_2;
  }
  else {
    lVar9 = (long)puVar2 - *param_1;
    uVar1 = (lVar9 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_109c4ef88();
      puVar4 = &DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if ((ulong)puVar4 >> 0x3e == 0) {
        lVar9 = (long)puVar4 << 2;
        __Znwm(lVar9);
        auVar12._8_8_ = puVar4;
        auVar12._0_8_ = lVar9;
        return auVar12;
      }
      func_0x000104c4f740();
      FUN_109c21610(puVar4 + 8);
      auVar13._8_8_ = param_2;
      auVar13._0_8_ = puVar4;
      return auVar13;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 1;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar7 = 0x3fffffffffffffff;
    }
    FUN_109c4ef9c();
    lVar5 = *param_1;
    puVar2 = (undefined4 *)(uVar7 + lVar9);
    lVar9 = (long)puVar2 - (param_1[1] - lVar5);
    puVar10 = puVar2 + 1;
    *puVar2 = uVar8;
    _memcpy(lVar9,lVar5);
    plVar3 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar10;
    param_1[2] = uVar7 + param_2 * 4;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  auVar11._8_8_ = lVar5;
  auVar11._0_8_ = plVar3;
  return auVar11;
}



/* Entry: 109c4ef88; end: 109c4ef9b;  */

undefined1  [16] FUN_109c4ef88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar1 >> 0x3e == 0) {
    lVar2 = (long)puVar1 << 2;
    __Znwm(lVar2);
    auVar3._8_8_ = puVar1;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  FUN_109c21610(puVar1 + 8);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 109c4ef9c; end: 109c4f01f;  */

undefined1  [16] FUN_109c4ef9c(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_1 >> 0x3e == 0) {
    lVar1 = param_1 << 2;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  FUN_109c21610(param_1 + 8);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 109c4f020; end: 109c4f1af;  */

undefined8 * FUN_109c4f020(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar6 = *plVar8;
  bVar3 = *(byte *)(param_1 + 0x6b);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar8[1];
    lStack_a0 = lVar6;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar6 + 8,
               *(undefined1 *)(lVar6 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar6 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar7 = *(undefined8 **)*param_3;
  FUN_109c4d000(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),puVar7);
  func_0x000109c23ef8(0,0x3f800000);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4f1b0; end: 109c4f1b3;  */

undefined8 * FUN_109c4f1b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4f1b4; end: 109c4f1d7;  */

void FUN_109c4f1b4(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4f1d8; end: 109c4f1df;  */

undefined8 * FUN_109c4f1d8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar6 = *plVar8;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar8[1];
    lStack_a0 = lVar6;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar6 + 8,
               *(undefined1 *)(lVar6 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar6 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar7 = *(undefined8 **)*param_3;
  FUN_109c4d000(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),puVar7);
  func_0x000109c23ef8(0,0x3f800000);
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4f1e0; end: 109c4f22f;  */

long FUN_109c4f1e0(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4f230; end: 109c4f407;  */

undefined8 * FUN_109c4f230(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar12[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    fVar13 = *(float *)(param_1 + 0x98);
    lVar10 = (long)(int)puVar7 << 2;
    puVar8 = *(undefined4 **)(lVar9 + 0x40);
    do {
      uVar14 = 0x3f800000;
      if (*pfVar11 <= fVar13) {
        uVar14 = 0;
      }
      *puVar8 = uVar14;
      lVar10 = lVar10 + -4;
      puVar8 = puVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4f408; end: 109c4f40b;  */

undefined8 * FUN_109c4f408(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4f40c; end: 109c4f42f;  */

void FUN_109c4f40c(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4f430; end: 109c4f437;  */

undefined8 * FUN_109c4f430(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar12[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    fVar13 = *(float *)(param_1 + 0x90);
    lVar10 = (long)(int)puVar7 << 2;
    puVar8 = *(undefined4 **)(lVar9 + 0x40);
    do {
      uVar14 = 0x3f800000;
      if (*pfVar11 <= fVar13) {
        uVar14 = 0;
      }
      *puVar8 = uVar14;
      lVar10 = lVar10 + -4;
      puVar8 = puVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4f438; end: 109c4f487;  */

long FUN_109c4f438(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4f488; end: 109c4f64f;  */

undefined8 * FUN_109c4f488(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  undefined4 uVar13;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar12[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    lVar10 = (long)(int)puVar7 << 2;
    puVar8 = *(undefined4 **)(lVar9 + 0x40);
    do {
      uVar13 = 0x3f800000;
      if (*pfVar11 != 0.0) {
        uVar13 = 0;
      }
      *puVar8 = uVar13;
      lVar10 = lVar10 + -4;
      puVar8 = puVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4f650; end: 109c4f653;  */

undefined8 * FUN_109c4f650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4f654; end: 109c4f677;  */

void FUN_109c4f654(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4f678; end: 109c4f67f;  */

undefined8 * FUN_109c4f678(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  undefined4 uVar13;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar12[1];
    lStack_90 = lVar9;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    lVar10 = (long)(int)puVar7 << 2;
    puVar8 = *(undefined4 **)(lVar9 + 0x40);
    do {
      uVar13 = 0x3f800000;
      if (*pfVar11 != 0.0) {
        uVar13 = 0;
      }
      *puVar8 = uVar13;
      lVar10 = lVar10 + -4;
      puVar8 = puVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4f680; end: 109c4f6cf;  */

long FUN_109c4f680(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4f6d0; end: 109c4f8a7;  */

undefined8 * FUN_109c4f6d0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar12[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    fVar13 = *(float *)(param_1 + 0x98);
    lVar10 = (long)(int)puVar7 << 2;
    puVar8 = *(undefined4 **)(lVar9 + 0x40);
    do {
      uVar14 = 0x3f800000;
      if (*pfVar11 < fVar13) {
        uVar14 = 0;
      }
      *puVar8 = uVar14;
      lVar10 = lVar10 + -4;
      puVar8 = puVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4f8a8; end: 109c4f8ab;  */

undefined8 * FUN_109c4f8a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4f8ac; end: 109c4f8cf;  */

void FUN_109c4f8ac(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4f8d0; end: 109c4f8d7;  */

undefined8 * FUN_109c4f8d0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar12[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    fVar13 = *(float *)(param_1 + 0x90);
    lVar10 = (long)(int)puVar7 << 2;
    puVar8 = *(undefined4 **)(lVar9 + 0x40);
    do {
      uVar14 = 0x3f800000;
      if (*pfVar11 < fVar13) {
        uVar14 = 0;
      }
      *puVar8 = uVar14;
      lVar10 = lVar10 + -4;
      puVar8 = puVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4f8d8; end: 109c4f927;  */

long FUN_109c4f8d8(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4f928; end: 109c4faff;  */

undefined8 * FUN_109c4f928(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar12[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    fVar13 = *(float *)(param_1 + 0x98);
    lVar10 = (long)(int)puVar7 << 2;
    puVar8 = *(undefined4 **)(lVar9 + 0x40);
    do {
      uVar14 = 0x3f800000;
      if (fVar13 < *pfVar11) {
        uVar14 = 0;
      }
      *puVar8 = uVar14;
      lVar10 = lVar10 + -4;
      puVar8 = puVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4fb00; end: 109c4fb03;  */

undefined8 * FUN_109c4fb00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4fb04; end: 109c4fb27;  */

void FUN_109c4fb04(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4fb28; end: 109c4fb2f;  */

undefined8 * FUN_109c4fb28(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar9 = *plVar12;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_98 = (long *)plVar12[1];
    lStack_a0 = lVar9;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar9 + 8,
               *(undefined1 *)(lVar9 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar12);
  lVar9 = *(long *)*param_3;
  pfVar11 = *(float **)(lVar9 + 0x40);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar7 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar9 + 0xc,uVar3);
  if ((int)puVar7 != 0) {
    fVar13 = *(float *)(param_1 + 0x90);
    lVar10 = (long)(int)puVar7 << 2;
    puVar8 = *(undefined4 **)(lVar9 + 0x40);
    do {
      uVar14 = 0x3f800000;
      if (fVar13 < *pfVar11) {
        uVar14 = 0;
      }
      *puVar8 = uVar14;
      lVar10 = lVar10 + -4;
      puVar8 = puVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar12 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar7 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar7 + 0xd);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      __ZdlPv(puVar7[9]);
    }
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      __ZdlPv(puVar7[6]);
    }
    FUN_109c61bbc(puVar7 + 1);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 109c4fb30; end: 109c4fb7f;  */

long FUN_109c4fb30(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4fb80; end: 109c4fcff;  */

undefined8 * FUN_109c4fb80(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 0x6b);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar8[1];
    lStack_a0 = lVar7;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar6 = *(undefined8 **)*param_3;
  (**(code **)(param_1 + 0x98))(puVar6,*(undefined8 *)(param_1 + 0x70));
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar6 + 0xd);
    if (*(char *)((long)puVar6 + 0x5f) < '\0') {
      __ZdlPv(puVar6[9]);
    }
    if (*(char *)((long)puVar6 + 0x47) < '\0') {
      __ZdlPv(puVar6[6]);
    }
    FUN_109c61bbc(puVar6 + 1);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 109c4fd00; end: 109c4fd03;  */

undefined8 * FUN_109c4fd00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4fd04; end: 109c4fd27;  */

void FUN_109c4fd04(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4fd28; end: 109c4fd2f;  */

undefined8 * FUN_109c4fd28(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar7 = *plVar8;
  bVar3 = *(byte *)(param_1 + 99);
  if (bVar3 == 1) {
    plStack_98 = (long *)plVar8[1];
    lStack_a0 = lVar7;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_90,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar7 + 8,
               *(undefined1 *)(lVar7 + 0x48));
    FUN_109c18570(&lStack_a0,auStack_90);
  }
  func_0x000109c1e534(*param_3,&lStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar3 & 1) == 0) {
    FUN_109c180ec(auStack_90);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar8);
  puVar6 = *(undefined8 **)*param_3;
  (**(code **)(param_1 + 0x90))(puVar6,*(undefined8 *)(param_1 + 0x68));
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar8 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_90);
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar6 + 0xd);
    if (*(char *)((long)puVar6 + 0x5f) < '\0') {
      __ZdlPv(puVar6[9]);
    }
    if (*(char *)((long)puVar6 + 0x47) < '\0') {
      __ZdlPv(puVar6[6]);
    }
    FUN_109c61bbc(puVar6 + 1);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 109c4fd30; end: 109c4fd7f;  */

long FUN_109c4fd30(long param_1)

{
  FUN_109c21610(param_1 + 8);
  return param_1;
}



/* Entry: 109c4fd80; end: 109c4ffbb;  */

undefined8 * FUN_109c4fd80(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [12];
  float fVar29;
  undefined1 auVar26 [16];
  float fVar30;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar17 = *plVar19;
  bVar4 = *(byte *)(param_1 + 0x6b);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar19[1];
    lStack_90 = lVar17;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x70))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x70),lVar17 + 8,
               *(undefined1 *)(lVar17 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar17 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar19);
  lVar17 = *(long *)*param_3;
  uVar12 = *(uint *)(lVar17 + 8) & ((int)*(uint *)(lVar17 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar12) {
    uVar12 = 5;
  }
  puVar13 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar17 + 0xc,uVar12);
  pfVar14 = *(float **)(lVar17 + 0x40);
  uVar12 = (uint)puVar13;
  if (3 < (int)uVar12) {
    iVar16 = (uVar12 >> 2) + 1;
    auVar20 = NEON_fmov(0x3f800000,4);
    pfVar15 = pfVar14;
    do {
      fVar21 = (float)*(undefined8 *)pfVar15;
      fVar30 = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
      fVar22 = (float)*(undefined8 *)(pfVar15 + 2);
      fVar23 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
      fVar24 = fVar21 * 0.16666667 + 0.5;
      fVar27 = fVar30 * 0.16666667 + 0.5;
      fVar28 = fVar22 * 0.16666667 + 0.5;
      fVar29 = fVar23 * 0.16666667 + 0.5;
      iVar8 = -(uint)(fVar24 < 0.0);
      iVar9 = -(uint)(fVar27 < 0.0);
      iVar10 = -(uint)(fVar28 < 0.0);
      iVar11 = -(uint)(fVar29 < 0.0);
      fVar24 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                               CONCAT12((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                        CONCAT11((byte)((uint)fVar24 >> 8) &
                                                 ~(byte)((uint)iVar8 >> 8),
                                                 SUB41(fVar24,0) & ~(byte)iVar8)));
      auVar25._0_8_ =
           CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                    CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                             CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                      CONCAT14(SUB41(fVar27,0) & ~(byte)iVar9,fVar24))));
      auVar25[8] = SUB41(fVar28,0) & ~(byte)iVar10;
      auVar25[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar10 >> 8);
      auVar25[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
      auVar25[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
      auVar26[0xc] = SUB41(fVar29,0) & ~(byte)iVar11;
      auVar26._0_12_ = auVar25;
      auVar26[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar11 >> 8);
      auVar26[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
      auVar26[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
      iVar8 = -(uint)(auVar20._4_4_ < (float)((ulong)auVar25._0_8_ >> 0x20));
      iVar9 = -(uint)(auVar20._8_4_ < auVar25._8_4_);
      iVar10 = -(uint)(auVar20._12_4_ < auVar26._12_4_);
      auVar7[4] = (char)iVar8;
      auVar7._0_4_ = -(uint)(auVar20._0_4_ < fVar24);
      auVar7[5] = (char)((uint)iVar8 >> 8);
      auVar7[6] = (char)((uint)iVar8 >> 0x10);
      auVar7[7] = (char)((uint)iVar8 >> 0x18);
      auVar7[8] = (char)iVar9;
      auVar7[9] = (char)((uint)iVar9 >> 8);
      auVar7[10] = (char)((uint)iVar9 >> 0x10);
      auVar7[0xb] = (char)((uint)iVar9 >> 0x18);
      auVar7[0xc] = (char)iVar10;
      auVar7[0xd] = (char)((uint)iVar10 >> 8);
      auVar7[0xe] = (char)((uint)iVar10 >> 0x10);
      auVar7[0xf] = (char)((uint)iVar10 >> 0x18);
      auVar26 = auVar26 ^ (auVar26 ^ auVar20) & auVar7;
      pfVar14 = pfVar15 + 4;
      *(ulong *)(pfVar15 + 2) = CONCAT44(fVar23 * auVar26._12_4_,fVar22 * auVar26._8_4_);
      *(ulong *)pfVar15 = CONCAT44(fVar30 * auVar26._4_4_,fVar21 * auVar26._0_4_);
      iVar16 = iVar16 + -1;
      pfVar15 = pfVar14;
    } while (1 < iVar16);
  }
  uVar3 = uVar12 & 3;
  if (-1 < (int)-uVar12) {
    uVar3 = -(-uVar12 & 3);
  }
  uVar18 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    do {
      fVar30 = *pfVar14 * 0.16666667 + 0.5;
      fVar21 = 0.0;
      if (0.0 <= fVar30) {
        fVar21 = fVar30;
      }
      fVar30 = 1.0;
      if (fVar21 <= 1.0) {
        fVar30 = fVar21;
      }
      *pfVar14 = *pfVar14 * fVar30;
      uVar18 = uVar18 - 1;
      pfVar14 = pfVar14 + 1;
    } while (uVar18 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar19 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar13 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar13 + 0xd);
    if (*(char *)((long)puVar13 + 0x5f) < '\0') {
      __ZdlPv(puVar13[9]);
    }
    if (*(char *)((long)puVar13 + 0x47) < '\0') {
      __ZdlPv(puVar13[6]);
    }
    FUN_109c61bbc(puVar13 + 1);
    return puVar13;
  }
  return puVar13;
}



/* Entry: 109c4ffbc; end: 109c4ffbf;  */

undefined8 * FUN_109c4ffbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c4ffc0; end: 109c4ffe3;  */

void FUN_109c4ffc0(long param_1)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 109c4ffe4; end: 109c4ffeb;  */

undefined8 * FUN_109c4ffe4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [12];
  float fVar29;
  undefined1 auVar26 [16];
  float fVar30;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  lVar17 = *plVar19;
  bVar4 = *(byte *)(param_1 + 99);
  if (bVar4 == 1) {
    plStack_88 = (long *)plVar19[1];
    lStack_90 = lVar17;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (auStack_80,(undefined8 *)**(undefined8 **)(param_1 + 0x68),lVar17 + 8,
               *(undefined1 *)(lVar17 + 0x48));
    FUN_109c18570(&lStack_90,auStack_80);
  }
  func_0x000109c1e534(*param_3,&lStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar2 = plStack_88 + 1;
    do {
      lVar17 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((bVar4 & 1) == 0) {
    FUN_109c180ec(auStack_80);
  }
  FUN_109c11af8(*(undefined8 *)*param_3,*plVar19);
  lVar17 = *(long *)*param_3;
  uVar12 = *(uint *)(lVar17 + 8) & ((int)*(uint *)(lVar17 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar12) {
    uVar12 = 5;
  }
  puVar13 = (undefined8 *)&UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,lVar17 + 0xc,uVar12);
  pfVar14 = *(float **)(lVar17 + 0x40);
  uVar12 = (uint)puVar13;
  if (3 < (int)uVar12) {
    iVar16 = (uVar12 >> 2) + 1;
    auVar20 = NEON_fmov(0x3f800000,4);
    pfVar15 = pfVar14;
    do {
      fVar21 = (float)*(undefined8 *)pfVar15;
      fVar30 = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
      fVar22 = (float)*(undefined8 *)(pfVar15 + 2);
      fVar23 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
      fVar24 = fVar21 * 0.16666667 + 0.5;
      fVar27 = fVar30 * 0.16666667 + 0.5;
      fVar28 = fVar22 * 0.16666667 + 0.5;
      fVar29 = fVar23 * 0.16666667 + 0.5;
      iVar8 = -(uint)(fVar24 < 0.0);
      iVar9 = -(uint)(fVar27 < 0.0);
      iVar10 = -(uint)(fVar28 < 0.0);
      iVar11 = -(uint)(fVar29 < 0.0);
      fVar24 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                               CONCAT12((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                        CONCAT11((byte)((uint)fVar24 >> 8) &
                                                 ~(byte)((uint)iVar8 >> 8),
                                                 SUB41(fVar24,0) & ~(byte)iVar8)));
      auVar25._0_8_ =
           CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                    CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                             CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                      CONCAT14(SUB41(fVar27,0) & ~(byte)iVar9,fVar24))));
      auVar25[8] = SUB41(fVar28,0) & ~(byte)iVar10;
      auVar25[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar10 >> 8);
      auVar25[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
      auVar25[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
      auVar26[0xc] = SUB41(fVar29,0) & ~(byte)iVar11;
      auVar26._0_12_ = auVar25;
      auVar26[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar11 >> 8);
      auVar26[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
      auVar26[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
      iVar8 = -(uint)(auVar20._4_4_ < (float)((ulong)auVar25._0_8_ >> 0x20));
      iVar9 = -(uint)(auVar20._8_4_ < auVar25._8_4_);
      iVar10 = -(uint)(auVar20._12_4_ < auVar26._12_4_);
      auVar7[4] = (char)iVar8;
      auVar7._0_4_ = -(uint)(auVar20._0_4_ < fVar24);
      auVar7[5] = (char)((uint)iVar8 >> 8);
      auVar7[6] = (char)((uint)iVar8 >> 0x10);
      auVar7[7] = (char)((uint)iVar8 >> 0x18);
      auVar7[8] = (char)iVar9;
      auVar7[9] = (char)((uint)iVar9 >> 8);
      auVar7[10] = (char)((uint)iVar9 >> 0x10);
      auVar7[0xb] = (char)((uint)iVar9 >> 0x18);
      auVar7[0xc] = (char)iVar10;
      auVar7[0xd] = (char)((uint)iVar10 >> 8);
      auVar7[0xe] = (char)((uint)iVar10 >> 0x10);
      auVar7[0xf] = (char)((uint)iVar10 >> 0x18);
      auVar26 = auVar26 ^ (auVar26 ^ auVar20) & auVar7;
      pfVar14 = pfVar15 + 4;
      *(ulong *)(pfVar15 + 2) = CONCAT44(fVar23 * auVar26._12_4_,fVar22 * auVar26._8_4_);
      *(ulong *)pfVar15 = CONCAT44(fVar30 * auVar26._4_4_,fVar21 * auVar26._0_4_);
      iVar16 = iVar16 + -1;
      pfVar15 = pfVar14;
    } while (1 < iVar16);
  }
  uVar3 = uVar12 & 3;
  if (-1 < (int)-uVar12) {
    uVar3 = -(-uVar12 & 3);
  }
  uVar18 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    do {
      fVar30 = *pfVar14 * 0.16666667 + 0.5;
      fVar21 = 0.0;
      if (0.0 <= fVar30) {
        fVar21 = fVar30;
      }
      fVar30 = 1.0;
      if (fVar21 <= 1.0) {
        fVar30 = fVar21;
      }
      *pfVar14 = *pfVar14 * fVar30;
      uVar18 = uVar18 - 1;
      pfVar14 = pfVar14 + 1;
    } while (uVar18 != 0);
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar19 + 0x3c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109c180ec(auStack_80);
    __Unwind_Resume();
    *puVar13 = &PTR_FUN_110b2c3e0;
    func_0x000109c20db4(puVar13 + 0xd);
    if (*(char *)((long)puVar13 + 0x5f) < '\0') {
      __ZdlPv(puVar13[9]);
    }
    if (*(char *)((long)puVar13 + 0x47) < '\0') {
      __ZdlPv(puVar13[6]);
    }
    FUN_109c61bbc(puVar13 + 1);
    return puVar13;
  }
  return puVar13;
}



/* Entry: 109c4ffec; end: 109c5011b;  */

undefined8 * FUN_109c4ffec(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_48;
  long *plStack_40;
  char cStack_31;
  
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x61) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_110b2e2d0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  FUN_109c1e9b8(param_1 + 0x14,&uStack_48);
  plVar4 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  func_0x000107c31940(&uStack_48,&UNK_10f5a5bcc);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,&uStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  return param_1;
}



/* Entry: 109c5011c; end: 109c5017f;  */

undefined8 * FUN_109c5011c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e2d0;
  FUN_10959b818(param_1 + 0x14);
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c50180; end: 109c5026b;  */

void FUN_109c50180(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  plVar7 = (long *)*param_2;
  iVar2 = *(int *)(*plVar7 + 0x3c);
  FUN_109c182f4(param_3,1);
  lVar5 = *plVar7;
  FUN_109c23f68(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),
                *(undefined4 *)(param_1 + 0x9c),lVar5,*(undefined4 *)(param_1 + 0x90));
  FUN_10959b570(auStack_50,lVar5);
  FUN_109c1e9b8(*param_3,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar6 = 3;
    if (iVar2 != 0) {
      uVar6 = 1;
    }
    func_0x000109c2e1ac(*(long *)(param_1 + 0xa0),uVar6,*(undefined8 *)*param_3,
                        *(undefined8 *)(param_1 + 0x68));
  }
  *(undefined4 *)(*(long *)*param_3 + 0x3c) = *(undefined4 *)(*plVar7 + 0x3c);
  return;
}



/* Entry: 109c5026c; end: 109c50347;  */

undefined8 * FUN_109c5026c(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  *(undefined8 *)((long)param_1 + 0x59) = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined2 *)((long)param_1 + 0x61) = 1;
  *(undefined1 *)((long)param_1 + 99) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *param_1 = &PTR_FUN_110b2e310;
  param_1[0x12] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x13) = 0;
  func_0x000107c31940(auStack_38,&UNK_10f5a5bda);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c50348; end: 109c5034b;  */

undefined8 * FUN_109c50348(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c5034c; end: 109c5035f;  */

void FUN_109c5034c(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c50360; end: 109c50483;  */

void FUN_109c50360(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  cVar1 = *(char *)(*(long *)*param_2 + 0x48);
  if (cVar1 == '\x01') {
    UNRECOVERED_JUMPTABLE_00 = FUN_109c506f4;
    UNRECOVERED_JUMPTABLE = FUN_109c50484;
  }
  else {
    if (cVar1 != '\x04') {
      FUN_109c129d4(auStack_60,cVar1);
      FUN_10928a5e0(auStack_48,&UNK_10f5a3e0d,auStack_60);
      func_0x000105687ee0(auStack_48);
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x109c50450);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    UNRECOVERED_JUMPTABLE_00 = FUN_109c50bdc;
    UNRECOVERED_JUMPTABLE = FUN_109c5096c;
  }
  if (*(char *)(param_1 + 0x98) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000109c503e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)
              ((long *)*param_2,param_3,*(undefined4 *)(param_1 + 0x90),
               *(undefined4 *)(param_1 + 0x94),*(undefined8 *)(param_1 + 0x68));
    return;
  }
  FUN_109c182f4(param_3,1);
                    /* WARNING: Could not recover jumptable at 0x000109c50420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_2,*param_3,*(undefined4 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x68));
  return;
}



/* Entry: 109c50484; end: 109c506f3;  */

long * FUN_109c50484(long *param_1,long *param_2,long param_3,long *param_4,undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  uint uVar21;
  int *piVar22;
  ulong uVar23;
  long *plVar24;
  int *piVar25;
  long *plVar26;
  undefined8 auStack_438 [2];
  char cStack_421;
  long *plStack_420;
  long *plStack_418;
  undefined1 ****ppppuStack_410;
  code *pcStack_408;
  ulong uStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  ulong auStack_3d8 [3];
  uint auStack_3c0 [6];
  long alStack_3a8 [9];
  long lStack_360;
  ulong uStack_350;
  int *piStack_348;
  ulong uStack_340;
  int *piStack_338;
  ulong uStack_330;
  long *plStack_328;
  ulong uStack_320;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined1 ***pppuStack_300;
  code *pcStack_2f8;
  long lStack_2f0;
  ulong uStack_2e8;
  uint uStack_2e0;
  int aiStack_2dc [6];
  int aiStack_2c4 [5];
  long alStack_2b0 [9];
  long lStack_268;
  long *plStack_260;
  int *piStack_258;
  ulong uStack_250;
  ulong uStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  ulong uStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  ulong auStack_1d8 [3];
  uint auStack_1c0 [6];
  long alStack_1a8 [9];
  long lStack_160;
  long *plStack_150;
  int *piStack_148;
  long *plStack_140;
  int *piStack_138;
  long *plStack_130;
  long lStack_128;
  ulong uStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  uint uStack_e0;
  int aiStack_dc [6];
  int aiStack_c4 [5];
  long alStack_b0 [9];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = (undefined8 *)*param_1;
  piVar25 = (int *)*puVar19;
  aiStack_c4[2] = 0;
  aiStack_c4[3] = 0;
  aiStack_c4[0] = 0;
  aiStack_c4[1] = 0;
  aiStack_c4[4] = 0;
  uVar6 = piVar25[2];
  plVar26 = (long *)(ulong)uVar6;
  plVar17 = param_4;
  if (uVar6 != 0) {
    _memcpy(aiStack_c4,piVar25 + 3,(long)(int)uVar6 << 2);
  }
  aiStack_dc[4] = 0;
  aiStack_dc[5] = uVar6;
  uVar1 = (uVar6 & (int)param_3 >> 0x1f) + (int)param_3;
  plVar24 = (long *)(ulong)uVar1;
  plVar20 = (long *)(param_1[1] - (long)puVar19);
  uStack_e8 = (ulong)plVar20 >> 4;
  piVar22 = aiStack_dc;
  aiStack_dc[2] = 0;
  aiStack_dc[3] = 0;
  aiStack_dc[0] = 0;
  aiStack_dc[1] = 0;
  uStack_e0 = uVar6 + 1;
  if (-1 < (int)uVar6) {
    plVar7 = (long *)0x0;
    do {
      if ((long)plVar7 < (long)(int)uVar1) {
        plVar13 = plVar7;
        if (plVar7 < plVar26) {
LAB_109c50568:
          iVar14 = aiStack_c4[(long)plVar13];
        }
        else {
          iVar14 = -1;
        }
      }
      else {
        iVar14 = (int)((ulong)plVar20 >> 4);
        if (plVar24 != plVar7) {
          plVar13 = (long *)((long)plVar7 + -1);
          goto LAB_109c50568;
        }
      }
      piVar22[(long)plVar7] = iVar14;
      plVar7 = (long *)((long)plVar7 + 1);
    } while ((long *)(ulong)(uVar6 + 1) != plVar7);
  }
  plVar2 = (long *)(ulong)*(byte *)(piVar25 + 0x12);
  (*(code *)**(undefined8 **)*param_4)(alStack_b0,(undefined8 *)*param_4,&uStack_e0);
  plVar7 = alStack_b0;
  func_0x000109c18360(param_2);
  plVar13 = alStack_b0;
  FUN_109c180ec();
  lVar4 = *param_2;
  *(undefined4 *)(lVar4 + 0x3c) = 2;
  uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (long)plVar24 << 2;
  uVar6 = 1;
  uVar16 = uVar9;
  piVar12 = piVar22;
  if (uVar1 != 0) {
    do {
      uVar6 = *piVar12 * uVar6;
      uVar16 = uVar16 - 4;
      piVar12 = piVar12 + 1;
    } while (uVar16 != 0);
  }
  if (aiStack_dc + (long)(int)uVar1 + 1 == piVar22 + (int)uStack_e0) {
    uVar16 = 1;
  }
  else {
    lVar10 = ((long)(int)uStack_e0 * 4 - uVar9) + -4;
    uVar16 = 1;
    piVar12 = aiStack_dc + (long)(int)uVar1 + 1;
    do {
      uVar16 = (ulong)(uint)(*piVar12 * (int)uVar16);
      lVar10 = lVar10 + -4;
      piVar12 = piVar12 + 1;
    } while (lVar10 != 0);
  }
  if (0 < (int)uVar6) {
    piVar22 = (int *)0x0;
    lStack_f0 = (long)(int)uVar16;
    param_2 = *(long **)(lVar4 + 0x40);
    param_4 = (long *)(-(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2);
    plVar24 = (long *)((ulong)plVar20 >> 4 & 0x7fffffff);
    piVar25 = (int *)(ulong)uVar6;
    do {
      if (0 < (int)uStack_e8) {
        plVar26 = (long *)0x0;
        param_3 = (long)piVar22 * lStack_f0;
        plVar20 = plVar24;
        do {
          if ((int)uVar16 != 0) {
            plVar7 = (long *)(*(long *)(*(long *)(*param_1 + (long)plVar26) + 0x40) + param_3 * 4);
            plVar13 = param_2;
            plVar2 = param_4;
            _memmove();
          }
          plVar26 = plVar26 + 2;
          param_2 = (long *)((long)param_2 + (long)param_4);
          plVar20 = (long *)((long)plVar20 + -1);
        } while (plVar20 != (long *)0x0);
      }
      piVar22 = (int *)((long)piVar22 + 1);
    } while (piVar22 != piVar25);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar13;
  }
  ___stack_chk_fail();
  FUN_109c180ec(alStack_b0);
  plVar3 = plVar13;
  __Unwind_Resume();
  plStack_150 = plVar26;
  piStack_148 = piVar25;
  plStack_140 = plVar24;
  piStack_138 = piVar22;
  plStack_130 = plVar20;
  lStack_128 = param_3;
  uStack_120 = uVar16;
  plStack_118 = param_4;
  plStack_110 = param_2;
  plStack_108 = plVar13;
  puStack_100 = &stack0xfffffffffffffff0;
  pcStack_f8 = FUN_109c506f4;
  puStack_1f0 = param_5;
  plStack_1e0 = plVar7;
  lStack_160 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1e8 = plVar3;
  puVar5 = (uint *)(*plVar3 + 8);
  auStack_1c0[2] = 0;
  auStack_1c0[3] = 0;
  auStack_1c0[4] = 0;
  auStack_1c0[5] = 0;
  plVar7 = (long *)((ulong)auStack_1c0 | 4);
  auStack_1c0[0] = 0;
  auStack_1c0[1] = 0;
  plVar20 = plVar2;
  plVar24 = plVar17;
  if (puVar5 == auStack_1c0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar5;
    if (uVar6 != 0) {
      plVar20 = (long *)((long)(int)uVar6 << 2);
      _memcpy(plVar7,*plVar3 + 0xc);
    }
    auStack_1c0[0] = uVar6;
  }
  iVar14 = (int)plVar17;
  plVar18 = (long *)(long)iVar14;
  plVar3 = plStack_1e0;
  plVar13 = plVar18;
  func_0x000109c182f4();
  uVar1 = (uVar6 & (int)plVar2 >> 0x1f) + (int)plVar2;
  auStack_1d8[0] = 0;
  auStack_1d8[1] = 0;
  auStack_1d8[2] = 0;
  if (0 < (int)uVar6) {
    uVar9 = (ulong)uVar6;
    uVar16 = (ulong)uVar1;
    plVar2 = plVar7;
    do {
      if (uVar16 != 0) {
        lVar4 = (long)(int)auStack_1d8[0];
        auStack_1d8[0] = (ulong)((int)auStack_1d8[0] + 1);
        *(int *)(((ulong)auStack_1d8 | 4) + lVar4 * 4) = (int)*plVar2;
      }
      plVar2 = (long *)((long)plVar2 + 4);
      uVar16 = uVar16 - 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  uVar23 = 1;
  uVar16 = uVar9;
  plVar2 = plVar7;
  if (uVar1 != 0) {
    do {
      uVar23 = (ulong)(uint)((int)*plVar2 * (int)uVar23);
      uVar16 = uVar16 - 4;
      plVar2 = (long *)((long)plVar2 + 4);
    } while (uVar16 != 0);
  }
  if (auStack_1c0 + (long)(int)uVar1 + 2 == (uint *)((long)plVar7 + (long)(int)uVar6 * 4)) {
    uVar16 = 1;
  }
  else {
    lVar4 = ((long)(int)uVar6 * 4 - uVar9) + -4;
    uVar16 = 1;
    puVar5 = auStack_1c0 + (long)(int)uVar1 + 2;
    do {
      uVar16 = (ulong)(*puVar5 * (int)uVar16);
      lVar4 = lVar4 + -4;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  if (0 < iVar14) {
    piVar25 = (int *)0x0;
    plVar26 = *(long **)(*plStack_1e8 + 0x40);
    plVar7 = (long *)(-(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2);
    piVar22 = (int *)((ulong)plVar17 & 0xffffffff);
    param_4 = (long *)((long)iVar14 * (long)(int)uVar16 * 4);
    uStack_1f8 = uVar23;
    do {
      param_2 = (long *)*plStack_1e0;
      plVar20 = (long *)(ulong)*(byte *)(*plStack_1e8 + 0x48);
      (*(code *)**(undefined8 **)*puStack_1f0)(alStack_1a8,(undefined8 *)*puStack_1f0,auStack_1d8);
      plVar17 = param_2 + (long)piVar25 * 2;
      plVar13 = alStack_1a8;
      func_0x000109c18360(plVar17);
      plVar3 = alStack_1a8;
      FUN_109c180ec();
      lVar4 = *plVar17;
      *(undefined4 *)(lVar4 + 0x3c) = 2;
      if (0 < (int)uVar23) {
        plVar17 = *(long **)(lVar4 + 0x40);
        uVar9 = uStack_1f8;
        plVar18 = plVar26;
        do {
          if ((int)uVar16 != 0) {
            plVar3 = plVar17;
            plVar13 = plVar18;
            plVar20 = plVar7;
            _memmove();
          }
          plVar18 = (long *)((long)plVar18 + (long)param_4);
          plVar17 = (long *)((long)plVar17 + (long)plVar7);
          uVar9 = uVar9 - 1;
          param_2 = (long *)0x0;
        } while (uVar9 != 0);
      }
      piVar25 = (int *)((long)piVar25 + 1);
      plVar26 = (long *)((long)plVar26 + (long)plVar7);
    } while (piVar25 != piVar22);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_160) {
    return plVar3;
  }
  ___stack_chk_fail();
  FUN_109c180ec(alStack_1a8);
  plVar2 = plVar3;
  __Unwind_Resume();
  plStack_260 = plVar26;
  piStack_258 = piVar25;
  uStack_250 = uVar16;
  uStack_248 = uVar23;
  plStack_240 = plVar7;
  plStack_238 = plVar18;
  plStack_230 = plVar17;
  plStack_228 = param_4;
  plStack_220 = param_2;
  plStack_218 = plVar3;
  ppuStack_210 = &puStack_100;
  pcStack_208 = FUN_109c5096c;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = (undefined8 *)*plVar2;
  piVar25 = (int *)*puVar19;
  aiStack_2c4[2] = 0;
  aiStack_2c4[3] = 0;
  aiStack_2c4[0] = 0;
  aiStack_2c4[1] = 0;
  aiStack_2c4[4] = 0;
  uVar6 = piVar25[2];
  uVar16 = (ulong)uVar6;
  plVar26 = plVar24;
  if (uVar6 != 0) {
    _memcpy(aiStack_2c4,piVar25 + 3,(long)(int)uVar6 << 2);
  }
  aiStack_2dc[4] = 0;
  aiStack_2dc[5] = uVar6;
  uVar1 = (uVar6 & (int)plVar20 >> 0x1f) + (int)plVar20;
  uVar23 = (ulong)uVar1;
  uVar9 = plVar2[1] - (long)puVar19;
  uStack_2e8 = uVar9 >> 4;
  piVar22 = aiStack_2dc;
  aiStack_2dc[2] = 0;
  aiStack_2dc[3] = 0;
  aiStack_2dc[0] = 0;
  aiStack_2dc[1] = 0;
  uStack_2e0 = uVar6 + 1;
  if (-1 < (int)uVar6) {
    uVar8 = 0;
    do {
      if ((long)uVar8 < (long)(int)uVar1) {
        uVar11 = uVar8;
        if (uVar8 < uVar16) {
LAB_109c50a50:
          iVar14 = aiStack_2c4[uVar11];
        }
        else {
          iVar14 = -1;
        }
      }
      else {
        iVar14 = (int)(uVar9 >> 4);
        if (uVar23 != uVar8) {
          uVar11 = uVar8 - 1;
          goto LAB_109c50a50;
        }
      }
      piVar22[uVar8] = iVar14;
      uVar8 = uVar8 + 1;
    } while (uVar6 + 1 != uVar8);
  }
  plVar3 = (long *)(ulong)*(byte *)(piVar25 + 0x12);
  (*(code *)**(undefined8 **)*plVar24)(alStack_2b0,(undefined8 *)*plVar24,&uStack_2e0);
  plVar17 = alStack_2b0;
  func_0x000109c18360(plVar13);
  plVar7 = alStack_2b0;
  FUN_109c180ec();
  iVar14 = (int)plVar3;
  lVar4 = *plVar13;
  *(undefined4 *)(lVar4 + 0x3c) = 2;
  uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar23 << 2;
  uVar6 = 1;
  uVar8 = uVar11;
  piVar12 = piVar22;
  if (uVar1 != 0) {
    do {
      uVar6 = *piVar12 * uVar6;
      uVar8 = uVar8 - 4;
      piVar12 = piVar12 + 1;
    } while (uVar8 != 0);
  }
  if (aiStack_2dc + (long)(int)uVar1 + 1 == piVar22 + (int)uStack_2e0) {
    uVar8 = 1;
  }
  else {
    lVar10 = ((long)(int)uStack_2e0 * 4 - uVar11) + -4;
    uVar8 = 1;
    piVar12 = aiStack_2dc + (long)(int)uVar1 + 1;
    do {
      uVar8 = (ulong)(uint)(*piVar12 * (int)uVar8);
      lVar10 = lVar10 + -4;
      piVar12 = piVar12 + 1;
    } while (lVar10 != 0);
  }
  if (0 < (int)uVar6) {
    piVar22 = (int *)0x0;
    lStack_2f0 = (long)(int)uVar8;
    plVar13 = *(long **)(lVar4 + 0x40);
    plVar24 = (long *)(-(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2);
    uVar23 = uVar9 >> 4 & 0x7fffffff;
    piVar25 = (int *)(ulong)uVar6;
    do {
      if (0 < (int)uStack_2e8) {
        uVar16 = 0;
        plVar20 = (long *)((long)piVar22 * lStack_2f0);
        uVar9 = uVar23;
        do {
          if ((int)uVar8 != 0) {
            plVar17 = (long *)(*(long *)(*(long *)(*plVar2 + uVar16) + 0x40) + (long)plVar20 * 4);
            plVar7 = plVar13;
            plVar3 = plVar24;
            _memmove();
          }
          uVar16 = uVar16 + 0x10;
          plVar13 = (long *)((long)plVar13 + (long)plVar24);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar14 = (int)plVar3;
      piVar22 = (int *)((long)piVar22 + 1);
    } while (piVar22 != piVar25);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_109c180ec(alStack_2b0);
  plVar2 = plVar7;
  __Unwind_Resume();
  uStack_350 = uVar16;
  piStack_348 = piVar25;
  uStack_340 = uVar23;
  piStack_338 = piVar22;
  uStack_330 = uVar9;
  plStack_328 = plVar20;
  uStack_320 = uVar8;
  plStack_318 = plVar24;
  plStack_310 = plVar13;
  plStack_308 = plVar7;
  pppuStack_300 = &ppuStack_210;
  pcStack_2f8 = FUN_109c50bdc;
  lStack_360 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (uint *)(*plVar2 + 8);
  auStack_3c0[2] = 0;
  auStack_3c0[3] = 0;
  auStack_3c0[4] = 0;
  auStack_3c0[5] = 0;
  piVar25 = (int *)((ulong)auStack_3c0 | 4);
  auStack_3c0[0] = 0;
  auStack_3c0[1] = 0;
  puStack_3f0 = param_5;
  plStack_3e8 = plVar2;
  plStack_3e0 = plVar17;
  if (puVar5 == auStack_3c0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar5;
    if (uVar6 != 0) {
      _memcpy(piVar25,*plVar2 + 0xc,(long)(int)uVar6 << 2);
    }
    auStack_3c0[0] = uVar6;
  }
  iVar15 = (int)plVar26;
  plVar17 = plStack_3e0;
  func_0x000109c182f4(plStack_3e0,(long)iVar15);
  uVar1 = (uVar6 & iVar14 >> 0x1f) + iVar14;
  auStack_3d8[0] = 0;
  auStack_3d8[1] = 0;
  auStack_3d8[2] = 0;
  if (0 < (int)uVar6) {
    uVar9 = (ulong)uVar6;
    uVar16 = (ulong)uVar1;
    piVar22 = piVar25;
    do {
      if (uVar16 != 0) {
        lVar4 = (long)(int)auStack_3d8[0];
        auStack_3d8[0] = (ulong)((int)auStack_3d8[0] + 1);
        *(int *)(((ulong)auStack_3d8 | 4) + lVar4 * 4) = *piVar22;
      }
      piVar22 = piVar22 + 1;
      uVar16 = uVar16 - 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  uVar21 = 1;
  uVar16 = uVar9;
  piVar22 = piVar25;
  if (uVar1 != 0) {
    do {
      uVar21 = *piVar22 * uVar21;
      uVar16 = uVar16 - 4;
      piVar22 = piVar22 + 1;
    } while (uVar16 != 0);
  }
  if (auStack_3c0 + (long)(int)uVar1 + 2 == (uint *)(piVar25 + (int)uVar6)) {
    uVar16 = 1;
  }
  else {
    lVar4 = ((long)(int)uVar6 * 4 - uVar9) + -4;
    uVar16 = 1;
    puVar5 = auStack_3c0 + (long)(int)uVar1 + 2;
    do {
      uVar16 = (ulong)(*puVar5 * (int)uVar16);
      lVar4 = lVar4 + -4;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  if (0 < iVar15) {
    uVar9 = 0;
    lVar4 = *(long *)(*plStack_3e8 + 0x40);
    uVar23 = -(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
    uStack_3f8 = (ulong)uVar21;
    do {
      plVar13 = (long *)*plStack_3e0;
      (*(code *)**(undefined8 **)*puStack_3f0)
                (alStack_3a8,(undefined8 *)*puStack_3f0,auStack_3d8,
                 *(undefined1 *)(*plStack_3e8 + 0x48));
      func_0x000109c18360(plVar13 + uVar9 * 2,alStack_3a8);
      plVar17 = alStack_3a8;
      FUN_109c180ec();
      lVar10 = plVar13[uVar9 * 2];
      *(undefined4 *)(lVar10 + 0x3c) = 2;
      if (0 < (int)uVar21) {
        plVar20 = *(long **)(lVar10 + 0x40);
        uVar8 = uStack_3f8;
        lVar10 = lVar4;
        do {
          if ((int)uVar16 != 0) {
            plVar17 = plVar20;
            _memmove(plVar20,lVar10,uVar23);
          }
          lVar10 = lVar10 + (long)iVar15 * (long)(int)uVar16 * 4;
          plVar20 = (long *)((long)plVar20 + uVar23);
          uVar8 = uVar8 - 1;
          plVar13 = (long *)0x0;
        } while (uVar8 != 0);
      }
      uVar9 = uVar9 + 1;
      lVar4 = lVar4 + uVar23;
    } while (uVar9 != ((ulong)plVar26 & 0xffffffff));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_360) {
    ___stack_chk_fail();
    FUN_109c180ec(alStack_3a8);
    plVar26 = plVar17;
    __Unwind_Resume();
    pcStack_408 = FUN_109c50e54;
    plVar26[0xc] = 0;
    plVar26[0xb] = 0;
    plVar26[0xe] = 0;
    plVar26[0xd] = 0;
    plVar26[0x10] = 0;
    plVar26[0xf] = 0;
    plVar26[0x11] = 0;
    plVar26[10] = 0;
    plVar26[9] = 0;
    plVar26[8] = 0;
    plVar26[7] = 0;
    plVar26[6] = 0;
    plVar26[5] = 0;
    plVar26[4] = 0;
    plVar26[3] = 0;
    plVar26[2] = 0;
    plVar26[1] = 0;
    *(undefined1 *)((long)plVar26 + 0x61) = 1;
    plVar26[0xd] = 0;
    plVar26[0xe] = 0;
    *(undefined4 *)(plVar26 + 0xf) = 0x3f800000;
    *(undefined1 *)(plVar26 + 0x11) = 0;
    *plVar26 = (long)&PTR_FUN_110b2e350;
    plStack_420 = plVar13;
    plStack_418 = plVar17;
    ppppuStack_410 = &pppuStack_300;
    func_0x000107c31940(auStack_438,&UNK_10f5a5bdf);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (plVar26 + 6,auStack_438);
    if (cStack_421 < '\0') {
      __ZdlPv(auStack_438[0]);
    }
    return plVar26;
  }
  return plVar17;
}



/* Entry: 109c506f4; end: 109c5096b;  */

long * FUN_109c506f4(long *param_1,long *param_2,int *param_3,long *param_4,undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  long *plVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long unaff_x20;
  long *plVar15;
  long unaff_x21;
  long *plVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  int *piVar20;
  undefined8 *puVar21;
  uint uVar22;
  ulong uVar23;
  int *piVar24;
  uint uVar25;
  ulong unaff_x27;
  long *unaff_x28;
  undefined8 auStack_348 [2];
  char cStack_331;
  long *plStack_330;
  long *plStack_328;
  undefined1 ***pppuStack_320;
  code *pcStack_318;
  ulong uStack_308;
  undefined8 *puStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  ulong auStack_2e8 [3];
  uint auStack_2d0 [6];
  long alStack_2b8 [9];
  long lStack_270;
  ulong uStack_260;
  int *piStack_258;
  ulong uStack_250;
  int *piStack_248;
  ulong uStack_240;
  int *piStack_238;
  ulong uStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  long lStack_200;
  ulong uStack_1f8;
  uint uStack_1f0;
  int aiStack_1ec [6];
  int aiStack_1d4 [5];
  long alStack_1c0 [9];
  long lStack_178;
  long *plStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  int *piStack_150;
  long *plStack_148;
  long *plStack_140;
  long lStack_138;
  long lStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  ulong uStack_108;
  undefined8 *puStack_100;
  long *plStack_f8;
  long *plStack_f0;
  ulong auStack_e8 [3];
  uint auStack_d0 [6];
  long alStack_b8 [9];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (uint *)(*param_1 + 8);
  auStack_d0[2] = 0;
  auStack_d0[3] = 0;
  auStack_d0[4] = 0;
  auStack_d0[5] = 0;
  piVar20 = (int *)((ulong)auStack_d0 | 4);
  auStack_d0[0] = 0;
  auStack_d0[1] = 0;
  piVar5 = param_3;
  plVar16 = param_4;
  puStack_100 = param_5;
  plStack_f8 = param_1;
  plStack_f0 = param_2;
  if (puVar7 == auStack_d0) {
    uVar25 = 0;
  }
  else {
    uVar25 = *puVar7;
    if (uVar25 != 0) {
      piVar5 = (int *)((long)(int)uVar25 << 2);
      _memcpy(piVar20,*param_1 + 0xc);
    }
    auStack_d0[0] = uVar25;
  }
  iVar17 = (int)param_4;
  plVar19 = (long *)(long)iVar17;
  plVar2 = plStack_f0;
  plVar15 = plVar19;
  FUN_109c182f4();
  uVar1 = (uVar25 & (int)param_3 >> 0x1f) + (int)param_3;
  auStack_e8[0] = 0;
  auStack_e8[1] = 0;
  auStack_e8[2] = 0;
  if (0 < (int)uVar25) {
    uVar9 = (ulong)uVar25;
    uVar12 = (ulong)uVar1;
    piVar24 = piVar20;
    do {
      if (uVar12 != 0) {
        lVar14 = (long)(int)auStack_e8[0];
        auStack_e8[0] = (ulong)((int)auStack_e8[0] + 1);
        *(int *)(((ulong)auStack_e8 | 4) + lVar14 * 4) = *piVar24;
      }
      piVar24 = piVar24 + 1;
      uVar12 = uVar12 - 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  uVar23 = 1;
  uVar12 = uVar9;
  piVar24 = piVar20;
  if (uVar1 != 0) {
    do {
      uVar23 = (ulong)(uint)(*piVar24 * (int)uVar23);
      uVar12 = uVar12 - 4;
      piVar24 = piVar24 + 1;
    } while (uVar12 != 0);
  }
  if (auStack_d0 + (long)(int)uVar1 + 2 == (uint *)(piVar20 + (int)uVar25)) {
    uVar12 = 1;
  }
  else {
    lVar14 = ((long)(int)uVar25 * 4 - uVar9) + -4;
    uVar12 = 1;
    puVar7 = auStack_d0 + (long)(int)uVar1 + 2;
    do {
      uVar12 = (ulong)(*puVar7 * (int)uVar12);
      lVar14 = lVar14 + -4;
      puVar7 = puVar7 + 1;
    } while (lVar14 != 0);
  }
  if (0 < iVar17) {
    unaff_x27 = 0;
    unaff_x28 = *(long **)(*plStack_f8 + 0x40);
    piVar20 = (int *)(-(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2);
    uVar9 = (ulong)param_4 & 0xffffffff;
    unaff_x21 = (long)iVar17 * (long)(int)uVar12 * 4;
    uStack_108 = uVar23;
    do {
      unaff_x20 = *plStack_f0;
      piVar5 = (int *)(ulong)*(byte *)(*plStack_f8 + 0x48);
      (*(code *)**(undefined8 **)*puStack_100)(alStack_b8,(undefined8 *)*puStack_100,auStack_e8);
      param_4 = (long *)(unaff_x20 + unaff_x27 * 0x10);
      plVar15 = alStack_b8;
      func_0x000109c18360(param_4);
      plVar2 = alStack_b8;
      FUN_109c180ec();
      lVar14 = *param_4;
      *(undefined4 *)(lVar14 + 0x3c) = 2;
      if (0 < (int)uVar23) {
        param_4 = *(long **)(lVar14 + 0x40);
        uVar8 = uStack_108;
        plVar19 = unaff_x28;
        do {
          if ((int)uVar12 != 0) {
            plVar2 = param_4;
            plVar15 = plVar19;
            piVar5 = piVar20;
            _memmove();
          }
          plVar19 = (long *)((long)plVar19 + unaff_x21);
          param_4 = (long *)((long)param_4 + (long)piVar20);
          uVar8 = uVar8 - 1;
          unaff_x20 = 0;
        } while (uVar8 != 0);
      }
      unaff_x27 = unaff_x27 + 1;
      unaff_x28 = (long *)((long)unaff_x28 + (long)piVar20);
    } while (unaff_x27 != uVar9);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar2;
  }
  ___stack_chk_fail();
  FUN_109c180ec(alStack_b8);
  plVar3 = plVar2;
  __Unwind_Resume();
  plStack_170 = unaff_x28;
  uStack_168 = unaff_x27;
  uStack_160 = uVar12;
  uStack_158 = uVar23;
  piStack_150 = piVar20;
  plStack_148 = plVar19;
  plStack_140 = param_4;
  lStack_138 = unaff_x21;
  lStack_130 = unaff_x20;
  plStack_128 = plVar2;
  puStack_120 = &stack0xfffffffffffffff0;
  pcStack_118 = FUN_109c5096c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = (undefined8 *)*plVar3;
  piVar20 = (int *)*puVar21;
  aiStack_1d4[2] = 0;
  aiStack_1d4[3] = 0;
  aiStack_1d4[0] = 0;
  aiStack_1d4[1] = 0;
  aiStack_1d4[4] = 0;
  uVar25 = piVar20[2];
  uVar12 = (ulong)uVar25;
  plVar2 = plVar16;
  if (uVar25 != 0) {
    _memcpy(aiStack_1d4,piVar20 + 3,(long)(int)uVar25 << 2);
  }
  aiStack_1ec[4] = 0;
  aiStack_1ec[5] = uVar25;
  uVar1 = (uVar25 & (int)piVar5 >> 0x1f) + (int)piVar5;
  uVar23 = (ulong)uVar1;
  uVar9 = plVar3[1] - (long)puVar21;
  uStack_1f8 = uVar9 >> 4;
  piVar24 = aiStack_1ec;
  aiStack_1ec[2] = 0;
  aiStack_1ec[3] = 0;
  aiStack_1ec[0] = 0;
  aiStack_1ec[1] = 0;
  uStack_1f0 = uVar25 + 1;
  if (-1 < (int)uVar25) {
    uVar8 = 0;
    do {
      if ((long)uVar8 < (long)(int)uVar1) {
        uVar10 = uVar8;
        if (uVar8 < uVar12) {
LAB_109c50a50:
          iVar17 = aiStack_1d4[uVar10];
        }
        else {
          iVar17 = -1;
        }
      }
      else {
        iVar17 = (int)(uVar9 >> 4);
        if (uVar23 != uVar8) {
          uVar10 = uVar8 - 1;
          goto LAB_109c50a50;
        }
      }
      piVar24[uVar8] = iVar17;
      uVar8 = uVar8 + 1;
    } while (uVar25 + 1 != uVar8);
  }
  plVar6 = (long *)(ulong)*(byte *)(piVar20 + 0x12);
  (*(code *)**(undefined8 **)*plVar16)(alStack_1c0,(undefined8 *)*plVar16,&uStack_1f0);
  plVar19 = alStack_1c0;
  func_0x000109c18360(plVar15);
  plVar4 = alStack_1c0;
  FUN_109c180ec();
  iVar17 = (int)plVar6;
  lVar14 = *plVar15;
  *(undefined4 *)(lVar14 + 0x3c) = 2;
  uVar10 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar23 << 2;
  uVar25 = 1;
  uVar8 = uVar10;
  piVar13 = piVar24;
  if (uVar1 != 0) {
    do {
      uVar25 = *piVar13 * uVar25;
      uVar8 = uVar8 - 4;
      piVar13 = piVar13 + 1;
    } while (uVar8 != 0);
  }
  if (aiStack_1ec + (long)(int)uVar1 + 1 == piVar24 + (int)uStack_1f0) {
    uVar8 = 1;
  }
  else {
    lVar11 = ((long)(int)uStack_1f0 * 4 - uVar10) + -4;
    uVar8 = 1;
    piVar13 = aiStack_1ec + (long)(int)uVar1 + 1;
    do {
      uVar8 = (ulong)(uint)(*piVar13 * (int)uVar8);
      lVar11 = lVar11 + -4;
      piVar13 = piVar13 + 1;
    } while (lVar11 != 0);
  }
  if (0 < (int)uVar25) {
    piVar24 = (int *)0x0;
    lStack_200 = (long)(int)uVar8;
    plVar15 = *(long **)(lVar14 + 0x40);
    plVar16 = (long *)(-(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2);
    uVar23 = uVar9 >> 4 & 0x7fffffff;
    piVar20 = (int *)(ulong)uVar25;
    do {
      if (0 < (int)uStack_1f8) {
        uVar12 = 0;
        piVar5 = (int *)((long)piVar24 * lStack_200);
        uVar9 = uVar23;
        do {
          if ((int)uVar8 != 0) {
            plVar19 = (long *)(*(long *)(*(long *)(*plVar3 + uVar12) + 0x40) + (long)piVar5 * 4);
            plVar4 = plVar15;
            plVar6 = plVar16;
            _memmove();
          }
          uVar12 = uVar12 + 0x10;
          plVar15 = (long *)((long)plVar15 + (long)plVar16);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar17 = (int)plVar6;
      piVar24 = (int *)((long)piVar24 + 1);
    } while (piVar24 != piVar20);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    FUN_109c180ec(alStack_1c0);
    plVar3 = plVar4;
    __Unwind_Resume();
    uStack_260 = uVar12;
    piStack_258 = piVar20;
    uStack_250 = uVar23;
    piStack_248 = piVar24;
    uStack_240 = uVar9;
    piStack_238 = piVar5;
    uStack_230 = uVar8;
    plStack_228 = plVar16;
    plStack_220 = plVar15;
    plStack_218 = plVar4;
    ppuStack_210 = &puStack_120;
    pcStack_208 = FUN_109c50bdc;
    lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = (uint *)(*plVar3 + 8);
    auStack_2d0[2] = 0;
    auStack_2d0[3] = 0;
    auStack_2d0[4] = 0;
    auStack_2d0[5] = 0;
    piVar5 = (int *)((ulong)auStack_2d0 | 4);
    auStack_2d0[0] = 0;
    auStack_2d0[1] = 0;
    puStack_300 = param_5;
    plStack_2f8 = plVar3;
    plStack_2f0 = plVar19;
    if (puVar7 == auStack_2d0) {
      uVar25 = 0;
    }
    else {
      uVar25 = *puVar7;
      if (uVar25 != 0) {
        _memcpy(piVar5,*plVar3 + 0xc,(long)(int)uVar25 << 2);
      }
      auStack_2d0[0] = uVar25;
    }
    iVar18 = (int)plVar2;
    plVar16 = plStack_2f0;
    FUN_109c182f4(plStack_2f0,(long)iVar18);
    uVar1 = (uVar25 & iVar17 >> 0x1f) + iVar17;
    auStack_2e8[0] = 0;
    auStack_2e8[1] = 0;
    auStack_2e8[2] = 0;
    if (0 < (int)uVar25) {
      uVar9 = (ulong)uVar25;
      uVar12 = (ulong)uVar1;
      piVar20 = piVar5;
      do {
        if (uVar12 != 0) {
          lVar14 = (long)(int)auStack_2e8[0];
          auStack_2e8[0] = (ulong)((int)auStack_2e8[0] + 1);
          *(int *)(((ulong)auStack_2e8 | 4) + lVar14 * 4) = *piVar20;
        }
        piVar20 = piVar20 + 1;
        uVar12 = uVar12 - 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    uVar22 = 1;
    uVar12 = uVar9;
    piVar20 = piVar5;
    if (uVar1 != 0) {
      do {
        uVar22 = *piVar20 * uVar22;
        uVar12 = uVar12 - 4;
        piVar20 = piVar20 + 1;
      } while (uVar12 != 0);
    }
    if (auStack_2d0 + (long)(int)uVar1 + 2 == (uint *)(piVar5 + (int)uVar25)) {
      uVar12 = 1;
    }
    else {
      lVar14 = ((long)(int)uVar25 * 4 - uVar9) + -4;
      uVar12 = 1;
      puVar7 = auStack_2d0 + (long)(int)uVar1 + 2;
      do {
        uVar12 = (ulong)(*puVar7 * (int)uVar12);
        lVar14 = lVar14 + -4;
        puVar7 = puVar7 + 1;
      } while (lVar14 != 0);
    }
    if (0 < iVar18) {
      uVar9 = 0;
      lVar14 = *(long *)(*plStack_2f8 + 0x40);
      uVar23 = -(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
      uStack_308 = (ulong)uVar22;
      do {
        plVar15 = (long *)*plStack_2f0;
        (*(code *)**(undefined8 **)*puStack_300)
                  (alStack_2b8,(undefined8 *)*puStack_300,auStack_2e8,
                   *(undefined1 *)(*plStack_2f8 + 0x48));
        func_0x000109c18360(plVar15 + uVar9 * 2,alStack_2b8);
        plVar16 = alStack_2b8;
        FUN_109c180ec();
        lVar11 = plVar15[uVar9 * 2];
        *(undefined4 *)(lVar11 + 0x3c) = 2;
        if (0 < (int)uVar22) {
          plVar19 = *(long **)(lVar11 + 0x40);
          uVar8 = uStack_308;
          lVar11 = lVar14;
          do {
            if ((int)uVar12 != 0) {
              plVar16 = plVar19;
              _memmove(plVar19,lVar11,uVar23);
            }
            lVar11 = lVar11 + (long)iVar18 * (long)(int)uVar12 * 4;
            plVar19 = (long *)((long)plVar19 + uVar23);
            uVar8 = uVar8 - 1;
            plVar15 = (long *)0x0;
          } while (uVar8 != 0);
        }
        uVar9 = uVar9 + 1;
        lVar14 = lVar14 + uVar23;
      } while (uVar9 != ((ulong)plVar2 & 0xffffffff));
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_270) {
      ___stack_chk_fail();
      FUN_109c180ec(alStack_2b8);
      plVar2 = plVar16;
      __Unwind_Resume();
      pcStack_318 = FUN_109c50e54;
      plVar2[0xc] = 0;
      plVar2[0xb] = 0;
      plVar2[0xe] = 0;
      plVar2[0xd] = 0;
      plVar2[0x10] = 0;
      plVar2[0xf] = 0;
      plVar2[0x11] = 0;
      plVar2[10] = 0;
      plVar2[9] = 0;
      plVar2[8] = 0;
      plVar2[7] = 0;
      plVar2[6] = 0;
      plVar2[5] = 0;
      plVar2[4] = 0;
      plVar2[3] = 0;
      plVar2[2] = 0;
      plVar2[1] = 0;
      *(undefined1 *)((long)plVar2 + 0x61) = 1;
      plVar2[0xd] = 0;
      plVar2[0xe] = 0;
      *(undefined4 *)(plVar2 + 0xf) = 0x3f800000;
      *(undefined1 *)(plVar2 + 0x11) = 0;
      *plVar2 = (long)&PTR_FUN_110b2e350;
      plStack_330 = plVar15;
      plStack_328 = plVar16;
      pppuStack_320 = &ppuStack_210;
      func_0x000107c31940(auStack_348,&UNK_10f5a5bdf);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (plVar2 + 6,auStack_348);
      if (cStack_331 < '\0') {
        __ZdlPv(auStack_348[0]);
      }
      return plVar2;
    }
    return plVar16;
  }
  return plVar4;
}



/* Entry: 109c5096c; end: 109c50bdb;  */

long * FUN_109c5096c(long *param_1,long *param_2,long param_3,undefined8 *param_4,
                    undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  uint uVar17;
  int *piVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  undefined8 auStack_238 [2];
  char cStack_221;
  long *plStack_220;
  long *plStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  ulong uStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  ulong auStack_1d8 [3];
  uint auStack_1c0 [6];
  long alStack_1a8 [9];
  long lStack_160;
  ulong uStack_150;
  int *piStack_148;
  ulong uStack_140;
  int *piStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  undefined8 *puStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  uint uStack_e0;
  int aiStack_dc [6];
  int aiStack_c4 [5];
  long alStack_b0 [9];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = (undefined8 *)*param_1;
  piVar20 = (int *)*puVar15;
  aiStack_c4[2] = 0;
  aiStack_c4[3] = 0;
  aiStack_c4[0] = 0;
  aiStack_c4[1] = 0;
  aiStack_c4[4] = 0;
  uVar7 = piVar20[2];
  uVar21 = (ulong)uVar7;
  puVar4 = param_4;
  if (uVar7 != 0) {
    _memcpy(aiStack_c4,piVar20 + 3,(long)(int)uVar7 << 2);
  }
  aiStack_dc[4] = 0;
  aiStack_dc[5] = uVar7;
  uVar1 = (uVar7 & (int)param_3 >> 0x1f) + (int)param_3;
  uVar19 = (ulong)uVar1;
  uVar16 = param_1[1] - (long)puVar15;
  uStack_e8 = uVar16 >> 4;
  piVar18 = aiStack_dc;
  aiStack_dc[2] = 0;
  aiStack_dc[3] = 0;
  aiStack_dc[0] = 0;
  aiStack_dc[1] = 0;
  uStack_e0 = uVar7 + 1;
  if (-1 < (int)uVar7) {
    uVar8 = 0;
    do {
      if ((long)uVar8 < (long)(int)uVar1) {
        uVar9 = uVar8;
        if (uVar8 < uVar21) {
LAB_109c50a50:
          iVar11 = aiStack_c4[uVar9];
        }
        else {
          iVar11 = -1;
        }
      }
      else {
        iVar11 = (int)(uVar16 >> 4);
        if (uVar19 != uVar8) {
          uVar9 = uVar8 - 1;
          goto LAB_109c50a50;
        }
      }
      piVar18[uVar8] = iVar11;
      uVar8 = uVar8 + 1;
    } while (uVar7 + 1 != uVar8);
  }
  puVar15 = (undefined8 *)(ulong)*(byte *)(piVar20 + 0x12);
  (*(code *)**(undefined8 **)*param_4)(alStack_b0,(undefined8 *)*param_4,&uStack_e0);
  plVar3 = alStack_b0;
  func_0x000109c18360(param_2);
  plVar14 = alStack_b0;
  FUN_109c180ec();
  iVar11 = (int)puVar15;
  lVar5 = *param_2;
  *(undefined4 *)(lVar5 + 0x3c) = 2;
  uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2;
  uVar7 = 1;
  uVar8 = uVar9;
  piVar12 = piVar18;
  if (uVar1 != 0) {
    do {
      uVar7 = *piVar12 * uVar7;
      uVar8 = uVar8 - 4;
      piVar12 = piVar12 + 1;
    } while (uVar8 != 0);
  }
  if (aiStack_dc + (long)(int)uVar1 + 1 == piVar18 + (int)uStack_e0) {
    uVar8 = 1;
  }
  else {
    lVar10 = ((long)(int)uStack_e0 * 4 - uVar9) + -4;
    uVar8 = 1;
    piVar12 = aiStack_dc + (long)(int)uVar1 + 1;
    do {
      uVar8 = (ulong)(uint)(*piVar12 * (int)uVar8);
      lVar10 = lVar10 + -4;
      piVar12 = piVar12 + 1;
    } while (lVar10 != 0);
  }
  if (0 < (int)uVar7) {
    piVar18 = (int *)0x0;
    lStack_f0 = (long)(int)uVar8;
    param_2 = *(long **)(lVar5 + 0x40);
    param_4 = (undefined8 *)(-(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2);
    uVar19 = uVar16 >> 4 & 0x7fffffff;
    piVar20 = (int *)(ulong)uVar7;
    do {
      if (0 < (int)uStack_e8) {
        uVar21 = 0;
        param_3 = (long)piVar18 * lStack_f0;
        uVar16 = uVar19;
        do {
          if ((int)uVar8 != 0) {
            plVar3 = (long *)(*(long *)(*(long *)(*param_1 + uVar21) + 0x40) + param_3 * 4);
            plVar14 = param_2;
            puVar15 = param_4;
            _memmove();
          }
          uVar21 = uVar21 + 0x10;
          param_2 = (long *)((long)param_2 + (long)param_4);
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      iVar11 = (int)puVar15;
      piVar18 = (int *)((long)piVar18 + 1);
    } while (piVar18 != piVar20);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar14;
  }
  ___stack_chk_fail();
  FUN_109c180ec(alStack_b0);
  plVar2 = plVar14;
  __Unwind_Resume();
  uStack_150 = uVar21;
  piStack_148 = piVar20;
  uStack_140 = uVar19;
  piStack_138 = piVar18;
  uStack_130 = uVar16;
  lStack_128 = param_3;
  uStack_120 = uVar8;
  puStack_118 = param_4;
  plStack_110 = param_2;
  plStack_108 = plVar14;
  puStack_100 = &stack0xfffffffffffffff0;
  pcStack_f8 = FUN_109c50bdc;
  lStack_160 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (uint *)(*plVar2 + 8);
  auStack_1c0[2] = 0;
  auStack_1c0[3] = 0;
  auStack_1c0[4] = 0;
  auStack_1c0[5] = 0;
  piVar20 = (int *)((ulong)auStack_1c0 | 4);
  auStack_1c0[0] = 0;
  auStack_1c0[1] = 0;
  puStack_1f0 = param_5;
  plStack_1e8 = plVar2;
  plStack_1e0 = plVar3;
  if (puVar6 == auStack_1c0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar6;
    if (uVar7 != 0) {
      _memcpy(piVar20,*plVar2 + 0xc,(long)(int)uVar7 << 2);
    }
    auStack_1c0[0] = uVar7;
  }
  iVar13 = (int)puVar4;
  plVar3 = plStack_1e0;
  func_0x000109c182f4(plStack_1e0,(long)iVar13);
  uVar1 = (uVar7 & iVar11 >> 0x1f) + iVar11;
  auStack_1d8[0] = 0;
  auStack_1d8[1] = 0;
  auStack_1d8[2] = 0;
  if (0 < (int)uVar7) {
    uVar16 = (ulong)uVar7;
    uVar21 = (ulong)uVar1;
    piVar18 = piVar20;
    do {
      if (uVar21 != 0) {
        lVar5 = (long)(int)auStack_1d8[0];
        auStack_1d8[0] = (ulong)((int)auStack_1d8[0] + 1);
        *(int *)(((ulong)auStack_1d8 | 4) + lVar5 * 4) = *piVar18;
      }
      piVar18 = piVar18 + 1;
      uVar21 = uVar21 - 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar16 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  uVar17 = 1;
  uVar21 = uVar16;
  piVar18 = piVar20;
  if (uVar1 != 0) {
    do {
      uVar17 = *piVar18 * uVar17;
      uVar21 = uVar21 - 4;
      piVar18 = piVar18 + 1;
    } while (uVar21 != 0);
  }
  if (auStack_1c0 + (long)(int)uVar1 + 2 == (uint *)(piVar20 + (int)uVar7)) {
    uVar21 = 1;
  }
  else {
    lVar5 = ((long)(int)uVar7 * 4 - uVar16) + -4;
    uVar21 = 1;
    puVar6 = auStack_1c0 + (long)(int)uVar1 + 2;
    do {
      uVar21 = (ulong)(*puVar6 * (int)uVar21);
      lVar5 = lVar5 + -4;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  if (0 < iVar13) {
    uVar16 = 0;
    lVar5 = *(long *)(*plStack_1e8 + 0x40);
    uVar19 = -(uVar21 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2;
    uStack_1f8 = (ulong)uVar17;
    do {
      param_2 = (long *)*plStack_1e0;
      (*(code *)**(undefined8 **)*puStack_1f0)
                (alStack_1a8,(undefined8 *)*puStack_1f0,auStack_1d8,
                 *(undefined1 *)(*plStack_1e8 + 0x48));
      func_0x000109c18360(param_2 + uVar16 * 2,alStack_1a8);
      plVar3 = alStack_1a8;
      FUN_109c180ec();
      lVar10 = param_2[uVar16 * 2];
      *(undefined4 *)(lVar10 + 0x3c) = 2;
      if (0 < (int)uVar17) {
        plVar14 = *(long **)(lVar10 + 0x40);
        uVar8 = uStack_1f8;
        lVar10 = lVar5;
        do {
          if ((int)uVar21 != 0) {
            plVar3 = plVar14;
            _memmove(plVar14,lVar10,uVar19);
          }
          lVar10 = lVar10 + (long)iVar13 * (long)(int)uVar21 * 4;
          plVar14 = (long *)((long)plVar14 + uVar19);
          uVar8 = uVar8 - 1;
          param_2 = (long *)0x0;
        } while (uVar8 != 0);
      }
      uVar16 = uVar16 + 1;
      lVar5 = lVar5 + uVar19;
    } while (uVar16 != ((ulong)puVar4 & 0xffffffff));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_160) {
    ___stack_chk_fail();
    FUN_109c180ec(alStack_1a8);
    plVar14 = plVar3;
    __Unwind_Resume();
    pcStack_208 = FUN_109c50e54;
    plVar14[0xc] = 0;
    plVar14[0xb] = 0;
    plVar14[0xe] = 0;
    plVar14[0xd] = 0;
    plVar14[0x10] = 0;
    plVar14[0xf] = 0;
    plVar14[0x11] = 0;
    plVar14[10] = 0;
    plVar14[9] = 0;
    plVar14[8] = 0;
    plVar14[7] = 0;
    plVar14[6] = 0;
    plVar14[5] = 0;
    plVar14[4] = 0;
    plVar14[3] = 0;
    plVar14[2] = 0;
    plVar14[1] = 0;
    *(undefined1 *)((long)plVar14 + 0x61) = 1;
    plVar14[0xd] = 0;
    plVar14[0xe] = 0;
    *(undefined4 *)(plVar14 + 0xf) = 0x3f800000;
    *(undefined1 *)(plVar14 + 0x11) = 0;
    *plVar14 = (long)&PTR_FUN_110b2e350;
    plStack_220 = param_2;
    plStack_218 = plVar3;
    ppuStack_210 = &puStack_100;
    func_0x000107c31940(auStack_238,&UNK_10f5a5bdf);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (plVar14 + 6,auStack_238);
    if (cStack_221 < '\0') {
      __ZdlPv(auStack_238[0]);
    }
    return plVar14;
  }
  return plVar3;
}



/* Entry: 109c50bdc; end: 109c50e53;  */

long * FUN_109c50bdc(long *param_1,long *param_2,int param_3,uint param_4,undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 auStack_148 [2];
  char cStack_131;
  long lStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  ulong uStack_108;
  undefined8 *puStack_100;
  long *plStack_f8;
  long *plStack_f0;
  ulong auStack_e8 [3];
  uint auStack_d0 [6];
  long alStack_b8 [9];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (uint *)(*param_1 + 8);
  auStack_d0[2] = 0;
  auStack_d0[3] = 0;
  auStack_d0[4] = 0;
  auStack_d0[5] = 0;
  piVar11 = (int *)((ulong)auStack_d0 | 4);
  auStack_d0[0] = 0;
  auStack_d0[1] = 0;
  puStack_100 = param_5;
  plStack_f8 = param_1;
  plStack_f0 = param_2;
  if (puVar3 == auStack_d0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *puVar3;
    if (uVar14 != 0) {
      _memcpy(piVar11,*param_1 + 0xc,(long)(int)uVar14 << 2);
    }
    auStack_d0[0] = uVar14;
  }
  plVar2 = plStack_f0;
  FUN_109c182f4(plStack_f0,(long)(int)param_4);
  uVar1 = (uVar14 & param_3 >> 0x1f) + param_3;
  auStack_e8[0] = 0;
  auStack_e8[1] = 0;
  auStack_e8[2] = 0;
  if (0 < (int)uVar14) {
    uVar5 = (ulong)uVar14;
    uVar6 = (ulong)uVar1;
    piVar7 = piVar11;
    do {
      if (uVar6 != 0) {
        lVar8 = (long)(int)auStack_e8[0];
        auStack_e8[0] = (ulong)((int)auStack_e8[0] + 1);
        *(int *)(((ulong)auStack_e8 | 4) + lVar8 * 4) = *piVar7;
      }
      piVar7 = piVar7 + 1;
      uVar6 = uVar6 - 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  uVar13 = 1;
  uVar6 = uVar5;
  piVar7 = piVar11;
  if (uVar1 != 0) {
    do {
      uVar13 = *piVar7 * uVar13;
      uVar6 = uVar6 - 4;
      piVar7 = piVar7 + 1;
    } while (uVar6 != 0);
  }
  if (auStack_d0 + (long)(int)uVar1 + 2 == (uint *)(piVar11 + (int)uVar14)) {
    uVar6 = 1;
  }
  else {
    lVar8 = ((long)(int)uVar14 * 4 - uVar5) + -4;
    uVar6 = 1;
    puVar3 = auStack_d0 + (long)(int)uVar1 + 2;
    do {
      uVar6 = (ulong)(*puVar3 * (int)uVar6);
      lVar8 = lVar8 + -4;
      puVar3 = puVar3 + 1;
    } while (lVar8 != 0);
  }
  if (0 < (int)param_4) {
    uVar5 = 0;
    lVar8 = *(long *)(*plStack_f8 + 0x40);
    uVar12 = -(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2;
    uStack_108 = (ulong)uVar13;
    do {
      unaff_x20 = *plStack_f0;
      (*(code *)**(undefined8 **)*puStack_100)
                (alStack_b8,(undefined8 *)*puStack_100,auStack_e8,
                 *(undefined1 *)(*plStack_f8 + 0x48));
      plVar10 = (long *)(unaff_x20 + uVar5 * 0x10);
      func_0x000109c18360(plVar10,alStack_b8);
      plVar2 = alStack_b8;
      FUN_109c180ec();
      lVar4 = *plVar10;
      *(undefined4 *)(lVar4 + 0x3c) = 2;
      if (0 < (int)uVar13) {
        plVar10 = *(long **)(lVar4 + 0x40);
        uVar9 = uStack_108;
        lVar4 = lVar8;
        do {
          if ((int)uVar6 != 0) {
            plVar2 = plVar10;
            _memmove(plVar10,lVar4,uVar12);
          }
          lVar4 = lVar4 + (long)(int)param_4 * (long)(int)uVar6 * 4;
          plVar10 = (long *)((long)plVar10 + uVar12);
          uVar9 = uVar9 - 1;
          unaff_x20 = 0;
        } while (uVar9 != 0);
      }
      uVar5 = uVar5 + 1;
      lVar8 = lVar8 + uVar12;
    } while (uVar5 != param_4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    FUN_109c180ec(alStack_b8);
    plVar10 = plVar2;
    __Unwind_Resume();
    pcStack_118 = FUN_109c50e54;
    plVar10[0xc] = 0;
    plVar10[0xb] = 0;
    plVar10[0xe] = 0;
    plVar10[0xd] = 0;
    plVar10[0x10] = 0;
    plVar10[0xf] = 0;
    plVar10[0x11] = 0;
    plVar10[10] = 0;
    plVar10[9] = 0;
    plVar10[8] = 0;
    plVar10[7] = 0;
    plVar10[6] = 0;
    plVar10[5] = 0;
    plVar10[4] = 0;
    plVar10[3] = 0;
    plVar10[2] = 0;
    plVar10[1] = 0;
    *(undefined1 *)((long)plVar10 + 0x61) = 1;
    plVar10[0xd] = 0;
    plVar10[0xe] = 0;
    *(undefined4 *)(plVar10 + 0xf) = 0x3f800000;
    *(undefined1 *)(plVar10 + 0x11) = 0;
    *plVar10 = (long)&PTR_FUN_110b2e350;
    lStack_130 = unaff_x20;
    plStack_128 = plVar2;
    puStack_120 = &stack0xfffffffffffffff0;
    func_0x000107c31940(auStack_148,&UNK_10f5a5bdf);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (plVar10 + 6,auStack_148);
    if (cStack_131 < '\0') {
      __ZdlPv(auStack_148[0]);
    }
    return plVar10;
  }
  return plVar2;
}



/* Entry: 109c50e54; end: 109c50f1f;  */

undefined8 * FUN_109c50e54(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x61) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_110b2e350;
  func_0x000107c31940(auStack_38,&UNK_10f5a5bdf);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 109c50f20; end: 109c50f23;  */

undefined8 * FUN_109c50f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c50f24; end: 109c50f37;  */

void FUN_109c50f24(void)

{
  FUN_109c21610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c50f38; end: 109c5100f;  */

undefined8 * FUN_109c50f38(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [9];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)*param_2;
  FUN_109c182f4(param_3,1);
  uStack_88 = *(undefined8 *)(param_1 + 0x98);
  uStack_90 = *(undefined8 *)(param_1 + 0x90);
  FUN_109c15b40(auStack_80,uVar3,&uStack_90,*(undefined4 *)(param_1 + 0xa0),param_1 + 0x68);
  func_0x000109c18360(*param_3,auStack_80);
  puVar1 = auStack_80;
  FUN_109c180ec();
  lVar2 = *(long *)*param_3;
  *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_109c180ec(auStack_80);
  __Unwind_Resume();
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x11] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *(undefined1 *)((long)puVar1 + 0x61) = 1;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *puVar1 = &PTR_FUN_110b2e390;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0x3f800000;
  func_0x000107c31940(auStack_d8,&UNK_10f5a5be3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1 + 6,auStack_d8);
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  return puVar1;
}



/* Entry: 109c51010; end: 109c510fb;  */

undefined8 * FUN_109c51010(undefined8 *param_1)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x61) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_110b2e390;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  func_0x000107c31940(auStack_48,&UNK_10f5a5be3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c510fc; end: 109c5115f;  */

undefined8 * FUN_109c510fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e390;
  FUN_109c51cf0(param_1 + 0x12);
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}



/* Entry: 109c51160; end: 109c51cef;  */

long * FUN_109c51160(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined4 uStack_d4;
  long *plStack_d0;
  long *plStack_c8;
  int aiStack_b8 [8];
  int *piStack_98;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = (long *)*param_2;
  FUN_109c182f4(param_3,1);
  if (*(long *)(param_1 + 0xa8) == 0) {
    param_3 = (long *)*param_3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      lVar20 = plVar14[1];
      lVar11 = *plVar14;
      if (plVar14[1] != 0) {
        plVar14 = (long *)(plVar14[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar14 = (long *)param_3[1];
      param_3[1] = lVar20;
      *param_3 = lVar11;
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          lVar11 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      return param_3;
    }
LAB_109c51c50:
    ___stack_chk_fail();
LAB_109c51c54:
    FUN_109262df8(&UNK_10f639994);
LAB_109c51c60:
    func_0x000105688514(&UNK_10f5a5beb);
  }
  else {
    lVar20 = *plVar14;
    cVar2 = *(char *)(lVar20 + 0x48);
    param_3 = (long *)*param_3;
    lVar11 = param_1 + 0x90;
    FUN_109c51d6c(lVar11,*(undefined4 *)(lVar20 + 0x3c));
    if (cVar2 != '\x02') {
      if (lVar11 == 0) goto LAB_109c51c54;
      iVar6 = *(int *)(lVar20 + 8U);
      uVar7 = *(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18);
      if (iVar6 != (int)(uVar7 >> 2)) goto LAB_109c51c60;
      uVar19 = (ulong)aiStack_b8 | 4;
      aiStack_b8[0] = 0;
      aiStack_b8[1] = 0;
      aiStack_b8[2] = 0;
      aiStack_b8[3] = 0;
      aiStack_b8[4] = 0;
      aiStack_b8[5] = 0;
      if ((int *)(lVar20 + 8U) != aiStack_b8) {
        if (iVar6 != 0) {
          _memmove(uVar19,lVar20 + 0xc,(long)iVar6 << 2);
          uVar7 = *(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18);
        }
        aiStack_b8[0] = iVar6;
      }
      aiStack_b8[6] = 0;
      FUN_1092cd11c(&plStack_d0,(long)uVar7 >> 2,aiStack_b8 + 6);
      lVar20 = *plVar14;
      if (0 < *(int *)(lVar20 + 8)) {
        lVar9 = 0;
        lVar11 = *(long *)(lVar11 + 0x18);
        do {
          *(undefined4 *)(uVar19 + lVar9 * 4) =
               *(undefined4 *)(lVar20 + 0xc + (long)*(int *)(lVar11 + lVar9 * 4) * 4);
          *(int *)((long)plStack_d0 + (ulong)*(uint *)(lVar11 + lVar9 * 4) * 4) = (int)lVar9;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(lVar20 + 8));
      }
      (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
                (aiStack_b8 + 6,(undefined8 *)**(undefined8 **)(param_1 + 0x68),aiStack_b8,
                 *(undefined1 *)(lVar20 + 0x48));
      func_0x000109c18360(param_3,aiStack_b8 + 6);
      FUN_109c180ec(aiStack_b8 + 6);
      puVar17 = *(undefined4 **)(*param_3 + 0x40);
      lVar11 = *plVar14;
      lVar20 = *(long *)(lVar11 + 0x40);
      iVar6 = *(int *)(lVar11 + 8);
      if (iVar6 < 3) {
        if (iVar6 != 1) {
          if (iVar6 != 2) {
LAB_109c51c7c:
            func_0x000105688514(&UNK_10f5a5c32);
            goto LAB_109c51c88;
          }
          uStack_d4 = 0;
          FUN_1092cd11c(aiStack_b8 + 6,2,&uStack_d4);
          piStack_98 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
          *piStack_98 = 0;
          if (0 < aiStack_b8[1]) {
            iVar6 = 0;
            lVar11 = *plVar14;
            do {
              piStack_98[1] = 0;
              if (0 < aiStack_b8[2]) {
                iVar8 = 0;
                puVar18 = puVar17;
                do {
                  puVar17 = puVar18 + 1;
                  *puVar18 = *(undefined4 *)
                              (lVar20 + (long)(piStack_98[*(int *)((long)plStack_d0 + 4)] +
                                              *(int *)(lVar11 + 0x10) * piStack_98[(int)*plStack_d0]
                                              ) * 4);
                  iVar8 = iVar8 + 1;
                  piStack_98[1] = iVar8;
                  puVar18 = puVar17;
                } while (iVar8 < aiStack_b8[2]);
              }
              iVar6 = iVar6 + 1;
              *piStack_98 = iVar6;
            } while (iVar6 < aiStack_b8[1]);
          }
          goto LAB_109c51ba0;
        }
        if (*(int *)(lVar11 + 0xc) != 0) {
          _memmove(puVar17,lVar20,(long)*(int *)(lVar11 + 0xc) << 2);
        }
      }
      else {
        if (iVar6 == 3) {
          uStack_d4 = 0;
          FUN_1092cd11c(aiStack_b8 + 6,3,&uStack_d4);
          piStack_98 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
          *piStack_98 = 0;
          if (0 < aiStack_b8[1]) {
            iVar6 = 0;
            do {
              piStack_98[1] = 0;
              if (0 < aiStack_b8[2]) {
                iVar8 = 0;
                lVar11 = *plVar14;
                do {
                  piStack_98[2] = 0;
                  if (0 < aiStack_b8[3]) {
                    iVar10 = 0;
                    puVar18 = puVar17;
                    do {
                      puVar17 = puVar18 + 1;
                      *puVar18 = *(undefined4 *)
                                  (lVar20 + (long)(piStack_98[(int)plStack_d0[1]] +
                                                  (piStack_98[*(int *)((long)plStack_d0 + 4)] +
                                                  *(int *)(lVar11 + 0x10) *
                                                  piStack_98[(int)*plStack_d0]) *
                                                  *(int *)(lVar11 + 0x14)) * 4);
                      iVar10 = iVar10 + 1;
                      piStack_98[2] = iVar10;
                      puVar18 = puVar17;
                    } while (iVar10 < aiStack_b8[3]);
                  }
                  iVar8 = iVar8 + 1;
                  piStack_98[1] = iVar8;
                } while (iVar8 < aiStack_b8[2]);
              }
              iVar6 = iVar6 + 1;
              *piStack_98 = iVar6;
            } while (iVar6 < aiStack_b8[1]);
          }
        }
        else if (iVar6 == 4) {
          uStack_d4 = 0;
          FUN_1092cd11c(aiStack_b8 + 6,4,&uStack_d4);
          piStack_98 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
          *piStack_98 = 0;
          if (0 < aiStack_b8[1]) {
            iVar6 = 0;
            do {
              piStack_98[1] = 0;
              if (0 < aiStack_b8[2]) {
                iVar8 = 0;
                do {
                  piStack_98[2] = 0;
                  if (0 < aiStack_b8[3]) {
                    iVar10 = 0;
                    lVar11 = *plVar14;
                    do {
                      piStack_98[3] = 0;
                      if (0 < aiStack_b8[4]) {
                        iVar12 = 0;
                        puVar18 = puVar17;
                        do {
                          puVar17 = puVar18 + 1;
                          *puVar18 = *(undefined4 *)
                                      (lVar20 + (long)(piStack_98[*(int *)((long)plStack_d0 + 0xc)]
                                                      + (piStack_98[(int)plStack_d0[1]] +
                                                        (piStack_98[*(int *)((long)plStack_d0 + 4)]
                                                        + *(int *)(lVar11 + 0x10) *
                                                          piStack_98[(int)*plStack_d0]) *
                                                        *(int *)(lVar11 + 0x14)) *
                                                        *(int *)(lVar11 + 0x18)) * 4);
                          iVar12 = iVar12 + 1;
                          piStack_98[3] = iVar12;
                          puVar18 = puVar17;
                        } while (iVar12 < aiStack_b8[4]);
                      }
                      iVar10 = iVar10 + 1;
                      piStack_98[2] = iVar10;
                    } while (iVar10 < aiStack_b8[3]);
                  }
                  iVar8 = iVar8 + 1;
                  piStack_98[1] = iVar8;
                } while (iVar8 < aiStack_b8[2]);
              }
              iVar6 = iVar6 + 1;
              *piStack_98 = iVar6;
            } while (iVar6 < aiStack_b8[1]);
          }
        }
        else {
          if (iVar6 != 5) goto LAB_109c51c7c;
          uStack_d4 = 0;
          FUN_1092cd11c(aiStack_b8 + 6,5,&uStack_d4);
          piStack_98 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
          *piStack_98 = 0;
          if (0 < aiStack_b8[1]) {
            iVar6 = 0;
            do {
              piStack_98[1] = 0;
              if (0 < aiStack_b8[2]) {
                iVar8 = 0;
                do {
                  piStack_98[2] = 0;
                  if (0 < aiStack_b8[3]) {
                    iVar10 = 0;
                    do {
                      piStack_98[3] = 0;
                      if (0 < aiStack_b8[4]) {
                        iVar12 = 0;
                        lVar11 = *plVar14;
                        do {
                          piStack_98[4] = 0;
                          if (0 < aiStack_b8[5]) {
                            iVar13 = 0;
                            puVar18 = puVar17;
                            do {
                              puVar17 = puVar18 + 1;
                              *puVar18 = *(undefined4 *)
                                          (lVar20 + (long)(piStack_98[(int)plStack_d0[2]] +
                                                          (piStack_98
                                                           [*(int *)((long)plStack_d0 + 0xc)] +
                                                          (piStack_98[(int)plStack_d0[1]] +
                                                          (piStack_98
                                                           [*(int *)((long)plStack_d0 + 4)] +
                                                          *(int *)(lVar11 + 0x10) *
                                                          piStack_98[(int)*plStack_d0]) *
                                                          *(int *)(lVar11 + 0x14)) *
                                                          *(int *)(lVar11 + 0x18)) *
                                                          *(int *)(lVar11 + 0x1c)) * 4);
                              iVar13 = iVar13 + 1;
                              piStack_98[4] = iVar13;
                              puVar18 = puVar17;
                            } while (iVar13 < aiStack_b8[5]);
                          }
                          iVar12 = iVar12 + 1;
                          piStack_98[3] = iVar12;
                        } while (iVar12 < aiStack_b8[4]);
                      }
                      iVar10 = iVar10 + 1;
                      piStack_98[2] = iVar10;
                    } while (iVar10 < aiStack_b8[3]);
                  }
                  iVar8 = iVar8 + 1;
                  piStack_98[1] = iVar8;
                } while (iVar8 < aiStack_b8[2]);
              }
              iVar6 = iVar6 + 1;
              *piStack_98 = iVar6;
            } while (iVar6 < aiStack_b8[1]);
          }
        }
LAB_109c51ba0:
        __ZdlPv();
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (*param_3 + 0x20,param_1 + 0x48);
LAB_109c51bb8:
      lVar11 = *param_3;
      *(undefined4 *)(lVar11 + 0x3c) = *(undefined4 *)(*plVar14 + 0x3c);
      *(undefined4 *)(lVar11 + 0x4c) = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(lVar11 + 0x50) = *(undefined4 *)(param_1 + 0x7c);
      if (plStack_d0 != (long *)0x0) {
        plStack_c8 = plStack_d0;
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return plStack_d0;
      }
      goto LAB_109c51c50;
    }
    if (lVar11 == 0) goto LAB_109c51c54;
    iVar6 = *(int *)(lVar20 + 8U);
    uVar7 = *(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18);
    if (iVar6 != (int)(uVar7 >> 2)) goto LAB_109c51c60;
    uVar19 = (ulong)aiStack_b8 | 4;
    aiStack_b8[0] = 0;
    aiStack_b8[1] = 0;
    aiStack_b8[2] = 0;
    aiStack_b8[3] = 0;
    aiStack_b8[4] = 0;
    aiStack_b8[5] = 0;
    if ((int *)(lVar20 + 8U) != aiStack_b8) {
      if (iVar6 != 0) {
        _memmove(uVar19,lVar20 + 0xc,(long)iVar6 << 2);
        uVar7 = *(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18);
      }
      aiStack_b8[0] = iVar6;
    }
    aiStack_b8[6] = 0;
    FUN_1092cd11c(&plStack_d0,(long)uVar7 >> 2,aiStack_b8 + 6);
    lVar20 = *plVar14;
    if (0 < *(int *)(lVar20 + 8)) {
      lVar9 = 0;
      lVar11 = *(long *)(lVar11 + 0x18);
      do {
        *(undefined4 *)(uVar19 + lVar9 * 4) =
             *(undefined4 *)(lVar20 + 0xc + (long)*(int *)(lVar11 + lVar9 * 4) * 4);
        *(int *)((long)plStack_d0 + (ulong)*(uint *)(lVar11 + lVar9 * 4) * 4) = (int)lVar9;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(lVar20 + 8));
    }
    (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0x68))
              (aiStack_b8 + 6,(undefined8 *)**(undefined8 **)(param_1 + 0x68),aiStack_b8,
               *(undefined1 *)(lVar20 + 0x48));
    func_0x000109c18360(param_3,aiStack_b8 + 6);
    FUN_109c180ec(aiStack_b8 + 6);
    puVar15 = *(undefined1 **)(*param_3 + 0x40);
    lVar11 = *plVar14;
    lVar20 = *(long *)(lVar11 + 0x40);
    iVar6 = *(int *)(lVar11 + 8);
    if (2 < iVar6) {
      if (iVar6 == 3) {
        uStack_d4 = 0;
        FUN_1092cd11c(aiStack_b8 + 6,3,&uStack_d4);
        piStack_98 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
        *piStack_98 = 0;
        if (0 < aiStack_b8[1]) {
          iVar6 = 0;
          do {
            *(undefined4 *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 4) = 0;
            if (0 < aiStack_b8[2]) {
              do {
                *(undefined4 *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 8) = 0;
                puVar16 = puVar15;
                if (0 < aiStack_b8[3]) {
                  do {
                    lVar11 = CONCAT44(aiStack_b8[7],aiStack_b8[6]);
                    puVar15 = puVar16 + 1;
                    *puVar16 = *(undefined1 *)
                                (lVar20 + (*(int *)(lVar11 + (long)(int)plStack_d0[1] * 4) +
                                          (*(int *)(lVar11 + (long)*(int *)((long)plStack_d0 + 4) *
                                                             4) +
                                          *(int *)(*plVar14 + 0x10) *
                                          *(int *)(lVar11 + (long)(int)*plStack_d0 * 4)) *
                                          *(int *)(*plVar14 + 0x14)));
                    iVar6 = *(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 8) + 1;
                    *(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 8) = iVar6;
                    puVar16 = puVar15;
                  } while (iVar6 < aiStack_b8[3]);
                }
                piVar5 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
                iVar6 = piVar5[1];
                piVar5[1] = iVar6 + 1;
              } while (iVar6 + 1 < aiStack_b8[2]);
              iVar6 = *piVar5;
            }
            piStack_98 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
            iVar6 = iVar6 + 1;
            *piStack_98 = iVar6;
          } while (iVar6 < aiStack_b8[1]);
        }
      }
      else if (iVar6 == 4) {
        uStack_d4 = 0;
        FUN_1092cd11c(aiStack_b8 + 6,4,&uStack_d4);
        piStack_98 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
        *piStack_98 = 0;
        if (0 < aiStack_b8[1]) {
          iVar6 = 0;
          do {
            *(undefined4 *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 4) = 0;
            if (0 < aiStack_b8[2]) {
              do {
                *(undefined4 *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 8) = 0;
                if (0 < aiStack_b8[3]) {
                  do {
                    *(undefined4 *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 0xc) = 0;
                    puVar16 = puVar15;
                    if (0 < aiStack_b8[4]) {
                      do {
                        lVar11 = CONCAT44(aiStack_b8[7],aiStack_b8[6]);
                        lVar9 = *plVar14;
                        puVar15 = puVar16 + 1;
                        *puVar16 = *(undefined1 *)
                                    (lVar20 + (*(int *)(lVar11 + (long)*(int *)((long)plStack_d0 +
                                                                               0xc) * 4) +
                                              (*(int *)(lVar11 + (long)(int)plStack_d0[1] * 4) +
                                              (*(int *)(lVar11 + (long)*(int *)((long)plStack_d0 + 4
                                                                               ) * 4) +
                                              *(int *)(lVar9 + 0x10) *
                                              *(int *)(lVar11 + (long)(int)*plStack_d0 * 4)) *
                                              *(int *)(lVar9 + 0x14)) * *(int *)(lVar9 + 0x18)));
                        iVar6 = *(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 0xc) + 1;
                        *(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 0xc) = iVar6;
                        puVar16 = puVar15;
                      } while (iVar6 < aiStack_b8[4]);
                    }
                    iVar6 = *(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 8) + 1;
                    *(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 8) = iVar6;
                  } while (iVar6 < aiStack_b8[3]);
                }
                piVar5 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
                iVar6 = piVar5[1];
                piVar5[1] = iVar6 + 1;
              } while (iVar6 + 1 < aiStack_b8[2]);
              iVar6 = *piVar5;
            }
            piStack_98 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
            iVar6 = iVar6 + 1;
            *piStack_98 = iVar6;
          } while (iVar6 < aiStack_b8[1]);
        }
      }
      else {
        if (iVar6 != 5) goto LAB_109c51c6c;
        uStack_d4 = 0;
        FUN_1092cd11c(aiStack_b8 + 6,5,&uStack_d4);
        piStack_98 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
        *piStack_98 = 0;
        if (0 < aiStack_b8[1]) {
          iVar6 = 0;
          do {
            *(undefined4 *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 4) = 0;
            if (0 < aiStack_b8[2]) {
              do {
                *(undefined4 *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 8) = 0;
                if (0 < aiStack_b8[3]) {
                  do {
                    *(undefined4 *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 0xc) = 0;
                    if (0 < aiStack_b8[4]) {
                      do {
                        *(undefined4 *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 0x10) = 0;
                        puVar16 = puVar15;
                        if (0 < aiStack_b8[5]) {
                          do {
                            lVar11 = CONCAT44(aiStack_b8[7],aiStack_b8[6]);
                            lVar9 = *plVar14;
                            puVar15 = puVar16 + 1;
                            *puVar16 = *(undefined1 *)
                                        (lVar20 + (*(int *)(lVar11 + (long)(int)plStack_d0[2] * 4) +
                                                  (*(int *)(lVar11 + (long)*(int *)((long)plStack_d0
                                                                                   + 0xc) * 4) +
                                                  (*(int *)(lVar11 + (long)(int)plStack_d0[1] * 4) +
                                                  (*(int *)(lVar11 + (long)*(int *)((long)plStack_d0
                                                                                   + 4) * 4) +
                                                  *(int *)(lVar9 + 0x10) *
                                                  *(int *)(lVar11 + (long)(int)*plStack_d0 * 4)) *
                                                  *(int *)(lVar9 + 0x14)) * *(int *)(lVar9 + 0x18))
                                                  * *(int *)(lVar9 + 0x1c)));
                            iVar6 = *(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 0x10) + 1;
                            *(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 0x10) = iVar6;
                            puVar16 = puVar15;
                          } while (iVar6 < aiStack_b8[5]);
                        }
                        iVar6 = *(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 0xc) + 1;
                        *(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 0xc) = iVar6;
                      } while (iVar6 < aiStack_b8[4]);
                    }
                    iVar6 = *(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 8) + 1;
                    *(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 8) = iVar6;
                  } while (iVar6 < aiStack_b8[3]);
                }
                piVar5 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
                iVar6 = piVar5[1];
                piVar5[1] = iVar6 + 1;
              } while (iVar6 + 1 < aiStack_b8[2]);
              iVar6 = *piVar5;
            }
            piStack_98 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
            iVar6 = iVar6 + 1;
            *piStack_98 = iVar6;
          } while (iVar6 < aiStack_b8[1]);
        }
      }
LAB_109c51a90:
      __ZdlPv();
LAB_109c51a98:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (*param_3 + 0x20,param_1 + 0x48);
      goto LAB_109c51bb8;
    }
    if (iVar6 == 1) {
      if (*(int *)(lVar11 + 0xc) != 0) {
        _memmove(puVar15,lVar20);
      }
      goto LAB_109c51a98;
    }
    if (iVar6 == 2) {
      uStack_d4 = 0;
      FUN_1092cd11c(aiStack_b8 + 6,2,&uStack_d4);
      piStack_98 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
      *piStack_98 = 0;
      if (0 < aiStack_b8[1]) {
        iVar6 = 0;
        do {
          *(undefined4 *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) + 4) = 0;
          puVar16 = puVar15;
          if (0 < aiStack_b8[2]) {
            do {
              puVar15 = puVar16 + 1;
              *puVar16 = *(undefined1 *)
                          (lVar20 + (long)*(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) +
                                                  (long)*(int *)((long)plStack_d0 + 4) * 4) +
                                    (long)*(int *)(*plVar14 + 0x10) *
                                    (long)*(int *)(CONCAT44(aiStack_b8[7],aiStack_b8[6]) +
                                                  (long)(int)*plStack_d0 * 4));
              piVar5 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
              iVar6 = piVar5[1];
              piVar5[1] = iVar6 + 1;
              puVar16 = puVar15;
            } while (iVar6 + 1 < aiStack_b8[2]);
            iVar6 = *piVar5;
          }
          piStack_98 = (int *)CONCAT44(aiStack_b8[7],aiStack_b8[6]);
          iVar6 = iVar6 + 1;
          *piStack_98 = iVar6;
        } while (iVar6 < aiStack_b8[1]);
      }
      goto LAB_109c51a90;
    }
  }
LAB_109c51c6c:
  func_0x000105688514(&UNK_10f5a5c32);
LAB_109c51c88:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109c51c8c);
  (*pcVar4)();
}



/* Entry: 109c51cf0; end: 109c51d6b;  */

long * FUN_109c51cf0(long *param_1)

{
  long lVar1;
  
  func_0x000109c51d28(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109c51d6c; end: 109c51e0f;  */

long * FUN_109c51d6c(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = (ulong)param_2;
    uVar6 = uVar4 - 1;
    uVar3 = (uint)uVar4;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = (ulong)(uVar3 - 1 & param_2);
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_2 / uVar3;
        }
        uVar7 = (ulong)(param_2 - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      do {
        if (plVar8 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar9 = plVar8[1];
        if (uVar9 == uVar5) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar2 * uVar4;
          }
          if (uVar9 != uVar7) {
            return (long *)0x0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109c51e10; end: 109c51efb;  */

undefined8 * FUN_109c51e10(undefined8 *param_1)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *(undefined8 *)((long)param_1 + 0x59) = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined2 *)((long)param_1 + 0x61) = 1;
  *(undefined1 *)((long)param_1 + 99) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *param_1 = &PTR_FUN_110b2e3d0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  func_0x000107c31940(auStack_48,&UNK_10f5a5c70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 109c51efc; end: 109c51f5f;  */

undefined8 * FUN_109c51efc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b2e3d0;
  FUN_10959b818(param_1 + 0x12);
  *param_1 = &PTR_FUN_110b2c3e0;
  func_0x000109c20db4(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_109c61bbc(param_1 + 1);
  return param_1;
}


