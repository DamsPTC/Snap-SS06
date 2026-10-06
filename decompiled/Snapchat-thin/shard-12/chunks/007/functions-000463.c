/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10959b05c; end: 10959b453;  */

void FUN_10959b05c(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  uint *puStack_110;
  ulong uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  uint uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  uint *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uStack_e8 = 0x42ff0000;
  uStack_dc = 0;
  uStack_d8 = 0;
  iStack_e4 = 0;
  uStack_e0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  puStack_a8 = &uStack_e0;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  lStack_b0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_88._0_4_ = 0x2010000;
  uStack_78 = 0;
  puStack_a0 = &uStack_98;
  puStack_80 = &uStack_e8;
  FUN_109a41858(0x3ff0000000000000,0,param_3,&puStack_88,5);
  uStack_78 = 0;
  puStack_88 = (undefined *)CONCAT44(puStack_88._4_4_,0x1010000);
  uStack_100 = 0xc1020006;
  uStack_f8 = (undefined4)param_2;
  iStack_f4 = (int)((ulong)param_2 >> 0x20);
  uStack_f0 = 0x400000001;
  uStack_118 = CONCAT44(uStack_118._4_4_,0x2010000);
  uStack_108 = 0;
  puStack_110 = &uStack_e8;
  puStack_80 = &uStack_e8;
  FUN_109a91d90();
  FUN_109a293c4(&puStack_88,&uStack_100,&uStack_118,param_3,0xffffffff,&PTR_DAT_1132e8c10,0,0);
  iStack_f4 = (uStack_e8 >> 3 & 0x1ff) + 1;
  uStack_100 = 3;
  uStack_f0 = 0;
  uStack_fc = uStack_e0;
  uStack_f8 = uStack_dc;
  lVar9 = 0x58;
  __Znwm();
  FUN_109c0ffb0();
  plVar10 = (long *)0x20;
  lStack_128 = lVar9;
  __Znwm();
  *plVar10 = (long)&PTR_FUN_110afd968;
  plVar10[1] = 0;
  plVar10[2] = 0;
  plVar10[3] = lVar9;
  puVar15 = (undefined8 *)(lVar9 + 0xc);
  puStack_110 = (uint *)*puVar15;
  uStack_118 = 0x100000004;
  uStack_108 = (ulong)*(uint *)(lVar9 + 0x14);
  uVar3 = *(uint *)(lVar9 + 8) & ((int)*(uint *)(lVar9 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  iVar7 = 0xf5749aa;
  plStack_120 = plVar10;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,puVar15,uVar3);
  uVar3 = (uint)uStack_118 & ((int)(uint)uStack_118 >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  iVar8 = 0xf5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,(ulong)&uStack_118 | 4,uVar3);
  puStack_88 = &UNK_10f574cf1;
  puStack_80 = (uint *)0xf;
  uStack_78 = CONCAT71(uStack_78._1_7_,iVar7 == iVar8);
  puStack_70 = &UNK_10f574d01;
  uStack_68 = 0xe;
  FUN_10959b640(&puStack_88);
  if (iVar7 == iVar8) {
    iVar7 = (uint)uStack_118;
    if ((uint)uStack_118 != 0) {
      _memcpy(puVar15,(ulong)&uStack_118 | 4,(long)(int)(uint)uStack_118 << 2);
    }
    *(int *)(lVar9 + 8) = iVar7;
  }
  puStack_88 = (undefined *)0x0;
  puStack_80 = (uint *)0x0;
  FUN_109c1d4f8(*(undefined8 *)(param_2 + 0x20),&lStack_128,&puStack_88);
  uVar3 = *(uint *)(puStack_88 + 8) & ((int)*(uint *)(puStack_88 + 8) >> 0x1f ^ 0xffffffffU);
  if (4 < (int)uVar3) {
    uVar3 = 5;
  }
  puVar11 = &UNK_10f5749aa;
  FUN_109c60fbc(&UNK_10f5749aa,0x1a,puStack_88 + 0xc,uVar3);
  FUN_109367d10(param_1,(long)(int)puVar11);
  puVar6 = puStack_80;
  if (0 < (int)puVar11) {
    uVar14 = (ulong)puVar11 & 0xffffffff;
    puVar12 = *(undefined4 **)(puStack_88 + 0x40);
    puVar13 = (undefined4 *)*param_1;
    do {
      *puVar13 = *puVar12;
      uVar14 = uVar14 - 1;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    } while (uVar14 != 0);
  }
  if (puStack_80 != (uint *)0x0) {
    plVar10 = (long *)((long)puStack_80 + 8);
    do {
      lVar9 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)puStack_80 + 0x10))(puStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(puVar6);
    }
  }
  plVar10 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    plVar1 = plStack_120 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (lStack_b0 != 0) {
    piVar2 = (int *)(lStack_b0 + 0x14);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      func_0x000109a848d4(&uStack_e8);
    }
  }
  lStack_b0 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  if (0 < iStack_e4) {
    lVar9 = 0;
    do {
      puStack_a8[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_e4);
  }
  if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
    _free(puStack_a0[-1]);
  }
  return;
}



/* Entry: 10959b454; end: 10959b56f;  */

long FUN_10959b454(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_4 + lVar2);
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x20);
  puVar1 = (undefined8 *)0x188;
  __Znwm();
  *puVar1 = &PTR_FUN_110b2c248;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0x3f800000;
  *(undefined8 *)((long)puVar1 + 0xac) = 0;
  *(undefined8 *)((long)puVar1 + 0xbc) = 0;
  *(undefined8 *)((long)puVar1 + 0xb4) = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2d] = 0;
  *(undefined8 *)((long)puVar1 + 0x17b) = 0;
  *(undefined8 *)((long)puVar1 + 0x173) = 0;
  *(undefined8 **)(param_1 + 0x20) = puVar1;
  *(undefined1 *)((long)puVar1 + 0xa9) = param_3;
  FUN_109c1eb98();
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(lVar2 + 8) = 1;
  uVar3 = (ulong)*(uint *)(lVar2 + 0x28);
  if (0 < (int)*(uint *)(lVar2 + 0x28)) {
    plVar4 = *(long **)(lVar2 + 0x10);
    do {
      *(undefined1 *)(*plVar4 + 0x61) = 1;
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 2;
    } while (uVar3 != 0);
  }
  return param_1;
}



/* Entry: 10959b570; end: 10959b5d3;  */

undefined8 * FUN_10959b570(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110afd968;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10959b5d4; end: 10959b5d7;  */

void FUN_10959b5d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10959b5d8; end: 10959b5eb;  */

void FUN_10959b5d8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10959b5ec; end: 10959b603;  */

void FUN_10959b5ec(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010959b5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10959b604; end: 10959b63b;  */

undefined8 FUN_10959b604(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afd9b8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10959b63c; end: 10959b63f;  */

void FUN_10959b63c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10959b640; end: 10959b6b7;  */

long FUN_10959b640(long param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    func_0x000107c31940(auStack_38,&UNK_10f574d10);
    FUN_10959b6b8(param_1,auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return param_1;
}



/* Entry: 10959b6b8; end: 10959b6f7;  */

void FUN_10959b6b8(void)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  FUN_10959b6f8(auStack_38);
  FUN_109c61b6c(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10959b6dc);
  (*pcVar1)();
}



/* Entry: 10959b6f8; end: 10959b817;  */

ulong * FUN_10959b6f8(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = param_2[1];
  if (0x7ffffffffffffff7 < uVar9) {
    func_0x000104c4f6b8();
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    __Unwind_Resume();
    plVar8 = (long *)param_2[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return param_2;
  }
  uVar10 = *param_2;
  if (uVar9 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar9;
    puVar6 = param_1;
    if (uVar9 == 0) goto LAB_10959b780;
  }
  else {
    puVar2 = (ulong *)0x19;
    if ((uVar9 | 7) != 0x17) {
      puVar2 = (ulong *)((uVar9 | 7) + 1);
    }
    puVar6 = puVar2;
    __Znwm();
    param_1[1] = uVar9;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  _memmove(puVar6,uVar10,uVar9);
LAB_10959b780:
  *(undefined1 *)((long)puVar6 + uVar9) = 0;
  if (param_2[4] != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,": ",2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,param_2[3],param_2[4]);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,": ",2);
  uVar9 = param_3[1];
  puVar5 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar9 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar5 = param_3;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,puVar5,uVar9)
  ;
  return param_1;
}



/* Entry: 10959b818; end: 10959b8bb;  */

long FUN_10959b818(long param_1)

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



/* Entry: 10959b8bc; end: 10959b927;  */

undefined8 * FUN_10959b8bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110afd9e0;
  uVar1 = 0x80;
  __Znwm();
  FUN_10959c13c();
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 10959b928; end: 10959b997;  */

undefined8 * FUN_10959b928(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110afd9e0;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_10959d790();
  }
  return param_1;
}



/* Entry: 10959b998; end: 10959be8f;  */

void FUN_10959b998(ulong *param_1,float *param_2)

{
  bool bVar1;
  int *piVar2;
  ulong *puVar3;
  int iVar4;
  code *pcVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  float fVar16;
  float fVar17;
  float fStack_b4;
  float *pfStack_b0;
  float *pfStack_a8;
  ulong uStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  
  FUN_10959b05c(&pfStack_b0,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x20));
  uVar7 = (long)pfStack_a8 - (long)pfStack_b0 >> 2;
  uVar13 = *(long *)(param_2 + 6) - *(long *)(param_2 + 4) >> 5;
  if (uVar13 < uVar7) {
    uVar11 = 0;
    uVar12 = uVar13;
    do {
      uVar14 = -(uVar11 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar11 & 0xffffffff) << 2;
      *(float *)((long)pfStack_b0 + uVar14) =
           pfStack_b0[uVar12] + *(float *)((long)pfStack_b0 + uVar14);
      uVar14 = 0;
      if (uVar11 + 1 != uVar13) {
        uVar14 = uVar11 + 1;
      }
      uVar12 = uVar12 + 1;
      uVar11 = uVar14;
    } while (uVar7 != uVar12);
    iVar4 = 0;
    if (uVar13 != 0) {
      iVar4 = (int)(uVar7 / uVar13);
    }
    pfVar6 = pfStack_b0;
    uVar7 = 1;
    do {
      *pfVar6 = *pfVar6 / (float)iVar4;
      bVar1 = uVar7 < uVar13;
      pfVar6 = pfVar6 + 1;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (bVar1);
    func_0x00010742a308(&pfStack_b0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (pfStack_a8 != pfStack_b0) {
    uVar13 = 1;
    uVar7 = 0;
    do {
      uVar12 = uVar13;
      piVar2 = (int *)(*(long *)(param_2 + 0x12) + uVar7 * 0x40);
      fVar16 = (float)piVar2[0xe];
      if (*(ulong *)(piVar2 + 0xc) != 0) {
        fVar16 = fVar16 / (float)*(ulong *)(piVar2 + 0xc);
      }
      pfVar6 = pfStack_b0 + uVar7;
      *(float *)(*(long *)(param_2 + 4) + uVar7 * 0x20 + 0x18) =
           *pfVar6 * (1.0 - *param_2) + *param_2 * fVar16;
      FUN_10959be90(piVar2 + 2,pfVar6);
      fVar16 = *pfVar6;
      fVar17 = (float)piVar2[0xe];
      piVar2[0xe] = (int)(fVar16 + fVar17);
      if (*piVar2 < (int)*(long *)(piVar2 + 0xc)) {
        uVar13 = *(ulong *)(piVar2 + 10);
        piVar2[0xe] = (int)((fVar16 + fVar17) -
                           *(float *)(*(long *)(*(long *)(piVar2 + 4) + (uVar13 >> 10) * 8) +
                                     (uVar13 & 0x3ff) * 4));
        *(ulong *)(piVar2 + 10) = uVar13 + 1;
        *(long *)(piVar2 + 0xc) = *(long *)(piVar2 + 0xc) + -1;
        func_0x0001094f35a4(piVar2 + 2,1);
      }
      if ((int)param_2[2] <= *(int *)(*(long *)(param_2 + 0x12) + uVar7 * 0x40 + 0x30)) {
        lVar8 = *(long *)(param_2 + 4);
        uVar13 = lVar8 + uVar7 * 0x20;
        if (*(double *)(*(long *)(param_2 + 10) + uVar7 * 8) <= (double)*(float *)(uVar13 + 0x18)) {
          pfVar6 = param_2 + 0x18;
          func_0x000107c2a680();
          lVar8 = *(long *)(param_2 + 4);
          if (param_2 + 0x1a == pfVar6) {
            puVar3 = (ulong *)(lVar8 + uVar7 * 0x20);
            puVar15 = (ulong *)param_1[1];
            if (puVar15 < (ulong *)param_1[2]) {
              if (*(char *)((long)puVar3 + 0x17) < '\0') {
                uVar13 = *puVar3;
                func_0x000107c3192c(puVar15,uVar13,puVar3[1]);
              }
              else {
                uVar14 = puVar3[1];
                uVar11 = *puVar3;
                puVar15[2] = puVar3[2];
                puVar15[1] = uVar14;
                *puVar15 = uVar11;
              }
              *(int *)(puVar15 + 3) = (int)puVar3[3];
              puVar15 = puVar15 + 4;
            }
            else {
              lVar8 = (long)puVar15 - *param_1;
              uVar11 = (lVar8 >> 5) + 1;
              if (uVar11 >> 0x3b != 0) {
                FUN_10959bf08();
                goto LAB_10959be2c;
              }
              uVar9 = (long)param_1[2] - *param_1;
              uVar14 = (long)uVar9 >> 4;
              if (uVar14 <= uVar11) {
                uVar14 = uVar11;
              }
              if (0x7fffffffffffffdf < uVar9) {
                uVar14 = 0x7ffffffffffffff;
              }
              if (uVar14 == 0) {
                uVar13 = 0;
                puStack_78 = param_1;
              }
              else {
                puStack_78 = param_1;
                FUN_10959bf1c();
              }
              puVar15 = (ulong *)(uVar14 + lVar8);
              uStack_80 = uVar14 + uVar13 * 0x20;
              uStack_98 = uVar14;
              puStack_90 = puVar15;
              puStack_88 = puVar15;
              if (*(char *)((long)puVar3 + 0x17) < '\0') {
                func_0x000107c3192c(puVar15,*puVar3,puVar3[1]);
              }
              else {
                uVar11 = puVar3[1];
                uVar13 = *puVar3;
                puVar15[2] = puVar3[2];
                puVar15[1] = uVar11;
                *puVar15 = uVar13;
              }
              uVar14 = uStack_80;
              *(int *)(puVar15 + 3) = (int)puVar3[3];
              puVar15 = puStack_88 + 4;
              uVar13 = param_1[1];
              uVar11 = (long)puStack_90 + (*param_1 - uVar13);
              func_0x00010959bf50(*param_1,uVar13,uVar11);
              uStack_98 = *param_1;
              *param_1 = uVar11;
              param_1[1] = (ulong)puVar15;
              uStack_80 = param_1[2];
              param_1[2] = uVar14;
              puStack_90 = (ulong *)uStack_98;
              puStack_88 = (ulong *)uStack_98;
              func_0x00010959bfc8(&uStack_98);
            }
            param_1[1] = (ulong)puVar15;
            lVar8 = *(long *)(param_2 + 4);
          }
        }
        piVar2 = (int *)(lVar8 + uVar7 * 0x20);
        if (*(char *)((long)piVar2 + 0x17) < '\0') {
          if (*(long *)(piVar2 + 2) == 7) {
            piVar10 = *(int **)piVar2;
            goto LAB_10959bccc;
          }
        }
        else {
          piVar10 = piVar2;
          if (*(char *)((long)piVar2 + 0x17) == '\a') {
LAB_10959bccc:
            if (((*piVar10 == 0x6474756f && *(int *)((long)piVar10 + 3) == 0x726f6f64) &&
                (((uint)param_2[0x1e] & 1) == 0)) &&
               ((double)(float)piVar2[6] < 1.0 - *(double *)(*(long *)(param_2 + 10) + uVar7 * 8)))
            {
              fStack_b4 = 1.0 - (float)piVar2[6];
              uVar7 = param_1[1];
              if (uVar7 < param_1[2]) {
                FUN_10959c028(uVar7,&fStack_b4);
                uVar7 = uVar7 + 0x20;
              }
              else {
                lVar8 = uVar7 - *param_1;
                uVar7 = (lVar8 >> 5) + 1;
                if (uVar7 >> 0x3b != 0) {
                  FUN_10959bf08();
LAB_10959be2c:
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10959be30);
                  (*pcVar5)();
                }
                uVar14 = param_1[2] - *param_1;
                uVar11 = (long)uVar14 >> 4;
                if (uVar11 <= uVar7) {
                  uVar11 = uVar7;
                }
                if (0x7fffffffffffffdf < uVar14) {
                  uVar11 = 0x7ffffffffffffff;
                }
                if (uVar11 == 0) {
                  uVar11 = 0;
                  uVar13 = 0;
                  puStack_78 = param_1;
                }
                else {
                  puStack_78 = param_1;
                  FUN_10959bf1c();
                }
                lVar8 = uVar11 + lVar8;
                uVar13 = uVar11 + uVar13 * 0x20;
                uStack_98 = uVar11;
                puStack_90 = (ulong *)lVar8;
                puStack_88 = (ulong *)lVar8;
                uStack_80 = uVar13;
                FUN_10959c028(lVar8,&fStack_b4);
                uVar7 = lVar8 + 0x20;
                uVar11 = lVar8 + (*param_1 - param_1[1]);
                func_0x00010959bf50(*param_1,param_1[1],uVar11);
                uStack_98 = *param_1;
                *param_1 = uVar11;
                param_1[1] = uVar7;
                uStack_80 = param_1[2];
                param_1[2] = uVar13;
                puStack_90 = (ulong *)uStack_98;
                puStack_88 = (ulong *)uStack_98;
                func_0x00010959bfc8(&uStack_98);
              }
              param_1[1] = uVar7;
            }
          }
        }
      }
      uVar13 = (ulong)((int)uVar12 + 1);
      uVar7 = uVar12;
    } while (uVar12 < (ulong)((long)pfStack_a8 - (long)pfStack_b0 >> 2));
  }
  if (pfStack_b0 != (float *)0x0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10959be90; end: 10959bf07;  */

void FUN_10959be90(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar2) * 0x80 - 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  uVar4 = lVar3 + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_1094f2ea4(param_1);
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x28);
    uVar4 = *(long *)(param_1 + 0x20) + lVar3;
  }
  *(undefined4 *)(*(long *)(lVar2 + (uVar4 >> 10) * 8) + (uVar4 & 0x3ff) * 4) = *param_2;
  *(long *)(param_1 + 0x28) = lVar3 + 1;
  return;
}



/* Entry: 10959bf08; end: 10959bf1b;  */

void FUN_10959bf08(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar1 >> 0x3b != 0) {
    func_0x000104c4f740();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        param_3[2] = puVar2[2];
        param_3[1] = uVar4;
        *param_3 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        *(undefined4 *)(param_3 + 3) = *(undefined4 *)(puVar2 + 3);
        puVar2 = puVar2 + 4;
        param_3 = param_3 + 4;
      } while (puVar2 != param_2);
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          __ZdlPv(*puVar1);
        }
        puVar1 = puVar1 + 4;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 << 5);
  return;
}



/* Entry: 10959bf1c; end: 10959c027;  */

void FUN_10959bf1c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((ulong)param_1 >> 0x3b != 0) {
    func_0x000104c4f740();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_3[2] = puVar1[2];
        param_3[1] = uVar3;
        *param_3 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        *(undefined4 *)(param_3 + 3) = *(undefined4 *)(puVar1 + 3);
        puVar1 = puVar1 + 4;
        param_3 = param_3 + 4;
      } while (puVar1 != param_2);
      do {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          __ZdlPv(*param_1);
        }
        param_1 = param_1 + 4;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 << 5);
  return;
}



/* Entry: 10959c028; end: 10959c0cb;  */

undefined8 * FUN_10959c028(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  char cStack_31;
  
  func_0x000107c31940(&uStack_48,&UNK_10f574d1d);
  uVar1 = *param_2;
  if (cStack_31 < '\0') {
    func_0x000107c3192c(param_1,uStack_48,uStack_40);
    *(undefined4 *)(param_1 + 3) = uVar1;
    if (cStack_31 < '\0') {
      __ZdlPv(uStack_48);
    }
  }
  else {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = CONCAT17(cStack_31,uStack_38);
    *(undefined4 *)(param_1 + 3) = uVar1;
  }
  return param_1;
}



/* Entry: 10959c0cc; end: 10959c13b;  */

/* WARNING: Removing unreachable block (ram,0x00010959c104) */

void FUN_10959c0cc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10959c13c; end: 10959d257;  */

