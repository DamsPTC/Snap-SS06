/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10938ef5c; end: 10938efab;  */

void FUN_10938ef5c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10938f0d4(uVar1);
    lVar2 = uVar1 + 0x60;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10938efac();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10938efac; end: 10938f0d3;  */

long * FUN_10938efac(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 5) * -0x5555555555555555 + 1;
  if (uVar5 < 0x2aaaaaaaaaaaaab) {
    lVar4 = param_1[2] - *param_1 >> 5;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x155555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0x2aaaaaaaaaaaaaa;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_109370280();
    }
    lVar7 = (long)plVar2 + lVar7;
    plStack_40 = plVar2 + uVar6 * 0xc;
    plStack_58 = plVar2;
    plStack_50 = (long *)lVar7;
    plStack_48 = (long *)lVar7;
    FUN_10938f0d4(lVar7,param_2);
    plStack_48 = (long *)(lVar7 + 0x60);
    lVar7 = lVar7 + (*param_1 - param_1[1]);
    FUN_10938f158(param_1,*param_1,param_1[1],lVar7);
    plVar2 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar7;
    lVar7 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar7;
    FUN_10919d9fc(&plStack_58);
    return plVar2;
  }
  FUN_10937026c();
  FUN_10919d9fc(&plStack_58);
  __Unwind_Resume();
  lVar7 = *param_2;
  lVar8 = param_2[3];
  lVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar7;
  param_1[3] = lVar8;
  param_1[2] = lVar4;
  lVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar7;
  lVar4 = param_2[7];
  lVar7 = param_2[6];
  param_1[0xb] = 0;
  param_1[10] = 0;
  piVar3 = (int *)((long)param_2 + 4);
  iVar1 = *piVar3;
  param_1[7] = lVar4;
  param_1[6] = lVar7;
  param_1[8] = (long)(param_1 + 1);
  param_1[9] = (long)(param_1 + 10);
  plVar2 = (long *)param_2[9];
  if (iVar1 < 3) {
    param_1[10] = *plVar2;
    param_1[0xb] = plVar2[1];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = (long)plVar2;
    param_2[8] = (long)(param_2 + 1);
    param_2[9] = (long)(param_2 + 10);
  }
  *(undefined4 *)param_2 = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  piVar3[0] = 0;
  piVar3[1] = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  return param_1;
}



/* Entry: 10938f0d4; end: 10938f157;  */

void FUN_10938f0d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  param_1[0xb] = 0;
  param_1[10] = 0;
  piVar2 = (int *)((long)param_2 + 4);
  iVar1 = *piVar2;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  puVar3 = (undefined8 *)param_2[9];
  if (iVar1 < 3) {
    param_1[10] = *puVar3;
    param_1[0xb] = puVar3[1];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = puVar3;
    param_2[8] = param_2 + 1;
    param_2[9] = param_2 + 10;
  }
  *(undefined4 *)param_2 = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  return;
}



/* Entry: 10938f158; end: 10938f1f7;  */

void FUN_10938f158(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_10938f1f8(param_4,lVar1);
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + 0x60;
    } while (lVar1 != param_3);
    do {
      FUN_109370334(param_2);
      param_2 = param_2 + 0x60;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10938f1f8; end: 10938f293;  */

undefined8 * FUN_10938f1f8(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  lVar4 = param_2[7];
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar5 = (undefined8 *)param_2[9];
    puVar6 = (undefined8 *)param_1[9];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1);
  }
  return param_1;
}



/* Entry: 10938f294; end: 10938f2bb;  */

void FUN_10938f294(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10938f2bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10938f2bc; end: 10938f3d3;  */

long * FUN_10938f2bc(long *param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if (param_1[0x15] != 0) {
    piVar1 = (int *)(param_1[0x15] + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xe);
    }
  }
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  if (0 < *(int *)((long)param_1 + 0x74)) {
    lVar6 = 0;
    lVar8 = param_1[0x16];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0x74));
  }
  plVar7 = (long *)param_1[0x17];
  if (plVar7 != param_1 + 0x18 && plVar7 != (long *)0x0) {
    _free(plVar7[-1]);
  }
  if (param_1[9] != 0) {
    piVar1 = (int *)(param_1[9] + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 2);
    }
  }
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (0 < *(int *)((long)param_1 + 0x14)) {
    lVar6 = 0;
    lVar8 = param_1[10];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0x14));
  }
  plVar7 = (long *)param_1[0xb];
  if (plVar7 != param_1 + 0xc && plVar7 != (long *)0x0) {
    _free(plVar7[-1]);
  }
  plVar7 = (long *)*param_1;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 10938f3d4; end: 10938f427;  */

long * FUN_10938f3d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 10938f428; end: 10938f90b;  */

undefined8 * FUN_10938f428(undefined8 *param_1)

{
  ulong uVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lStack_70;
  long lStack_68;
  
  iVar14 = 0;
  *param_1 = &PTR_FUN_110af4d60;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x29] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x32] = param_1 + 0x2b;
  param_1[0x33] = param_1 + 0x34;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x42ff0005;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined8 *)((long)param_1 + 0x1cc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = param_1 + 0x37;
  param_1[0x3f] = param_1 + 0x40;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x42ff0005;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = param_1 + 0x43;
  param_1[0x4b] = param_1 + 0x4c;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0x42ff0005;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  *(undefined8 *)((long)param_1 + 0x28c) = 0;
  *(undefined8 *)((long)param_1 + 0x284) = 0;
  *(undefined8 *)((long)param_1 + 0x29c) = 0;
  *(undefined8 *)((long)param_1 + 0x294) = 0;
  *(undefined8 *)((long)param_1 + 0x27c) = 0;
  *(undefined8 *)((long)param_1 + 0x274) = 0;
  param_1[0x56] = param_1 + 0x4f;
  param_1[0x57] = param_1 + 0x58;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x42ff0005;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  *(undefined8 *)((long)param_1 + 0x2ec) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4) = 0;
  *(undefined8 *)((long)param_1 + 0x2fc) = 0;
  *(undefined8 *)((long)param_1 + 0x2f4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  param_1[0x62] = param_1 + 0x5b;
  param_1[99] = param_1 + 100;
  param_1[0x65] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0x42ff0005;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  *(undefined8 *)((long)param_1 + 0x344) = 0;
  *(undefined8 *)((long)param_1 + 0x35c) = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  *(undefined8 *)((long)param_1 + 0x33c) = 0;
  *(undefined8 *)((long)param_1 + 0x334) = 0;
  param_1[0x6e] = param_1 + 0x67;
  param_1[0x6f] = param_1 + 0x70;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0x42ff0005;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  *(undefined8 *)((long)param_1 + 0x3bc) = 0;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0;
  *(undefined8 *)((long)param_1 + 0x39c) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  param_1[0x7a] = param_1 + 0x73;
  param_1[0x7b] = param_1 + 0x7c;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0x42ff0005;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  *(undefined8 *)((long)param_1 + 0x40c) = 0;
  *(undefined8 *)((long)param_1 + 0x404) = 0;
  *(undefined8 *)((long)param_1 + 0x41c) = 0;
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  param_1[0x86] = param_1 + 0x7f;
  param_1[0x87] = param_1 + 0x88;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0x42ff0005;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)((long)param_1 + 0x46c) = 0;
  *(undefined8 *)((long)param_1 + 0x464) = 0;
  *(undefined8 *)((long)param_1 + 0x47c) = 0;
  *(undefined8 *)((long)param_1 + 0x474) = 0;
  *(undefined8 *)((long)param_1 + 0x45c) = 0;
  *(undefined8 *)((long)param_1 + 0x454) = 0;
  param_1[0x92] = param_1 + 0x8b;
  param_1[0x93] = param_1 + 0x94;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0x42ff0005;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  *(undefined8 *)((long)param_1 + 0x4cc) = 0;
  *(undefined8 *)((long)param_1 + 0x4c4) = 0;
  *(undefined8 *)((long)param_1 + 0x4dc) = 0;
  *(undefined8 *)((long)param_1 + 0x4d4) = 0;
  *(undefined8 *)((long)param_1 + 0x4bc) = 0;
  *(undefined8 *)((long)param_1 + 0x4b4) = 0;
  param_1[0x9e] = param_1 + 0x97;
  param_1[0x9f] = param_1 + 0xa0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0x42ff0005;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)((long)param_1 + 0x52c) = 0;
  *(undefined8 *)((long)param_1 + 0x524) = 0;
  *(undefined8 *)((long)param_1 + 0x53c) = 0;
  *(undefined8 *)((long)param_1 + 0x534) = 0;
  *(undefined8 *)((long)param_1 + 0x51c) = 0;
  *(undefined8 *)((long)param_1 + 0x514) = 0;
  param_1[0xaa] = param_1 + 0xa3;
  param_1[0xab] = param_1 + 0xac;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0x42ff0005;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  *(undefined8 *)((long)param_1 + 0x58c) = 0;
  *(undefined8 *)((long)param_1 + 0x584) = 0;
  *(undefined8 *)((long)param_1 + 0x59c) = 0;
  *(undefined8 *)((long)param_1 + 0x594) = 0;
  *(undefined8 *)((long)param_1 + 0x57c) = 0;
  *(undefined8 *)((long)param_1 + 0x574) = 0;
  param_1[0xb6] = param_1 + 0xaf;
  param_1[0xb7] = param_1 + 0xb8;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0x42ff0005;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[2] = 0x400000008;
  param_1[1] = 0x200000002;
  param_1[3] = 0x500000010;
  param_1[4] = 0x4120000041a00000;
  *(undefined4 *)(param_1 + 5) = 0x40a00000;
  *(undefined4 *)(param_1 + 6) = 0x10;
  *(undefined2 *)((long)param_1 + 0x2c) = 0x101;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  do {
    func_0x00010939b598(&lStack_70);
    plVar16 = (long *)param_1[0xbb];
    if (plVar16 < (long *)param_1[0xbc]) {
      plVar12 = plVar16 + 2;
      plVar16[1] = lStack_68;
      *plVar16 = lStack_70;
      lStack_70 = 0;
      lStack_68 = 0;
    }
    else {
      plVar13 = (long *)param_1[0xba];
      lVar15 = (long)plVar16 - (long)plVar13 >> 4;
      uVar1 = lVar15 + 1;
      if (uVar1 >> 0x3c != 0) {
        FUN_1093951fc();
LAB_10938f828:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10938f82c);
        (*pcVar6)();
      }
      uVar8 = (long)param_1[0xbc] - (long)plVar13;
      uVar11 = (long)uVar8 >> 3;
      if (uVar11 <= uVar1) {
        uVar11 = uVar1;
      }
      if (0x7fffffffffffffef < uVar8) {
        uVar11 = 0xfffffffffffffff;
      }
      if (uVar11 == 0) {
        lVar7 = 0;
      }
      else {
        if (uVar11 >> 0x3c != 0) {
          func_0x000104c4f740();
          goto LAB_10938f828;
        }
        lVar7 = uVar11 << 4;
        __Znwm();
      }
      plVar3 = (long *)(lVar7 + ((long)plVar16 - (long)plVar13));
      plVar12 = plVar3 + 2;
      plVar3[1] = lStack_68;
      *plVar3 = lStack_70;
      lStack_70 = 0;
      lStack_68 = 0;
      plVar9 = plVar13;
      plVar10 = plVar3 + lVar15 * -2;
      if (plVar13 != plVar16) {
        do {
          lVar17 = *plVar9;
          plVar10[1] = plVar9[1];
          *plVar10 = lVar17;
          if (lVar17 != 0) {
            piVar2 = (int *)(lVar17 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = *piVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          plVar9 = plVar9 + 2;
          plVar10 = plVar10 + 2;
        } while (plVar9 != plVar16);
        do {
          FUN_109395efc(plVar13);
          plVar13 = plVar13 + 2;
        } while (plVar13 != plVar16);
        plVar13 = (long *)param_1[0xba];
      }
      param_1[0xba] = plVar3 + lVar15 * -2;
      param_1[0xbb] = plVar12;
      param_1[0xbc] = lVar7 + uVar11 * 0x10;
      if (plVar13 != (long *)0x0) {
        __ZdlPv(plVar13);
      }
    }
    param_1[0xbb] = plVar12;
    FUN_109395efc(&lStack_70);
    iVar14 = iVar14 + 1;
    if (iVar14 == 10) {
      return param_1;
    }
  } while( true );
}



/* Entry: 10938f90c; end: 10938f9a7;  */

long FUN_10938f90c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10938f9a8; end: 109390577;  */

/* WARNING: Type propagation algorithm not settling */

uint *******
FUN_10938f9a8(long param_1,ulong *param_2,long *param_3,undefined8 param_4,uint *******param_5,
             undefined8 param_6)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  ushort *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  char cVar10;
  uint ******ppppppuVar11;
  uint *******pppppppuVar12;
  uint ******ppppppuVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  uint *******pppppppuVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  uint *******pppppppuVar23;
  uint *****pppppuVar24;
  ulong uVar25;
  uint *******pppppppuVar26;
  uint *******pppppppuVar27;
  long unaff_x21;
  ulong unaff_x22;
  uint ******ppppppuVar28;
  uint ******ppppppuVar29;
  ulong unaff_x25;
  uint ******ppppppuVar30;
  long unaff_x26;
  uint *******pppppppuVar31;
  uint *******pppppppuVar32;
  uint *******pppppppuVar33;
  long *unaff_x27;
  ulong unaff_x28;
  ulong uVar34;
  double dVar35;
  uint ******ppppppuVar36;
  undefined4 uStack_360;
  int iStack_35c;
  uint *******pppppppuStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_328;
  long lStack_320;
  undefined1 *puStack_318;
  undefined1 auStack_310 [16];
  uint *******pppppppuStack_300;
  uint *******pppppppuStack_2f8;
  undefined1 ****ppppuStack_2f0;
  code *pcStack_2e8;
  uint ******ppppppuStack_2e0;
  uint *******pppppppuStack_2d8;
  uint *******pppppppuStack_2d0;
  uint *******pppppppuStack_2c8;
  uint ******ppppppuStack_2c0;
  uint *******pppppppuStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  uint *******pppppppuStack_2a0;
  uint ******ppppppuStack_298;
  long lStack_290;
  uint ******ppppppuStack_288;
  uint *******pppppppuStack_280;
  uint *******pppppppuStack_278;
  uint *******pppppppuStack_270;
  uint *******pppppppuStack_268;
  undefined1 ***pppuStack_260;
  code *pcStack_258;
  uint ******ppppppuStack_250;
  uint *******pppppppuStack_248;
  uint *******pppppppuStack_240;
  uint *******pppppppuStack_238;
  uint ******ppppppuStack_230;
  uint *******pppppppuStack_228;
  ulong uStack_220;
  ulong uStack_218;
  uint *******pppppppuStack_210;
  uint ******ppppppuStack_208;
  long lStack_200;
  uint ******ppppppuStack_1f8;
  uint *******pppppppuStack_1f0;
  uint *******pppppppuStack_1e8;
  uint *******pppppppuStack_1e0;
  uint *******pppppppuStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  uint *******pppppppuStack_1b8;
  uint *******pppppppuStack_1b0;
  uint *******pppppppuStack_1a8;
  uint ******ppppppuStack_1a0;
  uint *******pppppppuStack_198;
  ulong uStack_190;
  long *plStack_188;
  long lStack_180;
  ulong uStack_178;
  long lStack_170;
  ulong *puStack_168;
  ulong uStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  uint *******pppppppuStack_128;
  undefined8 uStack_120;
  uint *******pppppppuStack_118;
  uint *******pppppppuStack_110;
  uint *******pppppppuStack_108;
  uint *******pppppppuStack_100;
  uint *******pppppppuStack_f8;
  uint *******pppppppuStack_f0;
  uint *******pppppppuStack_e8;
  long *plStack_e0;
  int iStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint *******pppppppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar25 = *param_2;
  dVar35 = (double)(*(int *)(uVar25 + 0xc) << 1) / ((double)*(int *)(param_1 + 0x10) * 4.0);
  pppppppuStack_128 = param_5;
  uStack_120 = param_4;
  plStack_e0 = param_3;
  _log();
  iVar17 = (int)(dVar35 / 0.6931471805599453 + 0.5);
  if (iVar17 < 2) {
    iVar17 = 1;
  }
  iVar18 = (int)(param_2[1] - uVar25 >> 5) * -0x55555555 + -1;
  if (iVar17 + -1 <= iVar18) {
    iVar18 = iVar17 + -1;
  }
  *(int *)(param_1 + 0xc) = iVar18;
  FUN_109390578(param_1 + 0x48,(long)(iVar18 + 1));
  FUN_109390578(param_1 + 0x60,(long)*(int *)(param_1 + 0xc) + 1);
  FUN_109390578(param_1 + 0x78,(long)*(int *)(param_1 + 0xc) + 1);
  FUN_109390874(param_1 + 0x90,(long)*(int *)(param_1 + 0xc) + 1);
  FUN_109390874(param_1 + 0xa8,(long)*(int *)(param_1 + 0xc) + 1);
  FUN_109390b84(param_1 + 0xc0,(long)*(int *)(param_1 + 0xc) + 1);
  pppppppuVar12 = (uint *******)(param_1 + 0xd8);
  pppppppuVar16 = (uint *******)((long)*(int *)(param_1 + 0xc) + 1);
  FUN_109390b84();
  iStack_d4 = (int)param_6;
  if (iStack_d4 != 0) {
    FUN_109390b84(param_1 + 0x120,(long)*(int *)(param_1 + 0xc) + 1);
    FUN_109390b84(param_1 + 0x138,(long)*(int *)(param_1 + 0xc) + 1);
    FUN_109390e94(*(undefined8 *)(param_1 + 0x120),uStack_120);
    pppppppuVar12 = *(uint ********)(param_1 + 0x138);
    pppppppuVar16 = pppppppuStack_128;
    FUN_109390e94();
  }
  if (-1 < *(int *)(param_1 + 0xc)) {
    unaff_x26 = 0;
    pppppppuStack_e8 = (uint *******)(param_1 + 0x150);
    pppppppuStack_f0 = (uint *******)(param_1 + 0x1b0);
    pppppppuStack_f8 = (uint *******)(param_1 + 0x210);
    pppppppuStack_100 = (uint *******)(param_1 + 0x270);
    pppppppuStack_108 = (uint *******)(param_1 + 0x2d0);
    pppppppuStack_110 = (uint *******)(param_1 + 0x330);
    pppppppuStack_118 = (uint *******)(param_1 + 0x390);
    uVar25 = 1;
    unaff_x21 = 8;
    uVar34 = 0;
    do {
      puVar2 = (uint *)(*param_2 + unaff_x26 + 8);
      uVar7 = *puVar2;
      unaff_x25 = (ulong)uVar7;
      uVar8 = *(uint *)(*param_2 + unaff_x26 + 0xc);
      ppppppuVar11 = *(uint *******)puVar2;
      ppppppuVar36 = *(uint *******)puVar2;
      ppppppuVar29 = *(uint *******)puVar2;
      ppppppuVar13 = *(uint *******)puVar2;
      ppppppuVar28 = *(uint *******)puVar2;
      ppppppuVar30 = *(uint *******)puVar2;
      unaff_x22 = (ulong)uVar8;
      if (uVar34 == *(uint *)(param_1 + 8)) {
        lVar20 = *(long *)(param_1 + 0x48);
        puVar4 = (ushort *)(lVar20 + unaff_x26);
        if ((((2 < *(int *)(puVar4 + 2)) || (*(uint *)(puVar4 + 4) != uVar7)) ||
            (*(uint *)(lVar20 + unaff_x26 + 0xc) != uVar8)) ||
           (((*puVar4 & 0xfff) != 0 || (*(long *)(lVar20 + unaff_x26 + 0x10) == 0)))) {
          uStack_a0 = *(uint *******)puVar2;
          FUN_109a83fd0(puVar4,2,&uStack_a0,0);
        }
        lVar20 = *(long *)(param_1 + 0x60);
        puVar4 = (ushort *)(lVar20 + unaff_x26);
        if (((2 < *(int *)(puVar4 + 2)) || (*(uint *)(puVar4 + 4) != uVar7)) ||
           ((*(uint *)(lVar20 + unaff_x26 + 0xc) != uVar8 ||
            (((*puVar4 & 0xfff) != 0 || (*(long *)(lVar20 + unaff_x26 + 0x10) == 0)))))) {
          uStack_a0 = ppppppuVar30;
          FUN_109a83fd0(puVar4,2,&uStack_a0,0);
        }
        FUN_1093910bc(*(long *)(param_1 + 0x48) + unaff_x26,*param_2 + unaff_x26);
        pppppppuVar12 = (uint *******)(*(long *)(param_1 + 0x60) + unaff_x26);
        pppppppuVar16 = (uint *******)(*plStack_e0 + unaff_x26);
        FUN_1093910bc();
        iVar17 = *(int *)(param_1 + 0x14);
        iVar18 = 0;
        if (iVar17 != 0) {
          iVar18 = (int)uVar7 / iVar17;
        }
        iVar21 = 0;
        if (iVar17 != 0) {
          iVar21 = (int)uVar8 / iVar17;
        }
        if ((((2 < *(int *)(param_1 + 0x154)) || (*(int *)(param_1 + 0x158) != iVar18)) ||
            (*(int *)(param_1 + 0x15c) != iVar21)) ||
           ((((ulong)*pppppppuStack_e8 & 0xfff) != 5 || (*(long *)(param_1 + 0x160) == 0)))) {
          uStack_a0 = (uint ******)CONCAT44(iVar21,iVar18);
          pppppppuVar16 = (uint *******)0x2;
          pppppppuVar12 = pppppppuStack_e8;
          FUN_109a83fd0(pppppppuStack_e8,2,&uStack_a0,5);
          iVar17 = *(int *)(param_1 + 0x14);
          iVar18 = 0;
          if (iVar17 != 0) {
            iVar18 = (int)uVar7 / iVar17;
          }
          iVar21 = 0;
          if (iVar17 != 0) {
            iVar21 = (int)uVar8 / iVar17;
          }
        }
        if (((2 < *(int *)(param_1 + 0x1b4)) || (*(int *)(param_1 + 0x1b8) != iVar18)) ||
           ((*(int *)(param_1 + 0x1bc) != iVar21 ||
            ((((ulong)*pppppppuStack_f0 & 0xfff) != 5 || (*(long *)(param_1 + 0x1c0) == 0)))))) {
          uStack_a0 = (uint ******)CONCAT44(iVar21,iVar18);
          pppppppuVar16 = (uint *******)0x2;
          pppppppuVar12 = pppppppuStack_f0;
          FUN_109a83fd0(pppppppuStack_f0,2,&uStack_a0,5);
          iVar17 = *(int *)(param_1 + 0x14);
          iVar18 = 0;
          if (iVar17 != 0) {
            iVar18 = (int)uVar7 / iVar17;
          }
          iVar21 = 0;
          if (iVar17 != 0) {
            iVar21 = (int)uVar8 / iVar17;
          }
        }
        if ((((2 < *(int *)(param_1 + 0x214)) || (*(int *)(param_1 + 0x218) != iVar18)) ||
            (*(int *)(param_1 + 0x21c) != iVar21)) ||
           ((((ulong)*pppppppuStack_f8 & 0xfff) != 5 || (*(long *)(param_1 + 0x220) == 0)))) {
          uStack_a0 = (uint ******)CONCAT44(iVar21,iVar18);
          pppppppuVar16 = (uint *******)0x2;
          pppppppuVar12 = pppppppuStack_f8;
          FUN_109a83fd0(pppppppuStack_f8,2,&uStack_a0,5);
          iVar17 = *(int *)(param_1 + 0x14);
          iVar18 = 0;
          if (iVar17 != 0) {
            iVar18 = (int)uVar7 / iVar17;
          }
          iVar21 = 0;
          if (iVar17 != 0) {
            iVar21 = (int)uVar8 / iVar17;
          }
        }
        if (((2 < *(int *)(param_1 + 0x274)) || (*(int *)(param_1 + 0x278) != iVar18)) ||
           ((*(int *)(param_1 + 0x27c) != iVar21 ||
            ((((ulong)*pppppppuStack_100 & 0xfff) != 5 || (*(long *)(param_1 + 0x280) == 0)))))) {
          uStack_a0 = (uint ******)CONCAT44(iVar21,iVar18);
          pppppppuVar16 = (uint *******)0x2;
          pppppppuVar12 = pppppppuStack_100;
          FUN_109a83fd0(pppppppuStack_100,2,&uStack_a0,5);
          iVar17 = *(int *)(param_1 + 0x14);
          iVar18 = 0;
          if (iVar17 != 0) {
            iVar18 = (int)uVar7 / iVar17;
          }
          iVar21 = 0;
          if (iVar17 != 0) {
            iVar21 = (int)uVar8 / iVar17;
          }
        }
        if ((((2 < *(int *)(param_1 + 0x2d4)) || (*(int *)(param_1 + 0x2d8) != iVar18)) ||
            (*(int *)(param_1 + 0x2dc) != iVar21)) ||
           ((((ulong)*pppppppuStack_108 & 0xfff) != 5 || (*(long *)(param_1 + 0x2e0) == 0)))) {
          uStack_a0 = (uint ******)CONCAT44(iVar21,iVar18);
          pppppppuVar16 = (uint *******)0x2;
          pppppppuVar12 = pppppppuStack_108;
          FUN_109a83fd0(pppppppuStack_108,2,&uStack_a0,5);
          iVar17 = *(int *)(param_1 + 0x14);
          iVar18 = 0;
          if (iVar17 != 0) {
            iVar18 = (int)uVar7 / iVar17;
          }
          iVar21 = 0;
          if (iVar17 != 0) {
            iVar21 = (int)uVar8 / iVar17;
          }
        }
        if (((2 < *(int *)(param_1 + 0x334)) || (*(int *)(param_1 + 0x338) != iVar18)) ||
           ((*(int *)(param_1 + 0x33c) != iVar21 ||
            ((((ulong)*pppppppuStack_110 & 0xfff) != 5 || (*(long *)(param_1 + 0x340) == 0)))))) {
          uStack_a0 = (uint ******)CONCAT44(iVar21,iVar18);
          pppppppuVar16 = (uint *******)0x2;
          pppppppuVar12 = pppppppuStack_110;
          FUN_109a83fd0(pppppppuStack_110,2,&uStack_a0,5);
          iVar17 = *(int *)(param_1 + 0x14);
          iVar18 = 0;
          if (iVar17 != 0) {
            iVar18 = (int)uVar7 / iVar17;
          }
          iVar21 = 0;
          if (iVar17 != 0) {
            iVar21 = (int)uVar8 / iVar17;
          }
        }
        if ((((2 < *(int *)(param_1 + 0x394)) || (*(int *)(param_1 + 0x398) != iVar18)) ||
            (*(int *)(param_1 + 0x39c) != iVar21)) ||
           ((((ulong)*pppppppuStack_118 & 0xfff) != 5 || (*(long *)(param_1 + 0x3a0) == 0)))) {
          uStack_a0 = (uint ******)CONCAT44(iVar21,iVar18);
          pppppppuVar16 = (uint *******)0x2;
          pppppppuVar12 = pppppppuStack_118;
          FUN_109a83fd0(pppppppuStack_118,2,&uStack_a0,5);
        }
      }
      else if ((long)(int)*(uint *)(param_1 + 8) < (long)uVar34) {
        lVar20 = *(long *)(param_1 + 0x48);
        puVar4 = (ushort *)(lVar20 + unaff_x26);
        if ((((2 < *(int *)(puVar4 + 2)) || (*(uint *)(puVar4 + 4) != uVar7)) ||
            (*(uint *)(lVar20 + unaff_x26 + 0xc) != uVar8)) ||
           (((*puVar4 & 0xfff) != 0 || (*(long *)(lVar20 + unaff_x26 + 0x10) == 0)))) {
          uStack_a0 = *(uint *******)puVar2;
          FUN_109a83fd0(puVar4,2,&uStack_a0,0);
        }
        lVar20 = *(long *)(param_1 + 0x60);
        puVar4 = (ushort *)(lVar20 + unaff_x26);
        if (((2 < *(int *)(puVar4 + 2)) || (*(uint *)(puVar4 + 4) != uVar7)) ||
           ((*(uint *)(lVar20 + unaff_x26 + 0xc) != uVar8 ||
            (((*puVar4 & 0xfff) != 0 || (*(long *)(lVar20 + unaff_x26 + 0x10) == 0)))))) {
          uStack_a0 = ppppppuVar28;
          FUN_109a83fd0(puVar4,2,&uStack_a0,0);
        }
        FUN_1093910bc(*(long *)(param_1 + 0x48) + unaff_x26,*param_2 + unaff_x26);
        pppppppuVar12 = (uint *******)(*(long *)(param_1 + 0x60) + unaff_x26);
        pppppppuVar16 = (uint *******)(*plStack_e0 + unaff_x26);
        FUN_1093910bc();
      }
      if ((long)*(int *)(param_1 + 8) <= (long)uVar34) {
        lVar20 = *(long *)(param_1 + 0x78);
        puVar4 = (ushort *)(lVar20 + unaff_x26);
        iVar17 = uVar7 + *(int *)(param_1 + 0x30) * 2;
        iVar18 = uVar8 + *(int *)(param_1 + 0x30) * 2;
        if (((2 < *(int *)(puVar4 + 2)) || (*(int *)(puVar4 + 4) != iVar17)) ||
           ((*(int *)(lVar20 + unaff_x26 + 0xc) != iVar18 ||
            (((*puVar4 & 0xfff) != 0 || (*(long *)(lVar20 + unaff_x26 + 0x10) == 0)))))) {
          uStack_a0 = (uint ******)CONCAT44(iVar18,iVar17);
          FUN_109a83fd0(puVar4,2,&uStack_a0,0);
        }
        lVar20 = *(long *)(param_1 + 0x90);
        puVar2 = (uint *)(lVar20 + unaff_x26);
        if ((((2 < (int)puVar2[1]) || (puVar2[2] != uVar7)) ||
            (*(uint *)(lVar20 + unaff_x26 + 0xc) != uVar8)) ||
           (((*puVar2 & 0xfff) != 3 || (*(long *)(lVar20 + unaff_x26 + 0x10) == 0)))) {
          uStack_a0 = ppppppuVar13;
          FUN_109a83fd0(puVar2,2,&uStack_a0,3);
        }
        lVar20 = *(long *)(param_1 + 0xa8);
        puVar2 = (uint *)(lVar20 + unaff_x26);
        if (((2 < (int)puVar2[1]) || (puVar2[2] != uVar7)) ||
           ((*(uint *)(lVar20 + unaff_x26 + 0xc) != uVar8 ||
            (((*puVar2 & 0xfff) != 3 || (*(long *)(lVar20 + unaff_x26 + 0x10) == 0)))))) {
          uStack_a0 = ppppppuVar29;
          FUN_109a83fd0(puVar2,2,&uStack_a0,3);
        }
        lStack_b0 = *(long *)(param_1 + 0x60) + unaff_x26;
        uStack_a8 = 0;
        auStack_b8[0] = 0x81010000;
        lStack_c8 = *(long *)(param_1 + 0x78) + unaff_x26;
        uStack_d0 = 0x82010000;
        uStack_c0 = 0;
        uVar9 = *(undefined4 *)(param_1 + 0x30);
        pppppppuStack_98 = (uint *******)0x0;
        uStack_a0 = (uint ******)0x0;
        uStack_88 = 0;
        uStack_90 = 0;
        FUN_109a4a0a4(auStack_b8,&uStack_d0,uVar9,uVar9,uVar9,uVar9,1,&uStack_a0);
        pppppppuStack_98 = (uint *******)(*(long *)(param_1 + 0x48) + unaff_x26);
        uStack_90 = 0;
        uStack_a0 = (uint ******)CONCAT44(uStack_a0._4_4_,0x81010000);
        lStack_b0 = *(long *)(param_1 + 0x90) + unaff_x26;
        auStack_b8[0] = 0x82010003;
        uStack_a8 = 0;
        lStack_c8 = *(long *)(param_1 + 0xa8) + unaff_x26;
        uStack_d0 = 0x82010003;
        uStack_c0 = 0;
        FUN_109b50aac(&uStack_a0,auStack_b8,&uStack_d0,3,4);
        lVar20 = *(long *)(param_1 + 0xc0);
        puVar2 = (uint *)(lVar20 + unaff_x26);
        if ((((2 < (int)puVar2[1]) || (puVar2[2] != uVar7)) ||
            (*(uint *)(lVar20 + unaff_x26 + 0xc) != uVar8)) ||
           (((*puVar2 & 0xfff) != 5 || (*(long *)(lVar20 + unaff_x26 + 0x10) == 0)))) {
          uStack_a0 = ppppppuVar36;
          FUN_109a83fd0(puVar2,2,&uStack_a0,5);
        }
        lVar20 = *(long *)(param_1 + 0xd8);
        puVar2 = (uint *)(lVar20 + unaff_x26);
        if (((2 < (int)puVar2[1]) || (puVar2[2] != uVar7)) ||
           ((*(uint *)(lVar20 + unaff_x26 + 0xc) != uVar8 ||
            (((*puVar2 & 0xfff) != 5 || (*(long *)(lVar20 + unaff_x26 + 0x10) == 0)))))) {
          uStack_a0 = ppppppuVar11;
          FUN_109a83fd0(puVar2,2,&uStack_a0,5);
        }
        (**(code **)(**(long **)(*(long *)(param_1 + 0x5d0) + unaff_x21) + 0x90))
                  (*(undefined4 *)(param_1 + 0x20));
        unaff_x27 = (long *)(param_1 + 0x5d0);
        (**(code **)(**(long **)(*unaff_x27 + unaff_x21) + 0xa0))(*(undefined4 *)(param_1 + 0x28));
        (**(code **)(**(long **)(*unaff_x27 + unaff_x21) + 0xb0))(*(undefined4 *)(param_1 + 0x24));
        (**(code **)(**(long **)(*unaff_x27 + unaff_x21) + 0x70))
                  (*(long **)(*unaff_x27 + unaff_x21),5);
        pppppppuVar12 = *(uint ********)(*unaff_x27 + unaff_x21);
        pppppppuVar16 = (uint *******)(ulong)*(uint *)(param_1 + 0x1c);
        (*(code *)(*pppppppuVar12)[0xc])();
      }
      param_6 = 0x82010003;
      if ((iStack_d4 != 0) && (unaff_x26 != 0)) {
        lVar22 = *(long *)(param_1 + 0x120);
        puVar5 = (uint *)(lVar22 + unaff_x26);
        lVar20 = *(long *)(param_1 + 0x48) + unaff_x26;
        puVar2 = (uint *)(lVar20 + 8);
        uVar19 = *puVar2;
        iVar17 = *(int *)(lVar20 + 0xc);
        if (((2 < (int)puVar5[1]) ||
            (((puVar5[2] != uVar19 || (*(int *)(lVar22 + unaff_x26 + 0xc) != iVar17)) ||
             ((*puVar5 & 0xfff) != 5)))) || (*(long *)(lVar22 + unaff_x26 + 0x10) == 0)) {
          pppppppuVar16 = (uint *******)0x2;
          uStack_a0 = *(uint *******)puVar2;
          FUN_109a83fd0(puVar5,2,&uStack_a0,5);
          lVar20 = *(long *)(param_1 + 0x48) + unaff_x26;
          uVar19 = *(uint *)(lVar20 + 8);
          iVar17 = *(int *)(lVar20 + 0xc);
        }
        lVar20 = *(long *)(param_1 + 0x138);
        pppppppuVar12 = (uint *******)(lVar20 + unaff_x26);
        if (((2 < (int)*(uint *)((long)pppppppuVar12 + 4)) ||
            (*(uint *)(pppppppuVar12 + 1) != uVar19)) ||
           ((*(int *)(lVar20 + unaff_x26 + 0xc) != iVar17 ||
            ((((ulong)*pppppppuVar12 & 0xfff) != 5 || (*(long *)(lVar20 + unaff_x26 + 0x10) == 0))))
           )) {
          uStack_a0 = (uint ******)CONCAT44(iVar17,uVar19);
          pppppppuVar16 = (uint *******)0x2;
          FUN_109a83fd0(pppppppuVar12,2,&uStack_a0,5);
        }
        if ((long)*(int *)(param_1 + 8) <= (long)uVar34) {
          uStack_a0._0_4_ = 0x1010000;
          pppppppuStack_98 = (uint *******)uStack_120;
          uStack_90 = 0;
          lStack_b0 = *(long *)(param_1 + 0x120) + unaff_x26;
          auStack_b8[0] = 0x82010005;
          uStack_a8 = 0;
          uStack_d0 = uVar8;
          uStack_cc = uVar7;
          FUN_109b0f718(0,0,&uStack_a0,auStack_b8,&uStack_d0,1);
          pppppppuStack_98 = (uint *******)(*(long *)(param_1 + 0x120) + unaff_x26);
          uStack_a0._0_4_ = 0x2010000;
          uStack_90 = 0;
          FUN_109a41858(1.0 / (double)uVar25,0,pppppppuStack_98,&uStack_a0,0xffffffff);
          uStack_a0._0_4_ = 0x1010000;
          pppppppuStack_98 = pppppppuStack_128;
          uStack_90 = 0;
          lStack_b0 = *(long *)(param_1 + 0x138) + unaff_x26;
          auStack_b8[0] = 0x82010005;
          uStack_a8 = 0;
          uStack_d0 = uVar8;
          uStack_cc = uVar7;
          FUN_109b0f718(0,0,&uStack_a0,auStack_b8,&uStack_d0,1);
          pppppppuVar12 = (uint *******)(*(long *)(param_1 + 0x138) + unaff_x26);
          uStack_a0 = (uint ******)CONCAT44(uStack_a0._4_4_,0x2010000);
          uStack_90 = 0;
          pppppppuVar16 = (uint *******)&uStack_a0;
          pppppppuStack_98 = pppppppuVar12;
          FUN_109a41858(1.0 / (double)uVar25,0,pppppppuVar12,pppppppuVar16,0xffffffff);
        }
      }
      uVar25 = (ulong)(uint)((int)uVar25 << 1);
      unaff_x26 = unaff_x26 + 0x60;
      unaff_x21 = unaff_x21 + 0x10;
      unaff_x28 = uVar34 + 1;
      bVar1 = (long)uVar34 < (long)*(int *)(param_1 + 0xc);
      uVar34 = unaff_x28;
    } while (bVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return pppppppuVar12;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_138 = FUN_109390578;
  pppppppuVar26 = (uint *******)*pppppppuVar12;
  pppppppuVar33 = (uint *******)pppppppuVar12[1];
  ppppppuVar30 = (uint ******)((long)pppppppuVar33 - (long)pppppppuVar26);
  lVar20 = (long)ppppppuVar30 >> 5;
  pppppppuVar31 = (uint *******)(lVar20 * -0x5555555555555555);
  uVar34 = (long)pppppppuVar16 + lVar20 * 0x5555555555555555;
  uStack_190 = unaff_x28;
  plStack_188 = unaff_x27;
  lStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  lStack_170 = param_1;
  puStack_168 = param_2;
  uStack_160 = unaff_x22;
  lStack_158 = unaff_x21;
  uStack_150 = uVar25;
  uStack_148 = param_6;
  puStack_140 = &stack0xfffffffffffffff0;
  if (pppppppuVar16 < pppppppuVar31 || uVar34 == 0) {
    pppppppuVar14 = pppppppuVar12;
    if (pppppppuVar16 < pppppppuVar31) {
      while (pppppppuVar33 != pppppppuVar26 + (long)pppppppuVar16 * 0xc) {
        pppppppuVar33 = pppppppuVar33 + -0xc;
        pppppppuVar14 = pppppppuVar33;
        FUN_1093953b8(pppppppuVar33);
      }
      pppppppuVar12[1] = (uint ******)(pppppppuVar26 + (long)pppppppuVar16 * 0xc);
    }
    return pppppppuVar14;
  }
  ppppppuVar28 = pppppppuVar12[2];
  if (uVar34 <= (ulong)(((long)ppppppuVar28 - (long)pppppppuVar33 >> 5) * -0x5555555555555555)) {
    lVar20 = (long)pppppppuVar16 * 0x60 + lVar20 * -0x20;
    pppppppuVar16 = pppppppuVar33 + 10;
    do {
      pppppppuVar16[-3] = (uint ******)0x0;
      pppppppuVar16[-4] = (uint ******)0x0;
      ((uint *)((long)pppppppuVar16 + -0x24))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x24))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x2c))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x2c))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x34))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x34))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x3c))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x3c))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x44))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x44))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x4c))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x4c))[1] = 0;
      pppppppuVar16[-2] = (uint ******)(pppppppuVar16 + -9);
      pppppppuVar16[-1] = (uint ******)pppppppuVar16;
      *pppppppuVar16 = (uint ******)0x0;
      pppppppuVar16[1] = (uint ******)0x0;
      *(uint *)(pppppppuVar16 + -10) = 0x42ff0000;
      pppppppuVar16 = pppppppuVar16 + 0xc;
      lVar20 = lVar20 + -0x60;
    } while (lVar20 != 0);
    pppppppuVar12[1] = (uint ******)(pppppppuVar33 + uVar34 * 0xc);
    return pppppppuVar12;
  }
  pppppppuVar14 = pppppppuVar16;
  if (pppppppuVar16 < (uint *******)0x2aaaaaaaaaaaaab) {
    lVar22 = (long)ppppppuVar28 - (long)pppppppuVar26 >> 5;
    pppppppuVar23 = (uint *******)(lVar22 * 0x5555555555555556);
    if (pppppppuVar23 < pppppppuVar16 || (long)pppppppuVar23 - (long)pppppppuVar16 == 0) {
      pppppppuVar23 = pppppppuVar16;
    }
    if (0x155555555555554 < (ulong)(lVar22 * -0x5555555555555555)) {
      pppppppuVar23 = (uint *******)0x2aaaaaaaaaaaaaa;
    }
    pppppppuStack_198 = pppppppuVar12;
    if (pppppppuVar23 < (uint *******)0x2aaaaaaaaaaaaab) {
      ppppppuVar13 = (uint ******)((long)pppppppuVar23 * 0x60);
      __Znwm();
      lVar22 = 0;
      pppppppuStack_1b0 = (uint *******)((long)ppppppuVar13 + (long)ppppppuVar30);
      ppppppuStack_1a0 = ppppppuVar13 + (long)pppppppuVar23 * 0xc;
      pppppppuStack_1a8 = (uint *******)((long)pppppppuStack_1b0 + uVar34 * 0x60);
      do {
        puVar6 = (undefined4 *)((long)pppppppuStack_1b0 + lVar22);
        *(undefined8 *)(puVar6 + 0xe) = 0;
        *(undefined8 *)(puVar6 + 0xc) = 0;
        *(undefined8 *)(puVar6 + 0xb) = 0;
        *(undefined8 *)(puVar6 + 9) = 0;
        *(undefined8 *)(puVar6 + 7) = 0;
        *(undefined8 *)(puVar6 + 5) = 0;
        *(undefined8 *)(puVar6 + 3) = 0;
        *(undefined8 *)(puVar6 + 1) = 0;
        *(undefined8 *)(puVar6 + 0x14) = 0;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 2;
        *(undefined4 **)(puVar6 + 0x12) = puVar6 + 0x14;
        *(undefined8 *)(puVar6 + 0x16) = 0;
        lVar22 = lVar22 + 0x60;
        *puVar6 = 0x42ff0000;
      } while ((long)pppppppuVar16 * 0x60 + lVar20 * -0x20 != lVar22);
      ppppppuVar30 = (uint ******)((long)pppppppuStack_1b0 - (long)ppppppuVar30);
      ppppppuVar29 = ppppppuVar30;
      pppppppuVar16 = pppppppuVar26;
      pppppppuStack_1b8 = (uint *******)ppppppuVar13;
      if (pppppppuVar26 != pppppppuVar33) {
        do {
          ppppppuVar28 = *pppppppuVar16;
          ppppppuVar36 = pppppppuVar16[3];
          ppppppuVar13 = pppppppuVar16[2];
          uVar7 = *(uint *)((long)pppppppuVar16 + 4);
          ppppppuVar29[1] = (uint *****)pppppppuVar16[1];
          *ppppppuVar29 = (uint *****)ppppppuVar28;
          ppppppuVar29[3] = (uint *****)ppppppuVar36;
          ppppppuVar29[2] = (uint *****)ppppppuVar13;
          ppppppuVar28 = pppppppuVar16[4];
          ppppppuVar29[5] = (uint *****)pppppppuVar16[5];
          ppppppuVar29[4] = (uint *****)ppppppuVar28;
          ppppppuVar28 = pppppppuVar16[7];
          ppppppuVar13 = pppppppuVar16[6];
          ppppppuVar29[7] = (uint *****)pppppppuVar16[7];
          ppppppuVar29[6] = (uint *****)ppppppuVar13;
          ppppppuVar29[10] = (uint *****)0x0;
          ppppppuVar29[8] = (uint *****)(ppppppuVar29 + 1);
          ppppppuVar29[9] = (uint *****)(ppppppuVar29 + 10);
          ppppppuVar29[0xb] = (uint *****)0x0;
          if (ppppppuVar28 != (uint ******)0x0) {
            piVar3 = (int *)((long)ppppppuVar28 + 0x14);
            do {
              cVar10 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar1) {
                *piVar3 = *piVar3 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            uVar7 = *(uint *)((long)pppppppuVar16 + 4);
          }
          if ((int)uVar7 < 3) {
            ppppppuVar28 = pppppppuVar16[9];
            pppppuVar24 = ppppppuVar29[9];
            *pppppuVar24 = (uint ****)*ppppppuVar28;
            pppppuVar24[1] = (uint ****)ppppppuVar28[1];
          }
          else {
            *(undefined4 *)((long)ppppppuVar29 + 4) = 0;
            func_0x000109a84868(ppppppuVar29,pppppppuVar16);
          }
          pppppppuVar16 = pppppppuVar16 + 0xc;
          ppppppuVar29 = ppppppuVar29 + 0xc;
        } while (pppppppuVar16 != pppppppuVar33);
        do {
          FUN_1093953b8(pppppppuVar26);
          pppppppuVar26 = pppppppuVar26 + 0xc;
        } while (pppppppuVar26 != pppppppuVar33);
        pppppppuVar26 = (uint *******)*pppppppuVar12;
        ppppppuVar28 = pppppppuVar12[2];
      }
      *pppppppuVar12 = ppppppuVar30;
      pppppppuVar12[1] = (uint ******)pppppppuStack_1a8;
      pppppppuVar12[2] = ppppppuStack_1a0;
      pppppppuVar12 = (uint *******)&pppppppuStack_1b8;
      pppppppuStack_1b8 = pppppppuVar26;
      pppppppuStack_1b0 = pppppppuVar26;
      pppppppuStack_1a8 = pppppppuVar26;
      ppppppuStack_1a0 = ppppppuVar28;
      FUN_109395458(pppppppuVar12);
      return pppppppuVar12;
    }
  }
  else {
    FUN_1093953a4();
  }
  func_0x000104c4f740();
  pppppppuVar23 = pppppppuVar31;
  if (ppppppuVar28 != ppppppuVar30) {
    do {
      FUN_1093953b8(pppppppuVar16);
      pppppppuVar16 = pppppppuVar16 + -0xc;
      pppppppuVar31 = pppppppuVar31 + 0xc;
      pppppppuVar23 = (uint *******)0x0;
    } while (pppppppuVar31 != (uint *******)0x0);
  }
  FUN_109395458(&pppppppuStack_1b8);
  pppppppuVar15 = pppppppuVar12;
  __Unwind_Resume();
  pcStack_1c8 = FUN_109390874;
  pppppppuVar31 = (uint *******)*pppppppuVar15;
  pppppppuVar27 = (uint *******)pppppppuVar15[1];
  ppppppuVar13 = (uint ******)((long)pppppppuVar27 - (long)pppppppuVar31);
  lVar22 = (long)ppppppuVar13 >> 5;
  pppppppuVar32 = (uint *******)(lVar22 * -0x5555555555555555);
  uVar25 = (long)pppppppuVar14 + lVar22 * 0x5555555555555555;
  uStack_220 = unaff_x28;
  uStack_218 = uVar34;
  pppppppuStack_210 = pppppppuVar23;
  ppppppuStack_208 = ppppppuVar30;
  lStack_200 = lVar20;
  ppppppuStack_1f8 = ppppppuVar28;
  pppppppuStack_1f0 = pppppppuVar16;
  pppppppuStack_1e8 = pppppppuVar33;
  pppppppuStack_1e0 = pppppppuVar26;
  pppppppuStack_1d8 = pppppppuVar12;
  ppuStack_1d0 = &puStack_140;
  if (pppppppuVar14 < pppppppuVar32 || uVar25 == 0) {
    pppppppuVar12 = pppppppuVar15;
    if (pppppppuVar14 < pppppppuVar32) {
      while (pppppppuVar27 != pppppppuVar31 + (long)pppppppuVar14 * 0xc) {
        pppppppuVar27 = pppppppuVar27 + -0xc;
        pppppppuVar12 = pppppppuVar27;
        FUN_1093954b8(pppppppuVar27);
      }
      pppppppuVar15[1] = (uint ******)(pppppppuVar31 + (long)pppppppuVar14 * 0xc);
    }
    return pppppppuVar12;
  }
  ppppppuVar30 = pppppppuVar15[2];
  if (uVar25 <= (ulong)(((long)ppppppuVar30 - (long)pppppppuVar27 >> 5) * -0x5555555555555555)) {
    lVar20 = (long)pppppppuVar14 * 0x60 + lVar22 * -0x20;
    pppppppuVar12 = pppppppuVar27 + 10;
    do {
      pppppppuVar12[-3] = (uint ******)0x0;
      pppppppuVar12[-4] = (uint ******)0x0;
      ((uint *)((long)pppppppuVar12 + -0x24))[0] = 0;
      ((uint *)((long)pppppppuVar12 + -0x24))[1] = 0;
      ((uint *)((long)pppppppuVar12 + -0x2c))[0] = 0;
      ((uint *)((long)pppppppuVar12 + -0x2c))[1] = 0;
      ((uint *)((long)pppppppuVar12 + -0x34))[0] = 0;
      ((uint *)((long)pppppppuVar12 + -0x34))[1] = 0;
      ((uint *)((long)pppppppuVar12 + -0x3c))[0] = 0;
      ((uint *)((long)pppppppuVar12 + -0x3c))[1] = 0;
      ((uint *)((long)pppppppuVar12 + -0x44))[0] = 0;
      ((uint *)((long)pppppppuVar12 + -0x44))[1] = 0;
      ((uint *)((long)pppppppuVar12 + -0x4c))[0] = 0;
      ((uint *)((long)pppppppuVar12 + -0x4c))[1] = 0;
      pppppppuVar12[-2] = (uint ******)(pppppppuVar12 + -9);
      pppppppuVar12[-1] = (uint ******)pppppppuVar12;
      *pppppppuVar12 = (uint ******)0x0;
      pppppppuVar12[1] = (uint ******)0x0;
      *(uint *)(pppppppuVar12 + -10) = 0x42ff0003;
      pppppppuVar12 = pppppppuVar12 + 0xc;
      lVar20 = lVar20 + -0x60;
    } while (lVar20 != 0);
    pppppppuVar15[1] = (uint ******)(pppppppuVar27 + uVar25 * 0xc);
    return pppppppuVar15;
  }
  pppppppuVar12 = pppppppuVar14;
  if (pppppppuVar14 < (uint *******)0x2aaaaaaaaaaaaab) {
    lVar20 = (long)ppppppuVar30 - (long)pppppppuVar31 >> 5;
    pppppppuVar16 = (uint *******)(lVar20 * 0x5555555555555556);
    if (pppppppuVar16 < pppppppuVar14 || (long)pppppppuVar16 - (long)pppppppuVar14 == 0) {
      pppppppuVar16 = pppppppuVar14;
    }
    if (0x155555555555554 < (ulong)(lVar20 * -0x5555555555555555)) {
      pppppppuVar16 = (uint *******)0x2aaaaaaaaaaaaaa;
    }
    ppppppuStack_250 = ppppppuVar30;
    pppppppuStack_228 = pppppppuVar15;
    if (pppppppuVar16 < (uint *******)0x2aaaaaaaaaaaaab) {
      ppppppuVar30 = (uint ******)((long)pppppppuVar16 * 0x60);
      __Znwm();
      lVar20 = 0;
      pppppppuStack_240 = (uint *******)((long)ppppppuVar30 + (long)ppppppuVar13);
      ppppppuStack_230 = ppppppuVar30 + (long)pppppppuVar16 * 0xc;
      pppppppuStack_238 = (uint *******)((long)pppppppuStack_240 + uVar25 * 0x60);
      do {
        puVar6 = (undefined4 *)((long)pppppppuStack_240 + lVar20);
        *(undefined8 *)(puVar6 + 0xe) = 0;
        *(undefined8 *)(puVar6 + 0xc) = 0;
        *(undefined8 *)(puVar6 + 0xb) = 0;
        *(undefined8 *)(puVar6 + 9) = 0;
        *(undefined8 *)(puVar6 + 7) = 0;
        *(undefined8 *)(puVar6 + 5) = 0;
        *(undefined8 *)(puVar6 + 3) = 0;
        *(undefined8 *)(puVar6 + 1) = 0;
        *(undefined8 *)(puVar6 + 0x14) = 0;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 2;
        *(undefined4 **)(puVar6 + 0x12) = puVar6 + 0x14;
        *(undefined8 *)(puVar6 + 0x16) = 0;
        lVar20 = lVar20 + 0x60;
        *puVar6 = 0x42ff0003;
      } while ((long)pppppppuVar14 * 0x60 + lVar22 * -0x20 != lVar20);
      ppppppuVar13 = (uint ******)((long)pppppppuStack_240 - (long)ppppppuVar13);
      ppppppuVar28 = ppppppuStack_250;
      ppppppuVar29 = ppppppuVar13;
      pppppppuVar12 = pppppppuVar31;
      pppppppuStack_248 = (uint *******)ppppppuVar30;
      if (pppppppuVar31 != pppppppuVar27) {
        do {
          ppppppuVar30 = *pppppppuVar12;
          ppppppuVar36 = pppppppuVar12[3];
          ppppppuVar28 = pppppppuVar12[2];
          uVar7 = *(uint *)((long)pppppppuVar12 + 4);
          ppppppuVar29[1] = (uint *****)pppppppuVar12[1];
          *ppppppuVar29 = (uint *****)ppppppuVar30;
          ppppppuVar29[3] = (uint *****)ppppppuVar36;
          ppppppuVar29[2] = (uint *****)ppppppuVar28;
          ppppppuVar30 = pppppppuVar12[4];
          ppppppuVar29[5] = (uint *****)pppppppuVar12[5];
          ppppppuVar29[4] = (uint *****)ppppppuVar30;
          ppppppuVar30 = pppppppuVar12[7];
          ppppppuVar28 = pppppppuVar12[6];
          ppppppuVar29[7] = (uint *****)pppppppuVar12[7];
          ppppppuVar29[6] = (uint *****)ppppppuVar28;
          ppppppuVar29[10] = (uint *****)0x0;
          ppppppuVar29[8] = (uint *****)(ppppppuVar29 + 1);
          ppppppuVar29[9] = (uint *****)(ppppppuVar29 + 10);
          ppppppuVar29[0xb] = (uint *****)0x0;
          if (ppppppuVar30 != (uint ******)0x0) {
            piVar3 = (int *)((long)ppppppuVar30 + 0x14);
            do {
              cVar10 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar1) {
                *piVar3 = *piVar3 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            uVar7 = *(uint *)((long)pppppppuVar12 + 4);
          }
          if ((int)uVar7 < 3) {
            ppppppuVar30 = pppppppuVar12[9];
            pppppuVar24 = ppppppuVar29[9];
            *pppppuVar24 = (uint ****)*ppppppuVar30;
            pppppuVar24[1] = (uint ****)ppppppuVar30[1];
          }
          else {
            *(undefined4 *)((long)ppppppuVar29 + 4) = 0;
            func_0x000109a84868(ppppppuVar29,pppppppuVar12);
          }
          pppppppuVar12 = pppppppuVar12 + 0xc;
          ppppppuVar29 = ppppppuVar29 + 0xc;
        } while (pppppppuVar12 != pppppppuVar27);
        do {
          FUN_1093954b8(pppppppuVar31);
          pppppppuVar31 = pppppppuVar31 + 0xc;
        } while (pppppppuVar31 != pppppppuVar27);
        pppppppuVar31 = (uint *******)*pppppppuVar15;
        ppppppuVar28 = pppppppuVar15[2];
      }
      *pppppppuVar15 = ppppppuVar13;
      pppppppuVar15[1] = (uint ******)pppppppuStack_238;
      pppppppuVar15[2] = ppppppuStack_230;
      pppppppuVar12 = (uint *******)&pppppppuStack_248;
      pppppppuStack_248 = pppppppuVar31;
      pppppppuStack_240 = pppppppuVar31;
      pppppppuStack_238 = pppppppuVar31;
      ppppppuStack_230 = ppppppuVar28;
      FUN_109395558(pppppppuVar12);
      return pppppppuVar12;
    }
  }
  else {
    FUN_1093954a4();
  }
  func_0x000104c4f740();
  pppppppuVar16 = pppppppuVar32;
  if (ppppppuVar28 != ppppppuVar13) {
    do {
      FUN_1093954b8(pppppppuVar14);
      pppppppuVar14 = pppppppuVar14 + -0xc;
      pppppppuVar32 = pppppppuVar32 + 0xc;
      pppppppuVar16 = (uint *******)0x0;
    } while (pppppppuVar32 != (uint *******)0x0);
  }
  FUN_109395558(&pppppppuStack_248);
  pppppppuVar32 = pppppppuVar15;
  __Unwind_Resume();
  pcStack_258 = FUN_109390b84;
  pppppppuVar26 = (uint *******)*pppppppuVar32;
  pppppppuVar23 = (uint *******)pppppppuVar32[1];
  ppppppuVar30 = (uint ******)((long)pppppppuVar23 - (long)pppppppuVar26);
  lVar20 = (long)ppppppuVar30 >> 5;
  pppppppuVar33 = (uint *******)(lVar20 * -0x5555555555555555);
  uVar34 = (long)pppppppuVar12 + lVar20 * 0x5555555555555555;
  uStack_2b0 = unaff_x28;
  uStack_2a8 = uVar25;
  pppppppuStack_2a0 = pppppppuVar16;
  ppppppuStack_298 = ppppppuVar13;
  lStack_290 = lVar22;
  ppppppuStack_288 = ppppppuVar28;
  pppppppuStack_280 = pppppppuVar14;
  pppppppuStack_278 = pppppppuVar31;
  pppppppuStack_270 = pppppppuVar27;
  pppppppuStack_268 = pppppppuVar15;
  pppuStack_260 = &ppuStack_1d0;
  if (pppppppuVar12 < pppppppuVar33 || uVar34 == 0) {
    pppppppuVar16 = pppppppuVar32;
    if (pppppppuVar12 < pppppppuVar33) {
      while (pppppppuVar23 != pppppppuVar26 + (long)pppppppuVar12 * 0xc) {
        pppppppuVar23 = pppppppuVar23 + -0xc;
        pppppppuVar16 = pppppppuVar23;
        FUN_1093955b8(pppppppuVar23);
      }
      pppppppuVar32[1] = (uint ******)(pppppppuVar26 + (long)pppppppuVar12 * 0xc);
    }
    return pppppppuVar16;
  }
  ppppppuVar13 = pppppppuVar32[2];
  if (uVar34 <= (ulong)(((long)ppppppuVar13 - (long)pppppppuVar23 >> 5) * -0x5555555555555555)) {
    lVar20 = (long)pppppppuVar12 * 0x60 + lVar20 * -0x20;
    pppppppuVar12 = pppppppuVar23 + 10;
    do {
      pppppppuVar12[-3] = (uint ******)0x0;
      pppppppuVar12[-4] = (uint ******)0x0;
      ((uint *)((long)pppppppuVar12 + -0x24))[0] = 0;
      ((uint *)((long)pppppppuVar12 + -0x24))[1] = 0;
      ((uint *)((long)pppppppuVar12 + -0x2c))[0] = 0;
      ((uint *)((long)pppppppuVar12 + -0x2c))[1] = 0;
      ((uint *)((long)pppppppuVar12 + -0x34))[0] = 0;
      ((uint *)((long)pppppppuVar12 + -0x34))[1] = 0;
      ((uint *)((long)pppppppuVar12 + -0x3c))[0] = 0;
      ((uint *)((long)pppppppuVar12 + -0x3c))[1] = 0;
      ((uint *)((long)pppppppuVar12 + -0x44))[0] = 0;
      ((uint *)((long)pppppppuVar12 + -0x44))[1] = 0;
      ((uint *)((long)pppppppuVar12 + -0x4c))[0] = 0;
      ((uint *)((long)pppppppuVar12 + -0x4c))[1] = 0;
      pppppppuVar12[-2] = (uint ******)(pppppppuVar12 + -9);
      pppppppuVar12[-1] = (uint ******)pppppppuVar12;
      *pppppppuVar12 = (uint ******)0x0;
      pppppppuVar12[1] = (uint ******)0x0;
      *(uint *)(pppppppuVar12 + -10) = 0x42ff0005;
      pppppppuVar12 = pppppppuVar12 + 0xc;
      lVar20 = lVar20 + -0x60;
    } while (lVar20 != 0);
    pppppppuVar32[1] = (uint ******)(pppppppuVar23 + uVar34 * 0xc);
    return pppppppuVar32;
  }
  pppppppuVar16 = pppppppuVar12;
  if (pppppppuVar12 < (uint *******)0x2aaaaaaaaaaaaab) {
    lVar22 = (long)ppppppuVar13 - (long)pppppppuVar26 >> 5;
    pppppppuVar31 = (uint *******)(lVar22 * 0x5555555555555556);
    if (pppppppuVar31 < pppppppuVar12 || (long)pppppppuVar31 - (long)pppppppuVar12 == 0) {
      pppppppuVar31 = pppppppuVar12;
    }
    if (0x155555555555554 < (ulong)(lVar22 * -0x5555555555555555)) {
      pppppppuVar31 = (uint *******)0x2aaaaaaaaaaaaaa;
    }
    ppppppuStack_2e0 = ppppppuVar13;
    pppppppuStack_2b8 = pppppppuVar32;
    if (pppppppuVar31 < (uint *******)0x2aaaaaaaaaaaaab) {
      ppppppuVar28 = (uint ******)((long)pppppppuVar31 * 0x60);
      __Znwm();
      lVar22 = 0;
      pppppppuStack_2d0 = (uint *******)((long)ppppppuVar28 + (long)ppppppuVar30);
      ppppppuStack_2c0 = ppppppuVar28 + (long)pppppppuVar31 * 0xc;
      pppppppuStack_2c8 = (uint *******)((long)pppppppuStack_2d0 + uVar34 * 0x60);
      do {
        puVar6 = (undefined4 *)((long)pppppppuStack_2d0 + lVar22);
        *(undefined8 *)(puVar6 + 0xe) = 0;
        *(undefined8 *)(puVar6 + 0xc) = 0;
        *(undefined8 *)(puVar6 + 0xb) = 0;
        *(undefined8 *)(puVar6 + 9) = 0;
        *(undefined8 *)(puVar6 + 7) = 0;
        *(undefined8 *)(puVar6 + 5) = 0;
        *(undefined8 *)(puVar6 + 3) = 0;
        *(undefined8 *)(puVar6 + 1) = 0;
        *(undefined8 *)(puVar6 + 0x14) = 0;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 2;
        *(undefined4 **)(puVar6 + 0x12) = puVar6 + 0x14;
        *(undefined8 *)(puVar6 + 0x16) = 0;
        lVar22 = lVar22 + 0x60;
        *puVar6 = 0x42ff0005;
      } while ((long)pppppppuVar12 * 0x60 + lVar20 * -0x20 != lVar22);
      ppppppuVar30 = (uint ******)((long)pppppppuStack_2d0 - (long)ppppppuVar30);
      ppppppuVar13 = ppppppuStack_2e0;
      ppppppuVar29 = ppppppuVar30;
      pppppppuVar12 = pppppppuVar26;
      pppppppuStack_2d8 = (uint *******)ppppppuVar28;
      if (pppppppuVar26 != pppppppuVar23) {
        do {
          ppppppuVar28 = *pppppppuVar12;
          ppppppuVar36 = pppppppuVar12[3];
          ppppppuVar13 = pppppppuVar12[2];
          uVar7 = *(uint *)((long)pppppppuVar12 + 4);
          ppppppuVar29[1] = (uint *****)pppppppuVar12[1];
          *ppppppuVar29 = (uint *****)ppppppuVar28;
          ppppppuVar29[3] = (uint *****)ppppppuVar36;
          ppppppuVar29[2] = (uint *****)ppppppuVar13;
          ppppppuVar28 = pppppppuVar12[4];
          ppppppuVar29[5] = (uint *****)pppppppuVar12[5];
          ppppppuVar29[4] = (uint *****)ppppppuVar28;
          ppppppuVar28 = pppppppuVar12[7];
          ppppppuVar13 = pppppppuVar12[6];
          ppppppuVar29[7] = (uint *****)pppppppuVar12[7];
          ppppppuVar29[6] = (uint *****)ppppppuVar13;
          ppppppuVar29[10] = (uint *****)0x0;
          ppppppuVar29[8] = (uint *****)(ppppppuVar29 + 1);
          ppppppuVar29[9] = (uint *****)(ppppppuVar29 + 10);
          ppppppuVar29[0xb] = (uint *****)0x0;
          if (ppppppuVar28 != (uint ******)0x0) {
            piVar3 = (int *)((long)ppppppuVar28 + 0x14);
            do {
              cVar10 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar1) {
                *piVar3 = *piVar3 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            uVar7 = *(uint *)((long)pppppppuVar12 + 4);
          }
          if ((int)uVar7 < 3) {
            ppppppuVar28 = pppppppuVar12[9];
            pppppuVar24 = ppppppuVar29[9];
            *pppppuVar24 = (uint ****)*ppppppuVar28;
            pppppuVar24[1] = (uint ****)ppppppuVar28[1];
          }
          else {
            *(undefined4 *)((long)ppppppuVar29 + 4) = 0;
            func_0x000109a84868(ppppppuVar29,pppppppuVar12);
          }
          pppppppuVar12 = pppppppuVar12 + 0xc;
          ppppppuVar29 = ppppppuVar29 + 0xc;
        } while (pppppppuVar12 != pppppppuVar23);
        do {
          FUN_1093955b8(pppppppuVar26);
          pppppppuVar26 = pppppppuVar26 + 0xc;
        } while (pppppppuVar26 != pppppppuVar23);
        pppppppuVar26 = (uint *******)*pppppppuVar32;
        ppppppuVar13 = pppppppuVar32[2];
      }
      *pppppppuVar32 = ppppppuVar30;
      pppppppuVar32[1] = (uint ******)pppppppuStack_2c8;
      pppppppuVar32[2] = ppppppuStack_2c0;
      pppppppuVar12 = (uint *******)&pppppppuStack_2d8;
      pppppppuStack_2d8 = pppppppuVar26;
      pppppppuStack_2d0 = pppppppuVar26;
      pppppppuStack_2c8 = pppppppuVar26;
      ppppppuStack_2c0 = ppppppuVar13;
      FUN_109395658(pppppppuVar12);
      return pppppppuVar12;
    }
  }
  else {
    FUN_1093955a4();
  }
  func_0x000104c4f740();
  if (ppppppuVar28 != ppppppuVar30) {
    do {
      FUN_1093955b8(pppppppuVar12);
      pppppppuVar12 = pppppppuVar12 + -0xc;
      pppppppuVar33 = pppppppuVar33 + 0xc;
    } while (pppppppuVar33 != (uint *******)0x0);
  }
  FUN_109395658(&pppppppuStack_2d8);
  pppppppuVar12 = pppppppuVar32;
  __Unwind_Resume();
  pcStack_2e8 = FUN_109390e94;
  pppppppuStack_300 = pppppppuVar23;
  pppppppuStack_2f8 = pppppppuVar32;
  ppppuStack_2f0 = &pppuStack_260;
  if (((ulong)*pppppppuVar16 & 0xfff) != 5) {
    if (((ulong)*pppppppuVar16 & 7) != 5) {
      uStack_360 = 0x82010005;
      uStack_350 = 0;
      pppppppuStack_358 = pppppppuVar12;
      FUN_109a41858(0x3ff0000000000000,0,pppppppuVar16,&uStack_360,5);
      return pppppppuVar12;
    }
    FUN_109a9ad84(&uStack_360,pppppppuVar16,1,*(uint *)((long)pppppppuVar16 + 4),0);
    FUN_109395f50(pppppppuVar12,&uStack_360);
    if (lStack_328 != 0) {
      piVar3 = (int *)(lStack_328 + 0x14);
      do {
        iVar17 = *piVar3;
        cVar10 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar1) {
          *piVar3 = iVar17 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar17 + -1 == 0) {
        func_0x000109a848d4(&uStack_360);
      }
    }
    lStack_328 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    if (0 < iStack_35c) {
      lVar20 = 0;
      do {
        *(undefined4 *)(lStack_320 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < iStack_35c);
    }
    if (puStack_318 == auStack_310 || puStack_318 == (undefined1 *)0x0) {
      return pppppppuVar12;
    }
    _free(*(undefined8 *)(puStack_318 + -8));
    return pppppppuVar12;
  }
  if (pppppppuVar12 == pppppppuVar16) {
    return pppppppuVar12;
  }
  if (pppppppuVar16[7] != (uint ******)0x0) {
    piVar3 = (int *)((long)pppppppuVar16[7] + 0x14);
    do {
      cVar10 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar1) {
        *piVar3 = *piVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  if (pppppppuVar12[7] != (uint ******)0x0) {
    piVar3 = (int *)((long)pppppppuVar12[7] + 0x14);
    do {
      iVar17 = *piVar3;
      cVar10 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar1) {
        *piVar3 = iVar17 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar17 + -1 == 0) {
      func_0x000109a848d4(pppppppuVar12);
    }
  }
  pppppppuVar12[7] = (uint ******)0x0;
  pppppppuVar12[3] = (uint ******)0x0;
  pppppppuVar12[2] = (uint ******)0x0;
  pppppppuVar12[5] = (uint ******)0x0;
  pppppppuVar12[4] = (uint ******)0x0;
  if ((int)*(uint *)((long)pppppppuVar12 + 4) < 1) {
    *(uint *)pppppppuVar12 = *(uint *)pppppppuVar16;
LAB_109391038:
    if ((int)*(uint *)((long)pppppppuVar16 + 4) < 3) {
      *(uint *)((long)pppppppuVar12 + 4) = *(uint *)((long)pppppppuVar16 + 4);
      pppppppuVar12[1] = pppppppuVar16[1];
      ppppppuVar30 = pppppppuVar16[9];
      ppppppuVar28 = pppppppuVar12[9];
      *ppppppuVar28 = *ppppppuVar30;
      ppppppuVar28[1] = ppppppuVar30[1];
      goto LAB_109391078;
    }
  }
  else {
    lVar20 = 0;
    ppppppuVar30 = pppppppuVar12[8];
    do {
      *(undefined4 *)((long)ppppppuVar30 + lVar20 * 4) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 < (int)*(uint *)((long)pppppppuVar12 + 4));
    *(uint *)pppppppuVar12 = *(uint *)pppppppuVar16;
    if ((int)*(uint *)((long)pppppppuVar12 + 4) < 3) goto LAB_109391038;
  }
  func_0x000109a84868(pppppppuVar12,pppppppuVar16);
LAB_109391078:
  ppppppuVar30 = pppppppuVar16[2];
  pppppppuVar12[3] = pppppppuVar16[3];
  pppppppuVar12[2] = ppppppuVar30;
  ppppppuVar30 = pppppppuVar16[4];
  pppppppuVar12[5] = pppppppuVar16[5];
  pppppppuVar12[4] = ppppppuVar30;
  ppppppuVar30 = pppppppuVar16[6];
  pppppppuVar12[7] = pppppppuVar16[7];
  pppppppuVar12[6] = ppppppuVar30;
  return pppppppuVar12;
}



/* Entry: 109390578; end: 109390873;  */

/* WARNING: Type propagation algorithm not settling */

uint ******* FUN_109390578(uint *******param_1,uint *******param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  uint ******ppppppuVar8;
  uint *******pppppppuVar9;
  long lVar10;
  uint *******pppppppuVar11;
  uint *****pppppuVar12;
  uint *******pppppppuVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  uint ******ppppppuVar16;
  uint ******ppppppuVar17;
  long lVar18;
  uint ******ppppppuVar19;
  uint *******pppppppuVar20;
  uint ******ppppppuVar21;
  undefined4 uStack_230;
  int iStack_22c;
  uint *******pppppppuStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_1f8;
  long lStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [16];
  uint *******pppppppuStack_1d0;
  uint *******pppppppuStack_1c8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  uint ******ppppppuStack_1b0;
  uint *******pppppppuStack_1a8;
  uint *******pppppppuStack_1a0;
  uint *******pppppppuStack_198;
  uint ******ppppppuStack_190;
  uint *******pppppppuStack_188;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  uint ******ppppppuStack_120;
  uint *******pppppppuStack_118;
  uint *******pppppppuStack_110;
  uint *******pppppppuStack_108;
  uint ******ppppppuStack_100;
  uint *******pppppppuStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  uint *******pppppppuStack_88;
  uint *******pppppppuStack_80;
  uint *******pppppppuStack_78;
  uint ******ppppppuStack_70;
  uint *******pppppppuStack_68;
  
  pppppppuVar14 = (uint *******)*param_1;
  pppppppuVar15 = (uint *******)param_1[1];
  ppppppuVar19 = (uint ******)((long)pppppppuVar15 - (long)pppppppuVar14);
  lVar18 = (long)ppppppuVar19 >> 5;
  pppppppuVar20 = (uint *******)(lVar18 * -0x5555555555555555);
  uVar7 = (long)param_2 + lVar18 * 0x5555555555555555;
  if (param_2 < pppppppuVar20 || uVar7 == 0) {
    pppppppuVar9 = param_1;
    if (param_2 < pppppppuVar20) {
      while (pppppppuVar15 != pppppppuVar14 + (long)param_2 * 0xc) {
        pppppppuVar15 = pppppppuVar15 + -0xc;
        pppppppuVar9 = pppppppuVar15;
        FUN_1093953b8(pppppppuVar15);
      }
      param_1[1] = (uint ******)(pppppppuVar14 + (long)param_2 * 0xc);
    }
    return pppppppuVar9;
  }
  ppppppuVar16 = param_1[2];
  if (uVar7 <= (ulong)(((long)ppppppuVar16 - (long)pppppppuVar15 >> 5) * -0x5555555555555555)) {
    lVar18 = (long)param_2 * 0x60 + lVar18 * -0x20;
    pppppppuVar14 = pppppppuVar15 + 10;
    do {
      pppppppuVar14[-3] = (uint ******)0x0;
      pppppppuVar14[-4] = (uint ******)0x0;
      ((uint *)((long)pppppppuVar14 + -0x24))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x24))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x2c))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x2c))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x34))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x34))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x3c))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x3c))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x44))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x44))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x4c))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x4c))[1] = 0;
      pppppppuVar14[-2] = (uint ******)(pppppppuVar14 + -9);
      pppppppuVar14[-1] = (uint ******)pppppppuVar14;
      *pppppppuVar14 = (uint ******)0x0;
      pppppppuVar14[1] = (uint ******)0x0;
      *(uint *)(pppppppuVar14 + -10) = 0x42ff0000;
      pppppppuVar14 = pppppppuVar14 + 0xc;
      lVar18 = lVar18 + -0x60;
    } while (lVar18 != 0);
    param_1[1] = (uint ******)(pppppppuVar15 + uVar7 * 0xc);
    return param_1;
  }
  pppppppuVar9 = param_2;
  if (param_2 < (uint *******)0x2aaaaaaaaaaaaab) {
    lVar10 = (long)ppppppuVar16 - (long)pppppppuVar14 >> 5;
    pppppppuVar11 = (uint *******)(lVar10 * 0x5555555555555556);
    if (pppppppuVar11 < param_2 || (long)pppppppuVar11 - (long)param_2 == 0) {
      pppppppuVar11 = param_2;
    }
    if (0x155555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
      pppppppuVar11 = (uint *******)0x2aaaaaaaaaaaaaa;
    }
    pppppppuStack_68 = param_1;
    if (pppppppuVar11 < (uint *******)0x2aaaaaaaaaaaaab) {
      ppppppuVar8 = (uint ******)((long)pppppppuVar11 * 0x60);
      __Znwm();
      lVar10 = 0;
      pppppppuStack_80 = (uint *******)((long)ppppppuVar8 + (long)ppppppuVar19);
      ppppppuStack_70 = ppppppuVar8 + (long)pppppppuVar11 * 0xc;
      pppppppuStack_78 = (uint *******)((long)pppppppuStack_80 + uVar7 * 0x60);
      do {
        puVar2 = (undefined4 *)((long)pppppppuStack_80 + lVar10);
        *(undefined8 *)(puVar2 + 0xe) = 0;
        *(undefined8 *)(puVar2 + 0xc) = 0;
        *(undefined8 *)(puVar2 + 0xb) = 0;
        *(undefined8 *)(puVar2 + 9) = 0;
        *(undefined8 *)(puVar2 + 7) = 0;
        *(undefined8 *)(puVar2 + 5) = 0;
        *(undefined8 *)(puVar2 + 3) = 0;
        *(undefined8 *)(puVar2 + 1) = 0;
        *(undefined8 *)(puVar2 + 0x14) = 0;
        *(undefined4 **)(puVar2 + 0x10) = puVar2 + 2;
        *(undefined4 **)(puVar2 + 0x12) = puVar2 + 0x14;
        *(undefined8 *)(puVar2 + 0x16) = 0;
        lVar10 = lVar10 + 0x60;
        *puVar2 = 0x42ff0000;
      } while ((long)param_2 * 0x60 + lVar18 * -0x20 != lVar10);
      ppppppuVar19 = (uint ******)((long)pppppppuStack_80 - (long)ppppppuVar19);
      ppppppuVar17 = ppppppuVar19;
      pppppppuVar20 = pppppppuVar14;
      pppppppuStack_88 = (uint *******)ppppppuVar8;
      if (pppppppuVar14 != pppppppuVar15) {
        do {
          ppppppuVar16 = *pppppppuVar20;
          ppppppuVar21 = pppppppuVar20[3];
          ppppppuVar8 = pppppppuVar20[2];
          uVar4 = *(uint *)((long)pppppppuVar20 + 4);
          ppppppuVar17[1] = (uint *****)pppppppuVar20[1];
          *ppppppuVar17 = (uint *****)ppppppuVar16;
          ppppppuVar17[3] = (uint *****)ppppppuVar21;
          ppppppuVar17[2] = (uint *****)ppppppuVar8;
          ppppppuVar16 = pppppppuVar20[4];
          ppppppuVar17[5] = (uint *****)pppppppuVar20[5];
          ppppppuVar17[4] = (uint *****)ppppppuVar16;
          ppppppuVar16 = pppppppuVar20[7];
          ppppppuVar8 = pppppppuVar20[6];
          ppppppuVar17[7] = (uint *****)pppppppuVar20[7];
          ppppppuVar17[6] = (uint *****)ppppppuVar8;
          ppppppuVar17[10] = (uint *****)0x0;
          ppppppuVar17[8] = (uint *****)(ppppppuVar17 + 1);
          ppppppuVar17[9] = (uint *****)(ppppppuVar17 + 10);
          ppppppuVar17[0xb] = (uint *****)0x0;
          if (ppppppuVar16 != (uint ******)0x0) {
            piVar1 = (int *)((long)ppppppuVar16 + 0x14);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            uVar4 = *(uint *)((long)pppppppuVar20 + 4);
          }
          if ((int)uVar4 < 3) {
            ppppppuVar16 = pppppppuVar20[9];
            pppppuVar12 = ppppppuVar17[9];
            *pppppuVar12 = (uint ****)*ppppppuVar16;
            pppppuVar12[1] = (uint ****)ppppppuVar16[1];
          }
          else {
            *(undefined4 *)((long)ppppppuVar17 + 4) = 0;
            func_0x000109a84868(ppppppuVar17,pppppppuVar20);
          }
          pppppppuVar20 = pppppppuVar20 + 0xc;
          ppppppuVar17 = ppppppuVar17 + 0xc;
        } while (pppppppuVar20 != pppppppuVar15);
        do {
          FUN_1093953b8(pppppppuVar14);
          pppppppuVar14 = pppppppuVar14 + 0xc;
        } while (pppppppuVar14 != pppppppuVar15);
        pppppppuVar14 = (uint *******)*param_1;
        ppppppuVar16 = param_1[2];
      }
      *param_1 = ppppppuVar19;
      param_1[1] = (uint ******)pppppppuStack_78;
      param_1[2] = ppppppuStack_70;
      pppppppuVar20 = (uint *******)&pppppppuStack_88;
      pppppppuStack_88 = pppppppuVar14;
      pppppppuStack_80 = pppppppuVar14;
      pppppppuStack_78 = pppppppuVar14;
      ppppppuStack_70 = ppppppuVar16;
      FUN_109395458(pppppppuVar20);
      return pppppppuVar20;
    }
  }
  else {
    FUN_1093953a4();
  }
  func_0x000104c4f740();
  if (ppppppuVar16 != ppppppuVar19) {
    do {
      FUN_1093953b8(param_2);
      param_2 = param_2 + -0xc;
      pppppppuVar20 = pppppppuVar20 + 0xc;
    } while (pppppppuVar20 != (uint *******)0x0);
  }
  FUN_109395458(&pppppppuStack_88);
  __Unwind_Resume();
  pcStack_98 = FUN_109390874;
  pppppppuVar14 = (uint *******)*param_1;
  pppppppuVar15 = (uint *******)param_1[1];
  ppppppuVar19 = (uint ******)((long)pppppppuVar15 - (long)pppppppuVar14);
  lVar18 = (long)ppppppuVar19 >> 5;
  pppppppuVar20 = (uint *******)(lVar18 * -0x5555555555555555);
  uVar7 = (long)pppppppuVar9 + lVar18 * 0x5555555555555555;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (pppppppuVar9 < pppppppuVar20 || uVar7 == 0) {
    pppppppuVar11 = param_1;
    if (pppppppuVar9 < pppppppuVar20) {
      while (pppppppuVar15 != pppppppuVar14 + (long)pppppppuVar9 * 0xc) {
        pppppppuVar15 = pppppppuVar15 + -0xc;
        pppppppuVar11 = pppppppuVar15;
        FUN_1093954b8(pppppppuVar15);
      }
      param_1[1] = (uint ******)(pppppppuVar14 + (long)pppppppuVar9 * 0xc);
    }
    return pppppppuVar11;
  }
  ppppppuVar8 = param_1[2];
  if (uVar7 <= (ulong)(((long)ppppppuVar8 - (long)pppppppuVar15 >> 5) * -0x5555555555555555)) {
    lVar18 = (long)pppppppuVar9 * 0x60 + lVar18 * -0x20;
    pppppppuVar14 = pppppppuVar15 + 10;
    do {
      pppppppuVar14[-3] = (uint ******)0x0;
      pppppppuVar14[-4] = (uint ******)0x0;
      ((uint *)((long)pppppppuVar14 + -0x24))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x24))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x2c))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x2c))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x34))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x34))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x3c))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x3c))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x44))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x44))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x4c))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x4c))[1] = 0;
      pppppppuVar14[-2] = (uint ******)(pppppppuVar14 + -9);
      pppppppuVar14[-1] = (uint ******)pppppppuVar14;
      *pppppppuVar14 = (uint ******)0x0;
      pppppppuVar14[1] = (uint ******)0x0;
      *(uint *)(pppppppuVar14 + -10) = 0x42ff0003;
      pppppppuVar14 = pppppppuVar14 + 0xc;
      lVar18 = lVar18 + -0x60;
    } while (lVar18 != 0);
    param_1[1] = (uint ******)(pppppppuVar15 + uVar7 * 0xc);
    return param_1;
  }
  pppppppuVar11 = pppppppuVar9;
  if (pppppppuVar9 < (uint *******)0x2aaaaaaaaaaaaab) {
    lVar10 = (long)ppppppuVar8 - (long)pppppppuVar14 >> 5;
    pppppppuVar13 = (uint *******)(lVar10 * 0x5555555555555556);
    if (pppppppuVar13 < pppppppuVar9 || (long)pppppppuVar13 - (long)pppppppuVar9 == 0) {
      pppppppuVar13 = pppppppuVar9;
    }
    if (0x155555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
      pppppppuVar13 = (uint *******)0x2aaaaaaaaaaaaaa;
    }
    ppppppuStack_120 = ppppppuVar8;
    pppppppuStack_f8 = param_1;
    if (pppppppuVar13 < (uint *******)0x2aaaaaaaaaaaaab) {
      ppppppuVar16 = (uint ******)((long)pppppppuVar13 * 0x60);
      __Znwm();
      lVar10 = 0;
      pppppppuStack_110 = (uint *******)((long)ppppppuVar16 + (long)ppppppuVar19);
      ppppppuStack_100 = ppppppuVar16 + (long)pppppppuVar13 * 0xc;
      pppppppuStack_108 = (uint *******)((long)pppppppuStack_110 + uVar7 * 0x60);
      do {
        puVar2 = (undefined4 *)((long)pppppppuStack_110 + lVar10);
        *(undefined8 *)(puVar2 + 0xe) = 0;
        *(undefined8 *)(puVar2 + 0xc) = 0;
        *(undefined8 *)(puVar2 + 0xb) = 0;
        *(undefined8 *)(puVar2 + 9) = 0;
        *(undefined8 *)(puVar2 + 7) = 0;
        *(undefined8 *)(puVar2 + 5) = 0;
        *(undefined8 *)(puVar2 + 3) = 0;
        *(undefined8 *)(puVar2 + 1) = 0;
        *(undefined8 *)(puVar2 + 0x14) = 0;
        *(undefined4 **)(puVar2 + 0x10) = puVar2 + 2;
        *(undefined4 **)(puVar2 + 0x12) = puVar2 + 0x14;
        *(undefined8 *)(puVar2 + 0x16) = 0;
        lVar10 = lVar10 + 0x60;
        *puVar2 = 0x42ff0003;
      } while ((long)pppppppuVar9 * 0x60 + lVar18 * -0x20 != lVar10);
      ppppppuVar19 = (uint ******)((long)pppppppuStack_110 - (long)ppppppuVar19);
      ppppppuVar8 = ppppppuStack_120;
      ppppppuVar17 = ppppppuVar19;
      pppppppuVar20 = pppppppuVar14;
      pppppppuStack_118 = (uint *******)ppppppuVar16;
      if (pppppppuVar14 != pppppppuVar15) {
        do {
          ppppppuVar16 = *pppppppuVar20;
          ppppppuVar21 = pppppppuVar20[3];
          ppppppuVar8 = pppppppuVar20[2];
          uVar4 = *(uint *)((long)pppppppuVar20 + 4);
          ppppppuVar17[1] = (uint *****)pppppppuVar20[1];
          *ppppppuVar17 = (uint *****)ppppppuVar16;
          ppppppuVar17[3] = (uint *****)ppppppuVar21;
          ppppppuVar17[2] = (uint *****)ppppppuVar8;
          ppppppuVar16 = pppppppuVar20[4];
          ppppppuVar17[5] = (uint *****)pppppppuVar20[5];
          ppppppuVar17[4] = (uint *****)ppppppuVar16;
          ppppppuVar16 = pppppppuVar20[7];
          ppppppuVar8 = pppppppuVar20[6];
          ppppppuVar17[7] = (uint *****)pppppppuVar20[7];
          ppppppuVar17[6] = (uint *****)ppppppuVar8;
          ppppppuVar17[10] = (uint *****)0x0;
          ppppppuVar17[8] = (uint *****)(ppppppuVar17 + 1);
          ppppppuVar17[9] = (uint *****)(ppppppuVar17 + 10);
          ppppppuVar17[0xb] = (uint *****)0x0;
          if (ppppppuVar16 != (uint ******)0x0) {
            piVar1 = (int *)((long)ppppppuVar16 + 0x14);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            uVar4 = *(uint *)((long)pppppppuVar20 + 4);
          }
          if ((int)uVar4 < 3) {
            ppppppuVar16 = pppppppuVar20[9];
            pppppuVar12 = ppppppuVar17[9];
            *pppppuVar12 = (uint ****)*ppppppuVar16;
            pppppuVar12[1] = (uint ****)ppppppuVar16[1];
          }
          else {
            *(undefined4 *)((long)ppppppuVar17 + 4) = 0;
            func_0x000109a84868(ppppppuVar17,pppppppuVar20);
          }
          pppppppuVar20 = pppppppuVar20 + 0xc;
          ppppppuVar17 = ppppppuVar17 + 0xc;
        } while (pppppppuVar20 != pppppppuVar15);
        do {
          FUN_1093954b8(pppppppuVar14);
          pppppppuVar14 = pppppppuVar14 + 0xc;
        } while (pppppppuVar14 != pppppppuVar15);
        pppppppuVar14 = (uint *******)*param_1;
        ppppppuVar8 = param_1[2];
      }
      *param_1 = ppppppuVar19;
      param_1[1] = (uint ******)pppppppuStack_108;
      param_1[2] = ppppppuStack_100;
      pppppppuVar20 = (uint *******)&pppppppuStack_118;
      pppppppuStack_118 = pppppppuVar14;
      pppppppuStack_110 = pppppppuVar14;
      pppppppuStack_108 = pppppppuVar14;
      ppppppuStack_100 = ppppppuVar8;
      FUN_109395558(pppppppuVar20);
      return pppppppuVar20;
    }
  }
  else {
    FUN_1093954a4();
  }
  func_0x000104c4f740();
  if (ppppppuVar16 != ppppppuVar19) {
    do {
      FUN_1093954b8(pppppppuVar9);
      pppppppuVar9 = pppppppuVar9 + -0xc;
      pppppppuVar20 = pppppppuVar20 + 0xc;
    } while (pppppppuVar20 != (uint *******)0x0);
  }
  FUN_109395558(&pppppppuStack_118);
  __Unwind_Resume();
  pcStack_128 = FUN_109390b84;
  pppppppuVar14 = (uint *******)*param_1;
  pppppppuVar15 = (uint *******)param_1[1];
  ppppppuVar19 = (uint ******)((long)pppppppuVar15 - (long)pppppppuVar14);
  lVar18 = (long)ppppppuVar19 >> 5;
  pppppppuVar20 = (uint *******)(lVar18 * -0x5555555555555555);
  uVar7 = (long)pppppppuVar11 + lVar18 * 0x5555555555555555;
  ppuStack_130 = &puStack_a0;
  if (pppppppuVar11 < pppppppuVar20 || uVar7 == 0) {
    pppppppuVar9 = param_1;
    if (pppppppuVar11 < pppppppuVar20) {
      while (pppppppuVar15 != pppppppuVar14 + (long)pppppppuVar11 * 0xc) {
        pppppppuVar15 = pppppppuVar15 + -0xc;
        pppppppuVar9 = pppppppuVar15;
        FUN_1093955b8(pppppppuVar15);
      }
      param_1[1] = (uint ******)(pppppppuVar14 + (long)pppppppuVar11 * 0xc);
    }
    return pppppppuVar9;
  }
  ppppppuVar8 = param_1[2];
  if (uVar7 <= (ulong)(((long)ppppppuVar8 - (long)pppppppuVar15 >> 5) * -0x5555555555555555)) {
    lVar18 = (long)pppppppuVar11 * 0x60 + lVar18 * -0x20;
    pppppppuVar14 = pppppppuVar15 + 10;
    do {
      pppppppuVar14[-3] = (uint ******)0x0;
      pppppppuVar14[-4] = (uint ******)0x0;
      ((uint *)((long)pppppppuVar14 + -0x24))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x24))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x2c))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x2c))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x34))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x34))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x3c))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x3c))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x44))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x44))[1] = 0;
      ((uint *)((long)pppppppuVar14 + -0x4c))[0] = 0;
      ((uint *)((long)pppppppuVar14 + -0x4c))[1] = 0;
      pppppppuVar14[-2] = (uint ******)(pppppppuVar14 + -9);
      pppppppuVar14[-1] = (uint ******)pppppppuVar14;
      *pppppppuVar14 = (uint ******)0x0;
      pppppppuVar14[1] = (uint ******)0x0;
      *(uint *)(pppppppuVar14 + -10) = 0x42ff0005;
      pppppppuVar14 = pppppppuVar14 + 0xc;
      lVar18 = lVar18 + -0x60;
    } while (lVar18 != 0);
    param_1[1] = (uint ******)(pppppppuVar15 + uVar7 * 0xc);
    return param_1;
  }
  pppppppuVar9 = pppppppuVar11;
  if (pppppppuVar11 < (uint *******)0x2aaaaaaaaaaaaab) {
    lVar10 = (long)ppppppuVar8 - (long)pppppppuVar14 >> 5;
    pppppppuVar13 = (uint *******)(lVar10 * 0x5555555555555556);
    if (pppppppuVar13 < pppppppuVar11 || (long)pppppppuVar13 - (long)pppppppuVar11 == 0) {
      pppppppuVar13 = pppppppuVar11;
    }
    if (0x155555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
      pppppppuVar13 = (uint *******)0x2aaaaaaaaaaaaaa;
    }
    ppppppuStack_1b0 = ppppppuVar8;
    pppppppuStack_188 = param_1;
    if (pppppppuVar13 < (uint *******)0x2aaaaaaaaaaaaab) {
      ppppppuVar16 = (uint ******)((long)pppppppuVar13 * 0x60);
      __Znwm();
      lVar10 = 0;
      pppppppuStack_1a0 = (uint *******)((long)ppppppuVar16 + (long)ppppppuVar19);
      ppppppuStack_190 = ppppppuVar16 + (long)pppppppuVar13 * 0xc;
      pppppppuStack_198 = (uint *******)((long)pppppppuStack_1a0 + uVar7 * 0x60);
      do {
        puVar2 = (undefined4 *)((long)pppppppuStack_1a0 + lVar10);
        *(undefined8 *)(puVar2 + 0xe) = 0;
        *(undefined8 *)(puVar2 + 0xc) = 0;
        *(undefined8 *)(puVar2 + 0xb) = 0;
        *(undefined8 *)(puVar2 + 9) = 0;
        *(undefined8 *)(puVar2 + 7) = 0;
        *(undefined8 *)(puVar2 + 5) = 0;
        *(undefined8 *)(puVar2 + 3) = 0;
        *(undefined8 *)(puVar2 + 1) = 0;
        *(undefined8 *)(puVar2 + 0x14) = 0;
        *(undefined4 **)(puVar2 + 0x10) = puVar2 + 2;
        *(undefined4 **)(puVar2 + 0x12) = puVar2 + 0x14;
        *(undefined8 *)(puVar2 + 0x16) = 0;
        lVar10 = lVar10 + 0x60;
        *puVar2 = 0x42ff0005;
      } while ((long)pppppppuVar11 * 0x60 + lVar18 * -0x20 != lVar10);
      ppppppuVar19 = (uint ******)((long)pppppppuStack_1a0 - (long)ppppppuVar19);
      ppppppuVar8 = ppppppuStack_1b0;
      ppppppuVar17 = ppppppuVar19;
      pppppppuVar20 = pppppppuVar14;
      pppppppuStack_1a8 = (uint *******)ppppppuVar16;
      if (pppppppuVar14 != pppppppuVar15) {
        do {
          ppppppuVar16 = *pppppppuVar20;
          ppppppuVar21 = pppppppuVar20[3];
          ppppppuVar8 = pppppppuVar20[2];
          uVar4 = *(uint *)((long)pppppppuVar20 + 4);
          ppppppuVar17[1] = (uint *****)pppppppuVar20[1];
          *ppppppuVar17 = (uint *****)ppppppuVar16;
          ppppppuVar17[3] = (uint *****)ppppppuVar21;
          ppppppuVar17[2] = (uint *****)ppppppuVar8;
          ppppppuVar16 = pppppppuVar20[4];
          ppppppuVar17[5] = (uint *****)pppppppuVar20[5];
          ppppppuVar17[4] = (uint *****)ppppppuVar16;
          ppppppuVar16 = pppppppuVar20[7];
          ppppppuVar8 = pppppppuVar20[6];
          ppppppuVar17[7] = (uint *****)pppppppuVar20[7];
          ppppppuVar17[6] = (uint *****)ppppppuVar8;
          ppppppuVar17[10] = (uint *****)0x0;
          ppppppuVar17[8] = (uint *****)(ppppppuVar17 + 1);
          ppppppuVar17[9] = (uint *****)(ppppppuVar17 + 10);
          ppppppuVar17[0xb] = (uint *****)0x0;
          if (ppppppuVar16 != (uint ******)0x0) {
            piVar1 = (int *)((long)ppppppuVar16 + 0x14);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            uVar4 = *(uint *)((long)pppppppuVar20 + 4);
          }
          if ((int)uVar4 < 3) {
            ppppppuVar16 = pppppppuVar20[9];
            pppppuVar12 = ppppppuVar17[9];
            *pppppuVar12 = (uint ****)*ppppppuVar16;
            pppppuVar12[1] = (uint ****)ppppppuVar16[1];
          }
          else {
            *(undefined4 *)((long)ppppppuVar17 + 4) = 0;
            func_0x000109a84868(ppppppuVar17,pppppppuVar20);
          }
          pppppppuVar20 = pppppppuVar20 + 0xc;
          ppppppuVar17 = ppppppuVar17 + 0xc;
        } while (pppppppuVar20 != pppppppuVar15);
        do {
          FUN_1093955b8(pppppppuVar14);
          pppppppuVar14 = pppppppuVar14 + 0xc;
        } while (pppppppuVar14 != pppppppuVar15);
        pppppppuVar14 = (uint *******)*param_1;
        ppppppuVar8 = param_1[2];
      }
      *param_1 = ppppppuVar19;
      param_1[1] = (uint ******)pppppppuStack_198;
      param_1[2] = ppppppuStack_190;
      pppppppuVar20 = (uint *******)&pppppppuStack_1a8;
      pppppppuStack_1a8 = pppppppuVar14;
      pppppppuStack_1a0 = pppppppuVar14;
      pppppppuStack_198 = pppppppuVar14;
      ppppppuStack_190 = ppppppuVar8;
      FUN_109395658(pppppppuVar20);
      return pppppppuVar20;
    }
  }
  else {
    FUN_1093955a4();
  }
  func_0x000104c4f740();
  if (ppppppuVar16 != ppppppuVar19) {
    do {
      FUN_1093955b8(pppppppuVar11);
      pppppppuVar11 = pppppppuVar11 + -0xc;
      pppppppuVar20 = pppppppuVar20 + 0xc;
    } while (pppppppuVar20 != (uint *******)0x0);
  }
  FUN_109395658(&pppppppuStack_1a8);
  pppppppuVar14 = param_1;
  __Unwind_Resume();
  pcStack_1b8 = FUN_109390e94;
  pppppppuStack_1d0 = pppppppuVar15;
  pppppppuStack_1c8 = param_1;
  pppuStack_1c0 = &ppuStack_130;
  if (((ulong)*pppppppuVar9 & 0xfff) != 5) {
    if (((ulong)*pppppppuVar9 & 7) != 5) {
      uStack_230 = 0x82010005;
      uStack_220 = 0;
      pppppppuStack_228 = pppppppuVar14;
      FUN_109a41858(0x3ff0000000000000,0,pppppppuVar9,&uStack_230,5);
      return pppppppuVar14;
    }
    FUN_109a9ad84(&uStack_230,pppppppuVar9,1,*(uint *)((long)pppppppuVar9 + 4),0);
    FUN_109395f50(pppppppuVar14,&uStack_230);
    if (lStack_1f8 != 0) {
      piVar1 = (int *)(lStack_1f8 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_230);
      }
    }
    lStack_1f8 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    if (0 < iStack_22c) {
      lVar18 = 0;
      do {
        *(undefined4 *)(lStack_1f0 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < iStack_22c);
    }
    if (puStack_1e8 == auStack_1e0 || puStack_1e8 == (undefined1 *)0x0) {
      return pppppppuVar14;
    }
    _free(*(undefined8 *)(puStack_1e8 + -8));
    return pppppppuVar14;
  }
  if (pppppppuVar14 == pppppppuVar9) {
    return pppppppuVar14;
  }
  if (pppppppuVar9[7] != (uint ******)0x0) {
    piVar1 = (int *)((long)pppppppuVar9[7] + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (pppppppuVar14[7] != (uint ******)0x0) {
    piVar1 = (int *)((long)pppppppuVar14[7] + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(pppppppuVar14);
    }
  }
  pppppppuVar14[7] = (uint ******)0x0;
  pppppppuVar14[3] = (uint ******)0x0;
  pppppppuVar14[2] = (uint ******)0x0;
  pppppppuVar14[5] = (uint ******)0x0;
  pppppppuVar14[4] = (uint ******)0x0;
  if ((int)*(uint *)((long)pppppppuVar14 + 4) < 1) {
    *(uint *)pppppppuVar14 = *(uint *)pppppppuVar9;
LAB_109391038:
    if ((int)*(uint *)((long)pppppppuVar9 + 4) < 3) {
      *(uint *)((long)pppppppuVar14 + 4) = *(uint *)((long)pppppppuVar9 + 4);
      pppppppuVar14[1] = pppppppuVar9[1];
      ppppppuVar19 = pppppppuVar9[9];
      ppppppuVar16 = pppppppuVar14[9];
      *ppppppuVar16 = *ppppppuVar19;
      ppppppuVar16[1] = ppppppuVar19[1];
      goto LAB_109391078;
    }
  }
  else {
    lVar18 = 0;
    ppppppuVar19 = pppppppuVar14[8];
    do {
      *(undefined4 *)((long)ppppppuVar19 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)*(uint *)((long)pppppppuVar14 + 4));
    *(uint *)pppppppuVar14 = *(uint *)pppppppuVar9;
    if ((int)*(uint *)((long)pppppppuVar14 + 4) < 3) goto LAB_109391038;
  }
  func_0x000109a84868(pppppppuVar14,pppppppuVar9);
LAB_109391078:
  ppppppuVar19 = pppppppuVar9[2];
  pppppppuVar14[3] = pppppppuVar9[3];
  pppppppuVar14[2] = ppppppuVar19;
  ppppppuVar19 = pppppppuVar9[4];
  pppppppuVar14[5] = pppppppuVar9[5];
  pppppppuVar14[4] = ppppppuVar19;
  ppppppuVar19 = pppppppuVar9[6];
  pppppppuVar14[7] = pppppppuVar9[7];
  pppppppuVar14[6] = ppppppuVar19;
  return pppppppuVar14;
}



/* Entry: 109390874; end: 109390b83;  */

/* WARNING: Type propagation algorithm not settling */

uint ******* FUN_109390874(uint *******param_1,uint *******param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  uint *******pppppppuVar8;
  long lVar9;
  uint ******ppppppuVar10;
  uint *******pppppppuVar11;
  uint *****pppppuVar12;
  uint *******pppppppuVar13;
  uint ******ppppppuVar14;
  uint *******pppppppuVar15;
  uint *******pppppppuVar16;
  long unaff_x23;
  uint ******ppppppuVar17;
  long lVar18;
  long lVar19;
  uint ******ppppppuVar20;
  uint *******pppppppuVar21;
  uint ******ppppppuVar22;
  undefined4 uStack_1a0;
  int iStack_19c;
  uint *******pppppppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_168;
  long lStack_160;
  undefined1 *puStack_158;
  undefined1 auStack_150 [16];
  uint *******pppppppuStack_140;
  uint *******pppppppuStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  uint ******ppppppuStack_120;
  uint *******pppppppuStack_118;
  uint *******pppppppuStack_110;
  uint *******pppppppuStack_108;
  uint ******ppppppuStack_100;
  uint *******pppppppuStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  uint ******ppppppuStack_90;
  uint *******pppppppuStack_88;
  uint *******pppppppuStack_80;
  uint *******pppppppuStack_78;
  uint ******ppppppuStack_70;
  uint *******pppppppuStack_68;
  
  pppppppuVar16 = (uint *******)*param_1;
  pppppppuVar15 = (uint *******)param_1[1];
  lVar19 = (long)pppppppuVar15 - (long)pppppppuVar16;
  lVar18 = lVar19 >> 5;
  pppppppuVar21 = (uint *******)(lVar18 * -0x5555555555555555);
  uVar7 = (long)param_2 + lVar18 * 0x5555555555555555;
  if (param_2 < pppppppuVar21 || uVar7 == 0) {
    pppppppuVar8 = param_1;
    if (param_2 < pppppppuVar21) {
      while (pppppppuVar15 != pppppppuVar16 + (long)param_2 * 0xc) {
        pppppppuVar15 = pppppppuVar15 + -0xc;
        pppppppuVar8 = pppppppuVar15;
        FUN_1093954b8(pppppppuVar15);
      }
      param_1[1] = (uint ******)(pppppppuVar16 + (long)param_2 * 0xc);
    }
    return pppppppuVar8;
  }
  ppppppuVar10 = param_1[2];
  if (uVar7 <= (ulong)(((long)ppppppuVar10 - (long)pppppppuVar15 >> 5) * -0x5555555555555555)) {
    lVar18 = (long)param_2 * 0x60 + lVar18 * -0x20;
    pppppppuVar16 = pppppppuVar15 + 10;
    do {
      pppppppuVar16[-3] = (uint ******)0x0;
      pppppppuVar16[-4] = (uint ******)0x0;
      ((uint *)((long)pppppppuVar16 + -0x24))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x24))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x2c))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x2c))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x34))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x34))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x3c))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x3c))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x44))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x44))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x4c))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x4c))[1] = 0;
      pppppppuVar16[-2] = (uint ******)(pppppppuVar16 + -9);
      pppppppuVar16[-1] = (uint ******)pppppppuVar16;
      *pppppppuVar16 = (uint ******)0x0;
      pppppppuVar16[1] = (uint ******)0x0;
      *(uint *)(pppppppuVar16 + -10) = 0x42ff0003;
      pppppppuVar16 = pppppppuVar16 + 0xc;
      lVar18 = lVar18 + -0x60;
    } while (lVar18 != 0);
    param_1[1] = (uint ******)(pppppppuVar15 + uVar7 * 0xc);
    return param_1;
  }
  pppppppuVar8 = param_2;
  if (param_2 < (uint *******)0x2aaaaaaaaaaaaab) {
    lVar9 = (long)ppppppuVar10 - (long)pppppppuVar16 >> 5;
    pppppppuVar11 = (uint *******)(lVar9 * 0x5555555555555556);
    if (pppppppuVar11 < param_2 || (long)pppppppuVar11 - (long)param_2 == 0) {
      pppppppuVar11 = param_2;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      pppppppuVar11 = (uint *******)0x2aaaaaaaaaaaaaa;
    }
    ppppppuStack_90 = ppppppuVar10;
    pppppppuStack_68 = param_1;
    if (pppppppuVar11 < (uint *******)0x2aaaaaaaaaaaaab) {
      ppppppuVar10 = (uint ******)((long)pppppppuVar11 * 0x60);
      __Znwm();
      lVar9 = 0;
      pppppppuStack_80 = (uint *******)((long)ppppppuVar10 + lVar19);
      ppppppuStack_70 = ppppppuVar10 + (long)pppppppuVar11 * 0xc;
      pppppppuStack_78 = (uint *******)((long)pppppppuStack_80 + uVar7 * 0x60);
      do {
        puVar2 = (undefined4 *)((long)pppppppuStack_80 + lVar9);
        *(undefined8 *)(puVar2 + 0xe) = 0;
        *(undefined8 *)(puVar2 + 0xc) = 0;
        *(undefined8 *)(puVar2 + 0xb) = 0;
        *(undefined8 *)(puVar2 + 9) = 0;
        *(undefined8 *)(puVar2 + 7) = 0;
        *(undefined8 *)(puVar2 + 5) = 0;
        *(undefined8 *)(puVar2 + 3) = 0;
        *(undefined8 *)(puVar2 + 1) = 0;
        *(undefined8 *)(puVar2 + 0x14) = 0;
        *(undefined4 **)(puVar2 + 0x10) = puVar2 + 2;
        *(undefined4 **)(puVar2 + 0x12) = puVar2 + 0x14;
        *(undefined8 *)(puVar2 + 0x16) = 0;
        lVar9 = lVar9 + 0x60;
        *puVar2 = 0x42ff0003;
      } while ((long)param_2 * 0x60 + lVar18 * -0x20 != lVar9);
      ppppppuVar20 = (uint ******)((long)pppppppuStack_80 - lVar19);
      ppppppuVar14 = ppppppuStack_90;
      ppppppuVar17 = ppppppuVar20;
      pppppppuVar21 = pppppppuVar16;
      pppppppuStack_88 = (uint *******)ppppppuVar10;
      if (pppppppuVar16 != pppppppuVar15) {
        do {
          ppppppuVar10 = *pppppppuVar21;
          ppppppuVar22 = pppppppuVar21[3];
          ppppppuVar14 = pppppppuVar21[2];
          uVar4 = *(uint *)((long)pppppppuVar21 + 4);
          ppppppuVar17[1] = (uint *****)pppppppuVar21[1];
          *ppppppuVar17 = (uint *****)ppppppuVar10;
          ppppppuVar17[3] = (uint *****)ppppppuVar22;
          ppppppuVar17[2] = (uint *****)ppppppuVar14;
          ppppppuVar10 = pppppppuVar21[4];
          ppppppuVar17[5] = (uint *****)pppppppuVar21[5];
          ppppppuVar17[4] = (uint *****)ppppppuVar10;
          ppppppuVar10 = pppppppuVar21[7];
          ppppppuVar14 = pppppppuVar21[6];
          ppppppuVar17[7] = (uint *****)pppppppuVar21[7];
          ppppppuVar17[6] = (uint *****)ppppppuVar14;
          ppppppuVar17[10] = (uint *****)0x0;
          ppppppuVar17[8] = (uint *****)(ppppppuVar17 + 1);
          ppppppuVar17[9] = (uint *****)(ppppppuVar17 + 10);
          ppppppuVar17[0xb] = (uint *****)0x0;
          if (ppppppuVar10 != (uint ******)0x0) {
            piVar1 = (int *)((long)ppppppuVar10 + 0x14);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            uVar4 = *(uint *)((long)pppppppuVar21 + 4);
          }
          if ((int)uVar4 < 3) {
            ppppppuVar10 = pppppppuVar21[9];
            pppppuVar12 = ppppppuVar17[9];
            *pppppuVar12 = (uint ****)*ppppppuVar10;
            pppppuVar12[1] = (uint ****)ppppppuVar10[1];
          }
          else {
            *(undefined4 *)((long)ppppppuVar17 + 4) = 0;
            func_0x000109a84868(ppppppuVar17,pppppppuVar21);
          }
          pppppppuVar21 = pppppppuVar21 + 0xc;
          ppppppuVar17 = ppppppuVar17 + 0xc;
        } while (pppppppuVar21 != pppppppuVar15);
        do {
          FUN_1093954b8(pppppppuVar16);
          pppppppuVar16 = pppppppuVar16 + 0xc;
        } while (pppppppuVar16 != pppppppuVar15);
        pppppppuVar16 = (uint *******)*param_1;
        ppppppuVar14 = param_1[2];
      }
      *param_1 = ppppppuVar20;
      param_1[1] = (uint ******)pppppppuStack_78;
      param_1[2] = ppppppuStack_70;
      pppppppuVar21 = (uint *******)&pppppppuStack_88;
      pppppppuStack_88 = pppppppuVar16;
      pppppppuStack_80 = pppppppuVar16;
      pppppppuStack_78 = pppppppuVar16;
      ppppppuStack_70 = ppppppuVar14;
      FUN_109395558(pppppppuVar21);
      return pppppppuVar21;
    }
  }
  else {
    FUN_1093954a4();
  }
  func_0x000104c4f740();
  if (unaff_x23 != lVar19) {
    do {
      FUN_1093954b8(param_2);
      param_2 = param_2 + -0xc;
      pppppppuVar21 = pppppppuVar21 + 0xc;
    } while (pppppppuVar21 != (uint *******)0x0);
  }
  FUN_109395558(&pppppppuStack_88);
  __Unwind_Resume();
  pcStack_98 = FUN_109390b84;
  pppppppuVar16 = (uint *******)*param_1;
  pppppppuVar15 = (uint *******)param_1[1];
  lVar19 = (long)pppppppuVar15 - (long)pppppppuVar16;
  lVar18 = lVar19 >> 5;
  pppppppuVar21 = (uint *******)(lVar18 * -0x5555555555555555);
  uVar7 = (long)pppppppuVar8 + lVar18 * 0x5555555555555555;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (pppppppuVar8 < pppppppuVar21 || uVar7 == 0) {
    pppppppuVar11 = param_1;
    if (pppppppuVar8 < pppppppuVar21) {
      while (pppppppuVar15 != pppppppuVar16 + (long)pppppppuVar8 * 0xc) {
        pppppppuVar15 = pppppppuVar15 + -0xc;
        pppppppuVar11 = pppppppuVar15;
        FUN_1093955b8(pppppppuVar15);
      }
      param_1[1] = (uint ******)(pppppppuVar16 + (long)pppppppuVar8 * 0xc);
    }
    return pppppppuVar11;
  }
  ppppppuVar10 = param_1[2];
  if (uVar7 <= (ulong)(((long)ppppppuVar10 - (long)pppppppuVar15 >> 5) * -0x5555555555555555)) {
    lVar18 = (long)pppppppuVar8 * 0x60 + lVar18 * -0x20;
    pppppppuVar16 = pppppppuVar15 + 10;
    do {
      pppppppuVar16[-3] = (uint ******)0x0;
      pppppppuVar16[-4] = (uint ******)0x0;
      ((uint *)((long)pppppppuVar16 + -0x24))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x24))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x2c))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x2c))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x34))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x34))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x3c))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x3c))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x44))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x44))[1] = 0;
      ((uint *)((long)pppppppuVar16 + -0x4c))[0] = 0;
      ((uint *)((long)pppppppuVar16 + -0x4c))[1] = 0;
      pppppppuVar16[-2] = (uint ******)(pppppppuVar16 + -9);
      pppppppuVar16[-1] = (uint ******)pppppppuVar16;
      *pppppppuVar16 = (uint ******)0x0;
      pppppppuVar16[1] = (uint ******)0x0;
      *(uint *)(pppppppuVar16 + -10) = 0x42ff0005;
      pppppppuVar16 = pppppppuVar16 + 0xc;
      lVar18 = lVar18 + -0x60;
    } while (lVar18 != 0);
    param_1[1] = (uint ******)(pppppppuVar15 + uVar7 * 0xc);
    return param_1;
  }
  pppppppuVar11 = pppppppuVar8;
  if (pppppppuVar8 < (uint *******)0x2aaaaaaaaaaaaab) {
    lVar9 = (long)ppppppuVar10 - (long)pppppppuVar16 >> 5;
    pppppppuVar13 = (uint *******)(lVar9 * 0x5555555555555556);
    if (pppppppuVar13 < pppppppuVar8 || (long)pppppppuVar13 - (long)pppppppuVar8 == 0) {
      pppppppuVar13 = pppppppuVar8;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      pppppppuVar13 = (uint *******)0x2aaaaaaaaaaaaaa;
    }
    ppppppuStack_120 = ppppppuVar10;
    pppppppuStack_f8 = param_1;
    if (pppppppuVar13 < (uint *******)0x2aaaaaaaaaaaaab) {
      ppppppuVar10 = (uint ******)((long)pppppppuVar13 * 0x60);
      __Znwm();
      lVar9 = 0;
      pppppppuStack_110 = (uint *******)((long)ppppppuVar10 + lVar19);
      ppppppuStack_100 = ppppppuVar10 + (long)pppppppuVar13 * 0xc;
      pppppppuStack_108 = (uint *******)((long)pppppppuStack_110 + uVar7 * 0x60);
      do {
        puVar2 = (undefined4 *)((long)pppppppuStack_110 + lVar9);
        *(undefined8 *)(puVar2 + 0xe) = 0;
        *(undefined8 *)(puVar2 + 0xc) = 0;
        *(undefined8 *)(puVar2 + 0xb) = 0;
        *(undefined8 *)(puVar2 + 9) = 0;
        *(undefined8 *)(puVar2 + 7) = 0;
        *(undefined8 *)(puVar2 + 5) = 0;
        *(undefined8 *)(puVar2 + 3) = 0;
        *(undefined8 *)(puVar2 + 1) = 0;
        *(undefined8 *)(puVar2 + 0x14) = 0;
        *(undefined4 **)(puVar2 + 0x10) = puVar2 + 2;
        *(undefined4 **)(puVar2 + 0x12) = puVar2 + 0x14;
        *(undefined8 *)(puVar2 + 0x16) = 0;
        lVar9 = lVar9 + 0x60;
        *puVar2 = 0x42ff0005;
      } while ((long)pppppppuVar8 * 0x60 + lVar18 * -0x20 != lVar9);
      ppppppuVar20 = (uint ******)((long)pppppppuStack_110 - lVar19);
      ppppppuVar14 = ppppppuStack_120;
      ppppppuVar17 = ppppppuVar20;
      pppppppuVar21 = pppppppuVar16;
      pppppppuStack_118 = (uint *******)ppppppuVar10;
      if (pppppppuVar16 != pppppppuVar15) {
        do {
          ppppppuVar10 = *pppppppuVar21;
          ppppppuVar22 = pppppppuVar21[3];
          ppppppuVar14 = pppppppuVar21[2];
          uVar4 = *(uint *)((long)pppppppuVar21 + 4);
          ppppppuVar17[1] = (uint *****)pppppppuVar21[1];
          *ppppppuVar17 = (uint *****)ppppppuVar10;
          ppppppuVar17[3] = (uint *****)ppppppuVar22;
          ppppppuVar17[2] = (uint *****)ppppppuVar14;
          ppppppuVar10 = pppppppuVar21[4];
          ppppppuVar17[5] = (uint *****)pppppppuVar21[5];
          ppppppuVar17[4] = (uint *****)ppppppuVar10;
          ppppppuVar10 = pppppppuVar21[7];
          ppppppuVar14 = pppppppuVar21[6];
          ppppppuVar17[7] = (uint *****)pppppppuVar21[7];
          ppppppuVar17[6] = (uint *****)ppppppuVar14;
          ppppppuVar17[10] = (uint *****)0x0;
          ppppppuVar17[8] = (uint *****)(ppppppuVar17 + 1);
          ppppppuVar17[9] = (uint *****)(ppppppuVar17 + 10);
          ppppppuVar17[0xb] = (uint *****)0x0;
          if (ppppppuVar10 != (uint ******)0x0) {
            piVar1 = (int *)((long)ppppppuVar10 + 0x14);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            uVar4 = *(uint *)((long)pppppppuVar21 + 4);
          }
          if ((int)uVar4 < 3) {
            ppppppuVar10 = pppppppuVar21[9];
            pppppuVar12 = ppppppuVar17[9];
            *pppppuVar12 = (uint ****)*ppppppuVar10;
            pppppuVar12[1] = (uint ****)ppppppuVar10[1];
          }
          else {
            *(undefined4 *)((long)ppppppuVar17 + 4) = 0;
            func_0x000109a84868(ppppppuVar17,pppppppuVar21);
          }
          pppppppuVar21 = pppppppuVar21 + 0xc;
          ppppppuVar17 = ppppppuVar17 + 0xc;
        } while (pppppppuVar21 != pppppppuVar15);
        do {
          FUN_1093955b8(pppppppuVar16);
          pppppppuVar16 = pppppppuVar16 + 0xc;
        } while (pppppppuVar16 != pppppppuVar15);
        pppppppuVar16 = (uint *******)*param_1;
        ppppppuVar14 = param_1[2];
      }
      *param_1 = ppppppuVar20;
      param_1[1] = (uint ******)pppppppuStack_108;
      param_1[2] = ppppppuStack_100;
      pppppppuVar21 = (uint *******)&pppppppuStack_118;
      pppppppuStack_118 = pppppppuVar16;
      pppppppuStack_110 = pppppppuVar16;
      pppppppuStack_108 = pppppppuVar16;
      ppppppuStack_100 = ppppppuVar14;
      FUN_109395658(pppppppuVar21);
      return pppppppuVar21;
    }
  }
  else {
    FUN_1093955a4();
  }
  func_0x000104c4f740();
  if (unaff_x23 != lVar19) {
    do {
      FUN_1093955b8(pppppppuVar8);
      pppppppuVar8 = pppppppuVar8 + -0xc;
      pppppppuVar21 = pppppppuVar21 + 0xc;
    } while (pppppppuVar21 != (uint *******)0x0);
  }
  FUN_109395658(&pppppppuStack_118);
  pppppppuVar16 = param_1;
  __Unwind_Resume();
  pcStack_128 = FUN_109390e94;
  pppppppuStack_140 = pppppppuVar15;
  pppppppuStack_138 = param_1;
  ppuStack_130 = &puStack_a0;
  if (((ulong)*pppppppuVar11 & 0xfff) != 5) {
    if (((ulong)*pppppppuVar11 & 7) != 5) {
      uStack_1a0 = 0x82010005;
      uStack_190 = 0;
      pppppppuStack_198 = pppppppuVar16;
      FUN_109a41858(0x3ff0000000000000,0,pppppppuVar11,&uStack_1a0,5);
      return pppppppuVar16;
    }
    FUN_109a9ad84(&uStack_1a0,pppppppuVar11,1,*(uint *)((long)pppppppuVar11 + 4),0);
    FUN_109395f50(pppppppuVar16,&uStack_1a0);
    if (lStack_168 != 0) {
      piVar1 = (int *)(lStack_168 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_1a0);
      }
    }
    lStack_168 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    if (0 < iStack_19c) {
      lVar18 = 0;
      do {
        *(undefined4 *)(lStack_160 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < iStack_19c);
    }
    if (puStack_158 == auStack_150 || puStack_158 == (undefined1 *)0x0) {
      return pppppppuVar16;
    }
    _free(*(undefined8 *)(puStack_158 + -8));
    return pppppppuVar16;
  }
  if (pppppppuVar16 == pppppppuVar11) {
    return pppppppuVar16;
  }
  if (pppppppuVar11[7] != (uint ******)0x0) {
    piVar1 = (int *)((long)pppppppuVar11[7] + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (pppppppuVar16[7] != (uint ******)0x0) {
    piVar1 = (int *)((long)pppppppuVar16[7] + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(pppppppuVar16);
    }
  }
  pppppppuVar16[7] = (uint ******)0x0;
  pppppppuVar16[3] = (uint ******)0x0;
  pppppppuVar16[2] = (uint ******)0x0;
  pppppppuVar16[5] = (uint ******)0x0;
  pppppppuVar16[4] = (uint ******)0x0;
  if ((int)*(uint *)((long)pppppppuVar16 + 4) < 1) {
    *(uint *)pppppppuVar16 = *(uint *)pppppppuVar11;
LAB_109391038:
    if ((int)*(uint *)((long)pppppppuVar11 + 4) < 3) {
      *(uint *)((long)pppppppuVar16 + 4) = *(uint *)((long)pppppppuVar11 + 4);
      pppppppuVar16[1] = pppppppuVar11[1];
      ppppppuVar10 = pppppppuVar11[9];
      ppppppuVar14 = pppppppuVar16[9];
      *ppppppuVar14 = *ppppppuVar10;
      ppppppuVar14[1] = ppppppuVar10[1];
      goto LAB_109391078;
    }
  }
  else {
    lVar18 = 0;
    ppppppuVar10 = pppppppuVar16[8];
    do {
      *(undefined4 *)((long)ppppppuVar10 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)*(uint *)((long)pppppppuVar16 + 4));
    *(uint *)pppppppuVar16 = *(uint *)pppppppuVar11;
    if ((int)*(uint *)((long)pppppppuVar16 + 4) < 3) goto LAB_109391038;
  }
  func_0x000109a84868(pppppppuVar16,pppppppuVar11);
LAB_109391078:
  ppppppuVar10 = pppppppuVar11[2];
  pppppppuVar16[3] = pppppppuVar11[3];
  pppppppuVar16[2] = ppppppuVar10;
  ppppppuVar10 = pppppppuVar11[4];
  pppppppuVar16[5] = pppppppuVar11[5];
  pppppppuVar16[4] = ppppppuVar10;
  ppppppuVar10 = pppppppuVar11[6];
  pppppppuVar16[7] = pppppppuVar11[7];
  pppppppuVar16[6] = ppppppuVar10;
  return pppppppuVar16;
}



/* Entry: 109390b84; end: 109390e93;  */

/* WARNING: Type propagation algorithm not settling */

uint ******* FUN_109390b84(uint *******param_1,uint *******param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  uint *******pppppppuVar8;
  long lVar9;
  uint ******ppppppuVar10;
  uint *******pppppppuVar11;
  uint *****pppppuVar12;
  uint ******ppppppuVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  long unaff_x23;
  uint ******ppppppuVar16;
  long lVar17;
  long lVar18;
  uint ******ppppppuVar19;
  uint *******pppppppuVar20;
  uint ******ppppppuVar21;
  undefined4 uStack_110;
  int iStack_10c;
  uint *******pppppppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  undefined1 auStack_c0 [16];
  uint *******pppppppuStack_b0;
  uint *******pppppppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  uint ******ppppppuStack_90;
  uint *******pppppppuStack_88;
  uint *******pppppppuStack_80;
  uint *******pppppppuStack_78;
  uint ******ppppppuStack_70;
  uint *******pppppppuStack_68;
  
  pppppppuVar15 = (uint *******)*param_1;
  pppppppuVar14 = (uint *******)param_1[1];
  lVar18 = (long)pppppppuVar14 - (long)pppppppuVar15;
  lVar17 = lVar18 >> 5;
  pppppppuVar20 = (uint *******)(lVar17 * -0x5555555555555555);
  uVar7 = (long)param_2 + lVar17 * 0x5555555555555555;
  if (param_2 < pppppppuVar20 || uVar7 == 0) {
    pppppppuVar8 = param_1;
    if (param_2 < pppppppuVar20) {
      while (pppppppuVar14 != pppppppuVar15 + (long)param_2 * 0xc) {
        pppppppuVar14 = pppppppuVar14 + -0xc;
        pppppppuVar8 = pppppppuVar14;
        FUN_1093955b8(pppppppuVar14);
      }
      param_1[1] = (uint ******)(pppppppuVar15 + (long)param_2 * 0xc);
    }
    return pppppppuVar8;
  }
  ppppppuVar10 = param_1[2];
  if (uVar7 <= (ulong)(((long)ppppppuVar10 - (long)pppppppuVar14 >> 5) * -0x5555555555555555)) {
    lVar17 = (long)param_2 * 0x60 + lVar17 * -0x20;
    pppppppuVar15 = pppppppuVar14 + 10;
    do {
      pppppppuVar15[-3] = (uint ******)0x0;
      pppppppuVar15[-4] = (uint ******)0x0;
      ((uint *)((long)pppppppuVar15 + -0x24))[0] = 0;
      ((uint *)((long)pppppppuVar15 + -0x24))[1] = 0;
      ((uint *)((long)pppppppuVar15 + -0x2c))[0] = 0;
      ((uint *)((long)pppppppuVar15 + -0x2c))[1] = 0;
      ((uint *)((long)pppppppuVar15 + -0x34))[0] = 0;
      ((uint *)((long)pppppppuVar15 + -0x34))[1] = 0;
      ((uint *)((long)pppppppuVar15 + -0x3c))[0] = 0;
      ((uint *)((long)pppppppuVar15 + -0x3c))[1] = 0;
      ((uint *)((long)pppppppuVar15 + -0x44))[0] = 0;
      ((uint *)((long)pppppppuVar15 + -0x44))[1] = 0;
      ((uint *)((long)pppppppuVar15 + -0x4c))[0] = 0;
      ((uint *)((long)pppppppuVar15 + -0x4c))[1] = 0;
      pppppppuVar15[-2] = (uint ******)(pppppppuVar15 + -9);
      pppppppuVar15[-1] = (uint ******)pppppppuVar15;
      *pppppppuVar15 = (uint ******)0x0;
      pppppppuVar15[1] = (uint ******)0x0;
      *(uint *)(pppppppuVar15 + -10) = 0x42ff0005;
      pppppppuVar15 = pppppppuVar15 + 0xc;
      lVar17 = lVar17 + -0x60;
    } while (lVar17 != 0);
    param_1[1] = (uint ******)(pppppppuVar14 + uVar7 * 0xc);
    return param_1;
  }
  pppppppuVar8 = param_2;
  if (param_2 < (uint *******)0x2aaaaaaaaaaaaab) {
    lVar9 = (long)ppppppuVar10 - (long)pppppppuVar15 >> 5;
    pppppppuVar11 = (uint *******)(lVar9 * 0x5555555555555556);
    if (pppppppuVar11 < param_2 || (long)pppppppuVar11 - (long)param_2 == 0) {
      pppppppuVar11 = param_2;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      pppppppuVar11 = (uint *******)0x2aaaaaaaaaaaaaa;
    }
    ppppppuStack_90 = ppppppuVar10;
    pppppppuStack_68 = param_1;
    if (pppppppuVar11 < (uint *******)0x2aaaaaaaaaaaaab) {
      ppppppuVar10 = (uint ******)((long)pppppppuVar11 * 0x60);
      __Znwm();
      lVar9 = 0;
      pppppppuStack_80 = (uint *******)((long)ppppppuVar10 + lVar18);
      ppppppuStack_70 = ppppppuVar10 + (long)pppppppuVar11 * 0xc;
      pppppppuStack_78 = (uint *******)((long)pppppppuStack_80 + uVar7 * 0x60);
      do {
        puVar2 = (undefined4 *)((long)pppppppuStack_80 + lVar9);
        *(undefined8 *)(puVar2 + 0xe) = 0;
        *(undefined8 *)(puVar2 + 0xc) = 0;
        *(undefined8 *)(puVar2 + 0xb) = 0;
        *(undefined8 *)(puVar2 + 9) = 0;
        *(undefined8 *)(puVar2 + 7) = 0;
        *(undefined8 *)(puVar2 + 5) = 0;
        *(undefined8 *)(puVar2 + 3) = 0;
        *(undefined8 *)(puVar2 + 1) = 0;
        *(undefined8 *)(puVar2 + 0x14) = 0;
        *(undefined4 **)(puVar2 + 0x10) = puVar2 + 2;
        *(undefined4 **)(puVar2 + 0x12) = puVar2 + 0x14;
        *(undefined8 *)(puVar2 + 0x16) = 0;
        lVar9 = lVar9 + 0x60;
        *puVar2 = 0x42ff0005;
      } while ((long)param_2 * 0x60 + lVar17 * -0x20 != lVar9);
      ppppppuVar19 = (uint ******)((long)pppppppuStack_80 - lVar18);
      ppppppuVar13 = ppppppuStack_90;
      ppppppuVar16 = ppppppuVar19;
      pppppppuVar20 = pppppppuVar15;
      pppppppuStack_88 = (uint *******)ppppppuVar10;
      if (pppppppuVar15 != pppppppuVar14) {
        do {
          ppppppuVar10 = *pppppppuVar20;
          ppppppuVar21 = pppppppuVar20[3];
          ppppppuVar13 = pppppppuVar20[2];
          uVar4 = *(uint *)((long)pppppppuVar20 + 4);
          ppppppuVar16[1] = (uint *****)pppppppuVar20[1];
          *ppppppuVar16 = (uint *****)ppppppuVar10;
          ppppppuVar16[3] = (uint *****)ppppppuVar21;
          ppppppuVar16[2] = (uint *****)ppppppuVar13;
          ppppppuVar10 = pppppppuVar20[4];
          ppppppuVar16[5] = (uint *****)pppppppuVar20[5];
          ppppppuVar16[4] = (uint *****)ppppppuVar10;
          ppppppuVar10 = pppppppuVar20[7];
          ppppppuVar13 = pppppppuVar20[6];
          ppppppuVar16[7] = (uint *****)pppppppuVar20[7];
          ppppppuVar16[6] = (uint *****)ppppppuVar13;
          ppppppuVar16[10] = (uint *****)0x0;
          ppppppuVar16[8] = (uint *****)(ppppppuVar16 + 1);
          ppppppuVar16[9] = (uint *****)(ppppppuVar16 + 10);
          ppppppuVar16[0xb] = (uint *****)0x0;
          if (ppppppuVar10 != (uint ******)0x0) {
            piVar1 = (int *)((long)ppppppuVar10 + 0x14);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            uVar4 = *(uint *)((long)pppppppuVar20 + 4);
          }
          if ((int)uVar4 < 3) {
            ppppppuVar10 = pppppppuVar20[9];
            pppppuVar12 = ppppppuVar16[9];
            *pppppuVar12 = (uint ****)*ppppppuVar10;
            pppppuVar12[1] = (uint ****)ppppppuVar10[1];
          }
          else {
            *(undefined4 *)((long)ppppppuVar16 + 4) = 0;
            func_0x000109a84868(ppppppuVar16,pppppppuVar20);
          }
          pppppppuVar20 = pppppppuVar20 + 0xc;
          ppppppuVar16 = ppppppuVar16 + 0xc;
        } while (pppppppuVar20 != pppppppuVar14);
        do {
          FUN_1093955b8(pppppppuVar15);
          pppppppuVar15 = pppppppuVar15 + 0xc;
        } while (pppppppuVar15 != pppppppuVar14);
        pppppppuVar15 = (uint *******)*param_1;
        ppppppuVar13 = param_1[2];
      }
      *param_1 = ppppppuVar19;
      param_1[1] = (uint ******)pppppppuStack_78;
      param_1[2] = ppppppuStack_70;
      pppppppuVar20 = (uint *******)&pppppppuStack_88;
      pppppppuStack_88 = pppppppuVar15;
      pppppppuStack_80 = pppppppuVar15;
      pppppppuStack_78 = pppppppuVar15;
      ppppppuStack_70 = ppppppuVar13;
      FUN_109395658(pppppppuVar20);
      return pppppppuVar20;
    }
  }
  else {
    FUN_1093955a4();
  }
  func_0x000104c4f740();
  if (unaff_x23 != lVar18) {
    do {
      FUN_1093955b8(param_2);
      param_2 = param_2 + -0xc;
      pppppppuVar20 = pppppppuVar20 + 0xc;
    } while (pppppppuVar20 != (uint *******)0x0);
  }
  FUN_109395658(&pppppppuStack_88);
  pppppppuVar15 = param_1;
  __Unwind_Resume();
  pcStack_98 = FUN_109390e94;
  pppppppuStack_b0 = pppppppuVar14;
  pppppppuStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (((ulong)*pppppppuVar8 & 0xfff) != 5) {
    if (((ulong)*pppppppuVar8 & 7) != 5) {
      uStack_110 = 0x82010005;
      uStack_100 = 0;
      pppppppuStack_108 = pppppppuVar15;
      FUN_109a41858(0x3ff0000000000000,0,pppppppuVar8,&uStack_110,5);
      return pppppppuVar15;
    }
    FUN_109a9ad84(&uStack_110,pppppppuVar8,1,*(uint *)((long)pppppppuVar8 + 4),0);
    FUN_109395f50(pppppppuVar15,&uStack_110);
    if (lStack_d8 != 0) {
      piVar1 = (int *)(lStack_d8 + 0x14);
      do {
        iVar3 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_110);
      }
    }
    lStack_d8 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    if (0 < iStack_10c) {
      lVar17 = 0;
      do {
        *(undefined4 *)(lStack_d0 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iStack_10c);
    }
    if (puStack_c8 == auStack_c0 || puStack_c8 == (undefined1 *)0x0) {
      return pppppppuVar15;
    }
    _free(*(undefined8 *)(puStack_c8 + -8));
    return pppppppuVar15;
  }
  if (pppppppuVar15 == pppppppuVar8) {
    return pppppppuVar15;
  }
  if (pppppppuVar8[7] != (uint ******)0x0) {
    piVar1 = (int *)((long)pppppppuVar8[7] + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (pppppppuVar15[7] != (uint ******)0x0) {
    piVar1 = (int *)((long)pppppppuVar15[7] + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(pppppppuVar15);
    }
  }
  pppppppuVar15[7] = (uint ******)0x0;
  pppppppuVar15[3] = (uint ******)0x0;
  pppppppuVar15[2] = (uint ******)0x0;
  pppppppuVar15[5] = (uint ******)0x0;
  pppppppuVar15[4] = (uint ******)0x0;
  if ((int)*(uint *)((long)pppppppuVar15 + 4) < 1) {
    *(uint *)pppppppuVar15 = *(uint *)pppppppuVar8;
LAB_109391038:
    if ((int)*(uint *)((long)pppppppuVar8 + 4) < 3) {
      *(uint *)((long)pppppppuVar15 + 4) = *(uint *)((long)pppppppuVar8 + 4);
      pppppppuVar15[1] = pppppppuVar8[1];
      ppppppuVar10 = pppppppuVar8[9];
      ppppppuVar13 = pppppppuVar15[9];
      *ppppppuVar13 = *ppppppuVar10;
      ppppppuVar13[1] = ppppppuVar10[1];
      goto LAB_109391078;
    }
  }
  else {
    lVar17 = 0;
    ppppppuVar10 = pppppppuVar15[8];
    do {
      *(undefined4 *)((long)ppppppuVar10 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)*(uint *)((long)pppppppuVar15 + 4));
    *(uint *)pppppppuVar15 = *(uint *)pppppppuVar8;
    if ((int)*(uint *)((long)pppppppuVar15 + 4) < 3) goto LAB_109391038;
  }
  func_0x000109a84868(pppppppuVar15,pppppppuVar8);
LAB_109391078:
  ppppppuVar10 = pppppppuVar8[2];
  pppppppuVar15[3] = pppppppuVar8[3];
  pppppppuVar15[2] = ppppppuVar10;
  ppppppuVar10 = pppppppuVar8[4];
  pppppppuVar15[5] = pppppppuVar8[5];
  pppppppuVar15[4] = ppppppuVar10;
  ppppppuVar10 = pppppppuVar8[6];
  pppppppuVar15[7] = pppppppuVar8[7];
  pppppppuVar15[6] = ppppppuVar10;
  return pppppppuVar15;
}



/* Entry: 109390e94; end: 1093910bb;  */

uint * FUN_109390e94(uint *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uStack_80;
  int iStack_7c;
  uint *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  undefined1 auStack_30 [16];
  
  if ((*param_2 & 0xfff) != 5) {
    if ((*param_2 & 7) != 5) {
      uStack_80 = 0x82010005;
      uStack_70 = 0;
      puStack_78 = param_1;
      FUN_109a41858(0x3ff0000000000000,0,param_2,&uStack_80,5);
      return param_1;
    }
    FUN_109a9ad84(&uStack_80,param_2,1,param_2[1],0);
    FUN_109395f50(param_1,&uStack_80);
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
        func_0x000109a848d4(&uStack_80);
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
    if (puStack_38 == auStack_30 || puStack_38 == (undefined1 *)0x0) {
      return param_1;
    }
    _free(*(undefined8 *)(puStack_38 + -8));
    return param_1;
  }
  if (param_1 == param_2) {
    return param_1;
  }
  if (*(long *)(param_2 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_1 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((int)param_1[1] < 1) {
    *param_1 = *param_2;
LAB_109391038:
    if ((int)param_2[1] < 3) {
      param_1[1] = param_2[1];
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      puVar6 = *(undefined8 **)(param_2 + 0x12);
      puVar8 = *(undefined8 **)(param_1 + 0x12);
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      goto LAB_109391078;
    }
  }
  else {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0x10);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
    *param_1 = *param_2;
    if ((int)param_1[1] < 3) goto LAB_109391038;
  }
  func_0x000109a84868(param_1,param_2);
LAB_109391078:
  uVar9 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar9;
  return param_1;
}



/* Entry: 1093910bc; end: 1093912d7;  */

uint * FUN_1093910bc(uint *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uStack_80;
  int iStack_7c;
  uint *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  undefined1 auStack_30 [16];
  
  if ((*param_2 & 0xfff) != 0) {
    if ((*param_2 & 7) != 0) {
      uStack_80 = 0x82010000;
      uStack_70 = 0;
      puStack_78 = param_1;
      FUN_109a41858(0x3ff0000000000000,0,param_2,&uStack_80,0);
      return param_1;
    }
    FUN_109a9ad84(&uStack_80,param_2,1,param_2[1],0);
    FUN_109396208(param_1,&uStack_80);
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
        func_0x000109a848d4(&uStack_80);
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
    if (puStack_38 == auStack_30 || puStack_38 == (undefined1 *)0x0) {
      return param_1;
    }
    _free(*(undefined8 *)(puStack_38 + -8));
    return param_1;
  }
  if (param_1 == param_2) {
    return param_1;
  }
  if (*(long *)(param_2 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_1 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((int)param_1[1] < 1) {
    *param_1 = *param_2;
LAB_109391254:
    if ((int)param_2[1] < 3) {
      param_1[1] = param_2[1];
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      puVar6 = *(undefined8 **)(param_2 + 0x12);
      puVar8 = *(undefined8 **)(param_1 + 0x12);
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1];
      goto LAB_109391294;
    }
  }
  else {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0x10);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
    *param_1 = *param_2;
    if ((int)param_1[1] < 3) goto LAB_109391254;
  }
  func_0x000109a84868(param_1,param_2);
LAB_109391294:
  uVar9 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar9;
  return param_1;
}



/* Entry: 1093912d8; end: 109392307;  */

void FUN_1093912d8(long *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  char cVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  short *psVar25;
  int iVar26;
  int iVar27;
  ulong uVar29;
  long lVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  short *psVar36;
  int iVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  long lVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  short *psVar52;
  short *psVar53;
  short *psVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  short *psVar59;
  uint uVar60;
  byte *pbVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  ulong uVar67;
  long lVar68;
  byte *pbVar69;
  int iVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  short *psStack_190;
  short *psStack_188;
  byte *pbStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_160;
  ulong uStack_158;
  long lStack_138;
  int iStack_a0;
  int iStack_9c;
  long lVar28;
  
  lVar58 = param_1[1];
  cVar16 = *(char *)(lVar58 + 0x2d);
  if ((cVar16 == '\x01') && (iStack_a0 = *param_2, *param_2 + 1 < param_2[1])) {
    do {
      iVar2 = iStack_a0 + 1;
      iStack_9c = iVar2;
      (**(code **)(*param_1 + 0x10))(param_1,&iStack_a0);
      iStack_a0 = iVar2;
    } while (iVar2 < param_2[1]);
  }
  else {
    lVar11 = *(long *)(lVar58 + 0x120);
    lVar12 = *(long *)(lVar58 + 0x128);
    if (lVar11 == lVar12) {
      lStack_138 = 0;
      lStack_160 = 0;
    }
    else {
      lStack_160 = *(long *)(lVar11 + (long)*(int *)((long)param_1 + 100) * 0x60 + 0x10);
      lStack_138 = *(long *)(*(long *)(lVar58 + 0x138) + (long)*(int *)((long)param_1 + 100) * 0x60
                            + 0x10);
    }
    uVar13 = *(uint *)(param_1 + 0xc);
    if (0 < (int)uVar13) {
      uVar60 = 0;
      uVar14 = *(uint *)(lVar58 + 0x10);
      uVar29 = (ulong)uVar14;
      iVar8 = *(int *)(lVar58 + 0x30);
      iVar9 = *(int *)(lVar58 + 0x34);
      lVar68 = (long)iVar9;
      lVar38 = *(long *)(param_1[6] + 0x10);
      lVar39 = *(long *)(param_1[7] + 0x10);
      lVar48 = *(long *)(param_1[4] + 0x10);
      lVar40 = *(long *)(param_1[5] + 0x10);
      lVar62 = *(long *)(lVar58 + 0x220);
      lVar63 = *(long *)(lVar58 + 0x280);
      lVar64 = *(long *)(lVar58 + 0x2e0);
      lVar65 = *(long *)(lVar58 + 0x340);
      lVar66 = *(long *)(lVar58 + 0x3a0);
      iVar2 = iVar9 + iVar8 * 2;
      lVar41 = *(long *)(param_1[8] + 0x10);
      lVar49 = *(long *)(param_1[10] + 0x10);
      lVar50 = *(long *)(param_1[0xb] + 0x10);
      fVar71 = (float)(int)(iVar8 - uVar14) + 1.0;
      iVar10 = *(int *)(lVar58 + 0x3c);
      fVar72 = (float)(*(int *)(lVar58 + 0x38) + iVar8) + -1.0;
      fVar73 = (float)(iVar8 + iVar9) + -1.0;
      iVar70 = (int)((float)*(int *)(lVar58 + 0x18) / (float)(int)uVar13);
      cVar7 = cVar16;
      if (lVar11 != lVar12) {
        cVar7 = '\x01';
      }
      fVar74 = (float)iVar8;
      fVar75 = (float)(int)uVar14 * (float)(int)uVar14;
      iVar6 = (int)param_1[3];
      iVar18 = *(int *)((long)param_1 + 0x14) * param_2[1];
      iVar8 = iVar6;
      if (iVar18 <= iVar6) {
        iVar8 = iVar18;
      }
      iVar18 = *(int *)((long)param_1 + 0x14) * *param_2;
      if (iVar18 <= iVar6) {
        iVar6 = iVar18;
      }
      lVar3 = *(long *)(param_1[9] + 0x10) + 1;
      lVar1 = lVar3 + iVar2;
      do {
        iVar15 = *(int *)(lVar58 + 0x14);
        lVar42 = (long)((iVar10 + -1) * iVar15);
        bVar24 = (uVar60 & 1) == 0;
        iVar18 = iVar10 + -1;
        iVar22 = iVar6 + -1;
        if (bVar24) {
          iVar18 = 0;
          iVar22 = iVar8;
        }
        iVar26 = -1;
        iVar27 = iVar8 + -1;
        iVar23 = iVar26;
        if (bVar24) {
          iVar27 = iVar6;
          iVar23 = iVar10;
        }
        if (bVar24) {
          lVar42 = 0;
        }
        iVar37 = iVar8 + -1;
        if ((uVar60 & 1) == 0) {
          iVar26 = 1;
          iVar37 = iVar6;
        }
        uVar19 = iVar26 * iVar37;
        if ((int)uVar19 < iVar26 * iVar22) {
          uVar20 = iVar26 * iVar18;
          uVar21 = iVar26 * iVar15;
          lVar55 = (long)iVar26;
          lStack_170 = (long)(iVar15 * iVar27);
          lVar56 = (long)(int)uVar21;
          lStack_178 = (long)iVar37;
          pbStack_180 = (byte *)(lVar41 + lVar42 + (long)iVar9 * (long)(iVar15 * iVar27));
          lVar28 = lVar68 * 2 * lStack_170 + lVar42 * 2;
          psStack_188 = (short *)(lVar50 + lVar28);
          lVar43 = lVar68 * 2 * lVar56;
          uVar44 = -(ulong)(uVar21 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar21 << 1;
          psStack_190 = (short *)(lVar49 + lVar28);
          uStack_158 = (ulong)uVar19;
          do {
            if ((int)uVar20 < iVar26 * iVar23) {
              iVar15 = (int)uVar14 / 2 + ((int)uVar14 / 2 + (int)lStack_170) * iVar9;
              fVar82 = (float)(int)lStack_170;
              lVar45 = lStack_178 * iVar10;
              uVar46 = (ulong)uVar20;
              psVar25 = psStack_190;
              lVar28 = lVar42;
              lVar57 = (long)iVar18;
              psVar59 = psStack_188;
              pbVar69 = pbStack_180;
              do {
                iVar27 = (int)lVar28;
                if (uVar60 == 0) {
                  iVar37 = iVar15 + iVar27;
                  *(undefined4 *)(lVar48 + (lVar57 + lVar45) * 4) =
                       *(undefined4 *)(lVar38 + (long)iVar37 * 4);
                  *(undefined4 *)(lVar40 + (lVar57 + lVar45) * 4) =
                       *(undefined4 *)(lVar39 + (long)iVar37 * 4);
                }
                lVar4 = lVar57 + lVar45;
                if (cVar7 != '\0') {
                  fVar83 = *(float *)(lVar40 + lVar4 * 4) + fVar82 + fVar74;
                  fVar86 = fVar71;
                  if (fVar71 <= fVar83) {
                    fVar86 = fVar83;
                  }
                  fVar84 = (float)iVar27;
                  fVar83 = fVar72;
                  if (fVar86 <= fVar72) {
                    fVar83 = fVar86;
                  }
                  fVar85 = *(float *)(lVar48 + lVar4 * 4) + fVar84 + fVar74;
                  fVar86 = fVar71;
                  if (fVar71 <= fVar85) {
                    fVar86 = fVar85;
                  }
                  fVar85 = fVar73;
                  if (fVar86 <= fVar73) {
                    fVar85 = fVar86;
                  }
                  fVar87 = fVar83 - (float)(int)fVar83;
                  fVar89 = fVar85 - (float)(int)fVar85;
                  fVar86 = fVar87 * fVar89;
                  fVar88 = ((float)(int)fVar85 + 1.0) - fVar85;
                  fVar87 = fVar87 * fVar88;
                  fVar90 = ((float)(int)fVar83 + 1.0) - fVar83;
                  fVar89 = fVar90 * fVar89;
                  fVar90 = fVar90 * fVar88;
                  cVar17 = *(char *)(lVar58 + 0x2c);
                  if (cVar17 == '\x01') {
                    if ((int)uVar14 < 1) {
                      fVar83 = 0.0;
                      fVar85 = 0.0;
                    }
                    else {
                      uVar51 = 0;
                      lVar30 = (long)(int)fVar85 + (long)(iVar2 * (int)fVar83);
                      pbVar34 = (byte *)(lVar3 + lVar30);
                      pbVar31 = (byte *)(lVar1 + lVar30);
                      fVar85 = 0.0;
                      fVar83 = 0.0;
                      pbVar32 = pbVar69;
                      do {
                        uVar51 = uVar51 + 1;
                        pbVar35 = pbVar31;
                        pbVar33 = pbVar34;
                        pbVar61 = pbVar32;
                        uVar67 = uVar29;
                        do {
                          fVar88 = (float)NEON_ucvtf((uint)pbVar33[-1]);
                          fVar91 = (float)NEON_ucvtf((uint)*pbVar33);
                          fVar92 = (float)NEON_ucvtf((uint)pbVar35[-1]);
                          fVar93 = (float)NEON_ucvtf((uint)*pbVar35);
                          fVar88 = (fVar89 * fVar91 + fVar88 * fVar90 + fVar92 * fVar87 +
                                   fVar93 * fVar86) - (float)*pbVar61;
                          fVar85 = fVar85 + fVar88;
                          fVar83 = fVar83 + fVar88 * fVar88;
                          pbVar33 = pbVar33 + 1;
                          pbVar35 = pbVar35 + 1;
                          uVar67 = uVar67 - 1;
                          pbVar61 = pbVar61 + 1;
                        } while (uVar67 != 0);
                        pbVar32 = pbVar32 + lVar68;
                        pbVar34 = pbVar34 + iVar2;
                        pbVar31 = pbVar31 + iVar2;
                      } while (uVar51 != uVar29);
                    }
                    fVar83 = fVar83 - (fVar85 * fVar85) / fVar75;
                  }
                  else if ((int)uVar14 < 1) {
                    fVar83 = 0.0;
                  }
                  else {
                    uVar51 = 0;
                    lVar30 = (long)(int)fVar85 + (long)(iVar2 * (int)fVar83);
                    pbVar34 = (byte *)(lVar3 + lVar30);
                    pbVar31 = (byte *)(lVar1 + lVar30);
                    fVar83 = 0.0;
                    pbVar32 = pbVar69;
                    do {
                      uVar51 = uVar51 + 1;
                      pbVar35 = pbVar31;
                      pbVar33 = pbVar34;
                      pbVar61 = pbVar32;
                      uVar67 = uVar29;
                      do {
                        fVar85 = (float)NEON_ucvtf((uint)pbVar33[-1]);
                        fVar88 = (float)NEON_ucvtf((uint)*pbVar33);
                        fVar91 = (float)NEON_ucvtf((uint)pbVar35[-1]);
                        fVar92 = (float)NEON_ucvtf((uint)*pbVar35);
                        fVar85 = (fVar89 * fVar88 + fVar85 * fVar90 + fVar91 * fVar87 +
                                 fVar92 * fVar86) - (float)*pbVar61;
                        fVar83 = fVar83 + fVar85 * fVar85;
                        pbVar33 = pbVar33 + 1;
                        pbVar35 = pbVar35 + 1;
                        uVar67 = uVar67 - 1;
                        pbVar61 = pbVar61 + 1;
                      } while (uVar67 != 0);
                      pbVar32 = pbVar32 + lVar68;
                      pbVar34 = pbVar34 + iVar2;
                      pbVar31 = pbVar31 + iVar2;
                    } while (uVar51 != uVar29);
                  }
                  if (lVar11 != lVar12) {
                    iVar37 = iVar15 + iVar27;
                    fVar85 = *(float *)(lStack_138 + (long)iVar37 * 4) + fVar82 + fVar74;
                    fVar86 = fVar71;
                    if (fVar71 <= fVar85) {
                      fVar86 = fVar85;
                    }
                    fVar85 = fVar72;
                    if (fVar86 <= fVar72) {
                      fVar85 = fVar86;
                    }
                    fVar87 = *(float *)(lStack_160 + (long)iVar37 * 4);
                    fVar89 = fVar87 + fVar84 + fVar74;
                    fVar86 = fVar71;
                    if (fVar71 <= fVar89) {
                      fVar86 = fVar89;
                    }
                    fVar89 = fVar73;
                    if (fVar86 <= fVar73) {
                      fVar89 = fVar86;
                    }
                    fVar88 = fVar85 - (float)(int)fVar85;
                    fVar90 = fVar89 - (float)(int)fVar89;
                    fVar86 = fVar88 * fVar90;
                    fVar92 = ((float)(int)fVar89 + 1.0) - fVar89;
                    fVar88 = fVar88 * fVar92;
                    fVar91 = ((float)(int)fVar85 + 1.0) - fVar85;
                    fVar90 = fVar91 * fVar90;
                    fVar91 = fVar91 * fVar92;
                    if (cVar17 == '\0') {
                      if ((int)uVar14 < 1) {
                        fVar85 = 0.0;
                      }
                      else {
                        uVar51 = 0;
                        lVar30 = (long)(int)fVar89 + (long)(iVar2 * (int)fVar85);
                        pbVar34 = (byte *)(lVar3 + lVar30);
                        pbVar31 = (byte *)(lVar1 + lVar30);
                        fVar85 = 0.0;
                        pbVar32 = pbVar69;
                        do {
                          uVar51 = uVar51 + 1;
                          pbVar35 = pbVar31;
                          pbVar33 = pbVar34;
                          pbVar61 = pbVar32;
                          uVar67 = uVar29;
                          do {
                            fVar89 = (float)NEON_ucvtf((uint)pbVar33[-1]);
                            fVar92 = (float)NEON_ucvtf((uint)*pbVar33);
                            fVar93 = (float)NEON_ucvtf((uint)pbVar35[-1]);
                            fVar94 = (float)NEON_ucvtf((uint)*pbVar35);
                            fVar89 = (fVar90 * fVar92 + fVar89 * fVar91 + fVar93 * fVar88 +
                                     fVar94 * fVar86) - (float)*pbVar61;
                            fVar85 = fVar85 + fVar89 * fVar89;
                            pbVar33 = pbVar33 + 1;
                            pbVar35 = pbVar35 + 1;
                            uVar67 = uVar67 - 1;
                            pbVar61 = pbVar61 + 1;
                          } while (uVar67 != 0);
                          pbVar32 = pbVar32 + lVar68;
                          pbVar34 = pbVar34 + iVar2;
                          pbVar31 = pbVar31 + iVar2;
                        } while (uVar51 != uVar29);
                      }
                    }
                    else {
                      if ((int)uVar14 < 1) {
                        fVar85 = 0.0;
                        fVar89 = 0.0;
                      }
                      else {
                        uVar51 = 0;
                        lVar30 = (long)(int)fVar89 + (long)(iVar2 * (int)fVar85);
                        pbVar34 = (byte *)(lVar3 + lVar30);
                        pbVar31 = (byte *)(lVar1 + lVar30);
                        fVar89 = 0.0;
                        fVar85 = 0.0;
                        pbVar32 = pbVar69;
                        do {
                          uVar51 = uVar51 + 1;
                          pbVar35 = pbVar31;
                          pbVar33 = pbVar34;
                          pbVar61 = pbVar32;
                          uVar67 = uVar29;
                          do {
                            fVar92 = (float)NEON_ucvtf((uint)pbVar33[-1]);
                            fVar93 = (float)NEON_ucvtf((uint)*pbVar33);
                            fVar94 = (float)NEON_ucvtf((uint)pbVar35[-1]);
                            fVar95 = (float)NEON_ucvtf((uint)*pbVar35);
                            fVar92 = (fVar90 * fVar93 + fVar92 * fVar91 + fVar94 * fVar88 +
                                     fVar95 * fVar86) - (float)*pbVar61;
                            fVar89 = fVar89 + fVar92;
                            fVar85 = fVar85 + fVar92 * fVar92;
                            pbVar33 = pbVar33 + 1;
                            pbVar35 = pbVar35 + 1;
                            uVar67 = uVar67 - 1;
                            pbVar61 = pbVar61 + 1;
                          } while (uVar67 != 0);
                          pbVar32 = pbVar32 + lVar68;
                          pbVar34 = pbVar34 + iVar2;
                          pbVar31 = pbVar31 + iVar2;
                        } while (uVar51 != uVar29);
                      }
                      fVar85 = fVar85 - (fVar89 * fVar89) / fVar75;
                    }
                    if (fVar85 < fVar83) {
                      *(float *)(lVar48 + lVar4 * 4) = fVar87;
                      *(undefined4 *)(lVar40 + lVar4 * 4) =
                           *(undefined4 *)(lStack_138 + (long)iVar37 * 4);
                      fVar83 = fVar85;
                    }
                  }
                  if (cVar16 != '\0') {
                    if ((int)uVar20 < (int)uVar46) {
                      lVar47 = (long)((int)lVar45 + (int)lVar57);
                      lVar30 = lVar47 - iVar26;
                      fVar85 = *(float *)(lVar40 + lVar30 * 4) + fVar82 + fVar74;
                      fVar86 = fVar71;
                      if (fVar71 <= fVar85) {
                        fVar86 = fVar85;
                      }
                      fVar85 = fVar72;
                      if (fVar86 <= fVar72) {
                        fVar85 = fVar86;
                      }
                      fVar87 = *(float *)(lVar48 + lVar30 * 4);
                      fVar89 = fVar87 + fVar84 + fVar74;
                      fVar86 = fVar71;
                      if (fVar71 <= fVar89) {
                        fVar86 = fVar89;
                      }
                      fVar89 = fVar73;
                      if (fVar86 <= fVar73) {
                        fVar89 = fVar86;
                      }
                      fVar88 = fVar85 - (float)(int)fVar85;
                      fVar90 = fVar89 - (float)(int)fVar89;
                      fVar86 = fVar88 * fVar90;
                      fVar92 = ((float)(int)fVar89 + 1.0) - fVar89;
                      fVar88 = fVar88 * fVar92;
                      fVar91 = ((float)(int)fVar85 + 1.0) - fVar85;
                      fVar90 = fVar91 * fVar90;
                      fVar91 = fVar91 * fVar92;
                      if (cVar17 == '\0') {
                        if ((int)uVar14 < 1) {
                          fVar85 = 0.0;
                        }
                        else {
                          uVar46 = 0;
                          lVar5 = (long)(int)fVar89 + (long)(iVar2 * (int)fVar85);
                          pbVar34 = (byte *)(lVar3 + lVar5);
                          pbVar31 = (byte *)(lVar1 + lVar5);
                          fVar85 = 0.0;
                          pbVar32 = pbVar69;
                          do {
                            uVar46 = uVar46 + 1;
                            pbVar35 = pbVar31;
                            pbVar33 = pbVar34;
                            pbVar61 = pbVar32;
                            uVar51 = uVar29;
                            do {
                              fVar89 = (float)NEON_ucvtf((uint)pbVar33[-1]);
                              fVar92 = (float)NEON_ucvtf((uint)*pbVar33);
                              fVar93 = (float)NEON_ucvtf((uint)pbVar35[-1]);
                              fVar94 = (float)NEON_ucvtf((uint)*pbVar35);
                              fVar89 = (fVar90 * fVar92 + fVar89 * fVar91 + fVar93 * fVar88 +
                                       fVar94 * fVar86) - (float)*pbVar61;
                              fVar85 = fVar85 + fVar89 * fVar89;
                              pbVar33 = pbVar33 + 1;
                              pbVar35 = pbVar35 + 1;
                              uVar51 = uVar51 - 1;
                              pbVar61 = pbVar61 + 1;
                            } while (uVar51 != 0);
                            pbVar32 = pbVar32 + lVar68;
                            pbVar34 = pbVar34 + iVar2;
                            pbVar31 = pbVar31 + iVar2;
                          } while (uVar46 != uVar29);
                        }
                      }
                      else {
                        if ((int)uVar14 < 1) {
                          fVar85 = 0.0;
                          fVar89 = 0.0;
                        }
                        else {
                          uVar46 = 0;
                          lVar5 = (long)(int)fVar89 + (long)(iVar2 * (int)fVar85);
                          pbVar34 = (byte *)(lVar3 + lVar5);
                          pbVar31 = (byte *)(lVar1 + lVar5);
                          fVar89 = 0.0;
                          fVar85 = 0.0;
                          pbVar32 = pbVar69;
                          do {
                            uVar46 = uVar46 + 1;
                            pbVar35 = pbVar31;
                            pbVar33 = pbVar34;
                            pbVar61 = pbVar32;
                            uVar51 = uVar29;
                            do {
                              fVar92 = (float)NEON_ucvtf((uint)pbVar33[-1]);
                              fVar93 = (float)NEON_ucvtf((uint)*pbVar33);
                              fVar94 = (float)NEON_ucvtf((uint)pbVar35[-1]);
                              fVar95 = (float)NEON_ucvtf((uint)*pbVar35);
                              fVar92 = (fVar90 * fVar93 + fVar92 * fVar91 + fVar94 * fVar88 +
                                       fVar95 * fVar86) - (float)*pbVar61;
                              fVar89 = fVar89 + fVar92;
                              fVar85 = fVar85 + fVar92 * fVar92;
                              pbVar33 = pbVar33 + 1;
                              pbVar35 = pbVar35 + 1;
                              uVar51 = uVar51 - 1;
                              pbVar61 = pbVar61 + 1;
                            } while (uVar51 != 0);
                            pbVar32 = pbVar32 + lVar68;
                            pbVar34 = pbVar34 + iVar2;
                            pbVar31 = pbVar31 + iVar2;
                          } while (uVar46 != uVar29);
                        }
                        fVar85 = fVar85 - (fVar89 * fVar89) / fVar75;
                      }
                      if (fVar85 < fVar83) {
                        *(float *)(lVar48 + lVar47 * 4) = fVar87;
                        *(undefined4 *)(lVar40 + lVar47 * 4) = *(undefined4 *)(lVar40 + lVar30 * 4);
                        fVar83 = fVar85;
                      }
                    }
                    if ((int)uVar19 < (int)uStack_158) {
                      lVar30 = lVar57 + (lStack_178 - lVar55) * (long)iVar10;
                      fVar85 = *(float *)(lVar40 + lVar30 * 4) + fVar82 + fVar74;
                      fVar86 = fVar71;
                      if (fVar71 <= fVar85) {
                        fVar86 = fVar85;
                      }
                      fVar85 = fVar72;
                      if (fVar86 <= fVar72) {
                        fVar85 = fVar86;
                      }
                      fVar87 = *(float *)(lVar48 + lVar30 * 4);
                      fVar84 = fVar87 + fVar84 + fVar74;
                      fVar86 = fVar71;
                      if (fVar71 <= fVar84) {
                        fVar86 = fVar84;
                      }
                      fVar84 = fVar73;
                      if (fVar86 <= fVar73) {
                        fVar84 = fVar86;
                      }
                      fVar89 = fVar85 - (float)(int)fVar85;
                      fVar88 = fVar84 - (float)(int)fVar84;
                      fVar86 = fVar89 * fVar88;
                      fVar91 = ((float)(int)fVar84 + 1.0) - fVar84;
                      fVar89 = fVar89 * fVar91;
                      fVar90 = ((float)(int)fVar85 + 1.0) - fVar85;
                      fVar88 = fVar90 * fVar88;
                      fVar90 = fVar90 * fVar91;
                      if (cVar17 == '\0') {
                        if ((int)uVar14 < 1) {
                          fVar84 = 0.0;
                        }
                        else {
                          uVar46 = 0;
                          lVar47 = (long)(int)fVar84 + (long)(iVar2 * (int)fVar85);
                          pbVar34 = (byte *)(lVar3 + lVar47);
                          pbVar31 = (byte *)(lVar1 + lVar47);
                          fVar84 = 0.0;
                          pbVar32 = pbVar69;
                          do {
                            uVar46 = uVar46 + 1;
                            pbVar35 = pbVar31;
                            pbVar33 = pbVar34;
                            pbVar61 = pbVar32;
                            uVar51 = uVar29;
                            do {
                              fVar85 = (float)NEON_ucvtf((uint)pbVar33[-1]);
                              fVar91 = (float)NEON_ucvtf((uint)*pbVar33);
                              fVar92 = (float)NEON_ucvtf((uint)pbVar35[-1]);
                              fVar93 = (float)NEON_ucvtf((uint)*pbVar35);
                              fVar85 = (fVar88 * fVar91 + fVar85 * fVar90 + fVar92 * fVar89 +
                                       fVar93 * fVar86) - (float)*pbVar61;
                              fVar84 = fVar84 + fVar85 * fVar85;
                              pbVar33 = pbVar33 + 1;
                              pbVar35 = pbVar35 + 1;
                              uVar51 = uVar51 - 1;
                              pbVar61 = pbVar61 + 1;
                            } while (uVar51 != 0);
                            pbVar32 = pbVar32 + lVar68;
                            pbVar34 = pbVar34 + iVar2;
                            pbVar31 = pbVar31 + iVar2;
                          } while (uVar46 != uVar29);
                        }
                      }
                      else {
                        if ((int)uVar14 < 1) {
                          fVar84 = 0.0;
                          fVar85 = 0.0;
                        }
                        else {
                          uVar46 = 0;
                          lVar47 = (long)(int)fVar84 + (long)(iVar2 * (int)fVar85);
                          pbVar34 = (byte *)(lVar3 + lVar47);
                          pbVar31 = (byte *)(lVar1 + lVar47);
                          fVar85 = 0.0;
                          fVar84 = 0.0;
                          pbVar32 = pbVar69;
                          do {
                            uVar46 = uVar46 + 1;
                            pbVar35 = pbVar31;
                            pbVar33 = pbVar34;
                            pbVar61 = pbVar32;
                            uVar51 = uVar29;
                            do {
                              fVar91 = (float)NEON_ucvtf((uint)pbVar33[-1]);
                              fVar92 = (float)NEON_ucvtf((uint)*pbVar33);
                              fVar93 = (float)NEON_ucvtf((uint)pbVar35[-1]);
                              fVar94 = (float)NEON_ucvtf((uint)*pbVar35);
                              fVar91 = (fVar88 * fVar92 + fVar91 * fVar90 + fVar93 * fVar89 +
                                       fVar94 * fVar86) - (float)*pbVar61;
                              fVar85 = fVar85 + fVar91;
                              fVar84 = fVar84 + fVar91 * fVar91;
                              pbVar33 = pbVar33 + 1;
                              pbVar35 = pbVar35 + 1;
                              uVar51 = uVar51 - 1;
                              pbVar61 = pbVar61 + 1;
                            } while (uVar51 != 0);
                            pbVar32 = pbVar32 + lVar68;
                            pbVar34 = pbVar34 + iVar2;
                            pbVar31 = pbVar31 + iVar2;
                          } while (uVar46 != uVar29);
                        }
                        fVar84 = fVar84 - (fVar85 * fVar85) / fVar75;
                      }
                      if (fVar84 < fVar83) {
                        *(float *)(lVar48 + lVar4 * 4) = fVar87;
                        *(undefined4 *)(lVar40 + lVar4 * 4) = *(undefined4 *)(lVar40 + lVar30 * 4);
                      }
                    }
                  }
                }
                fVar83 = *(float *)(lVar48 + lVar4 * 4);
                fVar84 = *(float *)(lVar40 + lVar4 * 4);
                fVar88 = *(float *)(lVar62 + lVar4 * 4);
                fVar87 = *(float *)(lVar63 + lVar4 * 4);
                fVar89 = *(float *)(lVar64 + lVar4 * 4);
                fVar85 = -(fVar89 * fVar89) + fVar87 * fVar88;
                fVar86 = 0.001;
                if (0.001 <= ABS(fVar85)) {
                  fVar86 = fVar85;
                }
                fVar85 = fVar83;
                fVar90 = fVar84;
                if (0 < iVar70) {
                  iVar37 = 0;
                  fVar91 = 1e+10;
                  do {
                    fVar93 = fVar90 + fVar82 + fVar74;
                    fVar92 = fVar71;
                    if (fVar71 <= fVar93) {
                      fVar92 = fVar93;
                    }
                    fVar93 = fVar72;
                    if (fVar92 <= fVar72) {
                      fVar93 = fVar92;
                    }
                    fVar94 = fVar85 + (float)iVar27 + fVar74;
                    fVar92 = fVar71;
                    if (fVar71 <= fVar94) {
                      fVar92 = fVar94;
                    }
                    fVar94 = fVar73;
                    if (fVar92 <= fVar73) {
                      fVar94 = fVar92;
                    }
                    fVar97 = fVar93 - (float)(int)fVar93;
                    fVar95 = fVar94 - (float)(int)fVar94;
                    fVar96 = fVar97 * fVar95;
                    fVar92 = ((float)(int)fVar94 + 1.0) - fVar94;
                    fVar97 = fVar97 * fVar92;
                    fVar77 = ((float)(int)fVar93 + 1.0) - fVar93;
                    fVar95 = fVar95 * fVar77;
                    fVar77 = fVar77 * fVar92;
                    if (*(char *)(lVar58 + 0x2c) == '\0') {
                      if ((int)uVar14 < 1) {
                        fVar93 = 0.0;
                        fVar94 = 0.0;
                        fVar92 = 0.0;
                      }
                      else {
                        uVar46 = 0;
                        lVar30 = (long)(int)fVar94 + (long)(iVar2 * (int)fVar93);
                        pbVar34 = (byte *)(lVar3 + lVar30);
                        pbVar31 = (byte *)(lVar1 + lVar30);
                        fVar93 = 0.0;
                        fVar94 = 0.0;
                        fVar92 = 0.0;
                        pbVar32 = pbVar69;
                        psVar54 = psVar25;
                        psVar36 = psVar59;
                        do {
                          uVar46 = uVar46 + 1;
                          pbVar33 = pbVar34;
                          pbVar35 = pbVar31;
                          pbVar61 = pbVar32;
                          psVar52 = psVar54;
                          psVar53 = psVar36;
                          uVar51 = uVar29;
                          do {
                            fVar76 = (float)NEON_ucvtf((uint)pbVar33[-1]);
                            fVar78 = (float)NEON_ucvtf((uint)*pbVar33);
                            fVar79 = (float)NEON_ucvtf((uint)pbVar35[-1]);
                            fVar80 = (float)NEON_ucvtf((uint)*pbVar35);
                            fVar76 = (fVar95 * fVar78 + fVar76 * fVar77 + fVar79 * fVar97 +
                                     fVar80 * fVar96) - (float)*pbVar61;
                            fVar92 = fVar92 + fVar76 * fVar76;
                            fVar94 = fVar94 + (float)(int)*psVar52 * fVar76;
                            fVar93 = fVar93 + (float)(int)*psVar53 * fVar76;
                            pbVar33 = pbVar33 + 1;
                            pbVar35 = pbVar35 + 1;
                            uVar51 = uVar51 - 1;
                            pbVar61 = pbVar61 + 1;
                            psVar52 = psVar52 + 1;
                            psVar53 = psVar53 + 1;
                          } while (uVar51 != 0);
                          psVar36 = psVar36 + lVar68;
                          psVar54 = psVar54 + lVar68;
                          pbVar32 = pbVar32 + lVar68;
                          pbVar34 = pbVar34 + iVar2;
                          pbVar31 = pbVar31 + iVar2;
                        } while (uVar46 != uVar29);
                      }
                    }
                    else {
                      if ((int)uVar14 < 1) {
                        fVar94 = 0.0;
                        fVar93 = 0.0;
                        fVar92 = 0.0;
                        fVar76 = 0.0;
                      }
                      else {
                        uVar46 = 0;
                        lVar30 = (long)(int)fVar94 + (long)(iVar2 * (int)fVar93);
                        pbVar34 = (byte *)(lVar3 + lVar30);
                        pbVar31 = (byte *)(lVar1 + lVar30);
                        fVar76 = 0.0;
                        fVar92 = 0.0;
                        fVar93 = 0.0;
                        fVar94 = 0.0;
                        psVar36 = psVar59;
                        pbVar32 = pbVar69;
                        psVar54 = psVar25;
                        do {
                          uVar46 = uVar46 + 1;
                          pbVar33 = pbVar34;
                          pbVar35 = pbVar31;
                          psVar52 = psVar54;
                          psVar53 = psVar36;
                          uVar51 = uVar29;
                          pbVar61 = pbVar32;
                          do {
                            fVar78 = (float)NEON_ucvtf((uint)pbVar33[-1]);
                            fVar79 = (float)NEON_ucvtf((uint)*pbVar33);
                            fVar80 = (float)NEON_ucvtf((uint)pbVar35[-1]);
                            fVar81 = (float)NEON_ucvtf((uint)*pbVar35);
                            fVar78 = (fVar95 * fVar79 + fVar78 * fVar77 + fVar80 * fVar97 +
                                     fVar81 * fVar96) - (float)*pbVar61;
                            fVar76 = fVar76 + fVar78;
                            fVar92 = fVar92 + fVar78 * fVar78;
                            fVar94 = fVar94 + (float)(int)*psVar52 * fVar78;
                            fVar93 = fVar93 + (float)(int)*psVar53 * fVar78;
                            pbVar33 = pbVar33 + 1;
                            pbVar35 = pbVar35 + 1;
                            uVar51 = uVar51 - 1;
                            psVar52 = psVar52 + 1;
                            psVar53 = psVar53 + 1;
                            pbVar61 = pbVar61 + 1;
                          } while (uVar51 != 0);
                          psVar36 = psVar36 + lVar68;
                          psVar54 = psVar54 + lVar68;
                          pbVar32 = pbVar32 + lVar68;
                          pbVar34 = pbVar34 + iVar2;
                          pbVar31 = pbVar31 + iVar2;
                        } while (uVar46 != uVar29);
                      }
                      fVar94 = fVar94 - (*(float *)(lVar65 + lVar4 * 4) * fVar76) / fVar75;
                      fVar93 = fVar93 - (*(float *)(lVar66 + lVar4 * 4) * fVar76) / fVar75;
                      fVar92 = fVar92 - (fVar76 * fVar76) / fVar75;
                    }
                    fVar85 = fVar85 - ((-fVar89 / fVar86) * fVar93 + fVar94 * (fVar87 / fVar86));
                    fVar90 = fVar90 - ((fVar88 / fVar86) * fVar93 + fVar94 * (-fVar89 / fVar86));
                    iVar37 = iVar37 + 1;
                    bVar24 = fVar92 < fVar91;
                    fVar91 = fVar92;
                  } while (bVar24 && iVar37 < iVar70);
                }
                if (SQRT((fVar85 - fVar83) * (fVar85 - fVar83) + 0.0 +
                         (fVar90 - fVar84) * (fVar90 - fVar84)) <= (float)(int)uVar14) {
                  *(float *)(lVar48 + lVar4 * 4) = fVar85;
                  *(float *)(lVar40 + lVar4 * 4) = fVar90;
                }
                lVar28 = lVar28 + lVar56;
                lVar57 = lVar57 + lVar55;
                uVar46 = lVar57 * lVar55;
                pbVar69 = pbVar69 + lVar56;
                psVar59 = (short *)((long)psVar59 + uVar44);
                psVar25 = (short *)((long)psVar25 + uVar44);
              } while ((long)uVar46 < (long)(iVar26 * iVar23));
            }
            lStack_170 = lStack_170 + lVar56;
            lStack_178 = lStack_178 + lVar55;
            uStack_158 = lStack_178 * lVar55;
            pbStack_180 = pbStack_180 + (long)iVar9 * (long)(int)uVar21;
            psStack_188 = (short *)((long)psStack_188 + lVar43);
            psStack_190 = (short *)((long)psStack_190 + lVar43);
          } while ((long)uStack_158 < (long)(iVar26 * iVar22));
        }
        uVar60 = uVar60 + 1;
      } while (uVar60 != uVar13);
    }
  }
  return;
}



/* Entry: 109392308; end: 109392e27;  */

void FUN_109392308(long param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  bool bVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  float *pfVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  ulong uVar33;
  byte bVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined8 uVar61;
  undefined1 auVar62 [16];
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
  undefined8 uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  long lStack_110;
  undefined4 uStack_fc;
  undefined8 ***pppuStack_f8;
  undefined8 **ppuStack_f0;
  long **pplStack_e0;
  undefined8 **ppuStack_d8;
  long *plStack_c8;
  long *plStack_c0;
  long alStack_b0 [4];
  
  lVar32 = (long)*(int *)(param_1 + 0x14) * (long)*param_2;
  lVar22 = *(long *)(param_1 + 8);
  iVar12 = param_2[1] * *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(lVar22 + 0x38);
  if (iVar12 <= *(int *)(lVar22 + 0x38)) {
    iVar6 = iVar12;
  }
  if ((int)lVar32 < iVar6) {
    lVar18 = *(long *)(lVar22 + 0x48) + (long)*(int *)(param_1 + 0x18) * 0x60;
    iVar7 = *(int *)(lVar18 + 8);
    lVar8 = (long)iVar7;
    iVar9 = *(int *)(lVar18 + 0xc);
    lVar10 = (long)iVar9;
    lVar22 = *(long *)(lVar22 + 0x60) + (long)*(int *)(param_1 + 0x18) * 0x60;
    iVar12 = iVar7 + -5;
    if (7 < iVar7) {
      iVar12 = iVar7 + -8;
    }
    iVar12 = iVar12 >> 2;
    iVar7 = iVar12 + 1;
    iVar4 = iVar9 + -5;
    if (7 < iVar9) {
      iVar4 = iVar9 + -8;
    }
    iVar4 = iVar4 >> 2;
    iVar2 = iVar4 + 1;
    do {
      if (0 < iVar9) {
        lStack_110 = 0;
        uVar33 = 0;
        iVar31 = (int)lVar32;
        iVar5 = iVar31 + 3;
        if (-1 < iVar31) {
          iVar5 = iVar31;
        }
        iVar5 = iVar5 >> 2;
        iVar31 = -2;
        do {
          if ((lVar32 < lVar8 + -3) && ((int)uVar33 + 7 < iVar9)) {
            lVar21 = 0;
            do {
              lVar23 = lVar21 + lVar32;
              uVar61 = *(undefined8 *)
                        (*(long *)(lVar18 + 0x10) + **(long **)(lVar18 + 0x48) * lVar23 + uVar33);
              uVar37 = (undefined1)((ulong)uVar61 >> 8);
              auVar62._5_3_ = 0;
              auVar62._0_5_ =
                   CONCAT14(uVar37,(uint)CONCAT12(uVar37,(ushort)(byte)uVar61)) & 0xff0000ffff;
              auVar62[8] = (char)((ulong)uVar61 >> 0x10);
              auVar62._9_3_ = 0;
              auVar62[0xc] = (char)((ulong)uVar61 >> 0x18);
              auVar62._13_3_ = 0;
              auVar62 = NEON_ucvtf(auVar62,4);
              uVar37 = 0;
              uVar38 = 0;
              uVar39 = 0;
              uVar40 = 0;
              uVar41 = 0;
              uVar42 = 0;
              uVar43 = 0;
              uVar44 = 0;
              uVar45 = 0;
              uVar46 = 0;
              uVar47 = 0;
              uVar48 = 0;
              uVar49 = 0;
              uVar50 = 0;
              uVar51 = 0;
              uVar52 = 0;
              uVar53 = 0;
              uVar54 = 0;
              uVar55 = 0;
              uVar56 = 0;
              uVar57 = 0;
              uVar58 = 0;
              uVar59 = 0;
              uVar60 = 0;
              uVar61 = 0;
              uVar63 = 0;
              uVar64 = 0;
              uVar65 = 0;
              uVar66 = 0;
              uVar67 = 0;
              uVar68 = 0;
              uVar69 = 0;
              uVar70 = 0;
              uVar71 = 0;
              uVar72 = 0;
              uVar73 = 0;
              uVar74 = 0;
              uVar75 = 0;
              uVar76 = 0;
              uVar77 = 0;
              uVar78 = 0;
              iVar25 = iVar5 + -1;
              do {
                if ((-1 < iVar25) && (iVar25 != iVar7)) {
                  iVar27 = iVar31;
                  iVar20 = iVar12;
                  if (iVar25 < iVar7) {
                    iVar20 = iVar25;
                  }
                  do {
                    iVar3 = iVar27 + 1;
                    if ((-1 < iVar3) && (iVar4 != iVar27)) {
                      iVar26 = iVar4;
                      if (iVar3 <= iVar2) {
                        iVar26 = iVar3;
                      }
                      lVar29 = *(long *)(param_1 + 8);
                      iVar26 = iVar26 + *(int *)(lVar29 + 0x3c) * iVar20;
                      if (((*(uint *)(lVar29 + 0x150) >> 0xe & 1) == 0) &&
                         (**(int **)(lVar29 + 400) != 1)) {
                        if ((*(int **)(lVar29 + 400))[1] == 1) {
                          lVar30 = *(long *)(lVar29 + 0x160);
                          pfVar28 = (float *)(lVar30 + **(long **)(lVar29 + 0x198) * (long)iVar26);
                        }
                        else {
                          iVar3 = *(int *)(lVar29 + 0x15c);
                          iVar13 = 0;
                          if (iVar3 != 0) {
                            iVar13 = iVar26 / iVar3;
                          }
                          lVar30 = *(long *)(lVar29 + 0x160);
                          pfVar28 = (float *)(lVar30 + **(long **)(lVar29 + 0x198) * (long)iVar13 +
                                             (long)(iVar26 - iVar13 * iVar3) * 4);
                        }
                      }
                      else {
                        lVar30 = *(long *)(lVar29 + 0x160);
                        pfVar28 = (float *)(lVar30 + (long)iVar26 * 4);
                      }
                      fVar79 = *pfVar28 + (float)(uVar33 & 0xffffffff);
                      fVar81 = (float)*(int *)(lVar29 + 0x34) + -9.0 + -0.001;
                      if (fVar79 <= 0.0) {
                        fVar79 = 0.0;
                      }
                      if (fVar79 <= fVar81) {
                        fVar81 = fVar79;
                      }
                      if (((*(uint *)(lVar29 + 0x1b0) >> 0xe & 1) == 0) &&
                         (**(int **)(lVar29 + 0x1f0) != 1)) {
                        if ((*(int **)(lVar29 + 0x1f0))[1] == 1) {
                          lVar17 = *(long *)(lVar29 + 0x1c0);
                          pfVar28 = (float *)(lVar17 + **(long **)(lVar29 + 0x1f8) * (long)iVar26);
                        }
                        else {
                          iVar3 = *(int *)(lVar29 + 0x1bc);
                          iVar13 = 0;
                          if (iVar3 != 0) {
                            iVar13 = iVar26 / iVar3;
                          }
                          lVar17 = *(long *)(lVar29 + 0x1c0);
                          pfVar28 = (float *)(lVar17 + **(long **)(lVar29 + 0x1f8) * (long)iVar13 +
                                             (long)(iVar26 - iVar13 * iVar3) * 4);
                        }
                      }
                      else {
                        lVar17 = *(long *)(lVar29 + 0x1c0);
                        pfVar28 = (float *)(lVar17 + (long)iVar26 * 4);
                      }
                      fVar82 = *pfVar28 + (float)(int)lVar23;
                      fVar79 = (float)*(int *)(lVar29 + 0x38) + -2.0 + -0.001;
                      if (fVar82 <= 0.0) {
                        fVar82 = 0.0;
                      }
                      if (fVar82 <= fVar79) {
                        fVar79 = fVar82;
                      }
                      if (((*(uint *)(lVar29 + 0x150) >> 0xe & 1) == 0) &&
                         (**(int **)(lVar29 + 400) != 1)) {
                        if ((*(int **)(lVar29 + 400))[1] == 1) {
                          pfVar28 = (float *)(lVar30 + **(long **)(lVar29 + 0x198) * (long)iVar26);
                        }
                        else {
                          iVar3 = *(int *)(lVar29 + 0x15c);
                          iVar13 = 0;
                          if (iVar3 != 0) {
                            iVar13 = iVar26 / iVar3;
                          }
                          pfVar28 = (float *)(lVar30 + **(long **)(lVar29 + 0x198) * (long)iVar13 +
                                             (long)(iVar26 - iVar13 * iVar3) * 4);
                        }
                      }
                      else {
                        pfVar28 = (float *)(lVar30 + (long)iVar26 * 4);
                      }
                      fVar82 = *pfVar28;
                      if (((*(uint *)(lVar29 + 0x1b0) >> 0xe & 1) == 0) &&
                         (**(int **)(lVar29 + 0x1f0) != 1)) {
                        if ((*(int **)(lVar29 + 0x1f0))[1] == 1) {
                          pfVar28 = (float *)(lVar17 + **(long **)(lVar29 + 0x1f8) * (long)iVar26);
                        }
                        else {
                          iVar3 = *(int *)(lVar29 + 0x1bc);
                          iVar13 = 0;
                          if (iVar3 != 0) {
                            iVar13 = iVar26 / iVar3;
                          }
                          pfVar28 = (float *)(lVar17 + **(long **)(lVar29 + 0x1f8) * (long)iVar13 +
                                             (long)(iVar26 - iVar13 * iVar3) * 4);
                        }
                      }
                      else {
                        pfVar28 = (float *)(lVar17 + (long)iVar26 * 4);
                      }
                      fVar80 = fVar81 - (float)(int)fVar81;
                      fVar87 = fVar79 - (float)(int)fVar79;
                      fVar83 = fVar80 * fVar87;
                      fVar86 = (1.0 - fVar80) * fVar87;
                      fVar91 = fVar80 * (1.0 - fVar87);
                      fVar80 = (1.0 - fVar80) * (1.0 - fVar87);
                      fVar87 = *pfVar28;
                      puVar1 = (undefined8 *)
                               (*(long *)(lVar22 + 0x10) +
                                **(long **)(lVar22 + 0x48) * (long)(int)fVar79 +
                               (ulong)(uint)(int)fVar81);
                      uVar88 = *puVar1;
                      bVar34 = (byte)((ulong)uVar88 >> 8);
                      uVar35 = (undefined1)((ulong)uVar88 >> 0x10);
                      uVar36 = (undefined1)((ulong)uVar88 >> 0x18);
                      auVar93._6_2_ = 0;
                      auVar93._0_6_ =
                           (uint6)CONCAT14(bVar34,(uint)CONCAT12(bVar34,(ushort)(byte)uVar88)) &
                           0xffff0000ffff;
                      auVar93[8] = uVar35;
                      auVar93._9_3_ = 0;
                      auVar93[0xc] = uVar36;
                      auVar93._13_3_ = 0;
                      auVar93 = NEON_ucvtf(auVar93,4);
                      auVar89._6_2_ = 0;
                      auVar89._0_6_ =
                           (uint6)CONCAT14(uVar35,(uint)CONCAT12(uVar35,(ushort)bVar34)) &
                           0xffff0000ffff;
                      auVar89[8] = uVar36;
                      auVar89._9_3_ = 0;
                      auVar89[0xc] = (char)((ulong)uVar88 >> 0x20);
                      auVar89._13_3_ = 0;
                      auVar89 = NEON_ucvtf(auVar89,4);
                      uVar88 = *(undefined8 *)((long)puVar1 + lVar10);
                      bVar34 = (byte)((ulong)uVar88 >> 8);
                      uVar35 = (undefined1)((ulong)uVar88 >> 0x10);
                      uVar36 = (undefined1)((ulong)uVar88 >> 0x18);
                      auVar90._6_2_ = 0;
                      auVar90._0_6_ =
                           (uint6)CONCAT14(bVar34,(uint)CONCAT12(bVar34,(ushort)(byte)uVar88)) &
                           0xffff0000ffff;
                      auVar90[8] = uVar35;
                      auVar90._9_3_ = 0;
                      auVar90[0xc] = uVar36;
                      auVar90._13_3_ = 0;
                      auVar90 = NEON_ucvtf(auVar90,4);
                      auVar92._6_2_ = 0;
                      auVar92._0_6_ =
                           (uint6)CONCAT14(uVar35,(uint)CONCAT12(uVar35,(ushort)bVar34)) &
                           0xffff0000ffff;
                      auVar92[8] = uVar36;
                      auVar92._9_3_ = 0;
                      auVar92[0xc] = (char)((ulong)uVar88 >> 0x20);
                      auVar92._13_3_ = 0;
                      auVar92 = NEON_ucvtf(auVar92,4);
                      auVar85._0_4_ =
                           ABS((auVar93._0_4_ * fVar80 + auVar89._0_4_ * fVar91 +
                                auVar90._0_4_ * fVar86 + auVar92._0_4_ * fVar83) - auVar62._0_4_);
                      auVar85._4_4_ =
                           ABS((auVar93._4_4_ * fVar80 + auVar89._4_4_ * fVar91 +
                                auVar90._4_4_ * fVar86 + auVar92._4_4_ * fVar83) - auVar62._4_4_);
                      auVar85._8_4_ =
                           ABS((auVar93._8_4_ * fVar80 + auVar89._8_4_ * fVar91 +
                                auVar90._8_4_ * fVar86 + auVar92._8_4_ * fVar83) - auVar62._8_4_);
                      auVar85._12_4_ =
                           ABS((auVar93._12_4_ * fVar80 + auVar89._12_4_ * fVar91 +
                                auVar90._12_4_ * fVar86 + auVar92._12_4_ * fVar83) - auVar62._12_4_)
                      ;
                      auVar89 = NEON_fmov(0x3f800000,4);
                      auVar85 = NEON_fmax(auVar85,auVar89,4);
                      auVar89 = NEON_frecpe(auVar85,4);
                      fVar79 = auVar89._0_4_ * (2.0 - auVar85._0_4_ * auVar89._0_4_);
                      fVar80 = auVar89._4_4_ * (2.0 - auVar85._4_4_ * auVar89._4_4_);
                      fVar83 = auVar89._8_4_ * (2.0 - auVar85._8_4_ * auVar89._8_4_);
                      fVar86 = auVar89._12_4_ * (2.0 - auVar85._12_4_ * auVar89._12_4_);
                      fVar79 = fVar79 * (2.0 - auVar85._0_4_ * fVar79);
                      fVar80 = fVar80 * (2.0 - auVar85._4_4_ * fVar80);
                      fVar83 = fVar83 * (2.0 - auVar85._8_4_ * fVar83);
                      fVar86 = fVar86 * (2.0 - auVar85._12_4_ * fVar86);
                      fVar81 = (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) +
                               fVar79 * fVar82;
                      uVar37 = SUB41(fVar81,0);
                      uVar38 = (undefined1)((uint)fVar81 >> 8);
                      uVar39 = (undefined1)((uint)fVar81 >> 0x10);
                      uVar40 = (undefined1)((uint)fVar81 >> 0x18);
                      fVar81 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) +
                               fVar80 * fVar82;
                      uVar41 = SUB41(fVar81,0);
                      uVar42 = (undefined1)((uint)fVar81 >> 8);
                      uVar43 = (undefined1)((uint)fVar81 >> 0x10);
                      uVar44 = (undefined1)((uint)fVar81 >> 0x18);
                      fVar81 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) +
                               fVar83 * fVar82;
                      uVar45 = SUB41(fVar81,0);
                      uVar46 = (undefined1)((uint)fVar81 >> 8);
                      uVar47 = (undefined1)((uint)fVar81 >> 0x10);
                      uVar48 = (undefined1)((uint)fVar81 >> 0x18);
                      fVar81 = (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) +
                               fVar86 * fVar82;
                      uVar49 = SUB41(fVar81,0);
                      uVar50 = (undefined1)((uint)fVar81 >> 8);
                      uVar51 = (undefined1)((uint)fVar81 >> 0x10);
                      uVar52 = (undefined1)((uint)fVar81 >> 0x18);
                      fVar81 = (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) +
                               fVar79 * fVar87;
                      uVar53 = SUB41(fVar81,0);
                      uVar54 = (undefined1)((uint)fVar81 >> 8);
                      uVar55 = (undefined1)((uint)fVar81 >> 0x10);
                      uVar56 = (undefined1)((uint)fVar81 >> 0x18);
                      fVar81 = (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) +
                               fVar80 * fVar87;
                      uVar57 = SUB41(fVar81,0);
                      uVar58 = (undefined1)((uint)fVar81 >> 8);
                      uVar59 = (undefined1)((uint)fVar81 >> 0x10);
                      uVar60 = (undefined1)((uint)fVar81 >> 0x18);
                      uVar61 = CONCAT44((float)((ulong)uVar61 >> 0x20) + fVar86 * fVar87,
                                        (float)uVar61 + fVar83 * fVar87);
                      fVar79 = (float)CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63))) +
                               fVar79;
                      uVar63 = SUB41(fVar79,0);
                      uVar64 = (undefined1)((uint)fVar79 >> 8);
                      uVar65 = (undefined1)((uint)fVar79 >> 0x10);
                      uVar66 = (undefined1)((uint)fVar79 >> 0x18);
                      fVar80 = (float)CONCAT13(uVar70,CONCAT12(uVar69,CONCAT11(uVar68,uVar67))) +
                               fVar80;
                      uVar67 = SUB41(fVar80,0);
                      uVar68 = (undefined1)((uint)fVar80 >> 8);
                      uVar69 = (undefined1)((uint)fVar80 >> 0x10);
                      uVar70 = (undefined1)((uint)fVar80 >> 0x18);
                      fVar83 = (float)CONCAT13(uVar74,CONCAT12(uVar73,CONCAT11(uVar72,uVar71))) +
                               fVar83;
                      uVar71 = SUB41(fVar83,0);
                      uVar72 = (undefined1)((uint)fVar83 >> 8);
                      uVar73 = (undefined1)((uint)fVar83 >> 0x10);
                      uVar74 = (undefined1)((uint)fVar83 >> 0x18);
                      fVar86 = (float)CONCAT13(uVar78,CONCAT12(uVar77,CONCAT11(uVar76,uVar75))) +
                               fVar86;
                      uVar75 = SUB41(fVar86,0);
                      uVar76 = (undefined1)((uint)fVar86 >> 8);
                      uVar77 = (undefined1)((uint)fVar86 >> 0x10);
                      uVar78 = (undefined1)((uint)fVar86 >> 0x18);
                    }
                    iVar27 = iVar27 + 1;
                  } while (iVar27 < (int)(uVar33 >> 2));
                }
                bVar16 = iVar25 != iVar5;
                iVar25 = iVar25 + 1;
              } while (bVar16);
              auVar15[1] = uVar64;
              auVar15[0] = uVar63;
              auVar15[2] = uVar65;
              auVar15[3] = uVar66;
              auVar15[4] = uVar67;
              auVar15[5] = uVar68;
              auVar15[6] = uVar69;
              auVar15[7] = uVar70;
              auVar15[8] = uVar71;
              auVar15[9] = uVar72;
              auVar15[10] = uVar73;
              auVar15[0xb] = uVar74;
              auVar15[0xc] = uVar75;
              auVar15[0xd] = uVar76;
              auVar15[0xe] = uVar77;
              auVar15[0xf] = uVar78;
              auVar62 = NEON_frecpe(auVar15,4);
              fVar80 = auVar62._0_4_ *
                       (2.0 - (float)CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63))) *
                              auVar62._0_4_);
              fVar82 = auVar62._4_4_ *
                       (2.0 - (float)CONCAT13(uVar70,CONCAT12(uVar69,CONCAT11(uVar68,uVar67))) *
                              auVar62._4_4_);
              fVar83 = auVar62._8_4_ *
                       (2.0 - (float)CONCAT13(uVar74,CONCAT12(uVar73,CONCAT11(uVar72,uVar71))) *
                              auVar62._8_4_);
              fVar86 = auVar62._12_4_ *
                       (2.0 - (float)CONCAT13(uVar78,CONCAT12(uVar77,CONCAT11(uVar76,uVar75))) *
                              auVar62._12_4_);
              fVar80 = fVar80 * (2.0 - (float)CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63
                                                                                      ))) * fVar80);
              fVar82 = fVar82 * (2.0 - (float)CONCAT13(uVar70,CONCAT12(uVar69,CONCAT11(uVar68,uVar67
                                                                                      ))) * fVar82);
              fVar83 = fVar83 * (2.0 - (float)CONCAT13(uVar74,CONCAT12(uVar73,CONCAT11(uVar72,uVar71
                                                                                      ))) * fVar83);
              fVar86 = fVar86 * (2.0 - (float)CONCAT13(uVar78,CONCAT12(uVar77,CONCAT11(uVar76,uVar75
                                                                                      ))) * fVar86);
              fVar81 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) * fVar82;
              fVar79 = (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) * fVar86;
              fVar82 = (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) * fVar82;
              lVar29 = *(long *)(*(long *)(param_1 + 8) + 0xc0) +
                       (long)*(int *)(param_1 + 0x18) * 0x60;
              lVar30 = *(long *)(*(long *)(param_1 + 8) + 0xd8) +
                       (long)*(int *)(param_1 + 0x18) * 0x60;
              lVar17 = *(long *)(lVar30 + 0x10);
              lVar30 = **(long **)(lVar30 + 0x48);
              puVar1 = (undefined8 *)
                       (*(long *)(lVar29 + 0x10) + **(long **)(lVar29 + 0x48) * lVar23 + uVar33 * 4)
              ;
              puVar1[1] = CONCAT17((char)((uint)fVar79 >> 0x18),
                                   CONCAT16((char)((uint)fVar79 >> 0x10),
                                            CONCAT15((char)((uint)fVar79 >> 8),
                                                     CONCAT14(SUB41(fVar79,0),
                                                              (float)CONCAT13(uVar48,CONCAT12(uVar47
                                                  ,CONCAT11(uVar46,uVar45))) * fVar83))));
              *puVar1 = CONCAT17((char)((uint)fVar81 >> 0x18),
                                 CONCAT16((char)((uint)fVar81 >> 0x10),
                                          CONCAT15((char)((uint)fVar81 >> 8),
                                                   CONCAT14(SUB41(fVar81,0),
                                                            (float)CONCAT13(uVar40,CONCAT12(uVar39,
                                                  CONCAT11(uVar38,uVar37))) * fVar80))));
              puVar1 = (undefined8 *)(lVar17 + lVar30 * lVar23 + uVar33 * 4);
              puVar1[1] = CONCAT44((float)((ulong)uVar61 >> 0x20) * fVar86,(float)uVar61 * fVar83);
              *puVar1 = CONCAT17((char)((uint)fVar82 >> 0x18),
                                 CONCAT16((char)((uint)fVar82 >> 0x10),
                                          CONCAT15((char)((uint)fVar82 >> 8),
                                                   CONCAT14(SUB41(fVar82,0),
                                                            (float)CONCAT13(uVar56,CONCAT12(uVar55,
                                                  CONCAT11(uVar54,uVar53))) * fVar80))));
              lVar21 = lVar21 + 1;
            } while (lVar21 != 4);
          }
          else {
            pplStack_e0 = (long **)((ulong)pplStack_e0 & 0xffffffff00000000);
            FUN_1092ef208(&plStack_c8,4,&pplStack_e0);
            FUN_1093956a4(alStack_b0,&plStack_c8);
            if (plStack_c8 != (long *)0x0) {
              plStack_c0 = plStack_c8;
              __ZdlPv();
            }
            pppuStack_f8 = (undefined8 ***)((ulong)pppuStack_f8 & 0xffffffff00000000);
            FUN_1092ef208(&pplStack_e0,4,&pppuStack_f8);
            FUN_1093956a4(&plStack_c8,&pplStack_e0);
            if (pplStack_e0 != (long **)0x0) {
              ppuStack_d8 = pplStack_e0;
              __ZdlPv();
            }
            uStack_fc = 0;
            FUN_1092ef208(&pppuStack_f8,4,&uStack_fc);
            FUN_1093956a4(&pplStack_e0,&pppuStack_f8);
            if (pppuStack_f8 != (undefined8 ***)0x0) {
              ppuStack_f0 = pppuStack_f8;
              __ZdlPv();
            }
            iVar20 = (int)(uVar33 >> 2);
            iVar27 = iVar20 + -1;
            iVar25 = iVar5 + -1;
            do {
              if ((-1 < iVar25) && (iVar25 != iVar7)) {
                iVar26 = iVar27;
                iVar3 = iVar12;
                if (iVar25 < iVar7) {
                  iVar3 = iVar25;
                }
                do {
                  if ((-1 < iVar26) && (iVar26 != iVar2)) {
                    lVar21 = 0;
                    lVar23 = lVar32;
                    iVar13 = iVar4;
                    if (iVar26 < iVar2) {
                      iVar13 = iVar26;
                    }
                    do {
                      if (lVar21 + lVar32 < lVar8) {
                        lVar29 = 0;
                        do {
                          if (lVar10 <= (long)(uVar33 + lVar29)) break;
                          lVar30 = *(long *)(param_1 + 8);
                          iVar11 = iVar13 + *(int *)(lVar30 + 0x3c) * iVar3;
                          if (((*(uint *)(lVar30 + 0x150) >> 0xe & 1) == 0) &&
                             (**(int **)(lVar30 + 400) != 1)) {
                            if ((*(int **)(lVar30 + 400))[1] == 1) {
                              lVar17 = *(long *)(lVar30 + 0x160);
                              pfVar28 = (float *)(lVar17 + **(long **)(lVar30 + 0x198) *
                                                           (long)iVar11);
                            }
                            else {
                              iVar24 = *(int *)(lVar30 + 0x15c);
                              iVar14 = 0;
                              if (iVar24 != 0) {
                                iVar14 = iVar11 / iVar24;
                              }
                              lVar17 = *(long *)(lVar30 + 0x160);
                              pfVar28 = (float *)(lVar17 + **(long **)(lVar30 + 0x198) *
                                                           (long)iVar14 +
                                                 (long)(iVar11 - iVar14 * iVar24) * 4);
                            }
                          }
                          else {
                            lVar17 = *(long *)(lVar30 + 0x160);
                            pfVar28 = (float *)(lVar17 + (long)iVar11 * 4);
                          }
                          fVar81 = *pfVar28 + (float)(uVar33 & 0xffffffff);
                          fVar79 = (float)*(int *)(lVar30 + 0x34) + -2.0 + -0.001;
                          uVar37 = SUB41(fVar81,0);
                          uVar38 = (undefined1)((uint)fVar81 >> 8);
                          uVar39 = (undefined1)((uint)fVar81 >> 0x10);
                          uVar40 = (undefined1)((uint)fVar81 >> 0x18);
                          if (fVar81 <= 0.0) {
                            uVar37 = 0;
                            uVar38 = 0;
                            uVar39 = 0;
                            uVar40 = 0;
                          }
                          uVar41 = SUB41(fVar79,0);
                          uVar42 = (char)((uint)fVar79 >> 8);
                          uVar43 = (char)((uint)fVar79 >> 0x10);
                          uVar44 = (char)((uint)fVar79 >> 0x18);
                          if ((float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) <=
                              fVar79) {
                            uVar41 = uVar37;
                            uVar42 = uVar38;
                            uVar43 = uVar39;
                            uVar44 = uVar40;
                          }
                          if (((*(uint *)(lVar30 + 0x1b0) >> 0xe & 1) == 0) &&
                             (**(int **)(lVar30 + 0x1f0) != 1)) {
                            if ((*(int **)(lVar30 + 0x1f0))[1] == 1) {
                              lVar19 = *(long *)(lVar30 + 0x1c0);
                              pfVar28 = (float *)(lVar19 + **(long **)(lVar30 + 0x1f8) *
                                                           (long)iVar11);
                            }
                            else {
                              iVar24 = *(int *)(lVar30 + 0x1bc);
                              iVar14 = 0;
                              if (iVar24 != 0) {
                                iVar14 = iVar11 / iVar24;
                              }
                              lVar19 = *(long *)(lVar30 + 0x1c0);
                              pfVar28 = (float *)(lVar19 + **(long **)(lVar30 + 0x1f8) *
                                                           (long)iVar14 +
                                                 (long)(iVar11 - iVar14 * iVar24) * 4);
                            }
                          }
                          else {
                            lVar19 = *(long *)(lVar30 + 0x1c0);
                            pfVar28 = (float *)(lVar19 + (long)iVar11 * 4);
                          }
                          fVar79 = *pfVar28 + (float)(int)(lVar21 + lVar32);
                          fVar81 = (float)*(int *)(lVar30 + 0x38) + -2.0 + -0.001;
                          if (fVar79 <= 0.0) {
                            fVar79 = 0.0;
                          }
                          uVar37 = SUB41(fVar81,0);
                          uVar38 = (undefined1)((uint)fVar81 >> 8);
                          uVar39 = (undefined1)((uint)fVar81 >> 0x10);
                          uVar40 = (undefined1)((uint)fVar81 >> 0x18);
                          if (fVar79 <= fVar81) {
                            uVar37 = SUB41(fVar79,0);
                            uVar38 = (undefined1)((uint)fVar79 >> 8);
                            uVar39 = (undefined1)((uint)fVar79 >> 0x10);
                            uVar40 = (undefined1)((uint)fVar79 >> 0x18);
                          }
                          if (((*(uint *)(lVar30 + 0x150) >> 0xe & 1) == 0) &&
                             (**(int **)(lVar30 + 400) != 1)) {
                            if ((*(int **)(lVar30 + 400))[1] == 1) {
                              pfVar28 = (float *)(lVar17 + **(long **)(lVar30 + 0x198) *
                                                           (long)iVar11);
                            }
                            else {
                              iVar24 = *(int *)(lVar30 + 0x15c);
                              iVar14 = 0;
                              if (iVar24 != 0) {
                                iVar14 = iVar11 / iVar24;
                              }
                              pfVar28 = (float *)(lVar17 + **(long **)(lVar30 + 0x198) *
                                                           (long)iVar14 +
                                                 (long)(iVar11 - iVar14 * iVar24) * 4);
                            }
                          }
                          else {
                            pfVar28 = (float *)(lVar17 + (long)iVar11 * 4);
                          }
                          fVar81 = *pfVar28;
                          if (((*(uint *)(lVar30 + 0x1b0) >> 0xe & 1) == 0) &&
                             (**(int **)(lVar30 + 0x1f0) != 1)) {
                            if ((*(int **)(lVar30 + 0x1f0))[1] == 1) {
                              pfVar28 = (float *)(lVar19 + **(long **)(lVar30 + 0x1f8) *
                                                           (long)iVar11);
                            }
                            else {
                              iVar24 = *(int *)(lVar30 + 0x1bc);
                              iVar14 = 0;
                              if (iVar24 != 0) {
                                iVar14 = iVar11 / iVar24;
                              }
                              pfVar28 = (float *)(lVar19 + **(long **)(lVar30 + 0x1f8) *
                                                           (long)iVar14 +
                                                 (long)(iVar11 - iVar14 * iVar24) * 4);
                            }
                          }
                          else {
                            pfVar28 = (float *)(lVar19 + (long)iVar11 * 4);
                          }
                          iVar24 = (int)(float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,
                                                  uVar37)));
                          fVar79 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)))
                                   - (float)(int)(float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(
                                                  uVar42,uVar41)));
                          fVar82 = (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)))
                                   - (float)(int)(float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(
                                                  uVar38,uVar37)));
                          fVar87 = *pfVar28;
                          iVar11 = (int)lVar29 +
                                   (int)(float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,
                                                  uVar41)));
                          lVar17 = *(long *)(lVar22 + 0x10) +
                                   **(long **)(lVar22 + 0x48) * (long)iVar24;
                          fVar91 = (float)NEON_ucvtf((uint)*(byte *)(lVar17 + iVar11));
                          fVar84 = (float)NEON_ucvtf((uint)*(byte *)(lVar17 + (iVar11 + 1)));
                          lVar17 = *(long *)(lVar22 + 0x10) +
                                   **(long **)(lVar22 + 0x48) * (long)(iVar24 + 1);
                          fVar80 = (float)NEON_ucvtf((uint)*(byte *)(lVar17 + (iVar11 + 1)));
                          fVar83 = (float)NEON_ucvtf((uint)*(byte *)(lVar17 + iVar11));
                          lVar30 = *(long *)(lVar30 + 0x48) + (long)*(int *)(param_1 + 0x18) * 0x60;
                          fVar86 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(lVar30 + 0x10) +
                                                                     lVar23 * **(long **)(lVar30 + 
                                                  0x48) + uVar33 + lVar29));
                          fVar79 = ABS((fVar91 * (1.0 - fVar79) * (1.0 - fVar82) + 0.0 +
                                        fVar84 * fVar79 * (1.0 - fVar82) + fVar80 * fVar79 * fVar82
                                       + fVar83 * (1.0 - fVar79) * fVar82) - fVar86);
                          uVar37 = SUB41(fVar79,0);
                          uVar38 = (undefined1)((uint)fVar79 >> 8);
                          uVar39 = (undefined1)((uint)fVar79 >> 0x10);
                          uVar40 = (undefined1)((uint)fVar79 >> 0x18);
                          if (fVar79 <= 1.0) {
                            uVar37 = 0;
                            uVar38 = 0;
                            uVar39 = 0x80;
                            uVar40 = 0x3f;
                          }
                          lVar30 = *(long *)(alStack_b0[0] + lVar21 * 0x18);
                          fVar79 = 1.0 / (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,
                                                  uVar37)));
                          *(float *)(lVar30 + lVar29 * 4) = *(float *)(lVar30 + lVar29 * 4) + fVar79
                          ;
                          *(float *)(plStack_c8[lVar21 * 3] + lVar29 * 4) =
                               *(float *)(plStack_c8[lVar21 * 3] + lVar29 * 4) + fVar79 * fVar81;
                          *(float *)((long)pplStack_e0[lVar21 * 3] + lVar29 * 4) =
                               *(float *)((long)pplStack_e0[lVar21 * 3] + lVar29 * 4) +
                               fVar79 * fVar87;
                          lVar29 = lVar29 + 1;
                        } while (lVar29 != 4);
                      }
                      lVar21 = lVar21 + 1;
                      lVar23 = lVar23 + 1;
                    } while (lVar21 != 4);
                  }
                  bVar16 = iVar26 < iVar20;
                  iVar26 = iVar26 + 1;
                } while (bVar16);
              }
              bVar16 = iVar25 != iVar5;
              iVar25 = iVar25 + 1;
            } while (bVar16);
            lVar21 = 0;
            lVar23 = lVar32;
            do {
              if (lVar21 + lVar32 < lVar8) {
                lVar29 = 0;
                do {
                  if (lVar10 <= (long)(uVar33 + lVar29)) break;
                  lVar17 = *(long *)(alStack_b0[0] + lVar21 * 0x18);
                  lVar19 = *(long *)(param_1 + 8);
                  iVar25 = *(int *)(param_1 + 0x18);
                  lVar30 = *(long *)(lVar19 + 0xc0) + (long)iVar25 * 0x60;
                  *(float *)(*(long *)(lVar30 + 0x10) + lVar23 * **(long **)(lVar30 + 0x48) +
                             lStack_110 + lVar29 * 4) =
                       *(float *)(plStack_c8[lVar21 * 3] + lVar29 * 4) /
                       *(float *)(lVar17 + lVar29 * 4);
                  lVar30 = *(long *)(lVar19 + 0xd8) + (long)iVar25 * 0x60;
                  *(float *)(*(long *)(lVar30 + 0x10) + lVar23 * **(long **)(lVar30 + 0x48) +
                             lStack_110 + lVar29 * 4) =
                       *(float *)((long)pplStack_e0[lVar21 * 3] + lVar29 * 4) /
                       *(float *)(lVar17 + lVar29 * 4);
                  lVar29 = lVar29 + 1;
                } while (lVar29 != 4);
              }
              lVar21 = lVar21 + 1;
              lVar23 = lVar23 + 1;
            } while (lVar21 != 4);
            pppuStack_f8 = &pplStack_e0;
            func_0x0001093957f8(&pppuStack_f8);
            pplStack_e0 = &plStack_c8;
            func_0x0001093957f8(&pplStack_e0);
            plStack_c8 = alStack_b0;
            func_0x0001093957f8(&plStack_c8);
          }
          uVar33 = uVar33 + 4;
          lStack_110 = lStack_110 + 0x10;
          iVar31 = iVar31 + 1;
        } while ((int)uVar33 < iVar9);
      }
      lVar32 = lVar32 + 4;
    } while (lVar32 < iVar6);
  }
  return;
}



/* Entry: 109392e28; end: 1093931b7;  */

void FUN_109392e28(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  float *pfVar28;
  long lVar29;
  float *pfVar30;
  int iVar31;
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
  float fVar43;
  float fVar44;
  float fVar45;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar17 = *(int *)(param_1 + 0x14) * *param_2;
  iVar26 = iVar2;
  if (iVar17 <= iVar2) {
    iVar26 = iVar17;
  }
  iVar8 = param_2[1] * *(int *)(param_1 + 0x14);
  iVar1 = iVar2;
  if (iVar8 <= iVar2) {
    iVar1 = iVar8;
  }
  lVar12 = *(long *)(param_1 + 8);
  iVar8 = *(int *)(lVar12 + 0x10);
  iVar3 = *(int *)(lVar12 + 0x14);
  if (iVar26 < 1) {
    iVar27 = 0;
    iVar13 = -1;
  }
  else {
    iVar27 = 0;
    iVar16 = 0;
    uVar19 = -iVar8;
    iVar13 = -1;
    iVar23 = iVar26;
    iVar21 = iVar8;
    do {
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = iVar16 / iVar3;
      }
      if (iVar16 == iVar4 * iVar3 && iVar21 <= iVar2) {
        iVar13 = iVar13 + 1;
      }
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = (int)uVar19 / iVar3;
      }
      iVar10 = iVar27;
      if (uVar19 == iVar4 * iVar3 && iVar27 < iVar13) {
        iVar10 = iVar27 + 1;
      }
      if ((uVar19 & 0x80000000) == 0) {
        iVar27 = iVar10;
      }
      iVar16 = iVar16 + 1;
      uVar19 = uVar19 + 1;
      iVar21 = iVar21 + 1;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
  }
  if (iVar17 < iVar1) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    lVar14 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
    lVar20 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
    lVar22 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
    lVar24 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
    lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
    uVar19 = *(uint *)(lVar12 + 0x34);
    lVar25 = (long)iVar8;
    fVar32 = (float)(int)uVar19 + -1.0 + -0.001;
    lVar18 = (long)iVar26;
    do {
      iVar26 = 0;
      iVar17 = (int)lVar18;
      if (iVar3 != 0) {
        iVar26 = iVar17 / iVar3;
      }
      if (iVar17 == iVar26 * iVar3 && lVar18 <= iVar2 - lVar25) {
        iVar13 = iVar13 + 1;
      }
      if (-1 < lVar18 - lVar25) {
        iVar26 = 0;
        iVar8 = (int)(lVar18 - lVar25);
        if (iVar3 != 0) {
          iVar26 = iVar8 / iVar3;
        }
        if (iVar8 == iVar26 * iVar3 && iVar27 < iVar13) {
          iVar27 = iVar27 + 1;
        }
      }
      if (0 < (int)uVar19) {
        uVar9 = 0;
        iVar8 = 0;
        lVar11 = lVar18 * (int)uVar19;
        iVar26 = -1;
        do {
          iVar16 = 0;
          if (iVar3 != 0) {
            iVar16 = (int)uVar9 / iVar3;
          }
          if ((int)uVar9 == iVar16 * iVar3 && (long)uVar9 <= (int)uVar19 - lVar25) {
            iVar26 = iVar26 + 1;
          }
          if (-1 < (long)(uVar9 - lVar25)) {
            iVar16 = 0;
            iVar21 = (int)(uVar9 - lVar25);
            if (iVar3 != 0) {
              iVar16 = iVar21 / iVar3;
            }
            if (iVar21 == iVar16 * iVar3 && iVar8 < iVar26) {
              iVar8 = iVar8 + 1;
            }
          }
          if (iVar13 < iVar27) {
            fVar34 = 0.0;
            fVar35 = 0.0;
            fVar33 = 0.0;
          }
          else {
            iVar16 = iVar8;
            if (iVar8 <= iVar26) {
              iVar16 = iVar26;
            }
            fVar33 = 0.0;
            fVar35 = 0.0;
            fVar34 = 0.0;
            iVar21 = iVar27;
            do {
              if (iVar8 <= iVar26) {
                fVar36 = (float)*(int *)(lVar12 + 0x38) + -1.0 + -0.001;
                fVar37 = (float)NEON_ucvtf((uint)*(byte *)(lVar20 + uVar9 + lVar11));
                lVar29 = (long)iVar8 + (long)*(int *)(lVar12 + 0x3c) * (long)iVar21;
                pfVar28 = (float *)(lVar6 + lVar29 * 4);
                pfVar30 = (float *)(lVar24 + lVar29 * 4);
                lVar29 = ~(long)iVar16 + (long)iVar8;
                do {
                  fVar38 = *pfVar30 + (float)(uVar9 & 0xffffffff);
                  fVar39 = 0.0;
                  if (0.0 <= fVar38) {
                    fVar39 = fVar38;
                  }
                  fVar38 = fVar32;
                  if (fVar39 <= fVar32) {
                    fVar38 = fVar39;
                  }
                  fVar40 = *pfVar28 + (float)iVar17;
                  fVar39 = 0.0;
                  if (0.0 <= fVar40) {
                    fVar39 = fVar40;
                  }
                  fVar40 = fVar36;
                  if (fVar39 <= fVar36) {
                    fVar40 = fVar39;
                  }
                  iVar31 = (int)fVar38;
                  iVar23 = (int)fVar40 + 1;
                  iVar4 = iVar23 * uVar19;
                  iVar10 = (int)((long)iVar31 + 1);
                  fVar39 = (float)iVar10 - fVar38;
                  fVar45 = (float)NEON_ucvtf((uint)*(byte *)(lVar22 + (long)iVar4 + (long)iVar31));
                  fVar43 = (float)NEON_ucvtf((uint)*(byte *)(lVar22 + (long)iVar31 + 1 + (long)iVar4
                                                            ));
                  fVar41 = (float)iVar23 - fVar40;
                  lVar15 = (long)(int)(uVar19 * (int)fVar40);
                  fVar44 = (float)NEON_ucvtf((uint)*(byte *)(lVar22 + lVar15 + iVar10));
                  fVar42 = (float)NEON_ucvtf((uint)*(byte *)(lVar22 + lVar15 + iVar31));
                  fVar39 = ABS((fVar39 * (fVar40 - (float)(int)fVar40) * fVar45 +
                                fVar43 * (fVar38 - (float)(int)fVar38) *
                                         (fVar40 - (float)(int)fVar40) +
                                fVar44 * (fVar38 - (float)(int)fVar38) * fVar41 +
                               fVar42 * fVar39 * fVar41) - fVar37);
                  if (fVar39 <= 1.0) {
                    fVar39 = 1.0;
                  }
                  fVar39 = 1.0 / fVar39;
                  fVar35 = fVar35 + *pfVar30 * fVar39;
                  fVar33 = fVar33 + *pfVar28 * fVar39;
                  fVar34 = fVar34 + fVar39;
                  bVar5 = lVar29 != -1;
                  lVar29 = lVar29 + 1;
                  pfVar28 = pfVar28 + 1;
                  pfVar30 = pfVar30 + 1;
                } while (bVar5);
              }
              bVar5 = iVar21 < iVar13;
              iVar21 = iVar21 + 1;
            } while (bVar5);
          }
          lVar29 = uVar9 + lVar11;
          *(float *)(lVar7 + lVar29 * 4) = fVar35 / fVar34;
          *(float *)(lVar14 + lVar29 * 4) = fVar33 / fVar34;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar19);
      }
      lVar18 = lVar18 + 1;
    } while (iVar1 != (int)lVar18);
  }
  return;
}



/* Entry: 1093931b8; end: 1093931bb;  */

void FUN_1093931b8(void)

{
  return;
}



/* Entry: 1093931bc; end: 109394bdb;  */

void FUN_1093931bc(undefined8 **param_1,undefined8 *param_2,undefined8 *param_3,uint *param_4,
                  uint *param_5)

{
  undefined8 **ppuVar1;
  long lVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined8 **ppuVar13;
  code *pcVar14;
  undefined4 *puVar15;
  undefined8 **ppuVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint *puVar20;
  ulong *puVar21;
  long lVar22;
  undefined8 *puVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long lVar33;
  short *psVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  short *psVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  uint *puVar41;
  int *piVar42;
  long *plVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  int *piVar46;
  short *psVar47;
  long lVar48;
  short *psVar49;
  int iVar50;
  int iVar51;
  long *plVar52;
  ulong uVar53;
  long lVar54;
  long lVar55;
  undefined8 *puVar56;
  int iVar57;
  undefined8 *puVar58;
  undefined8 *puVar59;
  float *pfVar60;
  long lVar61;
  undefined8 *puVar62;
  long lVar63;
  undefined8 *puVar64;
  long lVar65;
  long lVar66;
  undefined8 *puVar67;
  undefined8 *puVar68;
  float *pfVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined8 uVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar87;
  float fVar88;
  undefined1 auVar86 [16];
  float fVar89;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  ulong uStack_1630;
  ulong uStack_1628;
  ulong uStack_1620;
  ulong uStack_1618;
  ulong uStack_1610;
  ulong uStack_1608;
  ulong uStack_1600;
  undefined8 *puStack_15f8;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  uint uStack_15d8;
  uint uStack_15d4;
  undefined8 uStack_15d0;
  long lStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  long lStack_15a0;
  undefined8 *puStack_1598;
  undefined8 *puStack_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 *puStack_1578;
  undefined8 *puStack_1570;
  undefined8 auStack_1568 [132];
  undefined8 *puStack_1148;
  undefined8 *puStack_1140;
  undefined8 auStack_1138 [132];
  undefined8 *puStack_d18;
  undefined8 *puStack_d10;
  undefined8 auStack_d08 [132];
  undefined8 *puStack_8e8;
  uint *puStack_8e0;
  undefined8 auStack_8d8 [132];
  undefined8 uStack_4b8;
  undefined8 **ppuStack_4b0;
  undefined8 uStack_4a8;
  int iStack_4a0;
  undefined8 **ppuStack_498;
  undefined8 **ppuStack_490;
  undefined8 **ppuStack_488;
  undefined8 **ppuStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined4 uStack_458;
  int iStack_454;
  long lStack_88;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = (uint *)*param_2;
  lStack_15c8 = *(long *)(puVar20 + 4);
  if (lStack_15c8 != 0) {
    uStack_15d4 = puVar20[1];
    uVar26 = (ulong)uStack_15d4;
    if ((int)uStack_15d4 < 3) {
      lVar29 = (long)(int)puVar20[3] * (long)(int)puVar20[2];
    }
    else {
      lVar29 = 1;
      piVar42 = *(int **)(puVar20 + 0x10);
      do {
        lVar29 = lVar29 * *piVar42;
        uVar26 = uVar26 - 1;
        piVar42 = piVar42 + 1;
      } while (uVar26 != 0);
    }
    if ((lVar29 != 0) && (uStack_15d8 = *puVar20, (uStack_15d8 & 0xfff) == 0)) {
      puVar41 = (uint *)*param_3;
      if (*(long *)(puVar41 + 4) != 0) {
        uVar26 = (ulong)puVar41[1];
        if ((int)puVar41[1] < 3) {
          lVar29 = (long)(int)puVar41[3] * (long)(int)puVar41[2];
        }
        else {
          lVar29 = 1;
          piVar42 = *(int **)(puVar41 + 0x10);
          do {
            lVar29 = lVar29 * *piVar42;
            uVar26 = uVar26 - 1;
            piVar42 = piVar42 + 1;
          } while (uVar26 != 0);
        }
        if ((lVar29 != 0) && ((*puVar41 & 0xfff) == 0)) {
          piVar46 = *(int **)(puVar20 + 0x10);
          uVar24 = piVar46[-1];
          uVar26 = (ulong)uVar24;
          piVar42 = *(int **)(puVar41 + 0x10);
          if (uVar24 == piVar42[-1]) {
            if (uVar24 == 2) {
              if ((*piVar46 != *piVar42) || (piVar46[1] != piVar42[1])) goto LAB_1093932f4;
            }
            else if (0 < (int)uVar24) {
              do {
                if (*piVar46 != *piVar42) goto LAB_1093932f4;
                uVar26 = uVar26 - 1;
                piVar42 = piVar42 + 1;
                piVar46 = piVar46 + 1;
              } while (uVar26 != 0);
            }
            if ((uStack_15d8 >> 0xe & 1) == 0) {
              puVar15 = (undefined4 *)0x20;
              func_0x000107c2ae8c();
              *puVar15 = 1;
              uStack_4b8 = (undefined **)(puVar15 + 1);
              ppuStack_4b0 = (undefined8 **)0x1b;
              *(undefined1 *)((long)puVar15 + 0x1f) = 0;
              *(undefined8 *)(puVar15 + 3) = 0x4373692e5d305b64;
              *(undefined8 *)(puVar15 + 1) = 0x696d617279503049;
              *(undefined8 *)((long)puVar15 + 0x17) = 0x292873756f756e69;
              *(undefined8 *)((long)puVar15 + 0xf) = 0x746e6f4373692e5d;
              FUN_109ac3188(0xffffff29,&uStack_4b8,&UNK_10f568986,&UNK_10f56898f,0x72a);
            }
            else {
              if ((*puVar41 >> 0xe & 1) != 0) {
                puStack_1598 = &uStack_15d0;
                uStack_15d0 = *(undefined8 *)(puVar20 + 2);
                uStack_15c0 = *(undefined8 *)(puVar20 + 6);
                uStack_15b8 = *(undefined8 *)(puVar20 + 8);
                uStack_15b0 = *(undefined8 *)(puVar20 + 10);
                uStack_15a8 = *(undefined8 *)(puVar20 + 0xc);
                lStack_15a0 = *(long *)(puVar20 + 0xe);
                uStack_1588 = 0;
                uStack_1580 = 0;
                uVar24 = uStack_15d4;
                if (lStack_15a0 != 0) {
                  piVar42 = (int *)(lStack_15a0 + 0x14);
                  do {
                    cVar9 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(piVar42,0x10);
                    if (bVar10) {
                      *piVar42 = *piVar42 + 1;
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  uVar24 = puVar20[1];
                }
                puStack_1590 = &uStack_1588;
                if ((int)uVar24 < 3) {
                  uStack_1588 = **(undefined8 **)(puVar20 + 0x12);
                  uStack_1580 = (*(undefined8 **)(puVar20 + 0x12))[1];
                }
                else {
                  uStack_15d4 = 0;
                  func_0x000109a84868(&uStack_15d8);
                }
                puVar21 = (ulong *)*param_3;
                uStack_1600 = (ulong)&uStack_1640 | 8;
                uStack_1640 = *puVar21;
                uStack_1638 = puVar21[1];
                uStack_1630 = puVar21[2];
                uStack_1628 = puVar21[3];
                uStack_1620 = puVar21[4];
                uStack_1618 = puVar21[5];
                uStack_1610 = puVar21[6];
                uStack_1608 = puVar21[7];
                uStack_15f0 = 0;
                uStack_15e8 = 0;
                if (puVar21[7] != 0) {
                  piVar42 = (int *)(puVar21[7] + 0x14);
                  do {
                    cVar9 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(piVar42,0x10);
                    if (bVar10) {
                      *piVar42 = *piVar42 + 1;
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                }
                puStack_15f8 = &uStack_15f0;
                if (*(int *)((long)puVar21 + 4) < 3) {
                  uStack_15f0 = *(undefined8 *)puVar21[9];
                  uStack_15e8 = ((undefined8 *)puVar21[9])[1];
                }
                else {
                  uStack_1640 = uStack_1640 & 0xffffffff;
                  func_0x000109a84868(&uStack_1640);
                }
                uVar24 = param_4[2];
                uVar3 = param_5[2];
                if (uVar24 == 0 && uVar3 == 0) {
                  if (((((int)param_4[1] < 3) && ((uint)uStack_1638 == 0)) &&
                      (param_4[3] == uStack_1638._4_4_)) &&
                     (((*param_4 & 0xfff) == 5 && (*(long *)(param_4 + 4) != 0)))) {
                    uVar25 = 0;
                    uVar27 = 0;
                  }
                  else {
                    uStack_4b8 = (undefined **)uStack_1638;
                    FUN_109a83fd0(param_4,2,&uStack_4b8,5);
                    uVar25 = param_5[2];
                    uVar27 = (uint)uStack_1638;
                  }
                  if (((2 < (int)param_5[1]) || (uVar25 != uVar27)) ||
                     ((param_5[3] != uStack_1638._4_4_ ||
                      (((*param_5 & 0xfff) != 5 || (*(long *)(param_5 + 4) == 0)))))) {
                    uStack_4b8 = (undefined **)CONCAT44(uStack_1638._4_4_,uVar27);
                    FUN_109a83fd0(param_5,2,&uStack_4b8,5);
                  }
                }
                uVar25 = 0x200;
                if (iRam00000001132e8f30 == 0) {
                  uVar25 = 1;
                }
                ppuVar16 = param_1;
                (*(code *)(*param_1)[0x1e])
                          (param_1,param_2,param_3,param_4,param_5,uVar24 != 0 || uVar3 != 0);
                iVar57 = *(int *)((long)param_1 + 0xc);
                puVar58 = param_1[0x18];
                puStack_8e8 = (undefined8 *)0x0;
                uStack_4b8._0_4_ = 0xc1020006;
                uStack_4a8 = 0x100000001;
                ppuStack_4b0 = &puStack_8e8;
                FUN_109a91d90();
                puVar58 = puVar58 + (long)iVar57 * 0xc;
                FUN_109a48a40(puVar58,&uStack_4b8,ppuVar16);
                iVar57 = *(int *)((long)param_1 + 0xc);
                puVar59 = param_1[0x1b];
                puStack_8e8 = (undefined8 *)0x0;
                uStack_4b8 = (undefined **)CONCAT44(uStack_4b8._4_4_,0xc1020006);
                uStack_4a8 = 0x100000001;
                ppuStack_4b0 = &puStack_8e8;
                FUN_109a91d90();
                FUN_109a48a40(puVar59 + (long)iVar57 * 0xc,&uStack_4b8,puVar58);
                lVar29 = (long)*(int *)(param_1 + 1);
                if (*(int *)(param_1 + 1) <= *(int *)((long)param_1 + 0xc)) {
                  ppuVar16 = param_1 + 0x2a;
                  ppuVar1 = param_1 + 0x36;
                  lVar55 = (long)*(int *)((long)param_1 + 0xc);
                  do {
                    iVar51 = *(int *)((long)param_1[9] + lVar55 * 0x60 + 0xc);
                    *(int *)((long)param_1 + 0x34) = iVar51;
                    uVar3 = *(uint *)(param_1[9] + lVar55 * 0xc + 1);
                    uVar24 = *(uint *)(param_1 + 2);
                    iVar57 = *(int *)((long)param_1 + 0x14);
                    iVar8 = 0;
                    if (iVar57 != 0) {
                      iVar8 = (int)(iVar51 - uVar24) / iVar57;
                    }
                    uVar27 = iVar8 + 1;
                    uVar26 = (ulong)uVar27;
                    *(uint *)(param_1 + 7) = uVar3;
                    *(uint *)((long)param_1 + 0x3c) = uVar27;
                    iVar50 = 0;
                    if (iVar57 != 0) {
                      iVar50 = (int)(uVar3 - uVar24) / iVar57;
                    }
                    *(int *)(param_1 + 8) = iVar50 + 1;
                    puVar59 = param_1[0x12];
                    puVar30 = param_1[0x15];
                    puVar64 = param_1[0x44];
                    puVar36 = param_1[0x50];
                    puVar31 = param_1[0x5c];
                    puVar58 = param_1[0x68];
                    puVar68 = param_1[0x74];
                    if ((uVar24 == 8) && (iVar57 == 4)) {
                      FUN_109367d10(&uStack_4b8,(long)(iVar50 + 2));
                      FUN_109367d10(&puStack_8e8,(long)*(int *)(param_1 + 8) + 1);
                      FUN_109367d10(&puStack_d18,(long)*(int *)(param_1 + 8) + 1);
                      FUN_109367d10(&puStack_1148,(long)*(int *)(param_1 + 8) + 1);
                      FUN_109367d10(&puStack_1578,(long)*(int *)(param_1 + 8) + 1);
                      uVar24 = *(uint *)((long)param_1 + 0x3c);
                      uVar26 = (ulong)uVar24;
                      uVar3 = *(uint *)(param_1 + 8);
                      if (-1 < (int)uVar24) {
                        uVar32 = 0;
                        puVar37 = (undefined8 *)puVar59[lVar55 * 0xc + 2];
                        plVar43 = (long *)puVar59[lVar55 * 0xc + 9];
                        puVar59 = (undefined8 *)puVar30[lVar55 * 0xc + 2];
                        plVar52 = (long *)puVar30[lVar55 * 0xc + 9];
                        do {
                          if (-1 < (int)uVar3) {
                            uVar53 = 0;
                            lVar29 = *plVar43;
                            lVar22 = *plVar52;
                            puVar67 = puVar37;
                            puVar30 = puVar59;
                            do {
                              lVar63 = 4;
                              puVar28 = puVar67;
                              puVar56 = puVar30;
                              auVar74 = ZEXT216(0);
                              auVar75 = ZEXT216(0);
                              auVar77 = ZEXT216(0);
                              auVar86 = ZEXT216(0);
                              auVar81 = ZEXT216(0);
                              do {
                                uVar83 = *puVar28;
                                auVar84._0_4_ = (int)(short)uVar83;
                                auVar84._4_4_ = (int)(short)((ulong)uVar83 >> 0x10);
                                auVar84._8_4_ = (int)(short)((ulong)uVar83 >> 0x20);
                                auVar84._12_4_ = (int)(short)((ulong)uVar83 >> 0x30);
                                auVar85 = NEON_scvtf(auVar84,4);
                                fVar70 = auVar85._0_4_;
                                auVar79._0_4_ = auVar86._0_4_ + fVar70;
                                fVar71 = auVar85._4_4_;
                                auVar79._4_4_ = auVar86._4_4_ + fVar71;
                                fVar72 = auVar85._8_4_;
                                auVar79._8_4_ = auVar86._8_4_ + fVar72;
                                fVar73 = auVar85._12_4_;
                                auVar79._12_4_ = auVar86._12_4_ + fVar73;
                                uVar83 = *puVar56;
                                auVar86._0_4_ = (int)(short)uVar83;
                                auVar86._4_4_ = (int)(short)((ulong)uVar83 >> 0x10);
                                auVar86._8_4_ = (int)(short)((ulong)uVar83 >> 0x20);
                                auVar86._12_4_ = (int)(short)((ulong)uVar83 >> 0x30);
                                auVar86 = NEON_scvtf(auVar86,4);
                                fVar80 = auVar86._0_4_;
                                auVar82._0_4_ = auVar81._0_4_ + fVar80;
                                fVar87 = auVar86._4_4_;
                                auVar82._4_4_ = auVar81._4_4_ + fVar87;
                                fVar88 = auVar86._8_4_;
                                auVar82._8_4_ = auVar81._8_4_ + fVar88;
                                fVar89 = auVar86._12_4_;
                                auVar82._12_4_ = auVar81._12_4_ + fVar89;
                                auVar78._0_4_ = auVar77._0_4_ + fVar70 * fVar70;
                                auVar78._4_4_ = auVar77._4_4_ + fVar71 * fVar71;
                                auVar78._8_4_ = auVar77._8_4_ + fVar72 * fVar72;
                                auVar78._12_4_ = auVar77._12_4_ + fVar73 * fVar73;
                                auVar76._0_4_ = auVar75._0_4_ + fVar80 * fVar80;
                                auVar76._4_4_ = auVar75._4_4_ + fVar87 * fVar87;
                                auVar76._8_4_ = auVar75._8_4_ + fVar88 * fVar88;
                                auVar76._12_4_ = auVar75._12_4_ + fVar89 * fVar89;
                                auVar85._0_4_ = auVar74._0_4_ + fVar80 * fVar70;
                                auVar85._4_4_ = auVar74._4_4_ + fVar87 * fVar71;
                                auVar85._8_4_ = auVar74._8_4_ + fVar88 * fVar72;
                                auVar85._12_4_ = auVar74._12_4_ + fVar89 * fVar73;
                                puVar56 = (undefined8 *)((long)puVar56 + lVar22);
                                puVar28 = (undefined8 *)((long)puVar28 + lVar29);
                                lVar63 = lVar63 + -1;
                                auVar74 = auVar85;
                                auVar75 = auVar76;
                                auVar77 = auVar78;
                                auVar86 = auVar79;
                                auVar81 = auVar82;
                              } while (lVar63 != 0);
                              fVar70 = auVar79._0_4_ + auVar79._4_4_ +
                                       auVar79._8_4_ + auVar79._12_4_;
                              fVar72 = auVar82._0_4_ + auVar82._4_4_ +
                                       auVar82._8_4_ + auVar82._12_4_;
                              fVar71 = auVar78._0_4_ + auVar78._4_4_ +
                                       auVar78._8_4_ + auVar78._12_4_;
                              fVar73 = auVar76._0_4_ + auVar76._4_4_ +
                                       auVar76._8_4_ + auVar76._12_4_;
                              if (uVar32 == uVar26) {
                                *(float *)((long)uStack_4b8 + uVar53 * 4) = fVar70;
                                *(float *)((long)puStack_8e8 + uVar53 * 4) = fVar72;
                                *(float *)((long)puStack_d18 + uVar53 * 4) = fVar71;
                                *(float *)((long)puStack_1148 + uVar53 * 4) = fVar73;
                                pfVar60 = (float *)((long)puStack_1578 + uVar53 * 4);
                              }
                              else {
                                lVar63 = uVar32 + uVar53 * uVar26;
                                *(float *)((long)puVar58 + lVar63 * 4) = fVar70;
                                *(float *)((long)puVar68 + lVar63 * 4) = fVar72;
                                *(float *)((long)puVar64 + lVar63 * 4) = fVar71;
                                *(float *)((long)puVar36 + lVar63 * 4) = fVar73;
                                pfVar60 = (float *)((long)puVar31 + lVar63 * 4);
                              }
                              *pfVar60 = auVar85._0_4_ + auVar85._4_4_ +
                                         auVar85._8_4_ + auVar85._12_4_;
                              uVar53 = uVar53 + 1;
                              puVar30 = (undefined8 *)((long)puVar30 + lVar22 * 4);
                              puVar67 = (undefined8 *)((long)puVar67 + lVar29 * 4);
                            } while (uVar53 != uVar3 + 1);
                          }
                          uVar32 = uVar32 + 1;
                          puVar59 = puVar59 + 1;
                          puVar37 = puVar37 + 1;
                        } while (uVar32 != uVar26 + 1);
                      }
                      if (0 < (int)uVar3) {
                        uVar53 = 0;
                        lVar33 = uVar26 * 4;
                        uVar32 = (ulong)(uVar24 - 1);
                        lVar29 = (long)puVar31 + uVar26 * 4;
                        lVar22 = (long)puVar36 + uVar26 * 4;
                        lVar63 = (long)puVar64 + uVar26 * 4;
                        lVar48 = (long)puVar68 + uVar26 * 4;
                        lVar54 = (long)puVar58 + uVar26 * 4;
                        puVar56 = puVar36;
                        puVar67 = puVar31;
                        puVar37 = puVar64;
                        puVar30 = puVar68;
                        puVar59 = puVar58;
                        do {
                          if (0 < (int)uVar24) {
                            lVar61 = 0;
                            lVar2 = uVar53 + 1;
                            lVar65 = uVar32 + lVar2 * uVar26;
                            lVar66 = uVar32 + uVar53 * uVar26;
                            do {
                              if (uVar32 << 2 == lVar61) {
                                *(float *)((long)puVar58 + lVar66 * 4) =
                                     *(float *)((long)puVar58 + lVar66 * 4) +
                                     *(float *)((long)uStack_4b8 + uVar53 * 4) +
                                     *(float *)((long)puVar58 + lVar65 * 4) +
                                     *(float *)((long)uStack_4b8 + lVar2 * 4);
                                *(float *)((long)puVar68 + lVar66 * 4) =
                                     *(float *)((long)puVar68 + lVar66 * 4) +
                                     *(float *)((long)puStack_8e8 + uVar53 * 4) +
                                     *(float *)((long)puVar68 + lVar65 * 4) +
                                     *(float *)((long)puStack_8e8 + lVar2 * 4);
                                *(float *)((long)puVar64 + lVar66 * 4) =
                                     *(float *)((long)puVar64 + lVar66 * 4) +
                                     *(float *)((long)puStack_d18 + uVar53 * 4) +
                                     *(float *)((long)puVar64 + lVar65 * 4) +
                                     *(float *)((long)puStack_d18 + lVar2 * 4);
                                *(float *)((long)puVar36 + lVar66 * 4) =
                                     *(float *)((long)puVar36 + lVar66 * 4) +
                                     *(float *)((long)puStack_1148 + uVar53 * 4) +
                                     *(float *)((long)puVar36 + lVar65 * 4) +
                                     *(float *)((long)puStack_1148 + lVar2 * 4);
                                fVar70 = *(float *)((long)puStack_1578 + uVar53 * 4) +
                                         *(float *)((long)puVar31 + lVar65 * 4);
                                pfVar60 = (float *)((long)puVar31 + lVar66 * 4);
                                pfVar69 = (float *)((long)puStack_1578 + lVar2 * 4);
                              }
                              else {
                                pfVar60 = (float *)((long)puVar59 + lVar61);
                                *pfVar60 = *pfVar60 +
                                           pfVar60[1] + *(float *)(lVar54 + lVar61) +
                                           ((float *)(lVar54 + lVar61))[1];
                                pfVar60 = (float *)((long)puVar30 + lVar61);
                                *pfVar60 = *pfVar60 +
                                           pfVar60[1] + *(float *)(lVar48 + lVar61) +
                                           ((float *)(lVar48 + lVar61))[1];
                                pfVar60 = (float *)((long)puVar37 + lVar61);
                                *pfVar60 = *pfVar60 +
                                           pfVar60[1] + *(float *)(lVar63 + lVar61) +
                                           ((float *)(lVar63 + lVar61))[1];
                                pfVar60 = (float *)((long)puVar56 + lVar61);
                                *pfVar60 = *pfVar60 +
                                           pfVar60[1] + *(float *)(lVar22 + lVar61) +
                                           ((float *)(lVar22 + lVar61))[1];
                                pfVar60 = (float *)((long)puVar67 + lVar61);
                                pfVar69 = (float *)(lVar29 + lVar61) + 1;
                                fVar70 = pfVar60[1] + *(float *)(lVar29 + lVar61);
                              }
                              *pfVar60 = *pfVar60 + fVar70 + *pfVar69;
                              lVar61 = lVar61 + 4;
                            } while (lVar33 - lVar61 != 0);
                          }
                          uVar53 = uVar53 + 1;
                          lVar29 = lVar29 + lVar33;
                          lVar22 = lVar22 + lVar33;
                          puVar59 = (undefined8 *)((long)puVar59 + lVar33);
                          lVar63 = lVar63 + lVar33;
                          puVar30 = (undefined8 *)((long)puVar30 + lVar33);
                          lVar48 = lVar48 + lVar33;
                          puVar37 = (undefined8 *)((long)puVar37 + lVar33);
                          lVar54 = lVar54 + lVar33;
                          puVar67 = (undefined8 *)((long)puVar67 + lVar33);
                          puVar56 = (undefined8 *)((long)puVar56 + lVar33);
                        } while (uVar53 != uVar3);
                      }
                      if (puStack_1578 != (undefined8 *)0x0) {
                        puStack_1570 = puStack_1578;
                        __ZdlPv();
                      }
                      if (puStack_1148 != (undefined8 *)0x0) {
                        puStack_1140 = puStack_1148;
                        __ZdlPv();
                      }
                      if (puStack_d18 != (undefined8 *)0x0) {
                        puStack_d10 = puStack_d18;
                        __ZdlPv();
                      }
                      if (puStack_8e8 != (undefined8 *)0x0) {
                        puStack_8e0 = (uint *)puStack_8e8;
                        __ZdlPv();
                      }
                      if (uStack_4b8 != (undefined **)0x0) {
                        ppuStack_4b0 = (undefined8 **)uStack_4b8;
                        __ZdlPv();
                      }
                    }
                    else {
                      lVar29 = (long)(int)uVar24;
                      puVar23 = param_1[0x80];
                      puVar28 = param_1[0x8c];
                      puVar56 = param_1[0x98];
                      puVar67 = param_1[0xa4];
                      puVar37 = param_1[0xb0];
                      if (0 < (int)uVar3) {
                        uVar32 = 0;
                        psVar34 = (short *)puVar59[lVar55 * 0xc + 2];
                        psVar38 = (short *)puVar30[lVar55 * 0xc + 2];
                        lVar22 = *(long *)puVar59[lVar55 * 0xc + 9];
                        lVar63 = *(long *)puVar30[lVar55 * 0xc + 9];
                        do {
                          if ((int)uVar24 < 1) {
                            fVar71 = 0.0;
                            fVar80 = 0.0;
                            fVar73 = 0.0;
                            fVar72 = 0.0;
                            fVar70 = 0.0;
                          }
                          else {
                            fVar70 = 0.0;
                            fVar72 = 0.0;
                            fVar73 = 0.0;
                            fVar80 = 0.0;
                            fVar71 = 0.0;
                            psVar47 = psVar34;
                            psVar49 = psVar38;
                            uVar53 = (ulong)uVar24;
                            do {
                              sVar4 = *psVar47;
                              fVar70 = fVar70 + (float)(uint)((int)sVar4 * (int)sVar4);
                              sVar5 = *psVar49;
                              fVar72 = fVar72 + (float)(uint)((int)sVar5 * (int)sVar5);
                              fVar73 = fVar73 + (float)((int)sVar5 * (int)sVar4);
                              fVar80 = fVar80 + (float)(int)sVar4;
                              fVar71 = fVar71 + (float)(int)sVar5;
                              uVar53 = uVar53 - 1;
                              psVar47 = psVar47 + 1;
                              psVar49 = psVar49 + 1;
                            } while (uVar53 != 0);
                          }
                          lVar48 = uVar32 * (long)(int)uVar27;
                          *(float *)((long)puVar23 + lVar48 * 4) = fVar70;
                          *(float *)((long)puVar28 + lVar48 * 4) = fVar72;
                          *(float *)((long)puVar56 + lVar48 * 4) = fVar73;
                          *(float *)((long)puVar67 + lVar48 * 4) = fVar80;
                          *(float *)((long)puVar37 + lVar48 * 4) = fVar71;
                          if ((int)uVar24 < iVar51) {
                            lVar33 = 0;
                            iVar50 = 1;
                            lVar54 = lVar29;
                            do {
                              sVar4 = psVar34[lVar54];
                              sVar5 = psVar34[lVar33];
                              iVar11 = (int)sVar4 - (int)sVar5;
                              fVar70 = fVar70 + (float)(((int)sVar5 + (int)sVar4) * iVar11);
                              sVar6 = psVar38[lVar54];
                              sVar7 = psVar38[lVar33];
                              iVar12 = (int)sVar6 - (int)sVar7;
                              fVar72 = fVar72 + (float)(((int)sVar7 + (int)sVar6) * iVar12);
                              fVar73 = fVar73 + (float)((int)sVar6 * (int)sVar4 -
                                                       (int)sVar7 * (int)sVar5);
                              fVar80 = fVar80 + (float)iVar11;
                              fVar71 = fVar71 + (float)iVar12;
                              iVar11 = (int)lVar33 + 1;
                              iVar12 = 0;
                              if (iVar57 != 0) {
                                iVar12 = iVar11 / iVar57;
                              }
                              if (iVar11 == iVar12 * iVar57) {
                                lVar2 = lVar48 + iVar50;
                                *(float *)((long)puVar23 + lVar2 * 4) = fVar70;
                                *(float *)((long)puVar28 + lVar2 * 4) = fVar72;
                                *(float *)((long)puVar56 + lVar2 * 4) = fVar73;
                                *(float *)((long)puVar67 + lVar2 * 4) = fVar80;
                                iVar50 = iVar50 + 1;
                                *(float *)((long)puVar37 + lVar2 * 4) = fVar71;
                              }
                              lVar54 = lVar54 + 1;
                              lVar33 = lVar33 + 1;
                            } while (iVar51 != lVar54);
                          }
                          uVar32 = uVar32 + 1;
                          psVar38 = (short *)((long)psVar38 + lVar63);
                          psVar34 = (short *)((long)psVar34 + lVar22);
                        } while (uVar32 != uVar3);
                      }
                      puVar62 = (undefined8 *)(long)(int)uVar27;
                      puVar30 = &uStack_4a8;
                      puVar18 = auStack_d08;
                      puVar19 = auStack_1138;
                      puVar17 = auStack_8d8;
                      puVar59 = auStack_1568;
                      puVar40 = auStack_1138;
                      puVar45 = puVar62;
                      puVar44 = auStack_d08;
                      puVar39 = puVar62;
                      puVar35 = auStack_8d8;
                      puVar20 = (uint *)puVar62;
                      uStack_4b8 = (undefined **)&uStack_4a8;
                      ppuVar13 = (undefined8 **)puVar62;
                      if (0x108 < uVar27) {
                        puVar59 = (undefined8 *)((long)puVar62 << 2);
                        if (iVar8 < -1) {
                          puVar59 = (undefined8 *)0xffffffffffffffff;
                        }
                        puVar30 = puVar59;
                        __Znam();
                        puVar17 = puVar59;
                        uStack_4b8 = (undefined **)puVar30;
                        ppuStack_4b0 = (undefined8 **)puVar62;
                        __Znam();
                        puVar18 = puVar59;
                        puStack_8e8 = puVar17;
                        puStack_8e0 = (uint *)puVar62;
                        __Znam();
                        puVar19 = puVar59;
                        puStack_d18 = puVar18;
                        puStack_d10 = puVar62;
                        __Znam();
                        puStack_1148 = puVar19;
                        puStack_1140 = puVar62;
                        __Znam();
                        puVar40 = puStack_1148;
                        puVar45 = puStack_1140;
                        puVar44 = puStack_d18;
                        puVar39 = puStack_d10;
                        puVar35 = puStack_8e8;
                        puVar20 = puStack_8e0;
                        ppuVar13 = ppuStack_4b0;
                      }
                      ppuStack_4b0 = ppuVar13;
                      puStack_8e0 = puVar20;
                      puStack_8e8 = puVar35;
                      puStack_d10 = puVar39;
                      puStack_d18 = puVar44;
                      puStack_1140 = puVar45;
                      puStack_1148 = puVar40;
                      puStack_1578 = puVar59;
                      puStack_1570 = puVar62;
                      if (-1 < iVar8) {
                        lVar22 = uVar26 << 2;
                        _bzero(puVar30);
                        _bzero(puVar17,lVar22);
                        _bzero(puVar18,lVar22);
                        _bzero(puVar19,lVar22);
                        _bzero(puVar59,lVar22);
                      }
                      if (0 < (int)uVar24) {
                        uVar32 = 0;
                        lVar22 = uVar26 * 4;
                        puVar35 = puVar23;
                        puVar39 = puVar28;
                        puVar44 = puVar56;
                        puVar45 = puVar67;
                        puVar40 = puVar37;
                        do {
                          if (-1 < iVar8) {
                            lVar63 = 0;
                            do {
                              *(float *)((long)puVar30 + lVar63) =
                                   *(float *)((long)puVar35 + lVar63) +
                                   *(float *)((long)puVar30 + lVar63);
                              *(float *)((long)puVar17 + lVar63) =
                                   *(float *)((long)puVar39 + lVar63) +
                                   *(float *)((long)puVar17 + lVar63);
                              *(float *)((long)puVar18 + lVar63) =
                                   *(float *)((long)puVar44 + lVar63) +
                                   *(float *)((long)puVar18 + lVar63);
                              *(float *)((long)puVar19 + lVar63) =
                                   *(float *)((long)puVar45 + lVar63) +
                                   *(float *)((long)puVar19 + lVar63);
                              *(float *)((long)puVar59 + lVar63) =
                                   *(float *)((long)puVar40 + lVar63) +
                                   *(float *)((long)puVar59 + lVar63);
                              lVar63 = lVar63 + 4;
                            } while (lVar22 != lVar63);
                          }
                          uVar32 = uVar32 + 1;
                          puVar40 = (undefined8 *)((long)puVar40 + lVar22);
                          puVar45 = (undefined8 *)((long)puVar45 + lVar22);
                          puVar44 = (undefined8 *)((long)puVar44 + lVar22);
                          puVar39 = (undefined8 *)((long)puVar39 + lVar22);
                          puVar35 = (undefined8 *)((long)puVar35 + lVar22);
                        } while (uVar32 != uVar24);
                      }
                      if (-1 < iVar8) {
                        lVar22 = 0;
                        do {
                          *(undefined4 *)((long)puVar64 + lVar22) =
                               *(undefined4 *)((long)puVar30 + lVar22);
                          *(undefined4 *)((long)puVar36 + lVar22) =
                               *(undefined4 *)((long)puVar17 + lVar22);
                          *(undefined4 *)((long)puVar31 + lVar22) =
                               *(undefined4 *)((long)puVar18 + lVar22);
                          *(undefined4 *)((long)puVar58 + lVar22) =
                               *(undefined4 *)((long)puVar19 + lVar22);
                          *(undefined4 *)((long)puVar68 + lVar22) =
                               *(undefined4 *)((long)puVar59 + lVar22);
                          lVar22 = lVar22 + 4;
                        } while (uVar26 << 2 != lVar22);
                      }
                      if ((int)uVar24 < (int)uVar3) {
                        lVar22 = (long)puVar62 * 4;
                        lVar63 = lVar22 * lVar29;
                        puVar40 = (undefined8 *)((long)puVar37 + lVar63);
                        puVar45 = (undefined8 *)((long)puVar67 + lVar63);
                        puVar44 = (undefined8 *)((long)puVar56 + lVar63);
                        puVar39 = (undefined8 *)((long)puVar28 + lVar63);
                        puVar35 = (undefined8 *)((long)puVar23 + lVar63);
                        iVar51 = 1;
                        do {
                          if (iVar8 < 0) {
                            iVar50 = ((int)lVar29 - uVar24) + 1;
                            iVar11 = 0;
                            if (iVar57 != 0) {
                              iVar11 = iVar50 / iVar57;
                            }
                            if (iVar50 == iVar11 * iVar57) goto LAB_1093940b0;
                          }
                          else {
                            lVar63 = 0;
                            do {
                              *(float *)((long)puVar30 + lVar63) =
                                   *(float *)((long)puVar30 + lVar63) +
                                   (*(float *)((long)puVar35 + lVar63) -
                                   *(float *)((long)puVar23 + lVar63));
                              *(float *)((long)puVar17 + lVar63) =
                                   *(float *)((long)puVar17 + lVar63) +
                                   (*(float *)((long)puVar39 + lVar63) -
                                   *(float *)((long)puVar28 + lVar63));
                              *(float *)((long)puVar18 + lVar63) =
                                   *(float *)((long)puVar18 + lVar63) +
                                   (*(float *)((long)puVar44 + lVar63) -
                                   *(float *)((long)puVar56 + lVar63));
                              *(float *)((long)puVar19 + lVar63) =
                                   *(float *)((long)puVar19 + lVar63) +
                                   (*(float *)((long)puVar45 + lVar63) -
                                   *(float *)((long)puVar67 + lVar63));
                              *(float *)((long)puVar59 + lVar63) =
                                   *(float *)((long)puVar59 + lVar63) +
                                   (*(float *)((long)puVar40 + lVar63) -
                                   *(float *)((long)puVar37 + lVar63));
                              lVar63 = lVar63 + 4;
                            } while (uVar26 << 2 != lVar63);
                            iVar50 = ((int)lVar29 - uVar24) + 1;
                            iVar11 = 0;
                            if (iVar57 != 0) {
                              iVar11 = iVar50 / iVar57;
                            }
                            if (iVar50 == iVar11 * iVar57) {
                              lVar63 = 0;
                              iVar50 = iVar51 * uVar27;
                              do {
                                *(undefined4 *)((long)puVar64 + lVar63 + (long)iVar50 * 4) =
                                     *(undefined4 *)((long)puVar30 + lVar63);
                                *(undefined4 *)((long)puVar36 + lVar63 + (long)iVar50 * 4) =
                                     *(undefined4 *)((long)puVar17 + lVar63);
                                *(undefined4 *)((long)puVar31 + lVar63 + (long)iVar50 * 4) =
                                     *(undefined4 *)((long)puVar18 + lVar63);
                                *(undefined4 *)((long)puVar58 + lVar63 + (long)iVar50 * 4) =
                                     *(undefined4 *)((long)puVar19 + lVar63);
                                *(undefined4 *)((long)puVar68 + lVar63 + (long)iVar50 * 4) =
                                     *(undefined4 *)((long)puVar59 + lVar63);
                                lVar63 = lVar63 + 4;
                              } while (uVar26 << 2 != lVar63);
LAB_1093940b0:
                              iVar51 = iVar51 + 1;
                            }
                          }
                          lVar29 = lVar29 + 1;
                          puVar37 = (undefined8 *)((long)puVar37 + lVar22);
                          puVar67 = (undefined8 *)((long)puVar67 + lVar22);
                          puVar56 = (undefined8 *)((long)puVar56 + lVar22);
                          puVar28 = (undefined8 *)((long)puVar28 + lVar22);
                          puVar23 = (undefined8 *)((long)puVar23 + lVar22);
                          puVar40 = (undefined8 *)((long)puVar40 + lVar22);
                          puVar45 = (undefined8 *)((long)puVar45 + lVar22);
                          puVar44 = (undefined8 *)((long)puVar44 + lVar22);
                          puVar39 = (undefined8 *)((long)puVar39 + lVar22);
                          puVar35 = (undefined8 *)((long)puVar35 + lVar22);
                        } while (lVar29 != (int)uVar3);
                      }
                      if (puVar59 != auStack_1568) {
                        __ZdaPv(puVar59);
                        puVar19 = puStack_1148;
                      }
                      if ((puVar19 != auStack_1138) && (puVar19 != (undefined8 *)0x0)) {
                        __ZdaPv(puVar19);
                      }
                      if ((puStack_d18 != auStack_d08) && (puStack_d18 != (undefined8 *)0x0)) {
                        __ZdaPv();
                      }
                      if ((puStack_8e8 != auStack_8d8) && (puStack_8e8 != (undefined8 *)0x0)) {
                        __ZdaPv();
                      }
                      if ((uStack_4b8 != (undefined **)&uStack_4a8) &&
                         (uStack_4b8 != (undefined **)0x0)) {
                        __ZdaPv();
                      }
                    }
                    iVar57 = (int)lVar55;
                    ppuStack_4b0 = param_1;
                    ppuStack_498 = ppuVar16;
                    ppuStack_490 = ppuVar1;
                    iStack_454 = iVar57;
                    if (*(char *)((long)param_1 + 0x2d) == '\x01') {
                      puStack_8e8 = (undefined8 *)0x800000000;
                      iStack_4a0 = *(int *)(param_1 + 8);
                      ppuStack_488 = (undefined8 **)(param_1[0x18] + lVar55 * 0xc);
                      ppuStack_480 = (undefined8 **)(param_1[0x1b] + lVar55 * 0xc);
                      puStack_478 = param_1[9] + lVar55 * 0xc;
                      puStack_470 = param_1[0xf] + lVar55 * 0xc;
                      puStack_468 = param_1[0x12] + lVar55 * 0xc;
                      puStack_460 = param_1[0x15] + lVar55 * 0xc;
                      uStack_4b8 = &PTR_FUN_110af4e70;
                      uStack_458 = 2;
                      uStack_4a8 = CONCAT44((int)((double)iStack_4a0 / 8.0),8);
                      func_0x000109aa87cc(0xbff0000000000000,&puStack_8e8,&uStack_4b8);
                    }
                    else {
                      puStack_8e8 = (undefined8 *)((ulong)uVar25 << 0x20);
                      iStack_4a0 = *(int *)(param_1 + 8);
                      ppuStack_488 = (undefined8 **)(param_1[0x18] + lVar55 * 0xc);
                      ppuStack_480 = (undefined8 **)(param_1[0x1b] + lVar55 * 0xc);
                      puStack_478 = param_1[9] + lVar55 * 0xc;
                      puStack_470 = param_1[0xf] + lVar55 * 0xc;
                      puStack_468 = param_1[0x12] + lVar55 * 0xc;
                      puStack_460 = param_1[0x15] + lVar55 * 0xc;
                      uStack_4b8 = &PTR_FUN_110af4e70;
                      uStack_458 = 1;
                      uStack_4a8 = CONCAT44((int)((double)iStack_4a0 / (double)uVar25),uVar25);
                      func_0x000109aa87cc(0xbff0000000000000,&puStack_8e8,&uStack_4b8);
                    }
                    if ((*(int *)(param_1 + 2) == 8) && (*(int *)((long)param_1 + 0x14) == 4)) {
                      puStack_8e8 = (undefined8 *)0x800000000;
                      uStack_4b8 = &PTR_DAT_110af4e98;
                      uStack_4a8 = CONCAT44((int)((float)(int)((double)*(int *)(param_1 + 7) / 8.0)
                                                 / 4.0) << 2,8);
                      ppuStack_4b0 = param_1;
                      iStack_4a0 = iVar57;
                      func_0x000109aa87cc(0xbff0000000000000,&puStack_8e8,&uStack_4b8);
                    }
                    else {
                      puStack_8e8 = (undefined8 *)0x800000000;
                      puStack_478 = param_1[9] + lVar55 * 0xc;
                      iStack_4a0 = *(int *)(puStack_478 + 1);
                      ppuStack_498 = (undefined8 **)(param_1[0x18] + lVar55 * 0xc);
                      ppuStack_490 = (undefined8 **)(param_1[0x1b] + lVar55 * 0xc);
                      puStack_470 = param_1[0xc] + lVar55 * 0xc;
                      uStack_4b8 = &PTR_DAT_110af4ec0;
                      uStack_4a8 = CONCAT44((int)((double)iStack_4a0 / 8.0),8);
                      ppuStack_4b0 = param_1;
                      ppuStack_488 = ppuVar16;
                      ppuStack_480 = ppuVar1;
                      func_0x000109aa87cc(0xbff0000000000000,&puStack_8e8,&uStack_4b8);
                    }
                    if (0 < *(int *)((long)param_1 + 0x1c)) {
                      ppuStack_4b0 = (undefined8 **)(param_1[9] + lVar55 * 0xc);
                      uStack_4a8 = 0;
                      uStack_4b8 = (undefined **)CONCAT44(uStack_4b8._4_4_,0x81010000);
                      puStack_8e0 = (uint *)(param_1[0xc] + lVar55 * 0xc);
                      auStack_8d8[0] = 0;
                      puStack_8e8 = (undefined8 *)CONCAT44(puStack_8e8._4_4_,0x81010000);
                      puStack_d10 = param_1[0x18] + lVar55 * 0xc;
                      puStack_d18 = (undefined8 *)CONCAT44(puStack_d18._4_4_,0x83010005);
                      auStack_d08[0] = 0;
                      puStack_1140 = param_1[0x1b] + lVar55 * 0xc;
                      puStack_1148 = (undefined8 *)CONCAT44(puStack_1148._4_4_,0x83010005);
                      auStack_1138[0] = 0;
                      (**(code **)(*(long *)param_1[0xba][lVar55 * 2 + 1] + 0x50))
                                ((long *)param_1[0xba][lVar55 * 2 + 1],&uStack_4b8,&puStack_8e8,
                                 &puStack_d18,&puStack_1148);
                    }
                    lVar29 = (long)*(int *)(param_1 + 1);
                    if (lVar29 < lVar55) {
                      ppuStack_4b0 = (undefined8 **)(param_1[0x18] + lVar55 * 0xc);
                      uStack_4a8 = 0;
                      uStack_4b8._0_4_ = 0x81010005;
                      puStack_8e0 = (uint *)(ppuStack_4b0 + -0xc);
                      puStack_8e8._0_4_ = 0x82010005;
                      auStack_8d8[0] = 0;
                      puStack_d18 = (undefined8 *)NEON_rev64(*ppuStack_4b0[-4],4);
                      FUN_109b0f718(0,0,&uStack_4b8,&puStack_8e8,&puStack_d18,1);
                      lVar29 = lVar55 + -1;
                      ppuStack_4b0 = (undefined8 **)(param_1[0x1b] + lVar55 * 0xc);
                      uStack_4a8 = 0;
                      uStack_4b8._0_4_ = 0x81010005;
                      puStack_8e0 = (uint *)(param_1[0x1b] + lVar29 * 0xc);
                      puStack_8e8 = (undefined8 *)CONCAT44(puStack_8e8._4_4_,0x82010005);
                      auStack_8d8[0] = 0;
                      puStack_d18 = (undefined8 *)
                                    NEON_rev64(**(undefined8 **)((long)puStack_8e0 + 0x40),4);
                      FUN_109b0f718(0,0,&uStack_4b8,&puStack_8e8,&puStack_d18,1);
                      uStack_4b8._0_4_ = 0x82010005;
                      ppuStack_4b0 = (undefined8 **)(param_1[0x18] + lVar29 * 0xc);
                      uStack_4a8 = 0;
                      FUN_109a41858(0x4000000000000000,0,ppuStack_4b0,&uStack_4b8,0xffffffff);
                      uStack_4b8 = (undefined **)CONCAT44(uStack_4b8._4_4_,0x82010005);
                      ppuStack_4b0 = (undefined8 **)(param_1[0x1b] + lVar29 * 0xc);
                      uStack_4a8 = 0;
                      FUN_109a41858(0x4000000000000000,0,ppuStack_4b0,&uStack_4b8,0xffffffff);
                      lVar29 = (long)*(int *)(param_1 + 1);
                    }
                    bVar10 = lVar29 < lVar55;
                    lVar55 = lVar55 + -1;
                  } while (bVar10);
                }
                ppuStack_4b0 = (undefined8 **)(param_1[0x18] + (long)(int)lVar29 * 0xc);
                uStack_4a8 = 0;
                uStack_4b8._0_4_ = 0x81010005;
                puStack_8e8._0_4_ = 0x2010000;
                auStack_8d8[0] = 0;
                puStack_d18 = (undefined8 *)NEON_rev64(*(undefined8 *)(param_4 + 2),4);
                puStack_8e0 = param_4;
                FUN_109b0f718(0,0,&uStack_4b8,&puStack_8e8,&puStack_d18,1);
                ppuStack_4b0 = (undefined8 **)(param_1[0x1b] + (long)*(int *)(param_1 + 1) * 0xc);
                uStack_4a8 = 0;
                uStack_4b8._0_4_ = 0x81010005;
                puStack_8e8 = (undefined8 *)CONCAT44(puStack_8e8._4_4_,0x2010000);
                auStack_8d8[0] = 0;
                puStack_d18 = (undefined8 *)NEON_rev64(*(undefined8 *)(param_5 + 2),4);
                puStack_8e0 = param_5;
                FUN_109b0f718(0,0,&uStack_4b8,&puStack_8e8,&puStack_d18,1);
                uStack_4b8._0_4_ = 0x2010000;
                uStack_4a8 = 0;
                ppuStack_4b0 = (undefined8 **)param_4;
                FUN_109a41858((double)(1 << (ulong)(*(uint *)(param_1 + 1) & 0x1f)),0,param_4,
                              &uStack_4b8,0xffffffff);
                uStack_4b8 = (undefined **)CONCAT44(uStack_4b8._4_4_,0x2010000);
                uStack_4a8 = 0;
                puVar58 = &uStack_4b8;
                ppuStack_4b0 = (undefined8 **)param_5;
                FUN_109a41858((double)(1 << (ulong)(*(uint *)(param_1 + 1) & 0x1f)),0,param_5,
                              puVar58,0xffffffff);
                iVar57 = (int)puVar58;
                if (uStack_1608 != 0) {
                  piVar42 = (int *)(uStack_1608 + 0x14);
                  do {
                    iVar51 = *piVar42;
                    cVar9 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(piVar42,0x10);
                    if (bVar10) {
                      *piVar42 = iVar51 + -1;
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  if (iVar51 + -1 == 0) {
                    param_5 = (uint *)&uStack_1640;
                    func_0x000109a848d4(param_5);
                  }
                }
                uStack_1608 = 0;
                uStack_1628 = 0;
                uStack_1630 = 0;
                uStack_1618 = 0;
                uStack_1620 = 0;
                if (0 < uStack_1640._4_4_) {
                  lVar29 = 0;
                  do {
                    *(undefined4 *)(uStack_1600 + lVar29 * 4) = 0;
                    lVar29 = lVar29 + 1;
                  } while (lVar29 < uStack_1640._4_4_);
                }
                if (puStack_15f8 != &uStack_15f0 && puStack_15f8 != (undefined8 *)0x0) {
                  param_5 = (uint *)puStack_15f8[-1];
                  _free(param_5);
                }
                if (lStack_15a0 != 0) {
                  piVar42 = (int *)(lStack_15a0 + 0x14);
                  do {
                    iVar51 = *piVar42;
                    cVar9 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(piVar42,0x10);
                    if (bVar10) {
                      *piVar42 = iVar51 + -1;
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  if (iVar51 + -1 == 0) {
                    param_5 = &uStack_15d8;
                    func_0x000109a848d4(param_5);
                  }
                }
                lStack_15a0 = 0;
                uStack_15c0 = 0;
                lStack_15c8 = 0;
                uStack_15b0 = 0;
                uStack_15b8 = 0;
                if (0 < (int)uStack_15d4) {
                  lVar29 = 0;
                  do {
                    *(undefined4 *)((long)puStack_1598 + lVar29 * 4) = 0;
                    lVar29 = lVar29 + 1;
                  } while (lVar29 < (int)uStack_15d4);
                }
                if (puStack_1590 != &uStack_1588 && puStack_1590 != (undefined8 *)0x0) {
                  param_5 = (uint *)puStack_1590[-1];
                  _free(param_5);
                }
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                  return;
                }
                ___stack_chk_fail();
                if (iVar57 != 0) {
                  func_0x000104bd46a0(param_5);
                  func_0x00010567aa40(&uStack_15d8);
                }
                do {
                  __Unwind_Resume(param_5);
                  ppuStack_4b0 = (undefined8 **)0x0;
                  uStack_4b8 = (undefined **)0x0;
                  do {
                    iVar57 = *(int *)param_1;
                    cVar9 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(param_1,0x10);
                    if (bVar10) {
                      *(int *)param_1 = iVar57 + -1;
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  if (iVar57 + -1 == 0) {
                    _free(param_1[-1]);
                  }
                } while( true );
              }
              puVar15 = (undefined4 *)0x20;
              func_0x000107c2ae8c();
              *puVar15 = 1;
              uStack_4b8 = (undefined **)(puVar15 + 1);
              ppuStack_4b0 = (undefined8 **)0x1b;
              *(undefined1 *)((long)puVar15 + 0x1f) = 0;
              *(undefined8 *)(puVar15 + 3) = 0x4373692e5d305b64;
              *(undefined8 *)(puVar15 + 1) = 0x696d617279503149;
              *(undefined8 *)((long)puVar15 + 0x17) = 0x292873756f756e69;
              *(undefined8 *)((long)puVar15 + 0xf) = 0x746e6f4373692e5d;
              FUN_109ac3188(0xffffff29,&uStack_4b8,&UNK_10f568986,&UNK_10f56898f,0x72b);
            }
          }
          else {
LAB_1093932f4:
            puVar15 = (undefined4 *)0x2c;
            func_0x000107c2ae8c();
            *puVar15 = 1;
            uStack_4b8 = (undefined **)(puVar15 + 1);
            ppuStack_4b0 = (undefined8 **)0x26;
            *(undefined8 *)(puVar15 + 3) = 0x7a69732e5d305b64;
            *(undefined8 *)(puVar15 + 1) = 0x696d617279503049;
            *(undefined1 *)((long)puVar15 + 0x2a) = 0;
            *(undefined8 *)(puVar15 + 7) = 0x305b64696d617279;
            *(undefined8 *)(puVar15 + 5) = 0x503149203d3d2065;
            *(undefined8 *)((long)puVar15 + 0x22) = 0x657a69732e5d305b;
            FUN_109ac3188(0xffffff29,&uStack_4b8,&UNK_10f568986,&UNK_10f56898f,0x729);
          }
          goto LAB_1093949d0;
        }
      }
      puVar15 = (undefined4 *)0x5c;
      func_0x000107c2ae8c();
      *puVar15 = 1;
      uStack_4b8 = (undefined **)(puVar15 + 1);
      ppuStack_4b0 = (undefined8 **)0x56;
      *(undefined8 *)(puVar15 + 0xb) = 0x3d3d202928687470;
      *(undefined8 *)(puVar15 + 9) = 0x65642e5d305b6469;
      *(undefined8 *)(puVar15 + 0xf) = 0x6172795031492026;
      *(undefined8 *)(puVar15 + 0xd) = 0x262055385f564320;
      *(undefined8 *)(puVar15 + 0x13) = 0x28736c656e6e6168;
      *(undefined8 *)(puVar15 + 0x11) = 0x632e5d305b64696d;
      *(undefined8 *)(puVar15 + 3) = 0x6d652e5d305b6469;
      *(undefined8 *)(puVar15 + 1) = 0x6d61727950314921;
      *(undefined1 *)((long)puVar15 + 0x5a) = 0;
      *(undefined8 *)((long)puVar15 + 0x52) = 0x31203d3d20292873;
      *(undefined8 *)(puVar15 + 7) = 0x6d61727950314920;
      *(undefined8 *)(puVar15 + 5) = 0x2626202928797470;
      FUN_109ac3188(0xffffff29,&uStack_4b8,&UNK_10f568986,&UNK_10f56898f,0x728);
      goto LAB_1093949d0;
    }
  }
  puVar15 = (undefined4 *)0x5c;
  func_0x000107c2ae8c();
  *puVar15 = 1;
  uStack_4b8 = (undefined **)(puVar15 + 1);
  ppuStack_4b0 = (undefined8 **)0x56;
  *(undefined8 *)(puVar15 + 0xb) = 0x3d3d202928687470;
  *(undefined8 *)(puVar15 + 9) = 0x65642e5d305b6469;
  *(undefined8 *)(puVar15 + 0xf) = 0x6172795030492026;
  *(undefined8 *)(puVar15 + 0xd) = 0x262055385f564320;
  *(undefined8 *)(puVar15 + 0x13) = 0x28736c656e6e6168;
  *(undefined8 *)(puVar15 + 0x11) = 0x632e5d305b64696d;
  *(undefined8 *)(puVar15 + 3) = 0x6d652e5d305b6469;
  *(undefined8 *)(puVar15 + 1) = 0x6d61727950304921;
  *(undefined1 *)((long)puVar15 + 0x5a) = 0;
  *(undefined8 *)((long)puVar15 + 0x52) = 0x31203d3d20292873;
  *(undefined8 *)(puVar15 + 7) = 0x6d61727950304920;
  *(undefined8 *)(puVar15 + 5) = 0x2626202928797470;
  FUN_109ac3188(0xffffff29,&uStack_4b8,&UNK_10f568986,&UNK_10f56898f,0x727);
LAB_1093949d0:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1093949d4);
  (*pcVar14)();
}



/* Entry: 109394bdc; end: 109394be7;  */

void FUN_109394bdc(void)

{
  return;
}



/* Entry: 109394be8; end: 10939502b;  */

void FUN_109394be8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x48);
  lVar6 = *(long *)(param_1 + 0x50);
  while (lVar6 != lVar5) {
    lVar6 = lVar6 + -0x60;
    FUN_1093953b8(lVar6);
  }
  *(long *)(param_1 + 0x50) = lVar5;
  lVar5 = *(long *)(param_1 + 0x60);
  lVar6 = *(long *)(param_1 + 0x68);
  while (lVar6 != lVar5) {
    lVar6 = lVar6 + -0x60;
    FUN_1093953b8(lVar6);
  }
  *(long *)(param_1 + 0x68) = lVar5;
  lVar5 = *(long *)(param_1 + 0x78);
  lVar6 = *(long *)(param_1 + 0x80);
  while (lVar6 != lVar5) {
    lVar6 = lVar6 + -0x60;
    FUN_1093953b8(lVar6);
  }
  *(long *)(param_1 + 0x80) = lVar5;
  lVar5 = *(long *)(param_1 + 0x90);
  lVar6 = *(long *)(param_1 + 0x98);
  while (lVar6 != lVar5) {
    lVar6 = lVar6 + -0x60;
    FUN_1093954b8(lVar6);
  }
  *(long *)(param_1 + 0x98) = lVar5;
  lVar5 = *(long *)(param_1 + 0xa8);
  lVar6 = *(long *)(param_1 + 0xb0);
  while (lVar6 != lVar5) {
    lVar6 = lVar6 + -0x60;
    FUN_1093954b8(lVar6);
  }
  *(long *)(param_1 + 0xb0) = lVar5;
  lVar5 = *(long *)(param_1 + 0xc0);
  lVar6 = *(long *)(param_1 + 200);
  while (lVar6 != lVar5) {
    lVar6 = lVar6 + -0x60;
    FUN_1093955b8(lVar6);
  }
  *(long *)(param_1 + 200) = lVar5;
  lVar5 = *(long *)(param_1 + 0xd8);
  lVar6 = *(long *)(param_1 + 0xe0);
  while (lVar6 != lVar5) {
    lVar6 = lVar6 + -0x60;
    FUN_1093955b8(lVar6);
  }
  *(long *)(param_1 + 0xe0) = lVar5;
  if (*(long *)(param_1 + 0x188) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x188) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x150);
    }
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 400);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x154));
  }
  if (*(long *)(param_1 + 0x1e8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x1e8) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1b0);
    }
  }
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (0 < *(int *)(param_1 + 0x1b4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x1f0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1b4));
  }
  if (*(long *)(param_1 + 0x248) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x248) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x210);
    }
  }
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (0 < *(int *)(param_1 + 0x214)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x250);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x214));
  }
  if (*(long *)(param_1 + 0x2a8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x2a8) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x270);
    }
  }
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (0 < *(int *)(param_1 + 0x274)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x2b0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x274));
  }
  if (*(long *)(param_1 + 0x308) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x308) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x2d0);
    }
  }
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  if (0 < *(int *)(param_1 + 0x2d4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x310);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x2d4));
  }
  if (*(long *)(param_1 + 0x428) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x428) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x3f0);
    }
  }
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  if (0 < *(int *)(param_1 + 0x3f4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x430);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x3f4));
  }
  if (*(long *)(param_1 + 0x488) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x488) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x450);
    }
  }
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  if (0 < *(int *)(param_1 + 0x454)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x490);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x454));
  }
  if (*(long *)(param_1 + 0x4e8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x4e8) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x4b0);
    }
  }
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  if (0 < *(int *)(param_1 + 0x4b4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x4f0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x4b4));
  }
  lVar5 = *(long *)(param_1 + 0x5d0);
  lVar6 = *(long *)(param_1 + 0x5d8);
  if (lVar5 != lVar6) {
    do {
      if (*(long **)(lVar5 + 8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + 8) + 0x48))();
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != lVar6);
    lVar6 = *(long *)(param_1 + 0x5d8);
    lVar5 = *(long *)(param_1 + 0x5d0);
  }
  while (lVar6 != lVar5) {
    lVar6 = lVar6 + -0x10;
    FUN_109395efc(lVar6);
  }
  *(long *)(param_1 + 0x5d8) = lVar5;
  return;
}



/* Entry: 10939502c; end: 1093950bf;  */

void FUN_10939502c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long *plStack_28;
  
  FUN_1093950c0(&lStack_30);
  *param_1 = lStack_30;
  param_1[1] = (long)plStack_28;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_28 = (long *)param_1[1];
  }
  FUN_1093964f8(&lStack_30);
  (**(code **)(*plStack_28 + 0x68))(plStack_28,8);
  (**(code **)(*plStack_28 + 0x78))(plStack_28,4);
  return;
}



/* Entry: 1093950c0; end: 109395123;  */

void FUN_1093950c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x5e8;
  __Znwm();
  FUN_10938f428();
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_FUN_110af4f60;
  puVar2[2] = uVar1;
  *param_1 = puVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 109395124; end: 109395127;  */

undefined8 * FUN_109395124(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110af4d60;
  FUN_109395210(param_1 + 0xba);
  if (param_1[0xb5] != 0) {
    piVar1 = (int *)(param_1[0xb5] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xae);
    }
  }
  param_1[0xb5] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  if (0 < *(int *)((long)param_1 + 0x574)) {
    lVar5 = 0;
    lVar7 = param_1[0xb6];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x574));
  }
  puVar6 = (undefined8 *)param_1[0xb7];
  if (puVar6 != param_1 + 0xb8 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0xa9] != 0) {
    piVar1 = (int *)(param_1[0xa9] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xa2);
    }
  }
  param_1[0xa9] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  if (0 < *(int *)((long)param_1 + 0x514)) {
    lVar5 = 0;
    lVar7 = param_1[0xaa];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x514));
  }
  puVar6 = (undefined8 *)param_1[0xab];
  if (puVar6 != param_1 + 0xac && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x9d] != 0) {
    piVar1 = (int *)(param_1[0x9d] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x96);
    }
  }
  param_1[0x9d] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  if (0 < *(int *)((long)param_1 + 0x4b4)) {
    lVar5 = 0;
    lVar7 = param_1[0x9e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x4b4));
  }
  puVar6 = (undefined8 *)param_1[0x9f];
  if (puVar6 != param_1 + 0xa0 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x91] != 0) {
    piVar1 = (int *)(param_1[0x91] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x8a);
    }
  }
  param_1[0x91] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  if (0 < *(int *)((long)param_1 + 0x454)) {
    lVar5 = 0;
    lVar7 = param_1[0x92];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x454));
  }
  puVar6 = (undefined8 *)param_1[0x93];
  if (puVar6 != param_1 + 0x94 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x85] != 0) {
    piVar1 = (int *)(param_1[0x85] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x7e);
    }
  }
  param_1[0x85] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  if (0 < *(int *)((long)param_1 + 0x3f4)) {
    lVar5 = 0;
    lVar7 = param_1[0x86];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x3f4));
  }
  puVar6 = (undefined8 *)param_1[0x87];
  if (puVar6 != param_1 + 0x88 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x79] != 0) {
    piVar1 = (int *)(param_1[0x79] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x72);
    }
  }
  param_1[0x79] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  if (0 < *(int *)((long)param_1 + 0x394)) {
    lVar5 = 0;
    lVar7 = param_1[0x7a];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x394));
  }
  puVar6 = (undefined8 *)param_1[0x7b];
  if (puVar6 != param_1 + 0x7c && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x6d] != 0) {
    piVar1 = (int *)(param_1[0x6d] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x66);
    }
  }
  param_1[0x6d] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  if (0 < *(int *)((long)param_1 + 0x334)) {
    lVar5 = 0;
    lVar7 = param_1[0x6e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x334));
  }
  puVar6 = (undefined8 *)param_1[0x6f];
  if (puVar6 != param_1 + 0x70 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x61] != 0) {
    piVar1 = (int *)(param_1[0x61] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x5a);
    }
  }
  param_1[0x61] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  if (0 < *(int *)((long)param_1 + 0x2d4)) {
    lVar5 = 0;
    lVar7 = param_1[0x62];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2d4));
  }
  puVar6 = (undefined8 *)param_1[99];
  if (puVar6 != param_1 + 100 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x55] != 0) {
    piVar1 = (int *)(param_1[0x55] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x4e);
    }
  }
  param_1[0x55] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  if (0 < *(int *)((long)param_1 + 0x274)) {
    lVar5 = 0;
    lVar7 = param_1[0x56];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x274));
  }
  puVar6 = (undefined8 *)param_1[0x57];
  if (puVar6 != param_1 + 0x58 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x49] != 0) {
    piVar1 = (int *)(param_1[0x49] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x42);
    }
  }
  param_1[0x49] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  if (0 < *(int *)((long)param_1 + 0x214)) {
    lVar5 = 0;
    lVar7 = param_1[0x4a];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x214));
  }
  puVar6 = (undefined8 *)param_1[0x4b];
  if (puVar6 != param_1 + 0x4c && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3d] != 0) {
    piVar1 = (int *)(param_1[0x3d] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x36);
    }
  }
  param_1[0x3d] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  if (0 < *(int *)((long)param_1 + 0x1b4)) {
    lVar5 = 0;
    lVar7 = param_1[0x3e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1b4));
  }
  puVar6 = (undefined8 *)param_1[0x3f];
  if (puVar6 != param_1 + 0x40 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x31] != 0) {
    piVar1 = (int *)(param_1[0x31] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x2a);
    }
  }
  param_1[0x31] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  if (0 < *(int *)((long)param_1 + 0x154)) {
    lVar5 = 0;
    lVar7 = param_1[0x32];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x154));
  }
  puVar6 = (undefined8 *)param_1[0x33];
  if (puVar6 != param_1 + 0x34 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_10939526c(param_1 + 0x27);
  FUN_10939526c(param_1 + 0x24);
  FUN_10939526c(param_1 + 0x21);
  FUN_10939526c(param_1 + 0x1e);
  FUN_10939526c(param_1 + 0x1b);
  FUN_10939526c(param_1 + 0x18);
  func_0x0001093952d4(param_1 + 0x15);
  func_0x0001093952d4(param_1 + 0x12);
  func_0x00010939533c(param_1 + 0xf);
  func_0x00010939533c(param_1 + 0xc);
  func_0x00010939533c(param_1 + 9);
  return param_1;
}



/* Entry: 109395128; end: 10939513b;  */

void FUN_109395128(void)

{
  FUN_10939588c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10939513c; end: 1093951fb;  */

void FUN_10939513c(void)

{
  return;
}



/* Entry: 1093951fc; end: 10939520f;  */

void FUN_1093951fc(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_109395efc();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 109395210; end: 10939526b;  */

void FUN_109395210(long *param_1)

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
        FUN_109395efc();
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



/* Entry: 10939526c; end: 1093953a3;  */

void FUN_10939526c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x60;
        FUN_1093955b8(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1093953a4; end: 1093953b7;  */

void FUN_1093953a4(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar5 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (*(long *)(puVar5 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(puVar5 + 0x38) + 0x14);
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
      func_0x000109a848d4(puVar5);
    }
  }
  *(undefined8 *)(puVar5 + 0x38) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  if (0 < *(int *)(puVar5 + 4)) {
    lVar6 = 0;
    lVar8 = *(long *)(puVar5 + 0x40);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(puVar5 + 4));
  }
  puVar7 = *(undefined **)(puVar5 + 0x48);
  if (puVar7 == puVar5 + 0x50 || puVar7 == (undefined *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(puVar7 + -8));
  return;
}



/* Entry: 1093953b8; end: 109395457;  */

void FUN_1093953b8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 == param_1 + 0x50 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 109395458; end: 1093954a3;  */

long * FUN_109395458(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x60;
    FUN_1093953b8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1093954a4; end: 1093954b7;  */

void FUN_1093954a4(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar5 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (*(long *)(puVar5 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(puVar5 + 0x38) + 0x14);
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
      func_0x000109a848d4(puVar5);
    }
  }
  *(undefined8 *)(puVar5 + 0x38) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  if (0 < *(int *)(puVar5 + 4)) {
    lVar6 = 0;
    lVar8 = *(long *)(puVar5 + 0x40);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(puVar5 + 4));
  }
  puVar7 = *(undefined **)(puVar5 + 0x48);
  if (puVar7 == puVar5 + 0x50 || puVar7 == (undefined *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(puVar7 + -8));
  return;
}



/* Entry: 1093954b8; end: 109395557;  */

void FUN_1093954b8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 == param_1 + 0x50 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 109395558; end: 1093955a3;  */

long * FUN_109395558(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x60;
    FUN_1093954b8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1093955a4; end: 1093955b7;  */

void FUN_1093955a4(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar5 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (*(long *)(puVar5 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(puVar5 + 0x38) + 0x14);
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
      func_0x000109a848d4(puVar5);
    }
  }
  *(undefined8 *)(puVar5 + 0x38) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  if (0 < *(int *)(puVar5 + 4)) {
    lVar6 = 0;
    lVar8 = *(long *)(puVar5 + 0x40);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(puVar5 + 4));
  }
  puVar7 = *(undefined **)(puVar5 + 0x48);
  if (puVar7 == puVar5 + 0x50 || puVar7 == (undefined *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(puVar7 + -8));
  return;
}



/* Entry: 1093955b8; end: 109395657;  */

void FUN_1093955b8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 == param_1 + 0x50 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 109395658; end: 1093956a3;  */

long * FUN_109395658(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x60;
    FUN_1093955b8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1093956a4; end: 109395757;  */

undefined8 * FUN_1093956a4(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = (undefined8 *)0x60;
  __Znwm();
  *param_1 = puVar2;
  param_1[1] = puVar2;
  puVar1 = puVar2 + 0xc;
  param_1[2] = puVar1;
  lVar3 = 0x60;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    FUN_1092cc0dc(puVar2,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
    puVar2 = puVar2 + 3;
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != 0);
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 109395758; end: 10939579f;  */

void FUN_109395758(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_1093957b4();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 3);
    return;
  }
  FUN_1093957a0();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)*puVar2 != 0) {
    FUN_109395838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar2);
    return;
  }
  return;
}



/* Entry: 1093957a0; end: 1093957b3;  */

void FUN_1093957a0(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)*puVar1 != 0) {
    FUN_109395838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 1093957b4; end: 109395837;  */

void FUN_1093957b4(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000104c4f740();
  if (*(long *)*param_1 != 0) {
    FUN_109395838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109395838; end: 10939588b;  */

void FUN_109395838(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10939588c; end: 109395efb;  */

undefined8 * FUN_10939588c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110af4d60;
  FUN_109395210(param_1 + 0xba);
  if (param_1[0xb5] != 0) {
    piVar1 = (int *)(param_1[0xb5] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xae);
    }
  }
  param_1[0xb5] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  if (0 < *(int *)((long)param_1 + 0x574)) {
    lVar5 = 0;
    lVar7 = param_1[0xb6];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x574));
  }
  puVar6 = (undefined8 *)param_1[0xb7];
  if (puVar6 != param_1 + 0xb8 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0xa9] != 0) {
    piVar1 = (int *)(param_1[0xa9] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xa2);
    }
  }
  param_1[0xa9] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  if (0 < *(int *)((long)param_1 + 0x514)) {
    lVar5 = 0;
    lVar7 = param_1[0xaa];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x514));
  }
  puVar6 = (undefined8 *)param_1[0xab];
  if (puVar6 != param_1 + 0xac && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x9d] != 0) {
    piVar1 = (int *)(param_1[0x9d] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x96);
    }
  }
  param_1[0x9d] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  if (0 < *(int *)((long)param_1 + 0x4b4)) {
    lVar5 = 0;
    lVar7 = param_1[0x9e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x4b4));
  }
  puVar6 = (undefined8 *)param_1[0x9f];
  if (puVar6 != param_1 + 0xa0 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x91] != 0) {
    piVar1 = (int *)(param_1[0x91] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x8a);
    }
  }
  param_1[0x91] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  if (0 < *(int *)((long)param_1 + 0x454)) {
    lVar5 = 0;
    lVar7 = param_1[0x92];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x454));
  }
  puVar6 = (undefined8 *)param_1[0x93];
  if (puVar6 != param_1 + 0x94 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x85] != 0) {
    piVar1 = (int *)(param_1[0x85] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x7e);
    }
  }
  param_1[0x85] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  if (0 < *(int *)((long)param_1 + 0x3f4)) {
    lVar5 = 0;
    lVar7 = param_1[0x86];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x3f4));
  }
  puVar6 = (undefined8 *)param_1[0x87];
  if (puVar6 != param_1 + 0x88 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x79] != 0) {
    piVar1 = (int *)(param_1[0x79] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x72);
    }
  }
  param_1[0x79] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  if (0 < *(int *)((long)param_1 + 0x394)) {
    lVar5 = 0;
    lVar7 = param_1[0x7a];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x394));
  }
  puVar6 = (undefined8 *)param_1[0x7b];
  if (puVar6 != param_1 + 0x7c && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x6d] != 0) {
    piVar1 = (int *)(param_1[0x6d] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x66);
    }
  }
  param_1[0x6d] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  if (0 < *(int *)((long)param_1 + 0x334)) {
    lVar5 = 0;
    lVar7 = param_1[0x6e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x334));
  }
  puVar6 = (undefined8 *)param_1[0x6f];
  if (puVar6 != param_1 + 0x70 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x61] != 0) {
    piVar1 = (int *)(param_1[0x61] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x5a);
    }
  }
  param_1[0x61] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  if (0 < *(int *)((long)param_1 + 0x2d4)) {
    lVar5 = 0;
    lVar7 = param_1[0x62];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2d4));
  }
  puVar6 = (undefined8 *)param_1[99];
  if (puVar6 != param_1 + 100 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x55] != 0) {
    piVar1 = (int *)(param_1[0x55] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x4e);
    }
  }
  param_1[0x55] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  if (0 < *(int *)((long)param_1 + 0x274)) {
    lVar5 = 0;
    lVar7 = param_1[0x56];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x274));
  }
  puVar6 = (undefined8 *)param_1[0x57];
  if (puVar6 != param_1 + 0x58 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x49] != 0) {
    piVar1 = (int *)(param_1[0x49] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x42);
    }
  }
  param_1[0x49] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  if (0 < *(int *)((long)param_1 + 0x214)) {
    lVar5 = 0;
    lVar7 = param_1[0x4a];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x214));
  }
  puVar6 = (undefined8 *)param_1[0x4b];
  if (puVar6 != param_1 + 0x4c && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3d] != 0) {
    piVar1 = (int *)(param_1[0x3d] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x36);
    }
  }
  param_1[0x3d] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  if (0 < *(int *)((long)param_1 + 0x1b4)) {
    lVar5 = 0;
    lVar7 = param_1[0x3e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1b4));
  }
  puVar6 = (undefined8 *)param_1[0x3f];
  if (puVar6 != param_1 + 0x40 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x31] != 0) {
    piVar1 = (int *)(param_1[0x31] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x2a);
    }
  }
  param_1[0x31] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  if (0 < *(int *)((long)param_1 + 0x154)) {
    lVar5 = 0;
    lVar7 = param_1[0x32];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x154));
  }
  puVar6 = (undefined8 *)param_1[0x33];
  if (puVar6 != param_1 + 0x34 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_10939526c(param_1 + 0x27);
  FUN_10939526c(param_1 + 0x24);
  FUN_10939526c(param_1 + 0x21);
  FUN_10939526c(param_1 + 0x1e);
  FUN_10939526c(param_1 + 0x1b);
  FUN_10939526c(param_1 + 0x18);
  func_0x0001093952d4(param_1 + 0x15);
  func_0x0001093952d4(param_1 + 0x12);
  func_0x00010939533c(param_1 + 0xf);
  func_0x00010939533c(param_1 + 0xc);
  func_0x00010939533c(param_1 + 9);
  return param_1;
}



/* Entry: 109395efc; end: 109395f4f;  */

long * FUN_109395efc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109395f50; end: 109396207;  */

undefined8 * FUN_109395f50(undefined8 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 auStack_50 [2];
  
  if ((*param_2 & 0xfff) == 5) {
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
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
        func_0x000109a848d4(param_1);
      }
    }
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar6 = 0;
      lVar7 = param_1[8];
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 4));
    }
    puVar10 = param_2 + 1;
    uVar5 = *puVar10;
    uVar11 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 4);
    param_1[3] = *(undefined8 *)(param_2 + 6);
    param_1[2] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 8);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[4] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 0xc);
    param_1[7] = *(undefined8 *)(param_2 + 0xe);
    param_1[6] = uVar11;
    puVar8 = (undefined8 *)param_1[9];
    puVar9 = param_1 + 10;
    if (puVar8 != puVar9) {
      if (puVar8 != (undefined8 *)0x0) {
        _free(puVar8[-1]);
        uVar5 = *puVar10;
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar9;
      puVar8 = puVar9;
    }
    puVar9 = *(undefined8 **)(param_2 + 0x12);
    if ((int)uVar5 < 3) {
      *puVar8 = *puVar9;
      puVar8[1] = puVar9[1];
    }
    else {
      param_1[9] = puVar9;
      param_1[8] = *(undefined8 *)(param_2 + 0x10);
      *(uint **)(param_2 + 0x10) = param_2 + 2;
      *(uint **)(param_2 + 0x12) = param_2 + 0x14;
    }
    *param_2 = 0x42ff0000;
    param_2[3] = 0;
    param_2[4] = 0;
    puVar10[0] = 0;
    puVar10[1] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
  }
  else if ((*param_2 & 7) == 5) {
    FUN_109a9ad84(&uStack_a0,param_2,1,param_2[1],0);
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
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
        func_0x000109a848d4(param_1);
      }
    }
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar6 = 0;
      lVar7 = param_1[8];
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 4));
    }
    param_1[1] = puStack_98;
    *param_1 = CONCAT44(iStack_9c,uStack_a0);
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    puVar8 = (undefined8 *)param_1[9];
    puVar9 = param_1 + 10;
    if (puVar8 != puVar9) {
      if (puVar8 != (undefined8 *)0x0) {
        _free(puVar8[-1]);
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar9;
      puVar8 = puVar9;
    }
    if (iStack_9c < 3) {
      puVar9 = (undefined8 *)((ulong)&uStack_a0 | 4);
      *puVar8 = *puStack_58;
      puVar8[1] = puStack_58[1];
      uStack_a0 = 0x42ff0000;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      *(undefined8 *)((long)puVar9 + 0x34) = 0;
      *(undefined8 *)((long)puVar9 + 0x2c) = 0;
      if (puStack_58 != auStack_50) {
        _free(puStack_58[-1]);
      }
    }
    else {
      param_1[8] = uStack_60;
      param_1[9] = puStack_58;
    }
  }
  else {
    uStack_a0 = 0x82010005;
    uStack_90 = 0;
    puStack_98 = param_1;
    FUN_109a41858(0x3ff0000000000000,0,param_2,&uStack_a0,5);
  }
  return param_1;
}



/* Entry: 109396208; end: 1093964b3;  */

undefined8 * FUN_109396208(undefined8 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 auStack_50 [2];
  
  if ((*param_2 & 0xfff) == 0) {
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
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
        func_0x000109a848d4(param_1);
      }
    }
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar6 = 0;
      lVar8 = param_1[8];
      do {
        *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 4));
    }
    puVar10 = param_2 + 1;
    uVar5 = *puVar10;
    uVar11 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 4);
    param_1[3] = *(undefined8 *)(param_2 + 6);
    param_1[2] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 8);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[4] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 0xc);
    param_1[7] = *(undefined8 *)(param_2 + 0xe);
    param_1[6] = uVar11;
    puVar9 = (undefined8 *)param_1[9];
    puVar7 = param_1 + 10;
    if (puVar9 != puVar7) {
      if (puVar9 != (undefined8 *)0x0) {
        _free(puVar9[-1]);
        uVar5 = *puVar10;
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar7;
      puVar9 = puVar7;
    }
    puVar7 = *(undefined8 **)(param_2 + 0x12);
    if ((int)uVar5 < 3) {
      *puVar9 = *puVar7;
      puVar9[1] = puVar7[1];
    }
    else {
      param_1[9] = puVar7;
      param_1[8] = *(undefined8 *)(param_2 + 0x10);
      *(uint **)(param_2 + 0x10) = param_2 + 2;
      *(uint **)(param_2 + 0x12) = param_2 + 0x14;
    }
    *param_2 = 0x42ff0000;
    param_2[3] = 0;
    param_2[4] = 0;
    puVar10[0] = 0;
    puVar10[1] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
  }
  else if ((*param_2 & 7) == 0) {
    FUN_109a9ad84(&uStack_a0,param_2,1,param_2[1],0);
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
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
        func_0x000109a848d4(param_1);
      }
    }
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar6 = 0;
      lVar8 = param_1[8];
      do {
        *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 4));
    }
    param_1[1] = puStack_98;
    *param_1 = CONCAT44(iStack_9c,uStack_a0);
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    puVar9 = (undefined8 *)param_1[9];
    puVar7 = param_1 + 10;
    if (puVar9 != puVar7) {
      if (puVar9 != (undefined8 *)0x0) {
        _free(puVar9[-1]);
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar7;
      puVar9 = puVar7;
    }
    if (iStack_9c < 3) {
      puVar7 = (undefined8 *)((ulong)&uStack_a0 | 4);
      *puVar9 = *puStack_58;
      puVar9[1] = puStack_58[1];
      uStack_a0 = 0x42ff0000;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined8 *)((long)puVar7 + 0x2c) = 0;
      if (puStack_58 != auStack_50) {
        _free(puStack_58[-1]);
      }
    }
    else {
      param_1[8] = uStack_60;
      param_1[9] = puStack_58;
    }
  }
  else {
    uStack_a0 = 0x82010000;
    uStack_90 = 0;
    puStack_98 = param_1;
    FUN_109a41858(0x3ff0000000000000,0,param_2,&uStack_a0,0);
  }
  return param_1;
}



/* Entry: 1093964b4; end: 1093964bb;  */

void FUN_1093964b4(void)

{
  return;
}



/* Entry: 1093964bc; end: 1093964f7;  */

void FUN_1093964bc(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001093964f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 1093964f8; end: 10939654b;  */

long * FUN_1093964f8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 10939654c; end: 109396e3f;  */

void FUN_10939654c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af4fc8;
  param_1[1] = 0x500000005;
  param_1[3] = 0x4120000040a00000;
  param_1[2] = 0x41a000003fcccccd;
  param_1[4] = 0x3a83126f3dcccccd;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = param_1 + 6;
  param_1[0xe] = param_1 + 0xf;
  *(undefined4 *)(param_1 + 5) = 0x42ff0005;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = param_1 + 0x12;
  param_1[0x1a] = param_1 + 0x1b;
  *(undefined4 *)(param_1 + 0x11) = 0x42ff0005;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  param_1[0x25] = param_1 + 0x1e;
  param_1[0x26] = param_1 + 0x27;
  *(undefined4 *)(param_1 + 0x1d) = 0x42ff0005;
  param_1[0x31] = param_1 + 0x2a;
  param_1[0x32] = param_1 + 0x33;
  *(undefined4 *)(param_1 + 0x29) = 0x42ff0005;
  param_1[0x3d] = param_1 + 0x36;
  param_1[0x3e] = param_1 + 0x3f;
  *(undefined4 *)(param_1 + 0x35) = 0x42ff0005;
  param_1[0x49] = param_1 + 0x42;
  param_1[0x4a] = param_1 + 0x4b;
  *(undefined4 *)(param_1 + 0x41) = 0x42ff0005;
  param_1[0x55] = param_1 + 0x4e;
  param_1[0x56] = param_1 + 0x57;
  *(undefined4 *)(param_1 + 0x4d) = 0x42ff0005;
  param_1[0x61] = param_1 + 0x5a;
  param_1[0x62] = param_1 + 99;
  *(undefined4 *)(param_1 + 0x59) = 0x42ff0005;
  param_1[0x6d] = param_1 + 0x66;
  param_1[0x6e] = param_1 + 0x6f;
  *(undefined4 *)(param_1 + 0x65) = 0x42ff0005;
  param_1[0x79] = param_1 + 0x72;
  param_1[0x7a] = param_1 + 0x7b;
  *(undefined4 *)(param_1 + 0x71) = 0x42ff0005;
  param_1[0x87] = param_1 + 0x80;
  param_1[0x88] = param_1 + 0x89;
  *(undefined4 *)(param_1 + 0x7f) = 0x42ff0005;
  param_1[0x93] = param_1 + 0x8c;
  param_1[0x94] = param_1 + 0x95;
  *(undefined4 *)(param_1 + 0x8b) = 0x42ff0005;
  param_1[0xa1] = param_1 + 0x9a;
  param_1[0xa2] = param_1 + 0xa3;
  *(undefined4 *)(param_1 + 0x99) = 0x42ff0005;
  param_1[0xad] = param_1 + 0xa6;
  param_1[0xae] = param_1 + 0xaf;
  *(undefined4 *)(param_1 + 0xa5) = 0x42ff0005;
  param_1[0xbb] = param_1 + 0xb4;
  param_1[0xbc] = param_1 + 0xbd;
  *(undefined4 *)(param_1 + 0xb3) = 0x42ff0005;
  param_1[199] = param_1 + 0xc0;
  param_1[200] = param_1 + 0xc9;
  *(undefined4 *)(param_1 + 0xbf) = 0x42ff0005;
  param_1[0xd5] = param_1 + 0xce;
  param_1[0xe1] = param_1 + 0xda;
  param_1[0xef] = param_1 + 0xe8;
  param_1[0xfb] = param_1 + 0xf4;
  param_1[0x109] = param_1 + 0x102;
  param_1[0x115] = param_1 + 0x10e;
  param_1[0x123] = param_1 + 0x11c;
  param_1[0x12f] = param_1 + 0x128;
  param_1[0x13d] = param_1 + 0x136;
  param_1[0x149] = param_1 + 0x142;
  param_1[0x157] = param_1 + 0x150;
  param_1[0x163] = param_1 + 0x15c;
  param_1[0x171] = param_1 + 0x16a;
  param_1[0x17d] = param_1 + 0x176;
  param_1[0x18b] = param_1 + 0x184;
  param_1[0x197] = param_1 + 400;
  param_1[0x1a5] = param_1 + 0x19e;
  param_1[0x1b1] = param_1 + 0x1aa;
  param_1[0x1bf] = param_1 + 0x1b8;
  param_1[0x1cb] = param_1 + 0x1c4;
  param_1[0x1d9] = param_1 + 0x1d2;
  param_1[0x1e5] = param_1 + 0x1de;
  param_1[0x1f1] = param_1 + 0x1ea;
  param_1[0x1fd] = param_1 + 0x1f6;
  param_1[0x20b] = param_1 + 0x204;
  param_1[0x20c] = param_1 + 0x20d;
  param_1[0x20e] = 0;
  param_1[0x20d] = 0;
  param_1[0x217] = param_1 + 0x210;
  param_1[0x218] = param_1 + 0x219;
  param_1[0x21a] = 0;
  param_1[0x219] = 0;
  param_1[0x225] = param_1 + 0x21e;
  param_1[0x226] = param_1 + 0x227;
  param_1[0x228] = 0;
  param_1[0x227] = 0;
  param_1[0x231] = param_1 + 0x22a;
  param_1[0x232] = param_1 + 0x233;
  param_1[0x234] = 0;
  param_1[0x233] = 0;
  param_1[0x23f] = param_1 + 0x238;
  param_1[0x240] = param_1 + 0x241;
  param_1[0x242] = 0;
  param_1[0x241] = 0;
  param_1[0x24b] = param_1 + 0x244;
  param_1[0x24c] = param_1 + 0x24d;
  param_1[0x24e] = 0;
  param_1[0x24d] = 0;
  param_1[0x259] = param_1 + 0x252;
  param_1[0x25a] = param_1 + 0x25b;
  param_1[0x25c] = 0;
  param_1[0x25b] = 0;
  param_1[0x265] = param_1 + 0x25e;
  param_1[0x266] = param_1 + 0x267;
  param_1[0x268] = 0;
  param_1[0x267] = 0;
  param_1[0x273] = param_1 + 0x26c;
  param_1[0x274] = param_1 + 0x275;
  param_1[0x276] = 0;
  param_1[0x275] = 0;
  param_1[0x27f] = param_1 + 0x278;
  param_1[0x280] = param_1 + 0x281;
  param_1[0x282] = 0;
  param_1[0x281] = 0;
  param_1[0xd6] = param_1 + 0xd7;
  *(undefined4 *)(param_1 + 0xcd) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0xd9) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0xe7) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0xf3) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x101) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x10d) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x11b) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x127) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x135) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x141) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x14f) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x15b) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x169) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x175) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x183) = 0x42ff0005;
  *(undefined4 *)(param_1 + 399) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x19d) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x1a9) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x1b7) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x1c3) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x1d1) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x1dd) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x1e9) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x1f5) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x203) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x20f) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x21d) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x229) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x237) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x243) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x251) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x25d) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x26b) = 0x42ff0005;
  *(undefined4 *)(param_1 + 0x277) = 0x42ff0005;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0xe2] = param_1 + 0xe3;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0xf0] = param_1 + 0xf1;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  *(undefined8 *)((long)param_1 + 0x1cc) = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0xfc] = param_1 + 0xfd;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x10a] = param_1 + 0x10b;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((long)param_1 + 0x284) = 0;
  *(undefined8 *)((long)param_1 + 0x27c) = 0;
  *(undefined8 *)((long)param_1 + 0x294) = 0;
  *(undefined8 *)((long)param_1 + 0x28c) = 0;
  *(undefined8 *)((long)param_1 + 0x274) = 0;
  *(undefined8 *)((long)param_1 + 0x26c) = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x116] = param_1 + 0x117;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  *(undefined8 *)((long)param_1 + 0x2e4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2f4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ec) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x124] = param_1 + 0x125;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  *(undefined8 *)((long)param_1 + 0x344) = 0;
  *(undefined8 *)((long)param_1 + 0x33c) = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  *(undefined8 *)((long)param_1 + 0x334) = 0;
  *(undefined8 *)((long)param_1 + 0x32c) = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x130] = param_1 + 0x131;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  *(undefined8 *)((long)param_1 + 0x39c) = 0;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  *(undefined8 *)((long)param_1 + 0x38c) = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x13e] = param_1 + 0x13f;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined8 *)((long)param_1 + 0x40c) = 0;
  *(undefined8 *)((long)param_1 + 0x424) = 0;
  *(undefined8 *)((long)param_1 + 0x41c) = 0;
  *(undefined8 *)((long)param_1 + 0x404) = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x14a] = param_1 + 0x14b;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  *(undefined8 *)((long)param_1 + 0x474) = 0;
  *(undefined8 *)((long)param_1 + 0x46c) = 0;
  *(undefined8 *)((long)param_1 + 0x484) = 0;
  *(undefined8 *)((long)param_1 + 0x47c) = 0;
  *(undefined8 *)((long)param_1 + 0x464) = 0;
  *(undefined8 *)((long)param_1 + 0x45c) = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x158] = param_1 + 0x159;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  *(undefined8 *)((long)param_1 + 0x4e4) = 0;
  *(undefined8 *)((long)param_1 + 0x4dc) = 0;
  *(undefined8 *)((long)param_1 + 0x4f4) = 0;
  *(undefined8 *)((long)param_1 + 0x4ec) = 0;
  *(undefined8 *)((long)param_1 + 0x4d4) = 0;
  *(undefined8 *)((long)param_1 + 0x4cc) = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0x164] = param_1 + 0x165;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  *(undefined8 *)((long)param_1 + 0x544) = 0;
  *(undefined8 *)((long)param_1 + 0x53c) = 0;
  *(undefined8 *)((long)param_1 + 0x554) = 0;
  *(undefined8 *)((long)param_1 + 0x54c) = 0;
  *(undefined8 *)((long)param_1 + 0x534) = 0;
  *(undefined8 *)((long)param_1 + 0x52c) = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0x172] = param_1 + 0x173;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  *(undefined8 *)((long)param_1 + 0x5b4) = 0;
  *(undefined8 *)((long)param_1 + 0x5ac) = 0;
  *(undefined8 *)((long)param_1 + 0x5c4) = 0;
  *(undefined8 *)((long)param_1 + 0x5bc) = 0;
  *(undefined8 *)((long)param_1 + 0x5a4) = 0;
  *(undefined8 *)((long)param_1 + 0x59c) = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0x17e] = param_1 + 0x17f;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  *(undefined8 *)((long)param_1 + 0x614) = 0;
  *(undefined8 *)((long)param_1 + 0x60c) = 0;
  *(undefined8 *)((long)param_1 + 0x624) = 0;
  *(undefined8 *)((long)param_1 + 0x61c) = 0;
  *(undefined8 *)((long)param_1 + 0x604) = 0;
  *(undefined8 *)((long)param_1 + 0x5fc) = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[0x18c] = param_1 + 0x18d;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((long)param_1 + 0x684) = 0;
  *(undefined8 *)((long)param_1 + 0x67c) = 0;
  *(undefined8 *)((long)param_1 + 0x694) = 0;
  *(undefined8 *)((long)param_1 + 0x68c) = 0;
  *(undefined8 *)((long)param_1 + 0x674) = 0;
  *(undefined8 *)((long)param_1 + 0x66c) = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0x198] = param_1 + 0x199;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  *(undefined8 *)((long)param_1 + 0x6e4) = 0;
  *(undefined8 *)((long)param_1 + 0x6dc) = 0;
  *(undefined8 *)((long)param_1 + 0x6f4) = 0;
  *(undefined8 *)((long)param_1 + 0x6ec) = 0;
  *(undefined8 *)((long)param_1 + 0x6d4) = 0;
  *(undefined8 *)((long)param_1 + 0x6cc) = 0;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  param_1[0x1a6] = param_1 + 0x1a7;
  param_1[0xee] = 0;
  param_1[0xed] = 0;
  *(undefined8 *)((long)param_1 + 0x754) = 0;
  *(undefined8 *)((long)param_1 + 0x74c) = 0;
  *(undefined8 *)((long)param_1 + 0x764) = 0;
  *(undefined8 *)((long)param_1 + 0x75c) = 0;
  *(undefined8 *)((long)param_1 + 0x744) = 0;
  *(undefined8 *)((long)param_1 + 0x73c) = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0x1b2] = param_1 + 0x1b3;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  *(undefined8 *)((long)param_1 + 0x7b4) = 0;
  *(undefined8 *)((long)param_1 + 0x7ac) = 0;
  *(undefined8 *)((long)param_1 + 0x7c4) = 0;
  *(undefined8 *)((long)param_1 + 0x7bc) = 0;
  *(undefined8 *)((long)param_1 + 0x7a4) = 0;
  *(undefined8 *)((long)param_1 + 0x79c) = 0;
  param_1[0xfe] = 0;
  param_1[0xfd] = 0;
  param_1[0x1c0] = param_1 + 0x1c1;
  param_1[0x108] = 0;
  param_1[0x107] = 0;
  *(undefined8 *)((long)param_1 + 0x824) = 0;
  *(undefined8 *)((long)param_1 + 0x81c) = 0;
  *(undefined8 *)((long)param_1 + 0x834) = 0;
  *(undefined8 *)((long)param_1 + 0x82c) = 0;
  *(undefined8 *)((long)param_1 + 0x814) = 0;
  *(undefined8 *)((long)param_1 + 0x80c) = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x1cc] = param_1 + 0x1cd;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  *(undefined8 *)((long)param_1 + 0x884) = 0;
  *(undefined8 *)((long)param_1 + 0x87c) = 0;
  *(undefined8 *)((long)param_1 + 0x894) = 0;
  *(undefined8 *)((long)param_1 + 0x88c) = 0;
  *(undefined8 *)((long)param_1 + 0x874) = 0;
  *(undefined8 *)((long)param_1 + 0x86c) = 0;
  param_1[0x118] = 0;
  param_1[0x117] = 0;
  param_1[0x1da] = param_1 + 0x1db;
  param_1[0x122] = 0;
  param_1[0x121] = 0;
  *(undefined8 *)((long)param_1 + 0x8f4) = 0;
  *(undefined8 *)((long)param_1 + 0x8ec) = 0;
  *(undefined8 *)((long)param_1 + 0x904) = 0;
  *(undefined8 *)((long)param_1 + 0x8fc) = 0;
  *(undefined8 *)((long)param_1 + 0x8e4) = 0;
  *(undefined8 *)((long)param_1 + 0x8dc) = 0;
  param_1[0x126] = 0;
  param_1[0x125] = 0;
  param_1[0x1e6] = param_1 + 0x1e7;
  param_1[0x12e] = 0;
  param_1[0x12d] = 0;
  *(undefined8 *)((long)param_1 + 0x954) = 0;
  *(undefined8 *)((long)param_1 + 0x94c) = 0;
  *(undefined8 *)((long)param_1 + 0x964) = 0;
  *(undefined8 *)((long)param_1 + 0x95c) = 0;
  *(undefined8 *)((long)param_1 + 0x944) = 0;
  *(undefined8 *)((long)param_1 + 0x93c) = 0;
  param_1[0x132] = 0;
  param_1[0x131] = 0;
  param_1[0x1f2] = param_1 + 499;
  param_1[0x13c] = 0;
  param_1[0x13b] = 0;
  *(undefined8 *)((long)param_1 + 0x9c4) = 0;
  *(undefined8 *)((long)param_1 + 0x9bc) = 0;
  *(undefined8 *)((long)param_1 + 0x9d4) = 0;
  *(undefined8 *)((long)param_1 + 0x9cc) = 0;
  *(undefined8 *)((long)param_1 + 0x9b4) = 0;
  *(undefined8 *)((long)param_1 + 0x9ac) = 0;
  param_1[0x140] = 0;
  param_1[0x13f] = 0;
  param_1[0x1fe] = param_1 + 0x1ff;
  param_1[0x148] = 0;
  param_1[0x147] = 0;
  *(undefined8 *)((long)param_1 + 0xa24) = 0;
  *(undefined8 *)((long)param_1 + 0xa1c) = 0;
  *(undefined8 *)((long)param_1 + 0xa34) = 0;
  *(undefined8 *)((long)param_1 + 0xa2c) = 0;
  *(undefined8 *)((long)param_1 + 0xa14) = 0;
  *(undefined8 *)((long)param_1 + 0xa0c) = 0;
  param_1[0x14c] = 0;
  param_1[0x14b] = 0;
  param_1[0x156] = 0;
  param_1[0x155] = 0;
  *(undefined8 *)((long)param_1 + 0xa94) = 0;
  *(undefined8 *)((long)param_1 + 0xa8c) = 0;
  *(undefined8 *)((long)param_1 + 0xaa4) = 0;
  *(undefined8 *)((long)param_1 + 0xa9c) = 0;
  *(undefined8 *)((long)param_1 + 0xa84) = 0;
  *(undefined8 *)((long)param_1 + 0xa7c) = 0;
  param_1[0x15a] = 0;
  param_1[0x159] = 0;
  param_1[0x162] = 0;
  param_1[0x161] = 0;
  *(undefined8 *)((long)param_1 + 0xaf4) = 0;
  *(undefined8 *)((long)param_1 + 0xaec) = 0;
  *(undefined8 *)((long)param_1 + 0xb04) = 0;
  *(undefined8 *)((long)param_1 + 0xafc) = 0;
  *(undefined8 *)((long)param_1 + 0xae4) = 0;
  *(undefined8 *)((long)param_1 + 0xadc) = 0;
  param_1[0x166] = 0;
  param_1[0x165] = 0;
  param_1[0x170] = 0;
  param_1[0x16f] = 0;
  *(undefined8 *)((long)param_1 + 0xb64) = 0;
  *(undefined8 *)((long)param_1 + 0xb5c) = 0;
  *(undefined8 *)((long)param_1 + 0xb74) = 0;
  *(undefined8 *)((long)param_1 + 0xb6c) = 0;
  *(undefined8 *)((long)param_1 + 0xb54) = 0;
  *(undefined8 *)((long)param_1 + 0xb4c) = 0;
  param_1[0x174] = 0;
  param_1[0x173] = 0;
  param_1[0x17c] = 0;
  param_1[0x17b] = 0;
  *(undefined8 *)((long)param_1 + 0xbc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbbc) = 0;
  *(undefined8 *)((long)param_1 + 0xbd4) = 0;
  *(undefined8 *)((long)param_1 + 0xbcc) = 0;
  *(undefined8 *)((long)param_1 + 0xbb4) = 0;
  *(undefined8 *)((long)param_1 + 0xbac) = 0;
  param_1[0x180] = 0;
  param_1[0x17f] = 0;
  param_1[0x18a] = 0;
  param_1[0x189] = 0;
  *(undefined8 *)((long)param_1 + 0xc34) = 0;
  *(undefined8 *)((long)param_1 + 0xc2c) = 0;
  *(undefined8 *)((long)param_1 + 0xc44) = 0;
  *(undefined8 *)((long)param_1 + 0xc3c) = 0;
  *(undefined8 *)((long)param_1 + 0xc24) = 0;
  *(undefined8 *)((long)param_1 + 0xc1c) = 0;
  param_1[0x18e] = 0;
  param_1[0x18d] = 0;
  param_1[0x196] = 0;
  param_1[0x195] = 0;
  *(undefined8 *)((long)param_1 + 0xc94) = 0;
  *(undefined8 *)((long)param_1 + 0xc8c) = 0;
  *(undefined8 *)((long)param_1 + 0xca4) = 0;
  *(undefined8 *)((long)param_1 + 0xc9c) = 0;
  *(undefined8 *)((long)param_1 + 0xc84) = 0;
  *(undefined8 *)((long)param_1 + 0xc7c) = 0;
  param_1[0x19a] = 0;
  param_1[0x199] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a3] = 0;
  *(undefined8 *)((long)param_1 + 0xd04) = 0;
  *(undefined8 *)((long)param_1 + 0xcfc) = 0;
  *(undefined8 *)((long)param_1 + 0xd14) = 0;
  *(undefined8 *)((long)param_1 + 0xd0c) = 0;
  *(undefined8 *)((long)param_1 + 0xcf4) = 0;
  *(undefined8 *)((long)param_1 + 0xcec) = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1af] = 0;
  *(undefined8 *)((long)param_1 + 0xd64) = 0;
  *(undefined8 *)((long)param_1 + 0xd5c) = 0;
  *(undefined8 *)((long)param_1 + 0xd74) = 0;
  *(undefined8 *)((long)param_1 + 0xd6c) = 0;
  *(undefined8 *)((long)param_1 + 0xd54) = 0;
  *(undefined8 *)((long)param_1 + 0xd4c) = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1be] = 0;
  param_1[0x1bd] = 0;
  *(undefined8 *)((long)param_1 + 0xdd4) = 0;
  *(undefined8 *)((long)param_1 + 0xdcc) = 0;
  *(undefined8 *)((long)param_1 + 0xde4) = 0;
  *(undefined8 *)((long)param_1 + 0xddc) = 0;
  *(undefined8 *)((long)param_1 + 0xdc4) = 0;
  *(undefined8 *)((long)param_1 + 0xdbc) = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1c9] = 0;
  *(undefined8 *)((long)param_1 + 0xe34) = 0;
  *(undefined8 *)((long)param_1 + 0xe2c) = 0;
  *(undefined8 *)((long)param_1 + 0xe44) = 0;
  *(undefined8 *)((long)param_1 + 0xe3c) = 0;
  *(undefined8 *)((long)param_1 + 0xe24) = 0;
  *(undefined8 *)((long)param_1 + 0xe1c) = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d7] = 0;
  *(undefined8 *)((long)param_1 + 0xea4) = 0;
  *(undefined8 *)((long)param_1 + 0xe9c) = 0;
  *(undefined8 *)((long)param_1 + 0xeb4) = 0;
  *(undefined8 *)((long)param_1 + 0xeac) = 0;
  *(undefined8 *)((long)param_1 + 0xe94) = 0;
  *(undefined8 *)((long)param_1 + 0xe8c) = 0;
  param_1[0x1dc] = 0;
  param_1[0x1db] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e3] = 0;
  *(undefined8 *)((long)param_1 + 0xf04) = 0;
  *(undefined8 *)((long)param_1 + 0xefc) = 0;
  *(undefined8 *)((long)param_1 + 0xf14) = 0;
  *(undefined8 *)((long)param_1 + 0xf0c) = 0;
  *(undefined8 *)((long)param_1 + 0xef4) = 0;
  *(undefined8 *)((long)param_1 + 0xeec) = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1ef] = 0;
  *(undefined8 *)((long)param_1 + 0xf64) = 0;
  *(undefined8 *)((long)param_1 + 0xf5c) = 0;
  *(undefined8 *)((long)param_1 + 0xf74) = 0;
  *(undefined8 *)((long)param_1 + 0xf6c) = 0;
  *(undefined8 *)((long)param_1 + 0xf54) = 0;
  *(undefined8 *)((long)param_1 + 0xf4c) = 0;
  param_1[500] = 0;
  param_1[499] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fb] = 0;
  *(undefined8 *)((long)param_1 + 0xfc4) = 0;
  *(undefined8 *)((long)param_1 + 0xfbc) = 0;
  *(undefined8 *)((long)param_1 + 0xfd4) = 0;
  *(undefined8 *)((long)param_1 + 0xfcc) = 0;
  *(undefined8 *)((long)param_1 + 0xfb4) = 0;
  *(undefined8 *)((long)param_1 + 0xfac) = 0;
  param_1[0x200] = 0;
  param_1[0x1ff] = 0;
  param_1[0x20a] = 0;
  param_1[0x209] = 0;
  *(undefined8 *)((long)param_1 + 0x1034) = 0;
  *(undefined8 *)((long)param_1 + 0x102c) = 0;
  *(undefined8 *)((long)param_1 + 0x1044) = 0;
  *(undefined8 *)((long)param_1 + 0x103c) = 0;
  *(undefined8 *)((long)param_1 + 0x1024) = 0;
  *(undefined8 *)((long)param_1 + 0x101c) = 0;
  param_1[0x216] = 0;
  param_1[0x215] = 0;
  *(undefined8 *)((long)param_1 + 0x1094) = 0;
  *(undefined8 *)((long)param_1 + 0x108c) = 0;
  *(undefined8 *)((long)param_1 + 0x10a4) = 0;
  *(undefined8 *)((long)param_1 + 0x109c) = 0;
  *(undefined8 *)((long)param_1 + 0x1084) = 0;
  *(undefined8 *)((long)param_1 + 0x107c) = 0;
  param_1[0x224] = 0;
  param_1[0x223] = 0;
  *(undefined8 *)((long)param_1 + 0x1104) = 0;
  *(undefined8 *)((long)param_1 + 0x10fc) = 0;
  *(undefined8 *)((long)param_1 + 0x1114) = 0;
  *(undefined8 *)((long)param_1 + 0x110c) = 0;
  *(undefined8 *)((long)param_1 + 0x10f4) = 0;
  *(undefined8 *)((long)param_1 + 0x10ec) = 0;
  param_1[0x230] = 0;
  param_1[0x22f] = 0;
  *(undefined8 *)((long)param_1 + 0x1164) = 0;
  *(undefined8 *)((long)param_1 + 0x115c) = 0;
  *(undefined8 *)((long)param_1 + 0x1174) = 0;
  *(undefined8 *)((long)param_1 + 0x116c) = 0;
  *(undefined8 *)((long)param_1 + 0x1154) = 0;
  *(undefined8 *)((long)param_1 + 0x114c) = 0;
  param_1[0x23e] = 0;
  param_1[0x23d] = 0;
  *(undefined8 *)((long)param_1 + 0x11d4) = 0;
  *(undefined8 *)((long)param_1 + 0x11cc) = 0;
  *(undefined8 *)((long)param_1 + 0x11e4) = 0;
  *(undefined8 *)((long)param_1 + 0x11dc) = 0;
  *(undefined8 *)((long)param_1 + 0x11c4) = 0;
  *(undefined8 *)((long)param_1 + 0x11bc) = 0;
  param_1[0x24a] = 0;
  param_1[0x249] = 0;
  *(undefined8 *)((long)param_1 + 0x1234) = 0;
  *(undefined8 *)((long)param_1 + 0x122c) = 0;
  *(undefined8 *)((long)param_1 + 0x1244) = 0;
  *(undefined8 *)((long)param_1 + 0x123c) = 0;
  *(undefined8 *)((long)param_1 + 0x1224) = 0;
  *(undefined8 *)((long)param_1 + 0x121c) = 0;
  param_1[600] = 0;
  param_1[599] = 0;
  *(undefined8 *)((long)param_1 + 0x12a4) = 0;
  *(undefined8 *)((long)param_1 + 0x129c) = 0;
  *(undefined8 *)((long)param_1 + 0x12b4) = 0;
  *(undefined8 *)((long)param_1 + 0x12ac) = 0;
  *(undefined8 *)((long)param_1 + 0x1294) = 0;
  *(undefined8 *)((long)param_1 + 0x128c) = 0;
  param_1[0x264] = 0;
  param_1[0x263] = 0;
  *(undefined8 *)((long)param_1 + 0x1304) = 0;
  *(undefined8 *)((long)param_1 + 0x12fc) = 0;
  *(undefined8 *)((long)param_1 + 0x1314) = 0;
  *(undefined8 *)((long)param_1 + 0x130c) = 0;
  *(undefined8 *)((long)param_1 + 0x12f4) = 0;
  *(undefined8 *)((long)param_1 + 0x12ec) = 0;
  param_1[0x272] = 0;
  param_1[0x271] = 0;
  *(undefined8 *)((long)param_1 + 0x1374) = 0;
  *(undefined8 *)((long)param_1 + 0x136c) = 0;
  *(undefined8 *)((long)param_1 + 0x1384) = 0;
  *(undefined8 *)((long)param_1 + 0x137c) = 0;
  *(undefined8 *)((long)param_1 + 0x1364) = 0;
  *(undefined8 *)((long)param_1 + 0x135c) = 0;
  param_1[0x27e] = 0;
  param_1[0x27d] = 0;
  *(undefined8 *)((long)param_1 + 0x13d4) = 0;
  *(undefined8 *)((long)param_1 + 0x13cc) = 0;
  *(undefined8 *)((long)param_1 + 0x13e4) = 0;
  *(undefined8 *)((long)param_1 + 0x13dc) = 0;
  *(undefined8 *)((long)param_1 + 0x13c4) = 0;
  *(undefined8 *)((long)param_1 + 0x13bc) = 0;
  return;
}



/* Entry: 109396e40; end: 10939705b;  */

void FUN_109396e40(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  undefined4 *puVar22;
  ulong uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  
  uVar2 = *(uint *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  uVar9 = (uint)((double)iVar3 / 2.0);
  if ((int)uVar2 < 1) {
    lVar10 = *(long *)(param_1 + 0x10);
    lVar13 = **(long **)(param_1 + 0x48);
    lVar11 = *(long *)(param_1 + 0x70);
    lVar12 = **(long **)(param_1 + 0xa8);
  }
  else {
    lVar14 = *(long *)(param_2 + 0x10);
    lVar15 = **(long **)(param_2 + 0x48);
    lVar10 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)(param_1 + 0x70);
    lVar12 = **(long **)(param_1 + 0xa8);
    uVar5 = (ulong)((iVar3 - 2U >> 1) + 2);
    puVar6 = (undefined4 *)(lVar12 + lVar11 + 4);
    puVar7 = (undefined4 *)(lVar14 + 4);
    uVar4 = iVar3 - 2U >> 1;
    lVar13 = **(long **)(param_1 + 0x48);
    puVar8 = (undefined4 *)(lVar13 + lVar10 + 4);
    uVar19 = 0;
    do {
      puVar16 = (undefined4 *)(lVar14 + uVar19 * lVar15);
      uVar1 = uVar19 + 1;
      puVar17 = (undefined4 *)(lVar10 + uVar1 * lVar13);
      uVar26 = *puVar16;
      puVar18 = (undefined4 *)(lVar11 + uVar1 * lVar12);
      *puVar18 = uVar26;
      *puVar17 = uVar26;
      uVar23 = uVar5;
      if ((uVar19 & 1) == 0) {
        if (iVar3 < 2) {
LAB_109396f6c:
          uVar19 = 0;
          uVar23 = 1;
        }
        else {
          lVar21 = 0;
          puVar22 = puVar7;
          do {
            *(undefined4 *)((long)puVar8 + lVar21) = puVar22[-1];
            *(undefined4 *)((long)puVar6 + lVar21) = *puVar22;
            lVar21 = lVar21 + 4;
            uVar19 = (ulong)(uVar4 * 2 + 2);
            puVar22 = puVar22 + 2;
          } while ((ulong)uVar4 * 4 + 4 != lVar21);
        }
      }
      else {
        if (iVar3 < 2) goto LAB_109396f6c;
        uVar19 = 0;
        puVar22 = puVar8;
        puVar24 = puVar7;
        puVar25 = puVar6;
        do {
          *puVar25 = puVar24[-1];
          *puVar22 = *puVar24;
          uVar19 = uVar19 + 2;
          puVar22 = puVar22 + 1;
          puVar24 = puVar24 + 2;
          puVar25 = puVar25 + 1;
        } while ((ulong)uVar4 * 2 + 2 != uVar19);
      }
      iVar20 = (int)uVar19;
      if (iVar20 < iVar3) {
        uVar26 = puVar16[uVar19 & 0xffffffff];
        puVar18[uVar23] = uVar26;
        puVar17[uVar23] = uVar26;
      }
      else {
        iVar20 = iVar20 + -1;
      }
      uVar26 = puVar16[iVar20];
      puVar18[(int)(uVar9 + 1)] = uVar26;
      puVar17[(int)(uVar9 + 1)] = uVar26;
      puVar6 = (undefined4 *)((long)puVar6 + lVar12);
      puVar7 = (undefined4 *)((long)puVar7 + lVar15);
      puVar8 = (undefined4 *)((long)puVar8 + lVar13);
      uVar19 = uVar1;
    } while (uVar1 != uVar2);
  }
  iVar3 = *(int *)(param_1 + 8);
  iVar20 = *(int *)(param_1 + 0x68);
  uVar19 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
  _memcpy(lVar10 + lVar13 * ((long)iVar3 + -1),lVar11 + lVar12 * ((long)iVar20 + -2),uVar19 + 8);
  _memcpy(lVar11 + lVar12 * ((long)iVar20 + -1),lVar10 + lVar13 * ((long)iVar3 + -2),uVar19 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x70);
  lVar10 = **(long **)(param_1 + 0x48);
  _memcpy(lVar11,lVar12 + **(long **)(param_1 + 0xa8),uVar19 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(lVar12,lVar11 + lVar10,uVar19 + 8);
  return;
}



/* Entry: 10939705c; end: 1093971af;  */

void FUN_10939705c(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined4 *puVar18;
  ulong uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar2) {
    lVar10 = *(long *)(param_2 + 0x10);
    lVar11 = **(long **)(param_2 + 0x48);
    lVar12 = *(long *)(param_2 + 0x70);
    lVar13 = **(long **)(param_2 + 0xa8);
    lVar14 = *(long *)(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0xc);
    uVar15 = (ulong)((iVar3 - 2U >> 1) + 2);
    puVar16 = (undefined4 *)(lVar13 + lVar12 + 4);
    puVar5 = (undefined4 *)(lVar14 + 4);
    uVar4 = iVar3 - 2U >> 1;
    lVar6 = **(long **)(param_1 + 0x48);
    puVar7 = (undefined4 *)(lVar11 + lVar10 + 4);
    uVar17 = 0;
    do {
      uVar1 = uVar17 + 1;
      uVar19 = uVar15;
      if ((uVar17 & 1) == 0) {
        if (iVar3 < 2) {
          uVar9 = 0;
          uVar19 = 1;
        }
        else {
          lVar8 = 0;
          puVar18 = puVar5;
          do {
            puVar18[-1] = *(undefined4 *)((long)puVar7 + lVar8);
            *puVar18 = *(undefined4 *)((long)puVar16 + lVar8);
            lVar8 = lVar8 + 4;
            uVar9 = (ulong)(uVar4 * 2 + 2);
            puVar18 = puVar18 + 2;
          } while ((ulong)uVar4 * 4 + 4 != lVar8);
        }
        if ((int)uVar9 < iVar3) {
          lVar8 = lVar10 + uVar1 * lVar11;
LAB_10939717c:
          *(undefined4 *)(lVar14 + uVar17 * lVar6 + (uVar9 & 0xffffffff) * 4) =
               *(undefined4 *)(lVar8 + uVar19 * 4);
        }
      }
      else {
        if (iVar3 < 2) {
          uVar9 = 0;
          uVar19 = 1;
        }
        else {
          uVar9 = 0;
          puVar18 = puVar7;
          puVar20 = puVar5;
          puVar21 = puVar16;
          do {
            puVar20[-1] = *puVar21;
            *puVar20 = *puVar18;
            uVar9 = uVar9 + 2;
            puVar18 = puVar18 + 1;
            puVar20 = puVar20 + 2;
            puVar21 = puVar21 + 1;
          } while ((ulong)uVar4 * 2 + 2 != uVar9);
        }
        if ((int)uVar9 < iVar3) {
          lVar8 = lVar12 + uVar1 * lVar13;
          goto LAB_10939717c;
        }
      }
      puVar16 = (undefined4 *)((long)puVar16 + lVar13);
      puVar5 = (undefined4 *)((long)puVar5 + lVar6);
      puVar7 = (undefined4 *)((long)puVar7 + lVar11);
      uVar17 = uVar1;
    } while (uVar1 != uVar2);
  }
  return;
}



/* Entry: 1093971b0; end: 1093972f3;  */

void FUN_1093971b0(long param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xc);
  lVar15 = *(long *)(param_1 + 0x10);
  lVar17 = **(long **)(param_1 + 0x48);
  puVar16 = *(undefined4 **)(param_1 + 0x70);
  lVar18 = **(long **)(param_1 + 0xa8);
  if (2 < iVar3) {
    iVar4 = *(int *)(param_1 + 0xc0);
    iVar7 = *(int *)(param_1 + 0xc4);
    iVar5 = *(int *)(param_1 + 200);
    iVar8 = *(int *)(param_1 + 0xcc);
    puVar10 = (undefined4 *)(lVar17 + lVar15 + 4);
    uVar11 = 0;
    puVar9 = puVar16;
    do {
      puVar9 = (undefined4 *)((long)puVar9 + lVar18);
      uVar1 = uVar11 + 1;
      lVar13 = lVar15 + uVar1 * lVar17;
      if ((uVar11 & 1) == 0) {
        *puVar9 = *puVar10;
        puVar14 = (undefined4 *)((long)puVar16 + (long)iVar5 * 4 + uVar1 * lVar18);
        puVar2 = (undefined4 *)(lVar13 + (long)iVar4 * 4);
        puVar12 = puVar2;
        if (iVar5 < iVar4) {
          puVar12 = puVar14;
          puVar14 = puVar2;
        }
      }
      else {
        puVar10[-1] = puVar9[1];
        puVar14 = (undefined4 *)(lVar13 + (long)iVar7 * 4);
        puVar12 = puVar9 + iVar8;
        if (iVar7 < iVar8) {
          puVar12 = puVar14;
          puVar14 = puVar9 + iVar8;
        }
      }
      puVar12[1] = *puVar14;
      puVar10 = (undefined4 *)((long)puVar10 + lVar17);
      uVar11 = uVar1;
    } while (iVar3 - 2U != uVar1);
  }
  iVar4 = *(int *)(param_1 + 0x68);
  lVar13 = (long)iVar6 << 2;
  _memcpy(lVar15 + lVar17 * ((long)iVar3 + -1),
          (undefined4 *)((long)puVar16 + lVar18 * ((long)iVar4 + -2)),lVar13);
  _memcpy((undefined4 *)((long)puVar16 + lVar18 * ((long)iVar4 + -1)),
          lVar15 + lVar17 * (int)(iVar3 - 2U),lVar13);
  lVar17 = *(long *)(param_1 + 0x10);
  lVar18 = *(long *)(param_1 + 0x70);
  lVar15 = **(long **)(param_1 + 0x48);
  _memcpy(lVar17,lVar18 + **(long **)(param_1 + 0xa8),lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(lVar18,lVar17 + lVar15,lVar13);
  return;
}



/* Entry: 1093972f4; end: 10939741f;  */

void FUN_1093972f4(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uStack_50;
  uint uStack_4c;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = (uint)((double)(int)param_2 / 2.0);
  uVar1 = uVar10 + 2;
  uVar2 = param_3 + 2;
  puVar7 = param_1;
  if ((((2 < (int)param_1[1]) || (param_1[2] != uVar2)) || (param_1[3] != uVar1)) ||
     (((*param_1 & 0xfff) != 5 || (*(long *)(param_1 + 4) == 0)))) {
    uStack_50 = uVar2;
    uStack_4c = uVar1;
    FUN_109a83fd0(param_1,2,&uStack_50,5);
  }
  if (((2 < (int)param_1[0x19]) || (param_1[0x1a] != uVar2)) ||
     ((param_1[0x1b] != uVar1 ||
      (((param_1[0x18] & 0xfff) != 5 || (*(long *)(param_1 + 0x1c) == 0)))))) {
    puVar7 = param_1 + 0x18;
    uStack_50 = uVar2;
    uStack_4c = uVar1;
    FUN_109a83fd0(puVar7,2,&uStack_50,5);
  }
  uVar1 = uVar10 - (param_2 & 1);
  param_1[0x32] = uVar1;
  param_1[0x33] = uVar10;
  param_1[0x30] = uVar10;
  param_1[0x31] = uVar1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar7 + 0xe) != 0) {
    piVar3 = (int *)(*(long *)(puVar7 + 0xe) + 0x14);
    do {
      iVar4 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(puVar7);
    }
  }
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  if (0 < (int)puVar7[1]) {
    lVar8 = 0;
    lVar9 = *(long *)(puVar7 + 0x10);
    do {
      *(undefined4 *)(lVar9 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)puVar7[1]);
  }
  if (*(long *)(puVar7 + 0x26) != 0) {
    piVar3 = (int *)(*(long *)(puVar7 + 0x26) + 0x14);
    do {
      iVar4 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(puVar7 + 0x18);
    }
  }
  puVar7[0x26] = 0;
  puVar7[0x27] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x22] = 0;
  puVar7[0x23] = 0;
  puVar7[0x20] = 0;
  puVar7[0x21] = 0;
  if (0 < (int)puVar7[0x19]) {
    lVar8 = 0;
    lVar9 = *(long *)(puVar7 + 0x28);
    do {
      *(undefined4 *)(lVar9 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)puVar7[0x19]);
  }
  return;
}



/* Entry: 109397420; end: 1093974f3;  */

void FUN_109397420(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  return;
}



/* Entry: 1093974f4; end: 10939760b;  */

undefined8 *
FUN_1093974f4(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long *param_5,
             long *param_6)

{
  *param_1 = &PTR_FUN_110af5090;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_10939b84c(param_1 + 2,param_3,param_4,param_4 - param_3 >> 4);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10939b928(param_1 + 5,*param_5,param_5[1],param_5[1] - *param_5 >> 3);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_10939b928(param_1 + 8,*param_6,param_6[1],param_6[1] - *param_6 >> 3);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_10939b928();
  return param_1;
}



/* Entry: 10939760c; end: 109397817;  */

void FUN_10939760c(long param_1,int *param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)*param_2;
  if (*param_2 < param_2[1]) {
    lVar6 = lVar5 << 4;
    do {
      puVar1 = (ulong *)(*(long *)(param_1 + 0x10) + lVar6);
      pcVar4 = (code *)*puVar1;
      uVar3 = puVar1[1];
      plVar2 = (long *)(*(long *)(param_1 + 8) + ((long)uVar3 >> 1));
      if ((uVar3 & 1) != 0) {
        pcVar4 = *(code **)(*plVar2 + ((ulong)pcVar4 & 0xffffffff));
      }
      (*pcVar4)(plVar2,*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar5 * 8),
                *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar5 * 8),
                *(undefined8 *)(*(long *)(param_1 + 0x58) + lVar5 * 8));
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar5 < param_2[1]);
  }
  return;
}



/* Entry: 109397818; end: 1093978c3;  */

void FUN_109397818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined4 auStack_d8 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 auStack_c0 [2];
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0;
  auStack_48[0] = 0x1010000;
  uStack_50 = 0;
  auStack_60[0] = 0x1010000;
  auStack_78[0] = 0x2010000;
  uStack_68 = 0;
  auVar4 = NEON_fmov(0x3fe0000000000000,8);
  uStack_28 = auVar4._8_8_;
  uStack_30 = auVar4._0_8_;
  uStack_20 = 0;
  uStack_70 = param_4;
  uStack_58 = param_3;
  uStack_40 = param_2;
  FUN_109a91d90();
  puVar1 = auStack_48;
  puVar2 = auStack_60;
  puVar3 = auStack_78;
  FUN_109a293c4(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_88 = FUN_1093978c4;
  uStack_98 = 0;
  auStack_a8[0] = 0x1010000;
  uStack_b0 = 0;
  auStack_c0[0] = 0x1010000;
  auStack_d8[0] = 0x2010000;
  uStack_c8 = 0;
  uStack_d0 = param_1;
  puStack_b8 = puVar3;
  puStack_a0 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_109a91d90();
  FUN_109a293c4(auStack_a8,auStack_c0,auStack_d8,puVar1,5,&PTR_DAT_1132e8c10,0,0);
  return;
}



/* Entry: 1093978c4; end: 109397933;  */

void FUN_1093978c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  auStack_28[0] = 0x1010000;
  uStack_30 = 0;
  auStack_40[0] = 0x1010000;
  auStack_58[0] = 0x2010000;
  uStack_48 = 0;
  uStack_50 = param_4;
  uStack_38 = param_3;
  uStack_20 = param_2;
  FUN_109a91d90();
  FUN_109a293c4(auStack_28,auStack_40,auStack_58,param_1,5,&PTR_DAT_1132e8c10,0,0);
  return;
}



/* Entry: 109397934; end: 109397a87;  */

undefined8 * FUN_109397934(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af5090;
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109397a88; end: 109397f3b;  */

void FUN_109397a88(long param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  uVar6 = (long)*(int *)(param_1 + 0x14) * (long)*param_2;
  iVar5 = param_2[1] * *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar5 <= *(int *)(param_1 + 0x18)) {
    iVar2 = iVar5;
  }
  if ((int)uVar6 < iVar2) {
    lVar14 = *(long *)(param_1 + 8);
    fVar24 = *(float *)(lVar14 + 0x20) * *(float *)(lVar14 + 0x20);
    fVar25 = *(float *)(lVar14 + 0x24) * *(float *)(lVar14 + 0x24);
    fVar27 = *(float *)(lVar14 + 0x18);
    fVar26 = *(float *)(lVar14 + 0x1c);
    cVar4 = *(char *)(param_1 + 0x30);
    do {
      uVar1 = uVar6 + 1;
      if (cVar4 == '\0') {
        lVar15 = *(long *)(lVar14 + 0x398) + **(long **)(lVar14 + 0x3d0) * uVar1;
        lVar16 = *(long *)(lVar14 + 0x468) + **(long **)(lVar14 + 0x4a0) * uVar1;
        lVar8 = *(long *)(lVar14 + 0x538) + **(long **)(lVar14 + 0x570) * uVar1;
        lVar9 = *(long *)(lVar14 + 0x608) + **(long **)(lVar14 + 0x640) * uVar1;
        lVar10 = *(long *)(lVar14 + 0x6d8) + **(long **)(lVar14 + 0x710) * uVar1;
        lVar11 = *(long *)(lVar14 + 0x7a8) + **(long **)(lVar14 + 0x7e0) * uVar1;
        lVar12 = *(long *)(lVar14 + 0x878) + **(long **)(lVar14 + 0x8b0) * uVar1;
        lVar13 = *(long *)(lVar14 + 0x948) + **(long **)(lVar14 + 0x980) * uVar1;
        lVar17 = *(long *)(lVar14 + 0xa18) + **(long **)(lVar14 + 0xa50) * uVar1;
        lVar21 = *(long *)(lVar14 + 0xae8) + **(long **)(lVar14 + 0xb20) * uVar1;
        lVar20 = *(long *)(lVar14 + 3000) + **(long **)(lVar14 + 0xbf0) * uVar1;
        lVar19 = *(long *)(lVar14 + 0xc88) + **(long **)(lVar14 + 0xcc0) * uVar1;
        lVar18 = *(long *)(lVar14 + 0xd58) + **(long **)(lVar14 + 0xd90) * uVar1;
        lVar23 = *(long *)(*(long *)(param_1 + 0x20) + 0x70) +
                 **(long **)(*(long *)(param_1 + 0x20) + 0xa8) * uVar1;
        lVar22 = *(long *)(*(long *)(param_1 + 0x28) + 0x70) +
                 **(long **)(*(long *)(param_1 + 0x28) + 0xa8) * uVar1;
        lVar7 = 0x3f0;
        if ((uVar6 & 1) != 0) {
          lVar7 = 0x3f4;
        }
      }
      else {
        lVar15 = *(long *)(lVar14 + 0x338) + **(long **)(lVar14 + 0x370) * uVar1;
        lVar16 = *(long *)(lVar14 + 0x408) + **(long **)(lVar14 + 0x440) * uVar1;
        lVar8 = *(long *)(lVar14 + 0x4d8) + **(long **)(lVar14 + 0x510) * uVar1;
        lVar9 = *(long *)(lVar14 + 0x5a8) + **(long **)(lVar14 + 0x5e0) * uVar1;
        lVar10 = *(long *)(lVar14 + 0x678) + **(long **)(lVar14 + 0x6b0) * uVar1;
        lVar11 = *(long *)(lVar14 + 0x748) + **(long **)(lVar14 + 0x780) * uVar1;
        lVar12 = *(long *)(lVar14 + 0x818) + **(long **)(lVar14 + 0x850) * uVar1;
        lVar13 = *(long *)(lVar14 + 0x8e8) + **(long **)(lVar14 + 0x920) * uVar1;
        lVar17 = *(long *)(lVar14 + 0x9b8) + **(long **)(lVar14 + 0x9f0) * uVar1;
        lVar21 = *(long *)(lVar14 + 0xa88) + **(long **)(lVar14 + 0xac0) * uVar1;
        lVar20 = *(long *)(lVar14 + 0xb58) + **(long **)(lVar14 + 0xb90) * uVar1;
        lVar19 = *(long *)(lVar14 + 0xc28) + **(long **)(lVar14 + 0xc60) * uVar1;
        lVar18 = *(long *)(lVar14 + 0xcf8) + **(long **)(lVar14 + 0xd30) * uVar1;
        lVar23 = *(long *)(*(long *)(param_1 + 0x20) + 0x10) +
                 **(long **)(*(long *)(param_1 + 0x20) + 0x48) * uVar1;
        lVar22 = *(long *)(*(long *)(param_1 + 0x28) + 0x10) +
                 **(long **)(*(long *)(param_1 + 0x28) + 0x48) * uVar1;
        lVar7 = 1000;
        if ((uVar6 & 1) != 0) {
          lVar7 = 0x3ec;
        }
      }
      uVar3 = *(uint *)(lVar14 + lVar7);
      if (0 < (int)uVar3) {
        lVar7 = 0;
        lVar15 = lVar15 + 4;
        lVar16 = lVar16 + 4;
        lVar8 = lVar8 + 4;
        lVar9 = lVar9 + 4;
        lVar10 = lVar10 + 4;
        lVar11 = lVar11 + 4;
        lVar18 = lVar18 + 4;
        lVar19 = lVar19 + 4;
        lVar20 = lVar20 + 4;
        lVar21 = lVar21 + 4;
        lVar17 = lVar17 + 4;
        lVar13 = lVar13 + 4;
        lVar12 = lVar12 + 4;
        do {
          fVar28 = *(float *)(lVar15 + lVar7);
          fVar29 = *(float *)(lVar16 + lVar7);
          fVar30 = fVar24 + fVar29 * fVar29 + fVar28 * fVar28;
          fVar29 = *(float *)(lVar8 + lVar7) + *(float *)(lVar23 + 4 + lVar7) * fVar28 +
                   *(float *)(lVar22 + 4 + lVar7) * fVar29;
          fVar30 = ((fVar27 * 0.5) / SQRT(fVar25 + (fVar29 * fVar29) / fVar30)) / fVar30;
          *(float *)(lVar17 + lVar7) = fVar24 + fVar28 * fVar28 * fVar30;
          *(float *)(lVar21 + lVar7) =
               *(float *)(lVar15 + lVar7) * *(float *)(lVar16 + lVar7) * fVar30;
          *(float *)(lVar20 + lVar7) =
               fVar24 + *(float *)(lVar16 + lVar7) * *(float *)(lVar16 + lVar7) * fVar30;
          *(float *)(lVar19 + lVar7) =
               -(fVar30 * *(float *)(lVar8 + lVar7) * *(float *)(lVar15 + lVar7));
          *(float *)(lVar18 + lVar7) =
               -(fVar30 * *(float *)(lVar8 + lVar7) * *(float *)(lVar16 + lVar7));
          fVar30 = *(float *)(lVar9 + lVar7);
          fVar31 = *(float *)(lVar10 + lVar7);
          fVar32 = fVar31 * fVar31;
          fVar28 = fVar24 + fVar32 + fVar30 * fVar30;
          fVar33 = *(float *)(lVar11 + lVar7);
          fVar29 = fVar24 + fVar32 + fVar33 * fVar33;
          fVar35 = *(float *)(lVar23 + 4 + lVar7);
          fVar36 = *(float *)(lVar22 + 4 + lVar7);
          fVar34 = *(float *)(lVar12 + lVar7) + fVar35 * fVar30 + fVar36 * fVar31;
          fVar31 = *(float *)(lVar13 + lVar7) + fVar35 * fVar31 + fVar36 * fVar33;
          fVar31 = (fVar26 * 0.5) /
                   SQRT(fVar25 + (fVar34 * fVar34) / fVar28 + (fVar31 * fVar31) / fVar29);
          *(float *)(lVar17 + lVar7) =
               *(float *)(lVar17 + lVar7) + ((fVar30 * fVar30) / fVar28 + fVar32 / fVar29) * fVar31;
          *(float *)(lVar21 + lVar7) =
               *(float *)(lVar21 + lVar7) +
               ((*(float *)(lVar9 + lVar7) * *(float *)(lVar10 + lVar7)) / fVar28 +
               (*(float *)(lVar10 + lVar7) * *(float *)(lVar11 + lVar7)) / fVar29) * fVar31;
          *(float *)(lVar20 + lVar7) =
               *(float *)(lVar20 + lVar7) +
               ((*(float *)(lVar10 + lVar7) * *(float *)(lVar10 + lVar7)) / fVar28 +
               (*(float *)(lVar11 + lVar7) * *(float *)(lVar11 + lVar7)) / fVar29) * fVar31;
          *(float *)(lVar19 + lVar7) =
               *(float *)(lVar19 + lVar7) -
               ((*(float *)(lVar9 + lVar7) * *(float *)(lVar12 + lVar7)) / fVar28 +
               (*(float *)(lVar10 + lVar7) * *(float *)(lVar13 + lVar7)) / fVar29) * fVar31;
          *(float *)(lVar18 + lVar7) =
               *(float *)(lVar18 + lVar7) -
               ((*(float *)(lVar10 + lVar7) * *(float *)(lVar12 + lVar7)) / fVar28 +
               (*(float *)(lVar11 + lVar7) * *(float *)(lVar13 + lVar7)) / fVar29) * fVar31;
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar3 * 4 - lVar7 != 0);
      }
      uVar6 = uVar1;
    } while (iVar2 != (int)uVar1);
  }
  return;
}



/* Entry: 109397f3c; end: 109398513;  */

void FUN_109397f3c(long param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
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
  int iVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  uVar12 = (long)*(int *)(param_1 + 0x14) * (long)*param_2;
  iVar25 = param_2[1] * *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar25 <= *(int *)(param_1 + 0x18)) {
    iVar2 = iVar25;
  }
  if ((int)uVar12 < iVar2) {
    lVar13 = *(long *)(param_1 + 8);
    fVar29 = *(float *)(lVar13 + 0x24) * *(float *)(lVar13 + 0x24);
    fVar30 = *(float *)(lVar13 + 0x14) * 0.5;
    cVar3 = *(char *)(param_1 + 0x40);
    lVar14 = *(long *)(param_1 + 0x30);
    do {
      uVar1 = uVar12 + 1;
      if (cVar3 == '\0') {
        lVar15 = *(long *)(lVar13 + 0xe28) + **(long **)(lVar13 + 0xe60) * uVar1 + 4;
        lVar16 = *(long *)(lVar13 + 0xa18) + **(long **)(lVar13 + 0xa50) * uVar1 + 4;
        lVar17 = *(long *)(lVar13 + 0xc88) + **(long **)(lVar13 + 0xcc0) * uVar1 + 4;
        lVar18 = *(long *)(lVar14 + 0x70) + **(long **)(lVar14 + 0xa8) * uVar1 + 4;
        lVar23 = *(long *)(param_1 + 0x20);
        lVar24 = *(long *)(param_1 + 0x28);
        lVar5 = *(long *)(lVar23 + 0x70) + **(long **)(lVar23 + 0xa8) * uVar1 + 4;
        lVar19 = *(long *)(lVar13 + 3000) + **(long **)(lVar13 + 0xbf0) * uVar1 + 4;
        lVar6 = *(long *)(lVar13 + 0xd58) + **(long **)(lVar13 + 0xd90) * uVar1 + 4;
        lVar10 = *(long *)(param_1 + 0x38);
        lVar8 = *(long *)(lVar10 + 0x70) + **(long **)(lVar10 + 0xa8) * uVar1 + 4;
        lVar7 = *(long *)(lVar24 + 0x70) + **(long **)(lVar24 + 0xa8) * uVar1 + 4;
        lVar9 = *(long *)(lVar14 + 0x10) + **(long **)(lVar14 + 0x48) * (uVar12 + 2) + 4;
        lVar11 = *(long *)(lVar10 + 0x10) + **(long **)(lVar10 + 0x48) * (uVar12 + 2) + 4;
        lVar22 = *(long *)(lVar13 + 0x9b8) + **(long **)(lVar13 + 0x9f0) * uVar1;
        lVar27 = *(long *)(lVar13 + 0xc28) + **(long **)(lVar13 + 0xc60) * uVar1;
        lVar20 = *(long *)(lVar14 + 0x10) + **(long **)(lVar14 + 0x48) * uVar1;
        lVar21 = *(long *)(lVar23 + 0x10) + **(long **)(lVar23 + 0x48) * uVar1;
        lVar23 = *(long *)(lVar13 + 0xb58) + **(long **)(lVar13 + 0xb90) * uVar1;
        lVar26 = *(long *)(lVar13 + 0xcf8) + **(long **)(lVar13 + 0xd30) * uVar1;
        lVar10 = *(long *)(lVar10 + 0x10) + **(long **)(lVar10 + 0x48) * uVar1;
        lVar24 = *(long *)(lVar24 + 0x10) + **(long **)(lVar24 + 0x48) * uVar1;
        if ((uVar12 & 1) != 0) {
          iVar25 = *(int *)(lVar13 + 0xa74);
          bVar4 = *(int *)(lVar13 + 0xa70) == iVar25;
          goto LAB_10939830c;
        }
        iVar25 = *(int *)(lVar13 + 0xa70);
        bVar4 = iVar25 == *(int *)(lVar13 + 0xa74);
LAB_1093982d8:
        lVar10 = lVar10 + 8;
        lVar24 = lVar24 + 8;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + 8;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + 8;
        lVar22 = lVar22 + 8;
      }
      else {
        lVar15 = *(long *)(lVar13 + 0xdc8) + **(long **)(lVar13 + 0xe00) * uVar1 + 4;
        lVar16 = *(long *)(lVar13 + 0x9b8) + **(long **)(lVar13 + 0x9f0) * uVar1 + 4;
        lVar17 = *(long *)(lVar13 + 0xc28) + **(long **)(lVar13 + 0xc60) * uVar1 + 4;
        lVar18 = *(long *)(lVar14 + 0x10) + **(long **)(lVar14 + 0x48) * uVar1 + 4;
        lVar23 = *(long *)(param_1 + 0x20);
        lVar24 = *(long *)(param_1 + 0x28);
        lVar5 = *(long *)(lVar23 + 0x10) + **(long **)(lVar23 + 0x48) * uVar1 + 4;
        lVar19 = *(long *)(lVar13 + 0xb58) + **(long **)(lVar13 + 0xb90) * uVar1 + 4;
        lVar6 = *(long *)(lVar13 + 0xcf8) + **(long **)(lVar13 + 0xd30) * uVar1 + 4;
        lVar10 = *(long *)(param_1 + 0x38);
        lVar8 = *(long *)(lVar10 + 0x10) + **(long **)(lVar10 + 0x48) * uVar1 + 4;
        lVar7 = *(long *)(lVar24 + 0x10) + **(long **)(lVar24 + 0x48) * uVar1 + 4;
        lVar9 = *(long *)(lVar14 + 0x70) + **(long **)(lVar14 + 0xa8) * (uVar12 + 2) + 4;
        lVar11 = *(long *)(lVar10 + 0x70) + **(long **)(lVar10 + 0xa8) * (uVar12 + 2) + 4;
        lVar22 = *(long *)(lVar13 + 0xa18) + **(long **)(lVar13 + 0xa50) * uVar1;
        lVar27 = *(long *)(lVar13 + 0xc88) + **(long **)(lVar13 + 0xcc0) * uVar1;
        lVar20 = *(long *)(lVar14 + 0x70) + **(long **)(lVar14 + 0xa8) * uVar1;
        lVar21 = *(long *)(lVar23 + 0x70) + **(long **)(lVar23 + 0xa8) * uVar1;
        lVar23 = *(long *)(lVar13 + 3000) + **(long **)(lVar13 + 0xbf0) * uVar1;
        lVar26 = *(long *)(lVar13 + 0xd58) + **(long **)(lVar13 + 0xd90) * uVar1;
        lVar10 = *(long *)(lVar10 + 0x70) + **(long **)(lVar10 + 0xa8) * uVar1;
        lVar24 = *(long *)(lVar24 + 0x70) + **(long **)(lVar24 + 0xa8) * uVar1;
        if ((uVar12 & 1) != 0) {
          iVar25 = *(int *)(lVar13 + 0xa6c);
          bVar4 = *(int *)(lVar13 + 0xa68) == iVar25;
          goto LAB_1093982d8;
        }
        iVar25 = *(int *)(lVar13 + 0xa68);
        bVar4 = iVar25 == *(int *)(lVar13 + 0xa6c);
LAB_10939830c:
        lVar10 = lVar10 + 4;
        lVar24 = lVar24 + 4;
        lVar20 = lVar20 + 4;
        lVar21 = lVar21 + 4;
        lVar26 = lVar26 + 4;
        lVar23 = lVar23 + 4;
        lVar27 = lVar27 + 4;
        lVar22 = lVar22 + 4;
        bVar4 = !bVar4;
      }
      if (iVar25 < 2) {
        uVar12 = 0;
      }
      else {
        lVar28 = 0;
        uVar12 = (ulong)(iVar25 - 1);
        do {
          fVar31 = *(float *)(lVar20 + lVar28) - *(float *)(lVar18 + lVar28);
          fVar33 = *(float *)(lVar10 + lVar28) - *(float *)(lVar8 + lVar28);
          fVar32 = *(float *)(lVar9 + lVar28) - *(float *)(lVar18 + lVar28);
          fVar34 = *(float *)(lVar11 + lVar28) - *(float *)(lVar8 + lVar28);
          fVar31 = fVar30 / SQRT(fVar29 + fVar33 * fVar33 + fVar31 * fVar31 + fVar32 * fVar32 +
                                          fVar34 * fVar34);
          *(float *)(lVar15 + lVar28) = fVar31;
          fVar32 = (*(float *)(lVar21 + lVar28) - *(float *)(lVar5 + lVar28)) * fVar31;
          fVar31 = fVar31 * (*(float *)(lVar24 + lVar28) - *(float *)(lVar7 + lVar28));
          *(float *)(lVar17 + lVar28) = *(float *)(lVar17 + lVar28) + fVar32;
          *(float *)(lVar16 + lVar28) = *(float *)(lVar15 + lVar28) + *(float *)(lVar16 + lVar28);
          *(float *)(lVar6 + lVar28) = fVar31 + *(float *)(lVar6 + lVar28);
          *(float *)(lVar19 + lVar28) = *(float *)(lVar15 + lVar28) + *(float *)(lVar19 + lVar28);
          *(float *)(lVar27 + lVar28) = *(float *)(lVar27 + lVar28) - fVar32;
          *(float *)(lVar22 + lVar28) = *(float *)(lVar15 + lVar28) + *(float *)(lVar22 + lVar28);
          *(float *)(lVar26 + lVar28) = *(float *)(lVar26 + lVar28) - fVar31;
          *(float *)(lVar23 + lVar28) = *(float *)(lVar15 + lVar28) + *(float *)(lVar23 + lVar28);
          lVar28 = lVar28 + 4;
        } while (uVar12 << 2 != lVar28);
      }
      fVar32 = *(float *)(lVar18 + uVar12 * 4);
      fVar31 = *(float *)(lVar20 + uVar12 * 4) - fVar32;
      fVar34 = *(float *)(lVar8 + uVar12 * 4);
      fVar33 = *(float *)(lVar10 + uVar12 * 4) - fVar34;
      fVar32 = *(float *)(lVar9 + uVar12 * 4) - fVar32;
      fVar34 = *(float *)(lVar11 + uVar12 * 4) - fVar34;
      fVar31 = fVar30 / SQRT(fVar29 + fVar33 * fVar33 + fVar31 * fVar31 + fVar32 * fVar32 +
                                      fVar34 * fVar34);
      *(float *)(lVar15 + uVar12 * 4) = fVar31;
      if (!bVar4) {
        fVar32 = fVar31 * (*(float *)(lVar21 + uVar12 * 4) - *(float *)(lVar5 + uVar12 * 4));
        fVar31 = fVar31 * (*(float *)(lVar24 + uVar12 * 4) - *(float *)(lVar7 + uVar12 * 4));
        *(float *)(lVar17 + uVar12 * 4) = fVar32 + *(float *)(lVar17 + uVar12 * 4);
        *(float *)(lVar16 + uVar12 * 4) =
             *(float *)(lVar15 + uVar12 * 4) + *(float *)(lVar16 + uVar12 * 4);
        *(float *)(lVar6 + uVar12 * 4) = fVar31 + *(float *)(lVar6 + uVar12 * 4);
        *(float *)(lVar19 + uVar12 * 4) =
             *(float *)(lVar15 + uVar12 * 4) + *(float *)(lVar19 + uVar12 * 4);
        *(float *)(lVar27 + uVar12 * 4) = *(float *)(lVar27 + uVar12 * 4) - fVar32;
        *(float *)(lVar22 + uVar12 * 4) =
             *(float *)(lVar15 + uVar12 * 4) + *(float *)(lVar22 + uVar12 * 4);
        *(float *)(lVar26 + uVar12 * 4) = *(float *)(lVar26 + uVar12 * 4) - fVar31;
        *(float *)(lVar23 + uVar12 * 4) =
             *(float *)(lVar15 + uVar12 * 4) + *(float *)(lVar23 + uVar12 * 4);
      }
      uVar12 = uVar1;
    } while (iVar2 != (int)uVar1);
  }
  return;
}



/* Entry: 109398514; end: 10939883b;  */

void FUN_109398514(long param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  
  uVar8 = (long)*(int *)(param_1 + 0x14) * (long)*param_2;
  iVar5 = param_2[1] * *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar5 <= *(int *)(param_1 + 0x18)) {
    iVar2 = iVar5;
  }
  if ((int)uVar8 < iVar2) {
    cVar4 = *(char *)(param_1 + 0x30);
    lVar14 = *(long *)(param_1 + 8);
    lVar15 = *(long *)(param_1 + 0x20);
    do {
      uVar1 = uVar8 + 1;
      if (cVar4 == '\0') {
        lVar16 = *(long *)(lVar14 + 0xe28) + **(long **)(lVar14 + 0xe60) * uVar1;
        lVar6 = *(long *)(lVar14 + 0xa18) + **(long **)(lVar14 + 0xa50) * uVar1;
        lVar7 = *(long *)(lVar14 + 0xc88) + **(long **)(lVar14 + 0xcc0) * uVar1;
        lVar10 = *(long *)(lVar15 + 0x70) + **(long **)(lVar15 + 0xa8) * uVar1;
        lVar11 = *(long *)(lVar14 + 3000) + **(long **)(lVar14 + 0xbf0) * uVar1;
        lVar12 = *(long *)(lVar14 + 0xd58) + **(long **)(lVar14 + 0xd90) * uVar1;
        lVar22 = *(long *)(param_1 + 0x28);
        lVar13 = *(long *)(lVar22 + 0x70) + **(long **)(lVar22 + 0xa8) * uVar1;
        lVar9 = uVar8 + 2;
        lVar17 = *(long *)(lVar14 + 0x9b8) + **(long **)(lVar14 + 0x9f0) * lVar9;
        lVar18 = *(long *)(lVar14 + 0xc28) + **(long **)(lVar14 + 0xc60) * lVar9;
        lVar19 = *(long *)(lVar15 + 0x10) + **(long **)(lVar15 + 0x48) * lVar9;
        lVar20 = *(long *)(lVar14 + 0xb58) + **(long **)(lVar14 + 0xb90) * lVar9;
        lVar21 = *(long *)(lVar14 + 0xcf8) + **(long **)(lVar14 + 0xd30) * lVar9;
        lVar22 = *(long *)(lVar22 + 0x10) + **(long **)(lVar22 + 0x48) * lVar9;
        lVar9 = 0xa70;
        if ((uVar8 & 1) != 0) {
          lVar9 = 0xa74;
        }
      }
      else {
        lVar16 = *(long *)(lVar14 + 0xdc8) + **(long **)(lVar14 + 0xe00) * uVar1;
        lVar6 = *(long *)(lVar14 + 0x9b8) + **(long **)(lVar14 + 0x9f0) * uVar1;
        lVar7 = *(long *)(lVar14 + 0xc28) + **(long **)(lVar14 + 0xc60) * uVar1;
        lVar10 = *(long *)(lVar15 + 0x10) + **(long **)(lVar15 + 0x48) * uVar1;
        lVar11 = *(long *)(lVar14 + 0xb58) + **(long **)(lVar14 + 0xb90) * uVar1;
        lVar12 = *(long *)(lVar14 + 0xcf8) + **(long **)(lVar14 + 0xd30) * uVar1;
        lVar22 = *(long *)(param_1 + 0x28);
        lVar13 = *(long *)(lVar22 + 0x10) + **(long **)(lVar22 + 0x48) * uVar1;
        lVar9 = uVar8 + 2;
        lVar17 = *(long *)(lVar14 + 0xa18) + **(long **)(lVar14 + 0xa50) * lVar9;
        lVar18 = *(long *)(lVar14 + 0xc88) + **(long **)(lVar14 + 0xcc0) * lVar9;
        lVar19 = *(long *)(lVar15 + 0x70) + **(long **)(lVar15 + 0xa8) * lVar9;
        lVar20 = *(long *)(lVar14 + 3000) + **(long **)(lVar14 + 0xbf0) * lVar9;
        lVar21 = *(long *)(lVar14 + 0xd58) + **(long **)(lVar14 + 0xd90) * lVar9;
        lVar22 = *(long *)(lVar22 + 0x70) + **(long **)(lVar22 + 0xa8) * lVar9;
        lVar9 = 0xa68;
        if ((uVar8 & 1) != 0) {
          lVar9 = 0xa6c;
        }
      }
      uVar3 = *(uint *)(lVar14 + lVar9);
      if (0 < (int)uVar3) {
        lVar9 = 0;
        lVar16 = lVar16 + 4;
        do {
          fVar24 = *(float *)(lVar16 + lVar9) *
                   (*(float *)(lVar19 + 4 + lVar9) - *(float *)(lVar10 + 4 + lVar9));
          fVar23 = *(float *)(lVar16 + lVar9) *
                   (*(float *)(lVar22 + 4 + lVar9) - *(float *)(lVar13 + 4 + lVar9));
          *(float *)(lVar7 + 4 + lVar9) = fVar24 + *(float *)(lVar7 + 4 + lVar9);
          *(float *)(lVar6 + 4 + lVar9) = *(float *)(lVar16 + lVar9) + *(float *)(lVar6 + 4 + lVar9)
          ;
          *(float *)(lVar12 + 4 + lVar9) = fVar23 + *(float *)(lVar12 + 4 + lVar9);
          *(float *)(lVar11 + 4 + lVar9) =
               *(float *)(lVar16 + lVar9) + *(float *)(lVar11 + 4 + lVar9);
          *(float *)(lVar18 + 4 + lVar9) = *(float *)(lVar18 + 4 + lVar9) - fVar24;
          *(float *)(lVar17 + 4 + lVar9) =
               *(float *)(lVar16 + lVar9) + *(float *)(lVar17 + 4 + lVar9);
          *(float *)(lVar21 + 4 + lVar9) = *(float *)(lVar21 + 4 + lVar9) - fVar23;
          *(float *)(lVar20 + 4 + lVar9) =
               *(float *)(lVar16 + lVar9) + *(float *)(lVar20 + 4 + lVar9);
          lVar9 = lVar9 + 4;
        } while ((ulong)uVar3 * 4 - lVar9 != 0);
      }
      uVar8 = uVar1;
    } while (iVar2 != (int)uVar1);
  }
  return;
}



/* Entry: 10939883c; end: 109398bf3;  */

void FUN_10939883c(long param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  uVar11 = (long)*(int *)(param_1 + 0x14) * (long)*param_2;
  iVar5 = param_2[1] * *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar5 <= *(int *)(param_1 + 0x18)) {
    iVar2 = iVar5;
  }
  if ((int)uVar11 < iVar2) {
    cVar4 = *(char *)(param_1 + 0x30);
    lVar13 = *(long *)(param_1 + 8);
    do {
      uVar1 = uVar11 + 1;
      if (cVar4 == '\0') {
        lVar14 = *(long *)(lVar13 + 0xe28) + **(long **)(lVar13 + 0xe60) * uVar1;
        lVar15 = *(long *)(lVar13 + 0xa18) + **(long **)(lVar13 + 0xa50) * uVar1;
        lVar6 = *(long *)(lVar13 + 0xae8) + **(long **)(lVar13 + 0xb20) * uVar1;
        lVar7 = *(long *)(lVar13 + 3000) + **(long **)(lVar13 + 0xbf0) * uVar1;
        lVar8 = *(long *)(lVar13 + 0xc88) + **(long **)(lVar13 + 0xcc0) * uVar1;
        lVar9 = *(long *)(lVar13 + 0xd58) + **(long **)(lVar13 + 0xd90) * uVar1;
        lVar23 = *(long *)(param_1 + 0x20);
        lVar26 = *(long *)(param_1 + 0x28);
        lVar10 = *(long *)(lVar23 + 0x70) + **(long **)(lVar23 + 0xa8) * uVar1;
        lVar12 = *(long *)(lVar26 + 0x70) + **(long **)(lVar26 + 0xa8) * uVar1;
        lVar21 = *(long *)(lVar23 + 0x10);
        lVar23 = **(long **)(lVar23 + 0x48);
        lVar16 = lVar21 + lVar23 * (uVar11 + 2);
        lVar25 = *(long *)(lVar26 + 0x10);
        lVar26 = **(long **)(lVar26 + 0x48);
        lVar17 = lVar25 + lVar26 * (uVar11 + 2);
        lVar18 = *(long *)(lVar13 + 0xdc8) + **(long **)(lVar13 + 0xe00) * uVar11;
        lVar19 = lVar21 + lVar23 * uVar11;
        lVar20 = lVar25 + lVar26 * uVar11;
        lVar27 = *(long *)(lVar13 + 0xdc8) + **(long **)(lVar13 + 0xe00) * uVar1;
        lVar21 = lVar21 + lVar23 * uVar1;
        lVar25 = lVar25 + lVar26 * uVar1;
        lVar23 = 0xa74;
        lVar26 = lVar21 + 4;
        lVar22 = lVar25 + 4;
        lVar24 = lVar27 + 4;
        if ((uVar11 & 1) == 0) {
          lVar23 = 0xa70;
          lVar26 = lVar21 + 8;
          lVar22 = lVar25 + 8;
          lVar24 = lVar27 + 8;
        }
      }
      else {
        lVar14 = *(long *)(lVar13 + 0xdc8) + **(long **)(lVar13 + 0xe00) * uVar1;
        lVar15 = *(long *)(lVar13 + 0x9b8) + **(long **)(lVar13 + 0x9f0) * uVar1;
        lVar6 = *(long *)(lVar13 + 0xa88) + **(long **)(lVar13 + 0xac0) * uVar1;
        lVar7 = *(long *)(lVar13 + 0xb58) + **(long **)(lVar13 + 0xb90) * uVar1;
        lVar8 = *(long *)(lVar13 + 0xc28) + **(long **)(lVar13 + 0xc60) * uVar1;
        lVar9 = *(long *)(lVar13 + 0xcf8) + **(long **)(lVar13 + 0xd30) * uVar1;
        lVar23 = *(long *)(param_1 + 0x20);
        lVar26 = *(long *)(param_1 + 0x28);
        lVar10 = *(long *)(lVar23 + 0x10) + **(long **)(lVar23 + 0x48) * uVar1;
        lVar12 = *(long *)(lVar26 + 0x10) + **(long **)(lVar26 + 0x48) * uVar1;
        lVar21 = *(long *)(lVar23 + 0x70);
        lVar23 = **(long **)(lVar23 + 0xa8);
        lVar16 = lVar21 + lVar23 * (uVar11 + 2);
        lVar25 = *(long *)(lVar26 + 0x70);
        lVar26 = **(long **)(lVar26 + 0xa8);
        lVar17 = lVar25 + lVar26 * (uVar11 + 2);
        lVar18 = *(long *)(lVar13 + 0xe28) + **(long **)(lVar13 + 0xe60) * uVar11;
        lVar19 = lVar21 + lVar23 * uVar11;
        lVar20 = lVar25 + lVar26 * uVar11;
        lVar27 = *(long *)(lVar13 + 0xe28) + **(long **)(lVar13 + 0xe60) * uVar1;
        lVar21 = lVar21 + lVar23 * uVar1;
        lVar25 = lVar25 + lVar26 * uVar1;
        lVar23 = 0xa6c;
        lVar26 = lVar21 + 8;
        lVar22 = lVar25 + 8;
        lVar24 = lVar27 + 8;
        if ((uVar11 & 1) == 0) {
          lVar23 = 0xa68;
          lVar26 = lVar21 + 4;
          lVar22 = lVar25 + 4;
          lVar24 = lVar27 + 4;
        }
      }
      lVar12 = lVar12 + 4;
      uVar3 = *(uint *)(lVar13 + lVar23);
      if (0 < (int)uVar3) {
        lVar23 = 0;
        do {
          fVar28 = *(float *)(lVar24 + -4 + lVar23);
          fVar29 = *(float *)(lVar14 + 4 + lVar23);
          fVar30 = *(float *)(lVar18 + 4 + lVar23);
          fVar33 = *(float *)(lVar22 + -4 + lVar23);
          fVar35 = *(float *)(lVar22 + lVar23);
          fVar34 = *(float *)(lVar20 + 4 + lVar23);
          fVar31 = *(float *)(lVar17 + 4 + lVar23);
          fVar32 = *(float *)(lVar10 + 4 + lVar23);
          fVar32 = fVar32 + (((fVar29 * *(float *)(lVar26 + lVar23) +
                               *(float *)(lVar26 + -4 + lVar23) * fVar28 +
                               *(float *)(lVar19 + 4 + lVar23) * fVar30 +
                               *(float *)(lVar16 + 4 + lVar23) * fVar29 +
                              *(float *)(lVar8 + 4 + lVar23)) -
                             *(float *)(lVar6 + 4 + lVar23) * *(float *)(lVar12 + lVar23)) /
                             *(float *)(lVar15 + 4 + lVar23) - fVar32) * *(float *)(lVar13 + 0x10);
          *(float *)(lVar10 + 4 + lVar23) = fVar32;
          *(float *)(lVar12 + lVar23) =
               *(float *)(lVar12 + lVar23) +
               (((fVar29 * fVar35 + fVar33 * fVar28 + fVar34 * fVar30 + fVar31 * fVar29 +
                 *(float *)(lVar9 + 4 + lVar23)) - *(float *)(lVar6 + 4 + lVar23) * fVar32) /
                *(float *)(lVar7 + 4 + lVar23) - *(float *)(lVar12 + lVar23)) *
               *(float *)(lVar13 + 0x10);
          lVar23 = lVar23 + 4;
        } while ((ulong)uVar3 * 4 - lVar23 != 0);
      }
      uVar11 = uVar1;
    } while (iVar2 != (int)uVar1);
  }
  return;
}



/* Entry: 109398bf4; end: 1093991f7;  */

void FUN_109398bf4(long *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int *piVar1;
  undefined **ppuVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  code *pcVar20;
  long *plVar21;
  uint *puVar22;
  undefined8 *puVar23;
  uint *puVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  undefined8 *puVar29;
  undefined4 *puVar30;
  int iVar31;
  uint *puVar32;
  ulong *puVar33;
  ulong uVar34;
  uint *puVar35;
  uint uVar36;
  long lVar37;
  long *plVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  int iVar47;
  double dVar48;
  undefined8 uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  undefined8 *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  int *piStack_520;
  undefined8 *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  int iStack_494;
  undefined8 uStack_490;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  long lStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 auStack_438 [8];
  undefined1 auStack_430 [4];
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  long lStack_400;
  undefined1 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  long lStack_3a0;
  undefined4 *puStack_398;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  uint *puStack_370;
  undefined8 uStack_368;
  long lStack_360;
  uint *puStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined1 *puStack_340;
  undefined8 uStack_338;
  undefined **ppuStack_330;
  long *plStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  long *plStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_1c8;
  undefined4 auStack_138 [2];
  undefined1 *puStack_130;
  undefined8 uStack_128;
  uint auStack_120 [2];
  undefined1 *puStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [12];
  undefined8 auStack_f4 [3];
  long alStack_d8 [6];
  undefined1 auStack_a8 [96];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar40 = param_2;
  FUN_109a8e1c4();
  if (((uVar40 & 1) == 0) &&
     (uVar40 = param_2, FUN_109a8b904(param_2,0xffffffff), (uVar40 & 0xff8) == 0)) {
    uVar40 = param_3;
    FUN_109a8e1c4();
    if (((uVar40 & 1) == 0) &&
       (uVar40 = param_3, FUN_109a8b904(param_3,0xffffffff), (uVar40 & 0xff8) == 0)) {
      uVar40 = param_2;
      FUN_109a8d584(param_2,param_3);
      if ((uVar40 & 1) == 0) {
        puVar30 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar30 = 1;
        auStack_108 = (undefined1  [8])(puVar30 + 1);
        *(undefined8 *)auStack_108 = 0x53656d61732e3049;
        auStack_100._0_8_ = 0xf;
        *(undefined1 *)((long)puVar30 + 0x13) = 0;
        *(undefined8 *)((long)puVar30 + 0xb) = 0x29314928657a6953;
        FUN_109ac3188(0xffffff29,auStack_108,&UNK_10f568af1,&UNK_10f568af6,0x41b);
      }
      else {
        uVar40 = param_2;
        FUN_109a8b904(param_2,0xffffffff);
        if ((((uVar40 & 7) == 0) &&
            (uVar40 = param_3, FUN_109a8b904(param_3,0xffffffff), (uVar40 & 7) == 0)) ||
           ((uVar40 = param_2, FUN_109a8b904(param_2,0xffffffff), ((uint)uVar40 & 7) == 5 &&
            (uVar40 = param_3, FUN_109a8b904(param_3,0xffffffff), ((uint)uVar40 & 7) == 5)))) {
          uVar40 = param_4;
          FUN_109a8e1c4();
          if ((((uVar40 & 1) == 0) &&
              (uVar40 = param_4, FUN_109a8b904(param_4,0xffffffff), ((uint)uVar40 & 7) == 5)) &&
             (uVar40 = param_4, FUN_109a8b904(param_4,0xffffffff), ((uint)uVar40 & 0xff8) == 8)) {
            uVar40 = param_2;
            FUN_109a8d584(param_2,param_4);
            if ((uVar40 & 1) != 0) {
              lVar37 = 0;
              do {
                *(undefined4 *)(auStack_108 + lVar37) = 0x42ff0000;
                *(undefined8 *)(auStack_100 + lVar37 + 4) = 0;
                *(undefined8 *)(auStack_108 + lVar37 + 4) = 0;
                *(undefined8 *)((long)auStack_f4 + lVar37 + 8) = 0;
                *(undefined8 *)((long)auStack_f4 + lVar37) = 0;
                *(undefined8 *)(&stack0xffffffffffffff24 + lVar37) = 0;
                *(undefined8 *)((long)auStack_f4 + lVar37 + 0x10) = 0;
                puVar29 = (undefined8 *)((long)alStack_d8 + lVar37 + 0x20);
                *puVar29 = 0;
                *(undefined8 *)((long)alStack_d8 + lVar37 + 8) = 0;
                *(undefined8 *)((long)alStack_d8 + lVar37) = 0;
                *(undefined1 **)((long)alStack_d8 + lVar37 + 0x10) = auStack_100 + lVar37;
                *(undefined8 **)((long)alStack_d8 + lVar37 + 0x18) = puVar29;
                lVar39 = lVar37 + 0x60;
                *(undefined8 *)((long)alStack_d8 + lVar37 + 0x28) = 0;
                lVar37 = lVar39;
              } while (lVar39 != 0xc0);
              FUN_109a8ec3c(param_4,0xffffffff);
              FUN_109a3d9cc();
              auStack_120[0] = 0x3010000;
              uStack_110 = 0;
              puStack_130 = auStack_a8;
              auStack_138[0] = 0x3010000;
              uStack_128 = 0;
              puVar24 = auStack_120;
              puVar29 = (undefined8 *)auStack_138;
              puStack_118 = auStack_108;
              (**(code **)(*param_1 + 0x50))(param_1,param_2,param_3);
              auStack_120[0] = 0x2010000;
              uStack_110 = 0;
              plVar21 = (long *)auStack_108;
              puVar35 = auStack_120;
              puVar32 = (uint *)0x2;
              puStack_118 = (undefined1 *)param_4;
              FUN_109a3e010();
              plVar25 = &lStack_48;
              do {
                plVar26 = plVar25 + -0xc;
                if (plVar25[-5] != 0) {
                  piVar1 = (int *)(plVar25[-5] + 0x14);
                  do {
                    iVar31 = *piVar1;
                    cVar8 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar9) {
                      *piVar1 = iVar31 + -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (iVar31 + -1 == 0) {
                    plVar21 = plVar26;
                    func_0x000109a848d4();
                  }
                }
                plVar25[-5] = 0;
                plVar25[-9] = 0;
                plVar25[-10] = 0;
                plVar25[-7] = 0;
                plVar25[-8] = 0;
                if (0 < *(int *)((long)plVar25 + -0x5c)) {
                  lVar37 = 0;
                  lVar39 = plVar25[-4];
                  do {
                    *(undefined4 *)(lVar39 + lVar37 * 4) = 0;
                    lVar37 = lVar37 + 1;
                  } while (lVar37 < *(int *)((long)plVar25 + -0x5c));
                }
                plVar38 = (long *)plVar25[-3];
                if (plVar38 != plVar25 + -2 && plVar38 != (long *)0x0) {
                  plVar21 = (long *)plVar38[-1];
                  _free();
                }
                plVar25 = plVar26;
              } while (plVar26 != (long *)auStack_108);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                return;
              }
              ___stack_chk_fail();
              lVar37 = 0x60;
              do {
                func_0x00010567aa40(auStack_108 + lVar37);
                lVar37 = lVar37 + -0x60;
              } while (lVar37 != -0x60);
              __Unwind_Resume(plVar21);
              func_0x000104bd46a0();
              lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puVar22 = puVar32;
              FUN_109a8e1c4();
              if ((((ulong)puVar22 & 1) == 0) &&
                 (puVar22 = puVar32, FUN_109a8b904(puVar32,0xffffffff),
                 ((ulong)puVar22 & 0xff8) == 0)) {
                puVar22 = puVar35;
                FUN_109a8e1c4();
                if ((((ulong)puVar22 & 1) == 0) &&
                   (puVar22 = puVar35, FUN_109a8b904(puVar35,0xffffffff),
                   ((ulong)puVar22 & 0xff8) == 0)) {
                  puVar22 = puVar32;
                  FUN_109a8d584(puVar32,puVar35);
                  if (((ulong)puVar22 & 1) == 0) {
                    puVar30 = (undefined4 *)0x14;
                    func_0x000107c2ae8c();
                    *puVar30 = 1;
                    ppuStack_330 = (undefined **)(puVar30 + 1);
                    *ppuStack_330 = (undefined *)0x53656d61732e3049;
                    plStack_328 = (long *)0xf;
                    *(undefined1 *)((long)puVar30 + 0x13) = 0;
                    *(undefined8 *)((long)puVar30 + 0xb) = 0x29314928657a6953;
                    FUN_109ac3188(0xffffff29,&ppuStack_330,&UNK_10f568c71,&UNK_10f568af6,0x42a);
                  }
                  else {
                    puVar22 = puVar32;
                    FUN_109a8b904(puVar32,0xffffffff);
                    if (((((ulong)puVar22 & 7) == 0) &&
                        (puVar22 = puVar35, FUN_109a8b904(puVar35,0xffffffff),
                        ((ulong)puVar22 & 7) == 0)) ||
                       ((puVar22 = puVar32, FUN_109a8b904(puVar32,0xffffffff),
                        ((uint)puVar22 & 7) == 5 &&
                        (puVar22 = puVar35, FUN_109a8b904(puVar35,0xffffffff),
                        ((uint)puVar22 & 7) == 5)))) {
                      puVar22 = puVar24;
                      FUN_109a8e1c4();
                      if (((((ulong)puVar22 & 1) == 0) &&
                          (puVar22 = puVar24, FUN_109a8b904(puVar24,0xffffffff),
                          ((uint)puVar22 & 7) == 5)) &&
                         (puVar22 = puVar24, FUN_109a8b904(puVar24,0xffffffff),
                         ((ulong)puVar22 & 0xff8) == 0)) {
                        puVar23 = puVar29;
                        FUN_109a8e1c4();
                        if (((((ulong)puVar23 & 1) == 0) &&
                            (puVar23 = puVar29, FUN_109a8b904(puVar29,0xffffffff),
                            ((uint)puVar23 & 7) == 5)) &&
                           (puVar23 = puVar29, FUN_109a8b904(puVar29,0xffffffff),
                           ((ulong)puVar23 & 0xff8) == 0)) {
                          puVar22 = puVar32;
                          FUN_109a8d584(puVar32,puVar24);
                          if (((ulong)puVar22 & 1) == 0) {
                            puVar30 = (undefined4 *)0x18;
                            func_0x000107c2ae8c();
                            *puVar30 = 1;
                            ppuStack_330 = (undefined **)(puVar30 + 1);
                            plStack_328 = (long *)0x13;
                            *(undefined1 *)((long)puVar30 + 0x17) = 0;
                            *(undefined4 *)((long)puVar30 + 0x13) = 0x29755f77;
                            *(undefined8 *)(puVar30 + 3) = 0x776f6c6628657a69;
                            *(undefined8 *)(puVar30 + 1) = 0x53656d61732e3049;
                            FUN_109ac3188(0xffffff29,&ppuStack_330,&UNK_10f568c71,&UNK_10f568af6,
                                          0x42e);
                          }
                          else {
                            puVar22 = puVar24;
                            FUN_109a8d584(puVar24,puVar29);
                            if (((ulong)puVar22 & 1) != 0) {
                              uVar36 = 0x200;
                              if (iRam00000001132e8f30 == 0) {
                                uVar36 = 1;
                              }
                              if ((*puVar32 & 0x1f0000) == 0x10000) {
                                puVar33 = *(ulong **)(puVar32 + 2);
                                uStack_560 = (undefined *)*puVar33;
                                uStack_558 = puVar33[1];
                                uStack_548 = puVar33[3];
                                uStack_550 = puVar33[2];
                                uStack_538 = puVar33[5];
                                uStack_540 = puVar33[4];
                                uStack_528 = puVar33[7];
                                uStack_530 = puVar33[6];
                                piStack_520 = (int *)((ulong)&uStack_560 | 8);
                                puStack_518 = &uStack_510;
                                uStack_510 = 0;
                                uStack_508 = 0;
                                if (puVar33[7] != 0) {
                                  piVar1 = (int *)(puVar33[7] + 0x14);
                                  do {
                                    cVar8 = '\x01';
                                    bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                    if (bVar9) {
                                      *piVar1 = *piVar1 + 1;
                                      cVar8 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar8 != '\0');
                                }
                                if (*(int *)((long)puVar33 + 4) < 3) {
                                  uStack_510 = *(undefined8 *)puVar33[9];
                                  uStack_508 = ((undefined8 *)puVar33[9])[1];
                                }
                                else {
                                  uStack_560 = (undefined *)((ulong)uStack_560 & 0xffffffff);
                                  func_0x000109a84868(&uStack_560);
                                }
                              }
                              else {
                                FUN_109a8a180(&uStack_560,puVar32,0xffffffff);
                              }
                              if ((*puVar35 & 0x1f0000) == 0x10000) {
                                puVar33 = *(ulong **)(puVar35 + 2);
                                uStack_580 = (ulong)&uStack_5c0 | 8;
                                uStack_5b8 = puVar33[1];
                                uStack_5c0 = *puVar33;
                                uStack_5a8 = puVar33[3];
                                uStack_5b0 = puVar33[2];
                                uStack_598 = puVar33[5];
                                uStack_5a0 = puVar33[4];
                                uStack_588 = puVar33[7];
                                uStack_590 = puVar33[6];
                                puStack_578 = &uStack_570;
                                uStack_570 = 0;
                                uStack_568 = 0;
                                if (puVar33[7] != 0) {
                                  piVar1 = (int *)(puVar33[7] + 0x14);
                                  do {
                                    cVar8 = '\x01';
                                    bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                    if (bVar9) {
                                      *piVar1 = *piVar1 + 1;
                                      cVar8 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar8 != '\0');
                                }
                                if (*(int *)((long)puVar33 + 4) < 3) {
                                  uStack_570 = *(undefined8 *)puVar33[9];
                                  uStack_568 = ((undefined8 *)puVar33[9])[1];
                                }
                                else {
                                  uStack_5c0 = uStack_5c0 & 0xffffffff;
                                  func_0x000109a84868(&uStack_5c0);
                                }
                              }
                              else {
                                FUN_109a8a180(&uStack_5c0,puVar35,0xffffffff);
                              }
                              FUN_109a8ec3c(puVar24,0xffffffff);
                              FUN_109a8ec3c(puVar29,0xffffffff);
                              iVar31 = *piStack_520;
                              iVar47 = piStack_520[1];
                              ppuVar19 = *(undefined ***)piStack_520;
                              ppuVar18 = *(undefined ***)piStack_520;
                              ppuVar17 = *(undefined ***)piStack_520;
                              ppuVar16 = *(undefined ***)piStack_520;
                              ppuVar15 = *(undefined ***)piStack_520;
                              ppuVar14 = *(undefined ***)piStack_520;
                              ppuVar13 = *(undefined ***)piStack_520;
                              ppuVar12 = *(undefined ***)piStack_520;
                              ppuVar11 = *(undefined ***)piStack_520;
                              ppuVar10 = *(undefined ***)piStack_520;
                              FUN_1093972f4(plVar21 + 0x135,iVar47,iVar31);
                              FUN_1093972f4(plVar21 + 0x14f,iVar47,iVar31);
                              FUN_1093972f4(plVar21 + 0x169,iVar47,iVar31);
                              FUN_1093972f4(plVar21 + 0x183,iVar47,iVar31);
                              FUN_1093972f4(plVar21 + 0x19d,iVar47,iVar31);
                              plVar25 = plVar21 + 0x1b7;
                              FUN_1093972f4(plVar25,iVar47,iVar31);
                              uStack_3d8._0_4_ = 0;
                              uStack_3d8._4_4_ = 0;
                              ppuStack_330._0_4_ = 0xc1020006;
                              uStack_320 = 0x100000001;
                              plStack_328 = &uStack_3d8;
                              FUN_109a91d90();
                              plVar26 = plVar21 + 0x1b7;
                              FUN_109a48a40(plVar26,&ppuStack_330,plVar25);
                              uStack_3d8._0_4_ = 0;
                              uStack_3d8._4_4_ = 0;
                              ppuStack_330 = (undefined **)CONCAT44(ppuStack_330._4_4_,0xc1020006);
                              uStack_320 = 0x100000001;
                              plStack_328 = &uStack_3d8;
                              FUN_109a91d90();
                              FUN_109a48a40(plVar21 + 0x1c3,&ppuStack_330,plVar26);
                              plVar25 = plVar21 + 0x1e9;
                              FUN_1093972f4(plVar25,iVar47,iVar31);
                              plVar26 = plVar21 + 0x203;
                              FUN_1093972f4(plVar26,iVar47,iVar31);
                              plVar38 = plVar21 + 0x21d;
                              FUN_1093972f4(plVar38,iVar47,iVar31);
                              plVar3 = plVar21 + 0x237;
                              FUN_1093972f4(plVar3,iVar47,iVar31);
                              plVar4 = plVar21 + 0x251;
                              FUN_1093972f4(plVar4,iVar47,iVar31);
                              plVar5 = plVar21 + 0x26b;
                              FUN_1093972f4(plVar5,iVar47,iVar31);
                              ppuVar2 = (undefined **)(plVar21 + 5);
                              if (((2 < *(int *)((long)plVar21 + 0x2c)) ||
                                  ((int)plVar21[6] != iVar31)) ||
                                 ((*(int *)((long)plVar21 + 0x34) != iVar47 ||
                                  ((((ulong)*ppuVar2 & 0xfff) != 5 || (plVar21[7] == 0)))))) {
                                ppuStack_330 = ppuVar10;
                                FUN_109a83fd0(ppuVar2,2,&ppuStack_330,5);
                              }
                              ppuVar10 = (undefined **)(plVar21 + 0x11);
                              if ((((2 < *(int *)((long)plVar21 + 0x8c)) ||
                                   ((int)plVar21[0x12] != iVar31)) ||
                                  (*(int *)((long)plVar21 + 0x94) != iVar47)) ||
                                 ((((ulong)*ppuVar10 & 0xfff) != 5 || (plVar21[0x13] == 0)))) {
                                ppuStack_330 = ppuVar11;
                                FUN_109a83fd0(ppuVar10,2,&ppuStack_330,5);
                              }
                              ppuVar11 = (undefined **)(plVar21 + 0x1d);
                              if (((2 < *(int *)((long)plVar21 + 0xec)) ||
                                  ((int)plVar21[0x1e] != iVar31)) ||
                                 ((*(int *)((long)plVar21 + 0xf4) != iVar47 ||
                                  ((((ulong)*ppuVar11 & 0xfff) != 5 || (plVar21[0x1f] == 0)))))) {
                                ppuStack_330 = ppuVar12;
                                FUN_109a83fd0(ppuVar11,2,&ppuStack_330,5);
                              }
                              ppuVar12 = (undefined **)(plVar21 + 0x29);
                              if ((((2 < *(int *)((long)plVar21 + 0x14c)) ||
                                   ((int)plVar21[0x2a] != iVar31)) ||
                                  (*(int *)((long)plVar21 + 0x154) != iVar47)) ||
                                 ((((ulong)*ppuVar12 & 0xfff) != 5 || (plVar21[0x2b] == 0)))) {
                                ppuStack_330 = ppuVar13;
                                FUN_109a83fd0(ppuVar12,2,&ppuStack_330,5);
                              }
                              ppuVar13 = (undefined **)(plVar21 + 0x35);
                              if (((2 < *(int *)((long)plVar21 + 0x1ac)) ||
                                  ((int)plVar21[0x36] != iVar31)) ||
                                 ((*(int *)((long)plVar21 + 0x1b4) != iVar47 ||
                                  ((((ulong)*ppuVar13 & 0xfff) != 5 || (plVar21[0x37] == 0)))))) {
                                ppuStack_330 = ppuVar14;
                                FUN_109a83fd0(ppuVar13,2,&ppuStack_330,5);
                              }
                              ppuVar14 = (undefined **)(plVar21 + 0x41);
                              if ((((2 < *(int *)((long)plVar21 + 0x20c)) ||
                                   ((int)plVar21[0x42] != iVar31)) ||
                                  (*(int *)((long)plVar21 + 0x214) != iVar47)) ||
                                 ((((ulong)*ppuVar14 & 0xfff) != 5 || (plVar21[0x43] == 0)))) {
                                ppuStack_330 = ppuVar15;
                                FUN_109a83fd0(ppuVar14,2,&ppuStack_330,5);
                              }
                              ppuVar15 = (undefined **)(plVar21 + 0x4d);
                              if (((2 < *(int *)((long)plVar21 + 0x26c)) ||
                                  ((int)plVar21[0x4e] != iVar31)) ||
                                 ((*(int *)((long)plVar21 + 0x274) != iVar47 ||
                                  ((((ulong)*ppuVar15 & 0xfff) != 5 || (plVar21[0x4f] == 0)))))) {
                                ppuStack_330 = ppuVar16;
                                FUN_109a83fd0(ppuVar15,2,&ppuStack_330,5);
                              }
                              ppuVar16 = (undefined **)(plVar21 + 0x59);
                              if ((((2 < *(int *)((long)plVar21 + 0x2cc)) ||
                                   ((int)plVar21[0x5a] != iVar31)) ||
                                  (*(int *)((long)plVar21 + 0x2d4) != iVar47)) ||
                                 ((((ulong)*ppuVar16 & 0xfff) != 5 || (plVar21[0x5b] == 0)))) {
                                ppuStack_330 = ppuVar17;
                                FUN_109a83fd0(ppuVar16,2,&ppuStack_330,5);
                              }
                              FUN_1093972f4(plVar21 + 0x65,iVar47,iVar31);
                              FUN_1093972f4(plVar21 + 0x7f,iVar47,iVar31);
                              FUN_1093972f4(plVar21 + 0x99,iVar47,iVar31);
                              FUN_1093972f4(plVar21 + 0xb3,iVar47,iVar31);
                              FUN_1093972f4(plVar21 + 0xcd,iVar47,iVar31);
                              FUN_1093972f4(plVar21 + 0xe7,iVar47,iVar31);
                              FUN_1093972f4(plVar21 + 0x101,iVar47,iVar31);
                              FUN_1093972f4(plVar21 + 0x11b,iVar47,iVar31);
                              puVar35 = (uint *)(plVar21 + 0x1d1);
                              if (((2 < *(int *)((long)plVar21 + 0xe8c)) ||
                                  ((int)plVar21[0x1d2] != iVar31)) ||
                                 ((*(int *)((long)plVar21 + 0xe94) != iVar47 ||
                                  (((*puVar35 & 0xfff) != 5 || (plVar21[0x1d3] == 0)))))) {
                                ppuStack_330 = ppuVar18;
                                FUN_109a83fd0(puVar35,2,&ppuStack_330,5);
                              }
                              puVar32 = (uint *)(plVar21 + 0x1dd);
                              if ((((2 < *(int *)((long)plVar21 + 0xeec)) ||
                                   ((int)plVar21[0x1de] != iVar31)) ||
                                  (*(int *)((long)plVar21 + 0xef4) != iVar47)) ||
                                 (((*puVar32 & 0xfff) != 5 || (plVar21[0x1df] == 0)))) {
                                ppuStack_330 = ppuVar19;
                                FUN_109a83fd0(puVar32,2,&ppuStack_330,5);
                              }
                              uStack_3d8._0_4_ = 0x42ff0000;
                              uStack_3cc = 0;
                              uStack_3c8 = 0;
                              uStack_3d8._4_4_ = 0;
                              uStack_3d0 = 0;
                              plStack_328 = &uStack_3d8;
                              puStack_398 = &uStack_3d0;
                              uStack_3bc = 0;
                              uStack_3b8 = 0;
                              uStack_3c4 = 0;
                              uStack_3c0 = 0;
                              uStack_3ac = 0;
                              uStack_3b4 = 0;
                              uStack_3b0 = 0;
                              lStack_3a0 = 0;
                              uStack_3a8 = 0;
                              uStack_3a4 = 0;
                              uStack_380 = 0;
                              uStack_388 = 0;
                              auStack_438._0_4_ = 0x42ff0000;
                              puStack_3f8 = auStack_430;
                              uStack_42c = 0;
                              uStack_428 = 0;
                              stack0xfffffffffffffbcc = 0;
                              uStack_41c = 0;
                              uStack_418 = 0;
                              uStack_424 = 0;
                              uStack_420 = 0;
                              uStack_40c = 0;
                              uStack_414 = 0;
                              uStack_410 = 0;
                              lStack_400 = 0;
                              uStack_408 = 0;
                              uStack_404 = 0;
                              uStack_3e0 = 0;
                              uStack_3e8 = 0;
                              ppuStack_330 = (undefined **)CONCAT44(ppuStack_330._4_4_,0x2010000);
                              uStack_320 = 0;
                              puStack_3f0 = &uStack_3e8;
                              puStack_390 = &uStack_388;
                              FUN_109a41858(0x3ff0000000000000,0,&uStack_5c0,&ppuStack_330,5);
                              uVar6 = puVar24[2];
                              if (0 < (int)uVar6) {
                                uVar40 = 0;
                                lVar39 = puVar29[2];
                                lVar41 = *(long *)(puVar24 + 4);
                                lVar42 = **(long **)(puVar24 + 0x12);
                                lVar43 = *(long *)puVar29[9];
                                lVar44 = plVar21[0x1d3];
                                lVar45 = *(long *)plVar21[0x1da];
                                lVar37 = plVar21[0x1df];
                                lVar46 = *(long *)plVar21[0x1e6];
                                uVar7 = puVar24[3];
                                do {
                                  if (0 < (int)uVar7) {
                                    uVar34 = 0;
                                    do {
                                      *(float *)(lVar44 + uVar34 * 4) =
                                           *(float *)(lVar41 + uVar34 * 4) +
                                           (float)(uVar34 & 0xffffffff);
                                      *(float *)(lVar37 + uVar34 * 4) =
                                           *(float *)(lVar39 + uVar34 * 4) +
                                           (float)(uVar40 & 0xffffffff);
                                      uVar34 = uVar34 + 1;
                                    } while (uVar7 != uVar34);
                                  }
                                  uVar40 = uVar40 + 1;
                                  lVar37 = lVar37 + lVar46;
                                  lVar39 = lVar39 + lVar43;
                                  lVar44 = lVar44 + lVar45;
                                  lVar41 = lVar41 + lVar42;
                                } while (uVar40 != uVar6);
                              }
                              uStack_488 = 0;
                              uStack_484 = 0;
                              uStack_498 = 0x1010000;
                              uStack_490 = &uStack_3d8;
                              lStack_348 = CONCAT44(lStack_348._4_4_,0x2010000);
                              puStack_340 = auStack_438;
                              uStack_338 = 0;
                              uStack_350 = 0;
                              lStack_360 = CONCAT44(lStack_360._4_4_,0x81010005);
                              uStack_368 = 0;
                              lStack_378 = CONCAT44(lStack_378._4_4_,0x81010005);
                              plStack_328 = (long *)0x0;
                              ppuStack_330 = (undefined **)0x0;
                              lStack_318 = 0;
                              uStack_320 = 0;
                              puStack_370 = puVar32;
                              puStack_358 = puVar35;
                              FUN_109b146f4(&uStack_498,&lStack_348,&lStack_360,&lStack_378,1,1,
                                            &ppuStack_330);
                              uStack_498 = 0x42ff0000;
                              puStack_458 = &uStack_490;
                              uStack_490._4_4_ = 0;
                              uStack_488 = 0;
                              iStack_494 = 0;
                              uStack_490._0_4_ = 0;
                              uStack_47c = 0;
                              uStack_478 = 0;
                              uStack_484 = 0;
                              uStack_480 = 0;
                              uStack_46c = 0;
                              uStack_474 = 0;
                              uStack_470 = 0;
                              lStack_460 = 0;
                              uStack_468 = 0;
                              uStack_464 = 0;
                              uStack_440 = 0;
                              uStack_448 = 0;
                              puStack_340 = (undefined1 *)0x0;
                              lStack_348 = 0;
                              uStack_338 = 0;
                              ppuStack_330 = (undefined **)&uStack_560;
                              puStack_450 = &uStack_448;
                              func_0x000109397694(&lStack_348,&ppuStack_330);
                              ppuStack_330 = (undefined **)auStack_438;
                              func_0x000109397694(&lStack_348,&ppuStack_330);
                              puStack_358 = (uint *)0x0;
                              lStack_360 = 0;
                              uStack_350 = 0;
                              ppuStack_330 = (undefined **)auStack_438;
                              func_0x000109397694(&lStack_360,&ppuStack_330);
                              ppuStack_330 = (undefined **)&uStack_560;
                              func_0x000109397694(&lStack_360,&ppuStack_330);
                              puStack_370 = (uint *)0x0;
                              lStack_378 = 0;
                              uStack_368 = 0;
                              ppuStack_330 = (undefined **)&uStack_498;
                              func_0x000109397694(&lStack_378,&ppuStack_330);
                              ppuStack_330 = ppuVar11;
                              func_0x000109397694(&lStack_378,&ppuStack_330);
                              lStack_4b0 = 0;
                              lStack_4a8 = 0;
                              uStack_4a0 = 0;
                              func_0x000109397758(&lStack_4b0,FUN_109397818,0);
                              func_0x000109397758(&lStack_4b0,FUN_1093978c4,0);
                              lVar39 = lStack_4b0;
                              lStack_4e0 = 0x200000000;
                              lStack_4c0 = 0;
                              uStack_4b8 = 0;
                              lStack_4c8 = 0;
                              FUN_10939b84c(&lStack_4c8,lStack_4b0,lStack_4a8,
                                            lStack_4a8 - lStack_4b0 >> 4);
                              lVar37 = lStack_4c8;
                              FUN_1093974f4(&ppuStack_330,plVar21,lStack_4c8,lStack_4c0,&lStack_348,
                                            &lStack_360,&lStack_378);
                              func_0x000109aa87cc(0xbff0000000000000,&lStack_4e0,&ppuStack_330);
                              ppuStack_330 = &PTR_FUN_110af5090;
                              if (lStack_2d8 != 0) {
                                lStack_2d0 = lStack_2d8;
                                __ZdlPv();
                              }
                              if (CONCAT71(uStack_2ef,uStack_2f0) != 0) {
                                __ZdlPv();
                              }
                              if (plStack_308 != (long *)0x0) {
                                plStack_300 = plStack_308;
                                __ZdlPv();
                              }
                              if (uStack_320 != 0) {
                                lStack_318 = uStack_320;
                                __ZdlPv();
                              }
                              if (lVar37 != 0) {
                                lStack_4c0 = lVar37;
                                __ZdlPv(lVar37);
                              }
                              if (lVar39 != 0) {
                                __ZdlPv(lVar39);
                              }
                              if (lStack_378 != 0) {
                                puStack_370 = (uint *)lStack_378;
                                __ZdlPv();
                              }
                              if (lStack_360 != 0) {
                                puStack_358 = (uint *)lStack_360;
                                __ZdlPv();
                              }
                              if (lStack_348 != 0) {
                                puStack_340 = (undefined1 *)lStack_348;
                                __ZdlPv();
                              }
                              FUN_109396e40(plVar21 + 0x99,ppuVar11);
                              puStack_340 = (undefined1 *)0x0;
                              lStack_348 = 0;
                              uStack_338 = 0;
                              ppuStack_330 = (undefined **)&uStack_498;
                              func_0x000109397694(&lStack_348,&ppuStack_330);
                              ppuStack_330 = (undefined **)&uStack_498;
                              func_0x000109397694(&lStack_348,&ppuStack_330);
                              ppuStack_330 = ppuVar11;
                              func_0x000109397694(&lStack_348,&ppuStack_330);
                              ppuStack_330 = ppuVar11;
                              func_0x000109397694(&lStack_348,&ppuStack_330);
                              puStack_358 = (uint *)0x0;
                              lStack_360 = 0;
                              uStack_350 = 0;
                              ppuStack_330 = ppuVar2;
                              func_0x000109397694(&lStack_360,&ppuStack_330);
                              ppuStack_330 = ppuVar10;
                              func_0x000109397694(&lStack_360,&ppuStack_330);
                              ppuStack_330 = ppuVar15;
                              func_0x000109397694(&lStack_360,&ppuStack_330);
                              ppuStack_330 = ppuVar16;
                              func_0x000109397694(&lStack_360,&ppuStack_330);
                              puStack_370 = (uint *)0x0;
                              lStack_378 = 0;
                              uStack_368 = 0;
                              ppuStack_330 = (undefined **)(plVar21 + 0x65);
                              func_0x000109397694(&lStack_378,&ppuStack_330);
                              ppuStack_330 = (undefined **)(plVar21 + 0x7f);
                              func_0x000109397694(&lStack_378,&ppuStack_330);
                              ppuStack_330 = (undefined **)(plVar21 + 0x101);
                              func_0x000109397694(&lStack_378,&ppuStack_330);
                              ppuStack_330 = (undefined **)(plVar21 + 0x11b);
                              func_0x000109397694(&lStack_378,&ppuStack_330);
                              lStack_4b0 = 0;
                              lStack_4a8 = 0;
                              uStack_4a0 = 0;
                              func_0x000109397758(&lStack_4b0,0x1093979a0,0);
                              func_0x000109397758(&lStack_4b0,0x109397a14,0);
                              func_0x000109397758(&lStack_4b0,0x1093979a0,0);
                              func_0x000109397758(&lStack_4b0,0x109397a14,0);
                              lVar39 = lStack_4b0;
                              lStack_500 = 0x400000000;
                              lStack_4d8 = 0;
                              uStack_4d0 = 0;
                              lStack_4e0 = 0;
                              FUN_10939b84c(&lStack_4e0,lStack_4b0,lStack_4a8,
                                            lStack_4a8 - lStack_4b0 >> 4);
                              lVar37 = lStack_4e0;
                              FUN_1093974f4(&ppuStack_330,plVar21,lStack_4e0,lStack_4d8,&lStack_348,
                                            &lStack_360,&lStack_378);
                              func_0x000109aa87cc(0xbff0000000000000,&lStack_500,&ppuStack_330);
                              ppuStack_330 = &PTR_FUN_110af5090;
                              if (lStack_2d8 != 0) {
                                lStack_2d0 = lStack_2d8;
                                __ZdlPv();
                              }
                              if (CONCAT71(uStack_2ef,uStack_2f0) != 0) {
                                __ZdlPv();
                              }
                              if (plStack_308 != (long *)0x0) {
                                plStack_300 = plStack_308;
                                __ZdlPv();
                              }
                              if (uStack_320 != 0) {
                                lStack_318 = uStack_320;
                                __ZdlPv();
                              }
                              if (lVar37 != 0) {
                                lStack_4d8 = lVar37;
                                __ZdlPv(lVar37);
                              }
                              if (lVar39 != 0) {
                                __ZdlPv(lVar39);
                              }
                              if (lStack_378 != 0) {
                                puStack_370 = (uint *)lStack_378;
                                __ZdlPv();
                              }
                              if (lStack_360 != 0) {
                                puStack_358 = (uint *)lStack_360;
                                __ZdlPv();
                              }
                              if (lStack_348 != 0) {
                                puStack_340 = (undefined1 *)lStack_348;
                                __ZdlPv();
                              }
                              puStack_340 = (undefined1 *)0x0;
                              lStack_348 = 0;
                              uStack_338 = 0;
                              ppuStack_330 = ppuVar2;
                              func_0x000109397694(&lStack_348,&ppuStack_330);
                              ppuStack_330 = ppuVar2;
                              func_0x000109397694(&lStack_348,&ppuStack_330);
                              ppuStack_330 = ppuVar10;
                              func_0x000109397694(&lStack_348,&ppuStack_330);
                              puStack_358 = (uint *)0x0;
                              lStack_360 = 0;
                              uStack_350 = 0;
                              ppuStack_330 = ppuVar12;
                              func_0x000109397694(&lStack_360,&ppuStack_330);
                              ppuStack_330 = ppuVar13;
                              func_0x000109397694(&lStack_360,&ppuStack_330);
                              ppuStack_330 = ppuVar14;
                              func_0x000109397694(&lStack_360,&ppuStack_330);
                              puStack_370 = (uint *)0x0;
                              lStack_378 = 0;
                              uStack_368 = 0;
                              ppuStack_330 = (undefined **)(plVar21 + 0xb3);
                              func_0x000109397694(&lStack_378,&ppuStack_330);
                              ppuStack_330 = (undefined **)(plVar21 + 0xcd);
                              func_0x000109397694(&lStack_378,&ppuStack_330);
                              ppuStack_330 = (undefined **)(plVar21 + 0xe7);
                              func_0x000109397694(&lStack_378,&ppuStack_330);
                              lStack_4b0 = 0;
                              lStack_4a8 = 0;
                              uStack_4a0 = 0;
                              func_0x000109397758(&lStack_4b0,0x1093979a0,0);
                              func_0x000109397758(&lStack_4b0,0x109397a14,0);
                              func_0x000109397758(&lStack_4b0,0x109397a14,0);
                              lVar39 = lStack_4b0;
                              uStack_4e8 = 0x300000000;
                              lStack_4f8 = 0;
                              uStack_4f0 = 0;
                              lStack_500 = 0;
                              FUN_10939b84c(&lStack_500,lStack_4b0,lStack_4a8,
                                            lStack_4a8 - lStack_4b0 >> 4);
                              lVar37 = lStack_500;
                              FUN_1093974f4(&ppuStack_330,plVar21,lStack_500,lStack_4f8,&lStack_348,
                                            &lStack_360,&lStack_378);
                              func_0x000109aa87cc(0xbff0000000000000,&uStack_4e8,&ppuStack_330);
                              ppuStack_330 = &PTR_FUN_110af5090;
                              if (lStack_2d8 != 0) {
                                lStack_2d0 = lStack_2d8;
                                __ZdlPv();
                              }
                              if (CONCAT71(uStack_2ef,uStack_2f0) != 0) {
                                __ZdlPv();
                              }
                              if (plStack_308 != (long *)0x0) {
                                plStack_300 = plStack_308;
                                __ZdlPv();
                              }
                              if (uStack_320 != 0) {
                                lStack_318 = uStack_320;
                                __ZdlPv();
                              }
                              if (lVar37 != 0) {
                                lStack_4f8 = lVar37;
                                __ZdlPv(lVar37);
                              }
                              if (lVar39 != 0) {
                                __ZdlPv(lVar39);
                              }
                              if (lStack_378 != 0) {
                                puStack_370 = (uint *)lStack_378;
                                __ZdlPv();
                              }
                              if (lStack_360 != 0) {
                                puStack_358 = (uint *)lStack_360;
                                __ZdlPv();
                              }
                              if (lStack_348 != 0) {
                                puStack_340 = (undefined1 *)lStack_348;
                                __ZdlPv();
                              }
                              if (lStack_460 != 0) {
                                piVar1 = (int *)(lStack_460 + 0x14);
                                do {
                                  iVar31 = *piVar1;
                                  cVar8 = '\x01';
                                  bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                  if (bVar9) {
                                    *piVar1 = iVar31 + -1;
                                    cVar8 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar8 != '\0');
                                if (iVar31 + -1 == 0) {
                                  func_0x000109a848d4(&uStack_498);
                                }
                              }
                              lStack_460 = 0;
                              uStack_480 = 0;
                              uStack_47c = 0;
                              uStack_488 = 0;
                              uStack_484 = 0;
                              uStack_470 = 0;
                              uStack_46c = 0;
                              uStack_478 = 0;
                              uStack_474 = 0;
                              if (0 < iStack_494) {
                                lVar37 = 0;
                                do {
                                  *(undefined4 *)((long)puStack_458 + lVar37 * 4) = 0;
                                  lVar37 = lVar37 + 1;
                                } while (lVar37 < iStack_494);
                              }
                              if (puStack_450 != &uStack_448 && puStack_450 != (undefined8 *)0x0) {
                                _free(puStack_450[-1]);
                              }
                              if (lStack_400 != 0) {
                                piVar1 = (int *)(lStack_400 + 0x14);
                                do {
                                  iVar31 = *piVar1;
                                  cVar8 = '\x01';
                                  bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                  if (bVar9) {
                                    *piVar1 = iVar31 + -1;
                                    cVar8 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar8 != '\0');
                                if (iVar31 + -1 == 0) {
                                  func_0x000109a848d4(auStack_438);
                                }
                              }
                              lStack_400 = 0;
                              uStack_420 = 0;
                              uStack_41c = 0;
                              uStack_428 = 0;
                              uStack_424 = 0;
                              uStack_410 = 0;
                              uStack_40c = 0;
                              uStack_418 = 0;
                              uStack_414 = 0;
                              if (0 < (int)auStack_438._4_4_) {
                                lVar37 = 0;
                                do {
                                  *(undefined4 *)(puStack_3f8 + lVar37 * 4) = 0;
                                  lVar37 = lVar37 + 1;
                                } while (lVar37 < (int)auStack_438._4_4_);
                              }
                              if (puStack_3f0 != &uStack_3e8 && puStack_3f0 != (undefined8 *)0x0) {
                                _free(puStack_3f0[-1]);
                              }
                              if (lStack_3a0 != 0) {
                                piVar1 = (int *)(lStack_3a0 + 0x14);
                                do {
                                  iVar31 = *piVar1;
                                  cVar8 = '\x01';
                                  bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                  if (bVar9) {
                                    *piVar1 = iVar31 + -1;
                                    cVar8 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar8 != '\0');
                                if (iVar31 + -1 == 0) {
                                  func_0x000109a848d4(&uStack_3d8);
                                }
                              }
                              lStack_3a0 = 0;
                              uStack_3c0 = 0;
                              uStack_3bc = 0;
                              uStack_3c8 = 0;
                              uStack_3c4 = 0;
                              uStack_3b0 = 0;
                              uStack_3ac = 0;
                              uStack_3b8 = 0;
                              uStack_3b4 = 0;
                              if (0 < (int)uStack_3d8._4_4_) {
                                lVar37 = 0;
                                do {
                                  puStack_398[lVar37] = 0;
                                  lVar37 = lVar37 + 1;
                                } while (lVar37 < (int)uStack_3d8._4_4_);
                              }
                              if (puStack_390 != &uStack_388 && puStack_390 != (undefined8 *)0x0) {
                                _free(puStack_390[-1]);
                              }
                              FUN_109396e40(plVar4,puVar24);
                              FUN_109396e40(plVar5,puVar29);
                              ppuStack_330._0_4_ = 0x82010005;
                              uStack_320 = 0;
                              plStack_328 = plVar25;
                              FUN_109a479a0(plVar4,&ppuStack_330);
                              ppuStack_330._0_4_ = 0x82010005;
                              uStack_320 = 0;
                              plStack_328 = plVar21 + 0x1f5;
                              FUN_109a479a0(plVar21 + 0x25d,&ppuStack_330);
                              ppuStack_330._0_4_ = 0x82010005;
                              uStack_320 = 0;
                              plStack_328 = plVar26;
                              FUN_109a479a0(plVar5,&ppuStack_330);
                              ppuStack_330._0_4_ = 0x82010005;
                              uStack_320 = 0;
                              plVar27 = plVar21 + 0x277;
                              plStack_328 = plVar21 + 0x20f;
                              FUN_109a479a0(plVar27,&ppuStack_330);
                              uStack_3d8._0_4_ = 0;
                              uStack_3d8._4_4_ = 0;
                              ppuStack_330._0_4_ = 0xc1020006;
                              uStack_320 = 0x100000001;
                              plStack_328 = &uStack_3d8;
                              FUN_109a91d90();
                              plVar28 = plVar38;
                              FUN_109a48a40(plVar38,&ppuStack_330,plVar27);
                              uStack_3d8._0_4_ = 0;
                              uStack_3d8._4_4_ = 0;
                              ppuStack_330._0_4_ = 0xc1020006;
                              uStack_320 = 0x100000001;
                              plStack_328 = &uStack_3d8;
                              FUN_109a91d90();
                              plVar27 = plVar21 + 0x229;
                              FUN_109a48a40(plVar27,&ppuStack_330,plVar28);
                              uStack_3d8._0_4_ = 0;
                              uStack_3d8._4_4_ = 0;
                              ppuStack_330._0_4_ = 0xc1020006;
                              uStack_320 = 0x100000001;
                              plStack_328 = &uStack_3d8;
                              FUN_109a91d90();
                              plVar28 = plVar3;
                              FUN_109a48a40(plVar3,&ppuStack_330,plVar27);
                              uStack_3d8._0_4_ = 0;
                              uStack_3d8._4_4_ = 0;
                              ppuStack_330 = (undefined **)CONCAT44(ppuStack_330._4_4_,0xc1020006);
                              uStack_320 = 0x100000001;
                              plStack_328 = &uStack_3d8;
                              FUN_109a91d90();
                              FUN_109a48a40(plVar21 + 0x243,&ppuStack_330,plVar28);
                              if (0 < (int)plVar21[1]) {
                                iVar31 = 0;
                                dVar48 = (double)uVar36;
                                do {
                                  uStack_3d8._0_4_ = 0;
                                  ppuStack_330 = &PTR_FUN_110af50b8;
                                  lStack_318._0_4_ = (int)uStack_558;
                                  plStack_300._0_1_ = 1;
                                  uStack_320 = CONCAT44((int)((double)(int)uStack_558 / dVar48),
                                                        uVar36);
                                  uStack_3d8._4_4_ = uVar36;
                                  plStack_328 = plVar21;
                                  plStack_310 = plVar38;
                                  plStack_308 = plVar3;
                                  func_0x000109aa87cc(0xbff0000000000000,&uStack_3d8,&ppuStack_330);
                                  uStack_3d8._0_4_ = 0;
                                  ppuStack_330 = &PTR_FUN_110af50b8;
                                  lStack_318._0_4_ = (int)uStack_558;
                                  plStack_300 = (long *)((ulong)plStack_300._1_7_ << 8);
                                  uStack_320 = CONCAT44((int)((double)(int)uStack_558 / dVar48),
                                                        uVar36);
                                  uStack_3d8._4_4_ = uVar36;
                                  plStack_328 = plVar21;
                                  plStack_310 = plVar38;
                                  plStack_308 = plVar3;
                                  func_0x000109aa87cc(0xbff0000000000000,&uStack_3d8,&ppuStack_330);
                                  uStack_3d8._0_4_ = 0;
                                  ppuStack_330 = &PTR_DAT_110af50e0;
                                  lStack_318._0_4_ = (int)uStack_558;
                                  uStack_2f0 = 1;
                                  uStack_320 = CONCAT44((int)((double)(int)uStack_558 / dVar48),
                                                        uVar36);
                                  uStack_3d8._4_4_ = uVar36;
                                  plStack_328 = plVar21;
                                  plStack_310 = plVar4;
                                  plStack_308 = plVar5;
                                  plStack_300 = plVar25;
                                  plStack_2f8 = plVar26;
                                  func_0x000109aa87cc(0xbff0000000000000,&uStack_3d8,&ppuStack_330);
                                  uStack_3d8._0_4_ = 0;
                                  ppuStack_330 = &PTR_DAT_110af50e0;
                                  lStack_318._0_4_ = (int)uStack_558;
                                  uStack_2f0 = 0;
                                  uStack_320 = CONCAT44((int)((double)(int)uStack_558 / dVar48),
                                                        uVar36);
                                  uStack_3d8._4_4_ = uVar36;
                                  plStack_328 = plVar21;
                                  plStack_310 = plVar4;
                                  plStack_308 = plVar5;
                                  plStack_300 = plVar25;
                                  plStack_2f8 = plVar26;
                                  func_0x000109aa87cc(0xbff0000000000000,&uStack_3d8,&ppuStack_330);
                                  uStack_3d8._0_4_ = 0;
                                  ppuStack_330 = &PTR_DAT_110af5108;
                                  plStack_300._0_1_ = 1;
                                  lStack_318._0_4_ = (int)uStack_558 + -1;
                                  uStack_320 = CONCAT44((int)((double)(int)lStack_318 / dVar48),
                                                        uVar36);
                                  uStack_3d8._4_4_ = uVar36;
                                  plStack_328 = plVar21;
                                  plStack_310 = plVar4;
                                  plStack_308 = plVar5;
                                  func_0x000109aa87cc(0xbff0000000000000,&uStack_3d8,&ppuStack_330);
                                  uStack_3d8._0_4_ = 0;
                                  ppuStack_330 = &PTR_DAT_110af5108;
                                  plStack_300 = (long *)((ulong)plStack_300._1_7_ << 8);
                                  lStack_318 = CONCAT44(lStack_318._4_4_,(int)uStack_558 + -1);
                                  uStack_320 = CONCAT44((int)((double)((int)uStack_558 + -1) /
                                                             dVar48),uVar36);
                                  uStack_3d8._4_4_ = uVar36;
                                  plStack_328 = plVar21;
                                  plStack_310 = plVar4;
                                  plStack_308 = plVar5;
                                  func_0x000109aa87cc(0xbff0000000000000,&uStack_3d8,&ppuStack_330);
                                  if (0 < *(int *)((long)plVar21 + 0xc)) {
                                    iVar47 = 0;
                                    do {
                                      uStack_3d8._0_4_ = 0;
                                      ppuStack_330 = &PTR_DAT_110af5130;
                                      lStack_318._0_4_ = (int)uStack_558;
                                      plStack_300._0_1_ = 1;
                                      uStack_320 = CONCAT44((int)((double)(int)uStack_558 / dVar48),
                                                            uVar36);
                                      uStack_3d8._4_4_ = uVar36;
                                      plStack_328 = plVar21;
                                      plStack_310 = plVar38;
                                      plStack_308 = plVar3;
                                      func_0x000109aa87cc(0xbff0000000000000,&uStack_3d8,
                                                          &ppuStack_330);
                                      uStack_3d8._0_4_ = 0;
                                      ppuStack_330 = &PTR_DAT_110af5130;
                                      lStack_318 = CONCAT44(lStack_318._4_4_,(int)uStack_558);
                                      plStack_300 = (long *)((ulong)plStack_300._1_7_ << 8);
                                      uStack_320 = CONCAT44((int)((double)(int)uStack_558 / dVar48),
                                                            uVar36);
                                      uStack_3d8._4_4_ = uVar36;
                                      plStack_328 = plVar21;
                                      plStack_310 = plVar38;
                                      plStack_308 = plVar3;
                                      func_0x000109aa87cc(0xbff0000000000000,&uStack_3d8,
                                                          &ppuStack_330);
                                      iVar47 = iVar47 + 1;
                                    } while (iVar47 < *(int *)((long)plVar21 + 0xc));
                                  }
                                  FUN_109a7c6f4(&ppuStack_330,plVar4,plVar38);
                                  (**(code **)(*ppuStack_330 + 0x18))
                                            (ppuStack_330,&ppuStack_330,plVar25,5);
                                  FUN_10918eb6c(&ppuStack_330);
                                  FUN_109a7c6f4(&ppuStack_330,plVar21 + 0x25d,plVar21 + 0x229);
                                  (**(code **)(*ppuStack_330 + 0x18))
                                            (ppuStack_330,&ppuStack_330,plVar21 + 0x1f5,5);
                                  FUN_10918eb6c(&ppuStack_330);
                                  FUN_1093971b0(plVar25);
                                  FUN_109a7c6f4(&ppuStack_330,plVar5,plVar3);
                                  (**(code **)(*ppuStack_330 + 0x18))
                                            (ppuStack_330,&ppuStack_330,plVar26,5);
                                  FUN_10918eb6c(&ppuStack_330);
                                  FUN_109a7c6f4(&ppuStack_330,plVar21 + 0x277,plVar21 + 0x243);
                                  (**(code **)(*ppuStack_330 + 0x18))
                                            (ppuStack_330,&ppuStack_330,plVar21 + 0x20f,5);
                                  FUN_10918eb6c(&ppuStack_330);
                                  FUN_1093971b0(plVar26);
                                  iVar31 = iVar31 + 1;
                                } while (iVar31 < (int)plVar21[1]);
                              }
                              FUN_10939705c(puVar24,plVar25);
                              FUN_10939705c(puVar29);
                              iVar31 = (int)plVar26;
                              if (uStack_588 != 0) {
                                piVar1 = (int *)(uStack_588 + 0x14);
                                do {
                                  iVar47 = *piVar1;
                                  cVar8 = '\x01';
                                  bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                  if (bVar9) {
                                    *piVar1 = iVar47 + -1;
                                    cVar8 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar8 != '\0');
                                if (iVar47 + -1 == 0) {
                                  puVar29 = &uStack_5c0;
                                  func_0x000109a848d4(puVar29);
                                }
                              }
                              uStack_588 = 0;
                              uStack_5a8 = 0;
                              uStack_5b0 = 0;
                              uStack_598 = 0;
                              uStack_5a0 = 0;
                              if (0 < uStack_5c0._4_4_) {
                                lVar37 = 0;
                                do {
                                  *(undefined4 *)(uStack_580 + lVar37 * 4) = 0;
                                  lVar37 = lVar37 + 1;
                                } while (lVar37 < uStack_5c0._4_4_);
                              }
                              if (puStack_578 != &uStack_570 && puStack_578 != (undefined8 *)0x0) {
                                puVar29 = (undefined8 *)puStack_578[-1];
                                _free(puVar29);
                              }
                              if (uStack_528 != 0) {
                                piVar1 = (int *)(uStack_528 + 0x14);
                                do {
                                  iVar47 = *piVar1;
                                  cVar8 = '\x01';
                                  bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                  if (bVar9) {
                                    *piVar1 = iVar47 + -1;
                                    cVar8 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar8 != '\0');
                                if (iVar47 + -1 == 0) {
                                  puVar29 = &uStack_560;
                                  func_0x000109a848d4(puVar29);
                                }
                              }
                              uStack_528 = 0;
                              uStack_548 = 0;
                              uStack_550 = 0;
                              uStack_538 = 0;
                              uStack_540 = 0;
                              if (0 < uStack_560._4_4_) {
                                lVar37 = 0;
                                do {
                                  piStack_520[lVar37] = 0;
                                  lVar37 = lVar37 + 1;
                                } while (lVar37 < uStack_560._4_4_);
                              }
                              if (puStack_518 != &uStack_510 && puStack_518 != (undefined8 *)0x0) {
                                puVar29 = (undefined8 *)puStack_518[-1];
                                _free(puVar29);
                              }
                              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
                                return;
                              }
                              ___stack_chk_fail();
                              if (iVar31 != 0) {
                                func_0x000104bd46a0(puVar29);
                                func_0x00010567aa40(&uStack_560);
                              }
                              __Unwind_Resume(puVar29);
                              return;
                            }
                            puVar30 = (undefined4 *)0x1c;
                            func_0x000107c2ae8c();
                            *puVar30 = 1;
                            ppuStack_330 = (undefined **)(puVar30 + 1);
                            plStack_328 = (long *)0x17;
                            *(undefined1 *)((long)puVar30 + 0x1b) = 0;
                            *(undefined8 *)(puVar30 + 3) = 0x28657a6953656d61;
                            *(undefined8 *)(puVar30 + 1) = 0x732e755f776f6c66;
                            *(undefined8 *)((long)puVar30 + 0x13) = 0x29765f776f6c6628;
                            FUN_109ac3188(0xffffff29,&ppuStack_330,&UNK_10f568c71,&UNK_10f568af6,
                                          0x42f);
                          }
                        }
                        else {
                          puVar30 = (undefined4 *)0x4c;
                          func_0x000107c2ae8c();
                          *puVar30 = 1;
                          ppuStack_330 = (undefined **)(puVar30 + 1);
                          plStack_328 = (long *)0x45;
                          *(undefined8 *)(puVar30 + 7) = 0x2868747065642e76;
                          *(undefined8 *)(puVar30 + 5) = 0x5f776f6c66202626;
                          *(undefined8 *)(puVar30 + 0xb) = 0x6620262620463233;
                          *(undefined8 *)(puVar30 + 9) = 0x5f5643203d3d2029;
                          *(undefined8 *)(puVar30 + 0xf) = 0x2928736c656e6e61;
                          *(undefined8 *)(puVar30 + 0xd) = 0x68632e765f776f6c;
                          *(undefined1 *)((long)puVar30 + 0x49) = 0;
                          *(undefined8 *)((long)puVar30 + 0x41) = 0x31203d3d20292873;
                          *(undefined8 *)(puVar30 + 3) = 0x2029287974706d65;
                          *(undefined8 *)(puVar30 + 1) = 0x2e765f776f6c6621;
                          FUN_109ac3188(0xffffff29,&ppuStack_330,&UNK_10f568c71,&UNK_10f568af6,0x42d
                                       );
                        }
                      }
                      else {
                        puVar30 = (undefined4 *)0x4c;
                        func_0x000107c2ae8c();
                        *puVar30 = 1;
                        ppuStack_330 = (undefined **)(puVar30 + 1);
                        plStack_328 = (long *)0x45;
                        *(undefined8 *)(puVar30 + 7) = 0x2868747065642e75;
                        *(undefined8 *)(puVar30 + 5) = 0x5f776f6c66202626;
                        *(undefined8 *)(puVar30 + 0xb) = 0x6620262620463233;
                        *(undefined8 *)(puVar30 + 9) = 0x5f5643203d3d2029;
                        *(undefined8 *)(puVar30 + 0xf) = 0x2928736c656e6e61;
                        *(undefined8 *)(puVar30 + 0xd) = 0x68632e755f776f6c;
                        *(undefined1 *)((long)puVar30 + 0x49) = 0;
                        *(undefined8 *)((long)puVar30 + 0x41) = 0x31203d3d20292873;
                        *(undefined8 *)(puVar30 + 3) = 0x2029287974706d65;
                        *(undefined8 *)(puVar30 + 1) = 0x2e755f776f6c6621;
                        FUN_109ac3188(0xffffff29,&ppuStack_330,&UNK_10f568c71,&UNK_10f568af6,0x42c);
                      }
                    }
                    else {
                      puVar30 = (undefined4 *)0x64;
                      func_0x000107c2ae8c();
                      *puVar30 = 1;
                      ppuStack_330 = (undefined **)(puVar30 + 1);
                      plStack_328 = (long *)0x5e;
                      *(undefined8 *)(puVar30 + 0xb) = 0x207c7c202955385f;
                      *(undefined8 *)(puVar30 + 9) = 0x5643203d3d202928;
                      *(undefined8 *)(puVar30 + 0xf) = 0x43203d3d20292868;
                      *(undefined8 *)(puVar30 + 0xd) = 0x747065642e304928;
                      *(undefined8 *)(puVar30 + 0x13) = 0x747065642e314920;
                      *(undefined8 *)(puVar30 + 0x11) = 0x2626204632335f56;
                      *(undefined8 *)((long)puVar30 + 0x5a) = 0x294632335f564320;
                      *(undefined8 *)((long)puVar30 + 0x52) = 0x3d3d202928687470;
                      *(undefined8 *)(puVar30 + 3) = 0x43203d3d20292868;
                      *(undefined8 *)(puVar30 + 1) = 0x747065642e304928;
                      *(undefined1 *)((long)puVar30 + 0x62) = 0;
                      *(undefined8 *)(puVar30 + 7) = 0x68747065642e3149;
                      *(undefined8 *)(puVar30 + 5) = 0x2026262055385f56;
                      FUN_109ac3188(0xffffff29,&ppuStack_330,&UNK_10f568c71,&UNK_10f568af6,0x42b);
                    }
                  }
                }
                else {
                  puVar30 = (undefined4 *)0x28;
                  func_0x000107c2ae8c();
                  *puVar30 = 1;
                  ppuStack_330 = (undefined **)(puVar30 + 1);
                  plStack_328 = (long *)0x21;
                  *(undefined2 *)(puVar30 + 9) = 0x31;
                  *(undefined8 *)(puVar30 + 3) = 0x4920262620292879;
                  *(undefined8 *)(puVar30 + 1) = 0x74706d652e314921;
                  *(undefined8 *)(puVar30 + 7) = 0x203d3d202928736c;
                  *(undefined8 *)(puVar30 + 5) = 0x656e6e6168632e31;
                  FUN_109ac3188(0xffffff29,&ppuStack_330,&UNK_10f568c71,&UNK_10f568af6,0x429);
                }
              }
              else {
                puVar30 = (undefined4 *)0x28;
                func_0x000107c2ae8c();
                *puVar30 = 1;
                ppuStack_330 = (undefined **)(puVar30 + 1);
                plStack_328 = (long *)0x21;
                *(undefined2 *)(puVar30 + 9) = 0x31;
                *(undefined8 *)(puVar30 + 3) = 0x4920262620292879;
                *(undefined8 *)(puVar30 + 1) = 0x74706d652e304921;
                *(undefined8 *)(puVar30 + 7) = 0x203d3d202928736c;
                *(undefined8 *)(puVar30 + 5) = 0x656e6e6168632e30;
                FUN_109ac3188(0xffffff29,&ppuStack_330,&UNK_10f568c71,&UNK_10f568af6,0x428);
              }
                    /* WARNING: Does not return */
              pcVar20 = (code *)SoftwareBreakpoint(1,0x10939adec);
              (*pcVar20)();
            }
            puVar30 = (undefined4 *)0x18;
            func_0x000107c2ae8c();
            *puVar30 = 1;
            auStack_108 = (undefined1  [8])(puVar30 + 1);
            auStack_100._0_8_ = 0x11;
            *(undefined2 *)(puVar30 + 5) = 0x29;
            *(undefined8 *)(puVar30 + 3) = 0x776f6c6628657a69;
            *(undefined8 *)(puVar30 + 1) = 0x53656d61732e3049;
            FUN_109ac3188(0xffffff29,auStack_108,&UNK_10f568af1,&UNK_10f568af6,0x41e);
          }
          else {
            puVar30 = (undefined4 *)0x44;
            func_0x000107c2ae8c();
            *puVar30 = 1;
            auStack_108 = (undefined1  [8])(puVar30 + 1);
            auStack_100._0_8_ = 0x3f;
            *(undefined8 *)(puVar30 + 3) = 0x2626202928797470;
            *(undefined8 *)(puVar30 + 1) = 0x6d652e776f6c6621;
            *(undefined1 *)((long)puVar30 + 0x43) = 0;
            *(undefined8 *)(puVar30 + 7) = 0x3d3d202928687470;
            *(undefined8 *)(puVar30 + 5) = 0x65642e776f6c6620;
            *(undefined8 *)(puVar30 + 0xb) = 0x2e776f6c66202626;
            *(undefined8 *)(puVar30 + 9) = 0x204632335f564320;
            *(undefined8 *)((long)puVar30 + 0x3b) = 0x32203d3d20292873;
            *(undefined8 *)((long)puVar30 + 0x33) = 0x6c656e6e6168632e;
            FUN_109ac3188(0xffffff29,auStack_108,&UNK_10f568af1,&UNK_10f568af6,0x41d);
          }
        }
        else {
          puVar30 = (undefined4 *)0x64;
          func_0x000107c2ae8c();
          *puVar30 = 1;
          auStack_108 = (undefined1  [8])(puVar30 + 1);
          auStack_100._0_8_ = 0x5e;
          *(undefined8 *)(puVar30 + 0xb) = 0x207c7c202955385f;
          *(undefined8 *)(puVar30 + 9) = 0x5643203d3d202928;
          *(undefined8 *)(puVar30 + 0xf) = 0x43203d3d20292868;
          *(undefined8 *)(puVar30 + 0xd) = 0x747065642e304928;
          *(undefined8 *)(puVar30 + 0x13) = 0x747065642e314920;
          *(undefined8 *)(puVar30 + 0x11) = 0x2626204632335f56;
          *(undefined8 *)((long)puVar30 + 0x5a) = 0x294632335f564320;
          *(undefined8 *)((long)puVar30 + 0x52) = 0x3d3d202928687470;
          *(undefined8 *)(puVar30 + 3) = 0x43203d3d20292868;
          *(undefined8 *)(puVar30 + 1) = 0x747065642e304928;
          *(undefined1 *)((long)puVar30 + 0x62) = 0;
          *(undefined8 *)(puVar30 + 7) = 0x68747065642e3149;
          *(undefined8 *)(puVar30 + 5) = 0x2026262055385f56;
          FUN_109ac3188(0xffffff29,auStack_108,&UNK_10f568af1,&UNK_10f568af6,0x41c);
        }
      }
    }
    else {
      puVar30 = (undefined4 *)0x28;
      func_0x000107c2ae8c();
      *puVar30 = 1;
      auStack_108 = (undefined1  [8])(puVar30 + 1);
      auStack_100._0_8_ = 0x21;
      *(undefined2 *)(puVar30 + 9) = 0x31;
      *(undefined8 *)(puVar30 + 3) = 0x4920262620292879;
      *(undefined8 *)(puVar30 + 1) = 0x74706d652e314921;
      *(undefined8 *)(puVar30 + 7) = 0x203d3d202928736c;
      *(undefined8 *)(puVar30 + 5) = 0x656e6e6168632e31;
      FUN_109ac3188(0xffffff29,auStack_108,&UNK_10f568af1,&UNK_10f568af6,0x41a);
    }
  }
  else {
    puVar30 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar30 = 1;
    auStack_108 = (undefined1  [8])(puVar30 + 1);
    auStack_100._0_8_ = 0x21;
    *(undefined2 *)(puVar30 + 9) = 0x31;
    *(undefined8 *)(puVar30 + 3) = 0x4920262620292879;
    *(undefined8 *)(puVar30 + 1) = 0x74706d652e304921;
    *(undefined8 *)(puVar30 + 7) = 0x203d3d202928736c;
    *(undefined8 *)(puVar30 + 5) = 0x656e6e6168632e30;
    FUN_109ac3188(0xffffff29,auStack_108,&UNK_10f568af1,&UNK_10f568af6,0x419);
  }
                    /* WARNING: Does not return */
  pcVar20 = (code *)SoftwareBreakpoint(1,0x1093990fc);
  (*pcVar20)();
}



/* Entry: 1093991f8; end: 10939b0f7;  */

void FUN_1093991f8(undefined4 *param_1,uint *param_2,uint *param_3,ulong param_4,undefined8 *param_5
                  )

{
  int *piVar1;
  undefined **ppuVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  code *pcVar22;
  uint *puVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  int iVar29;
  ulong *puVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  int iVar42;
  double dVar43;
  undefined8 uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  int *piStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  long lStack_370;
  long lStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  int iStack_354;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  long lStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [4];
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  long lStack_2c0;
  undefined1 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  uint uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  long lStack_260;
  undefined4 *puStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  uint *puStack_230;
  undefined8 uStack_228;
  long lStack_220;
  uint *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  undefined8 uStack_1f8;
  undefined **ppuStack_1f0;
  undefined4 *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined4 *puStack_1d0;
  undefined4 *puStack_1c8;
  undefined4 *puStack_1c0;
  undefined4 *puStack_1b8;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  long lStack_198;
  long lStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar23 = param_2;
  FUN_109a8e1c4();
  if ((((ulong)puVar23 & 1) == 0) &&
     (puVar23 = param_2, FUN_109a8b904(param_2,0xffffffff), ((ulong)puVar23 & 0xff8) == 0)) {
    puVar23 = param_3;
    FUN_109a8e1c4();
    if ((((ulong)puVar23 & 1) == 0) &&
       (puVar23 = param_3, FUN_109a8b904(param_3,0xffffffff), ((ulong)puVar23 & 0xff8) == 0)) {
      puVar23 = param_2;
      FUN_109a8d584(param_2,param_3);
      if (((ulong)puVar23 & 1) == 0) {
        puVar28 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar28 = 1;
        ppuStack_1f0 = (undefined **)(puVar28 + 1);
        *ppuStack_1f0 = (undefined *)0x53656d61732e3049;
        puStack_1e8 = (undefined4 *)0xf;
        *(undefined1 *)((long)puVar28 + 0x13) = 0;
        *(undefined8 *)((long)puVar28 + 0xb) = 0x29314928657a6953;
        FUN_109ac3188(0xffffff29,&ppuStack_1f0,&UNK_10f568c71,&UNK_10f568af6,0x42a);
      }
      else {
        puVar23 = param_2;
        FUN_109a8b904(param_2,0xffffffff);
        if (((((ulong)puVar23 & 7) == 0) &&
            (puVar23 = param_3, FUN_109a8b904(param_3,0xffffffff), ((ulong)puVar23 & 7) == 0)) ||
           ((puVar23 = param_2, FUN_109a8b904(param_2,0xffffffff), ((uint)puVar23 & 7) == 5 &&
            (puVar23 = param_3, FUN_109a8b904(param_3,0xffffffff), ((uint)puVar23 & 7) == 5)))) {
          uVar33 = param_4;
          FUN_109a8e1c4();
          if ((((uVar33 & 1) == 0) &&
              (uVar33 = param_4, FUN_109a8b904(param_4,0xffffffff), ((uint)uVar33 & 7) == 5)) &&
             (uVar33 = param_4, FUN_109a8b904(param_4,0xffffffff), (uVar33 & 0xff8) == 0)) {
            puVar24 = param_5;
            FUN_109a8e1c4();
            if (((((ulong)puVar24 & 1) == 0) &&
                (puVar24 = param_5, FUN_109a8b904(param_5,0xffffffff), ((uint)puVar24 & 7) == 5)) &&
               (puVar24 = param_5, FUN_109a8b904(param_5,0xffffffff), ((ulong)puVar24 & 0xff8) == 0)
               ) {
              puVar23 = param_2;
              FUN_109a8d584(param_2,param_4);
              if (((ulong)puVar23 & 1) == 0) {
                puVar28 = (undefined4 *)0x18;
                func_0x000107c2ae8c();
                *puVar28 = 1;
                ppuStack_1f0 = (undefined **)(puVar28 + 1);
                puStack_1e8 = (undefined4 *)0x13;
                *(undefined1 *)((long)puVar28 + 0x17) = 0;
                *(undefined4 *)((long)puVar28 + 0x13) = 0x29755f77;
                *(undefined8 *)(puVar28 + 3) = 0x776f6c6628657a69;
                *(undefined8 *)(puVar28 + 1) = 0x53656d61732e3049;
                FUN_109ac3188(0xffffff29,&ppuStack_1f0,&UNK_10f568c71,&UNK_10f568af6,0x42e);
              }
              else {
                uVar33 = param_4;
                FUN_109a8d584(param_4,param_5);
                if ((uVar33 & 1) != 0) {
                  uVar32 = 0x200;
                  if (iRam00000001132e8f30 == 0) {
                    uVar32 = 1;
                  }
                  if ((*param_2 & 0x1f0000) == 0x10000) {
                    puVar30 = *(ulong **)(param_2 + 2);
                    piStack_3e0 = (int *)((ulong)&uStack_420 | 8);
                    uStack_418 = puVar30[1];
                    uStack_420 = (undefined *)*puVar30;
                    uStack_408 = puVar30[3];
                    uStack_410 = puVar30[2];
                    uStack_3f8 = puVar30[5];
                    uStack_400 = puVar30[4];
                    uStack_3e8 = puVar30[7];
                    uStack_3f0 = puVar30[6];
                    puStack_3d8 = &uStack_3d0;
                    uStack_3d0 = 0;
                    uStack_3c8 = 0;
                    if (puVar30[7] != 0) {
                      piVar1 = (int *)(puVar30[7] + 0x14);
                      do {
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = *piVar1 + 1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                    }
                    if (*(int *)((long)puVar30 + 4) < 3) {
                      uStack_3d0 = *(undefined8 *)puVar30[9];
                      uStack_3c8 = ((undefined8 *)puVar30[9])[1];
                    }
                    else {
                      uStack_420 = (undefined *)((ulong)uStack_420 & 0xffffffff);
                      func_0x000109a84868(&uStack_420);
                    }
                  }
                  else {
                    FUN_109a8a180(&uStack_420,param_2,0xffffffff);
                  }
                  if ((*param_3 & 0x1f0000) == 0x10000) {
                    puVar30 = *(ulong **)(param_3 + 2);
                    uStack_440 = (ulong)&uStack_480 | 8;
                    uStack_478 = puVar30[1];
                    uStack_480 = *puVar30;
                    uStack_468 = puVar30[3];
                    uStack_470 = puVar30[2];
                    uStack_458 = puVar30[5];
                    uStack_460 = puVar30[4];
                    uStack_448 = puVar30[7];
                    uStack_450 = puVar30[6];
                    puStack_438 = &uStack_430;
                    uStack_430 = 0;
                    uStack_428 = 0;
                    if (puVar30[7] != 0) {
                      piVar1 = (int *)(puVar30[7] + 0x14);
                      do {
                        cVar10 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar11) {
                          *piVar1 = *piVar1 + 1;
                          cVar10 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar10 != '\0');
                    }
                    if (*(int *)((long)puVar30 + 4) < 3) {
                      uStack_430 = *(undefined8 *)puVar30[9];
                      uStack_428 = ((undefined8 *)puVar30[9])[1];
                    }
                    else {
                      uStack_480 = uStack_480 & 0xffffffff;
                      func_0x000109a84868(&uStack_480);
                    }
                  }
                  else {
                    FUN_109a8a180(&uStack_480,param_3,0xffffffff);
                  }
                  FUN_109a8ec3c(param_4,0xffffffff);
                  FUN_109a8ec3c(param_5,0xffffffff);
                  iVar29 = *piStack_3e0;
                  iVar42 = piStack_3e0[1];
                  ppuVar21 = *(undefined ***)piStack_3e0;
                  ppuVar20 = *(undefined ***)piStack_3e0;
                  ppuVar19 = *(undefined ***)piStack_3e0;
                  ppuVar18 = *(undefined ***)piStack_3e0;
                  ppuVar17 = *(undefined ***)piStack_3e0;
                  ppuVar16 = *(undefined ***)piStack_3e0;
                  ppuVar15 = *(undefined ***)piStack_3e0;
                  ppuVar14 = *(undefined ***)piStack_3e0;
                  ppuVar13 = *(undefined ***)piStack_3e0;
                  ppuVar12 = *(undefined ***)piStack_3e0;
                  FUN_1093972f4(param_1 + 0x26a,iVar42,iVar29);
                  FUN_1093972f4(param_1 + 0x29e,iVar42,iVar29);
                  FUN_1093972f4(param_1 + 0x2d2,iVar42,iVar29);
                  FUN_1093972f4(param_1 + 0x306,iVar42,iVar29);
                  FUN_1093972f4(param_1 + 0x33a,iVar42,iVar29);
                  puVar28 = param_1 + 0x36e;
                  FUN_1093972f4(puVar28,iVar42,iVar29);
                  uStack_298 = 0;
                  uStack_294 = 0;
                  ppuStack_1f0._0_4_ = 0xc1020006;
                  uStack_1e0 = 0x100000001;
                  puStack_1e8 = &uStack_298;
                  FUN_109a91d90();
                  puVar25 = param_1 + 0x36e;
                  FUN_109a48a40(puVar25,&ppuStack_1f0,puVar28);
                  uStack_298 = 0;
                  uStack_294 = 0;
                  ppuStack_1f0 = (undefined **)CONCAT44(ppuStack_1f0._4_4_,0xc1020006);
                  uStack_1e0 = 0x100000001;
                  puStack_1e8 = &uStack_298;
                  FUN_109a91d90();
                  FUN_109a48a40(param_1 + 0x386,&ppuStack_1f0,puVar25);
                  puVar28 = param_1 + 0x3d2;
                  FUN_1093972f4(puVar28,iVar42,iVar29);
                  puVar25 = param_1 + 0x406;
                  FUN_1093972f4(puVar25,iVar42,iVar29);
                  puVar4 = param_1 + 0x43a;
                  FUN_1093972f4(puVar4,iVar42,iVar29);
                  puVar5 = param_1 + 0x46e;
                  FUN_1093972f4(puVar5,iVar42,iVar29);
                  puVar6 = param_1 + 0x4a2;
                  FUN_1093972f4(puVar6,iVar42,iVar29);
                  puVar7 = param_1 + 0x4d6;
                  FUN_1093972f4(puVar7,iVar42,iVar29);
                  ppuVar2 = (undefined **)(param_1 + 10);
                  if (((2 < (int)param_1[0xb]) || (param_1[0xc] != iVar29)) ||
                     ((param_1[0xd] != iVar42 ||
                      ((((ulong)*ppuVar2 & 0xfff) != 5 || (*(long *)(param_1 + 0xe) == 0)))))) {
                    ppuStack_1f0 = ppuVar12;
                    FUN_109a83fd0(ppuVar2,2,&ppuStack_1f0,5);
                  }
                  ppuVar12 = (undefined **)(param_1 + 0x22);
                  if ((((2 < (int)param_1[0x23]) || (param_1[0x24] != iVar29)) ||
                      (param_1[0x25] != iVar42)) ||
                     ((((ulong)*ppuVar12 & 0xfff) != 5 || (*(long *)(param_1 + 0x26) == 0)))) {
                    ppuStack_1f0 = ppuVar13;
                    FUN_109a83fd0(ppuVar12,2,&ppuStack_1f0,5);
                  }
                  ppuVar13 = (undefined **)(param_1 + 0x3a);
                  if (((2 < (int)param_1[0x3b]) || (param_1[0x3c] != iVar29)) ||
                     ((param_1[0x3d] != iVar42 ||
                      ((((ulong)*ppuVar13 & 0xfff) != 5 || (*(long *)(param_1 + 0x3e) == 0)))))) {
                    ppuStack_1f0 = ppuVar14;
                    FUN_109a83fd0(ppuVar13,2,&ppuStack_1f0,5);
                  }
                  ppuVar14 = (undefined **)(param_1 + 0x52);
                  if ((((2 < (int)param_1[0x53]) || (param_1[0x54] != iVar29)) ||
                      (param_1[0x55] != iVar42)) ||
                     ((((ulong)*ppuVar14 & 0xfff) != 5 || (*(long *)(param_1 + 0x56) == 0)))) {
                    ppuStack_1f0 = ppuVar15;
                    FUN_109a83fd0(ppuVar14,2,&ppuStack_1f0,5);
                  }
                  ppuVar15 = (undefined **)(param_1 + 0x6a);
                  if (((2 < (int)param_1[0x6b]) || (param_1[0x6c] != iVar29)) ||
                     ((param_1[0x6d] != iVar42 ||
                      ((((ulong)*ppuVar15 & 0xfff) != 5 || (*(long *)(param_1 + 0x6e) == 0)))))) {
                    ppuStack_1f0 = ppuVar16;
                    FUN_109a83fd0(ppuVar15,2,&ppuStack_1f0,5);
                  }
                  ppuVar16 = (undefined **)(param_1 + 0x82);
                  if ((((2 < (int)param_1[0x83]) || (param_1[0x84] != iVar29)) ||
                      (param_1[0x85] != iVar42)) ||
                     ((((ulong)*ppuVar16 & 0xfff) != 5 || (*(long *)(param_1 + 0x86) == 0)))) {
                    ppuStack_1f0 = ppuVar17;
                    FUN_109a83fd0(ppuVar16,2,&ppuStack_1f0,5);
                  }
                  ppuVar17 = (undefined **)(param_1 + 0x9a);
                  if (((2 < (int)param_1[0x9b]) || (param_1[0x9c] != iVar29)) ||
                     ((param_1[0x9d] != iVar42 ||
                      ((((ulong)*ppuVar17 & 0xfff) != 5 || (*(long *)(param_1 + 0x9e) == 0)))))) {
                    ppuStack_1f0 = ppuVar18;
                    FUN_109a83fd0(ppuVar17,2,&ppuStack_1f0,5);
                  }
                  ppuVar18 = (undefined **)(param_1 + 0xb2);
                  if ((((2 < (int)param_1[0xb3]) || (param_1[0xb4] != iVar29)) ||
                      (param_1[0xb5] != iVar42)) ||
                     ((((ulong)*ppuVar18 & 0xfff) != 5 || (*(long *)(param_1 + 0xb6) == 0)))) {
                    ppuStack_1f0 = ppuVar19;
                    FUN_109a83fd0(ppuVar18,2,&ppuStack_1f0,5);
                  }
                  FUN_1093972f4(param_1 + 0xca,iVar42,iVar29);
                  FUN_1093972f4(param_1 + 0xfe,iVar42,iVar29);
                  FUN_1093972f4(param_1 + 0x132,iVar42,iVar29);
                  FUN_1093972f4(param_1 + 0x166,iVar42,iVar29);
                  FUN_1093972f4(param_1 + 0x19a,iVar42,iVar29);
                  FUN_1093972f4(param_1 + 0x1ce,iVar42,iVar29);
                  FUN_1093972f4(param_1 + 0x202,iVar42,iVar29);
                  FUN_1093972f4(param_1 + 0x236,iVar42,iVar29);
                  puVar23 = param_1 + 0x3a2;
                  if (((2 < (int)param_1[0x3a3]) || (param_1[0x3a4] != iVar29)) ||
                     ((param_1[0x3a5] != iVar42 ||
                      (((*puVar23 & 0xfff) != 5 || (*(long *)(param_1 + 0x3a6) == 0)))))) {
                    ppuStack_1f0 = ppuVar20;
                    FUN_109a83fd0(puVar23,2,&ppuStack_1f0,5);
                  }
                  puVar3 = param_1 + 0x3ba;
                  if ((((2 < (int)param_1[0x3bb]) || (param_1[0x3bc] != iVar29)) ||
                      (param_1[0x3bd] != iVar42)) ||
                     (((*puVar3 & 0xfff) != 5 || (*(long *)(param_1 + 0x3be) == 0)))) {
                    ppuStack_1f0 = ppuVar21;
                    FUN_109a83fd0(puVar3,2,&ppuStack_1f0,5);
                  }
                  uStack_298 = 0x42ff0000;
                  uStack_28c = 0;
                  uStack_288 = 0;
                  uStack_294 = 0;
                  uStack_290 = 0;
                  puStack_1e8 = &uStack_298;
                  puStack_258 = &uStack_290;
                  uStack_27c = 0;
                  uStack_278 = 0;
                  uStack_284 = 0;
                  uStack_280 = 0;
                  uStack_26c = 0;
                  uStack_274 = 0;
                  uStack_270 = 0;
                  lStack_260 = 0;
                  uStack_268 = 0;
                  uStack_264 = 0;
                  uStack_240 = 0;
                  uStack_248 = 0;
                  auStack_2f8._0_4_ = 0x42ff0000;
                  puStack_2b8 = auStack_2f0;
                  uStack_2ec = 0;
                  uStack_2e8 = 0;
                  stack0xfffffffffffffd0c = 0;
                  uStack_2dc = 0;
                  uStack_2d8 = 0;
                  uStack_2e4 = 0;
                  uStack_2e0 = 0;
                  uStack_2cc = 0;
                  uStack_2d4 = 0;
                  uStack_2d0 = 0;
                  lStack_2c0 = 0;
                  uStack_2c8 = 0;
                  uStack_2c4 = 0;
                  uStack_2a0 = 0;
                  uStack_2a8 = 0;
                  ppuStack_1f0 = (undefined **)CONCAT44(ppuStack_1f0._4_4_,0x2010000);
                  uStack_1e0 = 0;
                  puStack_2b0 = &uStack_2a8;
                  puStack_250 = &uStack_248;
                  FUN_109a41858(0x3ff0000000000000,0,&uStack_480,&ppuStack_1f0,5);
                  uVar8 = *(uint *)(param_4 + 8);
                  if (0 < (int)uVar8) {
                    uVar33 = 0;
                    lVar34 = param_5[2];
                    lVar35 = *(long *)(param_4 + 0x10);
                    lVar36 = **(long **)(param_4 + 0x48);
                    lVar37 = *(long *)param_5[9];
                    lVar38 = *(long *)(param_1 + 0x3a6);
                    lVar39 = **(long **)(param_1 + 0x3b4);
                    lVar40 = *(long *)(param_1 + 0x3be);
                    lVar41 = **(long **)(param_1 + 0x3cc);
                    uVar9 = *(uint *)(param_4 + 0xc);
                    do {
                      if (0 < (int)uVar9) {
                        uVar31 = 0;
                        do {
                          *(float *)(lVar38 + uVar31 * 4) =
                               *(float *)(lVar35 + uVar31 * 4) + (float)(uVar31 & 0xffffffff);
                          *(float *)(lVar40 + uVar31 * 4) =
                               *(float *)(lVar34 + uVar31 * 4) + (float)(uVar33 & 0xffffffff);
                          uVar31 = uVar31 + 1;
                        } while (uVar9 != uVar31);
                      }
                      uVar33 = uVar33 + 1;
                      lVar40 = lVar40 + lVar41;
                      lVar34 = lVar34 + lVar37;
                      lVar38 = lVar38 + lVar39;
                      lVar35 = lVar35 + lVar36;
                    } while (uVar33 != uVar8);
                  }
                  uStack_348 = 0;
                  uStack_344 = 0;
                  uStack_358 = 0x1010000;
                  uStack_350 = &uStack_298;
                  lStack_208 = CONCAT44(lStack_208._4_4_,0x2010000);
                  puStack_200 = auStack_2f8;
                  uStack_1f8 = 0;
                  uStack_210 = 0;
                  lStack_220 = CONCAT44(lStack_220._4_4_,0x81010005);
                  uStack_228 = 0;
                  lStack_238 = CONCAT44(lStack_238._4_4_,0x81010005);
                  puStack_1e8 = (undefined4 *)0x0;
                  ppuStack_1f0 = (undefined **)0x0;
                  lStack_1d8 = 0;
                  uStack_1e0 = 0;
                  puStack_230 = puVar3;
                  puStack_218 = puVar23;
                  FUN_109b146f4(&uStack_358,&lStack_208,&lStack_220,&lStack_238,1,1,&ppuStack_1f0);
                  uStack_358 = 0x42ff0000;
                  puStack_318 = &uStack_350;
                  uStack_350._4_4_ = 0;
                  uStack_348 = 0;
                  iStack_354 = 0;
                  uStack_350._0_4_ = 0;
                  uStack_33c = 0;
                  uStack_338 = 0;
                  uStack_344 = 0;
                  uStack_340 = 0;
                  uStack_32c = 0;
                  uStack_334 = 0;
                  uStack_330 = 0;
                  lStack_320 = 0;
                  uStack_328 = 0;
                  uStack_324 = 0;
                  uStack_300 = 0;
                  uStack_308 = 0;
                  puStack_200 = (undefined1 *)0x0;
                  lStack_208 = 0;
                  uStack_1f8 = 0;
                  ppuStack_1f0 = (undefined **)&uStack_420;
                  puStack_310 = &uStack_308;
                  func_0x000109397694(&lStack_208,&ppuStack_1f0);
                  ppuStack_1f0 = (undefined **)auStack_2f8;
                  func_0x000109397694(&lStack_208,&ppuStack_1f0);
                  puStack_218 = (uint *)0x0;
                  lStack_220 = 0;
                  uStack_210 = 0;
                  ppuStack_1f0 = (undefined **)auStack_2f8;
                  func_0x000109397694(&lStack_220,&ppuStack_1f0);
                  ppuStack_1f0 = (undefined **)&uStack_420;
                  func_0x000109397694(&lStack_220,&ppuStack_1f0);
                  puStack_230 = (uint *)0x0;
                  lStack_238 = 0;
                  uStack_228 = 0;
                  ppuStack_1f0 = (undefined **)&uStack_358;
                  func_0x000109397694(&lStack_238,&ppuStack_1f0);
                  ppuStack_1f0 = ppuVar13;
                  func_0x000109397694(&lStack_238,&ppuStack_1f0);
                  lStack_370 = 0;
                  lStack_368 = 0;
                  uStack_360 = 0;
                  func_0x000109397758(&lStack_370,FUN_109397818,0);
                  func_0x000109397758(&lStack_370,FUN_1093978c4,0);
                  lVar34 = lStack_370;
                  lStack_3a0 = 0x200000000;
                  lStack_380 = 0;
                  uStack_378 = 0;
                  lStack_388 = 0;
                  FUN_10939b84c(&lStack_388,lStack_370,lStack_368,lStack_368 - lStack_370 >> 4);
                  lVar40 = lStack_388;
                  FUN_1093974f4(&ppuStack_1f0,param_1,lStack_388,lStack_380,&lStack_208,&lStack_220,
                                &lStack_238);
                  func_0x000109aa87cc(0xbff0000000000000,&lStack_3a0,&ppuStack_1f0);
                  ppuStack_1f0 = &PTR_FUN_110af5090;
                  if (lStack_198 != 0) {
                    lStack_190 = lStack_198;
                    __ZdlPv();
                  }
                  if (CONCAT71(uStack_1af,uStack_1b0) != 0) {
                    __ZdlPv();
                  }
                  if (puStack_1c8 != (undefined4 *)0x0) {
                    puStack_1c0 = puStack_1c8;
                    __ZdlPv();
                  }
                  if (uStack_1e0 != 0) {
                    lStack_1d8 = uStack_1e0;
                    __ZdlPv();
                  }
                  if (lVar40 != 0) {
                    lStack_380 = lVar40;
                    __ZdlPv(lVar40);
                  }
                  if (lVar34 != 0) {
                    __ZdlPv(lVar34);
                  }
                  if (lStack_238 != 0) {
                    puStack_230 = (uint *)lStack_238;
                    __ZdlPv();
                  }
                  if (lStack_220 != 0) {
                    puStack_218 = (uint *)lStack_220;
                    __ZdlPv();
                  }
                  if (lStack_208 != 0) {
                    puStack_200 = (undefined1 *)lStack_208;
                    __ZdlPv();
                  }
                  FUN_109396e40(param_1 + 0x132,ppuVar13);
                  puStack_200 = (undefined1 *)0x0;
                  lStack_208 = 0;
                  uStack_1f8 = 0;
                  ppuStack_1f0 = (undefined **)&uStack_358;
                  func_0x000109397694(&lStack_208,&ppuStack_1f0);
                  ppuStack_1f0 = (undefined **)&uStack_358;
                  func_0x000109397694(&lStack_208,&ppuStack_1f0);
                  ppuStack_1f0 = ppuVar13;
                  func_0x000109397694(&lStack_208,&ppuStack_1f0);
                  ppuStack_1f0 = ppuVar13;
                  func_0x000109397694(&lStack_208,&ppuStack_1f0);
                  puStack_218 = (uint *)0x0;
                  lStack_220 = 0;
                  uStack_210 = 0;
                  ppuStack_1f0 = ppuVar2;
                  func_0x000109397694(&lStack_220,&ppuStack_1f0);
                  ppuStack_1f0 = ppuVar12;
                  func_0x000109397694(&lStack_220,&ppuStack_1f0);
                  ppuStack_1f0 = ppuVar17;
                  func_0x000109397694(&lStack_220,&ppuStack_1f0);
                  ppuStack_1f0 = ppuVar18;
                  func_0x000109397694(&lStack_220,&ppuStack_1f0);
                  puStack_230 = (uint *)0x0;
                  lStack_238 = 0;
                  uStack_228 = 0;
                  ppuStack_1f0 = (undefined **)(param_1 + 0xca);
                  func_0x000109397694(&lStack_238,&ppuStack_1f0);
                  ppuStack_1f0 = (undefined **)(param_1 + 0xfe);
                  func_0x000109397694(&lStack_238,&ppuStack_1f0);
                  ppuStack_1f0 = (undefined **)(param_1 + 0x202);
                  func_0x000109397694(&lStack_238,&ppuStack_1f0);
                  ppuStack_1f0 = (undefined **)(param_1 + 0x236);
                  func_0x000109397694(&lStack_238,&ppuStack_1f0);
                  lStack_370 = 0;
                  lStack_368 = 0;
                  uStack_360 = 0;
                  func_0x000109397758(&lStack_370,0x1093979a0,0);
                  func_0x000109397758(&lStack_370,0x109397a14,0);
                  func_0x000109397758(&lStack_370,0x1093979a0,0);
                  func_0x000109397758(&lStack_370,0x109397a14,0);
                  lVar34 = lStack_370;
                  lStack_3c0 = 0x400000000;
                  lStack_398 = 0;
                  uStack_390 = 0;
                  lStack_3a0 = 0;
                  FUN_10939b84c(&lStack_3a0,lStack_370,lStack_368,lStack_368 - lStack_370 >> 4);
                  lVar40 = lStack_3a0;
                  FUN_1093974f4(&ppuStack_1f0,param_1,lStack_3a0,lStack_398,&lStack_208,&lStack_220,
                                &lStack_238);
                  func_0x000109aa87cc(0xbff0000000000000,&lStack_3c0,&ppuStack_1f0);
                  ppuStack_1f0 = &PTR_FUN_110af5090;
                  if (lStack_198 != 0) {
                    lStack_190 = lStack_198;
                    __ZdlPv();
                  }
                  if (CONCAT71(uStack_1af,uStack_1b0) != 0) {
                    __ZdlPv();
                  }
                  if (puStack_1c8 != (undefined4 *)0x0) {
                    puStack_1c0 = puStack_1c8;
                    __ZdlPv();
                  }
                  if (uStack_1e0 != 0) {
                    lStack_1d8 = uStack_1e0;
                    __ZdlPv();
                  }
                  if (lVar40 != 0) {
                    lStack_398 = lVar40;
                    __ZdlPv(lVar40);
                  }
                  if (lVar34 != 0) {
                    __ZdlPv(lVar34);
                  }
                  if (lStack_238 != 0) {
                    puStack_230 = (uint *)lStack_238;
                    __ZdlPv();
                  }
                  if (lStack_220 != 0) {
                    puStack_218 = (uint *)lStack_220;
                    __ZdlPv();
                  }
                  if (lStack_208 != 0) {
                    puStack_200 = (undefined1 *)lStack_208;
                    __ZdlPv();
                  }
                  puStack_200 = (undefined1 *)0x0;
                  lStack_208 = 0;
                  uStack_1f8 = 0;
                  ppuStack_1f0 = ppuVar2;
                  func_0x000109397694(&lStack_208,&ppuStack_1f0);
                  ppuStack_1f0 = ppuVar2;
                  func_0x000109397694(&lStack_208,&ppuStack_1f0);
                  ppuStack_1f0 = ppuVar12;
                  func_0x000109397694(&lStack_208,&ppuStack_1f0);
                  puStack_218 = (uint *)0x0;
                  lStack_220 = 0;
                  uStack_210 = 0;
                  ppuStack_1f0 = ppuVar14;
                  func_0x000109397694(&lStack_220,&ppuStack_1f0);
                  ppuStack_1f0 = ppuVar15;
                  func_0x000109397694(&lStack_220,&ppuStack_1f0);
                  ppuStack_1f0 = ppuVar16;
                  func_0x000109397694(&lStack_220,&ppuStack_1f0);
                  puStack_230 = (uint *)0x0;
                  lStack_238 = 0;
                  uStack_228 = 0;
                  ppuStack_1f0 = (undefined **)(param_1 + 0x166);
                  func_0x000109397694(&lStack_238,&ppuStack_1f0);
                  ppuStack_1f0 = (undefined **)(param_1 + 0x19a);
                  func_0x000109397694(&lStack_238,&ppuStack_1f0);
                  ppuStack_1f0 = (undefined **)(param_1 + 0x1ce);
                  func_0x000109397694(&lStack_238,&ppuStack_1f0);
                  lStack_370 = 0;
                  lStack_368 = 0;
                  uStack_360 = 0;
                  func_0x000109397758(&lStack_370,0x1093979a0,0);
                  func_0x000109397758(&lStack_370,0x109397a14,0);
                  func_0x000109397758(&lStack_370,0x109397a14,0);
                  lVar34 = lStack_370;
                  uStack_3a8 = 0x300000000;
                  lStack_3b8 = 0;
                  uStack_3b0 = 0;
                  lStack_3c0 = 0;
                  FUN_10939b84c(&lStack_3c0,lStack_370,lStack_368,lStack_368 - lStack_370 >> 4);
                  lVar40 = lStack_3c0;
                  FUN_1093974f4(&ppuStack_1f0,param_1,lStack_3c0,lStack_3b8,&lStack_208,&lStack_220,
                                &lStack_238);
                  func_0x000109aa87cc(0xbff0000000000000,&uStack_3a8,&ppuStack_1f0);
                  ppuStack_1f0 = &PTR_FUN_110af5090;
                  if (lStack_198 != 0) {
                    lStack_190 = lStack_198;
                    __ZdlPv();
                  }
                  if (CONCAT71(uStack_1af,uStack_1b0) != 0) {
                    __ZdlPv();
                  }
                  if (puStack_1c8 != (undefined4 *)0x0) {
                    puStack_1c0 = puStack_1c8;
                    __ZdlPv();
                  }
                  if (uStack_1e0 != 0) {
                    lStack_1d8 = uStack_1e0;
                    __ZdlPv();
                  }
                  if (lVar40 != 0) {
                    lStack_3b8 = lVar40;
                    __ZdlPv(lVar40);
                  }
                  if (lVar34 != 0) {
                    __ZdlPv(lVar34);
                  }
                  if (lStack_238 != 0) {
                    puStack_230 = (uint *)lStack_238;
                    __ZdlPv();
                  }
                  if (lStack_220 != 0) {
                    puStack_218 = (uint *)lStack_220;
                    __ZdlPv();
                  }
                  if (lStack_208 != 0) {
                    puStack_200 = (undefined1 *)lStack_208;
                    __ZdlPv();
                  }
                  if (lStack_320 != 0) {
                    piVar1 = (int *)(lStack_320 + 0x14);
                    do {
                      iVar29 = *piVar1;
                      cVar10 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar11) {
                        *piVar1 = iVar29 + -1;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar10 != '\0');
                    if (iVar29 + -1 == 0) {
                      func_0x000109a848d4(&uStack_358);
                    }
                  }
                  lStack_320 = 0;
                  uStack_340 = 0;
                  uStack_33c = 0;
                  uStack_348 = 0;
                  uStack_344 = 0;
                  uStack_330 = 0;
                  uStack_32c = 0;
                  uStack_338 = 0;
                  uStack_334 = 0;
                  if (0 < iStack_354) {
                    lVar40 = 0;
                    do {
                      *(undefined4 *)((long)puStack_318 + lVar40 * 4) = 0;
                      lVar40 = lVar40 + 1;
                    } while (lVar40 < iStack_354);
                  }
                  if (puStack_310 != &uStack_308 && puStack_310 != (undefined8 *)0x0) {
                    _free(puStack_310[-1]);
                  }
                  if (lStack_2c0 != 0) {
                    piVar1 = (int *)(lStack_2c0 + 0x14);
                    do {
                      iVar29 = *piVar1;
                      cVar10 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar11) {
                        *piVar1 = iVar29 + -1;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar10 != '\0');
                    if (iVar29 + -1 == 0) {
                      func_0x000109a848d4(auStack_2f8);
                    }
                  }
                  lStack_2c0 = 0;
                  uStack_2e0 = 0;
                  uStack_2dc = 0;
                  uStack_2e8 = 0;
                  uStack_2e4 = 0;
                  uStack_2d0 = 0;
                  uStack_2cc = 0;
                  uStack_2d8 = 0;
                  uStack_2d4 = 0;
                  if (0 < (int)auStack_2f8._4_4_) {
                    lVar40 = 0;
                    do {
                      *(undefined4 *)(puStack_2b8 + lVar40 * 4) = 0;
                      lVar40 = lVar40 + 1;
                    } while (lVar40 < (int)auStack_2f8._4_4_);
                  }
                  if (puStack_2b0 != &uStack_2a8 && puStack_2b0 != (undefined8 *)0x0) {
                    _free(puStack_2b0[-1]);
                  }
                  if (lStack_260 != 0) {
                    piVar1 = (int *)(lStack_260 + 0x14);
                    do {
                      iVar29 = *piVar1;
                      cVar10 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar11) {
                        *piVar1 = iVar29 + -1;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar10 != '\0');
                    if (iVar29 + -1 == 0) {
                      func_0x000109a848d4(&uStack_298);
                    }
                  }
                  lStack_260 = 0;
                  uStack_280 = 0;
                  uStack_27c = 0;
                  uStack_288 = 0;
                  uStack_284 = 0;
                  uStack_270 = 0;
                  uStack_26c = 0;
                  uStack_278 = 0;
                  uStack_274 = 0;
                  if (0 < (int)uStack_294) {
                    lVar40 = 0;
                    do {
                      puStack_258[lVar40] = 0;
                      lVar40 = lVar40 + 1;
                    } while (lVar40 < (int)uStack_294);
                  }
                  if (puStack_250 != &uStack_248 && puStack_250 != (undefined8 *)0x0) {
                    _free(puStack_250[-1]);
                  }
                  FUN_109396e40(puVar6,param_4);
                  FUN_109396e40(puVar7,param_5);
                  ppuStack_1f0._0_4_ = 0x82010005;
                  uStack_1e0 = 0;
                  puStack_1e8 = puVar28;
                  FUN_109a479a0(puVar6,&ppuStack_1f0);
                  ppuStack_1f0._0_4_ = 0x82010005;
                  uStack_1e0 = 0;
                  puStack_1e8 = param_1 + 0x3ea;
                  FUN_109a479a0(param_1 + 0x4ba,&ppuStack_1f0);
                  ppuStack_1f0._0_4_ = 0x82010005;
                  uStack_1e0 = 0;
                  puStack_1e8 = puVar25;
                  FUN_109a479a0(puVar7,&ppuStack_1f0);
                  ppuStack_1f0._0_4_ = 0x82010005;
                  uStack_1e0 = 0;
                  puVar26 = param_1 + 0x4ee;
                  puStack_1e8 = param_1 + 0x41e;
                  FUN_109a479a0(puVar26,&ppuStack_1f0);
                  uStack_298 = 0;
                  uStack_294 = 0;
                  ppuStack_1f0._0_4_ = 0xc1020006;
                  uStack_1e0 = 0x100000001;
                  puStack_1e8 = &uStack_298;
                  FUN_109a91d90();
                  puVar27 = puVar4;
                  FUN_109a48a40(puVar4,&ppuStack_1f0,puVar26);
                  uStack_298 = 0;
                  uStack_294 = 0;
                  ppuStack_1f0._0_4_ = 0xc1020006;
                  uStack_1e0 = 0x100000001;
                  puStack_1e8 = &uStack_298;
                  FUN_109a91d90();
                  puVar26 = param_1 + 0x452;
                  FUN_109a48a40(puVar26,&ppuStack_1f0,puVar27);
                  uStack_298 = 0;
                  uStack_294 = 0;
                  ppuStack_1f0._0_4_ = 0xc1020006;
                  uStack_1e0 = 0x100000001;
                  puStack_1e8 = &uStack_298;
                  FUN_109a91d90();
                  puVar27 = puVar5;
                  FUN_109a48a40(puVar5,&ppuStack_1f0,puVar26);
                  uStack_298 = 0;
                  uStack_294 = 0;
                  ppuStack_1f0 = (undefined **)CONCAT44(ppuStack_1f0._4_4_,0xc1020006);
                  uStack_1e0 = 0x100000001;
                  puStack_1e8 = &uStack_298;
                  FUN_109a91d90();
                  FUN_109a48a40(param_1 + 0x486,&ppuStack_1f0,puVar27);
                  if (0 < (int)param_1[2]) {
                    iVar29 = 0;
                    dVar43 = (double)uVar32;
                    do {
                      uStack_298 = 0;
                      ppuStack_1f0 = &PTR_FUN_110af50b8;
                      lStack_1d8._0_4_ = (int)uStack_418;
                      puStack_1c0._0_1_ = 1;
                      uStack_1e0 = CONCAT44((int)((double)(int)uStack_418 / dVar43),uVar32);
                      uStack_294 = uVar32;
                      puStack_1e8 = param_1;
                      puStack_1d0 = puVar4;
                      puStack_1c8 = puVar5;
                      func_0x000109aa87cc(0xbff0000000000000,&uStack_298,&ppuStack_1f0);
                      uStack_298 = 0;
                      ppuStack_1f0 = &PTR_FUN_110af50b8;
                      lStack_1d8._0_4_ = (int)uStack_418;
                      puStack_1c0 = (undefined4 *)((ulong)puStack_1c0._1_7_ << 8);
                      uStack_1e0 = CONCAT44((int)((double)(int)uStack_418 / dVar43),uVar32);
                      uStack_294 = uVar32;
                      puStack_1e8 = param_1;
                      puStack_1d0 = puVar4;
                      puStack_1c8 = puVar5;
                      func_0x000109aa87cc(0xbff0000000000000,&uStack_298,&ppuStack_1f0);
                      uStack_298 = 0;
                      ppuStack_1f0 = &PTR_DAT_110af50e0;
                      lStack_1d8._0_4_ = (int)uStack_418;
                      uStack_1b0 = 1;
                      uStack_1e0 = CONCAT44((int)((double)(int)uStack_418 / dVar43),uVar32);
                      uStack_294 = uVar32;
                      puStack_1e8 = param_1;
                      puStack_1d0 = puVar6;
                      puStack_1c8 = puVar7;
                      puStack_1c0 = puVar28;
                      puStack_1b8 = puVar25;
                      func_0x000109aa87cc(0xbff0000000000000,&uStack_298,&ppuStack_1f0);
                      uStack_298 = 0;
                      ppuStack_1f0 = &PTR_DAT_110af50e0;
                      lStack_1d8._0_4_ = (int)uStack_418;
                      uStack_1b0 = 0;
                      uStack_1e0 = CONCAT44((int)((double)(int)uStack_418 / dVar43),uVar32);
                      uStack_294 = uVar32;
                      puStack_1e8 = param_1;
                      puStack_1d0 = puVar6;
                      puStack_1c8 = puVar7;
                      puStack_1c0 = puVar28;
                      puStack_1b8 = puVar25;
                      func_0x000109aa87cc(0xbff0000000000000,&uStack_298,&ppuStack_1f0);
                      uStack_298 = 0;
                      ppuStack_1f0 = &PTR_DAT_110af5108;
                      puStack_1c0._0_1_ = 1;
                      lStack_1d8._0_4_ = (int)uStack_418 + -1;
                      uStack_1e0 = CONCAT44((int)((double)(int)lStack_1d8 / dVar43),uVar32);
                      uStack_294 = uVar32;
                      puStack_1e8 = param_1;
                      puStack_1d0 = puVar6;
                      puStack_1c8 = puVar7;
                      func_0x000109aa87cc(0xbff0000000000000,&uStack_298,&ppuStack_1f0);
                      uStack_298 = 0;
                      ppuStack_1f0 = &PTR_DAT_110af5108;
                      puStack_1c0 = (undefined4 *)((ulong)puStack_1c0._1_7_ << 8);
                      lStack_1d8 = CONCAT44(lStack_1d8._4_4_,(int)uStack_418 + -1);
                      uStack_1e0 = CONCAT44((int)((double)((int)uStack_418 + -1) / dVar43),uVar32);
                      uStack_294 = uVar32;
                      puStack_1e8 = param_1;
                      puStack_1d0 = puVar6;
                      puStack_1c8 = puVar7;
                      func_0x000109aa87cc(0xbff0000000000000,&uStack_298,&ppuStack_1f0);
                      if (0 < (int)param_1[3]) {
                        iVar42 = 0;
                        do {
                          uStack_298 = 0;
                          ppuStack_1f0 = &PTR_DAT_110af5130;
                          lStack_1d8._0_4_ = (int)uStack_418;
                          puStack_1c0._0_1_ = 1;
                          uStack_1e0 = CONCAT44((int)((double)(int)uStack_418 / dVar43),uVar32);
                          uStack_294 = uVar32;
                          puStack_1e8 = param_1;
                          puStack_1d0 = puVar4;
                          puStack_1c8 = puVar5;
                          func_0x000109aa87cc(0xbff0000000000000,&uStack_298,&ppuStack_1f0);
                          uStack_298 = 0;
                          ppuStack_1f0 = &PTR_DAT_110af5130;
                          lStack_1d8 = CONCAT44(lStack_1d8._4_4_,(int)uStack_418);
                          puStack_1c0 = (undefined4 *)((ulong)puStack_1c0._1_7_ << 8);
                          uStack_1e0 = CONCAT44((int)((double)(int)uStack_418 / dVar43),uVar32);
                          uStack_294 = uVar32;
                          puStack_1e8 = param_1;
                          puStack_1d0 = puVar4;
                          puStack_1c8 = puVar5;
                          func_0x000109aa87cc(0xbff0000000000000,&uStack_298,&ppuStack_1f0);
                          iVar42 = iVar42 + 1;
                        } while (iVar42 < (int)param_1[3]);
                      }
                      FUN_109a7c6f4(&ppuStack_1f0,puVar6,puVar4);
                      (**(code **)(*ppuStack_1f0 + 0x18))(ppuStack_1f0,&ppuStack_1f0,puVar28,5);
                      FUN_10918eb6c(&ppuStack_1f0);
                      FUN_109a7c6f4(&ppuStack_1f0,param_1 + 0x4ba,param_1 + 0x452);
                      (**(code **)(*ppuStack_1f0 + 0x18))
                                (ppuStack_1f0,&ppuStack_1f0,param_1 + 0x3ea,5);
                      FUN_10918eb6c(&ppuStack_1f0);
                      FUN_1093971b0(puVar28);
                      FUN_109a7c6f4(&ppuStack_1f0,puVar7,puVar5);
                      (**(code **)(*ppuStack_1f0 + 0x18))(ppuStack_1f0,&ppuStack_1f0,puVar25,5);
                      FUN_10918eb6c(&ppuStack_1f0);
                      FUN_109a7c6f4(&ppuStack_1f0,param_1 + 0x4ee,param_1 + 0x486);
                      (**(code **)(*ppuStack_1f0 + 0x18))
                                (ppuStack_1f0,&ppuStack_1f0,param_1 + 0x41e,5);
                      FUN_10918eb6c(&ppuStack_1f0);
                      FUN_1093971b0(puVar25);
                      iVar29 = iVar29 + 1;
                    } while (iVar29 < (int)param_1[2]);
                  }
                  FUN_10939705c(param_4,puVar28);
                  FUN_10939705c(param_5);
                  iVar29 = (int)puVar25;
                  if (uStack_448 != 0) {
                    piVar1 = (int *)(uStack_448 + 0x14);
                    do {
                      iVar42 = *piVar1;
                      cVar10 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar11) {
                        *piVar1 = iVar42 + -1;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar10 != '\0');
                    if (iVar42 + -1 == 0) {
                      param_5 = &uStack_480;
                      func_0x000109a848d4(param_5);
                    }
                  }
                  uStack_448 = 0;
                  uStack_468 = 0;
                  uStack_470 = 0;
                  uStack_458 = 0;
                  uStack_460 = 0;
                  if (0 < uStack_480._4_4_) {
                    lVar40 = 0;
                    do {
                      *(undefined4 *)(uStack_440 + lVar40 * 4) = 0;
                      lVar40 = lVar40 + 1;
                    } while (lVar40 < uStack_480._4_4_);
                  }
                  if (puStack_438 != &uStack_430 && puStack_438 != (undefined8 *)0x0) {
                    param_5 = (undefined8 *)puStack_438[-1];
                    _free(param_5);
                  }
                  if (uStack_3e8 != 0) {
                    piVar1 = (int *)(uStack_3e8 + 0x14);
                    do {
                      iVar42 = *piVar1;
                      cVar10 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar11) {
                        *piVar1 = iVar42 + -1;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar10 != '\0');
                    if (iVar42 + -1 == 0) {
                      param_5 = &uStack_420;
                      func_0x000109a848d4(param_5);
                    }
                  }
                  uStack_3e8 = 0;
                  uStack_408 = 0;
                  uStack_410 = 0;
                  uStack_3f8 = 0;
                  uStack_400 = 0;
                  if (0 < uStack_420._4_4_) {
                    lVar40 = 0;
                    do {
                      piStack_3e0[lVar40] = 0;
                      lVar40 = lVar40 + 1;
                    } while (lVar40 < uStack_420._4_4_);
                  }
                  if (puStack_3d8 != &uStack_3d0 && puStack_3d8 != (undefined8 *)0x0) {
                    param_5 = (undefined8 *)puStack_3d8[-1];
                    _free(param_5);
                  }
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    return;
                  }
                  ___stack_chk_fail();
                  if (iVar29 != 0) {
                    func_0x000104bd46a0(param_5);
                    func_0x00010567aa40(&uStack_420);
                  }
                  __Unwind_Resume(param_5);
                  return;
                }
                puVar28 = (undefined4 *)0x1c;
                func_0x000107c2ae8c();
                *puVar28 = 1;
                ppuStack_1f0 = (undefined **)(puVar28 + 1);
                puStack_1e8 = (undefined4 *)0x17;
                *(undefined1 *)((long)puVar28 + 0x1b) = 0;
                *(undefined8 *)(puVar28 + 3) = 0x28657a6953656d61;
                *(undefined8 *)(puVar28 + 1) = 0x732e755f776f6c66;
                *(undefined8 *)((long)puVar28 + 0x13) = 0x29765f776f6c6628;
                FUN_109ac3188(0xffffff29,&ppuStack_1f0,&UNK_10f568c71,&UNK_10f568af6,0x42f);
              }
            }
            else {
              puVar28 = (undefined4 *)0x4c;
              func_0x000107c2ae8c();
              *puVar28 = 1;
              ppuStack_1f0 = (undefined **)(puVar28 + 1);
              puStack_1e8 = (undefined4 *)0x45;
              *(undefined8 *)(puVar28 + 7) = 0x2868747065642e76;
              *(undefined8 *)(puVar28 + 5) = 0x5f776f6c66202626;
              *(undefined8 *)(puVar28 + 0xb) = 0x6620262620463233;
              *(undefined8 *)(puVar28 + 9) = 0x5f5643203d3d2029;
              *(undefined8 *)(puVar28 + 0xf) = 0x2928736c656e6e61;
              *(undefined8 *)(puVar28 + 0xd) = 0x68632e765f776f6c;
              *(undefined1 *)((long)puVar28 + 0x49) = 0;
              *(undefined8 *)((long)puVar28 + 0x41) = 0x31203d3d20292873;
              *(undefined8 *)(puVar28 + 3) = 0x2029287974706d65;
              *(undefined8 *)(puVar28 + 1) = 0x2e765f776f6c6621;
              FUN_109ac3188(0xffffff29,&ppuStack_1f0,&UNK_10f568c71,&UNK_10f568af6,0x42d);
            }
          }
          else {
            puVar28 = (undefined4 *)0x4c;
            func_0x000107c2ae8c();
            *puVar28 = 1;
            ppuStack_1f0 = (undefined **)(puVar28 + 1);
            puStack_1e8 = (undefined4 *)0x45;
            *(undefined8 *)(puVar28 + 7) = 0x2868747065642e75;
            *(undefined8 *)(puVar28 + 5) = 0x5f776f6c66202626;
            *(undefined8 *)(puVar28 + 0xb) = 0x6620262620463233;
            *(undefined8 *)(puVar28 + 9) = 0x5f5643203d3d2029;
            *(undefined8 *)(puVar28 + 0xf) = 0x2928736c656e6e61;
            *(undefined8 *)(puVar28 + 0xd) = 0x68632e755f776f6c;
            *(undefined1 *)((long)puVar28 + 0x49) = 0;
            *(undefined8 *)((long)puVar28 + 0x41) = 0x31203d3d20292873;
            *(undefined8 *)(puVar28 + 3) = 0x2029287974706d65;
            *(undefined8 *)(puVar28 + 1) = 0x2e755f776f6c6621;
            FUN_109ac3188(0xffffff29,&ppuStack_1f0,&UNK_10f568c71,&UNK_10f568af6,0x42c);
          }
        }
        else {
          puVar28 = (undefined4 *)0x64;
          func_0x000107c2ae8c();
          *puVar28 = 1;
          ppuStack_1f0 = (undefined **)(puVar28 + 1);
          puStack_1e8 = (undefined4 *)0x5e;
          *(undefined8 *)(puVar28 + 0xb) = 0x207c7c202955385f;
          *(undefined8 *)(puVar28 + 9) = 0x5643203d3d202928;
          *(undefined8 *)(puVar28 + 0xf) = 0x43203d3d20292868;
          *(undefined8 *)(puVar28 + 0xd) = 0x747065642e304928;
          *(undefined8 *)(puVar28 + 0x13) = 0x747065642e314920;
          *(undefined8 *)(puVar28 + 0x11) = 0x2626204632335f56;
          *(undefined8 *)((long)puVar28 + 0x5a) = 0x294632335f564320;
          *(undefined8 *)((long)puVar28 + 0x52) = 0x3d3d202928687470;
          *(undefined8 *)(puVar28 + 3) = 0x43203d3d20292868;
          *(undefined8 *)(puVar28 + 1) = 0x747065642e304928;
          *(undefined1 *)((long)puVar28 + 0x62) = 0;
          *(undefined8 *)(puVar28 + 7) = 0x68747065642e3149;
          *(undefined8 *)(puVar28 + 5) = 0x2026262055385f56;
          FUN_109ac3188(0xffffff29,&ppuStack_1f0,&UNK_10f568c71,&UNK_10f568af6,0x42b);
        }
      }
    }
    else {
      puVar28 = (undefined4 *)0x28;
      func_0x000107c2ae8c();
      *puVar28 = 1;
      ppuStack_1f0 = (undefined **)(puVar28 + 1);
      puStack_1e8 = (undefined4 *)0x21;
      *(undefined2 *)(puVar28 + 9) = 0x31;
      *(undefined8 *)(puVar28 + 3) = 0x4920262620292879;
      *(undefined8 *)(puVar28 + 1) = 0x74706d652e314921;
      *(undefined8 *)(puVar28 + 7) = 0x203d3d202928736c;
      *(undefined8 *)(puVar28 + 5) = 0x656e6e6168632e31;
      FUN_109ac3188(0xffffff29,&ppuStack_1f0,&UNK_10f568c71,&UNK_10f568af6,0x429);
    }
  }
  else {
    puVar28 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar28 = 1;
    ppuStack_1f0 = (undefined **)(puVar28 + 1);
    puStack_1e8 = (undefined4 *)0x21;
    *(undefined2 *)(puVar28 + 9) = 0x31;
    *(undefined8 *)(puVar28 + 3) = 0x4920262620292879;
    *(undefined8 *)(puVar28 + 1) = 0x74706d652e304921;
    *(undefined8 *)(puVar28 + 7) = 0x203d3d202928736c;
    *(undefined8 *)(puVar28 + 5) = 0x656e6e6168632e30;
    FUN_109ac3188(0xffffff29,&ppuStack_1f0,&UNK_10f568c71,&UNK_10f568af6,0x428);
  }
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x10939adec);
  (*pcVar22)();
}



/* Entry: 10939b0f8; end: 10939b107;  */

void FUN_10939b0f8(void)

{
  return;
}



/* Entry: 10939b108; end: 10939b63f;  */

void FUN_10939b108(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x60) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x28);
    }
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x68);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x2c));
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xc0) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x88);
    }
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 200);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x8c));
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x120) + 0x14);
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
      func_0x000109a848d4(param_1 + 0xe8);
    }
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (0 < *(int *)(param_1 + 0xec)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x128);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xec));
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x180) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x148);
    }
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  if (0 < *(int *)(param_1 + 0x14c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x188);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x14c));
  }
  if (*(long *)(param_1 + 0x1e0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x1e0) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1a8);
    }
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (0 < *(int *)(param_1 + 0x1ac)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x1e8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1ac));
  }
  if (*(long *)(param_1 + 0x240) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x240) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x208);
    }
  }
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  if (0 < *(int *)(param_1 + 0x20c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x248);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x20c));
  }
  if (*(long *)(param_1 + 0x2a0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x2a0) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x268);
    }
  }
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  if (0 < *(int *)(param_1 + 0x26c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x2a8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x26c));
  }
  if (*(long *)(param_1 + 0x300) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x300) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x2c8);
    }
  }
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (0 < *(int *)(param_1 + 0x2cc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x308);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x2cc));
  }
  FUN_109397420(param_1 + 0x328);
  FUN_109397420(param_1 + 0x3f8);
  FUN_109397420(param_1 + 0x4c8);
  FUN_109397420(param_1 + 0x598);
  FUN_109397420(param_1 + 0x668);
  FUN_109397420(param_1 + 0x738);
  FUN_109397420(param_1 + 0x808);
  FUN_109397420(param_1 + 0x8d8);
  FUN_109397420(param_1 + 0x9a8);
  FUN_109397420(param_1 + 0xa78);
  FUN_109397420(param_1 + 0xb48);
  FUN_109397420(param_1 + 0xc18);
  FUN_109397420(param_1 + 0xce8);
  FUN_109397420(param_1 + 0xdb8);
  if (*(long *)(param_1 + 0xec0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xec0) + 0x14);
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
      func_0x000109a848d4(param_1 + 0xe88);
    }
  }
  *(undefined8 *)(param_1 + 0xec0) = 0;
  *(undefined8 *)(param_1 + 0xea0) = 0;
  *(undefined8 *)(param_1 + 0xe98) = 0;
  *(undefined8 *)(param_1 + 0xeb0) = 0;
  *(undefined8 *)(param_1 + 0xea8) = 0;
  if (0 < *(int *)(param_1 + 0xe8c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xec8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xe8c));
  }
  if (*(long *)(param_1 + 0xf20) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xf20) + 0x14);
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
      func_0x000109a848d4(param_1 + 0xee8);
    }
  }
  *(undefined8 *)(param_1 + 0xf20) = 0;
  *(undefined8 *)(param_1 + 0xf00) = 0;
  *(undefined8 *)(param_1 + 0xef8) = 0;
  *(undefined8 *)(param_1 + 0xf10) = 0;
  *(undefined8 *)(param_1 + 0xf08) = 0;
  if (0 < *(int *)(param_1 + 0xeec)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xf28);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xeec));
  }
  FUN_109397420(param_1 + 0xf48);
  FUN_109397420(param_1 + 0x1018);
  FUN_109397420(param_1 + 0x10e8);
  FUN_109397420(param_1 + 0x11b8);
  FUN_109397420(param_1 + 0x1288);
  if (*(long *)(param_1 + 0x1390) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x1390) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1358);
    }
  }
  *(undefined8 *)(param_1 + 0x1390) = 0;
  *(undefined8 *)(param_1 + 0x1370) = 0;
  *(undefined8 *)(param_1 + 0x1368) = 0;
  *(undefined8 *)(param_1 + 0x1380) = 0;
  *(undefined8 *)(param_1 + 0x1378) = 0;
  if (0 < *(int *)(param_1 + 0x135c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x1398);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x135c));
  }
  if (*(long *)(param_1 + 0x13f0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x13f0) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x13b8);
    }
  }
  *(undefined8 *)(param_1 + 0x13f0) = 0;
  *(undefined8 *)(param_1 + 0x13d0) = 0;
  *(undefined8 *)(param_1 + 0x13c8) = 0;
  *(undefined8 *)(param_1 + 0x13e0) = 0;
  *(undefined8 *)(param_1 + 0x13d8) = 0;
  if (0 < *(int *)(param_1 + 0x13bc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x13f8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x13bc));
  }
  return;
}



/* Entry: 10939b640; end: 10939b643;  */

undefined8 * FUN_10939b640(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110af4fc8;
  FUN_10939b734(param_1 + 0x26b);
  FUN_10939b734(param_1 + 0x251);
  FUN_10939b734(param_1 + 0x237);
  FUN_10939b734(param_1 + 0x21d);
  FUN_10939b734(param_1 + 0x203);
  FUN_10939b734(param_1 + 0x1e9);
  if (param_1[0x1e4] != 0) {
    piVar1 = (int *)(param_1[0x1e4] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1dd);
    }
  }
  param_1[0x1e4] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e1] = 0;
  if (0 < *(int *)((long)param_1 + 0xeec)) {
    lVar5 = 0;
    lVar7 = param_1[0x1e5];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xeec));
  }
  puVar6 = (undefined8 *)param_1[0x1e6];
  if (puVar6 != param_1 + 0x1e7 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x1d8] != 0) {
    piVar1 = (int *)(param_1[0x1d8] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1d1);
    }
  }
  param_1[0x1d8] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d5] = 0;
  if (0 < *(int *)((long)param_1 + 0xe8c)) {
    lVar5 = 0;
    lVar7 = param_1[0x1d9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xe8c));
  }
  puVar6 = (undefined8 *)param_1[0x1da];
  if (puVar6 != param_1 + 0x1db && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_10939b734(param_1 + 0x1b7);
  FUN_10939b734(param_1 + 0x19d);
  FUN_10939b734(param_1 + 0x183);
  FUN_10939b734(param_1 + 0x169);
  FUN_10939b734(param_1 + 0x14f);
  FUN_10939b734(param_1 + 0x135);
  FUN_10939b734(param_1 + 0x11b);
  FUN_10939b734(param_1 + 0x101);
  FUN_10939b734(param_1 + 0xe7);
  FUN_10939b734(param_1 + 0xcd);
  FUN_10939b734(param_1 + 0xb3);
  FUN_10939b734(param_1 + 0x99);
  FUN_10939b734(param_1 + 0x7f);
  FUN_10939b734(param_1 + 0x65);
  if (param_1[0x60] != 0) {
    piVar1 = (int *)(param_1[0x60] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x59);
    }
  }
  param_1[0x60] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  if (0 < *(int *)((long)param_1 + 0x2cc)) {
    lVar5 = 0;
    lVar7 = param_1[0x61];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2cc));
  }
  puVar6 = (undefined8 *)param_1[0x62];
  if (puVar6 != param_1 + 99 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x54] != 0) {
    piVar1 = (int *)(param_1[0x54] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x4d);
    }
  }
  param_1[0x54] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  if (0 < *(int *)((long)param_1 + 0x26c)) {
    lVar5 = 0;
    lVar7 = param_1[0x55];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x26c));
  }
  puVar6 = (undefined8 *)param_1[0x56];
  if (puVar6 != param_1 + 0x57 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x48] != 0) {
    piVar1 = (int *)(param_1[0x48] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x41);
    }
  }
  param_1[0x48] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  if (0 < *(int *)((long)param_1 + 0x20c)) {
    lVar5 = 0;
    lVar7 = param_1[0x49];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x20c));
  }
  puVar6 = (undefined8 *)param_1[0x4a];
  if (puVar6 != param_1 + 0x4b && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3c] != 0) {
    piVar1 = (int *)(param_1[0x3c] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x35);
    }
  }
  param_1[0x3c] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  if (0 < *(int *)((long)param_1 + 0x1ac)) {
    lVar5 = 0;
    lVar7 = param_1[0x3d];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1ac));
  }
  puVar6 = (undefined8 *)param_1[0x3e];
  if (puVar6 != param_1 + 0x3f && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x30] != 0) {
    piVar1 = (int *)(param_1[0x30] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x29);
    }
  }
  param_1[0x30] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  if (0 < *(int *)((long)param_1 + 0x14c)) {
    lVar5 = 0;
    lVar7 = param_1[0x31];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14c));
  }
  puVar6 = (undefined8 *)param_1[0x32];
  if (puVar6 != param_1 + 0x33 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x24] != 0) {
    piVar1 = (int *)(param_1[0x24] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1d);
    }
  }
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  if (0 < *(int *)((long)param_1 + 0xec)) {
    lVar5 = 0;
    lVar7 = param_1[0x25];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xec));
  }
  puVar6 = (undefined8 *)param_1[0x26];
  if (puVar6 != param_1 + 0x27 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x18] != 0) {
    piVar1 = (int *)(param_1[0x18] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x11);
    }
  }
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  if (0 < *(int *)((long)param_1 + 0x8c)) {
    lVar5 = 0;
    lVar7 = param_1[0x19];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x8c));
  }
  puVar6 = (undefined8 *)param_1[0x1a];
  if (puVar6 != param_1 + 0x1b && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0xc] != 0) {
    piVar1 = (int *)(param_1[0xc] + 0x14);
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
      func_0x000109a848d4(param_1 + 5);
    }
  }
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar5 = 0;
    lVar7 = param_1[0xd];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2c));
  }
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 10939b644; end: 10939b657;  */

void FUN_10939b644(void)

{
  FUN_10939ba08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10939b658; end: 10939b6b7;  */

undefined4 FUN_10939b658(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10939b6b8; end: 10939b723;  */

void FUN_10939b6b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af5090;
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10939b724; end: 10939b733;  */

void FUN_10939b724(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10939b734; end: 10939b84b;  */

long FUN_10939b734(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10939b84c; end: 10939b8df;  */

void FUN_10939b84c(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  
  if (param_4 != 0) {
    if (param_4 >> 0x3c != 0) {
      FUN_10939b8e0();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10939b8c4);
      (*pcVar1)();
    }
    lVar2 = param_2;
    FUN_10939b8f4();
    *param_1 = param_4;
    param_1[1] = param_4;
    param_1[2] = param_4 + lVar2 * 0x10;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(param_4,param_2,param_3);
    }
    param_1[1] = param_4 + param_3;
  }
  return;
}



/* Entry: 10939b8e0; end: 10939b8f3;  */

void FUN_10939b8e0(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar2 >> 0x3c == 0) {
    __Znwm((long)puVar2 << 4);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    if (param_4 >> 0x3d != 0) {
      FUN_10939b9c0();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10939b9a4);
      (*pcVar1)();
    }
    puVar3 = puVar2;
    FUN_10939b9d4();
    *puVar2 = puVar3;
    puVar2[1] = puVar3;
    puVar2[2] = puVar3 + param_4;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(puVar3,param_2,param_3);
    }
    puVar2[1] = (undefined *)((long)puVar3 + param_3);
  }
  return;
}



/* Entry: 10939b8f4; end: 10939b927;  */

void FUN_10939b8f4(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  ulong *puVar2;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    if (param_4 >> 0x3d != 0) {
      FUN_10939b9c0();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10939b9a4);
      (*pcVar1)();
    }
    puVar2 = param_1;
    FUN_10939b9d4();
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)(puVar2 + param_4);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(puVar2,param_2,param_3);
    }
    param_1[1] = (long)puVar2 + param_3;
  }
  return;
}



/* Entry: 10939b928; end: 10939b9bf;  */

void FUN_10939b928(long *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long *plVar2;
  
  if (param_4 != 0) {
    if (param_4 >> 0x3d != 0) {
      FUN_10939b9c0();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10939b9a4);
      (*pcVar1)();
    }
    plVar2 = param_1;
    FUN_10939b9d4();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_4);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(plVar2,param_2,param_3);
    }
    param_1[1] = (long)plVar2 + param_3;
  }
  return;
}



/* Entry: 10939b9c0; end: 10939b9d3;  */

undefined1  [16] FUN_10939b9c0(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar5 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar6 = param_2 << 3;
    __Znwm(lVar6);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar6;
    return auVar9;
  }
  func_0x000104c4f740();
  *puVar5 = &PTR_FUN_110af4fc8;
  FUN_10939b734(puVar5 + 0x26b);
  FUN_10939b734(puVar5 + 0x251);
  FUN_10939b734(puVar5 + 0x237);
  FUN_10939b734(puVar5 + 0x21d);
  FUN_10939b734(puVar5 + 0x203);
  FUN_10939b734(puVar5 + 0x1e9);
  if (puVar5[0x1e4] != 0) {
    piVar1 = (int *)(puVar5[0x1e4] + 0x14);
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
      func_0x000109a848d4(puVar5 + 0x1dd);
    }
  }
  puVar5[0x1e4] = 0;
  puVar5[0x1e0] = 0;
  puVar5[0x1df] = 0;
  puVar5[0x1e2] = 0;
  puVar5[0x1e1] = 0;
  if (0 < *(int *)((long)puVar5 + 0xeec)) {
    lVar6 = 0;
    lVar8 = puVar5[0x1e5];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0xeec));
  }
  puVar7 = (undefined8 *)puVar5[0x1e6];
  if (puVar7 != puVar5 + 0x1e7 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (puVar5[0x1d8] != 0) {
    piVar1 = (int *)(puVar5[0x1d8] + 0x14);
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
      func_0x000109a848d4(puVar5 + 0x1d1);
    }
  }
  puVar5[0x1d8] = 0;
  puVar5[0x1d4] = 0;
  puVar5[0x1d3] = 0;
  puVar5[0x1d6] = 0;
  puVar5[0x1d5] = 0;
  if (0 < *(int *)((long)puVar5 + 0xe8c)) {
    lVar6 = 0;
    lVar8 = puVar5[0x1d9];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0xe8c));
  }
  puVar7 = (undefined8 *)puVar5[0x1da];
  if (puVar7 != puVar5 + 0x1db && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  FUN_10939b734(puVar5 + 0x1b7);
  FUN_10939b734(puVar5 + 0x19d);
  FUN_10939b734(puVar5 + 0x183);
  FUN_10939b734(puVar5 + 0x169);
  FUN_10939b734(puVar5 + 0x14f);
  FUN_10939b734(puVar5 + 0x135);
  FUN_10939b734(puVar5 + 0x11b);
  FUN_10939b734(puVar5 + 0x101);
  FUN_10939b734(puVar5 + 0xe7);
  FUN_10939b734(puVar5 + 0xcd);
  FUN_10939b734(puVar5 + 0xb3);
  FUN_10939b734(puVar5 + 0x99);
  FUN_10939b734(puVar5 + 0x7f);
  FUN_10939b734(puVar5 + 0x65);
  if (puVar5[0x60] != 0) {
    piVar1 = (int *)(puVar5[0x60] + 0x14);
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
      func_0x000109a848d4(puVar5 + 0x59);
    }
  }
  puVar5[0x60] = 0;
  puVar5[0x5c] = 0;
  puVar5[0x5b] = 0;
  puVar5[0x5e] = 0;
  puVar5[0x5d] = 0;
  if (0 < *(int *)((long)puVar5 + 0x2cc)) {
    lVar6 = 0;
    lVar8 = puVar5[0x61];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0x2cc));
  }
  puVar7 = (undefined8 *)puVar5[0x62];
  if (puVar7 != puVar5 + 99 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (puVar5[0x54] != 0) {
    piVar1 = (int *)(puVar5[0x54] + 0x14);
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
      func_0x000109a848d4(puVar5 + 0x4d);
    }
  }
  puVar5[0x54] = 0;
  puVar5[0x50] = 0;
  puVar5[0x4f] = 0;
  puVar5[0x52] = 0;
  puVar5[0x51] = 0;
  if (0 < *(int *)((long)puVar5 + 0x26c)) {
    lVar6 = 0;
    lVar8 = puVar5[0x55];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0x26c));
  }
  puVar7 = (undefined8 *)puVar5[0x56];
  if (puVar7 != puVar5 + 0x57 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (puVar5[0x48] != 0) {
    piVar1 = (int *)(puVar5[0x48] + 0x14);
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
      func_0x000109a848d4(puVar5 + 0x41);
    }
  }
  puVar5[0x48] = 0;
  puVar5[0x44] = 0;
  puVar5[0x43] = 0;
  puVar5[0x46] = 0;
  puVar5[0x45] = 0;
  if (0 < *(int *)((long)puVar5 + 0x20c)) {
    lVar6 = 0;
    lVar8 = puVar5[0x49];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0x20c));
  }
  puVar7 = (undefined8 *)puVar5[0x4a];
  if (puVar7 != puVar5 + 0x4b && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (puVar5[0x3c] != 0) {
    piVar1 = (int *)(puVar5[0x3c] + 0x14);
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
      func_0x000109a848d4(puVar5 + 0x35);
    }
  }
  puVar5[0x3c] = 0;
  puVar5[0x38] = 0;
  puVar5[0x37] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x39] = 0;
  if (0 < *(int *)((long)puVar5 + 0x1ac)) {
    lVar6 = 0;
    lVar8 = puVar5[0x3d];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0x1ac));
  }
  puVar7 = (undefined8 *)puVar5[0x3e];
  if (puVar7 != puVar5 + 0x3f && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (puVar5[0x30] != 0) {
    piVar1 = (int *)(puVar5[0x30] + 0x14);
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
      func_0x000109a848d4(puVar5 + 0x29);
    }
  }
  puVar5[0x30] = 0;
  puVar5[0x2c] = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2d] = 0;
  if (0 < *(int *)((long)puVar5 + 0x14c)) {
    lVar6 = 0;
    lVar8 = puVar5[0x31];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0x14c));
  }
  puVar7 = (undefined8 *)puVar5[0x32];
  if (puVar7 != puVar5 + 0x33 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (puVar5[0x24] != 0) {
    piVar1 = (int *)(puVar5[0x24] + 0x14);
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
      func_0x000109a848d4(puVar5 + 0x1d);
    }
  }
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x24] = 0;
  puVar5[0x22] = 0;
  puVar5[0x21] = 0;
  if (0 < *(int *)((long)puVar5 + 0xec)) {
    lVar6 = 0;
    lVar8 = puVar5[0x25];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0xec));
  }
  puVar7 = (undefined8 *)puVar5[0x26];
  if (puVar7 != puVar5 + 0x27 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (puVar5[0x18] != 0) {
    piVar1 = (int *)(puVar5[0x18] + 0x14);
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
      func_0x000109a848d4(puVar5 + 0x11);
    }
  }
  puVar5[0x18] = 0;
  puVar5[0x14] = 0;
  puVar5[0x13] = 0;
  puVar5[0x16] = 0;
  puVar5[0x15] = 0;
  if (0 < *(int *)((long)puVar5 + 0x8c)) {
    lVar6 = 0;
    lVar8 = puVar5[0x19];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0x8c));
  }
  puVar7 = (undefined8 *)puVar5[0x1a];
  if (puVar7 != puVar5 + 0x1b && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (puVar5[0xc] != 0) {
    piVar1 = (int *)(puVar5[0xc] + 0x14);
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
      func_0x000109a848d4(puVar5 + 5);
    }
  }
  puVar5[0xc] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  if (0 < *(int *)((long)puVar5 + 0x2c)) {
    lVar6 = 0;
    lVar8 = puVar5[0xd];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar5 + 0x2c));
  }
  puVar7 = (undefined8 *)puVar5[0xe];
  if (puVar7 != puVar5 + 0xf && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = puVar5;
  return auVar10;
}



/* Entry: 10939b9d4; end: 10939ba07;  */

undefined1  [16] FUN_10939b9d4(undefined8 *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar5 = param_2 << 3;
    __Znwm(lVar5);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar5;
    return auVar8;
  }
  func_0x000104c4f740();
  *param_1 = &PTR_FUN_110af4fc8;
  FUN_10939b734(param_1 + 0x26b);
  FUN_10939b734(param_1 + 0x251);
  FUN_10939b734(param_1 + 0x237);
  FUN_10939b734(param_1 + 0x21d);
  FUN_10939b734(param_1 + 0x203);
  FUN_10939b734(param_1 + 0x1e9);
  if (param_1[0x1e4] != 0) {
    piVar1 = (int *)(param_1[0x1e4] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1dd);
    }
  }
  param_1[0x1e4] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e1] = 0;
  if (0 < *(int *)((long)param_1 + 0xeec)) {
    lVar5 = 0;
    lVar7 = param_1[0x1e5];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xeec));
  }
  puVar6 = (undefined8 *)param_1[0x1e6];
  if (puVar6 != param_1 + 0x1e7 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x1d8] != 0) {
    piVar1 = (int *)(param_1[0x1d8] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1d1);
    }
  }
  param_1[0x1d8] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d5] = 0;
  if (0 < *(int *)((long)param_1 + 0xe8c)) {
    lVar5 = 0;
    lVar7 = param_1[0x1d9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xe8c));
  }
  puVar6 = (undefined8 *)param_1[0x1da];
  if (puVar6 != param_1 + 0x1db && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_10939b734(param_1 + 0x1b7);
  FUN_10939b734(param_1 + 0x19d);
  FUN_10939b734(param_1 + 0x183);
  FUN_10939b734(param_1 + 0x169);
  FUN_10939b734(param_1 + 0x14f);
  FUN_10939b734(param_1 + 0x135);
  FUN_10939b734(param_1 + 0x11b);
  FUN_10939b734(param_1 + 0x101);
  FUN_10939b734(param_1 + 0xe7);
  FUN_10939b734(param_1 + 0xcd);
  FUN_10939b734(param_1 + 0xb3);
  FUN_10939b734(param_1 + 0x99);
  FUN_10939b734(param_1 + 0x7f);
  FUN_10939b734(param_1 + 0x65);
  if (param_1[0x60] != 0) {
    piVar1 = (int *)(param_1[0x60] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x59);
    }
  }
  param_1[0x60] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  if (0 < *(int *)((long)param_1 + 0x2cc)) {
    lVar5 = 0;
    lVar7 = param_1[0x61];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2cc));
  }
  puVar6 = (undefined8 *)param_1[0x62];
  if (puVar6 != param_1 + 99 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x54] != 0) {
    piVar1 = (int *)(param_1[0x54] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x4d);
    }
  }
  param_1[0x54] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  if (0 < *(int *)((long)param_1 + 0x26c)) {
    lVar5 = 0;
    lVar7 = param_1[0x55];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x26c));
  }
  puVar6 = (undefined8 *)param_1[0x56];
  if (puVar6 != param_1 + 0x57 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x48] != 0) {
    piVar1 = (int *)(param_1[0x48] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x41);
    }
  }
  param_1[0x48] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  if (0 < *(int *)((long)param_1 + 0x20c)) {
    lVar5 = 0;
    lVar7 = param_1[0x49];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x20c));
  }
  puVar6 = (undefined8 *)param_1[0x4a];
  if (puVar6 != param_1 + 0x4b && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3c] != 0) {
    piVar1 = (int *)(param_1[0x3c] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x35);
    }
  }
  param_1[0x3c] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  if (0 < *(int *)((long)param_1 + 0x1ac)) {
    lVar5 = 0;
    lVar7 = param_1[0x3d];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1ac));
  }
  puVar6 = (undefined8 *)param_1[0x3e];
  if (puVar6 != param_1 + 0x3f && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x30] != 0) {
    piVar1 = (int *)(param_1[0x30] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x29);
    }
  }
  param_1[0x30] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  if (0 < *(int *)((long)param_1 + 0x14c)) {
    lVar5 = 0;
    lVar7 = param_1[0x31];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14c));
  }
  puVar6 = (undefined8 *)param_1[0x32];
  if (puVar6 != param_1 + 0x33 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x24] != 0) {
    piVar1 = (int *)(param_1[0x24] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1d);
    }
  }
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  if (0 < *(int *)((long)param_1 + 0xec)) {
    lVar5 = 0;
    lVar7 = param_1[0x25];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xec));
  }
  puVar6 = (undefined8 *)param_1[0x26];
  if (puVar6 != param_1 + 0x27 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x18] != 0) {
    piVar1 = (int *)(param_1[0x18] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x11);
    }
  }
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  if (0 < *(int *)((long)param_1 + 0x8c)) {
    lVar5 = 0;
    lVar7 = param_1[0x19];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x8c));
  }
  puVar6 = (undefined8 *)param_1[0x1a];
  if (puVar6 != param_1 + 0x1b && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0xc] != 0) {
    piVar1 = (int *)(param_1[0xc] + 0x14);
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
      func_0x000109a848d4(param_1 + 5);
    }
  }
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar5 = 0;
    lVar7 = param_1[0xd];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2c));
  }
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 10939ba08; end: 10939bfeb;  */

undefined8 * FUN_10939ba08(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110af4fc8;
  FUN_10939b734(param_1 + 0x26b);
  FUN_10939b734(param_1 + 0x251);
  FUN_10939b734(param_1 + 0x237);
  FUN_10939b734(param_1 + 0x21d);
  FUN_10939b734(param_1 + 0x203);
  FUN_10939b734(param_1 + 0x1e9);
  if (param_1[0x1e4] != 0) {
    piVar1 = (int *)(param_1[0x1e4] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1dd);
    }
  }
  param_1[0x1e4] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e1] = 0;
  if (0 < *(int *)((long)param_1 + 0xeec)) {
    lVar5 = 0;
    lVar7 = param_1[0x1e5];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xeec));
  }
  puVar6 = (undefined8 *)param_1[0x1e6];
  if (puVar6 != param_1 + 0x1e7 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x1d8] != 0) {
    piVar1 = (int *)(param_1[0x1d8] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1d1);
    }
  }
  param_1[0x1d8] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d5] = 0;
  if (0 < *(int *)((long)param_1 + 0xe8c)) {
    lVar5 = 0;
    lVar7 = param_1[0x1d9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xe8c));
  }
  puVar6 = (undefined8 *)param_1[0x1da];
  if (puVar6 != param_1 + 0x1db && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_10939b734(param_1 + 0x1b7);
  FUN_10939b734(param_1 + 0x19d);
  FUN_10939b734(param_1 + 0x183);
  FUN_10939b734(param_1 + 0x169);
  FUN_10939b734(param_1 + 0x14f);
  FUN_10939b734(param_1 + 0x135);
  FUN_10939b734(param_1 + 0x11b);
  FUN_10939b734(param_1 + 0x101);
  FUN_10939b734(param_1 + 0xe7);
  FUN_10939b734(param_1 + 0xcd);
  FUN_10939b734(param_1 + 0xb3);
  FUN_10939b734(param_1 + 0x99);
  FUN_10939b734(param_1 + 0x7f);
  FUN_10939b734(param_1 + 0x65);
  if (param_1[0x60] != 0) {
    piVar1 = (int *)(param_1[0x60] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x59);
    }
  }
  param_1[0x60] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  if (0 < *(int *)((long)param_1 + 0x2cc)) {
    lVar5 = 0;
    lVar7 = param_1[0x61];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2cc));
  }
  puVar6 = (undefined8 *)param_1[0x62];
  if (puVar6 != param_1 + 99 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x54] != 0) {
    piVar1 = (int *)(param_1[0x54] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x4d);
    }
  }
  param_1[0x54] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  if (0 < *(int *)((long)param_1 + 0x26c)) {
    lVar5 = 0;
    lVar7 = param_1[0x55];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x26c));
  }
  puVar6 = (undefined8 *)param_1[0x56];
  if (puVar6 != param_1 + 0x57 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x48] != 0) {
    piVar1 = (int *)(param_1[0x48] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x41);
    }
  }
  param_1[0x48] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  if (0 < *(int *)((long)param_1 + 0x20c)) {
    lVar5 = 0;
    lVar7 = param_1[0x49];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x20c));
  }
  puVar6 = (undefined8 *)param_1[0x4a];
  if (puVar6 != param_1 + 0x4b && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3c] != 0) {
    piVar1 = (int *)(param_1[0x3c] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x35);
    }
  }
  param_1[0x3c] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  if (0 < *(int *)((long)param_1 + 0x1ac)) {
    lVar5 = 0;
    lVar7 = param_1[0x3d];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1ac));
  }
  puVar6 = (undefined8 *)param_1[0x3e];
  if (puVar6 != param_1 + 0x3f && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x30] != 0) {
    piVar1 = (int *)(param_1[0x30] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x29);
    }
  }
  param_1[0x30] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  if (0 < *(int *)((long)param_1 + 0x14c)) {
    lVar5 = 0;
    lVar7 = param_1[0x31];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x14c));
  }
  puVar6 = (undefined8 *)param_1[0x32];
  if (puVar6 != param_1 + 0x33 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x24] != 0) {
    piVar1 = (int *)(param_1[0x24] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x1d);
    }
  }
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  if (0 < *(int *)((long)param_1 + 0xec)) {
    lVar5 = 0;
    lVar7 = param_1[0x25];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xec));
  }
  puVar6 = (undefined8 *)param_1[0x26];
  if (puVar6 != param_1 + 0x27 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x18] != 0) {
    piVar1 = (int *)(param_1[0x18] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x11);
    }
  }
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  if (0 < *(int *)((long)param_1 + 0x8c)) {
    lVar5 = 0;
    lVar7 = param_1[0x19];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x8c));
  }
  puVar6 = (undefined8 *)param_1[0x1a];
  if (puVar6 != param_1 + 0x1b && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0xc] != 0) {
    piVar1 = (int *)(param_1[0xc] + 0x14);
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
      func_0x000109a848d4(param_1 + 5);
    }
  }
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar5 = 0;
    lVar7 = param_1[0xd];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2c));
  }
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 10939bfec; end: 10939bff3;  */

void FUN_10939bfec(void)

{
  return;
}



/* Entry: 10939bff4; end: 10939c02f;  */

void FUN_10939bff4(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010939c02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10939c030; end: 10939c083;  */

long * FUN_10939c030(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 10939c084; end: 10939c0d3;  */

void FUN_10939c084(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10939c7c4(uVar1);
    lVar2 = uVar1 + 0xb0;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10939c67c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10939c0d4; end: 10939c67b;  */

void FUN_10939c0d4(long *param_1,long *param_2,int param_3,int param_4,undefined8 *param_5,
                  int param_6,undefined1 param_7)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  code *pcVar10;
  uint *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  float *pfVar17;
  int iVar18;
  long lVar19;
  double *pdVar20;
  int iVar21;
  uint uVar22;
  double dVar23;
  undefined8 uVar24;
  long *plVar25;
  int iVar28;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  long *plStack_140;
  double *pdStack_138;
  double *pdStack_130;
  long *plStack_128;
  long *plStack_120;
  uint *puStack_108;
  uint *puStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined1 auStack_e8 [32];
  long *plStack_c8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 <= param_4) {
    lVar19 = (long)param_3;
    auVar27 = NEON_fmov(0x3fe0000000000000,8);
    auVar30 = NEON_fmov(0xbfe0000000000000,8);
    dVar29 = auVar27._8_8_;
    dVar23 = auVar27._0_8_;
    do {
      iVar18 = (int)lVar19;
      lVar14 = *param_2 + lVar19 * 0x20;
      uVar33 = *param_5;
      uVar24 = NEON_sshl(param_5[1],CONCAT44(-iVar18,-iVar18),4);
      plVar25 = (long *)NEON_smin(*(undefined8 *)(lVar14 + 0x10),uVar24,4);
      uVar24 = NEON_scvtf(plVar25,4);
      iVar21 = (int)(float)(int)((float)uVar24 / (float)param_6);
      iVar5 = (int)(float)(int)((float)((ulong)uVar24 >> 0x20) / (float)param_6) * iVar21;
      puStack_b0 = (undefined8 *)0x0;
      puStack_a8 = (undefined8 *)0x0;
      uStack_a0 = 0;
      puVar13 = puStack_a8;
      if (iVar5 != 0) {
        FUN_10939cb98(&puStack_b0,(long)iVar5);
        puVar13 = (undefined8 *)((long)puStack_a8 + (long)iVar5 * 0x1c);
        do {
          puStack_a8[1] = 0xbf80000000000000;
          *puStack_a8 = 0;
          *(undefined4 *)(puStack_a8 + 2) = 0;
          *(undefined8 *)((long)puStack_a8 + 0x14) = 0xffffffff00000000;
          puStack_a8 = (undefined8 *)((long)puStack_a8 + 0x1c);
        } while (puStack_a8 != puVar13);
      }
      puStack_a8 = puVar13;
      uVar24 = NEON_sshl(uVar33,CONCAT44(-iVar18,-iVar18),4);
      iVar5 = *(int *)(lVar14 + 0x18);
      lVar14 = *(long *)(lVar14 + 8) + (long)(iVar5 * (int)((ulong)uVar24 >> 0x20)) +
               (long)(int)uVar24;
      iVar28 = (int)((ulong)plVar25 >> 0x20);
      plStack_140 = plVar25;
      FUN_10939cc40(auStack_e8,&plStack_140,iVar5,lVar14,iVar28 * (int)plVar25,0);
      puStack_108 = (uint *)0x0;
      puStack_100 = (uint *)0x0;
      uStack_f8 = 0;
      plStack_f0 = plVar25;
      FUN_1099a469c(&plStack_f0,lVar14,(long)iVar5,&puStack_108,param_7,0);
      FUN_10939cf54(&plStack_140,auStack_e8);
      func_0x0001099a417c(&plStack_140,puStack_108,
                          ((long)puStack_100 - (long)puStack_108 >> 2) * -0x5555555555555555);
      plVar2 = plStack_120;
      if (plStack_120 != (long *)0x0) {
        plVar1 = plStack_120 + 1;
        do {
          lVar14 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar14 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_120 + 0x10))(plStack_120);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      puVar9 = puStack_a8;
      puVar13 = puStack_b0;
      if (puStack_108 != puStack_100) {
        puVar11 = puStack_108;
        do {
          uVar3 = *puVar11;
          if ((9 < (int)uVar3) &&
             (uVar4 = puVar11[1],
             (9 < (int)uVar4 && (int)uVar3 < (int)plVar25 + -10) && (int)uVar4 < iVar28 + -10)) {
            iVar5 = 0;
            if (param_6 != 0) {
              iVar5 = (int)uVar3 / param_6;
            }
            iVar6 = 0;
            if (param_6 != 0) {
              iVar6 = (int)uVar4 / param_6;
            }
            uVar22 = puVar11[2];
            pfVar17 = (float *)((long)puStack_b0 + (long)(iVar5 + iVar6 * iVar21) * 0x1c);
            if (pfVar17[4] < (float)(int)uVar22) {
              *pfVar17 = (float)uVar3;
              pfVar17[1] = (float)uVar4;
              pfVar17[2] = 7.0;
              pfVar17[3] = -1.0;
              pfVar17[4] = (float)(int)uVar22;
              pfVar17[5] = 0.0;
              pfVar17[6] = -NAN;
            }
          }
          puVar11 = puVar11 + 3;
        } while (puVar11 != puStack_100);
      }
      if (puStack_b0 != puStack_a8) {
        uVar24 = NEON_scvtf(uVar24,4);
        dVar26 = (double)_ldexp(0x3ff0000000000000,lVar19);
        do {
          if (*(float *)(puVar13 + 2) != 0.0) {
            dVar31 = (double)((float)*puVar13 + (float)uVar24) + dVar23;
            dVar32 = (double)((float)((ulong)*puVar13 >> 0x20) + (float)((ulong)uVar24 >> 0x20)) +
                     dVar29;
            pdVar20 = (double *)param_1[1];
            if (pdVar20 < (double *)param_1[2]) {
              pdVar20[4] = (double)*(float *)(puVar13 + 2);
              *(int *)(pdVar20 + 5) = iVar18;
              pdVar20[7] = 2.0;
              pdVar20[6] = 0.0;
              *(undefined4 *)(pdVar20 + 10) = 0x42ff0000;
              *(undefined8 *)((long)pdVar20 + 0x5c) = 0;
              *(undefined8 *)((long)pdVar20 + 0x54) = 0;
              *(undefined8 *)((long)pdVar20 + 0x6c) = 0;
              *(undefined8 *)((long)pdVar20 + 100) = 0;
              *(undefined8 *)((long)pdVar20 + 0x7c) = 0;
              *(undefined8 *)((long)pdVar20 + 0x74) = 0;
              pdVar20[0x14] = 0.0;
              pdVar20[0x11] = 0.0;
              pdVar20[0x10] = 0.0;
              pdVar20[0x12] = (double)(pdVar20 + 0xb);
              pdVar20[0x13] = (double)(pdVar20 + 0x14);
              pdVar20[0x15] = 0.0;
              pdVar20[8] = dVar26;
              pdVar20[9] = 1.0 / dVar26;
              pdVar20[1] = dVar32;
              *pdVar20 = dVar31;
              pdVar20[3] = (dVar32 + dVar29) * dVar26 + auVar30._8_8_;
              pdVar20[2] = (dVar31 + dVar23) * dVar26 + auVar30._0_8_;
              pdVar20 = pdVar20 + 0x16;
            }
            else {
              lVar14 = (long)pdVar20 - *param_1;
              uVar12 = (lVar14 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
              if (0x1745d1745d1745d < uVar12) {
                FUN_10939c884();
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10939c610);
                (*pcVar10)();
              }
              lVar15 = param_1[2] - *param_1 >> 4;
              uVar16 = lVar15 * 0x5d1745d1745d1746;
              if (uVar16 < uVar12 || uVar16 - uVar12 == 0) {
                uVar16 = uVar12;
              }
              if (0xba2e8ba2e8ba2d < (ulong)(lVar15 * 0x2e8ba2e8ba2e8ba3)) {
                uVar16 = 0x1745d1745d1745d;
              }
              plStack_120 = param_1;
              if (uVar16 == 0) {
                plVar25 = (long *)0x0;
              }
              else {
                plVar25 = param_1;
                FUN_10939c898(param_1,uVar16,0);
              }
              pdStack_138 = (double *)((long)plVar25 + lVar14);
              pdStack_138[4] = (double)*(float *)(puVar13 + 2);
              *(int *)(pdStack_138 + 5) = iVar18;
              pdStack_138[7] = 2.0;
              pdStack_138[6] = 0.0;
              *(undefined4 *)(pdStack_138 + 10) = 0x42ff0000;
              *(undefined8 *)((long)pdStack_138 + 0x6c) = 0;
              *(undefined8 *)((long)pdStack_138 + 100) = 0;
              *(undefined8 *)((long)pdStack_138 + 0x5c) = 0;
              *(undefined8 *)((long)pdStack_138 + 0x54) = 0;
              pdStack_138[0x11] = 0.0;
              pdStack_138[0x10] = 0.0;
              *(undefined8 *)((long)pdStack_138 + 0x7c) = 0;
              *(undefined8 *)((long)pdStack_138 + 0x74) = 0;
              pdStack_138[0x14] = 0.0;
              pdStack_138[0x12] = (double)(pdStack_138 + 0xb);
              pdStack_138[0x13] = (double)(pdStack_138 + 0x14);
              pdStack_138[0x15] = 0.0;
              pdStack_138[8] = dVar26;
              pdStack_138[9] = 1.0 / dVar26;
              pdStack_138[1] = dVar32;
              *pdStack_138 = dVar31;
              pdStack_138[3] = (dVar32 + dVar29) * dVar26 + auVar30._8_8_;
              pdStack_138[2] = (dVar31 + dVar23) * dVar26 + auVar30._0_8_;
              pdVar20 = pdStack_138 + 0x16;
              lVar14 = (long)pdStack_138 + (*param_1 - param_1[1]);
              plStack_140 = plVar25;
              pdStack_130 = pdVar20;
              plStack_128 = plVar25 + uVar16 * 0x16;
              FUN_10939c900(param_1,*param_1,param_1[1],lVar14);
              plStack_140 = (long *)*param_1;
              *param_1 = lVar14;
              param_1[1] = (long)pdVar20;
              plStack_128 = (long *)param_1[2];
              param_1[2] = (long)(plVar25 + uVar16 * 0x16);
              pdStack_138 = (double *)plStack_140;
              pdStack_130 = (double *)plStack_140;
              FUN_10939cadc(&plStack_140);
            }
            param_1[1] = (long)pdVar20;
          }
          puVar13 = (undefined8 *)((long)puVar13 + 0x1c);
        } while (puVar13 != puVar9);
      }
      if (puStack_108 != (uint *)0x0) {
        puStack_100 = puStack_108;
        __ZdlPv();
      }
      plVar25 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar2 = plStack_c8 + 1;
        do {
          lVar14 = *plVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar14 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
        }
      }
      if (puStack_b0 != (undefined8 *)0x0) {
        puStack_a8 = puStack_b0;
        __ZdlPv();
      }
      lVar19 = lVar19 + 1;
    } while (param_4 + 1 != (int)lVar19);
  }
  return;
}



/* Entry: 10939c67c; end: 10939c7c3;  */

long * FUN_10939c67c(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar7 = (lVar10 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar7 < 0x1745d1745d1745e) {
    lVar6 = param_1[2] - *param_1 >> 4;
    uVar9 = lVar6 * 0x5d1745d1745d1746;
    if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
      uVar9 = uVar7;
    }
    if (0xba2e8ba2e8ba2d < (ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3)) {
      uVar9 = 0x1745d1745d1745d;
    }
    plStack_38 = param_1;
    if (uVar9 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_10939c898(param_1,uVar9,0);
    }
    lVar10 = (long)plVar4 + lVar10;
    plStack_40 = plVar4 + uVar9 * 0x16;
    plStack_58 = plVar4;
    plStack_50 = (long *)lVar10;
    plStack_48 = (long *)lVar10;
    FUN_10939c7c4(lVar10,param_2);
    plStack_48 = (long *)(lVar10 + 0xb0);
    lVar10 = lVar10 + (*param_1 - param_1[1]);
    FUN_10939c900(param_1,*param_1,param_1[1],lVar10);
    plVar4 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar10;
    lVar10 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar10;
    FUN_10939cadc(&plStack_58);
    return plVar4;
  }
  FUN_10939c884();
  FUN_10939cadc(&plStack_58);
  __Unwind_Resume();
  lVar10 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar10;
  lVar10 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = lVar10;
  lVar6 = param_2[5];
  lVar10 = param_2[4];
  lVar11 = param_2[6];
  lVar13 = param_2[9];
  lVar12 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = lVar11;
  param_1[9] = lVar13;
  param_1[8] = lVar12;
  param_1[5] = lVar6;
  param_1[4] = lVar10;
  lVar11 = param_2[0xb];
  lVar6 = param_2[10];
  lVar10 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = lVar10;
  lVar10 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = lVar10;
  lVar10 = param_2[0x11];
  lVar13 = param_2[0x11];
  lVar12 = param_2[0x10];
  param_1[0x14] = 0;
  param_1[0x11] = lVar13;
  param_1[0x10] = lVar12;
  param_1[0x12] = (long)(param_1 + 0xb);
  param_1[0x13] = (long)(param_1 + 0x14);
  param_1[0x15] = 0;
  param_1[0xb] = lVar11;
  param_1[10] = lVar6;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 0x54) < 3) {
    puVar5 = (undefined8 *)param_2[0x13];
    puVar8 = (undefined8 *)param_1[0x13];
    *puVar8 = *puVar5;
    puVar8[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0x54) = 0;
    func_0x000109a84868(param_1 + 10,param_2 + 10);
  }
  return param_1;
}



/* Entry: 10939c7c4; end: 10939c883;  */

undefined8 * FUN_10939c7c4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  uVar7 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar7;
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  uVar9 = param_2[6];
  uVar11 = param_2[9];
  uVar10 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar9;
  param_1[9] = uVar11;
  param_1[8] = uVar10;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  uVar8 = param_2[0xb];
  uVar7 = param_2[10];
  uVar9 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar9;
  uVar9 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar9;
  lVar5 = param_2[0x11];
  uVar10 = param_2[0x11];
  uVar9 = param_2[0x10];
  param_1[0x14] = 0;
  param_1[0x11] = uVar10;
  param_1[0x10] = uVar9;
  param_1[0x12] = param_1 + 0xb;
  param_1[0x13] = param_1 + 0x14;
  param_1[0x15] = 0;
  param_1[0xb] = uVar8;
  param_1[10] = uVar7;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 0x54) < 3) {
    puVar4 = (undefined8 *)param_2[0x13];
    puVar6 = (undefined8 *)param_1[0x13];
    *puVar6 = *puVar4;
    puVar6[1] = puVar4[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0x54) = 0;
    func_0x000109a84868(param_1 + 10,param_2 + 10);
  }
  return param_1;
}



/* Entry: 10939c884; end: 10939c897;  */

void FUN_10939c884(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0x1745d1745d1745e) {
    lVar1 = param_2 * 0xb0;
    _malloc();
    if ((param_2 == 0) || (lVar1 != 0)) {
      return;
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  puVar2 = PTR___ZTISt9bad_alloc_110346a68;
  puVar3 = PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  puVar4 = puVar2;
  if (puVar2 != puVar3) {
    do {
      FUN_10939c7c4(param_4,puVar4);
      puVar4 = puVar4 + 0xb0;
      param_4 = param_4 + 0xb0;
    } while (puVar4 != puVar3);
    do {
      FUN_10939c9a0(puVar2);
      puVar2 = puVar2 + 0xb0;
    } while (puVar2 != puVar3);
  }
  return;
}



/* Entry: 10939c898; end: 10939c8ff;  */

void FUN_10939c898(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (param_2 < 0x1745d1745d1745e) {
    lVar1 = param_2 * 0xb0;
    _malloc();
    if ((param_2 == 0) || (lVar1 != 0)) {
      return;
    }
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  puVar2 = PTR___ZTISt9bad_alloc_110346a68;
  puVar3 = PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  puVar4 = puVar2;
  if (puVar2 != puVar3) {
    do {
      FUN_10939c7c4(param_4,puVar4);
      puVar4 = puVar4 + 0xb0;
      param_4 = param_4 + 0xb0;
    } while (puVar4 != puVar3);
    do {
      FUN_10939c9a0(puVar2);
      puVar2 = puVar2 + 0xb0;
    } while (puVar2 != puVar3);
  }
  return;
}



/* Entry: 10939c900; end: 10939c99f;  */

void FUN_10939c900(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_10939c7c4(param_4,lVar1);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + 0xb0;
    } while (lVar1 != param_3);
    do {
      FUN_10939c9a0(param_2);
      param_2 = param_2 + 0xb0;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10939c9a0; end: 10939ca3f;  */

void FUN_10939c9a0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x88) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x50);
    }
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x90);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x54));
  }
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 == param_1 + 0xa0 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 10939ca40; end: 10939cadb;  */

long FUN_10939ca40(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x88) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x50);
    }
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x90);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x54));
  }
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 != param_1 + 0xa0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10939cadc; end: 10939cb27;  */

long * FUN_10939cadc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0xb0;
    FUN_10939c9a0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    _free();
  }
  return param_1;
}



/* Entry: 10939cb28; end: 10939cb97;  */

void FUN_10939cb28(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0xb0;
        FUN_10939c9a0(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(lVar1);
    return;
  }
  return;
}



/* Entry: 10939cb98; end: 10939cbe3;  */

/* WARNING: Removing unreachable block (ram,0x00010939cd04) */
/* WARNING: Removing unreachable block (ram,0x00010939cd08) */
/* WARNING: Removing unreachable block (ram,0x00010939cd10) */
/* WARNING: Removing unreachable block (ram,0x00010939cd18) */
/* WARNING: Removing unreachable block (ram,0x00010939cd1c) */

void FUN_10939cb98(long *param_1,ulong param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  long *plStack_a0;
  long *plStack_98;
  
  if (param_2 < 0x924924924924925) {
    plVar5 = param_1;
    FUN_10939cbf8();
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar5;
    param_1[2] = (long)plVar5 + param_2 * 0x1c;
    return;
  }
  FUN_10939cbe4();
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (0x924924924924924 < param_2) {
    func_0x000104c4f740();
    plVar5 = (long *)0x40;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110af5240;
    plVar5[4] = param_3;
    plVar5[5] = param_4;
    plVar5[6] = param_3;
    plVar5[7] = param_5;
    plStack_a0 = plVar5 + 3;
    *plStack_a0 = (long)&PTR_DAT_110af5290;
    plStack_98 = plVar5;
    FUN_10939ce10(extraout_x8,puVar4,&plStack_a0,param_2,0,0,param_7,param_8,0);
    plVar5 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
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
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    return;
  }
  __Znwm(param_2 * 0x1c);
  return;
}



/* Entry: 10939cbe4; end: 10939cbf7;  */

/* WARNING: Removing unreachable block (ram,0x00010939cd04) */
/* WARNING: Removing unreachable block (ram,0x00010939cd08) */
/* WARNING: Removing unreachable block (ram,0x00010939cd10) */
/* WARNING: Removing unreachable block (ram,0x00010939cd18) */
/* WARNING: Removing unreachable block (ram,0x00010939cd1c) */

void FUN_10939cbe4(undefined8 param_1,ulong param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  long *plStack_80;
  long *plStack_78;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (0x924924924924924 < param_2) {
    func_0x000104c4f740();
    plVar5 = (long *)0x40;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110af5240;
    plVar5[4] = param_3;
    plVar5[5] = param_4;
    plVar5[6] = param_3;
    plVar5[7] = param_5;
    plStack_80 = plVar5 + 3;
    *plStack_80 = (long)&PTR_DAT_110af5290;
    plStack_78 = plVar5;
    FUN_10939ce10(extraout_x8,puVar4,&plStack_80,param_2,0,0,param_7,param_8,0);
    plVar5 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    return;
  }
  __Znwm(param_2 * 0x1c);
  return;
}


