/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078d7de8; end: 1078d7f7f;  */

/* WARNING: Possible PIC construction at 0x0001078d7f20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d7f24) */
/* WARNING: Removing unreachable block (ram,0x0001078d7f6c) */
/* WARNING: Removing unreachable block (ram,0x0001078d7f54) */

undefined1 * FUN_1078d7de8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 *puStack_50;
  
  func_0x0001078d8450();
  lVar7 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x150);
  pfVar6 = *(float **)(param_1 + 8);
  uStack_58 = 1;
  puVar4 = (undefined8 *)0x210;
  __Znwm();
  plVar5 = puVar4 + 1;
  *plVar5 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109e9290;
  puStack_70 = *(undefined8 **)(pfVar6 + 6);
  if (puStack_70 != (undefined8 *)0x0) {
    plVar1 = puStack_70 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_50 = puVar4;
  func_0x000108122a10(puVar4 + 3,&puStack_70);
  func_0x000107475310(&puStack_70);
  puVar4[3] = &PTR_DAT_1109e92e0;
  puVar4[0x38] = lVar7;
  fVar8 = *pfVar6;
  *(float *)(puVar4 + 0x39) = fVar8;
  puVar4[0x3a] = (double)(fVar8 * *(float *)(lVar7 + 0x5c));
  *(undefined4 *)(puVar4 + 0x3b) = *(undefined4 *)(lVar7 + 0x58);
  puVar4[0x3d] = 0;
  puVar4[0x3c] = 0;
  puVar4[0x3f] = 0;
  puVar4[0x3e] = 0;
  lVar7 = *(long *)(pfVar6 + 6);
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
  puVar4[0x40] = lVar7;
  puVar4[0x41] = pfVar6;
  puStack_50 = (undefined8 *)0x0;
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_70 = puVar4 + 3;
    puStack_68 = puVar4;
    func_0x0001003a8180(puVar4 + 4,&puStack_70);
    func_0x0001003a90c4(&puStack_70);
  }
  if (puStack_50 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  return auStack_60;
}



/* Entry: 1078d8308; end: 1078d834b;  */

void FUN_1078d8308(undefined8 *param_1)

{
  func_0x0001078d834c();
  (**(code **)(*(long *)*param_1 + 0x20))();
  return;
}



/* Entry: 1078d85ec; end: 1078d8677;  */

ulong FUN_1078d85ec(ulong param_1,ulong param_2,float param_3)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  
  fVar3 = param_3;
  if (1.0 < param_3) {
    fVar3 = param_3 + -1.0;
  }
  if (param_3 < 0.0) {
    fVar3 = param_3 + 1.0;
  }
  fVar1 = (float)param_1;
  if (fVar3 * 6.0 < 1.0) {
    return (ulong)(uint)(fVar1 + ((float)param_2 - fVar1) * fVar3 * 6.0);
  }
  uVar2 = param_2;
  if ((1.0 <= fVar3 + fVar3) && (uVar2 = param_1, fVar3 * 3.0 < 2.0)) {
    return (ulong)(uint)(fVar1 + ((float)param_2 - fVar1) * (0.6666667 - fVar3) * 6.0);
  }
  return uVar2;
}



/* Entry: 1078d937c; end: 1078d93ff;  */

void FUN_1078d937c(char *param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *extraout_x8;
  char *pcVar8;
  char cVar9;
  long lVar10;
  undefined1 *puVar11;
  char cVar12;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  char acStack_d0 [40];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte bStack_31;
  
  if ((param_3 < 0x20) && (param_2 >> (ulong)(param_3 & 0x1f) == 0)) {
    while (0 < (int)param_3) {
      param_3 = param_3 - 1;
      bStack_31 = (byte)(param_2 >> (ulong)(param_3 & 0x1f)) & 1;
      func_0x0001078db3d4(param_1,&bStack_31);
    }
    return;
  }
  func_0x0001078dbd18();
  func_0x000107246610();
  func_0x0001078dbcf8();
  func_0x0001078dbd44();
  func_0x0001078dbd0c();
  func_0x0001078dbd3c();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  cVar12 = *param_1;
  pcVar8 = param_1;
  cVar9 = cVar12;
  if (cVar12 == '\0') {
    return;
  }
  while (pcVar8 = pcVar8 + 1, (byte)(cVar9 - 0x30U) < 10) {
    cVar9 = *pcVar8;
  }
  if (cVar9 != '\0') {
    pcVar8 = param_1;
    do {
      if (*pcVar8 == '\0') {
        lVar10 = 0;
        pcVar8 = (char *)0x0;
        bVar2 = false;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        goto code_r0x0001078d9570;
      }
      puVar5 = &UNK_10f4344ad;
      _memchr(&UNK_10f4344ad,(long)*pcVar8,0x2e);
      pcVar8 = pcVar8 + 1;
    } while (puVar5 != (undefined *)0x0);
    puStack_e8 = (undefined1 *)0x0;
    puStack_e0 = (undefined1 *)0x0;
    uStack_d8 = 0;
    while (puVar3 = puStack_e0, param_1 = param_1 + 1, cVar12 != '\0') {
      acStack_d0[0] = cVar12;
      func_0x0001001e79f8(&puStack_e8,acStack_d0);
      cVar12 = *param_1;
    }
    if ((ulong)((long)puStack_e0 - (long)puStack_e8) >> 0x1f == 0) {
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      for (puVar11 = puStack_e8; puVar11 != puVar3; puVar11 = puVar11 + 1) {
        FUN_1078d937c(&uStack_a8,*puVar11,8);
      }
      func_0x0001078d9774(acStack_d0,&UNK_10deda78c,(int)puStack_e0 - (int)puStack_e8,&uStack_a8);
      func_0x0001078dbebc();
      func_0x0001078dbd20();
      func_0x000104be7d74(puVar11 + 0x10);
      func_0x000100100fec(&puStack_e8);
      return;
    }
    func_0x0001078dbd18();
    func_0x000104bd4838();
    func_0x0001078dbf40();
code_r0x0001078d96ec:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1078d96f0);
    (*pcVar4)();
  }
  lVar10 = 0;
  iVar6 = 0;
  iVar7 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  pcVar8 = param_1 + 1;
  uStack_98 = 0;
  while (cVar12 != '\0') {
    if ((byte)(cVar12 - 0x3aU) < 0xf6) {
      func_0x0001078dbd18();
      func_0x00010724664c();
      func_0x0001078dbcf8();
      func_0x0001078dbf40();
      goto code_r0x0001078d96ec;
    }
    iVar6 = iVar6 * 10 + (uint)(byte)(cVar12 - 0x30);
    iVar7 = iVar7 + 1;
    if (iVar7 == 3) {
      FUN_1078d937c(&uStack_a8,iVar6,10);
      iVar6 = 0;
      iVar7 = 0;
    }
    pcVar1 = pcVar8 + lVar10;
    lVar10 = lVar10 + 1;
    cVar12 = *pcVar1;
  }
  if (0 < iVar7) {
    FUN_1078d937c(&uStack_a8,iVar6,iVar7 * 3 + 1);
  }
  func_0x0001078dbe08();
  func_0x0001078dbebc();
  func_0x0001078dbd20();
code_r0x0001078d95f0:
  func_0x000104be7d74(pcVar8 + 0x10);
  return;
code_r0x0001078d9570:
  if (cVar12 == '\0') goto code_r0x0001078d95c8;
  puVar5 = &UNK_10f4344ad;
  _memchr(&UNK_10f4344ad,(int)cVar12,0x2e);
  if (puVar5 == (undefined *)0x0) {
    func_0x0001078dbd18();
    func_0x00010724664c();
    func_0x0001078dbcf8();
    func_0x0001078dbf40();
    goto code_r0x0001078d96ec;
  }
  pcVar8 = (char *)(ulong)(uint)((int)puVar5 + -0xf4344ad + (int)pcVar8 * 0x2d);
  if (bVar2) {
    FUN_1078d937c(&uStack_a8,pcVar8,0xb);
    pcVar8 = (char *)0x0;
  }
  bVar2 = !bVar2;
  cVar12 = param_1[lVar10 + 1];
  lVar10 = lVar10 + 1;
  goto code_r0x0001078d9570;
code_r0x0001078d95c8:
  if (bVar2) {
    FUN_1078d937c(&uStack_a8,pcVar8,6);
  }
  func_0x0001078dbe08();
  func_0x0001078dbebc();
  func_0x0001078dbd20();
  goto code_r0x0001078d95f0;
}



/* Entry: 1078daba0; end: 1078dabbb;  */

/* WARNING: Possible PIC construction at 0x0001078dae28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078dae40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078daee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078dae44) */
/* WARNING: Removing unreachable block (ram,0x0001078dae68) */
/* WARNING: Removing unreachable block (ram,0x0001078dae90) */
/* WARNING: Removing unreachable block (ram,0x0001078dae98) */
/* WARNING: Removing unreachable block (ram,0x0001078daec4) */
/* WARNING: Removing unreachable block (ram,0x0001078daea0) */
/* WARNING: Removing unreachable block (ram,0x0001078dae70) */
/* WARNING: Removing unreachable block (ram,0x0001078dae2c) */
/* WARNING: Removing unreachable block (ram,0x0001078daee8) */
/* WARNING: Removing unreachable block (ram,0x0001078daec8) */
/* WARNING: Removing unreachable block (ram,0x0001078daef0) */
/* WARNING: Removing unreachable block (ram,0x0001078daed0) */
/* WARNING: Removing unreachable block (ram,0x0001078dae34) */

undefined1  [16] FUN_1078daba0(long *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  ulong *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  ulong extraout_x8;
  ulong uVar10;
  undefined8 extraout_x8_00;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (param_2 < (ulong)param_1[1]) {
    auVar15._8_8_ = 1L << (param_2 & 0x3f);
    auVar15._0_8_ = *param_1 + (param_2 >> 6) * 8;
    return auVar15;
  }
  func_0x0001078db978();
  if ((uint)param_2 < 8) {
    lVar12 = 0;
    while( true ) {
      if (lVar12 == *(int *)((long)param_1 + 4)) {
        auVar14._8_8_ = param_2;
        auVar14._0_8_ = param_1;
        return auVar14;
      }
      if ((long)*(int *)((long)param_1 + 4) != 0) break;
      lVar12 = lVar12 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001078dac84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1078dac88 + (ulong)(byte)(&UNK_10deda764)[param_2 & 0xffffffff] * 4))(0);
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  func_0x0001078dbd18();
  uVar4 = 0xf434534;
  func_0x000107246610();
  func_0x0001078dbcf8();
  func_0x0001078dbd44();
  func_0x0001078dbd0c();
  func_0x0001078dbd3c();
  if (*(uint *)(param_1 + 1) < 4) {
    uVar9 = *(uint *)(&UNK_10deda900 + (ulong)*(uint *)(param_1 + 1) * 4) | uVar4;
    iVar5 = 10;
    do {
      uVar9 = ((int)uVar9 >> 9) * 0x537 ^ uVar9 << 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar9 = uVar9 & 1;
    func_0x0001078dbe84();
    uVar11 = (ulong)(int)uVar4;
    puVar2 = (ulong *)param_1[2];
    func_0x0001078db0d4(puVar2,param_1[3],0);
    uVar10 = uVar11;
    FUN_1078daba0();
    if (uVar9 == 0) {
      uVar10 = *puVar2 & (uVar10 ^ 0xffffffffffffffff);
    }
    else {
      func_0x0001078dbf48();
      uVar10 = extraout_x8;
    }
    *puVar2 = uVar10;
    puVar3 = (undefined8 *)param_1[5];
    func_0x0001078db0d4(puVar3,param_1[6],0);
    FUN_1078daba0();
    func_0x0001078dbf48();
    *puVar3 = extraout_x8_00;
    auVar17._8_8_ = uVar11;
    auVar17._0_8_ = puVar3;
    return auVar17;
  }
  func_0x0001078dbd18();
  __ZNSt11logic_errorC1EPKc();
  puVar6 = PTR___ZTISt11logic_error_110346a38;
  puVar8 = PTR___ZNSt11logic_errorD1Ev_110346148;
  func_0x0001078dbd44();
  iVar7 = (int)puVar8;
  func_0x0001078dbd0c();
  func_0x0001078dbd3c();
  iVar5 = (int)puVar6;
  if ((((-1 < iVar5) && (iVar7 < *(int *)((long)param_1 + 4))) && (-1 < iVar7)) &&
     (iVar5 < *(int *)((long)param_1 + 4))) {
    puVar2 = (ulong *)(param_1 + 2);
    func_0x0001078db0f8(puVar2,(long)iVar7);
    uVar10 = (ulong)iVar5;
    func_0x0001078db128();
    auVar16._1_7_ = 0;
    auVar16[0] = (uVar10 & *puVar2) != 0;
    auVar16._8_8_ = uVar10;
    return auVar16;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = puVar6;
  return auVar1 << 0x40;
}



/* Entry: 1078db144; end: 1078db1d3;  */

int * FUN_1078db144(int *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  
  uVar2 = (uint)param_1;
  if (0xffffffd7 < uVar2 - 0x29) {
    iVar1 = (uVar2 * 0x10 + 0x80) * uVar2;
    if (uVar2 < 2) {
      uVar4 = iVar1 + 0x40;
    }
    else {
      uVar4 = (uVar2 & 0xff) / 7;
      iVar1 = iVar1 + (uVar4 * -0x19 + -0x28) * (uVar4 + 2);
      uVar4 = iVar1 + 0x53;
      if (uVar2 < 7) {
        uVar4 = iVar1 + 0x77;
      }
    }
    return (int *)(ulong)uVar4;
  }
  func_0x0001078dbd18();
  puVar3 = &UNK_10f43455d;
  func_0x000107246610();
  func_0x0001078dbcf8();
  func_0x0001078dbd44();
  func_0x0001078dbd0c();
  func_0x0001078dbd3c();
  if ((ulong)(((long)puVar3 - (long)param_1) / 0x18) <= param_3) {
    func_0x0001078dbc00();
    iVar1 = param_1[1];
    if ((iVar1 < 1 || param_1[2] != iVar1) ||
       ((param_1[3] != iVar1 * 3 || param_1[4] != iVar1) || param_1[5] != iVar1)) {
      uVar4 = 0;
      uVar2 = 0;
    }
    else {
      uVar4 = (uint)(iVar1 * 4 <= *param_1 && iVar1 <= param_1[6]);
      uVar2 = 0;
      if (iVar1 * 4 <= param_1[6]) {
        uVar2 = (uint)(iVar1 <= *param_1);
      }
    }
    return (int *)(ulong)(uVar2 + uVar4);
  }
  return param_1 + param_3 * 6;
}



/* Entry: 1078db5f8; end: 1078db60b;  */

undefined * FUN_1078db5f8(void)

{
  undefined *puVar1;
  undefined *puStack_38;
  
  puVar1 = &UNK_10f4345a0;
  func_0x000104bd47e8();
  puStack_38 = puVar1;
  func_0x0001078db638(&puStack_38);
  return puVar1;
}



/* Entry: 1078dbb54; end: 1078dbb6b;  */

undefined8 * FUN_1078dbb54(undefined8 *param_1)

{
  func_0x0001078dbd30();
  func_0x0001078dbd30();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001078dbb98();
  return param_1;
}



/* Entry: 1078dcd04; end: 1078dce8b;  */

undefined1 FUN_1078dcd04(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined2 uVar9;
  ulong uVar10;
  
  if (*param_1 != -0x44cfcddfa7abb455 || (int)param_1[1] != 0xa1a0a0d) {
    return 0xf;
  }
  uVar4 = *(uint *)((long)param_1 + 0xc);
  uVar10 = (ulong)uVar4;
  func_0x0001078e339c();
  if ((uVar10 & 1) != 0) {
    return true;
  }
  uVar6 = uVar4;
  func_0x0001078e348c();
  if (uVar6 == 0) {
    return 0x11;
  }
  uVar6 = *(uint *)((long)param_1 + 0x2c);
  if ((uVar4 != 0) && (uVar6 == 1)) {
    return true;
  }
  uVar4 = *(uint *)((long)param_1 + 0x14);
  if (uVar4 == 0) {
    return true;
  }
  uVar2 = *(uint *)(param_1 + 3);
  uVar3 = *(uint *)((long)param_1 + 0x1c);
  if (uVar3 == 0) {
    if (uVar2 != 0) {
      *(undefined2 *)(param_2 + 2) = 2;
      bVar7 = 1;
      goto LAB_1078dcde0;
    }
    uVar9 = 1;
  }
  else {
    if (uVar2 == 0) {
      return true;
    }
    if ((int)param_1[4] != 0) {
      return 0x11;
    }
    uVar9 = 3;
  }
  bVar7 = 0;
  *(undefined2 *)(param_2 + 2) = uVar9;
LAB_1078dcde0:
  if (*(int *)((long)param_1 + 0x24) != 1) {
    if (*(int *)((long)param_1 + 0x24) != 6) {
      return true;
    }
    bVar1 = (bool)(bVar7 ^ 1);
    if (uVar3 != 0) {
      bVar1 = true;
    }
    if ((bVar1) || (uVar4 != uVar2)) {
      return true;
    }
  }
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 5) = 1;
    uVar8 = 0;
  }
  else {
    uVar8 = iVar5 - 1;
  }
  *(bool *)(param_2 + 1) = iVar5 == 0;
  if (3 < uVar6) {
    return 0x11;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  return uVar4 >> (ulong)(uVar8 & 0x1f) == 0;
}



/* Entry: 1078ddb10; end: 1078ddb8b;  */

undefined8 FUN_1078ddb10(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xb;
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    uVar1 = 0;
    *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
  }
  return uVar1;
}



/* Entry: 1078e07f0; end: 1078e0a6f;  */

long FUN_1078e07f0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar11 = *(long *)(param_1 + 0x18);
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar11 + 0x24));
  uVar1 = *(uint *)(lVar11 + 0x2c);
  uVar2 = *(uint *)(lVar11 + 0x30);
  uVar3 = *(uint *)(lVar11 + 0x34);
  uVar4 = *(uint *)(lVar11 + 0x20) >> 3;
  fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar11 + 0x28));
  lVar9 = (ulong)*(uint *)(param_1 + 0x3c) * (ulong)*(uint *)(param_1 + 0x38);
  if ((*(byte *)(lVar11 + 0x18) >> 1 & 1) == 0) {
    uVar10 = 0;
    lVar11 = 0;
    do {
      uVar7 = (uint)((float)(*(uint *)(param_1 + 0x24) >> (ulong)(uVar10 & 0x1f)) / fVar12);
      uVar5 = uVar2;
      if (uVar2 <= uVar7) {
        uVar5 = uVar7;
      }
      uVar5 = uVar5 * uVar4;
      uVar7 = (uVar1 - 1) + (*(uint *)(param_1 + 0x2c) >> (ulong)(uVar10 & 0x1f));
      uVar6 = 0;
      if (uVar1 != 0) {
        uVar6 = uVar7 / uVar1;
      }
      if (uVar7 < uVar1) {
        uVar6 = 1;
      }
      uVar8 = (uint)((float)(*(uint *)(param_1 + 0x28) >> (ulong)(uVar10 & 0x1f)) / fVar13);
      uVar7 = uVar3;
      if (uVar3 <= uVar8) {
        uVar7 = uVar8;
      }
      lVar11 = lVar11 + (ulong)uVar6 *
                        (ulong)((uVar5 + (int)((float)(int)((float)uVar5 / 4.0) * 4.0 - (float)uVar5
                                              )) * uVar7) * lVar9;
      uVar10 = uVar10 + 1;
    } while (param_2 != uVar10);
  }
  else {
    uVar10 = 0;
    lVar11 = 0;
    do {
      uVar7 = (uint)((float)(*(uint *)(param_1 + 0x24) >> (ulong)(uVar10 & 0x1f)) / fVar12);
      uVar5 = uVar2;
      if (uVar2 <= uVar7) {
        uVar5 = uVar7;
      }
      uVar7 = (uVar1 - 1) + (*(uint *)(param_1 + 0x2c) >> (ulong)(uVar10 & 0x1f));
      uVar6 = 0;
      if (uVar1 != 0) {
        uVar6 = uVar7 / uVar1;
      }
      if (uVar7 < uVar1) {
        uVar6 = 1;
      }
      uVar8 = (uint)((float)(*(uint *)(param_1 + 0x28) >> (ulong)(uVar10 & 0x1f)) / fVar13);
      uVar7 = uVar3;
      if (uVar3 <= uVar8) {
        uVar7 = uVar8;
      }
      lVar11 = lVar11 + (ulong)uVar6 * (ulong)(uVar5 * uVar4 * uVar7) * lVar9;
      uVar10 = uVar10 + 1;
    } while (param_2 != uVar10);
  }
  return lVar11;
}



/* Entry: 1078e1510; end: 1078e1dc3;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1078e1510(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  char *pcVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  int *piVar18;
  byte bVar19;
  ushort uVar20;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined8 uVar21;
  ulong uVar22;
  double dVar23;
  undefined8 uVar27;
  undefined8 uVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  undefined1 uStack_d4;
  char cStack_d3;
  ushort uStack_d2;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  lVar4 = 0xa8;
  _malloc();
  param_1[3] = lVar4;
  uVar21 = param_2[8];
  uVar28 = param_2[0xb];
  uVar27 = param_2[10];
  *(undefined8 *)(lVar4 + 0x88) = param_2[9];
  *(undefined8 *)(lVar4 + 0x80) = uVar21;
  *(undefined8 *)(lVar4 + 0x98) = uVar28;
  *(undefined8 *)(lVar4 + 0x90) = uVar27;
  *(undefined8 *)(lVar4 + 0xa0) = param_2[0xc];
  uVar21 = *param_2;
  uVar28 = param_2[3];
  uVar27 = param_2[2];
  *(undefined8 *)(lVar4 + 0x48) = param_2[1];
  *(undefined8 *)(lVar4 + 0x40) = uVar21;
  *(undefined8 *)(lVar4 + 0x58) = uVar28;
  *(undefined8 *)(lVar4 + 0x50) = uVar27;
  uVar28 = param_2[4];
  uVar27 = param_2[7];
  uVar21 = param_2[6];
  *(undefined8 *)(lVar4 + 0x68) = param_2[5];
  *(undefined8 *)(lVar4 + 0x60) = uVar28;
  *(undefined8 *)(lVar4 + 0x78) = uVar27;
  *(undefined8 *)(lVar4 + 0x70) = uVar21;
  param_1[8] = 0x6400000072;
  *(undefined4 *)(param_1 + 9) = 0x6f;
  puVar12 = param_3;
  FUN_1078dcd04(param_3,&uStack_d4);
  if ((int)puVar12 != 0) goto LAB_1078e15b0;
  iVar1 = *(int *)(param_3 + 5);
  *(undefined4 *)param_1 = 2;
  param_1[1] = &PTR_DAT_113230ae8;
  puVar12 = (undefined8 *)param_1[3];
  puVar12[1] = &DAT_1078e1fc0;
  *puVar12 = &DAT_1078e1e80;
  puVar12[2] = &DAT_1078e2044;
  plVar5 = (long *)((ulong)(iVar1 - 1) * 0x18 + 0x38);
  _malloc();
  param_1[0x14] = plVar5;
  if (plVar5 == (long *)0x0) {
LAB_1078e1d00:
    puVar12 = (undefined8 *)0xd;
    goto LAB_1078e15b0;
  }
  _bzero();
  lVar4 = param_1[3];
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)((long)param_3 + 0xc);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)((long)param_3 + 0x2c);
  *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(param_3 + 2);
  *(uint *)(param_1 + 6) = (uint)uStack_d2;
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_3 + 0x14);
  if (uStack_d2 == 3) {
    uVar21 = param_3[3];
LAB_1078e1724:
    param_1[5] = uVar21;
  }
  else if (uStack_d2 == 2) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)((long)param_1 + 0x2c) = 1;
  }
  else if (uStack_d2 == 1) {
    uVar21 = 0x100000001;
    goto LAB_1078e1724;
  }
  uVar2 = *(uint *)(param_3 + 4);
  bVar3 = uVar2 != 0;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  *(uint *)(param_1 + 7) = uVar2;
  *(bool *)(param_1 + 4) = bVar3;
  iVar1 = *(int *)((long)param_3 + 0x24);
  *(int *)((long)param_1 + 0x3c) = iVar1;
  *(bool *)((long)param_1 + 0x21) = iVar1 == 6;
  uVar2 = *(uint *)(param_3 + 5);
  *(uint *)((long)param_1 + 0x34) = uVar2;
  *(bool *)((long)param_1 + 0x23) = cStack_d3 != '\0';
  puVar12 = (undefined8 *)(lVar4 + 0x40);
  (**(code **)(lVar4 + 0x40))(puVar12,plVar5 + 4,(ulong)uVar2 * 0x18);
  if ((int)puVar12 != 0) goto LAB_1078e15b0;
  uVar2 = *(uint *)((long)param_1 + 0x34);
  uVar13 = (ulong)uVar2;
  lVar9 = (plVar5 + 4)[(ulong)(uVar2 - 1) * 3];
  plVar5[3] = lVar9;
  if (uVar2 == 0) {
LAB_1078e193c:
    if ((*(int *)(param_3 + 6) != 0) && (uVar2 = *(uint *)((long)param_3 + 0x34), 0xf < uVar2)) {
      uVar13 = (ulong)uVar2;
      _malloc();
      param_1[0x10] = uVar13;
      if (uVar13 == 0) goto LAB_1078e1d00;
      puVar12 = (undefined8 *)(lVar4 + 0x40);
      (**(code **)(lVar4 + 0x40))(puVar12,uVar13,(ulong)uVar2);
      if ((int)puVar12 != 0) goto LAB_1078e15b0;
      piVar18 = (int *)param_1[0x10];
      if (((*(int *)((long)param_3 + 0x34) == *piVar18) &&
          (2 < *(ulong *)(piVar18 + 1) >> 0x33 &&
           (*(ulong *)(piVar18 + 1) & 0xf000000000000) == 0x8000000000000)) &&
         (uVar13 = *(ulong *)(piVar18 + 3), (uVar13 & 0xfc0000) < 0x130001)) {
        uVar15 = (ulong)*(uint *)(param_1 + 0xf);
        uVar6 = uVar15;
        func_0x0001078e3414();
        uVar13 = uVar13 & 0xff0000;
        if (((uVar13 == 0x20000) || ((uVar6 & 1) == 0)) &&
           ((func_0x0001078e3578(), uVar13 != 0x20000 || ((uVar15 & 1) == 0)))) {
          lVar9 = param_1[3] + 0x18;
          func_0x0001078e129c(lVar9,piVar18);
          if ((int)lVar9 == 0) {
            puVar12 = (undefined8 *)0x10;
            goto LAB_1078e15b0;
          }
          lVar9 = param_1[3];
          *(byte *)((long)param_1 + 0x22) = *(byte *)(lVar9 + 0x18) >> 1 & 1;
          uVar2 = *(uint *)(param_1 + 0x11);
          if ((uVar2 != 1) || ((char)piVar18[3] == -0x5d)) {
            if ((param_4 >> 3 & 1) != 0) {
              iVar1 = *(int *)(param_3 + 5);
              if (iVar1 != 1) {
                uVar8 = *(uint *)((long)param_3 + 0x14);
                if (*(uint *)((long)param_3 + 0x14) <= *(uint *)(param_3 + 3)) {
                  uVar8 = *(uint *)(param_3 + 3);
                }
                if (uVar8 <= *(uint *)((long)param_3 + 0x1c)) {
                  uVar8 = *(uint *)((long)param_3 + 0x1c);
                }
                dVar23 = (double)uVar8;
                _log2();
                if (iVar1 != (int)dVar23 + 1) goto LAB_1078e1950;
              }
              if ((((((*(int *)(param_1 + 6) != 2) || ((*(byte *)(param_1 + 4) & 1) != 0)) ||
                    ((*(byte *)((long)param_1 + 0x21) & 1) != 0)) ||
                   (((*(byte *)((long)param_1 + 0x24) & 3) != 0 ||
                    ((*(byte *)(param_1 + 5) & 3) != 0)))) ||
                  ((uVar13 = *(ulong *)(piVar18 + 3) & 0xff,
                   ((uint)*(ulong *)(piVar18 + 3) & 0xff) != 0xa6 && ((int)uVar13 != 0xa3)))) ||
                 ((uVar13 == 0xa6 && ((uVar2 & 0xfffffffd) != 0)))) goto LAB_1078e1950;
            }
            uVar8 = (*(uint *)(param_1[0x10] + 8) >> 0x12) - 6;
            if (3 < uVar8) {
              uVar13 = *(ulong *)(piVar18 + 3);
              uVar11 = (uint)uVar13 & 0xff;
              if ((uVar11 == 0xa6) || (uVar11 == 0xa3)) {
                if (0xb < uVar8) goto LAB_1078e1950;
                puVar12 = (undefined8 *)0x1;
                if ((uVar13 >> 0x20 != 0x303) || ((uVar8 & 0xc) == 8 && (uVar13 & 0xff) == 0xa6))
                goto LAB_1078e15b0;
              }
              if (uVar2 == 0) {
                uVar2 = *(uint *)(lVar9 + 0x20);
                uVar8 = uVar2 >> 3;
                if ((uVar2 & 0x18) != 0) {
                  uVar2 = uVar8;
                  uVar11 = 4;
                  do {
                    uVar17 = uVar2;
                    uVar2 = 0;
                    if (uVar17 != 0) {
                      uVar2 = uVar11 / uVar17;
                    }
                    uVar2 = uVar11 - uVar2 * uVar17;
                    uVar11 = uVar17;
                  } while (uVar2 != 0);
                  uVar2 = uVar8 << 2;
                  uVar8 = 0;
                  if (uVar17 != 0) {
                    uVar8 = uVar2 / uVar17;
                  }
                }
              }
              else {
                uVar8 = 1;
              }
              puVar7 = param_1 + 10;
              *puVar7 = 0;
              *(uint *)(param_1[0x14] + 8) = uVar8;
              uVar2 = *(uint *)((long)param_3 + 0x3c);
              uVar13 = (ulong)uVar2;
              if (uVar2 == 0) {
                if (*(int *)(param_3 + 7) == 0) {
LAB_1078e1c90:
                  lVar9 = param_3[9];
joined_r0x0001078e1c6c:
                  if (lVar9 == 0) {
                    if ((param_3[8] != 0) || (*(int *)(param_1 + 0x11) == 1)) goto LAB_1078e1950;
                  }
                  else {
                    iVar1 = *(int *)(param_1 + 0x11);
                    puVar12 = (undefined8 *)0x1;
                    if ((iVar1 - 2U < 2) || (iVar1 == 0)) goto LAB_1078e15b0;
                    if (iVar1 != 1) {
                      puVar12 = (undefined8 *)0x11;
                      goto LAB_1078e15b0;
                    }
                    puVar12 = (undefined8 *)(lVar4 + 0x40);
                    (**(code **)(lVar4 + 0x60))(puVar12,param_3[8]);
                    if ((int)puVar12 != 0) goto LAB_1078e15b0;
                    lVar14 = param_3[9];
                    lVar9 = lVar14;
                    _malloc();
                    *plVar5 = lVar9;
                    if (lVar9 == 0) goto LAB_1078e1d00;
                    plVar5[2] = lVar14;
                    puVar12 = (undefined8 *)(lVar4 + 0x40);
                    (**(code **)(lVar4 + 0x40))(puVar12,lVar9,lVar14);
                    if ((int)puVar12 != 0) goto LAB_1078e15b0;
                  }
                  param_1[0xd] = plVar5[5] + plVar5[4];
                  if ((param_4 & 1) == 0) {
                    return (undefined8 *)0x0;
                  }
                  puVar12 = param_1;
                  func_0x0001078e2a80(param_1,0,0);
                  if ((int)puVar12 == 0) {
                    return puVar12;
                  }
                  goto LAB_1078e15b0;
                }
              }
              else if (*(uint *)(param_3 + 7) ==
                       (*(int *)(param_3 + 6) + *(int *)((long)param_3 + 0x34) + 3U & 0xfffffffc)) {
                if ((param_4 >> 2 & 1) != 0) {
                  (**(code **)(lVar4 + 0x48))(lVar4 + 0x40,uVar13);
                  goto LAB_1078e1c90;
                }
                uVar6 = uVar13;
                _malloc();
                if (uVar6 == 0) goto LAB_1078e1d00;
                puVar12 = (undefined8 *)(lVar4 + 0x40);
                (**(code **)(lVar4 + 0x40))(puVar12,uVar6,uVar13);
                if ((int)puVar12 != 0) goto LAB_1078e15b0;
                if ((param_4 >> 1 & 1) == 0) {
                  puVar12 = puVar7;
                  func_0x0001078dd788(puVar7,uVar13,uVar6);
                  _free(uVar6);
                  if ((int)puVar12 != 0) goto LAB_1078e15b0;
                  puVar12 = puVar7;
                  func_0x0001078dd4c8(puVar7,&UNK_10f4345af,&lStack_d0);
                  if ((int)puVar12 == 0) {
                    if (*(int *)(lStack_d0 + 0x10) == 0) {
                      pcVar10 = (char *)0x0;
                    }
                    else {
                      pcVar10 = *(char **)(lStack_d0 + 0x18);
                    }
                    iVar1 = *(int *)(param_1 + 6);
                    if (*(int *)(lStack_d0 + 0x10) != iVar1 + 1) goto LAB_1078e1950;
                    if (iVar1 != 1) {
                      if (iVar1 != 2) {
                        if (iVar1 != 3) goto LAB_1078e1c1c;
                        *(int *)(param_1 + 9) = (int)pcVar10[2];
                      }
                      *(int *)((long)param_1 + 0x44) = (int)pcVar10[1];
                    }
                    *(int *)(param_1 + 8) = (int)*pcVar10;
                  }
LAB_1078e1c1c:
                  func_0x0001078dd4c8(puVar7,&UNK_10f4345cd,&lStack_d0);
                  if ((int)puVar7 != 0) goto LAB_1078e1c90;
                  if ((*(int *)(lStack_d0 + 0x10) == 0) || (*(int *)(lStack_d0 + 0x10) != 0xc))
                  goto LAB_1078e1950;
                  puVar12 = (undefined8 *)0x1;
                  if (*(char *)(param_1 + 4) != '\x01') goto LAB_1078e15b0;
                  uVar21 = *(undefined8 *)(lStack_d0 + 0x18);
                  *(undefined1 *)((long)param_1 + 0x8c) = 1;
                  *(int *)(param_1 + 0x12) = (int)uVar21;
                  *(int *)((long)param_1 + 0x94) = (int)((ulong)uVar21 >> 0x20);
                  lVar9 = param_3[9];
                }
                else {
                  *(uint *)(param_1 + 0xb) = uVar2;
                  param_1[0xc] = uVar6;
                  lVar9 = param_3[9];
                }
                goto joined_r0x0001078e1c6c;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x11) != 0) {
      if (uVar2 == 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = uVar13 & 0xfffffffe;
        plVar16 = plVar5 + 7;
        uVar6 = uVar15;
        do {
          plVar16[-3] = plVar16[-3] - lVar9;
          *plVar16 = *plVar16 - lVar9;
          uVar6 = uVar6 - 2;
          plVar16 = plVar16 + 6;
        } while (uVar6 != 0);
        if (uVar15 == uVar13) goto LAB_1078e193c;
      }
      lVar14 = uVar13 - uVar15;
      plVar16 = plVar5 + uVar15 * 3 + 4;
      do {
        *plVar16 = *plVar16 - lVar9;
        lVar14 = lVar14 + -1;
        plVar16 = plVar16 + 3;
      } while (lVar14 != 0);
      goto LAB_1078e193c;
    }
    if (uVar2 < 8) {
      uVar15 = 0;
      uVar20 = 0;
LAB_1078e1904:
      lVar14 = uVar13 - uVar15;
      plVar16 = plVar5 + uVar15 * 3 + 4;
      do {
        *plVar16 = *plVar16 - lVar9;
        if (plVar16[1] != plVar16[2]) {
          uVar20 = 1;
        }
        plVar16 = plVar16 + 3;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    else {
      uVar15 = uVar13 & 0xfffffff8;
      uVar22 = 0;
      plVar16 = plVar5 + 0xd;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      uVar6 = uVar15;
      do {
        plVar16[-9] = plVar16[-9] - lVar9;
        plVar16[-6] = plVar16[-6] - lVar9;
        plVar16[-3] = plVar16[-3] - lVar9;
        *plVar16 = *plVar16 - lVar9;
        plVar16[3] = plVar16[3] - lVar9;
        plVar16[6] = plVar16[6] - lVar9;
        plVar16[9] = plVar16[9] - lVar9;
        plVar16[0xc] = plVar16[0xc] - lVar9;
        bVar19 = (byte)uVar22 | ~-(plVar16[-8] == plVar16[-7]);
        bVar24 = (byte)(uVar22 >> 0x10) | ~-(plVar16[-5] == plVar16[-4]);
        bVar25 = (byte)(uVar22 >> 0x20) | ~-(plVar16[-2] == plVar16[-1]);
        bVar26 = (byte)(uVar22 >> 0x30) | ~-(plVar16[1] == plVar16[2]);
        uVar22 = (ulong)CONCAT16(bVar26,(uint6)CONCAT14(bVar25,(uint)CONCAT12(bVar24,(ushort)bVar19)
                                                       ));
        bVar29 = bVar29 | ~-(plVar16[4] == plVar16[5]);
        bVar30 = bVar30 | ~-(plVar16[7] == plVar16[8]);
        bVar31 = bVar31 | ~-(plVar16[10] == plVar16[0xb]);
        bVar32 = bVar32 | ~-(plVar16[0xd] == plVar16[0xe]);
        plVar16 = plVar16 + 0x18;
        uVar6 = uVar6 - 8;
      } while (uVar6 != 0);
      uVar20 = NEON_umaxv(CONCAT26(-(ushort)((short)((ushort)(bVar32 | bVar26) << 0xf) < 0),
                                   CONCAT24(-(ushort)((short)((ushort)(bVar31 | bVar25) << 0xf) < 0)
                                            ,CONCAT22(-(ushort)((short)((ushort)(bVar30 | bVar24) <<
                                                                       0xf) < 0),
                                                      -(ushort)((short)((ushort)(bVar29 | bVar19) <<
                                                                       0xf) < 0)))),2);
      uVar20 = uVar20 & 1;
      if (uVar15 != uVar13) goto LAB_1078e1904;
    }
    if (uVar20 == 0) goto LAB_1078e193c;
  }
LAB_1078e1950:
  puVar12 = (undefined8 *)0x1;
LAB_1078e15b0:
  if (param_1[0x10] != 0) {
    _free();
  }
  plVar5 = (long *)param_1[0x14];
  if (plVar5 != (long *)0x0) {
    if (*plVar5 != 0) {
      _free(*plVar5);
      plVar5 = (long *)param_1[0x14];
    }
    _free(plVar5);
  }
  lVar4 = param_1[3];
  uStack_88 = *(undefined8 *)(lVar4 + 0x88);
  lStack_90 = *(long *)(lVar4 + 0x80);
  uStack_78 = *(undefined8 *)(lVar4 + 0x98);
  uStack_80 = *(undefined8 *)(lVar4 + 0x90);
  uStack_70 = *(undefined8 *)(lVar4 + 0xa0);
  uStack_c8 = *(undefined8 *)(lVar4 + 0x48);
  lStack_d0 = *(long *)(lVar4 + 0x40);
  uStack_b8 = *(undefined8 *)(lVar4 + 0x58);
  uStack_c0 = *(undefined8 *)(lVar4 + 0x50);
  uStack_a8 = *(undefined8 *)(lVar4 + 0x68);
  uStack_b0 = *(undefined8 *)(lVar4 + 0x60);
  uStack_98 = *(undefined8 *)(lVar4 + 0x78);
  pcStack_a0 = *(code **)(lVar4 + 0x70);
  if (lStack_90 != 0) {
    (*pcStack_a0)(&lStack_d0);
  }
  if (param_1[10] != 0) {
    func_0x0001078dd390();
  }
  if (param_1[0xc] != 0) {
    _free();
  }
  if (param_1[0xe] != 0) {
    _free();
  }
  _free(param_1[3]);
  return puVar12;
}



/* Entry: 1078e336c; end: 1078e3603;  */