undefined8 * FUN_10959c13c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long ****pppplVar1;
  byte bVar2;
  long **pplVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  long *****ppppplVar8;
  long ****pppplVar9;
  undefined8 uVar10;
  long ******pppppplVar11;
  long *****ppppplVar12;
  uint uVar13;
  long ******pppppplVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 *puVar20;
  long ****pppplVar21;
  long **pplVar22;
  long **pplVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  long *plVar27;
  long ******pppppplVar28;
  long ******pppppplVar29;
  long **pplVar30;
  long ****pppplVar31;
  long lVar32;
  long *plVar33;
  long *plVar34;
  long ******pppppplVar35;
  long lVar36;
  long ******pppppplVar37;
  long ***ppplVar38;
  long ***ppplVar39;
  long *****ppppplVar40;
  long ****pppplStack_150;
  long ****pppplStack_148;
  undefined8 uStack_140;
  long *****ppppplStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  long *****ppppplStack_110;
  long ****pppplStack_108;
  long ****pppplStack_100;
  undefined8 uStack_f8;
  long *****ppppplStack_f0;
  long ****pppplStack_e8;
  long ****pppplStack_e0;
  undefined8 uStack_d8;
  long ***ppplStack_d0;
  long *plStack_c8;
  long ****pppplStack_c0;
  long ****pppplStack_b8;
  long *plStack_b0;
  long *****ppppplStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  long **pplStack_90;
  long **pplStack_88;
  long *plStack_80;
  
  uVar10 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar10;
  plVar27 = param_1 + 2;
  param_1[3] = 0;
  *plVar27 = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  plVar33 = param_1 + 9;
  param_1[0xd] = (long ***)0x0;
  ppppplVar8 = (long *****)(param_1 + 0xc);
  *ppppplVar8 = (long ****)(param_1 + 0xd);
  param_1[0xe] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  plVar34 = (long *)*param_2;
  func_0x000107c31940(&pppplStack_150,&DAT_10f2ecb66);
  (**(code **)(*plVar34 + 0x10))(&plStack_b0,plVar34,&pppplStack_150);
  if ((long)uStack_140 < 0) {
    __ZdlPv(pppplStack_150);
  }
  pppplStack_c0._0_1_ = '\0';
  pppplStack_b8 = (long ****)0x0;
  (**(code **)(*plStack_b0 + 0x20))(&pppplStack_150);
  FUN_109380e34(pppplStack_150,&pppplStack_c0);
  pppplVar9 = pppplStack_150;
  pppplStack_150 = (long ****)0x0;
  if (pppplVar9 != (long ****)0x0) {
    (*(code *)(*pppplVar9)[1])();
  }
  func_0x000107c31940(&pppplStack_150,&UNK_10f574d24);
  ppppplVar12 = &pppplStack_c0;
  FUN_1094947d8(ppppplVar12,&pppplStack_150);
  FUN_109381b20(&ppplStack_d0,ppppplVar12);
  if (uStack_140._7_1_ < '\0') {
    __ZdlPv(pppplStack_150);
  }
  pplStack_a0 = (long **)&ppplStack_d0;
  pplStack_98 = (long **)0x0;
  pplStack_90 = (long **)0x0;
  pplStack_88 = (long **)0x8000000000000000;
  if ((char)ppplStack_d0 == '\0') {
    pplStack_88 = (long **)0x1;
  }
  else if ((char)ppplStack_d0 == '\x02') {
    pplStack_90 = (long **)*plStack_c8;
  }
  else if ((char)ppplStack_d0 == '\x01') {
    pplStack_98 = (long **)*plStack_c8;
  }
  else {
    pplStack_88 = (long **)0x0;
  }
  do {
    pppplStack_148 = (long ****)0x0;
    uStack_140 = (long *****)0x0;
    pppplStack_150 = &ppplStack_d0;
    ppppplStack_138 = (long *****)0x8000000000000000;
    if ((char)ppplStack_d0 == '\x02') {
      uStack_140 = (long *****)plStack_c8[1];
    }
    else if ((char)ppplStack_d0 == '\x01') {
      pppplStack_148 = (long ****)(plStack_c8 + 1);
    }
    else {
      ppppplStack_138 = (long *****)0x1;
    }
    ppplVar38 = &pplStack_a0;
    FUN_109379420(ppplVar38,&pppplStack_150);
    if ((int)ppplVar38 != 0) {
      ppppplStack_f0 = &pppplStack_c0;
      pppplStack_e8 = (long ****)0x0;
      pppplStack_e0 = (long ****)0x0;
      uStack_d8 = 0x8000000000000000;
      if ((char)pppplStack_c0 == '\x01') {
        ppppplVar12 = (long *****)pppplStack_b8;
        FUN_10938ce90(pppplStack_b8,&PTR_DAT_110afda00);
        pppplStack_e8 = (long ****)ppppplVar12;
LAB_10959c954:
        pppplStack_148 = (long ****)0x0;
        uStack_140 = (long *****)0x0;
        ppppplStack_138 = (long *****)0x8000000000000000;
        if ((char)pppplStack_c0 == '\x01') {
          pppplStack_148 = pppplStack_b8 + 1;
        }
        else {
          if ((char)pppplStack_c0 == '\x02') goto LAB_10959c978;
          ppppplStack_138 = (long *****)0x1;
        }
      }
      else {
        if ((char)pppplStack_c0 != '\x02') {
          uStack_d8 = 1;
          goto LAB_10959c954;
        }
        pppplStack_e0 = (long ****)pppplStack_b8[1];
LAB_10959c978:
        ppppplStack_138 = (long *****)0x8000000000000000;
        pppplStack_148 = (long ****)0x0;
        uStack_140 = (long *****)pppplStack_b8[1];
      }
      pppplStack_150 = (long ****)&pppplStack_c0;
      pppppplVar35 = &ppppplStack_f0;
      FUN_109379420(pppppplVar35,&pppplStack_150);
      if (((ulong)pppppplVar35 & 1) == 0) {
        FUN_10937b950(&ppppplStack_f0);
        FUN_10937c260(&pplStack_a0);
        pplVar22 = pplStack_98;
        for (pppplVar9 = (long ****)pplStack_a0; pppplVar9 != (long ****)pplVar22;
            pppplVar9 = pppplVar9 + 3) {
          if ((long)*(char *)((long)pppplVar9 + 0x17) < 0) {
            pppplVar31 = (long ****)*pppplVar9;
            pppplVar21 = (long ****)((long)pppplVar31 + (long)pppplVar9[1]);
          }
          else {
            pppplVar21 = (long ****)((long)pppplVar9 + (long)*(char *)((long)pppplVar9 + 0x17));
            pppplVar31 = pppplVar9;
          }
          for (; pppplVar31 != pppplVar21; pppplVar31 = (long ****)((long)pppplVar31 + 1)) {
            uVar6 = *(undefined1 *)pppplVar31;
            ___tolower();
            *(undefined1 *)pppplVar31 = uVar6;
          }
          ppppplVar12 = ppppplVar8;
          func_0x000107c27bd0(ppppplVar8,&ppppplStack_110,pppplVar9);
          if (*ppppplVar12 == (long ****)0x0) {
            lVar24 = 0x38;
            __Znwm();
            uStack_140 = (long *****)0x0;
            pppplStack_148 = (long ****)ppppplVar8;
            if (*(char *)((long)pppplVar9 + 0x17) < '\0') {
              func_0x000107c3192c(lVar24 + 0x20,*pppplVar9,pppplVar9[1]);
            }
            else {
              ppplVar39 = pppplVar9[1];
              ppplVar38 = *pppplVar9;
              *(long ****)(lVar24 + 0x30) = pppplVar9[2];
              *(long ****)(lVar24 + 0x28) = ppplVar39;
              *(long ****)(lVar24 + 0x20) = ppplVar38;
            }
            func_0x000107c27bc8(ppppplVar8,ppppplStack_110,ppppplVar12,lVar24);
          }
        }
        pppplStack_150 = (long ****)&pplStack_a0;
        func_0x000104c607c8(&pppplStack_150);
      }
      ppppplVar8 = (long *****)0x18;
      __Znwm();
      ppppplVar8[1] = (long ****)0x405fc00000000000;
      *ppppplVar8 = (long ****)0x405fc00000000000;
      ppppplVar8[2] = (long ****)0x405fc00000000000;
      ppppplStack_110 = &pppplStack_c0;
      pppplStack_108 = (long ****)0x0;
      pppplStack_100 = (long ****)0x0;
      uStack_f8 = 0x8000000000000000;
      if ((char)pppplStack_c0 == '\x01') {
        ppppplVar12 = (long *****)pppplStack_b8;
        FUN_10938ce90(pppplStack_b8,&PTR_DAT_110afda08);
        pppplStack_108 = (long ****)ppppplVar12;
LAB_10959cb14:
        pppplStack_148 = (long ****)0x0;
        uStack_140 = (long *****)0x0;
        ppppplStack_138 = (long *****)0x8000000000000000;
        if ((char)pppplStack_c0 == '\x01') {
          pppplStack_148 = pppplStack_b8 + 1;
        }
        else {
          if ((char)pppplStack_c0 == '\x02') goto LAB_10959cb38;
          ppppplStack_138 = (long *****)0x1;
        }
      }
      else {
        if ((char)pppplStack_c0 != '\x02') {
          uStack_f8 = 1;
          goto LAB_10959cb14;
        }
        pppplStack_100 = (long ****)pppplStack_b8[1];
LAB_10959cb38:
        ppppplStack_138 = (long *****)0x8000000000000000;
        pppplStack_148 = (long ****)0x0;
        uStack_140 = (long *****)pppplStack_b8[1];
      }
      pppplStack_150 = (long ****)&pppplStack_c0;
      pppppplVar35 = &ppppplStack_110;
      FUN_109379420(pppppplVar35,&pppplStack_150);
      if (((ulong)pppppplVar35 & 1) == 0) {
        FUN_10937b950(&ppppplStack_110);
        FUN_1094949b4(&pppplStack_150);
        __ZdlPv(ppppplVar8);
        ppppplVar8 = (long *****)pppplStack_150;
      }
      uVar19 = (long)(param_1[3] - param_1[2]) >> 5;
      pppplStack_150 = (long ****)CONCAT44(pppplStack_150._4_4_,*(undefined4 *)((long)param_1 + 4));
      uStack_140 = (long *****)0x0;
      pppplStack_148 = (long ****)0x0;
      plStack_130 = (long *)0x0;
      ppppplStack_138 = (long *****)0x0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_118 = 0;
      lVar24 = param_1[9];
      puVar26 = (undefined4 *)param_1[10];
      lVar32 = (long)puVar26 - lVar24;
      uVar18 = lVar32 >> 6;
      if (uVar18 < uVar19) {
        uVar18 = uVar19 - uVar18;
        if ((ulong)(param_1[0xb] - (long)puVar26 >> 6) < uVar18) {
          if (uVar19 >> 0x3a == 0) {
            uVar16 = param_1[0xb] - lVar24;
            uVar15 = (long)uVar16 >> 5;
            if (uVar15 <= uVar19) {
              uVar15 = uVar19;
            }
            if (0x7fffffffffffffbf < uVar16) {
              uVar15 = 0x3ffffffffffffff;
            }
            plStack_80 = plVar33;
            if (uVar15 >> 0x3a == 0) {
              pppplVar9 = (long ****)(uVar15 << 6);
              __Znwm();
              lVar24 = 0;
              lVar36 = (long)pppplVar9 + lVar32;
              pplStack_a0 = (long **)pppplVar9;
              pplStack_98 = (long **)lVar36;
              pplStack_88 = (long **)(pppplVar9 + uVar15 * 8);
              do {
                puVar26 = (undefined4 *)(lVar36 + lVar24);
                *puVar26 = pppplStack_150._0_4_;
                FUN_10959d380(puVar26 + 2,&pppplStack_148);
                puVar26[0xe] = uStack_118;
                lVar24 = lVar24 + 0x40;
              } while (uVar19 * 0x40 - lVar32 != lVar24);
              pppplVar31 = (long ****)param_1[9];
              pppplVar1 = (long ****)param_1[10];
              puVar26 = (undefined4 *)((long)pppplVar31 + (lVar36 - (long)pppplVar1));
              pppplVar21 = pppplVar31;
              puVar20 = puVar26;
              if (pppplVar1 != pppplVar31) {
                do {
                  *puVar20 = *(undefined4 *)pppplVar21;
                  *(long ****)(puVar20 + 2) = pppplVar21[1];
                  *(long ****)(puVar20 + 4) = pppplVar21[2];
                  *(long ****)(puVar20 + 6) = pppplVar21[3];
                  *(long ****)(puVar20 + 8) = pppplVar21[4];
                  pppplVar21[4] = (long ***)0x0;
                  pppplVar21[3] = (long ***)0x0;
                  pppplVar21[2] = (long ***)0x0;
                  pppplVar21[1] = (long ***)0x0;
                  *(long ****)(puVar20 + 10) = pppplVar21[5];
                  *(long ****)(puVar20 + 0xc) = pppplVar21[6];
                  pppplVar21[5] = (long ***)0x0;
                  pppplVar21[6] = (long ***)0x0;
                  puVar20[0xe] = *(undefined4 *)(pppplVar21 + 7);
                  pppplVar21 = pppplVar21 + 8;
                  puVar20 = puVar20 + 0x10;
                } while (pppplVar21 != pppplVar1);
                do {
                  FUN_1094f2ba0(pppplVar31 + 1);
                  pppplVar31 = pppplVar31 + 8;
                } while (pppplVar31 != pppplVar1);
                pppplVar31 = (long ****)*plVar33;
              }
              param_1[9] = puVar26;
              param_1[10] = lVar36 + uVar18 * 0x40;
              pplStack_88 = (long **)param_1[0xb];
              param_1[0xb] = pppplVar9 + uVar15 * 8;
              pplStack_a0 = (long **)pppplVar31;
              pplStack_98 = (long **)pppplVar31;
              pplStack_90 = (long **)pppplVar31;
              FUN_10959d694(&pplStack_a0);
              goto LAB_10959cd98;
            }
            func_0x000104c4f740();
          }
          else {
            FUN_10959d680();
          }
          goto LAB_10959cf5c;
        }
        puVar20 = puVar26 + uVar18 * 0x10;
        lVar32 = uVar19 * 0x40 - lVar32;
        do {
          *puVar26 = pppplStack_150._0_4_;
          FUN_10959d380(puVar26 + 2,&pppplStack_148);
          puVar26[0xe] = uStack_118;
          puVar26 = puVar26 + 0x10;
          lVar32 = lVar32 + -0x40;
        } while (lVar32 != 0);
      }
      else {
        if (uVar18 <= uVar19) goto LAB_10959cd98;
        puVar20 = (undefined4 *)(lVar24 + uVar19 * 0x40);
        for (; puVar26 != puVar20; puVar26 = puVar26 + -0x10) {
          FUN_1094f2ba0(puVar26 + -0xe);
        }
      }
      param_1[10] = puVar20;
LAB_10959cd98:
      FUN_1094f2ba0(&pppplStack_148);
      plVar33 = (long *)*param_2;
      FUN_10945a80c(&pppplStack_c0,&UNK_10f574d35);
      FUN_10937c804(&pppplStack_150);
      (**(code **)(*plVar33 + 0x10))(&pplStack_a0,plVar33,&pppplStack_150);
      if ((long)uStack_140 < 0) {
        __ZdlPv(pppplStack_150);
      }
      (*(code *)(*pplStack_a0)[4])(&ppppplStack_a8);
      uStack_140 = (long *****)ppppplVar8[2];
      pppplStack_148 = ppppplVar8[1];
      pppplStack_150 = *ppppplVar8;
      ppppplStack_138 = (long *****)0x0;
      uVar10 = 0x28;
      __Znwm(0x28);
      FUN_10959afe4();
      func_0x00010959d6e4(param_1 + 8,uVar10);
      ppppplVar12 = ppppplStack_a8;
      ppppplStack_a8 = (long *****)0x0;
      if ((long ******)ppppplVar12 != (long ******)0x0) {
        (*(code *)(*ppppplVar12)[1])();
      }
      pplVar22 = pplStack_a0;
      pplStack_a0 = (long **)0x0;
      if ((long ****)pplVar22 != (long ****)0x0) {
        (*(code *)(*pplVar22)[1])();
      }
      __ZdlPv(ppppplVar8);
      FUN_109380ffc(&plStack_c8,(char)ppplStack_d0);
      FUN_109380ffc(&pppplStack_b8,(char)pppplStack_c0);
      plVar33 = plStack_b0;
      plStack_b0 = (long *)0x0;
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 8))();
      }
      return param_1;
    }
    ppplVar38 = &pplStack_a0;
    FUN_109386768();
    pppplStack_108 = (long ****)0x0;
    pppplStack_100 = (long ****)0x0;
    ppppplStack_110 = &pppplStack_108;
    if (*(char *)ppplVar38 != '\x01') {
      uVar10 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(ppplVar38);
      func_0x000107c31940(&ppppplStack_f0,ppplVar38);
      FUN_10928a5e0(&pppplStack_150,&UNK_10f56746f,&ppppplStack_f0);
      FUN_10937bbbc(uVar10,0x12e,&pppplStack_150);
      ___cxa_throw(uVar10,&PTR_DAT_110af4510,FUN_10937bd14);
LAB_10959cf5c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10959cf60);
      (*pcVar4)();
    }
    pppplStack_e8 = (long ****)0x0;
    pppplStack_e0 = (long ****)0x0;
    pplVar30 = ppplVar38[1];
    pplVar22 = (long **)*pplVar30;
    pppppplVar35 = (long ******)&pppplStack_e8;
    ppppplStack_f0 = &pppplStack_e8;
    while (pplVar22 != pplVar30 + 1) {
      FUN_10949aadc(pplVar22 + 7,&ppppplStack_a8);
      ppppplVar12 = ppppplStack_a8;
      if (*(char *)((long)pplVar22 + 0x37) < '\0') {
        func_0x000107c3192c(&pppplStack_150,pplVar22[4],pplVar22[5]);
      }
      else {
        pppplStack_148 = (long ****)pplVar22[5];
        pppplStack_150 = (long ****)pplVar22[4];
        uStack_140 = (long *****)pplVar22[6];
      }
      ppppplStack_138 = ppppplVar12;
      if ((long ******)&pppplStack_e8 == pppppplVar35) {
LAB_10959c3e0:
        pppppplVar11 = pppppplVar35;
        if ((long ******)ppppplStack_f0 != pppppplVar35) {
          pppppplVar29 = (long ******)*pppppplVar35;
          pppppplVar14 = pppppplVar35;
          if ((long ******)*pppppplVar35 == (long ******)0x0) {
            do {
              pppppplVar11 = (long ******)pppppplVar14[2];
              bVar5 = (long ******)*pppppplVar11 == pppppplVar14;
              pppppplVar14 = pppppplVar11;
            } while (bVar5);
          }
          else {
            do {
              pppppplVar11 = pppppplVar29;
              pppppplVar29 = (long ******)pppppplVar11[1];
            } while ((long ******)pppppplVar11[1] != (long ******)0x0);
          }
          pppppplVar29 = pppppplVar11 + 4;
          func_0x000107c2abd4(pppppplVar29,&pppplStack_150);
          if (((uint)pppppplVar29 >> 7 & 1) == 0) {
LAB_10959c430:
            pppppplVar35 = &ppppplStack_f0;
            FUN_10959d2ac(pppppplVar35,&ppppplStack_a8,&pppplStack_150);
            goto LAB_10959c4cc;
          }
        }
        if (*pppppplVar35 == (long *****)0x0) {
          ppppplStack_a8 = (long *****)pppppplVar35;
        }
        else {
          ppppplStack_a8 = (long *****)pppppplVar11;
          pppppplVar35 = pppppplVar11 + 1;
        }
LAB_10959c4cc:
        pppppplVar29 = (long ******)*pppppplVar35;
        if ((long ******)*pppppplVar35 == (long ******)0x0) {
          pppppplVar29 = (long ******)0x40;
          __Znwm();
          if ((long)uStack_140 < 0) {
            func_0x000107c3192c(pppppplVar29 + 4,pppplStack_150,pppplStack_148);
          }
          else {
            pppppplVar29[5] = (long *****)pppplStack_148;
            pppppplVar29[4] = (long *****)pppplStack_150;
            pppppplVar29[6] = uStack_140;
          }
          pppppplVar29[7] = ppppplStack_138;
          *pppppplVar29 = (long *****)0x0;
          pppppplVar29[1] = (long *****)0x0;
          pppppplVar29[2] = ppppplStack_a8;
          *pppppplVar35 = (long *****)pppppplVar29;
          pppppplVar11 = pppppplVar29;
          if ((long ******)*ppppplStack_f0 != (long ******)0x0) {
            ppppplStack_f0 = (long *****)*ppppplStack_f0;
            pppppplVar11 = (long ******)*pppppplVar35;
          }
          func_0x000107c27d40(pppplStack_e8,pppppplVar11);
          pppplStack_e0 = (long ****)((long)pppplStack_e0 + 1);
        }
      }
      else {
        ppppplVar12 = &pppplStack_150;
        func_0x000107c2abd4(ppppplVar12,pppppplVar35 + 4);
        if (((uint)ppppplVar12 >> 7 & 1) != 0) goto LAB_10959c3e0;
        pppppplVar11 = pppppplVar35 + 4;
        func_0x000107c2abd4(pppppplVar11,&pppplStack_150);
        pppppplVar29 = pppppplVar35;
        if (((uint)pppppplVar11 >> 7 & 1) != 0) {
          pppppplVar37 = pppppplVar35 + 1;
          pppppplVar14 = (long ******)*pppppplVar37;
          pppppplVar11 = pppppplVar35;
          pppppplVar29 = pppppplVar14;
          if (pppppplVar14 == (long ******)0x0) {
            do {
              pppppplVar28 = (long ******)pppppplVar11[2];
              bVar5 = (long ******)*pppppplVar28 != pppppplVar11;
              pppppplVar11 = pppppplVar28;
            } while (bVar5);
          }
          else {
            do {
              pppppplVar28 = pppppplVar29;
              pppppplVar29 = (long ******)*pppppplVar28;
            } while ((long ******)*pppppplVar28 != (long ******)0x0);
          }
          if (pppppplVar28 != (long ******)&pppplStack_e8) {
            ppppplVar12 = &pppplStack_150;
            func_0x000107c2abd4(ppppplVar12,pppppplVar28 + 4);
            if (((uint)ppppplVar12 >> 7 & 1) != 0) {
              pppppplVar14 = (long ******)*pppppplVar37;
              goto LAB_10959c4b4;
            }
            goto LAB_10959c430;
          }
LAB_10959c4b4:
          if (pppppplVar14 == (long ******)0x0) {
            ppppplStack_a8 = (long *****)pppppplVar35;
            pppppplVar35 = pppppplVar37;
          }
          else {
            ppppplStack_a8 = (long *****)pppppplVar28;
            pppppplVar35 = pppppplVar28;
          }
          goto LAB_10959c4cc;
        }
      }
      pppppplVar11 = (long ******)pppppplVar29[1];
      if ((long ******)pppppplVar29[1] == (long ******)0x0) {
        do {
          pppppplVar35 = (long ******)pppppplVar29[2];
          bVar5 = (long ******)*pppppplVar35 != pppppplVar29;
          pppppplVar29 = pppppplVar35;
        } while (bVar5);
      }
      else {
        do {
          pppppplVar35 = pppppplVar11;
          pppppplVar11 = (long ******)*pppppplVar35;
        } while ((long ******)*pppppplVar35 != (long ******)0x0);
      }
      if ((long)uStack_140 < 0) {
        __ZdlPv(pppplStack_150);
      }
      pplVar3 = (long **)pplVar22[1];
      pplVar23 = pplVar22;
      if ((long **)pplVar22[1] == (long **)0x0) {
        do {
          pplVar22 = (long **)pplVar23[2];
          bVar5 = (long **)*pplVar22 != pplVar23;
          pplVar23 = pplVar22;
        } while (bVar5);
      }
      else {
        do {
          pplVar22 = pplVar3;
          pplVar3 = (long **)*pplVar22;
        } while ((long **)*pplVar22 != (long **)0x0);
      }
    }
    FUN_10959d330(&ppppplStack_110,pppplStack_108);
    ppppplStack_110 = ppppplStack_f0;
    pppplStack_108 = pppplStack_e8;
    pppplStack_100 = pppplStack_e0;
    pppppplVar35 = (long ******)&pppplStack_108;
    if ((long *****)pppplStack_e0 != (long *****)0x0) {
      pppplStack_e8[2] = (long ***)&pppplStack_108;
      pppplStack_e8 = (long ****)0x0;
      pppplStack_e0 = (long ****)0x0;
      pppppplVar35 = (long ******)ppppplStack_110;
      ppppplStack_f0 = &pppplStack_e8;
    }
    ppppplStack_110 = (long *****)pppppplVar35;
    ppppplVar12 = (long *****)pppplStack_e8;
    FUN_10959d330(&ppppplStack_f0);
    ppppplVar40 = ppppplStack_110;
    if ((long *****)pppplStack_100 != (long *****)0x0) {
      if (*(char *)((long)ppppplStack_110 + 0x37) < '\0') {
        ppppplVar12 = (long *****)ppppplStack_110[4];
        func_0x000107c3192c(&ppppplStack_f0,ppppplVar12,ppppplStack_110[5]);
      }
      else {
        pppplStack_e8 = ppppplStack_110[5];
        ppppplStack_f0 = (long *****)ppppplStack_110[4];
        pppplStack_e0 = ppppplStack_110[6];
      }
      ppppplVar40 = (long *****)ppppplVar40[7];
      bVar2 = (byte)((ulong)pppplStack_e0 >> 0x38);
      pppppplVar35 = (long ******)ppppplStack_f0;
      pppppplVar11 = (long ******)((long)ppppplStack_f0 + (long)pppplStack_e8);
      if (-1 < (long)pppplStack_e0) {
        pppppplVar35 = &ppppplStack_f0;
        pppppplVar11 = (long ******)((long)&ppppplStack_f0 + ((ulong)pppplStack_e0 >> 0x38));
      }
      if (pppppplVar35 != pppppplVar11) {
        do {
          uVar6 = *(undefined1 *)pppppplVar35;
          ___tolower();
          pppppplVar29 = (long ******)((long)pppppplVar35 + 1);
          *(undefined1 *)pppppplVar35 = uVar6;
          pppppplVar35 = pppppplVar29;
        } while (pppppplVar29 != pppppplVar11);
        bVar2 = (byte)((ulong)pppplStack_e0 >> 0x38);
      }
      uVar13 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        pppppplVar35 = (long ******)ppppplStack_f0;
        if ((long *****)pppplStack_e8 == (long *****)0x6) goto LAB_10959c6b8;
        puVar7 = (undefined8 *)param_1[3];
        puVar17 = (undefined8 *)param_1[4];
        if (puVar17 <= puVar7) goto LAB_10959c750;
LAB_10959c730:
        func_0x000107c3192c(puVar7,ppppplStack_f0,pppplStack_e8);
LAB_10959c73c:
        *(undefined4 *)(puVar7 + 3) = 0;
        pppplVar9 = (long ****)(puVar7 + 4);
        param_1[3] = pppplVar9;
      }
      else {
        if (uVar13 == 6) {
          pppppplVar35 = &ppppplStack_f0;
LAB_10959c6b8:
          if (*(int *)pppppplVar35 == 0x6f646e69 && *(short *)((long)pppppplVar35 + 4) == 0x726f) {
            *(undefined1 *)(param_1 + 0xf) = 1;
          }
          puVar7 = (undefined8 *)param_1[3];
          puVar17 = (undefined8 *)param_1[4];
          if (puVar7 < puVar17) {
            if (-1 < (char)bVar2) goto LAB_10959c70c;
            goto LAB_10959c730;
          }
        }
        else {
          puVar7 = (undefined8 *)param_1[3];
          puVar17 = (undefined8 *)param_1[4];
          if (puVar7 < puVar17) {
LAB_10959c70c:
            puVar7[2] = pppplStack_e0;
            puVar7[1] = pppplStack_e8;
            *puVar7 = ppppplStack_f0;
            goto LAB_10959c73c;
          }
        }
LAB_10959c750:
        lVar24 = (long)puVar7 - *plVar27;
        pppplVar9 = (long ****)((lVar24 >> 5) + 1);
        if ((ulong)pppplVar9 >> 0x3b != 0) {
          FUN_10959bf08();
          goto LAB_10959cf5c;
        }
        uVar18 = (long)puVar17 - *plVar27;
        pppplVar21 = (long ****)((long)uVar18 >> 4);
        if (pppplVar21 <= pppplVar9) {
          pppplVar21 = pppplVar9;
        }
        if (0x7fffffffffffffdf < uVar18) {
          pppplVar21 = (long ****)0x7ffffffffffffff;
        }
        plStack_130 = plVar27;
        if (pppplVar21 == (long ****)0x0) {
          ppppplVar12 = (long *****)0x0;
        }
        else {
          FUN_10959bf1c();
          uVar13 = (uint)(byte)((ulong)pppplStack_e0 >> 0x38);
        }
        pppplVar9 = (long ****)((long)pppplVar21 + lVar24);
        ppppplStack_138 = (long *****)(pppplVar21 + (long)ppppplVar12 * 4);
        pppplStack_150 = pppplVar21;
        pppplStack_148 = pppplVar9;
        uStack_140 = (long *****)pppplVar9;
        if (uVar13 >> 7 == 0) {
          pppplVar9[2] = (long ***)pppplStack_e0;
          pppplVar9[1] = (long ***)pppplStack_e8;
          *pppplVar9 = (long ***)ppppplStack_f0;
        }
        else {
          func_0x000107c3192c(pppplVar9,ppppplStack_f0,pppplStack_e8);
        }
        ppppplVar12 = ppppplStack_138;
        *(undefined4 *)(pppplVar9 + 3) = 0;
        pppplVar9 = (long ****)(uStack_140 + 4);
        lVar24 = (long)pppplStack_148 + (param_1[2] - param_1[3]);
        func_0x00010959bf50(param_1[2],param_1[3],lVar24);
        pppplStack_150 = (long ****)param_1[2];
        param_1[2] = lVar24;
        param_1[3] = pppplVar9;
        ppppplStack_138 = (long *****)param_1[4];
        param_1[4] = ppppplVar12;
        pppplStack_148 = pppplStack_150;
        uStack_140 = (long *****)pppplStack_150;
        func_0x00010959bfc8(&pppplStack_150);
      }
      param_1[3] = pppplVar9;
      puVar7 = (undefined8 *)param_1[6];
      if (puVar7 < (undefined8 *)param_1[7]) {
        puVar25 = puVar7 + 1;
        *puVar7 = ppppplVar40;
      }
      else {
        lVar24 = (long)puVar7 - param_1[5];
        uVar18 = (lVar24 >> 3) + 1;
        if (uVar18 >> 0x3d != 0) {
          FUN_1092d2ba8();
          goto LAB_10959cf5c;
        }
        uVar15 = (long)param_1[7] - param_1[5];
        uVar19 = (long)uVar15 >> 2;
        if (uVar19 <= uVar18) {
          uVar19 = uVar18;
        }
        if (0x7ffffffffffffff7 < uVar15) {
          uVar19 = 0x1fffffffffffffff;
        }
        puVar7 = param_1 + 5;
        FUN_1092d2bbc();
        lVar32 = param_1[5];
        puVar17 = (undefined8 *)((long)puVar7 + lVar24);
        lVar36 = (long)puVar17 - (param_1[6] - lVar32);
        puVar25 = puVar17 + 1;
        *puVar17 = ppppplVar40;
        _memcpy(lVar36,lVar32);
        lVar24 = param_1[5];
        param_1[5] = lVar36;
        param_1[6] = puVar25;
        param_1[7] = puVar7 + uVar19;
        if (lVar24 != 0) {
          __ZdlPv();
        }
      }
      param_1[6] = puVar25;
      if ((long)pppplStack_e0 < 0) {
        __ZdlPv(ppppplStack_f0);
      }
    }
    FUN_10959d330(&ppppplStack_110,pppplStack_108);
    FUN_109386b30(&pplStack_a0);
  } while( true );
}



/* Entry: 10959d258; end: 10959d2ab;  */

void FUN_10959d258(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10959d2ac; end: 10959d32f;  */

long * FUN_10959d2ac(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c2abd4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10959d318;
    }
    plVar2 = plVar4 + 4;
    func_0x000107c2abd4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10959d318:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10959d330; end: 10959d37f;  */

void FUN_10959d330(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10959d330(param_1,*param_2);
    FUN_10959d330(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      __ZdlPv(param_2[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10959d380; end: 10959d67f;  */

long * FUN_10959d380(long *param_1,long param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long lVar18;
  long *plVar19;
  undefined4 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar21 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != lVar21) {
    uVar12 = *(ulong *)(param_2 + 0x20);
    uVar7 = uVar12 >> 7 & 0x1fffffffffffff8;
    plVar19 = (long *)(lVar21 + uVar7);
    puVar20 = (undefined4 *)(*plVar19 + (uVar12 & 0x3ff) * 4);
    uVar4 = *(long *)(param_2 + 0x28) + uVar12;
    uVar9 = uVar4 >> 7 & 0x1fffffffffffff8;
    uVar4 = uVar4 & 0x3ff;
    if (((undefined4 *)(*(long *)(lVar21 + uVar9) + uVar4 * 4) != puVar20) &&
       (lVar21 = (uVar4 | (uVar9 - uVar7) * 0x80) - (uVar12 & 0x3ff), lVar21 != 0)) {
      uVar4 = lVar21 + 1U >> 10;
      if ((lVar21 + 1U & 0x3ff) != 0) {
        uVar4 = uVar4 + 1;
      }
      if (lVar21 == -1) {
        puVar10 = (undefined4 *)0x0;
        lVar5 = 0;
        plVar8 = (long *)0x0;
        lVar21 = -1;
      }
      else {
        plVar11 = param_1;
        uVar12 = uVar4;
        plStack_50 = param_1;
        FUN_1094f3570();
        plStack_58 = plVar11 + uVar12;
        lVar18 = -uVar4;
        plStack_70 = plVar11;
        plStack_68 = plVar11;
        plStack_60 = plVar11;
        do {
          uVar3 = 0x1000;
          __Znwm();
          uStack_78 = uVar3;
          FUN_1094f3364(&plStack_70,&uStack_78);
          bVar2 = lVar18 != -1;
          lVar18 = lVar18 + 1;
        } while (bVar2);
        lVar5 = param_1[2];
        lVar18 = -7 - lVar5;
        while (plVar11 = plStack_60, lVar6 = param_1[1], lVar5 != lVar6) {
          lVar5 = lVar5 + -8;
          lVar18 = lVar18 + 8;
          FUN_1094f3468(&plStack_70,lVar5);
        }
        plVar8 = (long *)*param_1;
        lVar23 = param_1[3];
        lVar22 = param_1[2];
        param_1[1] = (long)plStack_68;
        *param_1 = (long)plStack_70;
        param_1[3] = (long)plStack_58;
        param_1[2] = (long)plStack_60;
        plStack_60 = (long *)lVar22;
        if (lVar5 != lVar22) {
          plStack_60 = (long *)(lVar22 + (-(lVar22 + lVar18) & 0xfffffffffffffff8U));
        }
        if (plVar8 == (long *)0x0) {
          lVar18 = param_1[4];
        }
        else {
          plStack_70 = plVar8;
          plStack_68 = (long *)lVar6;
          plStack_58 = (long *)lVar23;
          __ZdlPv();
          lVar18 = param_1[4];
          plStack_68 = (long *)param_1[1];
          plVar11 = (long *)param_1[2];
        }
        lVar5 = param_1[5];
        plVar8 = plStack_68 + ((ulong)(lVar18 + lVar5) >> 10);
        if (plVar11 == plStack_68) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          puVar10 = (undefined4 *)(*plVar8 + (lVar18 + lVar5 & 0x3ffU) * 4);
        }
      }
      uVar4 = lVar21 + ((long)puVar10 - *plVar8 >> 2);
      if ((long)uVar4 < 1) {
        uVar12 = 0x3ff - uVar4;
        uVar4 = (ulong)~(uint)uVar12;
        lVar21 = (uVar12 >> 10) * -8;
      }
      else {
        lVar21 = (uVar4 >> 10) * 8;
      }
      plVar11 = (long *)((long)plVar8 + lVar21);
      puVar1 = (undefined4 *)(*plVar11 + (uVar4 & 0x3ff) * 4);
      if (puVar10 != puVar1) {
        do {
          puVar13 = puVar1;
          if (plVar8 != plVar11) {
            puVar13 = (undefined4 *)(*plVar8 + 0x1000);
          }
          puVar14 = puVar10;
          if (puVar10 != puVar13) {
            puVar15 = (undefined4 *)*plVar19;
            puVar16 = puVar10;
            do {
              puVar14 = puVar20 + 1;
              puVar17 = puVar16 + 1;
              *puVar16 = *puVar20;
              puVar20 = puVar14;
              if ((long)puVar14 - (long)puVar15 == 0x1000) {
                plVar19 = plVar19 + 1;
                puVar15 = (undefined4 *)*plVar19;
                puVar20 = puVar15;
              }
              puVar14 = puVar13;
              puVar16 = puVar17;
            } while (puVar17 != puVar13);
          }
          lVar5 = lVar5 + ((long)puVar14 - (long)puVar10 >> 2);
          if (plVar8 == plVar11) break;
          plVar8 = plVar8 + 1;
          puVar10 = (undefined4 *)*plVar8;
        } while (puVar10 != puVar1);
        param_1[5] = lVar5;
      }
    }
  }
  return param_1;
}



/* Entry: 10959d680; end: 10959d693;  */

long * FUN_10959d680(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x40;
    FUN_1094f2ba0(lVar3 + -0x38);
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10959d694; end: 10959d723;  */

long * FUN_10959d694(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x40;
    FUN_1094f2ba0(lVar2 + -0x38);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10959d724; end: 10959d78f;  */

void FUN_10959d724(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lVar1 = param_1[1];
    if (param_1[1] != lVar2) {
      do {
        lVar3 = lVar1 + -0x40;
        FUN_1094f2ba0(lVar1 + -0x38);
        lVar1 = lVar3;
      } while (lVar3 != lVar2);
      lVar3 = *param_1;
    }
    param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10959d790; end: 10959d7e7;  */

void FUN_10959d790(long param_1)

{
  func_0x000107c27bf0(param_1 + 0x60,*(undefined8 *)(param_1 + 0x68));
  FUN_10959d724(param_1 + 0x48);
  func_0x00010959d6e4(param_1 + 0x40,0);
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  FUN_10959c0cc(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10959d7e8; end: 10959d83b;  */

char * FUN_10959d7e8(long param_1)

{
  if (*(char *)(param_1 + 0x27) < '\0') {
    if (*(long *)(param_1 + 0x18) != 0) {
      return *(char **)(param_1 + 0x10);
    }
  }
  else if (*(char *)(param_1 + 0x27) != '\0') {
    return (char *)(param_1 + 0x10);
  }
  if (*(uint *)(param_1 + 8) < 7) {
    return (&PTR_DAT_110afda50)[*(uint *)(param_1 + 8)];
  }
  return "Unknown error";
}



/* Entry: 10959d83c; end: 10959d84f;  */

void FUN_10959d83c(void)

{
  FUN_10959d850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10959d850; end: 10959d89b;  */

void FUN_10959d850(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afda20;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 10959d89c; end: 10959dab7;  */

undefined1 *
FUN_10959d89c(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x405fc00000000000;
  *(undefined8 *)(param_1 + 8) = 0x405fc00000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x405fc00000000000;
  *(undefined8 *)(param_1 + 0x30) = 0x800000080;
  *(undefined8 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x40) = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x68,*param_4,param_4[1]);
  }
  else {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    *(undefined8 *)(param_1 + 0x78) = param_4[2];
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    *(undefined8 *)(param_1 + 0x68) = uVar1;
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 **)(param_1 + 0xb8) = param_1 + 0xc0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined1 **)(param_1 + 0x118) = param_1 + 0xe0;
  *(undefined1 **)(param_1 + 0x120) = param_1 + 0x128;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined1 **)(param_1 + 0x178) = param_1 + 0x140;
  *(undefined1 **)(param_1 + 0x180) = param_1 + 0x188;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1b4) = 0;
  *(undefined8 *)(param_1 + 0x1ac) = 0;
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined8 *)(param_1 + 0x1bc) = 0;
  *(undefined8 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x19c) = 0;
  *(undefined1 **)(param_1 + 0x1d8) = param_1 + 0x1a0;
  *(undefined1 **)(param_1 + 0x1e0) = param_1 + 0x1e8;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x214) = 0;
  *(undefined8 *)(param_1 + 0x20c) = 0;
  *(undefined8 *)(param_1 + 0x224) = 0;
  *(undefined8 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(param_1 + 0x204) = 0;
  *(undefined8 *)(param_1 + 0x1fc) = 0;
  *(undefined1 **)(param_1 + 0x238) = param_1 + 0x200;
  *(undefined1 **)(param_1 + 0x240) = param_1 + 0x248;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  FUN_10959dab8(param_1,param_3);
  return param_1;
}



/* Entry: 10959dab8; end: 10959dbab;  */

/* WARNING: Removing unreachable block (ram,0x00010959dd0c) */

long * FUN_10959dab8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 *param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *extraout_x8;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  undefined1 uStack_f2;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined2 uStack_d8;
  undefined4 uStack_d6;
  undefined1 uStack_d2;
  undefined2 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined1 uStack_c2;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  uVar8 = param_2[1];
  uVar5 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar8;
  *param_1 = uVar5;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  param_1[5] = param_2[5];
  uVar8 = param_2[7];
  uVar5 = param_2[6];
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  param_1[7] = uVar8;
  param_1[6] = uVar5;
  plVar3 = param_1 + 9;
  param_2 = param_2 + 9;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar3);
  if (*(float *)((long)param_1 + 0x3c) < 0.0) {
    puVar4 = &UNK_10f574de8;
    FUN_1095a0000();
    pcStack_28 = FUN_10959dbac;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plStack_110 = (long *)0x0;
    plStack_108 = (long *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0x3f800000;
    uStack_f4 = 0;
    uStack_e8 = 0;
    lStack_e0 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0x200;
    uStack_d6 = 0;
    uStack_d2 = 0;
    uStack_d0 = 1;
    uStack_cc = 0;
    uStack_c8 = 0x10000;
    uStack_c4 = 0x100;
    uStack_c2 = 1;
    uStack_c0 = 0x1000000;
    uStack_bc = 1;
    uStack_b8 = 0x100;
    uStack_b0 = 100000;
    uStack_a8 = 0;
    uStack_a4 = 1;
    uStack_a0 = 0;
    uStack_f2 = *(undefined1 *)((long)param_2 + 0x41);
    puStack_30 = &stack0xfffffffffffffff0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_f0,param_2 + 9)
    ;
    uVar5 = 0x80;
    __Znwm();
    func_0x000109cda3ec();
    *extraout_x8 = uVar5;
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_90,*param_5,param_5[1]);
    }
    else {
      uStack_88 = param_5[1];
      uStack_90 = *param_5;
      uStack_80 = param_5[2];
    }
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    func_0x000107c2ac94(&uStack_128,&uStack_90,&lStack_78,1);
    puVar2 = &uStack_128;
    uVar8 = param_3;
    func_0x000109cdaaf8(uVar5,puVar4,param_3,param_4,puVar2);
    puStack_98 = &uStack_128;
    func_0x000104c607c8(&puStack_98);
    if (lStack_e0 < 0) {
      __ZdlPv(uStack_f0);
    }
    plVar3 = plStack_110;
    if (plStack_110 != (long *)0x0) {
      plStack_108 = plStack_110;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return plVar3;
    }
    ___stack_chk_fail();
    uVar5 = 0;
    FUN_10938cda4(extraout_x8,0);
    func_0x000105673ce8(&plStack_110);
    plVar6 = plVar3;
    __Unwind_Resume(plVar3);
    pcStack_138 = FUN_10959ddd0;
    puStack_160 = puVar4;
    uStack_158 = param_3;
    plStack_150 = plVar3;
    ppuStack_140 = &puStack_30;
    FUN_10959dbac(&lStack_168,uVar5,uVar8,param_4,puVar2,param_6);
    FUN_10959d89c(plVar6,&lStack_168,uVar8,param_6);
    lVar1 = lStack_168;
    lStack_168 = 0;
    if (lVar1 != 0) {
      func_0x000109cda590();
      __ZdlPv();
    }
    return plVar6;
  }
  if (*(int *)((long)param_1 + 4) == 1) {
    puVar2 = (undefined8 *)0x30;
    __Znwm();
    uVar7 = *(undefined4 *)(param_1 + 7);
    *puVar2 = &PTR_FUN_110afdae8;
    uVar5 = param_1[1];
    puVar2[2] = param_1[2];
    puVar2[1] = uVar5;
    uVar5 = param_1[3];
    puVar2[4] = param_1[4];
    puVar2[3] = uVar5;
    *(undefined4 *)(puVar2 + 5) = uVar7;
  }
  else {
    if (*(int *)((long)param_1 + 4) != 0) {
      return plVar3;
    }
    puVar2 = (undefined8 *)0x28;
    __Znwm();
    *puVar2 = &PTR_FUN_110afda98;
    uVar5 = param_1[1];
    puVar2[2] = param_1[2];
    puVar2[1] = uVar5;
    uVar5 = param_1[3];
    puVar2[4] = param_1[4];
    puVar2[3] = uVar5;
  }
  plVar3 = (long *)param_1[0x13];
  param_1[0x13] = puVar2;
  if (plVar3 == (long *)0x0) {
    return (long *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010959db90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))();
  return plVar3;
}



