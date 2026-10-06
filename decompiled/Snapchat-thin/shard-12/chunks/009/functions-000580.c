/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109aa7d44; end: 109aa7d4b;  */

void FUN_109aa7d44(void)

{
  return;
}



/* Entry: 109aa7d4c; end: 109aa7d87;  */

void FUN_109aa7d4c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109aa7d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109aa7d88; end: 109aa7d8f;  */

void FUN_109aa7d88(void)

{
  return;
}



/* Entry: 109aa7d90; end: 109aa812f;  */

void FUN_109aa7d90(undefined8 *param_1,long param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  uint *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 *puStack_88;
  ulong uStack_80;
  long alStack_78 [3];
  
  uStack_ec = 0;
  uStack_f0 = 0;
  uStack_e0 = param_3[2];
  bVar6 = (int)uStack_e0 < 2;
  if (bVar6) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar7 = 1;
    puVar7 = puVar7 + 1;
    *(undefined2 *)puVar7 = 10;
    uStack_e0 = param_3[2];
  }
  uVar12 = (ulong)!bVar6;
  if (uStack_e0 == 1) {
    bVar6 = true;
  }
  else {
    bVar6 = *(int *)(param_2 + 0x10) == 0;
  }
  uVar13 = *param_3;
  lVar10 = 0xc;
  if ((uVar13 & 7) != 6) {
    lVar10 = 8;
  }
  uVar8 = 0xe0;
  __Znwm();
  alStack_78[0] = 0;
  alStack_78[1] = 0;
  if (puVar7 != (undefined4 *)0x0) {
    piVar11 = puVar7 + -1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar4) {
        *piVar11 = *piVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar13 = *param_3;
    uStack_e0 = param_3[2];
  }
  uStack_e4 = param_3[1];
  puStack_a8 = &uStack_e0;
  uStack_dc = param_3[3];
  uStack_d0 = *(undefined8 *)(param_3 + 6);
  uStack_d8 = *(undefined8 *)(param_3 + 4);
  uStack_c0 = *(undefined8 *)(param_3 + 10);
  uStack_c8 = *(undefined8 *)(param_3 + 8);
  lStack_b0 = *(long *)(param_3 + 0xe);
  uStack_b8 = *(undefined8 *)(param_3 + 0xc);
  uStack_98 = 0;
  uStack_90 = 0;
  uVar2 = uStack_e4;
  if (*(long *)(param_3 + 0xe) != 0) {
    piVar11 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar4) {
        *piVar11 = *piVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar2 = param_3[1];
  }
  uStack_e8 = uVar13;
  puStack_a0 = &uStack_98;
  puStack_88 = puVar7;
  uStack_80 = uVar12;
  if ((int)uVar2 < 3) {
    uStack_98 = **(undefined8 **)(param_3 + 0x12);
    uStack_90 = (*(undefined8 **)(param_3 + 0x12))[1];
  }
  else {
    uStack_e4 = 0;
    func_0x000109a84868(&uStack_e8,param_3);
  }
  FUN_109aa6e00(uVar8,alStack_78,&puStack_88,&uStack_e8,&uStack_f0,bVar6,0,
                *(undefined4 *)(param_2 + lVar10));
  puVar9 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar9 + 1) = 1;
  *puVar9 = &PTR_FUN_110b22ba8;
  puVar9[2] = uVar8;
  puStack_100 = puVar9;
  uStack_f8 = uVar8;
  if (lStack_b0 != 0) {
    piVar11 = (int *)(lStack_b0 + 0x14);
    do {
      iVar1 = *piVar11;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar6) {
        *piVar11 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_e8);
    }
  }
  lStack_b0 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  if (0 < (int)uStack_e4) {
    lVar10 = 0;
    do {
      puStack_a8[lVar10] = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uStack_e4);
  }
  if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
    _free(puStack_a0[-1]);
  }
  puVar5 = puStack_88;
  puStack_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    piVar11 = puVar5 + -1;
    do {
      iVar1 = *piVar11;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar6) {
        *piVar11 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(puVar5 + -3));
    }
  }
  lVar10 = alStack_78[0];
  alStack_78[0] = 0;
  alStack_78[1] = 0;
  if (lVar10 != 0) {
    piVar11 = (int *)(lVar10 + -4);
    do {
      iVar1 = *piVar11;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar6) {
        *piVar11 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar10 + -0xc));
    }
  }
  param_1[1] = uStack_f8;
  *param_1 = puStack_100;
  if (puStack_100 != (undefined8 *)0x0) {
    piVar11 = (int *)(puStack_100 + 1);
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar6) {
        *piVar11 = *piVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_109aa7934(&puStack_100);
  if (puVar7 != (undefined4 *)0x0) {
    piVar11 = puVar7 + -1;
    do {
      iVar1 = *piVar11;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar6) {
        *piVar11 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(puVar7 + -3));
    }
  }
  return;
}



/* Entry: 109aa8130; end: 109aa8137;  */

void FUN_109aa8130(void)

{
  return;
}



/* Entry: 109aa8138; end: 109aa8173;  */

void FUN_109aa8138(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109aa8170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109aa8174; end: 109aa817b;  */

void FUN_109aa8174(void)

{
  return;
}



/* Entry: 109aa817c; end: 109aa8253;  */

void FUN_109aa817c(long *param_1,long param_2,uint *param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_40;
  long lStack_38;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_24 = 0x5d;
  uStack_28 = 0x5b2c5d5b;
  if (param_3[3] == 1) {
    uStack_28 = 0x5b2c0000;
  }
  if (param_3[2] == 1) {
    bVar4 = true;
  }
  else {
    bVar4 = *(int *)(param_2 + 0x10) == 0;
  }
  lVar2 = 0xc;
  if ((*param_3 & 7) != 6) {
    lVar2 = 8;
  }
  FUN_109aa6af8(&lStack_40,&DAT_10f62a9e8,&DAT_10f62a9ea,param_3,&uStack_28,bVar4,0,param_2 + lVar2)
  ;
  param_1[1] = lStack_38;
  *param_1 = lStack_40;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_109aa7934(&lStack_40);
  return;
}



/* Entry: 109aa8254; end: 109aa825b;  */

void FUN_109aa8254(void)

{
  return;
}



/* Entry: 109aa825c; end: 109aa8297;  */

void FUN_109aa825c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109aa8294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109aa8298; end: 109aa829f;  */

void FUN_109aa8298(void)

{
  return;
}



/* Entry: 109aa82a0; end: 109aa8683;  */

void FUN_109aa82a0(undefined8 *param_1,long param_2,ulong *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  uStack_e4 = 0x5d;
  uStack_e8 = 0x5b2c5d5b;
  if (*(uint *)((long)param_3 + 0xc) == 1) {
    uStack_e8 = 0x5b2c0000;
  }
  FUN_109ac2700(&lStack_110,&UNK_10f598d5d);
  if ((uint)param_3[1] == 1) {
    bVar5 = true;
  }
  else {
    bVar5 = *(int *)(param_2 + 0x10) == 0;
  }
  lVar9 = 0xc;
  if ((*param_3 & 7) != 6) {
    lVar9 = 8;
  }
  uVar6 = 0xe0;
  __Znwm();
  puVar7 = (undefined8 *)0xc;
  func_0x000107c2ae8c();
  *puVar7 = 0x6172726100000001;
  alStack_70[0] = (long)puVar7 + 4;
  alStack_70[1] = 7;
  *(undefined1 *)((long)puVar7 + 0xb) = 0;
  *(undefined4 *)((long)puVar7 + 7) = 0x5b287961;
  lStack_80 = lStack_110;
  uStack_78 = uStack_108;
  if (lStack_110 != 0) {
    piVar8 = (int *)(lStack_110 + -4);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = *piVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_d8 = param_3[1];
  uStack_e0 = *param_3;
  uStack_c8 = param_3[3];
  uStack_d0 = param_3[2];
  uStack_a0 = (ulong)&uStack_e0 | 8;
  uVar2 = *(uint *)((long)param_3 + 4);
  uStack_b8 = param_3[5];
  uStack_c0 = param_3[4];
  uStack_a8 = param_3[7];
  uStack_b0 = param_3[6];
  uStack_90 = 0;
  uStack_88 = 0;
  if (param_3[7] != 0) {
    piVar8 = (int *)(param_3[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = *piVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar2 = *(uint *)((long)param_3 + 4);
  }
  puStack_98 = &uStack_90;
  if ((int)uVar2 < 3) {
    uStack_90 = *(undefined8 *)param_3[9];
    uStack_88 = ((undefined8 *)param_3[9])[1];
  }
  else {
    uStack_e0 = uStack_e0 & 0xffffffff;
    func_0x000109a84868(&uStack_e0,param_3);
  }
  FUN_109aa6e00(uVar6,alStack_70,&lStack_80,&uStack_e0,&uStack_e8,bVar5,0,
                *(undefined4 *)(param_2 + lVar9));
  puVar7 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar7 + 1) = 1;
  *puVar7 = &PTR_FUN_110b22ba8;
  puVar7[2] = uVar6;
  puStack_100 = puVar7;
  uStack_f8 = uVar6;
  if (uStack_a8 != 0) {
    piVar8 = (int *)(uStack_a8 + 0x14);
    do {
      iVar1 = *piVar8;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (0 < uStack_e0._4_4_) {
    lVar9 = 0;
    do {
      *(undefined4 *)(uStack_a0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < uStack_e0._4_4_);
  }
  if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
    _free(puStack_98[-1]);
  }
  lVar9 = lStack_80;
  lStack_80 = 0;
  uStack_78 = 0;
  if (lVar9 != 0) {
    piVar8 = (int *)(lVar9 + -4);
    do {
      iVar1 = *piVar8;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar9 + -0xc));
    }
  }
  lVar9 = alStack_70[0];
  alStack_70[0] = 0;
  alStack_70[1] = 0;
  if (lVar9 != 0) {
    piVar8 = (int *)(lVar9 + -4);
    do {
      iVar1 = *piVar8;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar9 + -0xc));
    }
  }
  param_1[1] = uStack_f8;
  *param_1 = puStack_100;
  if (puStack_100 != (undefined8 *)0x0) {
    piVar8 = (int *)(puStack_100 + 1);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = *piVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_109aa7934(&puStack_100);
  lVar9 = lStack_110;
  lStack_110 = 0;
  uStack_108 = 0;
  if (lVar9 != 0) {
    piVar8 = (int *)(lVar9 + -4);
    do {
      iVar1 = *piVar8;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar5) {
        *piVar8 = iVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar9 + -0xc));
    }
  }
  return;
}



/* Entry: 109aa8684; end: 109aa868b;  */

void FUN_109aa8684(void)

{
  return;
}



/* Entry: 109aa868c; end: 109aa86c7;  */

void FUN_109aa868c(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109aa86c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109aa86c8; end: 109aa86cf;  */

void FUN_109aa86c8(void)

{
  return;
}



/* Entry: 109aa86d0; end: 109aa8787;  */

void FUN_109aa86d0(long *param_1,long param_2,uint *param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_30;
  long lStack_28;
  
  if (param_3[2] == 1) {
    bVar4 = true;
  }
  else {
    bVar4 = *(int *)(param_2 + 0x10) == 0;
  }
  lVar2 = 0xc;
  if ((*param_3 & 7) != 6) {
    lVar2 = 8;
  }
  FUN_109aa6af8(&lStack_30,&DAT_10f2da0fd,&DAT_10f2da10d,param_3,&UNK_10e02e28e,bVar4,0,
                param_2 + lVar2);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_109aa7934(&lStack_30);
  return;
}



/* Entry: 109aa8788; end: 109aa878f;  */

void FUN_109aa8788(void)

{
  return;
}



/* Entry: 109aa8790; end: 109aa8883;  */

void FUN_109aa8790(long *param_1)

{
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x000109aa87c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109aa8884; end: 109aa88ef;  */

void FUN_109aa8884(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iStack_18;
  int iStack_14;
  
  iVar1 = *(int *)(param_1 + 1);
  iStack_14 = *(int *)((long)param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 2);
  uVar4 = (ulong)iVar2;
  lVar3 = (long)((ulong)(uint)(iVar2 - (iVar2 >> 0x1f)) << 0x20) >> 0x21;
  iStack_18 = 0;
  if (uVar4 != 0) {
    iStack_18 = (int)((ulong)(lVar3 + (long)param_2 * (long)(iStack_14 - iVar1)) / uVar4);
  }
  iStack_18 = iVar1 + iStack_18;
  if (param_2 + 1 < iVar2) {
    iVar2 = 0;
    if (uVar4 != 0) {
      iVar2 = (int)((ulong)(lVar3 + (long)(iStack_14 - iVar1) * (long)(param_2 + 1)) / uVar4);
    }
    iStack_14 = iVar1 + iVar2;
  }
  (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&iStack_18);
  return;
}



/* Entry: 109aa88f0; end: 109aa8983;  */

long FUN_109aa88f0(undefined8 *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  do {
    plVar2 = (long *)*param_1;
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if (*plVar2 != 0) {
      iVar1 = param_2;
      _strcmp();
      if (iVar1 == 0) {
        uVar3 = 0;
LAB_109aa8960:
        return plVar2[uVar3 + 1];
      }
      uVar3 = 0;
      while (plVar2[uVar3 + 2] != 0) {
        iVar1 = param_2;
        _strcmp();
        uVar3 = uVar3 + 2;
        if (iVar1 == 0) {
          uVar3 = uVar3 & 0xfffffffe;
          goto LAB_109aa8960;
        }
      }
    }
    param_1 = (undefined8 *)param_1[1];
    if (param_1 == (undefined8 *)0x0) {
      return 0;
    }
  } while( true );
}



/* Entry: 109aa8984; end: 109aa8ad3;  */

void FUN_109aa8984(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar2 + 3) = 0x6e696f7020656c62;
    *(undefined8 *)(puVar2 + 1) = 0x756f64204c4c554e;
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    uStack_28 = 0x23;
    *(undefined1 *)((long)puVar2 + 0x27) = 0;
    *(undefined4 *)((long)puVar2 + 0x23) = 0x65676172;
    *(undefined8 *)(puVar2 + 7) = 0x726f747320656c69;
    *(undefined8 *)(puVar2 + 5) = 0x66206f7420726574;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f598e1b,&UNK_10f598d74,0x226);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109aa8aa8);
    (*pcVar1)();
  }
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    *param_1 = 0;
    FUN_109aa8ad4(puVar3,0);
    FUN_109a4bc4c(puVar3 + 4);
    if (puVar3[0x10] != 0) {
      _free(*(undefined8 *)(puVar3[0x10] + -8));
    }
    puVar3[0x10] = 0;
    FUN_109a4bc4c(puVar3 + 2);
    if (puVar3[0x2f] != 0) {
      FUN_1096a3b98();
      __ZdlPv();
    }
    puVar3[0x30] = 0;
    puVar3[0x2d] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2f] = 0;
    puVar3[0x2e] = 0;
    puVar3[0x29] = 0;
    puVar3[0x28] = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2a] = 0;
    puVar3[0x25] = 0;
    puVar3[0x24] = 0;
    puVar3[0x27] = 0;
    puVar3[0x26] = 0;
    puVar3[0x21] = 0;
    puVar3[0x20] = 0;
    puVar3[0x23] = 0;
    puVar3[0x22] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x19] = 0;
    puVar3[0x18] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x17] = 0;
    puVar3[0x16] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(puVar3[-1]);
    return;
  }
  return;
}



/* Entry: 109aa8ad4; end: 109aa8dab;  */

void FUN_109aa8ad4(long param_1,long *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  undefined1 *puVar18;
  
  if (param_2 != (long *)0x0) {
    lVar11 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    if (lVar11 != 0) {
      piVar12 = (int *)(lVar11 + -4);
      do {
        iVar3 = *piVar12;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar7) {
          *piVar12 = iVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar3 + -1 == 0) {
        _free(*(undefined8 *)(lVar11 + -0xc));
      }
    }
  }
  if (param_1 == 0) {
    puVar10 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar10 + 3) = 0x6e696f7020656c62;
    *(undefined8 *)(puVar10 + 1) = 0x756f64204c4c554e;
    *puVar10 = 1;
    puStack_50 = puVar10 + 1;
    uStack_48 = 0x23;
    *(undefined1 *)((long)puVar10 + 0x27) = 0;
    *(undefined4 *)((long)puVar10 + 0x23) = 0x65676172;
    *(undefined8 *)(puVar10 + 7) = 0x726f747320656c69;
    *(undefined8 *)(puVar10 + 5) = 0x66206f7420726574;
    FUN_109ac3188(0xffffffe5,&puStack_50,&UNK_10f5995ad,&UNK_10f598d74,0x207);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x109aa8d80);
    (*pcVar8)();
  }
  if (*(char *)(param_1 + 0x180) == '\x01') {
    if ((*(int *)(param_1 + 8) != 0) &&
       (((*(long *)(param_1 + 0x68) != 0 || (*(long *)(param_1 + 0x70) != 0)) ||
        (*(long *)(param_1 + 0x178) != 0)))) {
      if (*(long *)(param_1 + 0x38) != 0) {
        iVar3 = *(int *)(*(long *)(param_1 + 0x38) + 0x28);
        while (0 < iVar3) {
          FUN_109aac19c(param_1);
          iVar3 = *(int *)(*(long *)(param_1 + 0x38) + 0x28);
        }
      }
      FUN_109ab3000(param_1);
      if (*(int *)(param_1 + 4) == 8) {
        FUN_109aaa624(param_1,&UNK_10f5995b6);
      }
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      _fclose();
    }
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined1 *)(param_1 + 0x180) = 0;
    *(long *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x178);
  if (lVar11 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar11 + 8);
  if (*(long *)(lVar11 + 0x10) != lVar4) {
    uVar5 = *(ulong *)(lVar11 + 0x20);
    uVar13 = uVar5 >> 9 & 0x7ffffffffffff8;
    plVar16 = (long *)(lVar4 + uVar13);
    puVar18 = (undefined1 *)(*plVar16 + (uVar5 & 0xfff));
    uVar1 = *(long *)(lVar11 + 0x28) + uVar5;
    uVar14 = uVar1 >> 9 & 0x7ffffffffffff8;
    lVar11 = *(long *)(lVar4 + uVar14);
    puVar2 = (undefined1 *)(lVar11 + (uVar1 & 0xfff));
    if (puVar2 != puVar18) {
      puVar15 = puVar2 + ((uVar14 - uVar13) * 0x200 - ((uVar5 & 0xfff) + lVar11));
      puVar9 = (undefined4 *)(((ulong)puVar15 & 0xfffffffffffffffc) + 8);
      func_0x000107c2ae8c();
      puVar10 = puVar9 + 1;
      *puVar9 = 1;
      *(undefined1 *)((long)puVar10 + (long)puVar15) = 0;
      puVar9 = puVar10;
      do {
        puVar17 = puVar18 + 1;
        *(undefined1 *)puVar9 = *puVar18;
        if ((long)puVar17 - *plVar16 == 0x1000) {
          plVar16 = plVar16 + 1;
          puVar17 = (undefined1 *)*plVar16;
        }
        puVar9 = (undefined4 *)((long)puVar9 + 1);
        puVar18 = puVar17;
      } while (puVar17 != puVar2);
      goto LAB_109aa8c8c;
    }
  }
  puVar10 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  puVar15 = (undefined1 *)0x0;
  *puVar10 = 1;
  puVar10 = puVar10 + 1;
  *(undefined1 *)puVar10 = 0;
LAB_109aa8c8c:
  lVar11 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  if (lVar11 != 0) {
    piVar12 = (int *)(lVar11 + -4);
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(lVar11 + -0xc));
    }
  }
  piVar12 = puVar10 + -1;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
    if (bVar7) {
      *piVar12 = *piVar12 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *param_2 = (long)puVar10;
  param_2[1] = (long)puVar15;
  do {
    iVar3 = *piVar12;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
    if (bVar7) {
      *piVar12 = iVar3 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar3 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(puVar10 + -3));
  return;
}



/* Entry: 109aa8dac; end: 109aa8f2f;  */

uint * FUN_109aa8dac(long param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  uint *puVar8;
  uint *puStack_58;
  
  if (param_1 == 0) {
    puVar8 = (uint *)0x0;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
    if ((int)param_3 < 0) {
      uVar4 = (uint)*param_2;
      if (*param_2 == 0) {
        uVar3 = 0;
        param_3 = 0;
      }
      else {
        param_3 = 0;
        uVar3 = 0;
        do {
          uVar3 = uVar3 * 0x21 + uVar4;
          uVar4 = (uint)param_2[param_3 + 1];
          param_3 = param_3 + 1;
        } while (uVar4 != 0);
      }
    }
    else {
      uVar3 = 0;
      if ((int)param_3 != 0) {
        uVar5 = param_3 & 0xffffffff;
        pbVar6 = param_2;
        do {
          uVar3 = uVar3 * 0x21 + (uint)*pbVar6;
          uVar5 = uVar5 - 1;
          pbVar6 = pbVar6 + 1;
        } while (uVar5 != 0);
      }
    }
    uVar3 = uVar3 & 0x7fffffff;
    uVar4 = *(uint *)(lVar7 + 0x6c);
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = uVar3 / uVar4;
    }
    uVar1 = uVar3 - uVar1 * uVar4;
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar1 = uVar4 - 1 & uVar3;
    }
    puVar8 = *(uint **)(*(long *)(lVar7 + 0x70) + (ulong)uVar1 * 8);
    if (puVar8 != (uint *)0x0) {
      do {
        if ((*puVar8 == uVar3) && (puVar8[2] == (uint)param_3)) {
          uVar2 = *(undefined8 *)(puVar8 + 4);
          _memcmp(uVar2,param_2,param_3 & 0xffffffff);
          if ((int)uVar2 == 0) {
            return puVar8;
          }
        }
        puVar8 = *(uint **)(puVar8 + 6);
      } while (puVar8 != (uint *)0x0);
    }
    puStack_58 = *(uint **)(lVar7 + 0x60);
    if (puStack_58 == (uint *)0x0) {
      FUN_109a4f6dc(lVar7,0,&puStack_58);
    }
    else {
      *(undefined8 *)(lVar7 + 0x60) = *(undefined8 *)(puStack_58 + 2);
      *puStack_58 = *puStack_58 & 0x3ffffff;
      *(int *)(lVar7 + 0x68) = *(int *)(lVar7 + 0x68) + 1;
    }
    puVar8 = puStack_58;
    *puStack_58 = uVar3;
    uVar2 = *(undefined8 *)(lVar7 + 0x48);
    FUN_109a4c450(uVar2,param_2,param_3);
    *(undefined8 *)(puVar8 + 2) = uVar2;
    *(byte **)(puVar8 + 4) = param_2;
    lVar7 = *(long *)(lVar7 + 0x70);
    *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(lVar7 + (ulong)uVar1 * 8);
    *(uint **)(lVar7 + (ulong)uVar1 * 8) = puVar8;
  }
  return puVar8;
}



/* Entry: 109aa8f30; end: 109aa92c7;  */

uint * FUN_109aa8f30(int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  uint *puStack_468;
  undefined8 uStack_460;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == (int *)0x0) {
LAB_109aa90ac:
    puVar7 = (uint *)0x0;
LAB_109aa90b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return puVar7;
    }
    ___stack_chk_fail();
  }
  else if (*param_1 == 0x4c4d4159) {
    if (param_3 == (uint *)0x0) {
      puVar4 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar4 = 1;
      puStack_468 = puVar4 + 1;
      uStack_460 = 0x10;
      *(undefined1 *)(puVar4 + 5) = 0;
      *(undefined8 *)(puVar4 + 3) = 0x746e656d656c6520;
      *(undefined8 *)(puVar4 + 1) = 0x79656b206c6c754e;
      FUN_109ac3188(0xffffffe5,&puStack_468,&UNK_10f598e50,&UNK_10f598d74,0x27d);
      goto LAB_109aa9258;
    }
    if (param_2 == (uint *)0x0) {
      iVar10 = 1;
    }
    else if ((*(long *)(param_1 + 0xc) == 0) ||
            (iVar10 = *(int *)(*(long *)(param_1 + 0xc) + 0x28), iVar10 < 1)) goto LAB_109aa90ac;
    puVar7 = (uint *)0x0;
    iVar8 = 0;
    do {
      puVar3 = param_2;
      if (param_2 == (uint *)0x0) {
        puVar3 = *(uint **)(param_1 + 0xc);
        FUN_109a4c8b8(puVar3,iVar8);
      }
      uVar11 = *puVar3 & 7;
      if (uVar11 != 6) {
        if ((uVar11 == 0) || ((uVar11 == 5 && (*(int *)(*(long *)(puVar3 + 4) + 0x28) == 0))))
        goto LAB_109aa90ac;
        puVar4 = (undefined4 *)0x38;
        func_0x000107c2ae8c();
        *puVar4 = 1;
        puStack_468 = puVar4 + 1;
        uStack_460 = 0x31;
        *(undefined8 *)(puVar4 + 3) = 0x7469656e20736920;
        *(undefined8 *)(puVar4 + 1) = 0x65646f6e20656854;
        *(undefined2 *)(puVar4 + 0xd) = 0x6e;
        *(undefined8 *)(puVar4 + 7) = 0x6e6120726f6e2070;
        *(undefined8 *)(puVar4 + 5) = 0x616d206120726568;
        *(undefined8 *)(puVar4 + 0xb) = 0x6f697463656c6c6f;
        *(undefined8 *)(puVar4 + 9) = 0x63207974706d6520;
        FUN_109ac3188(0xfffffffe,&puStack_468,&UNK_10f598e50,&UNK_10f598d74,0x294);
        goto LAB_109aa9258;
      }
      lVar9 = *(long *)(puVar3 + 4);
      uVar11 = *(uint *)(lVar9 + 0x6c);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar11 = *param_3 & uVar11 - 1;
      }
      else {
        uVar1 = 0;
        if (uVar11 != 0) {
          uVar1 = *param_3 / uVar11;
        }
        uVar11 = *param_3 - uVar1 * uVar11;
      }
      lVar5 = *(long *)(lVar9 + 0x70);
      for (lVar6 = *(long *)(lVar5 + (long)(int)uVar11 * 8); lVar6 != 0;
          lVar6 = *(long *)(lVar6 + 0x28)) {
        if (*(uint **)(lVar6 + 0x20) == param_3) {
          _sprintf(&puStack_468,&UNK_10f5995c9);
          FUN_109ac32d8(0xffffff2c,&UNK_10f598e50,&puStack_468,&UNK_10f598d74,0x2a8);
          goto LAB_109aa9258;
        }
      }
      if (iVar8 == iVar10 + -1) {
        puStack_468 = *(uint **)(lVar9 + 0x60);
        if (puStack_468 == (uint *)0x0) {
          FUN_109a4f6dc(lVar9,0,&puStack_468);
          lVar5 = *(long *)(lVar9 + 0x70);
        }
        else {
          *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)(puStack_468 + 2);
          *puStack_468 = *puStack_468 & 0x3ffffff;
          *(int *)(lVar9 + 0x68) = *(int *)(lVar9 + 0x68) + 1;
        }
        *(uint **)(puStack_468 + 8) = param_3;
        *(undefined8 *)(puStack_468 + 10) = *(undefined8 *)(lVar5 + (long)(int)uVar11 * 8);
        *(uint **)(lVar5 + (long)(int)uVar11 * 8) = puStack_468;
        puVar7 = puStack_468;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar10);
    goto LAB_109aa90b0;
  }
  puVar4 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_468 = puVar4 + 1;
  uStack_460 = 0x1f;
  *(undefined1 *)((long)puVar4 + 0x23) = 0;
  *(undefined8 *)(puVar4 + 3) = 0x207265746e696f70;
  *(undefined8 *)(puVar4 + 1) = 0x2064696c61766e49;
  *(undefined8 *)((long)puVar4 + 0x1b) = 0x656761726f747320;
  *(undefined8 *)((long)puVar4 + 0x13) = 0x656c6966206f7420;
  FUN_109ac3188(0xfffffffb,&puStack_468,&UNK_10f598e50,&UNK_10f598d74,0x27a);
LAB_109aa9258:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109aa925c);
  (*pcVar2)();
}



/* Entry: 109aa92c8; end: 109aa9323;  */

long FUN_109aa92c8(void)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int *piVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  undefined4 *puStack_4b0;
  undefined8 uStack_4a8;
  byte abStack_428 [1024];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _sprintf(abStack_428,&UNK_10f5995c9);
  puVar8 = (uint *)&UNK_10f599f6c;
  pbVar9 = abStack_428;
  piVar4 = (int *)0xffffff2c;
  FUN_109ac32d8();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if (*piVar4 != 0x4c4d4159) {
    puVar7 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar7 = 1;
    puStack_4b0 = puVar7 + 1;
    uStack_4a8 = 0x1f;
    *(undefined1 *)((long)puVar7 + 0x23) = 0;
    *(undefined8 *)(puVar7 + 3) = 0x207265746e696f70;
    *(undefined8 *)(puVar7 + 1) = 0x2064696c61766e49;
    *(undefined8 *)((long)puVar7 + 0x1b) = 0x656761726f747320;
    *(undefined8 *)((long)puVar7 + 0x13) = 0x656c6966206f7420;
    FUN_109ac3188(0xfffffffb,&puStack_4b0,&UNK_10f598eb0,&UNK_10f598d74,0x2c5);
    goto LAB_109aa95c8;
  }
  if (pbVar9 == (byte *)0x0) {
    puVar7 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar7 = 1;
    puStack_4b0 = puVar7 + 1;
    uStack_4a8 = 0x11;
    *(undefined2 *)(puVar7 + 5) = 0x65;
    *(undefined8 *)(puVar7 + 3) = 0x6d616e20746e656d;
    *(undefined8 *)(puVar7 + 1) = 0x656c65206c6c754e;
    FUN_109ac3188(0xffffffe5,&puStack_4b0,&UNK_10f598eb0,&UNK_10f598d74,0x2c8);
    goto LAB_109aa95c8;
  }
  uVar11 = (uint)*pbVar9;
  if (*pbVar9 == 0) {
    lVar12 = 0;
    uVar10 = 0;
    if (puVar8 == (uint *)0x0) goto LAB_109aa9450;
LAB_109aa93a0:
    uVar11 = (uint)lVar12;
    iVar15 = 1;
  }
  else {
    lVar12 = 0;
    uVar10 = 0;
    do {
      uVar10 = uVar10 * 0x21 + uVar11;
      uVar11 = (uint)pbVar9[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (uVar11 != 0);
    uVar10 = uVar10 & 0x7fffffff;
    if (puVar8 != (uint *)0x0) goto LAB_109aa93a0;
LAB_109aa9450:
    uVar11 = (uint)lVar12;
    if (*(long *)(piVar4 + 0xc) == 0) {
      return 0;
    }
    iVar15 = *(int *)(*(long *)(piVar4 + 0xc) + 0x28);
    if (iVar15 < 1) {
      return 0;
    }
  }
  iVar13 = 0;
  while( true ) {
    puVar5 = puVar8;
    if (puVar8 == (uint *)0x0) {
      puVar5 = *(uint **)(piVar4 + 0xc);
      FUN_109a4c8b8(puVar5,iVar13);
    }
    uVar1 = *puVar5 & 7;
    if (uVar1 != 6) break;
    uVar1 = *(uint *)(*(long *)(puVar5 + 4) + 0x6c);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar10 / uVar1;
    }
    uVar2 = uVar10 - uVar2 * uVar1;
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar2 = uVar1 - 1 & uVar10;
    }
    for (lVar14 = *(long *)(*(long *)(*(long *)(puVar5 + 4) + 0x70) + (ulong)uVar2 * 8); lVar14 != 0
        ; lVar14 = *(long *)(lVar14 + 0x28)) {
      puVar5 = *(uint **)(lVar14 + 0x20);
      if ((*puVar5 == uVar10) && (puVar5[2] == uVar11)) {
        uVar6 = *(undefined8 *)(puVar5 + 4);
        _memcmp(uVar6,pbVar9,lVar12);
        if ((int)uVar6 == 0) {
          return lVar14;
        }
      }
    }
    iVar13 = iVar13 + 1;
    if (iVar13 == iVar15) {
      return 0;
    }
  }
  if (uVar1 == 0) {
    return 0;
  }
  if ((uVar1 == 5) && (*(int *)(*(long *)(puVar5 + 4) + 0x28) == 0)) {
    return 0;
  }
  puVar7 = (undefined4 *)0x38;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar7 + 3) = 0x7469656e20736920;
  *(undefined8 *)(puVar7 + 1) = 0x65646f6e20656854;
  *puVar7 = 1;
  puStack_4b0 = puVar7 + 1;
  uStack_4a8 = 0x31;
  *(undefined2 *)(puVar7 + 0xd) = 0x6e;
  *(undefined8 *)(puVar7 + 7) = 0x6e6120726f6e2070;
  *(undefined8 *)(puVar7 + 5) = 0x616d206120726568;
  *(undefined8 *)(puVar7 + 0xb) = 0x6f697463656c6c6f;
  *(undefined8 *)(puVar7 + 9) = 0x63207974706d6520;
  FUN_109ac3188(0xfffffffe,&puStack_4b0,&UNK_10f598eb0,&UNK_10f598d74,0x2e3);
LAB_109aa95c8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109aa95cc);
  (*pcVar3)();
}



/* Entry: 109aa9324; end: 109aa962f;  */

long FUN_109aa9324(int *param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != 0x4c4d4159) {
    puVar6 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_70 = puVar6 + 1;
    uStack_68 = 0x1f;
    *(undefined1 *)((long)puVar6 + 0x23) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x207265746e696f70;
    *(undefined8 *)(puVar6 + 1) = 0x2064696c61766e49;
    *(undefined8 *)((long)puVar6 + 0x1b) = 0x656761726f747320;
    *(undefined8 *)((long)puVar6 + 0x13) = 0x656c6966206f7420;
    FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f598eb0,&UNK_10f598d74,0x2c5);
    goto LAB_109aa95c8;
  }
  if (param_3 == (byte *)0x0) {
    puVar6 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_70 = puVar6 + 1;
    uStack_68 = 0x11;
    *(undefined2 *)(puVar6 + 5) = 0x65;
    *(undefined8 *)(puVar6 + 3) = 0x6d616e20746e656d;
    *(undefined8 *)(puVar6 + 1) = 0x656c65206c6c754e;
    FUN_109ac3188(0xffffffe5,&puStack_70,&UNK_10f598eb0,&UNK_10f598d74,0x2c8);
    goto LAB_109aa95c8;
  }
  uVar8 = (uint)*param_3;
  if (*param_3 == 0) {
    lVar9 = 0;
    uVar7 = 0;
    if (param_2 == (uint *)0x0) goto LAB_109aa9450;
LAB_109aa93a0:
    uVar8 = (uint)lVar9;
    iVar12 = 1;
  }
  else {
    lVar9 = 0;
    uVar7 = 0;
    do {
      uVar7 = uVar7 * 0x21 + uVar8;
      uVar8 = (uint)param_3[lVar9 + 1];
      lVar9 = lVar9 + 1;
    } while (uVar8 != 0);
    uVar7 = uVar7 & 0x7fffffff;
    if (param_2 != (uint *)0x0) goto LAB_109aa93a0;
LAB_109aa9450:
    uVar8 = (uint)lVar9;
    if (*(long *)(param_1 + 0xc) == 0) {
      return 0;
    }
    iVar12 = *(int *)(*(long *)(param_1 + 0xc) + 0x28);
    if (iVar12 < 1) {
      return 0;
    }
  }
  iVar10 = 0;
  while( true ) {
    puVar4 = param_2;
    if (param_2 == (uint *)0x0) {
      puVar4 = *(uint **)(param_1 + 0xc);
      FUN_109a4c8b8(puVar4,iVar10);
    }
    uVar1 = *puVar4 & 7;
    if (uVar1 != 6) break;
    uVar1 = *(uint *)(*(long *)(puVar4 + 4) + 0x6c);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar7 / uVar1;
    }
    uVar2 = uVar7 - uVar2 * uVar1;
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar2 = uVar1 - 1 & uVar7;
    }
    for (lVar11 = *(long *)(*(long *)(*(long *)(puVar4 + 4) + 0x70) + (ulong)uVar2 * 8); lVar11 != 0
        ; lVar11 = *(long *)(lVar11 + 0x28)) {
      puVar4 = *(uint **)(lVar11 + 0x20);
      if ((*puVar4 == uVar7) && (puVar4[2] == uVar8)) {
        uVar5 = *(undefined8 *)(puVar4 + 4);
        _memcmp(uVar5,param_3,lVar9);
        if ((int)uVar5 == 0) {
          return lVar11;
        }
      }
    }
    iVar10 = iVar10 + 1;
    if (iVar10 == iVar12) {
      return 0;
    }
  }
  if (uVar1 == 0) {
    return 0;
  }
  if ((uVar1 == 5) && (*(int *)(*(long *)(puVar4 + 4) + 0x28) == 0)) {
    return 0;
  }
  puVar6 = (undefined4 *)0x38;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar6 + 3) = 0x7469656e20736920;
  *(undefined8 *)(puVar6 + 1) = 0x65646f6e20656854;
  *puVar6 = 1;
  puStack_70 = puVar6 + 1;
  uStack_68 = 0x31;
  *(undefined2 *)(puVar6 + 0xd) = 0x6e;
  *(undefined8 *)(puVar6 + 7) = 0x6e6120726f6e2070;
  *(undefined8 *)(puVar6 + 5) = 0x616d206120726568;
  *(undefined8 *)(puVar6 + 0xb) = 0x6f697463656c6c6f;
  *(undefined8 *)(puVar6 + 9) = 0x63207974706d6520;
  FUN_109ac3188(0xfffffffe,&puStack_70,&UNK_10f598eb0,&UNK_10f598d74,0x2e3);
LAB_109aa95c8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109aa95cc);
  (*pcVar3)();
}



/* Entry: 109aa9630; end: 109aaa623;  */

byte * FUN_109aa9630(char *param_1,long param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  byte *pbVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  char *pcVar24;
  int iVar25;
  byte *pbVar26;
  byte *pbStack_4f8;
  int iStack_4ec;
  undefined1 auStack_4e8 [8];
  long lStack_4e0;
  long lStack_4d8;
  int iStack_4d0;
  short sStack_4cc;
  undefined4 *puStack_4c0;
  long lStack_4b8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbStack_4f8 = (byte *)0x0;
  uVar1 = param_3 & 3;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar21 = 1;
    if ((param_3 & 3) == 0) {
      bVar7 = (param_3 & 4) != 0;
      puVar3 = &UNK_10f598eed;
      if (bVar7) {
        puVar3 = &UNK_10f598ed6;
      }
      lVar17 = 0x14;
      if (bVar7) {
        lVar17 = 0x16;
      }
      puVar20 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      puStack_4c0 = puVar20 + 1;
      *puVar20 = 1;
      *(undefined1 *)((long)puStack_4c0 + lVar17) = 0;
      lStack_4b8 = lVar17;
      _memcpy(puStack_4c0,puVar3,lVar17);
      FUN_109ac3188(0xffffffe5,&puStack_4c0,&UNK_10f598f02,&UNK_10f598d74,0xa68);
      goto LAB_109aaa5fc;
    }
    pcVar24 = (char *)0x0;
  }
  else {
    pcVar24 = param_1;
    _strlen();
    uVar21 = param_3 >> 2 & 1;
  }
  if ((uVar1 == 2) && (uVar21 != 0)) {
    puVar20 = (undefined4 *)0x4c;
    func_0x000107c2ae8c();
    *puVar20 = 1;
    puStack_4c0 = puVar20 + 1;
    lStack_4b8 = 0x44;
    *(undefined8 *)(puVar20 + 3) = 0x4e455050415f4547;
    *(undefined8 *)(puVar20 + 1) = 0x41524f54535f5643;
    *(undefined8 *)(puVar20 + 7) = 0x454741524f54535f;
    *(undefined8 *)(puVar20 + 5) = 0x564320646e612044;
    *(undefined8 *)(puVar20 + 0xb) = 0x20746f6e20657261;
    *(undefined8 *)(puVar20 + 9) = 0x2059524f4d454d5f;
    *(undefined1 *)(puVar20 + 0x12) = 0;
    puVar20[0x11] = 0x656c6269;
    *(undefined8 *)(puVar20 + 0xf) = 0x7461706d6f632079;
    *(undefined8 *)(puVar20 + 0xd) = 0x6c746e6572727563;
    FUN_109ac3188(0xffffff32,&puStack_4c0,&UNK_10f598f02,&UNK_10f598d74,0xa6f);
    goto LAB_109aaa5fc;
  }
  pbVar8 = (byte *)0x188;
  func_0x000107c2ae8c();
  pbVar8[8] = 0;
  pbVar8[9] = 0;
  pbVar8[10] = 0;
  pbVar8[0xb] = 0;
  pbVar8[0xc] = 0;
  pbVar8[0xd] = 0;
  pbVar8[0xe] = 0;
  pbVar8[0xf] = 0;
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[6] = 0;
  pbVar8[7] = 0;
  pbVar8[0x18] = 0;
  pbVar8[0x19] = 0;
  pbVar8[0x1a] = 0;
  pbVar8[0x1b] = 0;
  pbVar8[0x1c] = 0;
  pbVar8[0x1d] = 0;
  pbVar8[0x1e] = 0;
  pbVar8[0x1f] = 0;
  pbVar8[0x10] = 0;
  pbVar8[0x11] = 0;
  pbVar8[0x12] = 0;
  pbVar8[0x13] = 0;
  pbVar8[0x14] = 0;
  pbVar8[0x15] = 0;
  pbVar8[0x16] = 0;
  pbVar8[0x17] = 0;
  pbVar8[0x28] = 0;
  pbVar8[0x29] = 0;
  pbVar8[0x2a] = 0;
  pbVar8[0x2b] = 0;
  pbVar8[0x2c] = 0;
  pbVar8[0x2d] = 0;
  pbVar8[0x2e] = 0;
  pbVar8[0x2f] = 0;
  pbVar8[0x20] = 0;
  pbVar8[0x21] = 0;
  pbVar8[0x22] = 0;
  pbVar8[0x23] = 0;
  pbVar8[0x24] = 0;
  pbVar8[0x25] = 0;
  pbVar8[0x26] = 0;
  pbVar8[0x27] = 0;
  pbVar8[0x38] = 0;
  pbVar8[0x39] = 0;
  pbVar8[0x3a] = 0;
  pbVar8[0x3b] = 0;
  pbVar8[0x3c] = 0;
  pbVar8[0x3d] = 0;
  pbVar8[0x3e] = 0;
  pbVar8[0x3f] = 0;
  pbVar8[0x30] = 0;
  pbVar8[0x31] = 0;
  pbVar8[0x32] = 0;
  pbVar8[0x33] = 0;
  pbVar8[0x34] = 0;
  pbVar8[0x35] = 0;
  pbVar8[0x36] = 0;
  pbVar8[0x37] = 0;
  pbVar8[0x48] = 0;
  pbVar8[0x49] = 0;
  pbVar8[0x4a] = 0;
  pbVar8[0x4b] = 0;
  pbVar8[0x4c] = 0;
  pbVar8[0x4d] = 0;
  pbVar8[0x4e] = 0;
  pbVar8[0x4f] = 0;
  pbVar8[0x40] = 0;
  pbVar8[0x41] = 0;
  pbVar8[0x42] = 0;
  pbVar8[0x43] = 0;
  pbVar8[0x44] = 0;
  pbVar8[0x45] = 0;
  pbVar8[0x46] = 0;
  pbVar8[0x47] = 0;
  pbVar8[0x58] = 0;
  pbVar8[0x59] = 0;
  pbVar8[0x5a] = 0;
  pbVar8[0x5b] = 0;
  pbVar8[0x5c] = 0;
  pbVar8[0x5d] = 0;
  pbVar8[0x5e] = 0;
  pbVar8[0x5f] = 0;
  pbVar8[0x50] = 0;
  pbVar8[0x51] = 0;
  pbVar8[0x52] = 0;
  pbVar8[0x53] = 0;
  pbVar8[0x54] = 0;
  pbVar8[0x55] = 0;
  pbVar8[0x56] = 0;
  pbVar8[0x57] = 0;
  pbVar8[0x68] = 0;
  pbVar8[0x69] = 0;
  pbVar8[0x6a] = 0;
  pbVar8[0x6b] = 0;
  pbVar8[0x6c] = 0;
  pbVar8[0x6d] = 0;
  pbVar8[0x6e] = 0;
  pbVar8[0x6f] = 0;
  pbVar8[0x60] = 0;
  pbVar8[0x61] = 0;
  pbVar8[0x62] = 0;
  pbVar8[99] = 0;
  pbVar8[100] = 0;
  pbVar8[0x65] = 0;
  pbVar8[0x66] = 0;
  pbVar8[0x67] = 0;
  pbVar8[0x78] = 0;
  pbVar8[0x79] = 0;
  pbVar8[0x7a] = 0;
  pbVar8[0x7b] = 0;
  pbVar8[0x7c] = 0;
  pbVar8[0x7d] = 0;
  pbVar8[0x7e] = 0;
  pbVar8[0x7f] = 0;
  pbVar8[0x70] = 0;
  pbVar8[0x71] = 0;
  pbVar8[0x72] = 0;
  pbVar8[0x73] = 0;
  pbVar8[0x74] = 0;
  pbVar8[0x75] = 0;
  pbVar8[0x76] = 0;
  pbVar8[0x77] = 0;
  pbVar8[0x88] = 0;
  pbVar8[0x89] = 0;
  pbVar8[0x8a] = 0;
  pbVar8[0x8b] = 0;
  pbVar8[0x8c] = 0;
  pbVar8[0x8d] = 0;
  pbVar8[0x8e] = 0;
  pbVar8[0x8f] = 0;
  pbVar8[0x80] = 0;
  pbVar8[0x81] = 0;
  pbVar8[0x82] = 0;
  pbVar8[0x83] = 0;
  pbVar8[0x84] = 0;
  pbVar8[0x85] = 0;
  pbVar8[0x86] = 0;
  pbVar8[0x87] = 0;
  pbVar8[0x98] = 0;
  pbVar8[0x99] = 0;
  pbVar8[0x9a] = 0;
  pbVar8[0x9b] = 0;
  pbVar8[0x9c] = 0;
  pbVar8[0x9d] = 0;
  pbVar8[0x9e] = 0;
  pbVar8[0x9f] = 0;
  pbVar8[0x90] = 0;
  pbVar8[0x91] = 0;
  pbVar8[0x92] = 0;
  pbVar8[0x93] = 0;
  pbVar8[0x94] = 0;
  pbVar8[0x95] = 0;
  pbVar8[0x96] = 0;
  pbVar8[0x97] = 0;
  pbVar8[0xa8] = 0;
  pbVar8[0xa9] = 0;
  pbVar8[0xaa] = 0;
  pbVar8[0xab] = 0;
  pbVar8[0xac] = 0;
  pbVar8[0xad] = 0;
  pbVar8[0xae] = 0;
  pbVar8[0xaf] = 0;
  pbVar8[0xa0] = 0;
  pbVar8[0xa1] = 0;
  pbVar8[0xa2] = 0;
  pbVar8[0xa3] = 0;
  pbVar8[0xa4] = 0;
  pbVar8[0xa5] = 0;
  pbVar8[0xa6] = 0;
  pbVar8[0xa7] = 0;
  pbVar8[0xb8] = 0;
  pbVar8[0xb9] = 0;
  pbVar8[0xba] = 0;
  pbVar8[0xbb] = 0;
  pbVar8[0xbc] = 0;
  pbVar8[0xbd] = 0;
  pbVar8[0xbe] = 0;
  pbVar8[0xbf] = 0;
  pbVar8[0xb0] = 0;
  pbVar8[0xb1] = 0;
  pbVar8[0xb2] = 0;
  pbVar8[0xb3] = 0;
  pbVar8[0xb4] = 0;
  pbVar8[0xb5] = 0;
  pbVar8[0xb6] = 0;
  pbVar8[0xb7] = 0;
  pbVar8[200] = 0;
  pbVar8[0xc9] = 0;
  pbVar8[0xca] = 0;
  pbVar8[0xcb] = 0;
  pbVar8[0xcc] = 0;
  pbVar8[0xcd] = 0;
  pbVar8[0xce] = 0;
  pbVar8[0xcf] = 0;
  pbVar8[0xc0] = 0;
  pbVar8[0xc1] = 0;
  pbVar8[0xc2] = 0;
  pbVar8[0xc3] = 0;
  pbVar8[0xc4] = 0;
  pbVar8[0xc5] = 0;
  pbVar8[0xc6] = 0;
  pbVar8[199] = 0;
  pbVar8[0xd8] = 0;
  pbVar8[0xd9] = 0;
  pbVar8[0xda] = 0;
  pbVar8[0xdb] = 0;
  pbVar8[0xdc] = 0;
  pbVar8[0xdd] = 0;
  pbVar8[0xde] = 0;
  pbVar8[0xdf] = 0;
  pbVar8[0xd0] = 0;
  pbVar8[0xd1] = 0;
  pbVar8[0xd2] = 0;
  pbVar8[0xd3] = 0;
  pbVar8[0xd4] = 0;
  pbVar8[0xd5] = 0;
  pbVar8[0xd6] = 0;
  pbVar8[0xd7] = 0;
  pbVar8[0xe8] = 0;
  pbVar8[0xe9] = 0;
  pbVar8[0xea] = 0;
  pbVar8[0xeb] = 0;
  pbVar8[0xec] = 0;
  pbVar8[0xed] = 0;
  pbVar8[0xee] = 0;
  pbVar8[0xef] = 0;
  pbVar8[0xe0] = 0;
  pbVar8[0xe1] = 0;
  pbVar8[0xe2] = 0;
  pbVar8[0xe3] = 0;
  pbVar8[0xe4] = 0;
  pbVar8[0xe5] = 0;
  pbVar8[0xe6] = 0;
  pbVar8[0xe7] = 0;
  pbVar8[0xf8] = 0;
  pbVar8[0xf9] = 0;
  pbVar8[0xfa] = 0;
  pbVar8[0xfb] = 0;
  pbVar8[0xfc] = 0;
  pbVar8[0xfd] = 0;
  pbVar8[0xfe] = 0;
  pbVar8[0xff] = 0;
  pbVar8[0xf0] = 0;
  pbVar8[0xf1] = 0;
  pbVar8[0xf2] = 0;
  pbVar8[0xf3] = 0;
  pbVar8[0xf4] = 0;
  pbVar8[0xf5] = 0;
  pbVar8[0xf6] = 0;
  pbVar8[0xf7] = 0;
  pbVar8[0x108] = 0;
  pbVar8[0x109] = 0;
  pbVar8[0x10a] = 0;
  pbVar8[0x10b] = 0;
  pbVar8[0x10c] = 0;
  pbVar8[0x10d] = 0;
  pbVar8[0x10e] = 0;
  pbVar8[0x10f] = 0;
  pbVar8[0x100] = 0;
  pbVar8[0x101] = 0;
  pbVar8[0x102] = 0;
  pbVar8[0x103] = 0;
  pbVar8[0x104] = 0;
  pbVar8[0x105] = 0;
  pbVar8[0x106] = 0;
  pbVar8[0x107] = 0;
  pbVar8[0x118] = 0;
  pbVar8[0x119] = 0;
  pbVar8[0x11a] = 0;
  pbVar8[0x11b] = 0;
  pbVar8[0x11c] = 0;
  pbVar8[0x11d] = 0;
  pbVar8[0x11e] = 0;
  pbVar8[0x11f] = 0;
  pbVar8[0x110] = 0;
  pbVar8[0x111] = 0;
  pbVar8[0x112] = 0;
  pbVar8[0x113] = 0;
  pbVar8[0x114] = 0;
  pbVar8[0x115] = 0;
  pbVar8[0x116] = 0;
  pbVar8[0x117] = 0;
  pbVar8[0x128] = 0;
  pbVar8[0x129] = 0;
  pbVar8[0x12a] = 0;
  pbVar8[299] = 0;
  pbVar8[300] = 0;
  pbVar8[0x12d] = 0;
  pbVar8[0x12e] = 0;
  pbVar8[0x12f] = 0;
  pbVar8[0x120] = 0;
  pbVar8[0x121] = 0;
  pbVar8[0x122] = 0;
  pbVar8[0x123] = 0;
  pbVar8[0x124] = 0;
  pbVar8[0x125] = 0;
  pbVar8[0x126] = 0;
  pbVar8[0x127] = 0;
  pbVar8[0x138] = 0;
  pbVar8[0x139] = 0;
  pbVar8[0x13a] = 0;
  pbVar8[0x13b] = 0;
  pbVar8[0x13c] = 0;
  pbVar8[0x13d] = 0;
  pbVar8[0x13e] = 0;
  pbVar8[0x13f] = 0;
  pbVar8[0x130] = 0;
  pbVar8[0x131] = 0;
  pbVar8[0x132] = 0;
  pbVar8[0x133] = 0;
  pbVar8[0x134] = 0;
  pbVar8[0x135] = 0;
  pbVar8[0x136] = 0;
  pbVar8[0x137] = 0;
  pbVar8[0x148] = 0;
  pbVar8[0x149] = 0;
  pbVar8[0x14a] = 0;
  pbVar8[0x14b] = 0;
  pbVar8[0x14c] = 0;
  pbVar8[0x14d] = 0;
  pbVar8[0x14e] = 0;
  pbVar8[0x14f] = 0;
  pbVar8[0x140] = 0;
  pbVar8[0x141] = 0;
  pbVar8[0x142] = 0;
  pbVar8[0x143] = 0;
  pbVar8[0x144] = 0;
  pbVar8[0x145] = 0;
  pbVar8[0x146] = 0;
  pbVar8[0x147] = 0;
  pbVar8[0x158] = 0;
  pbVar8[0x159] = 0;
  pbVar8[0x15a] = 0;
  pbVar8[0x15b] = 0;
  pbVar8[0x15c] = 0;
  pbVar8[0x15d] = 0;
  pbVar8[0x15e] = 0;
  pbVar8[0x15f] = 0;
  pbVar8[0x150] = 0;
  pbVar8[0x151] = 0;
  pbVar8[0x152] = 0;
  pbVar8[0x153] = 0;
  pbVar8[0x154] = 0;
  pbVar8[0x155] = 0;
  pbVar8[0x156] = 0;
  pbVar8[0x157] = 0;
  pbVar8[0x168] = 0;
  pbVar8[0x169] = 0;
  pbVar8[0x16a] = 0;
  pbVar8[0x16b] = 0;
  pbVar8[0x16c] = 0;
  pbVar8[0x16d] = 0;
  pbVar8[0x16e] = 0;
  pbVar8[0x16f] = 0;
  pbVar8[0x160] = 0;
  pbVar8[0x161] = 0;
  pbVar8[0x162] = 0;
  pbVar8[0x163] = 0;
  pbVar8[0x164] = 0;
  pbVar8[0x165] = 0;
  pbVar8[0x166] = 0;
  pbVar8[0x167] = 0;
  pbVar8[0x178] = 0;
  pbVar8[0x179] = 0;
  pbVar8[0x17a] = 0;
  pbVar8[0x17b] = 0;
  pbVar8[0x17c] = 0;
  pbVar8[0x17d] = 0;
  pbVar8[0x17e] = 0;
  pbVar8[0x17f] = 0;
  pbVar8[0x170] = 0;
  pbVar8[0x171] = 0;
  pbVar8[0x172] = 0;
  pbVar8[0x173] = 0;
  pbVar8[0x174] = 0;
  pbVar8[0x175] = 0;
  pbVar8[0x176] = 0;
  pbVar8[0x177] = 0;
  pbVar8[0x180] = 0;
  pbVar8[0x181] = 0;
  pbVar8[0x182] = 0;
  pbVar8[0x183] = 0;
  pbVar8[0x184] = 0;
  pbVar8[0x185] = 0;
  pbVar8[0x186] = 0;
  pbVar8[0x187] = 0;
  lVar9 = 0x40000;
  pbStack_4f8 = pbVar8;
  FUN_109a4bacc();
  lVar17 = lVar9;
  if (param_2 != 0) {
    lVar17 = param_2;
  }
  *(long *)(pbVar8 + 0x10) = lVar9;
  *(long *)(pbVar8 + 0x18) = lVar17;
  pbVar8[0] = 0x59;
  pbVar8[1] = 0x41;
  pbVar8[2] = 0x4d;
  pbVar8[3] = 0x4c;
  *(uint *)(pbVar8 + 8) = (uint)((param_3 & 3) != 0);
  if (uVar21 == 0) {
    FUN_109a4c0e8();
    *(long *)(pbVar8 + 0x60) = lVar9;
    _strcpy();
    lVar9 = *(long *)(pbVar8 + 0x60);
    lVar17 = lVar9;
    _strrchr(lVar9,0x2e);
    if (((lVar17 != 0) && (*(char *)(lVar17 + 1) == 'g')) && (*(char *)(lVar17 + 2) == 'z')) {
      if (*(byte *)(lVar17 + 3) == 0) {
        if (uVar1 == 2) {
LAB_109aaa41c:
          FUN_109aa8984(&pbStack_4f8);
          FUN_109a38ed8(&puStack_4c0,&UNK_10f598f59);
          FUN_109ac3188(0xffffff2b,&puStack_4c0,&UNK_10f598f02,&UNK_10f598d74,0xa88);
          goto LAB_109aaa5fc;
        }
      }
      else {
        if ((9 < *(byte *)(lVar17 + 3) - 0x30) || (*(char *)(lVar17 + 4) != '\0'))
        goto LAB_109aa97b4;
        if (uVar1 == 2) goto LAB_109aaa41c;
        *(undefined1 *)(lVar17 + 3) = 0;
      }
      FUN_109aa8984(&pbStack_4f8);
      puVar20 = (undefined4 *)0x48;
      func_0x000107c2ae8c();
      *puVar20 = 1;
      puStack_4c0 = puVar20 + 1;
      lStack_4b8 = 0x41;
      *(undefined8 *)(puVar20 + 3) = 0x706d6f63206f6e20;
      *(undefined8 *)(puVar20 + 1) = 0x7369206572656854;
      *(undefined8 *)(puVar20 + 7) = 0x726f747320656c69;
      *(undefined8 *)(puVar20 + 5) = 0x6620646573736572;
      *(undefined8 *)(puVar20 + 0xb) = 0x74206e692074726f;
      *(undefined8 *)(puVar20 + 9) = 0x7070757320656761;
      *(undefined2 *)(puVar20 + 0x11) = 0x6e;
      *(undefined8 *)(puVar20 + 0xf) = 0x6f69746172756769;
      *(undefined8 *)(puVar20 + 0xd) = 0x666e6f6320736968;
      FUN_109ac3188(0xffffff2b,&puStack_4c0,&UNK_10f598f02,&UNK_10f598d74,0xa9f);
      goto LAB_109aaa5fc;
    }
LAB_109aa97b4:
    puVar3 = &UNK_10f598f8e;
    if (uVar1 == 2) {
      puVar3 = &UNK_10f598f91;
    }
    puVar2 = &UNK_10f551d45;
    if (*(int *)(pbVar8 + 8) != 0) {
      puVar2 = puVar3;
    }
    _fopen(lVar9,puVar2);
    pbVar26 = pbVar8 + 0x68;
    *(long *)pbVar26 = lVar9;
    if (lVar9 != 0) {
      pbVar8[0x30] = 0;
      pbVar8[0x31] = 0;
      pbVar8[0x32] = 0;
      pbVar8[0x33] = 0;
      pbVar8[0x34] = 0;
      pbVar8[0x35] = 0;
      pbVar8[0x36] = 0;
      pbVar8[0x37] = 0;
      pbVar8[0x40] = 0;
      pbVar8[0x41] = 0;
      pbVar8[0x42] = 0;
      pbVar8[0x43] = 0;
      pbVar8[0x44] = 0;
      pbVar8[0x45] = 0;
      pbVar8[0x46] = 0;
      pbVar8[0x47] = 0;
      pbVar8[0x90] = 0x47;
      pbVar8[0x91] = 0;
      pbVar8[0x92] = 0;
      pbVar8[0x93] = 0;
      if (*(int *)(pbVar8 + 8) == 0) goto LAB_109aa9850;
      goto LAB_109aa980c;
    }
LAB_109aa9f84:
    if (((*(long *)(pbVar8 + 0x70) == 0) && (*(long *)(pbVar8 + 0x178) == 0)) &&
       (*(long *)(pbVar8 + 0x160) == 0)) {
      FUN_109aa8984(&pbStack_4f8);
      pbVar8 = pbStack_4f8;
    }
    else if (*(int *)(pbVar8 + 8) == 0) goto LAB_109aa9fa4;
  }
  else {
    pbVar8[0x30] = 0;
    pbVar8[0x31] = 0;
    pbVar8[0x32] = 0;
    pbVar8[0x33] = 0;
    pbVar8[0x34] = 0;
    pbVar8[0x35] = 0;
    pbVar8[0x36] = 0;
    pbVar8[0x37] = 0;
    pbVar8[0x40] = 0;
    pbVar8[0x41] = 0;
    pbVar8[0x42] = 0;
    pbVar8[0x43] = 0;
    pbVar8[0x44] = 0;
    pbVar8[0x45] = 0;
    pbVar8[0x46] = 0;
    pbVar8[0x47] = 0;
    pbVar8[0x90] = 0x47;
    pbVar8[0x91] = 0;
    pbVar8[0x92] = 0;
    pbVar8[0x93] = 0;
    if ((param_3 & 3) == 0) {
      *(char **)(pbVar8 + 0x160) = param_1;
      *(char **)(pbVar8 + 0x168) = pcVar24;
LAB_109aa9850:
      FUN_109aaa730(pbVar8,&iStack_4d0,0xe);
      iVar22 = 8;
      if (iStack_4d0 == 0x4d415925 && sStack_4cc == 0x3a4c) {
        iVar22 = 0x10;
      }
      *(int *)(pbVar8 + 4) = iVar22;
      if (uVar21 == 0) {
        _fseek(*(undefined8 *)(pbVar8 + 0x68),0,2);
        uVar16 = *(ulong *)(pbVar8 + 0x68);
        _ftell();
      }
      else {
        uVar16 = *(ulong *)(pbVar8 + 0x168);
      }
      if (uVar16 < 0x2401) {
        uVar16 = 0x2400;
      }
      if (0xfffff < uVar16) {
        uVar16 = 0x100000;
      }
      if (*(long *)(pbVar8 + 0x68) != 0) {
        _rewind();
      }
      uVar18 = *(undefined8 *)(pbVar8 + 0x10);
      pbVar8[0x170] = 0;
      pbVar8[0x171] = 0;
      pbVar8[0x172] = 0;
      pbVar8[0x173] = 0;
      pbVar8[0x174] = 0;
      pbVar8[0x175] = 0;
      pbVar8[0x176] = 0;
      pbVar8[0x177] = 0;
      lVar17 = 0;
      FUN_109a4f5b0(0,0x78,0x20,uVar18);
      *(undefined4 *)(lVar17 + 0x6c) = 0x100;
      FUN_109a4c0e8(uVar18,0x800);
      *(undefined8 *)(lVar17 + 0x70) = uVar18;
      _bzero();
      *(long *)(pbVar8 + 0x28) = lVar17;
      uVar18 = 0;
      FUN_109a4c4b8(0,0x60,0x20,*(undefined8 *)(pbVar8 + 0x10));
      *(undefined8 *)(pbVar8 + 0x30) = uVar18;
      puVar11 = (undefined1 *)(uVar16 + 0x100);
      func_0x000107c2ae8c();
      *(undefined1 **)(pbVar8 + 0x78) = puVar11;
      *(undefined1 **)(pbVar8 + 0x80) = puVar11;
      *(undefined1 **)(pbVar8 + 0x88) = puVar11 + uVar16;
      *puVar11 = 10;
      *(undefined1 *)(*(long *)(pbVar8 + 0x78) + 1) = 0;
      if (*(int *)(pbVar8 + 4) == 8) {
        lStack_4e0 = 0;
        lStack_4d8 = 0;
        iStack_4ec = 0;
        pbVar26 = pbVar8;
        FUN_109ab364c(pbVar8,*(byte **)(pbVar8 + 0x80),2);
        if (*(int *)pbVar26 != 0x6d783f3c || pbVar26[4] != 0x6c) {
          _sprintf(&puStack_4c0,&UNK_10f5995c9);
          FUN_109ac32d8(0xffffff2c,&UNK_10f59994a,&puStack_4c0,&UNK_10f598d74,0x8ac);
          goto LAB_109aaa5fc;
        }
        pbVar13 = pbVar8;
        FUN_109ab38d0(pbVar8,pbVar26,&lStack_4d8,auStack_4e8,&iStack_4ec);
        bVar4 = *pbVar13;
        while ((bVar4 != 0 && (pbVar26 = pbVar8, FUN_109ab364c(pbVar8,pbVar13,0), *pbVar26 != 0))) {
          pbVar13 = pbVar8;
          FUN_109ab38d0(pbVar8,pbVar26,&lStack_4d8,auStack_4e8,&iStack_4ec);
          lVar17 = lStack_4d8;
          if (iStack_4ec != 1) {
LAB_109aaa010:
            _sprintf(&puStack_4c0,&UNK_10f5995c9);
            uVar18 = 0x8c9;
LAB_109aaa074:
            FUN_109ac32d8(0xffffff2c,&UNK_10f59994a,&puStack_4c0,&UNK_10f598d74,uVar18);
            goto LAB_109aaa5fc;
          }
          uVar18 = *(undefined8 *)(lStack_4d8 + 0x10);
          _strcmp(uVar18,&UNK_10f599980);
          if ((int)uVar18 != 0) goto LAB_109aaa010;
          uVar18 = *(undefined8 *)(pbVar8 + 0x30);
          FUN_109a4d978(uVar18,0);
          pbVar26 = pbVar8;
          func_0x000109ab3f3c(pbVar8,pbVar13,uVar18,0);
          pbVar12 = pbVar8;
          FUN_109ab38d0(pbVar8,pbVar26,&lStack_4e0,auStack_4e8,&iStack_4ec);
          if ((iStack_4ec != 2) || (lVar17 != lStack_4e0)) {
            _sprintf(&puStack_4c0,&UNK_10f5995c9);
            uVar18 = 0x8cf;
            goto LAB_109aaa074;
          }
          pbVar13 = pbVar8;
          FUN_109ab364c(pbVar8,pbVar12,0);
          bVar4 = *pbVar13;
        }
      }
      else {
        bVar7 = false;
        pbVar26 = *(byte **)(pbVar8 + 0x80);
LAB_109aa9ad4:
        do {
          while( true ) {
            pbVar13 = pbVar8;
            FUN_109ab4e08(pbVar8,pbVar26,0);
            if (pbVar13 == (byte *)0x0) goto LAB_109aa9a8c;
            bVar4 = *pbVar13;
            pbVar26 = pbVar13;
            if (bVar4 == 0x2d) break;
            if (bVar4 != 0x25) {
              uVar21 = (uint)bVar4;
              uVar1 = (uVar21 & 0xffffffdf) - 0x41;
              bVar6 = uVar21 - 0x30 < 10;
              if (((uVar21 != 0x5f && !bVar6) && 0x18 < uVar1) &&
                  ((uVar21 == 0x5f || bVar6) || uVar1 != 0x19)) {
                if (*(int *)(pbVar8 + 0x98) != 0) goto LAB_109aa9b74;
                _sprintf(&puStack_4c0,&UNK_10f5995c9);
                uVar18 = 0x566;
                goto LAB_109aaa13c;
              }
              if (!bVar7) goto LAB_109aa9b74;
              _sprintf(&puStack_4c0,&UNK_10f5995c9);
              uVar18 = 0x560;
LAB_109aaa4bc:
              FUN_109ac32d8(0xffffff2c,&UNK_10f599e47,&puStack_4c0,&UNK_10f598d74,uVar18);
              goto LAB_109aaa5fc;
            }
            if ((*(int *)pbVar13 == 0x4d415925 && *(short *)(pbVar13 + 4) == 0x3a4c) &&
               (*(long *)pbVar13 != 0x2e313a4c4d415925)) goto LAB_109aaa10c;
            *pbVar13 = 0;
          }
          if (*(short *)pbVar13 == 0x2d2d && pbVar13[2] == 0x2d) {
            pbVar13 = pbVar13 + 3;
          }
          else if (bVar7) goto LAB_109aa9ad4;
LAB_109aa9b74:
          pbVar26 = pbVar8;
          FUN_109ab4e08(pbVar8,pbVar13,0);
          if (*(short *)pbVar26 != 0x2e2e || pbVar26[2] != 0x2e) {
            puVar14 = *(uint **)(pbVar8 + 0x30);
            FUN_109a4d978(puVar14,0);
            pbVar13 = pbVar8;
            FUN_109ab5034(pbVar8,pbVar26,puVar14,0,0);
            if ((*puVar14 & 7) < 5) {
              _sprintf(&puStack_4c0,&UNK_10f5995c9);
              uVar18 = 0x571;
              goto LAB_109aaa4bc;
            }
            pbVar26 = pbVar8;
            FUN_109ab4e08(pbVar8,pbVar13,0);
            if (pbVar26 == (byte *)0x0) break;
          }
          bVar7 = true;
          pbVar26 = pbVar26 + 3;
        } while (*(int *)(pbVar8 + 0x98) == 0);
      }
LAB_109aa9a8c:
      pbVar8 = pbStack_4f8;
      if (*(long *)(pbStack_4f8 + 0x80) != 0) {
        _free(*(undefined8 *)(*(long *)(pbStack_4f8 + 0x80) + -8));
      }
      pbVar8[0x78] = 0;
      pbVar8[0x79] = 0;
      pbVar8[0x7a] = 0;
      pbVar8[0x7b] = 0;
      pbVar8[0x7c] = 0;
      pbVar8[0x7d] = 0;
      pbVar8[0x7e] = 0;
      pbVar8[0x7f] = 0;
      pbVar8[0x80] = 0;
      pbVar8[0x81] = 0;
      pbVar8[0x82] = 0;
      pbVar8[0x83] = 0;
      pbVar8[0x84] = 0;
      pbVar8[0x85] = 0;
      pbVar8[0x86] = 0;
      pbVar8[0x87] = 0;
      pbVar8[0x88] = 0;
      pbVar8[0x89] = 0;
      pbVar8[0x8a] = 0;
      pbVar8[0x8b] = 0;
      pbVar8[0x8c] = 0;
      pbVar8[0x8d] = 0;
      pbVar8[0x8e] = 0;
      pbVar8[0x8f] = 0;
    }
    else {
      puVar10 = (undefined8 *)0x30;
      __Znwm();
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      *(undefined8 **)(pbVar8 + 0x178) = puVar10;
LAB_109aa980c:
      uVar21 = param_3 & 0x38;
      if ((param_1 == (char *)0x0) || ((param_3 & 0x38) != 0)) {
        if ((param_3 & 0x38) == 0) goto LAB_109aa9c38;
        *(uint *)(pbVar8 + 4) = uVar21;
        uVar23 = 0x6400;
        if (uVar21 != 8) {
          uVar23 = 0x4400;
        }
      }
      else if (((long)pcVar24 < 4) ||
              (((param_1 = param_1 + (long)pcVar24, *(int *)(param_1 + -4) != 0x6c6d782e &&
                (*(int *)(param_1 + -4) != 0x4c4d582e)) && (*(int *)(param_1 + -4) != 0x6c6d582e))))
      {
        uVar21 = 0x10;
        pbVar8[4] = 0x10;
        pbVar8[5] = 0;
        pbVar8[6] = 0;
        pbVar8[7] = 0;
        uVar23 = 0x4400;
      }
      else {
LAB_109aa9c38:
        uVar21 = 8;
        pbVar8[4] = 8;
        pbVar8[5] = 0;
        pbVar8[6] = 0;
        pbVar8[7] = 0;
        uVar23 = 0x6400;
      }
      if (uVar1 == 2) {
        _fseek(*(undefined8 *)(pbVar8 + 0x68),0,2);
        uVar21 = *(uint *)(pbVar8 + 4);
      }
      uVar18 = 0x28;
      if (uVar21 != 8) {
        uVar18 = 4;
      }
      uVar15 = 0;
      FUN_109a4c4b8(0,0x60,uVar18,*(undefined8 *)(pbVar8 + 0x10));
      *(undefined8 *)(pbVar8 + 0x38) = uVar15;
      pbVar8[0xc] = 1;
      pbVar8[0xd] = 0;
      pbVar8[0xe] = 0;
      pbVar8[0xf] = 0;
      pbVar8[0x40] = 0;
      pbVar8[0x41] = 0;
      pbVar8[0x42] = 0;
      pbVar8[0x43] = 0;
      pbVar8[0x44] = 0x20;
      pbVar8[0x45] = 0;
      pbVar8[0x46] = 0;
      pbVar8[0x47] = 0;
      uVar16 = (ulong)(uVar23 + 0x400);
      func_0x000107c2ae8c();
      *(ulong *)(pbVar8 + 0x78) = uVar16;
      *(ulong *)(pbVar8 + 0x80) = uVar16;
      *(ulong *)(pbVar8 + 0x88) = uVar16 + uVar23;
      if (*(int *)(pbVar8 + 4) == 8) {
        pbVar26 = pbVar8 + 0x68;
        lVar17 = *(long *)pbVar26;
        if (lVar17 == 0) {
          lVar17 = 0;
        }
        else {
          _ftell();
        }
        uVar18 = *(undefined8 *)(pbVar8 + 0x10);
        FUN_109a4bba0();
        *(undefined8 *)(pbVar8 + 0x20) = uVar18;
        if ((uVar1 == 2) && (lVar17 != 0)) {
          iVar22 = (int)lVar17;
          if (0x3ff < iVar22) {
            iVar22 = 0x400;
          }
          _fseek(*(undefined8 *)(pbVar8 + 0x68),(long)-iVar22,2);
          lVar17 = (long)(iVar22 + 2);
          func_0x000107c2ae8c();
          uVar18 = *(undefined8 *)(pbVar8 + 0x68);
          _ftell();
          pbVar13 = pbVar8;
          FUN_109aaa730(pbVar8,lVar17,iVar22);
          if (pbVar13 == (byte *)0x0) {
            iVar25 = -1;
          }
          else {
            iVar25 = -1;
            do {
              pbVar12 = pbVar13;
              _strstr(pbVar13,&UNK_10f599085);
              if (pbVar12 != (byte *)0x0) {
                do {
                  pbVar19 = pbVar12;
                  pbVar12 = pbVar19 + 0x11;
                  _strstr(pbVar12,&UNK_10f599085);
                } while (pbVar12 != (byte *)0x0);
                iVar25 = ((int)pbVar19 - (int)pbVar13) + (int)uVar18;
              }
              uVar18 = *(undefined8 *)(pbVar8 + 0x68);
              _ftell();
              pbVar13 = pbVar8;
              FUN_109aaa730(pbVar8,lVar17,iVar22);
            } while (pbVar13 != (byte *)0x0);
          }
          if (lVar17 != 0) {
            _free(*(undefined8 *)(lVar17 + -8));
          }
          if (iVar25 < 0) {
            FUN_109aa8984(&pbStack_4f8);
            puVar20 = (undefined4 *)0x3c;
            func_0x000107c2ae8c();
            *puVar20 = 1;
            puStack_4c0 = puVar20 + 1;
            lStack_4b8 = 0x35;
            *(undefined8 *)(puVar20 + 3) = 0x3c20646e69662074;
            *(undefined8 *)(puVar20 + 1) = 0x6f6e20646c756f43;
            *(undefined1 *)((long)puVar20 + 0x39) = 0;
            *(undefined8 *)(puVar20 + 7) = 0x3e656761726f7473;
            *(undefined8 *)(puVar20 + 5) = 0x5f76636e65706f2f;
            *(undefined8 *)(puVar20 + 0xb) = 0x6620666f20646e65;
            *(undefined8 *)(puVar20 + 9) = 0x20656874206e6920;
            *(undefined8 *)((long)puVar20 + 0x31) = 0xa2e656c69662066;
            FUN_109ac3188(0xfffffffe,&puStack_4c0,&UNK_10f598f02,&UNK_10f598d74,0xafe);
            goto LAB_109aaa5fc;
          }
          if (*(long *)pbVar26 != 0) {
            _fclose();
          }
          pbVar8[0x160] = 0;
          pbVar8[0x161] = 0;
          pbVar8[0x162] = 0;
          pbVar8[0x163] = 0;
          pbVar8[0x164] = 0;
          pbVar8[0x165] = 0;
          pbVar8[0x166] = 0;
          pbVar8[0x167] = 0;
          pbVar8[0x170] = 0;
          pbVar8[0x171] = 0;
          pbVar8[0x172] = 0;
          pbVar8[0x173] = 0;
          pbVar8[0x174] = 0;
          pbVar8[0x175] = 0;
          pbVar8[0x176] = 0;
          pbVar8[0x177] = 0;
          pbVar8[0x180] = 0;
          pbVar26[0] = 0;
          pbVar26[1] = 0;
          pbVar26[2] = 0;
          pbVar26[3] = 0;
          pbVar26[4] = 0;
          pbVar26[5] = 0;
          pbVar26[6] = 0;
          pbVar26[7] = 0;
          pbVar8[0x70] = 0;
          pbVar8[0x71] = 0;
          pbVar8[0x72] = 0;
          pbVar8[0x73] = 0;
          pbVar8[0x74] = 0;
          pbVar8[0x75] = 0;
          pbVar8[0x76] = 0;
          pbVar8[0x77] = 0;
          uVar18 = *(undefined8 *)(pbVar8 + 0x60);
          _fopen(uVar18,&UNK_10f5990cd);
          *(undefined8 *)(pbVar8 + 0x68) = uVar18;
          _fseek();
          FUN_109aaa624(pbVar8,&UNK_10f5990d1);
          _fseek(*(undefined8 *)(pbVar8 + 0x68),0,2);
          FUN_109aaa624(pbVar8,&DAT_10f68f57e);
        }
        else {
          if (param_4 == 0) {
            FUN_109aaa624(pbVar8,&UNK_10f59905c);
          }
          else {
            uVar16 = param_4;
            _strcmp(param_4,&DAT_10f51a61d);
            if ((((int)uVar16 == 0) ||
                (uVar16 = param_4, _strcmp(param_4,&UNK_10f598fd7), (int)uVar16 == 0)) ||
               (uVar16 = param_4, _strcmp(param_4,&UNK_10f598fde), (int)uVar16 == 0)) {
              FUN_109aa8984(&pbStack_4f8);
              puVar20 = (undefined4 *)0x40;
              func_0x000107c2ae8c();
              *puVar20 = 1;
              puStack_4c0 = puVar20 + 1;
              lStack_4b8 = 0x39;
              *(undefined8 *)(puVar20 + 3) = 0x646f636e65204c4d;
              *(undefined8 *)(puVar20 + 1) = 0x582036312d465455;
              *(undefined1 *)((long)puVar20 + 0x3d) = 0;
              *(undefined8 *)(puVar20 + 7) = 0x6f7070757320746f;
              *(undefined8 *)(puVar20 + 5) = 0x6e20736920676e69;
              *(undefined8 *)(puVar20 + 0xb) = 0x207469622d382065;
              *(undefined8 *)(puVar20 + 9) = 0x7355202164657472;
              *(undefined8 *)((long)puVar20 + 0x35) = 0xa676e69646f636e;
              *(undefined8 *)((long)puVar20 + 0x2d) = 0x65207469622d3820;
              FUN_109ac3188(0xfffffffb,&puStack_4c0,&UNK_10f598f02,&UNK_10f598d74,0xad5);
              goto LAB_109aaa5fc;
            }
            _strlen();
            if (999 < param_4) {
              puVar20 = (undefined4 *)0x1c;
              func_0x000107c2ae8c();
              *puVar20 = 1;
              puStack_4c0 = puVar20 + 1;
              lStack_4b8 = 0x17;
              *(undefined1 *)((long)puVar20 + 0x1b) = 0;
              *(undefined8 *)(puVar20 + 3) = 0x29676e69646f636e;
              *(undefined8 *)(puVar20 + 1) = 0x65286e656c727473;
              *(undefined8 *)((long)puVar20 + 0x13) = 0x30303031203c2029;
              FUN_109ac3188(0xffffff29,&puStack_4c0,&UNK_10f598f02,&UNK_10f598d74,0xad8);
              goto LAB_109aaa5fc;
            }
            _sprintf(&puStack_4c0,&UNK_10f599037);
            FUN_109aaa624(pbVar8,&puStack_4c0);
          }
          FUN_109aaa624(pbVar8,&UNK_10f599073);
        }
        *(code **)(pbVar8 + 0x128) = FUN_109aaa870;
        *(code **)(pbVar8 + 0x130) = FUN_109aaaa6c;
        *(code **)(pbVar8 + 0x138) = FUN_109aaab6c;
        *(code **)(pbVar8 + 0x140) = FUN_109aaac38;
        *(code **)(pbVar8 + 0x148) = FUN_109aaacb0;
        *(code **)(pbVar8 + 0x150) = FUN_109aab080;
        pcVar5 = FUN_109aab490;
      }
      else {
        puVar3 = &UNK_10f5990e3;
        if (uVar1 == 2) {
          puVar3 = &UNK_10f5990ee;
        }
        FUN_109aaa624(pbVar8,puVar3);
        *(code **)(pbVar8 + 0x128) = FUN_109aab504;
        *(code **)(pbVar8 + 0x130) = FUN_109aab6e8;
        *(code **)(pbVar8 + 0x138) = FUN_109aab848;
        *(code **)(pbVar8 + 0x140) = FUN_109aab8e8;
        *(code **)(pbVar8 + 0x148) = FUN_109aab954;
        *(code **)(pbVar8 + 0x150) = FUN_109aabcf0;
        pcVar5 = FUN_109aabfa8;
      }
      *(code **)(pbVar8 + 0x158) = pcVar5;
    }
    pbVar26 = pbVar8 + 0x68;
    pbVar8[0x180] = 1;
    if (*(long *)pbVar26 == 0) goto LAB_109aa9f84;
    if (*(int *)(pbVar8 + 8) == 0) {
      _fclose();
LAB_109aa9fa4:
      pbVar8[0x160] = 0;
      pbVar8[0x161] = 0;
      pbVar8[0x162] = 0;
      pbVar8[0x163] = 0;
      pbVar8[0x164] = 0;
      pbVar8[0x165] = 0;
      pbVar8[0x166] = 0;
      pbVar8[0x167] = 0;
      pbVar8[0x170] = 0;
      pbVar8[0x171] = 0;
      pbVar8[0x172] = 0;
      pbVar8[0x173] = 0;
      pbVar8[0x174] = 0;
      pbVar8[0x175] = 0;
      pbVar8[0x176] = 0;
      pbVar8[0x177] = 0;
      pbVar26[0] = 0;
      pbVar26[1] = 0;
      pbVar26[2] = 0;
      pbVar26[3] = 0;
      pbVar26[4] = 0;
      pbVar26[5] = 0;
      pbVar26[6] = 0;
      pbVar26[7] = 0;
      pbVar26[8] = 0;
      pbVar26[9] = 0;
      pbVar26[10] = 0;
      pbVar26[0xb] = 0;
      pbVar26[0xc] = 0;
      pbVar26[0xd] = 0;
      pbVar26[0xe] = 0;
      pbVar26[0xf] = 0;
      pbVar8[0x180] = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pbVar8;
  }
  ___stack_chk_fail();
LAB_109aaa10c:
  _sprintf(&puStack_4c0,&UNK_10f5995c9);
  uVar18 = 0x550;
LAB_109aaa13c:
  FUN_109ac32d8(0xffffff2c,&UNK_10f599e47,&puStack_4c0,&UNK_10f598d74,uVar18);
LAB_109aaa5fc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109aaa600);
  (*pcVar5)();
}



/* Entry: 109aaa624; end: 109aaa72f;  */

void FUN_109aaa624(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(param_1 + 0x178);
  if (lVar4 != 0) {
    lVar2 = param_2;
    _strlen();
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      func_0x00010538e93c(lVar4,param_2);
      param_2 = param_2 + 1;
    }
    return;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__fputs_11034c300)(param_2);
    return;
  }
  puVar3 = (undefined4 *)0x20;
  func_0x000107c2ae8c();
  *puVar3 = 1;
  puStack_40 = puVar3 + 1;
  uStack_38 = 0x19;
  *(undefined1 *)((long)puVar3 + 0x1d) = 0;
  *(undefined8 *)(puVar3 + 3) = 0x6e20736920656761;
  *(undefined8 *)(puVar3 + 1) = 0x726f747320656854;
  *(undefined8 *)((long)puVar3 + 0x15) = 0x64656e65706f2074;
  *(undefined8 *)((long)puVar3 + 0xd) = 0x6f6e207369206567;
  FUN_109ac3188(0xfffffffe,&puStack_40,&UNK_10f5995ee,&UNK_10f598d74,0x100);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109aaa700);
  (*pcVar1)();
}



/* Entry: 109aaa730; end: 109aaa86f;  */

long FUN_109aaa730(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  lVar6 = *(long *)(param_1 + 0x160);
  if (lVar6 == 0) {
    if (*(long *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__fgets_11034c2a8)(param_2,param_3,*(long *)(param_1 + 0x68));
      return param_2;
    }
    puVar5 = (undefined4 *)0x20;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_30 = puVar5 + 1;
    uStack_28 = 0x19;
    *(undefined1 *)((long)puVar5 + 0x1d) = 0;
    *(undefined8 *)(puVar5 + 3) = 0x6e20736920656761;
    *(undefined8 *)(puVar5 + 1) = 0x726f747320656854;
    *(undefined8 *)((long)puVar5 + 0x15) = 0x64656e65706f2074;
    *(undefined8 *)((long)puVar5 + 0xd) = 0x6f6e207369206567;
    FUN_109ac3188(0xfffffffe,&puStack_30,&UNK_10f5995f6,&UNK_10f598d74,0x11d);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109aaa840);
    (*pcVar4)();
  }
  uVar1 = *(ulong *)(param_1 + 0x168);
  lVar2 = *(long *)(param_1 + 0x170);
  lVar7 = 0;
  do {
    lVar8 = lVar7;
    uVar9 = lVar2 + lVar8;
    lVar7 = lVar8;
    if (uVar1 <= uVar9 || (int)param_3 + -1 <= lVar8) goto LAB_109aaa7c0;
    cVar3 = *(char *)(lVar6 + lVar2 + lVar8);
    if (cVar3 == '\0') break;
    lVar7 = lVar8 + 1;
    *(char *)(param_2 + lVar8) = cVar3;
  } while (cVar3 != '\n');
  uVar9 = lVar2 + lVar8 + 1;
LAB_109aaa7c0:
  *(undefined1 *)(param_2 + (int)lVar7) = 0;
  *(ulong *)(param_1 + 0x170) = uVar9;
  if ((int)lVar7 < 1) {
    param_2 = 0;
  }
  return param_2;
}



/* Entry: 109aaa870; end: 109aaaa6b;  */

void FUN_109aaa870(int *param_1,ulong param_2,uint param_3,long param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  int *piVar8;
  undefined4 *puStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int *piStack_f0;
  int *piStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined4 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined *puStack_98;
  long lStack_90;
  undefined *apuStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_3 & 7) < 5) {
    puVar6 = (undefined4 *)0x48;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar6 + 3) = 0x206e6f697463656c;
    *(undefined8 *)(puVar6 + 1) = 0x6c6f6320656d6f53;
    *(undefined8 *)(puVar6 + 7) = 0x45535f45444f4e5f;
    *(undefined8 *)(puVar6 + 5) = 0x5643203a65707974;
    *(undefined8 *)(puVar6 + 0xb) = 0x50414d5f45444f4e;
    *(undefined8 *)(puVar6 + 9) = 0x5f564320726f2051;
    *puVar6 = 1;
    puStack_d0 = puVar6 + 1;
    uStack_c8 = 0x42;
    *(undefined1 *)((long)puVar6 + 0x46) = 0;
    *(undefined2 *)(puVar6 + 0x11) = 0x6465;
    *(undefined8 *)(puVar6 + 0xf) = 0x6966696365707320;
    *(undefined8 *)(puVar6 + 0xd) = 0x6562207473756d20;
    FUN_109ac3188(0xfffffffb,&puStack_d0,&UNK_10f599641,&UNK_10f598d74,0x940);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109aaaa34);
    (*pcVar4)();
  }
  ppuVar7 = &puStack_98;
  if (param_4 != 0) {
    ppuVar7 = apuStack_88;
    puStack_98 = &UNK_10f599658;
    lStack_90 = param_4;
  }
  *ppuVar7 = (undefined *)0x0;
  FUN_109ab3080(param_1,param_2,1,&puStack_98,0);
  piVar8 = param_1 + 0x10;
  iStack_a0 = *piVar8;
  uStack_9c = param_1[0x11] & 0xffffffdf;
  uStack_a8 = *(undefined8 *)(param_1 + 0x14);
  uStack_b0 = *(undefined8 *)(param_1 + 0x12);
  FUN_109a4befc(*(undefined8 *)(param_1 + 8),auStack_c0);
  piVar5 = *(int **)(param_1 + 0xe);
  FUN_109a4d978(piVar5,auStack_c0);
  *piVar8 = *piVar8 + 2;
  if ((param_3 >> 3 & 1) == 0) {
    piVar5 = param_1;
    FUN_109ab3000();
  }
  param_1[0x11] = param_3 & 0xf | 0x20;
  if (param_2 == 0) {
    piVar8 = (int *)0x0;
    param_1[0x12] = 0;
  }
  else {
    piVar8 = *(int **)(param_1 + 8);
    _strlen();
    FUN_109a4c0e8(piVar8,(long)((param_2 << 0x20) + 0x100000000) >> 0x20);
    piVar5 = piVar8;
    _memcpy();
    *(undefined1 *)((long)piVar8 + (long)(int)param_2) = 0;
    *(ulong *)(param_1 + 0x12) = param_2 & 0xffffffff;
  }
  *(int **)(param_1 + 0x14) = piVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puStack_d0 = (undefined4 *)0x0;
  uStack_c8 = 0;
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    _free(*(undefined8 *)(param_1 + -2));
  }
  piVar8 = piVar5;
  __Unwind_Resume();
  pcStack_d8 = FUN_109aaaa6c;
  piStack_f0 = piVar5;
  piStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (*(int *)(*(long *)(piVar8 + 0xe) + 0x28) != 0) {
    FUN_109ab3080();
    FUN_109a4da80(*(undefined8 *)(piVar8 + 0xe),auStack_118);
    *(undefined8 *)(piVar8 + 0x10) = uStack_f8;
    *(undefined8 *)(piVar8 + 0x14) = uStack_100;
    *(undefined8 *)(piVar8 + 0x12) = uStack_108;
    FUN_109a4bfac(*(undefined8 *)(piVar8 + 8),auStack_118);
    return;
  }
  puVar6 = (undefined4 *)0x1c;
  func_0x000107c2ae8c();
  *puVar6 = 1;
  puStack_128 = puVar6 + 1;
  uStack_120 = 0x14;
  *(undefined1 *)(puVar6 + 6) = 0;
  puVar6[5] = 0x67617420;
  *(undefined8 *)(puVar6 + 3) = 0x676e69736f6c6320;
  *(undefined8 *)(puVar6 + 1) = 0x6172747865206e41;
  FUN_109ac3188(0xfffffffe,&puStack_128,&UNK_10f599799,&UNK_10f598d74,0x968);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109aaab3c);
  (*pcVar4)();
}



/* Entry: 109aaaa6c; end: 109aaab6b;  */

void FUN_109aaaa6c(long param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(*(long *)(param_1 + 0x38) + 0x28) != 0) {
    FUN_109ab3080(param_1,*(undefined8 *)(param_1 + 0x50),2,0,0);
    FUN_109a4da80(*(undefined8 *)(param_1 + 0x38),auStack_48);
    *(undefined8 *)(param_1 + 0x40) = uStack_28;
    *(undefined8 *)(param_1 + 0x50) = uStack_30;
    *(undefined8 *)(param_1 + 0x48) = uStack_38;
    FUN_109a4bfac(*(undefined8 *)(param_1 + 0x20),auStack_48);
    return;
  }
  puVar2 = (undefined4 *)0x1c;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_58 = puVar2 + 1;
  uStack_50 = 0x14;
  *(undefined1 *)(puVar2 + 6) = 0;
  puVar2[5] = 0x67617420;
  *(undefined8 *)(puVar2 + 3) = 0x676e69736f6c6320;
  *(undefined8 *)(puVar2 + 1) = 0x6172747865206e41;
  FUN_109ac3188(0xfffffffe,&puStack_58,&UNK_10f599799,&UNK_10f598d74,0x968);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109aaab3c);
  (*pcVar1)();
}



/* Entry: 109aaab6c; end: 109aaac37;  */

void FUN_109aaab6c(undefined4 *param_1,long param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  char *pcVar18;
  char *pcVar19;
  byte *unaff_x22;
  undefined4 *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *puStack_6270;
  undefined8 uStack_6268;
  undefined8 uStack_6260;
  undefined8 uStack_6258;
  undefined8 uStack_6250;
  byte *pbStack_6248;
  byte *pbStack_6240;
  byte *pbStack_6238;
  undefined4 *puStack_6230;
  undefined4 *puStack_6228;
  undefined1 ***pppuStack_6220;
  code *pcStack_6218;
  ulong uStack_6210;
  undefined4 *puStack_6208;
  undefined4 *puStack_6200;
  undefined8 uStack_61f8;
  byte bStack_61f0;
  byte abStack_61ef [24591];
  long lStack_1e0;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  byte abStack_168 [128];
  long lStack_e8;
  undefined4 *puStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_a3 [107];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = -param_3;
  if (-1 < (int)param_3) {
    uVar14 = param_3;
  }
  acStack_a3[2] = 0;
  uVar22 = (ulong)uVar14;
  pcVar18 = acStack_a3 + 1;
  do {
    pcVar19 = pcVar18;
    uVar14 = (uint)uVar22;
    pcVar18 = pcVar19 + -1;
    *pcVar19 = (char)uVar22 + (char)(uVar22 / 10) * -10 + '0';
    uVar22 = uVar22 / 10;
  } while (9 < uVar14);
  if ((int)param_3 < 0) {
    *pcVar18 = '-';
    pcVar19 = pcVar18;
  }
  pcVar18 = pcVar19;
  _strlen(pcVar19);
  puVar21 = param_1;
  lVar12 = param_2;
  FUN_109aad244(param_1,param_2,pcVar19,pcVar18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_109aaac38;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = param_1;
  lStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_109aad130(abStack_168);
  pbVar6 = abStack_168;
  _strlen();
  pbVar13 = abStack_168;
  FUN_109aad244();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_109aaacb0;
  ppuStack_180 = &puStack_d0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pbVar13 == (byte *)0x0) {
    puVar21 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar21 = 1;
    puStack_6200 = puVar21 + 1;
    uStack_61f8 = 0x13;
    *(undefined1 *)((long)puVar21 + 0x17) = 0;
    *(undefined4 *)((long)puVar21 + 0x13) = 0x7265746e;
    *(undefined8 *)(puVar21 + 3) = 0x6e696f7020676e69;
    *(undefined8 *)(puVar21 + 1) = 0x727473206c6c754e;
    FUN_109ac3188(0xffffffe5,&puStack_6200,&UNK_10f5997c2,&UNK_10f598d74,0x9c7);
LAB_109aab028:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109aab02c);
    (*pcVar3)();
  }
  pbVar7 = pbVar13;
  _strlen();
  iVar5 = (int)pbVar7;
  if (0x1000 < iVar5) {
    puVar21 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar21 = 1;
    puStack_6200 = puVar21 + 1;
    uStack_61f8 = 0x1e;
    *(undefined1 *)((long)puVar21 + 0x22) = 0;
    *(undefined8 *)(puVar21 + 3) = 0x69727473206e6574;
    *(undefined8 *)(puVar21 + 1) = 0x7469727720656854;
    *(undefined8 *)((long)puVar21 + 0x1a) = 0x676e6f6c206f6f74;
    *(undefined8 *)((long)puVar21 + 0x12) = 0x20736920676e6972;
    FUN_109ac3188(0xfffffffb,&puStack_6200,&UNK_10f5997c2,&UNK_10f598d74,0x9cb);
    goto LAB_109aab028;
  }
  bVar4 = (int)pbVar6 != 0;
  bVar2 = bVar4 || iVar5 == 0;
  if (((bVar2) || (*pbVar13 != 0x22)) || (pbVar16 = pbVar13, pbVar13[iVar5 + -1] != 0x22)) {
    bStack_61f0 = 0x22;
    pbVar16 = &bStack_61f0;
    pbVar6 = abStack_61ef;
    puStack_6208 = puVar21;
    if (iVar5 < 1) {
      if (!bVar4 && iVar5 != 0) goto LAB_109aaaec0;
    }
    else {
      uVar22 = (ulong)pbVar7 & 0x7fffffff;
      pbVar16 = &bStack_61f0;
      unaff_x25 = 0x26;
      unaff_x26 = 0x746c;
      pbVar7 = pbVar13;
      do {
        unaff_x22 = pbVar7 + 1;
        bVar1 = *pbVar7;
        uVar14 = (uint)bVar1;
        if (((char)bVar1 < '\0') || (uVar14 == 0x20)) {
          *pbVar6 = bVar1;
LAB_109aaae28:
          bVar2 = true;
          pbVar16 = pbVar6;
        }
        else {
          if (((uVar14 == 0x22) || (uVar14 == 0x3e)) ||
             ((uVar14 == 0x3c || ((uVar14 < 0x20 || ((uVar14 & 0x7e) == 0x26)))))) {
            *pbVar6 = 0x26;
            if (uVar14 == 0x3c) {
              pbVar16[2] = 0x6c;
              pbVar16[3] = 0x74;
LAB_109aaae20:
              pbVar6 = pbVar16 + 4;
            }
            else {
              if (uVar14 == 0x3e) {
                pbVar16[2] = 0x67;
                pbVar16[3] = 0x74;
                goto LAB_109aaae20;
              }
              if (uVar14 == 0x27) {
                pbVar16[2] = 0x61;
                pbVar16[3] = 0x70;
                pbVar16[4] = 0x6f;
                pbVar16[5] = 0x73;
                pbVar6 = pbVar16 + 6;
              }
              else if (uVar14 == 0x26) {
                pbVar16[4] = 0x70;
                pbVar16[2] = 0x61;
                pbVar16[3] = 0x6d;
                pbVar6 = pbVar16 + 5;
              }
              else {
                pbVar6 = pbVar16 + 6;
                if (uVar14 == 0x22) {
                  pbVar16[2] = 0x71;
                  pbVar16[3] = 0x75;
                  pbVar16[4] = 0x6f;
                  pbVar16[5] = 0x74;
                }
                else {
                  uStack_6210 = (ulong)uVar14;
                  _sprintf(pbVar16 + 2,&UNK_10f5997f3);
                }
              }
            }
            *pbVar6 = 0x3b;
            goto LAB_109aaae28;
          }
          *pbVar6 = bVar1;
          pbVar16 = pbVar6;
        }
        pbVar6 = pbVar16 + 1;
        uVar22 = uVar22 - 1;
        pbVar7 = unaff_x22;
      } while (uVar22 != 0);
      unaff_x24 = 0;
      if (!bVar2) {
LAB_109aaaec0:
        bVar1 = *pbVar13;
        if ((9 < bVar1 - 0x30) &&
           ((0x2e < bVar1 || ((1L << ((ulong)bVar1 & 0x3f) & 0x680000000000U) == 0)))) {
          *pbVar6 = 0;
          puVar21 = puStack_6208;
          pbVar16 = abStack_61ef;
          goto LAB_109aaaf08;
        }
      }
    }
    *pbVar6 = 0x22;
    pbVar16[2] = 0;
    puVar21 = puStack_6208;
    pbVar16 = &bStack_61f0;
  }
LAB_109aaaf08:
  iVar5 = (int)pbVar16;
  puVar20 = puVar21;
  FUN_109aad244();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = puVar20;
  __Unwind_Resume();
  pcStack_6218 = FUN_109aab080;
  uStack_6260 = unaff_x26;
  uStack_6258 = unaff_x25;
  uStack_6250 = unaff_x24;
  pbStack_6248 = pbVar13;
  pbStack_6240 = unaff_x22;
  pbStack_6238 = pbVar6;
  puStack_6230 = puVar21;
  puStack_6228 = puVar20;
  pppuStack_6220 = &ppuStack_180;
  if (lVar12 == 0) {
    puVar21 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar21 = 1;
    puStack_6270 = (undefined8 *)(puVar21 + 1);
    *puStack_6270 = 0x6d6f63206c6c754e;
    uStack_6268 = 0xc;
    *(undefined1 *)(puVar21 + 4) = 0;
    puVar21[3] = 0x746e656d;
    FUN_109ac3188(0xffffffe5,&puStack_6270,&UNK_10f599807,&UNK_10f598d74,0xa1a);
LAB_109aab444:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109aab448);
    (*pcVar3)();
  }
  lVar24 = lVar12;
  _strstr(lVar12,"--");
  if (lVar24 != 0) {
    puVar21 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar21 + 3) = 0x2d27206e65687079;
    *(undefined8 *)(puVar21 + 1) = 0x6820656c62756f44;
    *puVar21 = 1;
    puStack_6270 = (undefined8 *)(puVar21 + 1);
    uStack_6268 = 0x31;
    *(undefined2 *)(puVar21 + 0xd) = 0x73;
    *(undefined8 *)(puVar21 + 7) = 0x65776f6c6c612074;
    *(undefined8 *)(puVar21 + 5) = 0x6f6e20736920272d;
    *(undefined8 *)(puVar21 + 0xb) = 0x746e656d6d6f6320;
    *(undefined8 *)(puVar21 + 9) = 0x656874206e692064;
    FUN_109ac3188(0xfffffffb,&puStack_6270,&UNK_10f599807,&UNK_10f598d74,0xa1d);
    goto LAB_109aab444;
  }
  lVar24 = lVar12;
  _strlen();
  lVar9 = lVar12;
  _strchr(lVar12,10);
  puVar21 = puVar8;
  if ((iVar5 == 0) || (lVar9 != 0)) {
    FUN_109ab3000();
    if (lVar9 != 0) {
      *puVar21 = 0x2d2d213c;
      *(undefined1 *)(puVar21 + 1) = 0;
      *(undefined4 **)(puVar8 + 0x1e) = puVar21 + 1;
      puVar21 = puVar8;
      FUN_109ab3000();
      do {
        lVar24 = lVar9 - lVar12;
        iVar5 = (int)lVar24 + 1;
        if (*(undefined1 **)(puVar8 + 0x22) <= (undefined1 *)((long)puVar21 + (long)iVar5)) {
          uVar22 = (long)puVar21 - *(long *)(puVar8 + 0x20);
          lVar10 = ((long)*(undefined1 **)(puVar8 + 0x22) - *(long *)(puVar8 + 0x20)) * 3;
          iVar15 = (int)uVar22;
          iVar5 = iVar5 + iVar15;
          iVar17 = (int)((ulong)(lVar10 - (lVar10 >> 0x3f)) >> 1);
          if (iVar5 <= iVar17) {
            iVar5 = iVar17;
          }
          lVar10 = (long)(iVar5 + 0x100);
          func_0x000107c2ae8c();
          *(long *)(puVar8 + 0x1e) = lVar10 + (*(long *)(puVar8 + 0x1e) - *(long *)(puVar8 + 0x20));
          if (0 < iVar15) {
            _memcpy(lVar10,*(long *)(puVar8 + 0x20),uVar22 & 0x7fffffff);
          }
          *(long *)(puVar8 + 0x20) = lVar10;
          *(long *)(puVar8 + 0x22) = lVar10 + iVar5;
          puVar21 = (undefined4 *)(lVar10 + iVar15);
        }
        _memcpy(puVar21,lVar12,lVar24 + 1);
        lVar12 = lVar9 + 1;
        lVar9 = lVar12;
        _strchr(lVar12,10);
        *(undefined1 **)(puVar8 + 0x1e) = (undefined1 *)((long)puVar21 + lVar24);
        puVar21 = puVar8;
        FUN_109ab3000();
      } while (lVar9 != 0);
      lVar24 = lVar12;
      _strlen();
      iVar5 = (int)lVar24;
      if (*(undefined1 **)(puVar8 + 0x22) <= (undefined1 *)((long)puVar21 + (long)iVar5)) {
        uVar22 = (long)puVar21 - *(long *)(puVar8 + 0x20);
        lVar24 = ((long)*(undefined1 **)(puVar8 + 0x22) - *(long *)(puVar8 + 0x20)) * 3;
        iVar23 = (int)uVar22;
        iVar15 = (int)((ulong)(lVar24 - (lVar24 >> 0x3f)) >> 1);
        iVar17 = iVar23 + iVar5;
        if (iVar23 + iVar5 <= iVar15) {
          iVar17 = iVar15;
        }
        lVar24 = (long)(iVar17 + 0x100);
        func_0x000107c2ae8c();
        *(long *)(puVar8 + 0x1e) = lVar24 + (*(long *)(puVar8 + 0x1e) - *(long *)(puVar8 + 0x20));
        if (0 < iVar23) {
          _memcpy(lVar24,*(long *)(puVar8 + 0x20),uVar22 & 0x7fffffff);
        }
        *(long *)(puVar8 + 0x20) = lVar24;
        *(long *)(puVar8 + 0x22) = lVar24 + iVar17;
        puVar21 = (undefined4 *)(lVar24 + iVar23);
      }
      _memcpy(puVar21,lVar12,(long)iVar5);
      *(undefined1 **)(puVar8 + 0x1e) = (undefined1 *)((long)puVar21 + (long)iVar5);
      puVar21 = puVar8;
      FUN_109ab3000();
      puVar11 = (undefined1 *)((long)puVar21 + 3);
      *puVar21 = 0x3e2d2d;
      goto LAB_109aab358;
    }
  }
  else {
    puVar20 = *(undefined4 **)(puVar8 + 0x1e);
    if (*(long *)(puVar8 + 0x22) - (long)puVar20 < (long)((int)lVar24 + 5)) {
      FUN_109ab3000();
    }
    else {
      puVar21 = puVar20;
      if ((undefined4 *)(*(long *)(puVar8 + 0x20) + (long)(int)puVar8[0x10]) < puVar20) {
        puVar21 = (undefined4 *)((long)puVar20 + 1);
        *(undefined1 *)puVar20 = 0x20;
      }
    }
  }
  iVar5 = (int)lVar24 + 9;
  if (*(undefined1 **)(puVar8 + 0x22) <= (undefined1 *)((long)puVar21 + (long)iVar5)) {
    uVar22 = (long)puVar21 - *(long *)(puVar8 + 0x20);
    lVar12 = ((long)*(undefined1 **)(puVar8 + 0x22) - *(long *)(puVar8 + 0x20)) * 3;
    iVar15 = (int)uVar22;
    iVar5 = iVar5 + iVar15;
    iVar17 = (int)((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
    if (iVar5 <= iVar17) {
      iVar5 = iVar17;
    }
    lVar12 = (long)(iVar5 + 0x100);
    func_0x000107c2ae8c();
    *(long *)(puVar8 + 0x1e) = lVar12 + (*(long *)(puVar8 + 0x1e) - *(long *)(puVar8 + 0x20));
    if (0 < iVar15) {
      _memcpy(lVar12,*(long *)(puVar8 + 0x20),uVar22 & 0x7fffffff);
    }
    *(long *)(puVar8 + 0x20) = lVar12;
    *(long *)(puVar8 + 0x22) = lVar12 + iVar5;
    puVar21 = (undefined4 *)(lVar12 + iVar15);
  }
  _sprintf(puVar21,&UNK_10f59984c);
  puVar20 = puVar21;
  _strlen();
  puVar11 = (undefined1 *)((long)puVar21 + (long)(int)puVar20);
LAB_109aab358:
  *(undefined1 **)(puVar8 + 0x1e) = puVar11;
  lVar12 = *(long *)(puVar8 + 0x20);
  iVar5 = puVar8[0x16];
  if ((undefined2 *)(lVar12 + iVar5) < *(undefined2 **)(puVar8 + 0x1e)) {
    **(undefined2 **)(puVar8 + 0x1e) = 10;
    FUN_109aaa624(puVar8,*(undefined8 *)(puVar8 + 0x20));
    lVar12 = *(long *)(puVar8 + 0x20);
    iVar5 = puVar8[0x16];
  }
  iVar17 = puVar8[0x10];
  if (iVar17 - iVar5 != 0) {
    if (iVar5 <= iVar17) {
      _memset(lVar12 + iVar5,0x20,iVar17 - iVar5);
      lVar12 = *(long *)(puVar8 + 0x20);
    }
    puVar8[0x16] = iVar17;
    iVar5 = iVar17;
  }
  *(long *)(puVar8 + 0x1e) = lVar12 + iVar5;
  return;
}



/* Entry: 109aaac38; end: 109aaacaf;  */

void FUN_109aaac38(undefined4 *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  byte *unaff_x22;
  undefined4 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  int iVar21;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *puStack_61b0;
  undefined8 uStack_61a8;
  undefined8 uStack_61a0;
  undefined8 uStack_6198;
  undefined8 uStack_6190;
  byte *pbStack_6188;
  byte *pbStack_6180;
  byte *pbStack_6178;
  undefined4 *puStack_6170;
  undefined4 *puStack_6168;
  undefined1 **ppuStack_6160;
  code *pcStack_6158;
  ulong uStack_6150;
  undefined4 *puStack_6148;
  undefined4 *puStack_6140;
  undefined8 uStack_6138;
  byte bStack_6130;
  byte abStack_612f [24591];
  long lStack_120;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  byte abStack_a8 [128];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109aad130(abStack_a8);
  pbVar7 = abStack_a8;
  _strlen();
  pbVar14 = abStack_a8;
  FUN_109aad244();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_109aaacb0;
  puStack_c0 = &stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pbVar14 == (byte *)0x0) {
    puVar19 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar19 = 1;
    puStack_6140 = puVar19 + 1;
    uStack_6138 = 0x13;
    *(undefined1 *)((long)puVar19 + 0x17) = 0;
    *(undefined4 *)((long)puVar19 + 0x13) = 0x7265746e;
    *(undefined8 *)(puVar19 + 3) = 0x6e696f7020676e69;
    *(undefined8 *)(puVar19 + 1) = 0x727473206c6c754e;
    FUN_109ac3188(0xffffffe5,&puStack_6140,&UNK_10f5997c2,&UNK_10f598d74,0x9c7);
LAB_109aab028:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109aab02c);
    (*pcVar4)();
  }
  pbVar8 = pbVar14;
  _strlen();
  iVar6 = (int)pbVar8;
  if (0x1000 < iVar6) {
    puVar19 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar19 = 1;
    puStack_6140 = puVar19 + 1;
    uStack_6138 = 0x1e;
    *(undefined1 *)((long)puVar19 + 0x22) = 0;
    *(undefined8 *)(puVar19 + 3) = 0x69727473206e6574;
    *(undefined8 *)(puVar19 + 1) = 0x7469727720656854;
    *(undefined8 *)((long)puVar19 + 0x1a) = 0x676e6f6c206f6f74;
    *(undefined8 *)((long)puVar19 + 0x12) = 0x20736920676e6972;
    FUN_109ac3188(0xfffffffb,&puStack_6140,&UNK_10f5997c2,&UNK_10f598d74,0x9cb);
    goto LAB_109aab028;
  }
  bVar5 = (int)pbVar7 != 0;
  bVar3 = bVar5 || iVar6 == 0;
  if (((bVar3) || (*pbVar14 != 0x22)) || (pbVar16 = pbVar14, pbVar14[iVar6 + -1] != 0x22)) {
    bStack_6130 = 0x22;
    pbVar16 = &bStack_6130;
    pbVar7 = abStack_612f;
    puStack_6148 = param_1;
    if (iVar6 < 1) {
      if (!bVar5 && iVar6 != 0) goto LAB_109aaaec0;
    }
    else {
      uVar20 = (ulong)pbVar8 & 0x7fffffff;
      pbVar16 = &bStack_6130;
      unaff_x25 = 0x26;
      unaff_x26 = 0x746c;
      pbVar8 = pbVar14;
      do {
        unaff_x22 = pbVar8 + 1;
        bVar2 = *pbVar8;
        uVar1 = (uint)bVar2;
        if (((char)bVar2 < '\0') || (uVar1 == 0x20)) {
          *pbVar7 = bVar2;
LAB_109aaae28:
          bVar3 = true;
          pbVar16 = pbVar7;
        }
        else {
          if (((uVar1 == 0x22) || (uVar1 == 0x3e)) ||
             ((uVar1 == 0x3c || ((uVar1 < 0x20 || ((uVar1 & 0x7e) == 0x26)))))) {
            *pbVar7 = 0x26;
            if (uVar1 == 0x3c) {
              pbVar16[2] = 0x6c;
              pbVar16[3] = 0x74;
LAB_109aaae20:
              pbVar7 = pbVar16 + 4;
            }
            else {
              if (uVar1 == 0x3e) {
                pbVar16[2] = 0x67;
                pbVar16[3] = 0x74;
                goto LAB_109aaae20;
              }
              if (uVar1 == 0x27) {
                pbVar16[2] = 0x61;
                pbVar16[3] = 0x70;
                pbVar16[4] = 0x6f;
                pbVar16[5] = 0x73;
                pbVar7 = pbVar16 + 6;
              }
              else if (uVar1 == 0x26) {
                pbVar16[4] = 0x70;
                pbVar16[2] = 0x61;
                pbVar16[3] = 0x6d;
                pbVar7 = pbVar16 + 5;
              }
              else {
                pbVar7 = pbVar16 + 6;
                if (uVar1 == 0x22) {
                  pbVar16[2] = 0x71;
                  pbVar16[3] = 0x75;
                  pbVar16[4] = 0x6f;
                  pbVar16[5] = 0x74;
                }
                else {
                  uStack_6150 = (ulong)uVar1;
                  _sprintf(pbVar16 + 2,&UNK_10f5997f3);
                }
              }
            }
            *pbVar7 = 0x3b;
            goto LAB_109aaae28;
          }
          *pbVar7 = bVar2;
          pbVar16 = pbVar7;
        }
        pbVar7 = pbVar16 + 1;
        uVar20 = uVar20 - 1;
        pbVar8 = unaff_x22;
      } while (uVar20 != 0);
      unaff_x24 = 0;
      if (!bVar3) {
LAB_109aaaec0:
        bVar2 = *pbVar14;
        if ((9 < bVar2 - 0x30) &&
           ((0x2e < bVar2 || ((1L << ((ulong)bVar2 & 0x3f) & 0x680000000000U) == 0)))) {
          *pbVar7 = 0;
          param_1 = puStack_6148;
          pbVar16 = abStack_612f;
          goto LAB_109aaaf08;
        }
      }
    }
    *pbVar7 = 0x22;
    pbVar16[2] = 0;
    param_1 = puStack_6148;
    pbVar16 = &bStack_6130;
  }
LAB_109aaaf08:
  iVar6 = (int)pbVar16;
  puVar19 = param_1;
  FUN_109aad244();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = puVar19;
  __Unwind_Resume();
  pcStack_6158 = FUN_109aab080;
  uStack_61a0 = unaff_x26;
  uStack_6198 = unaff_x25;
  uStack_6190 = unaff_x24;
  pbStack_6188 = pbVar14;
  pbStack_6180 = unaff_x22;
  pbStack_6178 = pbVar7;
  puStack_6170 = param_1;
  puStack_6168 = puVar19;
  ppuStack_6160 = &puStack_c0;
  if (param_2 == 0) {
    puVar19 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar19 = 1;
    puStack_61b0 = (undefined8 *)(puVar19 + 1);
    *puStack_61b0 = 0x6d6f63206c6c754e;
    uStack_61a8 = 0xc;
    *(undefined1 *)(puVar19 + 4) = 0;
    puVar19[3] = 0x746e656d;
    FUN_109ac3188(0xffffffe5,&puStack_61b0,&UNK_10f599807,&UNK_10f598d74,0xa1a);
LAB_109aab444:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109aab448);
    (*pcVar4)();
  }
  lVar13 = param_2;
  _strstr(param_2,"--");
  if (lVar13 != 0) {
    puVar19 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar19 + 3) = 0x2d27206e65687079;
    *(undefined8 *)(puVar19 + 1) = 0x6820656c62756f44;
    *puVar19 = 1;
    puStack_61b0 = (undefined8 *)(puVar19 + 1);
    uStack_61a8 = 0x31;
    *(undefined2 *)(puVar19 + 0xd) = 0x73;
    *(undefined8 *)(puVar19 + 7) = 0x65776f6c6c612074;
    *(undefined8 *)(puVar19 + 5) = 0x6f6e20736920272d;
    *(undefined8 *)(puVar19 + 0xb) = 0x746e656d6d6f6320;
    *(undefined8 *)(puVar19 + 9) = 0x656874206e692064;
    FUN_109ac3188(0xfffffffb,&puStack_61b0,&UNK_10f599807,&UNK_10f598d74,0xa1d);
    goto LAB_109aab444;
  }
  lVar13 = param_2;
  _strlen();
  lVar10 = param_2;
  _strchr(param_2,10);
  puVar19 = puVar9;
  if ((iVar6 == 0) || (lVar10 != 0)) {
    FUN_109ab3000();
    if (lVar10 != 0) {
      *puVar19 = 0x2d2d213c;
      *(undefined1 *)(puVar19 + 1) = 0;
      *(undefined4 **)(puVar9 + 0x1e) = puVar19 + 1;
      puVar19 = puVar9;
      FUN_109ab3000();
      do {
        lVar13 = lVar10 - param_2;
        iVar6 = (int)lVar13 + 1;
        if (*(undefined1 **)(puVar9 + 0x22) <= (undefined1 *)((long)puVar19 + (long)iVar6)) {
          uVar20 = (long)puVar19 - *(long *)(puVar9 + 0x20);
          lVar11 = ((long)*(undefined1 **)(puVar9 + 0x22) - *(long *)(puVar9 + 0x20)) * 3;
          iVar15 = (int)uVar20;
          iVar6 = iVar6 + iVar15;
          iVar17 = (int)((ulong)(lVar11 - (lVar11 >> 0x3f)) >> 1);
          if (iVar6 <= iVar17) {
            iVar6 = iVar17;
          }
          lVar11 = (long)(iVar6 + 0x100);
          func_0x000107c2ae8c();
          *(long *)(puVar9 + 0x1e) = lVar11 + (*(long *)(puVar9 + 0x1e) - *(long *)(puVar9 + 0x20));
          if (0 < iVar15) {
            _memcpy(lVar11,*(long *)(puVar9 + 0x20),uVar20 & 0x7fffffff);
          }
          *(long *)(puVar9 + 0x20) = lVar11;
          *(long *)(puVar9 + 0x22) = lVar11 + iVar6;
          puVar19 = (undefined4 *)(lVar11 + iVar15);
        }
        _memcpy(puVar19,param_2,lVar13 + 1);
        param_2 = lVar10 + 1;
        lVar10 = param_2;
        _strchr(param_2,10);
        *(undefined1 **)(puVar9 + 0x1e) = (undefined1 *)((long)puVar19 + lVar13);
        puVar19 = puVar9;
        FUN_109ab3000();
      } while (lVar10 != 0);
      lVar13 = param_2;
      _strlen();
      iVar6 = (int)lVar13;
      if (*(undefined1 **)(puVar9 + 0x22) <= (undefined1 *)((long)puVar19 + (long)iVar6)) {
        uVar20 = (long)puVar19 - *(long *)(puVar9 + 0x20);
        lVar13 = ((long)*(undefined1 **)(puVar9 + 0x22) - *(long *)(puVar9 + 0x20)) * 3;
        iVar21 = (int)uVar20;
        iVar15 = (int)((ulong)(lVar13 - (lVar13 >> 0x3f)) >> 1);
        iVar17 = iVar21 + iVar6;
        if (iVar21 + iVar6 <= iVar15) {
          iVar17 = iVar15;
        }
        lVar13 = (long)(iVar17 + 0x100);
        func_0x000107c2ae8c();
        *(long *)(puVar9 + 0x1e) = lVar13 + (*(long *)(puVar9 + 0x1e) - *(long *)(puVar9 + 0x20));
        if (0 < iVar21) {
          _memcpy(lVar13,*(long *)(puVar9 + 0x20),uVar20 & 0x7fffffff);
        }
        *(long *)(puVar9 + 0x20) = lVar13;
        *(long *)(puVar9 + 0x22) = lVar13 + iVar17;
        puVar19 = (undefined4 *)(lVar13 + iVar21);
      }
      _memcpy(puVar19,param_2,(long)iVar6);
      *(undefined1 **)(puVar9 + 0x1e) = (undefined1 *)((long)puVar19 + (long)iVar6);
      puVar19 = puVar9;
      FUN_109ab3000();
      puVar12 = (undefined1 *)((long)puVar19 + 3);
      *puVar19 = 0x3e2d2d;
      goto LAB_109aab358;
    }
  }
  else {
    puVar18 = *(undefined4 **)(puVar9 + 0x1e);
    if (*(long *)(puVar9 + 0x22) - (long)puVar18 < (long)((int)lVar13 + 5)) {
      FUN_109ab3000();
    }
    else {
      puVar19 = puVar18;
      if ((undefined4 *)(*(long *)(puVar9 + 0x20) + (long)(int)puVar9[0x10]) < puVar18) {
        puVar19 = (undefined4 *)((long)puVar18 + 1);
        *(undefined1 *)puVar18 = 0x20;
      }
    }
  }
  iVar6 = (int)lVar13 + 9;
  if (*(undefined1 **)(puVar9 + 0x22) <= (undefined1 *)((long)puVar19 + (long)iVar6)) {
    uVar20 = (long)puVar19 - *(long *)(puVar9 + 0x20);
    lVar13 = ((long)*(undefined1 **)(puVar9 + 0x22) - *(long *)(puVar9 + 0x20)) * 3;
    iVar15 = (int)uVar20;
    iVar6 = iVar6 + iVar15;
    iVar17 = (int)((ulong)(lVar13 - (lVar13 >> 0x3f)) >> 1);
    if (iVar6 <= iVar17) {
      iVar6 = iVar17;
    }
    lVar13 = (long)(iVar6 + 0x100);
    func_0x000107c2ae8c();
    *(long *)(puVar9 + 0x1e) = lVar13 + (*(long *)(puVar9 + 0x1e) - *(long *)(puVar9 + 0x20));
    if (0 < iVar15) {
      _memcpy(lVar13,*(long *)(puVar9 + 0x20),uVar20 & 0x7fffffff);
    }
    *(long *)(puVar9 + 0x20) = lVar13;
    *(long *)(puVar9 + 0x22) = lVar13 + iVar6;
    puVar19 = (undefined4 *)(lVar13 + iVar15);
  }
  _sprintf(puVar19,&UNK_10f59984c);
  puVar18 = puVar19;
  _strlen();
  puVar12 = (undefined1 *)((long)puVar19 + (long)(int)puVar18);
LAB_109aab358:
  *(undefined1 **)(puVar9 + 0x1e) = puVar12;
  lVar13 = *(long *)(puVar9 + 0x20);
  iVar6 = puVar9[0x16];
  if ((undefined2 *)(lVar13 + iVar6) < *(undefined2 **)(puVar9 + 0x1e)) {
    **(undefined2 **)(puVar9 + 0x1e) = 10;
    FUN_109aaa624(puVar9,*(undefined8 *)(puVar9 + 0x20));
    lVar13 = *(long *)(puVar9 + 0x20);
    iVar6 = puVar9[0x16];
  }
  iVar17 = puVar9[0x10];
  if (iVar17 - iVar6 != 0) {
    if (iVar6 <= iVar17) {
      _memset(lVar13 + iVar6,0x20,iVar17 - iVar6);
      lVar13 = *(long *)(puVar9 + 0x20);
    }
    puVar9[0x16] = iVar17;
    iVar6 = iVar17;
  }
  *(long *)(puVar9 + 0x1e) = lVar13 + iVar6;
  return;
}



/* Entry: 109aaacb0; end: 109aab07f;  */

void FUN_109aaacb0(undefined4 *param_1,long param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  byte *unaff_x22;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  int iVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *puStack_6100;
  undefined8 uStack_60f8;
  undefined8 uStack_60f0;
  undefined8 uStack_60e8;
  undefined8 uStack_60e0;
  byte *pbStack_60d8;
  byte *pbStack_60d0;
  byte *pbStack_60c8;
  undefined4 *puStack_60c0;
  undefined4 *puStack_60b8;
  undefined1 *puStack_60b0;
  code *pcStack_60a8;
  ulong uStack_60a0;
  undefined4 *puStack_6098;
  undefined4 *puStack_6090;
  undefined8 uStack_6088;
  byte bStack_6080;
  byte abStack_607f [24591];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (byte *)0x0) {
    puVar17 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar17 = 1;
    puStack_6090 = puVar17 + 1;
    uStack_6088 = 0x13;
    *(undefined1 *)((long)puVar17 + 0x17) = 0;
    *(undefined4 *)((long)puVar17 + 0x13) = 0x7265746e;
    *(undefined8 *)(puVar17 + 3) = 0x6e696f7020676e69;
    *(undefined8 *)(puVar17 + 1) = 0x727473206c6c754e;
    FUN_109ac3188(0xffffffe5,&puStack_6090,&UNK_10f5997c2,&UNK_10f598d74,0x9c7);
LAB_109aab028:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109aab02c);
    (*pcVar4)();
  }
  pbVar7 = param_3;
  _strlen();
  iVar6 = (int)pbVar7;
  if (0x1000 < iVar6) {
    puVar17 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar17 = 1;
    puStack_6090 = puVar17 + 1;
    uStack_6088 = 0x1e;
    *(undefined1 *)((long)puVar17 + 0x22) = 0;
    *(undefined8 *)(puVar17 + 3) = 0x69727473206e6574;
    *(undefined8 *)(puVar17 + 1) = 0x7469727720656854;
    *(undefined8 *)((long)puVar17 + 0x1a) = 0x676e6f6c206f6f74;
    *(undefined8 *)((long)puVar17 + 0x12) = 0x20736920676e6972;
    FUN_109ac3188(0xfffffffb,&puStack_6090,&UNK_10f5997c2,&UNK_10f598d74,0x9cb);
    goto LAB_109aab028;
  }
  bVar5 = (int)param_4 != 0;
  bVar3 = bVar5 || iVar6 == 0;
  if (((bVar3) || (*param_3 != 0x22)) || (pbVar14 = param_3, param_3[iVar6 + -1] != 0x22)) {
    bStack_6080 = 0x22;
    pbVar14 = &bStack_6080;
    param_4 = abStack_607f;
    puStack_6098 = param_1;
    if (iVar6 < 1) {
      if (!bVar5 && iVar6 != 0) goto LAB_109aaaec0;
    }
    else {
      uVar18 = (ulong)pbVar7 & 0x7fffffff;
      pbVar14 = &bStack_6080;
      unaff_x25 = 0x26;
      unaff_x26 = 0x746c;
      pbVar7 = param_3;
      do {
        unaff_x22 = pbVar7 + 1;
        bVar2 = *pbVar7;
        uVar1 = (uint)bVar2;
        if (((char)bVar2 < '\0') || (uVar1 == 0x20)) {
          *param_4 = bVar2;
LAB_109aaae28:
          bVar3 = true;
          pbVar14 = param_4;
        }
        else {
          if (((uVar1 == 0x22) || (uVar1 == 0x3e)) ||
             ((uVar1 == 0x3c || ((uVar1 < 0x20 || ((uVar1 & 0x7e) == 0x26)))))) {
            *param_4 = 0x26;
            if (uVar1 == 0x3c) {
              pbVar14[2] = 0x6c;
              pbVar14[3] = 0x74;
LAB_109aaae20:
              param_4 = pbVar14 + 4;
            }
            else {
              if (uVar1 == 0x3e) {
                pbVar14[2] = 0x67;
                pbVar14[3] = 0x74;
                goto LAB_109aaae20;
              }
              if (uVar1 == 0x27) {
                pbVar14[2] = 0x61;
                pbVar14[3] = 0x70;
                pbVar14[4] = 0x6f;
                pbVar14[5] = 0x73;
                param_4 = pbVar14 + 6;
              }
              else if (uVar1 == 0x26) {
                pbVar14[4] = 0x70;
                pbVar14[2] = 0x61;
                pbVar14[3] = 0x6d;
                param_4 = pbVar14 + 5;
              }
              else {
                param_4 = pbVar14 + 6;
                if (uVar1 == 0x22) {
                  pbVar14[2] = 0x71;
                  pbVar14[3] = 0x75;
                  pbVar14[4] = 0x6f;
                  pbVar14[5] = 0x74;
                }
                else {
                  uStack_60a0 = (ulong)uVar1;
                  _sprintf(pbVar14 + 2,&UNK_10f5997f3);
                }
              }
            }
            *param_4 = 0x3b;
            goto LAB_109aaae28;
          }
          *param_4 = bVar2;
          pbVar14 = param_4;
        }
        param_4 = pbVar14 + 1;
        uVar18 = uVar18 - 1;
        pbVar7 = unaff_x22;
      } while (uVar18 != 0);
      unaff_x24 = 0;
      if (!bVar3) {
LAB_109aaaec0:
        bVar2 = *param_3;
        if ((9 < bVar2 - 0x30) &&
           ((0x2e < bVar2 || ((1L << ((ulong)bVar2 & 0x3f) & 0x680000000000U) == 0)))) {
          *param_4 = 0;
          param_1 = puStack_6098;
          pbVar14 = abStack_607f;
          goto LAB_109aaaf08;
        }
      }
    }
    *param_4 = 0x22;
    pbVar14[2] = 0;
    param_1 = puStack_6098;
    pbVar14 = &bStack_6080;
  }
LAB_109aaaf08:
  iVar6 = (int)pbVar14;
  puVar17 = param_1;
  FUN_109aad244();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = puVar17;
  __Unwind_Resume();
  pcStack_60a8 = FUN_109aab080;
  uStack_60f0 = unaff_x26;
  uStack_60e8 = unaff_x25;
  uStack_60e0 = unaff_x24;
  pbStack_60d8 = param_3;
  pbStack_60d0 = unaff_x22;
  pbStack_60c8 = param_4;
  puStack_60c0 = param_1;
  puStack_60b8 = puVar17;
  puStack_60b0 = &stack0xfffffffffffffff0;
  if (param_2 == 0) {
    puVar17 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar17 = 1;
    puStack_6100 = (undefined8 *)(puVar17 + 1);
    *puStack_6100 = 0x6d6f63206c6c754e;
    uStack_60f8 = 0xc;
    *(undefined1 *)(puVar17 + 4) = 0;
    puVar17[3] = 0x746e656d;
    FUN_109ac3188(0xffffffe5,&puStack_6100,&UNK_10f599807,&UNK_10f598d74,0xa1a);
LAB_109aab444:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109aab448);
    (*pcVar4)();
  }
  lVar12 = param_2;
  _strstr(param_2,"--");
  if (lVar12 != 0) {
    puVar17 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar17 + 3) = 0x2d27206e65687079;
    *(undefined8 *)(puVar17 + 1) = 0x6820656c62756f44;
    *puVar17 = 1;
    puStack_6100 = (undefined8 *)(puVar17 + 1);
    uStack_60f8 = 0x31;
    *(undefined2 *)(puVar17 + 0xd) = 0x73;
    *(undefined8 *)(puVar17 + 7) = 0x65776f6c6c612074;
    *(undefined8 *)(puVar17 + 5) = 0x6f6e20736920272d;
    *(undefined8 *)(puVar17 + 0xb) = 0x746e656d6d6f6320;
    *(undefined8 *)(puVar17 + 9) = 0x656874206e692064;
    FUN_109ac3188(0xfffffffb,&puStack_6100,&UNK_10f599807,&UNK_10f598d74,0xa1d);
    goto LAB_109aab444;
  }
  lVar12 = param_2;
  _strlen();
  lVar9 = param_2;
  _strchr(param_2,10);
  puVar17 = puVar8;
  if ((iVar6 == 0) || (lVar9 != 0)) {
    FUN_109ab3000();
    if (lVar9 != 0) {
      *puVar17 = 0x2d2d213c;
      *(undefined1 *)(puVar17 + 1) = 0;
      *(undefined4 **)(puVar8 + 0x1e) = puVar17 + 1;
      puVar17 = puVar8;
      FUN_109ab3000();
      do {
        lVar12 = lVar9 - param_2;
        iVar6 = (int)lVar12 + 1;
        if (*(undefined1 **)(puVar8 + 0x22) <= (undefined1 *)((long)puVar17 + (long)iVar6)) {
          uVar18 = (long)puVar17 - *(long *)(puVar8 + 0x20);
          lVar10 = ((long)*(undefined1 **)(puVar8 + 0x22) - *(long *)(puVar8 + 0x20)) * 3;
          iVar13 = (int)uVar18;
          iVar6 = iVar6 + iVar13;
          iVar15 = (int)((ulong)(lVar10 - (lVar10 >> 0x3f)) >> 1);
          if (iVar6 <= iVar15) {
            iVar6 = iVar15;
          }
          lVar10 = (long)(iVar6 + 0x100);
          func_0x000107c2ae8c();
          *(long *)(puVar8 + 0x1e) = lVar10 + (*(long *)(puVar8 + 0x1e) - *(long *)(puVar8 + 0x20));
          if (0 < iVar13) {
            _memcpy(lVar10,*(long *)(puVar8 + 0x20),uVar18 & 0x7fffffff);
          }
          *(long *)(puVar8 + 0x20) = lVar10;
          *(long *)(puVar8 + 0x22) = lVar10 + iVar6;
          puVar17 = (undefined4 *)(lVar10 + iVar13);
        }
        _memcpy(puVar17,param_2,lVar12 + 1);
        param_2 = lVar9 + 1;
        lVar9 = param_2;
        _strchr(param_2,10);
        *(undefined1 **)(puVar8 + 0x1e) = (undefined1 *)((long)puVar17 + lVar12);
        puVar17 = puVar8;
        FUN_109ab3000();
      } while (lVar9 != 0);
      lVar12 = param_2;
      _strlen();
      iVar6 = (int)lVar12;
      if (*(undefined1 **)(puVar8 + 0x22) <= (undefined1 *)((long)puVar17 + (long)iVar6)) {
        uVar18 = (long)puVar17 - *(long *)(puVar8 + 0x20);
        lVar12 = ((long)*(undefined1 **)(puVar8 + 0x22) - *(long *)(puVar8 + 0x20)) * 3;
        iVar19 = (int)uVar18;
        iVar13 = (int)((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
        iVar15 = iVar19 + iVar6;
        if (iVar19 + iVar6 <= iVar13) {
          iVar15 = iVar13;
        }
        lVar12 = (long)(iVar15 + 0x100);
        func_0x000107c2ae8c();
        *(long *)(puVar8 + 0x1e) = lVar12 + (*(long *)(puVar8 + 0x1e) - *(long *)(puVar8 + 0x20));
        if (0 < iVar19) {
          _memcpy(lVar12,*(long *)(puVar8 + 0x20),uVar18 & 0x7fffffff);
        }
        *(long *)(puVar8 + 0x20) = lVar12;
        *(long *)(puVar8 + 0x22) = lVar12 + iVar15;
        puVar17 = (undefined4 *)(lVar12 + iVar19);
      }
      _memcpy(puVar17,param_2,(long)iVar6);
      *(undefined1 **)(puVar8 + 0x1e) = (undefined1 *)((long)puVar17 + (long)iVar6);
      puVar17 = puVar8;
      FUN_109ab3000();
      puVar11 = (undefined1 *)((long)puVar17 + 3);
      *puVar17 = 0x3e2d2d;
      goto LAB_109aab358;
    }
  }
  else {
    puVar16 = *(undefined4 **)(puVar8 + 0x1e);
    if (*(long *)(puVar8 + 0x22) - (long)puVar16 < (long)((int)lVar12 + 5)) {
      FUN_109ab3000();
    }
    else {
      puVar17 = puVar16;
      if ((undefined4 *)(*(long *)(puVar8 + 0x20) + (long)(int)puVar8[0x10]) < puVar16) {
        puVar17 = (undefined4 *)((long)puVar16 + 1);
        *(undefined1 *)puVar16 = 0x20;
      }
    }
  }
  iVar6 = (int)lVar12 + 9;
  if (*(undefined1 **)(puVar8 + 0x22) <= (undefined1 *)((long)puVar17 + (long)iVar6)) {
    uVar18 = (long)puVar17 - *(long *)(puVar8 + 0x20);
    lVar12 = ((long)*(undefined1 **)(puVar8 + 0x22) - *(long *)(puVar8 + 0x20)) * 3;
    iVar13 = (int)uVar18;
    iVar6 = iVar6 + iVar13;
    iVar15 = (int)((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
    if (iVar6 <= iVar15) {
      iVar6 = iVar15;
    }
    lVar12 = (long)(iVar6 + 0x100);
    func_0x000107c2ae8c();
    *(long *)(puVar8 + 0x1e) = lVar12 + (*(long *)(puVar8 + 0x1e) - *(long *)(puVar8 + 0x20));
    if (0 < iVar13) {
      _memcpy(lVar12,*(long *)(puVar8 + 0x20),uVar18 & 0x7fffffff);
    }
    *(long *)(puVar8 + 0x20) = lVar12;
    *(long *)(puVar8 + 0x22) = lVar12 + iVar6;
    puVar17 = (undefined4 *)(lVar12 + iVar13);
  }
  _sprintf(puVar17,&UNK_10f59984c);
  puVar16 = puVar17;
  _strlen();
  puVar11 = (undefined1 *)((long)puVar17 + (long)(int)puVar16);
LAB_109aab358:
  *(undefined1 **)(puVar8 + 0x1e) = puVar11;
  lVar12 = *(long *)(puVar8 + 0x20);
  iVar6 = puVar8[0x16];
  if ((undefined2 *)(lVar12 + iVar6) < *(undefined2 **)(puVar8 + 0x1e)) {
    **(undefined2 **)(puVar8 + 0x1e) = 10;
    FUN_109aaa624(puVar8,*(undefined8 *)(puVar8 + 0x20));
    lVar12 = *(long *)(puVar8 + 0x20);
    iVar6 = puVar8[0x16];
  }
  iVar15 = puVar8[0x10];
  if (iVar15 - iVar6 != 0) {
    if (iVar6 <= iVar15) {
      _memset(lVar12 + iVar6,0x20,iVar15 - iVar6);
      lVar12 = *(long *)(puVar8 + 0x20);
    }
    puVar8[0x16] = iVar15;
    iVar6 = iVar15;
  }
  *(long *)(puVar8 + 0x1e) = lVar12 + iVar6;
  return;
}



/* Entry: 109aab080; end: 109aab48f;  */

void FUN_109aab080(undefined4 *param_1,long param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  if (param_2 == 0) {
    puVar10 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    puStack_60 = (undefined8 *)(puVar10 + 1);
    *puStack_60 = 0x6d6f63206c6c754e;
    uStack_58 = 0xc;
    *(undefined1 *)(puVar10 + 4) = 0;
    puVar10[3] = 0x746e656d;
    FUN_109ac3188(0xffffffe5,&puStack_60,&UNK_10f599807,&UNK_10f598d74,0xa1a);
LAB_109aab444:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109aab448);
    (*pcVar1)();
  }
  lVar6 = param_2;
  _strstr(param_2,"--");
  if (lVar6 != 0) {
    puVar10 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar10 + 3) = 0x2d27206e65687079;
    *(undefined8 *)(puVar10 + 1) = 0x6820656c62756f44;
    *puVar10 = 1;
    puStack_60 = (undefined8 *)(puVar10 + 1);
    uStack_58 = 0x31;
    *(undefined2 *)(puVar10 + 0xd) = 0x73;
    *(undefined8 *)(puVar10 + 7) = 0x65776f6c6c612074;
    *(undefined8 *)(puVar10 + 5) = 0x6f6e20736920272d;
    *(undefined8 *)(puVar10 + 0xb) = 0x746e656d6d6f6320;
    *(undefined8 *)(puVar10 + 9) = 0x656874206e692064;
    FUN_109ac3188(0xfffffffb,&puStack_60,&UNK_10f599807,&UNK_10f598d74,0xa1d);
    goto LAB_109aab444;
  }
  lVar6 = param_2;
  _strlen();
  lVar3 = param_2;
  _strchr(param_2,10);
  puVar10 = param_1;
  if ((param_3 == 0) || (lVar3 != 0)) {
    FUN_109ab3000();
    if (lVar3 != 0) {
      *puVar10 = 0x2d2d213c;
      *(undefined1 *)(puVar10 + 1) = 0;
      *(undefined4 **)(param_1 + 0x1e) = puVar10 + 1;
      puVar10 = param_1;
      FUN_109ab3000();
      do {
        lVar6 = lVar3 - param_2;
        iVar2 = (int)lVar6 + 1;
        if (*(undefined1 **)(param_1 + 0x22) <= (undefined1 *)((long)puVar10 + (long)iVar2)) {
          uVar11 = (long)puVar10 - *(long *)(param_1 + 0x20);
          lVar4 = ((long)*(undefined1 **)(param_1 + 0x22) - *(long *)(param_1 + 0x20)) * 3;
          iVar7 = (int)uVar11;
          iVar2 = iVar2 + iVar7;
          iVar8 = (int)((ulong)(lVar4 - (lVar4 >> 0x3f)) >> 1);
          if (iVar2 <= iVar8) {
            iVar2 = iVar8;
          }
          lVar4 = (long)(iVar2 + 0x100);
          func_0x000107c2ae8c();
          *(long *)(param_1 + 0x1e) =
               lVar4 + (*(long *)(param_1 + 0x1e) - *(long *)(param_1 + 0x20));
          if (0 < iVar7) {
            _memcpy(lVar4,*(long *)(param_1 + 0x20),uVar11 & 0x7fffffff);
          }
          *(long *)(param_1 + 0x20) = lVar4;
          *(long *)(param_1 + 0x22) = lVar4 + iVar2;
          puVar10 = (undefined4 *)(lVar4 + iVar7);
        }
        _memcpy(puVar10,param_2,lVar6 + 1);
        param_2 = lVar3 + 1;
        lVar3 = param_2;
        _strchr(param_2,10);
        *(undefined1 **)(param_1 + 0x1e) = (undefined1 *)((long)puVar10 + lVar6);
        puVar10 = param_1;
        FUN_109ab3000();
      } while (lVar3 != 0);
      lVar6 = param_2;
      _strlen();
      iVar2 = (int)lVar6;
      if (*(undefined1 **)(param_1 + 0x22) <= (undefined1 *)((long)puVar10 + (long)iVar2)) {
        uVar11 = (long)puVar10 - *(long *)(param_1 + 0x20);
        lVar6 = ((long)*(undefined1 **)(param_1 + 0x22) - *(long *)(param_1 + 0x20)) * 3;
        iVar12 = (int)uVar11;
        iVar7 = (int)((ulong)(lVar6 - (lVar6 >> 0x3f)) >> 1);
        iVar8 = iVar12 + iVar2;
        if (iVar12 + iVar2 <= iVar7) {
          iVar8 = iVar7;
        }
        lVar6 = (long)(iVar8 + 0x100);
        func_0x000107c2ae8c();
        *(long *)(param_1 + 0x1e) = lVar6 + (*(long *)(param_1 + 0x1e) - *(long *)(param_1 + 0x20));
        if (0 < iVar12) {
          _memcpy(lVar6,*(long *)(param_1 + 0x20),uVar11 & 0x7fffffff);
        }
        *(long *)(param_1 + 0x20) = lVar6;
        *(long *)(param_1 + 0x22) = lVar6 + iVar8;
        puVar10 = (undefined4 *)(lVar6 + iVar12);
      }
      _memcpy(puVar10,param_2,(long)iVar2);
      *(undefined1 **)(param_1 + 0x1e) = (undefined1 *)((long)puVar10 + (long)iVar2);
      puVar10 = param_1;
      FUN_109ab3000();
      puVar5 = (undefined1 *)((long)puVar10 + 3);
      *puVar10 = 0x3e2d2d;
      goto LAB_109aab358;
    }
  }
  else {
    puVar9 = *(undefined4 **)(param_1 + 0x1e);
    if (*(long *)(param_1 + 0x22) - (long)puVar9 < (long)((int)lVar6 + 5)) {
      FUN_109ab3000();
    }
    else {
      puVar10 = puVar9;
      if ((undefined4 *)(*(long *)(param_1 + 0x20) + (long)(int)param_1[0x10]) < puVar9) {
        puVar10 = (undefined4 *)((long)puVar9 + 1);
        *(undefined1 *)puVar9 = 0x20;
      }
    }
  }
  iVar2 = (int)lVar6 + 9;
  if (*(undefined1 **)(param_1 + 0x22) <= (undefined1 *)((long)puVar10 + (long)iVar2)) {
    uVar11 = (long)puVar10 - *(long *)(param_1 + 0x20);
    lVar6 = ((long)*(undefined1 **)(param_1 + 0x22) - *(long *)(param_1 + 0x20)) * 3;
    iVar7 = (int)uVar11;
    iVar2 = iVar2 + iVar7;
    iVar8 = (int)((ulong)(lVar6 - (lVar6 >> 0x3f)) >> 1);
    if (iVar2 <= iVar8) {
      iVar2 = iVar8;
    }
    lVar6 = (long)(iVar2 + 0x100);
    func_0x000107c2ae8c();
    *(long *)(param_1 + 0x1e) = lVar6 + (*(long *)(param_1 + 0x1e) - *(long *)(param_1 + 0x20));
    if (0 < iVar7) {
      _memcpy(lVar6,*(long *)(param_1 + 0x20),uVar11 & 0x7fffffff);
    }
    *(long *)(param_1 + 0x20) = lVar6;
    *(long *)(param_1 + 0x22) = lVar6 + iVar2;
    puVar10 = (undefined4 *)(lVar6 + iVar7);
  }
  _sprintf(puVar10,&UNK_10f59984c);
  puVar9 = puVar10;
  _strlen();
  puVar5 = (undefined1 *)((long)puVar10 + (long)(int)puVar9);
LAB_109aab358:
  *(undefined1 **)(param_1 + 0x1e) = puVar5;
  lVar6 = *(long *)(param_1 + 0x20);
  iVar2 = param_1[0x16];
  if ((undefined2 *)(lVar6 + iVar2) < *(undefined2 **)(param_1 + 0x1e)) {
    **(undefined2 **)(param_1 + 0x1e) = 10;
    FUN_109aaa624(param_1,*(undefined8 *)(param_1 + 0x20));
    lVar6 = *(long *)(param_1 + 0x20);
    iVar2 = param_1[0x16];
  }
  iVar8 = param_1[0x10];
  if (iVar8 - iVar2 != 0) {
    if (iVar2 <= iVar8) {
      _memset(lVar6 + iVar2,0x20,iVar8 - iVar2);
      lVar6 = *(long *)(param_1 + 0x20);
    }
    param_1[0x16] = iVar8;
    iVar2 = iVar8;
  }
  *(long *)(param_1 + 0x1e) = lVar6 + iVar2;
  return;
}



/* Entry: 109aab490; end: 109aab503;  */

void FUN_109aab490(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 0x28);
    while (0 < iVar1) {
      FUN_109aaaa6c(param_1);
      iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 0x28);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_109ab3000(param_1);
    FUN_109aaa624(param_1,&UNK_10f599858);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
    return;
  }
  return;
}



/* Entry: 109aab504; end: 109aab6e7;  */

void FUN_109aab504(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined2 uVar11;
  undefined1 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined4 *puStack_14a8;
  undefined8 uStack_14a0;
  uint uStack_1494;
  undefined2 *puStack_1490;
  int *piStack_1488;
  undefined1 *puStack_1480;
  code *pcStack_1478;
  long lStack_1470;
  ulong uStack_1468;
  undefined4 *puStack_1460;
  undefined8 uStack_1458;
  uint uStack_144c;
  undefined1 uStack_1448;
  undefined1 uStack_1447;
  long lStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_3 & 7) < 5) {
    puVar7 = (undefined4 *)0x4c;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar7 + 3) = 0x206e6f697463656c;
    *(undefined8 *)(puVar7 + 1) = 0x6c6f6320656d6f53;
    *(undefined8 *)(puVar7 + 7) = 0x535f45444f4e5f56;
    *(undefined8 *)(puVar7 + 5) = 0x43202d2065707974;
    *(undefined8 *)(puVar7 + 0xb) = 0x414d5f45444f4e5f;
    *(undefined8 *)(puVar7 + 9) = 0x564320726f205145;
    *puVar7 = 1;
    puStack_1460 = puVar7 + 1;
    uStack_1458 = 0x44;
    *(undefined1 *)(puVar7 + 0x12) = 0;
    puVar7[0x11] = 0x64656966;
    *(undefined8 *)(puVar7 + 0xf) = 0x6963657073206562;
    *(undefined8 *)(puVar7 + 0xd) = 0x207473756d202c50;
    FUN_109ac3188(0xfffffffb,&puStack_1460,&UNK_10f5998b4,&UNK_10f598d74,0x5f2);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109aab6b0);
    (*pcVar4)();
  }
  if ((param_3 >> 3 & 1) == 0) {
    uVar14 = param_3 & 0xf | 0x20;
    if (param_4 == 0) {
      puVar13 = (undefined1 *)0x0;
      goto LAB_109aab5c4;
    }
    puVar8 = &UNK_10f5998d3;
  }
  else {
    uVar9 = 0x7b;
    if ((param_3 & 7) != 6) {
      uVar9 = 0x5b;
    }
    uVar14 = param_3 & 0xf | 0x28;
    if (param_4 == 0) {
      uStack_1448 = (undefined1)uVar9;
      uStack_1447 = 0;
      puVar13 = &uStack_1448;
      goto LAB_109aab5c4;
    }
    puVar8 = &UNK_10f5998cb;
    uStack_1468 = (ulong)uVar9;
  }
  puVar13 = &uStack_1448;
  lStack_1470 = param_4;
  _sprintf(&uStack_1448,puVar8);
LAB_109aab5c4:
  FUN_109aad4ac(param_1,param_2,puVar13);
  uVar9 = param_1[0x11];
  puVar5 = *(undefined2 **)(param_1 + 0xe);
  uStack_144c = uVar9;
  FUN_109a4d978(puVar5,&uStack_144c);
  param_1[0x11] = uVar14;
  if ((uVar9 >> 3 & 1) == 0) {
    param_1[0x10] = (uVar14 >> 3 & 1) + param_1[0x10] + 3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puStack_1460 = (undefined4 *)0x0;
  uStack_1458 = 0;
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    _free(*(undefined8 *)(param_1 + -2));
  }
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_1478 = FUN_109aab6e8;
  uStack_1494 = 0;
  puStack_1490 = puVar5;
  piStack_1488 = param_1;
  puStack_1480 = &stack0xfffffffffffffff0;
  if (*(int *)(*(long *)(puVar6 + 0x1c) + 0x28) != 0) {
    uVar9 = *(uint *)(puVar6 + 0x22);
    FUN_109a4da80(*(long *)(puVar6 + 0x1c),&uStack_1494);
    if ((uVar9 >> 3 & 1) == 0) {
      if ((uVar9 >> 5 & 1) != 0) {
        puVar5 = puVar6;
        FUN_109ab3000();
        uVar11 = 0x7d7b;
        if ((uVar9 & 7) != 6) {
          uVar11 = 0x5d5b;
        }
        *puVar5 = uVar11;
        *(undefined2 **)(puVar6 + 0x3c) = puVar5 + 1;
      }
    }
    else {
      puVar13 = *(undefined1 **)(puVar6 + 0x3c);
      puVar10 = puVar13;
      if ((undefined1 *)(*(long *)(puVar6 + 0x40) + (long)*(int *)(puVar6 + 0x20)) < puVar13 &&
          (uVar9 & 0x20) == 0) {
        puVar10 = puVar13 + 1;
        *puVar13 = 0x20;
      }
      uVar12 = 0x7d;
      if ((uVar9 & 7) != 6) {
        uVar12 = 0x5d;
      }
      *puVar10 = uVar12;
      *(undefined1 **)(puVar6 + 0x3c) = puVar10 + 1;
    }
    if ((uStack_1494 >> 3 & 1) == 0) {
      *(uint *)(puVar6 + 0x20) = (*(int *)(puVar6 + 0x20) - ((uVar9 & 8) >> 3)) + -3;
    }
    *(uint *)(puVar6 + 0x22) = uStack_1494;
    return;
  }
  puVar7 = (undefined4 *)0x34;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar7 + 3) = 0x7720746375727453;
  *(undefined8 *)(puVar7 + 1) = 0x6574697257646e45;
  *puVar7 = 1;
  puStack_14a8 = puVar7 + 1;
  uStack_14a0 = 0x2c;
  *(undefined1 *)(puVar7 + 0xc) = 0;
  *(undefined8 *)(puVar7 + 7) = 0x7261745320676e69;
  *(undefined8 *)(puVar7 + 5) = 0x686374616d206f2f;
  *(undefined8 *)(puVar7 + 10) = 0x7463757274536574;
  *(undefined8 *)(puVar7 + 8) = 0x6972577472617453;
  FUN_109ac3188(0xfffffffe,&puStack_14a8,&UNK_10f599905,&UNK_10f598d74,0x61b);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109aab81c);
  (*pcVar4)();
}



/* Entry: 109aab6e8; end: 109aab847;  */

void FUN_109aab6e8(undefined2 *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined4 *puStack_38;
  undefined8 uStack_30;
  uint uStack_24;
  
  uStack_24 = 0;
  if (*(int *)(*(long *)(param_1 + 0x1c) + 0x28) != 0) {
    uVar2 = *(uint *)(param_1 + 0x22);
    FUN_109a4da80(*(long *)(param_1 + 0x1c),&uStack_24);
    if ((uVar2 >> 3 & 1) == 0) {
      if ((uVar2 >> 5 & 1) != 0) {
        puVar4 = param_1;
        FUN_109ab3000();
        uVar7 = 0x7d7b;
        if ((uVar2 & 7) != 6) {
          uVar7 = 0x5d5b;
        }
        *puVar4 = uVar7;
        *(undefined2 **)(param_1 + 0x3c) = puVar4 + 1;
      }
    }
    else {
      puVar1 = *(undefined1 **)(param_1 + 0x3c);
      puVar6 = puVar1;
      if ((undefined1 *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x20)) < puVar1 &&
          (uVar2 & 0x20) == 0) {
        puVar6 = puVar1 + 1;
        *puVar1 = 0x20;
      }
      uVar8 = 0x7d;
      if ((uVar2 & 7) != 6) {
        uVar8 = 0x5d;
      }
      *puVar6 = uVar8;
      *(undefined1 **)(param_1 + 0x3c) = puVar6 + 1;
    }
    if ((uStack_24 >> 3 & 1) == 0) {
      *(uint *)(param_1 + 0x20) = (*(int *)(param_1 + 0x20) - ((uVar2 & 8) >> 3)) + -3;
    }
    *(uint *)(param_1 + 0x22) = uStack_24;
    return;
  }
  puVar5 = (undefined4 *)0x34;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar5 + 3) = 0x7720746375727453;
  *(undefined8 *)(puVar5 + 1) = 0x6574697257646e45;
  *puVar5 = 1;
  puStack_38 = puVar5 + 1;
  uStack_30 = 0x2c;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  *(undefined8 *)(puVar5 + 7) = 0x7261745320676e69;
  *(undefined8 *)(puVar5 + 5) = 0x686374616d206f2f;
  *(undefined8 *)(puVar5 + 10) = 0x7463757274536574;
  *(undefined8 *)(puVar5 + 8) = 0x6972577472617453;
  FUN_109ac3188(0xfffffffe,&puStack_38,&UNK_10f599905,&UNK_10f598d74,0x61b);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109aab81c);
  (*pcVar3)();
}



/* Entry: 109aab848; end: 109aab8e7;  */

void FUN_109aab848(undefined2 *param_1,long param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  byte *unaff_x21;
  undefined2 *puVar19;
  ulong uVar20;
  int iVar21;
  byte *unaff_x25;
  byte *pbVar22;
  byte *pbVar23;
  undefined2 *puVar24;
  undefined8 unaff_x26;
  ulong uVar25;
  long lVar26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *puStack_4270;
  undefined8 uStack_4268;
  undefined8 uStack_4260;
  undefined8 uStack_4258;
  undefined8 uStack_4250;
  byte *pbStack_4248;
  ulong uStack_4240;
  byte *pbStack_4238;
  undefined8 uStack_4230;
  byte *pbStack_4228;
  undefined2 *puStack_4220;
  undefined2 *puStack_4218;
  undefined1 ***pppuStack_4210;
  code *pcStack_4208;
  ulong uStack_4200;
  undefined2 *puStack_41f0;
  long lStack_41e8;
  undefined4 *puStack_41e0;
  undefined8 uStack_41d8;
  byte bStack_41d0;
  byte abStack_41cf [16399];
  long lStack_1c0;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  byte abStack_148 [128];
  long lStack_c8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_83 [107];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = -param_3;
  if (-1 < (int)param_3) {
    uVar16 = param_3;
  }
  acStack_83[2] = 0;
  pcVar10 = acStack_83 + 1;
  uVar20 = (ulong)uVar16;
  do {
    pcVar11 = pcVar10;
    uVar16 = (uint)uVar20;
    pcVar10 = pcVar11 + -1;
    *pcVar11 = (char)uVar20 + (char)(uVar20 / 10) * -10 + '0';
    uVar20 = uVar20 / 10;
  } while (9 < uVar16);
  if ((int)param_3 < 0) {
    *pcVar10 = '-';
    pcVar11 = pcVar10;
  }
  FUN_109aad4ac(param_1,param_2,pcVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_109aab8e8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_109aad130(abStack_148);
  pbVar12 = abStack_148;
  FUN_109aad4ac();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_109aab954;
  ppuStack_160 = &puStack_b0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pbVar12 == (byte *)0x0) {
    puVar9 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    puStack_41e0 = puVar9 + 1;
    uStack_41d8 = 0x13;
    *(undefined1 *)((long)puVar9 + 0x17) = 0;
    *(undefined4 *)((long)puVar9 + 0x13) = 0x7265746e;
    *(undefined8 *)(puVar9 + 3) = 0x6e696f7020676e69;
    *(undefined8 *)(puVar9 + 1) = 0x727473206c6c754e;
    FUN_109ac3188(0xffffffe5,&puStack_41e0,&UNK_10f59991a,&UNK_10f598d74,0x660);
LAB_109aabc98:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109aabc9c);
    (*pcVar2)();
  }
  pbVar5 = pbVar12;
  _strlen();
  iVar4 = (int)pbVar5;
  if (0x1000 < iVar4) {
    puVar9 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    puStack_41e0 = puVar9 + 1;
    uStack_41d8 = 0x1e;
    *(undefined1 *)((long)puVar9 + 0x22) = 0;
    *(undefined8 *)(puVar9 + 3) = 0x69727473206e6574;
    *(undefined8 *)(puVar9 + 1) = 0x7469727720656854;
    *(undefined8 *)((long)puVar9 + 0x1a) = 0x676e6f6c206f6f74;
    *(undefined8 *)((long)puVar9 + 0x12) = 0x20736920676e6972;
    FUN_109ac3188(0xfffffffb,&puStack_41e0,&UNK_10f59991a,&UNK_10f598d74,0x664);
    goto LAB_109aabc98;
  }
  bVar3 = (int)param_4 != 0 || iVar4 == 0;
  uVar20 = (ulong)bVar3;
  if (((bVar3) || (bVar13 = *pbVar12, bVar13 != pbVar12[iVar4 + -1])) ||
     ((pbVar18 = pbVar12, bVar13 != 0x22 && (bVar13 != 0x27)))) {
    pbVar18 = abStack_41cf;
    bStack_41d0 = 0x22;
    pbVar23 = pbVar18;
    puStack_41f0 = param_1;
    lStack_41e8 = param_2;
    if (0 < iVar4) {
      uVar25 = (ulong)pbVar5 & 0x7fffffff;
      unaff_x27 = 1;
      unaff_x28 = 0x800000000800ab01;
      param_4 = 0x5c;
      pbVar5 = pbVar12;
      pbVar22 = pbVar18;
      do {
        unaff_x21 = pbVar5 + 1;
        bVar13 = *pbVar5;
        uVar14 = (uint)bVar13;
        uVar1 = bVar13 - 0x20;
        uVar16 = 0;
        if ((byte)((bVar13 & 0xdf) + 0xa5) < 0xe6) {
          uVar16 = (uint)(0x3f < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x800000000800ab01U) == 0);
        }
        uVar1 = 0;
        if ((byte)(bVar13 - 0x3a) < 0xf6) {
          uVar1 = uVar16;
        }
        if ((int)uVar20 != 0) {
          uVar1 = 1;
        }
        uVar20 = (ulong)uVar1;
        if ((uVar14 - 0x30 & 0xff) < 10 || (byte)((bVar13 & 0xdf) + 0xbf) < 0x1a) {
LAB_109aabaa0:
          pbVar23 = pbVar22 + 1;
          *pbVar22 = bVar13;
        }
        else {
          if (0x1f < bVar13) {
            if ((uVar14 - 0x22 < 0x3b) &&
               ((1L << ((ulong)(uVar14 - 0x22) & 0x3f) & 0x400000000000021U) != 0)) {
              *pbVar22 = 0x5c;
              goto LAB_109aabb0c;
            }
            goto LAB_109aabaa0;
          }
          *pbVar22 = 0x5c;
          if (uVar14 == 9) {
            bVar13 = 0x74;
LAB_109aabb0c:
            pbVar22[1] = bVar13;
            pbVar23 = pbVar22 + 2;
          }
          else {
            if (uVar14 == 0xd) {
              bVar13 = 0x72;
              goto LAB_109aabb0c;
            }
            if (uVar14 == 10) {
              bVar13 = 0x6e;
              goto LAB_109aabb0c;
            }
            uStack_4200 = (ulong)(uint)(int)(char)bVar13;
            _sprintf(pbVar22 + 1,&UNK_10f59992c);
            pbVar23 = pbVar22 + 4;
          }
        }
        uVar25 = uVar25 - 1;
        pbVar5 = unaff_x21;
        pbVar22 = pbVar23;
      } while (uVar25 != 0);
      unaff_x26 = 0;
    }
    if ((int)uVar20 == 0) {
      bVar13 = *pbVar12;
      if ((bVar13 - 0x30 < 10) ||
         ((unaff_x25 = pbVar23, bVar13 < 0x2f &&
          ((1L << ((ulong)bVar13 & 0x3f) & 0x680000000000U) != 0)))) goto LAB_109aabb74;
    }
    else {
LAB_109aabb74:
      unaff_x25 = pbVar23 + 1;
      *pbVar23 = 0x22;
      pbVar18 = &bStack_41d0;
    }
    *unaff_x25 = 0;
    param_2 = lStack_41e8;
    param_1 = puStack_41f0;
  }
  puVar24 = param_1;
  pbVar12 = pbVar18;
  FUN_109aad4ac();
  iVar4 = (int)pbVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = puVar24;
  __Unwind_Resume();
  pcStack_4208 = FUN_109aabcf0;
  uStack_4260 = unaff_x28;
  uStack_4258 = unaff_x27;
  uStack_4250 = unaff_x26;
  pbStack_4248 = unaff_x25;
  uStack_4240 = uVar20;
  pbStack_4238 = pbVar18;
  uStack_4230 = param_4;
  pbStack_4228 = unaff_x21;
  puStack_4220 = param_1;
  puStack_4218 = puVar24;
  pppuStack_4210 = &ppuStack_160;
  if (param_2 == 0) {
    puVar9 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    puStack_4270 = (undefined8 *)(puVar9 + 1);
    *puStack_4270 = 0x6d6f63206c6c754e;
    uStack_4268 = 0xc;
    *(undefined1 *)(puVar9 + 4) = 0;
    puVar9[3] = 0x746e656d;
    FUN_109ac3188(0xffffffe5,&puStack_4270,&UNK_10f599932,&UNK_10f598d74,0x69e);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109aabf7c);
    (*pcVar2)();
  }
  lVar7 = param_2;
  _strchr(param_2,10);
  if ((iVar4 != 0) && (lVar7 == 0)) {
    puVar24 = *(undefined2 **)(puVar6 + 0x3c);
    lVar26 = param_2;
    _strlen();
    if (((long)(int)lVar26 <= *(long *)(puVar6 + 0x44) - (long)puVar24) &&
       (puVar24 != *(undefined2 **)(puVar6 + 0x40))) {
      *puVar24 = 0x2320;
      puVar19 = (undefined2 *)((long)puVar24 + 3);
      *(undefined1 *)(puVar24 + 1) = 0x20;
      goto LAB_109aabd7c;
    }
  }
  puVar24 = puVar6;
  FUN_109ab3000();
  while( true ) {
    puVar19 = puVar24 + 1;
    *puVar24 = 0x2023;
    if (lVar7 == 0) break;
    lVar26 = lVar7 - param_2;
    iVar4 = (int)lVar26 + 1;
    uVar20 = *(ulong *)(puVar6 + 0x44);
    if (uVar20 <= (ulong)((long)puVar19 + (long)iVar4)) {
      uVar25 = (long)puVar19 - *(long *)(puVar6 + 0x40);
      lVar8 = (uVar20 - *(long *)(puVar6 + 0x40)) * 3;
      iVar15 = (int)uVar25;
      iVar4 = iVar4 + iVar15;
      iVar17 = (int)((ulong)(lVar8 - (lVar8 >> 0x3f)) >> 1);
      if (iVar4 <= iVar17) {
        iVar4 = iVar17;
      }
      lVar8 = (long)(iVar4 + 0x100);
      func_0x000107c2ae8c();
      *(long *)(puVar6 + 0x3c) = lVar8 + (*(long *)(puVar6 + 0x3c) - *(long *)(puVar6 + 0x40));
      if (0 < iVar15) {
        _memcpy(lVar8,*(long *)(puVar6 + 0x40),uVar25 & 0x7fffffff);
      }
      *(long *)(puVar6 + 0x40) = lVar8;
      *(long *)(puVar6 + 0x44) = lVar8 + iVar4;
      puVar19 = (undefined2 *)(lVar8 + iVar15);
    }
    _memcpy(puVar19,param_2,lVar26 + 1);
    *(long *)(puVar6 + 0x3c) = (long)puVar19 + lVar26;
    param_2 = lVar7 + 1;
    lVar7 = param_2;
    _strchr(param_2,10);
    puVar24 = puVar6;
    FUN_109ab3000();
  }
LAB_109aabd7c:
  lVar7 = param_2;
  _strlen();
  iVar4 = (int)lVar7;
  uVar20 = *(ulong *)(puVar6 + 0x44);
  if (uVar20 <= (ulong)((long)puVar19 + (long)iVar4)) {
    uVar25 = (long)puVar19 - *(long *)(puVar6 + 0x40);
    lVar7 = (uVar20 - *(long *)(puVar6 + 0x40)) * 3;
    iVar21 = (int)uVar25;
    iVar15 = (int)((ulong)(lVar7 - (lVar7 >> 0x3f)) >> 1);
    iVar17 = iVar21 + iVar4;
    if (iVar21 + iVar4 <= iVar15) {
      iVar17 = iVar15;
    }
    lVar7 = (long)(iVar17 + 0x100);
    func_0x000107c2ae8c();
    *(long *)(puVar6 + 0x3c) = lVar7 + (*(long *)(puVar6 + 0x3c) - *(long *)(puVar6 + 0x40));
    if (0 < iVar21) {
      _memcpy(lVar7,*(long *)(puVar6 + 0x40),uVar25 & 0x7fffffff);
    }
    *(long *)(puVar6 + 0x40) = lVar7;
    *(long *)(puVar6 + 0x44) = lVar7 + iVar17;
    puVar19 = (undefined2 *)(lVar7 + iVar21);
  }
  _memcpy(puVar19,param_2,(long)iVar4);
  *(long *)(puVar6 + 0x3c) = (long)puVar19 + (long)iVar4;
  lVar7 = *(long *)(puVar6 + 0x40);
  iVar4 = *(int *)(puVar6 + 0x2c);
  if ((undefined2 *)(lVar7 + iVar4) < *(undefined2 **)(puVar6 + 0x3c)) {
    **(undefined2 **)(puVar6 + 0x3c) = 10;
    FUN_109aaa624(puVar6,*(undefined8 *)(puVar6 + 0x40));
    lVar7 = *(long *)(puVar6 + 0x40);
    iVar4 = *(int *)(puVar6 + 0x2c);
  }
  iVar17 = *(int *)(puVar6 + 0x20);
  if (iVar17 - iVar4 != 0) {
    if (iVar4 <= iVar17) {
      _memset(lVar7 + iVar4,0x20,iVar17 - iVar4);
      lVar7 = *(long *)(puVar6 + 0x40);
    }
    *(int *)(puVar6 + 0x2c) = iVar17;
    iVar4 = iVar17;
  }
  *(long *)(puVar6 + 0x3c) = lVar7 + iVar4;
  return;
}



/* Entry: 109aab8e8; end: 109aab953;  */

void FUN_109aab8e8(undefined2 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  undefined2 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  byte *unaff_x21;
  undefined2 *puVar17;
  ulong uVar18;
  int iVar19;
  byte *unaff_x25;
  byte *pbVar20;
  byte *pbVar21;
  undefined2 *puVar22;
  undefined8 unaff_x26;
  ulong uVar23;
  long lVar24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *puStack_41d0;
  undefined8 uStack_41c8;
  undefined8 uStack_41c0;
  undefined8 uStack_41b8;
  undefined8 uStack_41b0;
  byte *pbStack_41a8;
  ulong uStack_41a0;
  byte *pbStack_4198;
  undefined8 uStack_4190;
  byte *pbStack_4188;
  undefined2 *puStack_4180;
  undefined2 *puStack_4178;
  undefined1 **ppuStack_4170;
  code *pcStack_4168;
  ulong uStack_4160;
  undefined2 *puStack_4150;
  long lStack_4148;
  undefined4 *puStack_4140;
  undefined8 uStack_4138;
  byte bStack_4130;
  byte abStack_412f [16399];
  long lStack_120;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  byte abStack_a8 [128];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109aad130(abStack_a8);
  pbVar11 = abStack_a8;
  FUN_109aad4ac();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_109aab954;
  puStack_c0 = &stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pbVar11 == (byte *)0x0) {
    puVar10 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    puStack_4140 = puVar10 + 1;
    uStack_4138 = 0x13;
    *(undefined1 *)((long)puVar10 + 0x17) = 0;
    *(undefined4 *)((long)puVar10 + 0x13) = 0x7265746e;
    *(undefined8 *)(puVar10 + 3) = 0x6e696f7020676e69;
    *(undefined8 *)(puVar10 + 1) = 0x727473206c6c754e;
    FUN_109ac3188(0xffffffe5,&puStack_4140,&UNK_10f59991a,&UNK_10f598d74,0x660);
LAB_109aabc98:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109aabc9c);
    (*pcVar3)();
  }
  pbVar6 = pbVar11;
  _strlen();
  iVar5 = (int)pbVar6;
  if (0x1000 < iVar5) {
    puVar10 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    puStack_4140 = puVar10 + 1;
    uStack_4138 = 0x1e;
    *(undefined1 *)((long)puVar10 + 0x22) = 0;
    *(undefined8 *)(puVar10 + 3) = 0x69727473206e6574;
    *(undefined8 *)(puVar10 + 1) = 0x7469727720656854;
    *(undefined8 *)((long)puVar10 + 0x1a) = 0x676e6f6c206f6f74;
    *(undefined8 *)((long)puVar10 + 0x12) = 0x20736920676e6972;
    FUN_109ac3188(0xfffffffb,&puStack_4140,&UNK_10f59991a,&UNK_10f598d74,0x664);
    goto LAB_109aabc98;
  }
  bVar4 = (int)param_4 != 0 || iVar5 == 0;
  uVar18 = (ulong)bVar4;
  if (((bVar4) || (bVar12 = *pbVar11, bVar12 != pbVar11[iVar5 + -1])) ||
     ((pbVar16 = pbVar11, bVar12 != 0x22 && (bVar12 != 0x27)))) {
    pbVar16 = abStack_412f;
    bStack_4130 = 0x22;
    pbVar21 = pbVar16;
    puStack_4150 = param_1;
    lStack_4148 = param_2;
    if (0 < iVar5) {
      uVar23 = (ulong)pbVar6 & 0x7fffffff;
      unaff_x27 = 1;
      unaff_x28 = 0x800000000800ab01;
      param_4 = 0x5c;
      pbVar6 = pbVar11;
      pbVar20 = pbVar16;
      do {
        unaff_x21 = pbVar6 + 1;
        bVar12 = *pbVar6;
        uVar13 = (uint)bVar12;
        uVar2 = bVar12 - 0x20;
        uVar1 = 0;
        if ((byte)((bVar12 & 0xdf) + 0xa5) < 0xe6) {
          uVar1 = (uint)(0x3f < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x800000000800ab01U) == 0);
        }
        uVar2 = 0;
        if ((byte)(bVar12 - 0x3a) < 0xf6) {
          uVar2 = uVar1;
        }
        if ((int)uVar18 != 0) {
          uVar2 = 1;
        }
        uVar18 = (ulong)uVar2;
        if ((uVar13 - 0x30 & 0xff) < 10 || (byte)((bVar12 & 0xdf) + 0xbf) < 0x1a) {
LAB_109aabaa0:
          pbVar21 = pbVar20 + 1;
          *pbVar20 = bVar12;
        }
        else {
          if (0x1f < bVar12) {
            if ((uVar13 - 0x22 < 0x3b) &&
               ((1L << ((ulong)(uVar13 - 0x22) & 0x3f) & 0x400000000000021U) != 0)) {
              *pbVar20 = 0x5c;
              goto LAB_109aabb0c;
            }
            goto LAB_109aabaa0;
          }
          *pbVar20 = 0x5c;
          if (uVar13 == 9) {
            bVar12 = 0x74;
LAB_109aabb0c:
            pbVar20[1] = bVar12;
            pbVar21 = pbVar20 + 2;
          }
          else {
            if (uVar13 == 0xd) {
              bVar12 = 0x72;
              goto LAB_109aabb0c;
            }
            if (uVar13 == 10) {
              bVar12 = 0x6e;
              goto LAB_109aabb0c;
            }
            uStack_4160 = (ulong)(uint)(int)(char)bVar12;
            _sprintf(pbVar20 + 1,&UNK_10f59992c);
            pbVar21 = pbVar20 + 4;
          }
        }
        uVar23 = uVar23 - 1;
        pbVar6 = unaff_x21;
        pbVar20 = pbVar21;
      } while (uVar23 != 0);
      unaff_x26 = 0;
    }
    if ((int)uVar18 == 0) {
      bVar12 = *pbVar11;
      if ((bVar12 - 0x30 < 10) ||
         ((unaff_x25 = pbVar21, bVar12 < 0x2f &&
          ((1L << ((ulong)bVar12 & 0x3f) & 0x680000000000U) != 0)))) goto LAB_109aabb74;
    }
    else {
LAB_109aabb74:
      unaff_x25 = pbVar21 + 1;
      *pbVar21 = 0x22;
      pbVar16 = &bStack_4130;
    }
    *unaff_x25 = 0;
    param_2 = lStack_4148;
    param_1 = puStack_4150;
  }
  puVar22 = param_1;
  pbVar11 = pbVar16;
  FUN_109aad4ac();
  iVar5 = (int)pbVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = puVar22;
  __Unwind_Resume();
  pcStack_4168 = FUN_109aabcf0;
  uStack_41c0 = unaff_x28;
  uStack_41b8 = unaff_x27;
  uStack_41b0 = unaff_x26;
  pbStack_41a8 = unaff_x25;
  uStack_41a0 = uVar18;
  pbStack_4198 = pbVar16;
  uStack_4190 = param_4;
  pbStack_4188 = unaff_x21;
  puStack_4180 = param_1;
  puStack_4178 = puVar22;
  ppuStack_4170 = &puStack_c0;
  if (param_2 == 0) {
    puVar10 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    puStack_41d0 = (undefined8 *)(puVar10 + 1);
    *puStack_41d0 = 0x6d6f63206c6c754e;
    uStack_41c8 = 0xc;
    *(undefined1 *)(puVar10 + 4) = 0;
    puVar10[3] = 0x746e656d;
    FUN_109ac3188(0xffffffe5,&puStack_41d0,&UNK_10f599932,&UNK_10f598d74,0x69e);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109aabf7c);
    (*pcVar3)();
  }
  lVar8 = param_2;
  _strchr(param_2,10);
  if ((iVar5 != 0) && (lVar8 == 0)) {
    puVar22 = *(undefined2 **)(puVar7 + 0x3c);
    lVar24 = param_2;
    _strlen();
    if (((long)(int)lVar24 <= *(long *)(puVar7 + 0x44) - (long)puVar22) &&
       (puVar22 != *(undefined2 **)(puVar7 + 0x40))) {
      *puVar22 = 0x2320;
      puVar17 = (undefined2 *)((long)puVar22 + 3);
      *(undefined1 *)(puVar22 + 1) = 0x20;
      goto LAB_109aabd7c;
    }
  }
  puVar22 = puVar7;
  FUN_109ab3000();
  while( true ) {
    puVar17 = puVar22 + 1;
    *puVar22 = 0x2023;
    if (lVar8 == 0) break;
    lVar24 = lVar8 - param_2;
    iVar5 = (int)lVar24 + 1;
    uVar18 = *(ulong *)(puVar7 + 0x44);
    if (uVar18 <= (ulong)((long)puVar17 + (long)iVar5)) {
      uVar23 = (long)puVar17 - *(long *)(puVar7 + 0x40);
      lVar9 = (uVar18 - *(long *)(puVar7 + 0x40)) * 3;
      iVar14 = (int)uVar23;
      iVar5 = iVar5 + iVar14;
      iVar15 = (int)((ulong)(lVar9 - (lVar9 >> 0x3f)) >> 1);
      if (iVar5 <= iVar15) {
        iVar5 = iVar15;
      }
      lVar9 = (long)(iVar5 + 0x100);
      func_0x000107c2ae8c();
      *(long *)(puVar7 + 0x3c) = lVar9 + (*(long *)(puVar7 + 0x3c) - *(long *)(puVar7 + 0x40));
      if (0 < iVar14) {
        _memcpy(lVar9,*(long *)(puVar7 + 0x40),uVar23 & 0x7fffffff);
      }
      *(long *)(puVar7 + 0x40) = lVar9;
      *(long *)(puVar7 + 0x44) = lVar9 + iVar5;
      puVar17 = (undefined2 *)(lVar9 + iVar14);
    }
    _memcpy(puVar17,param_2,lVar24 + 1);
    *(long *)(puVar7 + 0x3c) = (long)puVar17 + lVar24;
    param_2 = lVar8 + 1;
    lVar8 = param_2;
    _strchr(param_2,10);
    puVar22 = puVar7;
    FUN_109ab3000();
  }
LAB_109aabd7c:
  lVar8 = param_2;
  _strlen();
  iVar5 = (int)lVar8;
  uVar18 = *(ulong *)(puVar7 + 0x44);
  if (uVar18 <= (ulong)((long)puVar17 + (long)iVar5)) {
    uVar23 = (long)puVar17 - *(long *)(puVar7 + 0x40);
    lVar8 = (uVar18 - *(long *)(puVar7 + 0x40)) * 3;
    iVar19 = (int)uVar23;
    iVar14 = (int)((ulong)(lVar8 - (lVar8 >> 0x3f)) >> 1);
    iVar15 = iVar19 + iVar5;
    if (iVar19 + iVar5 <= iVar14) {
      iVar15 = iVar14;
    }
    lVar8 = (long)(iVar15 + 0x100);
    func_0x000107c2ae8c();
    *(long *)(puVar7 + 0x3c) = lVar8 + (*(long *)(puVar7 + 0x3c) - *(long *)(puVar7 + 0x40));
    if (0 < iVar19) {
      _memcpy(lVar8,*(long *)(puVar7 + 0x40),uVar23 & 0x7fffffff);
    }
    *(long *)(puVar7 + 0x40) = lVar8;
    *(long *)(puVar7 + 0x44) = lVar8 + iVar15;
    puVar17 = (undefined2 *)(lVar8 + iVar19);
  }
  _memcpy(puVar17,param_2,(long)iVar5);
  *(long *)(puVar7 + 0x3c) = (long)puVar17 + (long)iVar5;
  lVar8 = *(long *)(puVar7 + 0x40);
  iVar5 = *(int *)(puVar7 + 0x2c);
  if ((undefined2 *)(lVar8 + iVar5) < *(undefined2 **)(puVar7 + 0x3c)) {
    **(undefined2 **)(puVar7 + 0x3c) = 10;
    FUN_109aaa624(puVar7,*(undefined8 *)(puVar7 + 0x40));
    lVar8 = *(long *)(puVar7 + 0x40);
    iVar5 = *(int *)(puVar7 + 0x2c);
  }
  iVar15 = *(int *)(puVar7 + 0x20);
  if (iVar15 - iVar5 != 0) {
    if (iVar5 <= iVar15) {
      _memset(lVar8 + iVar5,0x20,iVar15 - iVar5);
      lVar8 = *(long *)(puVar7 + 0x40);
    }
    *(int *)(puVar7 + 0x2c) = iVar15;
    iVar5 = iVar15;
  }
  *(long *)(puVar7 + 0x3c) = lVar8 + iVar5;
  return;
}



/* Entry: 109aab954; end: 109aabcef;  */

void FUN_109aab954(undefined2 *param_1,long param_2,byte *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  undefined2 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  byte *unaff_x21;
  undefined2 *puVar16;
  ulong uVar17;
  int iVar18;
  byte *unaff_x25;
  byte *pbVar19;
  byte *pbVar20;
  undefined2 *puVar21;
  undefined8 unaff_x26;
  ulong uVar22;
  long lVar23;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *puStack_4120;
  undefined8 uStack_4118;
  undefined8 uStack_4110;
  undefined8 uStack_4108;
  undefined8 uStack_4100;
  byte *pbStack_40f8;
  ulong uStack_40f0;
  byte *pbStack_40e8;
  undefined8 uStack_40e0;
  byte *pbStack_40d8;
  undefined2 *puStack_40d0;
  undefined2 *puStack_40c8;
  undefined1 *puStack_40c0;
  code *pcStack_40b8;
  ulong uStack_40b0;
  undefined2 *puStack_40a0;
  long lStack_4098;
  undefined4 *puStack_4090;
  undefined8 uStack_4088;
  byte bStack_4080;
  byte abStack_407f [16399];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (byte *)0x0) {
    puVar10 = (undefined4 *)0x18;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    puStack_4090 = puVar10 + 1;
    uStack_4088 = 0x13;
    *(undefined1 *)((long)puVar10 + 0x17) = 0;
    *(undefined4 *)((long)puVar10 + 0x13) = 0x7265746e;
    *(undefined8 *)(puVar10 + 3) = 0x6e696f7020676e69;
    *(undefined8 *)(puVar10 + 1) = 0x727473206c6c754e;
    FUN_109ac3188(0xffffffe5,&puStack_4090,&UNK_10f59991a,&UNK_10f598d74,0x660);
LAB_109aabc98:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109aabc9c);
    (*pcVar3)();
  }
  pbVar6 = param_3;
  _strlen();
  iVar5 = (int)pbVar6;
  if (0x1000 < iVar5) {
    puVar10 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    puStack_4090 = puVar10 + 1;
    uStack_4088 = 0x1e;
    *(undefined1 *)((long)puVar10 + 0x22) = 0;
    *(undefined8 *)(puVar10 + 3) = 0x69727473206e6574;
    *(undefined8 *)(puVar10 + 1) = 0x7469727720656854;
    *(undefined8 *)((long)puVar10 + 0x1a) = 0x676e6f6c206f6f74;
    *(undefined8 *)((long)puVar10 + 0x12) = 0x20736920676e6972;
    FUN_109ac3188(0xfffffffb,&puStack_4090,&UNK_10f59991a,&UNK_10f598d74,0x664);
    goto LAB_109aabc98;
  }
  bVar4 = (int)param_4 != 0 || iVar5 == 0;
  uVar17 = (ulong)bVar4;
  if (((bVar4) || (bVar11 = *param_3, bVar11 != param_3[iVar5 + -1])) ||
     ((pbVar15 = param_3, bVar11 != 0x22 && (bVar11 != 0x27)))) {
    pbVar15 = abStack_407f;
    bStack_4080 = 0x22;
    pbVar20 = pbVar15;
    puStack_40a0 = param_1;
    lStack_4098 = param_2;
    if (0 < iVar5) {
      uVar22 = (ulong)pbVar6 & 0x7fffffff;
      unaff_x27 = 1;
      unaff_x28 = 0x800000000800ab01;
      param_4 = 0x5c;
      pbVar6 = param_3;
      pbVar19 = pbVar15;
      do {
        unaff_x21 = pbVar6 + 1;
        bVar11 = *pbVar6;
        uVar12 = (uint)bVar11;
        uVar2 = bVar11 - 0x20;
        uVar1 = 0;
        if ((byte)((bVar11 & 0xdf) + 0xa5) < 0xe6) {
          uVar1 = (uint)(0x3f < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x800000000800ab01U) == 0);
        }
        uVar2 = 0;
        if ((byte)(bVar11 - 0x3a) < 0xf6) {
          uVar2 = uVar1;
        }
        if ((int)uVar17 != 0) {
          uVar2 = 1;
        }
        uVar17 = (ulong)uVar2;
        if ((uVar12 - 0x30 & 0xff) < 10 || (byte)((bVar11 & 0xdf) + 0xbf) < 0x1a) {
LAB_109aabaa0:
          pbVar20 = pbVar19 + 1;
          *pbVar19 = bVar11;
        }
        else {
          if (0x1f < bVar11) {
            if ((uVar12 - 0x22 < 0x3b) &&
               ((1L << ((ulong)(uVar12 - 0x22) & 0x3f) & 0x400000000000021U) != 0)) {
              *pbVar19 = 0x5c;
              goto LAB_109aabb0c;
            }
            goto LAB_109aabaa0;
          }
          *pbVar19 = 0x5c;
          if (uVar12 == 9) {
            bVar11 = 0x74;
LAB_109aabb0c:
            pbVar19[1] = bVar11;
            pbVar20 = pbVar19 + 2;
          }
          else {
            if (uVar12 == 0xd) {
              bVar11 = 0x72;
              goto LAB_109aabb0c;
            }
            if (uVar12 == 10) {
              bVar11 = 0x6e;
              goto LAB_109aabb0c;
            }
            uStack_40b0 = (ulong)(uint)(int)(char)bVar11;
            _sprintf(pbVar19 + 1,&UNK_10f59992c);
            pbVar20 = pbVar19 + 4;
          }
        }
        uVar22 = uVar22 - 1;
        pbVar6 = unaff_x21;
        pbVar19 = pbVar20;
      } while (uVar22 != 0);
      unaff_x26 = 0;
    }
    if ((int)uVar17 == 0) {
      bVar11 = *param_3;
      if ((bVar11 - 0x30 < 10) ||
         ((unaff_x25 = pbVar20, bVar11 < 0x2f &&
          ((1L << ((ulong)bVar11 & 0x3f) & 0x680000000000U) != 0)))) goto LAB_109aabb74;
    }
    else {
LAB_109aabb74:
      unaff_x25 = pbVar20 + 1;
      *pbVar20 = 0x22;
      pbVar15 = &bStack_4080;
    }
    *unaff_x25 = 0;
    param_2 = lStack_4098;
    param_1 = puStack_40a0;
  }
  puVar21 = param_1;
  pbVar6 = pbVar15;
  FUN_109aad4ac();
  iVar5 = (int)pbVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = puVar21;
  __Unwind_Resume();
  pcStack_40b8 = FUN_109aabcf0;
  uStack_4110 = unaff_x28;
  uStack_4108 = unaff_x27;
  uStack_4100 = unaff_x26;
  pbStack_40f8 = unaff_x25;
  uStack_40f0 = uVar17;
  pbStack_40e8 = pbVar15;
  uStack_40e0 = param_4;
  pbStack_40d8 = unaff_x21;
  puStack_40d0 = param_1;
  puStack_40c8 = puVar21;
  puStack_40c0 = &stack0xfffffffffffffff0;
  if (param_2 == 0) {
    puVar10 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar10 = 1;
    puStack_4120 = (undefined8 *)(puVar10 + 1);
    *puStack_4120 = 0x6d6f63206c6c754e;
    uStack_4118 = 0xc;
    *(undefined1 *)(puVar10 + 4) = 0;
    puVar10[3] = 0x746e656d;
    FUN_109ac3188(0xffffffe5,&puStack_4120,&UNK_10f599932,&UNK_10f598d74,0x69e);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109aabf7c);
    (*pcVar3)();
  }
  lVar8 = param_2;
  _strchr(param_2,10);
  if ((iVar5 != 0) && (lVar8 == 0)) {
    puVar21 = *(undefined2 **)(puVar7 + 0x3c);
    lVar23 = param_2;
    _strlen();
    if (((long)(int)lVar23 <= *(long *)(puVar7 + 0x44) - (long)puVar21) &&
       (puVar21 != *(undefined2 **)(puVar7 + 0x40))) {
      *puVar21 = 0x2320;
      puVar16 = (undefined2 *)((long)puVar21 + 3);
      *(undefined1 *)(puVar21 + 1) = 0x20;
      goto LAB_109aabd7c;
    }
  }
  puVar21 = puVar7;
  FUN_109ab3000();
  while( true ) {
    puVar16 = puVar21 + 1;
    *puVar21 = 0x2023;
    if (lVar8 == 0) break;
    lVar23 = lVar8 - param_2;
    iVar5 = (int)lVar23 + 1;
    uVar17 = *(ulong *)(puVar7 + 0x44);
    if (uVar17 <= (ulong)((long)puVar16 + (long)iVar5)) {
      uVar22 = (long)puVar16 - *(long *)(puVar7 + 0x40);
      lVar9 = (uVar17 - *(long *)(puVar7 + 0x40)) * 3;
      iVar13 = (int)uVar22;
      iVar5 = iVar5 + iVar13;
      iVar14 = (int)((ulong)(lVar9 - (lVar9 >> 0x3f)) >> 1);
      if (iVar5 <= iVar14) {
        iVar5 = iVar14;
      }
      lVar9 = (long)(iVar5 + 0x100);
      func_0x000107c2ae8c();
      *(long *)(puVar7 + 0x3c) = lVar9 + (*(long *)(puVar7 + 0x3c) - *(long *)(puVar7 + 0x40));
      if (0 < iVar13) {
        _memcpy(lVar9,*(long *)(puVar7 + 0x40),uVar22 & 0x7fffffff);
      }
      *(long *)(puVar7 + 0x40) = lVar9;
      *(long *)(puVar7 + 0x44) = lVar9 + iVar5;
      puVar16 = (undefined2 *)(lVar9 + iVar13);
    }
    _memcpy(puVar16,param_2,lVar23 + 1);
    *(long *)(puVar7 + 0x3c) = (long)puVar16 + lVar23;
    param_2 = lVar8 + 1;
    lVar8 = param_2;
    _strchr(param_2,10);
    puVar21 = puVar7;
    FUN_109ab3000();
  }
LAB_109aabd7c:
  lVar8 = param_2;
  _strlen();
  iVar5 = (int)lVar8;
  uVar17 = *(ulong *)(puVar7 + 0x44);
  if (uVar17 <= (ulong)((long)puVar16 + (long)iVar5)) {
    uVar22 = (long)puVar16 - *(long *)(puVar7 + 0x40);
    lVar8 = (uVar17 - *(long *)(puVar7 + 0x40)) * 3;
    iVar18 = (int)uVar22;
    iVar13 = (int)((ulong)(lVar8 - (lVar8 >> 0x3f)) >> 1);
    iVar14 = iVar18 + iVar5;
    if (iVar18 + iVar5 <= iVar13) {
      iVar14 = iVar13;
    }
    lVar8 = (long)(iVar14 + 0x100);
    func_0x000107c2ae8c();
    *(long *)(puVar7 + 0x3c) = lVar8 + (*(long *)(puVar7 + 0x3c) - *(long *)(puVar7 + 0x40));
    if (0 < iVar18) {
      _memcpy(lVar8,*(long *)(puVar7 + 0x40),uVar22 & 0x7fffffff);
    }
    *(long *)(puVar7 + 0x40) = lVar8;
    *(long *)(puVar7 + 0x44) = lVar8 + iVar14;
    puVar16 = (undefined2 *)(lVar8 + iVar18);
  }
  _memcpy(puVar16,param_2,(long)iVar5);
  *(long *)(puVar7 + 0x3c) = (long)puVar16 + (long)iVar5;
  lVar8 = *(long *)(puVar7 + 0x40);
  iVar5 = *(int *)(puVar7 + 0x2c);
  if ((undefined2 *)(lVar8 + iVar5) < *(undefined2 **)(puVar7 + 0x3c)) {
    **(undefined2 **)(puVar7 + 0x3c) = 10;
    FUN_109aaa624(puVar7,*(undefined8 *)(puVar7 + 0x40));
    lVar8 = *(long *)(puVar7 + 0x40);
    iVar5 = *(int *)(puVar7 + 0x2c);
  }
  iVar14 = *(int *)(puVar7 + 0x20);
  if (iVar14 - iVar5 != 0) {
    if (iVar5 <= iVar14) {
      _memset(lVar8 + iVar5,0x20,iVar14 - iVar5);
      lVar8 = *(long *)(puVar7 + 0x40);
    }
    *(int *)(puVar7 + 0x2c) = iVar14;
    iVar5 = iVar14;
  }
  *(long *)(puVar7 + 0x3c) = lVar8 + iVar5;
  return;
}



/* Entry: 109aabcf0; end: 109aabfa7;  */

void FUN_109aabcf0(undefined2 *param_1,long param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  if (param_2 == 0) {
    puVar5 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_70 = (undefined8 *)(puVar5 + 1);
    *puStack_70 = 0x6d6f63206c6c754e;
    uStack_68 = 0xc;
    *(undefined1 *)(puVar5 + 4) = 0;
    puVar5[3] = 0x746e656d;
    FUN_109ac3188(0xffffffe5,&puStack_70,&UNK_10f599932,&UNK_10f598d74,0x69e);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109aabf7c);
    (*pcVar1)();
  }
  lVar3 = param_2;
  _strchr(param_2,10);
  if ((param_3 != 0) && (lVar3 == 0)) {
    puVar11 = *(undefined2 **)(param_1 + 0x3c);
    lVar13 = param_2;
    _strlen();
    if (((long)(int)lVar13 <= *(long *)(param_1 + 0x44) - (long)puVar11) &&
       (puVar11 != *(undefined2 **)(param_1 + 0x40))) {
      *puVar11 = 0x2320;
      puVar9 = (undefined2 *)((long)puVar11 + 3);
      *(undefined1 *)(puVar11 + 1) = 0x20;
      goto LAB_109aabd7c;
    }
  }
  puVar11 = param_1;
  FUN_109ab3000();
  while( true ) {
    puVar9 = puVar11 + 1;
    *puVar11 = 0x2023;
    if (lVar3 == 0) break;
    lVar13 = lVar3 - param_2;
    iVar2 = (int)lVar13 + 1;
    uVar7 = *(ulong *)(param_1 + 0x44);
    if (uVar7 <= (ulong)((long)puVar9 + (long)iVar2)) {
      uVar12 = (long)puVar9 - *(long *)(param_1 + 0x40);
      lVar4 = (uVar7 - *(long *)(param_1 + 0x40)) * 3;
      iVar6 = (int)uVar12;
      iVar2 = iVar2 + iVar6;
      iVar8 = (int)((ulong)(lVar4 - (lVar4 >> 0x3f)) >> 1);
      if (iVar2 <= iVar8) {
        iVar2 = iVar8;
      }
      lVar4 = (long)(iVar2 + 0x100);
      func_0x000107c2ae8c();
      *(long *)(param_1 + 0x3c) = lVar4 + (*(long *)(param_1 + 0x3c) - *(long *)(param_1 + 0x40));
      if (0 < iVar6) {
        _memcpy(lVar4,*(long *)(param_1 + 0x40),uVar12 & 0x7fffffff);
      }
      *(long *)(param_1 + 0x40) = lVar4;
      *(long *)(param_1 + 0x44) = lVar4 + iVar2;
      puVar9 = (undefined2 *)(lVar4 + iVar6);
    }
    _memcpy(puVar9,param_2,lVar13 + 1);
    *(long *)(param_1 + 0x3c) = (long)puVar9 + lVar13;
    param_2 = lVar3 + 1;
    lVar3 = param_2;
    _strchr(param_2,10);
    puVar11 = param_1;
    FUN_109ab3000();
  }
LAB_109aabd7c:
  lVar3 = param_2;
  _strlen();
  iVar2 = (int)lVar3;
  uVar7 = *(ulong *)(param_1 + 0x44);
  if (uVar7 <= (ulong)((long)puVar9 + (long)iVar2)) {
    uVar12 = (long)puVar9 - *(long *)(param_1 + 0x40);
    lVar3 = (uVar7 - *(long *)(param_1 + 0x40)) * 3;
    iVar10 = (int)uVar12;
    iVar6 = (int)((ulong)(lVar3 - (lVar3 >> 0x3f)) >> 1);
    iVar8 = iVar10 + iVar2;
    if (iVar10 + iVar2 <= iVar6) {
      iVar8 = iVar6;
    }
    lVar3 = (long)(iVar8 + 0x100);
    func_0x000107c2ae8c();
    *(long *)(param_1 + 0x3c) = lVar3 + (*(long *)(param_1 + 0x3c) - *(long *)(param_1 + 0x40));
    if (0 < iVar10) {
      _memcpy(lVar3,*(long *)(param_1 + 0x40),uVar12 & 0x7fffffff);
    }
    *(long *)(param_1 + 0x40) = lVar3;
    *(long *)(param_1 + 0x44) = lVar3 + iVar8;
    puVar9 = (undefined2 *)(lVar3 + iVar10);
  }
  _memcpy(puVar9,param_2,(long)iVar2);
  *(long *)(param_1 + 0x3c) = (long)puVar9 + (long)iVar2;
  lVar3 = *(long *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((undefined2 *)(lVar3 + iVar2) < *(undefined2 **)(param_1 + 0x3c)) {
    **(undefined2 **)(param_1 + 0x3c) = 10;
    FUN_109aaa624(param_1,*(undefined8 *)(param_1 + 0x40));
    lVar3 = *(long *)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x2c);
  }
  iVar8 = *(int *)(param_1 + 0x20);
  if (iVar8 - iVar2 != 0) {
    if (iVar2 <= iVar8) {
      _memset(lVar3 + iVar2,0x20,iVar8 - iVar2);
      lVar3 = *(long *)(param_1 + 0x40);
    }
    *(int *)(param_1 + 0x2c) = iVar8;
    iVar2 = iVar8;
  }
  *(long *)(param_1 + 0x3c) = lVar3 + iVar2;
  return;
}



/* Entry: 109aabfa8; end: 109aac02b;  */

void FUN_109aabfa8(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 0x28);
    while (0 < iVar1) {
      FUN_109aab6e8(param_1);
      iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 0x28);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_109ab3000(param_1);
    FUN_109aaa624(param_1,&UNK_10f432cfa);
    FUN_109aaa624(param_1,&UNK_10f599945);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
    return;
  }
  return;
}



/* Entry: 109aac02c; end: 109aac19b;  */

void FUN_109aac02c(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (int *)0x0) {
    uVar3 = 0xffffffe5;
  }
  else {
    if (*param_1 == 0x4c4d4159) {
      if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109aac06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x4a))();
        return;
      }
      puVar2 = (undefined4 *)0x2c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar2 + 3) = 0x656761726f747320;
      *(undefined8 *)(puVar2 + 1) = 0x656c696620656854;
      *puVar2 = 1;
      puStack_30 = puVar2 + 1;
      uStack_28 = 0x26;
      *(undefined1 *)((long)puVar2 + 0x2a) = 0;
      *(undefined8 *)(puVar2 + 7) = 0x7220726f66206465;
      *(undefined8 *)(puVar2 + 5) = 0x6e65706f20736920;
      *(undefined8 *)((long)puVar2 + 0x22) = 0x676e696461657220;
      FUN_109ac3188(0xfffffffe,&puStack_30,&UNK_10f5990f7,&UNK_10f598d74,0xb75);
      goto LAB_109aac13c;
    }
    uVar3 = 0xfffffffb;
  }
  puVar2 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x1f;
  *(undefined1 *)((long)puVar2 + 0x23) = 0;
  *(undefined8 *)(puVar2 + 3) = 0x207265746e696f70;
  *(undefined8 *)(puVar2 + 1) = 0x2064696c61766e49;
  *(undefined8 *)((long)puVar2 + 0x1b) = 0x656761726f747320;
  *(undefined8 *)((long)puVar2 + 0x13) = 0x656c6966206f7420;
  FUN_109ac3188(uVar3,&puStack_30,&UNK_10f5990f7,&UNK_10f598d74,0xb75);
LAB_109aac13c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109aac140);
  (*pcVar1)();
}



/* Entry: 109aac19c; end: 109aac30b;  */

void FUN_109aac19c(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (int *)0x0) {
    uVar3 = 0xffffffe5;
  }
  else {
    if (*param_1 == 0x4c4d4159) {
      if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109aac1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x4c))();
        return;
      }
      puVar2 = (undefined4 *)0x2c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar2 + 3) = 0x656761726f747320;
      *(undefined8 *)(puVar2 + 1) = 0x656c696620656854;
      *puVar2 = 1;
      puStack_30 = puVar2 + 1;
      uStack_28 = 0x26;
      *(undefined1 *)((long)puVar2 + 0x2a) = 0;
      *(undefined8 *)(puVar2 + 7) = 0x7220726f66206465;
      *(undefined8 *)(puVar2 + 5) = 0x6e65706f20736920;
      *(undefined8 *)((long)puVar2 + 0x22) = 0x676e696461657220;
      FUN_109ac3188(0xfffffffe,&puStack_30,&UNK_10f599131,&UNK_10f598d74,0xb7d);
      goto LAB_109aac2ac;
    }
    uVar3 = 0xfffffffb;
  }
  puVar2 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x1f;
  *(undefined1 *)((long)puVar2 + 0x23) = 0;
  *(undefined8 *)(puVar2 + 3) = 0x207265746e696f70;
  *(undefined8 *)(puVar2 + 1) = 0x2064696c61766e49;
  *(undefined8 *)((long)puVar2 + 0x1b) = 0x656761726f747320;
  *(undefined8 *)((long)puVar2 + 0x13) = 0x656c6966206f7420;
  FUN_109ac3188(uVar3,&puStack_30,&UNK_10f599131,&UNK_10f598d74,0xb7d);
LAB_109aac2ac:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109aac2b0);
  (*pcVar1)();
}



/* Entry: 109aac30c; end: 109aac47b;  */

void FUN_109aac30c(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (int *)0x0) {
    uVar3 = 0xffffffe5;
  }
  else {
    if (*param_1 == 0x4c4d4159) {
      if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109aac34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x4e))();
        return;
      }
      puVar2 = (undefined4 *)0x2c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar2 + 3) = 0x656761726f747320;
      *(undefined8 *)(puVar2 + 1) = 0x656c696620656854;
      *puVar2 = 1;
      puStack_30 = puVar2 + 1;
      uStack_28 = 0x26;
      *(undefined1 *)((long)puVar2 + 0x2a) = 0;
      *(undefined8 *)(puVar2 + 7) = 0x7220726f66206465;
      *(undefined8 *)(puVar2 + 5) = 0x6e65706f20736920;
      *(undefined8 *)((long)puVar2 + 0x22) = 0x676e696461657220;
      FUN_109ac3188(0xfffffffe,&puStack_30,&UNK_10f599142,&UNK_10f598d74,0xb85);
      goto LAB_109aac41c;
    }
    uVar3 = 0xfffffffb;
  }
  puVar2 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x1f;
  *(undefined1 *)((long)puVar2 + 0x23) = 0;
  *(undefined8 *)(puVar2 + 3) = 0x207265746e696f70;
  *(undefined8 *)(puVar2 + 1) = 0x2064696c61766e49;
  *(undefined8 *)((long)puVar2 + 0x1b) = 0x656761726f747320;
  *(undefined8 *)((long)puVar2 + 0x13) = 0x656c6966206f7420;
  FUN_109ac3188(uVar3,&puStack_30,&UNK_10f599142,&UNK_10f598d74,0xb85);
LAB_109aac41c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109aac420);
  (*pcVar1)();
}



/* Entry: 109aac47c; end: 109aac5eb;  */

void FUN_109aac47c(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (int *)0x0) {
    uVar3 = 0xffffffe5;
  }
  else {
    if (*param_1 == 0x4c4d4159) {
      if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109aac4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x50))();
        return;
      }
      puVar2 = (undefined4 *)0x2c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar2 + 3) = 0x656761726f747320;
      *(undefined8 *)(puVar2 + 1) = 0x656c696620656854;
      *puVar2 = 1;
      puStack_30 = puVar2 + 1;
      uStack_28 = 0x26;
      *(undefined1 *)((long)puVar2 + 0x2a) = 0;
      *(undefined8 *)(puVar2 + 7) = 0x7220726f66206465;
      *(undefined8 *)(puVar2 + 5) = 0x6e65706f20736920;
      *(undefined8 *)((long)puVar2 + 0x22) = 0x676e696461657220;
      FUN_109ac3188(0xfffffffe,&puStack_30,&UNK_10f59914d,&UNK_10f598d74,0xb8d);
      goto LAB_109aac58c;
    }
    uVar3 = 0xfffffffb;
  }
  puVar2 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x1f;
  *(undefined1 *)((long)puVar2 + 0x23) = 0;
  *(undefined8 *)(puVar2 + 3) = 0x207265746e696f70;
  *(undefined8 *)(puVar2 + 1) = 0x2064696c61766e49;
  *(undefined8 *)((long)puVar2 + 0x1b) = 0x656761726f747320;
  *(undefined8 *)((long)puVar2 + 0x13) = 0x656c6966206f7420;
  FUN_109ac3188(uVar3,&puStack_30,&UNK_10f59914d,&UNK_10f598d74,0xb8d);
LAB_109aac58c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109aac590);
  (*pcVar1)();
}



/* Entry: 109aac5ec; end: 109aac75b;  */

void FUN_109aac5ec(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (int *)0x0) {
    uVar3 = 0xffffffe5;
  }
  else {
    if (*param_1 == 0x4c4d4159) {
      if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109aac62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x52))();
        return;
      }
      puVar2 = (undefined4 *)0x2c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar2 + 3) = 0x656761726f747320;
      *(undefined8 *)(puVar2 + 1) = 0x656c696620656854;
      *puVar2 = 1;
      puStack_30 = puVar2 + 1;
      uStack_28 = 0x26;
      *(undefined1 *)((long)puVar2 + 0x2a) = 0;
      *(undefined8 *)(puVar2 + 7) = 0x7220726f66206465;
      *(undefined8 *)(puVar2 + 5) = 0x6e65706f20736920;
      *(undefined8 *)((long)puVar2 + 0x22) = 0x676e696461657220;
      FUN_109ac3188(0xfffffffe,&puStack_30,&UNK_10f599159,&UNK_10f598d74,0xb95);
      goto LAB_109aac6fc;
    }
    uVar3 = 0xfffffffb;
  }
  puVar2 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x1f;
  *(undefined1 *)((long)puVar2 + 0x23) = 0;
  *(undefined8 *)(puVar2 + 3) = 0x207265746e696f70;
  *(undefined8 *)(puVar2 + 1) = 0x2064696c61766e49;
  *(undefined8 *)((long)puVar2 + 0x1b) = 0x656761726f747320;
  *(undefined8 *)((long)puVar2 + 0x13) = 0x656c6966206f7420;
  FUN_109ac3188(uVar3,&puStack_30,&UNK_10f599159,&UNK_10f598d74,0xb95);
LAB_109aac6fc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109aac700);
  (*pcVar1)();
}



/* Entry: 109aac75c; end: 109aace63;  */

void FUN_109aac75c(int *param_1,long param_2,int param_3,ulong param_4)

{
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  byte *pbVar9;
  code *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  char *pcVar17;
  char *pcVar18;
  byte *pbVar19;
  uint uVar20;
  float *pfVar21;
  long lVar22;
  float fVar23;
  int iStack_5ac;
  undefined4 *puStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  uint auStack_470 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  if (param_1 == (int *)0x0) {
    uVar16 = 0xffffffe5;
  }
  else {
    if (*param_1 == 0x4c4d4159) {
      if (param_1[2] == 0) {
        puVar11 = (undefined4 *)0x2c;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar11 + 3) = 0x656761726f747320;
        *(undefined8 *)(puVar11 + 1) = 0x656c696620656854;
        *puVar11 = 1;
        puStack_580 = puVar11 + 1;
        uStack_578 = 0x26;
        *(undefined1 *)((long)puVar11 + 0x2a) = 0;
        *(undefined8 *)(puVar11 + 7) = 0x7220726f66206465;
        *(undefined8 *)(puVar11 + 5) = 0x6e65706f20736920;
        *(undefined8 *)((long)puVar11 + 0x22) = 0x676e696461657220;
        FUN_109ac3188(0xfffffffe,&puStack_580,&UNK_10f599167,&UNK_10f598d74,0xc1d);
        goto LAB_109aacdd8;
      }
      if (param_3 < 0) {
        puVar11 = (undefined4 *)0x20;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        puStack_580 = puVar11 + 1;
        uStack_578 = 0x1b;
        *(undefined1 *)((long)puVar11 + 0x1f) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x207265626d756e20;
        *(undefined8 *)(puVar11 + 1) = 0x657669746167654e;
        *(undefined8 *)((long)puVar11 + 0x17) = 0x73746e656d656c65;
        *(undefined8 *)((long)puVar11 + 0xf) = 0x20666f207265626d;
        FUN_109ac3188(0xffffff2d,&puStack_580,&UNK_10f599167,&UNK_10f598d74,0xc20);
        goto LAB_109aacdd8;
      }
      FUN_109aace64(param_4,auStack_470);
      if (param_3 == 0) {
LAB_109aacc14:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          return;
        }
        ___stack_chk_fail();
      }
      else if (param_2 != 0) {
        iStack_5ac = param_3;
        if ((int)param_4 == 1) {
          auStack_470[0] = auStack_470[0] * param_3;
          iStack_5ac = 1;
        }
        iVar12 = 0;
        pcVar1 = (char *)((long)&uStack_560 + 6);
        do {
          if (0 < (int)param_4) {
            uVar15 = 0;
            do {
              uVar3 = auStack_470[uVar15 * 2];
              uVar4 = auStack_470[uVar15 * 2 + 1];
              iVar8 = (uVar4 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar4 & 7) << 1) & 3);
              pfVar21 = (float *)(param_2 + (int)((iVar12 + iVar8) - 1U & -iVar8));
              if (0 < (int)uVar3) {
                if (7 < uVar4) goto LAB_109aacc14;
                uVar20 = 0;
                do {
                  if ((int)uVar4 < 3) {
                    pcVar18 = (char *)((long)&uStack_560 + 7);
                    if (uVar4 == 0) {
                      uVar14 = (ulong)*(byte *)pfVar21;
                      do {
                        uVar13 = (uint)uVar14;
                        pcVar18 = pcVar18 + -1;
                        *pcVar18 = (char)uVar14 + (char)(uVar14 / 10) * -10 + '0';
                        uVar14 = uVar14 / 10;
                      } while (9 < uVar13);
                    }
                    else {
                      if (uVar4 != 1) {
                        if (uVar4 != 2) goto LAB_109aac9b8;
                        uVar14 = (ulong)*(ushort *)pfVar21;
                        do {
                          uVar13 = (uint)uVar14;
                          pcVar18 = pcVar18 + -1;
                          *pcVar18 = (char)uVar14 + (char)(uVar14 / 10) * -10 + '0';
                          uVar14 = uVar14 / 10;
                        } while (9 < uVar13);
                        goto LAB_109aacb0c;
                      }
                      cVar6 = *(char *)pfVar21;
                      uVar13 = -(int)cVar6;
                      if (-1 < cVar6) {
                        uVar13 = (int)cVar6;
                      }
                      uVar14 = (ulong)uVar13;
                      pcVar17 = pcVar1;
                      do {
                        pcVar18 = pcVar17;
                        uVar13 = (uint)uVar14;
                        pcVar17 = pcVar18 + -1;
                        *pcVar18 = (char)uVar14 + (char)(uVar14 / 10) * -10 + '0';
                        uVar14 = uVar14 / 10;
                      } while (9 < uVar13);
                      if (cVar6 < 0) {
                        *pcVar17 = '-';
                        pcVar18 = pcVar17;
                      }
                    }
                    uStack_560 = uStack_560 & 0xffffffffffffff;
                    lVar22 = 1;
                  }
                  else if ((int)uVar4 < 5) {
                    if (uVar4 == 3) {
                      sVar7 = *(short *)pfVar21;
                      uVar13 = -(int)sVar7;
                      if (-1 < sVar7) {
                        uVar13 = (int)sVar7;
                      }
                      uVar14 = (ulong)uVar13;
                      pcVar17 = pcVar1;
                      do {
                        pcVar18 = pcVar17;
                        uVar13 = (uint)uVar14;
                        pcVar17 = pcVar18 + -1;
                        *pcVar18 = (char)uVar14 + (char)(uVar14 / 10) * -10 + '0';
                        uVar14 = uVar14 / 10;
                      } while (9 < uVar13);
                      if (sVar7 < 0) {
                        *pcVar17 = '-';
                        pcVar18 = pcVar17;
                      }
LAB_109aacb0c:
                      uStack_560 = uStack_560 & 0xffffffffffffff;
                      lVar22 = 2;
                    }
                    else {
                      if (uVar4 == 4) {
                        fVar5 = *pfVar21;
                        fVar23 = (float)-(int)fVar5;
                        if (-1 < (int)fVar5) {
                          fVar23 = fVar5;
                        }
                        uStack_560 = uStack_560 & 0xffffffffffffff;
                        uVar14 = (ulong)(uint)fVar23;
                        pcVar17 = pcVar1;
                        do {
                          pcVar18 = pcVar17;
                          uVar13 = (uint)uVar14;
                          pcVar17 = pcVar18 + -1;
                          *pcVar18 = (char)uVar14 + (char)(uVar14 / 10) * -10 + '0';
                          uVar14 = uVar14 / 10;
                        } while (9 < uVar13);
                        if ((int)fVar5 < 0) {
                          *pcVar17 = '-';
                          pcVar18 = pcVar17;
                        }
                        goto LAB_109aacb9c;
                      }
LAB_109aac9b8:
                      fVar5 = *pfVar21;
                      fVar23 = (float)-(int)fVar5;
                      if (-1 < (int)fVar5) {
                        fVar23 = fVar5;
                      }
                      uStack_560 = uStack_560 & 0xffffffffffffff;
                      uVar14 = (ulong)(uint)fVar23;
                      pcVar17 = pcVar1;
                      do {
                        pcVar18 = pcVar17;
                        uVar13 = (uint)uVar14;
                        pcVar17 = pcVar18 + -1;
                        *pcVar18 = (char)uVar14 + (char)(uVar14 / 10) * -10 + '0';
                        uVar14 = uVar14 / 10;
                      } while (9 < uVar13);
                      if ((int)fVar5 < 0) {
                        *pcVar17 = '-';
                        pcVar18 = pcVar17;
                      }
LAB_109aacafc:
                      lVar22 = 8;
                    }
                  }
                  else {
                    if (uVar4 != 5) {
                      if (uVar4 != 6) goto LAB_109aac9b8;
                      pcVar18 = (char *)&uStack_570;
                      FUN_109aad130(*(undefined8 *)pfVar21,&uStack_570);
                      goto LAB_109aacafc;
                    }
                    fVar23 = *pfVar21;
                    if ((((uint)fVar23 ^ 0xffffffff) & 0x7f800000) == 0) {
                      if (ABS(fVar23) == INFINITY) {
                        puVar2 = &UNK_10f59a0df;
                        if (-1 < (int)fVar23) {
                          puVar2 = &UNK_10f59a0e5;
                        }
                        pcVar18 = (char *)&uStack_570;
                        _strcpy(&uStack_570,puVar2);
                      }
                      else {
                        uVar14 = (ulong)uStack_570 >> 0x20;
                        uStack_570 = CONCAT44((uint)uVar14 & 0xffffff00,0x6e614e2e);
LAB_109aacb98:
                        pcVar18 = (char *)&uStack_570;
                      }
                    }
                    else {
                      if (fVar23 != (float)(int)(long)(float)(int)fVar23) {
                        _sprintf(&uStack_570,&UNK_10f59a0da);
                        if (((byte)uStack_570 == 0x2d) ||
                           (pbVar9 = (byte *)&uStack_570, (byte)uStack_570 == 0x2b)) {
                          pbVar9 = (byte *)((ulong)&uStack_570 | 1);
                        }
                        do {
                          pbVar19 = pbVar9;
                          pbVar9 = pbVar19 + 1;
                        } while (*pbVar19 - 0x30 < 10);
                        if (*pbVar19 == 0x2c) {
                          *pbVar19 = 0x2e;
                        }
                        goto LAB_109aacb98;
                      }
                      pcVar18 = (char *)&uStack_570;
                      _sprintf(&uStack_570,&UNK_10f59a0d6);
                    }
LAB_109aacb9c:
                    lVar22 = 4;
                  }
                  if (param_1[1] == 8) {
                    pcVar17 = pcVar18;
                    _strlen(pcVar18);
                    FUN_109aad244(param_1,0,pcVar18,pcVar17);
                  }
                  else {
                    FUN_109aad4ac(param_1,0,pcVar18);
                  }
                  pfVar21 = (float *)((long)pfVar21 + lVar22);
                  uVar20 = uVar20 + 1;
                } while (uVar20 != uVar3);
              }
              iVar12 = (int)pfVar21 - (int)param_2;
              uVar15 = uVar15 + 1;
            } while (uVar15 != (param_4 & 0xffffffff));
          }
          iStack_5ac = iStack_5ac + -1;
        } while (iStack_5ac != 0);
        goto LAB_109aacc14;
      }
      puVar11 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      puStack_580 = puVar11 + 1;
      uStack_578 = 0x11;
      *(undefined2 *)(puVar11 + 5) = 0x72;
      *(undefined8 *)(puVar11 + 3) = 0x65746e696f702061;
      *(undefined8 *)(puVar11 + 1) = 0x746164206c6c754e;
      FUN_109ac3188(0xffffffe5,&puStack_580,&UNK_10f599167,&UNK_10f598d74,0xc28);
      goto LAB_109aacdd8;
    }
    uVar16 = 0xfffffffb;
  }
  puVar11 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar11 = 1;
  puStack_580 = puVar11 + 1;
  uStack_578 = 0x1f;
  *(undefined1 *)((long)puVar11 + 0x23) = 0;
  *(undefined8 *)(puVar11 + 3) = 0x207265746e696f70;
  *(undefined8 *)(puVar11 + 1) = 0x2064696c61766e49;
  *(undefined8 *)((long)puVar11 + 0x1b) = 0x656761726f747320;
  *(undefined8 *)((long)puVar11 + 0x13) = 0x656c6966206f7420;
  FUN_109ac3188(uVar16,&puStack_580,&UNK_10f599167,&UNK_10f598d74,0xc1d);
LAB_109aacdd8:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109aacddc);
  (*pcVar10)();
}



/* Entry: 109aace64; end: 109aad12f;  */

int FUN_109aace64(long param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  iVar8 = 0;
  if (param_1 != 0) {
    lVar4 = param_1;
    _strlen();
    iVar8 = (int)lVar4;
    if ((iVar8 == 0) || (*param_2 = 0, iVar8 < 1)) {
      iVar8 = 0;
    }
    else {
      pbVar10 = (byte *)0x0;
      iVar12 = 0;
      uVar11 = 0;
      do {
        iVar9 = (int)pbVar10;
        pbVar5 = (byte *)(param_1 + iVar12);
        uVar1 = *pbVar5 - 0x30;
        if (uVar1 < 10) {
          pbVar10 = (byte *)(ulong)uVar1;
          if (pbVar5[1] - 0x30 < 10) {
            puStack_60 = (undefined4 *)0x0;
            _strtol(pbVar5,&puStack_60,10);
            iVar12 = ~(uint)param_1 + (int)puStack_60;
            pbVar10 = pbVar5;
          }
          if ((int)pbVar10 < 1) {
            puVar7 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar7 = 1;
            puStack_60 = puVar7 + 1;
            uStack_58 = 0x1f;
            *(undefined1 *)((long)puVar7 + 0x23) = 0;
            *(undefined8 *)(puVar7 + 3) = 0x7079742061746164;
            *(undefined8 *)(puVar7 + 1) = 0x2064696c61766e49;
            *(undefined8 *)((long)puVar7 + 0x1b) = 0x6e6f697461636966;
            *(undefined8 *)((long)puVar7 + 0x13) = 0x6963657073206570;
            FUN_109ac3188(0xfffffffb,&puStack_60,&UNK_10f59a0a5,&UNK_10f598d74,0xbd0);
LAB_109aad0c8:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x109aad0cc);
            (*pcVar3)();
          }
        }
        else {
          puVar6 = &UNK_10e02e313;
          _memchr(&UNK_10e02e313,(int)(char)*pbVar5,9);
          if (puVar6 == (undefined *)0x0) {
            puVar7 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar7 = 1;
            puStack_60 = puVar7 + 1;
            uStack_58 = 0x1f;
            *(undefined1 *)((long)puVar7 + 0x23) = 0;
            *(undefined8 *)(puVar7 + 3) = 0x7079742061746164;
            *(undefined8 *)(puVar7 + 1) = 0x2064696c61766e49;
            *(undefined8 *)((long)puVar7 + 0x1b) = 0x6e6f697461636966;
            *(undefined8 *)((long)puVar7 + 0x13) = 0x6963657073206570;
            FUN_109ac3188(0xfffffffb,&puStack_60,&UNK_10f59a0a5,&UNK_10f598d74,0xbd8);
            goto LAB_109aad0c8;
          }
          if (iVar9 == 0) {
            iVar9 = 1;
            param_2[(int)uVar11] = 1;
          }
          iVar2 = (int)puVar6 + -0xe02e313;
          (param_2 + (int)uVar11)[1] = iVar2;
          if (0 < (int)uVar11) {
            if (iVar2 == param_2[(ulong)uVar11 - 1]) {
              pbVar10 = (byte *)0x0;
              param_2[(ulong)uVar11 - 2] = param_2[(ulong)uVar11 - 2] + iVar9;
              goto LAB_109aacf74;
            }
            if (0xfd < uVar11) {
              puVar7 = (undefined4 *)0x28;
              func_0x000107c2ae8c();
              *puVar7 = 1;
              puStack_60 = puVar7 + 1;
              uStack_58 = 0x20;
              *(undefined1 *)(puVar7 + 9) = 0;
              *(undefined8 *)(puVar7 + 3) = 0x7974206174616420;
              *(undefined8 *)(puVar7 + 1) = 0x676e6f6c206f6f54;
              *(undefined8 *)(puVar7 + 7) = 0x6e6f697461636966;
              *(undefined8 *)(puVar7 + 5) = 0x6963657073206570;
              FUN_109ac3188(0xfffffffb,&puStack_60,&UNK_10f59a0a5,&UNK_10f598d74,0xbe2);
              goto LAB_109aad0c8;
            }
          }
          pbVar10 = (byte *)0x0;
          uVar11 = uVar11 + 2;
        }
LAB_109aacf74:
        param_2[(int)uVar11] = (int)pbVar10;
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar8);
      iVar8 = (int)uVar11 / 2;
    }
  }
  return iVar8;
}



/* Entry: 109aad130; end: 109aad243;  */

byte * FUN_109aad130(double param_1,byte *param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar4 = (uint)((ulong)param_1 >> 0x20);
  if (((uVar4 ^ 0xffffffff) & 0x7ff00000) == 0) {
    uVar4 = uVar4 & 0x7fffffff;
    if (SUB84(param_1,0) != 0) {
      uVar4 = uVar4 + 1;
    }
    if (uVar4 < 0x7ff00001) {
      puVar1 = &UNK_10f59a0df;
      if (-1 < (long)param_1) {
        puVar1 = &UNK_10f59a0e5;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__strcpy_11034cbb0)(param_2,puVar1);
      return param_2;
    }
    param_2[4] = 0;
    param_2[0] = 0x2e;
    param_2[1] = 0x4e;
    param_2[2] = 0x61;
    param_2[3] = 0x6e;
  }
  else if (param_1 == (double)(int)(long)(double)(long)param_1) {
    _sprintf(param_2,&UNK_10f59a0d6);
  }
  else {
    _sprintf(param_2,&UNK_10f59a0ea);
    if ((*param_2 == 0x2d) || (pbVar2 = param_2, *param_2 == 0x2b)) {
      pbVar2 = param_2 + 1;
    }
    do {
      pbVar3 = pbVar2;
      pbVar2 = pbVar3 + 1;
    } while (*pbVar3 - 0x30 < 10);
    if (*pbVar3 == 0x2c) {
      *pbVar3 = 0x2e;
    }
  }
  return param_2;
}



/* Entry: 109aad244; end: 109aad4ab;  */

/* WARNING: Removing unreachable block (ram,0x000109ab30d8) */
/* WARNING: Removing unreachable block (ram,0x000109ab33e4) */
/* WARNING: Removing unreachable block (ram,0x000109ab33ec) */
/* WARNING: Removing unreachable block (ram,0x000109ab33f8) */
/* WARNING: Removing unreachable block (ram,0x000109ab30e4) */
/* WARNING: Removing unreachable block (ram,0x000109ab3538) */
/* WARNING: Removing unreachable block (ram,0x000109ab30fc) */
/* WARNING: Removing unreachable block (ram,0x000109ab3100) */
/* WARNING: Removing unreachable block (ram,0x000109ab34d4) */

void FUN_109aad244(undefined1 *param_1,byte *param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  char *pcVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  undefined1 *puVar18;
  int iVar19;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  if (((*(uint *)(param_1 + 0x44) & 7) != 6) &&
     ((param_2 == (byte *)0x0 || (4 < (*(uint *)(param_1 + 0x44) & 7))))) {
    if (param_2 != (byte *)0x0) {
      puVar5 = (undefined4 *)0x38;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar5 + 3) = 0x656b206874697720;
      *(undefined8 *)(puVar5 + 1) = 0x73746e656d656c65;
      *puVar5 = 1;
      *(undefined2 *)(puVar5 + 0xd) = 0x65;
      *(undefined8 *)(puVar5 + 7) = 0x727720656220746f;
      *(undefined8 *)(puVar5 + 5) = 0x6e206e6163207379;
      *(undefined8 *)(puVar5 + 0xb) = 0x636e657571657320;
      *(undefined8 *)(puVar5 + 9) = 0x6f74206e65747469;
      FUN_109ac3188(0xfffffffb,&stack0xffffffffffffffa0,&UNK_10f59a122,&UNK_10f598d74,0x99b);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109aad480);
      (*pcVar4)();
    }
    puVar18 = *(undefined1 **)(param_1 + 0x78);
    puVar1 = *(undefined1 **)(param_1 + 0x80);
    iVar15 = param_4 + ((int)puVar18 - (int)puVar1);
    *(undefined4 *)(param_1 + 0x44) = 5;
    if (((*(int *)(param_1 + 0x90) < iVar15) && (10 < iVar15 - *(int *)(param_1 + 0x40))) ||
       ((puVar1 < puVar18 && (puVar18[-1] == '>')))) {
      puVar11 = param_1;
      FUN_109ab3000();
    }
    else {
      puVar11 = puVar18;
      if ((puVar1 + *(int *)(param_1 + 0x40) < puVar18) && (puVar18[-1] != '>')) {
        puVar11 = puVar18 + 1;
        *puVar18 = 0x20;
      }
    }
    _memcpy(puVar11,param_3,(long)param_4);
    *(undefined1 **)(param_1 + 0x78) = puVar11 + param_4;
    return;
  }
  FUN_109ab3080(param_1,param_2,1,0,0);
  lVar16 = *(long *)(param_1 + 0x78);
  if (*(ulong *)(param_1 + 0x88) <= (ulong)(lVar16 + param_4)) {
    uVar17 = lVar16 - *(long *)(param_1 + 0x80);
    lVar16 = (*(ulong *)(param_1 + 0x88) - *(long *)(param_1 + 0x80)) * 3;
    iVar7 = (int)uVar17;
    iVar6 = (int)((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
    iVar15 = param_4 + iVar7;
    if (param_4 + iVar7 <= iVar6) {
      iVar15 = iVar6;
    }
    lVar16 = (long)(iVar15 + 0x100);
    func_0x000107c2ae8c();
    *(long *)(param_1 + 0x78) = lVar16 + (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x80));
    if (0 < iVar7) {
      _memcpy(lVar16,*(long *)(param_1 + 0x80),uVar17 & 0x7fffffff);
    }
    *(long *)(param_1 + 0x80) = lVar16;
    *(long *)(param_1 + 0x88) = lVar16 + iVar15;
    lVar16 = lVar16 + iVar7;
  }
  _memcpy(lVar16,param_3,(long)param_4);
  *(long *)(param_1 + 0x78) = lVar16 + param_4;
  puVar9 = (undefined8 *)0x0;
  plVar10 = (long *)0x0;
  puVar18 = *(undefined1 **)(param_1 + 0x78);
  uVar2 = *(uint *)(param_1 + 0x44);
  if (param_2 == (byte *)0x0) {
    pcVar12 = (char *)(byte *)0x0;
  }
  else {
    pcVar12 = (char *)(byte *)0x0;
    if (*param_2 != 0) {
      pcVar12 = (char *)param_2;
    }
  }
  if ((byte *)pcVar12 == (byte *)0x0) {
    pcVar12 = "_";
  }
  else if ((*pcVar12 == 0x5f) && (pcVar12[1] == 0)) {
    puVar5 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_70 = puVar5 + 1;
    uStack_68 = 0x21;
    *(undefined2 *)(puVar5 + 9) = 0x65;
    *(undefined8 *)(puVar5 + 3) = 0x2061207369205f20;
    *(undefined8 *)(puVar5 + 1) = 0x656c676e69732041;
    *(undefined8 *)(puVar5 + 7) = 0x6d616e2067617420;
    *(undefined8 *)(puVar5 + 5) = 0x6465767265736572;
    FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f5996b6,&UNK_10f598d74,0x8fd);
    goto LAB_109ab35ac;
  }
  pbVar13 = (byte *)pcVar12;
  _strlen();
  *puVar18 = 0x3c;
  pbVar14 = puVar18 + 2;
  puVar18[1] = 0x2f;
  if ((byte)*pcVar12 == 0x5f || ((byte)*pcVar12 & 0xffffffdf) - 0x41 < 0x1a) {
    iVar15 = (int)pbVar13;
    if (*(byte **)(param_1 + 0x88) <= pbVar14 + iVar15) {
      uVar17 = (long)pbVar14 - *(long *)(param_1 + 0x80);
      lVar16 = ((long)*(byte **)(param_1 + 0x88) - *(long *)(param_1 + 0x80)) * 3;
      iVar8 = (int)uVar17;
      iVar7 = (int)((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      iVar6 = iVar8 + iVar15;
      if (iVar8 + iVar15 <= iVar7) {
        iVar6 = iVar7;
      }
      lVar16 = (long)(iVar6 + 0x100);
      func_0x000107c2ae8c();
      *(long *)(param_1 + 0x78) = lVar16 + (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x80));
      if (0 < iVar8) {
        _memcpy(lVar16,*(long *)(param_1 + 0x80),uVar17 & 0x7fffffff);
      }
      *(long *)(param_1 + 0x80) = lVar16;
      *(long *)(param_1 + 0x88) = lVar16 + iVar6;
      pbVar14 = (byte *)(lVar16 + iVar8);
    }
    if (0 < iVar15) {
      uVar17 = (ulong)pbVar13 & 0x7fffffff;
      pbVar13 = pbVar14;
      do {
        bVar3 = *pcVar12;
        if (((((byte)(bVar3 - 0x3a) < 0xf6) && ((byte)((bVar3 & 0xdf) + 0xa5) < 0xe6)) &&
            (bVar3 != 0x2d)) && (bVar3 != 0x5f)) {
          puVar5 = (undefined4 *)0x50;
          func_0x000107c2ae8c();
          *(undefined8 *)(puVar5 + 7) = 0x6e6168706c61206e;
          *(undefined8 *)(puVar5 + 5) = 0x6961746e6f632079;
          *(undefined8 *)(puVar5 + 0xb) = 0x7265746361726168;
          *(undefined8 *)(puVar5 + 9) = 0x6320636972656d75;
          *(undefined8 *)(puVar5 + 0xf) = 0x27202c5d392d305a;
          *(undefined8 *)(puVar5 + 0xd) = 0x2d417a2d615b2073;
          *(undefined8 *)((long)puVar5 + 0x46) = 0x275f2720646e6120;
          *(undefined8 *)((long)puVar5 + 0x3e) = 0x272d27202c5d392d;
          *puVar5 = 1;
          puStack_70 = puVar5 + 1;
          uStack_68 = 0x4a;
          *(undefined1 *)((long)puVar5 + 0x4e) = 0;
          *(undefined8 *)(puVar5 + 3) = 0x6c6e6f2079616d20;
          *(undefined8 *)(puVar5 + 1) = 0x656d616e2079654b;
          FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f5996b6,&UNK_10f598d74,0x910);
          goto LAB_109ab35ac;
        }
        *pbVar13 = bVar3;
        uVar17 = uVar17 - 1;
        pbVar13 = pbVar13 + 1;
        pcVar12 = pcVar12 + 1;
      } while (uVar17 != 0);
    }
    pbVar14 = pbVar14 + iVar15;
    while( true ) {
      if ((plVar10 != (long *)0x0) && (lVar16 = *plVar10, lVar16 != 0)) {
        plVar10 = plVar10 + 1;
        do {
          iVar6 = (int)lVar16;
          _strlen();
          iVar7 = (int)*plVar10;
          _strlen();
          iVar15 = iVar6 + iVar7 + 4;
          if (*(byte **)(param_1 + 0x88) <= pbVar14 + iVar15) {
            uVar17 = (long)pbVar14 - *(long *)(param_1 + 0x80);
            lVar16 = ((long)*(byte **)(param_1 + 0x88) - *(long *)(param_1 + 0x80)) * 3;
            iVar19 = (int)uVar17;
            iVar15 = iVar15 + iVar19;
            iVar8 = (int)((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
            if (iVar15 <= iVar8) {
              iVar15 = iVar8;
            }
            lVar16 = (long)(iVar15 + 0x100);
            func_0x000107c2ae8c();
            *(long *)(param_1 + 0x78) =
                 lVar16 + (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x80));
            if (0 < iVar19) {
              _memcpy(lVar16,*(long *)(param_1 + 0x80),uVar17 & 0x7fffffff);
            }
            *(long *)(param_1 + 0x80) = lVar16;
            *(long *)(param_1 + 0x88) = lVar16 + iVar15;
            pbVar14 = (byte *)(lVar16 + iVar19);
          }
          *pbVar14 = 0x20;
          _memcpy(pbVar14 + 1,plVar10[-1],(long)iVar6);
          pbVar14 = pbVar14 + 1 + iVar6;
          pbVar13 = pbVar14 + 2;
          pbVar14[0] = 0x3d;
          pbVar14[1] = 0x22;
          _memcpy(pbVar13,*plVar10,(long)iVar7);
          pbVar14 = pbVar13 + iVar7 + 1;
          pbVar13[iVar7] = 0x22;
          lVar16 = plVar10[1];
          plVar10 = plVar10 + 2;
        } while (lVar16 != 0);
      }
      if (puVar9 == (undefined8 *)0x0) break;
      plVar10 = (long *)*puVar9;
      puVar9 = (undefined8 *)puVar9[1];
    }
    *pbVar14 = 0x3e;
    *(byte **)(param_1 + 0x78) = pbVar14 + 1;
    *(uint *)(param_1 + 0x44) = uVar2 & 0xffffffdf;
    return;
  }
  puVar5 = (undefined4 *)0x28;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar5 + 3) = 0x747261747320646c;
  *(undefined8 *)(puVar5 + 1) = 0x756f68732079654b;
  *puVar5 = 1;
  puStack_70 = puVar5 + 1;
  uStack_68 = 0x23;
  *(undefined1 *)((long)puVar5 + 0x27) = 0;
  *(undefined4 *)((long)puVar5 + 0x23) = 0x5f20726f;
  *(undefined8 *)(puVar5 + 7) = 0x6f2072657474656c;
  *(undefined8 *)(puVar5 + 5) = 0x2061206874697720;
  FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f5996b6,&UNK_10f598d74,0x909);
LAB_109ab35ac:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109ab35b0);
  (*pcVar4)();
}



/* Entry: 109aad4ac; end: 109aada9f;  */

void FUN_109aad4ac(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  uVar9 = *(uint *)(param_1 + 0x44);
  if (param_2 == (byte *)0x0) {
    pbVar11 = (byte *)0x0;
  }
  else {
    pbVar11 = (byte *)0x0;
    if (*param_2 != 0) {
      pbVar11 = param_2;
    }
  }
  if ((uVar9 & 7) < 5) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    uVar9 = 0x25;
    if (pbVar11 != (byte *)0x0) {
      uVar9 = 0x26;
      goto LAB_109aad518;
    }
LAB_109aad594:
    uVar4 = 0;
    uVar2 = 0;
    if (param_3 != 0) goto LAB_109aad534;
LAB_109aad59c:
    uVar4 = uVar2;
    iVar15 = 0;
    iVar5 = 0;
    if ((uVar9 >> 3 & 1) != 0) goto LAB_109aad5a4;
LAB_109aad544:
    pbVar6 = param_1;
    FUN_109ab3000();
    pbVar14 = pbVar6;
    iVar15 = iVar5;
    if ((uVar9 & 7) != 6) {
      *pbVar6 = 0x2d;
      pbVar14 = pbVar6 + 1;
      if (param_3 != 0) {
        pbVar6[1] = 0x20;
        pbVar14 = pbVar6 + 2;
      }
    }
joined_r0x000109aad578:
    if (pbVar11 == (byte *)0x0) goto LAB_109aad738;
LAB_109aad604:
    if ((*pbVar11 != 0x5f) && (0x19 < (*pbVar11 & 0xffffffdf) - 0x41)) {
      puVar8 = (undefined4 *)0x28;
      func_0x000107c2ae8c();
      *puVar8 = 1;
      puStack_70 = puVar8 + 1;
      uStack_68 = 0x21;
      *(undefined2 *)(puVar8 + 9) = 0x5f;
      *(undefined8 *)(puVar8 + 3) = 0x7720747261747320;
      *(undefined8 *)(puVar8 + 1) = 0x7473756d2079654b;
      *(undefined8 *)(puVar8 + 7) = 0x20726f2072657474;
      *(undefined8 *)(puVar8 + 5) = 0x656c206120687469;
      FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f59a134,&UNK_10f598d74,0x5c8);
LAB_109aada00:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x109aada04);
      (*pcVar3)();
    }
    if (*(byte **)(param_1 + 0x88) <= pbVar14 + (int)uVar4) {
      uVar17 = (long)pbVar14 - *(long *)(param_1 + 0x80);
      lVar7 = ((long)*(byte **)(param_1 + 0x88) - *(long *)(param_1 + 0x80)) * 3;
      iVar16 = (int)uVar17;
      iVar10 = (int)((ulong)(lVar7 - (lVar7 >> 0x3f)) >> 1);
      iVar5 = uVar4 + iVar16;
      if ((int)(uVar4 + iVar16) <= iVar10) {
        iVar5 = iVar10;
      }
      lVar7 = (long)(iVar5 + 0x100);
      func_0x000107c2ae8c();
      *(long *)(param_1 + 0x78) = lVar7 + (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x80));
      if (0 < iVar16) {
        _memcpy(lVar7,*(long *)(param_1 + 0x80),uVar17 & 0x7fffffff);
      }
      *(long *)(param_1 + 0x80) = lVar7;
      *(long *)(param_1 + 0x88) = lVar7 + iVar5;
      pbVar14 = (byte *)(lVar7 + iVar16);
    }
    if (0 < (int)uVar4) {
      uVar17 = (ulong)uVar4;
      pbVar6 = pbVar14;
      do {
        bVar1 = *pbVar11;
        *pbVar6 = bVar1;
        if ((((byte)(bVar1 - 0x3a) < 0xf6) && (((bVar1 & 0xffffffdf) - 0x5b & 0xff) < 0xe6)) &&
           (uVar2 = bVar1 - 0x20,
           0x3f < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x8000000000002001U) == 0)) {
          puVar8 = (undefined4 *)0x58;
          func_0x000107c2ae8c();
          *(undefined8 *)(puVar8 + 7) = 0x6168706c61206e69;
          *(undefined8 *)(puVar8 + 5) = 0x61746e6f6320796c;
          *(undefined8 *)(puVar8 + 0xb) = 0x6574636172616863;
          *(undefined8 *)(puVar8 + 9) = 0x20636972656d756e;
          *(undefined8 *)(puVar8 + 0xf) = 0x202c5d392d305a2d;
          *(undefined8 *)(puVar8 + 0xd) = 0x417a2d615b207372;
          *(undefined8 *)(puVar8 + 0x13) = 0x27202720646e6120;
          *(undefined8 *)(puVar8 + 0x11) = 0x275f27202c272d27;
          *puVar8 = 1;
          puStack_70 = puVar8 + 1;
          uStack_68 = 0x50;
          *(undefined1 *)(puVar8 + 0x15) = 0;
          *(undefined8 *)(puVar8 + 3) = 0x6e6f2079616d2073;
          *(undefined8 *)(puVar8 + 1) = 0x656d616e2079654b;
          FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f59a134,&UNK_10f598d74,0x5d2);
          goto LAB_109aada00;
        }
        pbVar6 = pbVar6 + 1;
        uVar17 = uVar17 - 1;
        pbVar11 = pbVar11 + 1;
      } while (uVar17 != 0);
    }
    pbVar11 = pbVar14 + (int)uVar4;
    pbVar14 = pbVar11 + 1;
    *pbVar11 = 0x3a;
    if ((param_3 == 0) || ((uVar9 >> 3 & 1) != 0)) goto LAB_109aad738;
    pbVar14 = pbVar11 + 2;
    pbVar11[1] = 0x20;
  }
  else {
    if (((uVar9 & 7) == 6) != (pbVar11 != (byte *)0x0)) {
      puVar8 = (undefined4 *)0x5c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar8 + 0xb) = 0x70616d2061206f74;
      *(undefined8 *)(puVar8 + 9) = 0x2079656b20612074;
      *(undefined8 *)(puVar8 + 0xf) = 0x746e656d656c6520;
      *(undefined8 *)(puVar8 + 0xd) = 0x64646120726f202c;
      *(undefined8 *)(puVar8 + 0x13) = 0x716573206f742079;
      *(undefined8 *)(puVar8 + 0x11) = 0x656b206874697720;
      *(undefined8 *)(puVar8 + 3) = 0x6461206f74207470;
      *(undefined8 *)(puVar8 + 1) = 0x6d65747461206e41;
      *puVar8 = 1;
      puStack_70 = puVar8 + 1;
      uStack_68 = 0x55;
      *(undefined1 *)((long)puVar8 + 0x59) = 0;
      *(undefined8 *)((long)puVar8 + 0x51) = 0x65636e6575716573;
      *(undefined8 *)(puVar8 + 7) = 0x756f687469772074;
      *(undefined8 *)(puVar8 + 5) = 0x6e656d656c652064;
      FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f59a134,&UNK_10f598d74,0x596);
      goto LAB_109aada00;
    }
    if (pbVar11 == (byte *)0x0) goto LAB_109aad594;
LAB_109aad518:
    pbVar14 = pbVar11;
    _strlen();
    uVar4 = (uint)pbVar14;
    if (uVar4 == 0) {
      puVar8 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar8 = 1;
      puStack_70 = puVar8 + 1;
      uStack_68 = 0x13;
      *(undefined1 *)((long)puVar8 + 0x17) = 0;
      *(undefined4 *)((long)puVar8 + 0x13) = 0x7974706d;
      *(undefined8 *)(puVar8 + 3) = 0x6d65206e61207369;
      *(undefined8 *)(puVar8 + 1) = 0x2079656b20656854;
      FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f59a134,&UNK_10f598d74,0x5a2);
      goto LAB_109aada00;
    }
    if (0x1000 < (int)uVar4) {
      puVar8 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar8 = 1;
      puStack_70 = puVar8 + 1;
      uStack_68 = 0x13;
      *(undefined1 *)((long)puVar8 + 0x17) = 0;
      *(undefined4 *)((long)puVar8 + 0x13) = 0x676e6f6c;
      *(undefined8 *)(puVar8 + 3) = 0x6c206f6f74207369;
      *(undefined8 *)(puVar8 + 1) = 0x2079656b20656854;
      FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f59a134,&UNK_10f598d74,0x5a5);
      goto LAB_109aada00;
    }
    uVar2 = uVar4;
    if (param_3 == 0) goto LAB_109aad59c;
LAB_109aad534:
    lVar7 = param_3;
    _strlen();
    iVar5 = (int)lVar7;
    iVar15 = iVar5;
    if ((uVar9 >> 3 & 1) == 0) goto LAB_109aad544;
LAB_109aad5a4:
    puVar12 = *(undefined1 **)(param_1 + 0x78);
    puVar13 = puVar12;
    if ((uVar9 >> 5 & 1) == 0) {
      puVar13 = puVar12 + 1;
      *puVar12 = 0x2c;
    }
    iVar5 = iVar15 + uVar4 + ((int)puVar13 - *(int *)(param_1 + 0x80));
    if ((iVar5 <= *(int *)(param_1 + 0x90)) || (iVar5 - *(int *)(param_1 + 0x40) < 0xb)) {
      pbVar14 = puVar13 + 1;
      *puVar13 = 0x20;
      goto joined_r0x000109aad578;
    }
    *(undefined1 **)(param_1 + 0x78) = puVar13;
    pbVar14 = param_1;
    FUN_109ab3000();
    if (pbVar11 != (byte *)0x0) goto LAB_109aad604;
LAB_109aad738:
    if (param_3 == 0) goto LAB_109aad7c8;
  }
  if (*(byte **)(param_1 + 0x88) <= pbVar14 + iVar15) {
    uVar17 = (long)pbVar14 - *(long *)(param_1 + 0x80);
    lVar7 = ((long)*(byte **)(param_1 + 0x88) - *(long *)(param_1 + 0x80)) * 3;
    iVar16 = (int)uVar17;
    iVar10 = (int)((ulong)(lVar7 - (lVar7 >> 0x3f)) >> 1);
    iVar5 = iVar15 + iVar16;
    if (iVar15 + iVar16 <= iVar10) {
      iVar5 = iVar10;
    }
    lVar7 = (long)(iVar5 + 0x100);
    func_0x000107c2ae8c();
    *(long *)(param_1 + 0x78) = lVar7 + (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x80));
    if (0 < iVar16) {
      _memcpy(lVar7,*(long *)(param_1 + 0x80),uVar17 & 0x7fffffff);
    }
    *(long *)(param_1 + 0x80) = lVar7;
    *(long *)(param_1 + 0x88) = lVar7 + iVar5;
    pbVar14 = (byte *)(lVar7 + iVar16);
  }
  _memcpy(pbVar14,param_3,(long)iVar15);
  pbVar14 = pbVar14 + iVar15;
LAB_109aad7c8:
  *(byte **)(param_1 + 0x78) = pbVar14;
  *(uint *)(param_1 + 0x44) = uVar9 & 0xffffffdf;
  return;
}



/* Entry: 109aadaa0; end: 109aadcf3;  */

/* WARNING: Removing unreachable block (ram,0x000109a4cb84) */

void FUN_109aadaa0(int *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (int *)0x0) {
    uVar10 = 0xffffffe5;
  }
  else {
    if (*param_1 == 0x4c4d4159) {
      if ((param_2 != (uint *)0x0) && (param_3 != (undefined8 *)0x0)) {
        uVar1 = *param_2 & 7;
        if (uVar1 - 1 < 2) {
          param_3[4] = param_2;
          param_3[5] = param_2 + 0x10;
          param_3[3] = param_2;
          param_3[1] = 0;
        }
        else {
          if (uVar1 != 0) {
            if (uVar1 == 5) {
              lVar6 = *(long *)(param_2 + 4);
              if (param_3 != (undefined8 *)0x0) {
                param_3[5] = 0;
                param_3[4] = 0;
                param_3[3] = 0;
                param_3[2] = 0;
                param_3[1] = 0;
                if (lVar6 != 0) {
                  *(undefined4 *)param_3 = 0x40;
                  param_3[1] = lVar6;
                  plVar8 = *(long **)(lVar6 + 0x58);
                  if (plVar8 == (long *)0x0) {
                    param_3[7] = 0;
                    param_3[3] = 0;
                    param_3[2] = 0;
                    param_3[5] = 0;
                    param_3[4] = 0;
                    *(undefined4 *)(param_3 + 6) = 0;
                  }
                  else {
                    lVar9 = *plVar8;
                    lVar7 = plVar8[3];
                    param_3[3] = lVar7;
                    iVar2 = *(int *)(lVar6 + 0x2c);
                    param_3[7] = *(long *)(lVar9 + 0x18) +
                                 (long)((*(int *)(lVar9 + 0x14) + -1) * iVar2);
                    *(int *)(param_3 + 6) = (int)plVar8[2];
                    iVar3 = *(int *)((long)plVar8 + 0x14);
                    param_3[2] = plVar8;
                    param_3[4] = lVar7;
                    param_3[5] = lVar7 + iVar3 * iVar2;
                  }
                  return;
                }
              }
              puVar5 = (undefined4 *)0x8;
              func_0x000107c2ae8c();
              *puVar5 = 1;
              puStack_30 = puVar5 + 1;
              *(undefined1 *)puStack_30 = 0;
              uStack_28 = 0;
              FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f596848,&UNK_10f596553,0x3b1);
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x109a4cc10);
              (*pcVar4)();
            }
            puVar5 = (undefined4 *)0x40;
            func_0x000107c2ae8c();
            *(undefined8 *)(puVar5 + 3) = 0x68732065646f6e20;
            *(undefined8 *)(puVar5 + 1) = 0x656c696620656854;
            *puVar5 = 1;
            puStack_30 = puVar5 + 1;
            uStack_28 = 0x38;
            *(undefined1 *)(puVar5 + 0xf) = 0;
            *(undefined8 *)(puVar5 + 7) = 0x6972656d756e2061;
            *(undefined8 *)(puVar5 + 5) = 0x20656220646c756f;
            *(undefined8 *)(puVar5 + 0xb) = 0x206120726f207261;
            *(undefined8 *)(puVar5 + 9) = 0x6c616373206c6163;
            *(undefined8 *)(puVar5 + 0xd) = 0x65636e6575716573;
            FUN_109ac3188(0xfffffffb,&puStack_30,&UNK_10f5991a4,&UNK_10f598d74,0xc8f);
            goto LAB_109aadc74;
          }
          param_3[5] = 0;
          param_3[4] = 0;
          param_3[7] = 0;
          param_3[6] = 0;
          param_3[1] = 0;
          *param_3 = 0;
          param_3[3] = 0;
          param_3[2] = 0;
        }
        return;
      }
      puVar5 = (undefined4 *)0x30;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar5 + 3) = 0x206f74207265746e;
      *(undefined8 *)(puVar5 + 1) = 0x696f70206c6c754e;
      *puVar5 = 1;
      puStack_30 = puVar5 + 1;
      uStack_28 = 0x2a;
      *(undefined1 *)((long)puVar5 + 0x2e) = 0;
      *(undefined8 *)(puVar5 + 7) = 0x65646f6e20656c69;
      *(undefined8 *)(puVar5 + 5) = 0x6620656372756f73;
      *(undefined8 *)((long)puVar5 + 0x26) = 0x7265646165722072;
      *(undefined8 *)((long)puVar5 + 0x1e) = 0x6f2065646f6e2065;
      FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f5991a4,&UNK_10f598d74,0xc7b);
      goto LAB_109aadc74;
    }
    uVar10 = 0xfffffffb;
  }
  puVar5 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar5 = 1;
  puStack_30 = puVar5 + 1;
  uStack_28 = 0x1f;
  *(undefined1 *)((long)puVar5 + 0x23) = 0;
  *(undefined8 *)(puVar5 + 3) = 0x207265746e696f70;
  *(undefined8 *)(puVar5 + 1) = 0x2064696c61766e49;
  *(undefined8 *)((long)puVar5 + 0x1b) = 0x656761726f747320;
  *(undefined8 *)((long)puVar5 + 0x13) = 0x656c6966206f7420;
  FUN_109ac3188(uVar10,&puStack_30,&UNK_10f5991a4,&UNK_10f598d74,0xc78);
LAB_109aadc74:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109aadc78);
  (*pcVar4)();
}



/* Entry: 109aadcf4; end: 109aae2f3;  */

void FUN_109aadcf4(int *param_1,long param_2,uint param_3,long param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  double *pdVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  double dVar18;
  undefined4 *puStack_468;
  undefined8 uStack_460;
  uint auStack_458 [256];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == (int *)0x0) {
    uVar15 = 0xffffffe5;
  }
  else {
    if (*param_1 == 0x4c4d4159) {
      if ((param_2 == 0) || (param_4 == 0)) {
        puVar6 = (undefined4 *)0x30;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar6 + 3) = 0x206f74207265746e;
        *(undefined8 *)(puVar6 + 1) = 0x696f70206c6c754e;
        *puVar6 = 1;
        puStack_468 = puVar6 + 1;
        uStack_460 = 0x2b;
        *(undefined1 *)((long)puVar6 + 0x2f) = 0;
        *(undefined8 *)(puVar6 + 7) = 0x6e69747365642072;
        *(undefined8 *)(puVar6 + 5) = 0x6f20726564616572;
        *(undefined8 *)((long)puVar6 + 0x27) = 0x7961727261206e6f;
        *(undefined8 *)((long)puVar6 + 0x1f) = 0x6974616e69747365;
        FUN_109ac3188(0xffffffe5,&puStack_468,&UNK_10f59921b,&UNK_10f598d74,0xc9e);
      }
      else {
        if ((param_3 == 1) || (*(long *)(param_2 + 8) != 0)) {
          FUN_109aace64(param_5,auStack_458);
          iVar7 = 0;
          do {
            do {
            } while ((int)param_5 < 1);
            uVar14 = 0;
            do {
              uVar2 = auStack_458[uVar14 * 2];
              uVar3 = auStack_458[uVar14 * 2 + 1];
              iVar4 = (uVar3 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar3 & 7) << 1) & 3);
              pdVar8 = (double *)(param_4 + (int)((iVar7 + iVar4) - 1U & -iVar4));
              uVar1 = param_3;
              if (0 < (int)uVar2) {
                uVar9 = 0;
                puVar12 = *(uint **)(param_2 + 0x18);
                do {
                  if ((*puVar12 & 7) != 2) {
                    if ((*puVar12 & 7) == 1) {
                      fVar17 = (float)puVar12[4];
                      if ((int)uVar3 < 4) {
                        if ((int)uVar3 < 2) {
                          if (uVar3 == 0) goto LAB_109aadf24;
                          if (uVar3 == 1) goto LAB_109aade4c;
                        }
                        else {
                          if (uVar3 == 2) goto LAB_109aadf58;
                          if (uVar3 == 3) goto LAB_109aadeec;
                        }
                      }
                      else if ((int)uVar3 < 6) {
                        if (uVar3 == 4) goto LAB_109aadf44;
                        if (uVar3 == 5) {
                          fVar17 = (float)(int)fVar17;
                          goto LAB_109aade9c;
                        }
                      }
                      else {
                        if (uVar3 == 6) {
                          dVar18 = (double)(int)fVar17;
                          goto LAB_109aadf74;
                        }
                        if (uVar3 == 7) goto LAB_109aadf10;
                      }
LAB_109aae008:
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                        return;
                      }
                      ___stack_chk_fail();
LAB_109aae1e4:
                      puVar6 = (undefined4 *)0x44;
                      func_0x000107c2ae8c();
                      *(undefined8 *)(puVar6 + 3) = 0x696c732065636e65;
                      *(undefined8 *)(puVar6 + 1) = 0x7571657320656854;
                      *puVar6 = 1;
                      puStack_468 = puVar6 + 1;
                      uStack_460 = 0x3c;
                      *(undefined1 *)(puVar6 + 0x10) = 0;
                      *(undefined8 *)(puVar6 + 7) = 0x2074696620746f6e;
                      *(undefined8 *)(puVar6 + 5) = 0x2073656f64206563;
                      *(undefined8 *)(puVar6 + 0xb) = 0x65626d756e207265;
                      *(undefined8 *)(puVar6 + 9) = 0x6765746e69206e61;
                      *(undefined8 *)(puVar6 + 0xe) = 0x7364726f63657220;
                      *(undefined8 *)(puVar6 + 0xc) = 0x666f207265626d75;
                      FUN_109ac3188(0xffffff37,&puStack_468,&UNK_10f59921b,&UNK_10f598d74,0xd21);
                    }
                    else {
                      puVar6 = (undefined4 *)0x34;
                      func_0x000107c2ae8c();
                      *(undefined8 *)(puVar6 + 3) = 0x656c652065636e65;
                      *(undefined8 *)(puVar6 + 1) = 0x7571657320656854;
                      *puVar6 = 1;
                      puStack_468 = puVar6 + 1;
                      uStack_460 = 0x2e;
                      *(undefined1 *)((long)puVar6 + 0x32) = 0;
                      *(undefined8 *)(puVar6 + 7) = 0x756e206120746f6e;
                      *(undefined8 *)(puVar6 + 5) = 0x20736920746e656d;
                      *(undefined8 *)((long)puVar6 + 0x2a) = 0x72616c616373206c;
                      *(undefined8 *)((long)puVar6 + 0x22) = 0x61636972656d756e;
                      FUN_109ac3188(0xfffffffe,&puStack_468,&UNK_10f59921b,&UNK_10f598d74,0xd13);
                    }
                    goto LAB_109aae24c;
                  }
                  dVar18 = *(double *)(puVar12 + 4);
                  if ((int)uVar3 < 4) {
                    if ((int)uVar3 < 2) {
                      if (uVar3 == 0) {
                        fVar17 = (float)(long)(double)(long)dVar18;
LAB_109aadf24:
                        uVar1 = (uint)fVar17 & ((int)fVar17 >> 0x1f ^ 0xffffffffU);
                        if (0xfe < (int)uVar1) {
                          uVar1 = 0xff;
                        }
                        uVar10 = (undefined1)uVar1;
                      }
                      else {
                        if (uVar3 != 1) goto LAB_109aae008;
                        fVar17 = (float)(long)(double)(long)dVar18;
LAB_109aade4c:
                        if ((int)fVar17 < -0x7f) {
                          fVar17 = -NAN;
                        }
                        if (0x7e < (int)fVar17) {
                          fVar17 = 1.77965e-43;
                        }
                        uVar10 = SUB41(fVar17,0);
                      }
                      *(undefined1 *)pdVar8 = uVar10;
                      lVar13 = 1;
                    }
                    else {
                      if (uVar3 == 2) {
                        fVar17 = (float)(long)(double)(long)dVar18;
LAB_109aadf58:
                        uVar1 = (uint)fVar17 & ((int)fVar17 >> 0x1f ^ 0xffffffffU);
                        if (0xfffe < (int)uVar1) {
                          uVar1 = 0xffff;
                        }
                        uVar11 = (undefined2)uVar1;
                      }
                      else {
                        if (uVar3 != 3) goto LAB_109aae008;
                        fVar17 = (float)(long)(double)(long)dVar18;
LAB_109aadeec:
                        if ((int)fVar17 < -0x7fff) {
                          fVar17 = -NAN;
                        }
                        if (0x7ffe < (int)fVar17) {
                          fVar17 = 4.59163e-41;
                        }
                        uVar11 = SUB42(fVar17,0);
                      }
                      *(undefined2 *)pdVar8 = uVar11;
                      lVar13 = 2;
                    }
                  }
                  else if ((int)uVar3 < 6) {
                    if (uVar3 == 4) {
                      fVar17 = (float)(long)(double)(long)dVar18;
LAB_109aadf44:
                      *(float *)pdVar8 = fVar17;
                    }
                    else {
                      if (uVar3 != 5) goto LAB_109aae008;
                      fVar17 = (float)dVar18;
LAB_109aade9c:
                      *(float *)pdVar8 = fVar17;
                    }
                    lVar13 = 4;
                  }
                  else {
                    if (uVar3 == 6) {
LAB_109aadf74:
                      *pdVar8 = dVar18;
                    }
                    else {
                      if (uVar3 != 7) goto LAB_109aae008;
                      fVar17 = (float)(long)(double)(long)dVar18;
LAB_109aadf10:
                      *pdVar8 = (double)(long)(int)fVar17;
                    }
                    lVar13 = 8;
                  }
                  puVar12 = (uint *)(*(long *)(param_2 + 0x18) + 0x20);
                  *(uint **)(param_2 + 0x18) = puVar12;
                  if (*(uint **)(param_2 + 0x28) <= puVar12) {
                    iVar7 = *(int *)(*(long *)(param_2 + 8) + 0x2c);
                    lVar16 = *(long *)(*(long *)(param_2 + 0x10) + 8);
                    puVar12 = *(uint **)(lVar16 + 0x18);
                    iVar4 = *(int *)(lVar16 + 0x14);
                    *(long *)(param_2 + 0x10) = lVar16;
                    *(uint **)(param_2 + 0x18) = puVar12;
                    *(uint **)(param_2 + 0x20) = puVar12;
                    *(uint **)(param_2 + 0x28) = (uint *)((long)puVar12 + (long)iVar4 * (long)iVar7)
                    ;
                  }
                  if (param_3 - 1 == uVar9) {
                    if ((param_3 == uVar2) && ((int)param_5 + -1 == (int)uVar14)) {
                      if (*(long *)(param_2 + 8) == 0) {
                        *(uint **)(param_2 + 0x18) = puVar12 + -8;
                      }
                      goto LAB_109aae008;
                    }
                    goto LAB_109aae1e4;
                  }
                  pdVar8 = (double *)((long)pdVar8 + lVar13);
                  uVar9 = uVar9 + 1;
                  uVar1 = param_3 - uVar2;
                } while (uVar2 != uVar9);
              }
              param_3 = uVar1;
              iVar7 = (int)pdVar8 - (int)param_4;
              uVar14 = uVar14 + 1;
            } while (uVar14 != (param_5 & 0xffffffff));
          } while( true );
        }
        puVar6 = (undefined4 *)0x38;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar6 + 3) = 0x6575716573206465;
        *(undefined8 *)(puVar6 + 1) = 0x6461657220656854;
        *puVar6 = 1;
        puStack_468 = puVar6 + 1;
        uStack_460 = 0x33;
        *(undefined4 *)((long)puVar6 + 0x33) = 0x31206562;
        *(undefined1 *)((long)puVar6 + 0x37) = 0;
        *(undefined8 *)(puVar6 + 7) = 0x2c72616c61637320;
        *(undefined8 *)(puVar6 + 5) = 0x612073692065636e;
        *(undefined8 *)(puVar6 + 0xb) = 0x62207473756d206e;
        *(undefined8 *)(puVar6 + 9) = 0x656c207375687420;
        FUN_109ac3188(0xffffff37,&puStack_468,&UNK_10f59921b,&UNK_10f598d74,0xca1);
      }
      goto LAB_109aae24c;
    }
    uVar15 = 0xfffffffb;
  }
  puVar6 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar6 = 1;
  puStack_468 = puVar6 + 1;
  uStack_460 = 0x1f;
  *(undefined1 *)((long)puVar6 + 0x23) = 0;
  *(undefined8 *)(puVar6 + 3) = 0x207265746e696f70;
  *(undefined8 *)(puVar6 + 1) = 0x2064696c61766e49;
  *(undefined8 *)((long)puVar6 + 0x1b) = 0x656761726f747320;
  *(undefined8 *)((long)puVar6 + 0x13) = 0x656c6966206f7420;
  FUN_109ac3188(uVar15,&puStack_468,&UNK_10f59921b,&UNK_10f598d74,0xc9b);
LAB_109aae24c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109aae250);
  (*pcVar5)();
}



/* Entry: 109aae2f4; end: 109aae40b;  */

void FUN_109aae2f4(undefined8 param_1,uint *param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [64];
  
  if ((param_2 != (uint *)0x0) && (param_3 != 0)) {
    FUN_109aadaa0(param_1,param_2,auStack_70);
    if ((*param_2 & 7) == 5) {
      uVar3 = *(undefined4 *)(*(long *)(param_2 + 4) + 0x28);
    }
    else {
      uVar3 = 1;
    }
    FUN_109aadcf4(param_1,auStack_70,uVar3,param_3,param_4);
    return;
  }
  puVar2 = (undefined4 *)0x3c;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar2 + 3) = 0x6f7420737265746e;
  *(undefined8 *)(puVar2 + 1) = 0x696f70206c6c754e;
  *puVar2 = 1;
  puStack_80 = puVar2 + 1;
  uStack_78 = 0x36;
  *(undefined1 *)((long)puVar2 + 0x3a) = 0;
  *(undefined8 *)(puVar2 + 7) = 0x646f6e20656c6966;
  *(undefined8 *)(puVar2 + 5) = 0x20656372756f7320;
  *(undefined8 *)(puVar2 + 0xb) = 0x6e6f6974616e6974;
  *(undefined8 *)(puVar2 + 9) = 0x73656420726f2065;
  *(undefined8 *)((long)puVar2 + 0x32) = 0x7961727261206e6f;
  FUN_109ac3188(0xffffffe5,&puStack_80,&UNK_10f599331,&UNK_10f598d74,0xd2f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109aae3dc);
  (*pcVar1)();
}



/* Entry: 109aae40c; end: 109aae493;  */

long * FUN_109aae40c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(*param_1 + 0x18);
  FUN_109ab22b0();
  if (lVar4 != 0) {
    lVar2 = *(long *)(lVar4 + 8);
    lVar3 = *(long *)(lVar4 + 0x10);
    plVar1 = (long *)0x11382bbc0;
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 0x10);
    }
    *plVar1 = lVar3;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar2;
      lVar2 = lRam000000011374c7e8;
    }
    lRam000000011374c7e8 = lVar2;
    if (lRam000000011382bbc0 == 0 || lRam000000011374c7e8 == 0) {
      lRam000000011374c7e8 = 0;
      lRam000000011382bbc0 = 0;
    }
    _free(*(undefined8 *)(lVar4 + -8));
  }
  return param_1;
}



/* Entry: 109aae494; end: 109aae4ab;  */

bool FUN_109aae494(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(short *)(param_1 + 2) == 0x4299;
  }
  return bVar1;
}



/* Entry: 109aae4ac; end: 109aae567;  */

void FUN_109aae4ac(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    return;
  }
  puVar2 = (undefined4 *)0x18;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x13;
  *(undefined1 *)((long)puVar2 + 0x17) = 0;
  *(undefined4 *)((long)puVar2 + 0x13) = 0x7265746e;
  *(undefined8 *)(puVar2 + 3) = 0x6e696f7020656c62;
  *(undefined8 *)(puVar2 + 1) = 0x756f64204c4c554e;
  FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f59a1db,&UNK_10f598d74,0xf9c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109aae538);
  (*pcVar1)();
}



/* Entry: 109aae568; end: 109aaef53;  */

ulong FUN_109aae568(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  uint *puVar4;
  byte *pbVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  undefined4 *puStack_2c8;
  undefined8 uStack_2c0;
  byte *pbStack_2b8;
  undefined1 auStack_2b0 [64];
  int aiStack_270 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbStack_2b8 = (byte *)0x0;
  puVar4 = param_1;
  FUN_109aa9324(param_1,param_2,&DAT_10f2d43a7);
  if ((puVar4 == (uint *)0x0) || ((*puVar4 & 7) != 3)) {
    pbVar14 = (byte *)0x0;
  }
  else {
    pbVar14 = *(byte **)(puVar4 + 6);
  }
  puVar4 = param_1;
  FUN_109aa9324(param_1,param_2,&DAT_10f637eac);
  if (puVar4 == (uint *)0x0) {
    uVar13 = 0xffffffff;
  }
  else if ((*puVar4 & 7) == 2) {
    uVar13 = (ulong)(double)(long)*(double *)(puVar4 + 4);
  }
  else if ((*puVar4 & 7) == 1) {
    uVar13 = (ulong)puVar4[4];
  }
  else {
    uVar13 = 0x7fffffff;
  }
  puVar4 = param_1;
  FUN_109aa9324(param_1,param_2,&UNK_10f59a1e9);
  if ((((puVar4 == (uint *)0x0) || ((*puVar4 & 7) != 3)) || (pbVar14 == (byte *)0x0)) ||
     (((int)uVar13 == -1 || (lVar12 = *(long *)(puVar4 + 6), lVar12 == 0)))) {
    puVar9 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar9 + 3) = 0x6169746e65737365;
    *(undefined8 *)(puVar9 + 1) = 0x20666f20656d6f53;
    *puVar9 = 1;
    puStack_2c8 = puVar9 + 1;
    uStack_2c0 = 0x30;
    *(undefined1 *)(puVar9 + 0xd) = 0;
    *(undefined8 *)(puVar9 + 7) = 0x6972747461206563;
    *(undefined8 *)(puVar9 + 5) = 0x6e6575716573206c;
    *(undefined8 *)(puVar9 + 0xb) = 0x746e657362612065;
    *(undefined8 *)(puVar9 + 9) = 0x7261207365747562;
    FUN_109ac3188(0xfffffffe,&puStack_2c8,&UNK_10f59a21d,&UNK_10f598d74,0x107c);
    goto LAB_109aaee78;
  }
  if (*pbVar14 - 0x30 < 10) {
    pbVar5 = pbVar14;
    _strtol(pbVar14,&pbStack_2b8,0x10);
    if ((pbStack_2b8 != pbVar14) && (uVar10 = (uint)pbVar5, (uVar10 & 0xffff0000) == 0x42990000)) {
      uVar1 = 0x42991000;
      if ((uVar10 & 0xe00) != 0x200) {
        uVar1 = 0x42990000;
      }
      uVar17 = (ulong)(uVar10 & 0x8000 | uVar10 & 0x1ff | (uVar10 >> 0xc & 1) << 0xe | uVar1);
      goto LAB_109aae744;
    }
  }
  else {
    pbVar5 = pbVar14;
    _strstr(pbVar14,&DAT_10f49dfaa);
    uVar10 = 0x42990000;
    if (pbVar5 != (byte *)0x0) {
      uVar10 = 0x42991000;
    }
    pbVar5 = pbVar14;
    _strstr(pbVar14,&DAT_10f3b5bfe);
    if (pbVar5 != (byte *)0x0) {
      uVar10 = uVar10 | 0x4000;
    }
    pbVar5 = pbVar14;
    _strstr(pbVar14,&DAT_10f514134);
    if (pbVar5 != (byte *)0x0) {
      uVar10 = uVar10 | 0x8000;
    }
    uVar17 = (ulong)uVar10;
    _strstr(pbVar14,&DAT_10f59a247);
    if (pbVar14 == (byte *)0x0) {
      lVar18 = lVar12;
      FUN_109ab5dd0();
      uVar17 = (ulong)((uint)lVar18 | uVar10);
    }
LAB_109aae744:
    puVar4 = param_1;
    FUN_109aa9324(param_1,param_2,&UNK_10f59a24f);
    if ((puVar4 == (uint *)0x0) || ((*puVar4 & 7) != 3)) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(puVar4 + 6);
    }
    puVar4 = param_1;
    FUN_109aa9324(param_1,param_2,&UNK_10f59a259);
    if ((lVar18 != 0) != (puVar4 != (uint *)0x0)) {
      puVar9 = (undefined4 *)0x50;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar9 + 7) = 0x755f726564616568;
      *(undefined8 *)(puVar9 + 5) = 0x2220646e61202274;
      *(undefined8 *)(puVar9 + 0xb) = 0x6568742073692022;
      *(undefined8 *)(puVar9 + 9) = 0x617461645f726573;
      *(undefined8 *)(puVar9 + 0xf) = 0x746f206568742065;
      *(undefined8 *)(puVar9 + 0xd) = 0x6c696877202c6572;
      *(undefined8 *)((long)puVar9 + 0x46) = 0x746f6e2073692072;
      *(undefined8 *)((long)puVar9 + 0x3e) = 0x6568746f20656874;
      *puVar9 = 1;
      puStack_2c8 = puVar9 + 1;
      uStack_2c0 = 0x4a;
      *(undefined1 *)((long)puVar9 + 0x4e) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x645f726564616568;
      *(undefined8 *)(puVar9 + 1) = 0x2220666f20656e4f;
      FUN_109ac3188(0xfffffffe,&puStack_2c8,&UNK_10f59a21d,&UNK_10f598d74,0x10af);
      goto LAB_109aaee78;
    }
    bVar3 = puVar4 != (uint *)0x0;
    puVar6 = param_1;
    FUN_109aa9324(param_1,param_2,"rect");
    puVar7 = param_1;
    FUN_109aa9324(param_1,param_2,"origin");
    if (puVar6 != (uint *)0x0) {
      bVar3 = bVar3 + 1;
    }
    if (puVar7 != (uint *)0x0) {
      bVar3 = bVar3 + 1;
    }
    if (1 < bVar3) {
      puVar9 = (undefined4 *)0x48;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar9 + 3) = 0x6165682220666f20;
      *(undefined8 *)(puVar9 + 1) = 0x656e6f20796c6e4f;
      *(undefined8 *)(puVar9 + 7) = 0x202c22617461645f;
      *(undefined8 *)(puVar9 + 5) = 0x726573755f726564;
      *(undefined8 *)(puVar9 + 0xb) = 0x6769726f2220646e;
      *(undefined8 *)(puVar9 + 9) = 0x6120227463657222;
      *puVar9 = 1;
      puStack_2c8 = puVar9 + 1;
      uStack_2c0 = 0x42;
      *(undefined1 *)((long)puVar9 + 0x46) = 0;
      *(undefined2 *)(puVar9 + 0x11) = 0x7275;
      *(undefined8 *)(puVar9 + 0xf) = 0x63636f2079616d20;
      *(undefined8 *)(puVar9 + 0xd) = 0x7367617420226e69;
      FUN_109ac3188(0xfffffffe,&puStack_2c8,&UNK_10f59a21d,&UNK_10f598d74,0x10b5);
      goto LAB_109aaee78;
    }
    if (lVar18 == 0) {
      lVar8 = 0x68;
      if (puVar7 == (uint *)0x0) {
        lVar8 = 0x60;
      }
      lVar15 = 0x80;
      if (puVar6 == (uint *)0x0) {
        lVar15 = lVar8;
      }
    }
    else {
      lVar8 = lVar18;
      FUN_109ab5edc(lVar18,0x60);
      lVar15 = (long)(int)lVar8;
    }
    lVar8 = lVar12;
    FUN_109ab5edc(lVar12,0);
    FUN_109a4c4b8(uVar17,lVar15,(long)(int)lVar8,*(undefined8 *)(param_1 + 6));
    if (puVar4 == (uint *)0x0) {
      if (puVar6 == (uint *)0x0) {
        if (puVar7 != (uint *)0x0) {
          puVar4 = param_1;
          FUN_109aa9324(param_1,puVar7,&DAT_10f62b0e2);
          if (puVar4 == (uint *)0x0) {
            uVar10 = 0;
          }
          else if ((*puVar4 & 7) == 2) {
            uVar10 = (uint)(long)(double)(long)*(double *)(puVar4 + 4);
          }
          else if ((*puVar4 & 7) == 1) {
            uVar10 = puVar4[4];
          }
          else {
            uVar10 = 0x7fffffff;
          }
          *(uint *)(uVar17 + 0x60) = uVar10;
          puVar4 = param_1;
          FUN_109aa9324(param_1,puVar7,"y");
          if (puVar4 == (uint *)0x0) {
            uVar10 = 0;
          }
          else if ((*puVar4 & 7) == 2) {
            uVar10 = (uint)(long)(double)(long)*(double *)(puVar4 + 4);
          }
          else if ((*puVar4 & 7) == 1) {
            uVar10 = puVar4[4];
          }
          else {
            uVar10 = 0x7fffffff;
          }
          *(uint *)(uVar17 + 100) = uVar10;
        }
      }
      else {
        puVar4 = param_1;
        FUN_109aa9324(param_1,puVar6,&DAT_10f62b0e2);
        if (puVar4 == (uint *)0x0) {
          uVar10 = 0;
        }
        else if ((*puVar4 & 7) == 2) {
          uVar10 = (uint)(long)(double)(long)*(double *)(puVar4 + 4);
        }
        else if ((*puVar4 & 7) == 1) {
          uVar10 = puVar4[4];
        }
        else {
          uVar10 = 0x7fffffff;
        }
        *(uint *)(uVar17 + 0x60) = uVar10;
        puVar4 = param_1;
        FUN_109aa9324(param_1,puVar6,"y");
        if (puVar4 == (uint *)0x0) {
          uVar10 = 0;
        }
        else if ((*puVar4 & 7) == 2) {
          uVar10 = (uint)(long)(double)(long)*(double *)(puVar4 + 4);
        }
        else if ((*puVar4 & 7) == 1) {
          uVar10 = puVar4[4];
        }
        else {
          uVar10 = 0x7fffffff;
        }
        *(uint *)(uVar17 + 100) = uVar10;
        puVar4 = param_1;
        FUN_109aa9324(param_1,puVar6,"width");
        if (puVar4 == (uint *)0x0) {
          uVar10 = 0;
        }
        else if ((*puVar4 & 7) == 2) {
          uVar10 = (uint)(long)(double)(long)*(double *)(puVar4 + 4);
        }
        else if ((*puVar4 & 7) == 1) {
          uVar10 = puVar4[4];
        }
        else {
          uVar10 = 0x7fffffff;
        }
        *(uint *)(uVar17 + 0x68) = uVar10;
        puVar4 = param_1;
        FUN_109aa9324(param_1,puVar6,"height");
        if (puVar4 == (uint *)0x0) {
          uVar10 = 0;
        }
        else if ((*puVar4 & 7) == 2) {
          uVar10 = (uint)(long)(double)(long)*(double *)(puVar4 + 4);
        }
        else if ((*puVar4 & 7) == 1) {
          uVar10 = puVar4[4];
        }
        else {
          uVar10 = 0x7fffffff;
        }
        *(uint *)(uVar17 + 0x6c) = uVar10;
        puVar4 = param_1;
        FUN_109aa9324(param_1,param_2,&DAT_10f68f0f0);
        if (puVar4 == (uint *)0x0) {
          uVar10 = 0;
        }
        else if ((*puVar4 & 7) == 2) {
          uVar10 = (uint)(long)(double)(long)*(double *)(puVar4 + 4);
        }
        else if ((*puVar4 & 7) == 1) {
          uVar10 = puVar4[4];
        }
        else {
          uVar10 = 0x7fffffff;
        }
        *(uint *)(uVar17 + 0x70) = uVar10;
      }
    }
    else {
      FUN_109aae2f4(param_1,puVar4,uVar17 + 0x60,lVar18);
    }
    FUN_109a4dcc0(uVar17,0,uVar13,0);
    lVar18 = lVar12;
    FUN_109aace64(lVar12,aiStack_270);
    if ((int)lVar18 < 1) {
      iVar16 = 0;
    }
    else {
      uVar11 = 0;
      iVar16 = 0;
      do {
        iVar16 = aiStack_270[uVar11] + iVar16;
        uVar11 = uVar11 + 2;
      } while (uVar11 < (uint)((int)lVar18 << 1));
    }
    puVar4 = param_1;
    FUN_109aa9324(param_1,param_2,"data");
    if (puVar4 == (uint *)0x0) {
      puVar9 = (undefined4 *)0x30;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar9 + 3) = 0x6920617461642065;
      *(undefined8 *)(puVar9 + 1) = 0x67616d6920656854;
      *puVar9 = 1;
      puStack_2c8 = puVar9 + 1;
      uStack_2c0 = 0x2b;
      *(undefined1 *)((long)puVar9 + 0x2f) = 0;
      *(undefined8 *)(puVar9 + 7) = 0x66206e6920646e75;
      *(undefined8 *)(puVar9 + 5) = 0x6f6620746f6e2073;
      *(undefined8 *)((long)puVar9 + 0x27) = 0x656761726f747320;
      *(undefined8 *)((long)puVar9 + 0x1f) = 0x656c6966206e6920;
      FUN_109ac3188(0xfffffffe,&puStack_2c8,&UNK_10f59a21d,&UNK_10f598d74,0x10df);
      goto LAB_109aaee78;
    }
    if ((*puVar4 & 7) < 5) {
      uVar10 = (uint)((*puVar4 & 7) != 0);
    }
    else {
      uVar10 = *(uint *)(*(long *)(puVar4 + 4) + 0x28);
    }
    if (uVar10 != iVar16 * (int)uVar13) {
      puVar9 = (undefined4 *)0x3c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar9 + 3) = 0x747320666f207265;
      *(undefined8 *)(puVar9 + 1) = 0x626d756e20656854;
      *puVar9 = 1;
      puStack_2c8 = puVar9 + 1;
      uStack_2c0 = 0x37;
      *(undefined1 *)((long)puVar9 + 0x3b) = 0;
      *(undefined8 *)(puVar9 + 7) = 0x6f642073746e656d;
      *(undefined8 *)(puVar9 + 5) = 0x656c65206465726f;
      *(undefined8 *)(puVar9 + 0xb) = 0x206f742068637461;
      *(undefined8 *)(puVar9 + 9) = 0x6d20746f6e207365;
      *(undefined8 *)((long)puVar9 + 0x33) = 0x22746e756f632220;
      FUN_109ac3188(0xfffffffe,&puStack_2c8,&UNK_10f59a21d,&UNK_10f598d74,0x10e2);
      goto LAB_109aaee78;
    }
    FUN_109aadaa0(param_1,puVar4,auStack_2b0);
    for (lVar18 = *(long *)(uVar17 + 0x58);
        (lVar18 != 0 &&
        (FUN_109aadcf4(param_1,auStack_2b0,*(int *)(lVar18 + 0x14) * iVar16,
                       *(undefined8 *)(lVar18 + 0x18),lVar12), lVar18 != **(long **)(uVar17 + 0x58))
        ); lVar18 = *(long *)(lVar18 + 8)) {
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return uVar17;
    }
    ___stack_chk_fail();
  }
  puVar9 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  puStack_2c8 = puVar9 + 1;
  uStack_2c0 = 0x1e;
  *(undefined1 *)((long)puVar9 + 0x22) = 0;
  *(undefined8 *)(puVar9 + 3) = 0x616c662065636e65;
  *(undefined8 *)(puVar9 + 1) = 0x7571657320656854;
  *(undefined8 *)((long)puVar9 + 0x1a) = 0x64696c61766e6920;
  *(undefined8 *)((long)puVar9 + 0x12) = 0x657261207367616c;
  FUN_109ac3188(0xfffffffe,&puStack_2c8,&UNK_10f59a21d,&UNK_10f598d74,0x108d);
LAB_109aaee78:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109aaee7c);
  (*pcVar2)();
}



/* Entry: 109aaef54; end: 109aaf0af;  */

/* WARNING: Removing unreachable block (ram,0x000109ab6020) */

uint * FUN_109aaef54(uint *param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                    undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  uint *puVar11;
  int iVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  undefined4 *puStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  uint *puStack_188;
  uint *puStack_180;
  uint *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  uint auStack_148 [32];
  char acStack_c8 [8];
  undefined1 auStack_c0 [96];
  long lStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  pcVar5 = (char *)&uStack_50;
  uStack_50 = param_4;
  lStack_48 = param_5;
  FUN_109aa88f0(pcVar5,&UNK_10f59a394);
  if ((pcVar5 != (char *)0x0) &&
     ((((*pcVar5 != '0' || (pcVar5[1] != '\0')) &&
       (pcVar6 = pcVar5, _strcmp(pcVar5,&DAT_10f6842c6), (int)pcVar6 != 0)) &&
      ((pcVar6 = pcVar5, _strcmp(pcVar5,&DAT_10f4a504a), (int)pcVar6 != 0 &&
       (_strcmp(pcVar5,&DAT_10f328e70), (int)pcVar5 != 0)))))) {
    FUN_109aac02c(param_1,param_2,6,&UNK_10f59934f);
    FUN_109aac02c(param_1,&UNK_10f59a39e,5,0);
    FUN_109a502a8(&lStack_60,param_3,0x7fffffff);
    while (lStack_60 != 0) {
      FUN_109ab5fd4(param_1,0,lStack_60,param_4,param_5,uStack_58);
      FUN_109a503b8(&lStack_60);
    }
    FUN_109aac19c(param_1);
    FUN_109aac19c(param_1);
    return param_1;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_158 = param_4;
  uStack_150 = param_5;
  FUN_109aac02c(param_1,param_2,6,&UNK_10f59933f);
  puVar14 = auStack_148;
  puVar7 = param_3;
  FUN_109ab6208(param_3,&UNK_10f59a1e9,&uStack_158,0);
  acStack_c8[0] = '\0';
  uVar1 = *param_3;
  if ((uVar1 >> 0xe & 1) != 0) {
    pcVar5 = acStack_c8;
    _strlen();
    builtin_strncpy(acStack_c8 + (long)pcVar5," closed",8);
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    pcVar5 = acStack_c8;
    _strlen();
    builtin_strncpy(acStack_c8 + (long)pcVar5," hol",4);
    (pcVar5 + (long)(acStack_c8 + 4))[0] = 'e';
    (pcVar5 + (long)(acStack_c8 + 4))[1] = '\0';
  }
  if ((uVar1 & 0x3000) == 0x1000) {
    pcVar5 = acStack_c8;
    _strlen();
    builtin_strncpy(acStack_c8 + (long)pcVar5," cur",4);
    builtin_strncpy(pcVar5 + (long)(acStack_c8 + 3),"rve",4);
  }
  if (((uVar1 & 0xfff) == 0) && (param_3[0xb] != 1)) {
    pcVar5 = acStack_c8;
    _strlen();
    auStack_c0[(long)pcVar5] = 0;
    builtin_strncpy(acStack_c8 + (long)pcVar5," untyped",8);
  }
  pcVar5 = acStack_c8;
  if (acStack_c8[0] != '\0') {
    pcVar5 = acStack_c8 + 1;
  }
  FUN_109aac5ec(param_1,&DAT_10f2d43a7,pcVar5,1);
  FUN_109aac30c(param_1,&DAT_10f637eac,param_3[10]);
  FUN_109aac5ec(param_1,&UNK_10f59a1e9,puVar7,0);
  FUN_109ab642c(param_1,param_3,&uStack_158,0x60);
  puVar11 = (uint *)0xd;
  iVar12 = 0;
  FUN_109aac02c(param_1,"data");
  for (lVar15 = *(long *)(param_3 + 0x16); lVar15 != 0; lVar15 = *(long *)(lVar15 + 8)) {
    puVar11 = (uint *)(ulong)*(uint *)(lVar15 + 0x14);
    puVar8 = puVar7;
    FUN_109aac75c(param_1,*(undefined8 *)(lVar15 + 0x18));
    iVar12 = (int)puVar8;
    if (lVar15 == **(long **)(param_3 + 0x16)) break;
  }
  FUN_109aac19c(param_1);
  puVar8 = param_1;
  FUN_109aac19c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_109ab6208;
  uStack_190 = lVar15;
  puStack_188 = puVar7;
  puStack_180 = param_3;
  puStack_178 = param_1;
  puStack_170 = &stack0xfffffffffffffff0;
  FUN_109aa88f0();
  if (puVar11 == (uint *)0x0) {
    uVar2 = *puVar8;
    uVar3 = puVar8[0xb];
    uVar1 = uVar2 & 0xfff;
    if ((uVar1 != 0) || (uVar3 == 1)) {
      if ((uVar2 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar2 & 7) << 1) & 3) == uVar3) {
        uStack_190 = (ulong)((uVar1 >> 3) + 1);
        puStack_188 = (uint *)(long)(char)(&UNK_10e02e313)[(ulong)uVar1 & 7];
        _sprintf(puVar14,&UNK_10f59a453);
        if (*(char *)((long)puVar14 + 2) == '\0') {
          uVar13 = (ulong)((char)*puVar14 == '1');
        }
        else {
          uVar13 = 0;
        }
        return (uint *)((long)puVar14 + uVar13);
      }
      puVar9 = (undefined4 *)0x4c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar9 + 3) = 0x65636e6575716573;
      *(undefined8 *)(puVar9 + 1) = 0x20666f20657a6953;
      *(undefined8 *)(puVar9 + 7) = 0x735f6d656c652820;
      *(undefined8 *)(puVar9 + 5) = 0x746e656d656c6520;
      *(undefined8 *)(puVar9 + 0xb) = 0x7369736e6f636e69;
      *(undefined8 *)(puVar9 + 9) = 0x2073692029657a69;
      *puVar9 = 1;
      puStack_1a0 = puVar9 + 1;
      uStack_198 = 0x44;
      *(undefined1 *)(puVar9 + 0x12) = 0;
      puVar9[0x11] = 0x7367616c;
      *(undefined8 *)(puVar9 + 0xf) = 0x663e2d7165732068;
      *(undefined8 *)(puVar9 + 0xd) = 0x74697720746e6574;
      FUN_109ac3188(0xffffff2f,&puStack_1a0,&UNK_10f59a3f9,&UNK_10f598d74,0xffc);
      goto LAB_109ab63e0;
    }
    if (uVar3 - iVar12 == 0 || (int)uVar3 < iVar12) {
      puVar14 = (uint *)0x0;
    }
    else {
      if ((uVar3 - iVar12 & 3) == 0) {
        puVar10 = &UNK_10f59a44b;
      }
      else {
        puVar10 = &UNK_10f59a44f;
      }
      _sprintf(puVar14,puVar10);
    }
  }
  else {
    puVar7 = puVar11;
    FUN_109ab5edc();
    puVar14 = puVar11;
    if ((uint)puVar7 != puVar8[0xb]) {
      puVar9 = (undefined4 *)0x4c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar9 + 7) = 0x6620646574616c75;
      *(undefined8 *)(puVar9 + 5) = 0x636c616320746e65;
      *(undefined8 *)(puVar9 + 0xb) = 0x65687420646e6120;
      *(undefined8 *)(puVar9 + 9) = 0x22746422206d6f72;
      *(undefined8 *)(puVar9 + 0xf) = 0x6f6e206f6420657a;
      *(undefined8 *)(puVar9 + 0xd) = 0x69735f6d656c6520;
      *puVar9 = 1;
      puStack_1a0 = puVar9 + 1;
      uStack_198 = 0x47;
      *(undefined1 *)((long)puVar9 + 0x4b) = 0;
      *(undefined8 *)((long)puVar9 + 0x43) = 0x686374616d20746f;
      *(undefined8 *)(puVar9 + 3) = 0x6d656c6520666f20;
      *(undefined8 *)(puVar9 + 1) = 0x657a697320656854;
      FUN_109ac3188(0xffffff2f,&puStack_1a0,&UNK_10f59a3f9,&UNK_10f598d74,0xff6);
LAB_109ab63e0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109ab63e4);
      (*pcVar4)();
    }
  }
  return puVar14;
}



/* Entry: 109aaf0b0; end: 109aaf0bf;  */

/* WARNING: Removing unreachable block (ram,0x000109a4e394) */
/* WARNING: Removing unreachable block (ram,0x000109a4e3bc) */
/* WARNING: Removing unreachable block (ram,0x000109a4e3a4) */
/* WARNING: Removing unreachable block (ram,0x000109a4e3cc) */

ulong FUN_109aaf0b0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined4 *puStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  uint *puStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  uVar10 = 0;
  if ((param_1 == (uint *)0x0) || (uVar11 = (ulong)*param_1, *param_1 >> 0x10 != 0x4299)) {
    puVar6 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_b0 = puVar6 + 1;
    uStack_a8 = 0x17;
    *(undefined1 *)((long)puVar6 + 0x1b) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x65636e6575716573;
    *(undefined8 *)(puVar6 + 1) = 0x2064696c61766e49;
    *(undefined8 *)((long)puVar6 + 0x13) = 0x7265646165682065;
    FUN_109ac3188(0xfffffffb,&puStack_b0,&UNK_10f59690b,&UNK_10f596553,0x64a);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x12);
    if (lVar8 == 0) {
      puVar6 = (undefined4 *)0x1c;
      func_0x000107c2ae8c();
      *puVar6 = 1;
      puStack_b0 = puVar6 + 1;
      uStack_a8 = 0x14;
      *(undefined1 *)(puVar6 + 6) = 0;
      puVar6[5] = 0x7265746e;
      *(undefined8 *)(puVar6 + 3) = 0x696f702065676172;
      *(undefined8 *)(puVar6 + 1) = 0x6f7473204c4c554e;
      FUN_109ac3188(0xffffffe5,&puStack_b0,&UNK_10f59690b,&UNK_10f596553,0x650);
    }
    else {
      lVar12 = (long)(int)param_1[0xb];
      func_0x000109a4c934(0x3fffffff00000000,param_1);
      uVar3 = param_1[10];
      uVar1 = 0;
      if ((int)uVar3 < 1) {
        uVar1 = uVar3;
      }
      uVar5 = (uint)uVar10;
      if ((uVar5 <= uVar3) && ((uVar5 == 0 || (-uVar1 < uVar3)))) {
        FUN_109a4c4b8(uVar11,(long)(int)param_1[1],lVar12,lVar8);
        if (0 < (int)uVar5) {
          auStack_a0[0] = 0x40;
          plStack_90 = *(long **)(param_1 + 0x16);
          if (plStack_90 == (long *)0x0) {
            lStack_68 = 0;
            uStack_70 = 0;
            plStack_90 = (long *)0x0;
            lStack_78 = 0;
            lStack_80 = 0;
          }
          else {
            lStack_68 = *(long *)(*plStack_90 + 0x18) +
                        ((long)*(int *)(*plStack_90 + 0x14) + -1) * (long)(int)param_1[0xb];
            uStack_70 = (undefined4)plStack_90[2];
            lStack_80 = plStack_90[3];
            lStack_78 = lStack_80 +
                        (long)*(int *)((long)plStack_90 + 0x14) * (long)(int)param_1[0xb];
          }
          puStack_98 = param_1;
          lStack_88 = lStack_80;
          FUN_109a4cc44(auStack_a0,-uVar1,0);
          uVar7 = 0;
          lVar8 = lStack_88;
          plVar13 = plStack_90;
          if (lVar12 != 0) {
            uVar7 = (lStack_78 - lStack_88) / lVar12;
          }
          do {
            iVar9 = (int)uVar10;
            iVar2 = (int)uVar7;
            if (iVar9 <= (int)uVar7) {
              iVar2 = iVar9;
            }
            FUN_109a4dcc0(uVar11,lVar8,iVar2,0);
            plVar13 = (long *)plVar13[1];
            uVar7 = (ulong)*(uint *)((long)plVar13 + 0x14);
            uVar10 = (ulong)(uint)(iVar9 - iVar2);
            lVar8 = plVar13[3];
          } while (iVar9 - iVar2 != 0 && iVar2 <= iVar9);
        }
        return uVar11;
      }
      puVar6 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar6 = 1;
      puStack_b0 = puVar6 + 1;
      uStack_a8 = 0x12;
      *(undefined1 *)((long)puVar6 + 0x16) = 0;
      *(undefined2 *)(puVar6 + 5) = 0x6563;
      *(undefined8 *)(puVar6 + 3) = 0x696c732065636e65;
      *(undefined8 *)(puVar6 + 1) = 0x7571657320646142;
      FUN_109ac3188(0xffffff2d,&puStack_b0,&UNK_10f59690b,&UNK_10f596553,0x65b);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109a4e540);
  (*pcVar4)();
}



/* Entry: 109aaf0c0; end: 109aaf39b;  */

uint * FUN_109aaf0c0(uint *param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  puVar9 = param_1;
  FUN_109aa9324(param_1,param_2,&UNK_10f59a39e);
  if ((puVar9 != (uint *)0x0) && ((*puVar9 & 7) == 5)) {
    lVar7 = *(long *)(puVar9 + 4);
    iVar1 = *(int *)(lVar7 + 0x28);
    FUN_109a4cb14(lVar7,auStack_a0,0);
    if (iVar1 < 1) {
      puVar9 = (uint *)0x0;
    }
    else {
      puVar13 = (uint *)0x0;
      iVar12 = 0;
      puVar8 = (uint *)0x0;
      uVar11 = 0;
      puVar14 = (uint *)0x0;
      do {
        uVar6 = uStack_88;
        puVar3 = param_1;
        FUN_109ab2304(param_1,uStack_88,0);
        puVar9 = param_1;
        FUN_109aa9324(param_1,uVar6,&DAT_10f2e4590);
        if (puVar9 == (uint *)0x0) {
LAB_109aaf270:
          puVar4 = (undefined4 *)0x40;
          func_0x000107c2ae8c();
          *(undefined8 *)(puVar4 + 3) = 0x65636e6575716573;
          *(undefined8 *)(puVar4 + 1) = 0x20656874206c6c41;
          *puVar4 = 1;
          puStack_b0 = puVar4 + 1;
          uStack_a8 = 0x38;
          *(undefined1 *)(puVar4 + 0xf) = 0;
          *(undefined8 *)(puVar4 + 7) = 0x756f687320736564;
          *(undefined8 *)(puVar4 + 5) = 0x6f6e206565727420;
          *(undefined8 *)(puVar4 + 0xb) = 0x6576656c22206e69;
          *(undefined8 *)(puVar4 + 9) = 0x61746e6f6320646c;
          *(undefined8 *)(puVar4 + 0xd) = 0x646c65696620226c;
          FUN_109ac3188(0xffffff2c,&puStack_b0,&UNK_10f59a511,&UNK_10f598d74,0x110f);
          goto LAB_109aaf350;
        }
        if ((*puVar9 & 7) == 2) {
          uVar6 = (ulong)(double)(long)*(double *)(puVar9 + 4);
LAB_109aaf194:
          if ((int)uVar6 < 0) goto LAB_109aaf270;
        }
        else {
          if ((*puVar9 & 7) == 1) {
            uVar6 = (ulong)puVar9[4];
            goto LAB_109aaf194;
          }
          uVar6 = 0x7fffffff;
        }
        puVar9 = puVar3;
        if (puVar8 != (uint *)0x0) {
          puVar9 = puVar8;
        }
        uVar5 = (uint)uVar6;
        uVar10 = (uint)uVar11;
        if (uVar10 <= uVar5 && uVar5 != uVar10) {
          if (puVar14 != (uint *)0x0) {
            *(uint **)(puVar14 + 8) = puVar3;
          }
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar13 = puVar14;
        }
        else {
          if (uVar10 <= uVar5) {
            *(uint **)(puVar3 + 2) = puVar14;
            if (puVar14 == (uint *)0x0) goto LAB_109aaf1f0;
          }
          else {
            do {
              puVar14 = *(uint **)(puVar14 + 6);
              uVar10 = (int)uVar11 - 1;
              uVar11 = (ulong)uVar10;
            } while (uVar5 < uVar10);
            puVar13 = *(uint **)(puVar14 + 6);
            *(uint **)(puVar3 + 2) = puVar14;
          }
          *(uint **)(puVar14 + 4) = puVar3;
        }
LAB_109aaf1f0:
        *(uint **)(puVar3 + 6) = puVar13;
        uStack_88 = uStack_88 + (long)*(int *)(lVar7 + 0x2c);
        if (uStack_78 <= uStack_88) {
          lStack_90 = *(long *)(lStack_90 + 8);
          uStack_88 = *(ulong *)(lStack_90 + 0x18);
          uStack_78 = uStack_88 +
                      (long)*(int *)(lStack_90 + 0x14) * (long)*(int *)(lStack_98 + 0x2c);
          uStack_80 = uStack_88;
        }
        iVar12 = iVar12 + 1;
        puVar8 = puVar9;
        uVar11 = uVar6;
        puVar14 = puVar3;
      } while (iVar12 != iVar1);
    }
    return puVar9;
  }
  puVar4 = (undefined4 *)0x60;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar4 + 0xb) = 0x662061206e696174;
  *(undefined8 *)(puVar4 + 9) = 0x6e6f6320646c756f;
  *(undefined8 *)(puVar4 + 0xf) = 0x227365636e657571;
  *(undefined8 *)(puVar4 + 0xd) = 0x65732220646c6569;
  *(undefined8 *)(puVar4 + 0x13) = 0x20656220646c756f;
  *(undefined8 *)(puVar4 + 0x11) = 0x6873207461687420;
  *(undefined8 *)((long)puVar4 + 0x56) = 0x65636e6575716573;
  *(undefined8 *)((long)puVar4 + 0x4e) = 0x206120656220646c;
  *(undefined8 *)(puVar4 + 3) = 0x2d65636e65757165;
  *(undefined8 *)(puVar4 + 1) = 0x732d76636e65706f;
  *puVar4 = 1;
  puStack_b0 = puVar4 + 1;
  uStack_a8 = 0x5a;
  *(undefined1 *)((long)puVar4 + 0x5e) = 0;
  *(undefined8 *)(puVar4 + 7) = 0x68732065636e6174;
  *(undefined8 *)(puVar4 + 5) = 0x736e692065657274;
  FUN_109ac3188(0xffffff2c,&puStack_b0,&UNK_10f59a511,&UNK_10f598d74,0x1101);
LAB_109aaf350:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109aaf354);
  (*pcVar2)();
}



/* Entry: 109aaf39c; end: 109aaf3bf;  */

bool FUN_109aaf39c(uint *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != (uint *)0x0) {
    bVar1 = false;
    if (*param_1 >> 0x10 == 0x4298) {
      bVar1 = (*param_1 & 0x3000) == 0x1000;
    }
  }
  return bVar1;
}



/* Entry: 109aaf3c0; end: 109aaf47b;  */

void FUN_109aaf3c0(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    return;
  }
  puVar2 = (undefined4 *)0x18;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x13;
  *(undefined1 *)((long)puVar2 + 0x17) = 0;
  *(undefined4 *)((long)puVar2 + 0x13) = 0x7265746e;
  *(undefined8 *)(puVar2 + 3) = 0x6e696f7020656c62;
  *(undefined8 *)(puVar2 + 1) = 0x756f64204c4c554e;
  FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f59a559,&UNK_10f598d74,0x113a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109aaf44c);
  (*pcVar1)();
}



/* Entry: 109aaf47c; end: 109aaffab;  */

ulong FUN_109aaf47c(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  code *pcVar7;
  uint uVar8;
  uint *puVar9;
  char *pcVar10;
  long lVar11;
  undefined8 **ppuVar12;
  uint *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  long lVar25;
  char *pcVar26;
  long lVar27;
  int iVar28;
  long lVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long lVar32;
  uint *puVar33;
  int iStack_38c;
  uint uStack_370;
  long lStack_368;
  long lStack_310;
  undefined4 *puStack_308;
  undefined8 uStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  int aiStack_270 [5];
  uint uStack_25c;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_2f8 = (char *)0x0;
  puVar9 = param_1;
  FUN_109aa9324(param_1,param_2,&DAT_10f2d43a7);
  if ((puVar9 == (uint *)0x0) || ((*puVar9 & 7) != 3)) {
    pcVar26 = (char *)0x0;
  }
  else {
    pcVar26 = *(char **)(puVar9 + 6);
  }
  puVar9 = param_1;
  FUN_109aa9324(param_1,param_2,&UNK_10f59a569);
  if ((puVar9 == (uint *)0x0) || ((*puVar9 & 7) != 3)) {
    lVar25 = 0;
  }
  else {
    lVar25 = *(long *)(puVar9 + 6);
  }
  puVar9 = param_1;
  FUN_109aa9324(param_1,param_2,&UNK_10f59a573);
  if ((puVar9 == (uint *)0x0) || ((*puVar9 & 7) != 3)) {
    lStack_368 = 0;
  }
  else {
    lStack_368 = *(long *)(puVar9 + 6);
  }
  puVar9 = param_1;
  FUN_109aa9324(param_1,param_2,&UNK_10f59a57b);
  if (puVar9 == (uint *)0x0) {
    uVar22 = 0xffffffff;
  }
  else if ((*puVar9 & 7) == 2) {
    uVar22 = (ulong)(double)(long)*(double *)(puVar9 + 4);
  }
  else if ((*puVar9 & 7) == 1) {
    uVar22 = (ulong)puVar9[4];
  }
  else {
    uVar22 = 0x7fffffff;
  }
  puVar9 = param_1;
  FUN_109aa9324(param_1,param_2,&UNK_10f59a588);
  if (puVar9 == (uint *)0x0) {
    uVar19 = 0xffffffff;
  }
  else if ((*puVar9 & 7) == 2) {
    uVar19 = (uint)(long)(double)(long)*(double *)(puVar9 + 4);
  }
  else if ((*puVar9 & 7) == 1) {
    uVar19 = puVar9[4];
  }
  else {
    uVar19 = 0x7fffffff;
  }
  if ((((pcVar26 == (char *)0x0) || (uVar20 = (uint)uVar22, uVar20 == 0xffffffff)) ||
      (uVar19 == 0xffffffff)) || (lStack_368 == 0)) {
    puVar16 = (undefined4 *)0x34;
    func_0x000107c2ae8c();
    *puVar16 = 1;
    puStack_2f0 = (undefined8 *)(puVar16 + 1);
    uStack_2e8 = 0x2d;
    *(undefined8 *)(puVar16 + 3) = 0x6169746e65737365;
    *(undefined8 *)(puVar16 + 1) = 0x20666f20656d6f53;
    *(undefined1 *)((long)puVar16 + 0x31) = 0;
    *(undefined8 *)(puVar16 + 7) = 0x7475626972747461;
    *(undefined8 *)(puVar16 + 5) = 0x206870617267206c;
    *(undefined8 *)((long)puVar16 + 0x29) = 0x746e657362612065;
    *(undefined8 *)((long)puVar16 + 0x21) = 0x7261207365747562;
    FUN_109ac3188(0xfffffffe,&puStack_2f0,&UNK_10f59a5c1,&UNK_10f598d74,0x11ed);
    goto LAB_109aafeb0;
  }
  if (((long)*pcVar26 < 0) ||
     ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (long)*pcVar26 * 4 + 0x3c) >> 0x10 & 1) == 0))
  {
    _strstr(pcVar26,&UNK_10f59a5ce);
LAB_109aaf688:
    uVar8 = 0x42981000;
    if (pcVar26 != (char *)0x0) {
      uVar8 = 0x42985000;
    }
    uVar31 = (ulong)uVar8;
    puVar9 = param_1;
    FUN_109aa9324(param_1,param_2,&UNK_10f59a24f);
    if ((puVar9 == (uint *)0x0) || ((*puVar9 & 7) != 3)) {
      lVar32 = 0;
    }
    else {
      lVar32 = *(long *)(puVar9 + 6);
    }
    puVar9 = param_1;
    FUN_109aa9324(param_1,param_2,&UNK_10f59a259);
    if ((lVar32 != 0) != (puVar9 != (uint *)0x0)) {
      puVar16 = (undefined4 *)0x50;
      func_0x000107c2ae8c();
      *puVar16 = 1;
      puStack_2f0 = (undefined8 *)(puVar16 + 1);
      uStack_2e8 = 0x4a;
      *(undefined8 *)(puVar16 + 7) = 0x755f726564616568;
      *(undefined8 *)(puVar16 + 5) = 0x2220646e61202274;
      *(undefined8 *)(puVar16 + 0xb) = 0x6568742073692022;
      *(undefined8 *)(puVar16 + 9) = 0x617461645f726573;
      *(undefined8 *)(puVar16 + 0xf) = 0x746f206568742065;
      *(undefined8 *)(puVar16 + 0xd) = 0x6c696877202c6572;
      *(undefined8 *)((long)puVar16 + 0x46) = 0x746f6e2073692072;
      *(undefined8 *)((long)puVar16 + 0x3e) = 0x6568746f20656874;
      *(undefined1 *)((long)puVar16 + 0x4e) = 0;
      *(undefined8 *)(puVar16 + 3) = 0x645f726564616568;
      *(undefined8 *)(puVar16 + 1) = 0x2220666f20656e4f;
      FUN_109ac3188(0xfffffffe,&puStack_2f0,&UNK_10f59a5c1,&UNK_10f598d74,0x1209);
      goto LAB_109aafeb0;
    }
    if (lVar32 == 0) {
      lVar29 = 0x78;
    }
    else {
      lVar29 = lVar32;
      FUN_109ab5edc(lVar32,0x78);
    }
    if (lVar25 == 0) {
      iStack_38c = 0;
      uStack_370 = 0;
      lVar27 = 0x10;
    }
    else {
      lVar27 = lVar25;
      FUN_109ab5edc(lVar25,0);
      uStack_370 = (uint)lVar27;
      lVar27 = lVar25;
      FUN_109ab5edc(lVar25,0x10);
      lVar11 = lStack_368;
      FUN_109aace64(lStack_368,aiStack_270);
      if ((int)lVar11 < 1) {
        iStack_38c = 0;
      }
      else {
        uVar23 = 0;
        iStack_38c = 0;
        do {
          iStack_38c = aiStack_270[uVar23] + iStack_38c;
          uVar23 = uVar23 + 2;
        } while (uVar23 < (uint)((int)lVar11 << 1));
      }
    }
    lVar11 = lStack_368;
    FUN_109aace64(lStack_368,aiStack_270);
    uVar8 = (uint)lVar11;
    if (((int)uVar8 < 2) ||
       (((aiStack_270[0] != 2 || aiStack_270[1] != 4) || aiStack_270[2] < 1) || aiStack_270[3] != 5)
       ) {
      puVar16 = (undefined4 *)0x3c;
      func_0x000107c2ae8c();
      *puVar16 = 1;
      puStack_308 = puVar16 + 1;
      uStack_300 = 0x34;
      *(undefined8 *)(puVar16 + 3) = 0x756f687320736567;
      *(undefined8 *)(puVar16 + 1) = 0x6465206870617247;
      puVar16[0xd] = 0x74616f6c;
      *(undefined1 *)(puVar16 + 0xe) = 0;
      *(undefined8 *)(puVar16 + 7) = 0x2032206874697720;
      *(undefined8 *)(puVar16 + 5) = 0x747261747320646c;
      *(undefined8 *)(puVar16 + 0xb) = 0x66206120646e6120;
      *(undefined8 *)(puVar16 + 9) = 0x7372656765746e69;
      FUN_109ac3188(0xfffffffb,&puStack_308,&UNK_10f59a5c1,&UNK_10f598d74,0x1223);
      goto LAB_109aafeb0;
    }
    uVar21 = 4;
    if ((2 < uVar8) &&
       (uVar21 = 4,
       7 < (uStack_25c >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uStack_25c & 7) << 1) & 3)))
    {
      uVar21 = 8;
    }
    uVar23 = 0;
    iVar24 = 0;
    do {
      iVar24 = aiStack_270[uVar23] + iVar24;
      uVar23 = uVar23 + 2;
    } while (uVar23 < uVar8 << 1);
    bVar2 = *(byte *)(lStack_368 + 2);
    if ((bVar2 == 0x66) || ((bVar2 == 0x31 && (*(char *)(lStack_368 + 3) == 'f')))) {
      lVar11 = lStack_368;
      if (bVar2 - 0x30 < 10) {
        lVar11 = lStack_368 + 1;
      }
      ppuVar12 = (undefined8 **)(lVar11 + 3);
    }
    else {
      _strtol((byte *)(lStack_368 + 2),&pcStack_2f8,10);
      ppuVar12 = &puStack_2f0;
      _sprintf(&puStack_2f0,&UNK_10f59a60c);
    }
    FUN_109ab5edc(ppuVar12,0x28);
    lVar11 = lStack_368;
    FUN_109ab5edc(lStack_368,0);
    FUN_109a4f85c(uVar31,lVar29,lVar27,(ulong)ppuVar12 & 0xffffffff,*(undefined8 *)(param_1 + 6));
    if (puVar9 != (uint *)0x0) {
      FUN_109aae2f4(param_1,puVar9,uVar31 + 0x78,lVar32);
    }
    uVar3 = (uint)lVar11 * 3;
    uVar8 = uStack_370 * 3;
    if ((int)(uStack_370 * 3) <= (int)uVar3) {
      uVar8 = uVar3;
    }
    if ((int)uVar8 < 0x10001) {
      uVar8 = 0x10000;
    }
    puVar13 = (uint *)(ulong)uVar8;
    func_0x000107c2ae8c();
    puVar14 = (undefined8 *)
              (-(uVar22 >> 0x1f & 1) & 0xfffffff800000000 | (uVar22 & 0xffffffff) << 3);
    func_0x000107c2ae8c();
    puVar9 = param_1;
    FUN_109aa9324(param_1,param_2,&DAT_10f59a612);
    puVar15 = param_1;
    FUN_109aa9324(param_1,param_2,&DAT_10f3c8a16);
    if (puVar15 == (uint *)0x0) {
      puVar16 = (undefined4 *)0x14;
      func_0x000107c2ae8c();
      *puVar16 = 1;
      puStack_2f0 = (undefined8 *)(puVar16 + 1);
      *puStack_2f0 = 0x7365676465206f4e;
      uStack_2e8 = 0xd;
      *(undefined1 *)((long)puVar16 + 0x11) = 0;
      *(undefined8 *)((long)puVar16 + 9) = 0x6174616420736567;
      FUN_109ac3188(0xfffffffb,&puStack_2f0,&UNK_10f59a5c1,&UNK_10f598d74,0x1247);
      goto LAB_109aafeb0;
    }
    if ((lVar25 != 0) && (puVar9 == (uint *)0x0)) {
      puVar16 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar16 = 1;
      puStack_2f0 = (undefined8 *)(puVar16 + 1);
      uStack_2e8 = 0x10;
      *(undefined1 *)(puVar16 + 5) = 0;
      *(undefined8 *)(puVar16 + 3) = 0x6174616420736563;
      *(undefined8 *)(puVar16 + 1) = 0x6974726576206f4e;
      FUN_109ac3188(0xfffffffb,&puStack_2f0,&UNK_10f59a5c1,&UNK_10f598d74,0x1249);
      goto LAB_109aafeb0;
    }
    bVar6 = true;
    do {
      bVar18 = bVar6;
      uVar3 = uVar20;
      iVar4 = iStack_38c;
      uVar5 = uStack_370;
      lVar32 = lVar25;
      if (!bVar18) {
        uVar3 = uVar19;
        iVar4 = iVar24;
        uVar5 = (uint)lVar11;
        lVar32 = lStack_368;
      }
      uVar22 = (ulong)uVar3;
      uVar1 = uVar5;
      if ((int)uVar5 < 2) {
        uVar1 = 1;
      }
      if (lVar32 != 0) {
        puVar33 = puVar9;
        if (!bVar18) {
          puVar33 = puVar15;
        }
        FUN_109aadaa0(param_1,puVar33,&puStack_2f0);
      }
      if (0 < (int)uVar3) {
        iVar28 = 0;
        uVar3 = 0;
        puVar30 = puVar14;
        puVar33 = puVar13;
        if (uVar1 != 0) {
          uVar3 = uVar8 / uVar1;
        }
        do {
          if ((lVar32 != 0) && (iVar28 == 0)) {
            uVar1 = (uint)uVar22;
            if ((int)uVar3 <= (int)(uint)uVar22) {
              uVar1 = uVar3;
            }
            iVar28 = uVar1 * iVar4;
            FUN_109aadcf4(param_1,&puStack_2f0,iVar28,puVar13,lVar32);
            puVar33 = puVar13;
          }
          if (bVar18) {
            FUN_109a4f940(uVar31,0,&puStack_308);
            *puVar30 = puStack_308;
            if (lVar32 != 0) {
              puVar16 = puStack_308 + 4;
              puVar17 = puVar33;
              lVar29 = (long)(int)uStack_370;
LAB_109aafb10:
              _memcpy(puVar16,puVar17,lVar29);
            }
          }
          else {
            lStack_310 = 0;
            if (uVar20 <= *puVar33 || uVar20 <= puVar33[1]) {
              puVar16 = (undefined4 *)0x34;
              func_0x000107c2ae8c();
              *puVar16 = 1;
              puStack_308 = puVar16 + 1;
              uStack_300 = 0x2e;
              *(undefined1 *)((long)puVar16 + 0x32) = 0;
              *(undefined8 *)(puVar16 + 3) = 0x76206465726f7473;
              *(undefined8 *)(puVar16 + 1) = 0x20666f20656d6f53;
              *(undefined8 *)(puVar16 + 7) = 0x7261207365636964;
              *(undefined8 *)(puVar16 + 5) = 0x6e69207865747265;
              *(undefined8 *)((long)puVar16 + 0x2a) = 0x65676e617220666f;
              *(undefined8 *)((long)puVar16 + 0x22) = 0x2074756f20657261;
              FUN_109ac3188(0xffffff2d,&puStack_308,&UNK_10f59a5c1,&UNK_10f598d74,0x1276);
              goto LAB_109aafeb0;
            }
            uVar23 = uVar31;
            FUN_109a4fa64(uVar31,puVar14[(int)*puVar33],puVar14[(int)puVar33[1]],0,&lStack_310);
            if ((int)uVar23 == 0) {
              puVar16 = (undefined4 *)0x20;
              func_0x000107c2ae8c();
              *puVar16 = 1;
              puStack_308 = puVar16 + 1;
              uStack_300 = 0x1b;
              *(undefined1 *)((long)puVar16 + 0x1f) = 0;
              *(undefined8 *)(puVar16 + 3) = 0x2065676465206465;
              *(undefined8 *)(puVar16 + 1) = 0x746163696c707544;
              *(undefined8 *)((long)puVar16 + 0x17) = 0x6465727563636f20;
              *(undefined8 *)((long)puVar16 + 0xf) = 0x7361682065676465;
              FUN_109ac3188(0xfffffffb,&puStack_308,&UNK_10f59a5c1,&UNK_10f598d74,0x127c);
              goto LAB_109aafeb0;
            }
            *(uint *)(lStack_310 + 4) = puVar33[2];
            if (0x28 < (int)ppuVar12) {
              puVar16 = (undefined4 *)(lStack_310 + 0x28);
              puVar17 = (uint *)((long)puVar33 + (ulong)uVar21 + 0xb & (long)(int)-uVar21);
              lVar29 = ((ulong)ppuVar12 & 0xffffffff) - 0x28;
              goto LAB_109aafb10;
            }
          }
          iVar28 = iVar28 + -1;
          uVar22 = uVar22 - 1;
          puVar30 = puVar30 + 1;
          puVar33 = (uint *)((long)puVar33 + (long)(int)uVar5);
        } while (uVar22 != 0);
      }
      bVar6 = false;
    } while (bVar18);
    if (puVar13 != (uint *)0x0) {
      _free(*(undefined8 *)(puVar13 + -2));
    }
    if (puVar14 != (undefined8 *)0x0) {
      _free(puVar14[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return uVar31;
    }
    ___stack_chk_fail();
  }
  else {
    pcVar10 = pcVar26;
    _strtol(pcVar26,&pcStack_2f8,0x10);
    if ((pcStack_2f8 != pcVar26) && (((uint)pcVar10 & 0xffff0000) == 0x42980000)) {
      pcVar26 = (char *)((ulong)pcVar10 & 0x1000);
      goto LAB_109aaf688;
    }
  }
  puVar16 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar16 = 1;
  puStack_2f0 = (undefined8 *)(puVar16 + 1);
  uStack_2e8 = 0x1e;
  *(undefined1 *)((long)puVar16 + 0x22) = 0;
  *(undefined8 *)(puVar16 + 3) = 0x616c662065636e65;
  *(undefined8 *)(puVar16 + 1) = 0x7571657320656854;
  *(undefined8 *)((long)puVar16 + 0x1a) = 0x64696c61766e6920;
  *(undefined8 *)((long)puVar16 + 0x12) = 0x657261207367616c;
  FUN_109ac3188(0xfffffffe,&puStack_2f0,&UNK_10f59a5c1,&UNK_10f598d74,0x11fa);
LAB_109aafeb0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109aafeb4);
  (*pcVar7)();
}



/* Entry: 109aaffac; end: 109ab0597;  */

uint * FUN_109aaffac(uint *param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  int *piVar19;
  long *plVar20;
  int *piVar21;
  int iVar22;
  uint *puVar23;
  ulong unaff_x21;
  bool bVar24;
  undefined4 *puVar25;
  int iVar26;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  int *piStack_540;
  undefined8 uStack_538;
  undefined4 auStack_530 [2];
  uint *puStack_528;
  long *plStack_520;
  int *piStack_518;
  int *piStack_510;
  int *piStack_508;
  undefined4 uStack_500;
  long lStack_4f8;
  long lStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  uint *puStack_4d8;
  undefined4 *puStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  ulong uStack_4b8;
  uint *puStack_4b0;
  long lStack_4a8;
  undefined1 *puStack_4a0;
  code *pcStack_498;
  undefined *puStack_490;
  undefined4 *puStack_480;
  long lStack_478;
  uint *puStack_470;
  uint *puStack_468;
  long lStack_460;
  ulong uStack_458;
  long lStack_450;
  uint *puStack_448;
  undefined4 auStack_440 [2];
  uint *puStack_438;
  long *plStack_430;
  int *piStack_428;
  int *piStack_420;
  int *piStack_418;
  undefined4 uStack_410;
  long lStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3f0 [20];
  uint uStack_3dc;
  uint auStack_1f0 [32];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = param_3[0x1a];
  uVar4 = *(undefined4 *)(*(long *)(param_3 + 0x1c) + 0x68);
  lVar9 = (long)(int)uVar18 << 2;
  puStack_448 = param_1;
  uStack_400 = param_4;
  uStack_3f8 = param_5;
  func_0x000107c2ae8c();
  lStack_478 = lVar9;
  puStack_468 = param_3;
  FUN_109a4cb14(param_3,auStack_440,0);
  if (0 < (int)puStack_468[10]) {
    iVar26 = 0;
    iVar15 = 0;
    plVar20 = plStack_430;
    piVar21 = piStack_418;
    do {
      if (-1 < *piStack_428) {
        *(int *)(lStack_478 + (long)iVar15 * 4) = *piStack_428;
        *piStack_428 = iVar15;
        iVar15 = iVar15 + 1;
      }
      piStack_428 = (int *)((long)piStack_428 + (long)(int)puStack_468[0xb]);
      if (piVar21 <= piStack_428) {
        plVar20 = (long *)plVar20[1];
        piStack_428 = (int *)plVar20[3];
        piVar21 = (int *)((long)piStack_428 +
                         (long)*(int *)((long)plVar20 + 0x14) * (long)(int)puStack_438[0xb]);
        plStack_430 = plVar20;
        piStack_420 = piStack_428;
        piStack_418 = piVar21;
      }
      iVar26 = iVar26 + 1;
    } while (iVar26 < (int)puStack_468[10]);
  }
  FUN_109aac02c(puStack_448,param_2,6,&UNK_10f599364);
  puVar10 = &UNK_10f5995ac;
  if ((*puStack_468 & 0x4000) != 0) {
    puVar10 = &UNK_10f59a5ce;
  }
  FUN_109aac5ec(puStack_448,&DAT_10f2d43a7,puVar10,1);
  FUN_109aac30c(puStack_448,&UNK_10f59a57b,(long)(int)uVar18);
  puVar23 = puStack_468;
  FUN_109ab6208(puStack_468,&UNK_10f59a569,&uStack_400,0x10,auStack_170);
  puStack_470 = puVar23;
  if (puVar23 != (uint *)0x0) {
    FUN_109aac5ec(puStack_448,&UNK_10f59a569,puVar23,0);
  }
  FUN_109aac30c(puStack_448,&UNK_10f59a588,uVar4);
  puVar23 = puStack_468 + 0x1c;
  puVar10 = *(undefined **)puVar23;
  FUN_109ab6208(puVar10,&UNK_10f59a573,&uStack_400,0x28,auStack_f0);
  puStack_490 = &UNK_10f5995ac;
  if (puVar10 != (undefined *)0x0) {
    puStack_490 = puVar10;
  }
  _sprintf(auStack_1f0,&UNK_10f59a685);
  FUN_109aac5ec(puStack_448,&UNK_10f59a573,auStack_1f0,0);
  FUN_109ab642c(puStack_448,puStack_468,&uStack_400,0x78);
  uVar18 = 0x10000;
  if (0x5555 < (int)puStack_468[0xb]) {
    uVar18 = puStack_468[0xb] * 3;
  }
  uVar16 = *(int *)(*(long *)puVar23 + 0x2c) * 3;
  if ((int)uVar16 <= (int)uVar18) {
    uVar16 = uVar18;
  }
  puVar11 = (undefined4 *)(ulong)uVar16;
  puStack_480 = puVar11;
  func_0x000107c2ae8c();
  bVar24 = false;
  uVar5 = 1;
  puVar23 = puStack_468;
  do {
    uVar17 = uVar5;
    iVar15 = (int)uVar17;
    puVar2 = puStack_470;
    if (iVar15 == 0) {
      puVar2 = auStack_1f0;
    }
    if (puVar2 != (uint *)0x0) {
      if (iVar15 == 0) {
        puVar23 = *(uint **)(puStack_468 + 0x1c);
      }
      uVar18 = puVar23[0xb];
      unaff_x21 = (ulong)uVar18;
      puVar14 = puVar2;
      FUN_109ab5edc(puVar2,0);
      if (bVar24) {
        puVar12 = auStack_1f0;
        FUN_109aace64(puVar12,auStack_3f0);
        if ((int)puVar12 < 3) goto LAB_109ab027c;
        uVar16 = 4;
        if (7 < (uStack_3dc >> 3 & 0x1ff) + 1 <<
                (ulong)(0xfa50U >> (ulong)((uStack_3dc & 7) << 1) & 3)) {
          uVar16 = 8;
        }
      }
      else {
LAB_109ab027c:
        uVar16 = 4;
      }
      puVar10 = &DAT_10f59a612;
      if (iVar15 == 0) {
        puVar10 = &DAT_10f3c8a16;
      }
      FUN_109aac02c(puStack_448,puVar10,0xd,0);
      auStack_440[0] = 0x40;
      plStack_430 = *(long **)(puVar23 + 0x16);
      if (plStack_430 == (long *)0x0) {
        lStack_408 = 0;
        plStack_430 = (long *)0x0;
        piStack_418 = (int *)0x0;
        piStack_420 = (int *)0x0;
        uStack_410 = 0;
      }
      else {
        piStack_420 = (int *)plStack_430[3];
        lStack_408 = *(long *)(*plStack_430 + 0x18) +
                     ((long)*(int *)(*plStack_430 + 0x14) + -1) * (long)(int)puVar23[0xb];
        uStack_410 = (undefined4)plStack_430[2];
        piStack_418 = (int *)((long)piStack_420 +
                             (long)*(int *)((long)plStack_430 + 0x14) * (long)(int)puVar23[0xb]);
      }
      puStack_438 = puVar23;
      piStack_428 = piStack_420;
      if (0 < (int)puVar23[10]) {
        unaff_x27 = 0;
        unaff_x26 = 0;
        lStack_450 = (ulong)uVar16 - 1;
        uStack_458 = (ulong)(int)-uVar16;
        lStack_460 = unaff_x21 - 0x28;
        iVar22 = (int)puVar14;
        unaff_x28 = (long)iVar22;
        iVar26 = 0;
        puVar13 = puVar11;
        if (iVar22 != 0) {
          iVar26 = (int)puStack_480 / iVar22;
        }
        do {
          if (-1 < *piStack_428) {
            if (iVar15 == 0) {
              puVar25 = (undefined4 *)((long)puVar13 + 3U & 0xfffffffffffffffc);
              puVar13 = *(undefined4 **)(piStack_428 + 8);
              *puVar25 = **(undefined4 **)(piStack_428 + 6);
              puVar25[1] = *puVar13;
              puVar25[2] = piStack_428[1];
              if (0x28 < (int)uVar18) {
                puVar13 = (undefined4 *)((long)puVar25 + lStack_450 + 0xc & uStack_458);
                piVar21 = piStack_428 + 10;
                lVar9 = lStack_460;
                goto LAB_109ab03b4;
              }
            }
            else {
              piVar21 = piStack_428 + 4;
              lVar9 = unaff_x28;
              puVar25 = puVar13;
LAB_109ab03b4:
              _memcpy(puVar13,piVar21,lVar9);
            }
            uVar16 = (int)unaff_x26 + 1;
            unaff_x26 = (ulong)uVar16;
            if ((int)uVar16 < iVar26) {
              puVar13 = (undefined4 *)((long)puVar25 + unaff_x28);
            }
            else {
              FUN_109aac75c(puStack_448,puVar11,unaff_x26,puVar2);
              unaff_x26 = 0;
              puVar13 = puVar11;
            }
          }
          piStack_428 = (int *)((long)piStack_428 + (long)(int)puVar23[0xb]);
          if (piStack_418 <= piStack_428) {
            plStack_430 = (long *)plStack_430[1];
            piStack_428 = (int *)plStack_430[3];
            piStack_418 = (int *)((long)piStack_428 +
                                 (long)*(int *)((long)plStack_430 + 0x14) *
                                 (long)(int)puStack_438[0xb]);
            piStack_420 = piStack_428;
          }
          uVar16 = (int)unaff_x27 + 1;
          unaff_x27 = (ulong)uVar16;
        } while ((int)uVar16 < (int)puVar23[10]);
        if (0 < (int)unaff_x26) {
          FUN_109aac75c(puStack_448,puVar11,unaff_x26,puVar2);
        }
      }
      FUN_109aac19c(puStack_448);
      puVar23 = puStack_468;
    }
    bVar24 = true;
    uVar5 = 0;
    if (iVar15 == 0) {
      puVar14 = puStack_448;
      FUN_109aac19c();
      lVar9 = lStack_478;
      auStack_440[0] = 0x40;
      puStack_438 = puStack_468;
      plVar20 = *(long **)(puStack_468 + 0x16);
      if (plVar20 == (long *)0x0) {
        lStack_408 = 0;
        uStack_410 = 0;
        plStack_430 = (long *)0x0;
        piStack_418 = (int *)0x0;
        piStack_420 = (int *)0x0;
      }
      else {
        lStack_408 = *(long *)(*plVar20 + 0x18) +
                     ((long)*(int *)(*plVar20 + 0x14) + -1) * (long)(int)puStack_468[0xb];
        uStack_410 = (undefined4)plVar20[2];
        piStack_420 = (int *)plVar20[3];
        piStack_418 = (int *)((long)piStack_420 +
                             (long)*(int *)((long)plVar20 + 0x14) * (long)(int)puStack_468[0xb]);
        plStack_430 = plVar20;
      }
      uVar18 = puStack_468[10];
      piStack_428 = piStack_420;
      if (0 < (int)uVar18) {
        iVar15 = 0;
        uVar16 = puStack_468[0xb];
        piVar21 = piStack_418;
        do {
          if (-1 < *piStack_428) {
            lVar7 = (long)iVar15;
            iVar15 = iVar15 + 1;
            *piStack_428 = *(int *)(lStack_478 + lVar7 * 4);
          }
          piStack_428 = (int *)((long)piStack_428 + (long)(int)uVar16);
          if (piVar21 <= piStack_428) {
            plVar20 = (long *)plVar20[1];
            piStack_428 = (int *)plVar20[3];
            piVar21 = (int *)((long)piStack_428 +
                             (long)*(int *)((long)plVar20 + 0x14) * (long)(int)uVar16);
            plStack_430 = plVar20;
            piStack_420 = piStack_428;
            piStack_418 = piVar21;
          }
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      if (puVar11 != (undefined4 *)0x0) {
        puVar14 = *(uint **)(puVar11 + -2);
        _free();
      }
      if (lVar9 != 0) {
        puVar14 = *(uint **)(lVar9 + -8);
        _free();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return puVar14;
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      uStack_4c0 = 1;
      lStack_4a8 = lVar9;
      pcStack_498 = FUN_109ab0598;
      lStack_4f0 = unaff_x28;
      uStack_4e8 = unaff_x27;
      uStack_4e0 = unaff_x26;
      puStack_4d8 = puVar2;
      puStack_4d0 = puVar11;
      uStack_4c8 = uVar17;
      uStack_4b8 = unaff_x21;
      puStack_4b0 = puVar23;
      puStack_4a0 = &stack0xfffffffffffffff0;
      if ((puVar14 == (uint *)0x0) || ((*puVar14 & 0xffff3000) != 0x42981000)) {
        puVar11 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        piStack_540 = puVar11 + 1;
        uStack_538 = 0x15;
        *(undefined1 *)((long)puVar11 + 0x19) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x6f70206870617267;
        *(undefined8 *)(puVar11 + 1) = 0x2064696c61766e49;
        *(undefined8 *)((long)puVar11 + 0x11) = 0x7265746e696f7020;
        FUN_109ac3188(0xfffffffb,&piStack_540,&UNK_10f596a0c,&UNK_10f596553,0xcbd);
      }
      else {
        lVar9 = *(long *)(puVar14 + 0x12);
        if (lVar9 != 0) {
          iVar15 = *(int *)(*(long *)(puVar14 + 0x1c) + 0x2c);
          uVar18 = puVar14[0xb];
          lVar7 = (long)(int)puVar14[10] << 2;
          func_0x000107c2ae8c();
          lVar8 = (long)(int)puVar14[10] << 3;
          func_0x000107c2ae8c();
          puVar23 = (uint *)(ulong)*puVar14;
          FUN_109a4f85c(puVar23,puVar14[1],uVar18,iVar15,lVar9);
          _memcpy(puVar23 + 0xe10,puVar14 + 0xe10,(long)(int)puVar14[1] + -0x78);
          auStack_530[0] = 0x40;
          plVar20 = *(long **)(puVar14 + 0x16);
          if (plVar20 == (long *)0x0) {
            lStack_4f8 = 0;
            uStack_500 = 0;
            plStack_520 = (long *)0x0;
            piStack_508 = (int *)0x0;
            piStack_510 = (int *)0x0;
          }
          else {
            lStack_4f8 = *(long *)(*plVar20 + 0x18) +
                         ((long)*(int *)(*plVar20 + 0x14) + -1) * (long)(int)puVar14[0xb];
            uStack_500 = (undefined4)plVar20[2];
            piStack_510 = (int *)plVar20[3];
            piStack_508 = (int *)((long)piStack_510 +
                                 (long)*(int *)((long)plVar20 + 0x14) * (long)(int)puVar14[0xb]);
            plStack_520 = plVar20;
          }
          puStack_528 = puVar14;
          piStack_518 = piStack_510;
          if (0 < (int)puVar14[10]) {
            iVar22 = 0;
            iVar26 = 0;
            piVar21 = piStack_508;
            do {
              piVar19 = piStack_518;
              if (-1 < *piStack_518) {
                piStack_540 = (int *)0x0;
                FUN_109a4f940(puVar23,piStack_518,&piStack_540);
                iVar3 = *piVar19;
                *piStack_540 = iVar3;
                *(int *)(lVar7 + (long)iVar26 * 4) = iVar3;
                *piVar19 = iVar26;
                *(int **)(lVar8 + (long)iVar26 * 8) = piStack_540;
                iVar26 = iVar26 + 1;
              }
              piStack_518 = (int *)((long)piVar19 + (long)(int)uVar18);
              if (piVar21 <= piStack_518) {
                plVar20 = (long *)plVar20[1];
                piStack_518 = (int *)plVar20[3];
                piVar21 = (int *)((long)piStack_518 +
                                 (long)(int)puVar14[0xb] * (long)*(int *)((long)plVar20 + 0x14));
                plStack_520 = plVar20;
                piStack_510 = piStack_518;
                piStack_508 = piVar21;
              }
              iVar22 = iVar22 + 1;
            } while (iVar22 < (int)puVar14[10]);
          }
          FUN_109a4cb14(*(undefined8 *)(puVar14 + 0x1c),auStack_530,0);
          puVar2 = puStack_528;
          iVar26 = *(int *)(*(long *)(puVar14 + 0x1c) + 0x28);
          if (0 < iVar26) {
            iVar22 = 0;
            piVar21 = piStack_508;
            plVar20 = plStack_520;
            do {
              piVar19 = piStack_518;
              if (-1 < *piStack_518) {
                piStack_540 = (int *)0x0;
                FUN_109a4fa64(puVar23,*(undefined8 *)(lVar8 + (long)**(int **)(piStack_518 + 6) * 8)
                              ,*(undefined8 *)(lVar8 + (long)**(int **)(piStack_518 + 8) * 8),
                              piStack_518,&piStack_540);
                *piStack_540 = *piVar19;
              }
              piStack_518 = (int *)((long)piVar19 + (long)iVar15);
              if (piVar21 <= piStack_518) {
                plVar20 = (long *)plVar20[1];
                piStack_518 = (int *)plVar20[3];
                piVar21 = (int *)((long)piStack_518 +
                                 (long)(int)puVar2[0xb] * (long)*(int *)((long)plVar20 + 0x14));
                plStack_520 = plVar20;
                piStack_510 = piStack_518;
                piStack_508 = piVar21;
              }
              iVar22 = iVar22 + 1;
              iVar26 = *(int *)(*(long *)(puVar14 + 0x1c) + 0x28);
            } while (iVar22 < iVar26);
          }
          lVar9 = *(long *)(puVar14 + 0x16);
          if (lVar9 == 0) {
            piVar19 = (int *)0x0;
            piVar21 = (int *)0x0;
            uStack_500 = 0;
          }
          else {
            piVar21 = *(int **)(lVar9 + 0x18);
            piVar19 = (int *)((long)piVar21 + (long)*(int *)(lVar9 + 0x14) * (long)(int)puVar14[0xb]
                             );
          }
          piStack_508 = (int *)0x0;
          piStack_510 = (int *)0x0;
          piStack_518 = (int *)0x0;
          plStack_520 = (long *)0x0;
          if (0 < iVar26) {
            iVar15 = 0;
            do {
              if (-1 < *piVar21) {
                lVar1 = (long)iVar15;
                iVar15 = iVar15 + 1;
                *piVar21 = *(int *)(lVar7 + lVar1 * 4);
              }
              piVar21 = (int *)((long)piVar21 + (long)(int)uVar18);
              if (piVar19 <= piVar21) {
                lVar9 = *(long *)(lVar9 + 8);
                piVar21 = *(int **)(lVar9 + 0x18);
                piVar19 = (int *)((long)piVar21 +
                                 (long)(int)puVar14[0xb] * (long)*(int *)(lVar9 + 0x14));
              }
              iVar26 = iVar26 + -1;
            } while (iVar26 != 0);
          }
          if (lVar7 != 0) {
            _free(*(undefined8 *)(lVar7 + -8));
          }
          if (lVar8 != 0) {
            _free(*(undefined8 *)(lVar8 + -8));
          }
          return puVar23;
        }
        puVar11 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        piStack_540 = puVar11 + 1;
        uStack_538 = 0x14;
        *(undefined1 *)(puVar11 + 6) = 0;
        puVar11[5] = 0x7265746e;
        *(undefined8 *)(puVar11 + 3) = 0x696f702065676172;
        *(undefined8 *)(puVar11 + 1) = 0x6f7473204c4c554e;
        FUN_109ac3188(0xffffffe5,&piStack_540,&UNK_10f596a0c,&UNK_10f596553,0xcc3);
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x109a50154);
      (*pcVar6)();
    }
  } while( true );
}



/* Entry: 109ab0598; end: 109ab05b7;  */

ulong FUN_109ab0598(uint *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  int *piVar16;
  int *piStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  uint *puStack_98;
  long *plStack_90;
  int *piStack_88;
  int *piStack_80;
  int *piStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  if ((param_1 == (uint *)0x0) || ((*param_1 & 0xffff3000) != 0x42981000)) {
    puVar9 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    piStack_b0 = puVar9 + 1;
    uStack_a8 = 0x15;
    *(undefined1 *)((long)puVar9 + 0x19) = 0;
    *(undefined8 *)(puVar9 + 3) = 0x6f70206870617267;
    *(undefined8 *)(puVar9 + 1) = 0x2064696c61766e49;
    *(undefined8 *)((long)puVar9 + 0x11) = 0x7265746e696f7020;
    FUN_109ac3188(0xfffffffb,&piStack_b0,&UNK_10f596a0c,&UNK_10f596553,0xcbd);
  }
  else {
    lVar12 = *(long *)(param_1 + 0x12);
    if (lVar12 != 0) {
      iVar11 = *(int *)(*(long *)(param_1 + 0x1c) + 0x2c);
      uVar2 = param_1[0xb];
      lVar6 = (long)(int)param_1[10] << 2;
      func_0x000107c2ae8c();
      lVar7 = (long)(int)param_1[10] << 3;
      func_0x000107c2ae8c();
      uVar8 = (ulong)*param_1;
      FUN_109a4f85c(uVar8,param_1[1],uVar2,iVar11,lVar12);
      _memcpy(uVar8 + 0x3840,param_1 + 0xe10,(long)(int)param_1[1] + -0x78);
      auStack_a0[0] = 0x40;
      plVar15 = *(long **)(param_1 + 0x16);
      if (plVar15 == (long *)0x0) {
        lStack_68 = 0;
        uStack_70 = 0;
        plStack_90 = (long *)0x0;
        piStack_78 = (int *)0x0;
        piStack_80 = (int *)0x0;
      }
      else {
        lStack_68 = *(long *)(*plVar15 + 0x18) +
                    ((long)*(int *)(*plVar15 + 0x14) + -1) * (long)(int)param_1[0xb];
        uStack_70 = (undefined4)plVar15[2];
        piStack_80 = (int *)plVar15[3];
        piStack_78 = (int *)((long)piStack_80 +
                            (long)*(int *)((long)plVar15 + 0x14) * (long)(int)param_1[0xb]);
        plStack_90 = plVar15;
      }
      puStack_98 = param_1;
      piStack_88 = piStack_80;
      if (0 < (int)param_1[10]) {
        iVar14 = 0;
        iVar13 = 0;
        piVar16 = piStack_78;
        do {
          piVar10 = piStack_88;
          if (-1 < *piStack_88) {
            piStack_b0 = (int *)0x0;
            FUN_109a4f940(uVar8,piStack_88,&piStack_b0);
            iVar3 = *piVar10;
            *piStack_b0 = iVar3;
            *(int *)(lVar6 + (long)iVar13 * 4) = iVar3;
            *piVar10 = iVar13;
            *(int **)(lVar7 + (long)iVar13 * 8) = piStack_b0;
            iVar13 = iVar13 + 1;
          }
          piStack_88 = (int *)((long)piVar10 + (long)(int)uVar2);
          if (piVar16 <= piStack_88) {
            plVar15 = (long *)plVar15[1];
            piStack_88 = (int *)plVar15[3];
            piVar16 = (int *)((long)piStack_88 +
                             (long)(int)param_1[0xb] * (long)*(int *)((long)plVar15 + 0x14));
            plStack_90 = plVar15;
            piStack_80 = piStack_88;
            piStack_78 = piVar16;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)param_1[10]);
      }
      FUN_109a4cb14(*(undefined8 *)(param_1 + 0x1c),auStack_a0,0);
      puVar4 = puStack_98;
      iVar13 = *(int *)(*(long *)(param_1 + 0x1c) + 0x28);
      if (0 < iVar13) {
        iVar14 = 0;
        piVar16 = piStack_78;
        plVar15 = plStack_90;
        do {
          piVar10 = piStack_88;
          if (-1 < *piStack_88) {
            piStack_b0 = (int *)0x0;
            FUN_109a4fa64(uVar8,*(undefined8 *)(lVar7 + (long)**(int **)(piStack_88 + 6) * 8),
                          *(undefined8 *)(lVar7 + (long)**(int **)(piStack_88 + 8) * 8),piStack_88,
                          &piStack_b0);
            *piStack_b0 = *piVar10;
          }
          piStack_88 = (int *)((long)piVar10 + (long)iVar11);
          if (piVar16 <= piStack_88) {
            plVar15 = (long *)plVar15[1];
            piStack_88 = (int *)plVar15[3];
            piVar16 = (int *)((long)piStack_88 +
                             (long)(int)puVar4[0xb] * (long)*(int *)((long)plVar15 + 0x14));
            plStack_90 = plVar15;
            piStack_80 = piStack_88;
            piStack_78 = piVar16;
          }
          iVar14 = iVar14 + 1;
          iVar13 = *(int *)(*(long *)(param_1 + 0x1c) + 0x28);
        } while (iVar14 < iVar13);
      }
      lVar12 = *(long *)(param_1 + 0x16);
      if (lVar12 == 0) {
        piVar10 = (int *)0x0;
        piVar16 = (int *)0x0;
        uStack_70 = 0;
      }
      else {
        piVar16 = *(int **)(lVar12 + 0x18);
        piVar10 = (int *)((long)piVar16 + (long)*(int *)(lVar12 + 0x14) * (long)(int)param_1[0xb]);
      }
      piStack_78 = (int *)0x0;
      piStack_80 = (int *)0x0;
      piStack_88 = (int *)0x0;
      plStack_90 = (long *)0x0;
      if (0 < iVar13) {
        iVar11 = 0;
        do {
          if (-1 < *piVar16) {
            lVar1 = (long)iVar11;
            iVar11 = iVar11 + 1;
            *piVar16 = *(int *)(lVar6 + lVar1 * 4);
          }
          piVar16 = (int *)((long)piVar16 + (long)(int)uVar2);
          if (piVar10 <= piVar16) {
            lVar12 = *(long *)(lVar12 + 8);
            piVar16 = *(int **)(lVar12 + 0x18);
            piVar10 = (int *)((long)piVar16 +
                             (long)(int)param_1[0xb] * (long)*(int *)(lVar12 + 0x14));
          }
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      if (lVar6 != 0) {
        _free(*(undefined8 *)(lVar6 + -8));
      }
      if (lVar7 != 0) {
        _free(*(undefined8 *)(lVar7 + -8));
      }
      return uVar8;
    }
    puVar9 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    piStack_b0 = puVar9 + 1;
    uStack_a8 = 0x14;
    *(undefined1 *)(puVar9 + 6) = 0;
    puVar9[5] = 0x7265746e;
    *(undefined8 *)(puVar9 + 3) = 0x696f702065676172;
    *(undefined8 *)(puVar9 + 1) = 0x6f7473204c4c554e;
    FUN_109ac3188(0xffffffe5,&piStack_b0,&UNK_10f596a0c,&UNK_10f596553,0xcc3);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109a50154);
  (*pcVar5)();
}



/* Entry: 109ab05b8; end: 109ab0b1b;  */

int * FUN_109ab05b8(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  long lVar26;
  ulong unaff_x26;
  int iStack_218c;
  long lStack_2188;
  long lStack_2180;
  long lStack_2178;
  undefined8 *puStack_2170;
  undefined8 *puStack_2168;
  undefined8 *puStack_2160;
  long lStack_2148;
  uint *puStack_2140;
  uint uStack_2138;
  undefined8 uStack_2130;
  undefined1 auStack_2128 [16];
  long lStack_2118;
  ulong uStack_2110;
  long lStack_2108;
  uint *puStack_2100;
  int *piStack_20f8;
  int *piStack_20f0;
  int *piStack_20e8;
  int *piStack_20e0;
  uint *puStack_20d8;
  undefined1 *puStack_20d0;
  code *pcStack_20c8;
  undefined4 *puStack_20c0;
  undefined8 uStack_20b8;
  uint auStack_20b0 [2];
  long lStack_20a8;
  long lStack_20a0;
  uint *puStack_2098;
  uint *puStack_2090;
  uint *puStack_2088;
  undefined4 *puStack_2070;
  undefined8 uStack_2068;
  undefined1 auStack_1070 [4096];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar25 = param_1;
  FUN_109aa9324();
  puVar14 = param_1;
  FUN_109aa9324(param_1,param_2,&UNK_10f59a1e9);
  if ((((puVar14 == (uint *)0x0) || ((*puVar14 & 7) != 3)) || (puVar25 == (uint *)0x0)) ||
     (piVar20 = *(int **)(puVar14 + 6), piVar20 == (int *)0x0)) {
    puVar9 = (undefined4 *)0x34;
    func_0x000107c2ae8c();
    *puVar9 = 1;
    puStack_2070 = puVar9 + 1;
    uStack_2068 = 0x2e;
    *(undefined8 *)(puVar9 + 3) = 0x6169746e65737365;
    *(undefined8 *)(puVar9 + 1) = 0x20666f20656d6f53;
    *(undefined1 *)((long)puVar9 + 0x32) = 0;
    *(undefined8 *)(puVar9 + 7) = 0x7562697274746120;
    *(undefined8 *)(puVar9 + 5) = 0x78697274616d206c;
    *(undefined8 *)((long)puVar9 + 0x2a) = 0x746e657362612065;
    *(undefined8 *)((long)puVar9 + 0x22) = 0x7261207365747562;
    FUN_109ac3188(0xfffffffe,&puStack_2070,&UNK_10f59a6c0,&UNK_10f598d74,0xed1);
  }
  else {
    if ((*puVar25 & 7) == 5) {
      uVar24 = *(uint *)(*(long *)(puVar25 + 4) + 0x28);
    }
    else {
      uVar24 = 1;
      if ((*puVar25 & 7) != 1) {
        uVar24 = 0xffffffff;
      }
    }
    piVar21 = (int *)(ulong)uVar24;
    if (uVar24 - 0x401 < 0xfffffc00) {
      puVar9 = (undefined4 *)0x38;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_2070 = puVar9 + 1;
      uStack_2068 = 0x30;
      *(undefined8 *)(puVar9 + 3) = 0x6d72657465642074;
      *(undefined8 *)(puVar9 + 1) = 0x6f6e20646c756f43;
      *(undefined1 *)(puVar9 + 0xd) = 0;
      *(undefined8 *)(puVar9 + 7) = 0x697274616d206573;
      *(undefined8 *)(puVar9 + 5) = 0x7261707320656e69;
      *(undefined8 *)(puVar9 + 0xb) = 0x7974696c616e6f69;
      *(undefined8 *)(puVar9 + 9) = 0x736e656d69642078;
      FUN_109ac3188(0xffffff2c,&puStack_2070,&UNK_10f59a6c0,&UNK_10f598d74,0xed7);
    }
    else {
      FUN_109aae2f4(param_1,puVar25,auStack_1070,"i");
      piVar22 = piVar20;
      FUN_109ab5dd0();
      puVar25 = param_1;
      FUN_109aa9324(param_1,param_2,"data");
      if ((puVar25 != (uint *)0x0) && ((*puVar25 & 7) == 5)) {
        piVar6 = piVar21;
        FUN_109a3ac64(piVar21,auStack_1070,piVar22);
        lVar26 = *(long *)(puVar25 + 4);
        puVar14 = auStack_20b0;
        puVar7 = param_1;
        puVar13 = puVar25;
        FUN_109aadaa0(param_1,puVar25);
        if (0 < *(int *)(lVar26 + 0x28)) {
          puVar25 = (uint *)0x0;
          uVar4 = (uint)piVar22 >> 3 & 0x1ff;
          piVar22 = (int *)(ulong)uVar4;
          unaff_x26 = (ulong)(uVar24 - 1);
          do {
            iVar23 = (int)puVar25;
            if ((*puStack_2098 & 7) != 1) {
              puVar9 = (undefined4 *)0x24;
              func_0x000107c2ae8c();
              *puVar9 = 1;
              puStack_20c0 = puVar9 + 1;
              uStack_20b8 = 0x1f;
              *(undefined1 *)((long)puVar9 + 0x23) = 0;
              *(undefined8 *)(puVar9 + 3) = 0x6164207869727461;
              *(undefined8 *)(puVar9 + 1) = 0x6d20657372617053;
              *(undefined8 *)((long)puVar9 + 0x1b) = 0x646574707572726f;
              *(undefined8 *)((long)puVar9 + 0x13) = 0x6320736920617461;
              FUN_109ac3188(0xffffff2c,&puStack_20c0,&UNK_10f59a6c0,&UNK_10f598d74,0xeed);
              goto LAB_109ab0a70;
            }
            uVar1 = puStack_2098[4];
            puVar25 = puStack_2088;
            if ((iVar23 < 1) || ((int)uVar1 < 0)) {
              if (iVar23 < 1) {
                puStack_2070 = (undefined4 *)CONCAT44(puStack_2070._4_4_,uVar1);
                iVar19 = 1;
              }
              else {
                iVar19 = uVar1 + (uVar24 - 1);
              }
              iVar15 = *(int *)(lVar26 + 0x2c);
              iVar18 = uVar24 - iVar19;
              if (iVar18 != 0 && iVar19 <= (int)uVar24) {
                iVar23 = (iVar23 + uVar24) - iVar19;
                lVar17 = lStack_20a0;
                puVar14 = (uint *)((long)&puStack_2070 + (long)iVar19 * 4);
                do {
                  puStack_2098 = (uint *)((long)puStack_2098 + (long)iVar15);
                  if (puVar25 <= puStack_2098) {
                    lVar17 = *(long *)(lVar17 + 8);
                    puStack_2098 = *(uint **)(lVar17 + 0x18);
                    puVar25 = (uint *)((long)puStack_2098 +
                                      (long)*(int *)(lVar17 + 0x14) *
                                      (long)*(int *)(lStack_20a8 + 0x2c));
                    lStack_20a0 = lVar17;
                    puStack_2090 = puStack_2098;
                    puStack_2088 = puVar25;
                  }
                  if (((*puStack_2098 & 7) != 1) || ((int)puStack_2098[4] < 0)) {
                    puVar9 = (undefined4 *)0x24;
                    func_0x000107c2ae8c();
                    *puVar9 = 1;
                    puStack_20c0 = puVar9 + 1;
                    uStack_20b8 = 0x1f;
                    *(undefined1 *)((long)puVar9 + 0x23) = 0;
                    *(undefined8 *)(puVar9 + 3) = 0x6164207869727461;
                    *(undefined8 *)(puVar9 + 1) = 0x6d20657372617053;
                    *(undefined8 *)((long)puVar9 + 0x1b) = 0x646574707572726f;
                    *(undefined8 *)((long)puVar9 + 0x13) = 0x6320736920617461;
                    FUN_109ac3188(0xffffff2c,&puStack_20c0,&UNK_10f59a6c0,&UNK_10f598d74,0xefd);
                    goto LAB_109ab0a70;
                  }
                  *puVar14 = puStack_2098[4];
                  iVar18 = iVar18 + -1;
                  puVar14 = puVar14 + 1;
                } while (iVar18 != 0);
              }
            }
            else {
              *(uint *)((long)&puStack_2070 + unaff_x26 * 4) = uVar1;
              iVar15 = *(int *)(lVar26 + 0x2c);
            }
            puStack_2098 = (uint *)((long)puStack_2098 + (long)iVar15);
            if (puVar25 <= puStack_2098) {
              lStack_20a0 = *(long *)(lStack_20a0 + 8);
              puStack_2098 = *(uint **)(lStack_20a0 + 0x18);
              puStack_2088 = (uint *)((long)puStack_2098 +
                                     (long)*(int *)(lStack_20a0 + 0x14) *
                                     (long)*(int *)(lStack_20a8 + 0x2c));
              puStack_2090 = puStack_2098;
            }
            piVar8 = piVar6;
            FUN_109a3c484(piVar6,&puStack_2070,0,1,0);
            puVar13 = auStack_20b0;
            puVar14 = (uint *)(ulong)(uVar4 + 1);
            puVar7 = param_1;
            FUN_109aadcf4(param_1,puVar13,puVar14,piVar8,piVar20);
            uVar1 = uVar4 + 2 + iVar23;
            puVar25 = (uint *)(ulong)uVar1;
          } while ((int)uVar1 < *(int *)(lVar26 + 0x28));
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          return piVar6;
        }
        ___stack_chk_fail();
        puStack_2070 = (undefined4 *)0x0;
        uStack_2068 = 0;
        do {
          iVar23 = *piVar20;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar3) {
            *piVar20 = iVar23 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar23 + -1 == 0) {
          _free(*(undefined8 *)(piVar20 + -2));
        }
        puVar10 = puVar7;
        __Unwind_Resume();
        pcStack_20c8 = FUN_109ab0b1c;
        lStack_2118 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar11 = 0;
        uStack_2110 = unaff_x26;
        lStack_2108 = lVar26;
        puStack_2100 = puVar25;
        piStack_20f8 = piVar22;
        piStack_20f0 = piVar6;
        piStack_20e8 = piVar21;
        piStack_20e0 = piVar20;
        puStack_20d8 = puVar7;
        puStack_20d0 = &stack0xfffffffffffffff0;
        FUN_109a4bacc();
        uStack_2130 = uVar11;
        FUN_109aac02c(puVar10,puVar13,6,&UNK_10f599371);
        puVar25 = puVar14;
        FUN_109a3b600(puVar14,0);
        iStack_218c = (int)puVar25;
        FUN_109aac02c(puVar10,&UNK_10f59a68b,0xd,0);
        FUN_109aac75c(puVar10,puVar14 + 0xd,puVar25,"i");
        FUN_109aac19c(puVar10);
        uVar12 = (ulong)(*puVar14 & 0xfff);
        FUN_109ab6764(uVar12,auStack_2128);
        FUN_109aac5ec(puVar10,&UNK_10f59a1e9,uVar12,0);
        FUN_109aac02c(puVar10,"data",0xd,0);
        lVar26 = 7;
        FUN_109a4c4b8(7,0x60,8,uVar11);
        puVar25 = puVar14;
        FUN_109a3b1dc(puVar14,&lStack_2148);
        puVar13 = puStack_2140;
        uVar24 = uStack_2138;
        if (puVar25 != (uint *)0x0) {
          while( true ) {
            do {
              puStack_2140 = puVar13;
              lStack_2188 = (long)puVar25 + (long)(int)puVar14[0xc];
              FUN_109a4d978(lVar26,&lStack_2188);
              puVar25 = *(uint **)(puStack_2140 + 2);
              puVar13 = puVar25;
            } while (puVar25 != (uint *)0x0);
            lVar17 = (long)(int)uStack_2138;
            uVar24 = uStack_2138 + 1;
            if (*(int *)(lStack_2148 + 0x28) <= (int)uVar24) break;
            iVar23 = ~uStack_2138 + *(int *)(lStack_2148 + 0x28);
            while( true ) {
              lVar17 = lVar17 + 1;
              puVar25 = *(uint **)(*(long *)(lStack_2148 + 0x20) + lVar17 * 8);
              if (puVar25 != (uint *)0x0) break;
              iVar23 = iVar23 + -1;
              if (iVar23 == 0) goto LAB_109ab0ca4;
            }
            uStack_2138 = (uint)lVar17;
            puVar13 = puVar25;
          }
        }
LAB_109ab0ca4:
        uStack_2138 = uVar24;
        FUN_109a4e5a4(lVar26,FUN_109ab67d4,&iStack_218c);
        FUN_109a4cb14(lVar26,&lStack_2188,0);
        if (0 < *(int *)(lVar26 + 0x28)) {
          iVar23 = 0;
          piVar20 = (int *)0x0;
          do {
            puVar16 = puStack_2170 + 1;
            piVar21 = (int *)*puStack_2170;
            puStack_2170 = puVar16;
            if (puStack_2160 <= puVar16) {
              lStack_2178 = *(long *)(lStack_2178 + 8);
              puStack_2170 = *(undefined8 **)(lStack_2178 + 0x18);
              puStack_2160 = (undefined8 *)
                             ((long)puStack_2170 +
                             (long)*(int *)(lStack_2178 + 0x14) * (long)*(int *)(lStack_2180 + 0x2c)
                             );
              puStack_2168 = puStack_2170;
            }
            if (iVar23 == 0) {
              uVar24 = 0;
            }
            else {
              piVar22 = piVar21;
              uVar4 = 0;
              do {
                uVar24 = uVar4;
                iVar19 = *piVar22;
                iVar15 = *piVar20;
                piVar20 = piVar20 + 1;
                piVar22 = piVar22 + 1;
                uVar4 = uVar24 + 1;
              } while (iVar19 == iVar15);
              if ((int)uVar24 < iStack_218c + -1) {
                (**(code **)(puVar10 + 0x4e))(puVar10,0,(uVar24 + 1) - iStack_218c);
              }
            }
            if ((int)uVar24 < iStack_218c) {
              piVar20 = piVar21 + uVar24;
              do {
                (**(code **)(puVar10 + 0x4e))(puVar10,0,*piVar20);
                uVar24 = uVar24 + 1;
                piVar20 = piVar20 + 1;
              } while ((int)uVar24 < iStack_218c);
            }
            FUN_109aac75c(puVar10,(long)piVar21 +
                                  ((long)(int)puVar14[0xb] - (long)(int)puVar14[0xc]),1,auStack_2128
                         );
            iVar23 = iVar23 + 1;
            piVar20 = piVar21;
          } while (iVar23 < *(int *)(lVar26 + 0x28));
        }
        FUN_109aac19c(puVar10);
        FUN_109aac19c(puVar10);
        piVar20 = (int *)&uStack_2130;
        FUN_109a4bc4c();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2118) {
          ___stack_chk_fail();
          __Unwind_Resume();
          piVar21 = (int *)0x0;
          if (piVar20 != (int *)0x0) {
            piVar21 = (int *)(ulong)(*piVar20 == 0x90);
          }
          return piVar21;
        }
        return piVar20;
      }
      puVar9 = (undefined4 *)0x34;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      puStack_2070 = puVar9 + 1;
      uStack_2068 = 0x2c;
      *(undefined1 *)(puVar9 + 0xc) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x2061746164207869;
      *(undefined8 *)(puVar9 + 1) = 0x7274616d20656854;
      *(undefined8 *)(puVar9 + 7) = 0x206e6920646e756f;
      *(undefined8 *)(puVar9 + 5) = 0x6620746f6e207369;
      *(undefined8 *)(puVar9 + 10) = 0x656761726f747320;
      *(undefined8 *)(puVar9 + 8) = 0x656c6966206e6920;
      FUN_109ac3188(0xfffffffe,&puStack_2070,&UNK_10f59a6c0,&UNK_10f598d74,0xede);
    }
  }
LAB_109ab0a70:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109ab0a74);
  (*pcVar5)();
}



/* Entry: 109ab0b1c; end: 109ab0e1b;  */

void FUN_109ab0b1c(long param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int iStack_cc;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long lStack_88;
  uint *puStack_80;
  uint uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = 0;
  FUN_109a4bacc();
  uStack_70 = uVar5;
  FUN_109aac02c(param_1,param_2,6,&UNK_10f599371);
  puVar8 = param_3;
  FUN_109a3b600(param_3,0);
  iStack_cc = (int)puVar8;
  FUN_109aac02c(param_1,&UNK_10f59a68b,0xd,0);
  FUN_109aac75c(param_1,param_3 + 0xd,puVar8,"i");
  FUN_109aac19c(param_1);
  uVar6 = (ulong)(*param_3 & 0xfff);
  FUN_109ab6764(uVar6,auStack_68);
  FUN_109aac5ec(param_1,&UNK_10f59a1e9,uVar6,0);
  FUN_109aac02c(param_1,"data",0xd,0);
  lVar7 = 7;
  FUN_109a4c4b8(7,0x60,8,uVar5);
  puVar8 = param_3;
  FUN_109a3b1dc(param_3,&lStack_88);
  puVar4 = puStack_80;
  uVar15 = uStack_78;
  if (puVar8 != (uint *)0x0) {
    while( true ) {
      do {
        puStack_80 = puVar4;
        lStack_c8 = (long)puVar8 + (long)(int)param_3[0xc];
        FUN_109a4d978(lVar7,&lStack_c8);
        puVar8 = *(uint **)(puStack_80 + 2);
        puVar4 = puVar8;
      } while (puVar8 != (uint *)0x0);
      lVar12 = (long)(int)uStack_78;
      uVar15 = uStack_78 + 1;
      if (*(int *)(lStack_88 + 0x28) <= (int)uVar15) break;
      iVar11 = ~uStack_78 + *(int *)(lStack_88 + 0x28);
      while( true ) {
        lVar12 = lVar12 + 1;
        puVar8 = *(uint **)(*(long *)(lStack_88 + 0x20) + lVar12 * 8);
        if (puVar8 != (uint *)0x0) break;
        iVar11 = iVar11 + -1;
        if (iVar11 == 0) goto LAB_109ab0ca4;
      }
      uStack_78 = (uint)lVar12;
      puVar4 = puVar8;
    }
  }
LAB_109ab0ca4:
  uStack_78 = uVar15;
  FUN_109a4e5a4(lVar7,FUN_109ab67d4,&iStack_cc);
  FUN_109a4cb14(lVar7,&lStack_c8,0);
  if (0 < *(int *)(lVar7 + 0x28)) {
    iVar11 = 0;
    piVar9 = (int *)0x0;
    do {
      puVar10 = puStack_b0 + 1;
      piVar14 = (int *)*puStack_b0;
      puStack_b0 = puVar10;
      if (puStack_a0 <= puVar10) {
        lStack_b8 = *(long *)(lStack_b8 + 8);
        puStack_b0 = *(undefined8 **)(lStack_b8 + 0x18);
        puStack_a0 = (undefined8 *)
                     ((long)puStack_b0 +
                     (long)*(int *)(lStack_b8 + 0x14) * (long)*(int *)(lStack_c0 + 0x2c));
        puStack_a8 = puStack_b0;
      }
      if (iVar11 == 0) {
        uVar15 = 0;
      }
      else {
        piVar13 = piVar14;
        uVar3 = 0;
        do {
          uVar15 = uVar3;
          iVar1 = *piVar13;
          iVar2 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar13 = piVar13 + 1;
          uVar3 = uVar15 + 1;
        } while (iVar1 == iVar2);
        if ((int)uVar15 < iStack_cc + -1) {
          (**(code **)(param_1 + 0x138))(param_1,0,(uVar15 + 1) - iStack_cc);
        }
      }
      if ((int)uVar15 < iStack_cc) {
        piVar9 = piVar14 + uVar15;
        do {
          (**(code **)(param_1 + 0x138))(param_1,0,*piVar9);
          uVar15 = uVar15 + 1;
          piVar9 = piVar9 + 1;
        } while ((int)uVar15 < iStack_cc);
      }
      FUN_109aac75c(param_1,(long)piVar14 + ((long)(int)param_3[0xb] - (long)(int)param_3[0xc]),1,
                    auStack_68);
      iVar11 = iVar11 + 1;
      piVar9 = piVar14;
    } while (iVar11 < *(int *)(lVar7 + 0x28));
  }
  FUN_109aac19c(param_1);
  FUN_109aac19c(param_1);
  FUN_109a4bc4c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  return;
}



/* Entry: 109ab0e1c; end: 109ab0e2f;  */

bool FUN_109ab0e1c(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != (int *)0x0) {
    bVar1 = *param_1 == 0x90;
  }
  return bVar1;
}



/* Entry: 109ab0e30; end: 109ab1507;  */

ulong FUN_109ab0e30(uint *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint *puVar4;
  long lVar5;
  undefined *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  undefined4 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [64];
  
  puVar4 = param_1;
  FUN_109aa9324(param_1,param_2,"width");
  if (puVar4 == (uint *)0x0) {
    uVar21 = 0;
  }
  else if ((*puVar4 & 7) == 2) {
    uVar21 = (uint)(long)(double)(long)*(double *)(puVar4 + 4);
  }
  else if ((*puVar4 & 7) == 1) {
    uVar21 = puVar4[4];
  }
  else {
    uVar21 = 0x7fffffff;
  }
  puVar4 = param_1;
  FUN_109aa9324(param_1,param_2,"height");
  if (puVar4 == (uint *)0x0) {
    uVar19 = 0;
  }
  else if ((*puVar4 & 7) == 2) {
    uVar19 = (ulong)(double)(long)*(double *)(puVar4 + 4);
  }
  else if ((*puVar4 & 7) == 1) {
    uVar19 = (ulong)puVar4[4];
  }
  else {
    uVar19 = 0x7fffffff;
  }
  puVar4 = param_1;
  FUN_109aa9324(param_1,param_2,&UNK_10f59a1e9);
  if ((puVar4 == (uint *)0x0) || ((*puVar4 & 7) != 3)) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(puVar4 + 6);
  }
  puVar4 = param_1;
  FUN_109aa9324(param_1,param_2,"origin");
  if ((((puVar4 == (uint *)0x0) || ((*puVar4 & 7) != 3)) || (uVar21 == 0)) ||
     (((iVar18 = (int)uVar19, iVar18 == 0 || (lVar14 == 0)) || (*(long *)(puVar4 + 6) == 0)))) {
    puVar9 = (undefined4 *)0x34;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar9 + 3) = 0x6169746e65737365;
    *(undefined8 *)(puVar9 + 1) = 0x20666f20656d6f53;
    *puVar9 = 1;
    puStack_b0 = puVar9 + 1;
    uStack_a8 = 0x2d;
    *(undefined1 *)((long)puVar9 + 0x31) = 0;
    *(undefined8 *)(puVar9 + 7) = 0x7475626972747461;
    *(undefined8 *)(puVar9 + 5) = 0x206567616d69206c;
    *(undefined8 *)((long)puVar9 + 0x29) = 0x746e657362612065;
    *(undefined8 *)((long)puVar9 + 0x21) = 0x7261207365747562;
    FUN_109ac3188(0xfffffffe,&puStack_b0,&UNK_10f59a77d,&UNK_10f598d74,0xf5d);
  }
  else {
    lVar5 = lVar14;
    FUN_109ab5dd0();
    puVar4 = param_1;
    FUN_109aa9324(param_1,param_2,"layout");
    if (puVar4 == (uint *)0x0) {
      puVar6 = &UNK_10f5893cc;
    }
    else {
      puVar6 = *(undefined **)(puVar4 + 6);
    }
    _strcmp(puVar6,&UNK_10f5893cc);
    if ((int)puVar6 == 0) {
      puVar4 = param_1;
      FUN_109aa9324(param_1,param_2,"data");
      if (puVar4 == (uint *)0x0) {
        puVar9 = (undefined4 *)0x30;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar9 + 3) = 0x6920617461642065;
        *(undefined8 *)(puVar9 + 1) = 0x67616d6920656854;
        *puVar9 = 1;
        puStack_b0 = puVar9 + 1;
        uStack_a8 = 0x2b;
        *(undefined1 *)((long)puVar9 + 0x2f) = 0;
        *(undefined8 *)(puVar9 + 7) = 0x66206e6920646e75;
        *(undefined8 *)(puVar9 + 5) = 0x6f6620746f6e2073;
        *(undefined8 *)((long)puVar9 + 0x27) = 0x656761726f747320;
        *(undefined8 *)((long)puVar9 + 0x1f) = 0x656c6966206e6920;
        FUN_109ac3188(0xfffffffe,&puStack_b0,&UNK_10f59a77d,&UNK_10f598d74,0xf66);
      }
      else {
        if ((*puVar4 & 7) < 5) {
          uVar10 = (uint)((*puVar4 & 7) != 0);
        }
        else {
          uVar10 = *(uint *)(*(long *)(puVar4 + 4) + 0x28);
        }
        uVar2 = iVar18 * uVar21;
        uVar15 = (uint)lVar5;
        iVar1 = (uVar15 >> 3 & 0x1ff) + 1;
        if (uVar10 == iVar1 * uVar2) {
          uVar10 = 0x80000000;
          if ((uVar15 & 7) != 4 && (uVar15 & 5) != 1) {
            uVar10 = 0;
          }
          uVar19 = (ulong)uVar21 | uVar19 << 0x20;
          FUN_109a3d32c(uVar19,(uint)(0x442211088 >> ((uVar15 & 7) << 2)) & 0x78 | uVar10,iVar1);
          puVar7 = param_1;
          FUN_109aa9324(param_1,param_2,&UNK_10f59a7ee);
          if (puVar7 != (uint *)0x0) {
            puVar8 = param_1;
            FUN_109aa9324(param_1,puVar7,&DAT_10f62b0e2);
            if (puVar8 == (uint *)0x0) {
              uVar11 = 0;
            }
            else if ((*puVar8 & 7) == 2) {
              uVar11 = (ulong)(double)(long)*(double *)(puVar8 + 4);
            }
            else if ((*puVar8 & 7) == 1) {
              uVar11 = (ulong)puVar8[4];
            }
            else {
              uVar11 = 0x7fffffff;
            }
            puVar8 = param_1;
            FUN_109aa9324(param_1,puVar7,"y");
            if (puVar8 == (uint *)0x0) {
              uVar20 = 0;
            }
            else if ((*puVar8 & 7) == 2) {
              uVar20 = (ulong)(double)(long)*(double *)(puVar8 + 4);
            }
            else if ((*puVar8 & 7) == 1) {
              uVar20 = (ulong)puVar8[4];
            }
            else {
              uVar20 = 0x7fffffff;
            }
            puVar8 = param_1;
            FUN_109aa9324(param_1,puVar7,"width");
            if (puVar8 == (uint *)0x0) {
              uVar12 = 0;
            }
            else if ((*puVar8 & 7) == 2) {
              uVar12 = (ulong)(double)(long)*(double *)(puVar8 + 4);
            }
            else if ((*puVar8 & 7) == 1) {
              uVar12 = (ulong)puVar8[4];
            }
            else {
              uVar12 = 0x7fffffff;
            }
            puVar8 = param_1;
            FUN_109aa9324(param_1,puVar7,"height");
            if (puVar8 == (uint *)0x0) {
              uVar13 = 0;
            }
            else if ((*puVar8 & 7) == 2) {
              uVar13 = (ulong)(double)(long)*(double *)(puVar8 + 4);
            }
            else if ((*puVar8 & 7) == 1) {
              uVar13 = (ulong)puVar8[4];
            }
            else {
              uVar13 = 0x7fffffff;
            }
            puVar8 = param_1;
            FUN_109aa9324(param_1,puVar7,&UNK_10f59a7f2);
            if (puVar8 == (uint *)0x0) {
              uVar17 = 0;
            }
            else if ((*puVar8 & 7) == 2) {
              uVar17 = (ulong)(double)(long)*(double *)(puVar8 + 4);
            }
            else if ((*puVar8 & 7) == 1) {
              uVar17 = (ulong)puVar8[4];
            }
            else {
              uVar17 = 0x7fffffff;
            }
            FUN_109a3d510(uVar19,uVar11 & 0xffffffff | uVar20 << 0x20,
                          uVar12 & 0xffffffff | uVar13 << 0x20);
            FUN_109a3d720(uVar19,uVar17);
          }
          if ((iVar1 << (ulong)(0xfa50U >> (ulong)((uVar15 & 7) << 1) & 3)) * uVar21 ==
              *(int *)(uVar19 + 0x60)) {
            iVar18 = 1;
            uVar21 = uVar2;
          }
          FUN_109aadaa0(param_1,puVar4,auStack_a0);
          if (0 < iVar18) {
            iVar16 = 0;
            do {
              FUN_109aadcf4(param_1,auStack_a0,uVar21 * iVar1,
                            *(long *)(uVar19 + 0x58) + (long)*(int *)(uVar19 + 0x60) * (long)iVar16,
                            lVar14);
              iVar16 = iVar16 + 1;
            } while (iVar18 != iVar16);
          }
          return uVar19;
        }
        puVar9 = (undefined4 *)0x44;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar9 + 3) = 0x20657a6973207869;
        *(undefined8 *)(puVar9 + 1) = 0x7274616d20656854;
        *puVar9 = 1;
        puStack_b0 = puVar9 + 1;
        uStack_a8 = 0x3f;
        *(undefined1 *)((long)puVar9 + 0x43) = 0;
        *(undefined8 *)(puVar9 + 7) = 0x7420686374616d20;
        *(undefined8 *)(puVar9 + 5) = 0x746f6e2073656f64;
        *(undefined8 *)(puVar9 + 0xb) = 0x20666f207265626d;
        *(undefined8 *)(puVar9 + 9) = 0x756e20656874206f;
        *(undefined8 *)((long)puVar9 + 0x3b) = 0x73746e656d656c65;
        *(undefined8 *)((long)puVar9 + 0x33) = 0x206465726f747320;
        FUN_109ac3188(0xffffff2f,&puStack_b0,&UNK_10f59a77d,&UNK_10f598d74,0xf6a);
      }
    }
    else {
      puVar9 = (undefined4 *)0x28;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar9 + 3) = 0x64657661656c7265;
      *(undefined8 *)(puVar9 + 1) = 0x746e6920796c6e4f;
      *puVar9 = 1;
      puStack_b0 = puVar9 + 1;
      uStack_a8 = 0x23;
      *(undefined1 *)((long)puVar9 + 0x27) = 0;
      *(undefined4 *)((long)puVar9 + 0x23) = 0x64616572;
      *(undefined8 *)(puVar9 + 7) = 0x72206562206e6163;
      *(undefined8 *)(puVar9 + 5) = 0x20736567616d6920;
      FUN_109ac3188(0xfffffffe,&puStack_b0,&UNK_10f59a77d,&UNK_10f598d74,0xf62);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109ab1488);
  (*pcVar3)();
}



/* Entry: 109ab1508; end: 109ab1867;  */

int * FUN_109ab1508(int *param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  char cStack_68;
  char cStack_67;
  char cStack_66;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_3 + 0x1c) == 1) {
    puVar11 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar11 + 3) = 0x6e616c7020687469;
    *(undefined8 *)(puVar11 + 1) = 0x7720736567616d49;
    *puVar11 = 1;
    puStack_78 = puVar11 + 1;
    uStack_70 = 0x30;
    *(undefined1 *)(puVar11 + 0xd) = 0;
    *(undefined8 *)(puVar11 + 7) = 0x612074756f79616c;
    *(undefined8 *)(puVar11 + 5) = 0x2061746164207261;
    *(undefined8 *)(puVar11 + 0xb) = 0x646574726f707075;
    *(undefined8 *)(puVar11 + 9) = 0x7320746f6e206572;
    FUN_109ac3188(0xffffff2e,&puStack_78,&UNK_10f59a827,&UNK_10f598d74,0xf22);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x109ab1830);
    (*pcVar9)();
  }
  FUN_109aac02c(param_1,param_2,6,&UNK_10f599386);
  FUN_109aac30c(param_1,"width",*(undefined4 *)(param_3 + 0x28));
  FUN_109aac30c(param_1,"height",*(undefined4 *)(param_3 + 0x2c));
  puVar2 = &UNK_10f59a835;
  if (*(int *)(param_3 + 0x20) != 0) {
    puVar2 = &UNK_10f59a83e;
  }
  FUN_109aac5ec(param_1,"origin",puVar2,0);
  puVar2 = &UNK_10f56e67a;
  if (*(int *)(param_3 + 0x1c) != 1) {
    puVar2 = &UNK_10f5893cc;
  }
  FUN_109aac5ec(param_1,"layout",puVar2,0);
  if (*(long *)(param_3 + 0x30) != 0) {
    FUN_109aac02c(param_1,&UNK_10f59a7ee,0xe,0);
    FUN_109aac30c(param_1,&DAT_10f62b0e2,*(undefined4 *)(*(long *)(param_3 + 0x30) + 4));
    FUN_109aac30c(param_1,"y",*(undefined4 *)(*(long *)(param_3 + 0x30) + 8));
    FUN_109aac30c(param_1,"width",*(undefined4 *)(*(long *)(param_3 + 0x30) + 0xc));
    FUN_109aac30c(param_1,"height",*(undefined4 *)(*(long *)(param_3 + 0x30) + 0x10));
    FUN_109aac30c(param_1,&UNK_10f59a7f2,**(undefined4 **)(param_3 + 0x30));
    FUN_109aac19c(param_1);
  }
  uVar6 = *(uint *)(param_3 + 0x10);
  pcVar1 = &cStack_68;
  _sprintf(&cStack_68,&UNK_10f59a453);
  if (cStack_66 == '\0' && cStack_68 == '1') {
    pcVar1 = &cStack_67;
  }
  FUN_109aac5ec(param_1,&UNK_10f59a1e9,pcVar1,0);
  iVar4 = *(int *)(param_3 + 0x28);
  iVar5 = *(int *)(param_3 + 0x2c);
  if (*(int *)(param_3 + 8) * iVar4 <<
      (ulong)(0xfa50U >>
              (ulong)((0x43160520U >>
                       (ulong)((uVar6 >> 2 & 0x3c) + ((int)uVar6 >> 0x1f & 0x14U) & 0x1f) & 7) << 1)
             & 3) == *(int *)(param_3 + 0x60)) {
    iVar3 = iVar5;
    iVar5 = 1;
  }
  else {
    iVar3 = 1;
  }
  FUN_109aac02c(param_1,"data",0xd,0);
  if (0 < iVar5) {
    iVar13 = 0;
    do {
      FUN_109aac75c(param_1,*(long *)(param_3 + 0x58) +
                            (long)*(int *)(param_3 + 0x60) * (long)iVar13,iVar3 * iVar4,pcVar1);
      iVar13 = iVar13 + 1;
    } while (iVar5 != iVar13);
  }
  FUN_109aac19c(param_1);
  piVar10 = param_1;
  FUN_109aac19c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puStack_78 = (undefined4 *)0x0;
    uStack_70 = 0;
    do {
      iVar4 = *param_1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar8) {
        *param_1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar4 + -1 == 0) {
      _free(*(undefined8 *)(param_1 + -2));
    }
    __Unwind_Resume();
    piVar12 = (int *)0x0;
    if (piVar10 != (int *)0x0) {
      if ((*(short *)((long)piVar10 + 2) != 0x4242) || (piVar10[9] < 0)) {
        return (int *)0x0;
      }
      piVar12 = (int *)(ulong)((uint)~piVar10[8] >> 0x1f);
    }
    return piVar12;
  }
  return piVar10;
}



/* Entry: 109ab1868; end: 109ab189b;  */

uint FUN_109ab1868(long param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((*(short *)(param_1 + 2) != 0x4242) || (*(int *)(param_1 + 0x24) < 0)) {
      return 0;
    }
    uVar1 = ~*(uint *)(param_1 + 0x20) >> 0x1f;
  }
  return uVar1;
}



/* Entry: 109ab189c; end: 109ab1c13;  */

uint * FUN_109ab189c(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  puVar8 = param_1;
  FUN_109aa9324(param_1,param_2,&DAT_10f334829);
  if (puVar8 == (uint *)0x0) {
    puVar8 = (uint *)0xffffffff;
  }
  else if ((*puVar8 & 7) == 2) {
    puVar8 = (uint *)(long)(double)(long)*(double *)(puVar8 + 4);
  }
  else if ((*puVar8 & 7) == 1) {
    puVar8 = (uint *)(ulong)puVar8[4];
  }
  else {
    puVar8 = (uint *)0x7fffffff;
  }
  puVar3 = param_1;
  FUN_109aa9324(param_1,param_2,&UNK_10f59a84a);
  if (puVar3 == (uint *)0x0) {
    uVar10 = 0xffffffff;
  }
  else if ((*puVar3 & 7) == 2) {
    uVar10 = (ulong)(double)(long)*(double *)(puVar3 + 4);
  }
  else if ((*puVar3 & 7) == 1) {
    uVar10 = (ulong)puVar3[4];
  }
  else {
    uVar10 = 0x7fffffff;
  }
  puVar3 = param_1;
  FUN_109aa9324(param_1,param_2,&UNK_10f59a1e9);
  if ((((puVar3 == (uint *)0x0) || ((*puVar3 & 7) != 3)) || (iVar7 = (int)puVar8, iVar7 < 0)) ||
     ((iVar9 = (int)uVar10, iVar9 < 0 || (lVar11 = *(long *)(puVar3 + 6), lVar11 == 0)))) {
    puVar5 = (undefined4 *)0x34;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar5 + 3) = 0x6169746e65737365;
    *(undefined8 *)(puVar5 + 1) = 0x20666f20656d6f53;
    *puVar5 = 1;
    puStack_50 = puVar5 + 1;
    uStack_48 = 0x2e;
    *(undefined1 *)((long)puVar5 + 0x32) = 0;
    *(undefined8 *)(puVar5 + 7) = 0x7562697274746120;
    *(undefined8 *)(puVar5 + 5) = 0x78697274616d206c;
    *(undefined8 *)((long)puVar5 + 0x2a) = 0x746e657362612065;
    *(undefined8 *)((long)puVar5 + 0x22) = 0x7261207365747562;
    FUN_109ac3188(0xfffffffe,&puStack_50,&UNK_10f59a84f,&UNK_10f598d74,0xde3);
  }
  else {
    lVar4 = lVar11;
    FUN_109ab5dd0();
    puVar3 = param_1;
    FUN_109aa9324(param_1,param_2,"data");
    if (puVar3 == (uint *)0x0) {
      puVar5 = (undefined4 *)0x34;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar5 + 3) = 0x2061746164207869;
      *(undefined8 *)(puVar5 + 1) = 0x7274616d20656854;
      *puVar5 = 1;
      puStack_50 = puVar5 + 1;
      uStack_48 = 0x2c;
      *(undefined1 *)(puVar5 + 0xc) = 0;
      *(undefined8 *)(puVar5 + 7) = 0x206e6920646e756f;
      *(undefined8 *)(puVar5 + 5) = 0x6620746f6e207369;
      *(undefined8 *)(puVar5 + 10) = 0x656761726f747320;
      *(undefined8 *)(puVar5 + 8) = 0x656c6966206e6920;
      FUN_109ac3188(0xfffffffe,&puStack_50,&UNK_10f59a84f,&UNK_10f598d74,0xde9);
    }
    else {
      if ((*puVar3 & 7) < 5) {
        uVar6 = (uint)((*puVar3 & 7) != 0);
      }
      else {
        uVar6 = *(uint *)(*(long *)(puVar3 + 4) + 0x28);
      }
      uVar12 = (uint)lVar4;
      if ((int)uVar6 < 1) {
        if (iVar7 == 0 && iVar9 == 0) {
          puVar8 = (uint *)0x0;
          uVar10 = 1;
        }
        if ((-1 < (int)(uint)puVar8) && (uVar6 = (uint)uVar10, 0 < (int)uVar6)) {
          uVar1 = ((uVar12 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar12 & 7) << 1) & 3))
                  * uVar6;
          puVar3 = (uint *)0x28;
          func_0x000107c2ae8c();
          *puVar3 = uVar12 & 0xfff | 0x42424000;
          puVar3[1] = uVar1;
          puVar3[8] = (uint)puVar8;
          puVar3[9] = uVar6;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 1;
          if ((ulong)uVar1 * ((ulong)puVar8 & 0xffffffff) >> 0x1f != 0) {
            *puVar3 = uVar12 & 0xfff | 0x42420000;
          }
          return puVar3;
        }
        puVar5 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar5 = 1;
        *(undefined1 *)(puVar5 + 8) = 0;
        *(undefined8 *)(puVar5 + 3) = 0x6469772065766974;
        *(undefined8 *)(puVar5 + 1) = 0x69736f702d6e6f4e;
        *(undefined8 *)(puVar5 + 6) = 0x7468676965682072;
        *(undefined8 *)(puVar5 + 4) = 0x6f20687464697720;
        FUN_109ac3188(0xffffff37,&stack0xffffffffffffffc0,&UNK_10f5953be,&UNK_10f595324,0x77);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109a3904c);
        (*pcVar2)();
      }
      if (uVar6 == iVar9 * iVar7 + iVar9 * iVar7 * (uVar12 >> 3 & 0x1ff)) {
        FUN_109a38f44(puVar8,uVar10,lVar4);
        FUN_109a3907c();
        FUN_109aae2f4(param_1,puVar3,*(undefined8 *)(puVar8 + 6),lVar11);
        return puVar8;
      }
      puVar5 = (undefined4 *)0x44;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar5 + 3) = 0x20657a6973207869;
      *(undefined8 *)(puVar5 + 1) = 0x7274616d20656854;
      *puVar5 = 1;
      puStack_50 = puVar5 + 1;
      uStack_48 = 0x3f;
      *(undefined1 *)((long)puVar5 + 0x43) = 0;
      *(undefined8 *)(puVar5 + 7) = 0x7420686374616d20;
      *(undefined8 *)(puVar5 + 5) = 0x746f6e2073656f64;
      *(undefined8 *)(puVar5 + 0xb) = 0x20666f207265626d;
      *(undefined8 *)(puVar5 + 9) = 0x756e20656874206f;
      *(undefined8 *)((long)puVar5 + 0x3b) = 0x73746e656d656c65;
      *(undefined8 *)((long)puVar5 + 0x33) = 0x206465726f747320;
      FUN_109ac3188(0xffffff2f,&puStack_50,&UNK_10f59a84f,&UNK_10f598d74,0xdee);
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109ab1bb0);
  (*pcVar2)();
}



/* Entry: 109ab1c14; end: 109ab1d67;  */

void FUN_109ab1c14(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint *puVar4;
  int iVar5;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109aac02c(param_1,param_2,6,&UNK_10f599393);
  FUN_109aac30c(param_1,&DAT_10f334829,param_3[8]);
  FUN_109aac30c(param_1,&UNK_10f59a84a,param_3[9]);
  uVar3 = (ulong)(*param_3 & 0xfff);
  FUN_109ab6764(uVar3,auStack_58);
  FUN_109aac5ec(param_1,&UNK_10f59a1e9,uVar3,0);
  FUN_109aac02c(param_1,"data",0xd,0);
  puVar4 = param_3;
  FUN_109a3b788();
  if (0 < (int)puVar4) {
    iVar5 = (int)((ulong)puVar4 >> 0x20);
    if ((0 < iVar5) && (*(long *)(param_3 + 6) != 0)) {
      uVar1 = *param_3;
      if ((uVar1 & 0x4000) == 0) {
        iVar5 = 1;
      }
      uVar3 = 1;
      do {
        FUN_109aac75c(param_1,*(long *)(param_3 + 6) + (uVar3 - 1) * (long)(int)param_3[1],
                      iVar5 * (int)puVar4,auStack_58);
        if ((uVar1 >> 0xe & 1) != 0) break;
        bVar2 = uVar3 < (ulong)puVar4 >> 0x20;
        uVar3 = uVar3 + 1;
      } while (bVar2);
    }
  }
  FUN_109aac19c(param_1);
  FUN_109aac19c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 109ab1d68; end: 109ab1d83;  */

bool FUN_109ab1d68(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(short *)(param_1 + 2) == 0x4243;
  }
  return bVar1;
}



/* Entry: 109ab1d84; end: 109ab2153;  */

uint * FUN_109ab1d84(uint *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  uint *puVar15;
  undefined1 auStack_400 [8];
  ulong uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 auStack_2d0 [288];
  int *piStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [128];
  long lStack_118;
  uint *puStack_110;
  uint *puStack_108;
  int *piStack_100;
  uint *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined4 *puStack_d8;
  undefined8 uStack_d0;
  int aiStack_c8 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_1;
  FUN_109aa9324(param_1,param_2,&UNK_10f59a68b);
  puVar15 = param_1;
  FUN_109aa9324(param_1,param_2,&UNK_10f59a1e9);
  if ((((puVar15 == (uint *)0x0) || ((*puVar15 & 7) != 3)) || (puVar5 == (uint *)0x0)) ||
     (piVar14 = *(int **)(puVar15 + 6), piVar14 == (int *)0x0)) {
    puVar6 = (undefined4 *)0x34;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar6 + 3) = 0x6169746e65737365;
    *(undefined8 *)(puVar6 + 1) = 0x20666f20656d6f53;
    *puVar6 = 1;
    puStack_d8 = puVar6 + 1;
    uStack_d0 = 0x2e;
    *(undefined1 *)((long)puVar6 + 0x32) = 0;
    *(undefined8 *)(puVar6 + 7) = 0x7562697274746120;
    *(undefined8 *)(puVar6 + 5) = 0x78697274616d206c;
    *(undefined8 *)((long)puVar6 + 0x2a) = 0x746e657362612065;
    *(undefined8 *)((long)puVar6 + 0x22) = 0x7261207365747562;
    FUN_109ac3188(0xfffffffe,&puStack_d8,&UNK_10f59a85a,&UNK_10f598d74,0xe38);
  }
  else {
    if ((*puVar5 & 7) == 5) {
      uVar11 = *(uint *)(*(long *)(puVar5 + 4) + 0x28);
    }
    else {
      uVar11 = 1;
      if ((*puVar5 & 7) != 1) {
        uVar11 = 0xffffffff;
      }
    }
    puVar15 = (uint *)(ulong)uVar11;
    if (uVar11 - 0x21 < 0xffffffe0) {
      puVar6 = (undefined4 *)0x34;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar6 + 3) = 0x6d72657465642074;
      *(undefined8 *)(puVar6 + 1) = 0x6f6e20646c756f43;
      *puVar6 = 1;
      puStack_d8 = puVar6 + 1;
      uStack_d0 = 0x2d;
      *(undefined1 *)((long)puVar6 + 0x31) = 0;
      *(undefined8 *)(puVar6 + 7) = 0x642078697274616d;
      *(undefined8 *)(puVar6 + 5) = 0x2065687420656e69;
      *(undefined8 *)((long)puVar6 + 0x29) = 0x7974696c616e6f69;
      *(undefined8 *)((long)puVar6 + 0x21) = 0x736e656d69642078;
      FUN_109ac3188(0xffffff2c,&puStack_d8,&UNK_10f59a85a,&UNK_10f598d74,0xe3e);
    }
    else {
      FUN_109aae2f4(param_1,puVar5,aiStack_c8,"i");
      piVar10 = piVar14;
      FUN_109ab5dd0();
      puVar5 = param_1;
      FUN_109aa9324(param_1,param_2,"data");
      if (puVar5 == (uint *)0x0) {
        puVar6 = (undefined4 *)0x34;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        puStack_d8 = puVar6 + 1;
        uStack_d0 = 0x2c;
        *(undefined1 *)(puVar6 + 0xc) = 0;
        *(undefined8 *)(puVar6 + 3) = 0x2061746164207869;
        *(undefined8 *)(puVar6 + 1) = 0x7274616d20656854;
        *(undefined8 *)(puVar6 + 7) = 0x206e6920646e756f;
        *(undefined8 *)(puVar6 + 5) = 0x6620746f6e207369;
        *(undefined8 *)(puVar6 + 10) = 0x656761726f747320;
        *(undefined8 *)(puVar6 + 8) = 0x656c6966206e6920;
        FUN_109ac3188(0xfffffffe,&puStack_d8,&UNK_10f59a85a,&UNK_10f598d74,0xe45);
      }
      else {
        lVar13 = 0;
        uVar11 = ((uint)piVar10 >> 3 & 0x1ff) + 1;
        do {
          uVar11 = *(int *)((long)aiStack_c8 + lVar13) * uVar11;
          lVar13 = lVar13 + 4;
        } while ((long)puVar15 << 2 != lVar13);
        if ((*puVar5 & 7) < 5) {
          uVar12 = (uint)((*puVar5 & 7) != 0);
        }
        else {
          uVar12 = *(uint *)(*(long *)(puVar5 + 4) + 0x28);
        }
        if ((int)uVar12 < 1 || uVar12 == uVar11) {
          FUN_109a39bfc(puVar15,aiStack_c8);
          puVar7 = puVar15;
          if (0 < (int)uVar12) {
            FUN_109a3907c(puVar15);
            piVar10 = *(int **)(puVar15 + 6);
            FUN_109aae2f4(param_1,puVar5,piVar10,piVar14);
            puVar7 = param_1;
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return puVar15;
          }
          ___stack_chk_fail();
          puStack_d8 = (undefined4 *)0x0;
          uStack_d0 = 0;
          do {
            iVar4 = *piVar14;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar2) {
              *piVar14 = iVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar4 + -1 == 0) {
            _free(*(undefined8 *)(piVar14 + -2));
          }
          puVar8 = puVar7;
          __Unwind_Resume();
          pcStack_e8 = FUN_109ab2154;
          lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uStack_3f8 = 0;
          piStack_1b0 = piVar10;
          puStack_110 = puVar5;
          puStack_108 = puVar15;
          piStack_100 = piVar14;
          puStack_f8 = puVar7;
          puStack_f0 = &stack0xfffffffffffffff0;
          FUN_109aac02c();
          piVar14 = piVar10;
          FUN_109a3b600(piVar10,auStack_198);
          FUN_109aac02c(puVar8,&UNK_10f59a68b,0xd,0);
          FUN_109aac75c(puVar8,auStack_198,piVar14,"i");
          FUN_109aac19c(puVar8);
          piVar14 = piVar10;
          FUN_109a3b4c0(piVar10);
          FUN_109ab6764();
          FUN_109aac5ec(puVar8,&UNK_10f59a1e9,piVar14,0);
          FUN_109aac02c(puVar8,"data",0xd,0);
          if ((0 < piVar10[8]) && (*(long *)(piVar10 + 6) != 0)) {
            FUN_109a3a0e4(1,&piStack_1b0,0,auStack_2d0,auStack_400,0);
            do {
              FUN_109aac75c(puVar8,uStack_3f0,uStack_3f8 & 0xffffffff,auStack_1a8);
              iVar4 = (int)auStack_400;
              FUN_109a3aba0();
            } while (iVar4 != 0);
          }
          FUN_109aac19c(puVar8);
          FUN_109aac19c();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
            return puVar8;
          }
          ___stack_chk_fail();
          puVar5 = puRam000000011382bbc0;
          if (puVar8 != (uint *)0x0) {
            for (; puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
              uVar9 = *(undefined8 *)(puVar5 + 6);
              _strcmp(uVar9,puVar8);
              if ((int)uVar9 == 0) {
                return puVar5;
              }
            }
          }
          return (uint *)0x0;
        }
        puVar6 = (undefined4 *)0x44;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar6 + 3) = 0x20657a6973207869;
        *(undefined8 *)(puVar6 + 1) = 0x7274616d20656854;
        *puVar6 = 1;
        puStack_d8 = puVar6 + 1;
        uStack_d0 = 0x3f;
        *(undefined1 *)((long)puVar6 + 0x43) = 0;
        *(undefined8 *)(puVar6 + 7) = 0x7420686374616d20;
        *(undefined8 *)(puVar6 + 5) = 0x746f6e2073656f64;
        *(undefined8 *)(puVar6 + 0xb) = 0x20666f207265626d;
        *(undefined8 *)(puVar6 + 9) = 0x756e20656874206f;
        *(undefined8 *)((long)puVar6 + 0x3b) = 0x73746e656d656c65;
        *(undefined8 *)((long)puVar6 + 0x33) = 0x206465726f747320;
        FUN_109ac3188(0xffffff2f,&puStack_d8,&UNK_10f59a85a,&UNK_10f598d74,0xe50);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109ab20c8);
  (*pcVar3)();
}



/* Entry: 109ab2154; end: 109ab22af;  */

long FUN_109ab2154(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_320 [8];
  ulong uStack_318;
  undefined8 uStack_310;
  undefined1 auStack_1f0 [288];
  long lStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [128];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_318 = 0;
  lStack_d0 = param_3;
  FUN_109aac02c(param_1,param_2,6,&UNK_10f5993a1);
  lVar2 = param_3;
  FUN_109a3b600(param_3,auStack_b8);
  FUN_109aac02c(param_1,&UNK_10f59a68b,0xd,0);
  FUN_109aac75c(param_1,auStack_b8,lVar2,"i");
  FUN_109aac19c(param_1);
  lVar2 = param_3;
  FUN_109a3b4c0(param_3);
  FUN_109ab6764();
  FUN_109aac5ec(param_1,&UNK_10f59a1e9,lVar2,0);
  FUN_109aac02c(param_1,"data",0xd,0);
  if ((0 < *(int *)(param_3 + 0x20)) && (*(long *)(param_3 + 0x18) != 0)) {
    FUN_109a3a0e4(1,&lStack_d0,0,auStack_1f0,auStack_320,0);
    do {
      FUN_109aac75c(param_1,uStack_310,uStack_318 & 0xffffffff,auStack_c8);
      iVar1 = (int)auStack_320;
      FUN_109a3aba0();
    } while (iVar1 != 0);
  }
  FUN_109aac19c(param_1);
  FUN_109aac19c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar2 = lRam000000011382bbc0;
  if (param_1 != 0) {
    for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
      _strcmp(uVar3,param_1);
      if ((int)uVar3 == 0) {
        return lVar2;
      }
    }
  }
  return 0;
}



/* Entry: 109ab22b0; end: 109ab2303;  */

long FUN_109ab22b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam000000011382bbc0;
  if (param_1 != 0) {
    for (; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      _strcmp(uVar2,param_1);
      if ((int)uVar2 == 0) {
        return lVar1;
      }
    }
  }
  return 0;
}



/* Entry: 109ab2304; end: 109ab2497;  */

void FUN_109ab2304(int *param_1,byte *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (int *)0x0) {
    uVar3 = 0xffffffe5;
  }
  else {
    if (*param_1 == 0x4c4d4159) {
      if (param_2 == (byte *)0x0) {
        return;
      }
      if (((*param_2 >> 4 & 1) != 0) && (*(long *)(param_2 + 8) != 0)) {
        (**(code **)(*(long *)(param_2 + 8) + 0x30))();
        if (param_3 == (undefined8 *)0x0) {
          return;
        }
        *param_3 = 0;
        param_3[1] = 0;
        return;
      }
      puVar2 = (undefined4 *)0x40;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar2 + 3) = 0x6f6e2073656f6420;
      *(undefined8 *)(puVar2 + 1) = 0x65646f6e20656854;
      *puVar2 = 1;
      puStack_30 = puVar2 + 1;
      uStack_28 = 0x39;
      *(undefined1 *)((long)puVar2 + 0x3d) = 0;
      *(undefined8 *)(puVar2 + 7) = 0x7375206120746e65;
      *(undefined8 *)(puVar2 + 5) = 0x7365727065722074;
      *(undefined8 *)(puVar2 + 0xb) = 0x6f6e6b6e75282074;
      *(undefined8 *)(puVar2 + 9) = 0x63656a626f207265;
      *(undefined8 *)((long)puVar2 + 0x35) = 0x293f65707974206e;
      *(undefined8 *)((long)puVar2 + 0x2d) = 0x776f6e6b6e752820;
      FUN_109ac3188(0xfffffffe,&puStack_30,&UNK_10f59949a,&UNK_10f598d74,0x1370);
      goto LAB_109ab2440;
    }
    uVar3 = 0xfffffffb;
  }
  puVar2 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_30 = puVar2 + 1;
  uStack_28 = 0x1f;
  *(undefined1 *)((long)puVar2 + 0x23) = 0;
  *(undefined8 *)(puVar2 + 3) = 0x207265746e696f70;
  *(undefined8 *)(puVar2 + 1) = 0x2064696c61766e49;
  *(undefined8 *)((long)puVar2 + 0x1b) = 0x656761726f747320;
  *(undefined8 *)((long)puVar2 + 0x13) = 0x656c6966206f7420;
  FUN_109ac3188(uVar3,&puStack_30,&UNK_10f59949a,&UNK_10f598d74,0x136a);
LAB_109ab2440:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109ab2444);
  (*pcVar1)();
}



/* Entry: 109ab2498; end: 109ab27df;  */

void FUN_109ab2498(int *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  if (param_1 == (int *)0x0) {
    uVar5 = 0xffffffe5;
  }
  else {
    if (*param_1 == 0x4c4d4159) {
      if (param_1[2] == 0) {
        puVar4 = (undefined4 *)0x2c;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar4 + 3) = 0x656761726f747320;
        *(undefined8 *)(puVar4 + 1) = 0x656c696620656854;
        *puVar4 = 1;
        puStack_50 = (undefined8 *)(puVar4 + 1);
        uStack_48 = 0x26;
        *(undefined1 *)((long)puVar4 + 0x2a) = 0;
        *(undefined8 *)(puVar4 + 7) = 0x7220726f66206465;
        *(undefined8 *)(puVar4 + 5) = 0x6e65706f20736920;
        *(undefined8 *)((long)puVar4 + 0x22) = 0x676e696461657220;
        FUN_109ac3188(0xfffffffe,&puStack_50,&UNK_10f5994db,&UNK_10f598d74,0x1381);
      }
      else {
        lVar1 = lRam000000011382bbc0;
        if (param_3 == 0) {
          puVar4 = (undefined4 *)0x28;
          func_0x000107c2ae8c();
          *(undefined8 *)(puVar4 + 3) = 0x206f74207265746e;
          *(undefined8 *)(puVar4 + 1) = 0x696f70206c6c754e;
          *puVar4 = 1;
          puStack_50 = (undefined8 *)(puVar4 + 1);
          uStack_48 = 0x22;
          *(undefined1 *)((long)puVar4 + 0x26) = 0;
          *(undefined2 *)(puVar4 + 9) = 0x7463;
          *(undefined8 *)(puVar4 + 7) = 0x656a626f206e6574;
          *(undefined8 *)(puVar4 + 5) = 0x7469727720656874;
          FUN_109ac3188(0xffffffe5,&puStack_50,&UNK_10f5994db,&UNK_10f598d74,0x1384);
        }
        else {
          for (; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
            lVar3 = param_3;
            (**(code **)(lVar1 + 0x20))();
            if ((int)lVar3 != 0) {
              if (*(code **)(lVar1 + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109ab259c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar1 + 0x38))(param_1,param_2,param_3,param_4,param_5);
                return;
              }
              puVar4 = (undefined4 *)0x2c;
              func_0x000107c2ae8c();
              *(undefined8 *)(puVar4 + 3) = 0x2073656f64207463;
              *(undefined8 *)(puVar4 + 1) = 0x656a626f20656854;
              *puVar4 = 1;
              puStack_50 = (undefined8 *)(puVar4 + 1);
              uStack_48 = 0x27;
              *(undefined1 *)((long)puVar4 + 0x2b) = 0;
              *(undefined8 *)(puVar4 + 7) = 0x6620657469727720;
              *(undefined8 *)(puVar4 + 5) = 0x6576616820746f6e;
              *(undefined8 *)((long)puVar4 + 0x23) = 0x6e6f6974636e7566;
              FUN_109ac3188(0xfffffffb,&puStack_50,&UNK_10f5994db,&UNK_10f598d74,0x138b);
              goto LAB_109ab2734;
            }
          }
          puVar4 = (undefined4 *)0x14;
          func_0x000107c2ae8c();
          *puVar4 = 1;
          puStack_50 = (undefined8 *)(puVar4 + 1);
          *puStack_50 = 0x206e776f6e6b6e55;
          uStack_48 = 0xe;
          *(undefined1 *)((long)puVar4 + 0x12) = 0;
          *(undefined8 *)((long)puVar4 + 10) = 0x7463656a626f206e;
          FUN_109ac3188(0xfffffffb,&puStack_50,&UNK_10f5994db,&UNK_10f598d74,5000);
        }
      }
      goto LAB_109ab2734;
    }
    uVar5 = 0xfffffffb;
  }
  puVar4 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  puStack_50 = (undefined8 *)(puVar4 + 1);
  uStack_48 = 0x1f;
  *(undefined1 *)((long)puVar4 + 0x23) = 0;
  *(undefined8 *)(puVar4 + 3) = 0x207265746e696f70;
  *(undefined8 *)(puVar4 + 1) = 0x2064696c61766e49;
  *(undefined8 *)((long)puVar4 + 0x1b) = 0x656761726f747320;
  *(undefined8 *)((long)puVar4 + 0x13) = 0x656c6966206f7420;
  FUN_109ac3188(uVar5,&puStack_50,&UNK_10f5994db,&UNK_10f598d74,0x1381);
LAB_109ab2734:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109ab2738);
  (*pcVar2)();
}



/* Entry: 109ab27e0; end: 109ab27e3;  */

undefined8 * FUN_109ab27e0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_110b22f70;
  lVar5 = param_1[5];
  lVar4 = param_1[6];
  while (lVar4 != lVar5) {
    FUN_109aac19c(param_1[2]);
    lVar5 = param_1[5];
    lVar4 = param_1[6] + -1;
    param_1[6] = lVar4;
  }
  if (lVar5 != 0) {
    param_1[6] = lVar5;
    __ZdlPv();
  }
  lVar5 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar5 != 0) {
    piVar6 = (int *)(lVar5 + -4);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar5 + -0xc));
    }
  }
  FUN_109ab6808(param_1 + 1);
  return param_1;
}



/* Entry: 109ab27e4; end: 109ab288b;  */

undefined8 * FUN_109ab27e4(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110b22f70;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  FUN_109ab299c();
  return param_1;
}



/* Entry: 109ab288c; end: 109ab28f3;  */

void FUN_109ab288c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_110b22fc0;
    puVar1[2] = param_2;
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  *param_1 = puVar1;
  param_1[1] = param_2;
  FUN_109ab6808(&uStack_30);
  return;
}



/* Entry: 109ab28f4; end: 109ab2987;  */

undefined8 * FUN_109ab28f4(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_110b22f70;
  lVar5 = param_1[5];
  lVar4 = param_1[6];
  while (lVar4 != lVar5) {
    FUN_109aac19c(param_1[2]);
    lVar5 = param_1[5];
    lVar4 = param_1[6] + -1;
    param_1[6] = lVar4;
  }
  if (lVar5 != 0) {
    param_1[6] = lVar5;
    __ZdlPv();
  }
  lVar5 = param_1[3];
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar5 != 0) {
    piVar6 = (int *)(lVar5 + -4);
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      _free(*(undefined8 *)(lVar5 + -0xc));
    }
  }
  FUN_109ab6808(param_1 + 1);
  return param_1;
}



/* Entry: 109ab2988; end: 109ab299b;  */

void FUN_109ab2988(void)

{
  FUN_109ab28f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ab299c; end: 109ab2a37;  */

void FUN_109ab299c(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined4 uVar5;
  
  (**(code **)(*param_1 + 0x20))();
  puVar3 = &UNK_10f5995ac;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar3 = (undefined *)*param_2;
  }
  puVar1 = &UNK_10f5995ac;
  if ((undefined *)*param_4 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_4;
  }
  puVar2 = (undefined *)0x0;
  if (param_4[1] != 0) {
    puVar2 = puVar1;
  }
  FUN_109aa9630(puVar3,0,param_3,puVar2);
  FUN_109ab288c(param_1 + 1,puVar3);
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x18))();
  uVar5 = 6;
  if ((int)plVar4 == 0) {
    uVar5 = 0;
  }
  *(undefined4 *)(param_1 + 8) = uVar5;
  return;
}



/* Entry: 109ab2a38; end: 109ab2a4b;  */

byte FUN_109ab2a38(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x10) + 0x180);
  }
  return bVar1 & 1;
}



/* Entry: 109ab2a4c; end: 109ab2aa7;  */

void FUN_109ab2a4c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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
  *(long *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 109ab2aa8; end: 109ab2b2b;  */

void FUN_109ab2aa8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[2];
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x178) != 0)) {
    FUN_109aa8ad4(lVar1,param_1);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 109ab2b2c; end: 109ab2fff;  */

long * FUN_109ab2b2c(long *param_1,long *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  code *pcVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  int *piVar15;
  byte *pbVar16;
  char cVar17;
  char *pcVar18;
  byte *pbStack_40;
  long lStack_38;
  
  pbVar14 = &UNK_10f5995ac;
  if ((byte *)*param_2 != (byte *)0x0) {
    pbVar14 = (byte *)*param_2;
  }
  plVar9 = param_1;
  (**(code **)(*param_1 + 0x18))();
  if ((int)plVar9 == 0) {
    return param_1;
  }
  bVar5 = *pbVar14;
  uVar12 = (uint)bVar5;
  if ((bVar5 | 0x20) == 0x7d) {
    pcVar4 = (char *)param_1[6];
    if ((char *)param_1[5] == pcVar4) {
      FUN_109ac2700(&pbStack_40,&UNK_10f59953d);
      FUN_109ac3188(0xfffffffe,&pbStack_40,&UNK_10f594c91,&UNK_10f598d74,0x1460);
LAB_109ab2f28:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x109ab2f2c);
      (*pcVar8)();
    }
    cVar17 = '[';
    if (uVar12 != 0x5d) {
      cVar17 = '{';
    }
    pcVar18 = pcVar4 + -1;
    if (cVar17 != *pcVar18) {
      FUN_109ac2700(&pbStack_40,&UNK_10f599550);
      FUN_109ac3188(0xfffffffe,&pbStack_40,&UNK_10f594c91,&UNK_10f598d74,0x1463);
      goto LAB_109ab2f28;
    }
    param_1[6] = (long)pcVar18;
    uVar11 = 6;
    if (((char *)param_1[5] != pcVar18) && (uVar11 = 6, pcVar4[-2] != '{')) {
      uVar11 = 1;
    }
    *(undefined4 *)(param_1 + 8) = uVar11;
    FUN_109aac19c(param_1[2]);
    lVar13 = param_1[3];
    param_1[3] = 0;
    param_1[4] = 0;
    if (lVar13 != 0) {
      piVar15 = (int *)(lVar13 + -4);
      do {
        iVar7 = *piVar15 + -1;
        cVar17 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar6) {
          *piVar15 = iVar7;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
LAB_109ab2bf4:
      if (iVar7 == 0) {
        _free(*(undefined8 *)(lVar13 + -0xc));
      }
    }
LAB_109ab2c00:
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    if (*(uint *)(param_1 + 8) == 6) {
      if (0x19 < (uVar12 & 0xffffffdf) - 0x41) {
        FUN_109ac2700(&pbStack_40,&UNK_10f599581);
        FUN_109ac3188(0xfffffffe,&pbStack_40,&UNK_10f594c91,&UNK_10f598d74,0x146d);
        goto LAB_109ab2f28;
      }
      plVar9 = param_1 + 3;
      if (plVar9 != param_2) {
        lVar13 = *plVar9;
        *plVar9 = 0;
        param_1[4] = 0;
        if (lVar13 != 0) {
          piVar15 = (int *)(lVar13 + -4);
          do {
            iVar7 = *piVar15;
            cVar17 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar6) {
              *piVar15 = iVar7 + -1;
              cVar17 = ExclusiveMonitorsStatus();
            }
          } while (cVar17 != '\0');
          if (iVar7 + -1 == 0) {
            _free(*(undefined8 *)(lVar13 + -0xc));
          }
        }
        lVar13 = 0;
        if (*param_2 != 0) {
          piVar15 = (int *)(*param_2 + -4);
          do {
            cVar17 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar6) {
              *piVar15 = *piVar15 + 1;
              cVar17 = ExclusiveMonitorsStatus();
            }
          } while (cVar17 != '\0');
          lVar13 = *param_2;
        }
        param_1[3] = lVar13;
        param_1[4] = param_2[1];
      }
      uVar11 = 5;
    }
    else {
      if ((*(uint *)(param_1 + 8) & 3) != 1) {
        puVar10 = (undefined4 *)0x18;
        func_0x000107c2ae8c();
        *puVar10 = 1;
        pbStack_40 = (byte *)(puVar10 + 1);
        lStack_38 = 0x10;
        *(undefined1 *)(puVar10 + 5) = 0;
        *(undefined8 *)(puVar10 + 3) = 0x65746174732e7366;
        *(undefined8 *)(puVar10 + 1) = 0x2064696c61766e49;
        FUN_109ac3188(0xfffffffe,&pbStack_40,&UNK_10f594c91,&UNK_10f598d74,0x148b);
        goto LAB_109ab2f28;
      }
      if ((bVar5 | 0x20) == 0x7b) {
        func_0x0001092d2fc0(param_1 + 5,pbVar14);
        bVar5 = *pbVar14;
        uVar11 = 6;
        if (bVar5 != 0x7b) {
          uVar11 = 1;
        }
        plVar9 = param_1 + 3;
        *(undefined4 *)(param_1 + 8) = uVar11;
        pbVar16 = pbVar14 + 1;
        uVar12 = 5;
        if (bVar5 == 0x7b) {
          uVar12 = 6;
        }
        uVar1 = uVar12 | 8;
        if (*pbVar16 != 0x3a) {
          uVar1 = uVar12;
        }
        lVar13 = 1;
        if (*pbVar16 == 0x3a) {
          lVar13 = 2;
          pbVar16 = pbVar14 + 2;
        }
        pbVar3 = &UNK_10f5995ac;
        if ((byte *)*plVar9 != (byte *)0x0) {
          pbVar3 = (byte *)*plVar9;
        }
        pbVar2 = (byte *)0x0;
        if (param_1[4] != 0) {
          pbVar2 = pbVar3;
        }
        pbVar3 = (byte *)0x0;
        if (pbVar14[lVar13] != 0) {
          pbVar3 = pbVar16;
        }
        FUN_109aac02c(param_1[2],pbVar2,uVar1,pbVar3);
        lVar13 = *plVar9;
        *plVar9 = 0;
        param_1[4] = 0;
        if (lVar13 != 0) {
          piVar15 = (int *)(lVar13 + -4);
          do {
            iVar7 = *piVar15 + -1;
            cVar17 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar6) {
              *piVar15 = iVar7;
              cVar17 = ExclusiveMonitorsStatus();
            }
          } while (cVar17 != '\0');
          goto LAB_109ab2bf4;
        }
        goto LAB_109ab2c00;
      }
      if ((uVar12 == 0x5c) &&
         (uVar12 = pbVar14[1] - 0x5b,
         uVar12 < 0x23 && (1L << ((ulong)uVar12 & 0x3f) & 0x500000005U) != 0)) {
        FUN_109a38ed8(&pbStack_40,pbVar14 + 1);
      }
      else {
        pbStack_40 = (byte *)*param_2;
        lStack_38 = param_2[1];
        if (pbStack_40 != (byte *)0x0) {
          pbVar14 = pbStack_40 + -4;
          do {
            cVar17 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pbVar14,0x10);
            if (bVar6) {
              *(int *)pbVar14 = *(int *)pbVar14 + 1;
              cVar17 = ExclusiveMonitorsStatus();
            }
          } while (cVar17 != '\0');
        }
      }
      pbVar14 = &UNK_10f5995ac;
      if ((byte *)param_1[3] != (byte *)0x0) {
        pbVar14 = (byte *)param_1[3];
      }
      pbVar16 = (byte *)0x0;
      if (param_1[4] != 0) {
        pbVar16 = pbVar14;
      }
      pbVar14 = &UNK_10f5995ac;
      if (pbStack_40 != (byte *)0x0) {
        pbVar14 = pbStack_40;
      }
      FUN_109aac5ec(param_1[2],pbVar16,pbVar14,0);
      pbVar14 = pbStack_40;
      pbStack_40 = (byte *)0x0;
      lStack_38 = 0;
      if (pbVar14 != (byte *)0x0) {
        pbVar16 = pbVar14 + -4;
        do {
          iVar7 = *(int *)pbVar16;
          cVar17 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pbVar16,0x10);
          if (bVar6) {
            *(int *)pbVar16 = iVar7 + -1;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (iVar7 + -1 == 0) {
          _free(*(undefined8 *)(pbVar14 + -0xc));
        }
      }
      if ((int)param_1[8] != 5) {
        return param_1;
      }
      uVar11 = 6;
    }
    *(undefined4 *)(param_1 + 8) = uVar11;
  }
  return param_1;
}



/* Entry: 109ab3000; end: 109ab307f;  */

void FUN_109ab3000(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = *(long *)(param_1 + 0x80);
  iVar3 = *(int *)(param_1 + 0x58);
  if ((undefined2 *)(lVar2 + iVar3) < *(undefined2 **)(param_1 + 0x78)) {
    **(undefined2 **)(param_1 + 0x78) = 10;
    FUN_109aaa624(param_1,*(undefined8 *)(param_1 + 0x80));
    lVar2 = *(long *)(param_1 + 0x80);
    iVar3 = *(int *)(param_1 + 0x58);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 - iVar3 != 0) {
    if (iVar3 <= iVar1) {
      _memset(lVar2 + iVar3,0x20,iVar1 - iVar3);
      lVar2 = *(long *)(param_1 + 0x80);
    }
    *(int *)(param_1 + 0x58) = iVar1;
    iVar3 = iVar1;
  }
  *(long *)(param_1 + 0x78) = lVar2 + iVar3;
  return;
}



/* Entry: 109ab3080; end: 109ab364b;  */

void FUN_109ab3080(undefined1 *param_1,byte *param_2,int param_3,long *param_4,undefined8 *param_5)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
  int iVar13;
  undefined1 *puVar14;
  ulong uVar15;
  int iVar16;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  puVar14 = *(undefined1 **)(param_1 + 0x78);
  uVar8 = *(uint *)(param_1 + 0x44);
  if (param_2 == (byte *)0x0) {
    pcVar11 = (char *)(byte *)0x0;
  }
  else {
    pcVar11 = (char *)(byte *)0x0;
    if (*param_2 != 0) {
      pcVar11 = (char *)param_2;
    }
  }
  if (param_3 == 1) {
    if ((uVar8 & 7) < 5) {
      uVar8 = 0x25;
      if ((byte *)pcVar11 != (byte *)0x0) {
        uVar8 = 0x26;
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      uVar1 = uVar8 >> 5;
    }
    else {
      if (((uVar8 & 7) == 6) != ((byte *)pcVar11 != (byte *)0x0)) {
        puVar5 = (undefined4 *)0x5c;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar5 + 0xb) = 0x70616d2061206f74;
        *(undefined8 *)(puVar5 + 9) = 0x2079656b20612074;
        *(undefined8 *)(puVar5 + 0xf) = 0x746e656d656c6520;
        *(undefined8 *)(puVar5 + 0xd) = 0x64646120726f202c;
        *(undefined8 *)(puVar5 + 0x13) = 0x716573206f742079;
        *(undefined8 *)(puVar5 + 0x11) = 0x656b206874697720;
        *(undefined8 *)(puVar5 + 3) = 0x6461206f74207470;
        *(undefined8 *)(puVar5 + 1) = 0x6d65747461206e41;
        *puVar5 = 1;
        puStack_70 = puVar5 + 1;
        uStack_68 = 0x55;
        *(undefined1 *)((long)puVar5 + 0x59) = 0;
        *(undefined8 *)((long)puVar5 + 0x51) = 0x65636e6575716573;
        *(undefined8 *)(puVar5 + 7) = 0x756f687469772074;
        *(undefined8 *)(puVar5 + 5) = 0x6e656d656c652064;
        FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f5996b6,&UNK_10f598d74,0x8ee);
        goto LAB_109ab35ac;
      }
      uVar1 = uVar8 >> 5 & 1;
    }
    if (uVar1 == 0) {
      puVar14 = param_1;
      FUN_109ab3000();
    }
  }
  if ((byte *)pcVar11 == (byte *)0x0) {
    pcVar11 = "_";
  }
  else if ((*pcVar11 == 0x5f) && (pcVar11[1] == 0)) {
    puVar5 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_70 = puVar5 + 1;
    uStack_68 = 0x21;
    *(undefined2 *)(puVar5 + 9) = 0x65;
    *(undefined8 *)(puVar5 + 3) = 0x2061207369205f20;
    *(undefined8 *)(puVar5 + 1) = 0x656c676e69732041;
    *(undefined8 *)(puVar5 + 7) = 0x6d616e2067617420;
    *(undefined8 *)(puVar5 + 5) = 0x6465767265736572;
    FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f5996b6,&UNK_10f598d74,0x8fd);
    goto LAB_109ab35ac;
  }
  pbVar12 = (byte *)pcVar11;
  _strlen();
  pbVar9 = puVar14 + 1;
  *puVar14 = 0x3c;
  if (param_3 == 2) {
    if (param_4 != (long *)0x0) {
      puVar5 = (undefined4 *)0x34;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar5 + 3) = 0x756f687320676174;
      *(undefined8 *)(puVar5 + 1) = 0x20676e69736f6c43;
      *puVar5 = 1;
      puStack_70 = puVar5 + 1;
      uStack_68 = 0x2d;
      *(undefined1 *)((long)puVar5 + 0x31) = 0;
      *(undefined8 *)(puVar5 + 7) = 0x61206564756c636e;
      *(undefined8 *)(puVar5 + 5) = 0x6920746f6e20646c;
      *(undefined8 *)((long)puVar5 + 0x29) = 0x7365747562697274;
      *(undefined8 *)((long)puVar5 + 0x21) = 0x746120796e612065;
      FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f5996b6,&UNK_10f598d74,0x904);
      goto LAB_109ab35ac;
    }
    pbVar9 = puVar14 + 2;
    puVar14[1] = 0x2f;
  }
  if ((byte)*pcVar11 == 0x5f || ((byte)*pcVar11 & 0xffffffdf) - 0x41 < 0x1a) {
    iVar13 = (int)pbVar12;
    if (*(byte **)(param_1 + 0x88) <= pbVar9 + iVar13) {
      uVar15 = (long)pbVar9 - *(long *)(param_1 + 0x80);
      lVar6 = ((long)*(byte **)(param_1 + 0x88) - *(long *)(param_1 + 0x80)) * 3;
      iVar10 = (int)uVar15;
      iVar7 = (int)((ulong)(lVar6 - (lVar6 >> 0x3f)) >> 1);
      iVar4 = iVar10 + iVar13;
      if (iVar10 + iVar13 <= iVar7) {
        iVar4 = iVar7;
      }
      lVar6 = (long)(iVar4 + 0x100);
      func_0x000107c2ae8c();
      *(long *)(param_1 + 0x78) = lVar6 + (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x80));
      if (0 < iVar10) {
        _memcpy(lVar6,*(long *)(param_1 + 0x80),uVar15 & 0x7fffffff);
      }
      *(long *)(param_1 + 0x80) = lVar6;
      *(long *)(param_1 + 0x88) = lVar6 + iVar4;
      pbVar9 = (byte *)(lVar6 + iVar10);
    }
    if (0 < iVar13) {
      uVar15 = (ulong)pbVar12 & 0x7fffffff;
      pbVar12 = pbVar9;
      do {
        bVar2 = *pcVar11;
        if (((((byte)(bVar2 - 0x3a) < 0xf6) && ((byte)((bVar2 & 0xdf) + 0xa5) < 0xe6)) &&
            (bVar2 != 0x2d)) && (bVar2 != 0x5f)) {
          puVar5 = (undefined4 *)0x50;
          func_0x000107c2ae8c();
          *(undefined8 *)(puVar5 + 7) = 0x6e6168706c61206e;
          *(undefined8 *)(puVar5 + 5) = 0x6961746e6f632079;
          *(undefined8 *)(puVar5 + 0xb) = 0x7265746361726168;
          *(undefined8 *)(puVar5 + 9) = 0x6320636972656d75;
          *(undefined8 *)(puVar5 + 0xf) = 0x27202c5d392d305a;
          *(undefined8 *)(puVar5 + 0xd) = 0x2d417a2d615b2073;
          *(undefined8 *)((long)puVar5 + 0x46) = 0x275f2720646e6120;
          *(undefined8 *)((long)puVar5 + 0x3e) = 0x272d27202c5d392d;
          *puVar5 = 1;
          puStack_70 = puVar5 + 1;
          uStack_68 = 0x4a;
          *(undefined1 *)((long)puVar5 + 0x4e) = 0;
          *(undefined8 *)(puVar5 + 3) = 0x6c6e6f2079616d20;
          *(undefined8 *)(puVar5 + 1) = 0x656d616e2079654b;
          FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f5996b6,&UNK_10f598d74,0x910);
          goto LAB_109ab35ac;
        }
        *pbVar12 = bVar2;
        uVar15 = uVar15 - 1;
        pbVar12 = pbVar12 + 1;
        pcVar11 = pcVar11 + 1;
      } while (uVar15 != 0);
    }
    pbVar9 = pbVar9 + iVar13;
    while( true ) {
      if ((param_4 != (long *)0x0) && (lVar6 = *param_4, lVar6 != 0)) {
        param_4 = param_4 + 1;
        do {
          iVar4 = (int)lVar6;
          _strlen();
          iVar7 = (int)*param_4;
          _strlen();
          iVar13 = iVar4 + iVar7 + 4;
          if (*(byte **)(param_1 + 0x88) <= pbVar9 + iVar13) {
            uVar15 = (long)pbVar9 - *(long *)(param_1 + 0x80);
            lVar6 = ((long)*(byte **)(param_1 + 0x88) - *(long *)(param_1 + 0x80)) * 3;
            iVar16 = (int)uVar15;
            iVar13 = iVar13 + iVar16;
            iVar10 = (int)((ulong)(lVar6 - (lVar6 >> 0x3f)) >> 1);
            if (iVar13 <= iVar10) {
              iVar13 = iVar10;
            }
            lVar6 = (long)(iVar13 + 0x100);
            func_0x000107c2ae8c();
            *(long *)(param_1 + 0x78) =
                 lVar6 + (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x80));
            if (0 < iVar16) {
              _memcpy(lVar6,*(long *)(param_1 + 0x80),uVar15 & 0x7fffffff);
            }
            *(long *)(param_1 + 0x80) = lVar6;
            *(long *)(param_1 + 0x88) = lVar6 + iVar13;
            pbVar9 = (byte *)(lVar6 + iVar16);
          }
          *pbVar9 = 0x20;
          _memcpy(pbVar9 + 1,param_4[-1],(long)iVar4);
          pbVar9 = pbVar9 + 1 + iVar4;
          pbVar12 = pbVar9 + 2;
          pbVar9[0] = 0x3d;
          pbVar9[1] = 0x22;
          _memcpy(pbVar12,*param_4,(long)iVar7);
          pbVar9 = pbVar12 + iVar7 + 1;
          pbVar12[iVar7] = 0x22;
          lVar6 = param_4[1];
          param_4 = param_4 + 2;
        } while (lVar6 != 0);
      }
      if (param_5 == (undefined8 *)0x0) break;
      param_4 = (long *)*param_5;
      param_5 = (undefined8 *)param_5[1];
    }
    *pbVar9 = 0x3e;
    *(byte **)(param_1 + 0x78) = pbVar9 + 1;
    *(uint *)(param_1 + 0x44) = uVar8 & 0xffffffdf;
    return;
  }
  puVar5 = (undefined4 *)0x28;
  func_0x000107c2ae8c();
  *(undefined8 *)(puVar5 + 3) = 0x747261747320646c;
  *(undefined8 *)(puVar5 + 1) = 0x756f68732079654b;
  *puVar5 = 1;
  puStack_70 = puVar5 + 1;
  uStack_68 = 0x23;
  *(undefined1 *)((long)puVar5 + 0x27) = 0;
  *(undefined4 *)((long)puVar5 + 0x23) = 0x5f20726f;
  *(undefined8 *)(puVar5 + 7) = 0x6f2072657474656c;
  *(undefined8 *)(puVar5 + 5) = 0x2061206874697720;
  FUN_109ac3188(0xfffffffb,&puStack_70,&UNK_10f5996b6,&UNK_10f598d74,0x909);
LAB_109ab35ac:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109ab35b0);
  (*pcVar3)();
}



/* Entry: 109ab364c; end: 109ab38cf;  */

/* WARNING: Possible PIC construction at 0x000109ab3ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ab403c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ab4140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ab4190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ab4144) */
/* WARNING: Removing unreachable block (ram,0x000109ab4040) */
/* WARNING: Removing unreachable block (ram,0x000109ab404c) */
/* WARNING: Removing unreachable block (ram,0x000109ab4054) */
/* WARNING: Removing unreachable block (ram,0x000109ab4060) */
/* WARNING: Removing unreachable block (ram,0x000109ab40c8) */
/* WARNING: Removing unreachable block (ram,0x000109ab4070) */
/* WARNING: Removing unreachable block (ram,0x000109ab44ac) */
/* WARNING: Removing unreachable block (ram,0x000109ab4084) */
/* WARNING: Removing unreachable block (ram,0x000109ab4518) */
/* WARNING: Removing unreachable block (ram,0x000109ab4098) */
/* WARNING: Removing unreachable block (ram,0x000109ab452c) */
/* WARNING: Removing unreachable block (ram,0x000109ab40ac) */
/* WARNING: Removing unreachable block (ram,0x000109ab40c0) */
/* WARNING: Removing unreachable block (ram,0x000109ab40d0) */
/* WARNING: Removing unreachable block (ram,0x000109ab40f8) */
/* WARNING: Removing unreachable block (ram,0x000109ab40e4) */
/* WARNING: Removing unreachable block (ram,0x000109ab40fc) */
/* WARNING: Removing unreachable block (ram,0x000109ab4150) */
/* WARNING: Removing unreachable block (ram,0x000109ab4158) */
/* WARNING: Removing unreachable block (ram,0x000109ab410c) */
/* WARNING: Removing unreachable block (ram,0x000109ab411c) */
/* WARNING: Removing unreachable block (ram,0x000109ab416c) */
/* WARNING: Removing unreachable block (ram,0x000109ab4120) */
/* WARNING: Removing unreachable block (ram,0x000109ab3acc) */
/* WARNING: Removing unreachable block (ram,0x000109ab4194) */
/* WARNING: Removing unreachable block (ram,0x000109ab41a4) */
/* WARNING: Removing unreachable block (ram,0x000109ab41c8) */
/* WARNING: Removing unreachable block (ram,0x000109ab41d4) */
/* WARNING: Removing unreachable block (ram,0x000109ab41e0) */
/* WARNING: Removing unreachable block (ram,0x000109ab39e0) */
/* WARNING: Removing unreachable block (ram,0x000109ab39e8) */
/* WARNING: Removing unreachable block (ram,0x000109ab3a30) */

uint * FUN_109ab364c(uint *param_1,uint *param_2,undefined1 *param_3,undefined *param_4,
                    undefined1 *param_5)

{
  undefined *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  bool bVar6;
  bool bVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint extraout_w8;
  undefined4 uVar15;
  uint uVar16;
  byte bVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *unaff_x24;
  uint *unaff_x25;
  long *unaff_x26;
  uint *unaff_x27;
  int iVar24;
  ulong unaff_x28;
  undefined1 *puVar25;
  undefined8 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined8 uStack_460;
  ulong uStack_458;
  undefined *puStack_450;
  undefined1 auStack_448 [1024];
  long lStack_48;
  
  puVar25 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar22 = (uint *)0x1;
  puVar23 = (uint *)0x2401;
  puVar8 = param_1;
  puVar11 = param_2;
  puVar21 = param_3;
LAB_109ab3688:
  if ((int)puVar21 == 1) {
    puVar19 = (uint *)((long)puVar11 + 3);
    bVar17 = (byte)*puVar11;
    uVar13 = (uint)bVar17;
    puVar11 = puVar19;
    if (0x1f < bVar17 || bVar17 == 9) {
      do {
        if (((uVar13 == 0x2d) && (*(char *)((long)puVar11 + -2) == '-')) &&
           (*(char *)((long)puVar11 + -1) == '>')) {
          puVar21 = (undefined1 *)0x0;
          goto LAB_109ab372c;
        }
        uVar13 = (uint)*(byte *)((long)puVar11 + -2);
        puVar11 = (uint *)((long)puVar11 + 1);
      } while (0x1f < uVar13 || uVar13 == 9);
    }
    puVar21 = (undefined1 *)0x1;
    goto LAB_109ab3744;
  }
  for (; (uVar13 = (uint)(byte)*puVar11, uVar13 == 9 || (uVar13 == 0x20));
      puVar11 = (uint *)((long)puVar11 + 1)) {
  }
  if (uVar13 == 0x3c) {
    if (((*(char *)((long)puVar11 + 1) != '!') || (*(char *)((long)puVar11 + 2) != '-')) ||
       (*(char *)((long)puVar11 + 3) != '-')) goto LAB_109ab37c0;
    if ((int)puVar21 == 0) goto code_r0x000109ab3724;
    uStack_460 = *(undefined8 *)(param_1 + 0x18);
    uStack_458 = (ulong)param_1[0x25];
    puStack_450 = &UNK_10f5999e1;
    _sprintf(auStack_448,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f5999d0,auStack_448,&UNK_10f598d74,0x6f6);
    goto LAB_109ab383c;
  }
  if (uVar13 < 0x20) goto LAB_109ab3744;
  goto LAB_109ab37c0;
code_r0x000109ab3724:
  puVar11 = puVar11 + 1;
  puVar21 = (undefined1 *)0x1;
LAB_109ab372c:
  uVar13 = (uint)(byte)*puVar11;
  if (0x1f < uVar13) goto LAB_109ab3688;
LAB_109ab3744:
  if (uVar13 < 0xe && (1 << (ulong)(uVar13 & 0x1f) & 0x2401U) != 0) {
    param_2 = *(uint **)(param_1 + 0x20);
    param_3 = (undefined1 *)(ulong)(param_1[0x22] - (int)param_2);
    puVar11 = param_1;
    FUN_109aaa730();
    puVar8 = puVar11;
    if (puVar11 == (uint *)0x0) {
      puVar11 = *(uint **)(param_1 + 0x20);
      *(undefined1 *)puVar11 = 0;
      param_1[0x26] = 1;
LAB_109ab37c0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return puVar11;
      }
      goto LAB_109ab38cc;
    }
    _strlen();
    cVar4 = *(char *)((long)puVar11 + (long)((int)puVar8 + -1));
    if ((cVar4 != '\n' && cVar4 != '\r') && (puVar8 = param_1, FUN_109ab4a60(), (int)puVar8 == 0))
    goto LAB_109ab3884;
    param_1[0x25] = param_1[0x25] + 1;
    goto LAB_109ab3688;
  }
LAB_109ab383c:
  uStack_460 = *(undefined8 *)(param_1 + 0x18);
  uStack_458 = (ulong)param_1[0x25];
  puStack_450 = &UNK_10f5999ff;
  _sprintf(auStack_448,&UNK_10f5995c9);
  FUN_109ac32d8(0xffffff2c,&UNK_10f5999d0,auStack_448,&UNK_10f598d74,0x702);
LAB_109ab3884:
  uStack_460 = *(undefined8 *)(param_1 + 0x18);
  uStack_458 = (ulong)param_1[0x25];
  puStack_450 = &UNK_10f599a1f;
  _sprintf(auStack_448,&UNK_10f5995c9);
  param_2 = (uint *)&UNK_10f5999d0;
  param_4 = &UNK_10f598d74;
  param_3 = auStack_448;
  puVar8 = (uint *)0xffffff2c;
  param_5 = (undefined1 *)0x70f;
  FUN_109ac32d8();
LAB_109ab38cc:
  uVar26 = 0x109ab38d0;
  ___stack_chk_fail();
  puVar5 = &uStack_460;
  do {
    *(ulong *)((long)puVar5 + -0x60) = unaff_x28;
    *(uint **)((long)puVar5 + -0x58) = unaff_x27;
    *(long **)((long)puVar5 + -0x50) = unaff_x26;
    *(uint **)((long)puVar5 + -0x48) = unaff_x25;
    *(uint **)((long)puVar5 + -0x40) = unaff_x24;
    *(uint **)((long)puVar5 + -0x38) = puVar23;
    *(uint **)((long)puVar5 + -0x30) = puVar22;
    *(undefined1 **)((long)puVar5 + -0x28) = puVar21;
    *(uint **)((long)puVar5 + -0x20) = puVar11;
    *(uint **)((long)puVar5 + -0x18) = param_1;
    *(undefined1 **)((long)puVar5 + -0x10) = puVar25;
    *(undefined8 *)((long)puVar5 + -8) = uVar26;
    *(undefined8 *)((long)puVar5 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar13 = (uint)(byte)*param_2;
    puVar22 = puVar11;
    puVar19 = puVar23;
    if ((byte)*param_2 == 0x3c) {
      puVar23 = (uint *)((long)param_2 + 1);
      bVar17 = *(byte *)puVar23;
      *(undefined1 **)((long)puVar5 + -0x488) = param_5;
      *(undefined **)((long)puVar5 + -0x480) = param_4;
      *(undefined1 **)((long)puVar5 + -0x490) = param_3;
      if (bVar17 - 0x30 < 10 || (bVar17 & 0xffffffdf) - 0x41 < 0x1a) {
LAB_109ab3938:
        uVar13 = 1;
        uVar15 = 1;
LAB_109ab3948:
        unaff_x28 = 0;
        unaff_x27 = (uint *)0x0;
        *(undefined4 *)((long)puVar5 + -0x494) = uVar15;
LAB_109ab394c:
        if ((byte)*puVar23 == 0x5f || ((byte)*puVar23 & 0xffffffdf) - 0x41 < 0x1a) {
          *(undefined8 *)((long)puVar5 + -0x478) = 0;
          unaff_x26 = (long *)0x0;
          param_1 = (uint *)0x0;
          puVar21 = (undefined1 *)(ulong)(uVar13 ^ 1);
          puVar22 = (uint *)0x0;
          do {
            for (unaff_x25 = (uint *)0x0;
                ((bVar17 = *(byte *)((long)puVar23 + (long)unaff_x25),
                 (byte)(bVar17 - 0x30) < 10 || (byte)((bVar17 & 0xdf) + 0xbf) < 0x1a ||
                 (bVar17 == 0x5f)) || (bVar17 == 0x2d)); unaff_x25 = (uint *)((long)unaff_x25 + 1))
            {
            }
            puVar11 = puVar8;
            FUN_109aa8dac(puVar8,puVar23,unaff_x25);
            puVar19 = (uint *)((long)puVar23 + (long)unaff_x25);
            puVar23 = puVar19;
            if (puVar22 != (uint *)0x0) {
              unaff_x24 = puVar11;
              if ((int)unaff_x28 != 0) goto LAB_109ab3d3c;
              unaff_x26 = *(long **)(puVar8 + 4);
              FUN_109a4c0e8(unaff_x26,0x58);
              unaff_x26[2] = 0;
              unaff_x26[1] = 0;
              unaff_x26[4] = 0;
              unaff_x26[3] = 0;
              unaff_x26[6] = 0;
              unaff_x26[5] = 0;
              unaff_x26[8] = 0;
              unaff_x26[7] = 0;
              unaff_x26[10] = 0;
              unaff_x26[9] = 0;
              *unaff_x26 = (long)(unaff_x26 + 2);
              *(long **)((long)puVar5 + -0x478) = unaff_x26;
              unaff_x26[2] = *(long *)(puVar11 + 4);
              param_1 = (uint *)0x0;
              if (((char)*puVar19 != '=') &&
                 (puVar23 = puVar8, FUN_109ab364c(puVar8,puVar19,2), (char)*puVar23 != '='))
              goto LAB_109ab3d84;
              puVar23 = (uint *)((long)puVar23 + 1);
              puVar19 = puVar23;
              if ((*(char *)puVar23 != '\"') && (*(char *)puVar23 != '\'')) {
                puVar19 = puVar8;
                FUN_109ab364c(puVar8,puVar23,2);
                if (((char)*puVar19 != '\"') && ((char)*puVar19 != '\'')) goto LAB_109ab3e18;
              }
              puVar12 = (uint *)((long)puVar5 + -0x470);
              uVar13 = 3;
              uVar26 = 0x109ab3acc;
              puVar9 = puVar8;
              puVar23 = puVar19;
              goto SUB_109ab3f3c;
            }
            bVar17 = (byte)*puVar19;
            unaff_x24 = (uint *)(ulong)bVar17;
            if (bVar17 == 0x3e) {
LAB_109ab3bb8:
              if ((uint)unaff_x27 != 0) goto LAB_109ab3eac;
              puVar22 = (uint *)((long)puVar23 + 1);
              uVar15 = *(undefined4 *)((long)puVar5 + -0x494);
              goto LAB_109ab3c74;
            }
            puVar23 = puVar8;
            FUN_109ab364c(puVar8,puVar19,2);
            bVar3 = (byte)*puVar23;
            if (bVar3 == 0x3e) goto LAB_109ab3bb8;
            uVar14 = (uint)unaff_x27 ^ 1;
            if (bVar3 != 0x3f) {
              uVar14 = 1;
            }
            if (uVar14 == 0) {
              if (*(char *)((long)puVar23 + 1) != '>') goto LAB_109ab3ef4;
              puVar22 = (uint *)((long)puVar23 + 2);
              uVar15 = 4;
              goto LAB_109ab3c74;
            }
            uVar14 = (uint)bVar3;
            if (uVar14 == 0x2f) {
              uVar16 = uVar13 ^ 1;
              if (*(char *)((long)puVar23 + 1) != '>') {
                uVar16 = 1;
              }
              if (uVar16 == 0) goto LAB_109ab3c6c;
            }
            if (((4 < bVar17 - 9) && (bVar17 != 0)) && (bVar17 != 0x20)) {
              uVar26 = *(undefined8 *)(puVar8 + 0x18);
              *(ulong *)((long)puVar5 + -0x4a8) = (ulong)puVar8[0x25];
              *(undefined **)((long)puVar5 + -0x4a0) = &UNK_10f599b86;
              *(undefined8 *)((long)puVar5 + -0x4b0) = uVar26;
              _sprintf((undefined1 *)((long)puVar5 + -0x470),&UNK_10f5995c9);
              FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,(undefined1 *)((long)puVar5 + -0x470),
                            &UNK_10f598d74,0x895);
              goto LAB_109ab3bb8;
            }
            puVar22 = puVar11;
          } while ((uVar14 == 0x5f) || ((uVar14 & 0xffffffdf) - 0x41 < 0x1a));
        }
        uVar26 = *(undefined8 *)(puVar8 + 0x18);
        *(ulong *)((long)puVar5 + -0x4a8) = (ulong)puVar8[0x25];
        *(undefined **)((long)puVar5 + -0x4a0) = &UNK_10f599aa4;
        *(undefined8 *)((long)puVar5 + -0x4b0) = uVar26;
        _sprintf((undefined1 *)((long)puVar5 + -0x470),&UNK_10f5995c9);
        FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,(undefined1 *)((long)puVar5 + -0x470),&UNK_10f598d74
                      ,0x83d);
        puVar22 = puVar11;
LAB_109ab3d3c:
        uVar26 = *(undefined8 *)(puVar8 + 0x18);
        *(ulong *)((long)puVar5 + -0x4a8) = (ulong)puVar8[0x25];
        *(undefined **)((long)puVar5 + -0x4a0) = &UNK_10f599ad2;
        *(undefined8 *)((long)puVar5 + -0x4b0) = uVar26;
        _sprintf((undefined1 *)((long)puVar5 + -0x470),&UNK_10f5995c9);
        FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,(undefined1 *)((long)puVar5 + -0x470),&UNK_10f598d74
                      ,0x84b);
LAB_109ab3d84:
        uVar26 = *(undefined8 *)(puVar8 + 0x18);
        *(ulong *)((long)puVar5 + -0x4a8) = (ulong)puVar8[0x25];
        *(undefined **)((long)puVar5 + -0x4a0) = &UNK_10f599b00;
        *(undefined8 *)((long)puVar5 + -0x4b0) = uVar26;
        _sprintf((undefined1 *)((long)puVar5 + -0x470),&UNK_10f5995c9);
        FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,(undefined1 *)((long)puVar5 + -0x470),&UNK_10f598d74
                      ,0x865);
        puVar19 = puVar23;
        uVar13 = extraout_w8;
        goto LAB_109ab3dcc;
      }
      if (0x3e < bVar17) {
        if (bVar17 != 0x3f) {
          if (bVar17 != 0x5f) goto LAB_109ab3c24;
          goto LAB_109ab3938;
        }
        unaff_x28 = 0;
        uVar13 = 0;
        puVar23 = (uint *)((long)param_2 + 2);
        *(undefined4 *)((long)puVar5 + -0x494) = 4;
        unaff_x27 = (uint *)0x1;
        goto LAB_109ab394c;
      }
      if (bVar17 == 0x21) {
        uVar13 = 0;
        puVar23 = (uint *)((long)param_2 + 2);
        uVar15 = 5;
        goto LAB_109ab3948;
      }
      if (bVar17 == 0x2f) {
        unaff_x27 = (uint *)0x0;
        uVar13 = 0;
        puVar23 = (uint *)((long)param_2 + 2);
        *(undefined4 *)((long)puVar5 + -0x494) = 2;
        unaff_x28 = 1;
        goto LAB_109ab394c;
      }
LAB_109ab3c24:
      uVar26 = *(undefined8 *)(puVar8 + 0x18);
      *(ulong *)((long)puVar5 + -0x4a8) = (ulong)puVar8[0x25];
      *(undefined **)((long)puVar5 + -0x4a0) = &UNK_10f599a93;
      *(undefined8 *)((long)puVar5 + -0x4b0) = uVar26;
      _sprintf((undefined1 *)((long)puVar5 + -0x470),&UNK_10f5995c9);
      FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,(undefined1 *)((long)puVar5 + -0x470),&UNK_10f598d74,
                    0x836);
LAB_109ab3c6c:
      puVar22 = (uint *)((long)puVar23 + 2);
      uVar15 = 3;
LAB_109ab3c74:
      puVar2 = *(undefined4 **)((long)puVar5 + -0x488);
      **(undefined8 **)((long)puVar5 + -0x490) = puVar11;
      *puVar2 = uVar15;
      **(undefined8 **)((long)puVar5 + -0x480) = *(undefined8 *)((long)puVar5 + -0x478);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar5 + -0x70)) {
        return puVar22;
      }
    }
    else {
LAB_109ab3dcc:
      puVar11 = puVar22;
      puVar23 = puVar19;
      if (uVar13 == 0) {
        uVar26 = *(undefined8 *)(puVar8 + 0x18);
        *(ulong *)((long)puVar5 + -0x4a8) = (ulong)puVar8[0x25];
        *(undefined **)((long)puVar5 + -0x4a0) = &UNK_10f599a5b;
        *(undefined8 *)((long)puVar5 + -0x4b0) = uVar26;
        _sprintf((undefined1 *)((long)puVar5 + -0x470),&UNK_10f5995c9);
        FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,(undefined1 *)((long)puVar5 + -0x470),&UNK_10f598d74
                      ,0x81d);
LAB_109ab3e18:
        uVar26 = *(undefined8 *)(puVar8 + 0x18);
        *(ulong *)((long)puVar5 + -0x4a8) = (ulong)puVar8[0x25];
        *(undefined **)((long)puVar5 + -0x4a0) = &UNK_10f599b29;
        *(undefined8 *)((long)puVar5 + -0x4b0) = uVar26;
        _sprintf((undefined1 *)((long)puVar5 + -0x470),&UNK_10f5995c9);
        FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,(undefined1 *)((long)puVar5 + -0x470),&UNK_10f598d74
                      ,0x86d);
        puVar11 = puVar22;
        puVar23 = puVar19;
      }
      uVar26 = *(undefined8 *)(puVar8 + 0x18);
      *(ulong *)((long)puVar5 + -0x4a8) = (ulong)puVar8[0x25];
      *(undefined **)((long)puVar5 + -0x4a0) = &UNK_10f599a79;
      *(undefined8 *)((long)puVar5 + -0x4b0) = uVar26;
      _sprintf((undefined1 *)((long)puVar5 + -0x470),&UNK_10f5995c9);
      FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,(undefined1 *)((long)puVar5 + -0x470),&UNK_10f598d74,
                    0x820);
    }
    ___stack_chk_fail();
LAB_109ab3eac:
    uVar26 = *(undefined8 *)(puVar8 + 0x18);
    *(ulong *)((long)puVar5 + -0x4a8) = (ulong)puVar8[0x25];
    *(undefined **)((long)puVar5 + -0x4a0) = &UNK_10f599b64;
    *(undefined8 *)((long)puVar5 + -0x4b0) = uVar26;
    _sprintf((undefined1 *)((long)puVar5 + -0x470),&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,(undefined1 *)((long)puVar5 + -0x470),&UNK_10f598d74,
                  0x882);
LAB_109ab3ef4:
    uVar26 = *(undefined8 *)(puVar8 + 0x18);
    *(ulong *)((long)puVar5 + -0x4a8) = (ulong)puVar8[0x25];
    *(undefined **)((long)puVar5 + -0x4a0) = &UNK_10f599b64;
    *(undefined8 *)((long)puVar5 + -0x4b0) = uVar26;
    _sprintf((undefined1 *)((long)puVar5 + -0x470),&UNK_10f5995c9);
    puVar19 = (uint *)&UNK_10f599a4c;
    uVar13 = 0xf598d74;
    puVar12 = (uint *)((long)puVar5 + -0x470);
    puVar9 = (uint *)0xffffff2c;
    uVar26 = 0x109ab3f3c;
    FUN_109ac32d8();
    puVar22 = puVar11;
SUB_109ab3f3c:
    *(ulong *)((long)puVar5 + -0x510) = unaff_x28;
    *(uint **)((long)puVar5 + -0x508) = unaff_x27;
    *(long **)((long)puVar5 + -0x500) = unaff_x26;
    *(uint **)((long)puVar5 + -0x4f8) = unaff_x25;
    *(uint **)((long)puVar5 + -0x4f0) = unaff_x24;
    *(uint **)((long)puVar5 + -0x4e8) = puVar23;
    *(uint **)((long)puVar5 + -0x4e0) = puVar8;
    *(undefined1 **)((long)puVar5 + -0x4d8) = puVar21;
    *(uint **)((long)puVar5 + -0x4d0) = puVar22;
    *(uint **)((long)puVar5 + -0x4c8) = param_1;
    *(undefined1 **)((long)puVar5 + -0x4c0) = (undefined1 *)((long)puVar5 + -0x10);
    *(undefined8 *)((long)puVar5 + -0x4b8) = uVar26;
    puVar25 = (undefined1 *)((long)puVar5 + -0x4c0);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    *(undefined8 *)((long)puVar5 + -0x520) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    *(uint *)((long)puVar5 + -0x1950) = uVar13 & 7;
    *(uint *)((long)puVar5 + -0x1958) = uVar13;
    *(uint *)((long)puVar5 + -0x1954) = (uVar13 & 7) - 1;
    unaff_x24 = (uint *)((long)puVar5 + -0x1930);
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[0] = 0;
    puVar12[1] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar23 = (uint *)0x1;
    bVar7 = true;
    puVar22 = puVar8;
LAB_109ab3fb0:
    puVar21 = (undefined1 *)(ulong)(byte)*puVar19;
    if (0x3c < (byte)*puVar19) goto LAB_109ab3ff0;
    if ((1L << ((ulong)puVar21 & 0x3f) & 0x100003e01U) != 0) {
LAB_109ab3fd4:
      puVar11 = puVar9;
      FUN_109ab364c(puVar9,puVar19,0);
      puVar21 = (undefined1 *)(ulong)(byte)*puVar11;
      bVar7 = true;
      puVar19 = puVar11;
LAB_109ab3ff0:
      bVar17 = *(byte *)((long)puVar19 + 1);
      unaff_x26 = (long *)(ulong)bVar17;
      iVar20 = (int)puVar21;
      bVar6 = iVar20 == 0;
      param_2 = puVar19;
      if (iVar20 == 0x3c || iVar20 == 0) goto LAB_109ab4008;
      if (!bVar7) {
LAB_109ab48e4:
        uVar26 = *(undefined8 *)(puVar9 + 0x18);
        *(ulong *)((long)puVar5 + -0x1968) = (ulong)puVar9[0x25];
        *(undefined **)((long)puVar5 + -0x1960) = &UNK_10f599c6f;
        *(undefined8 *)((long)puVar5 + -0x1970) = uVar26;
        _sprintf((undefined1 *)((long)puVar5 + -0x1930),&UNK_10f5995c9);
        FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar5 + -0x1930),
                      &UNK_10f598d74,0x777);
LAB_109ab492c:
        uVar26 = *(undefined8 *)(puVar9 + 0x18);
        *(ulong *)((long)puVar5 + -0x1968) = (ulong)puVar9[0x25];
        *(undefined **)((long)puVar5 + -0x1960) = &UNK_10f599c96;
        *(undefined8 *)((long)puVar5 + -0x1970) = uVar26;
        _sprintf((undefined1 *)((long)puVar5 + -0x1930),&UNK_10f5995c9);
        FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar5 + -0x1930),
                      &UNK_10f598d74,0x79c);
LAB_109ab4974:
        uVar26 = *(undefined8 *)(puVar9 + 0x18);
        *(ulong *)((long)puVar5 + -0x1968) = (ulong)puVar9[0x25];
        *(undefined **)((long)puVar5 + -0x1960) = &UNK_10f599cd8;
        *(undefined8 *)((long)puVar5 + -0x1970) = uVar26;
        _sprintf((undefined1 *)((long)puVar5 + -0x920),&UNK_10f5995c9);
        FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar5 + -0x920),&UNK_10f598d74
                      ,0x7b3);
LAB_109ab49c4:
        uVar26 = *(undefined8 *)(puVar9 + 0x18);
        *(ulong *)((long)puVar5 + -0x1968) = (ulong)puVar9[0x25];
        *(undefined **)((long)puVar5 + -0x1960) = &UNK_10f599d0d;
        *(undefined8 *)((long)puVar5 + -0x1970) = uVar26;
        _sprintf((undefined1 *)((long)puVar5 + -0x920),&UNK_10f5995c9);
        FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar5 + -0x920),&UNK_10f598d74
                      ,0x7ba);
        goto LAB_109ab4a14;
      }
      unaff_x27 = puVar12;
      if (*puVar12 != 0) {
        if ((*puVar12 & 7) < 5) {
          FUN_109ab4a88(puVar9,5,puVar12);
        }
        unaff_x27 = *(uint **)(puVar12 + 4);
        FUN_109a4d978(unaff_x27,0);
        unaff_x27[2] = 0;
        unaff_x27[3] = 0;
      }
      if (*(int *)((long)puVar5 + -0x1950) == 3) goto LAB_109ab4238;
      if (iVar20 - 0x30U < 10) {
LAB_109ab4458:
        puVar11 = puVar19;
        if (iVar20 == 0x2d || iVar20 == 0x2b) {
          puVar11 = (uint *)((long)puVar19 + 1);
        }
        do {
          *(uint **)((long)puVar5 + -0x1938) = puVar11;
          bVar17 = (byte)*puVar11;
          puVar11 = (uint *)((long)puVar11 + 1);
        } while (bVar17 - 0x30 < 10);
        if ((bVar17 == 0x65) || (bVar17 == 0x2e)) {
          FUN_109ab4bdc(puVar9,puVar19,(undefined1 *)((long)puVar5 + -0x1938));
          *unaff_x27 = 2;
          *(ulong *)(unaff_x27 + 4) =
               CONCAT17(uVar34,CONCAT16(uVar33,CONCAT15(uVar32,CONCAT14(uVar31,CONCAT13(uVar30,
                                                  CONCAT12(uVar29,CONCAT11(uVar28,uVar27)))))));
        }
        else {
          puVar11 = puVar19;
          _strtol(puVar19,(undefined1 *)((long)puVar5 + -0x1938),0);
          *unaff_x27 = 1;
          unaff_x27[4] = (uint)puVar11;
        }
        bVar7 = *(uint **)((long)puVar5 + -0x1938) == puVar19;
        puVar19 = *(uint **)((long)puVar5 + -0x1938);
        if (bVar7) goto LAB_109ab492c;
      }
      else {
        uVar13 = (uint)bVar17;
        if (iVar20 == 0x2b) {
LAB_109ab44d0:
          if ((uVar13 == 0x2e) || (uVar13 - 0x30 < 10)) goto LAB_109ab4458;
        }
        else if (iVar20 == 0x2e) {
          if (((uVar13 - 0x30 < 10) || (uVar13 - 0x61 < 0x1a)) || (uVar13 - 0x41 < 0x1a))
          goto LAB_109ab4458;
        }
        else if (iVar20 == 0x2d) goto LAB_109ab44d0;
LAB_109ab4238:
        unaff_x28 = 0;
        *unaff_x27 = 3;
        puVar11 = (uint *)((long)puVar19 - (ulong)(iVar20 != 0x22));
        while( true ) {
          puVar19 = (uint *)((long)puVar11 + 1);
          bVar17 = *(byte *)puVar19;
          if (bVar17 - 0x30 < 10 || (bVar17 & 0xffffffdf) - 0x41 < 0x1a) goto LAB_109ab43f0;
          if (bVar17 == 0x22) break;
          if ((bVar17 < 0x20) || (bVar17 == 0x3c)) {
            if (iVar20 == 0x22) goto LAB_109ab49c4;
            goto LAB_109ab4500;
          }
          if ((iVar20 != 0x22) && (bVar17 == 0x20)) goto LAB_109ab4500;
          if (bVar17 != 0x26) {
            if ((bVar17 != 0x27) && (bVar17 != 0x3e)) goto LAB_109ab43f0;
            goto LAB_109ab46c4;
          }
          if (*(char *)((long)puVar11 + 2) == '#') {
            puVar8 = (uint *)((long)puVar11 + 3);
            uVar15 = 0x10;
            if (*(char *)puVar8 == 'x') {
              puVar8 = puVar11 + 1;
            }
            else {
              uVar15 = 10;
            }
            _strtol(puVar8,(undefined1 *)((long)puVar5 + -0x1938),uVar15);
            if (((((ulong)puVar8 & 0xffffff00) == 0) &&
                (puVar19 = *(uint **)((long)puVar5 + -0x1938), puVar19 != (uint *)0x0)) &&
               ((char)*puVar19 == ';')) {
              bVar17 = (byte)puVar8;
              goto LAB_109ab43f0;
            }
            goto LAB_109ab4714;
          }
          puVar22 = (uint *)0x2;
          puVar8 = (uint *)((long)puVar11 + 3);
          do {
            puVar18 = puVar8;
            *(uint **)((long)puVar5 + -0x1938) = puVar18;
            bVar17 = (byte)*puVar18;
            uVar13 = (int)puVar22 + 1;
            puVar22 = (uint *)(ulong)uVar13;
            puVar8 = (uint *)((long)puVar18 + 1);
          } while (bVar17 - 0x30 < 10 || (bVar17 & 0xffffffdf) - 0x41 < 0x1a);
          if (bVar17 != 0x3b) goto LAB_109ab483c;
          if (uVar13 == 6) {
            if (*(int *)((long)puVar11 + 2) == 0x736f7061) {
              bVar17 = 0x27;
              puVar19 = puVar18;
            }
            else {
              if (*(int *)((long)puVar11 + 2) != 0x746f7571) goto LAB_109ab43d8;
              bVar17 = 0x22;
              puVar19 = puVar18;
            }
          }
          else if (uVar13 == 5) {
            if (*(short *)((long)puVar11 + 2) != 0x6d61 || (char)puVar11[1] != 'p')
            goto LAB_109ab43d8;
            bVar17 = 0x26;
            puVar19 = puVar18;
          }
          else if (uVar13 == 4) {
            if (*(short *)((long)puVar11 + 2) == 0x746c) {
              bVar17 = 0x3c;
              puVar19 = puVar18;
            }
            else {
              if (*(short *)((long)puVar11 + 2) != 0x7467) goto LAB_109ab43d8;
              bVar17 = 0x3e;
              puVar19 = puVar18;
            }
          }
          else {
LAB_109ab43d8:
            _memcpy((undefined1 *)((long)unaff_x24 + (long)(int)unaff_x28),puVar19,(long)(int)uVar13
                   );
            unaff_x28 = (ulong)((int)unaff_x28 + uVar13);
            bVar17 = 0x3b;
            puVar19 = puVar18;
          }
LAB_109ab43f0:
          puVar11 = puVar19;
          iVar24 = (int)unaff_x28;
          *(byte *)((long)unaff_x24 + (long)iVar24) = bVar17;
          unaff_x28 = (ulong)(iVar24 + 1);
          if (0xffe < iVar24) {
            uVar26 = *(undefined8 *)(puVar9 + 0x18);
            *(ulong *)((long)puVar5 + -0x1968) = (ulong)puVar9[0x25];
            *(undefined **)((long)puVar5 + -0x1960) = &UNK_10f599da6;
            *(undefined8 *)((long)puVar5 + -0x1970) = uVar26;
            _sprintf((undefined1 *)((long)puVar5 + -0x920),&UNK_10f5995c9);
            FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar5 + -0x920),
                          &UNK_10f598d74,0x7ef);
LAB_109ab46c4:
            uVar26 = *(undefined8 *)(puVar9 + 0x18);
            *(ulong *)((long)puVar5 + -0x1968) = (ulong)puVar9[0x25];
            *(undefined **)((long)puVar5 + -0x1960) = &UNK_10f599d23;
            *(undefined8 *)((long)puVar5 + -0x1970) = uVar26;
            _sprintf((undefined1 *)((long)puVar5 + -0x920),&UNK_10f5995c9);
            FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar5 + -0x920),
                          &UNK_10f598d74,0x7bf);
LAB_109ab4714:
            uVar26 = *(undefined8 *)(puVar9 + 0x18);
            *(ulong *)((long)puVar5 + -0x1968) = (ulong)puVar9[0x25];
            *(undefined **)((long)puVar5 + -0x1960) = &UNK_10f599d56;
            *(undefined8 *)((long)puVar5 + -0x1970) = uVar26;
            _sprintf((undefined1 *)((long)puVar5 + -0x920),&UNK_10f5995c9);
            FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar5 + -0x920),
                          &UNK_10f598d74,1999);
            uVar26 = *(undefined8 *)(puVar9 + 0x18);
            *(ulong *)((long)puVar5 + -0x1968) = (ulong)puVar9[0x25];
            *(undefined **)((long)puVar5 + -0x1960) = &UNK_10f599be4;
            *(undefined8 *)((long)puVar5 + -0x1970) = uVar26;
            _sprintf((undefined1 *)((long)puVar5 + -0x1930),&UNK_10f5995c9);
            FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar5 + -0x1930),
                          &UNK_10f598d74,0x747);
            uVar26 = *(undefined8 *)(puVar9 + 0x18);
            *(ulong *)((long)puVar5 + -0x1968) = (ulong)puVar9[0x25];
            *(undefined **)((long)puVar5 + -0x1960) = &UNK_10f599bc0;
            *(undefined8 *)((long)puVar5 + -0x1970) = uVar26;
            _sprintf((undefined1 *)((long)puVar5 + -0x1930),&UNK_10f5995c9);
            FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar5 + -0x1930),
                          &UNK_10f598d74,0x745);
            uVar26 = *(undefined8 *)(puVar9 + 0x18);
            *(ulong *)((long)puVar5 + -0x1968) = (ulong)puVar9[0x25];
            *(undefined **)((long)puVar5 + -0x1960) = &UNK_10f599c58;
            *(undefined8 *)((long)puVar5 + -0x1970) = uVar26;
            _sprintf((undefined1 *)((long)puVar5 + -0x1930),&UNK_10f5995c9);
            FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar5 + -0x1930),
                          &UNK_10f598d74,0x771);
LAB_109ab483c:
            uVar26 = *(undefined8 *)(puVar9 + 0x18);
            *(ulong *)((long)puVar5 + -0x1968) = (ulong)puVar9[0x25];
            *(undefined **)((long)puVar5 + -0x1960) = &UNK_10f599d7a;
            *(undefined8 *)((long)puVar5 + -0x1970) = uVar26;
            _sprintf((undefined1 *)((long)puVar5 + -0x920),&UNK_10f5995c9);
            FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar5 + -0x920),
                          &UNK_10f598d74,0x7d8);
            puVar1 = &UNK_10f599c05;
            if (iVar20 == 0) {
              puVar1 = &UNK_10f599c24;
            }
            uVar26 = *(undefined8 *)(puVar9 + 0x18);
            *(ulong *)((long)puVar5 + -0x1968) = (ulong)puVar9[0x25];
            *(undefined **)((long)puVar5 + -0x1960) = puVar1;
            *(undefined8 *)((long)puVar5 + -0x1970) = uVar26;
            _sprintf((undefined1 *)((long)puVar5 + -0x1930),&UNK_10f5995c9);
            FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar5 + -0x1930),
                          &UNK_10f598d74,0x763);
            goto LAB_109ab48e4;
          }
        }
        if (iVar20 != 0x22) goto LAB_109ab4974;
        puVar19 = (uint *)((long)puVar11 + 2);
LAB_109ab4500:
        uVar26 = *(undefined8 *)(puVar9 + 4);
        puVar21 = (undefined1 *)((long)puVar5 + -0x1930);
        FUN_109a4c450(uVar26,puVar21,unaff_x28);
        *(undefined8 *)(unaff_x27 + 4) = uVar26;
        *(undefined1 **)(unaff_x27 + 6) = puVar21;
      }
      if (*(uint *)((long)puVar5 + -0x1954) < 4) break;
      bVar7 = false;
      goto LAB_109ab3fb0;
    }
    if (puVar21 != (undefined1 *)0x3c) goto LAB_109ab3ff0;
    unaff_x26 = (long *)(ulong)*(byte *)((long)puVar19 + 1);
    param_2 = puVar19;
    if (*(byte *)((long)puVar19 + 1) == 0x21) {
      if (*(char *)((long)puVar19 + 2) != '-') {
        bVar6 = false;
        unaff_x26 = (long *)0x21;
        goto LAB_109ab4008;
      }
      goto LAB_109ab3fd4;
    }
    bVar6 = false;
LAB_109ab4008:
    *(undefined8 *)((long)puVar5 + -0x920) = 0;
    *(undefined8 *)((long)puVar5 + -0x1948) = 0;
    *(undefined8 *)((long)puVar5 + -0x1940) = 0;
    *(undefined4 *)((long)puVar5 + -0x194c) = 0;
    puVar19 = param_2;
    if ((bVar6) || ((int)unaff_x26 == 0x2f)) break;
    param_3 = (undefined1 *)((long)puVar5 + -0x920);
    param_4 = (undefined *)((long)puVar5 + -0x1948);
    param_5 = (undefined1 *)((long)puVar5 + -0x194c);
    uVar26 = 0x109ab4040;
    puVar5 = (undefined8 *)((long)puVar5 + -0x1970);
    puVar8 = puVar9;
    param_1 = puVar9;
    puVar11 = puVar12;
    unaff_x25 = param_2;
  } while( true );
  uVar16 = *puVar12;
  uVar13 = uVar16 & 7;
  uVar14 = *(uint *)((long)puVar5 + -0x1950);
  if (uVar13 == 0) {
    if (uVar14 < 5) goto LAB_109ab45f8;
LAB_109ab45cc:
    uVar15 = 5;
    if (uVar14 == 6) {
      uVar15 = 6;
    }
    FUN_109ab4a88(puVar9,uVar15,puVar12);
    uVar16 = *puVar12;
    uVar13 = uVar16 & 7;
LAB_109ab45fc:
    bVar7 = uVar14 != uVar13;
    uVar13 = uVar14;
    if (bVar7) goto LAB_109ab4a18;
  }
  else {
    if (((4 < uVar14) && (uVar13 != uVar14)) && (uVar13 < 5)) goto LAB_109ab45cc;
LAB_109ab45f8:
    if (uVar14 != 0) goto LAB_109ab45fc;
  }
  if (4 < uVar13) {
    **(uint **)(puVar12 + 4) = **(uint **)(puVar12 + 4) | 0x100;
  }
  *puVar12 = uVar16 | *(uint *)((long)puVar5 + -0x1958) & 0x10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar5 + -0x520)) {
    return puVar19;
  }
LAB_109ab4a14:
  ___stack_chk_fail();
LAB_109ab4a18:
  uVar26 = *(undefined8 *)(puVar9 + 0x18);
  *(ulong *)((long)puVar5 + -0x1968) = (ulong)puVar9[0x25];
  *(undefined **)((long)puVar5 + -0x1960) = &UNK_10f599dbe;
  *(undefined8 *)((long)puVar5 + -0x1970) = uVar26;
  _sprintf((undefined1 *)((long)puVar5 + -0x1930),&UNK_10f5995c9);
  lVar10 = 0xffffff2c;
  FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar5 + -0x1930),&UNK_10f598d74,
                0x805);
  if (*(long *)(lVar10 + 0x160) != 0) {
    return (uint *)(ulong)(*(ulong *)(lVar10 + 0x168) <= *(ulong *)(lVar10 + 0x170));
  }
  puVar11 = *(uint **)(lVar10 + 0x68);
  if (puVar11 != (uint *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__feof_11034c290)();
    return puVar11;
  }
  return (uint *)0x0;
}



/* Entry: 109ab38d0; end: 109ab4a5f;  */

/* WARNING: Possible PIC construction at 0x000109ab3ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ab4140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ab4190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ab4144) */
/* WARNING: Removing unreachable block (ram,0x000109ab3acc) */
/* WARNING: Removing unreachable block (ram,0x000109ab4194) */
/* WARNING: Removing unreachable block (ram,0x000109ab41a4) */
/* WARNING: Removing unreachable block (ram,0x000109ab41c8) */
/* WARNING: Removing unreachable block (ram,0x000109ab41d4) */
/* WARNING: Removing unreachable block (ram,0x000109ab41e0) */
/* WARNING: Removing unreachable block (ram,0x000109ab39e0) */
/* WARNING: Removing unreachable block (ram,0x000109ab39e8) */
/* WARNING: Removing unreachable block (ram,0x000109ab3a30) */

uint * FUN_109ab38d0(uint *param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4,
                    undefined4 *param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint *puVar10;
  undefined *puVar11;
  uint uVar12;
  uint extraout_w8;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  byte bVar18;
  uint *puVar19;
  uint *unaff_x19;
  uint *unaff_x20;
  uint *unaff_x21;
  uint *unaff_x23;
  uint *puVar20;
  uint *unaff_x24;
  uint *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  int iVar21;
  int iVar22;
  undefined *unaff_x28;
  undefined1 *puVar23;
  undefined8 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined8 uStack_4b0;
  ulong uStack_4a8;
  undefined *puStack_4a0;
  undefined4 uStack_494;
  undefined8 *puStack_490;
  undefined4 *puStack_488;
  undefined8 *puStack_480;
  long *plStack_478;
  uint auStack_470 [256];
  long lStack_70;
  
  puVar23 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = (uint)*param_2;
  puVar8 = unaff_x20;
  if (*param_2 == 0x3c) {
    puVar20 = (uint *)(param_2 + 1);
    bVar18 = (byte)*puVar20;
    puStack_490 = param_3;
    puStack_488 = param_5;
    puStack_480 = param_4;
    if (bVar18 - 0x30 < 10 || (bVar18 & 0xffffffdf) - 0x41 < 0x1a) {
LAB_109ab3938:
      uVar13 = 1;
      uStack_494 = 1;
LAB_109ab3948:
      unaff_x28 = (undefined *)0x0;
      unaff_x27 = 0;
    }
    else if (bVar18 < 0x3f) {
      if (bVar18 == 0x21) {
        uVar13 = 0;
        puVar20 = (uint *)(param_2 + 2);
        uStack_494 = 5;
        goto LAB_109ab3948;
      }
      if (bVar18 != 0x2f) {
LAB_109ab3c24:
        uStack_4b0 = *(undefined8 *)(param_1 + 0x18);
        uStack_4a8 = (ulong)param_1[0x25];
        puStack_4a0 = &UNK_10f599a93;
        _sprintf(auStack_470,&UNK_10f5995c9);
        FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,auStack_470,&UNK_10f598d74,0x836);
LAB_109ab3c6c:
        puVar8 = (uint *)((long)puVar20 + 2);
        uVar14 = 3;
LAB_109ab3c74:
        *puStack_490 = unaff_x20;
        *puStack_488 = uVar14;
        *puStack_480 = plStack_478;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          return puVar8;
        }
        goto LAB_109ab3ea8;
      }
      unaff_x27 = 0;
      uVar13 = 0;
      puVar20 = (uint *)(param_2 + 2);
      uStack_494 = 2;
      unaff_x28 = (undefined *)0x1;
    }
    else {
      if (bVar18 != 0x3f) {
        if (bVar18 != 0x5f) goto LAB_109ab3c24;
        goto LAB_109ab3938;
      }
      unaff_x28 = (undefined *)0x0;
      uVar13 = 0;
      puVar20 = (uint *)(param_2 + 2);
      uStack_494 = 4;
      unaff_x27 = 1;
    }
    if ((byte)*puVar20 == 0x5f || ((byte)*puVar20 & 0xffffffdf) - 0x41 < 0x1a) {
      plStack_478 = (long *)0x0;
      unaff_x26 = (long *)0x0;
      unaff_x19 = (uint *)0x0;
      unaff_x21 = (uint *)(ulong)(uVar13 ^ 1);
      puVar8 = (uint *)0x0;
      do {
        for (unaff_x25 = (uint *)0x0;
            ((bVar18 = *(byte *)((long)puVar20 + (long)unaff_x25),
             (byte)(bVar18 - 0x30) < 10 || (byte)((bVar18 & 0xdf) + 0xbf) < 0x1a || (bVar18 == 0x5f)
             ) || (bVar18 == 0x2d)); unaff_x25 = (uint *)((long)unaff_x25 + 1)) {
        }
        unaff_x20 = param_1;
        FUN_109aa8dac(param_1,puVar20,unaff_x25);
        puVar10 = (uint *)((long)puVar20 + (long)unaff_x25);
        puVar20 = puVar10;
        if (puVar8 != (uint *)0x0) {
          unaff_x24 = unaff_x20;
          if ((int)unaff_x28 != 0) goto LAB_109ab3d3c;
          unaff_x26 = *(long **)(param_1 + 4);
          FUN_109a4c0e8(unaff_x26,0x58);
          unaff_x26[2] = 0;
          unaff_x26[1] = 0;
          unaff_x26[4] = 0;
          unaff_x26[3] = 0;
          unaff_x26[6] = 0;
          unaff_x26[5] = 0;
          unaff_x26[8] = 0;
          unaff_x26[7] = 0;
          unaff_x26[10] = 0;
          unaff_x26[9] = 0;
          *unaff_x26 = (long)(unaff_x26 + 2);
          unaff_x26[2] = *(long *)(unaff_x20 + 4);
          unaff_x19 = (uint *)0x0;
          plStack_478 = unaff_x26;
          if (((char)*puVar10 != '=') &&
             (puVar20 = param_1, FUN_109ab364c(param_1,puVar10,2), (char)*puVar20 != '='))
          goto LAB_109ab3d84;
          puVar20 = (uint *)((long)puVar20 + 1);
          unaff_x23 = puVar20;
          if ((*(char *)puVar20 != '\"') && (*(char *)puVar20 != '\'')) {
            unaff_x23 = param_1;
            FUN_109ab364c(param_1,puVar20,2);
            if (((char)*unaff_x23 != '\"') && ((char)*unaff_x23 != '\'')) goto LAB_109ab3e18;
          }
          puVar11 = (undefined *)0x3;
          uVar24 = 0x109ab3acc;
          puVar2 = &uStack_4b0;
          puVar5 = param_1;
          puVar10 = auStack_470;
          puVar20 = unaff_x23;
          goto SUB_109ab3f3c;
        }
        bVar18 = (byte)*puVar10;
        unaff_x24 = (uint *)(ulong)bVar18;
        if (bVar18 == 0x3e) {
LAB_109ab3bb8:
          if ((uint)unaff_x27 != 0) goto LAB_109ab3eac;
          puVar8 = (uint *)((long)puVar20 + 1);
          uVar14 = uStack_494;
          goto LAB_109ab3c74;
        }
        puVar20 = param_1;
        FUN_109ab364c(param_1,puVar10,2);
        bVar1 = (byte)*puVar20;
        if (bVar1 == 0x3e) goto LAB_109ab3bb8;
        uVar12 = (uint)unaff_x27 ^ 1;
        if (bVar1 != 0x3f) {
          uVar12 = 1;
        }
        if (uVar12 == 0) {
          if (*(char *)((long)puVar20 + 1) != '>') goto LAB_109ab3ef4;
          puVar8 = (uint *)((long)puVar20 + 2);
          uVar14 = 4;
          goto LAB_109ab3c74;
        }
        uVar12 = (uint)bVar1;
        if (uVar12 == 0x2f) {
          uVar15 = uVar13 ^ 1;
          if (*(char *)((long)puVar20 + 1) != '>') {
            uVar15 = 1;
          }
          if (uVar15 == 0) goto LAB_109ab3c6c;
        }
        if (((4 < bVar18 - 9) && (bVar18 != 0)) && (bVar18 != 0x20)) {
          uStack_4b0 = *(undefined8 *)(param_1 + 0x18);
          uStack_4a8 = (ulong)param_1[0x25];
          puStack_4a0 = &UNK_10f599b86;
          _sprintf(auStack_470,&UNK_10f5995c9);
          FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,auStack_470,&UNK_10f598d74,0x895);
          goto LAB_109ab3bb8;
        }
        puVar8 = unaff_x20;
      } while ((uVar12 == 0x5f) || ((uVar12 & 0xffffffdf) - 0x41 < 0x1a));
    }
    uStack_4b0 = *(undefined8 *)(param_1 + 0x18);
    uStack_4a8 = (ulong)param_1[0x25];
    puStack_4a0 = &UNK_10f599aa4;
    _sprintf(auStack_470,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,auStack_470,&UNK_10f598d74,0x83d);
    puVar8 = unaff_x20;
LAB_109ab3d3c:
    uStack_4b0 = *(undefined8 *)(param_1 + 0x18);
    uStack_4a8 = (ulong)param_1[0x25];
    puStack_4a0 = &UNK_10f599ad2;
    _sprintf(auStack_470,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,auStack_470,&UNK_10f598d74,0x84b);
LAB_109ab3d84:
    uStack_4b0 = *(undefined8 *)(param_1 + 0x18);
    uStack_4a8 = (ulong)param_1[0x25];
    puStack_4a0 = &UNK_10f599b00;
    _sprintf(auStack_470,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,auStack_470,&UNK_10f598d74,0x865);
    unaff_x23 = puVar20;
    uVar13 = extraout_w8;
  }
  unaff_x20 = puVar8;
  puVar20 = unaff_x23;
  if (uVar13 == 0) {
    uStack_4b0 = *(undefined8 *)(param_1 + 0x18);
    uStack_4a8 = (ulong)param_1[0x25];
    puStack_4a0 = &UNK_10f599a5b;
    _sprintf(auStack_470,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,auStack_470,&UNK_10f598d74,0x81d);
LAB_109ab3e18:
    uStack_4b0 = *(undefined8 *)(param_1 + 0x18);
    uStack_4a8 = (ulong)param_1[0x25];
    puStack_4a0 = &UNK_10f599b29;
    _sprintf(auStack_470,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,auStack_470,&UNK_10f598d74,0x86d);
    unaff_x20 = puVar8;
    puVar20 = unaff_x23;
  }
  uStack_4b0 = *(undefined8 *)(param_1 + 0x18);
  uStack_4a8 = (ulong)param_1[0x25];
  puStack_4a0 = &UNK_10f599a79;
  _sprintf(auStack_470,&UNK_10f5995c9);
  FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,auStack_470,&UNK_10f598d74,0x820);
LAB_109ab3ea8:
  ___stack_chk_fail();
LAB_109ab3eac:
  uStack_4b0 = *(undefined8 *)(param_1 + 0x18);
  uStack_4a8 = (ulong)param_1[0x25];
  puStack_4a0 = &UNK_10f599b64;
  _sprintf(auStack_470,&UNK_10f5995c9);
  FUN_109ac32d8(0xffffff2c,&UNK_10f599a4c,auStack_470,&UNK_10f598d74,0x882);
LAB_109ab3ef4:
  uStack_4b0 = *(undefined8 *)(param_1 + 0x18);
  uStack_4a8 = (ulong)param_1[0x25];
  puStack_4a0 = &UNK_10f599b64;
  _sprintf(auStack_470,&UNK_10f5995c9);
  unaff_x23 = (uint *)&UNK_10f599a4c;
  puVar11 = &UNK_10f598d74;
  puVar10 = auStack_470;
  puVar5 = (uint *)0xffffff2c;
  uVar24 = 0x109ab3f3c;
  FUN_109ac32d8();
  puVar2 = &uStack_4b0;
  puVar8 = unaff_x20;
SUB_109ab3f3c:
  do {
    uVar13 = (uint)puVar11;
    *(undefined **)((long)puVar2 + -0x60) = unaff_x28;
    *(long *)((long)puVar2 + -0x58) = unaff_x27;
    *(long **)((long)puVar2 + -0x50) = unaff_x26;
    *(uint **)((long)puVar2 + -0x48) = unaff_x25;
    *(uint **)((long)puVar2 + -0x40) = unaff_x24;
    *(uint **)((long)puVar2 + -0x38) = puVar20;
    *(uint **)((long)puVar2 + -0x30) = param_1;
    *(uint **)((long)puVar2 + -0x28) = unaff_x21;
    *(uint **)((long)puVar2 + -0x20) = puVar8;
    *(uint **)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)puVar2 + -0x10) = puVar23;
    *(undefined8 *)((long)puVar2 + -8) = uVar24;
    puVar23 = (undefined1 *)((long)puVar2 + -0x10);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    *(undefined8 *)((long)puVar2 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    *(uint *)((long)puVar2 + -0x14a0) = uVar13 & 7;
    *(uint *)((long)puVar2 + -0x14a8) = uVar13;
    *(uint *)((long)puVar2 + -0x14a4) = (uVar13 & 7) - 1;
    unaff_x24 = (uint *)((long)puVar2 + -0x1480);
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[0] = 0;
    puVar10[1] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar20 = (uint *)0x1;
    bVar4 = true;
LAB_109ab3fb0:
    bVar18 = (byte)*unaff_x23;
    uVar12 = (uint)bVar18;
    uVar13 = (uint)bVar18;
    if (0x3c < bVar18) goto LAB_109ab3ff0;
    if ((1L << ((ulong)bVar18 & 0x3f) & 0x100003e01U) != 0) {
LAB_109ab3fd4:
      puVar8 = puVar5;
      FUN_109ab364c(puVar5,unaff_x23,0);
      bVar4 = true;
      unaff_x23 = puVar8;
      uVar13 = (uint)(byte)*puVar8;
LAB_109ab3ff0:
      uVar12 = uVar13;
      uVar13 = (uint)*(byte *)((long)unaff_x23 + 1);
      bVar3 = uVar12 == 0;
      puVar8 = unaff_x23;
      if (uVar12 == 0x3c || uVar12 == 0) goto LAB_109ab4008;
      if (!bVar4) goto LAB_109ab48e4;
      puVar8 = puVar10;
      if (*puVar10 != 0) {
        if ((*puVar10 & 7) < 5) {
          FUN_109ab4a88(puVar5,5,puVar10);
        }
        puVar8 = *(uint **)(puVar10 + 4);
        FUN_109a4d978(puVar8,0);
        puVar8[2] = 0;
        puVar8[3] = 0;
      }
      if (*(int *)((long)puVar2 + -0x14a0) == 3) goto LAB_109ab4238;
      if (uVar12 - 0x30 < 10) {
LAB_109ab4458:
        puVar16 = unaff_x23;
        if (uVar12 == 0x2d || uVar12 == 0x2b) {
          puVar16 = (uint *)((long)unaff_x23 + 1);
        }
        do {
          *(uint **)((long)puVar2 + -0x1488) = puVar16;
          bVar18 = (byte)*puVar16;
          puVar16 = (uint *)((long)puVar16 + 1);
        } while (bVar18 - 0x30 < 10);
        if ((bVar18 == 0x65) || (bVar18 == 0x2e)) {
          FUN_109ab4bdc(puVar5,unaff_x23,(undefined1 *)((long)puVar2 + -0x1488));
          *puVar8 = 2;
          *(ulong *)(puVar8 + 4) =
               CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(uVar28,
                                                  CONCAT12(uVar27,CONCAT11(uVar26,uVar25)))))));
        }
        else {
          puVar16 = unaff_x23;
          _strtol(unaff_x23,(undefined1 *)((long)puVar2 + -0x1488),0);
          *puVar8 = 1;
          puVar8[4] = (uint)puVar16;
        }
        bVar4 = *(uint **)((long)puVar2 + -0x1488) == unaff_x23;
        unaff_x23 = *(uint **)((long)puVar2 + -0x1488);
        if (bVar4) goto LAB_109ab492c;
      }
      else {
        if (uVar12 == 0x2b) {
LAB_109ab44d0:
          if ((uVar13 == 0x2e) || (uVar13 - 0x30 < 10)) goto LAB_109ab4458;
        }
        else if (uVar12 == 0x2e) {
          if (((uVar13 - 0x30 < 10) || (uVar13 - 0x61 < 0x1a)) || (uVar13 - 0x41 < 0x1a))
          goto LAB_109ab4458;
        }
        else if (uVar12 == 0x2d) goto LAB_109ab44d0;
LAB_109ab4238:
        iVar21 = 0;
        *puVar8 = 3;
        puVar16 = (uint *)((long)unaff_x23 - (ulong)(uVar12 != 0x22));
        while( true ) {
          unaff_x23 = (uint *)((long)puVar16 + 1);
          bVar18 = *(byte *)unaff_x23;
          iVar22 = iVar21;
          if (bVar18 - 0x30 < 10 || (bVar18 & 0xffffffdf) - 0x41 < 0x1a) goto LAB_109ab43f0;
          if (bVar18 == 0x22) break;
          if ((bVar18 < 0x20) || (bVar18 == 0x3c)) {
            if (uVar12 == 0x22) goto LAB_109ab49c4;
            goto LAB_109ab4500;
          }
          if ((uVar12 != 0x22) && (bVar18 == 0x20)) goto LAB_109ab4500;
          if (bVar18 != 0x26) {
            if ((bVar18 != 0x27) && (bVar18 != 0x3e)) goto LAB_109ab43f0;
            goto LAB_109ab46c4;
          }
          if (*(char *)((long)puVar16 + 2) == '#') {
            puVar17 = (uint *)((long)puVar16 + 3);
            uVar14 = 0x10;
            if (*(char *)puVar17 == 'x') {
              puVar17 = puVar16 + 1;
            }
            else {
              uVar14 = 10;
            }
            _strtol(puVar17,(undefined1 *)((long)puVar2 + -0x1488),uVar14);
            if (((((ulong)puVar17 & 0xffffff00) == 0) &&
                (unaff_x23 = *(uint **)((long)puVar2 + -0x1488), unaff_x23 != (uint *)0x0)) &&
               ((char)*unaff_x23 == ';')) {
              bVar18 = (byte)puVar17;
              goto LAB_109ab43f0;
            }
            goto LAB_109ab4714;
          }
          param_1 = (uint *)0x2;
          puVar17 = (uint *)((long)puVar16 + 3);
          do {
            puVar19 = puVar17;
            *(uint **)((long)puVar2 + -0x1488) = puVar19;
            bVar18 = (byte)*puVar19;
            uVar13 = (int)param_1 + 1;
            param_1 = (uint *)(ulong)uVar13;
            puVar17 = (uint *)((long)puVar19 + 1);
          } while (bVar18 - 0x30 < 10 || (bVar18 & 0xffffffdf) - 0x41 < 0x1a);
          if (bVar18 != 0x3b) goto LAB_109ab483c;
          if (uVar13 == 6) {
            if (*(int *)((long)puVar16 + 2) == 0x736f7061) {
              bVar18 = 0x27;
              unaff_x23 = puVar19;
            }
            else {
              if (*(int *)((long)puVar16 + 2) != 0x746f7571) goto LAB_109ab43d8;
              bVar18 = 0x22;
              unaff_x23 = puVar19;
            }
          }
          else if (uVar13 == 5) {
            if (*(short *)((long)puVar16 + 2) != 0x6d61 || (char)puVar16[1] != 'p')
            goto LAB_109ab43d8;
            bVar18 = 0x26;
            unaff_x23 = puVar19;
          }
          else if (uVar13 == 4) {
            if (*(short *)((long)puVar16 + 2) == 0x746c) {
              bVar18 = 0x3c;
              unaff_x23 = puVar19;
            }
            else {
              if (*(short *)((long)puVar16 + 2) != 0x7467) goto LAB_109ab43d8;
              bVar18 = 0x3e;
              unaff_x23 = puVar19;
            }
          }
          else {
LAB_109ab43d8:
            _memcpy((long)unaff_x24 + (long)iVar21,unaff_x23,(long)(int)uVar13);
            bVar18 = 0x3b;
            unaff_x23 = puVar19;
            iVar22 = iVar21 + uVar13;
          }
LAB_109ab43f0:
          puVar16 = unaff_x23;
          *(byte *)((long)unaff_x24 + (long)iVar22) = bVar18;
          iVar21 = iVar22 + 1;
          if (0xffe < iVar22) {
            uVar24 = *(undefined8 *)(puVar5 + 0x18);
            *(ulong *)((long)puVar2 + -0x14b8) = (ulong)puVar5[0x25];
            *(undefined **)((long)puVar2 + -0x14b0) = &UNK_10f599da6;
            *(undefined8 *)((long)puVar2 + -0x14c0) = uVar24;
            _sprintf((undefined1 *)((long)puVar2 + -0x470),&UNK_10f5995c9);
            FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar2 + -0x470),
                          &UNK_10f598d74,0x7ef);
LAB_109ab46c4:
            uVar24 = *(undefined8 *)(puVar5 + 0x18);
            *(ulong *)((long)puVar2 + -0x14b8) = (ulong)puVar5[0x25];
            *(undefined **)((long)puVar2 + -0x14b0) = &UNK_10f599d23;
            *(undefined8 *)((long)puVar2 + -0x14c0) = uVar24;
            _sprintf((undefined1 *)((long)puVar2 + -0x470),&UNK_10f5995c9);
            FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar2 + -0x470),
                          &UNK_10f598d74,0x7bf);
LAB_109ab4714:
            uVar24 = *(undefined8 *)(puVar5 + 0x18);
            *(ulong *)((long)puVar2 + -0x14b8) = (ulong)puVar5[0x25];
            *(undefined **)((long)puVar2 + -0x14b0) = &UNK_10f599d56;
            *(undefined8 *)((long)puVar2 + -0x14c0) = uVar24;
            _sprintf((undefined1 *)((long)puVar2 + -0x470),&UNK_10f5995c9);
            FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar2 + -0x470),
                          &UNK_10f598d74,1999);
            goto LAB_109ab4764;
          }
        }
        if (uVar12 != 0x22) goto LAB_109ab4974;
        unaff_x23 = (uint *)((long)puVar16 + 2);
LAB_109ab4500:
        uVar24 = *(undefined8 *)(puVar5 + 4);
        puVar9 = (undefined1 *)((long)puVar2 + -0x1480);
        FUN_109a4c450(uVar24,puVar9,iVar21);
        *(undefined8 *)(puVar8 + 4) = uVar24;
        *(undefined1 **)(puVar8 + 6) = puVar9;
      }
      if (*(uint *)((long)puVar2 + -0x14a4) < 4) goto LAB_109ab45a4;
      bVar4 = false;
      goto LAB_109ab3fb0;
    }
    if ((ulong)bVar18 != 0x3c) goto LAB_109ab3ff0;
    uVar13 = (uint)*(byte *)((long)unaff_x23 + 1);
    puVar8 = unaff_x23;
    if (uVar13 == 0x21) {
      if (*(char *)((long)unaff_x23 + 2) != '-') {
        bVar3 = false;
        uVar13 = 0x21;
        goto LAB_109ab4008;
      }
      goto LAB_109ab3fd4;
    }
    bVar3 = false;
LAB_109ab4008:
    *(undefined8 *)((long)puVar2 + -0x470) = 0;
    *(undefined8 *)((long)puVar2 + -0x1498) = 0;
    *(undefined8 *)((long)puVar2 + -0x1490) = 0;
    *(undefined4 *)((long)puVar2 + -0x149c) = 0;
    unaff_x23 = puVar8;
    if ((bVar3) || (uVar13 == 0x2f)) {
LAB_109ab45a4:
      uVar15 = *puVar10;
      uVar13 = uVar15 & 7;
      uVar12 = *(uint *)((long)puVar2 + -0x14a0);
      if (uVar13 == 0) {
        if (uVar12 < 5) goto LAB_109ab45f8;
LAB_109ab45cc:
        uVar14 = 5;
        if (uVar12 == 6) {
          uVar14 = 6;
        }
        FUN_109ab4a88(puVar5,uVar14,puVar10);
        uVar15 = *puVar10;
        uVar13 = uVar15 & 7;
LAB_109ab45fc:
        bVar4 = uVar12 != uVar13;
        uVar13 = uVar12;
        if (bVar4) goto LAB_109ab4a18;
      }
      else {
        if (((4 < uVar12) && (uVar13 != uVar12)) && (uVar13 < 5)) goto LAB_109ab45cc;
LAB_109ab45f8:
        if (uVar12 != 0) goto LAB_109ab45fc;
      }
      if (4 < uVar13) {
        **(uint **)(puVar10 + 4) = **(uint **)(puVar10 + 4) | 0x100;
      }
      *puVar10 = uVar15 | *(uint *)((long)puVar2 + -0x14a8) & 0x10;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar2 + -0x70)) {
        return unaff_x23;
      }
      goto LAB_109ab4a14;
    }
    unaff_x23 = puVar5;
    FUN_109ab38d0(puVar5,puVar8,(undefined1 *)((long)puVar2 + -0x470),
                  (undefined1 *)((long)puVar2 + -0x1498),(undefined1 *)((long)puVar2 + -0x149c));
    if (*(int *)((long)puVar2 + -0x149c) == 3) {
LAB_109ab4764:
      uVar24 = *(undefined8 *)(puVar5 + 0x18);
      *(ulong *)((long)puVar2 + -0x14b8) = (ulong)puVar5[0x25];
      *(undefined **)((long)puVar2 + -0x14b0) = &UNK_10f599be4;
      *(undefined8 *)((long)puVar2 + -0x14c0) = uVar24;
      _sprintf((undefined1 *)((long)puVar2 + -0x1480),&UNK_10f5995c9);
      FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar2 + -0x1480),&UNK_10f598d74,
                    0x747);
LAB_109ab47ac:
      uVar24 = *(undefined8 *)(puVar5 + 0x18);
      *(ulong *)((long)puVar2 + -0x14b8) = (ulong)puVar5[0x25];
      *(undefined **)((long)puVar2 + -0x14b0) = &UNK_10f599bc0;
      *(undefined8 *)((long)puVar2 + -0x14c0) = uVar24;
      _sprintf((undefined1 *)((long)puVar2 + -0x1480),&UNK_10f5995c9);
      FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar2 + -0x1480),&UNK_10f598d74,
                    0x745);
      uVar24 = *(undefined8 *)(puVar5 + 0x18);
      *(ulong *)((long)puVar2 + -0x14b8) = (ulong)puVar5[0x25];
      *(undefined **)((long)puVar2 + -0x14b0) = &UNK_10f599c58;
      *(undefined8 *)((long)puVar2 + -0x14c0) = uVar24;
      _sprintf((undefined1 *)((long)puVar2 + -0x1480),&UNK_10f5995c9);
      FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar2 + -0x1480),&UNK_10f598d74,
                    0x771);
LAB_109ab483c:
      uVar24 = *(undefined8 *)(puVar5 + 0x18);
      *(ulong *)((long)puVar2 + -0x14b8) = (ulong)puVar5[0x25];
      *(undefined **)((long)puVar2 + -0x14b0) = &UNK_10f599d7a;
      *(undefined8 *)((long)puVar2 + -0x14c0) = uVar24;
      _sprintf((undefined1 *)((long)puVar2 + -0x470),&UNK_10f5995c9);
      FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar2 + -0x470),&UNK_10f598d74,
                    0x7d8);
LAB_109ab488c:
      puVar11 = &UNK_10f599c05;
      if (uVar12 == 0) {
        puVar11 = &UNK_10f599c24;
      }
      uVar24 = *(undefined8 *)(puVar5 + 0x18);
      *(ulong *)((long)puVar2 + -0x14b8) = (ulong)puVar5[0x25];
      *(undefined **)((long)puVar2 + -0x14b0) = puVar11;
      *(undefined8 *)((long)puVar2 + -0x14c0) = uVar24;
      _sprintf((undefined1 *)((long)puVar2 + -0x1480),&UNK_10f5995c9);
      FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar2 + -0x1480),&UNK_10f598d74,
                    0x763);
LAB_109ab48e4:
      uVar24 = *(undefined8 *)(puVar5 + 0x18);
      *(ulong *)((long)puVar2 + -0x14b8) = (ulong)puVar5[0x25];
      *(undefined **)((long)puVar2 + -0x14b0) = &UNK_10f599c6f;
      *(undefined8 *)((long)puVar2 + -0x14c0) = uVar24;
      _sprintf((undefined1 *)((long)puVar2 + -0x1480),&UNK_10f5995c9);
      FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar2 + -0x1480),&UNK_10f598d74,
                    0x777);
LAB_109ab492c:
      uVar24 = *(undefined8 *)(puVar5 + 0x18);
      *(ulong *)((long)puVar2 + -0x14b8) = (ulong)puVar5[0x25];
      *(undefined **)((long)puVar2 + -0x14b0) = &UNK_10f599c96;
      *(undefined8 *)((long)puVar2 + -0x14c0) = uVar24;
      _sprintf((undefined1 *)((long)puVar2 + -0x1480),&UNK_10f5995c9);
      FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar2 + -0x1480),&UNK_10f598d74,
                    0x79c);
LAB_109ab4974:
      uVar24 = *(undefined8 *)(puVar5 + 0x18);
      *(ulong *)((long)puVar2 + -0x14b8) = (ulong)puVar5[0x25];
      *(undefined **)((long)puVar2 + -0x14b0) = &UNK_10f599cd8;
      *(undefined8 *)((long)puVar2 + -0x14c0) = uVar24;
      _sprintf((undefined1 *)((long)puVar2 + -0x470),&UNK_10f5995c9);
      FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar2 + -0x470),&UNK_10f598d74,
                    0x7b3);
LAB_109ab49c4:
      uVar24 = *(undefined8 *)(puVar5 + 0x18);
      *(ulong *)((long)puVar2 + -0x14b8) = (ulong)puVar5[0x25];
      *(undefined **)((long)puVar2 + -0x14b0) = &UNK_10f599d0d;
      *(undefined8 *)((long)puVar2 + -0x14c0) = uVar24;
      _sprintf((undefined1 *)((long)puVar2 + -0x470),&UNK_10f5995c9);
      FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar2 + -0x470),&UNK_10f598d74,
                    0x7ba);
LAB_109ab4a14:
      ___stack_chk_fail();
LAB_109ab4a18:
      uVar24 = *(undefined8 *)(puVar5 + 0x18);
      *(ulong *)((long)puVar2 + -0x14b8) = (ulong)puVar5[0x25];
      *(undefined **)((long)puVar2 + -0x14b0) = &UNK_10f599dbe;
      *(undefined8 *)((long)puVar2 + -0x14c0) = uVar24;
      _sprintf((undefined1 *)((long)puVar2 + -0x1480),&UNK_10f5995c9);
      lVar7 = 0xffffff2c;
      FUN_109ac32d8(0xffffff2c,&UNK_10f599baf,(undefined1 *)((long)puVar2 + -0x1480),&UNK_10f598d74,
                    0x805);
      if (*(long *)(lVar7 + 0x160) != 0) {
        return (uint *)(ulong)(*(ulong *)(lVar7 + 0x168) <= *(ulong *)(lVar7 + 0x170));
      }
      puVar8 = *(uint **)(lVar7 + 0x68);
      if (puVar8 != (uint *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__feof_11034c290)();
        return puVar8;
      }
      return (uint *)0x0;
    }
    if (*(int *)((long)puVar2 + -0x149c) == 5) goto LAB_109ab47ac;
    unaff_x26 = *(long **)((long)puVar2 + -0x1498);
    if ((unaff_x26 == (long *)0x0) ||
       (FUN_109aa88f0(unaff_x26,&UNK_10f599658), unaff_x26 == (long *)0x0)) {
      unaff_x26 = (long *)0x0;
      puVar11 = (undefined *)0x0;
    }
    else {
      plVar6 = unaff_x26;
      _strcmp();
      if ((int)plVar6 == 0) {
        unaff_x26 = (long *)0x0;
        puVar11 = (undefined *)0x3;
      }
      else {
        plVar6 = unaff_x26;
        _strcmp(unaff_x26,"map");
        if ((int)plVar6 == 0) {
          unaff_x26 = (long *)0x0;
          puVar11 = (undefined *)0x6;
        }
        else {
          plVar6 = unaff_x26;
          _strcmp(unaff_x26,&UNK_10f51a545);
          if ((int)plVar6 == 0) {
            unaff_x26 = (long *)0x0;
            puVar11 = (undefined *)0x5;
          }
          else {
            FUN_109ab22b0();
            uVar13 = 0;
            if (unaff_x26 != (long *)0x0) {
              uVar13 = 0x10;
            }
            puVar11 = (undefined *)(ulong)uVar13;
          }
        }
      }
    }
    unaff_x27 = *(long *)((long)puVar2 + -0x470);
    if (*(int *)(unaff_x27 + 8) == 1) {
      uVar12 = (uint)(**(char **)(unaff_x27 + 0x10) == '_');
    }
    else {
      uVar12 = 0;
    }
    unaff_x19 = puVar5;
    puVar8 = puVar10;
    unaff_x25 = unaff_x23;
    unaff_x28 = puVar11;
    if ((*puVar10 & 7) < 5) {
      uVar14 = 5;
      if (uVar12 == 0) {
        uVar14 = 6;
      }
      FUN_109ab4a88(puVar5,uVar14,puVar10);
      if (uVar12 == 0) goto LAB_109ab416c;
LAB_109ab4120:
      unaff_x21 = *(uint **)(puVar10 + 4);
      FUN_109a4d978(unaff_x21,0);
      uVar24 = 0x109ab4144;
      puVar2 = (undefined8 *)((long)puVar2 + -0x14c0);
      puVar10 = unaff_x21;
    }
    else {
      if (uVar12 != ((*puVar10 & 7) == 5)) goto LAB_109ab488c;
      if (uVar12 != 0) goto LAB_109ab4120;
LAB_109ab416c:
      unaff_x21 = puVar5;
      FUN_109aa8f30(puVar5,puVar10,unaff_x27);
      uVar24 = 0x109ab4194;
      puVar2 = (undefined8 *)((long)puVar2 + -0x14c0);
      puVar10 = unaff_x21;
    }
  } while( true );
}



/* Entry: 109ab4a60; end: 109ab4a87;  */

ulong FUN_109ab4a60(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x160) != 0) {
    return (ulong)(*(ulong *)(param_1 + 0x168) <= *(ulong *)(param_1 + 0x170));
  }
  uVar1 = *(ulong *)(param_1 + 0x68);
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__feof_11034c290)();
    return uVar1;
  }
  return 0;
}



/* Entry: 109ab4a88; end: 109ab4bdb;  */

/* WARNING: Removing unreachable block (ram,0x000109a4c714) */
/* WARNING: Removing unreachable block (ram,0x000109a4c718) */
/* WARNING: Removing unreachable block (ram,0x000109a4c720) */
/* WARNING: Removing unreachable block (ram,0x000109a4c798) */

void FUN_109ab4a88(long param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 auStack_448 [1024];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 & 7) == 6) {
    if (*param_3 != 0) goto LAB_109ab4b8c;
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    lVar5 = 0;
    FUN_109a4f5b0(0,0x78,0x30,puVar7);
    *(undefined4 *)(lVar5 + 0x6c) = 0x10;
    FUN_109a4c0e8(puVar7,0x80);
    *(undefined8 **)(lVar5 + 0x70) = puVar7;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
  }
  else {
    lVar5 = 0;
    FUN_109a4c4b8(0,0x60,0x20,*(undefined8 *)(param_1 + 0x10));
    if ((*param_3 & 7) != 0) {
      FUN_109a4d978(lVar5,param_3);
    }
  }
  *(long *)(param_3 + 4) = lVar5;
  *param_3 = param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
LAB_109ab4b8c:
    _sprintf(auStack_448,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599df3,auStack_448,&UNK_10f598d74,0x199);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109ab4bd8);
    (*pcVar3)();
  }
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x48) != 0)) {
    iVar1 = *(int *)(lVar5 + 0x2c);
    iVar2 = (*(uint *)(*(long *)(lVar5 + 0x48) + 0x20) & 0xfffffff8) - 0x30;
    iVar6 = 8;
    if (iVar2 < iVar1 * 8) {
      iVar6 = 0;
      if (iVar1 != 0) {
        iVar6 = iVar2 / iVar1;
      }
      if (iVar6 == 0) {
        puVar4 = (undefined4 *)0x44;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar4 + 3) = 0x6973206b636f6c62;
        *(undefined8 *)(puVar4 + 1) = 0x20656761726f7453;
        *puVar4 = 1;
        *(undefined1 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 7) = 0x206c6c616d73206f;
        *(undefined8 *)(puVar4 + 5) = 0x6f7420736920657a;
        *(undefined8 *)(puVar4 + 0xb) = 0x6575716573206568;
        *(undefined8 *)(puVar4 + 9) = 0x7420746966206f74;
        *(undefined8 *)(puVar4 + 0xe) = 0x73746e656d656c65;
        *(undefined8 *)(puVar4 + 0xc) = 0x2065636e65757165;
        FUN_109ac3188(0xffffff2d,&stack0xffffffffffffffd0,&UNK_10f596713,&UNK_10f596553,0x1b1);
        goto LAB_109a4c844;
      }
    }
    *(int *)(lVar5 + 0x40) = iVar6;
    return;
  }
  puVar4 = (undefined4 *)0x8;
  func_0x000107c2ae8c();
  *puVar4 = 1;
  *(undefined1 *)(puVar4 + 1) = 0;
  FUN_109ac3188(0xffffffe5,&stack0xffffffffffffffd0,&UNK_10f596713,&UNK_10f596553,0x19f);
LAB_109a4c844:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a4c848);
  (*pcVar3)();
}



/* Entry: 109ab4bdc; end: 109ab4e07;  */

uint * FUN_109ab4bdc(long param_1,uint *param_2,undefined8 *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint extraout_w8;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint extraout_w8_00;
  uint *puVar22;
  long lVar23;
  byte bVar24;
  undefined1 uVar25;
  uint uVar26;
  uint *puVar27;
  undefined *puVar28;
  long lVar29;
  int iVar30;
  uint uVar31;
  ulong uVar32;
  uint *puVar33;
  undefined4 *puStack_2bf0;
  undefined8 uStack_2be8;
  ulong uStack_2be0;
  uint *puStack_2bd8;
  uint *puStack_2bd0;
  uint *puStack_2bc8;
  undefined8 *****pppppuStack_2bc0;
  code *pcStack_2bb8;
  uint *puStack_2ba8;
  uint *puStack_2ba0;
  uint auStack_2b98 [32];
  char acStack_2b18 [8];
  undefined1 auStack_2b10 [120];
  long lStack_2a98;
  uint *puStack_2a90;
  uint *puStack_2a88;
  undefined *puStack_2a80;
  uint *puStack_2a78;
  uint *puStack_2a70;
  uint *puStack_2a68;
  undefined8 *****pppppuStack_2a60;
  code *pcStack_2a58;
  uint auStack_2a48 [128];
  long lStack_2848;
  uint *puStack_2840;
  ulong uStack_2838;
  uint *puStack_2830;
  uint *puStack_2828;
  undefined1 *****pppppuStack_2820;
  code *pcStack_2818;
  int *piStack_2810;
  undefined4 *puStack_2808;
  undefined8 uStack_2800;
  uint uStack_27f8;
  uint uStack_27f4;
  long lStack_25f8;
  uint *puStack_25f0;
  uint *puStack_25e8;
  undefined1 ****ppppuStack_25e0;
  code *pcStack_25d8;
  undefined8 uStack_25d0;
  ulong uStack_25c8;
  undefined *puStack_25c0;
  uint auStack_25b8 [256];
  long lStack_21b8;
  uint *puStack_21b0;
  uint *puStack_21a8;
  undefined *puStack_21a0;
  uint *puStack_2198;
  uint *puStack_2190;
  uint *puStack_2188;
  undefined1 ***pppuStack_2180;
  code *pcStack_2178;
  undefined8 uStack_2170;
  ulong uStack_2168;
  undefined *puStack_2160;
  uint *puStack_2158;
  uint auStack_2150 [1280];
  uint *apuStack_d50 [128];
  long lStack_950;
  undefined1 **ppuStack_8f0;
  code *pcStack_8e8;
  undefined8 uStack_8e0;
  ulong uStack_8d8;
  undefined *puStack_8d0;
  uint auStack_8c8 [256];
  long lStack_4c8;
  undefined1 *puStack_480;
  code *pcStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  undefined *puStack_460;
  uint auStack_458 [256];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _strtod(param_2,param_3);
  puVar27 = (uint *)*param_3;
  puVar22 = puVar27;
  if ((byte)*puVar27 == 0x2e) {
    *(byte *)puVar27 = 0x2c;
    puVar6 = param_2;
    _strtod(param_2,param_3);
    *(byte *)puVar27 = 0x2e;
    puVar22 = (uint *)*param_3;
    if (puVar22 <= puVar27) {
      *param_3 = puVar27;
      puVar22 = puVar27;
    }
  }
  if ((puVar22 == param_2) || (((byte)*puVar22 & 0xffffffdf) - 0x41 < 0x1a)) {
    bVar24 = (byte)*param_2;
    if ((bVar24 == 0x2d) || (bVar24 == 0x2b)) {
      param_2 = (uint *)((long)param_2 + 1);
      bVar24 = *(byte *)param_2;
    }
    if (bVar24 == 0x2e) {
      iVar30 = (int)(char)*(byte *)((long)param_2 + 1);
      ___toupper();
      if (iVar30 == 0x49) {
        iVar30 = (int)(char)*(byte *)((long)param_2 + 2);
        ___toupper();
        if (iVar30 != 0x4e) goto LAB_109ab4d00;
        puVar6 = (uint *)(long)(char)*(byte *)((long)param_2 + 3);
        ___toupper();
        if ((int)puVar6 != 0x46) goto LAB_109ab4d00;
LAB_109ab4d34:
        *param_3 = param_2 + 1;
        goto LAB_109ab4d3c;
      }
LAB_109ab4d00:
      iVar30 = (int)(char)*(byte *)((long)param_2 + 1);
      ___toupper();
      if (iVar30 == 0x4e) {
        iVar30 = (int)(char)*(byte *)((long)param_2 + 2);
        ___toupper();
        if (iVar30 == 0x41) {
          puVar6 = (uint *)(long)(char)*(byte *)((long)param_2 + 3);
          ___toupper();
          if ((int)puVar6 == 0x4e) goto LAB_109ab4d34;
        }
      }
      uStack_470 = *(undefined8 *)(param_1 + 0x60);
      uStack_468 = (ulong)*(uint *)(param_1 + 0x94);
      puStack_460 = &UNK_10f599e21;
      _sprintf(auStack_458,&UNK_10f5995c9);
      FUN_109ac32d8(0xffffff2c,&UNK_10f599e09,auStack_458,&UNK_10f598d74,0x394);
      goto LAB_109ab4dbc;
    }
  }
  else {
LAB_109ab4d3c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return puVar6;
    }
LAB_109ab4dbc:
    ___stack_chk_fail();
  }
  uStack_470 = *(undefined8 *)(param_1 + 0x60);
  uStack_468 = (ulong)*(uint *)(param_1 + 0x94);
  puStack_460 = &UNK_10f599e21;
  _sprintf(auStack_458,&UNK_10f5995c9);
  puVar6 = (uint *)&UNK_10f599e09;
  puVar22 = auStack_458;
  puVar7 = (uint *)0xffffff2c;
  FUN_109ac32d8();
  pcStack_478 = FUN_109ab4e08;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar27 = (uint *)0x2401;
  puStack_480 = &stack0xfffffffffffffff0;
LAB_109ab4e4c:
  while( true ) {
    bVar24 = (byte)*puVar6;
    uVar19 = (uint)bVar24;
    if (bVar24 == 0x23) break;
    uVar21 = (uint)bVar24;
    if (uVar21 == 0x20) {
      puVar6 = (uint *)((long)puVar6 + 1);
    }
    else {
      if (0x1f < bVar24) {
        if ((long)puVar6 - *(long *)(puVar7 + 0x20) < (long)(int)puVar22) {
          uStack_8e0 = *(undefined8 *)(puVar7 + 0x18);
          uStack_8d8 = (ulong)puVar7[0x25];
          puStack_8d0 = &UNK_10f599f27;
          _sprintf(auStack_8c8,&UNK_10f5995c9);
          FUN_109ac32d8(0xffffff2c,&UNK_10f599f16,auStack_8c8,&UNK_10f598d74,0x3c5);
LAB_109ab4f40:
          puVar6 = *(uint **)(puVar7 + 0x20);
          *puVar6 = 0x2e2e2e;
          puVar7[0x26] = 1;
        }
        goto LAB_109ab4f58;
      }
      if (0xd < uVar21 || (1 << (ulong)(uVar21 & 0x1f) & 0x2401U) == 0) goto LAB_109ab4f94;
      puVar6 = puVar7;
      FUN_109aaa730(puVar7,*(undefined8 *)(puVar7 + 0x20),
                    puVar7[0x22] - (int)*(undefined8 *)(puVar7 + 0x20));
      if (puVar6 == (uint *)0x0) goto LAB_109ab4f40;
      puVar17 = puVar6;
      _strlen();
      bVar24 = *(byte *)((long)puVar6 + (long)((int)puVar17 + -1));
      if ((bVar24 != 10 && bVar24 != 0xd) && (puVar17 = puVar7, FUN_109ab4a60(), (int)puVar17 == 0))
      goto LAB_109ab4fec;
      puVar7[0x25] = puVar7[0x25] + 1;
    }
  }
  if ((long)puVar6 - *(long *)(puVar7 + 0x20) < 0x80000000) {
    *(byte *)puVar6 = 0;
    goto LAB_109ab4e4c;
  }
LAB_109ab4f58:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return puVar6;
  }
  ___stack_chk_fail();
  uVar19 = extraout_w8;
LAB_109ab4f94:
  puStack_8d0 = &UNK_10f599f3d;
  if (uVar19 != 9) {
    puStack_8d0 = &UNK_10f599f5a;
  }
  uStack_8e0 = *(undefined8 *)(puVar7 + 0x18);
  uStack_8d8 = (ulong)puVar7[0x25];
  _sprintf(auStack_8c8,&UNK_10f5995c9);
  FUN_109ac32d8(0xffffff2c,&UNK_10f599f16,auStack_8c8,&UNK_10f598d74,0x3df);
LAB_109ab4fec:
  uStack_8e0 = *(undefined8 *)(puVar7 + 0x18);
  uStack_8d8 = (ulong)puVar7[0x25];
  puStack_8d0 = &UNK_10f599a1f;
  _sprintf(auStack_8c8,&UNK_10f5995c9);
  puVar7 = (uint *)&UNK_10f599f16;
  puVar15 = &UNK_10f598d74;
  puVar6 = auStack_8c8;
  puVar8 = (uint *)0xffffff2c;
  puVar17 = (uint *)0x3d9;
  FUN_109ac32d8();
  pcStack_8e8 = FUN_109ab5034;
  ppuStack_8f0 = &puStack_480;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_950 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2158 = (uint *)0x0;
  uVar21 = *puVar7;
  uVar32 = (ulong)(byte)uVar21;
  bVar24 = *(byte *)((long)puVar7 + 1);
  uVar19 = (uint)bVar24;
  uVar10 = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[0] = 0;
  puVar6[1] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  uVar26 = (uint)puVar15;
  puVar18 = puVar17;
  puVar28 = puVar15;
  if ((byte)uVar21 != 0x21) {
    uVar21 = 0;
    goto LAB_109ab5250;
  }
  if ((bVar24 == 0x5e) || (bVar24 == 0x21)) {
    uVar21 = 0x10;
    puVar7 = (uint *)((long)puVar7 + 1);
  }
  else {
    uVar21 = 0;
  }
  iVar30 = -1;
  puVar27 = puVar7;
  do {
    puVar27 = (uint *)((long)puVar27 + 1);
    bVar1 = *(byte *)puVar27;
    uVar19 = (uint)bVar1;
    iVar30 = iVar30 + 1;
  } while (0x20 < bVar1);
  puStack_2158 = puVar27;
  if (iVar30 == 0) goto LAB_109ab5a9c;
  *(undefined1 *)puVar27 = 0;
  if (iVar30 == 5) {
    if ((bVar24 == 0x21) || (bVar24 == 0x5e)) goto LAB_109ab51e4;
    uVar31 = *(uint *)((long)puVar7 + 1) ^ 0x616f6c66 | *(byte *)((long)puVar7 + 5) ^ 0x74;
    uVar20 = 2;
LAB_109ab51cc:
    if (uVar31 == 0) {
      uVar21 = uVar20;
    }
  }
  else if (iVar30 == 3) {
    if ((bVar24 == 0x21) || (bVar24 == 0x5e)) {
LAB_109ab51e4:
      puVar9 = (undefined1 *)((long)puVar7 + 1);
      FUN_109ab22b0();
      *(undefined1 **)(puVar6 + 2) = puVar9;
      if (puVar9 == (undefined1 *)0x0) {
        *puVar6 = *puVar6 & 0xffffffef;
      }
    }
    else if (*(short *)((long)puVar7 + 1) == 0x7473 && *(char *)((long)puVar7 + 3) == 'r') {
      uVar21 = 3;
    }
    else if (*(short *)((long)puVar7 + 1) == 0x6e69 && *(char *)((long)puVar7 + 3) == 't') {
      uVar21 = 1;
    }
    else {
      if (*(short *)((long)puVar7 + 1) != 0x6573 || *(char *)((long)puVar7 + 3) != 'q') {
        uVar31 = *(ushort *)((long)puVar7 + 1) ^ 0x616d | *(byte *)((long)puVar7 + 3) ^ 0x70;
        uVar20 = 6;
        goto LAB_109ab51cc;
      }
      uVar21 = 5;
    }
  }
  else if ((bVar24 == 0x5e) || (bVar24 == 0x21)) goto LAB_109ab51e4;
  *(byte *)puVar27 = bVar1;
  puVar7 = puVar8;
  FUN_109ab4e08(puVar8,puVar27,puVar17);
  bVar24 = (byte)*puVar7;
  uVar32 = (ulong)bVar24;
  if (uVar21 >> 4 == 0) {
    if (uVar21 == 1) goto LAB_109ab52f8;
    if (uVar21 == 2) goto LAB_109ab5290;
    if (((uVar21 != 3) || (bVar24 == 0x27)) || (bVar24 == 0x22)) goto LAB_109ab5250;
    goto LAB_109ab5604;
  }
  uVar21 = 0x10;
LAB_109ab5250:
  uVar31 = (uint)uVar32;
  if (9 < uVar31 - 0x30) {
    if (uVar31 < 0x2d) goto LAB_109ab536c;
    if (uVar31 < 0x5b) {
      if (uVar31 == 0x2d) goto LAB_109ab5384;
      if (uVar31 != 0x2e) goto LAB_109ab54f4;
      if (((uVar19 - 0x30 < 10) || (uVar19 - 0x61 < 0x1a)) || (uVar19 - 0x41 < 0x1a))
      goto LAB_109ab525c;
      goto LAB_109ab55e4;
    }
    if ((uVar31 != 0x5b) && (uVar31 != 0x7b)) goto LAB_109ab54f4;
    uVar19 = (uint)puVar17;
    if (uVar26 < 8) {
      uVar19 = uVar19 + 1;
    }
    puVar28 = (undefined *)(ulong)uVar19;
    uVar21 = 0xd;
    if (uVar31 == 0x7b) {
      uVar21 = 0xe;
    }
    puVar27 = (uint *)(ulong)uVar21;
    uVar19 = 0;
    if (*(long *)(puVar6 + 2) != 0) {
      uVar19 = 0x10;
    }
    FUN_109ab4a88(puVar8,uVar19 | uVar21 & 7,puVar6);
    uVar19 = 0x5d;
    if (uVar31 != 0x5b) {
      uVar19 = 0x7d;
    }
    uVar32 = (ulong)uVar19;
    puVar18 = (uint *)((long)puVar7 + 1);
    uVar19 = 1;
    while( true ) {
      apuStack_d50[0] = (uint *)0x0;
      puVar17 = puVar8;
      FUN_109ab4e08(puVar8,puVar18,puVar28);
      bVar24 = (byte)*puVar17;
      uVar26 = (uint)bVar24;
      if ((bVar24 | 0x20) == 0x7d) break;
      if (*(int *)(*(long *)(puVar6 + 4) + 0x28) != 0) {
        if (bVar24 != 0x2c) goto LAB_109ab5a54;
        puVar9 = (undefined1 *)((long)puVar17 + 1);
        puVar17 = puVar8;
        FUN_109ab4e08(puVar8,puVar9,puVar28);
      }
      puVar18 = puVar8;
      if ((uVar21 & 7) == 6) {
        puVar22 = puVar8;
        FUN_109ab5c1c(puVar8,puVar17,puVar6,apuStack_d50);
        puVar17 = puVar8;
        FUN_109ab4e08(puVar8,puVar22,puVar28);
        puVar22 = apuStack_d50[0];
        FUN_109ab5034(puVar8,puVar17,apuStack_d50[0],puVar27,puVar28);
        uVar26 = *puVar22 | 0x40;
        *puVar22 = uVar26;
      }
      else {
        puVar33 = puVar7;
        if ((char)*puVar17 == ']') goto LAB_109ab55dc;
        puVar22 = *(uint **)(puVar6 + 4);
        FUN_109a4d978(puVar22,0);
        FUN_109ab5034(puVar8,puVar17,puVar22,puVar27,puVar28);
        uVar26 = *puVar22;
      }
      if (4 < (uVar26 & 7)) {
        uVar19 = 0;
      }
    }
    goto LAB_109ab55d0;
  }
LAB_109ab525c:
  do {
    puVar17 = puVar7;
    if ((int)uVar32 == 0x2d || (int)uVar32 == 0x2b) {
      puVar17 = (uint *)((long)puVar7 + 1);
    }
    do {
      puStack_2158 = puVar17;
      bVar24 = (byte)*puStack_2158;
      puVar17 = (uint *)((long)puStack_2158 + 1);
    } while (bVar24 - 0x30 < 10);
    if ((bVar24 == 0x2e) || (bVar24 == 0x65)) {
LAB_109ab5290:
      FUN_109ab4bdc(puVar8,puVar7,&puStack_2158);
      *puVar6 = 2;
      *(undefined8 *)(puVar6 + 4) = uVar10;
      puVar33 = puVar7;
    }
    else {
LAB_109ab52f8:
      puVar17 = puVar7;
      _strtol(puVar7,&puStack_2158,0);
      *puVar6 = 1;
      puVar6[4] = (uint)puVar17;
      puVar33 = puVar7;
    }
    puVar17 = puStack_2158;
    if ((puStack_2158 != (uint *)0x0) && (puStack_2158 != puVar33)) goto LAB_109ab5910;
    uStack_2170 = *(undefined8 *)(puVar8 + 0x18);
    uStack_2168 = (ulong)puVar8[0x25];
    puStack_2160 = &UNK_10f599c96;
    _sprintf(auStack_2150,&UNK_10f5995c9);
    puVar18 = (uint *)0x468;
    FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_2150,&UNK_10f598d74);
    puVar7 = puVar33;
LAB_109ab536c:
    iVar30 = (int)uVar32;
    if ((iVar30 == 0x22) || (iVar30 == 0x27)) {
      *puVar6 = 3;
      puVar33 = puVar7;
      if (iVar30 == 0x27) {
        puVar28 = (undefined *)0x0;
        goto LAB_109ab552c;
      }
      puVar28 = (undefined *)0x0;
      puVar27 = auStack_2150;
      uVar19 = 9;
      goto LAB_109ab5790;
    }
    if (iVar30 != 0x2b) break;
LAB_109ab5384:
  } while ((uVar19 == 0x2e) || (uVar19 - 0x30 < 10));
LAB_109ab54f4:
  if ((uVar26 < 8) && ((int)uVar32 == 0x2d)) {
    puVar27 = (uint *)0x0;
    puVar28 = (undefined *)0x5;
LAB_109ab5678:
    puVar17 = puVar7;
    uVar19 = 0;
    if (*(long *)(puVar6 + 2) != 0) {
      uVar19 = 0x10;
    }
    FUN_109ab4a88(puVar8,uVar19 | (uint)puVar28,puVar6);
    iVar30 = (int)puVar17 - (int)*(undefined8 *)(puVar8 + 0x20);
    uVar32 = (ulong)iVar30;
    bVar5 = true;
    puVar33 = (uint *)0x2e2e;
    do {
      apuStack_d50[0] = (uint *)0x0;
      if ((int)puVar27 == 0) {
        puVar7 = (uint *)((long)puVar17 + 1);
        uVar19 = *puVar17;
        puVar17 = puVar7;
        if ((char)uVar19 != '-') goto LAB_109ab5a0c;
        puVar22 = *(uint **)(puVar6 + 4);
        FUN_109a4d978(puVar22,0);
      }
      else {
        puVar7 = puVar8;
        FUN_109ab5c1c(puVar8,puVar17,puVar6,apuStack_d50);
        puVar22 = apuStack_d50[0];
      }
      puVar17 = puVar8;
      FUN_109ab4e08(puVar8,puVar7,iVar30 + 1);
      puVar7 = puVar8;
      FUN_109ab5034(puVar8,puVar17,puVar22,puVar28,iVar30 + 1);
      uVar19 = *puVar22;
      if ((int)puVar27 != 0) {
        uVar19 = uVar19 | 0x40;
        *puVar22 = uVar19;
      }
      if (4 < (uVar19 & 7)) {
        bVar5 = false;
      }
      puVar17 = puVar8;
      FUN_109ab4e08(puVar8,puVar7,0);
      if ((long)puVar17 - *(long *)(puVar8 + 0x20) != uVar32) {
        if ((long)uVar32 <= (long)puVar17 - *(long *)(puVar8 + 0x20)) goto LAB_109ab5bbc;
        break;
      }
    } while ((short)*puVar17 != 0x2e2e || *(char *)((long)puVar17 + 2) != '.');
    bVar5 = !bVar5;
    goto LAB_109ab58b8;
  }
LAB_109ab55e4:
  if (7 < uVar26) {
LAB_109ab5604:
    lVar29 = 0;
    while( true ) {
      lVar23 = lVar29;
      puVar17 = (uint *)((long)puVar7 + lVar23);
      bVar24 = *(byte *)((long)puVar7 + lVar23);
      if (bVar24 < 0x20) break;
      if (((7 < uVar26) && (((bVar24 == 0x2c || (bVar24 == 0x5d)) || (bVar24 == 0x7d)))) ||
         (lVar29 = lVar23 + 1, bVar24 == 0x3a && (uVar21 != 3 && uVar26 < 8))) break;
    }
    puStack_2158 = puVar17;
    if (lVar23 != 0) {
      if ((7 < uVar26) || (bVar24 != 0x3a)) {
        lVar23 = lVar23 + -1;
        *puVar6 = 3;
        do {
          puVar18 = (uint *)((long)puVar7 + lVar23);
          lVar23 = lVar23 + -1;
          if (puVar18 <= puVar7) break;
        } while ((char)*puVar18 == ' ');
        uVar10 = *(undefined8 *)(puVar8 + 4);
        puVar28 = (undefined *)(ulong)((int)lVar23 + 2);
        puVar33 = puVar7;
        goto LAB_109ab5908;
      }
      puVar28 = (undefined *)0x6;
      puVar27 = (uint *)0x1;
      goto LAB_109ab5678;
    }
    goto LAB_109ab5ae4;
  }
  iVar30 = (int)uVar32;
  puVar33 = puVar7;
  if ((iVar30 == 0x3e) || (iVar30 == 0x7c)) goto LAB_109ab5b74;
  if (iVar30 != 0x3f) goto LAB_109ab5604;
  goto LAB_109ab5c04;
LAB_109ab5790:
  do {
    puVar22 = (uint *)((long)puVar33 + 1);
    bVar24 = *(byte *)puVar22;
    iVar30 = (int)puVar28;
    if (bVar24 - 0x30 < 10 || (bVar24 & 0xffffffdf) - 0x41 < 0x1a) {
LAB_109ab57c4:
      *(byte *)((long)puVar27 + (long)iVar30) = bVar24;
LAB_109ab57c8:
      puVar28 = (undefined *)(ulong)(iVar30 + 1);
    }
    else {
      if (bVar24 < 0x20) {
        uStack_2170 = *(undefined8 *)(puVar8 + 0x18);
        uStack_2168 = (ulong)puVar8[0x25];
        puStack_2160 = &UNK_10f599f5a;
        _sprintf(apuStack_d50,&UNK_10f5995c9);
        FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,apuStack_d50,&UNK_10f598d74,0x4a8);
        goto LAB_109ab59b8;
      }
      if (bVar24 != 0x5c) {
        if (bVar24 != 0x22) goto LAB_109ab57c4;
        puVar17 = (uint *)((long)puVar33 + 2);
        goto LAB_109ab58a0;
      }
      puVar22 = (uint *)((long)puVar33 + 2);
      bVar24 = *(byte *)puVar22;
      if (0x6d < bVar24) {
        if (bVar24 == 0x6e) {
          bVar24 = 10;
          goto LAB_109ab57c4;
        }
        if (bVar24 == 0x72) {
          *(undefined1 *)((long)puVar27 + (long)iVar30) = 0xd;
        }
        else {
          if (bVar24 != 0x74) goto LAB_109ab5834;
          *(undefined1 *)((long)puVar27 + (long)iVar30) = 9;
        }
        goto LAB_109ab57c8;
      }
      if (((bVar24 == 0x22) || (bVar24 == 0x27)) || (bVar24 == 0x5c)) goto LAB_109ab57c4;
LAB_109ab5834:
      if (bVar24 == 0x78) {
        uVar10 = 8;
      }
      else {
        if ((bVar24 & 0xf8) != 0x30) goto LAB_109ab57d0;
        uVar10 = 0x10;
      }
      bVar1 = *(byte *)((long)puVar33 + 5);
      uVar32 = (ulong)bVar1;
      *(undefined1 *)((long)puVar33 + 5) = 0;
      puVar17 = puVar22;
      if (bVar24 == 0x78) {
        puVar17 = (uint *)((long)puVar33 + 3);
      }
      puVar7 = puVar17;
      _strtol(puVar17,&puStack_2158,uVar10);
      *(byte *)((long)puVar33 + 5) = bVar1;
      uVar25 = 0x78;
      if (puStack_2158 != puVar17) {
        uVar25 = SUB81(puVar7,0);
        puVar22 = puStack_2158;
      }
      *(undefined1 *)((long)puVar27 + (long)iVar30) = uVar25;
      puVar28 = (undefined *)(ulong)(iVar30 + 1);
    }
LAB_109ab57d0:
    puVar33 = puVar22;
    puVar7 = puVar22;
  } while ((int)puVar28 < 0x1000);
  goto LAB_109ab5580;
LAB_109ab59b8:
  uStack_2170 = *(undefined8 *)(puVar8 + 0x18);
  uStack_2168 = (ulong)puVar8[0x25];
  puStack_2160 = &UNK_10f599f5a;
  _sprintf(apuStack_d50,&UNK_10f5995c9);
  FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,apuStack_d50,&UNK_10f598d74,0x47d);
  goto LAB_109ab5a08;
LAB_109ab58a0:
  uVar10 = *(undefined8 *)(puVar8 + 4);
  puVar7 = auStack_2150;
  puVar15 = puVar28;
LAB_109ab5908:
  FUN_109a4c450(uVar10,puVar7,puVar28);
  *(undefined8 *)(puVar6 + 4) = uVar10;
  *(uint **)(puVar6 + 6) = puVar7;
  puVar28 = puVar15;
  goto LAB_109ab5910;
LAB_109ab552c:
  do {
    puVar17 = (uint *)((long)puVar33 + 1);
    bVar24 = *(byte *)puVar17;
    if ((9 < bVar24 - 0x30 && 0x19 < (bVar24 & 0xffffffdf) - 0x41) &&
       ((bVar24 == 0x27 || bVar24 < 0x1f) || bVar24 == 0x1f)) {
      if (bVar24 != 0x27) goto LAB_109ab59b8;
      puVar17 = (uint *)((long)puVar33 + 2);
      bVar24 = *(byte *)puVar17;
      puVar33 = puVar17;
      if (bVar24 != 0x27) goto LAB_109ab58a0;
    }
    *(byte *)((long)auStack_2150 + (long)puVar28) = bVar24;
    puVar28 = puVar28 + 1;
    puVar7 = puVar17;
    puVar33 = puVar17;
  } while (puVar28 != (undefined *)0x1000);
LAB_109ab5580:
  uStack_2170 = *(undefined8 *)(puVar8 + 0x18);
  uStack_2168 = (ulong)puVar8[0x25];
  puStack_2160 = &UNK_10f599da6;
  _sprintf(apuStack_d50,&UNK_10f5995c9);
  FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,apuStack_d50,&UNK_10f598d74,0x4ac);
  uVar26 = extraout_w8_00;
LAB_109ab55d0:
  if ((uint)uVar32 == uVar26) {
    puVar17 = (uint *)((long)puVar17 + 1);
    puVar33 = puVar7;
LAB_109ab55dc:
    bVar5 = uVar19 == 0;
LAB_109ab58b8:
    uVar19 = 0;
    if (!bVar5) {
      uVar19 = 0x100;
    }
    **(uint **)(puVar6 + 4) = **(uint **)(puVar6 + 4) | uVar19;
LAB_109ab5910:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_950) {
      return puVar17;
    }
LAB_109ab5a08:
    ___stack_chk_fail();
LAB_109ab5a0c:
    uStack_2170 = *(undefined8 *)(puVar8 + 0x18);
    uStack_2168 = (ulong)puVar8[0x25];
    puStack_2160 = &UNK_10f59a010;
    _sprintf(auStack_2150,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_2150,&UNK_10f598d74,0x51e);
    puVar7 = puVar33;
LAB_109ab5a54:
    uStack_2170 = *(undefined8 *)(puVar8 + 0x18);
    uStack_2168 = (ulong)puVar8[0x25];
    puStack_2160 = &UNK_10f599fa7;
    _sprintf(auStack_2150,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_2150,&UNK_10f598d74,0x4cb);
LAB_109ab5a9c:
    uStack_2170 = *(undefined8 *)(puVar8 + 0x18);
    uStack_2168 = (ulong)puVar8[0x25];
    puStack_2160 = &UNK_10f599f7d;
    _sprintf(auStack_2150,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_2150,&UNK_10f598d74,0x421);
LAB_109ab5ae4:
    uStack_2170 = *(undefined8 *)(puVar8 + 0x18);
    uStack_2168 = (ulong)puVar8[0x25];
    puStack_2160 = &UNK_10f599f5a;
    _sprintf(auStack_2150,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_2150,&UNK_10f598d74,0x4f9);
  }
  uStack_2170 = *(undefined8 *)(puVar8 + 0x18);
  uStack_2168 = (ulong)puVar8[0x25];
  puStack_2160 = &UNK_10f599f8d;
  _sprintf(auStack_2150,&UNK_10f5995c9);
  FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_2150,&UNK_10f598d74,0x4c3);
  puVar15 = puVar28;
  puVar33 = puVar7;
LAB_109ab5b74:
  uStack_2170 = *(undefined8 *)(puVar8 + 0x18);
  uStack_2168 = (ulong)puVar8[0x25];
  puStack_2160 = &UNK_10f599fe5;
  _sprintf(auStack_2150,&UNK_10f5995c9);
  FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_2150,&UNK_10f598d74,0x4ed);
  puVar28 = puVar15;
LAB_109ab5bbc:
  uStack_2170 = *(undefined8 *)(puVar8 + 0x18);
  uStack_2168 = (ulong)puVar8[0x25];
  puStack_2160 = &UNK_10f599f27;
  _sprintf(auStack_2150,&UNK_10f5995c9);
  puVar18 = (uint *)0x52f;
  FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_2150,&UNK_10f598d74);
  puVar15 = puVar28;
  puVar7 = puVar33;
LAB_109ab5c04:
  puVar11 = *(uint **)(puVar8 + 0x18);
  puVar33 = (uint *)(ulong)puVar8[0x25];
  puVar28 = &UNK_10f599fc6;
  puVar16 = (uint *)0x4eb;
  FUN_109aa92c8();
  pcStack_2178 = FUN_109ab5c1c;
  lStack_21b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_21b0 = puVar27;
  puStack_21a8 = puVar17;
  puStack_21a0 = puVar15;
  puStack_2198 = puVar22;
  puStack_2190 = puVar8;
  puStack_2188 = puVar6;
  pppuStack_2180 = &ppuStack_8f0;
  if ((char)*puVar33 == '-') {
    uStack_25d0 = *(undefined8 *)(puVar11 + 0x18);
    uStack_25c8 = (ulong)puVar11[0x25];
    puStack_25c0 = &UNK_10f59a051;
    _sprintf(auStack_25b8,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f59a042,auStack_25b8,&UNK_10f598d74,0x3ef);
    puVar33 = puVar6;
    puVar16 = puVar8;
    puVar28 = puVar15;
LAB_109ab5d3c:
    uStack_25d0 = *(undefined8 *)(puVar11 + 0x18);
    uStack_25c8 = (ulong)puVar11[0x25];
    puStack_25c0 = &UNK_10f59a06c;
    _sprintf(auStack_25b8,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f59a042,auStack_25b8,&UNK_10f598d74,0x3f5);
LAB_109ab5d84:
    uStack_25d0 = *(undefined8 *)(puVar11 + 0x18);
    uStack_25c8 = (ulong)puVar11[0x25];
    puStack_25c0 = &UNK_10f59a078;
    _sprintf(auStack_25b8,&UNK_10f5995c9);
    puVar6 = (uint *)&UNK_10f598d74;
    puVar22 = auStack_25b8;
    puVar8 = (uint *)0xffffff2c;
    puVar18 = (uint *)0x3fd;
    FUN_109ac32d8(0xffffff2c,&UNK_10f59a042);
  }
  else {
    puVar17 = (uint *)0x0;
    do {
      bVar24 = *(byte *)((long)puVar33 + (long)puVar17);
      puVar17 = (uint *)((long)puVar17 + 1);
      if (bVar24 < 0x20) break;
    } while (bVar24 != 0x3a);
    puVar6 = puVar17;
    if (bVar24 != 0x3a) goto LAB_109ab5d3c;
    do {
      puVar9 = (undefined1 *)((long)puVar33 + (long)puVar6);
      puVar6 = (uint *)((long)puVar6 + -1);
    } while (puVar9[-2] == ' ');
    if (puVar6 == (uint *)0x0) goto LAB_109ab5d84;
    puVar22 = puVar11;
    puVar6 = puVar16;
    FUN_109aa8dac(puVar11,puVar33);
    puVar8 = puVar11;
    FUN_109aa8f30(puVar11,puVar28);
    *(uint **)puVar16 = puVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_21b8) {
      return (uint *)((long)puVar33 + (long)puVar17);
    }
  }
  ___stack_chk_fail();
  pcStack_25d8 = FUN_109ab5dd0;
  lStack_25f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = &uStack_27f8;
  puStack_25f0 = puVar16;
  puStack_25e8 = puVar33;
  ppppuStack_25e0 = &pppuStack_2180;
  FUN_109aace64();
  if ((int)puVar8 != 1 || 4 < (int)uStack_27f8) {
    puVar13 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar13 = 1;
    puStack_2808 = puVar13 + 1;
    uStack_2800 = 0x21;
    *(undefined2 *)(puVar13 + 9) = 0x78;
    *(undefined8 *)(puVar13 + 3) = 0x6d726f662078656c;
    *(undefined8 *)(puVar13 + 1) = 0x706d6f63206f6f54;
    *(undefined8 *)(puVar13 + 7) = 0x697274616d206568;
    *(undefined8 *)(puVar13 + 5) = 0x7420726f66207461;
    piStack_2810 = puVar13;
    FUN_109ac3188(0xfffffffe,&puStack_2808,&UNK_10f59a37e,&UNK_10f598d74,0xc0d);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109ab5e9c);
    (*pcVar4)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_25f8) {
    return (uint *)(ulong)((uStack_27f4 & 7 | uStack_27f8 << 3) - 8);
  }
  ___stack_chk_fail();
  puStack_2808 = (undefined4 *)0x0;
  uStack_2800 = 0;
  do {
    iVar30 = *piStack_2810;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piStack_2810,0x10);
    if (bVar5) {
      *piStack_2810 = iVar30 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar30 + -1 == 0) {
    _free(*(undefined8 *)(piStack_2810 + -2));
  }
  puVar33 = puVar8;
  __Unwind_Resume();
  iVar30 = (int)puVar33;
  pcStack_2818 = FUN_109ab5edc;
  lStack_2848 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2840 = puVar7;
  uStack_2838 = uVar32;
  puStack_2830 = puVar16;
  puStack_2828 = puVar8;
  pppppuStack_2820 = &ppppuStack_25e0;
  FUN_109aace64();
  puVar7 = puVar14;
  if (0 < iVar30) {
    uVar32 = 0;
    do {
      iVar2 = (auStack_2a48[uVar32 + 1] >> 3 & 0x1ff) + 1 <<
              (ulong)(0xfa50U >> (ulong)((auStack_2a48[uVar32 + 1] & 7) << 1) & 3);
      puVar7 = (uint *)(ulong)((((int)puVar7 + iVar2) - 1U & -iVar2) + iVar2 * auStack_2a48[uVar32])
      ;
      uVar32 = uVar32 + 2;
    } while (uVar32 < (uint)(iVar30 << 1));
  }
  if ((int)puVar14 == 0) {
    iVar30 = (auStack_2a48[1] >> 3 & 0x1ff) + 1 <<
             (ulong)(0xfa50U >> (ulong)((auStack_2a48[1] & 7) << 1) & 3);
    puVar7 = (uint *)(ulong)(((int)puVar7 + iVar30) - 1U & -iVar30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2848) {
    return puVar7;
  }
  ___stack_chk_fail();
  pcStack_2a58 = FUN_109ab5fd4;
  lStack_2a98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2ba8 = puVar6;
  puStack_2ba0 = puVar18;
  puStack_2a90 = puVar27;
  puStack_2a88 = puVar17;
  puStack_2a80 = puVar28;
  puStack_2a78 = puVar11;
  puStack_2a70 = auStack_2a48;
  puStack_2a68 = puVar14;
  pppppuStack_2a60 = &pppppuStack_2820;
  FUN_109aac02c();
  if (-1 < (int)param_6) {
    FUN_109aac30c(puVar7,&DAT_10f2e4590,param_6);
  }
  puVar6 = auStack_2b98;
  puVar27 = puVar22;
  FUN_109ab6208(puVar22,&UNK_10f59a1e9,&puStack_2ba8,0);
  acStack_2b18[0] = '\0';
  uVar19 = *puVar22;
  if ((uVar19 >> 0xe & 1) != 0) {
    pcVar12 = acStack_2b18;
    _strlen();
    builtin_strncpy(acStack_2b18 + (long)pcVar12," closed",8);
  }
  if ((uVar19 >> 0xf & 1) != 0) {
    pcVar12 = acStack_2b18;
    _strlen();
    builtin_strncpy(acStack_2b18 + (long)pcVar12," hol",4);
    (pcVar12 + (long)(acStack_2b18 + 4))[0] = 'e';
    (pcVar12 + (long)(acStack_2b18 + 4))[1] = '\0';
  }
  if ((uVar19 & 0x3000) == 0x1000) {
    pcVar12 = acStack_2b18;
    _strlen();
    builtin_strncpy(acStack_2b18 + (long)pcVar12," cur",4);
    builtin_strncpy(pcVar12 + (long)(acStack_2b18 + 3),"rve",4);
  }
  if (((uVar19 & 0xfff) == 0) && (puVar22[0xb] != 1)) {
    pcVar12 = acStack_2b18;
    _strlen();
    auStack_2b10[(long)pcVar12] = 0;
    builtin_strncpy(acStack_2b18 + (long)pcVar12," untyped",8);
  }
  pcVar12 = acStack_2b18;
  if (acStack_2b18[0] != '\0') {
    pcVar12 = acStack_2b18 + 1;
  }
  FUN_109aac5ec(puVar7,&DAT_10f2d43a7,pcVar12,1);
  FUN_109aac30c(puVar7,&DAT_10f637eac,puVar22[10]);
  FUN_109aac5ec(puVar7,&UNK_10f59a1e9,puVar27,0);
  FUN_109ab642c(puVar7,puVar22,&puStack_2ba8,0x60);
  puVar17 = (uint *)0xd;
  iVar30 = 0;
  FUN_109aac02c(puVar7,"data");
  for (lVar29 = *(long *)(puVar22 + 0x16); lVar29 != 0; lVar29 = *(long *)(lVar29 + 8)) {
    puVar17 = (uint *)(ulong)*(uint *)(lVar29 + 0x14);
    puVar18 = puVar27;
    FUN_109aac75c(puVar7,*(undefined8 *)(lVar29 + 0x18));
    iVar30 = (int)puVar18;
    if (lVar29 == **(long **)(puVar22 + 0x16)) break;
  }
  FUN_109aac19c(puVar7);
  puVar18 = puVar7;
  FUN_109aac19c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a98) {
    return puVar18;
  }
  ___stack_chk_fail();
  pcStack_2bb8 = FUN_109ab6208;
  uStack_2be0 = lVar29;
  puStack_2bd8 = puVar27;
  puStack_2bd0 = puVar22;
  puStack_2bc8 = puVar7;
  pppppuStack_2bc0 = &pppppuStack_2a60;
  FUN_109aa88f0();
  if (puVar17 == (uint *)0x0) {
    uVar21 = *puVar18;
    uVar26 = puVar18[0xb];
    uVar19 = uVar21 & 0xfff;
    if ((uVar19 != 0) || (uVar26 == 1)) {
      if ((uVar21 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar21 & 7) << 1) & 3) == uVar26)
      {
        uStack_2be0 = (ulong)((uVar19 >> 3) + 1);
        puStack_2bd8 = (uint *)(long)(char)(&UNK_10e02e313)[(ulong)uVar19 & 7];
        _sprintf(puVar6,&UNK_10f59a453);
        if (*(char *)((long)puVar6 + 2) == '\0') {
          uVar32 = (ulong)((char)*puVar6 == '1');
        }
        else {
          uVar32 = 0;
        }
        return (uint *)((long)puVar6 + uVar32);
      }
      puVar13 = (undefined4 *)0x4c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar13 + 3) = 0x65636e6575716573;
      *(undefined8 *)(puVar13 + 1) = 0x20666f20657a6953;
      *(undefined8 *)(puVar13 + 7) = 0x735f6d656c652820;
      *(undefined8 *)(puVar13 + 5) = 0x746e656d656c6520;
      *(undefined8 *)(puVar13 + 0xb) = 0x7369736e6f636e69;
      *(undefined8 *)(puVar13 + 9) = 0x2073692029657a69;
      *puVar13 = 1;
      puStack_2bf0 = puVar13 + 1;
      uStack_2be8 = 0x44;
      *(undefined1 *)(puVar13 + 0x12) = 0;
      puVar13[0x11] = 0x7367616c;
      *(undefined8 *)(puVar13 + 0xf) = 0x663e2d7165732068;
      *(undefined8 *)(puVar13 + 0xd) = 0x74697720746e6574;
      FUN_109ac3188(0xffffff2f,&puStack_2bf0,&UNK_10f59a3f9,&UNK_10f598d74,0xffc);
      goto LAB_109ab63e0;
    }
    if (uVar26 - iVar30 == 0 || (int)uVar26 < iVar30) {
      puVar6 = (uint *)0x0;
    }
    else {
      if ((uVar26 - iVar30 & 3) == 0) {
        puVar15 = &UNK_10f59a44b;
      }
      else {
        puVar15 = &UNK_10f59a44f;
      }
      _sprintf(puVar6,puVar15);
    }
  }
  else {
    puVar22 = puVar17;
    FUN_109ab5edc();
    puVar6 = puVar17;
    if ((uint)puVar22 != puVar18[0xb]) {
      puVar13 = (undefined4 *)0x4c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar13 + 7) = 0x6620646574616c75;
      *(undefined8 *)(puVar13 + 5) = 0x636c616320746e65;
      *(undefined8 *)(puVar13 + 0xb) = 0x65687420646e6120;
      *(undefined8 *)(puVar13 + 9) = 0x22746422206d6f72;
      *(undefined8 *)(puVar13 + 0xf) = 0x6f6e206f6420657a;
      *(undefined8 *)(puVar13 + 0xd) = 0x69735f6d656c6520;
      *puVar13 = 1;
      puStack_2bf0 = puVar13 + 1;
      uStack_2be8 = 0x47;
      *(undefined1 *)((long)puVar13 + 0x4b) = 0;
      *(undefined8 *)((long)puVar13 + 0x43) = 0x686374616d20746f;
      *(undefined8 *)(puVar13 + 3) = 0x6d656c6520666f20;
      *(undefined8 *)(puVar13 + 1) = 0x657a697320656854;
      FUN_109ac3188(0xffffff2f,&puStack_2bf0,&UNK_10f59a3f9,&UNK_10f598d74,0xff6);
LAB_109ab63e0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109ab63e4);
      (*pcVar4)();
    }
  }
  return puVar6;
}



/* Entry: 109ab4e08; end: 109ab5033;  */

uint * FUN_109ab4e08(uint *param_1,uint *param_2,uint *param_3,undefined8 param_4,undefined8 param_5
                    ,undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint extraout_w8;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint extraout_w8_00;
  long lVar23;
  byte bVar24;
  undefined1 uVar25;
  uint uVar26;
  undefined *puVar27;
  long lVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  ulong uVar32;
  uint *puVar33;
  undefined4 *puStack_2780;
  undefined8 uStack_2778;
  ulong uStack_2770;
  uint *puStack_2768;
  uint *puStack_2760;
  uint *puStack_2758;
  undefined8 *****pppppuStack_2750;
  code *pcStack_2748;
  uint *puStack_2738;
  uint *puStack_2730;
  uint auStack_2728 [32];
  char acStack_26a8 [8];
  undefined1 auStack_26a0 [120];
  long lStack_2628;
  uint *puStack_2620;
  uint *puStack_2618;
  undefined *puStack_2610;
  uint *puStack_2608;
  uint *puStack_2600;
  uint *puStack_25f8;
  undefined1 *****pppppuStack_25f0;
  code *pcStack_25e8;
  uint auStack_25d8 [128];
  long lStack_23d8;
  uint *puStack_23d0;
  ulong uStack_23c8;
  uint *puStack_23c0;
  uint *puStack_23b8;
  undefined1 ****ppppuStack_23b0;
  code *pcStack_23a8;
  int *piStack_23a0;
  undefined4 *puStack_2398;
  undefined8 uStack_2390;
  uint uStack_2388;
  uint uStack_2384;
  long lStack_2188;
  uint *puStack_2180;
  uint *puStack_2178;
  undefined1 ***pppuStack_2170;
  code *pcStack_2168;
  undefined8 uStack_2160;
  ulong uStack_2158;
  undefined *puStack_2150;
  uint auStack_2148 [256];
  long lStack_1d48;
  uint *puStack_1d40;
  uint *puStack_1d38;
  undefined *puStack_1d30;
  uint *puStack_1d28;
  uint *puStack_1d20;
  uint *puStack_1d18;
  undefined1 **ppuStack_1d10;
  code *pcStack_1d08;
  undefined8 uStack_1d00;
  ulong uStack_1cf8;
  undefined *puStack_1cf0;
  uint *puStack_1ce8;
  uint auStack_1ce0 [1280];
  uint *apuStack_8e0 [128];
  long lStack_4e0;
  undefined1 *puStack_480;
  code *pcStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  undefined *puStack_460;
  uint auStack_458 [256];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar29 = (uint *)0x2401;
LAB_109ab4e4c:
  while( true ) {
    bVar24 = (byte)*param_2;
    uVar20 = (uint)bVar24;
    if (bVar24 == 0x23) break;
    uVar22 = (uint)bVar24;
    if (uVar22 == 0x20) {
      param_2 = (uint *)((long)param_2 + 1);
    }
    else {
      if (0x1f < bVar24) {
        if ((long)param_2 - *(long *)(param_1 + 0x20) < (long)(int)param_3) {
          uStack_470 = *(undefined8 *)(param_1 + 0x18);
          uStack_468 = (ulong)param_1[0x25];
          puStack_460 = &UNK_10f599f27;
          _sprintf(auStack_458,&UNK_10f5995c9);
          FUN_109ac32d8(0xffffff2c,&UNK_10f599f16,auStack_458,&UNK_10f598d74,0x3c5);
LAB_109ab4f40:
          param_2 = *(uint **)(param_1 + 0x20);
          *param_2 = 0x2e2e2e;
          param_1[0x26] = 1;
        }
        goto LAB_109ab4f58;
      }
      if (0xd < uVar22 || (1 << (ulong)(uVar22 & 0x1f) & 0x2401U) == 0) goto LAB_109ab4f94;
      param_2 = param_1;
      FUN_109aaa730(param_1,*(undefined8 *)(param_1 + 0x20),
                    param_1[0x22] - (int)*(undefined8 *)(param_1 + 0x20));
      if (param_2 == (uint *)0x0) goto LAB_109ab4f40;
      puVar16 = param_2;
      _strlen();
      bVar24 = *(byte *)((long)param_2 + (long)((int)puVar16 + -1));
      if ((bVar24 != 10 && bVar24 != 0xd) && (puVar16 = param_1, FUN_109ab4a60(), (int)puVar16 == 0)
         ) goto LAB_109ab4fec;
      param_1[0x25] = param_1[0x25] + 1;
    }
  }
  if ((long)param_2 - *(long *)(param_1 + 0x20) < 0x80000000) {
    *(byte *)param_2 = 0;
    goto LAB_109ab4e4c;
  }
LAB_109ab4f58:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_2;
  }
  ___stack_chk_fail();
  uVar20 = extraout_w8;
LAB_109ab4f94:
  puStack_460 = &UNK_10f599f3d;
  if (uVar20 != 9) {
    puStack_460 = &UNK_10f599f5a;
  }
  uStack_470 = *(undefined8 *)(param_1 + 0x18);
  uStack_468 = (ulong)param_1[0x25];
  _sprintf(auStack_458,&UNK_10f5995c9);
  FUN_109ac32d8(0xffffff2c,&UNK_10f599f16,auStack_458,&UNK_10f598d74,0x3df);
LAB_109ab4fec:
  uStack_470 = *(undefined8 *)(param_1 + 0x18);
  uStack_468 = (ulong)param_1[0x25];
  puStack_460 = &UNK_10f599a1f;
  _sprintf(auStack_458,&UNK_10f5995c9);
  puVar11 = (uint *)&UNK_10f599f16;
  puVar15 = &UNK_10f598d74;
  puVar16 = auStack_458;
  puVar6 = (uint *)0xffffff2c;
  puVar18 = (uint *)0x3d9;
  FUN_109ac32d8();
  pcStack_478 = FUN_109ab5034;
  puStack_480 = &stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_4e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1ce8 = (uint *)0x0;
  uVar22 = *puVar11;
  uVar32 = (ulong)(byte)uVar22;
  bVar24 = *(byte *)((long)puVar11 + 1);
  uVar20 = (uint)bVar24;
  uVar8 = 0;
  puVar16[2] = 0;
  puVar16[3] = 0;
  puVar16[0] = 0;
  puVar16[1] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  uVar26 = (uint)puVar15;
  puVar19 = puVar18;
  puVar27 = puVar15;
  if ((byte)uVar22 != 0x21) {
    uVar22 = 0;
    goto LAB_109ab5250;
  }
  if ((bVar24 == 0x5e) || (bVar24 == 0x21)) {
    uVar22 = 0x10;
    puVar11 = (uint *)((long)puVar11 + 1);
  }
  else {
    uVar22 = 0;
  }
  iVar30 = -1;
  puVar29 = puVar11;
  do {
    puVar29 = (uint *)((long)puVar29 + 1);
    bVar1 = *(byte *)puVar29;
    uVar20 = (uint)bVar1;
    iVar30 = iVar30 + 1;
  } while (0x20 < bVar1);
  puStack_1ce8 = puVar29;
  if (iVar30 == 0) goto LAB_109ab5a9c;
  *(undefined1 *)puVar29 = 0;
  if (iVar30 == 5) {
    if ((bVar24 == 0x21) || (bVar24 == 0x5e)) goto LAB_109ab51e4;
    uVar31 = *(uint *)((long)puVar11 + 1) ^ 0x616f6c66 | *(byte *)((long)puVar11 + 5) ^ 0x74;
    uVar21 = 2;
LAB_109ab51cc:
    if (uVar31 == 0) {
      uVar22 = uVar21;
    }
  }
  else if (iVar30 == 3) {
    if ((bVar24 == 0x21) || (bVar24 == 0x5e)) {
LAB_109ab51e4:
      puVar7 = (undefined1 *)((long)puVar11 + 1);
      FUN_109ab22b0();
      *(undefined1 **)(puVar16 + 2) = puVar7;
      if (puVar7 == (undefined1 *)0x0) {
        *puVar16 = *puVar16 & 0xffffffef;
      }
    }
    else if (*(short *)((long)puVar11 + 1) == 0x7473 && *(char *)((long)puVar11 + 3) == 'r') {
      uVar22 = 3;
    }
    else if (*(short *)((long)puVar11 + 1) == 0x6e69 && *(char *)((long)puVar11 + 3) == 't') {
      uVar22 = 1;
    }
    else {
      if (*(short *)((long)puVar11 + 1) != 0x6573 || *(char *)((long)puVar11 + 3) != 'q') {
        uVar31 = *(ushort *)((long)puVar11 + 1) ^ 0x616d | *(byte *)((long)puVar11 + 3) ^ 0x70;
        uVar21 = 6;
        goto LAB_109ab51cc;
      }
      uVar22 = 5;
    }
  }
  else if ((bVar24 == 0x5e) || (bVar24 == 0x21)) goto LAB_109ab51e4;
  *(byte *)puVar29 = bVar1;
  puVar11 = puVar6;
  FUN_109ab4e08(puVar6,puVar29,puVar18);
  bVar24 = (byte)*puVar11;
  uVar32 = (ulong)bVar24;
  if (uVar22 >> 4 == 0) {
    if (uVar22 == 1) goto LAB_109ab52f8;
    if (uVar22 == 2) goto LAB_109ab5290;
    if (((uVar22 != 3) || (bVar24 == 0x27)) || (bVar24 == 0x22)) goto LAB_109ab5250;
    goto LAB_109ab5604;
  }
  uVar22 = 0x10;
LAB_109ab5250:
  uVar31 = (uint)uVar32;
  if (9 < uVar31 - 0x30) {
    if (uVar31 < 0x2d) goto LAB_109ab536c;
    if (uVar31 < 0x5b) {
      if (uVar31 == 0x2d) goto LAB_109ab5384;
      if (uVar31 != 0x2e) goto LAB_109ab54f4;
      if (((uVar20 - 0x30 < 10) || (uVar20 - 0x61 < 0x1a)) || (uVar20 - 0x41 < 0x1a))
      goto LAB_109ab525c;
      goto LAB_109ab55e4;
    }
    if ((uVar31 != 0x5b) && (uVar31 != 0x7b)) goto LAB_109ab54f4;
    uVar20 = (uint)puVar18;
    if (uVar26 < 8) {
      uVar20 = uVar20 + 1;
    }
    puVar27 = (undefined *)(ulong)uVar20;
    uVar22 = 0xd;
    if (uVar31 == 0x7b) {
      uVar22 = 0xe;
    }
    puVar29 = (uint *)(ulong)uVar22;
    uVar20 = 0;
    if (*(long *)(puVar16 + 2) != 0) {
      uVar20 = 0x10;
    }
    FUN_109ab4a88(puVar6,uVar20 | uVar22 & 7,puVar16);
    uVar20 = 0x5d;
    if (uVar31 != 0x5b) {
      uVar20 = 0x7d;
    }
    uVar32 = (ulong)uVar20;
    puVar19 = (uint *)((long)puVar11 + 1);
    uVar20 = 1;
    while( true ) {
      apuStack_8e0[0] = (uint *)0x0;
      puVar18 = puVar6;
      FUN_109ab4e08(puVar6,puVar19,puVar27);
      bVar24 = (byte)*puVar18;
      uVar26 = (uint)bVar24;
      if ((bVar24 | 0x20) == 0x7d) break;
      if (*(int *)(*(long *)(puVar16 + 4) + 0x28) != 0) {
        if (bVar24 != 0x2c) goto LAB_109ab5a54;
        puVar7 = (undefined1 *)((long)puVar18 + 1);
        puVar18 = puVar6;
        FUN_109ab4e08(puVar6,puVar7,puVar27);
      }
      puVar19 = puVar6;
      if ((uVar22 & 7) == 6) {
        puVar33 = puVar6;
        FUN_109ab5c1c(puVar6,puVar18,puVar16,apuStack_8e0);
        puVar18 = puVar6;
        FUN_109ab4e08(puVar6,puVar33,puVar27);
        param_3 = apuStack_8e0[0];
        FUN_109ab5034(puVar6,puVar18,apuStack_8e0[0],puVar29,puVar27);
        uVar26 = *param_3 | 0x40;
        *param_3 = uVar26;
      }
      else {
        puVar33 = puVar11;
        if ((char)*puVar18 == ']') goto LAB_109ab55dc;
        param_3 = *(uint **)(puVar16 + 4);
        FUN_109a4d978(param_3,0);
        FUN_109ab5034(puVar6,puVar18,param_3,puVar29,puVar27);
        uVar26 = *param_3;
      }
      if (4 < (uVar26 & 7)) {
        uVar20 = 0;
      }
    }
    goto LAB_109ab55d0;
  }
LAB_109ab525c:
  do {
    puVar18 = puVar11;
    if ((int)uVar32 == 0x2d || (int)uVar32 == 0x2b) {
      puVar18 = (uint *)((long)puVar11 + 1);
    }
    do {
      puStack_1ce8 = puVar18;
      bVar24 = (byte)*puStack_1ce8;
      puVar18 = (uint *)((long)puStack_1ce8 + 1);
    } while (bVar24 - 0x30 < 10);
    if ((bVar24 == 0x2e) || (bVar24 == 0x65)) {
LAB_109ab5290:
      FUN_109ab4bdc(puVar6,puVar11,&puStack_1ce8);
      *puVar16 = 2;
      *(undefined8 *)(puVar16 + 4) = uVar8;
      puVar33 = puVar11;
    }
    else {
LAB_109ab52f8:
      puVar18 = puVar11;
      _strtol(puVar11,&puStack_1ce8,0);
      *puVar16 = 1;
      puVar16[4] = (uint)puVar18;
      puVar33 = puVar11;
    }
    puVar18 = puStack_1ce8;
    if ((puStack_1ce8 != (uint *)0x0) && (puStack_1ce8 != puVar33)) goto LAB_109ab5910;
    uStack_1d00 = *(undefined8 *)(puVar6 + 0x18);
    uStack_1cf8 = (ulong)puVar6[0x25];
    puStack_1cf0 = &UNK_10f599c96;
    _sprintf(auStack_1ce0,&UNK_10f5995c9);
    puVar19 = (uint *)0x468;
    FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_1ce0,&UNK_10f598d74);
    puVar11 = puVar33;
LAB_109ab536c:
    iVar30 = (int)uVar32;
    if ((iVar30 == 0x22) || (iVar30 == 0x27)) {
      *puVar16 = 3;
      puVar33 = puVar11;
      if (iVar30 == 0x27) {
        puVar27 = (undefined *)0x0;
        goto LAB_109ab552c;
      }
      puVar27 = (undefined *)0x0;
      puVar29 = auStack_1ce0;
      uVar20 = 9;
      goto LAB_109ab5790;
    }
    if (iVar30 != 0x2b) break;
LAB_109ab5384:
  } while ((uVar20 == 0x2e) || (uVar20 - 0x30 < 10));
LAB_109ab54f4:
  if ((uVar26 < 8) && ((int)uVar32 == 0x2d)) {
    puVar29 = (uint *)0x0;
    puVar27 = (undefined *)0x5;
LAB_109ab5678:
    puVar18 = puVar11;
    uVar20 = 0;
    if (*(long *)(puVar16 + 2) != 0) {
      uVar20 = 0x10;
    }
    FUN_109ab4a88(puVar6,uVar20 | (uint)puVar27,puVar16);
    iVar30 = (int)puVar18 - (int)*(undefined8 *)(puVar6 + 0x20);
    uVar32 = (ulong)iVar30;
    bVar5 = true;
    puVar33 = (uint *)0x2e2e;
    do {
      apuStack_8e0[0] = (uint *)0x0;
      if ((int)puVar29 == 0) {
        puVar11 = (uint *)((long)puVar18 + 1);
        uVar20 = *puVar18;
        puVar18 = puVar11;
        if ((char)uVar20 != '-') goto LAB_109ab5a0c;
        param_3 = *(uint **)(puVar16 + 4);
        FUN_109a4d978(param_3,0);
      }
      else {
        puVar11 = puVar6;
        FUN_109ab5c1c(puVar6,puVar18,puVar16,apuStack_8e0);
        param_3 = apuStack_8e0[0];
      }
      puVar18 = puVar6;
      FUN_109ab4e08(puVar6,puVar11,iVar30 + 1);
      puVar11 = puVar6;
      FUN_109ab5034(puVar6,puVar18,param_3,puVar27,iVar30 + 1);
      uVar20 = *param_3;
      if ((int)puVar29 != 0) {
        uVar20 = uVar20 | 0x40;
        *param_3 = uVar20;
      }
      if (4 < (uVar20 & 7)) {
        bVar5 = false;
      }
      puVar18 = puVar6;
      FUN_109ab4e08(puVar6,puVar11,0);
      if ((long)puVar18 - *(long *)(puVar6 + 0x20) != uVar32) {
        if ((long)uVar32 <= (long)puVar18 - *(long *)(puVar6 + 0x20)) goto LAB_109ab5bbc;
        break;
      }
    } while ((short)*puVar18 != 0x2e2e || *(char *)((long)puVar18 + 2) != '.');
    bVar5 = !bVar5;
    goto LAB_109ab58b8;
  }
LAB_109ab55e4:
  if (7 < uVar26) {
LAB_109ab5604:
    lVar28 = 0;
    while( true ) {
      lVar23 = lVar28;
      puVar18 = (uint *)((long)puVar11 + lVar23);
      bVar24 = *(byte *)((long)puVar11 + lVar23);
      if (bVar24 < 0x20) break;
      if (((7 < uVar26) && (((bVar24 == 0x2c || (bVar24 == 0x5d)) || (bVar24 == 0x7d)))) ||
         (lVar28 = lVar23 + 1, bVar24 == 0x3a && (uVar22 != 3 && uVar26 < 8))) break;
    }
    puStack_1ce8 = puVar18;
    if (lVar23 != 0) {
      if ((7 < uVar26) || (bVar24 != 0x3a)) {
        lVar23 = lVar23 + -1;
        *puVar16 = 3;
        do {
          puVar19 = (uint *)((long)puVar11 + lVar23);
          lVar23 = lVar23 + -1;
          if (puVar19 <= puVar11) break;
        } while ((char)*puVar19 == ' ');
        uVar8 = *(undefined8 *)(puVar6 + 4);
        puVar27 = (undefined *)(ulong)((int)lVar23 + 2);
        puVar33 = puVar11;
        goto LAB_109ab5908;
      }
      puVar27 = (undefined *)0x6;
      puVar29 = (uint *)0x1;
      goto LAB_109ab5678;
    }
    goto LAB_109ab5ae4;
  }
  iVar30 = (int)uVar32;
  puVar33 = puVar11;
  if ((iVar30 == 0x3e) || (iVar30 == 0x7c)) goto LAB_109ab5b74;
  if (iVar30 != 0x3f) goto LAB_109ab5604;
  goto LAB_109ab5c04;
LAB_109ab5790:
  do {
    param_3 = (uint *)((long)puVar33 + 1);
    bVar24 = *(byte *)param_3;
    iVar30 = (int)puVar27;
    if (bVar24 - 0x30 < 10 || (bVar24 & 0xffffffdf) - 0x41 < 0x1a) {
LAB_109ab57c4:
      *(byte *)((long)puVar29 + (long)iVar30) = bVar24;
LAB_109ab57c8:
      puVar27 = (undefined *)(ulong)(iVar30 + 1);
    }
    else {
      if (bVar24 < 0x20) {
        uStack_1d00 = *(undefined8 *)(puVar6 + 0x18);
        uStack_1cf8 = (ulong)puVar6[0x25];
        puStack_1cf0 = &UNK_10f599f5a;
        _sprintf(apuStack_8e0,&UNK_10f5995c9);
        FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,apuStack_8e0,&UNK_10f598d74,0x4a8);
        goto LAB_109ab59b8;
      }
      if (bVar24 != 0x5c) {
        if (bVar24 != 0x22) goto LAB_109ab57c4;
        puVar18 = (uint *)((long)puVar33 + 2);
        goto LAB_109ab58a0;
      }
      param_3 = (uint *)((long)puVar33 + 2);
      bVar24 = *(byte *)param_3;
      if (0x6d < bVar24) {
        if (bVar24 == 0x6e) {
          bVar24 = 10;
          goto LAB_109ab57c4;
        }
        if (bVar24 == 0x72) {
          *(undefined1 *)((long)puVar29 + (long)iVar30) = 0xd;
        }
        else {
          if (bVar24 != 0x74) goto LAB_109ab5834;
          *(undefined1 *)((long)puVar29 + (long)iVar30) = 9;
        }
        goto LAB_109ab57c8;
      }
      if (((bVar24 == 0x22) || (bVar24 == 0x27)) || (bVar24 == 0x5c)) goto LAB_109ab57c4;
LAB_109ab5834:
      if (bVar24 == 0x78) {
        uVar8 = 8;
      }
      else {
        if ((bVar24 & 0xf8) != 0x30) goto LAB_109ab57d0;
        uVar8 = 0x10;
      }
      bVar1 = *(byte *)((long)puVar33 + 5);
      uVar32 = (ulong)bVar1;
      *(undefined1 *)((long)puVar33 + 5) = 0;
      puVar18 = param_3;
      if (bVar24 == 0x78) {
        puVar18 = (uint *)((long)puVar33 + 3);
      }
      puVar11 = puVar18;
      _strtol(puVar18,&puStack_1ce8,uVar8);
      *(byte *)((long)puVar33 + 5) = bVar1;
      uVar25 = 0x78;
      if (puStack_1ce8 != puVar18) {
        uVar25 = SUB81(puVar11,0);
        param_3 = puStack_1ce8;
      }
      *(undefined1 *)((long)puVar29 + (long)iVar30) = uVar25;
      puVar27 = (undefined *)(ulong)(iVar30 + 1);
    }
LAB_109ab57d0:
    puVar33 = param_3;
    puVar11 = param_3;
  } while ((int)puVar27 < 0x1000);
  goto LAB_109ab5580;
LAB_109ab59b8:
  uStack_1d00 = *(undefined8 *)(puVar6 + 0x18);
  uStack_1cf8 = (ulong)puVar6[0x25];
  puStack_1cf0 = &UNK_10f599f5a;
  _sprintf(apuStack_8e0,&UNK_10f5995c9);
  FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,apuStack_8e0,&UNK_10f598d74,0x47d);
  goto LAB_109ab5a08;
LAB_109ab58a0:
  uVar8 = *(undefined8 *)(puVar6 + 4);
  puVar11 = auStack_1ce0;
  puVar15 = puVar27;
LAB_109ab5908:
  FUN_109a4c450(uVar8,puVar11,puVar27);
  *(undefined8 *)(puVar16 + 4) = uVar8;
  *(uint **)(puVar16 + 6) = puVar11;
  puVar27 = puVar15;
  goto LAB_109ab5910;
LAB_109ab552c:
  do {
    puVar18 = (uint *)((long)puVar33 + 1);
    bVar24 = *(byte *)puVar18;
    if ((9 < bVar24 - 0x30 && 0x19 < (bVar24 & 0xffffffdf) - 0x41) &&
       ((bVar24 == 0x27 || bVar24 < 0x1f) || bVar24 == 0x1f)) {
      if (bVar24 != 0x27) goto LAB_109ab59b8;
      puVar18 = (uint *)((long)puVar33 + 2);
      bVar24 = *(byte *)puVar18;
      puVar33 = puVar18;
      if (bVar24 != 0x27) goto LAB_109ab58a0;
    }
    *(byte *)((long)auStack_1ce0 + (long)puVar27) = bVar24;
    puVar27 = puVar27 + 1;
    puVar11 = puVar18;
    puVar33 = puVar18;
  } while (puVar27 != (undefined *)0x1000);
LAB_109ab5580:
  uStack_1d00 = *(undefined8 *)(puVar6 + 0x18);
  uStack_1cf8 = (ulong)puVar6[0x25];
  puStack_1cf0 = &UNK_10f599da6;
  _sprintf(apuStack_8e0,&UNK_10f5995c9);
  FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,apuStack_8e0,&UNK_10f598d74,0x4ac);
  uVar26 = extraout_w8_00;
LAB_109ab55d0:
  if ((uint)uVar32 == uVar26) {
    puVar18 = (uint *)((long)puVar18 + 1);
    puVar33 = puVar11;
LAB_109ab55dc:
    bVar5 = uVar20 == 0;
LAB_109ab58b8:
    uVar20 = 0;
    if (!bVar5) {
      uVar20 = 0x100;
    }
    **(uint **)(puVar16 + 4) = **(uint **)(puVar16 + 4) | uVar20;
LAB_109ab5910:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e0) {
      return puVar18;
    }
LAB_109ab5a08:
    ___stack_chk_fail();
LAB_109ab5a0c:
    uStack_1d00 = *(undefined8 *)(puVar6 + 0x18);
    uStack_1cf8 = (ulong)puVar6[0x25];
    puStack_1cf0 = &UNK_10f59a010;
    _sprintf(auStack_1ce0,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_1ce0,&UNK_10f598d74,0x51e);
    puVar11 = puVar33;
LAB_109ab5a54:
    uStack_1d00 = *(undefined8 *)(puVar6 + 0x18);
    uStack_1cf8 = (ulong)puVar6[0x25];
    puStack_1cf0 = &UNK_10f599fa7;
    _sprintf(auStack_1ce0,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_1ce0,&UNK_10f598d74,0x4cb);
LAB_109ab5a9c:
    uStack_1d00 = *(undefined8 *)(puVar6 + 0x18);
    uStack_1cf8 = (ulong)puVar6[0x25];
    puStack_1cf0 = &UNK_10f599f7d;
    _sprintf(auStack_1ce0,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_1ce0,&UNK_10f598d74,0x421);
LAB_109ab5ae4:
    uStack_1d00 = *(undefined8 *)(puVar6 + 0x18);
    uStack_1cf8 = (ulong)puVar6[0x25];
    puStack_1cf0 = &UNK_10f599f5a;
    _sprintf(auStack_1ce0,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_1ce0,&UNK_10f598d74,0x4f9);
  }
  uStack_1d00 = *(undefined8 *)(puVar6 + 0x18);
  uStack_1cf8 = (ulong)puVar6[0x25];
  puStack_1cf0 = &UNK_10f599f8d;
  _sprintf(auStack_1ce0,&UNK_10f5995c9);
  FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_1ce0,&UNK_10f598d74,0x4c3);
  puVar15 = puVar27;
  puVar33 = puVar11;
LAB_109ab5b74:
  uStack_1d00 = *(undefined8 *)(puVar6 + 0x18);
  uStack_1cf8 = (ulong)puVar6[0x25];
  puStack_1cf0 = &UNK_10f599fe5;
  _sprintf(auStack_1ce0,&UNK_10f5995c9);
  FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_1ce0,&UNK_10f598d74,0x4ed);
  puVar27 = puVar15;
LAB_109ab5bbc:
  uStack_1d00 = *(undefined8 *)(puVar6 + 0x18);
  uStack_1cf8 = (ulong)puVar6[0x25];
  puStack_1cf0 = &UNK_10f599f27;
  _sprintf(auStack_1ce0,&UNK_10f5995c9);
  puVar19 = (uint *)0x52f;
  FUN_109ac32d8(0xffffff2c,&UNK_10f599f6c,auStack_1ce0,&UNK_10f598d74);
  puVar15 = puVar27;
  puVar11 = puVar33;
LAB_109ab5c04:
  puVar9 = *(uint **)(puVar6 + 0x18);
  puVar33 = (uint *)(ulong)puVar6[0x25];
  puVar27 = &UNK_10f599fc6;
  puVar17 = (uint *)0x4eb;
  FUN_109aa92c8();
  pcStack_1d08 = FUN_109ab5c1c;
  lStack_1d48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d40 = puVar29;
  puStack_1d38 = puVar18;
  puStack_1d30 = puVar15;
  puStack_1d28 = param_3;
  puStack_1d20 = puVar6;
  puStack_1d18 = puVar16;
  ppuStack_1d10 = &puStack_480;
  if ((char)*puVar33 == '-') {
    uStack_2160 = *(undefined8 *)(puVar9 + 0x18);
    uStack_2158 = (ulong)puVar9[0x25];
    puStack_2150 = &UNK_10f59a051;
    _sprintf(auStack_2148,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f59a042,auStack_2148,&UNK_10f598d74,0x3ef);
    puVar33 = puVar16;
    puVar17 = puVar6;
    puVar27 = puVar15;
LAB_109ab5d3c:
    uStack_2160 = *(undefined8 *)(puVar9 + 0x18);
    uStack_2158 = (ulong)puVar9[0x25];
    puStack_2150 = &UNK_10f59a06c;
    _sprintf(auStack_2148,&UNK_10f5995c9);
    FUN_109ac32d8(0xffffff2c,&UNK_10f59a042,auStack_2148,&UNK_10f598d74,0x3f5);
LAB_109ab5d84:
    uStack_2160 = *(undefined8 *)(puVar9 + 0x18);
    uStack_2158 = (ulong)puVar9[0x25];
    puStack_2150 = &UNK_10f59a078;
    _sprintf(auStack_2148,&UNK_10f5995c9);
    puVar16 = (uint *)&UNK_10f598d74;
    puVar6 = auStack_2148;
    puVar10 = (uint *)0xffffff2c;
    puVar19 = (uint *)0x3fd;
    FUN_109ac32d8(0xffffff2c,&UNK_10f59a042);
  }
  else {
    puVar18 = (uint *)0x0;
    do {
      bVar24 = *(byte *)((long)puVar33 + (long)puVar18);
      puVar18 = (uint *)((long)puVar18 + 1);
      if (bVar24 < 0x20) break;
    } while (bVar24 != 0x3a);
    puVar16 = puVar18;
    if (bVar24 != 0x3a) goto LAB_109ab5d3c;
    do {
      puVar7 = (undefined1 *)((long)puVar33 + (long)puVar16);
      puVar16 = (uint *)((long)puVar16 + -1);
    } while (puVar7[-2] == ' ');
    if (puVar16 == (uint *)0x0) goto LAB_109ab5d84;
    puVar6 = puVar9;
    puVar16 = puVar17;
    FUN_109aa8dac(puVar9,puVar33);
    puVar10 = puVar9;
    FUN_109aa8f30(puVar9,puVar27);
    *(uint **)puVar17 = puVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d48) {
      return (uint *)((long)puVar33 + (long)puVar18);
    }
  }
  ___stack_chk_fail();
  pcStack_2168 = FUN_109ab5dd0;
  lStack_2188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = &uStack_2388;
  puStack_2180 = puVar17;
  puStack_2178 = puVar33;
  pppuStack_2170 = &ppuStack_1d10;
  FUN_109aace64();
  if ((int)puVar10 != 1 || 4 < (int)uStack_2388) {
    puVar13 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar13 = 1;
    puStack_2398 = puVar13 + 1;
    uStack_2390 = 0x21;
    *(undefined2 *)(puVar13 + 9) = 0x78;
    *(undefined8 *)(puVar13 + 3) = 0x6d726f662078656c;
    *(undefined8 *)(puVar13 + 1) = 0x706d6f63206f6f54;
    *(undefined8 *)(puVar13 + 7) = 0x697274616d206568;
    *(undefined8 *)(puVar13 + 5) = 0x7420726f66207461;
    piStack_23a0 = puVar13;
    FUN_109ac3188(0xfffffffe,&puStack_2398,&UNK_10f59a37e,&UNK_10f598d74,0xc0d);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109ab5e9c);
    (*pcVar4)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2188) {
    return (uint *)(ulong)((uStack_2384 & 7 | uStack_2388 << 3) - 8);
  }
  ___stack_chk_fail();
  puStack_2398 = (undefined4 *)0x0;
  uStack_2390 = 0;
  do {
    iVar30 = *piStack_23a0;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piStack_23a0,0x10);
    if (bVar5) {
      *piStack_23a0 = iVar30 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar30 + -1 == 0) {
    _free(*(undefined8 *)(piStack_23a0 + -2));
  }
  puVar33 = puVar10;
  __Unwind_Resume();
  iVar30 = (int)puVar33;
  pcStack_23a8 = FUN_109ab5edc;
  lStack_23d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_23d0 = puVar11;
  uStack_23c8 = uVar32;
  puStack_23c0 = puVar17;
  puStack_23b8 = puVar10;
  ppppuStack_23b0 = &pppuStack_2170;
  FUN_109aace64();
  puVar11 = puVar14;
  if (0 < iVar30) {
    uVar32 = 0;
    do {
      iVar2 = (auStack_25d8[uVar32 + 1] >> 3 & 0x1ff) + 1 <<
              (ulong)(0xfa50U >> (ulong)((auStack_25d8[uVar32 + 1] & 7) << 1) & 3);
      puVar11 = (uint *)(ulong)((((int)puVar11 + iVar2) - 1U & -iVar2) +
                               iVar2 * auStack_25d8[uVar32]);
      uVar32 = uVar32 + 2;
    } while (uVar32 < (uint)(iVar30 << 1));
  }
  if ((int)puVar14 == 0) {
    iVar30 = (auStack_25d8[1] >> 3 & 0x1ff) + 1 <<
             (ulong)(0xfa50U >> (ulong)((auStack_25d8[1] & 7) << 1) & 3);
    puVar11 = (uint *)(ulong)(((int)puVar11 + iVar30) - 1U & -iVar30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_23d8) {
    return puVar11;
  }
  ___stack_chk_fail();
  pcStack_25e8 = FUN_109ab5fd4;
  lStack_2628 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2738 = puVar16;
  puStack_2730 = puVar19;
  puStack_2620 = puVar29;
  puStack_2618 = puVar18;
  puStack_2610 = puVar27;
  puStack_2608 = puVar9;
  puStack_2600 = auStack_25d8;
  puStack_25f8 = puVar14;
  pppppuStack_25f0 = &ppppuStack_23b0;
  FUN_109aac02c();
  if (-1 < (int)param_6) {
    FUN_109aac30c(puVar11,&DAT_10f2e4590,param_6);
  }
  puVar29 = auStack_2728;
  puVar16 = puVar6;
  FUN_109ab6208(puVar6,&UNK_10f59a1e9,&puStack_2738,0);
  acStack_26a8[0] = '\0';
  uVar20 = *puVar6;
  if ((uVar20 >> 0xe & 1) != 0) {
    pcVar12 = acStack_26a8;
    _strlen();
    builtin_strncpy(acStack_26a8 + (long)pcVar12," closed",8);
  }
  if ((uVar20 >> 0xf & 1) != 0) {
    pcVar12 = acStack_26a8;
    _strlen();
    builtin_strncpy(acStack_26a8 + (long)pcVar12," hol",4);
    (pcVar12 + (long)(acStack_26a8 + 4))[0] = 'e';
    (pcVar12 + (long)(acStack_26a8 + 4))[1] = '\0';
  }
  if ((uVar20 & 0x3000) == 0x1000) {
    pcVar12 = acStack_26a8;
    _strlen();
    builtin_strncpy(acStack_26a8 + (long)pcVar12," cur",4);
    builtin_strncpy(pcVar12 + (long)(acStack_26a8 + 3),"rve",4);
  }
  if (((uVar20 & 0xfff) == 0) && (puVar6[0xb] != 1)) {
    pcVar12 = acStack_26a8;
    _strlen();
    auStack_26a0[(long)pcVar12] = 0;
    builtin_strncpy(acStack_26a8 + (long)pcVar12," untyped",8);
  }
  pcVar12 = acStack_26a8;
  if (acStack_26a8[0] != '\0') {
    pcVar12 = acStack_26a8 + 1;
  }
  FUN_109aac5ec(puVar11,&DAT_10f2d43a7,pcVar12,1);
  FUN_109aac30c(puVar11,&DAT_10f637eac,puVar6[10]);
  FUN_109aac5ec(puVar11,&UNK_10f59a1e9,puVar16,0);
  FUN_109ab642c(puVar11,puVar6,&puStack_2738,0x60);
  puVar18 = (uint *)0xd;
  iVar30 = 0;
  FUN_109aac02c(puVar11,"data");
  for (lVar28 = *(long *)(puVar6 + 0x16); lVar28 != 0; lVar28 = *(long *)(lVar28 + 8)) {
    puVar18 = (uint *)(ulong)*(uint *)(lVar28 + 0x14);
    puVar19 = puVar16;
    FUN_109aac75c(puVar11,*(undefined8 *)(lVar28 + 0x18));
    iVar30 = (int)puVar19;
    if (lVar28 == **(long **)(puVar6 + 0x16)) break;
  }
  FUN_109aac19c(puVar11);
  puVar19 = puVar11;
  FUN_109aac19c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2628) {
    return puVar19;
  }
  ___stack_chk_fail();
  pcStack_2748 = FUN_109ab6208;
  uStack_2770 = lVar28;
  puStack_2768 = puVar16;
  puStack_2760 = puVar6;
  puStack_2758 = puVar11;
  pppppuStack_2750 = &pppppuStack_25f0;
  FUN_109aa88f0();
  if (puVar18 == (uint *)0x0) {
    uVar22 = *puVar19;
    uVar26 = puVar19[0xb];
    uVar20 = uVar22 & 0xfff;
    if ((uVar20 != 0) || (uVar26 == 1)) {
      if ((uVar22 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((uVar22 & 7) << 1) & 3) == uVar26)
      {
        uStack_2770 = (ulong)((uVar20 >> 3) + 1);
        puStack_2768 = (uint *)(long)(char)(&UNK_10e02e313)[(ulong)uVar20 & 7];
        _sprintf(puVar29,&UNK_10f59a453);
        if (*(char *)((long)puVar29 + 2) == '\0') {
          uVar32 = (ulong)((char)*puVar29 == '1');
        }
        else {
          uVar32 = 0;
        }
        return (uint *)((long)puVar29 + uVar32);
      }
      puVar13 = (undefined4 *)0x4c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar13 + 3) = 0x65636e6575716573;
      *(undefined8 *)(puVar13 + 1) = 0x20666f20657a6953;
      *(undefined8 *)(puVar13 + 7) = 0x735f6d656c652820;
      *(undefined8 *)(puVar13 + 5) = 0x746e656d656c6520;
      *(undefined8 *)(puVar13 + 0xb) = 0x7369736e6f636e69;
      *(undefined8 *)(puVar13 + 9) = 0x2073692029657a69;
      *puVar13 = 1;
      puStack_2780 = puVar13 + 1;
      uStack_2778 = 0x44;
      *(undefined1 *)(puVar13 + 0x12) = 0;
      puVar13[0x11] = 0x7367616c;
      *(undefined8 *)(puVar13 + 0xf) = 0x663e2d7165732068;
      *(undefined8 *)(puVar13 + 0xd) = 0x74697720746e6574;
      FUN_109ac3188(0xffffff2f,&puStack_2780,&UNK_10f59a3f9,&UNK_10f598d74,0xffc);
      goto LAB_109ab63e0;
    }
    if (uVar26 - iVar30 == 0 || (int)uVar26 < iVar30) {
      puVar29 = (uint *)0x0;
    }
    else {
      if ((uVar26 - iVar30 & 3) == 0) {
        puVar15 = &UNK_10f59a44b;
      }
      else {
        puVar15 = &UNK_10f59a44f;
      }
      _sprintf(puVar29,puVar15);
    }
  }
  else {
    puVar16 = puVar18;
    FUN_109ab5edc();
    puVar29 = puVar18;
    if ((uint)puVar16 != puVar19[0xb]) {
      puVar13 = (undefined4 *)0x4c;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar13 + 7) = 0x6620646574616c75;
      *(undefined8 *)(puVar13 + 5) = 0x636c616320746e65;
      *(undefined8 *)(puVar13 + 0xb) = 0x65687420646e6120;
      *(undefined8 *)(puVar13 + 9) = 0x22746422206d6f72;
      *(undefined8 *)(puVar13 + 0xf) = 0x6f6e206f6420657a;
      *(undefined8 *)(puVar13 + 0xd) = 0x69735f6d656c6520;
      *puVar13 = 1;
      puStack_2780 = puVar13 + 1;
      uStack_2778 = 0x47;
      *(undefined1 *)((long)puVar13 + 0x4b) = 0;
      *(undefined8 *)((long)puVar13 + 0x43) = 0x686374616d20746f;
      *(undefined8 *)(puVar13 + 3) = 0x6d656c6520666f20;
      *(undefined8 *)(puVar13 + 1) = 0x657a697320656854;
      FUN_109ac3188(0xffffff2f,&puStack_2780,&UNK_10f59a3f9,&UNK_10f598d74,0xff6);
LAB_109ab63e0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109ab63e4);
      (*pcVar4)();
    }
  }
  return puVar29;
}