undefined8 FUN_1078e336c(void)

{
  return 10;
}



/* Entry: 1078e5270; end: 1078e575b;  */

ulong * FUN_1078e5270(ulong *param_1,ulong *param_2)

{
  ulong ****ppppuVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  code *pcVar6;
  ulong ******ppppppuVar7;
  uint *puVar8;
  ulong ****ppppuVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *****pppppuVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong ******ppppppuVar16;
  uint uVar17;
  uint uVar18;
  ulong *****pppppuVar19;
  ulong *****unaff_x24;
  ulong *puVar20;
  ulong *****pppppuVar21;
  ulong *****pppppuStack_78;
  ulong ***pppuStack_70;
  undefined8 uStack_68;
  
  uVar12 = param_2[1];
  uVar15 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar12;
  *param_1 = uVar15;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  ppppppuVar16 = (ulong ******)(param_1 + 4);
  param_1[5] = 0;
  *ppppppuVar16 = (ulong *****)0x0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(uint *)(param_1 + 8) = 0x3f800000;
  bVar2 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar2 < '\0') {
    if (((4 < param_1[1]) && (puVar10 = (ulong *)*param_1, (uint)*puVar10 != 0x184d2204)) &&
       (0x17 < param_1[1])) goto LAB_1078e5320;
  }
  else if (((4 < bVar2) && ((uint)*param_1 != 0x184d2204)) && (puVar10 = param_1, 0x17 < bVar2)) {
LAB_1078e5320:
    uVar17 = 0;
    uVar15 = 0;
    param_1[3] = (ulong)puVar10;
    uVar3 = ((uint)*puVar10 >> 0x14 & 0x1f) - ((uint)*puVar10 >> 0x10 & 0xf);
    *(char *)(param_1 + 9) = (char)uVar3;
    *(int *)((long)param_1 + 0x4c) = 1 << (ulong)(uVar3 & 0x1f);
    param_1[0xb] = 0x41831bf8457c1093 - ((ulong)((uint)*puVar10 >> 0x14 & 0x1f) << 0x34);
    uVar12 = *puVar10;
    *(uint *)(param_1 + 10) = (uint)(1 << (ulong)((uVar3 & 0xf) << 1)) >> 6;
    *(int *)((long)param_1 + 0x54) = 1 << (ulong)((uint)uVar12 >> 0x14 & 0x1f);
    ppppuVar1 = (ulong ****)(param_1 + 6);
    while( true ) {
      uVar12 = (ulong)bVar2;
      uVar11 = uVar12;
      if ((char)bVar2 < '\0') {
        uVar11 = param_1[1];
      }
      if (uVar11 <= uVar15) {
        return param_1;
      }
      uVar11 = *puVar10;
      uVar3 = (uint)uVar11 >> 0x10 & 0xf;
      uVar18 = (uint)uVar11 >> 0x14 & 0x1f;
      if (((uVar11 & 0xffff) != 0x5354 || uVar18 < uVar3) ||
         (puVar8 = (uint *)param_1[3],
         uVar3 != (*puVar8 >> 0x10 & 0xf) || uVar18 != (*puVar8 >> 0x14 & 0x1f))) break;
      if ((char)bVar2 < '\0') {
        uVar12 = param_1[1];
      }
      uVar11 = uVar11 >> 0x19 & 0x3fffffff;
      uVar15 = uVar15 + ((ulong)(uint)param_1[10] << 3 | 4) * uVar11 + 0x18;
      if (uVar12 < uVar15) break;
      uVar12 = puVar10[2];
      if (*(ulong *)(puVar8 + 4) < uVar12) {
        *(ulong *)(puVar8 + 2) = puVar10[1];
        *(ulong *)(puVar8 + 4) = uVar12;
        uVar11 = *puVar10 >> 0x19 & 0x3fffffff;
      }
      ppppppuVar7 = ppppppuVar16;
      func_0x00010736dc54(ppppppuVar16,
                          (long)((float)(param_1[7] + uVar11) / *(float *)(param_1 + 8)));
      uVar12 = *puVar10;
      uVar17 = uVar17 + ((uint)(uVar12 >> 0x17) & 0xfffffffc) + 0x18;
      for (puVar20 = puVar10 + 3;
          puVar20 < (ulong *)((long)(puVar10 + 3) + (uVar12 >> 0x19 & 0x3fffffff) * 4);
          puVar20 = (ulong *)((long)puVar20 + 4)) {
        uVar3 = (uint)*puVar20;
        pppppuVar21 = (ulong *****)(ulong)uVar3;
        pppppuVar19 = (ulong *****)param_1[5];
        if (pppppuVar19 != (ulong *****)0x0) {
          uVar12 = (long)pppppuVar19 - 1;
          uVar18 = (uint)pppppuVar19;
          if (((ulong)pppppuVar19 & uVar12) == 0) {
            unaff_x24 = (ulong *****)(ulong)(uVar18 - 1 & uVar3);
          }
          else {
            unaff_x24 = pppppuVar21;
            if (pppppuVar19 <= pppppuVar21) {
              uVar4 = 0;
              if (uVar18 != 0) {
                uVar4 = uVar3 / uVar18;
              }
              unaff_x24 = (ulong *****)(ulong)(uVar3 - uVar4 * uVar18);
            }
          }
          ppppuVar9 = (*ppppppuVar16)[(long)unaff_x24];
          if (ppppuVar9 != (ulong ****)0x0) {
LAB_1078e54c4:
            while (ppppuVar9 = (ulong ****)*ppppuVar9, ppppuVar9 != (ulong ****)0x0) {
              pppppuVar13 = (ulong *****)ppppuVar9[1];
              if (pppppuVar13 != pppppuVar21) goto LAB_1078e54e8;
              if (*(uint *)(ppppuVar9 + 2) == uVar3) {
                puVar14 = param_1;
                if (*(char *)((long)param_1 + 0x17) < '\0') {
                  puVar14 = (ulong *)*param_1;
                }
                puVar5 = (ulong *)((long)puVar14 + (ulong)*(uint *)((long)ppppuVar9 + 0x14));
                puVar14 = (ulong *)((long)puVar14 + (ulong)uVar17);
                for (uVar12 = (ulong)(uint)param_1[10]; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *puVar5 = *puVar5 | *puVar14;
                  puVar5 = puVar5 + 1;
                  puVar14 = puVar14 + 1;
                }
                goto LAB_1078e5688;
              }
            }
          }
        }
LAB_1078e5510:
        func_0x000107917234();
        uStack_68 = 1;
        pppppuStack_78 = (ulong *****)ppppppuVar7;
        pppuStack_70 = (ulong ***)ppppuVar1;
        *ppppppuVar7 = (ulong *****)0x0;
        ppppppuVar7[1] = pppppuVar21;
        *(uint *)(ppppppuVar7 + 2) = uVar3;
        *(uint *)((long)ppppppuVar7 + 0x14) = uVar17;
        if ((pppppuVar19 == (ulong *****)0x0) ||
           (*(float *)(param_1 + 8) * (float)pppppuVar19 < (float)(param_1[7] + 1))) {
          func_0x0001079157f0((long)pppppuVar19 << 1);
          func_0x00010736dc54(ppppppuVar16);
          pppppuVar19 = (ulong *****)param_1[5];
          if (((ulong)pppppuVar19 & (long)pppppuVar19 - 1U) == 0) {
            unaff_x24 = (ulong *****)(ulong)((int)pppppuVar19 - 1U & uVar3);
          }
          else {
            unaff_x24 = pppppuVar21;
            if (pppppuVar19 <= pppppuVar21) {
              uVar12 = 0;
              if (pppppuVar19 != (ulong *****)0x0) {
                uVar12 = (ulong)pppppuVar21 / (ulong)pppppuVar19;
              }
              unaff_x24 = (ulong *****)((long)pppppuVar21 - uVar12 * (long)pppppuVar19);
            }
          }
        }
        pppppuVar21 = *ppppppuVar16;
        ppppuVar9 = pppppuVar21[(long)unaff_x24];
        if (ppppuVar9 == (ulong ****)0x0) {
          *pppppuStack_78 = (ulong ****)*ppppuVar1;
          *ppppuVar1 = (ulong ***)pppppuStack_78;
          pppppuVar21[(long)unaff_x24] = ppppuVar1;
          if ((ulong *****)*pppppuStack_78 != (ulong *****)0x0) {
            pppppuVar13 = (ulong *****)(*pppppuStack_78)[1];
            if (((ulong)pppppuVar19 & (long)pppppuVar19 - 1U) == 0) {
              pppppuVar13 = (ulong *****)((ulong)pppppuVar13 & (long)pppppuVar19 - 1U);
            }
            else if (pppppuVar19 <= pppppuVar13) {
              uVar12 = 0;
              if (pppppuVar19 != (ulong *****)0x0) {
                uVar12 = (ulong)pppppuVar13 / (ulong)pppppuVar19;
              }
              pppppuVar13 = (ulong *****)((long)pppppuVar13 - uVar12 * (long)pppppuVar19);
            }
            pppppuVar21[(long)pppppuVar13] = (ulong ****)pppppuStack_78;
          }
        }
        else {
          *pppppuStack_78 = (ulong ****)*ppppuVar9;
          *ppppuVar9 = (ulong ***)pppppuStack_78;
        }
        pppppuStack_78 = (ulong *****)0x0;
        param_1[7] = param_1[7] + 1;
        ppppppuVar7 = &pppppuStack_78;
        func_0x00010736de14();
        puVar14 = (ulong *)param_1[3];
        if (puVar10 != puVar14) {
          uVar12 = *puVar14;
          *puVar14 = uVar12 & 0xff80000000000000 |
                     uVar12 & 0x1ffffff | (uVar12 + 0x2000000 >> 0x19 & 0x3fffffff) << 0x19;
        }
LAB_1078e5688:
        uVar17 = uVar17 + (uint)param_1[10] * 8;
        uVar12 = *puVar10;
      }
      bVar2 = *(byte *)((long)param_1 + 0x17);
      puVar10 = param_1;
      if ((char)bVar2 < '\0') {
        puVar10 = (ulong *)*param_1;
      }
      puVar10 = (ulong *)((long)puVar10 + (ulong)uVar17);
    }
    func_0x000107917e7c();
    func_0x00010002bf70();
    func_0x000107914d08();
    goto LAB_1078e5720;
  }
  func_0x000107917e7c();
  func_0x00010002bf70();
  func_0x000107914d08();
LAB_1078e5720:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1078e5724);
  (*pcVar6)();
LAB_1078e54e8:
  if (((ulong)pppppuVar19 & uVar12) == 0) {
    pppppuVar13 = (ulong *****)((ulong)pppppuVar13 & uVar12);
  }
  else if (pppppuVar19 <= pppppuVar13) {
    uVar11 = 0;
    if (pppppuVar19 != (ulong *****)0x0) {
      uVar11 = (ulong)pppppuVar13 / (ulong)pppppuVar19;
    }
    pppppuVar13 = (ulong *****)((long)pppppuVar13 - uVar11 * (long)pppppuVar19);
  }
  if (pppppuVar13 != unaff_x24) goto LAB_1078e5510;
  goto LAB_1078e54c4;
}



/* Entry: 1078e63c8; end: 1078e63cf;  */

void FUN_1078e63c8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107914c78(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    func_0x0001078e6404();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1078e6648; end: 1078e669f;  */

long FUN_1078e6648(double param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_1 < 9.223372036854776e+18) {
    uVar1 = 0;
  }
  if (param_1 <= -9.223372036854776e+18) {
    uVar1 = 1;
  }
  func_0x0001078e66a0(uVar1);
  return (long)(double)(long)param_1;
}



/* Entry: 1078e67a8; end: 1078e67b3;  */

undefined * FUN_1078e67a8(void)

{
  return &UNK_10f434631;
}



/* Entry: 1078e8734; end: 1078e8ce7;  */

void FUN_1078e8734(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long ***ppplVar2;
  long lVar3;
  long ***ppplVar4;
  long lVar5;
  bool bVar6;
  long ******pppppplVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  long *plVar10;
  long *****ppppplVar11;
  long ****pppplVar12;
  long *****extraout_x8;
  long *****extraout_x8_00;
  long ******pppppplVar13;
  long ******pppppplVar14;
  long *****ppppplVar15;
  long lVar16;
  long ****pppplVar17;
  long *plVar18;
  long *****ppppplVar19;
  double dVar20;
  double dVar21;
  long in_register_00005008;
  double dVar22;
  long ****pppplStack_160;
  long ****pppplStack_158;
  long *plStack_150;
  long *****ppppplStack_148;
  long *****ppppplStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *****ppppplStack_f8;
  long ****pppplStack_f0;
  undefined8 uStack_e8;
  long ****pppplStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long ****pppplStack_c8;
  long ****pppplStack_c0;
  double dStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x0001079175f0();
  lVar16 = 0;
  pppplStack_f0 = (long ****)0x0;
  uStack_e8 = 0;
  ppppplVar15 = (long *****)(param_3 + 0x40);
  ppppplStack_f8 = &pppplStack_f0;
  for (pppplVar17 = *ppppplVar15; pppplVar17 != *(long *****)(param_3 + 0x48);
      pppplVar17 = pppplVar17 + 4) {
    if ((((*(byte *)((long)pppplVar17 + 0x1a) & 1) == 0) &&
        ((*(byte *)((long)pppplVar17 + 0x19) & 1) == 0)) &&
       ((*(byte *)((long)pppplVar17 + 0x1b) & 1) == 0)) {
      ppppplStack_140 = (long *****)((ulong)ppppplStack_140 & 0xffffffffffff0000);
      uStack_138 = 0xffffffffffffffff;
      uStack_130 = 0xffffffffffffffff;
      uStack_128 = 0xffffffffffffffff;
      uStack_120 = 0xbff0000000000000;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_118 = 0;
      ppplVar2 = *pppplVar17;
      ppplVar4 = pppplVar17[1];
      func_0x000107915260();
      func_0x0001078f47f8();
      ppppplStack_148 = (long *****)param_1;
      if (ppplVar2 == ppplVar4) {
        pppplStack_160 = (long ****)((ulong)pppplStack_160 & 0xffffffffffffff00);
      }
      else {
        func_0x0001079187d8();
        dStack_b0 = 0.0;
        uStack_a0 = 0xffffffffffffffff;
        lStack_a8 = lVar16;
        func_0x000107917e84();
        func_0x000107917ed4();
      }
      func_0x0001078f4acc(&uStack_118);
    }
    lVar16 = lVar16 + 1;
  }
  lVar16 = 0;
  plVar10 = (long *)(param_3 + 0x88);
  for (plVar18 = (long *)*plVar10; plVar18 != *(long **)(param_3 + 0x90); plVar18 = plVar18 + 3) {
    ppppplStack_140 = (long *****)((ulong)ppppplStack_140 & 0xffffffffffff0000);
    uStack_138 = 0xffffffffffffffff;
    uStack_130 = 0xffffffffffffffff;
    uStack_128 = 0xffffffffffffffff;
    uStack_120 = 0xbff0000000000000;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_118 = 0;
    lVar3 = *plVar18;
    lVar5 = plVar18[1];
    func_0x000107915260();
    func_0x0001078f4c40();
    ppppplStack_148 = (long *****)param_1;
    if (lVar3 == lVar5) {
      pppplStack_160 = (long ****)((ulong)pppplStack_160 & 0xffffffffffffff00);
    }
    else {
      func_0x0001079187d8();
      dStack_b0 = 9.88131291682493e-324;
      uStack_a0 = 0xffffffffffffffff;
      lStack_a8 = lVar16;
      func_0x000107917e84();
      func_0x000107917ed4();
    }
    func_0x0001078f4acc(&uStack_118);
    lVar16 = lVar16 + 1;
  }
  pppplStack_e0 = (long ****)0x0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  func_0x0001078f4c9c(&pppplStack_c8,uStack_e8);
  lVar16 = 0;
  pppppplVar7 = (long ******)ppppplStack_f8;
  do {
    bVar6 = &pppplStack_f0 <= pppppplVar7;
    if (pppppplVar7 == (long ******)&pppplStack_f0) {
      pppplStack_158 = (long ****)&pppplStack_e0;
      ppppplStack_148 = (long *****)&ppppplStack_f8;
      uStack_138 = CONCAT71(uStack_138._1_7_,1);
      pppplStack_160 = (long ****)ppppplVar15;
      plStack_150 = plVar10;
      ppppplStack_140 = (long *****)(param_3 + 0xf8);
      func_0x000107917008(pppplStack_c0);
      ppppplVar19 = extraout_x8;
      if (bVar6) {
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        func_0x000107916078();
        ppppplVar11 = extraout_x8_00;
        ppppplVar19 = (long *****)pppplStack_c8;
        dStack_b0 = param_1;
        lStack_a8 = in_register_00005008;
        uStack_a0 = param_2;
        for (; (long *****)pppplStack_c8 != ppppplVar11; pppplStack_c8 = pppplStack_c8 + 9) {
          func_0x000107917f50(&dStack_b0);
          func_0x0001078f503c(&uStack_90,ppppplVar19);
          ppppplVar19 = ppppplVar19 + 9;
          ppppplVar11 = (long *****)pppplStack_c0;
        }
        func_0x0001078f4de4(&dStack_b0,&uStack_90,0,&pppplStack_160);
        FUN_1078f57e8(&uStack_90);
      }
      else {
        while ((long *****)pppplStack_c8 != ppppplVar19) {
          pppplStack_c8 = pppplStack_c8 + 9;
          for (ppppplVar11 = (long *****)pppplStack_c8; ppppplVar11 != ppppplVar19;
              ppppplVar11 = ppppplVar11 + 9) {
            func_0x000107915378(&pppplStack_160);
            FUN_1078f4ea8();
            ppppplVar19 = (long *****)pppplStack_c0;
          }
        }
      }
      pppppplVar7 = (long ******)&pppplStack_c8;
      func_0x0001078f4d7c();
      pppppplVar14 = (long ******)ppppplStack_f8;
      while (pppppplVar13 = (long ******)ppppplStack_f8, pppppplVar14 != (long ******)&pppplStack_f0
            ) {
        ppppplVar19 = (long *****)-(double)pppppplVar14[10];
        if (*(char *)(pppppplVar14 + 0xb) == '\0') {
          ppppplVar19 = pppppplVar14[10];
        }
        func_0x000107914cfc();
        if ((int)pppppplVar7 == 0) {
          pppppplVar13 = pppppplVar14 + 0xc;
          if ((long)*pppppplVar13 < 0) {
            func_0x0001078ed088(ppppplVar19,0);
            if ((int)pppppplVar7 != 0) {
              *(undefined1 *)(pppppplVar14 + 0xb) = 1;
            }
          }
          else {
            pppppplVar8 = &ppppplStack_f8;
            func_0x0001078f49f8(pppppplVar8,pppppplVar13);
            pppppplVar9 = pppppplVar8;
            func_0x000107916430(*(undefined1 *)(pppppplVar14 + 0xb),pppppplVar14[10]);
            func_0x0001078ed088(0);
            pppppplVar7 = pppppplVar9;
            func_0x0001078ed088(0,pppppplVar8[3]);
            if (((int)pppppplVar9 != 0) && ((int)pppppplVar7 != 0)) {
              *(undefined1 *)((long)pppppplVar14 + 0x59) = 1;
            }
            if ((((ulong)pppppplVar9 & 1) != 0) || (*(char *)((long)pppppplVar14 + 0x59) == '\x01'))
            {
              *pppppplVar13 = (long *****)0xffffffffffffffff;
            }
          }
        }
        else {
          *(undefined1 *)((long)pppppplVar14 + 0x59) = 1;
        }
        func_0x000107914fec();
        pppppplVar14 = pppppplVar7;
      }
      while (pppppplVar13 != (long ******)&pppplStack_f0) {
        if (-1 < (long)pppppplVar13[0xc]) {
          pppppplVar7 = &ppppplStack_f8;
          func_0x0001078f49f8();
          func_0x000107917e48();
        }
        func_0x000107914fec();
        pppppplVar13 = pppppplVar7;
      }
      pppppplVar7 = (long ******)&pppplStack_e0;
      func_0x0001078e8d68();
      dStack_b0 = 0.0;
      lStack_a8 = 0;
      uStack_a0 = 0;
      pppppplVar14 = (long ******)ppppplStack_f8;
      while (pppppplVar14 != (long ******)&pppplStack_f0) {
        if (((*(byte *)((long)pppppplVar14 + 0x59) & 1) == 0) &&
           (pppppplVar14[0xc] == (long *****)0xffffffffffffffff)) {
          dVar20 = 0.0;
          ppppplStack_148 = (long *****)0x0;
          plStack_150 = (long *)0x0;
          uStack_138 = 0;
          ppppplStack_140 = (long *****)0x0;
          pppplStack_158 = (long ****)0x0;
          pppplStack_160 = (long ****)0x0;
          func_0x0001078f5a58(&pppplStack_160,*ppppplVar15,0,*plVar10,pppppplVar14[4],
                              pppppplVar14[5],*(undefined1 *)(pppppplVar14 + 0xb),0);
          for (ppppplVar19 = pppppplVar14[0x10]; ppppplVar19 != pppppplVar14[0x11];
              ppppplVar19 = ppppplVar19 + 3) {
            pppppplVar7 = &ppppplStack_f8;
            func_0x0001078f5cdc(pppppplVar7,ppppplVar19);
            if (((long ******)&pppplStack_f0 != pppppplVar7) &&
               ((*(byte *)((long)pppppplVar7 + 0x59) & 1) == 0)) {
              func_0x0001078f5a58(&pppplStack_160,*ppppplVar15,0,*plVar10,*ppppplVar19,
                                  ppppplVar19[1],*(undefined1 *)(pppppplVar7 + 0xb),1);
            }
          }
          ppppplVar19 = &pppplStack_160;
          func_0x0001078f5d38();
          if ((long *****)0x3 < ppppplVar19) {
            ppppplVar19 = (long *****)pppplStack_160;
            func_0x0001078f4c40(pppplStack_160,pppplStack_158);
            ppppplVar11 = ppppplStack_140;
            dVar22 = 0.0;
            dVar21 = dVar20;
            for (pppppplVar7 = (long ******)ppppplStack_148; pppppplVar7 != (long ******)ppppplVar11
                ; pppppplVar7 = pppppplVar7 + 3) {
              ppppplVar19 = *pppppplVar7;
              func_0x0001078f4c40(ppppplVar19,pppppplVar7[1]);
              dVar22 = dVar22 + dVar21;
            }
            func_0x000107914cfc();
            if ((((ulong)ppppplVar19 & 1) == 0) && (0.0 < dVar20 + dVar22)) {
              func_0x0001078f5d68(param_4,&pppplStack_160);
            }
          }
          pppppplVar7 = (long ******)&pppplStack_160;
          func_0x0001078e6404();
        }
        func_0x000107914fec();
        pppppplVar14 = pppppplVar7;
      }
      func_0x0001078e8d68(&dStack_b0);
      func_0x0001078f605c(pppplStack_f0);
      return;
    }
    ppppplVar19 = pppppplVar7[10];
    func_0x000107916430(*(undefined1 *)(pppppplVar7 + 0xb));
    pppplVar17 = pppplStack_c8;
    param_1 = ABS((double)ppppplVar19);
    in_register_00005008 = 0;
    puVar1 = (undefined8 *)((long)pppplStack_c8 + lVar16);
    ppppplVar11 = pppppplVar7[5];
    ppppplVar19 = pppppplVar7[4];
    puVar1[2] = pppppplVar7[6];
    puVar1[1] = ppppplVar11;
    *puVar1 = ppppplVar19;
    puVar1[3] = param_2;
    puVar1[4] = param_1;
    ppppplVar11 = pppppplVar7[4];
    ppppplVar19 = ppppplVar15;
    if (ppppplVar11 == (long *****)0x0) {
LAB_1078e8910:
      pppplVar12 = *ppppplVar19 + (long)pppppplVar7[5] * 4;
LAB_1078e892c:
      func_0x0001078f4d90(*pppplVar12,pppplVar12[1],(long)pppplStack_c8 + lVar16 + 0x28);
    }
    else {
      if (ppppplVar11 == (long *****)0x2) {
        pppplVar12 = (long ****)(*plVar10 + (long)pppppplVar7[5] * 0x18);
        goto LAB_1078e892c;
      }
      if (ppppplVar11 == (long *****)0x1) {
        ppppplVar19 = &pppplStack_e0;
        goto LAB_1078e8910;
      }
    }
    pppppplVar7 = (long ******)((long)pppplVar17 + lVar16 + 0x28);
    func_0x0001078e9c64();
    func_0x000107914fec();
    lVar16 = lVar16 + 0x48;
  } while( true );
}



/* Entry: 1078e97b8; end: 1078e97ef;  */

void FUN_1078e97b8(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000107914c78();
  func_0x000107916138();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010791351c();
  return;
}



/* Entry: 1078e9b1c; end: 1078e9b33;  */

long FUN_1078e9b1c(double param_1)

{
  undefined4 uVar1;
  double dVar2;
  
  dVar2 = -0.5;
  if (0.0 <= param_1) {
    dVar2 = 0.5;
  }
  param_1 = param_1 + dVar2;
  uVar1 = 2;
  if (param_1 < 9.223372036854776e+18) {
    uVar1 = 0;
  }
  if (param_1 <= -9.223372036854776e+18) {
    uVar1 = 1;
  }
  func_0x0001078e66a0(uVar1);
  return (long)(double)(long)param_1;
}



/* Entry: 1078ea40c; end: 1078ea443;  */

/* WARNING: Possible PIC construction at 0x0001078ea424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078ea428) */
/* WARNING: Removing unreachable block (ram,0x0001078ea43c) */
/* WARNING: Removing unreachable block (ram,0x000107917b14) */
/* WARNING: Removing unreachable block (ram,0x0001078ea42c) */

bool FUN_1078ea40c(double param_1,undefined8 param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  if (param_1 == param_3) {
    return true;
  }
  if (((ulong)ABS(param_1) < 0x7ff0000000000000) && ((ulong)ABS(param_3) < 0x7ff0000000000000)) {
    dVar1 = ABS(param_3);
    if (ABS(param_3) <= ABS(param_1)) {
      dVar1 = ABS(param_1);
    }
    dVar2 = 1.0;
    if (1.0 <= dVar1) {
      dVar2 = dVar1;
    }
    return ABS(param_1 - param_3) <= dVar2 * 2.220446049250313e-16;
  }
  return false;
}



/* Entry: 1078eb4a4; end: 1078eb56b;  */

void FUN_1078eb4a4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 auStack_e0 [2];
  undefined8 uStack_d0;
  
  func_0x000107914a04();
  if ((!(bool)in_CY || (bool)in_ZR) && (func_0x0001079147b4(), (bool)in_CY)) {
    func_0x0001079153ac();
    func_0x000107913364();
    func_0x000107913b24();
    func_0x0001078eb44c();
    func_0x000107915ec8();
    if (!(bool)in_ZR) {
      func_0x000107915854();
      auStack_e0[0] = param_1;
      uStack_d0 = param_2;
      func_0x000107915350();
      func_0x0001078eb610();
      func_0x000107915350();
      func_0x000107914dd4();
      func_0x0001078eb6c4();
      func_0x0001079149b0(auStack_e0);
      func_0x0001078eb6f0();
      func_0x0001079149d8(auStack_e0);
      func_0x0001078eb6f0();
    }
    func_0x000107915ed4();
    func_0x000107914dd4();
    func_0x0001078eb6c4();
    func_0x0001079172ac();
    func_0x000107914dd4();
    func_0x0001078eb6c4();
    func_0x0001079154b4();
    func_0x000107915384();
    func_0x0001079154e4();
    return;
  }
  func_0x000107914da4();
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar1 = extraout_x8;
    while (unaff_x21 != lVar1) {
      func_0x000107915d6c();
      lVar1 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar1) {
        func_0x00010791460c();
        func_0x0001078ea4e8();
        lVar1 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 1078eb954; end: 1078eb96f;  */

void FUN_1078eb954(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153e4();
  func_0x0001079132d8();
  func_0x000107913724();
  func_0x0001078eb44c();
  func_0x000107913740();
  func_0x0001078eb44c();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto code_r0x0001078eb9b8;
      func_0x000107914c84();
      func_0x0001078ebb4c();
      func_0x000107915ee0();
      func_0x0001078eb610();
      func_0x00010791354c();
      func_0x0001078ebb44();
    }
    else {
code_r0x0001078eb9b8:
      func_0x000107913f30();
      func_0x0001078eb8f8();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107914c84();
          func_0x0001078ebb4c();
          func_0x000107913880();
          func_0x0001078ebb44();
          func_0x000107913894();
          func_0x0001078ebb44();
          goto code_r0x0001078eba40;
        }
      }
    }
    func_0x000107913f20();
    func_0x0001078eb8f8();
    func_0x000107913f10();
    func_0x0001078eb8f8();
  }
code_r0x0001078eba40:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079181f0();
code_r0x0001078ebaa0:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto code_r0x0001078ebaa8;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914708();
      func_0x0001078eb8f8();
      func_0x000107913ec0();
      func_0x0001078eb8f8();
      goto code_r0x0001078ebaa0;
    }
    func_0x000107915ee0();
    func_0x0001078ebb4c();
    func_0x000107913a34();
    func_0x0001078ebb44();
    func_0x000107913650();
    func_0x0001078ebb44();
code_r0x0001078ebaa8:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x0001079139c4();
      func_0x0001078ebb44();
      goto code_r0x0001078ebacc;
    }
  }
  func_0x0001079146f8();
  func_0x0001078eb8f8();
code_r0x0001078ebacc:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&stack0x000000b0);
    func_0x0001078ebb44();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078eb8f8();
  }
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return;
}



/* Entry: 1078ebe20; end: 1078ebe3b;  */

void FUN_1078ebe20(long param_1)

{
  func_0x0001078ebe3c();
  *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xb0) = 0xffffffffffffffff;
  return;
}



/* Entry: 1078ec2c4; end: 1078ec347;  */

void FUN_1078ec2c4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  lVar2 = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar2 + 0x30) = 1;
    *(undefined8 *)((long)param_1 + lVar2 + 0x28) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x38) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x40) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x48) = 1;
    *(undefined8 *)((long)param_1 + lVar2 + 0x50) = 0;
    lVar1 = lVar2 + 0x38;
    *(undefined1 *)((long)param_1 + lVar2 + 0x58) = 0;
    lVar2 = lVar1;
  } while (lVar1 != 0x70);
  return;
}



/* Entry: 1078eccec; end: 1078ecd43;  */

void FUN_1078eccec(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined1 (*unaff_x19) [16];
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x0001079176a8();
  func_0x00010791751c();
  *param_1 = extraout_x8;
  func_0x0001078ecd48(param_1 + 1);
  unaff_x20[5] = 0;
  unaff_x20[6] = 0;
  *unaff_x20 = &PTR_DAT_1109e9f58;
  unaff_x20[1] = &PTR_DAT_1109e9f88;
  unaff_x20[3] = &PTR_DAT_1109e9fb0;
  unaff_x20[4] = 0;
  *(undefined4 *)(unaff_x20 + 7) = *(undefined4 *)unaff_x19[1];
  auVar1 = NEON_ext(*unaff_x19,*unaff_x19,8,1);
  unaff_x20[6] = auVar1._8_8_;
  unaff_x20[5] = auVar1._0_8_;
  return;
}



/* Entry: 1078ece38; end: 1078ece3b;  */

void FUN_1078ece38(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000107914d64();
  func_0x00010791751c();
  *param_1 = extraout_x8;
  func_0x0001078ecd48(param_1 + 1,param_2 + 8);
  func_0x000105301370(param_1 + 3,unaff_x20 + 0x18);
  *unaff_x19 = &PTR_DAT_1109e9f58;
  unaff_x19[1] = &PTR_DAT_1109e9f88;
  unaff_x19[3] = &PTR_DAT_1109e9fb0;
  return;
}



/* Entry: 1078ed228; end: 1078ed2ef;  */

/* WARNING: Possible PIC construction at 0x0001078ed2e8: Changing call to branch */

void FUN_1078ed228(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  long lVar3;
  int extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *in_stack_00000000;
  undefined *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined *in_stack_00000018;
  undefined8 in_stack_00000040;
  
  func_0x000107917a38();
  func_0x0001079145b8();
  if ((bool)in_CY) {
    func_0x0001079171d4(0x97b425ed097b42);
    func_0x0001079146e8();
    if ((bool)in_CY && !(bool)in_ZR) {
      puVar4 = (undefined *)0x1078ed2ec;
code_r0x0001078ed2f0:
      func_0x000107913ad0();
      func_0x0001079189a8();
      func_0x000107914b5c();
      func_0x000107915818();
      for (; bVar2 = unaff_x20 == 8, !bVar2; unaff_x20 = unaff_x20 + 4) {
        func_0x00010791784c();
        puVar5 = in_stack_00000000;
        puVar6 = in_stack_00000008;
        if ((bVar2) || (puVar5 = &stack0x00000040, puVar6 = puVar4, extraout_w8 == 1)) {
          in_stack_00000010 = puVar5;
          in_stack_00000018 = puVar6;
          func_0x0001078ec2fc(&stack0x00000010);
          func_0x000107916268();
        }
        else {
          uVar1 = unaff_x24;
          if (unaff_x20 != 0) {
            uVar1 = unaff_x23;
          }
          func_0x000107915768(uVar1);
        }
      }
      return;
    }
    func_0x000107913dbc();
    func_0x000107916a48();
    if (unaff_x24 == 0) {
      lVar3 = 0;
    }
    else {
      if (extraout_x8 < unaff_x24) {
        puVar4 = &SUB_1078ed2f0;
        func_0x000104bd35f4();
        goto code_r0x0001078ed2f0;
      }
      lVar3 = unaff_x24 * 0x1b0;
      __Znwm();
    }
    func_0x000107914eac();
    func_0x0001079170e8();
    lVar3 = lVar3 + unaff_x22 + 0x1b0;
    func_0x0001079138bc(0xfffffffffffffe50);
    func_0x000107916e4c();
    if (unaff_x20 != 0) {
      func_0x000107914d94();
    }
  }
  else {
    func_0x000107915248();
    func_0x0001079170e8();
    lVar3 = unaff_x22 + 0x1b0;
  }
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}



/* Entry: 1078ed69c; end: 1078eda1b;  */

/* WARNING: Removing unreachable block (ram,0x0001078ed9e0) */
/* WARNING: Removing unreachable block (ram,0x0001078ed9f0) */
/* WARNING: Removing unreachable block (ram,0x0001078ed9f4) */
/* WARNING: Removing unreachable block (ram,0x0001078ed9f8) */
/* WARNING: Removing unreachable block (ram,0x0001078ed9fc) */
/* WARNING: Removing unreachable block (ram,0x0001078ed98c) */
/* WARNING: Removing unreachable block (ram,0x0001078ed998) */
/* WARNING: Removing unreachable block (ram,0x0001078ed9a0) */

void FUN_1078ed69c(ulong param_1,long param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulong uVar9;
  long extraout_x8;
  double *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  undefined8 *unaff_x25;
  undefined8 *puVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if (*(char *)(param_2 + 0x1a0) != '\x01') {
    return;
  }
  func_0x0001079171b0();
  iVar2 = *param_3;
  if (iVar2 == 3 || iVar2 == 5) {
    return;
  }
  func_0x000107914c78();
  func_0x0001078ee0c4();
  if ((param_1 & 1) != 0) {
    return;
  }
  puVar7 = unaff_x20;
  func_0x0001078ee0c4();
  if (((ulong)puVar7 & 1) != 0) {
    return;
  }
  dVar14 = *unaff_x19;
  dVar15 = unaff_x19[1];
  iVar6 = (int)param_3 + 0xa8;
  func_0x000107914c6c();
  func_0x0001078edf30();
  if (iVar6 == 0) {
    return;
  }
  if (iVar2 == 4) {
    dVar15 = (*(double *)(param_3 + 0x3c) - dVar14) * (*(double *)(param_3 + 0x3c) - dVar14) + 0.0 +
             (*(double *)(param_3 + 0x3e) - dVar15) * (*(double *)(param_3 + 0x3e) - dVar15);
    if (dVar15 < *(double *)(param_3 + 0x34)) {
      *(undefined1 *)(*(long *)*unaff_x20 + (long)unaff_x19[0x33] * 0x1b0 + 0x1a0) = 0;
      return;
    }
    if (*(double *)(param_3 + 0x36) < dVar15) {
      return;
    }
  }
  dVar15 = *(double *)unaff_x20[2];
  piVar8 = param_3 + 0x18;
  func_0x0001078e9bf0();
  if (((ulong)piVar8 & 1) != 0) {
    return;
  }
  dVar13 = ABS(dVar15);
  if (0.0 <= dVar15) {
    dVar13 = dVar15;
  }
  func_0x000107917e18(dVar13);
  lVar1 = *(long *)(param_3 + 0x1c);
  puVar7 = (undefined8 *)(**(long **)(param_3 + 0x1a) + lVar1 * 0x10);
  lVar12 = *(long *)(param_3 + 0x1e);
  puVar11 = (undefined8 *)(**(long **)(param_3 + 0x1a) + lVar12 * 0x10);
  if (*(long *)(param_3 + 0x28) == 2) {
    unaff_x25 = (undefined8 *)(ulong)*(byte *)((long)param_3 + 0xc9);
    func_0x000107914824();
    func_0x0001078ee10c();
    if ((int)piVar8 == 0) {
      return;
    }
    func_0x000107914824();
    func_0x0001078ee10c();
    if ((int)piVar8 == 0) {
      return;
    }
    func_0x000107914824();
    func_0x000107917bdc();
    if ((int)piVar8 == 0) {
      return;
    }
  }
  else if (*(long *)(param_3 + 0x28) == 1) {
    unaff_x25 = (undefined8 *)(ulong)*(byte *)((long)param_3 + 0xc9);
    func_0x000107914824();
    func_0x0001078ee10c();
    if ((int)piVar8 == 0) {
      return;
    }
    func_0x000107914824();
    func_0x000107917bdc();
    if (((ulong)piVar8 & 1) == 0) {
      return;
    }
  }
  if (*(char *)((long)param_3 + 0xca) == '\x01') {
    lVar1 = lVar12 * 0x10 + lVar1 * -0x10;
    uVar5 = lVar1 == 0;
    if ((bool)uVar5) {
      return;
    }
    func_0x0001078ee288(dVar14,*puVar7);
    if (((ulong)piVar8 & 1) != 0) {
      return;
    }
    func_0x0001078ee288(puVar11[-2],dVar14);
    if (((ulong)piVar8 & 1) != 0) {
      return;
    }
    puVar4 = puVar7;
    while (puVar10 = puVar4, lVar1 >> 4 != 0) {
      func_0x000107918450();
      func_0x0001078ee288();
      func_0x000107917894();
      puVar4 = unaff_x25;
      if ((bool)uVar5) {
        puVar4 = puVar10;
      }
    }
    lVar1 = 0;
    while (lVar1 != 0) {
      func_0x00010791843c();
      func_0x0001078ee288();
      func_0x00010791787c();
      lVar1 = lVar12;
      if ((bool)uVar5) {
        lVar1 = extraout_x8;
      }
    }
  }
  else {
    if (*(char *)((long)param_3 + 0xcb) != '\x01') goto LAB_1078ed9a4;
    lVar1 = lVar12 * 0x10 + lVar1 * -0x10;
    uVar5 = lVar1 == 0;
    if ((bool)uVar5) {
      return;
    }
    func_0x0001078ee2b0(dVar14,*puVar7);
    if (((ulong)piVar8 & 1) != 0) {
      return;
    }
    func_0x0001078ee2b0(puVar11[-2],dVar14);
    if (((ulong)piVar8 & 1) != 0) {
      return;
    }
    puVar4 = puVar7;
    while (puVar10 = puVar4, lVar1 >> 4 != 0) {
      func_0x000107918450();
      func_0x0001078ee2b0();
      func_0x000107917894();
      puVar4 = unaff_x25;
      if ((bool)uVar5) {
        puVar4 = puVar10;
      }
    }
  }
  lVar1 = 0;
  if (puVar10 != puVar7) {
    lVar1 = -0x10;
  }
  lVar12 = 0;
  if (puVar7 != puVar11) {
    lVar12 = 0x10;
  }
  puVar11 = (undefined8 *)((long)puVar7 + lVar12);
  puVar7 = (undefined8 *)((long)puVar10 + lVar1);
LAB_1078ed9a4:
  bVar3 = *(byte *)((long)param_3 + 0xc9);
  do {
    puVar7 = puVar7 + 2;
    if (puVar7 == puVar11) {
      return;
    }
    uVar9 = (ulong)bVar3;
    func_0x000107914c6c();
    func_0x0001078ee10c();
  } while ((uVar9 & 1) != 0);
  return;
}