/* Entry: 10959dbac; end: 10959ddcf;  */

/* WARNING: Removing unreachable block (ram,0x00010959dd0c) */

long FUN_10959dbac(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined1 uStack_d2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined2 uStack_b8;
  undefined4 uStack_b6;
  undefined1 uStack_b2;
  undefined2 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined1 uStack_a2;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_f0 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0x3f800000;
  uStack_d4 = 0;
  uStack_c8 = 0;
  lStack_c0 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0x200;
  uStack_b6 = 0;
  uStack_b2 = 0;
  uStack_b0 = 1;
  uStack_ac = 0;
  uStack_a8 = 0x10000;
  uStack_a4 = 0x100;
  uStack_a2 = 1;
  uStack_a0 = 0x1000000;
  uStack_9c = 1;
  uStack_98 = 0x100;
  uStack_90 = 100000;
  uStack_88 = 0;
  uStack_84 = 1;
  uStack_80 = 0;
  uStack_d2 = *(undefined1 *)(param_3 + 0x41);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&uStack_d0,param_3 + 0x48);
  uVar1 = 0x80;
  __Znwm();
  func_0x000109cda3ec();
  *param_1 = uVar1;
  if (*(char *)((long)param_6 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_70,*param_6,param_6[1]);
  }
  else {
    uStack_68 = param_6[1];
    uStack_70 = *param_6;
    uStack_60 = param_6[2];
  }
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  func_0x000107c2ac94(&uStack_108,&uStack_70,&lStack_58,1);
  puVar5 = &uStack_108;
  uVar4 = param_4;
  func_0x000109cdaaf8(uVar1,param_2,param_4,param_5,puVar5);
  puStack_78 = &uStack_108;
  func_0x000104c607c8(&puStack_78);
  if (lStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  lVar2 = lStack_f0;
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    uVar1 = 0;
    FUN_10938cda4(param_1,0);
    func_0x000105673ce8(&lStack_f0);
    lVar3 = lVar2;
    __Unwind_Resume(lVar2);
    pcStack_118 = FUN_10959ddd0;
    uStack_140 = param_2;
    uStack_138 = param_4;
    lStack_130 = lVar2;
    puStack_128 = param_1;
    puStack_120 = &stack0xfffffffffffffff0;
    FUN_10959dbac(&lStack_148,uVar1,uVar4,param_5,puVar5,param_7);
    FUN_10959d89c(lVar3,&lStack_148,uVar4,param_7);
    lVar2 = lStack_148;
    lStack_148 = 0;
    if (lVar2 != 0) {
      func_0x000109cda590();
      __ZdlPv();
    }
    return lVar3;
  }
  return lVar2;
}



/* Entry: 10959ddd0; end: 10959de6b;  */

undefined8
FUN_10959ddd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lStack_38;
  
  FUN_10959dbac(&lStack_38,param_2,param_3,param_4,param_5,param_6);
  FUN_10959d89c(param_1,&lStack_38,param_3,param_6);
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    func_0x000109cda590();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10959de6c; end: 10959e08f;  */

/* WARNING: Removing unreachable block (ram,0x00010959dfcc) */

long FUN_10959de6c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined1 uStack_d2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined2 uStack_b8;
  undefined4 uStack_b6;
  undefined1 uStack_b2;
  undefined2 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined1 uStack_a2;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_f0 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0x3f800000;
  uStack_d4 = 0;
  uStack_c8 = 0;
  lStack_c0 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0x200;
  uStack_b6 = 0;
  uStack_b2 = 0;
  uStack_b0 = 1;
  uStack_ac = 0;
  uStack_a8 = 0x10000;
  uStack_a4 = 0x100;
  uStack_a2 = 1;
  uStack_a0 = 0x1000000;
  uStack_9c = 1;
  uStack_98 = 0x100;
  uStack_90 = 100000;
  uStack_88 = 0;
  uStack_84 = 1;
  uStack_80 = 0;
  uStack_d2 = *(undefined1 *)(param_3 + 0x41);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&uStack_d0,param_3 + 0x48);
  uVar1 = 0x80;
  __Znwm();
  func_0x000109cda3ec();
  *param_1 = uVar1;
  if (*(char *)((long)param_6 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_70,*param_6,param_6[1]);
  }
  else {
    uStack_68 = param_6[1];
    uStack_70 = *param_6;
    uStack_60 = param_6[2];
  }
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  func_0x000107c2ac94(&uStack_108,&uStack_70,&lStack_58,1);
  puVar5 = &uStack_108;
  uVar4 = param_4;
  func_0x000109cdacb8(uVar1,param_2,param_4,param_5,puVar5);
  puStack_78 = &uStack_108;
  func_0x000104c607c8(&puStack_78);
  if (lStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  lVar2 = lStack_f0;
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    uVar1 = 0;
    FUN_10938cda4(param_1,0);
    func_0x000105673ce8(&lStack_f0);
    lVar3 = lVar2;
    __Unwind_Resume(lVar2);
    pcStack_118 = FUN_10959e090;
    uStack_140 = param_2;
    uStack_138 = param_4;
    lStack_130 = lVar2;
    puStack_128 = param_1;
    puStack_120 = &stack0xfffffffffffffff0;
    FUN_10959de6c(&lStack_148,uVar1,uVar4,param_5,puVar5,param_7);
    FUN_10959d89c(lVar3,&lStack_148,uVar4,param_7);
    lVar2 = lStack_148;
    lStack_148 = 0;
    if (lVar2 != 0) {
      func_0x000109cda590();
      __ZdlPv();
    }
    return lVar3;
  }
  return lVar2;
}



/* Entry: 10959e090; end: 10959e12b;  */

undefined8
FUN_10959e090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lStack_38;
  
  FUN_10959de6c(&lStack_38,param_2,param_3,param_4,param_5,param_6);
  FUN_10959d89c(param_1,&lStack_38,param_3,param_6);
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    func_0x000109cda590();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10959e12c; end: 10959e3af;  */

long FUN_10959e12c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x230) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x230) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1f8);
    }
  }
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (0 < *(int *)(param_1 + 0x1fc)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x238);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x1fc));
  }
  lVar6 = *(long *)(param_1 + 0x240);
  if (lVar6 != param_1 + 0x248 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  if (*(long *)(param_1 + 0x1d0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x1d0) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x198);
    }
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (0 < *(int *)(param_1 + 0x19c)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x1d8);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x19c));
  }
  lVar6 = *(long *)(param_1 + 0x1e0);
  if (lVar6 != param_1 + 0x1e8 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x170) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x138);
    }
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (0 < *(int *)(param_1 + 0x13c)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x178);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x13c));
  }
  lVar6 = *(long *)(param_1 + 0x180);
  if (lVar6 != param_1 + 0x188 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x110) + 0x14);
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
      func_0x000109a848d4(param_1 + 0xd8);
    }
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (0 < *(int *)(param_1 + 0xdc)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x118);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0xdc));
  }
  lVar6 = *(long *)(param_1 + 0x120);
  if (lVar6 != param_1 + 0x128 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  func_0x00010959ffc0(*(undefined8 *)(param_1 + 0xc0));
  FUN_10959fc74(param_1 + 0xa0);
  plVar5 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x80);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  FUN_10938cda4(param_1 + 0x60,0);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  return param_1;
}



/* Entry: 10959e3b0; end: 10959eaa3;  */

void FUN_10959e3b0(char *param_1,long param_2)

{
  char *pcVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  code *pcVar10;
  undefined1 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  uint *puVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  int *piVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  undefined8 uStack_3a8;
  undefined4 auStack_3a0 [2];
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined4 auStack_388 [2];
  undefined8 *puStack_380;
  undefined8 uStack_378;
  long lStack_370;
  long lStack_368;
  uint *puStack_360;
  uint *puStack_358;
  undefined1 **ppuStack_350;
  undefined8 uStack_348;
  undefined1 *puStack_2d0;
  code *pcStack_2c8;
  undefined1 auStack_2b8 [8];
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  undefined4 uStack_2a4;
  long lStack_298;
  undefined1 auStack_268 [40];
  uint auStack_240 [20];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  uint uStack_1d8;
  int iStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  long lStack_1a0;
  undefined4 *puStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 auStack_178 [2];
  char *pcStack_170;
  undefined8 uStack_168;
  int iStack_160;
  int iStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 auStack_148 [2];
  uint *puStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  int iStack_12c;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_128 = &uStack_1d8;
  iVar4 = *(int *)(param_2 + 8);
  iVar5 = *(int *)(param_2 + 0xc);
  uStack_1d8 = 0x42ff0000;
  puStack_198 = &uStack_1d0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  iStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1ac = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  lStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_130 = 0x2010000;
  lStack_120 = 0;
  puStack_190 = &uStack_188;
  FUN_109a41858(0x3ff0000000000000,0,param_2,&uStack_130,5);
  iStack_1e0 = (uStack_1d8 >> 3 & 0x1ff) + 1;
  uStack_1e8 = NEON_rev64(CONCAT44(uStack_1cc,uStack_1d0),4);
  uStack_1dc = 1;
  uStack_1f0 = 0x100000001;
  func_0x000109d0f600(auStack_240,&uStack_1e8,&uStack_1f0,CONCAT44(uStack_1c4,uStack_1c8));
  func_0x000109cdb2c4(auStack_268,*(undefined8 *)(param_1 + 0x60),auStack_240,1);
  puVar11 = auStack_268;
  FUN_10938e710(puVar11,param_1 + 0x68);
  if (puVar11 == (undefined1 *)0x0) {
    FUN_109262df8(&UNK_10f639994);
    goto LAB_10959e9d8;
  }
  func_0x000109d0e828(auStack_2b8,puVar11 + 0x28,&uStack_1f0,0);
  uVar9 = iStack_2a8 * 8 - 3;
  uVar3 = uVar9 & 0xfff;
  uStack_130 = uVar3 | 0x42ff0000;
  iStack_12c = 2;
  puStack_f0 = &uStack_128;
  uStack_128 = (uint *)CONCAT44(iStack_2b0,iStack_2ac);
  lStack_120 = lStack_298;
  lStack_118 = lStack_298;
  lStack_108 = 0;
  lStack_110 = 0;
  lStack_f8 = 0;
  uStack_100 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  plStack_e8 = &lStack_e0;
  if ((lStack_298 == 0) && ((long)iStack_2b0 * (long)iStack_2ac != 0)) {
    puVar13 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar13 = 1;
    uStack_d0 = puVar13 + 1;
    uStack_c8 = (uint *)0x1c;
    *(undefined1 *)(puVar13 + 8) = 0;
    *(undefined8 *)(puVar13 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar13 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar13 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar13 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&uStack_d0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
    goto LAB_10959e9d8;
  }
  uVar9 = (uVar9 >> 1 & 0x7fc) + 4;
  uStack_d8 = (ulong)uVar9;
  lStack_e0 = (long)(int)uVar9 * (long)iStack_2b0;
  uStack_130 = uVar3 | 0x42ff4000;
  lStack_110 = lStack_298 + lStack_e0 * iStack_2ac;
  lStack_108 = lStack_110;
  if (*param_1 == '\x01') {
    uStack_d0 = (undefined4 *)CONCAT44(uStack_d0._4_4_,0x1010000);
    puStack_140 = &uStack_130;
    uStack_c0 = 0;
    auStack_148[0] = 0x2010000;
    uStack_138 = 0;
    iStack_160 = iVar5;
    iStack_15c = iVar4;
    uStack_c8 = puStack_140;
    FUN_109b0f718(0,0,&uStack_d0,auStack_148,&iStack_160,1);
  }
  iVar6 = *(int *)(param_1 + 0x28);
  if ((0 < iVar6) || (0 < *(int *)(param_1 + 0x2c))) {
    if (iVar5 <= uStack_128._4_4_ - iVar6) {
      if (iVar4 <= (int)uStack_128 - *(int *)(param_1 + 0x2c)) {
        uStack_158 = (char *)CONCAT44(iVar4,iVar5);
        puVar12 = (uint *)&uStack_d0;
        iStack_160 = iVar6;
        iStack_15c = *(int *)(param_1 + 0x2c);
        FUN_109a852c8(puVar12,&uStack_130,&iStack_160);
        auStack_148[0] = 0x2010000;
        puStack_140 = (uint *)(param_1 + 0x1f8);
        uStack_138 = 0;
        FUN_109a479a0();
        if (lStack_98 != 0) {
          piVar23 = (int *)(lStack_98 + 0x14);
          do {
            iVar6 = *piVar23;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar8) {
              *piVar23 = iVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar6 + -1 == 0) {
            puVar12 = (uint *)&uStack_d0;
            func_0x000109a848d4(puVar12);
          }
        }
        lStack_98 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        if (0 < uStack_d0._4_4_) {
          lVar21 = 0;
          do {
            *(undefined4 *)(lStack_90 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < uStack_d0._4_4_);
        }
        if (puStack_88 != auStack_80 && puStack_88 != (undefined1 *)0x0) {
          puVar12 = *(uint **)(puStack_88 + -8);
          _free(puVar12);
        }
        goto LAB_10959e6a4;
      }
    }
    FUN_1095a0000(&UNK_10f574e0c);
LAB_10959e9d8:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10959e9dc);
    (*pcVar10)();
  }
  uStack_d0 = (undefined4 *)CONCAT44(uStack_d0._4_4_,0x2010000);
  uStack_c8 = (uint *)(param_1 + 0x1f8);
  uStack_c0 = 0;
  puVar12 = &uStack_130;
  FUN_109a479a0(puVar12,&uStack_d0);
LAB_10959e6a4:
  if (0.0 < *(float *)(param_1 + 0x3c)) {
    puVar18 = (uint *)(param_1 + 0x198);
    if (*(long *)(param_1 + 0x1a8) != 0) {
      uVar22 = (ulong)*(uint *)(param_1 + 0x19c);
      if ((int)*(uint *)(param_1 + 0x19c) < 3) {
        lVar21 = (long)*(int *)(param_1 + 0x1a4) * (long)*(int *)(param_1 + 0x1a0);
      }
      else {
        lVar21 = 1;
        piVar23 = *(int **)(param_1 + 0x1d8);
        do {
          lVar21 = lVar21 * *piVar23;
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 1;
        } while (uVar22 != 0);
      }
      if (lVar21 != 0) {
        piVar23 = *(int **)(param_1 + 0x1d8);
        uVar3 = piVar23[-1];
        uVar22 = (ulong)uVar3;
        piVar24 = *(int **)(param_1 + 0x238);
        if (uVar3 == piVar24[-1]) {
          if (uVar3 == 2) {
            if ((*piVar23 != *piVar24) || (piVar23[1] != piVar24[1])) goto LAB_10959e734;
          }
          else if (0 < (int)uVar3) {
            do {
              if (*piVar23 != *piVar24) goto LAB_10959e734;
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 1;
              piVar24 = piVar24 + 1;
            } while (uVar22 != 0);
          }
          pcVar1 = param_1 + 0x1f8;
          uStack_138 = 0;
          auStack_148[0] = 0x1010000;
          uStack_d0 = (undefined4 *)(double)*(float *)(param_1 + 0x3c);
          uStack_150 = 0;
          iStack_160 = 0x1010000;
          auStack_178[0] = 0x2010000;
          uStack_168 = 0;
          uStack_c8 = (uint *)(1.0 - (double)uStack_d0);
          uStack_c0 = 0;
          pcStack_170 = pcVar1;
          uStack_158 = pcVar1;
          puStack_140 = puVar18;
          FUN_109a91d90();
          FUN_109a293c4(auStack_148,&iStack_160,auStack_178,puVar12,0xffffffff,&PTR_FUN_1132e8d50,1,
                        &uStack_d0);
          uStack_d0 = (undefined4 *)CONCAT44(uStack_d0._4_4_,0x2010000);
          uStack_c0 = 0;
          uStack_c8 = puVar18;
          FUN_109a479a0(pcVar1,&uStack_d0);
          goto LAB_10959e74c;
        }
      }
    }
LAB_10959e734:
    uStack_d0 = (undefined4 *)CONCAT44(uStack_d0._4_4_,0x2010000);
    uStack_c0 = 0;
    uStack_c8 = puVar18;
    FUN_109a479a0(param_1 + 0x1f8,&uStack_d0);
  }
LAB_10959e74c:
  uStack_d0 = (undefined4 *)CONCAT44(iVar4,uStack_2a4);
  uStack_c8 = (uint *)CONCAT44((uStack_130 >> 3 & 0x1ff) + 1,iVar5);
  plVar20 = &uStack_d0;
  puVar15 = &uStack_c0;
  FUN_1092c5f10(param_1 + 0x80,plVar20,puVar15,4);
  if (lStack_f8 != 0) {
    piVar23 = (int *)(lStack_f8 + 0x14);
    do {
      iVar4 = *piVar23;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar8) {
        *piVar23 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_130);
    }
  }
  lStack_f8 = 0;
  lStack_118 = 0;
  lStack_120 = 0;
  lStack_108 = 0;
  lStack_110 = 0;
  if (0 < iStack_12c) {
    lVar21 = 0;
    do {
      *(undefined4 *)((long)puStack_f0 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < iStack_12c);
  }
  if (plStack_e8 != &lStack_e0 && plStack_e8 != (long *)0x0) {
    _free(plStack_e8[-1]);
  }
  func_0x000105675c90(auStack_2b8);
  func_0x000109379fe8(auStack_268);
  puVar12 = auStack_240;
  func_0x000105675c90();
  if (lStack_1a0 != 0) {
    piVar23 = (int *)(lStack_1a0 + 0x14);
    do {
      iVar4 = *piVar23;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar8) {
        *piVar23 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar4 + -1 == 0) {
      puVar12 = &uStack_1d8;
      func_0x000109a848d4();
    }
  }
  lStack_1a0 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  if (0 < iStack_1d4) {
    lVar21 = 0;
    do {
      puStack_198[lVar21] = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < iStack_1d4);
  }
  if (puStack_190 != &uStack_188 && puStack_190 != (undefined8 *)0x0) {
    puVar12 = (uint *)puStack_190[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_130);
  func_0x000105675c90(auStack_2b8);
  func_0x000109379fe8(auStack_268);
  func_0x000105675c90(auStack_240);
  func_0x00010567aa40(&uStack_1d8);
  __Unwind_Resume();
  pcStack_2c8 = FUN_10959eaa4;
  uVar22 = plVar20[1] - *plVar20 >> 2;
  lVar21 = *(long *)(puVar12 + 0x28);
  lVar27 = *(long *)(puVar12 + 0x2a);
  lVar29 = lVar27 - lVar21;
  uVar31 = lVar29 >> 4;
  puStack_2d0 = &stack0xfffffffffffffff0;
  if (uVar31 < uVar22) {
    uVar32 = uVar22 - uVar31;
    if ((ulong)(*(long *)(puVar12 + 0x2c) - lVar27 >> 4) < uVar32) {
      puVar18 = puVar12;
      if (uVar22 >> 0x3c == 0) {
        uVar25 = *(long *)(puVar12 + 0x2c) - lVar21;
        uVar26 = (long)uVar25 >> 3;
        if (uVar26 <= uVar22) {
          uVar26 = uVar22;
        }
        if (0x7fffffffffffffef < uVar25) {
          uVar26 = 0xfffffffffffffff;
        }
        if (uVar26 >> 0x3c == 0) {
          lVar14 = uVar26 << 4;
          __Znwm();
          lVar27 = lVar14 + lVar29;
          _bzero(lVar27,uVar32 * 0x10);
          lVar30 = lVar27 + uVar31 * -0x10;
          _memcpy(lVar30,lVar21,lVar29);
          *(long *)(puVar12 + 0x28) = lVar30;
          *(ulong *)(puVar12 + 0x2a) = lVar27 + uVar32 * 0x10;
          *(ulong *)(puVar12 + 0x2c) = lVar14 + uVar26 * 0x10;
          if (lVar21 != 0) {
            __ZdlPv(lVar21);
          }
          goto LAB_10959ebc0;
        }
      }
      else {
        FUN_10959ff64();
      }
      func_0x000104c4f740();
      func_0x0001095a4a64(lVar29);
      puVar19 = puVar18;
      __Unwind_Resume();
      uStack_348 = 0x10959ee38;
      lStack_370 = lVar29;
      lStack_368 = lVar21;
      puStack_360 = puVar12;
      puStack_358 = puVar18;
      ppuStack_350 = &puStack_2d0;
      FUN_10959eaa4();
      func_0x00010959eec4(puVar19,puVar15);
      if (*(char *)((long)plVar20 + 0x24) == '\x01') {
        uStack_378 = 0;
        auStack_388[0] = 0x1010000;
        auStack_3a0[0] = 0x2010000;
        uStack_390 = 0;
        uStack_3a8 = *(undefined8 *)(puVar19 + 0x34);
        puStack_398 = puVar15;
        puStack_380 = puVar15;
        FUN_109b0f718(0,0,auStack_388,auStack_3a0,&uStack_3a8,1);
      }
      return;
    }
    _bzero(lVar27,uVar32 * 0x10);
    *(ulong *)(puVar12 + 0x2a) = lVar27 + uVar32 * 0x10;
  }
  else if (uVar22 < uVar31) {
    lVar21 = lVar21 + uVar22 * 0x10;
    while (lVar27 != lVar21) {
      lVar27 = lVar27 + -0x10;
      func_0x00010959fcd0(lVar27);
    }
    *(long *)(puVar12 + 0x2a) = lVar21;
  }
LAB_10959ebc0:
  lVar21 = *plVar20;
  if (plVar20[1] != lVar21) {
    uVar22 = 0;
    do {
      iVar4 = *(int *)(lVar21 + uVar22 * 4);
      if (iVar4 < 2) {
        if (iVar4 == 0) {
          lVar21 = plVar20[4];
          lVar27 = *(long *)(puVar12 + 0x28);
          puVar17 = (undefined8 *)0x10;
          __Znwm();
          *puVar17 = &PTR_DAT_110afddb8;
          *(int *)(puVar17 + 1) = (int)lVar21;
          puVar16 = (undefined8 *)0x20;
          __Znwm();
          puVar15 = (undefined8 *)(lVar27 + uVar22 * 0x10);
          *puVar16 = &PTR_FUN_110afdb28;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16[3] = puVar17;
          plVar28 = (long *)puVar15[1];
          *puVar15 = puVar17;
          puVar15[1] = puVar16;
          if (plVar28 != (long *)0x0) {
            plVar2 = plVar28 + 1;
            do {
              lVar21 = *plVar2;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar21 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
LAB_10959ed98:
            if (lVar21 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
            }
          }
        }
        else if (iVar4 == 1) {
          lVar21 = plVar20[3];
          fVar34 = *(float *)((long)plVar20 + 0x1c);
          lVar27 = *(long *)(puVar12 + 0x28);
          puVar15 = (undefined8 *)0x10;
          __Znwm();
          *puVar15 = &PTR_FUN_110afdd68;
          *(int *)(puVar15 + 1) = (int)lVar21;
          fVar33 = 0.0001;
          if (0.0001 <= fVar34) {
            fVar33 = fVar34;
          }
          fVar34 = 1.0;
          if (fVar33 <= 1.0) {
            fVar34 = fVar33;
          }
          *(float *)((long)puVar15 + 0xc) = fVar34;
          puVar16 = (undefined8 *)0x20;
          __Znwm();
          puVar17 = (undefined8 *)(lVar27 + uVar22 * 0x10);
          *puVar16 = &PTR_DAT_110afdba0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16[3] = puVar15;
          plVar28 = (long *)puVar17[1];
          *puVar17 = puVar15;
          puVar17[1] = puVar16;
          if (plVar28 != (long *)0x0) {
            plVar2 = plVar28 + 1;
            do {
              lVar21 = *plVar2;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar21 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            goto LAB_10959ed98;
          }
        }
      }
      else if (iVar4 == 2) {
        lVar21 = *(long *)(puVar12 + 0x28);
        puVar17 = (undefined8 *)0x8;
        __Znwm();
        *puVar17 = &PTR_DAT_110afddf8;
        puVar16 = (undefined8 *)0x20;
        __Znwm();
        puVar15 = (undefined8 *)(lVar21 + uVar22 * 0x10);
        *puVar16 = &PTR_DAT_110afdc18;
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = puVar17;
        plVar28 = (long *)puVar15[1];
        *puVar15 = puVar17;
        puVar15[1] = puVar16;
        if (plVar28 != (long *)0x0) {
          plVar2 = plVar28 + 1;
          do {
            lVar21 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar21 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          goto LAB_10959ed98;
        }
      }
      else if (iVar4 == 3) {
        lVar21 = *(long *)(puVar12 + 0x28);
        puVar17 = (undefined8 *)0x8;
        __Znwm();
        *puVar17 = &PTR_DAT_110afde38;
        puVar16 = (undefined8 *)0x20;
        __Znwm();
        puVar15 = (undefined8 *)(lVar21 + uVar22 * 0x10);
        *puVar16 = &PTR_DAT_110afdc90;
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = puVar17;
        plVar28 = (long *)puVar15[1];
        *puVar15 = puVar17;
        puVar15[1] = puVar16;
        if (plVar28 != (long *)0x0) {
          plVar2 = plVar28 + 1;
          do {
            lVar21 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar21 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          goto LAB_10959ed98;
        }
      }
      uVar22 = uVar22 + 1;
      lVar21 = *plVar20;
    } while (uVar22 < (ulong)(plVar20[1] - lVar21 >> 2));
  }
  return;
}



/* Entry: 10959eaa4; end: 10959ee37;  */

void FUN_10959eaa4(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  
  uVar9 = param_2[1] - *param_2 >> 2;
  lVar10 = *(long *)(param_1 + 0xa0);
  lVar13 = *(long *)(param_1 + 0xa8);
  lVar15 = lVar13 - lVar10;
  uVar17 = lVar15 >> 4;
  if (uVar17 < uVar9) {
    uVar18 = uVar9 - uVar17;
    if ((ulong)(*(long *)(param_1 + 0xb0) - lVar13 >> 4) < uVar18) {
      lVar13 = param_1;
      if (uVar9 >> 0x3c == 0) {
        uVar11 = *(long *)(param_1 + 0xb0) - lVar10;
        uVar12 = (long)uVar11 >> 3;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7fffffffffffffef < uVar11) {
          uVar12 = 0xfffffffffffffff;
        }
        if (uVar12 >> 0x3c == 0) {
          lVar5 = uVar12 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar15;
          _bzero(lVar13,uVar18 * 0x10);
          lVar16 = lVar13 + uVar17 * -0x10;
          _memcpy(lVar16,lVar10,lVar15);
          *(long *)(param_1 + 0xa0) = lVar16;
          *(ulong *)(param_1 + 0xa8) = lVar13 + uVar18 * 0x10;
          *(ulong *)(param_1 + 0xb0) = lVar5 + uVar12 * 0x10;
          if (lVar10 != 0) {
            __ZdlPv(lVar10);
          }
          goto LAB_10959ebc0;
        }
      }
      else {
        FUN_10959ff64();
      }
      func_0x000104c4f740();
      func_0x0001095a4a64(lVar15);
      lVar5 = lVar13;
      __Unwind_Resume();
      uStack_88 = 0x10959ee38;
      lStack_b0 = lVar15;
      lStack_a8 = lVar10;
      lStack_a0 = param_1;
      lStack_98 = lVar13;
      puStack_90 = &stack0xfffffffffffffff0;
      FUN_10959eaa4();
      func_0x00010959eec4(lVar5,param_3);
      if (*(char *)((long)param_2 + 0x24) == '\x01') {
        uStack_b8 = 0;
        auStack_c8[0] = 0x1010000;
        auStack_e0[0] = 0x2010000;
        uStack_d0 = 0;
        uStack_e8 = *(undefined8 *)(lVar5 + 0xd0);
        uStack_d8 = param_3;
        uStack_c0 = param_3;
        FUN_109b0f718(0,0,auStack_c8,auStack_e0,&uStack_e8,1);
      }
      return;
    }
    _bzero(lVar13,uVar18 * 0x10);
    *(ulong *)(param_1 + 0xa8) = lVar13 + uVar18 * 0x10;
  }
  else if (uVar9 < uVar17) {
    lVar10 = lVar10 + uVar9 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010959fcd0(lVar13);
    }
    *(long *)(param_1 + 0xa8) = lVar10;
  }
LAB_10959ebc0:
  lVar10 = *param_2;
  if (param_2[1] != lVar10) {
    uVar9 = 0;
    do {
      iVar2 = *(int *)(lVar10 + uVar9 * 4);
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          lVar10 = param_2[4];
          lVar13 = *(long *)(param_1 + 0xa0);
          puVar8 = (undefined8 *)0x10;
          __Znwm();
          *puVar8 = &PTR_DAT_110afddb8;
          *(int *)(puVar8 + 1) = (int)lVar10;
          puVar7 = (undefined8 *)0x20;
          __Znwm();
          puVar6 = (undefined8 *)(lVar13 + uVar9 * 0x10);
          *puVar7 = &PTR_FUN_110afdb28;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = puVar8;
          plVar14 = (long *)puVar6[1];
          *puVar6 = puVar8;
          puVar6[1] = puVar7;
          if (plVar14 != (long *)0x0) {
            plVar1 = plVar14 + 1;
            do {
              lVar10 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_10959ed98:
            if (lVar10 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
            }
          }
        }
        else if (iVar2 == 1) {
          lVar10 = param_2[3];
          fVar20 = *(float *)((long)param_2 + 0x1c);
          lVar13 = *(long *)(param_1 + 0xa0);
          puVar6 = (undefined8 *)0x10;
          __Znwm();
          *puVar6 = &PTR_FUN_110afdd68;
          *(int *)(puVar6 + 1) = (int)lVar10;
          fVar19 = 0.0001;
          if (0.0001 <= fVar20) {
            fVar19 = fVar20;
          }
          fVar20 = 1.0;
          if (fVar19 <= 1.0) {
            fVar20 = fVar19;
          }
          *(float *)((long)puVar6 + 0xc) = fVar20;
          puVar7 = (undefined8 *)0x20;
          __Znwm();
          puVar8 = (undefined8 *)(lVar13 + uVar9 * 0x10);
          *puVar7 = &PTR_DAT_110afdba0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = puVar6;
          plVar14 = (long *)puVar8[1];
          *puVar8 = puVar6;
          puVar8[1] = puVar7;
          if (plVar14 != (long *)0x0) {
            plVar1 = plVar14 + 1;
            do {
              lVar10 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            goto LAB_10959ed98;
          }
        }
      }
      else if (iVar2 == 2) {
        lVar10 = *(long *)(param_1 + 0xa0);
        puVar8 = (undefined8 *)0x8;
        __Znwm();
        *puVar8 = &PTR_DAT_110afddf8;
        puVar7 = (undefined8 *)0x20;
        __Znwm();
        puVar6 = (undefined8 *)(lVar10 + uVar9 * 0x10);
        *puVar7 = &PTR_DAT_110afdc18;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = puVar8;
        plVar14 = (long *)puVar6[1];
        *puVar6 = puVar8;
        puVar6[1] = puVar7;
        if (plVar14 != (long *)0x0) {
          plVar1 = plVar14 + 1;
          do {
            lVar10 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_10959ed98;
        }
      }
      else if (iVar2 == 3) {
        lVar10 = *(long *)(param_1 + 0xa0);
        puVar8 = (undefined8 *)0x8;
        __Znwm();
        *puVar8 = &PTR_DAT_110afde38;
        puVar7 = (undefined8 *)0x20;
        __Znwm();
        puVar6 = (undefined8 *)(lVar10 + uVar9 * 0x10);
        *puVar7 = &PTR_DAT_110afdc90;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = puVar8;
        plVar14 = (long *)puVar6[1];
        *puVar6 = puVar8;
        puVar6[1] = puVar7;
        if (plVar14 != (long *)0x0) {
          plVar1 = plVar14 + 1;
          do {
            lVar10 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_10959ed98;
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = *param_2;
    } while (uVar9 < (ulong)(param_2[1] - lVar10 >> 2));
  }
  return;
}



/* Entry: 10959ee38; end: 10959ef4f;  */

void FUN_10959ee38(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_68;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10959eaa4();
  func_0x00010959eec4(param_1,param_3);
  if (*(char *)(param_2 + 0x24) == '\x01') {
    uStack_38 = 0;
    auStack_48[0] = 0x1010000;
    auStack_60[0] = 0x2010000;
    uStack_50 = 0;
    uStack_68 = *(undefined8 *)(param_1 + 0xd0);
    uStack_58 = param_3;
    uStack_40 = param_3;
    FUN_109b0f718(0,0,auStack_48,auStack_60,&uStack_68,1);
  }
  return;
}



/* Entry: 10959ef50; end: 10959f583;  */

void FUN_10959ef50(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  uint *puVar5;
  long *plVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  long lVar10;
  long lVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  long lStack_2f0;
  long lStack_2e8;
  int iStack_2d4;
  uint *puStack_2d0;
  uint *puStack_2c8;
  uint *puStack_2c0;
  uint *puStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined8 *puStack_298;
  uint *puStack_290;
  uint uStack_288;
  int iStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  long lStack_250;
  undefined4 *puStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  uint auStack_128 [2];
  uint *puStack_120;
  undefined8 uStack_118;
  undefined4 auStack_110 [2];
  uint *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  uint *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  uint **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar15[0] = 0;
  puVar15[1] = 0;
  *param_1 = 0x42ff0000;
  puStack_290 = param_1 + 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar5 = param_1 + 0x14;
  puVar5[0] = 0;
  puVar5[1] = 0;
  *(uint **)(param_1 + 0x10) = puStack_290;
  *(uint **)(param_1 + 0x12) = puVar5;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (*(long *)(param_2 + 0x82) != 0) {
    uVar9 = (ulong)param_2[0x7f];
    if ((int)param_2[0x7f] < 3) {
      lVar10 = (long)(int)param_2[0x81] * (long)(int)param_2[0x80];
    }
    else {
      lVar10 = 1;
      piVar13 = *(int **)(param_2 + 0x8e);
      do {
        lVar10 = lVar10 * *piVar13;
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 1;
      } while (uVar9 != 0);
    }
    if (lVar10 != 0) {
      if ((int)param_4 == 0) {
        puVar7 = *(uint **)param_3;
        puVar14 = *(uint **)(param_3 + 2);
        puVar5 = param_2;
        if (puVar7 != puVar14) {
          puVar16 = (undefined8 *)((ulong)&uStack_f0 | 4);
          do {
            uVar1 = *puVar7;
            if (*(int *)(*(long *)(param_2 + 0x20) + 0xc) <= (int)uVar1) {
              FUN_10959ff78(4);
              goto LAB_10959f4f4;
            }
            if (*(long *)(param_1 + 4) == 0) {
LAB_10959f45c:
              FUN_109a7e87c(&uStack_288,(double)(int)uVar1,param_2 + 0x36);
              param_3 = &uStack_288;
              param_4 = param_1;
              (**(code **)(*(long *)CONCAT44(iStack_284,uStack_288) + 0x18))
                        ((long *)CONCAT44(iStack_284,uStack_288),param_3,param_1,0xffffffff);
            }
            else {
              uVar9 = (ulong)*puVar15;
              if ((int)*puVar15 < 3) {
                lVar10 = (long)(int)param_1[3] * (long)(int)param_1[2];
              }
              else {
                lVar10 = 1;
                piVar13 = *(int **)(param_1 + 0x10);
                do {
                  lVar10 = lVar10 * *piVar13;
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 1;
                } while (uVar9 != 0);
              }
              if (lVar10 == 0) goto LAB_10959f45c;
              FUN_109a7e87c(&uStack_288,(double)(int)uVar1,param_2 + 0x36);
              uStack_f0 = CONCAT44(uStack_f0._4_4_,0x42ff0000);
              *(undefined8 *)((long)puVar16 + 0x34) = 0;
              *(undefined8 *)((long)puVar16 + 0x2c) = 0;
              puVar16[3] = 0;
              puVar16[2] = 0;
              puVar16[5] = 0;
              puVar16[4] = 0;
              puVar16[1] = 0;
              *puVar16 = 0;
              uStack_a0 = 0;
              uStack_98 = 0;
              plVar6 = (long *)CONCAT44(iStack_284,uStack_288);
              ppuStack_b0 = &puStack_e8;
              puStack_a8 = &uStack_a0;
              (**(code **)(*plVar6 + 0x18))(plVar6,&uStack_288,&uStack_f0,0xffffffff);
              uStack_100 = 0;
              auStack_110[0] = 0x1010000;
              uStack_80 = 0;
              auStack_90[0] = 0x1010000;
              auStack_128[0] = 0x2010000;
              uStack_118 = 0;
              puStack_120 = param_1;
              puStack_108 = param_1;
              puStack_88 = &uStack_f0;
              FUN_109a91d90();
              pcStack_f8 = FUN_109a28f7c;
              param_3 = auStack_90;
              param_4 = auStack_128;
              FUN_109a279fc(auStack_110,param_3,param_4,plVar6,&pcStack_f8,1,10);
              if (lStack_b8 != 0) {
                piVar13 = (int *)(lStack_b8 + 0x14);
                do {
                  iVar8 = *piVar13;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                  if (bVar3) {
                    *piVar13 = iVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar8 + -1 == 0) {
                  func_0x000109a848d4(&uStack_f0);
                }
              }
              lStack_b8 = 0;
              uStack_d8 = 0;
              uStack_e0 = 0;
              uStack_c8 = 0;
              uStack_d0 = 0;
              if (0 < uStack_f0._4_4_) {
                lVar10 = 0;
                do {
                  *(undefined4 *)((long)ppuStack_b0 + lVar10 * 4) = 0;
                  lVar10 = lVar10 + 1;
                } while (lVar10 < uStack_f0._4_4_);
              }
              if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
                _free(puStack_a8[-1]);
              }
            }
            puVar5 = &uStack_288;
            FUN_10918eb6c();
            puVar7 = puVar7 + 1;
          } while (puVar7 != puVar14);
        }
      }
      else {
        puStack_248 = &uStack_280;
        puStack_298 = &uStack_238;
        uStack_f0 = **(undefined8 **)(param_2 + 0x8e);
        uStack_288 = 0x42ff0000;
        uStack_27c = 0;
        uStack_278 = 0;
        iStack_284 = 0;
        uStack_280 = 0;
        uStack_26c = 0;
        uStack_268 = 0;
        uStack_274 = 0;
        uStack_270 = 0;
        uStack_25c = 0;
        uStack_264 = 0;
        uStack_260 = 0;
        lStack_250 = 0;
        uStack_258 = 0;
        uStack_254 = 0;
        uStack_238 = 0;
        uStack_230 = 0;
        puStack_240 = puStack_298;
        FUN_109a83fd0(&uStack_288,2,&uStack_f0,5);
        puVar7 = *(uint **)param_3;
        puVar14 = *(uint **)(param_3 + 2);
        if (puVar7 != puVar14) {
          puVar16 = (undefined8 *)((ulong)&uStack_f0 | 4);
          do {
            if (*(int *)(*(long *)(param_2 + 0x20) + 0xc) <= (int)*puVar7) {
              FUN_10959ff78(4);
              goto LAB_10959f4f4;
            }
            auStack_90[1] = 0;
            auStack_90[0] = *puVar7;
            FUN_109a3e710(param_2 + 0x7e,1,&uStack_288,1,auStack_90,1);
            if (*(long *)(param_1 + 4) == 0) {
LAB_10959f100:
              uStack_f0 = CONCAT44(uStack_f0._4_4_,0x42ff0000);
              puVar16[1] = 0;
              *puVar16 = 0;
              puVar16[3] = 0;
              puVar16[2] = 0;
              puVar16[5] = 0;
              puVar16[4] = 0;
              *(undefined8 *)((long)puVar16 + 0x34) = 0;
              *(undefined8 *)((long)puVar16 + 0x2c) = 0;
              uStack_a0 = 0;
              uStack_98 = 0;
              auStack_110[0] = 0x2010000;
              puStack_108 = (uint *)&uStack_f0;
              uStack_100 = 0;
              ppuStack_b0 = (uint **)((ulong)&uStack_f0 | 8);
              puStack_a8 = &uStack_a0;
              FUN_109a479a0(&uStack_288,auStack_110);
              if (*(long *)(param_1 + 0xe) != 0) {
                piVar13 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
                do {
                  iVar8 = *piVar13;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                  if (bVar3) {
                    *piVar13 = iVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar8 + -1 == 0) {
                  func_0x000109a848d4(param_1);
                }
              }
              if (0 < (int)*puVar15) {
                lVar10 = 0;
                lVar11 = *(long *)(param_1 + 0x10);
                do {
                  *(undefined4 *)(lVar11 + lVar10 * 4) = 0;
                  lVar10 = lVar10 + 1;
                } while (lVar10 < (int)*puVar15);
              }
              *(uint **)(param_1 + 2) = puStack_e8;
              *(undefined8 *)param_1 = uStack_f0;
              *(undefined8 *)(param_1 + 6) = uStack_d8;
              *(undefined8 *)(param_1 + 4) = uStack_e0;
              *(undefined8 *)(param_1 + 10) = uStack_c8;
              *(undefined8 *)(param_1 + 8) = uStack_d0;
              *(long *)(param_1 + 0xe) = lStack_b8;
              *(undefined8 *)(param_1 + 0xc) = uStack_c0;
              puVar12 = *(uint **)(param_1 + 0x12);
              iVar8 = uStack_f0._4_4_;
              if (puVar12 != puVar5) {
                if (puVar12 != (uint *)0x0) {
                  _free(*(undefined8 *)(puVar12 + -2));
                  iVar8 = uStack_f0._4_4_;
                }
                *(uint **)(param_1 + 0x10) = puStack_290;
                *(uint **)(param_1 + 0x12) = puVar5;
                puVar12 = puVar5;
              }
              if (iVar8 < 3) {
                *(undefined8 *)puVar12 = *puStack_a8;
                *(undefined8 *)(puVar12 + 2) = puStack_a8[1];
                uStack_f0 = CONCAT44(uStack_f0._4_4_,0x42ff0000);
                puVar16[1] = 0;
                *puVar16 = 0;
                puVar16[3] = 0;
                puVar16[2] = 0;
                puVar16[5] = 0;
                puVar16[4] = 0;
                *(undefined8 *)((long)puVar16 + 0x34) = 0;
                *(undefined8 *)((long)puVar16 + 0x2c) = 0;
                if (puStack_a8 != &uStack_a0) {
                  _free(puStack_a8[-1]);
                }
              }
              else {
                *(uint ***)(param_1 + 0x10) = ppuStack_b0;
                *(undefined8 **)(param_1 + 0x12) = puStack_a8;
              }
            }
            else {
              uVar9 = (ulong)*puVar15;
              if ((int)*puVar15 < 3) {
                lVar10 = (long)(int)param_1[3] * (long)(int)param_1[2];
              }
              else {
                lVar10 = 1;
                piVar13 = *(int **)(param_1 + 0x10);
                do {
                  lVar10 = lVar10 * *piVar13;
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 1;
                } while (uVar9 != 0);
              }
              if (lVar10 == 0) goto LAB_10959f100;
              FUN_109a292ec(param_1,&uStack_288,param_1);
            }
            puVar7 = puVar7 + 1;
          } while (puVar7 != puVar14);
        }
        uStack_f0 = CONCAT44(uStack_f0._4_4_,0x2010000);
        uStack_e0 = 0;
        param_3 = (uint *)&uStack_f0;
        param_4 = (uint *)(ulong)(*param_1 & 0xff8);
        puVar5 = param_1;
        puStack_e8 = param_1;
        FUN_109a41858(0x406fe00000000000,0,param_1,param_3,param_4);
        if (lStack_250 != 0) {
          piVar13 = (int *)(lStack_250 + 0x14);
          do {
            iVar8 = *piVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            puVar5 = &uStack_288;
            func_0x000109a848d4();
          }
        }
        lStack_250 = 0;
        uStack_270 = 0;
        uStack_26c = 0;
        uStack_278 = 0;
        uStack_274 = 0;
        uStack_260 = 0;
        uStack_25c = 0;
        uStack_268 = 0;
        uStack_264 = 0;
        if (0 < iStack_284) {
          lVar10 = 0;
          do {
            puStack_248[lVar10] = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 < iStack_284);
        }
        if (puStack_240 != puStack_298 && puStack_240 != (undefined8 *)0x0) {
          puVar5 = (uint *)puStack_240[-1];
          _free();
        }
      }
      iVar8 = (int)param_3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return;
      }
      ___stack_chk_fail();
      if (iVar8 != 0) {
        func_0x000104bd46a0();
        func_0x00010567aa40(&uStack_f0);
        func_0x00010567aa40(&uStack_288);
        func_0x00010567aa40(param_1);
      }
      puVar7 = puVar5;
      __Unwind_Resume(puVar5);
      pcStack_2a8 = FUN_10959f584;
      iStack_2d4 = iVar8;
      puStack_2d0 = puVar15;
      puStack_2c8 = puVar14;
      puStack_2c0 = puVar5;
      puStack_2b8 = param_1;
      puStack_2b0 = &stack0xfffffffffffffff0;
      FUN_1092cd11c(&lStack_2f0,1,&iStack_2d4);
      FUN_10959f60c(extraout_x8,puVar7,&lStack_2f0,param_4);
      if (lStack_2f0 != 0) {
        lStack_2e8 = lStack_2f0;
        __ZdlPv();
      }
      return;
    }
  }
  FUN_10959ff78(5);
LAB_10959f4f4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10959f4f8);
  (*pcVar4)();
}



/* Entry: 10959f584; end: 10959f60b;  */

void FUN_10959f584(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lStack_50;
  long lStack_48;
  undefined4 uStack_34;
  
  uStack_34 = param_3;
  FUN_1092cd11c(&lStack_50,1,&uStack_34);
  FUN_10959f60c(param_1,param_2,&lStack_50,param_4);
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  return;
}



/* Entry: 10959f60c; end: 10959f663;  */

void FUN_10959f60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_10959ef50(param_2,param_3,*(undefined1 *)(param_4 + 0x25));
  FUN_10959ee38(param_2,param_4,param_1);
  return;
}



/* Entry: 10959f664; end: 10959f84b;  */

void FUN_10959f664(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  int *piVar19;
  ulong uVar20;
  long lVar21;
  float *pfVar22;
  int iVar23;
  float *pfVar24;
  ulong uVar25;
  float *pfVar26;
  long unaff_x20;
  float fVar27;
  float fVar28;
  undefined1 auStack_240 [4];
  int iStack_23c;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_208;
  long lStack_200;
  undefined1 *puStack_1f8;
  undefined1 auStack_1f0 [16];
  long lStack_1e0;
  undefined4 *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  ulong uStack_170;
  long *plStack_168;
  long alStack_160 [2];
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  int iStack_64;
  undefined4 auStack_60 [2];
  undefined4 *puStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  long lStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_3 + 0x10) != 0) {
    uVar13 = (ulong)*(uint *)(param_3 + 4);
    if ((int)*(uint *)(param_3 + 4) < 3) {
      lVar16 = (long)*(int *)(param_3 + 0xc) * (long)*(int *)(param_3 + 8);
    }
    else {
      lVar16 = 1;
      piVar19 = *(int **)(param_3 + 0x40);
      do {
        lVar16 = lVar16 * *piVar19;
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 1;
      } while (uVar13 != 0);
    }
    unaff_x20 = param_2;
    if (lVar16 != 0) {
      iVar23 = *(int *)(param_3 + 8);
      iVar3 = *(int *)(param_3 + 0xc);
      *(int *)(param_2 + 0xd0) = iVar3;
      *(int *)(param_2 + 0xd4) = iVar23;
      uStack_c8 = 0x42ff0000;
      puStack_58 = &uStack_c8;
      lStack_88 = (long)&uStack_c4 + 4;
      uStack_bc = 0;
      uStack_b8 = 0;
      uStack_c4 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_9c = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      lStack_90 = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      iVar4 = *(int *)(param_2 + 0x34);
      fVar27 = (float)iVar3 / (float)iVar23;
      fVar28 = (float)iVar4;
      iStack_68 = iVar4 * (int)((float)*(int *)(param_2 + 0x30) / fVar28);
      auStack_48[0] = 0x1010000;
      uStack_38 = 0;
      iStack_64 = iVar4 * (int)(((float)iStack_68 / fVar27) / fVar28);
      if (1.0 < fVar27) {
        iStack_64 = iStack_68;
      }
      uStack_50 = 0;
      if (1.0 < fVar27) {
        iStack_68 = iVar4 * (int)((fVar27 * (float)iStack_68) / fVar28);
      }
      auStack_60[0] = 0x2010000;
      puStack_80 = &uStack_78;
      lStack_40 = param_3;
      FUN_109b0f718(0,0,auStack_48,auStack_60,&iStack_68,1);
      (**(code **)(**(long **)(param_2 + 0x98) + 0x10))
                (param_1,*(long **)(param_2 + 0x98),&uStack_c8);
      if (lStack_90 != 0) {
        piVar19 = (int *)(lStack_90 + 0x14);
        do {
          iVar23 = *piVar19;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar10) {
            *piVar19 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_c8);
        }
      }
      lStack_90 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      if (0 < (int)uStack_c4) {
        lVar16 = 0;
        do {
          *(undefined4 *)(lStack_88 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)uStack_c4);
      }
      if (puStack_80 != &uStack_78 && puStack_80 != (undefined8 *)0x0) {
        _free(puStack_80[-1]);
      }
      return;
    }
  }
  lVar16 = 0;
  FUN_10959ff78();
  func_0x000104bd46a0();
  func_0x00010567aa40(&uStack_c8);
  __Unwind_Resume();
  pcStack_d8 = FUN_10959f84c;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar16 + 0x208) != 0) {
    uVar13 = (ulong)*(uint *)(lVar16 + 0x1fc);
    if ((int)*(uint *)(lVar16 + 0x1fc) < 3) {
      lVar17 = (long)*(int *)(lVar16 + 0x204) * (long)*(int *)(lVar16 + 0x200);
    }
    else {
      lVar17 = 1;
      piVar19 = *(int **)(lVar16 + 0x238);
      do {
        lVar17 = lVar17 * *piVar19;
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 1;
      } while (uVar13 != 0);
    }
    if (lVar17 != 0) {
      uVar5 = *(uint *)(lVar16 + 0x200);
      uVar6 = *(uint *)(lVar16 + 0x204);
      lStack_150 = *(long *)(lVar16 + 0x200);
      uVar7 = *(uint *)(lVar16 + 0x1f8);
      uStack_1b0 = 0x42ff0000;
      uStack_170 = (ulong)&uStack_1b0 | 8;
      uStack_1a8._4_4_ = 0;
      uStack_1a0 = 0;
      iStack_1ac = 0;
      uStack_1a8._0_4_ = 0;
      uStack_194 = 0;
      uStack_190 = 0;
      uStack_19c = 0;
      uStack_198 = 0;
      uStack_184 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      alStack_160[0] = 0;
      alStack_160[1] = 0;
      plStack_168 = alStack_160;
      FUN_109a83fd0(&uStack_1b0,2,&lStack_150,0);
      uVar13 = (ulong)(uVar7 >> 3) & 0x1ff;
      lVar17 = uVar13 + 1;
      uVar8 = (int)lVar17 * uVar6;
      iVar23 = uVar8 * uVar5;
      lStack_150 = 0;
      lStack_148 = 0;
      uStack_140 = 0;
      FUN_1093c71a0(&lStack_150,*(long *)(lVar16 + 0x208),
                    *(long *)(lVar16 + 0x208) + (long)iVar23 * 4,(long)iVar23);
      if (0 < (int)uVar5) {
        uVar14 = 0;
        do {
          if (0 < (int)uVar6) {
            uVar20 = 0;
            lVar21 = *plStack_168;
            pfVar22 = (float *)(lStack_150 + (ulong)uVar8 * 4 * uVar14);
            do {
              iVar23 = (int)pfVar22;
              if ((int)uVar13 != 0) {
                fVar27 = *pfVar22;
                pfVar24 = pfVar22;
                uVar25 = (ulong)(uVar7 >> 1) & 0x7fc;
                pfVar26 = pfVar22;
                do {
                  pfVar26 = pfVar26 + 1;
                  pfVar2 = pfVar26;
                  fVar28 = *pfVar26;
                  if (*pfVar26 <= fVar27) {
                    pfVar2 = pfVar24;
                    fVar28 = fVar27;
                  }
                  fVar27 = fVar28;
                  iVar23 = (int)pfVar2;
                  uVar25 = uVar25 - 4;
                  pfVar24 = pfVar2;
                } while (uVar25 != 0);
              }
              *(char *)(CONCAT44(uStack_19c,uStack_1a0) + lVar21 * uVar14 + uVar20) =
                   (char)((uint)(iVar23 - (int)pfVar22) >> 2);
              uVar20 = uVar20 + 1;
              pfVar22 = pfVar22 + lVar17;
            } while (uVar20 != uVar6);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar5);
      }
      if (lStack_150 != 0) {
        lStack_148 = lStack_150;
        __ZdlPv();
      }
      unaff_x20 = lVar16 + 0xd8;
      if (*(long *)(lVar16 + 0x110) != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0x110) + 0x14);
        do {
          iVar23 = *piVar19;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar10) {
            *piVar19 = iVar23 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(unaff_x20);
        }
      }
      *(undefined8 *)(lVar16 + 0x110) = 0;
      *(undefined8 *)(lVar16 + 0xf0) = 0;
      *(undefined8 *)(lVar16 + 0xe8) = 0;
      *(undefined8 *)(lVar16 + 0x100) = 0;
      *(undefined8 *)(lVar16 + 0xf8) = 0;
      if (0 < *(int *)(lVar16 + 0xdc)) {
        lVar17 = 0;
        lVar21 = *(long *)(lVar16 + 0x118);
        do {
          *(undefined4 *)(lVar21 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < *(int *)(lVar16 + 0xdc));
      }
      *(ulong *)(lVar16 + 0xe0) = CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
      *(ulong *)(lVar16 + 0xd8) = CONCAT44(iStack_1ac,uStack_1b0);
      *(ulong *)(lVar16 + 0xf0) = CONCAT44(uStack_194,uStack_198);
      *(ulong *)(lVar16 + 0xe8) = CONCAT44(uStack_19c,uStack_1a0);
      *(ulong *)(lVar16 + 0x100) = CONCAT44(uStack_184,uStack_188);
      *(ulong *)(lVar16 + 0xf8) = CONCAT44(uStack_18c,uStack_190);
      *(undefined8 *)(lVar16 + 0x110) = uStack_178;
      *(ulong *)(lVar16 + 0x108) = CONCAT44(uStack_17c,uStack_180);
      plVar18 = *(long **)(lVar16 + 0x120);
      plVar1 = (long *)(lVar16 + 0x128);
      if (plVar18 != plVar1) {
        if (plVar18 != (long *)0x0) {
          _free(plVar18[-1]);
        }
        *(long *)(lVar16 + 0x118) = lVar16 + 0xe0;
        *(long **)(lVar16 + 0x120) = plVar1;
        plVar18 = plVar1;
      }
      if (iStack_1ac < 3) {
        puVar15 = (undefined8 *)((ulong)&uStack_1b0 | 4);
        *plVar18 = *plStack_168;
        plVar18[1] = plStack_168[1];
        uStack_1b0 = 0x42ff0000;
        puVar15[1] = 0;
        *puVar15 = 0;
        puVar15[3] = 0;
        puVar15[2] = 0;
        puVar15[5] = 0;
        puVar15[4] = 0;
        *(undefined8 *)((long)puVar15 + 0x34) = 0;
        *(undefined8 *)((long)puVar15 + 0x2c) = 0;
        if (plStack_168 != alStack_160) {
          _free(plStack_168[-1]);
        }
      }
      else {
        *(ulong *)(lVar16 + 0x118) = uStack_170;
        *(long **)(lVar16 + 0x120) = plStack_168;
      }
      uStack_1a0 = 0;
      uStack_19c = 0;
      uStack_1b0 = 0x1010000;
      lStack_148 = lVar16 + 0x138;
      lStack_150 = CONCAT44(lStack_150._4_4_,0x2010000);
      uStack_140 = 0;
      uStack_1b8 = *(undefined8 *)(lVar16 + 0xd0);
      puVar11 = &uStack_1b0;
      uStack_1a8 = unaff_x20;
      FUN_109b0f718(0,0,puVar11,&lStack_150,&uStack_1b8,0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
        return;
      }
      goto LAB_10959fb7c;
    }
  }
  puVar11 = (undefined4 *)0x5;
  FUN_10959ff78();
LAB_10959fb7c:
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_1b0);
  puVar12 = puVar11;
  __Unwind_Resume(puVar11);
  pcStack_1c8 = FUN_10959fba0;
  lStack_1e0 = unaff_x20;
  puStack_1d8 = puVar11;
  ppuStack_1d0 = &puStack_e0;
  FUN_10959f664(auStack_240);
  FUN_10959e3b0(puVar12,auStack_240);
  FUN_10959f84c(puVar12);
  if (lStack_208 != 0) {
    piVar19 = (int *)(lStack_208 + 0x14);
    do {
      iVar23 = *piVar19;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar10) {
        *piVar19 = iVar23 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar23 + -1 == 0) {
      func_0x000109a848d4(auStack_240);
    }
  }
  lStack_208 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  if (0 < iStack_23c) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_200 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_23c);
  }
  if (puStack_1f8 != auStack_1f0 && puStack_1f8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_1f8 + -8));
  }
  return;
}



/* Entry: 10959f84c; end: 10959fb9f;  */

void FUN_10959f84c(long param_1)

{
  long *plVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  float fVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  float *pfVar20;
  int iVar21;
  float *pfVar22;
  ulong uVar23;
  float *pfVar24;
  long unaff_x20;
  float fVar25;
  undefined1 auStack_170 [4];
  int iStack_16c;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_138;
  long lStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [16];
  long lStack_110;
  undefined4 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  long alStack_90 [2];
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x208) != 0) {
    uVar12 = (ulong)*(uint *)(param_1 + 0x1fc);
    if ((int)*(uint *)(param_1 + 0x1fc) < 3) {
      lVar15 = (long)*(int *)(param_1 + 0x204) * (long)*(int *)(param_1 + 0x200);
    }
    else {
      lVar15 = 1;
      piVar17 = *(int **)(param_1 + 0x238);
      do {
        lVar15 = lVar15 * *piVar17;
        uVar12 = uVar12 - 1;
        piVar17 = piVar17 + 1;
      } while (uVar12 != 0);
    }
    if (lVar15 != 0) {
      uVar3 = *(uint *)(param_1 + 0x200);
      uVar4 = *(uint *)(param_1 + 0x204);
      lStack_80 = *(long *)(param_1 + 0x200);
      uVar5 = *(uint *)(param_1 + 0x1f8);
      uStack_e0 = 0x42ff0000;
      uStack_a0 = (ulong)&uStack_e0 | 8;
      uStack_d8._4_4_ = 0;
      uStack_d0 = 0;
      iStack_dc = 0;
      uStack_d8._0_4_ = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_b4 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      alStack_90[0] = 0;
      alStack_90[1] = 0;
      plStack_98 = alStack_90;
      FUN_109a83fd0(&uStack_e0,2,&lStack_80,0);
      uVar12 = (ulong)(uVar5 >> 3) & 0x1ff;
      lVar15 = uVar12 + 1;
      uVar6 = (int)lVar15 * uVar4;
      iVar21 = uVar6 * uVar3;
      lStack_80 = 0;
      lStack_78 = 0;
      uStack_70 = 0;
      FUN_1093c71a0(&lStack_80,*(long *)(param_1 + 0x208),
                    *(long *)(param_1 + 0x208) + (long)iVar21 * 4,(long)iVar21);
      if (0 < (int)uVar3) {
        uVar13 = 0;
        do {
          if (0 < (int)uVar4) {
            uVar18 = 0;
            lVar19 = *plStack_98;
            pfVar20 = (float *)(lStack_80 + (ulong)uVar6 * 4 * uVar13);
            do {
              iVar21 = (int)pfVar20;
              if ((int)uVar12 != 0) {
                fVar25 = *pfVar20;
                pfVar22 = pfVar20;
                uVar23 = (ulong)(uVar5 >> 1) & 0x7fc;
                pfVar24 = pfVar20;
                do {
                  pfVar24 = pfVar24 + 1;
                  pfVar2 = pfVar24;
                  fVar9 = *pfVar24;
                  if (*pfVar24 <= fVar25) {
                    pfVar2 = pfVar22;
                    fVar9 = fVar25;
                  }
                  fVar25 = fVar9;
                  iVar21 = (int)pfVar2;
                  uVar23 = uVar23 - 4;
                  pfVar22 = pfVar2;
                } while (uVar23 != 0);
              }
              *(char *)(CONCAT44(uStack_cc,uStack_d0) + lVar19 * uVar13 + uVar18) =
                   (char)((uint)(iVar21 - (int)pfVar20) >> 2);
              uVar18 = uVar18 + 1;
              pfVar20 = pfVar20 + lVar15;
            } while (uVar18 != uVar4);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar3);
      }
      if (lStack_80 != 0) {
        lStack_78 = lStack_80;
        __ZdlPv();
      }
      unaff_x20 = param_1 + 0xd8;
      if (*(long *)(param_1 + 0x110) != 0) {
        piVar17 = (int *)(*(long *)(param_1 + 0x110) + 0x14);
        do {
          iVar21 = *piVar17;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar8) {
            *piVar17 = iVar21 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar21 + -1 == 0) {
          func_0x000109a848d4(unaff_x20);
        }
      }
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      if (0 < *(int *)(param_1 + 0xdc)) {
        lVar15 = 0;
        lVar19 = *(long *)(param_1 + 0x118);
        do {
          *(undefined4 *)(lVar19 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < *(int *)(param_1 + 0xdc));
      }
      *(ulong *)(param_1 + 0xe0) = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
      *(ulong *)(param_1 + 0xd8) = CONCAT44(iStack_dc,uStack_e0);
      *(ulong *)(param_1 + 0xf0) = CONCAT44(uStack_c4,uStack_c8);
      *(ulong *)(param_1 + 0xe8) = CONCAT44(uStack_cc,uStack_d0);
      *(ulong *)(param_1 + 0x100) = CONCAT44(uStack_b4,uStack_b8);
      *(ulong *)(param_1 + 0xf8) = CONCAT44(uStack_bc,uStack_c0);
      *(undefined8 *)(param_1 + 0x110) = uStack_a8;
      *(ulong *)(param_1 + 0x108) = CONCAT44(uStack_ac,uStack_b0);
      plVar16 = *(long **)(param_1 + 0x120);
      plVar1 = (long *)(param_1 + 0x128);
      if (plVar16 != plVar1) {
        if (plVar16 != (long *)0x0) {
          _free(plVar16[-1]);
        }
        *(long *)(param_1 + 0x118) = param_1 + 0xe0;
        *(long **)(param_1 + 0x120) = plVar1;
        plVar16 = plVar1;
      }
      if (iStack_dc < 3) {
        puVar14 = (undefined8 *)((ulong)&uStack_e0 | 4);
        *plVar16 = *plStack_98;
        plVar16[1] = plStack_98[1];
        uStack_e0 = 0x42ff0000;
        puVar14[1] = 0;
        *puVar14 = 0;
        puVar14[3] = 0;
        puVar14[2] = 0;
        puVar14[5] = 0;
        puVar14[4] = 0;
        *(undefined8 *)((long)puVar14 + 0x34) = 0;
        *(undefined8 *)((long)puVar14 + 0x2c) = 0;
        if (plStack_98 != alStack_90) {
          _free(plStack_98[-1]);
        }
      }
      else {
        *(ulong *)(param_1 + 0x118) = uStack_a0;
        *(long **)(param_1 + 0x120) = plStack_98;
      }
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_e0 = 0x1010000;
      lStack_78 = param_1 + 0x138;
      lStack_80 = CONCAT44(lStack_80._4_4_,0x2010000);
      uStack_70 = 0;
      uStack_e8 = *(undefined8 *)(param_1 + 0xd0);
      puVar10 = &uStack_e0;
      uStack_d8 = unaff_x20;
      FUN_109b0f718(0,0,puVar10,&lStack_80,&uStack_e8,0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      goto LAB_10959fb7c;
    }
  }
  puVar10 = (undefined4 *)0x5;
  FUN_10959ff78();
LAB_10959fb7c:
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_e0);
  puVar11 = puVar10;
  __Unwind_Resume(puVar10);
  pcStack_f8 = FUN_10959fba0;
  lStack_110 = unaff_x20;
  puStack_108 = puVar10;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_10959f664(auStack_170);
  FUN_10959e3b0(puVar11,auStack_170);
  FUN_10959f84c(puVar11);
  if (lStack_138 != 0) {
    piVar17 = (int *)(lStack_138 + 0x14);
    do {
      iVar21 = *piVar17;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar8) {
        *piVar17 = iVar21 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar21 + -1 == 0) {
      func_0x000109a848d4(auStack_170);
    }
  }
  lStack_138 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  if (0 < iStack_16c) {
    lVar15 = 0;
    do {
      *(undefined4 *)(lStack_130 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < iStack_16c);
  }
  if (puStack_128 != auStack_120 && puStack_128 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_128 + -8));
  }
  return;
}