/* Entry: 1078edca4; end: 1078edeb3;  */

void FUN_1078edca4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  bool bVar3;
  undefined1 uVar4;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [120];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107913cb4();
  func_0x000107913d54();
  uStack_60 = param_2[2];
  uStack_68 = param_2[1];
  uStack_90 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = param_1;
  uStack_80 = uVar5;
  uStack_78 = uVar6;
  uStack_70 = uStack_90;
  uStack_58 = param_1;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x0001078edbc0();
  func_0x000107913794();
  func_0x0001078edc38();
  uVar1 = unaff_x20 + 1;
  func_0x0001079155d4();
  uVar4 = 1;
  if ((bool)in_ZR) goto LAB_1078edd9c;
  uVar4 = extraout_x9 - extraout_x8 == 0x80;
  uVar2 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_1078edd14:
    func_0x000107913f30();
    func_0x0001078edeb4();
  }
  else {
    uVar2 = 0x62 < uVar1;
    uVar4 = uVar1 == 99;
    if ((99 < uVar1) || (func_0x000107913f00(), !(bool)uVar2)) goto LAB_1078edd14;
    func_0x000107916ee8();
    func_0x000107913df4();
    func_0x0001078edfec();
    func_0x000107915b2c();
    func_0x00010791354c();
    func_0x0001078ee020();
  }
  func_0x000107913ef0();
  in_CY = 0;
  if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = 0, (bool)uVar2)) {
    in_CY = 0x62 < uVar1;
    uVar4 = uVar1 == 99;
    if ((uVar1 < 100) && (func_0x000107914718(), (bool)in_CY)) {
      func_0x000107916ee8();
      func_0x000107915338();
      func_0x000107913880(auStack_50);
      func_0x0001078ee020();
      func_0x000107913894(auStack_50);
      func_0x0001078ee020();
      goto LAB_1078edd9c;
    }
  }
  func_0x000107913f20();
  func_0x0001078edeb4();
  func_0x000107913f10();
  func_0x0001078edeb4();
LAB_1078edd9c:
  func_0x0001079155c8();
  if (!(bool)uVar4) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
        (in_CY = 0x62 < uVar1, uVar1 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x000107913d34();
      auStack_50[0] = param_1;
      uStack_40 = uVar5;
      uStack_38 = uVar6;
      func_0x000107915504();
      func_0x000107915b2c();
      func_0x000107913adc(auStack_140,&uStack_a8);
      func_0x0001078ee020();
      func_0x000107913650();
      func_0x0001078ee020();
    }
    else {
      func_0x000107914858();
      func_0x0001078edeb4();
      func_0x000107913ec0();
      func_0x0001078edeb4();
    }
  }
  func_0x000107914d34(uStack_a0);
  if ((((bool)in_CY) && (in_CY = 0x62 < uVar1, uVar1 < 100)) && (func_0x000107913ea0(), (bool)in_CY)
     ) {
    func_0x000107913a0c();
    func_0x0001078ee020();
  }
  else {
    func_0x000107914848();
    func_0x0001078edeb4();
  }
  func_0x000107913e90();
  if ((((bool)in_CY) && (bVar3 = 0x62 < uVar1, uVar1 < 100)) && (func_0x000107913e80(), bVar3)) {
    func_0x00010791386c(&uStack_90);
    func_0x0001078ee020();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078edeb4();
  }
  func_0x0001078ee07c(auStack_120);
  func_0x000107916e98();
  func_0x000107916ce0();
  func_0x000107915aec();
  func_0x000107915adc();
  func_0x000107915b1c();
  return;
}



/* Entry: 1078ee028; end: 1078ee047;  */

void FUN_1078ee028(void)

{
  func_0x000107913928();
  func_0x0001078ee048();
  func_0x000107917014();
  return;
}



/* Entry: 1078ee47c; end: 1078ee487;  */

/* WARNING: Possible PIC construction at 0x0001078ee660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078ee664) */

void FUN_1078ee47c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  ulong uVar7;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 in_register_00005008;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_register_00005028;
  undefined8 uVar16;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_000000b0;
  undefined *in_stack_000000b8;
  
  puVar12 = &UNK_1078ee488;
  func_0x000107913ad0();
  puVar11 = (undefined8 *)&stack0xfffffffffffffff0;
code_r0x0001078ee488:
  func_0x000107916658();
  in_stack_000000b0 = puVar11;
  in_stack_000000b8 = puVar12;
  func_0x000107913e28();
code_r0x0001078ee4a8:
  puVar11 = unaff_x20;
code_r0x0001078ee4bc:
  func_0x000107916210();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078ee75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1078ee760 + (ulong)*(byte *)((long)puVar11 + 0x10dedb8bc) * 4))();
    return;
  }
  if ((long)extraout_x8 < 0x3c0) {
    if ((param_6 & 1) == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      puVar11 = unaff_x20 + -5;
      while (unaff_x20 = unaff_x20 + 5, unaff_x20 != unaff_x19) {
        func_0x000107914e28();
        func_0x0001078eea1c();
        if ((int)param_3 != 0) {
          func_0x0001079182e4();
          puVar5 = puVar11;
          do {
            puVar8 = puVar5;
            uVar14 = puVar8[6];
            uVar13 = puVar8[5];
            uVar16 = puVar8[8];
            uVar15 = puVar8[7];
            puVar8[0xb] = uVar14;
            puVar8[10] = uVar13;
            puVar8[0xd] = uVar16;
            puVar8[0xc] = uVar15;
            puVar8[0xe] = puVar8[9];
            func_0x00010791760c();
            func_0x0001078eea1c();
            puVar5 = puVar8 + -5;
          } while (((ulong)param_3 & 1) != 0);
          func_0x000107915108();
          puVar8[9] = extraout_x8_08;
          puVar8[6] = uVar14;
          puVar8[5] = uVar13;
          puVar8[8] = uVar16;
          puVar8[7] = uVar15;
        }
        puVar11 = puVar11 + 5;
      }
      return;
    }
    if (unaff_x20 == unaff_x19) {
      return;
    }
    lVar10 = 0;
    puVar11 = unaff_x20;
    goto code_r0x0001078ee80c;
  }
  if (unaff_x22 != 0) {
    puVar11 = unaff_x20 + ((ulong)puVar11 >> 1) * 5;
    if (extraout_x8 < 0x1401) {
      func_0x000107915378(puVar11);
      func_0x0001078eea90();
    }
    else {
      func_0x000107914c3c();
      func_0x0001078eea90();
      func_0x0001078eea90(unaff_x20 + 5,puVar11 + -5,unaff_x19 + -10);
      func_0x0001078eea90(unaff_x20 + 10,puVar11 + 5,unaff_x19 + -0xf);
      func_0x0001079171fc();
      func_0x0001078eea90();
      func_0x00010791561c();
      func_0x000107915344();
      in_register_00005008 = puVar11[1];
      param_1 = *puVar11;
      in_register_00005028 = puVar11[3];
      param_2 = puVar11[2];
      func_0x0001079158c0(puVar11[4]);
      func_0x000107914058();
    }
    unaff_x22 = unaff_x22 + -1;
    if ((param_6 & 1) != 0) {
code_r0x0001078ee55c:
      lVar10 = 0;
      func_0x00010791561c();
      in_stack_00000000 = param_1;
      in_stack_00000008 = in_register_00005008;
      in_stack_00000010 = param_2;
      in_stack_00000018 = in_register_00005028;
      in_stack_00000020 = extraout_x8_00;
      do {
        lVar10 = lVar10 + 0x28;
        puVar6 = (undefined1 *)(lVar10 + (long)unaff_x20);
        func_0x0001078eea1c(puVar6,&stack0x00000000);
      } while (((ulong)puVar6 & 1) != 0);
      puVar5 = (undefined8 *)((long)unaff_x20 + lVar10);
      puVar11 = puVar5;
      puVar8 = unaff_x19;
      if (lVar10 == 0x28) {
        do {
          if (unaff_x19 <= puVar5) break;
          func_0x000107916f24();
        } while (((ulong)puVar6 & 1) == 0);
      }
      else {
        do {
          func_0x000107916f24();
        } while ((int)puVar6 == 0);
      }
      while (puVar11 < puVar8) {
        func_0x000107917744();
        func_0x000107915344();
        func_0x000107916544();
        puVar11[4] = extraout_x8_01;
        puVar11[1] = in_register_00005008;
        *puVar11 = param_1;
        puVar11[3] = in_register_00005028;
        puVar11[2] = param_2;
        func_0x000107915108();
        puVar8[4] = extraout_x8_02;
        puVar8[1] = in_register_00005008;
        *puVar8 = param_1;
        puVar8[3] = in_register_00005028;
        puVar8[2] = param_2;
        do {
          puVar11 = puVar11 + 5;
          puVar4 = puVar11;
          func_0x0001078eea1c(puVar11,&stack0x00000000);
        } while (((ulong)puVar4 & 1) != 0);
        do {
          puVar8 = puVar8 + -5;
          puVar4 = puVar8;
          func_0x0001078eea1c(puVar8,&stack0x00000000);
        } while (((ulong)puVar4 & 1) == 0);
      }
      if (unaff_x20 != puVar11 + -5) {
        func_0x000107916544();
        func_0x0001079158c0();
      }
      func_0x0001079150cc();
      in_CY = unaff_x19 <= puVar5;
      in_ZR = puVar5 == unaff_x19;
      if ((bool)in_CY) {
        puVar5 = unaff_x20;
        func_0x0001078eec20();
        param_3 = puVar11;
        func_0x0001078eec20(puVar11,unaff_x19);
        if ((int)param_3 != 0) goto code_r0x0001078ee73c;
        if (((ulong)puVar5 & 1) != 0) goto code_r0x0001078ee4bc;
      }
      param_6 = (ulong)((uint)param_6 & 1);
      puVar12 = &UNK_1078ee664;
      param_3 = unaff_x20;
      puVar11 = &stack0x000000b0;
      goto code_r0x0001078ee488;
    }
    puVar11 = unaff_x20 + -5;
    func_0x0001078eea1c();
    if (((ulong)puVar11 & 1) != 0) goto code_r0x0001078ee55c;
    func_0x00010791561c();
    param_3 = (undefined8 *)register0x00000008;
    in_stack_00000000 = param_1;
    in_stack_00000008 = in_register_00005008;
    in_stack_00000010 = param_2;
    in_stack_00000018 = in_register_00005028;
    in_stack_00000020 = extraout_x8_03;
    func_0x0001078eea1c(&stack0x00000000,unaff_x19 + -5);
    puVar11 = unaff_x20;
    if (((ulong)param_3 & 1) == 0) {
      do {
        puVar11 = puVar11 + 5;
        if (unaff_x19 <= puVar11) break;
        func_0x000107916400();
      } while ((int)param_3 == 0);
    }
    else {
      do {
        puVar11 = puVar11 + 5;
        func_0x000107916400();
      } while (((ulong)param_3 & 1) == 0);
    }
    if (puVar11 < unaff_x19) {
      do {
        func_0x000107916f08();
      } while (((ulong)param_3 & 1) != 0);
    }
    while (puVar11 < unaff_x19) {
      func_0x000107917744();
      func_0x000107915344();
      in_register_00005008 = unaff_x19[1];
      param_1 = *unaff_x19;
      in_register_00005028 = unaff_x19[3];
      param_2 = unaff_x19[2];
      puVar11[4] = unaff_x19[4];
      puVar11[1] = in_register_00005008;
      *puVar11 = param_1;
      puVar11[3] = in_register_00005028;
      puVar11[2] = param_2;
      func_0x000107915108();
      unaff_x19[4] = extraout_x8_04;
      unaff_x19[1] = in_register_00005008;
      *unaff_x19 = param_1;
      unaff_x19[3] = in_register_00005028;
      unaff_x19[2] = param_2;
      do {
        puVar11 = puVar11 + 5;
        func_0x000107916400();
      } while ((int)param_3 == 0);
      do {
        func_0x000107916f08();
      } while (((ulong)param_3 & 1) != 0);
    }
    puVar5 = puVar11 + -5;
    in_CY = puVar5 <= unaff_x20;
    in_ZR = unaff_x20 == puVar5;
    if (!(bool)in_ZR) {
      in_register_00005008 = puVar11[-4];
      param_1 = *puVar5;
      in_register_00005028 = puVar11[-2];
      param_2 = puVar11[-3];
      unaff_x20[4] = puVar11[-1];
      unaff_x20[1] = in_register_00005008;
      *unaff_x20 = param_1;
      unaff_x20[3] = in_register_00005028;
      unaff_x20[2] = param_2;
    }
    param_6 = 0;
    func_0x0001079150e0();
    goto code_r0x0001078ee4bc;
  }
  if (unaff_x20 == unaff_x19) {
    return;
  }
  func_0x0001079181fc();
  lVar10 = 0;
  do {
    func_0x000107914c3c();
    FUN_1078eeea0();
    lVar10 = lVar10 + -1;
  } while (-1 < lVar10);
  do {
    if ((long)puVar11 < 2) {
      return;
    }
    uVar7 = 0;
    uVar14 = unaff_x20[1];
    uVar13 = *unaff_x20;
    uVar16 = unaff_x20[3];
    uVar15 = unaff_x20[2];
    in_stack_00000020 = unaff_x20[4];
    puVar5 = unaff_x20;
    in_stack_00000000 = uVar13;
    in_stack_00000008 = uVar14;
    in_stack_00000010 = uVar15;
    in_stack_00000018 = uVar16;
    do {
      uVar2 = uVar7 << 1 | 1;
      uVar1 = uVar7 * 2 + 2;
      puVar8 = puVar5 + uVar7 * 5 + 5;
      uVar3 = uVar2;
      if ((long)uVar1 < (long)puVar11) {
        func_0x000107915260();
        func_0x0001078eea1c();
        puVar8 = puVar5 + uVar7 * 5 + 10;
        uVar3 = uVar1;
        if ((int)param_3 == 0) {
          puVar8 = puVar5 + uVar7 * 5 + 5;
          uVar3 = uVar2;
        }
      }
      uVar7 = uVar3;
      func_0x000107914db0();
      puVar5[4] = extraout_x8_05;
      puVar5[1] = uVar14;
      *puVar5 = uVar13;
      puVar5[3] = uVar16;
      puVar5[2] = uVar15;
      puVar5 = puVar8;
    } while ((long)uVar7 <= (long)((ulong)((long)puVar11 - 2U) >> 1));
    puVar5 = unaff_x19 + -5;
    if (puVar8 == puVar5) {
      func_0x000107915b08();
      func_0x0001079156d8();
    }
    else {
      uVar14 = unaff_x19[-4];
      uVar13 = *puVar5;
      uVar16 = unaff_x19[-2];
      uVar15 = unaff_x19[-3];
      func_0x0001079156d8(unaff_x19[-1]);
      func_0x000107915b08();
      unaff_x19[-1] = extraout_x8_06;
      unaff_x19[-4] = uVar14;
      *puVar5 = uVar13;
      unaff_x19[-2] = uVar16;
      unaff_x19[-3] = uVar15;
      puVar6 = (undefined1 *)((long)puVar8 + (0x28 - (long)unaff_x20));
      if (0x28 < (long)puVar6) {
        uVar7 = (ulong)puVar6 / 0x28 - 2 >> 1;
        func_0x000107915248();
        func_0x0001078eea1c();
        if ((int)param_3 != 0) {
          func_0x00010791407c();
          puVar8 = unaff_x20 + uVar7 * 5;
          do {
            puVar4 = puVar8;
            func_0x000107915308();
            func_0x0001079156d8();
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1 >> 1;
            puVar8 = unaff_x20 + uVar7 * 5;
            param_3 = puVar8;
            func_0x0001078eea1c(puVar8,&stack0x00000030);
          } while (((ulong)param_3 & 1) != 0);
          func_0x000107915108();
          puVar4[4] = extraout_x8_07;
          puVar4[1] = uVar14;
          *puVar4 = uVar13;
          puVar4[3] = uVar16;
          puVar4[2] = uVar15;
        }
      }
    }
    puVar11 = (undefined8 *)((long)puVar11 + -1);
    unaff_x19 = puVar5;
  } while( true );
code_r0x0001078ee80c:
  puVar11 = puVar11 + 5;
  if (puVar11 == unaff_x19) {
    return;
  }
  puVar5 = puVar11;
  func_0x0001078eea1c();
  if ((int)puVar5 != 0) {
    func_0x0001079182e4();
    lVar9 = lVar10;
    do {
      func_0x000107914728((undefined1 *)((long)unaff_x20 + lVar9));
      if (lVar9 == 0) break;
      lVar9 = lVar9 + -0x28;
      puVar6 = &stack0x00000030;
      func_0x0001078eea1c(puVar6,(undefined1 *)(lVar9 + (long)unaff_x20));
    } while (((ulong)puVar6 & 1) != 0);
    func_0x0001079150f4();
  }
  lVar10 = lVar10 + 0x28;
  goto code_r0x0001078ee80c;
code_r0x0001078ee73c:
  unaff_x19 = puVar11 + -5;
  if (((ulong)puVar5 & 1) != 0) {
    return;
  }
  goto code_r0x0001078ee4a8;
}



/* Entry: 1078eeea0; end: 1078eefab;  */

void FUN_1078eeea0(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong extraout_x9;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 unaff_x30;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (1 < param_2) {
    func_0x000107915994();
    func_0x0001004d7694();
    lVar3 = (param_3 - (long)param_1) / 0x28;
    if (lVar3 <= (long)(extraout_x9 >> 1)) {
      uVar2 = lVar3 << 1 | 1;
      puVar5 = (undefined8 *)(unaff_x20 + uVar2 * 0x28);
      uVar1 = lVar3 * 2 + 2;
      puVar7 = puVar5;
      uVar8 = uVar2;
      if ((long)uVar1 < param_2) {
        func_0x000107915a0c();
        func_0x0001078eea1c();
        puVar7 = puVar5 + 5;
        uVar8 = uVar1;
        if ((int)param_1 == 0) {
          puVar7 = puVar5;
          uVar8 = uVar2;
        }
      }
      func_0x000107915260();
      func_0x0001078eea1c();
      if (((ulong)param_1 & 1) == 0) {
        func_0x00010791505c();
        do {
          puVar5 = puVar7;
          iVar4 = (int)param_1;
          func_0x000107914db0();
          func_0x00010791526c();
          if ((long)(extraout_x9 >> 1) < (long)uVar8) break;
          uVar2 = uVar8 << 1 | 1;
          puVar6 = (undefined8 *)(unaff_x20 + uVar2 * 0x28);
          uVar1 = uVar8 * 2 + 2;
          puVar7 = puVar6;
          uVar8 = uVar2;
          if ((long)uVar1 < param_2) {
            func_0x000107915260();
            func_0x0001078eea1c();
            puVar7 = puVar6 + 5;
            uVar8 = uVar1;
            if (iVar4 == 0) {
              puVar7 = puVar6;
              uVar8 = uVar2;
            }
          }
          param_1 = puVar7;
          func_0x0001078eea1c();
        } while ((int)param_1 == 0);
        puVar5[4] = in_stack_00000020;
        puVar5[1] = in_stack_00000008;
        *puVar5 = in_stack_00000000;
        puVar5[3] = in_stack_00000018;
        puVar5[2] = in_stack_00000010;
      }
    }
    func_0x0001079154c8(unaff_x30);
  }
  return;
}



/* Entry: 1078ef3f4; end: 1078ef4cf;  */

/* WARNING: Possible PIC construction at 0x0001078ef534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ef53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ef558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ef648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ef570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ef4c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078ef55c) */
/* WARNING: Removing unreachable block (ram,0x0001078ef574) */
/* WARNING: Removing unreachable block (ram,0x0001078ef584) */
/* WARNING: Removing unreachable block (ram,0x0001078ef654) */
/* WARNING: Removing unreachable block (ram,0x0001078ef674) */
/* WARNING: Removing unreachable block (ram,0x0001078ef678) */
/* WARNING: Removing unreachable block (ram,0x0001078ef684) */
/* WARNING: Removing unreachable block (ram,0x0001078ef664) */
/* WARNING: Removing unreachable block (ram,0x0001078ef668) */
/* WARNING: Removing unreachable block (ram,0x0001078ef670) */
/* WARNING: Removing unreachable block (ram,0x0001078ef694) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6a0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6a4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6ac) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6f0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6b0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6d0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6e0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef6f8) */
/* WARNING: Removing unreachable block (ram,0x0001078ef704) */
/* WARNING: Removing unreachable block (ram,0x0001078ef710) */
/* WARNING: Removing unreachable block (ram,0x0001078ef57c) */
/* WARNING: Removing unreachable block (ram,0x0001078ef594) */
/* WARNING: Removing unreachable block (ram,0x0001078ef59c) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5a4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5c0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5c4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5d8) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5cc) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5d4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5b4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5bc) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5dc) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5e4) */
/* WARNING: Removing unreachable block (ram,0x0001078ef614) */
/* WARNING: Removing unreachable block (ram,0x0001078ef620) */
/* WARNING: Removing unreachable block (ram,0x0001078ef624) */
/* WARNING: Removing unreachable block (ram,0x0001078ef62c) */
/* WARNING: Removing unreachable block (ram,0x0001078ef720) */
/* WARNING: Removing unreachable block (ram,0x0001078ef728) */
/* WARNING: Removing unreachable block (ram,0x0001078ef640) */
/* WARNING: Removing unreachable block (ram,0x0001078ef644) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5ec) */
/* WARNING: Removing unreachable block (ram,0x0001078ef5f0) */
/* WARNING: Removing unreachable block (ram,0x0001078ef600) */
/* WARNING: Removing unreachable block (ram,0x0001078ef610) */
/* WARNING: Removing unreachable block (ram,0x0001078ef540) */
/* WARNING: Removing unreachable block (ram,0x0001078ef538) */
/* WARNING: Removing unreachable block (ram,0x0001078ef64c) */

void FUN_1078ef3f4(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 uVar11;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  ulong extraout_x9;
  long *extraout_x9_00;
  long *plVar12;
  long *extraout_x9_01;
  undefined8 *extraout_x9_02;
  long extraout_x9_03;
  long *extraout_x9_04;
  undefined8 uVar13;
  ulong extraout_x10;
  long extraout_x10_00;
  undefined8 extraout_x10_01;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x12;
  ulong extraout_x12_00;
  long extraout_x14;
  long lVar14;
  long *unaff_x19;
  long *plVar15;
  undefined8 *unaff_x21;
  long lVar16;
  ulong unaff_x26;
  undefined8 in_register_00005008;
  undefined8 uVar17;
  
  func_0x000107914d70();
  puVar9 = (undefined8 *)param_2[1];
  uVar4 = (undefined8 *)param_2[2] <= puVar9;
  uVar6 = puVar9 == (undefined8 *)param_2[2];
  if (!(bool)uVar4) {
    uVar13 = unaff_x21[1];
    uVar11 = *unaff_x21;
    puVar9[2] = unaff_x21[2];
    puVar9[1] = uVar13;
    *puVar9 = uVar11;
    puVar9 = puVar9 + 3;
LAB_1078ef4bc:
    unaff_x19[1] = (long)puVar9;
    return;
  }
  plVar15 = (long *)*unaff_x19;
  lVar16 = (long)puVar9 - (long)plVar15;
  func_0x0001079146e8(0xaaaaaaaaaaaaaaa);
  if (!(bool)uVar4 || (bool)uVar6) {
    func_0x000107913dbc();
    uVar2 = extraout_x10;
    if (0x555555555555554 < extraout_x9) {
      uVar2 = extraout_x8;
    }
    uVar4 = extraout_x8 <= uVar2;
    uVar6 = uVar2 == extraout_x8;
    if (!(bool)uVar4 || (bool)uVar6) {
      lVar8 = uVar2 * 0x18;
      __Znwm();
      puVar1 = (undefined8 *)(lVar8 + lVar16);
      uVar11 = *unaff_x21;
      puVar1[1] = unaff_x21[1];
      *puVar1 = uVar11;
      puVar1[2] = unaff_x21[2];
      puVar9 = puVar1 + 3;
      func_0x000107913970();
      *unaff_x19 = (long)(puVar1 + (lVar16 / -0x18) * 3);
      unaff_x19[1] = (long)puVar9;
      unaff_x19[2] = lVar8 + uVar2 * 0x18;
      if (plVar15 != (long *)0x0) {
        func_0x000107914d94();
      }
      goto LAB_1078ef4bc;
    }
    func_0x000104bd35f4();
  }
  func_0x000107913ad0();
  puVar10 = &UNK_1078ef4dc;
  func_0x0001079171b0();
  func_0x000107913e28();
  func_0x000107913ca4();
  func_0x000107917624();
  func_0x000107916210();
  if (!(bool)uVar4 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0001078ef740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1078ef744 + (ulong)(byte)(&UNK_10dedb8c8)[unaff_x26] * 4))();
    return;
  }
  if ((long)extraout_x8_01 < 0x240) {
    bVar7 = plVar15 == unaff_x19;
    if ((param_5 & 1) == 0) {
      plVar12 = plVar15;
      if (!bVar7) {
        while( true ) {
          plVar15 = (long *)((long)plVar15 + 0x18);
          bVar7 = true;
          if (plVar12 + 3 == unaff_x19) break;
          lVar16 = plVar12[5];
          lVar8 = plVar12[2];
          cVar3 = SBORROW8(lVar16,lVar8);
          cVar5 = lVar16 - lVar8 < 0;
          uVar6 = lVar16 == lVar8;
          plVar12 = plVar12 + 3;
          if (lVar8 < lVar16) {
            func_0x0001079160f4(plVar15);
            do {
              func_0x000107916b2c();
            } while (!(bool)uVar6 && cVar5 == cVar3);
            func_0x00010791627c();
            plVar12 = extraout_x9_04;
            plVar15 = (long *)extraout_x8_03;
          }
        }
      }
    }
    else if (!bVar7) {
      lVar16 = 0;
      while( true ) {
        plVar12 = plVar15 + 3;
        bVar7 = true;
        if (plVar12 == unaff_x19) break;
        if (plVar15[2] < plVar15[5]) {
          func_0x0001079160f4(lVar16);
          do {
            func_0x000107917a20();
            if (extraout_x11 == 0) break;
          } while (*(long *)(extraout_x12 + -8) < extraout_x10_00);
          func_0x00010791627c();
          lVar16 = extraout_x8_02;
          plVar12 = extraout_x9_00;
        }
        lVar16 = lVar16 + 0x18;
        plVar15 = plVar12;
      }
    }
  }
  else {
    if (lVar16 != 0) {
      puVar9 = plVar15 + (unaff_x26 >> 1) * 3;
      if (extraout_x8_01 < 0xc01) {
        func_0x000107915378();
        puVar10 = &UNK_1078ef574;
      }
      else {
        func_0x000107914c3c();
        puVar10 = &UNK_1078ef538;
        puVar9 = param_2;
      }
      goto code_r0x0001078ef964;
    }
    bVar7 = plVar15 == unaff_x19;
    if (!bVar7) {
      func_0x0001079181fc();
      lVar16 = 0;
      do {
        func_0x000107914c3c();
        func_0x0001078efbe0();
        lVar16 = lVar16 + -1;
      } while (-1 < lVar16);
      for (; bVar7 = unaff_x26 == 2, 1 < (long)unaff_x26; unaff_x26 = unaff_x26 - 1) {
        func_0x0001079169b0();
        do {
          func_0x0001079161b0();
          cVar5 = SBORROW8(extraout_x12_00,unaff_x26);
          lVar16 = extraout_x12_00 - unaff_x26;
          bVar7 = extraout_x12_00 == unaff_x26;
          if ((long)extraout_x12_00 < (long)unaff_x26) {
            lVar8 = *(long *)(extraout_x14 + 0x28);
            lVar14 = *(long *)(extraout_x14 + 0x40);
            cVar5 = SBORROW8(lVar8,lVar14);
            lVar16 = lVar8 - lVar14;
            bVar7 = lVar8 == lVar14;
          }
          cVar3 = lVar16 < 0;
          func_0x000107916f70();
        } while (bVar7 || cVar3 != cVar5);
        unaff_x19 = unaff_x19 + -3;
        cVar3 = SBORROW8((long)extraout_x9_01,(long)unaff_x19);
        cVar5 = (long)extraout_x9_01 - (long)unaff_x19 < 0;
        uVar6 = extraout_x9_01 == unaff_x19;
        if ((bool)uVar6) {
          func_0x00010791511c();
        }
        else {
          func_0x000107915bd4();
          if ((cVar5 == cVar3) && (func_0x000107916b4c(), !(bool)uVar6 && cVar5 == cVar3)) {
            in_register_00005008 = extraout_x9_02[1];
            param_1 = *extraout_x9_02;
            do {
              func_0x0001079172c0();
              if (extraout_x11_00 == 0) break;
              func_0x0001079179d8();
            } while (!(bool)uVar6 && cVar5 == cVar3);
            func_0x0001079176b4();
            *(undefined8 *)(extraout_x9_03 + 0x10) = extraout_x10_01;
          }
        }
      }
    }
  }
  func_0x000107913564(extraout_x8_00);
  if (bVar7) {
    func_0x000107915868(puVar10);
    return;
  }
  puVar10 = &UNK_1078ef964;
  ___stack_chk_fail();
  puVar9 = param_2;
code_r0x0001078ef964:
  lVar16 = *(long *)(param_3 + 0x10);
  if ((long)puVar9[2] < lVar16) {
    if (lVar16 < (long)param_4[2]) {
      uVar11 = puVar9[2];
      in_register_00005008 = puVar9[1];
      param_1 = *puVar9;
      uVar13 = param_4[2];
      uVar17 = *param_4;
      puVar9[1] = param_4[1];
      *puVar9 = uVar17;
      puVar9[2] = uVar13;
    }
    else {
      func_0x000107915eec();
      if ((long)param_4[2] <= *(long *)(param_3 + 0x10)) {
        return;
      }
      func_0x0001079175d4(puVar10);
      uVar11 = extraout_x8_05;
    }
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = uVar11;
  }
  else if (lVar16 < (long)param_4[2]) {
    func_0x0001079175d4();
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = extraout_x8_04;
    if ((long)puVar9[2] < *(long *)(param_3 + 0x10)) {
      func_0x000107915eec();
    }
  }
  return;
}



/* Entry: 1078efca0; end: 1078efdbf;  */

/* WARNING: Possible PIC construction at 0x0001078efccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078efd38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078efcd0) */
/* WARNING: Removing unreachable block (ram,0x0001078efd3c) */
/* WARNING: Removing unreachable block (ram,0x0001078efd48) */
/* WARNING: Removing unreachable block (ram,0x0001078efd5c) */
/* WARNING: Removing unreachable block (ram,0x0001078efd84) */
/* WARNING: Removing unreachable block (ram,0x0001078efd78) */
/* WARNING: Removing unreachable block (ram,0x0001078efd8c) */
/* WARNING: Removing unreachable block (ram,0x0001078efda8) */
/* WARNING: Removing unreachable block (ram,0x0001078efdac) */
/* WARNING: Removing unreachable block (ram,0x0001079133d0) */
/* WARNING: Removing unreachable block (ram,0x0001078efd64) */

void FUN_1078efca0(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x24;
  undefined8 uVar4;
  
  func_0x000107917a38();
  func_0x000107914d70();
  uVar3 = *(ulong *)(param_1 + 8);
  bVar1 = *(ulong *)(unaff_x19 + 0x10) <= uVar3;
  bVar2 = uVar3 == *(ulong *)(unaff_x19 + 0x10);
  if (!bVar1) goto code_r0x0001078efdc0;
  func_0x0001079146e8(0x555555555555555);
  if (bVar1 && !bVar2) {
    func_0x0001078efe28();
    unaff_x21 = param_2;
LAB_1078efdbc:
    func_0x000104bd35f4();
  }
  else {
    func_0x000107913dbc();
    func_0x000107916a48();
    if (unaff_x24 != 0) {
      unaff_x21 = param_2;
      if (extraout_x8 < unaff_x24) goto LAB_1078efdbc;
      uVar3 = unaff_x24 * 0x30;
      __Znwm();
    }
    func_0x000107915248();
    unaff_x21 = param_2;
  }
code_r0x0001078efdc0:
  func_0x0001078efde4();
  uVar4 = *(undefined8 *)(unaff_x21 + 0x20);
  *(undefined8 *)(uVar3 + 0x28) = *(undefined8 *)(unaff_x21 + 0x28);
  *(undefined8 *)(uVar3 + 0x20) = uVar4;
  return;
}



/* Entry: 1078f005c; end: 1078f00b7;  */

long FUN_1078f005c(long param_1)

{
  func_0x0001078f0080(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1078f0914; end: 1078f096b;  */

void FUN_1078f0914(int param_1)

{
  func_0x0001079188e0();
  func_0x000107913908();
  func_0x0001078f08bc();
  func_0x00010791739c();
  func_0x0001078f0668();
  if (param_1 != 0) {
    func_0x00010791437c();
    func_0x0001078f0668();
    if (param_1 != 0) {
      func_0x0001079134bc();
      func_0x0001078f0668();
      if (param_1 != 0) {
        func_0x0001079134ec();
        func_0x0001078f0668();
        if (param_1 != 0) {
          func_0x000107913438();
        }
      }
    }
  }
  return;
}



/* Entry: 1078f0cc4; end: 1078f0d8f;  */

/* WARNING: Possible PIC construction at 0x0001078f0d88: Changing call to branch */

void FUN_1078f0cc4(int param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  int iVar2;
  long lVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x24;
  
  func_0x000107917a38();
  func_0x0001079145b8();
  if ((bool)in_CY) {
    func_0x0001079171d4(0x249249249249249);
    func_0x0001079146e8();
    if ((bool)in_CY && !(bool)in_ZR) {
code_r0x0001078f0d90:
      func_0x000107913ad0();
      func_0x000107915938();
      iVar1 = param_1;
      func_0x000107913aec();
      func_0x0001078e9d94();
      if (param_1 == 0 && iVar1 == 0) {
        func_0x000107913c44();
        func_0x000107915480();
        func_0x000107913aec();
        func_0x0001078f1930();
      }
      else {
        iVar2 = iVar1;
        if (param_1 == 0) {
          func_0x000107913c44();
          func_0x000107915480();
          if (iVar2 == -1) {
            return;
          }
        }
        if (iVar1 == 0) {
          func_0x000107913aec();
          func_0x0001078f1930();
          if (iVar2 == -1) {
            return;
          }
        }
        if ((param_1 == iVar1) && (func_0x000107914cd0(), iVar2 != 0)) {
          func_0x000107915b40();
        }
      }
      return;
    }
    func_0x000107913dbc();
    func_0x000107916a48();
    if (unaff_x24 == 0) {
      lVar3 = 0;
    }
    else {
      if (extraout_x8 < unaff_x24) {
        func_0x000104bd35f4();
        goto code_r0x0001078f0d90;
      }
      lVar3 = unaff_x24 * 0x70;
      __Znwm();
    }
    func_0x000107913cf0(lVar3 + unaff_x22);
    lVar3 = lVar3 + unaff_x22 + 0x70;
    func_0x0001079138bc(0xffffffffffffff90);
    func_0x000107916e4c();
    if (unaff_x20 != 0) {
      func_0x000107914d94();
    }
  }
  else {
    func_0x000107913cf0();
    lVar3 = unaff_x22 + 0x70;
  }
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}



/* Entry: 1078f179c; end: 1078f18fb;  */

void FUN_1078f179c(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  long unaff_x24;
  int unaff_w25;
  undefined1 auStack_c0 [112];
  
  func_0x000107914410();
  func_0x00010791645c();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078f17e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedb8e6)[extraout_x8] * 4 + 0x1078f17e4))(1);
    return;
  }
  func_0x000107914f98();
  func_0x0001078f1558();
  func_0x000107917118();
  lVar3 = unaff_x19 + 0x150;
  do {
    if (lVar3 == unaff_x21) {
      return;
    }
    func_0x000107914d4c(*unaff_x20);
    func_0x000107915320();
    func_0x0001078f1458();
    if ((int)param_1 != 0) {
      func_0x000107913ce4(auStack_c0);
      lVar4 = unaff_x24;
      do {
        lVar1 = unaff_x19 + lVar4;
        func_0x000107914a98(lVar1 + 0x150,lVar1 + 0xe0);
        param_1 = unaff_x19;
        if (lVar4 == -0xe0) goto LAB_1078f18b8;
        func_0x000107914d4c(*unaff_x20);
        uVar2 = 0;
        func_0x0001078f1458(auStack_c0,lVar1 + 0x70);
        lVar4 = lVar4 + -0x70;
      } while ((uVar2 & 1) != 0);
      param_1 = unaff_x19 + lVar4 + 0x150;
LAB_1078f18b8:
      func_0x000107914a98();
      unaff_w25 = unaff_w25 + 1;
      if (unaff_w25 == 8) {
        func_0x0001079171c8(lVar3 + 0x70);
        return;
      }
    }
    lVar3 = lVar3 + 0x70;
    unaff_x24 = unaff_x24 + 0x70;
  } while( true );
}



/* Entry: 1078f1c5c; end: 1078f1cab;  */