/* Entry: 10959fba0; end: 10959fc73;  */

void FUN_10959fba0(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
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
  
  FUN_10959f664(auStack_80);
  FUN_10959e3b0(param_1,auStack_80);
  FUN_10959f84c(param_1);
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
  return;
}



/* Entry: 10959fc74; end: 10959fd27;  */

void FUN_10959fc74(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010959fcd0();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10959fd28; end: 10959fd2f;  */

void FUN_10959fd28(void)

{
  return;
}



/* Entry: 10959fd30; end: 10959fe2f;  */

void FUN_10959fd30(undefined4 *param_1,long param_2,undefined8 param_3)

{
  undefined4 auStack_78 [2];
  undefined4 *puStack_70;
  undefined8 uStack_68;
  undefined4 auStack_60 [2];
  long lStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
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
  auStack_48[0] = 0x2010000;
  uStack_38 = 0;
  puStack_40 = param_1;
  FUN_109a41858(0x3ff0000000000000,0,param_3,auStack_48,5);
  uStack_38 = 0;
  auStack_48[0] = 0x1010000;
  lStack_58 = param_2 + 8;
  auStack_60[0] = 0xc1020006;
  uStack_50 = 0x400000001;
  auStack_78[0] = 0x2010000;
  uStack_68 = 0;
  puStack_70 = param_1;
  puStack_40 = param_1;
  FUN_109a91d90();
  FUN_109a293c4(auStack_48,auStack_60,auStack_78,param_3,0xffffffff,&PTR_DAT_1132e8c10,0,0);
  return;
}



/* Entry: 10959fe30; end: 10959fe37;  */

void FUN_10959fe30(void)

{
  return;
}



/* Entry: 10959fe38; end: 10959ff63;  */

void FUN_10959fe38(undefined4 *param_1,long param_2,undefined8 param_3)

{
  undefined4 auStack_78 [2];
  undefined4 *puStack_70;
  undefined8 uStack_68;
  undefined4 auStack_60 [2];
  long lStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
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
  auStack_48[0] = 0x2010000;
  uStack_38 = 0;
  puStack_40 = param_1;
  FUN_109a41858(0x3ff0000000000000,0,param_3,auStack_48,5);
  uStack_38 = 0;
  auStack_48[0] = 0x1010000;
  lStack_58 = param_2 + 8;
  auStack_60[0] = 0xc1020006;
  uStack_50 = 0x400000001;
  auStack_78[0] = 0x2010000;
  uStack_68 = 0;
  puStack_70 = param_1;
  puStack_40 = param_1;
  FUN_109a91d90();
  FUN_109a293c4(auStack_48,auStack_60,auStack_78,param_3,0xffffffff,&PTR_DAT_1132e8c10,0,0);
  auStack_48[0] = 0x2010000;
  uStack_38 = 0;
  puStack_40 = param_1;
  FUN_109a41858((double)*(float *)(param_2 + 0x28),0,param_1,auStack_48,0xffffffff);
  return;
}



/* Entry: 10959ff64; end: 10959ff77;  */

/* WARNING: Possible PIC construction at 0x00010959ffd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010959ffdc) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */

void FUN_10959ff64(void)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 unaff_x20;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  long alStack_50 [4];
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  uStack_18 = 0x10959ff78;
  ppuVar5 = &puStack_20;
  puVar3 = (undefined8 *)0x40;
  puStack_20 = &stack0xfffffffffffffff0;
  ___cxa_allocate_exception();
  *puVar3 = &PTR_DAT_110afda20;
  *(int *)(puVar3 + 1) = (int)puVar2;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  uVar6 = 0x10959ffc0;
  ___cxa_throw();
  puVar1 = &stack0xffffffffffffffd0;
  while (puVar4 = puVar3, puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = puVar2;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar5;
    *(undefined8 *)(puVar1 + -8) = uVar6;
    ppuVar5 = (undefined1 **)(puVar1 + -0x10);
    uVar6 = 0x10959ffdc;
    puVar1 = puVar1 + -0x20;
    puVar2 = puVar4;
    puVar3 = (undefined8 *)*puVar4;
  }
  return;
}



/* Entry: 10959ff78; end: 10959ffff;  */

/* WARNING: Possible PIC construction at 0x00010959ffd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010959ffdc) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */

void FUN_10959ff78(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined8 auStack_40 [4];
  undefined1 *puVar3;
  
  puVar4 = (undefined8 *)0x40;
  ___cxa_allocate_exception();
  *puVar4 = &PTR_DAT_110afda20;
  *(int *)(puVar4 + 1) = (int)param_1;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  uVar6 = 0x10959ffc0;
  ___cxa_throw();
  puVar1 = &stack0xffffffffffffffe0;
  puVar2 = (undefined1 *)register0x00000008;
  while (puVar5 = puVar4, puVar3 = puVar1, puVar5 != (undefined8 *)0x0) {
    *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
    *(undefined8 *)(puVar3 + -8) = uVar6;
    uVar6 = 0x10959ffdc;
    puVar1 = puVar3 + -0x20;
    param_1 = puVar5;
    puVar2 = puVar3;
    puVar4 = (undefined8 *)*puVar5;
  }
  return;
}



/* Entry: 1095a0000; end: 1095a004f;  */

undefined8 * FUN_1095a0000(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x40;
  ___cxa_allocate_exception();
  FUN_1095a0050();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110afda38,0x10959d838);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  *puVar2 = &PTR_DAT_110afda20;
  *(undefined4 *)(puVar2 + 1) = 3;
  func_0x000107c31940(puVar2 + 2);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  return puVar2;
}



/* Entry: 1095a0050; end: 1095a00a7;  */

undefined8 * FUN_1095a0050(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afda20;
  *(undefined4 *)(param_1 + 1) = 3;
  func_0x000107c31940(param_1 + 2);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



/* Entry: 1095a00a8; end: 1095a00ab;  */

void FUN_1095a00a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1095a00ac; end: 1095a00bf;  */

void FUN_1095a00ac(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095a00c0; end: 1095a00d7;  */

void FUN_1095a00c0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001095a00d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1095a00d8; end: 1095a010f;  */

undefined8 FUN_1095a00d8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afdb78);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095a0110; end: 1095a0117;  */

void FUN_1095a0110(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095a0118; end: 1095a012b;  */

void FUN_1095a0118(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095a012c; end: 1095a0143;  */

void FUN_1095a012c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001095a013c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1095a0144; end: 1095a017b;  */

undefined8 FUN_1095a0144(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afdbf0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095a017c; end: 1095a0183;  */

void FUN_1095a017c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095a0184; end: 1095a0197;  */

void FUN_1095a0184(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095a0198; end: 1095a01af;  */

void FUN_1095a0198(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001095a01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1095a01b0; end: 1095a01e7;  */

undefined8 FUN_1095a01b0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afdc68);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095a01e8; end: 1095a01ef;  */

void FUN_1095a01e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095a01f0; end: 1095a0203;  */

void FUN_1095a01f0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095a0204; end: 1095a021b;  */

void FUN_1095a0204(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001095a0214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1095a021c; end: 1095a0253;  */

undefined8 FUN_1095a021c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afdce0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095a0254; end: 1095a0257;  */

void FUN_1095a0254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095a0258; end: 1095a02ef;  */

undefined8 * FUN_1095a0258(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 4,*param_3,param_3[1]);
  }
  else {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    param_1[6] = param_3[2];
    param_1[5] = uVar6;
    param_1[4] = uVar5;
  }
  return param_1;
}



/* Entry: 1095a02f0; end: 1095a0327;  */

long FUN_1095a02f0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x0001094776c4(param_1 + 0x10);
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



/* Entry: 1095a0328; end: 1095a27cb;  */

/* WARNING: Removing unreachable block (ram,0x0001095a16fc) */
/* WARNING: Removing unreachable block (ram,0x0001095a11ec) */
/* WARNING: Removing unreachable block (ram,0x0001095a10b4) */
/* WARNING: Removing unreachable block (ram,0x0001095a1004) */
/* WARNING: Removing unreachable block (ram,0x0001095a0f48) */
/* WARNING: Removing unreachable block (ram,0x0001095a09b8) */
/* WARNING: Removing unreachable block (ram,0x0001095a0998) */
/* WARNING: Removing unreachable block (ram,0x0001095a0920) */
/* WARNING: Removing unreachable block (ram,0x0001095a0830) */
/* WARNING: Removing unreachable block (ram,0x0001095a07c8) */
/* WARNING: Removing unreachable block (ram,0x0001095a0760) */
/* WARNING: Removing unreachable block (ram,0x0001095a06f8) */
/* WARNING: Removing unreachable block (ram,0x0001095a0690) */
/* WARNING: Removing unreachable block (ram,0x0001095a062c) */
/* WARNING: Removing unreachable block (ram,0x0001095a05f8) */
/* WARNING: Removing unreachable block (ram,0x0001095a065c) */
/* WARNING: Removing unreachable block (ram,0x0001095a06c4) */
/* WARNING: Removing unreachable block (ram,0x0001095a072c) */
/* WARNING: Removing unreachable block (ram,0x0001095a0794) */
/* WARNING: Removing unreachable block (ram,0x0001095a07fc) */
/* WARNING: Removing unreachable block (ram,0x0001095a0864) */
/* WARNING: Removing unreachable block (ram,0x0001095a09c0) */
/* WARNING: Removing unreachable block (ram,0x0001095a09f0) */
/* WARNING: Removing unreachable block (ram,0x0001095a09f4) */
/* WARNING: Removing unreachable block (ram,0x0001095a0a70) */
/* WARNING: Removing unreachable block (ram,0x0001095a0f80) */
/* WARNING: Removing unreachable block (ram,0x0001095a1050) */
/* WARNING: Removing unreachable block (ram,0x0001095a1148) */
/* WARNING: Removing unreachable block (ram,0x0001095a1678) */
/* WARNING: Removing unreachable block (ram,0x0001095a090c) */

void FUN_1095a0328(long *param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long *******ppppppplVar8;
  long ******pppppplVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *******ppppppplVar13;
  long lVar14;
  long ******pppppplVar15;
  ulong uVar16;
  long *******ppppppplVar17;
  long *plVar18;
  ulong uVar19;
  long *******ppppppplVar20;
  undefined8 *puVar21;
  long *****ppppplVar22;
  long ******pppppplVar23;
  long ******pppppplVar24;
  long ******pppppplStack_2e0;
  long ******pppppplStack_2d8;
  long *****ppppplStack_2d0;
  undefined8 auStack_2c8 [2];
  char cStack_2b1;
  long *****ppppplStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long ******apppppplStack_298 [2];
  long *plStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  long *****ppppplStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *****ppppplStack_250;
  undefined8 uStack_248;
  long ****pppplStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  long ******pppppplStack_228;
  long ******pppppplStack_220;
  long *****ppppplStack_218;
  long ******pppppplStack_210;
  long ******pppppplStack_208;
  long *****ppppplStack_200;
  long *****ppppplStack_1f8;
  undefined4 uStack_1f0;
  long *****ppppplStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long ******apppppplStack_1b8 [2];
  long *plStack_1a8;
  long ******pppppplStack_1a0;
  long ******pppppplStack_198;
  long ****pppplStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  long ******pppppplStack_170;
  long ******pppppplStack_168;
  long *****ppppplStack_160;
  undefined8 uStack_158;
  long ******pppppplStack_150;
  long ******pppppplStack_148;
  long *****ppppplStack_140;
  long *****ppppplStack_138;
  long *****ppppplStack_128;
  long ******pppppplStack_120;
  long lStack_118;
  undefined1 auStack_110 [8];
  long *****ppppplStack_108;
  long ******pppppplStack_100;
  long ******pppppplStack_f8;
  long *****ppppplStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  char cStack_d1;
  long ******pppppplStack_d0;
  undefined8 uStack_c8;
  long *****ppppplStack_c0;
  long lStack_b8;
  float fStack_b0;
  undefined1 auStack_a0 [48];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar17 = (long *******)(param_2 + 4);
  (**(code **)(*(long *)param_2[2] + 0x10))(&plStack_1a8,(long *)param_2[2],ppppppplVar17);
  if (plStack_1a8 == (long *)0x0) {
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      ppppppplVar17 = (long *******)*ppppppplVar17;
    }
    pppppplStack_100 = (long ******)ppppppplVar17;
    FUN_1093780e0(&pppppplStack_d0,&UNK_10f574eb2,&pppppplStack_100);
    FUN_109388c6c(1,&UNK_10f574e32,&DAT_10f37747d,0x5b,&pppppplStack_d0);
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_1095a1abc;
  }
  FUN_1093809c4(apppppplStack_1b8);
  FUN_109380b9c(apppppplStack_1b8,plStack_1a8);
  puVar7 = (undefined8 *)0x218;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110afdd18;
  puVar21 = puVar7 + 3;
  puVar7[4] = 0;
  *puVar21 = 0;
  puVar7[6] = 0;
  puVar7[5] = 0;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  puVar7[0xe] = 0;
  puVar7[0xd] = 0;
  puVar7[0x10] = 0;
  puVar7[0xf] = 0;
  puVar7[0x12] = 0;
  puVar7[0x11] = 0;
  puVar7[0x14] = 0;
  puVar7[0x13] = 0;
  puVar7[0x16] = 0;
  puVar7[0x15] = 0;
  puVar7[0x18] = 0;
  puVar7[0x17] = 0;
  puVar7[0x1a] = 0;
  puVar7[0x19] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x20] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x22] = 0;
  puVar7[0x21] = 0;
  puVar7[0x24] = 0;
  puVar7[0x23] = 0;
  puVar7[0x26] = 0;
  puVar7[0x25] = 0;
  puVar7[0x28] = 0;
  puVar7[0x27] = 0;
  puVar7[0x2a] = 0;
  puVar7[0x29] = 0;
  puVar7[0x2c] = 0;
  puVar7[0x2b] = 0;
  puVar7[0x2e] = 0;
  puVar7[0x2d] = 0;
  puVar7[0x30] = 0;
  puVar7[0x2f] = 0;
  puVar7[0x32] = 0;
  puVar7[0x31] = 0;
  puVar7[0x34] = 0;
  puVar7[0x33] = 0;
  puVar7[0x36] = 0;
  puVar7[0x35] = 0;
  puVar7[0x38] = 0;
  puVar7[0x37] = 0;
  puVar7[0x3a] = 0;
  puVar7[0x39] = 0;
  puVar7[0x3c] = 0;
  puVar7[0x3b] = 0;
  puVar7[0x3e] = 0;
  puVar7[0x3d] = 0;
  puVar7[0x40] = 0;
  puVar7[0x3f] = 0;
  puVar7[0x42] = 0;
  puVar7[0x41] = 0;
  func_0x000107c31940(puVar21,&UNK_10f57510b);
  func_0x000107c31940(puVar7 + 6,"");
  func_0x000107c31940(puVar7 + 9,"");
  *(undefined1 *)(puVar7 + 0xc) = 0;
  puVar7[0xd] = 0;
  *(undefined4 *)((long)puVar7 + 100) = 0xffffffff;
  pppppplStack_d0 = (long ******)0x400000004;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  FUN_1092d1c20(puVar7 + 0xd,&pppppplStack_d0,&uStack_c8,2);
  *(undefined4 *)(puVar7 + 0x10) = 8;
  *(undefined1 *)((long)puVar7 + 0x84) = 0;
  *(undefined4 *)(puVar7 + 0x11) = 0x3f800000;
  puVar7[0x12] = 0;
  pppppplStack_d0 = (long ******)0x42fe000042fe0000;
  uStack_c8 = (long *******)CONCAT44(uStack_c8._4_4_,0x42fe0000);
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  FUN_1093c71a0(puVar7 + 0x12,&pppppplStack_d0,(long)&uStack_c8 + 4,3);
  puVar7[0x15] = 0;
  puVar7[0x16] = 0;
  puVar7[0x17] = 0;
  puVar7[0x18] = 0;
  uStack_c8 = (long *******)0xffffffffffffffff;
  pppppplStack_d0 = (long ******)0x3000000040;
  puVar7[0x19] = 0;
  puVar7[0x1a] = 0;
  FUN_1092d1c20(puVar7 + 0x18,&pppppplStack_d0,&ppppplStack_c0,4);
  uStack_c8 = (long *******)0xffffffff00000030;
  pppppplStack_d0 = (long ******)0x4000000060;
  puVar7[0x1b] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  FUN_1092d1c20(puVar7 + 0x1b,&pppppplStack_d0,&ppppplStack_c0,4);
  *(undefined1 *)(puVar7 + 0x1e) = 0;
  puVar7[0x20] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x25] = 0;
  puVar7[0x22] = 0;
  puVar7[0x21] = 0;
  puVar7[0x24] = 0;
  puVar7[0x23] = 0;
  *(undefined4 *)(puVar7 + 0x26) = 0x3f800000;
  *(undefined4 *)(puVar7 + 0x27) = 0x7fffffff;
  *(undefined1 *)((long)puVar7 + 0x13c) = 0;
  puVar7[0x29] = 0;
  puVar7[0x2a] = 0;
  puVar7[0x28] = 0;
  *(undefined1 *)(puVar7 + 0x2b) = 0;
  puVar7[0x2d] = 0;
  puVar7[0x2c] = 0;
  puVar7[0x2f] = 0;
  puVar7[0x2e] = 0;
  puVar7[0x31] = 0;
  puVar7[0x30] = 0;
  puVar7[0x32] = 0;
  *(undefined4 *)(puVar7 + 0x33) = 0x3f800000;
  puVar7[0x35] = 0;
  puVar7[0x34] = 0;
  puVar7[0x37] = 0;
  puVar7[0x36] = 0;
  *(undefined4 *)(puVar7 + 0x38) = 0x3f800000;
  puVar7[0x3a] = 0;
  puVar7[0x39] = 0;
  puVar7[0x3c] = 0;
  puVar7[0x3b] = 0;
  *(undefined4 *)(puVar7 + 0x3d) = 0x3f800000;
  puVar7[0x3f] = 0;
  puVar7[0x3e] = 0;
  puVar7[0x41] = 0;
  puVar7[0x40] = 0;
  *(undefined4 *)(puVar7 + 0x42) = 0x3f800000;
  plVar18 = (long *)param_2[1];
  *param_2 = (long)puVar21;
  param_2[1] = (long)puVar7;
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 1;
    do {
      lVar14 = *plVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f574f2d);
  FUN_1094a6ca4(apppppplStack_1b8,&pppppplStack_d0,*param_2 + 0xa8);
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f574f47);
  FUN_1094a6ca4(apppppplStack_1b8,&pppppplStack_d0,*param_2 + 0xc0);
  func_0x000107c31940(&pppppplStack_d0,&DAT_10f56f6ff);
  func_0x0001094a86e8(apppppplStack_1b8,&pppppplStack_d0,*param_2);
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f574f62);
  func_0x0001094a86e8(apppppplStack_1b8,&pppppplStack_d0,*param_2 + 0x18);
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f574f6d);
  func_0x0001094a86e8(apppppplStack_1b8,&pppppplStack_d0,*param_2 + 0x30);
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f574f78);
  FUN_1094b4850(apppppplStack_1b8,&pppppplStack_d0,*param_2 + 0x48);
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f574f8a);
  FUN_1094a9268(apppppplStack_1b8,&pppppplStack_d0,*param_2 + 0x68);
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f574f9c);
  func_0x0001094a6db0(apppppplStack_1b8,&pppppplStack_d0,*param_2 + 0x70);
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f574fa8);
  FUN_1094b4850(apppppplStack_1b8,&pppppplStack_d0,*param_2 + 0x6c);
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f574fbb);
  FUN_1094a6ca4(apppppplStack_1b8,&pppppplStack_d0,*param_2 + 0x50);
  func_0x000107c31940(&pppppplStack_d0,&DAT_10f574d53);
  func_0x0001094a6ea4(apppppplStack_1b8,&pppppplStack_d0,*param_2 + 0x78);
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f574fc6);
  FUN_1094b4850(apppppplStack_1b8,&pppppplStack_d0,*param_2 + 0xd8);
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f574feb);
  FUN_1094a9268(apppppplStack_1b8,&pppppplStack_d0,*param_2 + 0x4c);
  lVar14 = *param_2;
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f575002);
  ppppppplVar17 = apppppplStack_1b8;
  FUN_1093781f4(ppppppplVar17,&pppppplStack_d0);
  if ((int)ppppppplVar17 == 0) {
    func_0x000107c31940(&pppppplStack_d0,&UNK_10f57501e);
    ppppppplVar17 = apppppplStack_1b8;
    FUN_1093781f4(ppppppplVar17,&pppppplStack_d0);
    if ((int)ppppppplVar17 == 0) {
      func_0x000107c31940(&pppppplStack_d0,&DAT_10f5674c5);
      FUN_1094d24d0(lVar14 + 0x90,&pppppplStack_d0);
    }
    else {
      func_0x000107c31940(&pppppplStack_100,&UNK_10f57501e);
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      lStack_1c0 = 0;
      FUN_1094a6b30(&pppppplStack_d0,apppppplStack_1b8,&pppppplStack_100,&uStack_1d0);
      FUN_1094d24d0(lVar14 + 0x90,&pppppplStack_d0);
      if (lStack_1c0 < 0) {
        __ZdlPv(uStack_1d0);
      }
    }
  }
  else {
    func_0x000107c31940(&pppppplStack_d0,&UNK_10f575002);
    func_0x0001094b4944(apppppplStack_1b8,&pppppplStack_d0,lVar14 + 0x90);
  }
  func_0x000107c31940(&pppppplStack_100,&UNK_10f575031);
  ppppplStack_1e8 = (long *****)0x0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  ppppppplVar17 = &pppppplStack_d0;
  FUN_1094a8f9c(&pppppplStack_d0,apppppplStack_1b8,&pppppplStack_100,&ppppplStack_1e8);
  lVar14 = *param_2;
  func_0x000107c3193c(lVar14 + 0xe0);
  *(long ********)(lVar14 + 0xe8) = uStack_c8;
  *(long *******)(lVar14 + 0xe0) = pppppplStack_d0;
  *(long ******)(lVar14 + 0xf0) = ppppplStack_c0;
  uStack_c8 = (long *******)0x0;
  ppppplStack_c0 = (long *****)0x0;
  pppppplStack_d0 = (long ******)0x0;
  pppppplStack_1a0 = (long ******)ppppppplVar17;
  func_0x000104c607c8(&pppppplStack_1a0);
  pppppplStack_1a0 = &ppppplStack_1e8;
  func_0x000104c607c8(&pppppplStack_1a0);
  func_0x000107c31940(&pppppplStack_228,&UNK_10f57504e);
  uStack_248 = 0;
  ppppplStack_250 = (long *****)0x0;
  uStack_238 = 0;
  pppplStack_240 = (long ****)0x0;
  uStack_230 = 0x3f800000;
  pppppplStack_170 = apppppplStack_1b8[0];
  pppppplStack_168 = (long ******)0x0;
  ppppplStack_160 = (long *****)0x0;
  uStack_158 = 0x8000000000000000;
  cVar3 = *(char *)apppppplStack_1b8[0];
  if (cVar3 == '\x01') {
    ppppppplVar8 = (long *******)apppppplStack_1b8[0][1];
    FUN_1093793a4(ppppppplVar8,&pppppplStack_228);
    cVar3 = *(char *)apppppplStack_1b8[0];
    pppppplStack_168 = (long ******)ppppppplVar8;
LAB_1095a0b08:
    uStack_c8 = (long *******)0x0;
    ppppplStack_c0 = (long *****)0x0;
    lStack_b8 = -0x8000000000000000;
    pppppplStack_d0 = apppppplStack_1b8[0];
    if (cVar3 == '\x01') {
      uStack_c8 = (long *******)(apppppplStack_1b8[0][1] + 1);
    }
    else {
      if (cVar3 == '\x02') {
        pppppplVar15 = (long ******)apppppplStack_1b8[0][1];
        goto LAB_1095a0b38;
      }
      lStack_b8 = 1;
    }
  }
  else {
    if (cVar3 != '\x02') {
      uStack_158 = 1;
      goto LAB_1095a0b08;
    }
    pppppplVar15 = (long ******)apppppplStack_1b8[0][1];
    ppppplStack_160 = pppppplVar15[1];
    pppppplStack_d0 = apppppplStack_1b8[0];
LAB_1095a0b38:
    lStack_b8 = -0x8000000000000000;
    uStack_c8 = (long *******)0x0;
    ppppplStack_c0 = pppppplVar15[1];
  }
  uStack_e0 = 0x3f800000;
  uStack_e8 = 0;
  ppppplStack_f0 = (long *****)0x0;
  pppppplStack_f8 = (long ******)0x0;
  pppppplStack_100 = (long ******)0x0;
  ppppppplVar8 = &pppppplStack_170;
  FUN_109379420(ppppppplVar8,&pppppplStack_d0);
  if (((ulong)ppppppplVar8 & 1) == 0) {
    ppppppplVar8 = &pppppplStack_170;
    FUN_10937b950();
    pppppplStack_198 = (long ******)0x0;
    pppppplStack_1a0 = (long ******)0x0;
    uStack_188 = 0;
    pppplStack_190 = (long ****)0x0;
    uStack_180 = 0x3f800000;
    if (*(char *)ppppppplVar8 != '\x01') {
      uVar12 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(ppppppplVar8);
      func_0x000107c31940(&pppppplStack_150,ppppppplVar8);
      FUN_10928a5e0(&pppppplStack_d0,&UNK_10f56746f,&pppppplStack_150);
      FUN_10937bbbc(uVar12,0x12e,&pppppplStack_d0);
      ___cxa_throw(uVar12,&PTR_DAT_110af4510,FUN_10937bd14);
      goto LAB_1095a1ec4;
    }
    uStack_c8 = (long *******)0x0;
    pppppplStack_d0 = (long ******)0x0;
    lStack_b8 = 0;
    ppppplStack_c0 = (long *****)0x0;
    fStack_b0 = 1.0;
    pppppplVar23 = ppppppplVar8[1] + 1;
    pppppplVar15 = (long ******)*ppppppplVar8[1];
    if (pppppplVar15 != pppppplVar23) {
      do {
        ppppplStack_128 = (long *****)0x0;
        FUN_1095247c8(pppppplVar15 + 7,&ppppplStack_128);
        ppppplVar22 = ppppplStack_128;
        if (*(char *)((long)pppppplVar15 + 0x37) < '\0') {
          func_0x000107c3192c(&pppppplStack_150,pppppplVar15[4],pppppplVar15[5]);
        }
        else {
          pppppplStack_148 = (long ******)pppppplVar15[5];
          pppppplStack_150 = (long ******)pppppplVar15[4];
          ppppplStack_140 = pppppplVar15[6];
        }
        ppppplStack_138 = ppppplVar22;
        ppppppplVar20 = &pppppplStack_d0;
        func_0x000107c31944(ppppppplVar20,&pppppplStack_150);
        ppppppplVar8 = uStack_c8;
        if (uStack_c8 != (long *******)0x0) {
          uVar19 = (long)uStack_c8 - 1;
          if (((ulong)uStack_c8 & uVar19) == 0) {
            ppppppplVar17 = (long *******)(uVar19 & (ulong)ppppppplVar20);
          }
          else {
            ppppppplVar17 = ppppppplVar20;
            if (uStack_c8 <= ppppppplVar20) {
              uVar16 = 0;
              if (uStack_c8 != (long *******)0x0) {
                uVar16 = (ulong)ppppppplVar20 / (ulong)uStack_c8;
              }
              ppppppplVar17 = (long *******)((long)ppppppplVar20 - uVar16 * (long)uStack_c8);
            }
          }
          if ((long ******)pppppplStack_d0[(long)ppppppplVar17] != (long ******)0x0) {
            for (ppppplVar22 = (long *****)*pppppplStack_d0[(long)ppppppplVar17];
                ppppplVar22 != (long *****)0x0; ppppplVar22 = (long *****)*ppppplVar22) {
              ppppppplVar13 = (long *******)ppppplVar22[1];
              if (ppppppplVar13 == ppppppplVar20) {
                ppppppplVar13 = &pppppplStack_d0;
                func_0x000104c4fbc4(ppppppplVar13,ppppplVar22 + 2,&pppppplStack_150);
                if (((ulong)ppppppplVar13 & 1) != 0) goto LAB_1095a0e08;
              }
              else {
                if (((ulong)ppppppplVar8 & uVar19) == 0) {
                  ppppppplVar13 = (long *******)((ulong)ppppppplVar13 & uVar19);
                }
                else if (ppppppplVar8 <= ppppppplVar13) {
                  uVar16 = 0;
                  if (ppppppplVar8 != (long *******)0x0) {
                    uVar16 = (ulong)ppppppplVar13 / (ulong)ppppppplVar8;
                  }
                  ppppppplVar13 = (long *******)((long)ppppppplVar13 - uVar16 * (long)ppppppplVar8);
                }
                if (ppppppplVar13 != ppppppplVar17) break;
              }
            }
          }
        }
        pppppplVar9 = (long ******)0x30;
        __Znwm();
        lStack_118 = 0;
        *pppppplVar9 = (long *****)0x0;
        pppppplVar9[1] = (long *****)ppppppplVar20;
        ppppplStack_128 = (long *****)pppppplVar9;
        pppppplStack_120 = (long ******)&pppppplStack_d0;
        if ((long)ppppplStack_140 < 0) {
          func_0x000107c3192c(pppppplVar9 + 2,pppppplStack_150,pppppplStack_148);
        }
        else {
          pppppplVar9[3] = (long *****)pppppplStack_148;
          pppppplVar9[2] = (long *****)pppppplStack_150;
          pppppplVar9[4] = ppppplStack_140;
        }
        pppppplVar9[5] = ppppplStack_138;
        lStack_118 = CONCAT71(lStack_118._1_7_,1);
        if ((ppppppplVar8 == (long *******)0x0) ||
           (fStack_b0 * (float)ppppppplVar8 < (float)(lStack_b8 + 1))) {
          uVar19 = 1;
          if ((long *******)0x2 < ppppppplVar8) {
            uVar19 = (ulong)(((ulong)ppppppplVar8 & (long)ppppppplVar8 - 1U) != 0);
          }
          uVar19 = uVar19 | (long)ppppppplVar8 << 1;
          uVar16 = (ulong)((float)(lStack_b8 + 1) / fStack_b0);
          if (uVar19 <= uVar16) {
            uVar19 = uVar16;
          }
          FUN_1095a2bdc(&pppppplStack_d0,uVar19);
          ppppppplVar8 = uStack_c8;
          if (((ulong)uStack_c8 & (long)uStack_c8 - 1U) == 0) {
            ppppppplVar17 = (long *******)((long)uStack_c8 - 1U & (ulong)ppppppplVar20);
          }
          else {
            ppppppplVar17 = ppppppplVar20;
            if (uStack_c8 <= ppppppplVar20) {
              uVar19 = 0;
              if (uStack_c8 != (long *******)0x0) {
                uVar19 = (ulong)ppppppplVar20 / (ulong)uStack_c8;
              }
              ppppppplVar17 = (long *******)((long)ppppppplVar20 - uVar19 * (long)uStack_c8);
            }
          }
        }
        pppppplVar9 = (long ******)pppppplStack_d0[(long)ppppppplVar17];
        if (pppppplVar9 == (long ******)0x0) {
          *ppppplStack_128 = (long ****)ppppplStack_c0;
          ppppplStack_c0 = ppppplStack_128;
          pppppplStack_d0[(long)ppppppplVar17] = (long *****)&ppppplStack_c0;
          if ((long *****)*ppppplStack_128 != (long *****)0x0) {
            ppppppplVar20 = (long *******)(*ppppplStack_128)[1];
            if (((ulong)ppppppplVar8 & (long)ppppppplVar8 - 1U) == 0) {
              ppppppplVar20 = (long *******)((ulong)ppppppplVar20 & (long)ppppppplVar8 - 1U);
            }
            else if (ppppppplVar8 <= ppppppplVar20) {
              uVar19 = 0;
              if (ppppppplVar8 != (long *******)0x0) {
                uVar19 = (ulong)ppppppplVar20 / (ulong)ppppppplVar8;
              }
              ppppppplVar20 = (long *******)((long)ppppppplVar20 - uVar19 * (long)ppppppplVar8);
            }
            pppppplStack_d0[(long)ppppppplVar20] = ppppplStack_128;
          }
        }
        else {
          *ppppplStack_128 = (long ****)*pppppplVar9;
          *pppppplVar9 = ppppplStack_128;
        }
        lStack_b8 = lStack_b8 + 1;
LAB_1095a0e08:
        if ((long)ppppplStack_140 < 0) {
          __ZdlPv(pppppplStack_150);
        }
        pppppplVar9 = (long ******)pppppplVar15[1];
        pppppplVar24 = pppppplVar15;
        if ((long ******)pppppplVar15[1] == (long ******)0x0) {
          do {
            pppppplVar15 = (long ******)pppppplVar24[2];
            bVar5 = (long ******)*pppppplVar15 != pppppplVar24;
            pppppplVar24 = pppppplVar15;
          } while (bVar5);
        }
        else {
          do {
            pppppplVar15 = pppppplVar9;
            pppppplVar9 = (long ******)*pppppplVar15;
          } while ((long ******)*pppppplVar15 != (long ******)0x0);
        }
      } while (pppppplVar15 != pppppplVar23);
    }
    pppppplVar15 = &ppppplStack_f0;
    func_0x0001095a2eb4(&pppppplStack_1a0,&pppppplStack_d0);
    func_0x0001095a2e38(&pppppplStack_d0);
    ppppppplVar17 = &pppppplStack_100;
    func_0x0001095a2eb4(&pppppplStack_100,&pppppplStack_1a0);
    func_0x0001095a2e38(&pppppplStack_1a0);
  }
  else {
    pppppplVar15 = (long ******)&pppplStack_240;
    ppppppplVar17 = (long *******)&ppppplStack_250;
  }
  ppppppplVar8 = (long *******)*ppppppplVar17;
  ppppppplVar20 = (long *******)ppppppplVar17[1];
  *ppppppplVar17 = (long ******)0x0;
  ppppppplVar17[1] = (long ******)0x0;
  pppppplStack_210 = (long ******)ppppppplVar8;
  pppppplStack_208 = (long ******)ppppppplVar20;
  ppppplStack_200 = (long *****)ppppppplVar17[2];
  ppppplStack_1f8 = (long *****)ppppppplVar17[3];
  uStack_1f0 = *(undefined4 *)(ppppppplVar17 + 4);
  if (ppppppplVar17[3] != (long ******)0x0) {
    ppppppplVar17 = (long *******)ppppppplVar17[2][1];
    if (((ulong)ppppppplVar20 & (ulong)((long)ppppppplVar20 + -1)) == 0) {
      ppppppplVar17 = (long *******)((ulong)ppppppplVar17 & (ulong)((long)ppppppplVar20 + -1));
    }
    else if (ppppppplVar20 <= ppppppplVar17) {
      uVar19 = 0;
      if (ppppppplVar20 != (long *******)0x0) {
        uVar19 = (ulong)ppppppplVar17 / (ulong)ppppppplVar20;
      }
      ppppppplVar17 = (long *******)((long)ppppppplVar17 - uVar19 * (long)ppppppplVar20);
    }
    ppppppplVar8[(long)ppppppplVar17] = &ppppplStack_200;
    *pppppplVar15 = (long *****)0x0;
    pppppplVar15[1] = (long *****)0x0;
  }
  func_0x0001095a2e38(&pppppplStack_100);
  func_0x0001095a2eb4(*param_2 + 0xf8,&pppppplStack_210);
  func_0x0001095a2e38(&pppppplStack_210);
  func_0x0001095a2e38(&ppppplStack_250);
  if ((long)ppppplStack_218 < 0) {
    __ZdlPv(pppppplStack_228);
  }
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f575060);
  ppppppplVar17 = apppppplStack_1b8;
  func_0x0001093782cc(ppppppplVar17,&pppppplStack_d0,0);
  *(int *)(*param_2 + 0x120) = (int)ppppppplVar17;
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f57506e);
  ppppppplVar17 = apppppplStack_1b8;
  func_0x000109506858(ppppppplVar17,&pppppplStack_d0,0);
  *(char *)(*param_2 + 0x124) = (char)ppppppplVar17;
  func_0x000107c31940(&pppppplStack_100,&UNK_10f575088);
  ppppplStack_268 = (long *****)0x0;
  uStack_260 = 0;
  uStack_258 = 0;
  FUN_1094a8f9c(&pppppplStack_d0,apppppplStack_1b8,&pppppplStack_100,&ppppplStack_268);
  lVar14 = *param_2;
  func_0x000107c3193c((undefined8 *)(lVar14 + 0x128));
  *(long ********)(lVar14 + 0x130) = uStack_c8;
  *(undefined8 *)(lVar14 + 0x128) = pppppplStack_d0;
  *(long ******)(lVar14 + 0x138) = ppppplStack_c0;
  uStack_c8 = (long *******)0x0;
  ppppplStack_c0 = (long *****)0x0;
  pppppplStack_d0 = (long ******)0x0;
  pppppplStack_1a0 = (long ******)&pppppplStack_d0;
  func_0x000104c607c8(&pppppplStack_1a0);
  pppppplStack_1a0 = &ppppplStack_268;
  func_0x000104c607c8(&pppppplStack_1a0);
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f574f6d);
  uStack_280 = 0;
  uStack_278 = 0;
  lStack_270 = 0;
  FUN_1094a6b30(&ppppplStack_128,apppppplStack_1b8,&pppppplStack_d0,&uStack_280);
  if (lStack_270 < 0) {
    __ZdlPv(uStack_280);
  }
  (**(code **)(*(long *)param_2[2] + 0x10))(&plStack_288,(long *)param_2[2],&ppppplStack_128);
  FUN_1093809c4(apppppplStack_298);
  FUN_109380b9c(apppppplStack_298,plStack_288);
  func_0x000107c31940(&pppppplStack_d0,&UNK_10f5750ce);
  ppppppplVar17 = apppppplStack_1b8;
  FUN_1093781f4(ppppppplVar17,&pppppplStack_d0);
  if ((int)ppppppplVar17 != 0) {
    *(undefined1 *)(*param_2 + 0x140) = 1;
    func_0x000107c31940(&pppppplStack_100,&UNK_10f5750ce);
    ppppplStack_2b0 = (long *****)0x0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    FUN_1094a8f9c(&pppppplStack_d0,apppppplStack_1b8,&pppppplStack_100,&ppppplStack_2b0);
    lVar14 = *param_2;
    func_0x000107c3193c((undefined8 *)(lVar14 + 0x148));
    *(long ********)(lVar14 + 0x150) = uStack_c8;
    *(undefined8 *)(lVar14 + 0x148) = pppppplStack_d0;
    *(long ******)(lVar14 + 0x158) = ppppplStack_c0;
    uStack_c8 = (long *******)0x0;
    ppppplStack_c0 = (long *****)0x0;
    pppppplStack_d0 = (long ******)0x0;
    pppppplStack_1a0 = (long ******)&pppppplStack_d0;
    func_0x000104c607c8(&pppppplStack_1a0);
    pppppplStack_1a0 = &ppppplStack_2b0;
    func_0x000104c607c8(&pppppplStack_1a0);
  }
  func_0x000107c31940(&pppppplStack_d0,&DAT_10f30a732);
  ppppppplVar17 = apppppplStack_298;
  FUN_1093781f4(ppppppplVar17,&pppppplStack_d0);
  if (((ulong)ppppppplVar17 & 1) == 0) {
    FUN_109381b20(&pppppplStack_150,apppppplStack_298[0]);
    if ((bRam0000000113732fd0 & 1) == 0) goto LAB_1095a1ecc;
    goto LAB_1095a1214;
  }
  func_0x000107c31940(auStack_2c8,&DAT_10f30a732);
  pppppplStack_2d8 = (long ******)0x0;
  ppppplStack_2d0 = (long *****)0x0;
  pppppplStack_100 = apppppplStack_298[0];
  pppppplStack_f8 = (long ******)0x0;
  ppppplStack_f0 = (long *****)0x0;
  uStack_e8 = 0x8000000000000000;
  cVar3 = *(char *)apppppplStack_298[0];
  pppppplStack_2e0 = (long ******)&pppppplStack_2d8;
  if (cVar3 == '\x01') {
    ppppppplVar17 = (long *******)apppppplStack_298[0][1];
    FUN_1093793a4(ppppppplVar17,auStack_2c8);
    cVar3 = *(char *)apppppplStack_298[0];
    pppppplStack_f8 = (long ******)ppppppplVar17;
LAB_1095a1280:
    pppppplStack_d0 = apppppplStack_298[0];
    uStack_c8 = (long *******)0x0;
    ppppplStack_c0 = (long *****)0x0;
    lStack_b8 = -0x8000000000000000;
    if (cVar3 == '\x01') {
      uStack_c8 = (long *******)(apppppplStack_298[0][1] + 1);
    }
    else {
      if (cVar3 == '\x02') {
        pppppplVar15 = (long ******)apppppplStack_298[0][1];
        goto LAB_1095a12b0;
      }
      lStack_b8 = 1;
    }
  }
  else {
    if (cVar3 != '\x02') {
      uStack_e8 = 1;
      goto LAB_1095a1280;
    }
    pppppplVar15 = (long ******)apppppplStack_298[0][1];
    ppppplStack_f0 = pppppplVar15[1];
LAB_1095a12b0:
    lStack_b8 = -0x8000000000000000;
    uStack_c8 = (long *******)0x0;
    ppppplStack_c0 = pppppplVar15[1];
    pppppplStack_d0 = apppppplStack_298[0];
  }
  ppppplStack_140 = (long *****)0x0;
  pppppplStack_148 = (long ******)0x0;
  ppppppplVar17 = &pppppplStack_100;
  apppppplStack_298[0] = pppppplStack_d0;
  pppppplStack_150 = (long ******)&pppppplStack_148;
  FUN_109379420(ppppppplVar17,&pppppplStack_d0);
  if ((int)ppppppplVar17 == 0) {
    ppppppplVar17 = &pppppplStack_100;
    FUN_10937b950();
    pppppplStack_168 = (long ******)0x0;
    ppppplStack_160 = (long *****)0x0;
    pppppplStack_170 = (long ******)&pppppplStack_168;
    if (*(char *)ppppppplVar17 != '\x01') {
      uVar12 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(ppppppplVar17);
      func_0x000107c31940(&pppppplStack_1a0,ppppppplVar17);
      FUN_10928a5e0(&pppppplStack_d0,&UNK_10f56746f,&pppppplStack_1a0);
      FUN_10937bbbc(uVar12,0x12e,&pppppplStack_d0);
      ___cxa_throw(uVar12,&PTR_DAT_110af4510,FUN_10937bd14);
LAB_1095a1ec4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1095a1ec8);
      (*pcVar4)();
    }
    pppppplStack_208 = (long ******)0x0;
    ppppplStack_200 = (long *****)0x0;
    pppppplVar23 = ppppppplVar17[1];
    pppppplVar15 = (long ******)*pppppplVar23;
    ppppppplVar17 = &pppppplStack_208;
    pppppplStack_210 = (long ******)&pppppplStack_208;
    while (pppppplVar15 != pppppplVar23 + 1) {
      FUN_10937ba88(pppppplVar15 + 7,&pppppplStack_1a0);
      uVar2 = pppppplStack_1a0._0_4_;
      if (*(char *)((long)pppppplVar15 + 0x37) < '\0') {
        func_0x000107c3192c(&pppppplStack_d0,pppppplVar15[4],pppppplVar15[5]);
      }
      else {
        uStack_c8 = (long *******)pppppplVar15[5];
        pppppplStack_d0 = (long ******)pppppplVar15[4];
        ppppplStack_c0 = pppppplVar15[6];
      }
      lStack_b8 = CONCAT44(lStack_b8._4_4_,uVar2);
      ppppppplVar8 = &pppppplStack_210;
      FUN_1095a37f0(ppppppplVar8,ppppppplVar17,&ppppplStack_108,auStack_110,&pppppplStack_d0);
      ppppppplVar20 = (long *******)*ppppppplVar8;
      if (ppppppplVar20 == (long *******)0x0) {
        ppppppplVar20 = (long *******)0x40;
        __Znwm();
        pppplStack_190 = (long ****)0x0;
        ppppppplVar20[5] = (long ******)uStack_c8;
        ppppppplVar20[4] = pppppplStack_d0;
        ppppppplVar20[6] = (long ******)ppppplStack_c0;
        *(undefined4 *)(ppppppplVar20 + 7) = (undefined4)lStack_b8;
        *ppppppplVar20 = (long ******)0x0;
        ppppppplVar20[1] = (long ******)0x0;
        ppppppplVar20[2] = (long ******)ppppplStack_108;
        pppppplStack_198 = (long ******)&pppppplStack_210;
        *ppppppplVar8 = (long ******)ppppppplVar20;
        ppppppplVar17 = ppppppplVar20;
        if ((long *******)*pppppplStack_210 != (long *******)0x0) {
          ppppppplVar17 = (long *******)*ppppppplVar8;
          pppppplStack_210 = (long ******)*pppppplStack_210;
        }
        func_0x000107c27d40(pppppplStack_208,ppppppplVar17);
        ppppplStack_200 = (long *****)((long)ppppplStack_200 + 1);
      }
      ppppppplVar8 = (long *******)ppppppplVar20[1];
      if ((long *******)ppppppplVar20[1] == (long *******)0x0) {
        do {
          ppppppplVar17 = (long *******)ppppppplVar20[2];
          bVar5 = (long *******)*ppppppplVar17 != ppppppplVar20;
          ppppppplVar20 = ppppppplVar17;
        } while (bVar5);
      }
      else {
        do {
          ppppppplVar17 = ppppppplVar8;
          ppppppplVar8 = (long *******)*ppppppplVar17;
        } while ((long *******)*ppppppplVar17 != (long *******)0x0);
      }
      pppppplVar9 = (long ******)pppppplVar15[1];
      pppppplVar24 = pppppplVar15;
      if ((long ******)pppppplVar15[1] == (long ******)0x0) {
        do {
          pppppplVar15 = (long ******)pppppplVar24[2];
          bVar5 = (long ******)*pppppplVar15 != pppppplVar24;
          pppppplVar24 = pppppplVar15;
        } while (bVar5);
      }
      else {
        do {
          pppppplVar15 = pppppplVar9;
          pppppplVar9 = (long ******)*pppppplVar15;
        } while ((long ******)*pppppplVar15 != (long ******)0x0);
      }
    }
    func_0x00010951ec08(&pppppplStack_170,pppppplStack_168);
    pppppplStack_170 = pppppplStack_210;
    pppppplStack_168 = pppppplStack_208;
    ppppplStack_160 = ppppplStack_200;
    ppppppplVar17 = &pppppplStack_168;
    if ((long ******)ppppplStack_200 != (long ******)0x0) {
      pppppplStack_208[2] = (long *****)&pppppplStack_168;
      pppppplStack_208 = (long ******)0x0;
      ppppplStack_200 = (long *****)0x0;
      pppppplStack_210 = (long ******)&pppppplStack_208;
      ppppppplVar17 = (long *******)pppppplStack_170;
    }
    pppppplStack_170 = (long ******)ppppppplVar17;
    func_0x00010951ec08(&pppppplStack_210,pppppplStack_208);
    func_0x00010951ec08(&pppppplStack_150,pppppplStack_148);
    pppppplStack_150 = pppppplStack_170;
    pppppplStack_148 = pppppplStack_168;
    ppppplStack_140 = ppppplStack_160;
    ppppppplVar17 = &pppppplStack_148;
    if ((long ******)ppppplStack_160 != (long ******)0x0) {
      pppppplStack_168[2] = (long *****)&pppppplStack_148;
      pppppplStack_168 = (long ******)0x0;
      ppppplStack_160 = (long *****)0x0;
      pppppplStack_170 = (long ******)&pppppplStack_168;
      ppppppplVar17 = (long *******)pppppplStack_150;
    }
    pppppplStack_150 = (long ******)ppppppplVar17;
    func_0x00010951ec08(&pppppplStack_170,pppppplStack_168);
    pppppplStack_228 = pppppplStack_150;
    pppppplStack_220 = pppppplStack_148;
    ppppplStack_218 = ppppplStack_140;
    if ((long ******)ppppplStack_140 != (long ******)0x0) {
      pppppplStack_148[2] = (long *****)&pppppplStack_220;
      pppppplStack_148 = (long ******)0x0;
      ppppplStack_140 = (long *****)0x0;
      pppppplStack_150 = (long ******)&pppppplStack_148;
      goto LAB_1095a17f4;
    }
  }
  else {
    pppppplStack_228 = pppppplStack_2e0;
    pppppplStack_220 = pppppplStack_2d8;
    ppppplStack_218 = ppppplStack_2d0;
    if ((long ******)ppppplStack_2d0 != (long ******)0x0) {
      pppppplStack_2d8[2] = (long *****)&pppppplStack_220;
      pppppplStack_2d8 = (long ******)0x0;
      ppppplStack_2d0 = (long *****)0x0;
      pppppplStack_2e0 = (long ******)&pppppplStack_2d8;
      goto LAB_1095a17f4;
    }
  }
  pppppplStack_228 = (long ******)&pppppplStack_220;
LAB_1095a17f4:
  func_0x00010951ec08(&pppppplStack_150,pppppplStack_148);
  func_0x00010951ec08(&pppppplStack_2e0,pppppplStack_2d8);
  if (cStack_2b1 < '\0') {
    __ZdlPv(auStack_2c8[0]);
  }
  ppppppplVar17 = (long *******)pppppplStack_228;
  while (ppppppplVar17 != &pppppplStack_220) {
    ppppppplVar8 = ppppppplVar17 + 4;
    uVar2 = *(undefined4 *)(ppppppplVar17 + 7);
    lVar14 = *param_2 + 0x188;
    pppppplStack_d0 = (long ******)ppppppplVar8;
    FUN_1092afa68(lVar14,ppppppplVar8,&UNK_10dd5b8f9,&pppppplStack_d0,&pppppplStack_100);
    *(undefined4 *)(lVar14 + 0x28) = uVar2;
    func_0x000107c2827c(*param_2 + 0x160,ppppppplVar8,ppppppplVar8);
    ppppppplVar8 = (long *******)ppppppplVar17[1];
    ppppppplVar20 = ppppppplVar17;
    if ((long *******)ppppppplVar17[1] == (long *******)0x0) {
      do {
        ppppppplVar17 = (long *******)ppppppplVar20[2];
        bVar5 = (long *******)*ppppppplVar17 != ppppppplVar20;
        ppppppplVar20 = ppppppplVar17;
      } while (bVar5);
    }
    else {
      do {
        ppppppplVar17 = ppppppplVar8;
        ppppppplVar8 = (long *******)*ppppppplVar17;
      } while ((long *******)*ppppppplVar17 != (long *******)0x0);
    }
  }
  uStack_c8 = (long *******)0x0;
  ppppplStack_c0 = (long *****)0x0;
  lStack_b8 = -0x8000000000000000;
  pppppplStack_d0 = apppppplStack_298[0];
  if (*(char *)apppppplStack_298[0] == '\x01') {
    ppppppplVar17 = (long *******)apppppplStack_298[0][1];
    FUN_10938ce90(ppppppplVar17,&PTR_DAT_110afdcf8);
    uStack_c8 = ppppppplVar17;
  }
  else if (*(char *)apppppplStack_298[0] == '\x02') {
    ppppplStack_c0 = (long *****)apppppplStack_298[0][1][1];
  }
  else {
    lStack_b8 = 1;
  }
  pppppplStack_f8 = (long ******)0x0;
  ppppplStack_f0 = (long *****)0x0;
  uStack_e8 = 0x8000000000000000;
  if (*(char *)apppppplStack_298[0] == '\x02') {
    ppppplStack_f0 = (long *****)apppppplStack_298[0][1][1];
  }
  else if (*(char *)apppppplStack_298[0] == '\x01') {
    pppppplStack_f8 = (long ******)(apppppplStack_298[0][1] + 1);
  }
  else {
    uStack_e8 = 1;
  }
  ppppppplVar17 = &pppppplStack_d0;
  pppppplStack_100 = apppppplStack_298[0];
  FUN_10937c708(ppppppplVar17,&pppppplStack_100);
  if (((ulong)ppppppplVar17 & 1) == 0) {
    ppppppplVar17 = &pppppplStack_d0;
    FUN_10937c560();
    pppppplStack_f8 = (long ******)0x0;
    ppppplStack_f0 = (long *****)0x0;
    uStack_e8 = 0x8000000000000000;
    cVar3 = *(char *)ppppppplVar17;
    pppppplStack_100 = (long ******)ppppppplVar17;
    if (cVar3 == '\0') {
      uStack_e8 = 1;
    }
    else if (cVar3 == '\x02') {
      ppppplStack_f0 = *ppppppplVar17[1];
    }
    else if (cVar3 == '\x01') {
      pppppplStack_f8 = (long ******)*ppppppplVar17[1];
    }
    else {
      uStack_e8 = 0;
    }
    while( true ) {
      pppppplStack_198 = (long ******)0x0;
      pppplStack_190 = (long ****)0x0;
      uStack_188 = 0x8000000000000000;
      if (*(char *)ppppppplVar17 == '\x02') {
        pppplStack_190 = (long ****)ppppppplVar17[1][1];
      }
      else if (*(char *)ppppppplVar17 == '\x01') {
        pppppplStack_198 = ppppppplVar17[1] + 1;
      }
      else {
        uStack_188 = 1;
      }
      ppppppplVar8 = &pppppplStack_100;
      pppppplStack_1a0 = (long ******)ppppppplVar17;
      FUN_10937c708(ppppppplVar8,&pppppplStack_1a0);
      if ((int)ppppppplVar8 != 0) break;
      lVar14 = *param_2;
      FUN_10937c560(&pppppplStack_100);
      FUN_10937c804(&pppppplStack_1a0);
      lVar14 = lVar14 + 0x188;
      FUN_1092b09c4(lVar14,&pppppplStack_1a0);
      if ((long)pppplStack_190 < 0) {
        __ZdlPv(pppppplStack_1a0);
      }
      if (lVar14 != 0) {
        lVar11 = *param_2;
        uVar2 = *(undefined4 *)(lVar14 + 0x28);
        ppppppplVar8 = &pppppplStack_100;
        FUN_1095a27d4();
        lVar11 = lVar11 + 0x1b0;
        pppppplStack_1a0 = (long ******)ppppppplVar8;
        FUN_1092afa68(lVar11,ppppppplVar8,&UNK_10dd5b8f9,&pppppplStack_1a0,&pppppplStack_210);
        *(undefined4 *)(lVar11 + 0x28) = uVar2;
        lVar14 = *param_2;
        ppppppplVar8 = &pppppplStack_100;
        FUN_1095a27d4(ppppppplVar8);
        func_0x000107c2827c(lVar14 + 0x160,ppppppplVar8,ppppppplVar8);
      }
      FUN_10937c698(&pppppplStack_100);
    }
  }
  pppppplStack_100 = apppppplStack_298[0];
  pppppplStack_f8 = (long ******)0x0;
  ppppplStack_f0 = (long *****)0x0;
  uStack_e8 = 0x8000000000000000;
  if (*(char *)apppppplStack_298[0] == '\x01') {
    ppppppplVar17 = (long *******)apppppplStack_298[0][1];
    FUN_10938ce90(ppppppplVar17,&PTR_DAT_110afdd00);
    pppppplStack_f8 = (long ******)ppppppplVar17;
  }
  else if (*(char *)apppppplStack_298[0] == '\x02') {
    ppppplStack_f0 = (long *****)apppppplStack_298[0][1][1];
  }
  else {
    uStack_e8 = 1;
  }
  pppppplStack_198 = (long ******)0x0;
  pppplStack_190 = (long ****)0x0;
  uStack_188 = 0x8000000000000000;
  if (*(char *)apppppplStack_298[0] == '\x02') {
    pppplStack_190 = apppppplStack_298[0][1][1];
  }
  else if (*(char *)apppppplStack_298[0] == '\x01') {
    pppppplStack_198 = (long ******)(apppppplStack_298[0][1] + 1);
  }
  else {
    uStack_188 = 1;
  }
  ppppppplVar17 = &pppppplStack_100;
  pppppplStack_1a0 = apppppplStack_298[0];
  FUN_10937c708(ppppppplVar17,&pppppplStack_1a0);
  if (((ulong)ppppppplVar17 & 1) == 0) {
    ppppppplVar17 = &pppppplStack_100;
    FUN_10937c560();
    pppppplStack_198 = (long ******)0x0;
    pppplStack_190 = (long ****)0x0;
    uStack_188 = 0x8000000000000000;
    cVar3 = *(char *)ppppppplVar17;
    if (cVar3 == '\0') {
      uStack_188 = 1;
    }
    else if (cVar3 == '\x02') {
      pppplStack_190 = (long ****)*ppppppplVar17[1];
    }
    else if (cVar3 == '\x01') {
      pppppplStack_198 = (long ******)*ppppppplVar17[1];
    }
    else {
      uStack_188 = 0;
    }
    pppppplStack_1a0 = (long ******)ppppppplVar17;
    while( true ) {
      pppppplStack_208 = (long ******)0x0;
      ppppplStack_200 = (long *****)0x0;
      ppppplStack_1f8 = (long *****)0x8000000000000000;
      if (*(char *)ppppppplVar17 == '\x02') {
        ppppplStack_200 = ppppppplVar17[1][1];
      }
      else if (*(char *)ppppppplVar17 == '\x01') {
        pppppplStack_208 = ppppppplVar17[1] + 1;
      }
      else {
        ppppplStack_1f8 = (long *****)0x1;
      }
      ppppppplVar8 = &pppppplStack_1a0;
      pppppplStack_210 = (long ******)ppppppplVar17;
      FUN_10937c708(ppppppplVar8,&pppppplStack_210);
      if ((int)ppppppplVar8 != 0) break;
      FUN_10937c560(&pppppplStack_1a0);
      FUN_10937c260(&pppppplStack_210);
      pppppplStack_150 = (long ******)0x0;
      pppppplStack_148 = (long ******)0x0;
      ppppplStack_140 = (long *****)0x0;
      func_0x000107c27e9c(&pppppplStack_150,
                          ((long)pppppplStack_208 - (long)pppppplStack_210 >> 3) *
                          -0x5555555555555555);
      pppppplVar15 = pppppplStack_208;
      for (ppppppplVar8 = (long *******)pppppplStack_210; ppppppplVar8 != (long *******)pppppplVar15
          ; ppppppplVar8 = ppppppplVar8 + 3) {
        lVar14 = *param_2 + 0x188;
        FUN_1092b09c4(lVar14,ppppppplVar8);
        if (lVar14 != 0) {
          FUN_10923b3a0(&pppppplStack_150,lVar14 + 0x28);
        }
      }
      lVar14 = *param_2;
      ppppppplVar8 = &pppppplStack_1a0;
      FUN_1095a27d4();
      lVar14 = lVar14 + 0x1d8;
      pppppplStack_170 = (long ******)ppppppplVar8;
      FUN_1095a3388(lVar14,ppppppplVar8,&pppppplStack_170);
      lVar11 = *(long *)(lVar14 + 0x28);
      if (lVar11 != 0) {
        *(long *)(lVar14 + 0x30) = lVar11;
        __ZdlPv();
        *(long *)(lVar14 + 0x28) = 0;
        *(undefined8 *)(lVar14 + 0x30) = 0;
        *(undefined8 *)(lVar14 + 0x38) = 0;
      }
      *(long *******)(lVar14 + 0x30) = pppppplStack_148;
      *(long *******)(lVar14 + 0x28) = pppppplStack_150;
      *(long ******)(lVar14 + 0x38) = ppppplStack_140;
      pppppplStack_148 = (long ******)0x0;
      ppppplStack_140 = (long *****)0x0;
      pppppplStack_150 = (long ******)0x0;
      lVar14 = *param_2;
      ppppppplVar8 = &pppppplStack_1a0;
      FUN_1095a27d4(ppppppplVar8);
      func_0x000107c2827c(lVar14 + 0x160,ppppppplVar8,ppppppplVar8);
      if ((long *******)pppppplStack_150 != (long *******)0x0) {
        pppppplStack_148 = pppppplStack_150;
        __ZdlPv();
      }
      pppppplStack_150 = (long ******)&pppppplStack_210;
      func_0x000104c607c8(&pppppplStack_150);
      FUN_10937c698(&pppppplStack_1a0);
    }
  }
  func_0x00010951ec08(&pppppplStack_228,pppppplStack_220);
  while( true ) {
    lVar14 = param_2[1];
    lVar11 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar11;
    if (lVar14 != 0) {
      plVar18 = (long *)(lVar14 + 8);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_109380f8c(apppppplStack_298);
    plVar18 = plStack_288;
    plStack_288 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    if (lStack_118 < 0) {
      __ZdlPv(ppppplStack_128);
    }
    FUN_109380f8c(apppppplStack_1b8);
LAB_1095a1abc:
    plVar18 = plStack_1a8;
    plStack_1a8 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
    ___stack_chk_fail();
LAB_1095a1ecc:
    iVar6 = 0x13732fd0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_1095a289c(&pppppplStack_d0);
      FUN_1095a28f4(auStack_a0);
      func_0x000104bd4884(0x113732fe0,&pppppplStack_d0,2);
      lVar14 = 0x30;
      do {
        func_0x000104acfb5c((long)&pppppplStack_d0 + lVar14);
        lVar14 = lVar14 + -0x30;
      } while (lVar14 != -0x30);
      ___cxa_atexit(FUN_1095a27cc,0x113732fe0,0x100000000);
      ___cxa_guard_release(0x113732fd0);
    }
LAB_1095a1214:
    if ((bRam0000000113732fd8 & 1) == 0) {
      iVar6 = 0x13732fd8;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        func_0x000107c31940(&pppppplStack_1a0,&DAT_10f5750e2);
        func_0x000107c31940(&pppppplStack_100,&DAT_10f2c6c34);
        func_0x000107c31940(&uStack_e8,&DAT_10f5750e7);
        pppppplStack_210 = (long ******)0x0;
        pppppplStack_208 = (long ******)0x0;
        ppppplStack_200 = (long *****)0x0;
        func_0x000107c2ac94(&pppppplStack_210,&pppppplStack_100,&pppppplStack_d0,2);
        FUN_1095a294c(&pppppplStack_d0,&pppppplStack_1a0,&pppppplStack_210);
        FUN_1095a2fa8();
        func_0x000109379cd0(&pppppplStack_d0);
        pppppplStack_170 = (long ******)&pppppplStack_210;
        func_0x000104c607c8(&pppppplStack_170);
        lVar14 = 0;
        do {
          if ((&cStack_d1)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)&uStack_e8 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x30);
        if ((long)pppplStack_190 < 0) {
          __ZdlPv(pppppplStack_1a0);
        }
        ___cxa_atexit(0x1095a27d0,0x113733008,0x100000000);
        ___cxa_guard_release(0x113732fd8);
      }
    }
    pppppplStack_d0 = (long ******)&pppppplStack_150;
    uStack_c8 = (long *******)0x0;
    ppppplStack_c0 = (long *****)0x0;
    lStack_b8 = -0x8000000000000000;
    if ((char)pppppplStack_150 == '\0') {
      lStack_b8 = 1;
    }
    else if ((char)pppppplStack_150 == '\x02') {
      ppppplStack_c0 = *pppppplStack_148;
    }
    else if ((char)pppppplStack_150 == '\x01') {
      uStack_c8 = (long *******)*pppppplStack_148;
    }
    else {
      lStack_b8 = 0;
    }
    while( true ) {
      pppppplStack_f8 = (long ******)0x0;
      ppppplStack_f0 = (long *****)0x0;
      uStack_e8 = 0x8000000000000000;
      if ((char)pppppplStack_150 == '\x02') {
        ppppplStack_f0 = pppppplStack_148[1];
      }
      else if ((char)pppppplStack_150 == '\x01') {
        pppppplStack_f8 = pppppplStack_148 + 1;
      }
      else {
        uStack_e8 = 1;
      }
      ppppppplVar17 = &pppppplStack_d0;
      pppppplStack_100 = (long ******)&pppppplStack_150;
      FUN_109379420(ppppppplVar17,&pppppplStack_100);
      plVar18 = plRam0000000113732ff0;
      if ((int)ppppppplVar17 != 0) break;
      ppppppplVar17 = &pppppplStack_d0;
      FUN_1094a855c();
      lVar14 = 0x113732fe0;
      func_0x000104c5e210(0x113732fe0,ppppppplVar17);
      if ((lVar14 == 0) &&
         (lVar14 = 0x113733008, FUN_1095a32a4(0x113733008,ppppppplVar17), lVar14 == 0)) {
        ppppppplVar8 = apppppplStack_298;
        func_0x0001093782cc(ppppppplVar8,ppppppplVar17,0);
        lVar14 = *param_2 + 0x188;
        pppppplStack_100 = (long ******)ppppppplVar17;
        FUN_1092afa68(lVar14,ppppppplVar17,&UNK_10dd5b8f9,&pppppplStack_100,&pppppplStack_1a0);
        *(int *)(lVar14 + 0x28) = (int)ppppppplVar8;
        func_0x000107c2827c(*param_2 + 0x160,ppppppplVar17,ppppppplVar17);
      }
      FUN_109386b30(&pppppplStack_d0);
    }
    for (; plVar1 = plRam0000000113733018, plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
      ppppppplVar17 = (long *******)(plVar18 + 2);
      func_0x000107c2827c(*param_2 + 0x160,ppppppplVar17,ppppppplVar17);
      lVar14 = *param_2 + 0x188;
      FUN_1092b09c4(lVar14,plVar18 + 5);
      if (lVar14 != 0) {
        uVar2 = *(undefined4 *)(lVar14 + 0x28);
        lVar14 = *param_2 + 0x1b0;
        pppppplStack_d0 = (long ******)ppppppplVar17;
        FUN_1092afa68(lVar14,ppppppplVar17,&UNK_10dd5b8f9,&pppppplStack_d0,&pppppplStack_100);
        *(undefined4 *)(lVar14 + 0x28) = uVar2;
      }
    }
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      pppppplStack_d0 = (long ******)0x0;
      uStack_c8 = (long *******)0x0;
      ppppplStack_c0 = (long *****)0x0;
      func_0x000107c27e9c(&pppppplStack_d0,(plVar1[6] - plVar1[5] >> 3) * -0x5555555555555555);
      lVar11 = plVar1[6];
      for (lVar14 = plVar1[5]; lVar14 != lVar11; lVar14 = lVar14 + 0x18) {
        lVar10 = *param_2 + 0x188;
        FUN_1092b09c4(lVar10,lVar14);
        if (lVar10 != 0) {
          FUN_10923b3a0(&pppppplStack_d0,lVar10 + 0x28);
        }
      }
      ppppppplVar17 = (long *******)(plVar1 + 2);
      lVar14 = *param_2 + 0x1d8;
      pppppplStack_100 = (long ******)ppppppplVar17;
      FUN_1095a3388(lVar14,ppppppplVar17,&pppppplStack_100);
      lVar11 = *(long *)(lVar14 + 0x28);
      if (lVar11 != 0) {
        *(long *)(lVar14 + 0x30) = lVar11;
        __ZdlPv();
        *(long *)(lVar14 + 0x28) = 0;
        *(undefined8 *)(lVar14 + 0x30) = 0;
        *(undefined8 *)(lVar14 + 0x38) = 0;
      }
      *(long ********)(lVar14 + 0x30) = uStack_c8;
      *(long *******)(lVar14 + 0x28) = pppppplStack_d0;
      *(long ******)(lVar14 + 0x38) = ppppplStack_c0;
      uStack_c8 = (long *******)0x0;
      ppppplStack_c0 = (long *****)0x0;
      pppppplStack_d0 = (long ******)0x0;
      func_0x000107c2827c(*param_2 + 0x160,ppppppplVar17,ppppppplVar17);
      if ((long *******)pppppplStack_d0 != (long *******)0x0) {
        uStack_c8 = (long *******)pppppplStack_d0;
        __ZdlPv();
      }
    }
    FUN_109380ffc(&pppppplStack_148,(ulong)pppppplStack_150 & 0xff);
  }
  return;
}