void FUN_1078f1c5c(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = lVar2 + 1;
  *(long *)(param_1 + 0x18) = lVar1;
  if ((lVar2 < -1) || (*(long *)(param_1 + 0x10) <= lVar1)) {
    while (lVar1 < 0) {
      lVar1 = *(long *)(param_1 + 0x10) + lVar1;
      *(long *)(param_1 + 0x18) = lVar1;
    }
    func_0x0001079188b0();
    lVar1 = extraout_x8;
  }
  else {
    lVar1 = *(long *)(param_1 + 8) + 0x28;
  }
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1078f24b8; end: 1078f2517;  */

void FUN_1078f24b8(ulong *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar1;
  long unaff_x21;
  
  func_0x000107913cd4();
  uVar1 = *param_1;
  func_0x0001079180ec(*(undefined8 *)(unaff_x21 + 8));
  if ((!(bool)in_ZR) || (func_0x0001078f31e4(), (uVar1 & 1) == 0)) {
    while( true ) {
      func_0x000107914e28();
      func_0x0001078e96d4();
      func_0x0001079180e0(*(undefined8 *)(unaff_x21 + 8));
      if ((!(bool)in_CY) || (func_0x0001079166a0(), (int)uVar1 == 0)) break;
      func_0x000107916114();
    }
  }
  return;
}



/* Entry: 1078f3570; end: 1078f3637;  */

void FUN_1078f3570(int param_1)

{
  int iVar1;
  int iVar2;
  
  func_0x000107915938();
  iVar1 = param_1;
  func_0x000107913aec();
  func_0x0001078e9d94();
  if (param_1 == 0 && iVar1 == 0) {
    func_0x000107913c44();
    func_0x000107915480();
    func_0x000107913aec();
    func_0x0001078f1930();
  }
  else {
    iVar2 = iVar1;
    if (param_1 == 0) {
      func_0x000107913c44();
      func_0x000107915480();
      if (iVar2 == -1) {
        return;
      }
    }
    if (iVar1 == 0) {
      func_0x000107913aec();
      func_0x0001078f1930();
      if (iVar2 == -1) {
        return;
      }
    }
    if ((param_1 == iVar1) && (func_0x000107914cd0(), iVar2 != 0)) {
      func_0x000107915b40();
    }
  }
  return;
}



/* Entry: 1078f41e0; end: 1078f425b;  */

/* WARNING: Possible PIC construction at 0x0001078f4254: Changing call to branch */

long FUN_1078f41e0(long param_1,long param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined1 in_CY;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  long lVar2;
  long extraout_x10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x30;
  
  func_0x000107917a38();
  func_0x000107914d70();
  func_0x000107918318();
  if (!(bool)in_CY) {
    func_0x000107914ebc();
LAB_1078f4248:
    unaff_x19[1] = unaff_x24;
    return param_1;
  }
  func_0x0001079157d8();
  if (extraout_x10 == 0) {
    func_0x000107914bbc();
    unaff_x24 = extraout_x8;
    if ((bool)in_CY) {
      unaff_x24 = extraout_x9;
    }
    if (unaff_x24 >> 0x3b == 0) {
      func_0x000107917dec();
      lVar2 = param_1 + unaff_x24 * 0x20;
      func_0x000107914ebc(param_1 + unaff_x22);
      func_0x000107913970();
      *unaff_x19 = extraout_x8_00 + unaff_x23 * -0x20;
      unaff_x19[1] = unaff_x24;
      unaff_x19[2] = lVar2;
      if (unaff_x20 != 0) {
        func_0x000107914d94();
      }
      goto LAB_1078f4248;
    }
    func_0x000104bd35f4();
  }
  func_0x000107913ad0();
  piVar1 = (int *)(param_1 + 0x2c);
  lVar2 = (param_2 - param_1) / 0x70;
  while( true ) {
    if (lVar2 == 0) {
      return -1;
    }
    if (((*(long *)(piVar1 + -3) == unaff_x30) && (piVar1[-1] == param_4)) && (*piVar1 == 1)) break;
    piVar1 = piVar1 + 0x1c;
    lVar2 = lVar2 + -1;
  }
  return *(long *)(piVar1 + -7);
}



/* Entry: 1078f44b8; end: 1078f44c3;  */

long * FUN_1078f44b8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x000107913ad0();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x0001078f4510();
    lVar1 = param_2;
    param_2 = lVar2;
  }
  lVar2 = lVar1 + param_3 * 0x18;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1078f484c; end: 1078f48b7;  */

int FUN_1078f484c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined1 uVar5;
  int extraout_w8;
  int extraout_w9;
  
  func_0x000107916af4();
  do {
    uVar1 = param_1 + 0x10;
    uVar5 = uVar1 == param_2;
    if ((bool)uVar5) break;
    func_0x000107915908();
    func_0x0001078f48b8();
    uVar4 = param_1 & 1;
    param_1 = uVar1;
  } while (uVar4 != 0);
  func_0x0001079184b8();
  iVar2 = -extraout_w9;
  if ((bool)uVar5) {
    iVar2 = extraout_w9;
  }
  iVar3 = 0;
  if (extraout_w8 == 0) {
    iVar3 = iVar2;
  }
  return iVar3;
}



/* Entry: 1078f4c14; end: 1078f4c3f;  */

double FUN_1078f4c14(double param_1,double *param_2,double *param_3)

{
  double *extraout_x8;
  double *pdVar1;
  double dVar2;
  
  func_0x000107914b0c();
  if (extraout_x8 <= param_2) {
    func_0x000104bd35f4();
    dVar2 = 0.0;
    if (0x3f < (ulong)((long)param_3 - (long)param_2)) {
      while (pdVar1 = param_2 + 2, pdVar1 != param_3) {
        dVar2 = dVar2 + (param_2[1] - param_2[3]) * (*param_2 + *pdVar1);
        param_2 = pdVar1;
      }
      dVar2 = dVar2 * 0.5;
    }
    return dVar2;
  }
  func_0x000107915538();
  return param_1;
}



/* Entry: 1078f4ea8; end: 1078f503b;  */

void FUN_1078f4ea8(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 in_NG;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar4 = param_1;
  func_0x00010791745c();
  plVar11 = param_2;
  if (!(bool)in_NG) {
    plVar11 = param_3;
    param_3 = param_2;
  }
  if ((*(byte *)(puVar4 + 5) & 1) == 0) {
    func_0x000107917b54(param_3[3]);
    if ((int)puVar4 == 0) {
      return;
    }
    func_0x000107917b4c(plVar11[3]);
    if ((int)puVar4 == 0) {
      return;
    }
  }
  func_0x000107917d00();
  iVar3 = (int)param_3 + 0x28;
  func_0x000107915908();
  func_0x0001078edf30();
  if (iVar3 == 0) {
    return;
  }
  lVar9 = *plVar11;
  if (lVar9 == 2) {
    lVar9 = *(long *)param_1[2];
    plVar11 = (long *)(lVar9 + plVar11[1] * 0x18);
    lVar10 = *param_3;
    if (lVar10 == 2) {
      puVar13 = (undefined8 *)(lVar9 + param_3[1] * 0x18);
      uVar6 = *puVar13;
      func_0x000107915908(uVar6,puVar13[1]);
      iVar3 = (int)uVar6;
      func_0x0001078f4838();
      if (iVar3 == 0) {
        puVar1 = (undefined8 *)*plVar11;
        puVar2 = (undefined8 *)plVar11[1];
        if (puVar1 == puVar2) goto LAB_1078f4fe4;
        do {
          puVar12 = puVar1 + 2;
          if (puVar12 == puVar2) goto LAB_1078f4fe4;
          uVar6 = *puVar13;
          func_0x0001078f4838(*puVar12,puVar1[3],uVar6,puVar13[1]);
          iVar3 = (int)uVar6;
          puVar1 = puVar12;
        } while (iVar3 == 0);
      }
    }
    else {
      if ((lVar10 != 1) && (lVar10 != 0)) {
        return;
      }
      func_0x000107915908();
      func_0x0001078f5974();
      iVar3 = (int)plVar11;
    }
    if (iVar3 < 0) {
      return;
    }
  }
  else {
    if (lVar9 == 1) {
      lVar8 = *(long *)param_1[1];
      uVar5 = lVar8 + plVar11[1] * 0x20;
      lVar9 = *param_3;
      lVar10 = param_3[1];
      lVar7 = *(long *)*param_1;
    }
    else {
      if (lVar9 != 0) {
        return;
      }
      lVar7 = *(long *)*param_1;
      uVar5 = lVar7 + plVar11[1] * 0x20;
      lVar9 = *param_3;
      lVar10 = param_3[1];
      lVar8 = *(long *)param_1[1];
    }
    func_0x000107915908(uVar5,lVar9,lVar10,lVar7,lVar8,*(long *)param_1[2]);
    func_0x0001078f580c();
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
LAB_1078f4fe4:
  if ((puVar4[5] == -1) || ((double)param_3[4] < (double)puVar4[8])) {
    func_0x000107917278();
  }
  return;
}



/* Entry: 1078f52bc; end: 1078f531b;  */

void FUN_1078f52bc(double param_1,undefined8 *param_2,long *param_3,ulong param_4,undefined8 param_5
                  )

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 auStack_f0 [112];
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_4 == 99;
  if ((param_4 < 100) &&
     (uVar1 = param_3[1] - *param_3 == 0x79, 0x78 < (ulong)(param_3[1] - *param_3))) {
    func_0x00010791551c(param_2,param_3,param_4 + 1);
    func_0x0001079144cc();
    dStack_80 = param_1 * 0.5;
    uStack_78 = param_2[1];
    uStack_60 = *param_2;
    uStack_68 = param_2[3];
    uStack_70 = param_2[2];
    uStack_58 = uStack_78;
    dStack_50 = dStack_80;
    uStack_48 = uStack_68;
    func_0x000107913364();
    func_0x00010791463c(&uStack_60,&dStack_80);
    func_0x0001078f50b8();
    func_0x000107915ec8();
    if (!(bool)uVar1) {
      func_0x000107913d34();
      func_0x000107916258();
      func_0x0001078f523c();
      func_0x0001079183e8();
      func_0x000107915350();
      func_0x000107914d88();
      func_0x0001078f5110();
      func_0x0001079149c4(auStack_f0);
      func_0x0001078f5208();
      func_0x000107915350();
      func_0x000107913cc4();
      func_0x0001078f5208();
    }
    func_0x000107918208();
    func_0x000107914d88();
    func_0x0001078f5110();
    func_0x000107918854();
    func_0x000107914d88();
    func_0x0001078f5110();
    func_0x000107915b60();
    func_0x0001079159d0();
    func_0x000107915b7c();
    return;
  }
  func_0x000107915d78(param_3,param_5);
  if (!(bool)uVar1) {
    func_0x000107914c78();
    lVar2 = extraout_x8;
    while (unaff_x21 != lVar2) {
      func_0x000107915d6c();
      lVar2 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar2) {
        func_0x00010791460c();
        FUN_1078f4ea8();
        lVar2 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 1078f57e8; end: 1078f580b;  */

void FUN_1078f57e8(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
  }
  return;
}



/* Entry: 1078f5ba8; end: 1078f5cb7;  */

void FUN_1078f5ba8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = 0;
  param_2[1] = *param_2;
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar2 = lVar1 - lVar4;
  for (; lVar4 != lVar1 && uVar3 < (ulong)(lVar2 >> 4); lVar4 = lVar4 + 0x10) {
    func_0x000107915a64();
    func_0x0001078e96d4();
    uVar3 = uVar3 + 1;
  }
  return;
}



/* Entry: 1078f5f70; end: 1078f5fc7;  */

void FUN_1078f5f70(long param_1)

{
  undefined8 uVar1;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000107914c78();
  func_0x000107916150();
  lVar2 = extraout_x9;
  while (lVar2 != unaff_x21) {
    func_0x0001079161c4();
    func_0x0001079138d4();
    func_0x000107915d84();
    lVar2 = extraout_x9_00;
  }
  for (; param_1 != unaff_x21; param_1 = param_1 + 0x30) {
    func_0x0001078e6404();
  }
  *(undefined8 *)(unaff_x19 + 8) = unaff_x22;
  uVar1 = *unaff_x20;
  *unaff_x20 = unaff_x22;
  unaff_x20[1] = uVar1;
  func_0x00010791351c();
  return;
}



/* Entry: 1078f638c; end: 1078f63ff;  */

undefined8 FUN_1078f638c(long *param_1)

{
  long unaff_x21;
  long lVar1;
  
  func_0x000107913cd4();
  for (lVar1 = *param_1; lVar1 != *(long *)(unaff_x21 + 8); lVar1 = lVar1 + 0x10) {
    func_0x0001079168c0();
    func_0x0001078e96d4();
  }
  return 1;
}



/* Entry: 1078f6640; end: 1078f871b;  */

/* WARNING: Possible PIC construction at 0x0001078f6888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078f68b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078f688c) */
/* WARNING: Removing unreachable block (ram,0x0001078f6890) */
/* WARNING: Removing unreachable block (ram,0x0001078f68ac) */
/* WARNING: Removing unreachable block (ram,0x0001078f68b8) */
/* WARNING: Removing unreachable block (ram,0x0001078f68bc) */
/* WARNING: Type propagation algorithm not settling */

byte *******
FUN_1078f6640(undefined8 param_1,undefined8 param_2,byte *******param_3,byte *******param_4,
             byte *******param_5,undefined8 param_6,byte *******param_7,long *param_8)

{
  byte *pbVar1;
  byte *****pppppbVar2;
  uint uVar3;
  long lVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  code *pcVar7;
  undefined1 in_ZR;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  byte ******ppppppbVar13;
  byte *******pppppppbVar14;
  undefined4 extraout_w8;
  undefined4 uVar15;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  byte ******extraout_x8_02;
  byte ******extraout_x8_03;
  undefined8 *extraout_x8_04;
  long lVar16;
  undefined8 extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  long extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  long extraout_x8_13;
  ulong extraout_x8_14;
  long extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x8_17;
  long extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  ulong extraout_x9_06;
  long extraout_x9_07;
  long *plVar17;
  ulong extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  ulong extraout_x10;
  ulong uVar18;
  byte *******pppppppbVar19;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x12;
  long extraout_x13;
  byte *pbVar20;
  byte ***pppbVar21;
  long lVar22;
  byte ******ppppppbVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbVar25;
  long lVar26;
  byte *******pppppppbVar27;
  byte **ppbVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  byte *****pppppbVar32;
  byte ***pppbVar33;
  long ****unaff_x25;
  long ****pppplVar34;
  long lVar35;
  byte *******pppppppbVar36;
  byte *******unaff_x26;
  byte *******pppppppbVar37;
  byte *******pppppppbVar38;
  undefined8 *puVar39;
  long lVar40;
  byte *******pppppppbVar41;
  byte *******pppppppbVar42;
  byte *******in_register_00005028;
  byte ******ppppppbVar43;
  byte *******pppppppbVar44;
  byte *******pppppppbVar45;
  byte *******pppppppbVar46;
  byte *******pppppppbStack_280;
  byte ******ppppppbStack_208;
  byte *****pppppbStack_200;
  byte *******pppppppbStack_1e0;
  byte *******pppppppbStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  byte ******ppppppbStack_1b8;
  undefined1 uStack_1a1;
  byte ******ppppppbStack_1a0;
  byte *****pppppbStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  ulong uStack_178;
  long ****pppplStack_170;
  long ****pppplStack_168;
  undefined8 uStack_160;
  byte *******pppppppbStack_158;
  byte *******pppppppbStack_150;
  long lStack_148;
  byte *******pppppppbStack_140;
  byte *******pppppppbStack_138;
  undefined8 uStack_130;
  byte ******ppppppbStack_120;
  undefined8 uStack_118;
  byte *******apppppppbStack_110 [2];
  byte *******apppppppbStack_100 [2];
  undefined8 uStack_f0;
  byte *******pppppppbStack_e8;
  byte *******pppppppbStack_e0;
  byte *******pppppppbStack_d8;
  byte *******pppppppbStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte *******pppppppbStack_b0;
  byte ******ppppppbStack_a8;
  long *****ppppplStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  long *plStack_80;
  byte *******pppppppbStack_70;
  byte *******pppppppbStack_68;
  byte *******pppppppbStack_60;
  byte *******pppppppbStack_58;
  byte *******pppppppbStack_50;
  byte *******pppppppbStack_48;
  long lStack_40;
  byte *******pppppppbStack_38;
  byte ******ppppppbStack_30;
  byte ******ppppppbStack_28;
  byte *******pppppppbStack_20;
  long *plStack_18;
  undefined8 uStack_10;
  
  func_0x000107915964();
  pppppppbVar36 = param_3;
  func_0x000107913ca4();
  ppppppbVar13 = *pppppppbVar36;
  uStack_10 = extraout_x8;
  func_0x0001078f6454(ppppppbVar13,param_3[1]);
  pppppppbVar36 = (byte *******)*param_4;
  pppppppbVar24 = (byte *******)param_4[1];
  func_0x0001078f6454();
  if (((uint)ppppppbVar13 == 0) || (((ulong)pppppppbVar36 & 1) == 0)) {
    in_ZR = ((uint)ppppppbVar13 | (uint)pppppppbVar36) == 1;
    if (!(bool)in_ZR) {
      pppppppbVar14 = (byte *******)0x0;
      pppppppbVar25 = (byte *******)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      lStack_180 = 0;
      pppppbStack_198 = (byte *****)0x0;
      ppppppbStack_1a0 = (byte ******)0x0;
      pppppppbStack_158 = (byte *******)0x0;
      pppppppbStack_150 = (byte *******)0x0;
      lStack_148 = 0;
      pppplStack_170 = (long ****)0x0;
      pppplStack_168 = (long ****)0x0;
      uStack_160 = 0;
      func_0x0001079177b0();
      func_0x000107917c04();
      pppppppbVar24 = param_5;
      func_0x0001078f8d94(param_4,param_5,&pppplStack_170,1);
      pppppppbVar37 = pppppppbStack_150;
      pppppppbVar36 = pppppppbStack_158;
      uStack_f0 = (byte *******)((ulong)uStack_f0._4_4_ << 0x20);
      pppppppbStack_e0 = (byte *******)CONCAT44(pppppppbStack_e0._4_4_,1);
      uStack_c0 = (byte ******)&ppppppbStack_1a0;
      uStack_c8 = SUB84(param_5,0);
      uStack_c4 = (undefined4)((ulong)param_5 >> 0x20);
      uStack_b8 = &uStack_1a1;
      pppppppbStack_e8 = param_3;
      pppppppbStack_d8 = param_4;
      pppppppbStack_d0 = param_7;
      func_0x0001079162c0((long)pppppppbStack_150 - (long)pppppppbStack_158);
      pppplVar6 = pppplStack_168;
      pppplVar5 = pppplStack_170;
      if (extraout_x8_00 < 0x11) {
LAB_1078f6854:
        for (; pppplVar34 = pppplVar5, pppppppbVar36 != pppppppbVar37;
            pppppppbVar36 = pppppppbVar36 + 0xf) {
          for (; pppplVar34 != pppplVar6; pppplVar34 = pppplVar34 + 0xf) {
            pppppppbVar24 = pppppppbVar36;
            func_0x0001078f93d0(&uStack_f0,pppppppbVar36,pppplVar34);
          }
          unaff_x25 = pppplVar34;
        }
      }
      else {
        func_0x0001079162c0((long)pppplStack_168 - (long)pppplStack_170);
        if (extraout_x8_01 < 0x11) goto LAB_1078f6854;
        pppppppbStack_1e0 = (byte *******)0x0;
        pppppppbStack_1d8 = (byte *******)0x0;
        lStack_1d0 = 0;
        pppppppbStack_140 = (byte *******)0x0;
        pppppppbStack_138 = (byte *******)0x0;
        uStack_130 = 0;
        func_0x000107915854();
        pppppppbStack_70 = pppppppbVar14;
        pppppppbStack_68 = pppppppbVar25;
        pppppppbStack_60 = (byte *******)param_2;
        pppppppbStack_58 = in_register_00005028;
        func_0x0001078f91b8(&pppppppbStack_158,&pppppppbStack_70,&pppppppbStack_1e0);
        func_0x0001078f91b8(&pppplStack_170,&pppppppbStack_70,&pppppppbStack_140);
        pppppppbVar24 = (byte *******)&pppppppbStack_1e0;
        FUN_1078f920c(&pppppppbStack_70,pppppppbVar24,&pppppppbStack_140,0,&uStack_f0);
        func_0x0001078ebb60(&pppppppbStack_140);
        func_0x0001078ebb60(&pppppppbStack_1e0);
      }
      func_0x0001078f6164(&pppplStack_170);
      pppppppbVar36 = (byte *******)&pppppppbStack_158;
      func_0x0001078f6164();
      if (uStack_178 == 0) {
        pppppppbStack_150 = (byte *******)0x0;
        lStack_148 = 0;
        uStack_160 = 0;
        pppplStack_170 = (long ****)&pppplStack_168;
        pppplStack_168 = (long ****)0x0;
        pppppppbStack_e8 = (byte *******)0x0;
        pppppppbStack_e0 = (byte *******)0x0;
        pppppppbStack_1e0 = (byte *******)0x0;
        pppppppbStack_158 = (byte *******)&pppppppbStack_150;
        uStack_f0 = (byte *******)&pppppppbStack_e8;
        func_0x000107915ad4();
        func_0x000107916c64();
        func_0x000107915acc();
        pppppppbStack_280 = pppppppbVar36;
        while (unaff_x26 != pppppppbVar36) {
          if (*(int *)(unaff_x26 + 2) == 7) {
            for (lVar26 = 0x38; lVar26 != 0x188; lVar26 = lVar26 + 0xa8) {
              pppppppbStack_68 = *(byte ********)((byte *)((long)unaff_x26 + lVar26) + 8);
              pppppppbStack_70 = *(byte ********)((long)unaff_x26 + lVar26);
              pppppppbStack_280 = (byte *******)&uStack_f0;
              func_0x0001078eefe8(pppppppbStack_280,&pppppppbStack_70);
              pppppppbVar24 = (byte *******)&pppppppbStack_1e0;
              func_0x00010737fce0();
            }
          }
          func_0x0001079161a0();
          unaff_x26 = unaff_x26 + 0x2f;
          pppppppbStack_1e0 = (byte *******)extraout_x8_02;
          if ((long)unaff_x26 - (long)*unaff_x25 == 0x1780) {
            unaff_x25 = unaff_x25 + 1;
            unaff_x26 = (byte *******)*unaff_x25;
          }
        }
        func_0x000107915ad4();
        pppppppbVar37 = pppppppbStack_280;
        pppppppbVar36 = pppppppbVar24;
        func_0x000107915acc();
        while (pppppppbVar24 != pppppppbVar37) {
          if (*(int *)(pppppppbVar24 + 2) != 2 && *(int *)(pppppppbVar24 + 2) != 7) {
            for (lVar26 = 0x28; lVar26 != 0x178; lVar26 = lVar26 + 0xa8) {
              pppppppbVar36 = *(byte ********)((long)pppppppbVar24 + lVar26 + 0x10);
              pppppppbVar14 = (byte *******)&uStack_f0;
              func_0x0001078ef0b4(pppppppbVar14,pppppppbVar36,
                                  *(undefined8 *)((long)pppppppbVar24 + lVar26 + 0x18));
              bVar9 = &pppppppbStack_e8 == (byte ********)pppppppbVar14;
              if (!bVar9) {
                ppppppbVar13 = pppppppbVar14[6];
                while( true ) {
                  func_0x00010791835c(ppppppbVar13);
                  if (bVar9) break;
                  lVar31 = 0;
                  func_0x0001079184a4(*extraout_x8_04);
                  lVar16 = extraout_x9 + (extraout_x10 & 0xffffffff) * 0x178;
                  for (lVar40 = extraout_x11; lVar40 != 2; lVar40 = lVar40 + 1) {
                    pppppppbVar25 = pppppppbVar24 + lVar40 * 0x15 + 5;
                    ppppppbVar13 = pppppppbVar25[2];
                    ppppppbVar23 = pppppppbVar25[3];
                    lVar35 = 2;
                    pppppppbVar14 = (byte *******)(lVar16 + 0x30);
                    pppppppbVar44 = (byte *******)(lVar16 + 0xd8);
                    do {
                      if (ppppppbVar23 == pppppppbVar14[2] && ppppppbVar13 == pppppppbVar14[1]) {
                        iVar12 = (int)pppppppbVar25 + 8;
                        pppppppbVar36 = pppppppbVar14;
                        func_0x000107917c0c();
                        if (iVar12 != 0) {
                          pppppppbVar38 = pppppppbVar24 + lVar40 * -0x15 + 0x1b;
                          pppppppbVar36 = pppppppbVar44;
                          func_0x000107917c0c();
                          lVar31 = lVar31 + ((ulong)pppppppbVar38 & 0xffffffff);
                        }
                      }
                      pppppppbVar44 = pppppppbVar44 + -0x15;
                      pppppppbVar14 = pppppppbVar14 + 0x15;
                      lVar35 = lVar35 + -1;
                    } while (lVar35 != 0);
                    unaff_x25 = (long ****)0x0;
                  }
                  bVar9 = lVar31 == 2;
                  if (bVar9) {
                    *(undefined1 *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 0x178 + 0x20) = 1;
                  }
                  ppppppbVar13 = (byte ******)(extraout_x8_04 + 1);
                }
              }
            }
          }
          func_0x0001079161a0();
          pppppppbStack_1e0 = (byte *******)extraout_x8_03;
          pppppppbVar24 = pppppppbVar24 + 0x2f;
          if ((long)pppppppbVar24 - (long)*pppppppbStack_280 == 0x1780) {
            pppppppbStack_280 = pppppppbStack_280 + 1;
            pppppppbVar24 = (byte *******)*pppppppbStack_280;
          }
        }
        pppppppbVar14 = pppppppbStack_e8;
        func_0x0001078ef198();
        pppppppbStack_1e0 = (byte *******)0x0;
        pppppppbStack_1d8 = (byte *******)0x0;
        lStack_1d0 = 0;
        func_0x000107915ad4();
        func_0x000107916c64();
        func_0x000107915acc();
        pppppppbVar24 = (byte *******)0x0;
        pppppppbVar37 = param_3;
        do {
          pppppppbVar25 = pppppppbVar37 + -0x2f0;
          do {
            pppppppbVar38 = pppppppbStack_1d8;
            pppppppbVar44 = pppppppbStack_1e0;
            if (pppppppbVar37 == pppppppbVar14) {
              if (pppppppbStack_1e0 != pppppppbStack_1d8) {
                func_0x00010791752c(((long)pppppppbStack_1d8 - (long)pppppppbStack_1e0) / 0x18);
                pppppppbVar36 = pppppppbVar38;
                func_0x0001078fb540(pppppppbVar44);
              }
              pppppppbVar24 = (byte *******)0x0;
              pppppppbVar37 = (byte *******)0x0;
              pppppppbStack_140 = (byte *******)0x0;
              pppppppbStack_138 = (byte *******)0x0;
              uStack_130 = 0;
              goto LAB_1078f6c08;
            }
            if (((ulong)pppppppbVar37[4] & 1) == 0) {
              func_0x0001078e9abc(&pppppppbStack_70,pppppppbVar37,param_5);
              pppppppbStack_e0 = pppppppbStack_68;
              pppppppbStack_e8 = pppppppbStack_70;
              pppppppbVar36 = (byte *******)&uStack_f0;
              uStack_f0 = pppppppbVar24;
              FUN_1078ef3f4(&pppppppbStack_1e0);
            }
            pppppppbVar24 = (byte *******)((long)pppppppbVar24 + 1);
            pppppppbVar37 = pppppppbVar37 + 0x2f;
            pppppppbVar25 = pppppppbVar25 + 0x2f;
          } while ((byte *******)*unaff_x25 != pppppppbVar25);
          unaff_x25 = unaff_x25 + 1;
          pppppppbVar37 = (byte *******)*unaff_x25;
        } while( true );
      }
      ppppppbVar13 = *param_3;
      pppppppbVar24 = (byte *******)param_3[1];
      goto code_r0x0001078f871c;
    }
    pppppppbStack_70 = (byte *******)&pppppppbStack_68;
    pppppppbStack_68 = (byte *******)0x0;
    pppppppbStack_60 = (byte *******)0x0;
    ppppppbStack_1a0 = &pppppbStack_198;
    pppppbStack_198 = (byte *****)0x0;
    uStack_190 = 0;
    func_0x000107915248();
    func_0x0001078f8750();
    pppppppbStack_d8 = (byte *******)0x0;
    pppppppbStack_e0 = (byte *******)0x0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    pppppppbStack_d0 = (byte *******)0x0;
    pppppppbStack_e8 = (byte *******)0x0;
    uStack_f0 = (byte *******)0x0;
    func_0x000107915248();
    func_0x0001078f8904();
    func_0x0001078f8bf8(&ppppppbStack_1a0,param_3,param_4,&uStack_f0,param_6);
    func_0x0001079014ec(&uStack_f0);
    func_0x0001078f605c(pppppbStack_198);
    pppppppbVar36 = pppppppbStack_68;
    func_0x0001078f4774(pppppppbStack_68);
    pppppppbVar24 = param_3;
  }
  goto LAB_1078f8590;
LAB_1078f6c08:
  pppppppbVar25 = pppppppbStack_138;
  pppppppbVar14 = pppppppbVar44;
  if (pppppppbVar44 == pppppppbVar38) goto LAB_1078f6d08;
  while (pppppppbVar25 = pppppppbStack_138, pppppppbVar27 = pppppppbVar14 + 3,
        pppppppbVar27 != pppppppbVar38) {
    uVar18 = (long)pppppppbVar44[2] - (long)pppppppbVar14[5];
    if (1 < (long)uVar18) break;
    uVar30 = (long)pppppppbVar44[1] - (long)pppppppbVar14[4];
    uVar29 = -uVar30;
    if (-1 < (long)uVar30) {
      uVar29 = uVar30;
    }
    uVar30 = -uVar18;
    if (-1 < (long)uVar18) {
      uVar30 = uVar18;
    }
    pppppppbVar19 = pppppppbVar37;
    pppppppbVar14 = pppppppbVar27;
    if (uVar29 < 2 && uVar30 < 2) {
      for (; pppppppbVar19 != pppppppbStack_138; pppppppbVar19 = pppppppbVar19 + 6) {
        uVar29 = (long)pppppppbVar19[4] - (long)pppppppbVar44[1];
        uVar18 = -uVar29;
        if (-1 < (long)uVar29) {
          uVar18 = uVar29;
        }
        uVar30 = (long)pppppppbVar19[5] - (long)pppppppbVar44[2];
        uVar29 = -uVar30;
        if (-1 < (long)uVar30) {
          uVar29 = uVar30;
        }
        if (uVar18 < 2 && uVar29 < 2) goto LAB_1078f6cd8;
      }
      pppppppbStack_68 = (byte *******)0x0;
      pppppppbStack_60 = (byte *******)0x0;
      pppppppbStack_58 = (byte *******)0x0;
      pppppppbStack_70 = (byte *******)&pppppppbStack_68;
      func_0x0001078efe34(&uStack_f0,&pppppppbStack_70);
      pppppppbStack_d0 = (byte *******)pppppppbVar44[1];
      uStack_c8 = SUB84(pppppppbVar44[2],0);
      uStack_c4 = (undefined4)((ulong)pppppppbVar44[2] >> 0x20);
      pppppppbVar36 = (byte *******)&uStack_f0;
      FUN_1078efca0(&pppppppbStack_140);
      func_0x000107916738((long)pppppppbVar25 - (long)pppppppbVar37);
      FUN_1078f005c(&pppppppbStack_70);
      pppppppbVar24 = pppppppbStack_140;
LAB_1078f6cd8:
      pppppppbVar37 = pppppppbVar24;
      uStack_f0 = (byte *******)*pppppppbVar44;
      func_0x000107917b1c();
      uStack_f0 = (byte *******)*pppppppbVar27;
      func_0x000107917b1c();
      pppppppbVar24 = pppppppbVar37;
    }
  }
  pppppppbVar44 = pppppppbVar44 + 3;
  goto LAB_1078f6c08;
LAB_1078f6d08:
  pppppppbVar37 = (byte *******)0x1;
  for (pppppppbVar24 = pppppppbStack_140; pppppppbVar24 != pppppppbVar25;
      pppppppbVar24 = pppppppbVar24 + 6) {
    uStack_f0 = pppppppbVar37;
    func_0x0001078ef1d8(&pppppppbStack_158,&uStack_f0);
    pppppppbVar36 = pppppppbVar24;
    func_0x0001078ef25c();
    pppppppbVar37 = (byte *******)((long)pppppppbVar37 + 1);
  }
  func_0x0001078f01c0(&pppppppbStack_140);
  pppppppbVar24 = (byte *******)&pppppppbStack_1e0;
  func_0x0001078f0200();
  lVar26 = lStack_148;
  pppppppbVar14 = pppppppbVar24;
  pppppppbVar37 = pppppppbVar36;
  if (lStack_148 != 0) {
    func_0x000107915ad4();
    pppppppbVar14 = pppppppbVar24;
    pppppppbVar37 = pppppppbVar36;
    func_0x000107915acc();
    do {
      pppppppbVar25 = pppppppbVar36 + -0x2f0;
      do {
        uVar10 = 1;
        pppppppbVar27 = pppppppbStack_158;
        if (pppppppbVar36 == pppppppbVar14) goto LAB_1078f6da4;
        pppppppbVar36[3] = (byte ******)0xffffffffffffffff;
        pppppppbVar25 = pppppppbVar25 + 0x2f;
        pppppppbVar36 = pppppppbVar36 + 0x2f;
      } while ((byte *******)*pppppppbVar24 != pppppppbVar25);
      pppppppbVar24 = pppppppbVar24 + 1;
      pppppppbVar36 = (byte *******)*pppppppbVar24;
    } while( true );
  }
  goto LAB_1078f6e80;
LAB_1078f6da4:
  while( true ) {
    func_0x0001079182c4();
    pppppppbVar44 = pppppppbStack_158;
    if ((bool)uVar10) break;
    pppppppbVar14 = (byte *******)pppppppbVar27[5];
    while (uVar10 = pppppppbVar14 == pppppppbVar27 + 6, !(bool)uVar10) {
      func_0x00010791879c(pppppppbVar27[4]);
      *(undefined8 *)(extraout_x10_00 + (extraout_x9_00 & 0xffffffff) * 0x178 + 0x18) =
           extraout_x8_05;
      func_0x00010002c7d4();
    }
    func_0x000107915240();
    pppppppbVar27 = pppppppbVar14;
  }
  while ((byte ********)pppppppbVar44 != &pppppppbStack_150) {
    pppppppbVar14 = (byte *******)pppppppbVar44[5];
    while( true ) {
      if (pppppppbVar14 == pppppppbVar44 + 6) goto LAB_1078f6e74;
      func_0x000107913948(pppppppbVar14[4]);
      lVar31 = extraout_x9_01 + (extraout_x8_06 & 0xffffffff) * 0x178;
      if ((*(int *)(lVar31 + 0x28) == 1) && (*(int *)(lVar31 + 0xd0) == 1)) break;
      func_0x00010002c7d4();
    }
    pppppppbVar14 = (byte *******)pppppppbVar44[5];
    while (pppppppbVar14 != pppppppbVar44 + 6) {
      func_0x000107913948(pppppppbVar14[4]);
      *(undefined1 *)(extraout_x9_02 + (extraout_x8_07 & 0xffffffff) * 0x178 + 0x21) = 1;
      func_0x00010002c7d4();
    }
LAB_1078f6e74:
    func_0x000107915b68();
    pppppppbVar44 = pppppppbVar14;
  }
LAB_1078f6e80:
  func_0x000107915ad4();
  func_0x000107916c64();
  bVar9 = false;
  do {
    pppppppbVar36 = pppppppbVar38 + -0x2f0;
    do {
      func_0x000107915acc();
      if (pppppppbVar38 == pppppppbVar14) {
        func_0x000107915ad4();
        pppppppbVar36 = pppppppbVar37;
        pppppppbVar24 = pppppppbVar14;
        goto LAB_1078f6f7c;
      }
      iVar12 = *(int *)(pppppppbVar38 + 5);
      if (iVar12 == 3) {
        if (*(int *)(pppppppbVar38 + 0x1a) != 3) goto LAB_1078f6ee8;
LAB_1078f6f44:
        *(byte *)(pppppppbVar38 + 4) = 1;
        pppppppbVar38[3] = (byte ******)0xffffffffffffffff;
      }
      else {
        if (iVar12 == 2) {
          if (*(int *)(pppppppbVar38 + 0x1a) != 2) goto LAB_1078f6ee8;
          goto LAB_1078f6f44;
        }
        if ((iVar12 == 0) && (*(int *)(pppppppbVar38 + 0x1a) == 0)) goto LAB_1078f6f44;
LAB_1078f6ee8:
        if ((pppppppbVar38[6] == pppppppbVar38[0x1b]) && ((long)pppppppbVar38[3] < 1)) {
          if ((iVar12 != 1) || (*(int *)(pppppppbVar38 + 0x1a) != 1)) goto LAB_1078f6f44;
        }
        else if ((iVar12 == 4) && (((ulong)pppppppbVar38[4] & 1) == 0)) {
          bVar9 = (bool)(*(int *)(pppppppbVar38 + 0x1a) == 4 | bVar9);
        }
      }
      pppppppbVar36 = pppppppbVar36 + 0x2f;
      pppppppbVar38 = pppppppbVar38 + 0x2f;
    } while ((byte *******)*pppppppbVar44 != pppppppbVar36);
    pppppppbVar44 = pppppppbVar44 + 1;
    pppppppbVar38 = (byte *******)*pppppppbVar44;
  } while( true );
LAB_1078f6f7c:
  pppppppbVar25 = pppppppbVar36 + -0x2f0;
  do {
    func_0x000107915acc();
    if (pppppppbVar36 == pppppppbVar14) {
      pppppppbStack_1d8 = (byte *******)0x0;
      lStack_1d0 = 0;
      ppppppbVar13 = (byte ******)&ppppppbStack_1a0;
      pppppppbStack_1e0 = (byte *******)&pppppppbStack_1d8;
      func_0x0001078fbd94();
      pppppbStack_200 = (byte *****)0x0;
      pppppppbVar36 = pppppppbVar37;
      goto LAB_1078f7010;
    }
    if ((((ulong)pppppppbVar36[4] & 1) == 0) && (pppppppbVar36[6] == pppppppbVar36[0x1b])) {
      pppppppbVar37 = param_4;
      if (pppppppbVar36[6] != (byte ******)0x0) {
        pppppppbVar37 = param_3;
      }
      pppppppbVar14 = pppppppbVar36;
      func_0x0001078fbd04();
      if (0 < (int)pppppppbVar14) {
        *(byte *)(pppppppbVar36 + 4) = 1;
      }
    }
    pppppppbVar36 = pppppppbVar36 + 0x2f;
    pppppppbVar25 = pppppppbVar25 + 0x2f;
  } while ((byte *******)*pppppppbVar24 != pppppppbVar25);
  pppppppbVar24 = pppppppbVar24 + 1;
  pppppppbVar36 = (byte *******)*pppppppbVar24;
  goto LAB_1078f6f7c;
LAB_1078f7010:
  pppppppbVar14 = (byte *******)0x666666666666666;
  pppppppbVar24 = &ppppppbStack_1a0;
  func_0x0001078fbdac();
  if (pppppppbVar36 == pppppppbVar24) goto LAB_1078f71fc;
  if (((ulong)pppppppbVar36[4] & 1) == 0) {
    pppppbVar32 = (byte *****)0x0;
    for (lVar31 = 0x28; lVar31 != 0x178; lVar31 = lVar31 + 0xa8) {
      pppppbVar2 = (byte *****)((long)pppppppbVar36 + lVar31);
      pppppppbStack_e0 = (byte *******)pppppbVar2[3];
      pppppppbStack_e8 = (byte *******)pppppbVar2[2];
      uStack_f0 = (byte *******)pppppbVar2[1];
      pppppppbVar37 = pppppppbStack_1d8;
      pppppppbVar14 = (byte *******)&pppppppbStack_1d8;
      while (pppppppbVar44 = pppppppbVar24, pppppppbVar25 = pppppppbVar14,
            pppppppbVar37 != (byte *******)0x0) {
        while( true ) {
          pppppppbVar14 = pppppppbVar37;
          pppppppbVar24 = (byte *******)&uStack_f0;
          func_0x0001079166ec();
          if ((int)pppppppbVar24 != 0) break;
          pppppppbVar24 = pppppppbVar14 + 4;
          pppppppbVar37 = (byte *******)&uStack_f0;
          func_0x0001078ee35c();
          if ((int)pppppppbVar24 == 0) goto LAB_1078f7128;
          pppppppbVar37 = (byte *******)pppppppbVar14[1];
          if ((byte *******)pppppppbVar14[1] == (byte *******)0x0) {
            pppppppbVar25 = pppppppbVar14 + 1;
            pppppppbVar44 = pppppppbVar24;
            goto LAB_1078f70d8;
          }
        }
        pppppppbVar37 = (byte *******)*pppppppbVar14;
      }
LAB_1078f70d8:
      func_0x000107917ca4();
      pppppppbVar24 = uStack_f0;
      pppppppbVar44[5] = (byte ******)pppppppbStack_e8;
      pppppppbVar44[4] = (byte ******)pppppppbVar24;
      pppppppbVar44[6] = (byte ******)pppppppbStack_e0;
      pppppppbVar44[7] = (byte ******)0x0;
      pppppppbVar44[8] = (byte ******)0x0;
      pppppppbVar44[9] = (byte ******)0x0;
      *pppppppbVar44 = (byte ******)0x0;
      pppppppbVar44[1] = (byte ******)0x0;
      pppppppbVar44[2] = (byte ******)pppppppbVar14;
      *pppppppbVar25 = (byte ******)pppppppbVar44;
      if ((byte *******)*pppppppbStack_1e0 != (byte *******)0x0) {
        pppppppbStack_1e0 = (byte *******)*pppppppbStack_1e0;
      }
      pppppppbVar24 = pppppppbStack_1d8;
      pppppppbVar37 = pppppppbVar44;
      func_0x00010002c5b0();
      lStack_1d0 = lStack_1d0 + 1;
      pppppppbVar14 = pppppppbVar44;
LAB_1078f7128:
      ppppppbVar23 = pppppppbVar14[8];
      if (ppppppbVar23 < pppppppbVar14[9]) {
        *ppppppbVar23 = pppppbStack_200;
        ppppppbVar23[1] = pppppbVar32;
        *(byte *)(ppppppbVar23 + 2) = 0;
        ppppppbVar43 = ppppppbVar23 + 5;
        ppppppbVar23[3] = (byte *****)(pppppppbVar36 + (long)pppppbVar32 * -0x15 + 0x1b);
        ppppppbVar23[4] = pppppbVar2;
      }
      else {
        pppppppbVar25 = (byte *******)pppppppbVar14[7];
        lVar40 = (long)ppppppbVar23 - (long)pppppppbVar25;
        uVar18 = lVar40 / 0x28 + 1;
        bVar8 = 0x666666666666665 < uVar18;
        if (0x666666666666666 < uVar18) {
          func_0x0001078fbdc0();
LAB_1078f85b4:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1078f85b8);
          (*pcVar7)();
        }
        func_0x000107916990();
        uVar18 = extraout_x8_08;
        if (bVar8) {
          uVar18 = 0x666666666666666;
        }
        if (0x666666666666666 < uVar18) {
          func_0x000104bd35f4();
          goto LAB_1078f85b4;
        }
        lVar16 = uVar18 * 0x28;
        __Znwm();
        puVar39 = (undefined8 *)(lVar16 + lVar40);
        *puVar39 = pppppbStack_200;
        puVar39[1] = pppppbVar32;
        *(undefined1 *)(puVar39 + 2) = 0;
        puVar39[3] = pppppppbVar36 + (long)pppppbVar32 * -0x15 + 0x1b;
        puVar39[4] = pppppbVar2;
        ppppppbVar43 = (byte ******)(puVar39 + 5);
        pppppppbVar44 = (byte *******)(puVar39 + (lVar40 / -0x28) * 5);
        pppppppbVar24 = pppppppbVar44;
        pppppppbVar37 = pppppppbVar25;
        _memcpy(pppppppbVar44,pppppppbVar25,lVar40);
        pppppppbVar14[7] = (byte ******)pppppppbVar44;
        pppppppbVar14[8] = ppppppbVar43;
        pppppppbVar14[9] = (byte ******)(lVar16 + uVar18 * 0x28);
        if (pppppppbVar25 != (byte *******)0x0) {
          func_0x000107917f64();
        }
      }
      pppppppbVar14[8] = ppppppbVar43;
      pppppbVar32 = (byte *****)((long)pppppbVar32 + 1);
    }
  }
  pppppppbVar36 = pppppppbVar36 + 0x2f;
  if ((long)pppppppbVar36 - (long)*ppppppbVar13 == 0x1780) {
    ppppppbVar13 = ppppppbVar13 + 1;
    pppppppbVar36 = (byte *******)*ppppppbVar13;
  }
  pppppbStack_200 = (byte *****)((long)pppppbStack_200 + 1);
  goto LAB_1078f7010;
LAB_1078f71fc:
  pppppppbVar25 = pppppppbStack_1e0;
  while (uVar10 = (byte ********)pppppppbVar25 == &pppppppbStack_1d8, !(bool)uVar10) {
    pppppppbVar24 = (byte *******)pppppppbVar25[7];
    pppppppbVar37 = (byte *******)pppppppbVar25[8];
    uStack_f0 = &ppppppbStack_1a0;
    pppppppbStack_e8 = param_3;
    pppppppbStack_e0 = param_4;
    pppppppbStack_d8 = param_5;
    pppppppbStack_d0 = (byte *******)&pppppppbStack_70;
    if (pppppppbVar24 != pppppppbVar37) {
      FUN_1078fbdcc(pppppppbVar24,pppppppbVar37,&uStack_f0,
                    LZCOUNT(((long)pppppppbVar37 - (long)pppppppbVar24) / 0x28) << 1 ^ 0x7e,1);
    }
    func_0x000107915240();
    pppppppbVar25 = pppppppbVar24;
  }
  pppppppbVar25 = pppppppbStack_1e0;
  if (lVar26 != 0) {
    pppppppbVar25 = pppppppbStack_158;
    while( true ) {
      func_0x0001079182c4();
      if ((bool)uVar10) break;
      pppppppbStack_70 = (byte *******)0x0;
      pppppppbStack_68 = (byte *******)0x0;
      pppppppbStack_60 = (byte *******)0x0;
      pppppppbStack_48 = (byte *******)0x0;
      lStack_40 = 0;
      uVar10 = false;
      if (pppppppbVar25[7] != (byte ******)0x0) {
        pppppppbVar36 = (byte *******)pppppppbVar25[5];
        pppppppbVar14 = (byte *******)0x1;
        while (pppppppbVar36 != pppppppbVar25 + 6) {
          pppppppbVar37 = (byte *******)pppppppbVar36[4];
          pppppppbVar24 = pppppppbVar36;
          func_0x000107914a5c((byte *)(lStack_180 + (long)pppppppbVar37));
          puVar39 = (undefined8 *)(extraout_x9_03 + (extraout_x8_09 & 0xffffffff) * 0x178);
          if ((int)pppppppbVar14 != 0) {
            uStack_118 = puVar39[1];
            ppppppbStack_120 = (byte ******)*puVar39;
          }
          for (lVar26 = 0; lVar26 != 2; lVar26 = lVar26 + 1) {
            pppppppbVar19 = (byte *******)(puVar39 + lVar26 * 0x15 + 5);
            func_0x000107915248();
            FUN_1078fc784();
            pppppppbVar27 = apppppppbStack_100[0];
            pppppppbVar38 = apppppppbStack_110[0];
            ppppppbVar13 = pppppppbVar19[6];
            ppppppbVar23 = pppppppbVar19[7];
            pppppppbVar44 = (byte *******)apppppppbStack_110;
            if (ppppppbVar13 != ppppppbVar23) {
              pppppppbVar44 = (byte *******)apppppppbStack_100;
            }
            pppppppbVar44 = (byte *******)pppppppbVar44[1];
            iVar12 = -1;
            pppppppbVar45 = pppppppbStack_140;
            pppppppbVar46 = pppppppbStack_138;
            while( true ) {
              pppppppbVar41 = pppppppbVar45;
              pppppppbVar42 = pppppppbVar46;
              func_0x000107914814();
              if ((iVar12 + 1 < -9) || (((ulong)pppppppbVar24 & 1) == 0)) break;
              pppppppbVar24 = pppppppbVar19;
              func_0x0001078fc7f0(pppppppbVar19,iVar12,param_3,param_4);
              iVar12 = iVar12 + -1;
              pppppppbVar45 = pppppppbVar41;
              pppppppbVar46 = pppppppbVar42;
            }
            if (ppppppbVar13 != ppppppbVar23) {
              pppppppbVar38 = pppppppbVar27;
            }
            iVar12 = 1;
            pppppppbStack_140 = pppppppbVar45;
            pppppppbStack_138 = pppppppbVar46;
            while( true ) {
              func_0x0001079183bc();
              func_0x000107914814();
              if ((int)pppppppbVar24 == 0 || 9 < iVar12 - 1U) break;
              pppppppbVar24 = pppppppbVar19;
              func_0x0001078fc7f0(pppppppbVar19,iVar12,param_3,param_4);
              iVar12 = iVar12 + 1;
              pppppppbVar44 = pppppppbVar42;
              pppppppbVar38 = pppppppbVar41;
            }
            pppppppbStack_e8 = pppppppbStack_138;
            uStack_f0 = pppppppbStack_140;
            pppppppbStack_d8 = (byte *******)0xffffffffffffffff;
            pppppppbStack_e0 = (byte *******)0x0;
            uStack_c0._4_4_ = 0;
            uStack_b8._0_4_ = 0;
            uStack_c4 = 0;
            uStack_c0._0_4_ = 0;
            uStack_b8._4_4_ = 0;
            pppppppbStack_d0 = pppppppbVar37;
            uStack_c8 = (int)lVar26;
            func_0x000107916b8c(*(undefined4 *)pppppppbVar19);
            func_0x000107917bd0();
            if ((int)pppppppbVar14 != 0) {
              pppppppbStack_58 = pppppppbStack_140;
              pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 1);
            }
            pppppppbStack_d8 = (byte *******)0xffffffffffffffff;
            pppppppbStack_e0 = (byte *******)0x0;
            uStack_c4 = 1;
            uStack_c0._0_4_ = 0;
            uStack_c0._4_4_ = 0;
            uStack_b8._0_4_ = 0;
            uStack_b8._4_4_ = 0;
            uStack_f0 = pppppppbVar38;
            pppppppbStack_e8 = pppppppbVar44;
            pppppppbStack_d0 = pppppppbVar37;
            uStack_c8 = (int)lVar26;
            func_0x000107916b8c(*(undefined4 *)pppppppbVar19);
            func_0x000107917bd0();
            pppppppbVar14 = (byte *******)0x0;
          }
          func_0x00010002c7d4();
          pppppppbVar14 = (byte *******)0x0;
        }
        pppppppbStack_e8 = &ppppppbStack_120;
        pppppppbVar44 = pppppppbStack_70;
        pppppppbVar37 = pppppppbStack_68;
        uStack_f0 = (byte *******)&pppppppbStack_58;
        pppppppbStack_e0 = (byte *******)&pppppppbStack_38;
        func_0x0001078f0e60(pppppppbStack_70,pppppppbStack_68,&uStack_f0);
        pppppppbVar24 = pppppppbStack_68;
        pppppppbVar36 = pppppppbStack_70;
        ppppppbVar13 = (byte ******)0x0;
        lVar31 = (long)pppppppbStack_68 - (long)pppppppbStack_70;
        pppppppbVar38 = pppppppbStack_70 + 2;
        for (lVar26 = 0; lVar31 / 0x70 != lVar26; lVar26 = lVar26 + 1) {
          if (lVar26 != 0) {
            func_0x000107916794();
            ppppppbVar13 = (byte ******)((long)ppppppbVar13 + ((ulong)pppppppbVar44 & 0xffffffff));
          }
          *pppppppbVar38 = ppppppbVar13;
          pppppppbVar38 = pppppppbVar38 + 0xe;
        }
        uStack_f0 = (byte *******)((ulong)uStack_f0 & 0xffffffffffff0000);
        for (uVar18 = 0; uVar18 < (ulong)(((long)pppppppbVar24 - (long)pppppppbVar36) / 0x70);
            uVar18 = uVar18 + 1) {
          if (((*(int *)((long)pppppppbVar36 + uVar18 * 0x70 + 0x2c) == 0) &&
              (pppppppbVar14 = (byte *******)pppppppbVar36[uVar18 * 0xe + 9],
              pppppppbVar14 < (byte *******)0x2)) &&
             ((*(byte *)((long)&uStack_f0 + (long)pppppppbVar14) & 1) == 0)) {
            ppppppbVar13 = pppppppbVar36[uVar18 * 0xe + 2];
            bVar8 = true;
            uVar29 = uVar18;
            pppppppbVar44 = pppppppbVar36;
            ppppppbStack_208 = ppppppbVar13;
            while( true ) {
              uVar30 = uVar29;
              do {
                uVar29 = 0;
                if (uVar30 + 1 < (ulong)(((long)pppppppbVar24 - (long)pppppppbVar44) / 0x70)) {
                  uVar29 = uVar30 + 1;
                }
                uVar30 = uVar29;
              } while ((byte *******)pppppppbVar44[uVar29 * 0xe + 9] != pppppppbVar14);
              if (pppppppbVar44[uVar29 * 0xe + 2] != ppppppbVar13 && !bVar8) {
                func_0x000107917768();
                func_0x0001078fc810();
                pppppppbVar37 = pppppppbStack_68;
                func_0x0001078fc810(pppppppbStack_70,pppppppbStack_68,(long)ppppppbStack_208 + 1,
                                    ppppppbVar13,2);
              }
              if (uVar29 == uVar18) break;
              iVar12 = *(int *)((long)pppppppbVar44 + uVar29 * 0x70 + 0x2c);
              if (iVar12 == 1) {
                bVar8 = false;
              }
              else if (iVar12 == 0) {
                ppppppbStack_208 = pppppppbVar44[uVar29 * 0xe + 2];
                bVar8 = true;
              }
              ppppppbVar13 = pppppppbVar44[uVar29 * 0xe + 2];
              pppppppbVar44 = pppppppbStack_70;
              pppppppbVar24 = pppppppbStack_68;
            }
            *(undefined1 *)((long)&uStack_f0 + (long)pppppppbVar36[uVar18 * 0xe + 9]) = 1;
            pppppppbVar36 = pppppppbStack_70;
            pppppppbVar24 = pppppppbStack_68;
          }
        }
        func_0x000107918388();
        pbVar1 = (byte *)((long)pppppppbVar36 + 0x2c);
        lVar16 = extraout_x10_01;
        lVar40 = extraout_x11_00;
        lVar31 = extraout_x13;
        pbVar20 = pbVar1;
        for (lVar26 = extraout_x12; uVar10 = extraout_x8_10 == lVar26, !(bool)uVar10;
            lVar26 = lVar26 + 1) {
          lVar22 = *(long *)(pbVar20 + -0x1c);
          lVar35 = lVar22;
          if (lVar22 <= lVar16) {
            lVar35 = lVar16;
          }
          if ((*(int *)pbVar20 == 1) &&
             (*(long *)(pbVar20 + 0xc) != 0 && *(long *)(pbVar20 + 4) == 0)) {
            lVar31 = lVar22 + 1;
          }
          lVar4 = lVar26;
          if (lVar40 != 0 || lVar22 != lVar31) {
            lVar4 = lVar40;
          }
          pbVar20 = pbVar20 + 0x70;
          lVar16 = lVar35;
          lVar40 = lVar4;
        }
        ppppppbVar13 = (byte ******)0x0;
        pppppppbVar44 = (byte *******)0x0;
        pppppppbVar24 = (byte *******)(lVar16 + 1);
        for (lVar26 = extraout_x8_10; lVar26 != 0; lVar26 = lVar26 + -1) {
          lVar31 = 0;
          if (lVar40 + 1 != extraout_x8_10) {
            lVar31 = lVar40 + 1;
          }
          pppppppbVar38 = (byte *******)pppppppbVar36[lVar40 * 0xe + 2];
          uVar10 = pppppppbVar38 == pppppppbVar44;
          if (!(bool)uVar10) {
            if (pppppppbVar38 == pppppppbVar24) {
              ppppppbVar13 = (byte ******)((long)ppppppbVar13 + 1);
              pppppppbVar24 = (byte *******)(lVar16 + 1);
            }
            uVar10 = false;
            pppppppbVar44 = pppppppbVar38;
            if (*(int *)((long)pppppppbVar36 + lVar40 * 0x70 + 0x2c) == 1) {
              pppppppbVar27 = (byte *******)0x0;
              if ((long)pppppppbVar38 < lVar16) {
                pppppppbVar27 = (byte *******)((long)pppppppbVar38 + 1);
              }
              pppppppbVar37 = pppppppbVar24;
              if (pppppppbVar36[lVar40 * 0xe + 7] != (byte ******)0x0) {
                pppppppbVar37 = pppppppbVar27;
              }
              uVar10 = pppppppbVar36[lVar40 * 0xe + 6] == (byte ******)0x0;
              if ((bool)uVar10) {
                pppppppbVar24 = pppppppbVar37;
              }
            }
          }
          pppppppbVar36[lVar40 * 0xe + 3] = ppppppbVar13;
          lVar40 = lVar31;
        }
        ppppppbVar13 = (byte ******)0x0;
        lVar26 = 0;
        for (lVar31 = extraout_x8_10; lVar31 != 0; lVar31 = lVar31 + -1) {
          lVar16 = *(long *)(pbVar1 + -0x1c);
          uVar10 = lVar16 == lVar26;
          lVar40 = lVar26;
          if ((lVar26 < lVar16) && (uVar10 = false, *(int *)pbVar1 == 1)) {
            uVar3 = (uint)(*(long *)(pbVar1 + 4) == 0 && *(long *)(pbVar1 + 0xc) != 0);
            uVar10 = uVar3 == 0;
            lVar40 = lVar16;
            if ((bool)uVar10) {
              lVar40 = lVar26;
            }
            ppppppbVar13 = (byte ******)((long)ppppppbVar13 + (ulong)uVar3);
          }
          pbVar1 = pbVar1 + 0x70;
          lVar26 = lVar40;
        }
        pppppppbVar25[8] = ppppppbVar13;
        pppppppbVar24 = pppppppbVar36 + 6;
        for (lVar26 = extraout_x8_10; lVar26 != 0; lVar26 = lVar26 + -1) {
          pppbVar21 = (byte ***)pppppbStack_198[(ulong)((long)pppppppbVar24[-2] + lStack_180) >> 4];
          uVar18 = (long)pppppppbVar24[-2] + lStack_180 & 0xf;
          lVar31 = (long)*(int *)(pppppppbVar24 + -1);
          if (ppppppbVar13 == (byte ******)0x0) {
            *(undefined1 *)(pppbVar21 + uVar18 * 0x2f + lVar31 * 0x15 + 0x12) = 0;
          }
          uVar10 = false;
          if (*(int *)((long)pppppppbVar24 + -4) == 1) {
            ppppppbVar43 = *pppppppbVar24;
            ppppppbVar23 = *pppppppbVar24;
            pppbVar21[uVar18 * 0x2f + lVar31 * 0x15 + 0x14] = (byte **)pppppppbVar24[1];
            pppbVar21[uVar18 * 0x2f + lVar31 * 0x15 + 0x13] = (byte **)ppppppbVar43;
            ppppppbVar43 = pppppppbVar24[-4];
            pppbVar21[uVar18 * 0x2f + lVar31 * 0x15 + 0x16] = (byte **)pppppppbVar24[-3];
            pppbVar21[uVar18 * 0x2f + lVar31 * 0x15 + 0x15] = (byte **)ppppppbVar43;
            uVar10 = pppbVar21[uVar18 * 0x2f + 6] == pppbVar21[uVar18 * 0x2f + 0x1b] ||
                     ppppppbVar23 == (byte ******)0x0;
            if (pppbVar21[uVar18 * 0x2f + 6] != pppbVar21[uVar18 * 0x2f + 0x1b] &&
                ppppppbVar23 != (byte ******)0x0) {
              *(undefined1 *)(pppbVar21 + uVar18 * 0x2f + lVar31 * 0x15 + 0x12) = 0;
            }
          }
          pppppppbVar24 = pppppppbVar24 + 0xe;
        }
      }
      pppppppbVar24 = (byte *******)&pppppppbStack_70;
      func_0x0001078f1b74();
      func_0x000107915240();
      pppppppbVar25 = pppppppbVar24;
    }
    uVar10 = 1;
    pppppppbVar25 = pppppppbStack_158;
    while( true ) {
      func_0x0001079182c4();
      if ((bool)uVar10) break;
      pppppppbVar14 = pppppppbVar25 + 5;
      pppppppbVar44 = pppppppbVar24;
      pppppppbVar24 = (byte *******)*pppppppbVar14;
      while (pppppppbVar36 = pppppppbVar24, pppppppbVar24 = pppppppbVar44,
            uVar10 = pppppppbVar36 == pppppppbVar25 + 6, !(bool)uVar10) {
        func_0x000107917c58();
        pppppppbVar44 = pppppppbVar24;
        func_0x000107913948(pppppppbVar36[4]);
        func_0x000107918248(extraout_x9_04 + (extraout_x8_11 & 0xffffffff) * 0x178);
        if ((bool)uVar10) {
          pppppppbVar44 = pppppppbVar14;
          func_0x0001078f1b98();
          pppppppbVar37 = pppppppbVar36;
        }
      }
      func_0x000107915240();
      pppppppbVar25 = pppppppbVar24;
    }
    uVar10 = 1;
    pppppppbVar25 = pppppppbVar24;
    pppppppbVar24 = pppppppbStack_158;
    while( true ) {
      pppppppbVar44 = pppppppbVar24;
      pppppppbVar24 = pppppppbVar25;
      func_0x0001079182c4();
      pppppppbVar25 = pppppppbStack_1e0;
      if ((bool)uVar10) break;
      func_0x000107915240();
      uVar10 = pppppppbVar44[7] == (byte ******)0x1;
      pppppppbVar25 = pppppppbVar24;
      pppppppbVar14 = pppppppbVar44;
      if ((bool)uVar10) {
        func_0x000107913948(pppppppbVar44[5][4]);
        *(undefined8 *)(extraout_x9_05 + (extraout_x8_12 & 0xffffffff) * 0x178 + 0x18) =
             0xffffffffffffffff;
        pppppppbVar25 = (byte *******)&pppppppbStack_158;
        pppppppbVar37 = pppppppbVar44;
        func_0x0001078f1c0c();
      }
    }
  }
  while ((byte ********)pppppppbVar25 != &pppppppbStack_1d8) {
    pppppppbVar44 = (byte *******)pppppppbVar25[7];
    pppppppbVar38 = (byte *******)pppppppbVar25[8];
    if ((long)pppppppbVar38 - (long)pppppppbVar44 != 0) {
      pppppppbStack_e0 = (byte *******)(((long)pppppppbVar38 - (long)pppppppbVar44) / 0x28);
      pppppppbStack_d8 = (byte *******)0x0;
      uStack_f0 = pppppppbVar44;
      pppppppbStack_e8 = pppppppbVar44;
      func_0x000107917bf4();
      for (; lVar26 = lStack_180, pppppbVar32 = pppppbStack_198, pppppppbVar44 != pppppppbVar38;
          pppppppbVar44 = pppppppbVar44 + 5) {
        pppppppbVar14 = (byte *******)*pppppppbVar44;
        ppppppbVar13 = pppppppbVar44[1];
        pbVar1 = (byte *)((long)pppppppbVar14 + lStack_180);
        pppbVar21 = (byte ***)pppppbStack_198[(ulong)pbVar1 >> 4];
        if (pppppppbVar14 == (byte *******)*pppppppbStack_e8) {
          func_0x000107917bf4();
        }
        uVar18 = (ulong)pbVar1 & 0xf;
        pppppppbVar36 = (byte *******)(pppbVar21 + uVar18 * 0x2f + (long)ppppppbVar13 * 0x15 + 5);
        ppbVar28 = pppbVar21[uVar18 * 0x2f + 3];
        while( true ) {
          pppppppbVar38 = pppppppbStack_e8;
          pppppppbVar27 = (byte *******)*pppppppbStack_e8;
          pbVar1 = (byte *)((long)pppppppbVar27 + lVar26);
          if ((long)ppbVar28 < 1 || pppppppbVar14 == pppppppbVar27) break;
          pppbVar33 = (byte ***)pppppbVar32[(ulong)pbVar1 >> 4];
          if (ppbVar28 != pppbVar33[((ulong)pbVar1 & 0xf) * 0x2f + 3]) goto LAB_1078f7990;
          pppppppbVar24 = (byte *******)(pppbVar21 + uVar18 * 0x2f + (long)ppppppbVar13 * 0x15 + 6);
          pppppppbVar37 =
               (byte *******)
               (pppbVar33 + ((ulong)pbVar1 & 0xf) * 0x2f + (long)pppppppbStack_e8[1] * 0x15 + 6);
          func_0x0001078eeda4();
          if ((int)pppppppbVar24 == 0) goto LAB_1078f7990;
          func_0x000107917bf4();
        }
        pppbVar33 = (byte ***)pppppbVar32[(ulong)pbVar1 >> 4];
LAB_1078f7990:
        ppppppbVar23 = pppppppbVar38[1];
        pppbVar21[uVar18 * 0x2f + (long)ppppppbVar13 * 0x15 + 0x10] = (byte **)pppppppbVar27;
        pppbVar21[uVar18 * 0x2f + (long)ppppppbVar13 * 0x15 + 0xf] = (byte **)pppppppbVar38[4][4];
        if (pppbVar21[uVar18 * 0x2f + (long)ppppppbVar13 * 0x15 + 9] ==
            pppbVar33[((ulong)pbVar1 & 0xf) * 0x2f + (long)ppppppbVar23 * 0x15 + 9]) {
          pppppppbVar24 =
               (byte *******)(pppbVar21 + uVar18 * 0x2f + (long)ppppppbVar13 * 0x15 + 0xb);
          pppppppbVar37 =
               (byte *******)
               (pppbVar33 + ((ulong)pbVar1 & 0xf) * 0x2f + (long)ppppppbVar23 * 0x15 + 0xb);
          func_0x0001078eca54();
          if ((int)pppppppbVar24 != 0) {
            pppbVar21[uVar18 * 0x2f + (long)ppppppbVar13 * 0x15 + 0x11] = (byte **)*pppppppbVar38;
          }
        }
        pppppppbVar38 = (byte *******)pppppppbVar25[8];
      }
    }
    func_0x000107914fec();
    pppppppbVar25 = pppppppbVar24;
  }
  if (bVar9) {
    func_0x000107915ad4();
    func_0x000107916c64();
    lVar26 = lStack_180;
    pppppbVar32 = pppppbStack_198;
    do {
      pppppppbVar25 = pppppppbVar36 + -0x2f0;
      do {
        func_0x000107915acc();
        if (pppppppbVar36 == pppppppbVar24) goto LAB_1078f7ad0;
        if (((double)pppppppbVar36[0xe] == 0.0) && ((double)pppppppbVar36[0x23] == 0.0)) {
          ppppppbVar13 = pppppppbVar36[0x11];
          if (ppppppbVar13 == (byte ******)0xffffffffffffffff) {
            ppppppbVar13 = pppppppbVar36[0x10];
          }
          ppppppbVar23 = pppppppbVar36[0x26];
          if (ppppppbVar23 == (byte ******)0xffffffffffffffff) {
            ppppppbVar23 = pppppppbVar36[0x25];
          }
          if (((-1 < (long)ppppppbVar13) && (-1 < (long)ppppppbVar23)) &&
             (ppppppbVar13 != ppppppbVar23)) {
            ppppppbVar23 = *pppppppbVar36;
            ppppppbVar43 = (byte ******)
                           pppppbVar32[(ulong)((long)ppppppbVar13 + lVar26) >> 4]
                           [((long)ppppppbVar13 + lVar26 & 0xfU) * 0x2f];
            func_0x00010791509c(ppppppbVar23,pppppppbVar36[1],ppppppbVar43,
                                (pppppbVar32[(ulong)((long)ppppppbVar13 + lVar26) >> 4] +
                                ((long)ppppppbVar13 + lVar26 & 0xfU) * 0x2f)[1]);
            pppppppbVar36[0xe] = ppppppbVar43;
            func_0x000107915078();
            pppppppbVar36[0x23] = ppppppbVar23;
          }
        }
        pppppppbVar36 = pppppppbVar36 + 0x2f;
        pppppppbVar25 = pppppppbVar25 + 0x2f;
      } while ((byte *******)*pppppppbVar14 != pppppppbVar25);
      pppppppbVar14 = pppppppbVar14 + 1;
      pppppppbVar36 = (byte *******)*pppppppbVar14;
    } while( true );
  }
LAB_1078f7ad0:
  func_0x0001078fc8c8(pppppppbStack_1d8);
  uStack_1c8 = 0;
  lStack_1d0 = 0;
  ppppppbStack_1b8 = (byte ******)0x0;
  uStack_1c0 = 0;
  pppppppbStack_1d8 = (byte *******)0x0;
  pppppppbStack_1e0 = (byte *******)0x0;
  pppppppbStack_60 = &ppppppbStack_1a0;
  pppppppbStack_58 = (byte *******)&pppppppbStack_158;
  pppppppbVar14 = (byte *******)&pppppppbStack_48;
  ppppppbStack_30 = (byte ******)0x0;
  ppppppbStack_28 = (byte ******)0x0;
  lStack_40 = 0;
  pppppppbStack_48 = (byte *******)0x0;
  pppppppbVar24 = (byte *******)0x0;
  pppppppbStack_70 = param_3;
  pppppppbStack_68 = param_4;
  pppppppbStack_50 = pppppppbVar14;
  pppppppbStack_38 = &ppppppbStack_30;
  pppppppbStack_20 = param_5;
  plStack_18 = param_8;
  func_0x0001078fca5c();
  ppppppbStack_30 = (byte ******)0x0;
  ppppppbStack_28 = (byte ******)0x0;
  pppppppbStack_38 = &ppppppbStack_30;
  for (pppppppbVar36 = (byte *******)0x0; pppppppbVar36 < pppppppbStack_60[5];
      pppppppbVar36 = (byte *******)((long)pppppppbVar36 + 1)) {
    func_0x00010791395c();
    for (lVar26 = 0; lVar26 != 0x150; lVar26 = lVar26 + 0xa8) {
      lVar31 = extraout_x8_13 + (extraout_x9_06 & 0xffffffff) * 0x178 + 0x28 + lVar26;
      pppppppbStack_e0 = *(byte ********)(lVar31 + 0x18);
      pppppppbStack_e8 = *(byte ********)(lVar31 + 0x10);
      uStack_f0 = *(byte ********)(lVar31 + 8);
      pppppppbVar37 = pppppppbStack_48;
      pppppppbVar44 = pppppppbVar14;
      pppppppbVar25 = pppppppbVar14;
      if (pppppppbStack_48 != (byte *******)0x0) {
        do {
          while( true ) {
            pppppppbVar25 = pppppppbVar37;
            pppppppbVar24 = (byte *******)&uStack_f0;
            func_0x0001079166ec();
            if ((int)pppppppbVar24 == 0) break;
            pppppppbVar37 = (byte *******)*pppppppbVar25;
            pppppppbVar44 = pppppppbVar25;
            if ((byte *******)*pppppppbVar25 == (byte *******)0x0) goto LAB_1078f7bc8;
          }
          pppppppbVar24 = pppppppbVar25 + 4;
          func_0x0001078ee35c(pppppppbVar24,&uStack_f0);
          if ((int)pppppppbVar24 == 0) goto LAB_1078f7c1c;
          pppppppbVar37 = (byte *******)pppppppbVar25[1];
        } while ((byte *******)pppppppbVar25[1] != (byte *******)0x0);
        pppppppbVar44 = pppppppbVar25 + 1;
      }
LAB_1078f7bc8:
      func_0x000107917b94();
      pppppppbVar24[5] = (byte ******)pppppppbStack_e8;
      pppppppbVar24[4] = (byte ******)uStack_f0;
      pppppppbVar24[6] = (byte ******)pppppppbStack_e0;
      pppppppbVar24[7] = (byte ******)0xffffffffffffffff;
      pppppppbVar37 = pppppppbVar24;
      func_0x0001079155ec();
      pppppppbVar37[2] = (byte ******)pppppppbVar25;
      *pppppppbVar44 = (byte ******)pppppppbVar37;
      if ((byte *******)*pppppppbStack_50 != (byte *******)0x0) {
        pppppppbStack_50 = (byte *******)*pppppppbStack_50;
      }
      func_0x00010002c5b0(pppppppbStack_48,pppppppbVar24);
      lStack_40 = lStack_40 + 1;
      pppppppbVar25 = pppppppbVar24;
LAB_1078f7c1c:
      pppppppbVar24 = pppppppbVar25 + 8;
      pppppppbVar37 = (byte *******)&pppppppbStack_140;
      pppppppbStack_140 = pppppppbVar36;
      func_0x0001078ef1d0();
    }
  }
  apppppppbStack_100[0] = (byte *******)0x1;
  pppppppbVar36 = pppppppbStack_50;
  while (pppppppbVar25 = pppppppbStack_50, pppppppbVar36 != pppppppbVar14) {
    pppppppbVar24 = (byte *******)&pppppppbStack_70;
    pppppppbVar37 = (byte *******)apppppppbStack_100;
    func_0x0001078fc904(pppppppbVar24,pppppppbVar37,pppppppbVar36 + 4,pppppppbVar36 + 7,
                        0xffffffffffffffff);
    func_0x000107915240();
    pppppppbVar36 = pppppppbVar24;
  }
  while (pppppppbVar25 != pppppppbVar14) {
    pppppppbVar24 = (byte *******)pppppppbVar25[8];
    while (pppppppbVar24 != pppppppbVar25 + 9) {
      func_0x000107913d6c(pppppppbVar24[4]);
      lVar26 = extraout_x9_07 + (extraout_x8_14 & 0xf) * 0x178;
      if (((*(byte *)(lVar26 + 0x20) & 1) == 0) &&
         (*(int *)(lVar26 + 0x28) != 3 || *(int *)(lVar26 + 0xd0) != 3)) {
        ppppppbVar13 = pppppppbVar25[4];
        plVar17 = (long *)(extraout_x9_07 + (extraout_x8_14 & 0xf) * 0x178 + 0xb8);
        lVar26 = 0x150;
        do {
          if ((((byte ******)plVar17[-0x11] == ppppppbVar13) &&
              ((byte ******)plVar17[-0xf] == pppppppbVar25[6])) &&
             ((byte ******)plVar17[-0x10] == pppppppbVar25[5])) {
            *plVar17 = (long)pppppppbVar25[7];
          }
          lVar26 = lVar26 + -0xa8;
          plVar17 = plVar17 + 0x15;
        } while (lVar26 != 0);
      }
      func_0x00010002c7d4();
    }
    func_0x000107915b68();
    pppppppbVar25 = pppppppbVar24;
  }
  for (pppppppbVar36 = (byte *******)0x0; pppppppbVar25 = pppppppbStack_38,
      pppppppbVar36 < pppppppbStack_60[5]; pppppppbVar36 = (byte *******)((long)pppppppbVar36 + 1))
  {
    func_0x00010791395c();
    lVar26 = extraout_x8_15 + (extraout_x9_08 & 0xffffffff) * 0x178;
    uStack_f0 = pppppppbVar36;
    if (0 < *(long *)(lVar26 + 0x18)) {
      uStack_f0 = (byte *******)-*(long *)(lVar26 + 0x18);
    }
    pppppppbVar25 = (byte *******)(lVar26 + 0xb8);
    ppppppbVar13 = *pppppppbVar25;
    if (ppppppbVar13 == (byte ******)0xffffffffffffffff) {
      ppppppbVar13 = (byte ******)0xffffffffffffffff;
    }
    else {
      func_0x00010791634c();
      *pppppppbVar24 = ppppppbVar13;
      func_0x00010791634c();
      pppppppbVar24 = pppppppbVar24 + 2;
      func_0x000107916cd0();
      ppppppbVar13 = *pppppppbVar25;
    }
    ppppppbVar23 = *(byte *******)(lVar26 + 0x160);
    if (ppppppbVar23 == (byte ******)0xffffffffffffffff) {
      ppppppbVar43 = (byte ******)0xffffffffffffffff;
    }
    else {
      ppppppbVar43 = ppppppbVar13;
      if (ppppppbVar13 != ppppppbVar23) {
        func_0x000107916328();
        *pppppppbVar24 = ppppppbVar23;
        func_0x000107916328();
        pppppppbVar24 = pppppppbVar24 + 2;
        func_0x000107916cd0();
        ppppppbVar13 = *pppppppbVar25;
        ppppppbVar43 = *(byte *******)(lVar26 + 0x160);
      }
    }
    if ((ppppppbVar43 != (byte ******)0xffffffffffffffff &&
        ppppppbVar13 != (byte ******)0xffffffffffffffff) && ppppppbVar13 != ppppppbVar43) {
      func_0x00010791634c();
      pppppppbVar14 = pppppppbVar24 + 5;
      func_0x0001078fcb88(pppppppbVar14,lVar26 + 0x160);
      pppppppbVar44 = pppppppbVar14;
      func_0x000107916328();
      pppppppbVar44 = pppppppbVar44 + 5;
      func_0x0001078fcb88();
      pppppppbVar24 = pppppppbVar14 + 1;
      func_0x000107916764();
      pppppppbVar37 = pppppppbVar25;
      if (pppppppbVar24 == (byte *******)0x0) {
        *pppppppbVar14 = (byte ******)((long)*pppppppbVar14 + 1);
        func_0x000107916cd0(pppppppbVar14 + 1);
        pppppppbVar37 = pppppppbVar25;
      }
      pppppppbVar24 = pppppppbVar44 + 1;
      func_0x000107916764();
      if (pppppppbVar24 == (byte *******)0x0) {
        *pppppppbVar44 = (byte ******)((long)*pppppppbVar44 + 1);
        pppppppbVar24 = pppppppbVar44 + 1;
        func_0x000107916cd0();
      }
    }
  }
  while (pppppppbVar25 != &ppppppbStack_30) {
    if (pppppppbVar25[0xc] == (byte ******)0x0) {
LAB_1078f7ed4:
      uVar15 = 1;
    }
    else {
      if (pppppppbVar25[0xc] != (byte ******)0x1) {
        pppppbVar32 = (byte *****)0x0;
        pppppppbVar24 = (byte *******)pppppppbVar25[10];
        bVar9 = true;
        while (pppppppbVar24 != pppppppbVar25 + 0xb) {
          if ((pppppppbVar24[5] != (byte ******)0x1) ||
             ((pppppbVar2 = pppppppbVar24[6][4], !bVar9 &&
              (pppppbVar2 = pppppbVar32, pppppbVar32 != pppppppbVar24[6][4])))) goto LAB_1078f7edc;
          pppppbVar32 = pppppbVar2;
          func_0x00010002c7d4();
          bVar9 = false;
        }
        goto LAB_1078f7ed4;
      }
      func_0x0001079173ac(pppppppbVar25[10]);
      uVar15 = extraout_w8;
    }
    *(undefined4 *)(pppppppbVar25 + 6) = uVar15;
LAB_1078f7edc:
    func_0x000107915b68();
    pppppppbVar25 = pppppppbVar24;
  }
  uVar18 = 0;
  do {
    if (ppppppbStack_28 <= uVar18) break;
    bVar9 = false;
    uVar18 = uVar18 + 1;
    pppppppbVar25 = pppppppbStack_38;
    while (pppppppbVar25 != &ppppppbStack_30) {
      if (*(int *)(pppppppbVar25 + 6) == 0) {
        pppppbVar32 = (byte *****)0x0;
        bVar8 = true;
        pppppppbVar14 = (byte *******)pppppppbVar25[10];
        while (pppppppbVar14 != pppppppbVar25 + 0xb) {
          ppppppbVar13 = pppppppbVar14[4];
          pppppppbVar36 = &ppppppbStack_30;
          pppppppbVar44 = &ppppppbStack_30;
          while (pppppppbVar38 = (byte *******)*pppppppbVar36, pppppppbVar38 != (byte *******)0x0) {
            lVar26 = 8;
            if ((long)ppppppbVar13 <= (long)pppppppbVar38[4]) {
              lVar26 = 0;
            }
            pppppppbVar36 = (byte *******)((long)pppppppbVar38 + lVar26);
            if ((long)ppppppbVar13 <= (long)pppppppbVar38[4]) {
              pppppppbVar44 = pppppppbVar38;
            }
          }
          if ((&ppppppbStack_30 == pppppppbVar44) || ((long)ppppppbVar13 < (long)pppppppbVar44[4]))
          goto LAB_1078f80c4;
          uVar10 = pppppppbVar14[5] != (byte ******)0x0;
          if (pppppppbVar14[5] != (byte ******)0x1) {
            if (*(int *)(pppppppbVar44 + 6) != 2) goto LAB_1078f80c4;
            pppppppbVar24 = (byte *******)&uStack_f0;
            pppppppbVar37 = pppppppbVar25 + 7;
            func_0x0001078efe58();
            pppppppbVar36 = pppppppbVar44 + 8;
            pppppppbVar38 = (byte *******)pppppppbVar44[7];
            while (pppppppbVar38 != pppppppbVar36) {
              pppppppbStack_140 = (byte *******)pppppppbVar38[4];
              pppppppbVar24 = (byte *******)&uStack_f0;
              pppppppbVar37 = (byte *******)&pppppppbStack_140;
              func_0x0001078f1ffc();
              func_0x000107915240();
              pppppppbVar38 = pppppppbVar24;
            }
            if (pppppppbStack_e0 != (byte *******)0x1) {
LAB_1078f80bc:
              func_0x000107916738();
              goto LAB_1078f80c4;
            }
            pppppppbVar38 = (byte *******)pppppppbVar44[7];
            while (pppppppbVar27 = pppppppbStack_58, uVar10 = pppppppbVar36 <= pppppppbVar38,
                  pppppppbVar38 != pppppppbVar36) {
              if ((long)pppppppbVar38[4] < 0) {
                pppppppbVar37 = (byte *******)-(long)pppppppbVar38[4];
                pppppppbVar24 = pppppppbStack_58;
                func_0x0001078f2064();
                if (pppppppbVar27 + 1 != pppppppbVar24) {
                  pppppppbVar27 = pppppppbVar24 + 6;
                  pppppppbVar19 = (byte *******)pppppppbVar24[5];
                  while (pppppppbVar19 != pppppppbVar27) {
                    func_0x000107915130(pppppppbStack_60);
                    func_0x0001078fcc0c();
                    if ((int)pppppppbVar24 == 0) goto LAB_1078f80bc;
                    func_0x000107915240();
                    pppppppbVar19 = pppppppbVar24;
                  }
                }
              }
              else {
                func_0x000107915130(pppppppbStack_60);
                func_0x0001078fcc0c();
                if (((ulong)pppppppbVar24 & 1) == 0) goto LAB_1078f80bc;
              }
              func_0x00010002c7d4();
              pppppppbVar24 = pppppppbVar38;
            }
            func_0x000107916738();
          }
          func_0x000107915f64(*(undefined4 *)(pppppppbVar44 + 6));
          if ((bool)uVar10) {
            if (bVar8) {
              bVar8 = false;
              pppppbVar32 = pppppppbVar14[6][4];
            }
            else {
              if (pppppbVar32 != pppppppbVar14[6][4]) goto LAB_1078f80c4;
              bVar8 = false;
            }
          }
          func_0x000107917c58();
          pppppppbVar14 = pppppppbVar24;
        }
        bVar9 = true;
        *(undefined4 *)(pppppppbVar25 + 6) = 1;
      }
LAB_1078f80c4:
      func_0x000107915b68();
      pppppppbVar25 = pppppppbVar24;
    }
  } while (bVar9);
  pppppppbVar36 = pppppppbStack_60;
  func_0x0001078fb480(pppppppbStack_60);
  func_0x000107916c64();
  FUN_1078faa18();
  while (pppppppbVar14 != pppppppbVar36) {
    for (lVar26 = 0x28; lVar26 != 0x178; lVar26 = lVar26 + 0xa8) {
      lVar31 = *(long *)((long)pppppppbVar14 + lVar26 + 0x90);
      pppppppbVar44 = &ppppppbStack_30;
      pppppppbVar24 = &ppppppbStack_30;
      while (pppppppbVar38 = (byte *******)*pppppppbVar24, pppppppbVar38 != (byte *******)0x0) {
        lVar40 = 8;
        if (lVar31 <= (long)pppppppbVar38[4]) {
          lVar40 = 0;
        }
        pppppppbVar24 = (byte *******)((long)pppppppbVar38 + lVar40);
        if (lVar31 <= (long)pppppppbVar38[4]) {
          pppppppbVar44 = pppppppbVar38;
        }
      }
      if ((&ppppppbStack_30 != pppppppbVar44) && ((long)pppppppbVar44[4] <= lVar31)) {
        *(bool *)((long)pppppppbVar14 + lVar26 + 0x98) = *(int *)(pppppppbVar44 + 6) == 1;
      }
    }
    pppppppbVar14 = pppppppbVar14 + 0x2f;
    if ((long)pppppppbVar14 - (long)*pppppppbVar25 == 0x1780) {
      pppppppbVar25 = pppppppbVar25 + 1;
      pppppppbVar14 = (byte *******)*pppppppbVar25;
    }
  }
  func_0x000107915ad4();
  pppppppbVar24 = pppppppbVar36;
  do {
    pppppppbVar14 = pppppppbVar37 + -0x2f0;
    do {
      func_0x000107915acc();
      if (pppppppbVar37 == pppppppbVar36) {
        uVar18 = 0;
        pppppppbStack_e0 = &ppppppbStack_1a0;
        ppppplStack_a0 = &pppplStack_170;
        pppppppbStack_d8 = (byte *******)&pppppppbStack_158;
        uStack_c0._0_4_ = SUB84(param_8,0);
        uStack_c0._4_4_ = (undefined4)((ulong)param_8 >> 0x20);
        uStack_b8._0_4_ = SUB84(param_3,0);
        uStack_b8._4_4_ = (undefined4)((ulong)param_3 >> 0x20);
        pppppppbStack_140 = (byte *******)ppppppbStack_1b8;
        apppppppbStack_100[0] = (byte *******)CONCAT62(apppppppbStack_100[0]._2_6_,0x101);
        uStack_f0 = param_3;
        pppppppbStack_e8 = param_4;
        pppppppbStack_d0 = param_5;
        pppppppbStack_b0 = param_4;
        ppppppbStack_a8 = (byte ******)pppppppbStack_e0;
        pppppppbStack_98 = pppppppbStack_d8;
        pppppppbStack_90 = param_7;
        pppppppbStack_88 = param_5;
        plStack_80 = param_8;
        goto LAB_1078f8248;
      }
      *(undefined4 *)(pppppppbVar37 + 0x19) = 0;
      ((byte *)((long)pppppppbVar37 + 0xcc))[0] = 0;
      ((byte *)((long)pppppppbVar37 + 0xcc))[1] = 0;
      *(undefined4 *)(pppppppbVar37 + 0x2e) = 0;
      ((byte *)((long)pppppppbVar37 + 0x174))[0] = 0;
      ((byte *)((long)pppppppbVar37 + 0x174))[1] = 0;
      pppppppbVar14 = pppppppbVar14 + 0x2f;
      pppppppbVar37 = pppppppbVar37 + 0x2f;
    } while ((byte *******)*pppppppbVar24 != pppppppbVar14);
    pppppppbVar24 = pppppppbVar24 + 1;
    pppppppbVar37 = (byte *******)*pppppppbVar24;
  } while( true );