/* Entry: 1095a27cc; end: 1095a27d3;  */

long * FUN_1095a27cc(long *param_1)

{
  long lVar1;
  
  func_0x000104c4f97c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095a27d4; end: 1095a289b;  */

long FUN_1095a27d4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (*(char *)*param_1 == '\x01') {
    return param_1[1] + 0x20;
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  func_0x000107c31940(auStack_48,&UNK_10f56ea6e);
  FUN_10937951c(uVar2,0xcf,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4550,FUN_10937964c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1095a2864);
  (*pcVar1)();
}



/* Entry: 1095a289c; end: 1095a28f3;  */

long FUN_1095a289c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c31940(param_1,&DAT_10f2db6b0);
  func_0x000107c31940(lVar1 + 0x18,"background");
  return param_1;
}



/* Entry: 1095a28f4; end: 1095a294b;  */

long FUN_1095a28f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c31940(param_1,"body");
  func_0x000107c31940(lVar1 + 0x18,"background");
  return param_1;
}



/* Entry: 1095a294c; end: 1095a29df;  */

undefined8 * FUN_1095a294c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1094a9128();
  return param_1;
}



/* Entry: 1095a29e0; end: 1095a2a37;  */

long FUN_1095a29e0(long param_1)

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



/* Entry: 1095a2a38; end: 1095a2a47;  */

void FUN_1095a2a38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afdd18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1095a2a48; end: 1095a2a67;  */

void FUN_1095a2a48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afdd18;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095a2a68; end: 1095a2b63;  */

void FUN_1095a2a68(long param_1)

{
  long lStack_28;
  
  FUN_1095a2b68(param_1 + 0x1f0);
  func_0x0001092b0b8c(param_1 + 0x1c8);
  func_0x0001092b0b8c(param_1 + 0x1a0);
  func_0x000107c2826c(param_1 + 0x178);
  lStack_28 = param_1 + 0x160;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1 + 0x140;
  func_0x000104c607c8(&lStack_28);
  func_0x0001095a2e38(param_1 + 0x110);
  lStack_28 = param_1 + 0xf8;
  func_0x000104c607c8(&lStack_28);
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xd8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 0xc0);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0xa8;
  func_0x000104c607c8(&lStack_28);
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  return;
}



/* Entry: 1095a2b64; end: 1095a2b67;  */

void FUN_1095a2b64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095a2b68; end: 1095a2bdb;  */

long * FUN_1095a2b68(long *param_1)

{
  long lVar1;
  
  func_0x0001095a2ba0(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095a2bdc; end: 1095a2cab;  */

void FUN_1095a2bdc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_1095a2c24:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        if ((char)param_1[1] == '\x01') {
          if (*(char *)(param_2 + 0x27) < '\0') {
            __ZdlPv(*(undefined8 *)(param_2 + 0x10));
          }
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_1095a2c24;
  }
  return;
}



/* Entry: 1095a2cac; end: 1095a2fa7;  */

void FUN_1095a2cac(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      if ((char)param_1[1] == '\x01') {
        if (*(char *)(param_2 + 0x27) < '\0') {
          __ZdlPv(*(undefined8 *)(param_2 + 0x10));
        }
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 1095a2fa8; end: 1095a32a3;  */

void FUN_1095a2fa8(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong unaff_x26;
  long lVar9;
  long lVar10;
  
  uRam0000000113733010 = 0;
  lRam0000000113733008 = 0;
  lRam0000000113733020 = 0;
  plRam0000000113733018 = (long *)0x0;
  fRam0000000113733028 = 1.0;
  if (param_2 != 0) {
    plVar8 = param_1 + param_2 * 6;
    do {
      uVar5 = 0x113733008;
      func_0x000107c31944(0x113733008,param_1);
      uVar4 = uRam0000000113733010;
      if (uRam0000000113733010 != 0) {
        uVar7 = uRam0000000113733010 - 1;
        if ((uRam0000000113733010 & uVar7) == 0) {
          unaff_x26 = uVar7 & uVar5;
        }
        else {
          unaff_x26 = uVar5;
          if (uRam0000000113733010 <= uVar5) {
            uVar3 = 0;
            if (uRam0000000113733010 != 0) {
              uVar3 = uVar5 / uRam0000000113733010;
            }
            unaff_x26 = uVar5 - uVar3 * uRam0000000113733010;
          }
        }
        plVar2 = *(long **)(lRam0000000113733008 + unaff_x26 * 8);
        if (plVar2 != (long *)0x0) {
          for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
            uVar3 = plVar2[1];
            if (uVar3 == uVar5) {
              uVar3 = 0x113733008;
              func_0x000104c4fbc4(0x113733008,plVar2 + 2,param_1);
              if ((uVar3 & 1) != 0) goto LAB_1095a3230;
            }
            else {
              if ((uVar4 & uVar7) == 0) {
                uVar3 = uVar3 & uVar7;
              }
              else if (uVar4 <= uVar3) {
                uVar1 = 0;
                if (uVar4 != 0) {
                  uVar1 = uVar3 / uVar4;
                }
                uVar3 = uVar3 - uVar1 * uVar4;
              }
              if (uVar3 != unaff_x26) break;
            }
          }
        }
      }
      plVar2 = (long *)0x40;
      __Znwm();
      *plVar2 = 0;
      plVar2[1] = uVar5;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        func_0x000107c3192c(plVar2 + 2,*param_1,param_1[1]);
      }
      else {
        lVar10 = param_1[1];
        lVar9 = *param_1;
        plVar2[4] = param_1[2];
        plVar2[3] = lVar10;
        plVar2[2] = lVar9;
      }
      plVar2[5] = 0;
      plVar2[6] = 0;
      plVar2[7] = 0;
      FUN_1094a9128();
      if ((uVar4 == 0) || (fRam0000000113733028 * (float)uVar4 < (float)(lRam0000000113733020 + 1)))
      {
        uVar7 = 1;
        if (2 < uVar4) {
          uVar7 = (ulong)((uVar4 & uVar4 - 1) != 0);
        }
        uVar7 = uVar7 | uVar4 << 1;
        uVar4 = (ulong)((float)(lRam0000000113733020 + 1) / fRam0000000113733028);
        if (uVar7 <= uVar4) {
          uVar7 = uVar4;
        }
        func_0x000107c2ac84(0x113733008,uVar7);
        uVar4 = uRam0000000113733010;
        if ((uRam0000000113733010 & uRam0000000113733010 - 1) == 0) {
          unaff_x26 = uRam0000000113733010 - 1 & uVar5;
        }
        else {
          unaff_x26 = uVar5;
          if (uRam0000000113733010 <= uVar5) {
            uVar7 = 0;
            if (uRam0000000113733010 != 0) {
              uVar7 = uVar5 / uRam0000000113733010;
            }
            unaff_x26 = uVar5 - uVar7 * uRam0000000113733010;
          }
        }
      }
      lVar9 = lRam0000000113733008;
      plVar6 = *(long **)(lRam0000000113733008 + unaff_x26 * 8);
      if (plVar6 == (long *)0x0) {
        *plVar2 = (long)plRam0000000113733018;
        plRam0000000113733018 = plVar2;
        *(undefined8 *)(lVar9 + unaff_x26 * 8) = 0x113733018;
        if (*plVar2 != 0) {
          uVar5 = *(ulong *)(*plVar2 + 8);
          if ((uVar4 & uVar4 - 1) == 0) {
            uVar5 = uVar5 & uVar4 - 1;
          }
          else if (uVar4 <= uVar5) {
            uVar7 = 0;
            if (uVar4 != 0) {
              uVar7 = uVar5 / uVar4;
            }
            uVar5 = uVar5 - uVar7 * uVar4;
          }
          *(long **)(lRam0000000113733008 + uVar5 * 8) = plVar2;
        }
      }
      else {
        *plVar2 = *plVar6;
        *plVar6 = (long)plVar2;
      }
      lRam0000000113733020 = lRam0000000113733020 + 1;
LAB_1095a3230:
      param_1 = param_1 + 6;
    } while (param_1 != plVar8);
  }
  return;
}



/* Entry: 1095a32a4; end: 1095a3387;  */

long FUN_1095a32a4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 1095a3388; end: 1095a37a7;  */

long * FUN_1095a3388(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar6 = (long *)*param_3;
  plVar5 = (long *)0x40;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*plVar6,plVar6[1]);
  }
  else {
    lVar4 = plVar6[1];
    lVar3 = *plVar6;
    plVar5[4] = plVar6[2];
    plVar5[3] = lVar4;
    plVar5[2] = lVar3;
  }
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1095a36a4;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_1095a352c:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1095a378c);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_1095a352c;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_1095a36a4:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1095a37a8; end: 1095a37ef;  */

void FUN_1095a37a8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010951eca0(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095a37f0; end: 1095a396f;  */

long * FUN_1095a37f0(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if ((param_1 + 1 == param_2) ||
     (uVar2 = param_5, func_0x000107c2abd4(param_5,param_2 + 4), ((uint)uVar2 >> 7 & 1) != 0)) {
    plVar6 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar3 = param_2;
      plVar4 = (long *)*param_2;
      if ((long *)*param_2 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar3[2];
          bVar1 = (long *)*plVar6 == plVar3;
          plVar3 = plVar6;
        } while (bVar1);
      }
      else {
        do {
          plVar6 = plVar4;
          plVar4 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      plVar3 = plVar6 + 4;
      func_0x000107c2abd4(plVar3,param_5);
      if (((uint)plVar3 >> 7 & 1) == 0) {
SUB_10954a9d0:
        param_1 = param_1 + 1;
        plVar3 = (long *)*param_1;
        plVar6 = param_1;
        while (plVar3 != (long *)0x0) {
          while (plVar6 = plVar3, uVar2 = param_5, func_0x000107c2abd4(param_5,plVar6 + 4),
                ((uint)uVar2 >> 7 & 1) != 0) {
            plVar3 = (long *)*plVar6;
            param_1 = plVar6;
            if ((long *)*plVar6 == (long *)0x0) goto LAB_10954aa3c;
          }
          plVar3 = plVar6 + 4;
          func_0x000107c2abd4(plVar3,param_5);
          if (((uint)plVar3 >> 7 & 1) == 0) break;
          param_1 = plVar6 + 1;
          plVar3 = (long *)*param_1;
        }
LAB_10954aa3c:
        *param_3 = (long)plVar6;
        return param_1;
      }
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar6;
      param_2 = plVar6 + 1;
    }
  }
  else {
    plVar6 = param_2 + 4;
    func_0x000107c2abd4(plVar6,param_5);
    if (((uint)plVar6 >> 7 & 1) == 0) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      param_2 = param_4;
    }
    else {
      plVar5 = param_2 + 1;
      plVar4 = (long *)*plVar5;
      plVar6 = param_2;
      plVar3 = plVar4;
      if (plVar4 == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar1 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar1);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (plVar7 != param_1 + 1) {
        uVar2 = param_5;
        func_0x000107c2abd4(param_5,plVar7 + 4);
        if (((uint)uVar2 >> 7 & 1) == 0) goto SUB_10954a9d0;
        plVar4 = (long *)*plVar5;
      }
      if (plVar4 == (long *)0x0) {
        *param_3 = (long)param_2;
        param_2 = plVar5;
      }
      else {
        *param_3 = (long)plVar7;
        param_2 = plVar7;
      }
    }
  }
  return param_2;
}



/* Entry: 1095a3970; end: 1095a3ea7;  */