LAB_1078f8248:
  if (uStack_178 <= uVar18) goto LAB_1078f82e0;
  func_0x000107914a5c(lStack_180 + uVar18);
  param_8 = (long *)(extraout_x9_09 + (extraout_x8_16 & 0xffffffff) * 0x178);
  if ((*(byte *)(param_8 + 4) & 1) == 0) {
    if ((int)param_8[5] == 3) {
      if ((int)param_8[0x1a] != 3) goto LAB_1078f82c0;
    }
    else if (((int)param_8[5] == 4) && ((int)param_8[0x1a] == 4)) {
      func_0x000107916ea0();
      FUN_1078fcc68();
    }
    else {
LAB_1078f82c0:
      for (iVar12 = 0; iVar12 != 2; iVar12 = iVar12 + 1) {
        func_0x000107916ea0();
        FUN_1078fcc68();
      }
    }
  }
  uVar18 = uVar18 + 1;
  goto LAB_1078f8248;
LAB_1078f82e0:
  FUN_1079003f8(&pppppppbStack_70);
  func_0x0001078fbd94(&ppppppbStack_1a0);
  func_0x000107916c58();
  while( true ) {
    pppppppbVar36 = &ppppppbStack_1a0;
    func_0x0001078fbdac();
    bVar9 = param_5 == pppppppbVar36;
    if (bVar9) break;
    func_0x00010791749c();
    if ((!bVar9) || (((ulong)param_5[4] & 1) == 0)) {
      bVar9 = false;
      bVar8 = false;
      for (lVar26 = 0x28; bVar11 = lVar26 == 0x178, !bVar11; lVar26 = lVar26 + 0xa8) {
        pbVar1 = (byte *)((long)param_5 + lVar26);
        pppppppbStack_e0 = *(byte ********)(pbVar1 + 0x18);
        pppppppbStack_e8 = *(byte ********)(pbVar1 + 0x10);
        uStack_f0 = *(byte ********)(pbVar1 + 8);
        func_0x00010791749c();
        if ((!bVar11) && (*(long *)(pbVar1 + 0x70) != 0)) goto LAB_1078f8374;
        if ((*(int *)(param_5 + 5) == 3) || (*(int *)(param_5 + 0x1a) == 3)) {
          func_0x000107915468();
          *(byte *)((long)pppppppbVar36 + 1) = 1;
        }
        func_0x000107915468();
        if ((((ulong)*pppppppbVar36 & 1) == 0) &&
           (func_0x000107915468(), ((ulong)*pppppppbVar36 & 0x100) == 0)) {
          if (bVar8) {
LAB_1078f83bc:
            bVar8 = true;
            if (bVar9) {
LAB_1078f8440:
              bVar9 = true;
              goto LAB_1078f8374;
            }
          }
          else if ((long)param_5[3] < 1) {
            bVar8 = false;
            if (bVar9) goto LAB_1078f8440;
          }
          else {
            pppppppbVar24 = (byte *******)&pppppppbStack_158;
            func_0x0001078f2064();
            if (&pppppppbStack_150 != (byte ********)pppppppbVar24) {
              bVar9 = false;
              pppppppbVar36 = (byte *******)pppppppbVar24[5];
              while (pppppppbVar36 != pppppppbVar24 + 6) {
                func_0x000107913948(pppppppbVar36[4]);
                lVar31 = extraout_x9_10 + (extraout_x8_17 & 0xffffffff) * 0x178;
                if ((*(int *)(lVar31 + 0x28) == 3) || (*(int *)(lVar31 + 0xd0) == 3)) {
                  bVar9 = true;
                }
                func_0x00010002c7d4();
              }
              goto LAB_1078f83bc;
            }
            bVar8 = true;
            pppppppbVar36 = pppppppbVar24;
          }
          if ((*(int *)pbVar1 == 2) && ((*(byte *)((long)param_5 + 0x21) & 1) == 0)) {
            if ((*(int *)(param_5 + 5) == 2) && (bVar11 = *(int *)(param_5 + 0x1a) == 2, bVar11)) {
              bVar9 = false;
              func_0x00010791749c();
              if (bVar11) goto LAB_1078f8464;
            }
            else {
              bVar9 = false;
            }
LAB_1078f8374:
            func_0x000107915468();
            *(byte *)((long)pppppppbVar36 + 1) = 1;
          }
          else {
            bVar9 = false;
          }
        }
LAB_1078f8464:
      }
    }
    param_5 = param_5 + 0x2f;
    if ((long)param_5 - *param_8 == 0x1780) {
      param_8 = param_8 + 1;
      param_5 = (byte *******)*param_8;
    }
  }
  pppppppbStack_68 = (byte *******)0x0;
  pppppppbStack_60 = (byte *******)0x0;
  pppppppbStack_70 = (byte *******)&pppppppbStack_68;
  pppppppbVar36 = param_4;
  func_0x0001078f8750(param_3,param_4,&pppplStack_170,&pppppppbStack_70);
  pppppppbStack_138 = (byte *******)0x0;
  pppppppbStack_140 = (byte *******)0x2;
  uStack_130 = 0xffffffffffffffff;
  func_0x00010790036c(&pppppppbStack_1e0);
  func_0x000107916c58();
  lVar26 = 0;
  while( true ) {
    func_0x0001078fe3c8(&pppppppbStack_1e0);
    in_ZR = param_5 == pppppppbVar36;
    if ((bool)in_ZR) break;
    func_0x000107900940(&uStack_f0,param_5);
    func_0x000107917bc4();
    pppppppbVar36 = (byte *******)&uStack_f0;
    func_0x0001078f88d8();
    ppppppbVar13 = (byte ******)&ppppppbStack_a8;
    func_0x0001078f4acc();
    func_0x000107917bc4();
    *(undefined1 *)(ppppppbVar13 + 4) = 0;
    lVar26 = lVar26 + 1;
    pppppppbStack_138 = (byte *******)lVar26;
    func_0x00010791629c();
    if ((bool)in_ZR) {
      param_8 = param_8 + 1;
      param_5 = (byte *******)*param_8;
    }
  }
  func_0x000107915254();
  func_0x0001078f8904();
  func_0x0001078f8bf8(&pppppppbStack_70,param_3,param_4,&pppppppbStack_1e0,param_6);
  func_0x0001078f605c(pppppppbStack_68);
  func_0x0001079014ec(&pppppppbStack_1e0);
  func_0x0001078f4774(pppplStack_168);
  func_0x0001078f612c(pppppppbStack_150);
  pppppppbVar36 = &ppppppbStack_1a0;
  func_0x0001079015a8(pppppppbVar36);
  pppppppbVar24 = param_3;
LAB_1078f8590:
  func_0x000107913564(uStack_10);
  if ((bool)in_ZR) {
    return pppppppbVar36;
  }
  ___stack_chk_fail();
  ppppppbVar13 = (byte ******)&ppppppbStack_1a0;
  func_0x0001079015a8();
  func_0x000107914aac();
code_r0x0001078f871c:
  if (1 < (ulong)(((long)pppppppbVar24 - (long)ppppppbVar13) / 0x30)) {
    return (byte *******)0x1;
  }
  if ((long)pppppppbVar24 - (long)ppppppbVar13 == 0x30) {
    return (byte *******)(ulong)(ppppppbVar13[4] != ppppppbVar13[3]);
  }
  return (byte *******)0x0;
}



/* Entry: 1078f920c; end: 1078f93cf;  */

void FUN_1078f920c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153d8();
  func_0x0001079132d8();
  func_0x0001079136bc();
  func_0x0001079136d8();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto LAB_1078f924c;
      func_0x000107913d24();
      func_0x0001078f9480();
      func_0x00010791354c();
      func_0x0001078f94a4();
    }
    else {
LAB_1078f924c:
      func_0x000107913f30();
      func_0x0001078f966c();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107914c84();
          func_0x0001078f96c8();
          func_0x000107913880();
          func_0x0001078f94a4();
          func_0x000107913894();
          func_0x0001078f94a4();
          goto LAB_1078f92cc;
        }
      }
    }
    func_0x000107913f20();
    func_0x0001078f966c();
    func_0x000107913f10();
    func_0x0001078f966c();
  }
LAB_1078f92cc:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079181f0();
LAB_1078f932c:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto LAB_1078f9334;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914708();
      func_0x0001078f966c();
      func_0x000107913ec0();
      func_0x0001078f966c();
      goto LAB_1078f932c;
    }
    func_0x000107915ee0();
    func_0x0001078f96c8();
    func_0x000107913a34();
    func_0x0001078f94a4();
    func_0x000107913650();
    func_0x0001078f94a4();
LAB_1078f9334:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x0001079139c4();
      func_0x0001078f94a4();
      goto LAB_1078f9358;
    }
  }
  func_0x0001079146f8();
  func_0x0001078f966c();
LAB_1078f9358:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&stack0x000000b0);
    func_0x0001078f94a4();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078f966c();
  }
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return;
}



/* Entry: 1078f96f8; end: 1078f971b;  */

void FUN_1078f96f8(void)

{
  undefined1 in_ZR;
  
  func_0x0001079176a8();
  func_0x0001078f9724();
  func_0x000107915254();
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x000107916f34();
  }
  return;
}



/* Entry: 1078faa18; end: 1078faa2b;  */

long FUN_1078faa18(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 4) * 8) + (uVar1 & 0xf) * 0x178;
  }
  return 0;
}



/* Entry: 1078face0; end: 1078faddb;  */

void FUN_1078face0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong extraout_x8;
  long lVar2;
  long lVar3;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001079139b0();
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  func_0x000107917c04();
  lVar1 = lStack_90;
  lVar2 = lStack_98;
  func_0x0001079162c0(lStack_90 - lStack_98);
  if (extraout_x8 < 0x11) {
    while (lVar2 != lVar1) {
      lVar2 = lVar2 + 0x78;
      for (lVar3 = lVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x78) {
        func_0x000107915d60(&stack0xffffffffffffff38);
        func_0x0001078fae78();
      }
    }
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000107915854();
    auStack_80[0] = param_1;
    uStack_70 = param_2;
    func_0x0001078f91b8(&lStack_98,auStack_80,&uStack_58);
    func_0x0001078faddc(auStack_80,&uStack_58,0,&stack0xffffffffffffff38);
    func_0x0001079171a0();
  }
  func_0x0001078f6164(&lStack_98);
  return;
}



/* Entry: 1078fb08c; end: 1078fb24f;  */

void FUN_1078fb08c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153d8();
  func_0x0001079132d8();
  func_0x0001079136bc();
  func_0x0001079136d8();
  func_0x0001079155d4();
  uVar3 = 1;
  if ((bool)in_ZR) goto LAB_1078fb150;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_1078fb0d0:
    func_0x000107913f30();
    func_0x0001078fb250();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar1)) goto LAB_1078fb0d0;
    func_0x000107913d24();
    func_0x0001078f9480();
    func_0x00010791354c();
    func_0x0001078fb2ac();
  }
  func_0x000107913ef0();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x000107913ee0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914718(), (bool)in_CY)) {
      func_0x000107914c84();
      func_0x0001078f96c8();
      func_0x000107913880();
      func_0x0001078fb2ac();
      func_0x000107913894();
      func_0x0001078fb2ac();
      goto LAB_1078fb150;
    }
  }
  func_0x000107913f20();
  func_0x0001078fb250();
  func_0x000107913f10();
  func_0x0001078fb250();
LAB_1078fb150:
  func_0x0001079155c8();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x000107915ee0();
      func_0x0001078f96c8();
      func_0x000107913a34();
      func_0x0001078fb2ac();
      func_0x000107913650();
      func_0x0001078fb2ac();
    }
    else {
      func_0x000107914708();
      func_0x0001078fb250();
      func_0x000107913ec0();
      func_0x0001078fb250();
    }
  }
  func_0x000107914d34(0);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913ea0(), (bool)in_CY)) {
    func_0x0001079139c4();
    func_0x0001078fb2ac();
  }
  else {
    func_0x0001079146f8();
    func_0x0001078fb250();
  }
  func_0x000107913e90();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar2)) {
    func_0x00010791386c(&stack0x000000b0);
    func_0x0001078fb2ac();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078fb250();
  }
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return;
}



/* Entry: 1078fb9c8; end: 1078fba73;  */

void FUN_1078fb9c8(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  undefined8 unaff_x30;
  undefined8 in_register_00005008;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_3 + 0x10);
  if ((long)param_2[2] < lVar1) {
    if (lVar1 < (long)param_4[2]) {
      uVar2 = param_2[2];
      in_register_00005008 = param_2[1];
      param_1 = *param_2;
      uVar3 = param_4[2];
      uVar4 = *param_4;
      param_2[1] = param_4[1];
      *param_2 = uVar4;
      param_2[2] = uVar3;
    }
    else {
      func_0x000107915eec();
      if ((long)param_4[2] <= *(long *)(param_3 + 0x10)) {
        return;
      }
      func_0x0001079175d4(unaff_x30);
      uVar2 = extraout_x8_00;
    }
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = uVar2;
  }
  else if (lVar1 < (long)param_4[2]) {
    func_0x0001079175d4();
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
    param_4[2] = extraout_x8;
    if ((long)param_2[2] < *(long *)(param_3 + 0x10)) {
      func_0x000107915eec();
    }
  }
  return;
}



/* Entry: 1078fbdcc; end: 1078fc20f;  */

void FUN_1078fbdcc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar6;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x000107916658();
  func_0x0001079141cc();
LAB_1078fbde8:
  func_0x0001079157c0();
LAB_1078fbdec:
  while( true ) {
    func_0x0001079148f8();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078fc008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(byte *)((long)unaff_x27 + 0x10dedb904) * 4 + 0x1078fc00c))();
      return;
    }
    uVar1 = 0x3be < extraout_x8;
    uVar4 = extraout_x8 == 0x3bf;
    if ((long)extraout_x8 < 0x3c0) {
      if (((ulong)unaff_x26 & 1) == 0) {
        if (unaff_x21 == unaff_x24) {
          return;
        }
        while (puVar5 = unaff_x21, unaff_x21 = puVar5 + 5, unaff_x21 != unaff_x24) {
          func_0x000107914d7c();
          func_0x0001079162e8();
          if (param_3 != 0) {
            func_0x000107915604();
            do {
              puVar6 = puVar5;
              func_0x000107914890();
              func_0x0001078fc210();
              puVar5 = puVar6 + -5;
            } while ((param_3 & 1) != 0);
            func_0x000107915108();
            puVar6[9] = extraout_x8_01;
            puVar6[6] = in_register_00005008;
            puVar6[5] = param_1;
            puVar6[8] = in_register_00005028;
            puVar6[7] = param_2;
          }
        }
        return;
      }
      puVar5 = unaff_x21;
      if (unaff_x21 == unaff_x24) {
        return;
      }
      goto LAB_1078fc0a0;
    }
    if (unaff_x23 == 0) {
      if (unaff_x21 == unaff_x24) {
        return;
      }
      func_0x0001079161d0();
      for (; -1 < unaff_x22; unaff_x22 = unaff_x22 + -1) {
        func_0x0001079143fc();
        func_0x0001078fc6d0();
      }
      while( true ) {
        cVar2 = SBORROW8((long)unaff_x27,2);
        cVar3 = (long)((long)unaff_x27 - 2U) < 0;
        uVar4 = unaff_x27 == (undefined8 *)0x2;
        if ((long)unaff_x27 < 2) break;
        func_0x0001079148d4();
        do {
          func_0x00010791419c();
          if (cVar3 != cVar2) {
            func_0x00010791535c();
            func_0x0001078fc210();
            cVar3 = (int)param_3 < 0;
            uVar4 = param_3 == 0;
            cVar2 = '\0';
          }
          func_0x000107914b7c();
        } while ((bool)uVar4 || cVar3 != cVar2);
        func_0x0001079174ec();
        if ((bool)uVar4) {
          func_0x000107915b08();
          func_0x00010791526c();
        }
        else {
          func_0x0001079143bc();
          if (cVar3 == cVar2) {
            func_0x000107914b9c();
            func_0x0001078fc210();
            if (param_3 != 0) {
              func_0x000107915308();
              func_0x000107915344();
              do {
                func_0x00010791561c();
                func_0x00010791526c();
                func_0x000107918584();
                func_0x000107914d7c();
                func_0x0001078fc210();
              } while ((param_3 & 1) != 0);
              func_0x000107914058();
            }
          }
        }
        unaff_x27 = (undefined8 *)((long)unaff_x27 - 1);
      }
      return;
    }
    func_0x0001079163b0();
    if ((bool)uVar1) {
      func_0x000107913e38();
      func_0x0001078fc3d8();
      func_0x0001079157a8();
      func_0x0001078fc3d8();
      func_0x00010791639c();
      func_0x0001078fc3d8();
      func_0x000107915808();
      func_0x0001078fc3d8();
      func_0x00010791407c();
      in_register_00005008 = unaff_x20[1];
      param_1 = *unaff_x20;
      in_register_00005028 = unaff_x20[3];
      param_2 = unaff_x20[2];
      func_0x000107914454(unaff_x20[4]);
      func_0x0001079158c0();
    }
    else {
      func_0x000107914a6c();
      func_0x0001078fc3d8();
    }
    unaff_x23 = unaff_x23 + -1;
    if (((ulong)unaff_x26 & 1) != 0) break;
    func_0x000107915b84();
    func_0x0001078fc210();
    if ((param_3 & 1) != 0) break;
    func_0x000107914484();
    func_0x00010791741c();
    func_0x0001078fc210();
    puVar5 = unaff_x21;
    if ((param_3 & 1) == 0) {
      do {
        func_0x000107917870(puVar5 + 5);
        if ((bool)uVar1) break;
        func_0x000107914668();
        func_0x0001078fc210();
        puVar5 = unaff_x27;
      } while (param_3 == 0);
    }
    else {
      do {
        func_0x000107914508();
        func_0x0001078fc210();
        unaff_x27 = unaff_x21;
      } while ((param_3 & 1) == 0);
    }
    func_0x000107917738();
    if (!(bool)uVar1) {
      do {
        func_0x0001079144e0();
        func_0x0001078fc210();
        unaff_x26 = unaff_x24;
      } while ((param_3 & 1) != 0);
    }
    while (unaff_x27 < unaff_x26) {
      func_0x0001079144f4();
      func_0x000107917744();
      unaff_x27[4] = extraout_x8_00;
      unaff_x27[1] = in_register_00005008;
      *unaff_x27 = param_1;
      unaff_x27[3] = in_register_00005028;
      unaff_x27[2] = param_2;
      func_0x000107914058();
      do {
        func_0x000107914508();
        func_0x0001078fc210();
      } while (param_3 == 0);
      do {
        func_0x0001079144e0();
        func_0x0001078fc210();
      } while ((param_3 & 1) != 0);
    }
    in_CY = unaff_x27 + -5 <= unaff_x21;
    in_ZR = unaff_x21 == unaff_x27 + -5;
    if (!(bool)in_ZR) {
      func_0x0001079160a0();
    }
    unaff_x26 = (undefined8 *)0x0;
    func_0x0001079150e0();
  }
  unaff_x27 = (undefined8 *)0x0;
  func_0x000107914484();
  do {
    unaff_x27 = unaff_x27 + 5;
    func_0x000107915664();
    func_0x0001078fc210();
  } while ((param_3 & 1) != 0);
  func_0x0001079174fc();
  if ((bool)uVar4) {
    do {
      unaff_x20 = unaff_x24;
      if (unaff_x24 < (undefined8 *)0x29) break;
      func_0x000107914440();
      func_0x0001078fc210();
    } while ((param_3 & 1) == 0);
  }
  else {
    do {
      func_0x000107914440();
      func_0x0001078fc210();
    } while (param_3 == 0);
  }
  func_0x0001079178ac();
  while (unaff_x27 < unaff_x28) {
    func_0x00010791424c();
    do {
      unaff_x27 = unaff_x27 + 5;
      func_0x000107915664();
      func_0x0001078fc210();
    } while ((param_3 & 1) != 0);
    do {
      unaff_x28 = unaff_x28 + -5;
      func_0x000107915664();
      func_0x0001078fc210();
    } while ((param_3 & 1) == 0);
  }
  unaff_x28 = unaff_x27 + -5;
  if (unaff_x21 != unaff_x28) {
    func_0x000107916544();
    func_0x0001079156d8();
  }
  func_0x0001079150cc();
  in_CY = unaff_x20 < (undefined8 *)0x29;
  in_ZR = unaff_x20 == (undefined8 *)0x28;
  if ((bool)in_CY) {
    func_0x0001079145cc();
    func_0x0001078fc504();
    func_0x00010791487c();
    func_0x0001078fc504();
    if (param_3 != 0) goto LAB_1078fbfe8;
    if (((ulong)unaff_x20 & 1) != 0) goto LAB_1078fbdec;
  }
  func_0x0001079141b4();
  FUN_1078fbdcc();
  unaff_x26 = (undefined8 *)0x0;
  goto LAB_1078fbdec;
LAB_1078fc0a0:
  do {
    puVar5 = puVar5 + 5;
    if (puVar5 == unaff_x24) {
      return;
    }
    func_0x00010791535c();
    func_0x0001078fc210();
  } while (param_3 == 0);
  func_0x000107915670();
  do {
    func_0x000107914728((long)unaff_x21 + unaff_x23);
    if (unaff_x23 == 0) break;
    func_0x00010791608c();
    func_0x0001078fc210();
  } while ((param_3 & 1) != 0);
  func_0x0001079150f4();
  goto LAB_1078fc0a0;
LAB_1078fbfe8:
  unaff_x24 = unaff_x28;
  if (((ulong)unaff_x20 & 1) != 0) {
    return;
  }
  goto LAB_1078fbde8;
}



/* Entry: 1078fc784; end: 1078fc7ef;  */

/* WARNING: Possible PIC construction at 0x0001078fc7ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078fc7c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078fc7b0) */
/* WARNING: Removing unreachable block (ram,0x0001078fc7b4) */
/* WARNING: Removing unreachable block (ram,0x0001078fc7c4) */
/* WARNING: Removing unreachable block (ram,0x0001078fc7e8) */
/* WARNING: Removing unreachable block (ram,0x000107913578) */
/* WARNING: Removing unreachable block (ram,0x0001078fc7c8) */

undefined8 FUN_1078fc784(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long *plVar5;
  long *extraout_x9;
  ulong uVar6;
  undefined8 uVar7;
  
  func_0x000107914658();
  lVar3 = 0;
  if ((*param_3 != 0) && (param_1 = param_2, *param_3 != 1)) {
    return 0;
  }
  plVar5 = (long *)(*param_1 + param_3[1] * 0x30);
  lVar4 = param_3[3];
  if (-1 < param_3[2]) {
    func_0x000107916bf8(0x1078fc7b0);
    lVar4 = extraout_x8;
    plVar5 = extraout_x9;
  }
  uVar6 = (plVar5[1] - *plVar5 >> 4) - 1;
  lVar1 = 0;
  if (uVar6 != 0) {
    lVar1 = (lVar4 + lVar3) / (long)uVar6;
  }
  lVar3 = (lVar4 + lVar3) - lVar1 * uVar6;
  puVar2 = (undefined8 *)(*plVar5 + ((uVar6 & lVar3 >> 0x3f) + lVar3) * 0x10);
  uVar7 = *puVar2;
  param_4[1] = puVar2[1];
  *param_4 = uVar7;
  return 1;
}



/* Entry: 1078fcc68; end: 1078fd50b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1078fcc68(long param_1,long param_2,long *******param_3,long *******param_4,
                  long *******param_5,long *******param_6,long *******param_7)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong uVar5;
  long *******ppppppplVar6;
  long extraout_x8;
  long extraout_x8_00;
  long *******ppppppplVar7;
  long extraout_x8_01;
  long *******ppppppplVar8;
  long extraout_x8_02;
  long extraout_x8_03;
  long ******extraout_x8_04;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long *******extraout_x9_03;
  long *******extraout_x9_04;
  long extraout_x9_05;
  ulong extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  long extraout_x11_02;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  long ******pppppplVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long *******unaff_x26;
  long lVar17;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  undefined8 uStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  
  param_2 = param_2 + ((ulong)param_4 & 0xffffffff) * 0xa8;
  if (*(int *)(param_2 + 200) != 0) {
    return;
  }
  if (*(char *)(param_2 + 0x90) != '\x01') {
    return;
  }
  if ((*(byte *)(param_2 + 0xcc) & 1) != 0) {
    return;
  }
  if (*(int *)(param_2 + 0x28) != 4 && *(int *)(param_2 + 0x28) != 1) {
    return;
  }
  ppppppplStack_d0 = (long *******)0x0;
  uStack_c8 = 0;
  ppppppplStack_d8 = (long *******)0x0;
  lVar17 = param_1;
  func_0x00010791395c();
  ppppppplVar16 = (long *******)(extraout_x8 + (extraout_x9 & 0xffffffff) * 0x178);
  ppppppplVar15 = (long *******)&ppppppplStack_d8;
  ppppppplVar8 = ppppppplVar16;
  func_0x0001078fd50c(ppppppplVar15,ppppppplVar16,*(undefined8 *)(lVar17 + 0x68));
  ppppppplStack_c0 = (long *******)CONCAT44(ppppppplStack_c0._4_4_,(int)param_4);
  ppppppplStack_90 = param_3;
  func_0x000107918578();
  func_0x000107915a0c();
  func_0x0001078fd56c();
  if ((int)ppppppplVar15 != 0) {
LAB_1078fcd2c:
    ppppppplVar14 = (long *******)*param_6;
    func_0x000107918550();
    lVar17 = *(long *)(extraout_x8_00 + (extraout_x9_00 >> 4) * 8);
    ppppppplVar15 = *(long ********)(param_1 + 0x38);
    ppppppplVar16 = *(long ********)(param_1 + 0x40);
    *(undefined1 *)param_7 = 0;
    if (((ulong)*param_7 & 0x100) == 0) {
      *(undefined1 *)((long)param_7 + 1) = 1;
      func_0x000107917cac();
      ppppppplVar15 = ppppppplVar16;
      func_0x000107917cac();
    }
    ppppppplVar7 = (long *******)param_5[5];
    ppppppplVar13 = (long *******)((long)ppppppplVar14 - (long)ppppppplVar7);
    if (ppppppplVar14 < ppppppplVar7 || ppppppplVar13 == (long *******)0x0) {
      ppppppplVar13 = ppppppplVar8;
      if (ppppppplVar14 < ppppppplVar7) {
        ppppppplVar16 = param_5;
        func_0x00010790036c();
        ppppppplVar15 = (long *******)&ppppppplStack_c0;
        ppppppplStack_c0 = ppppppplVar16;
        ppppppplStack_b8 = ppppppplVar8;
        func_0x000107900388();
        ppppppplVar7 = ppppppplVar15;
        ppppppplVar6 = ppppppplVar14;
        func_0x000107917334();
        ppppppplVar13 = ppppppplVar6;
        func_0x0001079003cc();
        if (0 < (long)ppppppplVar7) {
          ppppppplVar13 = ppppppplVar15;
          ppppppplStack_90 = ppppppplVar16;
          ppppppplStack_88 = ppppppplVar8;
          func_0x0001079003cc(ppppppplVar15,ppppppplVar14,ppppppplVar16,ppppppplVar8);
          ppppppplVar8 = (long *******)&ppppppplStack_90;
          func_0x000107900388();
          func_0x000107916c58();
          while (uVar2 = ppppppplVar15 == ppppppplVar6, !(bool)uVar2) {
            ppppppplVar8 = ppppppplVar15;
            func_0x0001078e64cc();
            func_0x00010791629c();
            if ((bool)uVar2) {
              ppppppplVar16 = ppppppplVar16 + 1;
              ppppppplVar15 = (long *******)*ppppppplVar16;
            }
          }
          param_5[5] = (long ******)((long)param_5[5] - (long)ppppppplVar7);
          while (func_0x000107917f6c(), (long *******)0x153 < ppppppplVar8) {
            func_0x000107917b64();
            ppppppplVar13 = (long *******)(param_5[2] + -1);
            ppppppplVar8 = param_5;
            func_0x0001079003dc();
          }
        }
      }
    }
    else {
      func_0x000107917f6c();
      if (ppppppplVar15 < ppppppplVar13) {
        func_0x000107918528();
        param_7 = (long *******)0x0;
        if (extraout_x11 != 0) {
          param_7 = (long *******)(extraout_x9_01 / extraout_x11);
        }
        ppppppplVar16 = (long *******)(ulong)(extraout_x9_01 != (long)param_7 * extraout_x11);
        func_0x000107918180();
        if (extraout_x11_00 < extraout_x10) {
          uVar9 = extraout_x10 - (long)unaff_x26;
          func_0x000107918374();
          if (extraout_x11_01 < uVar9) {
            ppppppplVar8 = (long *******)(extraout_x10_00 >> 2);
            ppppppplVar15 = (long *******)(uVar9 + (extraout_x8_01 >> 3));
            uVar2 = ppppppplVar8 == ppppppplVar15;
            if (ppppppplVar8 <= ppppppplVar15) {
              ppppppplVar8 = ppppppplVar15;
            }
            if (ppppppplVar8 != (long *******)0x0) {
              FUN_1078fe698();
            }
            func_0x00010791868c((extraout_x8_01 >> 3) - (long)unaff_x26);
            for (; ppppppplVar15 = ppppppplStack_c0, ppppppplVar16 = ppppppplStack_b8,
                ppppppplVar14 = ppppppplStack_b0, ppppppplVar7 = ppppppplStack_a8, uVar9 != 0;
                uVar9 = uVar9 - 1) {
              func_0x000107915748();
              ppppppplVar15 = (long *******)&ppppppplStack_c0;
              func_0x0001078fe558(ppppppplVar15,ppppppplVar8);
              ppppppplVar8 = ppppppplVar15;
            }
            while (unaff_x26 != (long *******)0x0) {
              pppppplVar12 = param_5[1];
              ppppppplVar8 = ppppppplVar16;
              ppppppplVar6 = ppppppplVar7;
              if (ppppppplVar14 == ppppppplVar7) {
                if (ppppppplVar16 < ppppppplVar15 || (long)ppppppplVar16 - (long)ppppppplVar15 == 0)
                {
                  uVar2 = (long)ppppppplVar7 - (long)ppppppplVar15 == 0;
                  uVar9 = (long)ppppppplVar7 - (long)ppppppplVar15 >> 2;
                  if ((bool)uVar2) {
                    uVar9 = 1;
                  }
                  uVar5 = uVar9;
                  FUN_1078fe698(uVar9);
                  func_0x0001079162b0(uVar5 + (uVar9 >> 2) * 8);
                  func_0x000107915ddc(&ppppppplStack_90);
                  func_0x0001078fe674();
                  ppppppplVar6 = ppppppplStack_78;
                  ppppppplVar8 = ppppppplStack_80;
                  ppppppplStack_90 = ppppppplVar15;
                  ppppppplStack_88 = ppppppplVar16;
                  ppppppplStack_80 = ppppppplVar14;
                  ppppppplStack_78 = ppppppplVar7;
                  func_0x0001078fe6e4(&ppppppplStack_90);
                  ppppppplVar14 = ppppppplVar8;
                }
                else {
                  uVar2 = (long)ppppppplVar7 - (long)ppppppplVar16 == 0;
                  if (!(bool)uVar2) {
                    func_0x0001079177ec();
                    _memmove();
                    ppppppplVar8 = extraout_x9_03;
                  }
                  ppppppplVar14 =
                       (long *******)
                       ((long)ppppppplVar16 +
                       ((long)ppppppplVar7 - (long)ppppppplVar16) +
                       ((((long)ppppppplVar16 - (long)ppppppplVar15 >> 3) + 1) / -2) * 8);
                }
              }
              else {
                uVar2 = 0;
              }
              func_0x000107917068(*pppppplVar12);
              ppppppplVar15 = extraout_x9_04;
              ppppppplVar16 = ppppppplVar8;
              ppppppplVar7 = ppppppplVar6;
            }
            param_7 = (long *******)param_5[2];
            ppppppplStack_c0 = ppppppplVar15;
            ppppppplStack_b8 = ppppppplVar16;
            ppppppplStack_b0 = ppppppplVar14;
            while (func_0x00010791763c(), !(bool)uVar2) {
              param_7 = param_7 + -1;
              func_0x0001078fe5dc(&ppppppplStack_c0,param_7);
            }
            func_0x000107916944();
            param_5[4] = extraout_x8_04;
            ppppppplVar15 = (long *******)&ppppppplStack_c0;
            func_0x0001078fe6e4();
          }
          else {
            lVar10 = (long)ppppppplVar16 - (long)unaff_x26;
            for (; (undefined1 *)(lVar10 + (long)param_7) != (undefined1 *)0x0;
                param_7 = (long *******)((long)param_7 + -1)) {
              if (param_5[3] == param_5[2]) {
                unaff_x26 = (long *******)((long)ppppppplVar16 + (long)param_7);
                break;
              }
              func_0x000107915748();
              ppppppplVar8 = param_5;
              func_0x0001078fe458(param_5,ppppppplVar15);
              ppppppplVar15 = ppppppplVar8;
            }
            puVar11 = (undefined1 *)(lVar10 + (long)param_7);
            param_7 = (long *******)0xa9;
            while (puVar11 != (undefined1 *)0x0) {
              func_0x000107915748();
              ppppppplVar8 = param_5;
              func_0x0001078fe4c8(param_5,ppppppplVar15);
              puVar11 = puVar11 + -1;
              lVar10 = 0xa9;
              if ((long)param_5[2] - (long)param_5[1] != 8) {
                lVar10 = 0xaa;
              }
              param_5[4] = (long ******)(lVar10 + (long)param_5[4]);
              ppppppplVar15 = ppppppplVar8;
            }
            func_0x000107918498(0xffffffffffffff56);
            for (; unaff_x26 != (long *******)0x0; unaff_x26 = (long *******)((long)unaff_x26 + -1))
            {
              func_0x000107914e6c();
              func_0x000107917f74();
            }
          }
        }
        else {
          func_0x000107918498(0xffffffffffffff56);
          for (; unaff_x26 != (long *******)0x0; unaff_x26 = (long *******)((long)unaff_x26 + -1)) {
            func_0x000107914e6c();
            func_0x000107917f74();
          }
        }
      }
      func_0x000107917334();
      func_0x00010791801c();
      func_0x000107900388();
      while (param_7 != ppppppplVar13) {
        ppppppplVar8 = param_7;
        ppppppplVar14 = ppppppplVar13;
        if (ppppppplVar16 != ppppppplVar15) {
          ppppppplVar14 = (long *******)(*ppppppplVar16 + 0x1fe);
        }
        for (; bVar3 = ppppppplVar8 == ppppppplVar14, !bVar3; ppppppplVar8 = ppppppplVar8 + 3) {
          *ppppppplVar8 = (long ******)0x0;
          ppppppplVar8[1] = (long ******)0x0;
          ppppppplVar8[2] = (long ******)0x0;
        }
        func_0x000107916598();
        if (!bVar3) {
          ppppppplVar16 = (long *******)(extraout_x9_05 + 8);
          param_7 = (long *******)*ppppppplVar16;
        }
      }
    }
    lVar17 = lVar17 + (extraout_x9_00 & 0xf) * 0x178 + ((ulong)param_4 & 0xffffffff) * 0xa8;
    ppppppplStack_d0 = ppppppplStack_d8;
    *(undefined4 *)(lVar17 + 200) = 4;
    *(undefined1 *)(lVar17 + 0xcc) = 1;
    ppppppplVar15 = param_6;
    func_0x0001078fb480();
    while (ppppppplVar8 = param_6, FUN_1078faa18(), ppppppplVar13 != ppppppplVar8) {
      for (lVar17 = 0; lVar17 != 0x150; lVar17 = lVar17 + 0xa8) {
        if (((*(byte *)((long)ppppppplVar13 + lVar17 + 0xcc) & 1) == 0) &&
           ((*(byte *)((long)ppppppplVar13 + lVar17 + 0xcd) & 1) == 0)) {
          *(undefined4 *)((long)ppppppplVar13 + lVar17 + 200) = 0;
        }
      }
      ppppppplVar13 = ppppppplVar13 + 0x2f;
      if ((long)ppppppplVar13 - (long)*ppppppplVar15 == 0x1780) {
        ppppppplVar15 = ppppppplVar15 + 1;
        ppppppplVar13 = (long *******)*ppppppplVar15;
      }
    }
    goto LAB_1078fd438;
  }
  unaff_x26 = ppppppplVar16 + ((ulong)param_4 & 0xffffffff) * 0x15 + 5;
  ppppppplVar14 = unaff_x26;
  if (ppppppplStack_90 != param_3) {
    lVar17 = *(long *)(param_1 + 0x48);
    if (0 < (long)ppppppplVar16[3]) {
      func_0x0001079170a8();
      lVar10 = extraout_x11_02 + (extraout_x10_01 & 0xffffffff) * 0x178;
      lVar17 = extraout_x8_02;
      if (*(long *)(lVar10 + 0x18) == extraout_x9_02) {
        lVar10 = lVar10 + (long)(int)ppppppplStack_c0 * 0xa8;
        ppppppplVar16 = *(long ********)(lVar10 + 0x88);
        if (ppppppplVar16 == (long *******)0xffffffffffffffff) {
          ppppppplVar16 = *(long ********)(lVar10 + 0x80);
        }
        ppppppplVar14 = (long *******)(lVar10 + 0x28);
        if (ppppppplVar16 == param_3) goto LAB_1078fce90;
      }
    }
    lVar17 = *(long *)(lVar17 + 0x28) * 2 + 4;
    do {
      lVar17 = lVar17 + -1;
      if (lVar17 == 0) goto LAB_1078fcd2c;
      func_0x000107918578();
      func_0x000107915a0c();
      func_0x0001078fd56c();
      if ((int)ppppppplVar15 != 0) goto LAB_1078fcd2c;
      ppppppplVar14 = unaff_x26;
    } while (ppppppplStack_90 != param_3 || (int)ppppppplStack_c0 != (int)param_4);
  }
LAB_1078fce90:
  *(undefined4 *)(ppppppplVar14 + 0x14) = 3;
  if ((ulong)((long)ppppppplStack_d0 - (long)ppppppplStack_d8) < 0x31) goto LAB_1078fd438;
  ppppppplVar16 = ppppppplStack_d8;
  if (0x40 < (ulong)((long)ppppppplStack_d0 - (long)ppppppplStack_d8)) {
    param_7 = *(long ********)(param_1 + 0x68);
    do {
      ppppppplVar16 = ppppppplStack_d8;
      ppppppplVar8 = ppppppplStack_d0 + -4;
      func_0x000107916d1c();
      if ((int)ppppppplVar15 == 0) break;
      func_0x0001078f42d8(&ppppppplStack_d8,ppppppplVar16);
      func_0x000107916a3c(ppppppplStack_d8);
      func_0x0001078f3294(&ppppppplStack_d8,extraout_x8_03 + -1);
      ppppppplVar15 = (long *******)&ppppppplStack_d8;
      ppppppplVar8 = ppppppplStack_d8;
      func_0x0001078e96d4(ppppppplVar15,ppppppplStack_d8);
      ppppppplVar16 = ppppppplStack_d8;
    } while (0x40 < (ulong)((long)ppppppplStack_d0 - (long)ppppppplStack_d8));
  }
  func_0x000107917f6c();
  if (ppppppplVar15 == (long *******)0x0) {
    bVar3 = (long ******)0xa9 < param_5[4];
    pppppplVar12 = (long ******)((long)param_5[4] + -0xaa);
    uVar2 = pppppplVar12 == (long ******)0x0;
    if (bVar3) {
      param_5[4] = pppppplVar12;
      ppppppplVar15 = ppppppplVar8;
LAB_1078fcf14:
      func_0x000107914e6c();
      func_0x000107917f74();
      ppppppplVar8 = ppppppplVar15;
    }
    else {
      func_0x000107916a74();
      if (bVar3) {
        func_0x0001079183c8();
        FUN_1078fe698();
        func_0x0001079162b0((undefined1 *)((long)ppppppplVar15 + (long)ppppppplVar16));
        func_0x000107915748();
        func_0x000107918064();
        func_0x0001078fe558(&ppppppplStack_90);
        ppppppplStack_c0 = (long *******)0x0;
        param_7 = (long *******)param_5[2];
        ppppppplVar8 = ppppppplVar15;
        while (func_0x00010791763c(), !(bool)uVar2) {
          param_7 = param_7 + -1;
          ppppppplVar8 = param_7;
          func_0x0001078fe5dc(&ppppppplStack_90,param_7);
        }
        func_0x000107916964();
        func_0x0001078fe6c0();
        func_0x0001078fe6e4(&ppppppplStack_90);
      }
      else {
        func_0x000107915748();
        if (param_4 == param_7) {
          func_0x0001078fe4c8(param_5,ppppppplVar15);
          goto LAB_1078fcf14;
        }
        func_0x0001078fe458(param_5);
        ppppppplVar8 = ppppppplVar15;
      }
    }
  }
  func_0x000107917334();
  func_0x0001078f4328(ppppppplVar8,&ppppppplStack_d8);
  func_0x0001079170cc();
  func_0x0001078fb480();
  func_0x000107917618();
  while( true ) {
    FUN_1078faa18();
    uVar2 = param_4 <= ppppppplVar16;
    if (ppppppplVar16 == param_4) break;
    lVar17 = 0;
    lVar10 = 0x150;
    uVar4 = 0;
    do {
      func_0x000107915f64(*(undefined4 *)((long)ppppppplVar16 + lVar17 + 200));
      if (!(bool)uVar2 || (bool)uVar4) {
        ppppppplStack_80 = *(long ********)((long)ppppppplVar16 + lVar17 + 0x40);
        ppppppplStack_88 = *(long ********)((long)ppppppplVar16 + lVar17 + 0x38);
        ppppppplStack_90 = *(long ********)((long)ppppppplVar16 + lVar17 + 0x30);
        func_0x000107917324();
        *(undefined1 *)param_4 = 1;
        uVar1 = *(uint *)((long)ppppppplVar16 + lVar17 + 0x28);
        uVar2 = 3 < uVar1;
        uVar4 = uVar1 == 4;
        if ((bool)uVar4) {
          func_0x000107917678();
          func_0x000107917324();
          *(undefined1 *)param_4 = 1;
        }
        func_0x000107915f64(*(undefined4 *)((long)ppppppplVar16 + lVar17 + 200));
        if (!(bool)uVar2 || (bool)uVar4) {
          *(undefined1 *)((long)ppppppplVar16 + lVar17 + 0xcd) = 1;
        }
      }
      lVar10 = lVar10 + -0xa8;
      lVar17 = lVar17 + 0xa8;
    } while (lVar10 != 0);
    ppppppplVar16 = ppppppplVar16 + 0x2f;
    if ((long)ppppppplVar16 - (long)*param_7 == 0x1780) {
      param_7 = param_7 + 1;
      ppppppplVar16 = (long *******)*param_7;
    }
    param_4 = *(long ********)(param_1 + 0x10);
  }
  func_0x00010791753c();
LAB_1078fd438:
  func_0x0001078e64cc(&ppppppplStack_d8);
  return;
}



/* Entry: 1078fe354; end: 1078fe39f;  */

undefined8 FUN_1078fe354(long param_1,long param_2,long param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = (int *)(param_1 + 0x2c);
  lVar2 = (param_2 - param_1) / 0x70;
  while( true ) {
    if (lVar2 == 0) {
      return 0xffffffffffffffff;
    }
    if (((*(long *)(piVar1 + -3) == param_3) && (piVar1[-1] == param_4)) && (*piVar1 == 1)) break;
    piVar1 = piVar1 + 0x1c;
    lVar2 = lVar2 + -1;
  }
  return *(undefined8 *)(piVar1 + -7);
}



/* Entry: 1078fe698; end: 1078fe71b;  */

void FUN_1078fe698(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    func_0x00010791464c();
    return;
  }
  func_0x000104bd35f4();
  func_0x0001004d7774();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078ff82c; end: 1078ff88b;  */

undefined1 * FUN_1078ff82c(undefined1 *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_d8 [152];
  
  uVar1 = param_3 == 99;
  if ((99 < param_3) ||
     (uVar1 = param_2[1] - *param_2 == 0x79, (ulong)(param_2[1] - *param_2) < 0x79)) {
    func_0x000107915d78(param_2,param_4);
    if (!(bool)uVar1) {
      func_0x000107914c78();
      lVar3 = extraout_x8;
      while (uVar1 = unaff_x21 == lVar3, !(bool)uVar1) {
        func_0x000107915d6c();
        while (func_0x000107916f18(), lVar3 = extraout_x8_00, unaff_x21 = unaff_x22, !(bool)uVar1) {
          func_0x00010791460c();
          func_0x0001078fe9c0();
          if (((ulong)param_2 & 1) == 0) {
            return (undefined1 *)0x0;
          }
        }
      }
    }
    return (undefined1 *)0x1;
  }
  func_0x0001079142d0(param_1,param_2,param_3 + 1);
  func_0x000107916450();
  func_0x000107913364();
  func_0x000107913b24();
  func_0x0001078f9428();
  func_0x000107915ec8();
  if ((bool)uVar1) {
code_r0x0001078fe96c:
    func_0x000107915ed4();
    func_0x000107914d88();
    func_0x0001078ff6b8();
    if ((int)param_1 != 0) {
      func_0x0001079172ac();
      func_0x000107914d88();
      func_0x0001078ff6b8();
      goto code_r0x0001078fe994;
    }
  }
  else {
    func_0x0001079155e0();
    iVar2 = (int)param_1;
    func_0x0001078faedc();
    func_0x0001079155e0();
    func_0x000107914d88();
    func_0x0001078ff6b8();
    if (iVar2 != 0) {
      param_1 = auStack_d8;
      func_0x0001079149c4();
      func_0x0001078ff798();
      if ((int)param_1 != 0) {
        func_0x0001079155e0();
        func_0x000107913cc4();
        func_0x0001078ff798();
        if (((ulong)param_1 & 1) != 0) goto code_r0x0001078fe96c;
      }
    }
  }
  param_1 = (undefined1 *)0x0;
code_r0x0001078fe994:
  func_0x0001079154b4();
  func_0x000107915384();
  func_0x0001079154e4();
  return param_1;
}



/* Entry: 1078ffde0; end: 1078fffb3;  */

void FUN_1078ffde0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  long unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar4;
  long unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong in_stack_00000008;
  
  func_0x000107916c08();
  func_0x000107914424();
  func_0x0001079149ec((extraout_x8 >> 3) * 0x14 + -1);
  if (!(bool)in_ZR) goto LAB_1078fff10;
  bVar1 = 0x13 < extraout_x8_00;
  uVar2 = extraout_x8_00 - 0x14 == 0;
  if (bVar1) {
    func_0x0001079150b8();
  }
  else {
    func_0x000107914998(extraout_x8_00 - 0x14);
    if (bVar1) {
      func_0x000107914980();
      func_0x000107900080();
      func_0x000107914554();
      __Znwm();
      uVar2 = 0;
      uVar4 = unaff_x22;
      if (unaff_x24 == unaff_x23 * 8) {
        uVar2 = unaff_x28 == unaff_x27;
        if ((bool)uVar2) {
          func_0x000107918610();
          func_0x000107900080(1);
          func_0x00010791451c();
          func_0x00010790005c();
          func_0x0001079140f0();
          func_0x0001079000cc();
          func_0x000107915010();
          uVar4 = unaff_x23;
        }
        else {
          func_0x0001079140b0();
        }
      }
      func_0x000107914958();
      while (func_0x000107918764(), !(bool)uVar2) {
        if (unaff_x22 == unaff_x21) {
          uVar2 = uVar4 == unaff_x26;
          if (uVar4 < unaff_x26) {
            func_0x000107914584();
            uVar4 = uVar4 + extraout_x8_01 * 8;
            if (!(bool)uVar2) {
              func_0x00010791548c();
            }
          }
          else {
            uVar2 = unaff_x26 - unaff_x21 == 0;
            lVar3 = (long)(unaff_x26 - unaff_x21) >> 2;
            if ((bool)uVar2) {
              lVar3 = 1;
            }
            func_0x000107900080(lVar3);
            func_0x0001079139dc(lVar3 * 2 + 6);
            func_0x000107915f88();
            func_0x00010790005c();
            func_0x000107914920();
            func_0x0001079000cc();
            func_0x000107916300();
          }
        }
        else {
          uVar2 = 0;
        }
        func_0x0001079163f0();
      }
      func_0x0001079140d0();
      func_0x0001079000a8();
      func_0x0001079000cc(&stack0x00000028);
      unaff_x26 = in_stack_00000008;
      goto LAB_1078fff10;
    }
    __Znwm(4000);
    func_0x0001079186f4();
    if (!(bool)uVar2) {
      func_0x000107918770();
      goto LAB_1078fff10;
    }
    if (unaff_x27 == unaff_x23) {
      func_0x000107914538();
      func_0x000107900080();
      func_0x0001079139dc(unaff_x19 + 6);
      func_0x0001079186dc();
      func_0x00010790005c();
      func_0x000107914740();
      func_0x0001079000cc();
    }
    func_0x000107915178();
  }
  func_0x0001078fffec();
LAB_1078fff10:
  func_0x0001078fffb4();
  _memcpy(param_2,unaff_x26,200);
  func_0x0001079163d8();
  return;
}



/* Entry: 107900200; end: 107900213;  */

void FUN_107900200(void)

{
  func_0x0001079002bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079003f8; end: 107900423;  */

long FUN_1079003f8(long param_1)

{
  func_0x0001078fca5c(*(undefined8 *)(param_1 + 0x40));
  func_0x0001078fca28(*(undefined8 *)(param_1 + 0x28));
  return param_1;
}



/* Entry: 1079007a0; end: 1079007c7;  */

undefined8 * FUN_1079007a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  func_0x0001079007c8();
  return param_1;
}



/* Entry: 107900a20; end: 107900aa7;  */

long FUN_107900a20(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + (*(ulong *)(param_2 + 0x20) / 0xaa) * 8);
  if (*(long *)(param_2 + 0x10) == *(long *)(param_2 + 8)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar1 + (*(ulong *)(param_2 + 0x20) % 0xaa) * 0x18;
  }
  if (param_1 != 0) {
    uVar2 = (lVar3 - *plVar1) / 0x18 + param_1;
    if ((long)uVar2 < 1) {
      func_0x000107917a4c();
      lVar3 = extraout_x8;
    }
    else {
      lVar3 = plVar1[uVar2 / 0xaa] + (uVar2 % 0xaa) * 0x18;
    }
  }
  return lVar3;
}



/* Entry: 107900ecc; end: 107900f2b;  */

void FUN_107900ecc(double param_1,undefined8 *param_2,long *param_3,ulong param_4,undefined8 param_5
                  )

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 auStack_f0 [112];
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_4 == 99;
  if ((param_4 < 100) &&
     (uVar1 = param_3[1] - *param_3 == 0x79, 0x78 < (ulong)(param_3[1] - *param_3))) {
    func_0x00010791551c(param_2,param_3,param_4 + 1);
    func_0x0001079144cc();
    dStack_80 = param_1 * 0.5;
    uStack_78 = param_2[1];
    uStack_60 = *param_2;
    uStack_68 = param_2[3];
    uStack_70 = param_2[2];
    uStack_58 = uStack_78;
    dStack_50 = dStack_80;
    uStack_48 = uStack_68;
    func_0x000107913364();
    func_0x00010791463c(&uStack_60,&dStack_80);
    func_0x000107900cc8();
    func_0x000107915ec8();
    if (!(bool)uVar1) {
      func_0x000107913d34();
      func_0x000107916258();
      func_0x000107900e4c();
      func_0x0001079183e8();
      func_0x000107915350();
      func_0x000107914d88();
      func_0x000107900d20();
      func_0x0001079149c4(auStack_f0);
      func_0x000107900e18();
      func_0x000107915350();
      func_0x000107913cc4();
      func_0x000107900e18();
    }
    func_0x000107918208();
    func_0x000107914d88();
    func_0x000107900d20();
    func_0x000107918854();
    func_0x000107914d88();
    func_0x000107900d20();
    func_0x000107915b60();
    func_0x0001079159d0();
    func_0x000107915b7c();
    return;
  }
  func_0x000107915d78(param_3,param_5);
  if (!(bool)uVar1) {
    func_0x000107914c78();
    lVar2 = extraout_x8;
    while (unaff_x21 != lVar2) {
      func_0x000107915d6c();
      lVar2 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar2) {
        func_0x00010791460c();
        func_0x000107900b6c();
        lVar2 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 1079013f8; end: 1079014eb;  */

void FUN_1079013f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar4;
  
  func_0x000107914c78();
  uVar3 = *param_2;
  func_0x0001078fbd80(uVar3,param_2[1]);
  if ((int)uVar3 == 0) {
    puVar1 = (undefined8 *)*unaff_x20;
    puVar2 = (undefined8 *)unaff_x20[1];
    if (puVar1 != puVar2) {
      do {
        puVar4 = puVar1 + 2;
        if (puVar4 == puVar2) {
          return;
        }
        uVar3 = *unaff_x19;
        func_0x0001078fbd80(*puVar4,puVar1[3],uVar3,unaff_x19[1]);
        puVar1 = puVar4;
      } while ((int)uVar3 == 0);
    }
  }
  return;
}



/* Entry: 107901f0c; end: 107901f27;  */

/* WARNING: Possible PIC construction at 0x0001078ea424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078ea428) */
/* WARNING: Removing unreachable block (ram,0x0001078ea43c) */
/* WARNING: Removing unreachable block (ram,0x000107917b14) */
/* WARNING: Removing unreachable block (ram,0x0001078ea42c) */

bool FUN_107901f0c(double *param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_2 - (long)param_1 == 0x20) {
    dVar1 = *param_1;
    dVar4 = *(double *)(param_2 + -0x10);
    if (dVar1 == dVar4) {
      return true;
    }
    if (((ulong)ABS(dVar1) < 0x7ff0000000000000) && ((ulong)ABS(dVar4) < 0x7ff0000000000000)) {
      dVar2 = ABS(dVar4);
      if (ABS(dVar4) <= ABS(dVar1)) {
        dVar2 = ABS(dVar1);
      }
      dVar3 = 1.0;
      if (1.0 <= dVar2) {
        dVar3 = dVar2;
      }
      return ABS(dVar1 - dVar4) <= dVar3 * 2.220446049250313e-16;
    }
  }
  return false;
}



/* Entry: 107902410; end: 1079024fb;  */

undefined8 FUN_107902410(double param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  long lVar2;
  undefined8 uVar3;
  double *unaff_x19;
  long *unaff_x20;
  double *unaff_x21;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = *param_3 - *param_2;
  dVar4 = param_3[1] - param_2[1];
  dVar5 = SQRT(dVar4 * dVar4 + dVar7 * dVar7);
  if ((ulong)ABS(dVar5) < 0x7ff0000000000000) {
    func_0x0001079145dc();
    func_0x000107917b44(dVar5);
    if (((ulong)param_2 & 1) == 0) {
      dVar6 = ABS(param_1);
      if (0.0 <= param_1) {
        dVar6 = param_1;
      }
      dVar4 = -dVar4 / dVar5;
      dVar7 = dVar7 / dVar5;
      func_0x000107917b44(dVar4);
      if (((int)param_2 == 0) || (func_0x000107917b44(dVar7), ((ulong)param_2 & 1) == 0)) {
        func_0x0001078f3294();
        pdVar1 = (double *)*unaff_x20;
        lVar2 = unaff_x20[1];
        *pdVar1 = *unaff_x21 + dVar6 * dVar4;
        pdVar1[1] = unaff_x21[1] + dVar6 * dVar7;
        *(double *)(lVar2 + -0x10) = *unaff_x19 + dVar6 * dVar4;
        *(double *)(lVar2 + -8) = unaff_x19[1] + dVar6 * dVar7;
        return 0;
      }
    }
    uVar3 = 2;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 107902bb0; end: 107902c1f;  */

/* WARNING: Possible PIC construction at 0x000107902c18: Changing call to branch */

void FUN_107902bb0(ulong param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x9;
  long extraout_x10;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x23;
  ulong *unaff_x24;
  undefined8 uVar3;
  undefined8 *unaff_x27;
  undefined *puVar4;
  undefined8 **in_stack_00000040;
  undefined8 *puStack_10;
  undefined *puStack_8;
  
  func_0x000107917a38();
  func_0x000107914124();
  if ((bool)in_CY) {
    func_0x000107913c08();
    if (extraout_x10 != 0) {
      puVar4 = (undefined *)0x107902c1c;
code_r0x000107902c20:
      puStack_10 = &stack0x00000040;
      puStack_8 = puVar4;
      func_0x000107913ad0();
      func_0x000107915f10();
      in_stack_00000040 = &puStack_10;
      func_0x0001079133e4();
      while (func_0x000107915ebc(), !(bool)in_ZR) {
        uVar3 = *unaff_x27;
        func_0x0001079161e4();
        func_0x000107902f78();
        uVar2 = unaff_x23;
        func_0x000107902f78();
        if (((param_1 & 1) != 0) || ((uint)uVar2 != 0)) {
          uVar1 = unaff_x19;
          if (((uint)param_1 & (uint)uVar2) == 0) {
            uVar1 = unaff_x21;
          }
          in_ZR = (uint)param_1 == 0;
          uVar2 = uVar1;
          if ((bool)in_ZR) {
            uVar2 = unaff_x20;
          }
          func_0x0001078eda1c(uVar2,uVar3);
        }
        unaff_x27 = unaff_x27 + 1;
        param_1 = uVar2;
      }
      return;
    }
    func_0x000107913680();
    uVar2 = extraout_x9;
    if ((bool)in_CY) {
      uVar2 = extraout_x8;
    }
    if (uVar2 != 0) {
      if (uVar2 >> 0x3d != 0) {
        puVar4 = &SUB_107902c20;
        func_0x000104bd35f4();
        goto code_r0x000107902c20;
      }
      func_0x000107915ccc();
    }
    func_0x000107913480();
    func_0x00010791692c();
    if (unaff_x20 != 0) {
      func_0x000107914d94();
    }
  }
  else {
    *unaff_x24 = unaff_x21;
    unaff_x24 = unaff_x24 + 1;
  }
  *(ulong **)(unaff_x19 + 8) = unaff_x24;
  return;
}



/* Entry: 107902fd8; end: 107902ffb;  */

void FUN_107902fd8(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
  }
  return;
}



/* Entry: 1079031ec; end: 1079031f3;  */

void FUN_1079031ec(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107914c78(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000107903640(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107903560; end: 10790356b;  */

ulong FUN_107903560(ulong param_1)

{
  ulong extraout_x8;
  long lVar1;
  long lVar2;
  
  func_0x000107913ad0();
  func_0x000107914b0c();
  if (param_1 < extraout_x8) {
    func_0x000107915538();
    return param_1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      func_0x000107903640(lVar1);
    }
  }
  return param_1;
}



/* Entry: 1079063f8; end: 10790649f;  */

long FUN_1079063f8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x000107914d70();
  func_0x000107915bc8();
  lVar1 = extraout_x8;
  while (lVar1 != 0) {
    while (func_0x0001079147f8(), unaff_x22 = unaff_x20, (int)param_1 == 0) {
      func_0x0001079154bc();
      if ((int)param_1 == 0) goto LAB_107906494;
      if (*(long *)(unaff_x20 + 8) == 0) goto LAB_107906448;
    }
    func_0x000107915c94();
    lVar1 = extraout_x8_00;
  }
LAB_107906448:
  lVar1 = 0x90;
  __Znwm();
  func_0x0001079151e8();
  *(undefined8 *)(lVar1 + 0x30) = extraout_x8_01;
  *(undefined1 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined2 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x68) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x70) = 0xbff0000000000000;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  func_0x000107913628();
  if (extraout_x8_02 != 0) {
    *unaff_x19 = extraout_x8_02;
  }
  func_0x000107913f98();
  func_0x0001004d7750();
  unaff_x20 = unaff_x22;
LAB_107906494:
  return unaff_x20 + 0x38;
}



/* Entry: 107906a04; end: 107906a0f;  */

void FUN_107906a04(long *param_1)

{
  long unaff_x21;
  long lVar1;
  
  func_0x000107913ad0();
  func_0x000107913cd4();
  for (lVar1 = *param_1; lVar1 != *(long *)(unaff_x21 + 8); lVar1 = lVar1 + 0x68) {
    func_0x000107917f18();
    func_0x00010791535c();
    func_0x000107906f60();
  }
  return;
}



/* Entry: 107907010; end: 107907073;  */

void FUN_107907010(ulong param_1)

{
  undefined1 in_ZR;
  int iVar1;
  ulong extraout_x8;
  ulong unaff_x20;
  ulong unaff_x23;
  
  func_0x000107915f10();
  func_0x0001079133e4();
  while( true ) {
    iVar1 = (int)param_1;
    func_0x000107915ebc();
    if ((bool)in_ZR) break;
    func_0x00010791743c();
    func_0x000107907300();
    param_1 = unaff_x23;
    func_0x000107907300();
    if ((iVar1 == 0) || ((param_1 & 1) == 0)) {
      func_0x000107916104();
      in_ZR = iVar1 == 0;
      param_1 = unaff_x20;
      if ((bool)in_ZR) {
        param_1 = extraout_x8;
      }
      func_0x000107906f60();
    }
  }
  return;
}



/* Entry: 1079073d4; end: 1079073db;  */

void FUN_1079073d4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x000107913588();
  func_0x000107906fdc();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar2)) goto code_r0x000107906a98;
      func_0x000107914d1c();
      func_0x000107913668();
      func_0x00010790709c();
    }
    else {
code_r0x000107906a98:
      func_0x0001079142a0();
      func_0x000107907250();
    }
    func_0x000107914220();
    in_CY = false;
    if (((bool)uVar2) && (func_0x0001079142c0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x00010791683c();
          func_0x000107913810();
          func_0x00010790709c();
          func_0x0001079137f8();
          func_0x00010790709c();
          goto code_r0x000107906b10;
        }
      }
    }
    func_0x000107914290();
    func_0x000107907250();
    func_0x0001079142b0();
    func_0x000107907250();
  }
code_r0x000107906b10:
  func_0x000107915a78();
  if ((bool)in_ZR) {
    func_0x0001079176fc();
code_r0x000107906b6c:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto code_r0x000107906b74;
  }
  else {
    func_0x0001079156e4();
    if ((((!(bool)in_CY) || (func_0x000107914210(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x0001079145fc();
      func_0x000107907250();
      func_0x0001079142e0();
      func_0x000107907250();
      goto code_r0x000107906b6c;
    }
    func_0x00010791682c();
    func_0x000107913840();
    func_0x00010790709c();
    func_0x000107913828();
    func_0x00010790709c();
code_r0x000107906b74:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107914200(), (bool)uVar2)) {
      func_0x0001079137b0();
      func_0x00010790709c();
      goto code_r0x000107906b98;
    }
  }
  func_0x0001079145ec();
  func_0x000107907250();
code_r0x000107906b98:
  func_0x0001079141f0();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar1)) {
    func_0x0001079137c8();
    func_0x00010790709c();
  }
  else {
    func_0x0001079142f0();
    func_0x000107907250();
  }
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return;
}



/* Entry: 10790822c; end: 1079082e3;  */

ulong FUN_10790822c(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4,int param_5)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  uint extraout_w8;
  undefined8 extraout_x8;
  double dVar5;
  undefined8 in_register_00005008;
  double dVar6;
  undefined8 in_register_00005028;
  double dVar7;
  undefined8 uStack_28;
  
  func_0x000107913ca4();
  func_0x0001079082e4();
  func_0x000107916388();
  *(undefined8 *)(param_3 + 0x72) = in_register_00005008;
  *(undefined8 *)(param_3 + 0x6a) = param_1;
  *(undefined2 *)(param_3 + 0x68) = 100;
  *(undefined8 *)(param_3 + 0x82) = in_register_00005028;
  *(undefined8 *)(param_3 + 0x7a) = param_2;
  *(undefined8 *)(param_3 + 0x8c) = 0;
  *(undefined8 *)(param_3 + 0x84) = uStack_28;
  func_0x000107913564(extraout_x8);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  dVar5 = (double)(int)param_3;
  dVar6 = (double)param_4;
  dVar7 = (double)param_5;
  func_0x000107917da8();
  cVar3 = NAN(dVar5);
  uVar2 = dVar5 == 0.0;
  cVar1 = dVar5 < 0.0;
  if (!(bool)uVar2) {
    func_0x000107915fcc();
    if (cVar1 == cVar3) {
      uVar4 = 0xffffffff;
      if (0.0 < dVar5) {
        uVar4 = 1;
      }
      return (ulong)uVar4;
    }
    func_0x000107914b3c();
    uVar4 = extraout_w8;
    if (!(bool)uVar2 && cVar1 == cVar3) {
      uVar4 = 1;
    }
    if (dVar6 < dVar7) {
      return (ulong)uVar4;
    }
  }
  return 0;
}



/* Entry: 107908cac; end: 107908d67;  */

void FUN_107908cac(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  puVar7 = param_2 + 1;
  iVar3 = *(int *)*param_2;
  iVar4 = *(int *)*puVar7;
  if (iVar3 < iVar4) {
    if (iVar1 < iVar3) goto LAB_107908d3c;
  }
  else if (iVar4 < iVar3 && iVar3 < iVar1) goto LAB_107908d3c;
  iVar5 = ((int *)*param_2)[1];
  iVar6 = ((int *)*puVar7)[1];
  if (iVar5 < iVar6) {
    if (iVar2 < iVar5) goto LAB_107908d3c;
  }
  else if (iVar6 < iVar5 && iVar5 < iVar2) goto LAB_107908d3c;
  param_2 = puVar7;
  if (iVar4 < iVar3) {
    if (iVar1 < iVar4) goto LAB_107908d3c;
  }
  else if (iVar3 < iVar4 && iVar4 < iVar1) goto LAB_107908d3c;
  if (iVar6 < iVar5) {
    if (iVar6 <= iVar2) {
      return;
    }
  }
  else if (iVar6 <= iVar5 || iVar2 <= iVar6) {
    return;
  }
LAB_107908d3c:
  piVar8 = (int *)*param_2;
  *param_1 = *piVar8;
  param_1[1] = piVar8[1];
  return;
}



/* Entry: 1079090dc; end: 107909173;  */

void FUN_1079090dc(void)

{
  long lVar1;
  bool bVar2;
  int extraout_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001079168ec();
  do {
    bVar2 = unaff_x20 == 8;
    if (bVar2) {
      return;
    }
    func_0x00010791784c();
    if (bVar2) {
      uStack_60 = 0x100000000;
LAB_107909134:
      func_0x00010790831c(&uStack_60);
      uVar3 = uStack_60;
      uVar4 = uStack_58;
    }
    else {
      if (extraout_w8 == 1) {
        uStack_60 = 0x100000001;
        goto LAB_107909134;
      }
      lVar1 = 0x18;
      if (unaff_x20 != 0) {
        lVar1 = 0x28;
      }
      uVar4 = ((undefined8 *)(unaff_x19 + lVar1))[1];
      uVar3 = *(undefined8 *)(unaff_x19 + lVar1);
    }
    unaff_x22[1] = uVar4;
    *unaff_x22 = uVar3;
    unaff_x20 = unaff_x20 + 4;
    unaff_x22 = unaff_x22 + 0x14;
  } while( true );
}



/* Entry: 1079093a0; end: 1079095d3;  */

void FUN_1079093a0(ulong param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint *puVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  ulong extraout_x8;
  long extraout_x9;
  undefined4 *extraout_x10;
  undefined4 *extraout_x10_00;
  undefined4 *puVar9;
  uint *unaff_x21;
  ulong uVar10;
  undefined4 *puVar11;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  uint uStack_31c;
  undefined4 *puStack_318;
  uint *puStack_308;
  long lStack_2f8;
  uint *puStack_2b0;
  long lStack_2a8;
  int *piStack_2a0;
  undefined1 auStack_298 [360];
  long lStack_130;
  uint *puStack_128;
  uint *puStack_120;
  uint *puStack_118;
  undefined1 uStack_100;
  undefined1 uStack_f0;
  uint *puStack_e8;
  undefined1 uStack_d0;
  uint *puStack_c0;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined1 uStack_68;
  undefined4 *puStack_50;
  undefined4 *puStack_28;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x000107915f10();
  func_0x000107915ba8();
  if ((((param_1 & 1) == 0) && ((unaff_x21[0x14] & 1) == 0)) &&
     (func_0x000107918140(), (extraout_x8 & 1) == 0)) {
    cVar3 = *(char *)(unaff_x27 + 0x2c);
    func_0x000107916a54();
    if (-1 < *(long *)(extraout_x9 + 0x18)) {
      func_0x000107915928();
    }
    func_0x0001079164e4();
    uVar1 = *unaff_x21;
    iVar2 = *piStack_2a0;
    uStack_10 = *(undefined8 *)(unaff_x21 + 0xc);
    uStack_18 = *(undefined8 *)(unaff_x21 + 0x16);
    func_0x000107914184(uStack_10,*(undefined8 *)(unaff_x21 + 0xe));
    func_0x000107909b94();
    func_0x000107917648();
    puStack_50 = puStack_28;
    func_0x000107914df8();
    func_0x000107916e64();
    puVar11 = puStack_28;
    while( true ) {
      uVar10 = (ulong)uVar1;
      puVar9 = puVar11 + 2;
      if (puVar9 == puStack_318) break;
      cVar5 = SCARRY4(uVar1,1);
      cVar6 = (int)(uVar1 + 1) < 0;
      if (uVar1 == 0xffffffff) {
        func_0x000107915d54(*puVar11);
        puVar9 = extraout_x10_00;
        if (cVar6 != cVar5) {
          return;
        }
      }
      else {
        cVar5 = SBORROW4(uVar1,1);
        cVar6 = (int)(uVar1 - 1) < 0;
        bVar7 = uVar1 == 1;
        if ((bVar7) && (func_0x000107916440(), puVar9 = extraout_x10, !bVar7 && cVar6 == cVar5)) {
          return;
        }
      }
      puStack_80 = puStack_50;
      uStack_68 = 1;
      puStack_90 = puVar11;
      puStack_88 = puVar9;
      func_0x000107915048();
      func_0x000107915e4c();
      func_0x000107909b94();
      puVar4 = puStack_c0;
      uStack_d0 = 1;
      puStack_e8 = puStack_c0;
      func_0x000107916208();
      func_0x000107916208();
      func_0x0001079177f8();
      while (puVar4 + 2 != puStack_2b0) {
        cVar5 = SCARRY4(iVar2,1);
        cVar6 = iVar2 + 1 < 0;
        uVar8 = iVar2 == -1;
        if ((bool)uVar8) {
          func_0x000107915d54();
          if (cVar6 != cVar5) break;
        }
        else {
          uVar8 = 0;
          if ((iVar2 == 1) &&
             (uVar8 = *puVar4 == unaff_x21[10], !(bool)uVar8 && (int)unaff_x21[10] <= (int)*puVar4))
          break;
        }
        func_0x000107917020();
        if ((bool)uVar8) {
          cVar5 = SBORROW8(unaff_x28,uVar10);
          cVar6 = (long)(unaff_x28 - uVar10) < 0;
          unaff_x21 = puStack_308;
          if (((unaff_x28 != uVar10) || (cVar3 == '\0')) ||
             ((unaff_x26 != 0 &&
              ((uVar10 = unaff_x28, lStack_2a8 != 0 || (func_0x0001079177d4(), cVar6 != cVar5))))))
          goto LAB_107909568;
        }
        else {
LAB_107909568:
          puStack_128 = puVar4;
          puStack_118 = puStack_e8;
          uStack_100 = 0;
          uStack_f0 = 0;
          lStack_130 = unaff_x25;
          puStack_120 = puVar4 + 2;
          func_0x000107907b94(auStack_298);
          func_0x000107915278();
        }
        unaff_x25 = unaff_x25 + 1;
        func_0x000107916208();
        func_0x0001079181b4();
      }
      func_0x000107914300();
      unaff_x26 = lStack_2f8 + 1;
      puVar11 = puVar9;
      uVar1 = uStack_31c;
    }
  }
  return;
}