void FUN_1095a3970(long param_1,uint *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  long ***ppplVar12;
  long *plVar13;
  long **pplVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  uint *puVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  uint uVar22;
  double dVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uStack_568;
  undefined8 uStack_560;
  long ***ppplStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long ***ppplStack_538;
  undefined8 uStack_530;
  undefined4 auStack_528 [2];
  long ***ppplStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  long lStack_4d8;
  undefined4 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long **pplStack_4b0;
  long **pplStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  uint uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  long lStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  long **pplStack_278;
  long **pplStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  long *plStack_258;
  long **pplStack_250;
  long **pplStack_248;
  undefined8 uStack_240;
  long lStack_238;
  uint *puStack_230;
  undefined8 uStack_228;
  uint *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  uint *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  uint *puStack_1e0;
  undefined8 uStack_1d8;
  uint auStack_1d0 [2];
  uint *puStack_1c8;
  undefined8 uStack_1c0;
  uint uStack_1b8;
  uint uStack_1b4;
  uint *puStack_1b0;
  undefined8 uStack_1a8;
  uint uStack_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long lStack_168;
  undefined4 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint uStack_140;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long lStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint uStack_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_140 = 0x42ff0000;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_13c = 0;
  lStack_100 = (long)&uStack_13c + 4;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_114 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_1b8 = *(int *)(param_1 + 8) << 1 | 1;
  uStack_198 = SUB84(param_2,0);
  uStack_194 = (undefined4)((ulong)param_2 >> 0x20);
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_1a0 = 0x1010000;
  uStack_e0 = 0x2010000;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_1b4 = uStack_1b8;
  puStack_f8 = &uStack_f0;
  uStack_d8 = &uStack_140;
  FUN_109b44a6c(0,0,&uStack_1a0,&uStack_e0,&uStack_1b8,4);
  fVar41 = *(float *)(param_1 + 0xc);
  uStack_1a0 = 0x42ff0000;
  puStack_160 = &uStack_198;
  uStack_194 = 0;
  uStack_190 = 0;
  iStack_19c = 0;
  uStack_198 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_174 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_e0 = 1;
  iStack_dc = 0x100;
  puStack_158 = &uStack_150;
  FUN_109a83fd0(&uStack_1a0,2,&uStack_e0,0);
  lVar18 = 0;
  fVar24 = (0.5 - fVar41 * 0.5) * 255.0;
  fVar41 = (fVar41 * 0.5 + 0.5) * 255.0 - fVar24;
  iVar27 = 0xe;
  iVar28 = 0xf;
  iVar25 = 0xc;
  iVar26 = 0xd;
  iVar31 = 10;
  iVar32 = 0xb;
  iVar29 = 8;
  iVar30 = 9;
  iVar35 = 6;
  iVar36 = 7;
  iVar33 = 4;
  iVar34 = 5;
  iVar39 = 2;
  iVar40 = 3;
  iVar37 = 0;
  iVar38 = 1;
  do {
    auVar42._4_4_ = iVar34;
    auVar42._0_4_ = iVar33;
    auVar42._8_4_ = iVar35;
    auVar42._12_4_ = iVar36;
    auVar42 = NEON_ucvtf(auVar42,4);
    auVar45._4_4_ = iVar38;
    auVar45._0_4_ = iVar37;
    auVar45._8_4_ = iVar39;
    auVar45._12_4_ = iVar40;
    auVar45 = NEON_ucvtf(auVar45,4);
    auVar48._4_4_ = iVar26;
    auVar48._0_4_ = iVar25;
    auVar48._8_4_ = iVar27;
    auVar48._12_4_ = iVar28;
    auVar48 = NEON_ucvtf(auVar48,4);
    auVar51._4_4_ = iVar30;
    auVar51._0_4_ = iVar29;
    auVar51._8_4_ = iVar31;
    auVar51._12_4_ = iVar32;
    auVar51 = NEON_ucvtf(auVar51,4);
    auVar52._0_4_ = ((auVar51._0_4_ - fVar24) / fVar41) * 255.0;
    auVar52._4_4_ = ((auVar51._4_4_ - fVar24) / fVar41) * 255.0;
    auVar52._8_4_ = ((auVar51._8_4_ - fVar24) / fVar41) * 255.0;
    auVar52._12_4_ = ((auVar51._12_4_ - fVar24) / fVar41) * 255.0;
    auVar49._0_4_ = ((auVar48._0_4_ - fVar24) / fVar41) * 255.0;
    auVar49._4_4_ = ((auVar48._4_4_ - fVar24) / fVar41) * 255.0;
    auVar49._8_4_ = ((auVar48._8_4_ - fVar24) / fVar41) * 255.0;
    auVar49._12_4_ = ((auVar48._12_4_ - fVar24) / fVar41) * 255.0;
    auVar46._0_4_ = ((auVar45._0_4_ - fVar24) / fVar41) * 255.0;
    auVar46._4_4_ = ((auVar45._4_4_ - fVar24) / fVar41) * 255.0;
    auVar46._8_4_ = ((auVar45._8_4_ - fVar24) / fVar41) * 255.0;
    auVar46._12_4_ = ((auVar45._12_4_ - fVar24) / fVar41) * 255.0;
    auVar43._0_4_ = ((auVar42._0_4_ - fVar24) / fVar41) * 255.0;
    auVar43._4_4_ = ((auVar42._4_4_ - fVar24) / fVar41) * 255.0;
    auVar43._8_4_ = ((auVar42._8_4_ - fVar24) / fVar41) * 255.0;
    auVar43._12_4_ = ((auVar42._12_4_ - fVar24) / fVar41) * 255.0;
    auVar48 = NEON_ext(auVar43,auVar43,8,1);
    auVar51 = NEON_ext(auVar46,auVar46,8,1);
    auVar42 = NEON_ext(auVar49,auVar49,8,1);
    auVar45 = NEON_ext(auVar52,auVar52,8,1);
    auVar53._4_4_ = (int)(long)(float)(int)auVar52._4_4_;
    auVar53._0_4_ = (int)(long)(float)(int)auVar52._0_4_;
    auVar53._8_4_ = (int)(long)(float)(int)auVar45._0_4_;
    auVar53._12_4_ = (int)(long)(float)(int)auVar45._4_4_;
    auVar50._4_4_ = (int)(long)(float)(int)auVar49._4_4_;
    auVar50._0_4_ = (int)(long)(float)(int)auVar49._0_4_;
    auVar50._8_4_ = (int)(long)(float)(int)auVar42._0_4_;
    auVar50._12_4_ = (int)(long)(float)(int)auVar42._4_4_;
    auVar47._4_4_ = (int)(long)(float)(int)auVar46._4_4_;
    auVar47._0_4_ = (int)(long)(float)(int)auVar46._0_4_;
    auVar47._8_4_ = (int)(long)(float)(int)auVar51._0_4_;
    auVar47._12_4_ = (int)(long)(float)(int)auVar51._4_4_;
    auVar44._4_4_ = (int)(long)(float)(int)auVar43._4_4_;
    auVar44._0_4_ = (int)(long)(float)(int)auVar43._0_4_;
    auVar44._8_4_ = (int)(long)(float)(int)auVar48._0_4_;
    auVar44._12_4_ = (int)(long)(float)(int)auVar48._4_4_;
    auVar48 = NEON_smax(auVar44,ZEXT216(0),4);
    auVar51 = NEON_smax(auVar47,ZEXT216(0),4);
    auVar42 = NEON_smax(auVar50,ZEXT216(0),4);
    auVar45 = NEON_smax(auVar53,ZEXT216(0),4);
    auVar5._8_8_ = 0xff000000ff;
    auVar5._0_8_ = 0xff000000ff;
    auVar45 = NEON_smin(auVar45,auVar5,4);
    auVar6._8_8_ = 0xff000000ff;
    auVar6._0_8_ = 0xff000000ff;
    auVar42 = NEON_smin(auVar42,auVar6,4);
    auVar7._8_8_ = 0xff000000ff;
    auVar7._0_8_ = 0xff000000ff;
    auVar51 = NEON_smin(auVar51,auVar7,4);
    auVar8._8_8_ = 0xff000000ff;
    auVar8._0_8_ = 0xff000000ff;
    auVar48 = NEON_smin(auVar48,auVar8,4);
    puVar4 = (undefined1 *)(CONCAT44(uStack_18c,uStack_190) + lVar18);
    puVar4[8] = auVar45[0];
    puVar4[9] = auVar45[4];
    puVar4[10] = auVar45[8];
    puVar4[0xb] = auVar45[0xc];
    puVar4[0xc] = auVar42[0];
    puVar4[0xd] = auVar42[4];
    puVar4[0xe] = auVar42[8];
    puVar4[0xf] = auVar42[0xc];
    *puVar4 = auVar51[0];
    puVar4[1] = auVar51[4];
    puVar4[2] = auVar51[8];
    puVar4[3] = auVar51[0xc];
    puVar4[4] = auVar48[0];
    puVar4[5] = auVar48[4];
    puVar4[6] = auVar48[8];
    puVar4[7] = auVar48[0xc];
    lVar18 = lVar18 + 0x10;
    iVar37 = iVar37 + 0x10;
    iVar38 = iVar38 + 0x10;
    iVar39 = iVar39 + 0x10;
    iVar40 = iVar40 + 0x10;
    iVar33 = iVar33 + 0x10;
    iVar34 = iVar34 + 0x10;
    iVar35 = iVar35 + 0x10;
    iVar36 = iVar36 + 0x10;
    iVar29 = iVar29 + 0x10;
    iVar30 = iVar30 + 0x10;
    iVar31 = iVar31 + 0x10;
    iVar32 = iVar32 + 0x10;
    iVar25 = iVar25 + 0x10;
    iVar26 = iVar26 + 0x10;
    iVar27 = iVar27 + 0x10;
    iVar28 = iVar28 + 0x10;
  } while (lVar18 != 0x100);
  uStack_e0 = 0x42ff0000;
  uStack_d8._4_4_ = 0;
  uStack_d0 = 0;
  iStack_dc = 0;
  uStack_d8._0_4_ = 0;
  puStack_a0 = &uStack_d8;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_1b8 = 0x2010000;
  uStack_1a8 = 0;
  puStack_1b0 = &uStack_e0;
  puStack_98 = &uStack_90;
  FUN_109a479a0(&uStack_140,&uStack_1b8);
  uStack_1a8 = 0;
  uStack_1b8 = 0x1010000;
  uStack_1c0 = 0;
  auStack_1d0[0] = 0x1010000;
  puStack_1c8 = &uStack_1a0;
  uStack_1e8 = 0x2010000;
  uStack_1d8 = 0;
  puVar10 = &uStack_1b8;
  puStack_1e0 = &uStack_e0;
  puStack_1b0 = &uStack_140;
  FUN_109a41f20(puVar10,auStack_1d0,&uStack_1e8);
  uStack_1b8 = 0x1010000;
  puStack_1b0 = &uStack_e0;
  uStack_1a8 = 0;
  FUN_109a91d90();
  puVar11 = &uStack_1b8;
  puVar17 = auStack_1d0;
  FUN_109ab9538(puVar11,puVar17,&uStack_1e8,0,0,puVar10);
  if (0.0 < (double)CONCAT44(uStack_1e4,uStack_1e8)) {
    uStack_1b8 = 0x2010000;
    uStack_1a8 = 0;
    puVar11 = &uStack_e0;
    puVar17 = &uStack_1b8;
    puStack_1b0 = param_2;
    FUN_109a479a0();
  }
  if (lStack_a8 != 0) {
    piVar1 = (int *)(lStack_a8 + 0x14);
    do {
      iVar25 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar25 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar25 + -1 == 0) {
      puVar11 = &uStack_e0;
      func_0x000109a848d4();
    }
  }
  lStack_a8 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (0 < iStack_dc) {
    lVar18 = 0;
    do {
      *(undefined4 *)((long)puStack_a0 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < iStack_dc);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    puVar11 = (uint *)puStack_98[-1];
    _free();
  }
  if (lStack_168 != 0) {
    piVar1 = (int *)(lStack_168 + 0x14);
    do {
      iVar25 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar25 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar25 + -1 == 0) {
      puVar11 = &uStack_1a0;
      func_0x000109a848d4();
    }
  }
  lStack_168 = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  if (0 < iStack_19c) {
    lVar18 = 0;
    do {
      puStack_160[lVar18] = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < iStack_19c);
  }
  if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
    puVar11 = (uint *)puStack_158[-1];
    _free();
  }
  if (lStack_108 != 0) {
    piVar1 = (int *)(lStack_108 + 0x14);
    do {
      iVar25 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar25 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar25 + -1 == 0) {
      puVar11 = &uStack_140;
      func_0x000109a848d4();
    }
  }
  lStack_108 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  if (0 < (int)uStack_13c) {
    lVar18 = 0;
    do {
      *(undefined4 *)(lStack_100 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uStack_13c);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    puVar11 = (uint *)puStack_f8[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar17 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_e0);
    func_0x00010567aa40(&uStack_1a0);
    func_0x00010567aa40(&uStack_140);
  }
  __Unwind_Resume(puVar11);
  uStack_228 = 0x2010000;
  pcStack_1f8 = FUN_1095a3ea8;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2b8 = 0;
  lStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_418._0_4_ = 0x42ff0000;
  puStack_3d8 = &uStack_410;
  uStack_410._4_4_ = 0;
  uStack_408._0_4_ = 0;
  uStack_418._4_4_ = 0;
  uStack_410._0_4_ = 0;
  uStack_3fc = 0;
  uStack_3f8 = 0;
  uStack_408._4_4_ = 0;
  uStack_400 = 0;
  uStack_3ec = 0;
  uStack_3f4 = 0;
  uStack_3f0 = 0;
  lStack_3e0 = 0;
  uStack_3e8 = 0;
  uStack_3e4 = 0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_240 = 0;
  pplStack_250._0_4_ = 0x1010000;
  pplStack_278._0_4_ = 0x2010000;
  uStack_268 = 0;
  plStack_298 = (long *)0x0;
  plStack_2a0 = (long *)0x0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  ppplVar12 = &pplStack_250;
  puStack_3d0 = &uStack_3c8;
  pplStack_270 = (long **)&uStack_418;
  pplStack_248 = (long **)puVar17;
  puStack_230 = &uStack_140;
  puStack_220 = &uStack_140;
  puStack_218 = &uStack_f0;
  puStack_210 = &uStack_150;
  puStack_208 = puVar11;
  puStack_200 = &stack0xfffffffffffffff0;
  FUN_109a4a0a4(ppplVar12,&pplStack_278,1,1,1,1,0x10,&plStack_2a0);
  plStack_2a0 = (long *)0x0;
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)0x0;
  pplStack_250 = (long **)CONCAT44(pplStack_250._4_4_,0x3010000);
  uStack_240 = 0;
  pplStack_278 = (long **)CONCAT44(pplStack_278._4_4_,0x8204000c);
  uStack_268 = 0;
  pplStack_270 = &plStack_2a0;
  pplStack_248 = (long **)&uStack_418;
  FUN_109a91d90();
  plStack_258 = (long *)0xffffffffffffffff;
  FUN_109adf8b0(&pplStack_250,&pplStack_278,ppplVar12,0,1,&plStack_258);
  if (plStack_298 == plStack_2a0) {
    if (lStack_2b8 != 0) {
      lStack_2b0 = lStack_2b8;
      __ZdlPv();
    }
    lStack_2b8 = 0;
    lStack_2b0 = 0;
    uStack_2a8 = 0;
  }
  else {
    plVar13 = plStack_2a0 + 3;
    plVar20 = plStack_2a0;
    if (plVar13 != plStack_298) {
      lVar18 = *plStack_2a0;
      plVar19 = plStack_2a0;
      do {
        plVar20 = plVar13;
        lVar9 = *plVar13;
        if ((ulong)(plVar13[1] - *plVar13) <= (ulong)(plVar19[1] - lVar18)) {
          plVar20 = plVar19;
          lVar9 = lVar18;
        }
        lVar18 = lVar9;
        plVar13 = plVar13 + 3;
        plVar19 = plVar20;
      } while (plVar13 != plStack_298);
    }
    if (plVar20 != &lStack_2b8) {
      FUN_1092c6040(&lStack_2b8,*plVar20,plVar20[1],plVar20[1] - *plVar20 >> 3);
    }
  }
  pplStack_250 = &plStack_2a0;
  FUN_1092cc3c0(&pplStack_250);
  if (lStack_3e0 != 0) {
    piVar1 = (int *)(lStack_3e0 + 0x14);
    do {
      iVar25 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar25 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar25 + -1 == 0) {
      func_0x000109a848d4(&uStack_418);
    }
  }
  lStack_3e0 = 0;
  uStack_400 = 0;
  uStack_3fc = 0;
  uStack_408._0_4_ = 0;
  uStack_408._4_4_ = 0;
  uStack_3f0 = 0;
  uStack_3ec = 0;
  uStack_3f8 = 0;
  uStack_3f4 = 0;
  if (0 < uStack_418._4_4_) {
    lVar18 = 0;
    do {
      *(undefined4 *)((long)puStack_3d8 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_418._4_4_);
  }
  if (puStack_3d0 != &uStack_3c8 && puStack_3d0 != (undefined8 *)0x0) {
    _free(puStack_3d0[-1]);
  }
  FUN_109a8261c(&uStack_418,puVar17[2],puVar17[3],0);
  (**(code **)(*(long *)CONCAT44(uStack_418._4_4_,(undefined4)uStack_418) + 0x18))
            ((long *)CONCAT44(uStack_418._4_4_,(undefined4)uStack_418),&uStack_418,puVar17,
             0xffffffff);
  FUN_10918eb6c(&uStack_418);
  pplStack_250 = (long **)0x0;
  pplStack_248 = (long **)0x0;
  uStack_240 = 0;
  FUN_1092c9014(&pplStack_250,lStack_2b8,lStack_2b0,lStack_2b0 - lStack_2b8 >> 3);
  plStack_2a0 = (long *)0x0;
  plStack_298 = (long *)0x0;
  plStack_290 = (long *)0x0;
  pplStack_270 = (long **)((ulong)pplStack_270 & 0xffffffffffffff00);
  plVar13 = (long *)0x18;
  pplStack_278 = &plStack_2a0;
  __Znwm();
  plStack_290 = plVar13 + 3;
  uStack_410 = &plStack_260;
  uStack_408 = &plStack_258;
  uStack_400 = uStack_400 & 0xffffff00;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = 0;
  plStack_2a0 = plVar13;
  plStack_298 = plVar13;
  plStack_260 = plVar13;
  plStack_258 = plVar13;
  uStack_418 = &plStack_2a0;
  FUN_1092c9014();
  plVar13 = plStack_258 + 3;
  uStack_400 = CONCAT31(uStack_400._1_3_,1);
  plStack_258 = plVar13;
  FUN_1095a4a78(&uStack_418);
  pplVar14 = pplStack_250;
  plStack_298 = plVar13;
  if (pplStack_250 != (long **)0x0) {
    pplStack_248 = pplStack_250;
    __ZdlPv();
  }
  pplStack_250 = (long **)CONCAT44(pplStack_250._4_4_,0x3010000);
  uStack_240 = 0;
  uStack_268 = 0;
  pplStack_278 = (long **)CONCAT44(pplStack_278._4_4_,0x8104000c);
  uStack_418._0_4_ = 0;
  uStack_418._4_4_ = 0x406fe000;
  uStack_410._0_4_ = 0;
  uStack_410._4_4_ = 0;
  uStack_408._0_4_ = 0;
  uStack_408._4_4_ = 0;
  uStack_400 = 0;
  uStack_3fc = 0;
  pplStack_270 = &plStack_2a0;
  pplStack_248 = (long **)puVar17;
  FUN_109a91d90();
  plStack_258 = (long *)0x0;
  ppplVar12 = &pplStack_278;
  FUN_109af08e8(&pplStack_250,ppplVar12,0,&uStack_418,0xffffffff,8,pplVar14,0x7fffffff);
  uStack_418 = &plStack_2a0;
  FUN_1092cc3c0(&uStack_418);
  lVar18 = lStack_2b8;
  if (lStack_2b8 != 0) {
    lStack_2b0 = lStack_2b8;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
    ___stack_chk_fail();
    if ((int)ppplVar12 != 0) {
      func_0x000104bd46a0();
      pplStack_250 = &plStack_2a0;
      FUN_1092cc3c0(&pplStack_250);
      func_0x00010567aa40(&uStack_418);
      if (lStack_2b8 != 0) {
        lStack_2b0 = lStack_2b8;
        __ZdlPv();
      }
    }
    __Unwind_Resume();
    pplStack_4b0 = (long **)0x0;
    pplStack_4a8 = (long **)0x0;
    uStack_4a0 = 0;
    uVar22 = (uint)(*(float *)(lVar18 + 8) *
                   (float)(*(int *)(ppplVar12 + 1) * *(int *)((long)ppplVar12 + 0xc)));
    if (0 < (int)uVar22) {
      uStack_510._0_4_ = 0x42ff0000;
      uStack_504 = 0;
      uStack_500 = 0;
      uStack_510._4_4_ = 0;
      uStack_508 = 0;
      puStack_4d0 = &uStack_508;
      uStack_4f4 = 0;
      uStack_4f0 = 0;
      uStack_4fc = 0;
      uStack_4f8 = 0;
      uStack_4e4 = 0;
      uStack_4ec = 0;
      uStack_4e8 = 0;
      lStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4dc = 0;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      uStack_518 = 0;
      auStack_528[0] = 0x1010000;
      uStack_540 = CONCAT44(uStack_540._4_4_,0x2010000);
      uStack_530 = 0;
      ppplStack_558 = (long ***)0x0;
      uStack_560 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      puVar15 = auStack_528;
      ppplStack_538 = (long ***)&uStack_510;
      ppplStack_520 = ppplVar12;
      puStack_4c8 = &uStack_4c0;
      FUN_109a4a0a4(puVar15,&uStack_540,1,1,1,1,0x10,&uStack_560);
      uStack_560 = CONCAT44(uStack_560._4_4_,0x3010000);
      uStack_550 = 0;
      auStack_528[0] = 0x8204000c;
      ppplStack_520 = &pplStack_4b0;
      uStack_518 = 0;
      ppplStack_558 = (long ***)&uStack_510;
      FUN_109a91d90();
      uStack_540 = 0xffffffffffffffff;
      FUN_109adf8b0(&uStack_560,auStack_528,puVar15,1,1,&uStack_540);
      dVar23 = 0.0;
      ppplStack_558 = (long ***)0x0;
      uStack_560 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      FUN_109a48880(ppplVar12,&uStack_560);
      if (pplStack_4a8 != pplStack_4b0) {
        lVar18 = 0;
        uVar21 = 0;
        do {
          ppplStack_558 = (long ***)((long)pplStack_4b0 + lVar18);
          uStack_550 = 0;
          uStack_560 = CONCAT44(uStack_560._4_4_,0x8103000c);
          puVar16 = &uStack_560;
          FUN_109b415b4(puVar16,0);
          if ((double)uVar22 < dVar23) {
            auStack_528[0] = 0x3010000;
            uStack_518 = 0;
            uStack_530 = 0;
            uStack_540 = CONCAT44(uStack_540._4_4_,0x8104000c);
            uStack_560 = 0x406fe00000000000;
            uStack_550 = 0;
            uStack_548 = 0;
            ppplStack_558 = (long ***)0x0;
            ppplStack_538 = &pplStack_4b0;
            ppplStack_520 = ppplVar12;
            FUN_109a91d90();
            dVar23 = 0.0;
            uStack_568 = 0;
            FUN_109af08e8(auStack_528,&uStack_540,uVar21,&uStack_560,0xffffffff,8,puVar16,0x7fffffff
                          ,&uStack_568);
          }
          uVar21 = uVar21 + 1;
          lVar18 = lVar18 + 0x18;
        } while (uVar21 < (ulong)(((long)pplStack_4a8 - (long)pplStack_4b0 >> 3) *
                                 -0x5555555555555555));
      }
      if (lStack_4d8 != 0) {
        piVar1 = (int *)(lStack_4d8 + 0x14);
        do {
          iVar25 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar25 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar25 + -1 == 0) {
          func_0x000109a848d4(&uStack_510);
        }
      }
      lStack_4d8 = 0;
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      uStack_500 = 0;
      uStack_4fc = 0;
      uStack_4e8 = 0;
      uStack_4e4 = 0;
      uStack_4f0 = 0;
      uStack_4ec = 0;
      if (0 < uStack_510._4_4_) {
        lVar18 = 0;
        do {
          puStack_4d0[lVar18] = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_510._4_4_);
      }
      if (puStack_4c8 != &uStack_4c0 && puStack_4c8 != (undefined8 *)0x0) {
        _free(puStack_4c8[-1]);
      }
    }
    uStack_510 = &pplStack_4b0;
    FUN_1092cc3c0(&uStack_510);
    return;
  }
  return;
}



/* Entry: 1095a3ea8; end: 1095a42f7;  */

void FUN_1095a3ea8(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long ***ppplVar6;
  long *plVar7;
  long **pplVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  double dVar16;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long ***ppplStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long ***ppplStack_348;
  undefined8 uStack_340;
  undefined4 auStack_338 [2];
  long ***ppplStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  long lStack_2e8;
  undefined4 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long **pplStack_2c0;
  long **pplStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  uint uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  long lStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long **pplStack_88;
  long **pplStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  long **pplStack_60;
  long **pplStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  uStack_228._0_4_ = 0x42ff0000;
  puStack_1e8 = &uStack_220;
  uStack_220._4_4_ = 0;
  uStack_218._0_4_ = 0;
  uStack_228._4_4_ = 0;
  uStack_220._0_4_ = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_218._4_4_ = 0;
  uStack_210 = 0;
  uStack_1fc = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  lStack_1f0 = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_50 = 0;
  pplStack_60._0_4_ = 0x1010000;
  pplStack_88._0_4_ = 0x2010000;
  uStack_78 = 0;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  ppplVar6 = &pplStack_60;
  puStack_1e0 = &uStack_1d8;
  pplStack_80 = (long **)&uStack_228;
  pplStack_58 = (long **)param_2;
  FUN_109a4a0a4(ppplVar6,&pplStack_88,1,1,1,1,0x10,&plStack_b0);
  plStack_b0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  pplStack_60 = (long **)CONCAT44(pplStack_60._4_4_,0x3010000);
  uStack_50 = 0;
  pplStack_88 = (long **)CONCAT44(pplStack_88._4_4_,0x8204000c);
  uStack_78 = 0;
  pplStack_80 = &plStack_b0;
  pplStack_58 = (long **)&uStack_228;
  FUN_109a91d90();
  plStack_68 = (long *)0xffffffffffffffff;
  FUN_109adf8b0(&pplStack_60,&pplStack_88,ppplVar6,0,1,&plStack_68);
  if (plStack_a8 == plStack_b0) {
    if (lStack_c8 != 0) {
      lStack_c0 = lStack_c8;
      __ZdlPv();
    }
    lStack_c8 = 0;
    lStack_c0 = 0;
    uStack_b8 = 0;
  }
  else {
    plVar7 = plStack_b0 + 3;
    plVar12 = plStack_b0;
    if (plVar7 != plStack_a8) {
      lVar13 = *plStack_b0;
      plVar11 = plStack_b0;
      do {
        plVar12 = plVar7;
        lVar5 = *plVar7;
        if ((ulong)(plVar7[1] - *plVar7) <= (ulong)(plVar11[1] - lVar13)) {
          plVar12 = plVar11;
          lVar5 = lVar13;
        }
        lVar13 = lVar5;
        plVar7 = plVar7 + 3;
        plVar11 = plVar12;
      } while (plVar7 != plStack_a8);
    }
    if (plVar12 != &lStack_c8) {
      FUN_1092c6040(&lStack_c8,*plVar12,plVar12[1],plVar12[1] - *plVar12 >> 3);
    }
  }
  pplStack_60 = &plStack_b0;
  FUN_1092cc3c0(&pplStack_60);
  if (lStack_1f0 != 0) {
    piVar1 = (int *)(lStack_1f0 + 0x14);
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
      func_0x000109a848d4(&uStack_228);
    }
  }
  lStack_1f0 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_218._0_4_ = 0;
  uStack_218._4_4_ = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  if (0 < uStack_228._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)((long)puStack_1e8 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_228._4_4_);
  }
  if (puStack_1e0 != &uStack_1d8 && puStack_1e0 != (undefined8 *)0x0) {
    _free(puStack_1e0[-1]);
  }
  FUN_109a8261c(&uStack_228,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),0);
  (**(code **)(*(long *)CONCAT44(uStack_228._4_4_,(undefined4)uStack_228) + 0x18))
            ((long *)CONCAT44(uStack_228._4_4_,(undefined4)uStack_228),&uStack_228,param_2,
             0xffffffff);
  FUN_10918eb6c(&uStack_228);
  pplStack_60 = (long **)0x0;
  pplStack_58 = (long **)0x0;
  uStack_50 = 0;
  FUN_1092c9014(&pplStack_60,lStack_c8,lStack_c0,lStack_c0 - lStack_c8 >> 3);
  plStack_b0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  pplStack_80 = (long **)((ulong)pplStack_80 & 0xffffffffffffff00);
  plVar7 = (long *)0x18;
  pplStack_88 = &plStack_b0;
  __Znwm();
  plStack_a0 = plVar7 + 3;
  uStack_220 = &plStack_70;
  uStack_218 = &plStack_68;
  uStack_210 = uStack_210 & 0xffffff00;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = 0;
  plStack_b0 = plVar7;
  plStack_a8 = plVar7;
  plStack_70 = plVar7;
  plStack_68 = plVar7;
  uStack_228 = &plStack_b0;
  FUN_1092c9014();
  plVar7 = plStack_68 + 3;
  uStack_210 = CONCAT31(uStack_210._1_3_,1);
  plStack_68 = plVar7;
  FUN_1095a4a78(&uStack_228);
  pplVar8 = pplStack_60;
  plStack_a8 = plVar7;
  if (pplStack_60 != (long **)0x0) {
    pplStack_58 = pplStack_60;
    __ZdlPv();
  }
  pplStack_60 = (long **)CONCAT44(pplStack_60._4_4_,0x3010000);
  uStack_50 = 0;
  uStack_78 = 0;
  pplStack_88 = (long **)CONCAT44(pplStack_88._4_4_,0x8104000c);
  uStack_228._0_4_ = 0;
  uStack_228._4_4_ = 0x406fe000;
  uStack_220._0_4_ = 0;
  uStack_220._4_4_ = 0;
  uStack_218._0_4_ = 0;
  uStack_218._4_4_ = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  pplStack_80 = &plStack_b0;
  pplStack_58 = (long **)param_2;
  FUN_109a91d90();
  plStack_68 = (long *)0x0;
  ppplVar6 = &pplStack_88;
  FUN_109af08e8(&pplStack_60,ppplVar6,0,&uStack_228,0xffffffff,8,pplVar8,0x7fffffff);
  uStack_228 = &plStack_b0;
  FUN_1092cc3c0(&uStack_228);
  lVar13 = lStack_c8;
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if ((int)ppplVar6 != 0) {
      func_0x000104bd46a0();
      pplStack_60 = &plStack_b0;
      FUN_1092cc3c0(&pplStack_60);
      func_0x00010567aa40(&uStack_228);
      if (lStack_c8 != 0) {
        lStack_c0 = lStack_c8;
        __ZdlPv();
      }
    }
    __Unwind_Resume();
    pplStack_2c0 = (long **)0x0;
    pplStack_2b8 = (long **)0x0;
    uStack_2b0 = 0;
    uVar15 = (uint)(*(float *)(lVar13 + 8) *
                   (float)(*(int *)(ppplVar6 + 1) * *(int *)((long)ppplVar6 + 0xc)));
    if (0 < (int)uVar15) {
      uStack_320._0_4_ = 0x42ff0000;
      uStack_314 = 0;
      uStack_310 = 0;
      uStack_320._4_4_ = 0;
      uStack_318 = 0;
      puStack_2e0 = &uStack_318;
      uStack_304 = 0;
      uStack_300 = 0;
      uStack_30c = 0;
      uStack_308 = 0;
      uStack_2f4 = 0;
      uStack_2fc = 0;
      uStack_2f8 = 0;
      lStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2ec = 0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      uStack_328 = 0;
      auStack_338[0] = 0x1010000;
      uStack_350 = CONCAT44(uStack_350._4_4_,0x2010000);
      uStack_340 = 0;
      ppplStack_368 = (long ***)0x0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      puVar9 = auStack_338;
      ppplStack_348 = (long ***)&uStack_320;
      ppplStack_330 = ppplVar6;
      puStack_2d8 = &uStack_2d0;
      FUN_109a4a0a4(puVar9,&uStack_350,1,1,1,1,0x10,&uStack_370);
      uStack_370 = CONCAT44(uStack_370._4_4_,0x3010000);
      uStack_360 = 0;
      auStack_338[0] = 0x8204000c;
      ppplStack_330 = &pplStack_2c0;
      uStack_328 = 0;
      ppplStack_368 = (long ***)&uStack_320;
      FUN_109a91d90();
      uStack_350 = 0xffffffffffffffff;
      FUN_109adf8b0(&uStack_370,auStack_338,puVar9,1,1,&uStack_350);
      dVar16 = 0.0;
      ppplStack_368 = (long ***)0x0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      FUN_109a48880(ppplVar6,&uStack_370);
      if (pplStack_2b8 != pplStack_2c0) {
        lVar13 = 0;
        uVar14 = 0;
        do {
          ppplStack_368 = (long ***)((long)pplStack_2c0 + lVar13);
          uStack_360 = 0;
          uStack_370 = CONCAT44(uStack_370._4_4_,0x8103000c);
          puVar10 = &uStack_370;
          FUN_109b415b4(puVar10,0);
          if ((double)uVar15 < dVar16) {
            auStack_338[0] = 0x3010000;
            uStack_328 = 0;
            uStack_340 = 0;
            uStack_350 = CONCAT44(uStack_350._4_4_,0x8104000c);
            uStack_370 = 0x406fe00000000000;
            uStack_360 = 0;
            uStack_358 = 0;
            ppplStack_368 = (long ***)0x0;
            ppplStack_348 = &pplStack_2c0;
            ppplStack_330 = ppplVar6;
            FUN_109a91d90();
            dVar16 = 0.0;
            uStack_378 = 0;
            FUN_109af08e8(auStack_338,&uStack_350,uVar14,&uStack_370,0xffffffff,8,puVar10,0x7fffffff
                          ,&uStack_378);
          }
          uVar14 = uVar14 + 1;
          lVar13 = lVar13 + 0x18;
        } while (uVar14 < (ulong)(((long)pplStack_2b8 - (long)pplStack_2c0 >> 3) *
                                 -0x5555555555555555));
      }
      if (lStack_2e8 != 0) {
        piVar1 = (int *)(lStack_2e8 + 0x14);
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
          func_0x000109a848d4(&uStack_320);
        }
      }
      lStack_2e8 = 0;
      uStack_308 = 0;
      uStack_304 = 0;
      uStack_310 = 0;
      uStack_30c = 0;
      uStack_2f8 = 0;
      uStack_2f4 = 0;
      uStack_300 = 0;
      uStack_2fc = 0;
      if (0 < uStack_320._4_4_) {
        lVar13 = 0;
        do {
          puStack_2e0[lVar13] = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < uStack_320._4_4_);
      }
      if (puStack_2d8 != &uStack_2d0 && puStack_2d8 != (undefined8 *)0x0) {
        _free(puStack_2d8[-1]);
      }
    }
    uStack_320 = &pplStack_2c0;
    FUN_1092cc3c0(&uStack_320);
    return;
  }
  return;
}



/* Entry: 1095a42f8; end: 1095a45d7;  */

void FUN_1095a42f8(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  double dVar10;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined4 auStack_108 [2];
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  undefined4 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uVar8 = (uint)(*(float *)(param_1 + 8) * (float)((int)param_2[1] * *(int *)((long)param_2 + 0xc)))
  ;
  if (0 < (int)uVar8) {
    uStack_f0._0_4_ = 0x42ff0000;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_f0._4_4_ = 0;
    uStack_e8 = 0;
    puStack_b0 = &uStack_e8;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_c4 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_f8 = 0;
    auStack_108[0] = 0x1010000;
    uStack_120 = CONCAT44(uStack_120._4_4_,0x2010000);
    uStack_110 = 0;
    plStack_138 = (long *)0x0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    puVar5 = auStack_108;
    plStack_118 = &uStack_f0;
    plStack_100 = param_2;
    puStack_a8 = &uStack_a0;
    FUN_109a4a0a4(puVar5,&uStack_120,1,1,1,1,0x10,&uStack_140);
    uStack_140 = CONCAT44(uStack_140._4_4_,0x3010000);
    uStack_130 = 0;
    auStack_108[0] = 0x8204000c;
    plStack_100 = &lStack_90;
    uStack_f8 = 0;
    plStack_138 = &uStack_f0;
    FUN_109a91d90();
    uStack_120 = 0xffffffffffffffff;
    FUN_109adf8b0(&uStack_140,auStack_108,puVar5,1,1,&uStack_120);
    dVar10 = 0.0;
    plStack_138 = (long *)0x0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    FUN_109a48880(param_2,&uStack_140);
    if (lStack_88 != lStack_90) {
      lVar9 = 0;
      uVar7 = 0;
      do {
        plStack_138 = (long *)(lStack_90 + lVar9);
        uStack_130 = 0;
        uStack_140 = CONCAT44(uStack_140._4_4_,0x8103000c);
        puVar6 = &uStack_140;
        FUN_109b415b4(puVar6,0);
        if ((double)uVar8 < dVar10) {
          auStack_108[0] = 0x3010000;
          uStack_f8 = 0;
          uStack_110 = 0;
          uStack_120 = CONCAT44(uStack_120._4_4_,0x8104000c);
          uStack_140 = 0x406fe00000000000;
          uStack_130 = 0;
          uStack_128 = 0;
          plStack_138 = (long *)0x0;
          plStack_118 = &lStack_90;
          plStack_100 = param_2;
          FUN_109a91d90();
          dVar10 = 0.0;
          uStack_148 = 0;
          FUN_109af08e8(auStack_108,&uStack_120,uVar7,&uStack_140,0xffffffff,8,puVar6,0x7fffffff,
                        &uStack_148);
        }
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0x18;
      } while (uVar7 < (ulong)((lStack_88 - lStack_90 >> 3) * -0x5555555555555555));
    }
    if (lStack_b8 != 0) {
      piVar1 = (int *)(lStack_b8 + 0x14);
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
        func_0x000109a848d4(&uStack_f0);
      }
    }
    lStack_b8 = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    if (0 < uStack_f0._4_4_) {
      lVar9 = 0;
      do {
        puStack_b0[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < uStack_f0._4_4_);
    }
    if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
      _free(puStack_a8[-1]);
    }
  }
  uStack_f0 = &lStack_90;
  FUN_1092cc3c0(&uStack_f0);
  return;
}



/* Entry: 1095a45d8; end: 1095a4a57;  */

void FUN_1095a45d8(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_170;
  undefined4 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 auStack_120 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  int *piStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_c0 = 0x42ff0000;
  iStack_b4 = 0;
  uStack_b0 = 0;
  iStack_bc = 0;
  iStack_b8 = 0;
  piStack_80 = &iStack_b8;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_94 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_c8 = 0;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,0x1010000);
  uStack_f0._0_4_ = 0x2010000;
  uStack_e0 = 0;
  puStack_168 = (undefined4 *)0x0;
  uStack_170 = (undefined8 *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  puVar6 = &uStack_d8;
  puStack_e8 = (undefined8 *)&uStack_c0;
  puStack_d0 = param_2;
  puStack_78 = &uStack_70;
  FUN_109a4a0a4(puVar6,&uStack_f0,1,1,1,1,0x10,&uStack_170);
  uStack_d8 = 0;
  puStack_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  uStack_170 = (undefined8 *)CONCAT44(uStack_170._4_4_,0x3010000);
  uStack_160 = 0;
  uStack_f0._0_4_ = 0x8204000c;
  uStack_e0 = 0;
  puStack_168 = &uStack_c0;
  puStack_e8 = &uStack_d8;
  FUN_109a91d90();
  uStack_108 = 0;
  puVar8 = &uStack_170;
  FUN_109adf8b0(puVar8,&uStack_f0,puVar6,0,1,&uStack_108);
  uStack_f0._0_4_ = 0x3010000;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_108 = CONCAT44(uStack_108._4_4_,0x8104000c);
  puStack_100 = &uStack_d8;
  uStack_170 = (undefined8 *)0x406fe00000000000;
  puStack_168 = (undefined4 *)0x0;
  uStack_160 = 0;
  uStack_158 = 0;
  puStack_e8 = (undefined8 *)&uStack_c0;
  FUN_109a91d90();
  uStack_110 = 0;
  FUN_109af08e8(&uStack_f0,&uStack_108,0xffffffff,&uStack_170,0xffffffff,8,puVar8,0x7fffffff,
                &uStack_110);
  uStack_160 = 0;
  uStack_170._0_4_ = 0x1010000;
  uStack_f0._0_4_ = 0x2010000;
  uStack_e0 = 0;
  puVar6 = &uStack_170;
  puStack_168 = &uStack_c0;
  puStack_e8 = (undefined8 *)&uStack_c0;
  FUN_109b59078(0,0x406fe00000000000,puVar6,&uStack_f0,1);
  uStack_170 = (undefined8 *)CONCAT44(uStack_170._4_4_,0x3010000);
  uStack_160 = 0;
  uStack_f0._0_4_ = 0x8204000c;
  uStack_e0 = 0;
  puStack_168 = &uStack_c0;
  puStack_e8 = &uStack_d8;
  FUN_109a91d90();
  uStack_108 = 0;
  puVar8 = &uStack_170;
  FUN_109adf8b0(puVar8,&uStack_f0,puVar6,0,1,&uStack_108);
  uStack_f0._0_4_ = 0x3010000;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_108 = CONCAT44(uStack_108._4_4_,0x8104000c);
  uStack_170 = (undefined8 *)0x406fe00000000000;
  puStack_168 = (undefined4 *)0x0;
  uStack_160 = 0;
  uStack_158 = 0;
  puStack_100 = &uStack_d8;
  puStack_e8 = (undefined8 *)&uStack_c0;
  FUN_109a91d90();
  uStack_110 = 0;
  FUN_109af08e8(&uStack_f0,&uStack_108,0xffffffff,&uStack_170,0xffffffff,8,puVar8,0x7fffffff,
                &uStack_110);
  uStack_170 = (undefined8 *)CONCAT44(uStack_170._4_4_,0x1010000);
  puStack_168 = &uStack_c0;
  uStack_160 = 0;
  uStack_f0 = CONCAT44(uStack_f0._4_4_,0x2010000);
  uStack_e0 = 0;
  puStack_e8 = (undefined8 *)puStack_168;
  FUN_109b59078(0,0x406fe00000000000,&uStack_170,&uStack_f0,1);
  puStack_e8 = (undefined8 *)NEON_rev64(CONCAT44(iStack_b4 + -2,iStack_b8 + -2),4);
  uStack_f0 = 0x100000001;
  FUN_109a852c8(&uStack_170,&uStack_c0,&uStack_f0);
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(param_2);
    }
  }
  param_2[7] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  if (0 < *(int *)((long)param_2 + 4)) {
    lVar5 = 0;
    lVar7 = param_2[8];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_2 + 4));
  }
  param_2[1] = puStack_168;
  *param_2 = uStack_170;
  param_2[3] = uStack_158;
  param_2[2] = uStack_160;
  param_2[5] = uStack_148;
  param_2[4] = uStack_150;
  param_2[7] = uStack_138;
  param_2[6] = uStack_140;
  puVar8 = (undefined8 *)param_2[9];
  puVar6 = param_2 + 10;
  iVar4 = uStack_170._4_4_;
  if (puVar8 != puVar6) {
    if (puVar8 != (undefined8 *)0x0) {
      _free(puVar8[-1]);
    }
    param_2[8] = param_2 + 1;
    param_2[9] = puVar6;
    puVar8 = puVar6;
    iVar4 = uStack_170._4_4_;
  }
  if (iVar4 < 3) {
    puVar6 = (undefined8 *)((ulong)&uStack_170 | 4);
    *puVar8 = *puStack_128;
    puVar8[1] = puStack_128[1];
    uStack_170 = (undefined8 *)CONCAT44(uStack_170._4_4_,0x42ff0000);
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x2c) = 0;
    if (puStack_128 != auStack_120) {
      _free(puStack_128[-1]);
    }
  }
  else {
    param_2[8] = uStack_130;
    param_2[9] = puStack_128;
  }
  uStack_170 = &uStack_d8;
  FUN_1092cc3c0(&uStack_170);
  if (lStack_88 != 0) {
    piVar1 = (int *)(lStack_88 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_c0);
    }
  }
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  if (0 < iStack_bc) {
    lVar5 = 0;
    do {
      piStack_80[lVar5] = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_bc);
  }
  if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
    _free(puStack_78[-1]);
  }
  return;
}



/* Entry: 1095a4a58; end: 1095a4a77;  */

void FUN_1095a4a58(void)

{
  return;
}