/* Entry: 10790997c; end: 1079099d7;  */

void FUN_10790997c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x20;
  long unaff_x22;
  long lVar2;
  
  func_0x000107915c10();
  if ((!(bool)in_ZR) && (func_0x0001079143ac(), !(bool)in_ZR)) {
    func_0x00010791589c();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (unaff_x22 != lVar2) {
      lVar2 = *unaff_x20;
      while (lVar2 != lVar1) {
        func_0x00010791415c();
        FUN_1079093a0();
        lVar1 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 107909fb4; end: 10790a007;  */

void FUN_107909fb4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar1 = extraout_x8;
    while (unaff_x21 != lVar1) {
      func_0x000107915d6c();
      lVar1 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar1) {
        func_0x00010791460c();
        func_0x000107909c84();
        lVar1 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 10790a520; end: 10790a597;  */

long FUN_10790a520(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *extraout_x8;
  
  lVar1 = param_3 - *(long *)(param_2 + 0x18);
  if (param_3 < *(long *)(param_2 + 0x18)) {
    if (-1 < *(long *)(param_2 + 0x10)) {
      func_0x000107915928(lVar1);
      param_1 = extraout_x8;
    }
    lVar1 = lVar1 + (param_1[1] - *param_1 >> 3) + -1;
  }
  return lVar1;
}



/* Entry: 10790af4c; end: 10790af6f;  */

void FUN_10790af4c(long param_1,long param_2)

{
  func_0x0001078efde4();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return;
}



/* Entry: 10790b2e4; end: 10790b2ef;  */

/* WARNING: Possible PIC construction at 0x00010790b454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010790b458) */

void FUN_10790b2e4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar6;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined *puVar7;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 *in_stack_000000b0;
  undefined *in_stack_000000b8;
  
  puVar7 = &UNK_10790b2f0;
  func_0x000107913ad0();
  puVar5 = (undefined8 *)&stack0xfffffffffffffff0;
code_r0x00010790b2f0:
  func_0x000107916658();
  in_stack_000000b0 = puVar5;
  in_stack_000000b8 = puVar7;
  func_0x0001079141cc();
code_r0x00010790b30c:
  func_0x0001079157c0();
code_r0x00010790b310:
  while( true ) {
    func_0x0001079148f8();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010790b52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_10790b530 + (ulong)*(byte *)((long)unaff_x27 + 0x10dedb91c) * 4))();
      return;
    }
    uVar1 = 0x3be < extraout_x8;
    uVar4 = extraout_x8 == 0x3bf;
    if ((long)extraout_x8 < 0x3c0) {
      if (((ulong)unaff_x26 & 1) == 0) {
        if (unaff_x21 == unaff_x24) {
          return;
        }
        while (puVar5 = unaff_x21, unaff_x21 = puVar5 + 5, unaff_x21 != unaff_x24) {
          func_0x000107914d7c();
          func_0x0001079162f8();
          if (param_3 != 0) {
            func_0x000107915604();
            do {
              puVar6 = puVar5;
              func_0x000107914890();
              func_0x00010790b734();
              puVar5 = puVar6 + -5;
            } while ((param_3 & 1) != 0);
            func_0x000107915108();
            puVar6[9] = extraout_x8_01;
            puVar6[6] = in_register_00005008;
            puVar6[5] = param_1;
            puVar6[8] = in_register_00005028;
            puVar6[7] = param_2;
          }
        }
        return;
      }
      puVar5 = unaff_x21;
      if (unaff_x21 == unaff_x24) {
        return;
      }
      goto code_r0x00010790b5c4;
    }
    if (unaff_x23 == 0) {
      if (unaff_x21 == unaff_x24) {
        return;
      }
      func_0x0001079161d0();
      for (; -1 < unaff_x22; unaff_x22 = unaff_x22 + -1) {
        func_0x0001079143fc();
        FUN_10790bc98();
      }
      while( true ) {
        cVar2 = SBORROW8((long)unaff_x27,2);
        cVar3 = (long)((long)unaff_x27 - 2U) < 0;
        uVar4 = unaff_x27 == (undefined8 *)0x2;
        if ((long)unaff_x27 < 2) break;
        func_0x0001079148d4();
        do {
          func_0x00010791419c();
          if (cVar3 != cVar2) {
            func_0x00010791535c();
            func_0x00010790b734();
            cVar3 = (int)param_3 < 0;
            uVar4 = param_3 == 0;
            cVar2 = '\0';
          }
          func_0x000107914b7c();
        } while ((bool)uVar4 || cVar3 != cVar2);
        func_0x0001079174ec();
        if ((bool)uVar4) {
          func_0x000107915b08();
          func_0x00010791526c();
        }
        else {
          func_0x0001079143bc();
          if (cVar3 == cVar2) {
            func_0x000107914b9c();
            func_0x00010790b734();
            if (param_3 != 0) {
              func_0x000107915308();
              func_0x000107915344();
              do {
                func_0x00010791561c();
                func_0x00010791526c();
                func_0x000107918584();
                func_0x000107914d7c();
                func_0x00010790b734();
              } while ((param_3 & 1) != 0);
              func_0x000107914058();
            }
          }
        }
        unaff_x27 = (undefined8 *)((long)unaff_x27 - 1);
      }
      return;
    }
    func_0x0001079163b0();
    if ((bool)uVar1) {
      func_0x000107913e38();
      func_0x00010790b97c();
      func_0x0001079157a8();
      func_0x00010790b97c();
      func_0x00010791639c();
      func_0x00010790b97c();
      func_0x000107915808();
      func_0x00010790b97c();
      func_0x00010791407c();
      in_register_00005008 = unaff_x20[1];
      param_1 = *unaff_x20;
      in_register_00005028 = unaff_x20[3];
      param_2 = unaff_x20[2];
      func_0x000107914454(unaff_x20[4]);
      func_0x0001079158c0();
    }
    else {
      func_0x000107914a6c();
      func_0x00010790b97c();
    }
    unaff_x23 = unaff_x23 + -1;
    if (((ulong)unaff_x26 & 1) != 0) break;
    func_0x000107915b84();
    func_0x00010790b734();
    if ((param_3 & 1) != 0) break;
    func_0x000107914484();
    func_0x00010791741c();
    func_0x00010790b734();
    puVar5 = unaff_x21;
    if ((param_3 & 1) == 0) {
      do {
        func_0x000107917870(puVar5 + 5);
        if ((bool)uVar1) break;
        func_0x000107914668();
        func_0x00010790b734();
        puVar5 = unaff_x27;
      } while (param_3 == 0);
    }
    else {
      do {
        func_0x000107914508();
        func_0x00010790b734();
        unaff_x27 = unaff_x21;
      } while ((param_3 & 1) == 0);
    }
    func_0x000107917738();
    if (!(bool)uVar1) {
      do {
        func_0x0001079144e0();
        func_0x00010790b734();
        unaff_x26 = unaff_x24;
      } while ((param_3 & 1) != 0);
    }
    while (unaff_x27 < unaff_x26) {
      func_0x0001079144f4();
      func_0x000107917744();
      unaff_x27[4] = extraout_x8_00;
      unaff_x27[1] = in_register_00005008;
      *unaff_x27 = param_1;
      unaff_x27[3] = in_register_00005028;
      unaff_x27[2] = param_2;
      func_0x000107914058();
      do {
        func_0x000107914508();
        func_0x00010790b734();
      } while (param_3 == 0);
      do {
        func_0x0001079144e0();
        func_0x00010790b734();
      } while ((param_3 & 1) != 0);
    }
    in_CY = unaff_x27 + -5 <= unaff_x21;
    in_ZR = unaff_x21 == unaff_x27 + -5;
    if (!(bool)in_ZR) {
      func_0x0001079160a0();
    }
    unaff_x26 = (undefined8 *)0x0;
    func_0x0001079150e0();
  }
  unaff_x27 = (undefined8 *)0x0;
  func_0x000107914484();
  do {
    unaff_x27 = unaff_x27 + 5;
    func_0x000107915664();
    func_0x00010790b734();
  } while ((param_3 & 1) != 0);
  func_0x0001079174fc();
  if ((bool)uVar4) {
    do {
      unaff_x20 = unaff_x24;
      if (unaff_x24 < (undefined8 *)0x29) break;
      func_0x000107914440();
      func_0x00010790b734();
    } while ((param_3 & 1) == 0);
  }
  else {
    do {
      func_0x000107914440();
      func_0x00010790b734();
    } while (param_3 == 0);
  }
  func_0x0001079178ac();
  while (unaff_x27 < unaff_x28) {
    func_0x00010791424c();
    do {
      unaff_x27 = unaff_x27 + 5;
      func_0x000107915664();
      func_0x00010790b734();
    } while ((param_3 & 1) != 0);
    do {
      unaff_x28 = unaff_x28 + -5;
      func_0x000107915664();
      func_0x00010790b734();
    } while ((param_3 & 1) == 0);
  }
  unaff_x28 = unaff_x27 + -5;
  if (unaff_x21 != unaff_x28) {
    func_0x000107916544();
    func_0x0001079156d8();
  }
  func_0x0001079150cc();
  in_CY = unaff_x20 < (undefined8 *)0x29;
  in_ZR = unaff_x20 == (undefined8 *)0x28;
  if ((bool)in_CY) {
    func_0x0001079145cc();
    func_0x00010790baa8();
    func_0x00010791487c();
    func_0x00010790baa8();
    if (param_3 != 0) goto code_r0x00010790b50c;
    if (((ulong)unaff_x20 & 1) != 0) goto code_r0x00010790b310;
  }
  func_0x0001079141b4();
  puVar7 = &UNK_10790b458;
  puVar5 = &stack0x000000b0;
  goto code_r0x00010790b2f0;
code_r0x00010790b5c4:
  do {
    puVar5 = puVar5 + 5;
    if (puVar5 == unaff_x24) {
      return;
    }
    func_0x00010791535c();
    func_0x00010790b734();
  } while (param_3 == 0);
  func_0x000107915670();
  do {
    func_0x000107914728((long)unaff_x21 + unaff_x23);
    if (unaff_x23 == 0) break;
    func_0x00010791608c();
    func_0x00010790b734();
  } while ((param_3 & 1) != 0);
  func_0x0001079150f4();
  goto code_r0x00010790b5c4;
code_r0x00010790b50c:
  unaff_x24 = unaff_x28;
  if (((ulong)unaff_x20 & 1) != 0) {
    return;
  }
  goto code_r0x00010790b30c;
}



/* Entry: 10790bc98; end: 10790bf3b;  */

void FUN_10790bc98(ulong param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  char cVar2;
  undefined8 unaff_x30;
  
  cVar1 = SBORROW8(param_3,2);
  cVar2 = param_3 + -2 < 0;
  if (1 < param_3) {
    func_0x000107915994();
    func_0x000107914b1c();
    if (cVar2 == cVar1) {
      func_0x00010791416c();
      func_0x0001079163c4();
      if (cVar2 != cVar1) {
        func_0x0001079152e8();
        func_0x00010790b734();
        cVar2 = (int)param_1 < 0;
        cVar1 = '\0';
      }
      func_0x000107914f88();
      func_0x00010790b734();
      if ((param_1 & 1) == 0) {
        func_0x000107915750();
        do {
          func_0x000107914f08();
          if (cVar2 != cVar1) break;
          func_0x000107914eec();
          if (cVar2 != cVar1) {
            func_0x000107914f88();
            func_0x00010790b734();
            cVar2 = (int)param_1 < 0;
            cVar1 = '\0';
          }
          func_0x0001079152e8();
          func_0x00010790b734();
        } while ((int)param_1 == 0);
        func_0x000107915f50();
      }
    }
    func_0x0001079154c8(unaff_x30);
  }
  return;
}



/* Entry: 10790ccec; end: 10790ce7f;  */

void FUN_10790ccec(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar3;
  long unaff_x24;
  int unaff_w25;
  undefined1 auStack_b8 [104];
  
  func_0x000107914410();
  func_0x00010791645c();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010790cd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedb92e)[extraout_x8] * 4 + 0x10790cd34))(1);
    return;
  }
  func_0x000107914f98();
  func_0x00010790ca7c();
  func_0x000107917118();
  lVar2 = unaff_x19 + 0x138;
  do {
    if (lVar2 == unaff_x21) {
      return;
    }
    func_0x00010791532c(*unaff_x20);
    func_0x0001079170f0();
    if ((int)param_1 != 0) {
      func_0x0001079141e4(auStack_b8);
      lVar3 = unaff_x24;
      do {
        uVar1 = unaff_x19 + lVar3 + 0x138;
        func_0x000107914ab4(uVar1,unaff_x19 + lVar3 + 0xd0);
        param_1 = unaff_x19;
        if (lVar3 == -0xd0) goto LAB_10790ce2c;
        func_0x00010791532c(*unaff_x20);
        func_0x00010790c958();
        lVar3 = lVar3 + -0x68;
      } while ((uVar1 & 1) != 0);
      param_1 = unaff_x19 + lVar3 + 0x138;
LAB_10790ce2c:
      func_0x000107914ab4();
      unaff_w25 = unaff_w25 + 1;
      if (unaff_w25 == 8) {
        func_0x0001079171c8(lVar2 + 0x68);
        return;
      }
    }
    lVar2 = lVar2 + 0x68;
    unaff_x24 = unaff_x24 + 0x68;
  } while( true );
}



/* Entry: 10790d2f0; end: 10790d3b7;  */

void FUN_10790d2f0(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x000107914c90();
    FUN_10790d2f0();
    FUN_10790d2f0(*(undefined8 *)(unaff_x19 + 8));
    func_0x000107917cd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10790ecb8; end: 10790ed7b;  */

void FUN_10790ecb8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,undefined8 param_7,long *param_8)

{
  long lVar1;
  long lVar2;
  char in_stack_00000050;
  
  func_0x000107917a38();
  lVar1 = param_1;
  func_0x00010790bf3c();
  if ((((in_stack_00000050 != '\0') && (*(long *)(param_3 + 8) == *param_6)) &&
      (*(long *)(param_3 + 0x18) == param_6[2])) && (*(long *)(param_3 + 0x10) == param_6[1])) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar2 = lVar1;
      func_0x000107915248();
      func_0x00010790a520();
    }
    else {
      lVar2 = *param_8;
      func_0x00010790a558(lVar2,param_6,*(undefined8 *)(param_3 + 0x20));
    }
    if ((*(long *)(param_1 + 0x20) == 0) || (lVar2 < *(long *)(param_1 + 0x28))) {
      *(long *)(param_1 + 0x18) = lVar1;
      *(long *)(param_1 + 0x28) = lVar2;
    }
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  return;
}



/* Entry: 10790f0e4; end: 10790f173;  */

void FUN_10790f0e4(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107914d64();
  func_0x00010791839c();
  if ((bool)in_ZR) {
    func_0x000107918564();
    if ((bool)in_CY) {
      lVar1 = extraout_x10 - param_2 >> 2;
      if (extraout_x10 - param_2 == 0) {
        lVar1 = 1;
      }
      func_0x00010790f2b4();
      func_0x000107915b70(lVar1 * 2 + 6);
      func_0x0001079135d8();
      func_0x00010790f290();
      func_0x0001079135c0();
      func_0x00010790f300();
      param_2 = *(long *)(unaff_x19 + 8);
    }
    else {
      func_0x000107913d98();
      if (!(bool)in_ZR) {
        func_0x000107916c70();
      }
      func_0x0001079181a8();
      param_2 = unaff_x21;
    }
  }
  *(undefined8 *)(param_2 + -8) = unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(param_2 + -8);
  return;
}



/* Entry: 10790f700; end: 10790f733;  */

/* WARNING: Possible PIC construction at 0x00010790fa9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790fbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790fbc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790fb78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790fb84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790fb14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010790fb20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010790fb18) */
/* WARNING: Removing unreachable block (ram,0x00010790fb1c) */
/* WARNING: Removing unreachable block (ram,0x00010790fb88) */
/* WARNING: Removing unreachable block (ram,0x00010790fb8c) */
/* WARNING: Removing unreachable block (ram,0x00010790fb7c) */
/* WARNING: Removing unreachable block (ram,0x00010790fb80) */
/* WARNING: Removing unreachable block (ram,0x00010790fbc4) */
/* WARNING: Removing unreachable block (ram,0x00010790fbd8) */
/* WARNING: Removing unreachable block (ram,0x00010790faa0) */
/* WARNING: Removing unreachable block (ram,0x00010790faa4) */
/* WARNING: Removing unreachable block (ram,0x00010790fb24) */

undefined8 FUN_10790f700(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  undefined8 unaff_x19;
  undefined8 uVar7;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  long lVar8;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long *plStack_f0;
  long *plStack_e8;
  
  if (((ulong)(param_2[1] - *param_2) < 0x80) || (99 < param_4)) goto code_r0x00010790f9e8;
  uVar1 = 0x78 < (ulong)(param_3[1] - *param_3);
  uVar3 = param_3[1] - *param_3 == 0x79;
  if (!(bool)uVar1) goto code_r0x00010790f9e8;
  unaff_x29 = &stack0xfffffffffffffff0;
  func_0x000107913588();
  func_0x000107907378();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  uVar4 = 1;
  plVar5 = param_2;
  if ((bool)uVar3) {
code_r0x00010790fb28:
    func_0x000107915a78();
    if ((bool)uVar4) {
      func_0x0001079176fc();
      param_2 = param_1;
      if (0x7f < unaff_x21) {
code_r0x00010790fb9c:
        uVar3 = 0x62 < unaff_x20;
        param_2 = param_1;
        if ((unaff_x20 < 100) && (func_0x000107914200(), param_2 = param_1, (bool)uVar3)) {
          func_0x0001079137b0();
          func_0x00010790fc50();
          if (((ulong)param_1 & 1) != 0) {
            func_0x0001079141f0();
            if (((!(bool)uVar3) || (bVar2 = 0x62 < unaff_x20, 99 < unaff_x20)) ||
               (func_0x000107914280(), !bVar2)) {
              func_0x0001079142f0();
              unaff_x30 = &UNK_10790fbd8;
              register0x00000008 = (BADSPACEBASE *)&plStack_f0;
              param_2 = param_1;
              goto code_r0x00010790f9e8;
            }
            func_0x0001079137c8();
            func_0x00010790fc50();
            if (((ulong)param_1 & 1) != 0) {
              uVar7 = 1;
              goto code_r0x00010790fc04;
            }
          }
          goto code_r0x00010790fc00;
        }
      }
      func_0x0001079145ec();
      unaff_x30 = &UNK_10790fbc4;
      register0x00000008 = (BADSPACEBASE *)&plStack_f0;
code_r0x00010790f9e8:
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      lVar8 = *param_2;
      bVar2 = lVar8 == param_2[1];
      if ((!bVar2) && (func_0x0001079174bc(), !bVar2)) {
        func_0x00010791589c();
        lVar6 = extraout_x8;
        for (; uVar3 = lVar8 == lVar6, !(bool)uVar3; lVar8 = lVar8 + 8) {
          while (func_0x000107916f18(), !(bool)uVar3) {
            func_0x00010791415c();
            func_0x00010790f3ec();
            if (((ulong)param_2 & 1) == 0) {
              return 0;
            }
          }
          lVar6 = *(long *)(unaff_x21 + 8);
        }
      }
      return 1;
    }
    func_0x0001079156e4();
    param_2 = param_1;
    if (((!(bool)uVar1) || (func_0x000107914210(), param_2 = param_1, !(bool)uVar1)) ||
       ((bVar2 = 0x62 < unaff_x20, 99 < unaff_x20 ||
        (func_0x000107914e34(), param_2 = param_1, !bVar2)))) {
      func_0x0001079145fc();
      unaff_x30 = &UNK_10790fb7c;
      register0x00000008 = (BADSPACEBASE *)&plStack_f0;
      goto code_r0x00010790f9e8;
    }
    func_0x000107916824();
    plStack_f0 = param_1;
    plStack_e8 = plVar5;
    func_0x000107913840();
    func_0x00010790fc50();
    if ((int)param_1 != 0) {
      func_0x000107913828();
      func_0x00010790fc50();
      if (((ulong)param_1 & 1) != 0) goto code_r0x00010790fb9c;
    }
  }
  else {
    func_0x0001079158b4();
    if (((!(bool)uVar1) || (uVar3 = 0x62 < unaff_x20, 99 < unaff_x20)) ||
       (func_0x000107914230(), !(bool)uVar3)) {
      func_0x0001079142a0();
      unaff_x30 = &UNK_10790faa0;
      register0x00000008 = (BADSPACEBASE *)&plStack_f0;
      param_2 = param_1;
      goto code_r0x00010790f9e8;
    }
    func_0x000107914d28();
    plStack_f0 = param_1;
    plStack_e8 = param_2;
    func_0x000107913668();
    func_0x00010790fc50();
    if (((ulong)param_1 & 1) != 0) {
      plVar5 = param_2;
      func_0x000107914220();
      param_2 = param_1;
      if ((((bool)uVar3) && (func_0x0001079142c0(), param_2 = param_1, (bool)uVar3)) &&
         (unaff_x20 < 100)) {
        uVar1 = 0x78 < unaff_x21;
        uVar4 = unaff_x21 == 0x79;
        if ((bool)uVar1) {
          func_0x000107916834();
          plStack_f0 = param_1;
          plStack_e8 = plVar5;
          func_0x000107913810();
          func_0x00010790fc50();
          if ((int)param_1 != 0) {
            func_0x0001079137f8();
            func_0x00010790fc50();
            if (((ulong)param_1 & 1) != 0) goto code_r0x00010790fb28;
          }
          goto code_r0x00010790fc00;
        }
      }
      func_0x000107914290();
      unaff_x30 = &UNK_10790fb18;
      register0x00000008 = (BADSPACEBASE *)&plStack_f0;
      goto code_r0x00010790f9e8;
    }
  }
code_r0x00010790fc00:
  uVar7 = 0;
code_r0x00010790fc04:
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return uVar7;
}



/* Entry: 10790fcb4; end: 1079103c3;  */

/* WARNING: Removing unreachable block (ram,0x0001079101a8) */

long * FUN_10790fcb4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int iVar12;
  undefined8 extraout_x8;
  long lVar13;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long *plVar14;
  int extraout_w9;
  int iVar15;
  long lVar16;
  long *unaff_x19;
  int unaff_w21;
  int unaff_w22;
  long lStack_250;
  undefined4 uStack_248;
  undefined1 uStack_244;
  int aiStack_230 [12];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  int iStack_1e8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_180;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_138;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long alStack_f0 [2];
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  int iStack_b8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char cStack_48;
  byte bStack_47;
  int iStack_34;
  int iStack_2c;
  int iStack_24;
  int iStack_20;
  undefined8 uStack_8;
  
  func_0x000107915f10();
  plVar14 = &lStack_250;
  func_0x0001079182d0();
  func_0x000107913ca4();
  plVar9 = alStack_f0;
  uStack_8 = extraout_x8;
  func_0x000107915914();
  func_0x000107907c10();
  uVar2 = 1;
  if (cStack_48 == 'd') goto LAB_107910374;
  func_0x000107917acc();
  if (cStack_48 == 'i') {
    uStack_248 = 2;
    lStack_250 = lStack_a8;
    uStack_1f8 = uStack_90;
    uStack_200 = uStack_98;
    uStack_1b0 = uStack_80;
    uStack_1b8 = uStack_88;
    uVar2 = iStack_2c == 1;
    lVar13 = 0x20;
    if (!(bool)uVar2) {
      lVar13 = 0x68;
    }
    *(undefined4 *)((long)&lStack_250 + lVar13) = 1;
    lVar13 = 0x68;
    if (!(bool)uVar2) {
      lVar13 = 0x20;
    }
    *(undefined4 *)((long)&lStack_250 + lVar13) = 2;
    param_2 = &lStack_250;
    iVar12 = iStack_1e8;
  }
  else if (cStack_48 == 't') {
    func_0x000107918800();
    func_0x000107910504();
    uVar10 = uStack_d8;
    func_0x00010790920c(uStack_d8,*(undefined8 *)(lStack_d0 + 0x10),
                        *(undefined8 *)(lStack_d0 + 0x18));
    iVar12 = iVar15;
    func_0x000107915b38(uStack_d8);
    iVar15 = (int)uVar10;
    if (iVar12 * iStack_2c == -1) {
      iVar8 = iVar12;
      func_0x000107916740();
      if (iVar8 == iStack_2c) {
        if (iVar15 == 0) {
          aiStack_230[0] = 3;
          uVar2 = iVar12 == 1;
          param_2 = &lStack_250;
          iVar12 = 1;
          if (!(bool)uVar2) {
            param_2 = &lStack_250;
            iVar12 = 2;
          }
          goto LAB_10791036c;
        }
        if (iVar15 == iVar12) {
          uVar2 = iVar12 == 1;
          aiStack_230[0] = 1;
          iStack_1e8 = aiStack_230[0];
          if (!(bool)uVar2) {
            aiStack_230[0] = 2;
            iStack_1e8 = aiStack_230[0];
          }
          goto LAB_1079100b0;
        }
      }
      uVar2 = iVar8 == iVar12;
      if ((bool)uVar2) {
        func_0x000107916cac();
        if (iVar8 == 0) goto LAB_107910360;
        if (iVar8 == iVar12) {
          uVar2 = iVar12 == 1;
          aiStack_230[0] = 1;
          if (!(bool)uVar2) {
            aiStack_230[0] = 2;
          }
          iStack_1e8 = 1;
          if ((bool)uVar2) {
            iStack_1e8 = 2;
          }
          goto LAB_1079100b0;
        }
      }
      uVar2 = iVar12 == 1;
      aiStack_230[0] = 1;
      if ((bool)uVar2) {
        aiStack_230[0] = 2;
      }
      param_2 = &lStack_250;
      iVar12 = 1;
      if (!(bool)uVar2) {
        param_2 = &lStack_250;
        iVar12 = 2;
      }
    }
    else {
      iVar6 = iVar12;
      func_0x000107916cac();
      iVar7 = iVar6;
      func_0x000107916740();
      iVar8 = iVar7;
      func_0x000107916f8c();
      bVar4 = iVar12 != 0;
      bVar5 = iVar8 * iStack_2c == 1;
      if ((iVar7 == iStack_2c || iVar7 == iVar12) ||
         ((iVar12 == 0 && iStack_2c == 0 && (iVar7 != -1)))) {
        uVar2 = iVar6 == 0;
        if ((bool)uVar2 && (bVar4 || bVar5)) {
LAB_107910360:
          func_0x00010791841c();
          param_2 = &lStack_250;
          iVar12 = extraout_w8_01;
        }
        else if (iVar15 == 0) {
          aiStack_230[0] = 3;
          iVar15 = 1;
          if (iVar8 == 1) {
            iVar15 = 2;
          }
          uVar2 = bVar4 || bVar5;
          param_2 = &lStack_250;
          iVar12 = aiStack_230[0];
          if (bVar4 || bVar5) {
            param_2 = &lStack_250;
            iVar12 = iVar15;
          }
        }
        else if (iVar15 == iVar6 && iVar8 * iVar15 != -1) {
          aiStack_230[0] = 1;
          if (iVar8 != 1) {
            aiStack_230[0] = 2;
          }
          iVar15 = 1;
          if (iVar8 == 1) {
            iVar15 = 2;
          }
          uVar2 = bVar4 || bVar5;
          param_2 = &lStack_250;
          iVar12 = 3;
          if ((bool)uVar2) {
            param_2 = &lStack_250;
            iVar12 = iVar15;
          }
        }
        else {
          if (iVar6 + iVar8 == 0) {
            uVar2 = iVar8 == 1;
            aiStack_230[0] = 1;
            if ((bool)uVar2) {
              aiStack_230[0] = 2;
            }
            iStack_1e8 = 1;
            if (!(bool)uVar2) {
              iStack_1e8 = 2;
            }
            goto LAB_1079100b0;
          }
          uVar2 = 0;
          param_2 = &lStack_250;
          iVar12 = iStack_1e8;
          if (iVar15 == -iVar8) {
            uVar2 = iVar8 == 1;
            aiStack_230[0] = 1;
            if ((bool)uVar2) {
              aiStack_230[0] = 2;
            }
            iStack_1e8 = aiStack_230[0];
            if (bVar4 || bVar5) goto LAB_1079101d4;
            param_2 = &lStack_250;
            iVar12 = 3;
          }
        }
      }
      else {
        aiStack_230[0] = 1;
        if (iVar8 == 1) {
          aiStack_230[0] = 2;
        }
        iStack_1e8 = 1;
        if (iVar12 != 1 && iStack_2c != 1) {
          iStack_1e8 = 2;
        }
        uVar2 = bVar4 || bVar5;
        param_2 = &lStack_250;
        iVar12 = 3;
        if ((bool)uVar2) goto LAB_1079101d4;
      }
    }
  }
  else if (cStack_48 == 'm') {
    func_0x0001079187ec();
    iVar15 = (int)plVar14;
    func_0x000107910504();
    uVar3 = iStack_20 == 1;
    if ((bool)uVar3) {
      func_0x000107915b38(uStack_d8);
      func_0x000107918344();
      if (!(bool)uVar3) {
        func_0x000107916f8c();
        func_0x000107917e54();
        func_0x0001079180ac();
        bVar4 = (bool)uVar3 && unaff_w22 == 1;
        uVar2 = true;
        if (!(bool)uVar3 || unaff_w22 != 1) {
          func_0x000107918508();
          if ((bVar4 && unaff_w21 == 1) && unaff_w22 == -1) {
            uVar2 = false;
            iStack_1e8 = 3;
            aiStack_230[0] = 1;
LAB_1079101d4:
            uStack_244 = 1;
            param_2 = &lStack_250;
            iVar12 = iStack_1e8;
          }
          else if (iStack_2c == unaff_w21 && iStack_2c == unaff_w22) {
            uVar3 = false;
            func_0x0001079164d4(unaff_w22 == 1);
            uVar2 = false;
            if ((bool)uVar3) {
              func_0x000107913f70(uStack_d8);
              func_0x000107917cb8();
              func_0x000107916d00();
              uVar2 = false;
              uStack_c0 = uStack_d8;
              if ((bool)uVar3) {
LAB_107910330:
                func_0x000107916188(uStack_c0);
                uVar2 = iVar15 * iStack_20 == -1;
              }
            }
LAB_107910344:
            func_0x000107916628(aiStack_230);
            param_2 = &lStack_250;
            iVar12 = iStack_1e8;
          }
          else if (unaff_w21 == 0) {
            uVar2 = 1;
            if (iStack_2c == unaff_w22) goto LAB_107910360;
            uVar2 = unaff_w22 == 1;
            aiStack_230[0] = 1;
            if ((bool)uVar2) {
              aiStack_230[0] = 2;
            }
            param_2 = &lStack_250;
            iVar12 = 3;
          }
          else {
LAB_107910064:
            uVar2 = 0;
            uStack_248 = 8;
            param_2 = &lStack_250;
            iVar12 = iStack_1e8;
          }
          goto LAB_10791036c;
        }
LAB_10791006c:
        aiStack_230[0] = 2;
        iStack_1e8 = 2;
LAB_1079100b0:
        uStack_244 = 1;
        param_2 = &lStack_250;
        iVar12 = iStack_1e8;
        goto LAB_10791036c;
      }
      lVar13 = 0x68;
      lVar16 = 0x20;
    }
    else {
      func_0x000107915b38(uStack_c0);
      func_0x000107918344();
      if (!(bool)uVar3) {
        iVar15 = iStack_b8;
        func_0x000107909198();
        func_0x000107917e60();
        func_0x0001079180ac();
        uVar2 = (bool)uVar3 && unaff_w22 == 1;
        if ((bool)uVar3 && unaff_w22 == 1) goto LAB_10791006c;
        func_0x000107918508();
        if (((bool)uVar2 && unaff_w21 == 1) && unaff_w22 == -1) {
          uVar2 = iStack_20 == -1;
          aiStack_230[0] = 3;
          if ((bool)uVar2) {
            aiStack_230[0] = 1;
          }
          iStack_1e8 = 1;
          goto LAB_1079101d4;
        }
        if (iStack_34 == unaff_w21 && iStack_34 == unaff_w22) {
          uVar3 = iStack_20 == 0;
          func_0x0001079164d4(unaff_w22 == 1);
          uVar2 = false;
          if ((bool)uVar3) {
            func_0x000107913f70(uStack_c0);
            func_0x000107917cc4();
            func_0x000107916d00();
            uVar2 = false;
            if ((bool)uVar3) goto LAB_107910330;
          }
          goto LAB_107910344;
        }
        if (unaff_w21 != 0) goto LAB_107910064;
        uVar2 = 1;
        if (iStack_34 == unaff_w22) goto LAB_107910360;
        uVar2 = unaff_w22 == 1;
        iVar12 = 1;
        if ((bool)uVar2) {
          iVar12 = 2;
        }
        aiStack_230[0] = 3;
        param_2 = &lStack_250;
        goto LAB_10791036c;
      }
      lVar13 = 0x20;
      lVar16 = 0x68;
    }
    uVar2 = unaff_w21 == -1;
    lVar1 = lVar16;
    if (!(bool)uVar2) {
      lVar1 = lVar13;
    }
    *(undefined4 *)((long)&lStack_250 + lVar1) = 1;
    if (!(bool)uVar2) {
      lVar13 = lVar16;
    }
    *(undefined4 *)((long)&lStack_250 + lVar13) = 2;
    param_2 = &lStack_250;
    iVar12 = iStack_1e8;
  }
  else {
    uVar2 = cStack_48 == 'c';
    if ((bool)uVar2) {
      if ((bStack_47 & 1) != 0) {
        plVar9 = &lStack_1a0;
        func_0x000107917acc();
        if (iStack_24 == 1) {
          func_0x000107916740();
          if ((int)plVar9 == 1) {
            uStack_180 = 2;
          }
          else {
            if ((int)plVar9 == 0) goto LAB_107910248;
            uStack_180 = 1;
          }
          uStack_138 = 3;
          uStack_198 = 5;
          lStack_1a0 = lStack_a0;
          uStack_148 = uStack_68;
          uStack_150 = uStack_70;
          uStack_100 = uStack_58;
          uStack_108 = uStack_60;
          param_2 = &lStack_1a0;
          plVar9 = unaff_x19;
          func_0x00010791059c();
        }
LAB_107910248:
        uVar2 = 0;
        if (iStack_20 != 1) goto LAB_107910374;
        func_0x000107916f8c();
        uVar2 = (int)plVar9 == 1;
        if ((bool)uVar2) {
          uStack_138 = 2;
        }
        else {
          if ((int)plVar9 == 0) goto LAB_107910374;
          uStack_138 = 1;
        }
        uStack_180 = 3;
        uStack_198 = 5;
        lStack_1a0 = lStack_a8;
        uStack_148 = uStack_90;
        uStack_150 = uStack_98;
        uStack_100 = uStack_80;
        uStack_108 = uStack_88;
        param_2 = &lStack_1a0;
        iVar12 = iStack_1e8;
        goto LAB_10791036c;
      }
      if (iStack_24 != 0) {
        puVar11 = auStack_b0;
        func_0x000107909290();
        uStack_248 = 5;
        func_0x000107916420(alStack_f0 + ((ulong)puVar11 & 0xffffffff));
        iVar15 = (int)puVar11;
        func_0x00010791808c((long *)((long)alStack_f0 +
                                    ((ulong)puVar11 & 0xffffffff) * (extraout_x8_00 & 0xffffffff)));
        func_0x000107916740();
        func_0x000107916f8c();
        func_0x000107917208();
        if ((bool)uVar2) {
          iVar8 = extraout_w9 + 1;
          iVar12 = extraout_w9;
        }
        else {
          iVar12 = extraout_w9 + 1;
          iVar8 = extraout_w9;
        }
        uVar2 = extraout_w8 == 0;
        iStack_1e8 = 4;
        aiStack_230[0] = 4;
        if (!(bool)uVar2) {
          iStack_1e8 = iVar8;
          aiStack_230[0] = iVar12;
        }
        if (iVar15 == 0) {
          func_0x0001079081b4();
        }
        func_0x000107914678();
        if ((int)alStack_f0 == 0) {
          func_0x0001079081b4();
        }
        func_0x000107914678();
        param_2 = &lStack_250;
        iVar12 = iStack_1e8;
        goto LAB_10791036c;
      }
    }
    else {
      uVar2 = cStack_48 == 'e';
      plVar9 = plVar14;
      if ((!(bool)uVar2) || ((bStack_47 & 1) != 0)) goto LAB_107910374;
    }
    puVar11 = auStack_b0;
    func_0x000107909290(puVar11);
    uStack_248 = 6;
    func_0x000107916420(alStack_f0 + ((ulong)puVar11 & 0xffffffff));
    func_0x00010791808c((long *)((long)alStack_f0 +
                                ((ulong)puVar11 & 0xffffffff) * (extraout_x8_01 & 0xffffffff)));
    iVar15 = (int)auStack_e0;
    func_0x00010790922c();
    iVar8 = iVar15;
    func_0x000107916740();
    iVar12 = iVar8;
    func_0x000107915b38(uStack_d8);
    if ((iVar15 == 0) && (iVar8 == iVar12)) {
      func_0x00010791841c();
      iVar12 = extraout_w8_00;
    }
    else {
      if (iVar12 * iVar8 != -1) {
        iVar8 = iVar15;
      }
      aiStack_230[0] = 1;
      if (iVar8 == -1) {
        aiStack_230[0] = 2;
      }
      iVar12 = 1;
      if (iVar8 != -1) {
        iVar12 = 2;
      }
    }
    uVar2 = cStack_48 == 'c';
    param_2 = &lStack_250;
    if ((bool)uVar2) {
      uStack_248 = 5;
      param_2 = &lStack_250;
    }
  }
LAB_10791036c:
  iStack_1e8 = iVar12;
  plVar9 = unaff_x19;
  func_0x00010791059c();
LAB_107910374:
  func_0x000107913564(uStack_8);
  if ((bool)uVar2) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  if ((param_2[3] == param_2[1]) ||
     ((param_2[3] - *(long *)param_2[2]) / 0xb0 + (param_2[2] - *param_2 >> 3) * 0x17 ==
      (param_2[1] - *(long *)*param_2) / 0xb0)) {
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = (long *)0x1;
    *(undefined1 *)plVar9 = 1;
  }
  return plVar14;
}



/* Entry: 107910818; end: 10791083b;  */

void FUN_107910818(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 107910d7c; end: 107910ddb;  */

undefined8 FUN_107910d7c(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long unaff_x21;
  long unaff_x22;
  
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar2 = extraout_x8;
    while (uVar1 = unaff_x21 == lVar2, !(bool)uVar1) {
      func_0x000107915d6c();
      while (func_0x000107916f18(), lVar2 = extraout_x8_00, unaff_x21 = unaff_x22, !(bool)uVar1) {
        func_0x00010791460c();
        func_0x000107910a2c();
        if ((param_1 & 1) == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}


