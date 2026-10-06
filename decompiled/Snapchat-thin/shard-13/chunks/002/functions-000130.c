/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1c5f28; end: 10a1c5f9f;  */

undefined8 FUN_10a1c5f28(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x113834ef0;
  FUN_10a1c5fa0(0x113834ef0,*param_1);
  FUN_10a1c5e98();
  uVar3 = *puVar1;
  func_0x00010ae02ef0(0,uVar3);
  ppuVar2 = &PTR_PTR_1133007d0;
  FUN_10ae079a0();
  func_0x00010ae02f00();
  FUN_10ae07cd4(ppuVar2,&PTR_PTR_1133007d0);
  return uVar3;
}



/* Entry: 10a1c5fa0; end: 10a1c6037;  */

void FUN_10a1c5fa0(byte *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  
  do {
    bVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
    } while ((*param_1 & 1) != 0);
    do {
      bVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (param_1[0x10] == 1) {
    param_1[0x10] = 0;
  }
  if (param_2 == (long *)0x0) {
    FUN_10a09f03c(param_1 + 0x18,0,0);
  }
  else {
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x18);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a1c6038; end: 10a1c607b;  */

/* WARNING: Removing unreachable block (ram,0x00010a1c6064) */

long FUN_10a1c6038(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x30))((undefined8 *)(param_1 + 0x30));
  return param_1;
}



/* Entry: 10a1c607c; end: 10a1c6173;  */

long FUN_10a1c607c(undefined8 *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [271];
  undefined1 uStack_31;
  
  pbVar1 = (byte *)((long)param_1 + 0x24);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while ((bVar3 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x24) = 0;
    return (long)param_1 + 0x1c;
  }
  FUN_109febc44(auStack_150);
  FUN_10a002568(auStack_140,&UNK_10f643d4e,10);
  uVar2 = param_1[1];
  puVar6 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar6 = param_1;
  }
  FUN_10a002568(auStack_140,puVar6,uVar2);
  FUN_10a002568(auStack_140,&UNK_10f643d59,0x13);
  FUN_10a05168c(&uStack_31,auStack_140);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1c6154);
  (*pcVar7)();
}



/* Entry: 10a1c6174; end: 10a1c6213;  */

float FUN_10a1c6174(long *param_1)

{
  float *pfVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  float fVar2;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    FUN_10a09f15c(0x113834fc0,0);
  }
  else {
    (**(code **)(*param_1 + 0x88))(param_1,0x113834fc0);
  }
  pfVar1 = (float *)0x113834fc0;
  FUN_10a1c607c();
  fVar2 = *pfVar1;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f643832,&UNK_10f643882,0x1c,&UNK_10f643935,in_x6,in_x7,
                        (double)fVar2);
  }
  return fVar2;
}



/* Entry: 10a1c6214; end: 10a1c6263;  */

/* WARNING: Removing unreachable block (ram,0x00010a1c624c) */

long FUN_10a1c6214(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x80))();
  (*(code *)**(undefined8 **)(param_1 + 0x40))((undefined8 *)(param_1 + 0x40));
  return param_1;
}



/* Entry: 10a1c6264; end: 10a1c62f3;  */

byte * FUN_10a1c6264(byte *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  
  do {
    bVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
    } while ((*param_1 & 1) != 0);
    do {
      bVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((param_1[8] & 1) == 0) {
    pcVar5 = *(code **)(param_1 + 0x78);
    iVar4 = (int)param_1 + 0x10;
    FUN_10a08fec0();
    (*pcVar5)();
    *(int *)(param_1 + 4) = iVar4;
    param_1[8] = 1;
  }
  *param_1 = 0;
  return param_1 + 4;
}



/* Entry: 10a1c62f4; end: 10a1c636b;  */

undefined4 FUN_10a1c62f4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  puVar2 = (undefined4 *)0x113835028;
  FUN_10a1c636c(0x113835028,*param_1);
  FUN_10a1c6264();
  uVar1 = *puVar2;
  func_0x00010ae02ecc(0,uVar1);
  ppuVar3 = &PTR_PTR_113300800;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar3,&PTR_PTR_113300800);
  return uVar1;
}



/* Entry: 10a1c636c; end: 10a1c63ff;  */

void FUN_10a1c636c(byte *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  
  do {
    bVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
    } while ((*param_1 & 1) != 0);
    do {
      bVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (param_1[8] == 1) {
    param_1[8] = 0;
  }
  if (param_2 == (long *)0x0) {
    FUN_10a09efac(param_1 + 0x10,0);
  }
  else {
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x10);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a1c6400; end: 10a1c644f;  */

/* WARNING: Removing unreachable block (ram,0x00010a1c6438) */

long FUN_10a1c6400(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x80))();
  (*(code *)**(undefined8 **)(param_1 + 0x40))((undefined8 *)(param_1 + 0x40));
  return param_1;
}



/* Entry: 10a1c6450; end: 10a1c64db;  */

int FUN_10a1c6450(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  
  piVar2 = (int *)0x1138350e8;
  FUN_10a1c64dc(0x1138350e8,*param_1);
  FUN_10a1d5d54();
  iVar1 = *piVar2;
  if (iRam00000001138350e0 != 0) {
    iVar1 = iRam00000001138350e0;
  }
  func_0x00010ae02ecc(0,iVar1);
  ppuVar3 = &PTR_PTR_113300830;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar3,&PTR_PTR_113300830);
  return iVar1;
}



/* Entry: 10a1c64dc; end: 10a1c656f;  */

void FUN_10a1c64dc(byte *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  
  do {
    bVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
    } while ((*param_1 & 1) != 0);
    do {
      bVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (param_1[8] == 1) {
    param_1[8] = 0;
  }
  if (param_2 == (long *)0x0) {
    FUN_10a09efac(param_1 + 0x10,0);
  }
  else {
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x10);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a1c6570; end: 10a1c65d7;  */

void FUN_10a1c6570(long param_1)

{
  int iVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  iVar1 = 1 - *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar1;
  FUN_10a1d5de4(param_1 + (long)iVar1 * 0x18);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a1c65d8; end: 10a1c6663;  */

undefined1  [16] FUN_10a1c65d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f643d3c;
  return auVar1;
}



/* Entry: 10a1c6664; end: 10a1c693b;  */

void FUN_10a1c6664(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f643d3c,0x11);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110badec0;
  pppuVar2 = (undefined8 ***)&UNK_10f642cb1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110badec0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1c691c;
    FUN_10a054dac(param_1,&UNK_10f6439a8,FUN_10a1d5f28,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1c691c;
    FUN_10a054dac(param_1,&UNK_10f6439ca,FUN_10a1d60cc,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6439e7,FUN_10a1d6280,FUN_10a1d6338);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6439f5,FUN_10a1d63f8,FUN_10a1d64b4);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f643d3c,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a1c691c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1c6920);
  (*pcVar6)();
}



/* Entry: 10a1c693c; end: 10a1c69df;  */

void FUN_10a1c693c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar4 = *(undefined8 **)(param_2 + 0x6c8);
  puVar5 = *(undefined8 **)(param_2 + 0x6d0);
  lVar1 = (long)puVar5 - (long)puVar4;
  if (lVar1 != 0) {
    func_0x00010a1ce1a8(param_1,(lVar1 >> 2) * -0x3333333333333333);
    puVar2 = (undefined8 *)param_1[1];
    do {
      uVar7 = puVar4[1];
      uVar6 = *puVar4;
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar4 + 2);
      puVar3 = (undefined8 *)((long)puVar2 + 0x14);
      puVar2[1] = uVar7;
      *puVar2 = uVar6;
      puVar4 = (undefined8 *)((long)puVar4 + 0x14);
      puVar2 = puVar3;
    } while (puVar4 != puVar5);
    param_1[1] = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x10);
  return;
}



/* Entry: 10a1c69e0; end: 10a1c6a47;  */

void FUN_10a1c69e0(long param_1,long param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x10);
  if (param_1 + 0x6c8 != param_2) {
    FUN_10a1ce240();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x10);
  return;
}



/* Entry: 10a1c6a48; end: 10a1c6c47;  */

void FUN_10a1c6a48(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  __ZNSt3__15mutex4lockEv(param_1 + 200);
  lVar6 = param_1 + (long)*(int *)(param_1 + 0x84) * 0x18;
  plVar1 = (long *)(lVar6 + 0x50);
  uVar10 = *(ulong *)(lVar6 + 0x58);
  if (uVar10 < *(ulong *)(lVar6 + 0x60)) {
    FUN_10a1d6598(uVar10,param_2);
    lVar7 = uVar10 + 0x18;
    *(long *)(lVar6 + 0x58) = lVar7;
  }
  else {
    lVar14 = uVar10 - *plVar1;
    uVar10 = (lVar14 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_10a1d68ec();
LAB_10a1c6c14:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1c6c18);
      (*pcVar5)();
    }
    lVar7 = (long)(*(ulong *)(lVar6 + 0x60) - *plVar1) >> 3;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
      uVar9 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_58 = plVar1;
    if (uVar9 == 0) {
      lVar7 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar9) {
        func_0x000109ffded8();
        goto LAB_10a1c6c14;
      }
      lVar7 = uVar9 * 0x18;
      __Znwm();
    }
    lVar14 = lVar7 + lVar14;
    lVar15 = lVar7 + uVar9 * 0x18;
    lStack_78 = lVar7;
    lStack_70 = lVar14;
    lStack_68 = lVar14;
    lStack_60 = lVar15;
    FUN_10a1d6598(lVar14,param_2);
    lStack_68 = lVar14 + 0x18;
    lVar13 = *plVar1;
    lVar4 = *(long *)(lVar6 + 0x58);
    lVar14 = lVar14 + (lVar13 - lVar4);
    lVar7 = lStack_68;
    if (lVar13 - lVar4 != 0) {
      lVar7 = 0;
      do {
        puVar2 = (undefined8 *)(lVar14 + lVar7);
        puVar3 = (undefined8 *)(lVar13 + lVar7);
        *puVar2 = *puVar3;
        plVar8 = puVar3 + 1;
        lVar15 = *plVar8;
        plVar11 = puVar2 + 1;
        *plVar11 = lVar15;
        lVar12 = puVar3[2];
        puVar2[2] = lVar12;
        if (lVar12 == 0) {
          *puVar2 = plVar11;
        }
        else {
          *(long **)(lVar15 + 0x10) = plVar11;
          *(long **)(lVar13 + lVar7) = plVar8;
          *plVar8 = 0;
          puVar3[2] = 0;
        }
        lVar7 = lVar7 + 0x18;
      } while (lVar13 + lVar7 != lVar4);
      do {
        FUN_10a1ce910(lVar13,*(undefined8 *)(lVar13 + 8));
        lVar13 = lVar13 + 0x18;
      } while (lVar13 != lVar4);
      lVar13 = *plVar1;
      lVar7 = lStack_68;
      lVar15 = lStack_60;
    }
    *plVar1 = lVar14;
    *(long *)(lVar6 + 0x58) = lVar7;
    lStack_60 = *(undefined8 *)(lVar6 + 0x60);
    *(long *)(lVar6 + 0x60) = lVar15;
    lStack_78 = lVar13;
    lStack_70 = lVar13;
    lStack_68 = lVar13;
    FUN_10a1d6900(&lStack_78);
  }
  *(long *)(lVar6 + 0x58) = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 200);
  return;
}



/* Entry: 10a1c6c48; end: 10a1c6c67;  */

void FUN_10a1c6c48(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1c6c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,param_1 + 8);
  return;
}



/* Entry: 10a1c6c68; end: 10a1c6f27;  */

void FUN_10a1c6c68(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  plVar9 = (long *)(param_1 + (long)*(int *)(param_1 + 0x34) * 0x18);
  puVar4 = (undefined8 *)plVar9[1];
  if (puVar4 < (undefined8 *)plVar9[2]) {
    *puVar4 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 0x10);
    uVar12 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 3) = uVar2;
    puVar4[2] = uVar13;
    puVar4[1] = uVar12;
    puVar4[5] = 0;
    puVar4[6] = 0;
    FUN_10a07b634();
    puVar11 = puVar4 + 7;
    *puVar4 = &PTR_DAT_110badb98;
    plVar9[1] = (long)puVar11;
  }
  else {
    lVar10 = (long)puVar4 - *plVar9;
    uVar7 = (lVar10 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar7) {
      FUN_10a1d6a78();
LAB_10a1c6ec4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1c6ec8);
      (*pcVar3)();
    }
    lVar5 = plVar9[2] - *plVar9 >> 3;
    uVar6 = lVar5 * -0x2492492492492492;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    plStack_68 = plVar9;
    if (uVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      if (0x492492492492492 < uVar6) {
        func_0x000109ffded8();
        goto LAB_10a1c6ec4;
      }
      puVar4 = (undefined8 *)(uVar6 * 0x38);
      __Znwm();
    }
    puVar11 = (undefined8 *)((long)puVar4 + lVar10);
    *puVar11 = &PTR_FUN_110bad578;
    uVar12 = *(undefined8 *)(param_2 + 8);
    puVar11[2] = *(undefined8 *)(param_2 + 0x10);
    puVar11[1] = uVar12;
    *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[4] = 0;
    puStack_88 = puVar4;
    puStack_80 = puVar11;
    puStack_78 = puVar11;
    puStack_70 = puVar4 + uVar6 * 7;
    FUN_10a07b634();
    puStack_78 = puVar11 + 7;
    *puVar11 = &PTR_DAT_110badb98;
    puVar8 = (undefined8 *)*plVar9;
    puVar1 = (undefined8 *)plVar9[1];
    lVar10 = (long)puVar11 + ((long)puVar8 - (long)puVar1);
    puVar11 = puStack_78;
    puVar4 = puVar4 + uVar6 * 7;
    if ((long)puVar8 - (long)puVar1 != 0) {
      lVar5 = 0;
      do {
        puVar4 = (undefined8 *)(lVar10 + lVar5);
        *puVar4 = &PTR_FUN_110bad578;
        uVar13 = *(undefined8 *)((long)puVar8 + lVar5 + 0x10);
        uVar12 = *(undefined8 *)((long)puVar8 + lVar5 + 8);
        *(undefined4 *)(puVar4 + 3) = *(undefined4 *)((long)puVar8 + lVar5 + 0x18);
        puVar4[2] = uVar13;
        puVar4[1] = uVar12;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[4] = 0;
        FUN_10a07b634();
        *puVar4 = &PTR_DAT_110badb98;
        lVar5 = lVar5 + 0x38;
      } while ((undefined8 *)((long)puVar8 + lVar5) != puVar1);
      do {
        puVar4 = puVar8 + 7;
        (**(code **)*puVar8)(puVar8);
        puVar8 = puVar4;
      } while (puVar4 != puVar1);
      puVar8 = (undefined8 *)*plVar9;
      puVar11 = puStack_78;
      puVar4 = puStack_70;
    }
    *plVar9 = lVar10;
    plVar9[1] = (long)puVar11;
    puStack_70 = (undefined8 *)plVar9[2];
    plVar9[2] = (long)puVar4;
    puStack_88 = puVar8;
    puStack_80 = puVar8;
    puStack_78 = puVar8;
    FUN_10a1d6a8c(&puStack_88);
  }
  plVar9[1] = (long)puVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x78);
  return;
}



/* Entry: 10a1c6f28; end: 10a1c6f37;  */

void FUN_10a1c6f28(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x178);
  plVar9 = (long *)(param_1 + 0x100 + (long)*(int *)(param_1 + 0x134) * 0x18);
  puVar4 = (undefined8 *)plVar9[1];
  if (puVar4 < (undefined8 *)plVar9[2]) {
    *puVar4 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 0x10);
    uVar12 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 3) = uVar2;
    puVar4[2] = uVar13;
    puVar4[1] = uVar12;
    puVar4[5] = 0;
    puVar4[6] = 0;
    FUN_10a07b634();
    puVar11 = puVar4 + 7;
    *puVar4 = &PTR_DAT_110badb98;
    plVar9[1] = (long)puVar11;
  }
  else {
    lVar10 = (long)puVar4 - *plVar9;
    uVar7 = (lVar10 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar7) {
      FUN_10a1d6a78();
LAB_10a1c6ec4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1c6ec8);
      (*pcVar3)();
    }
    lVar5 = plVar9[2] - *plVar9 >> 3;
    uVar6 = lVar5 * -0x2492492492492492;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    plStack_68 = plVar9;
    if (uVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      if (0x492492492492492 < uVar6) {
        func_0x000109ffded8();
        goto LAB_10a1c6ec4;
      }
      puVar4 = (undefined8 *)(uVar6 * 0x38);
      __Znwm();
    }
    puVar11 = (undefined8 *)((long)puVar4 + lVar10);
    *puVar11 = &PTR_FUN_110bad578;
    uVar12 = *(undefined8 *)(param_2 + 8);
    puVar11[2] = *(undefined8 *)(param_2 + 0x10);
    puVar11[1] = uVar12;
    *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[4] = 0;
    puStack_88 = puVar4;
    puStack_80 = puVar11;
    puStack_78 = puVar11;
    puStack_70 = puVar4 + uVar6 * 7;
    FUN_10a07b634();
    puStack_78 = puVar11 + 7;
    *puVar11 = &PTR_DAT_110badb98;
    puVar8 = (undefined8 *)*plVar9;
    puVar1 = (undefined8 *)plVar9[1];
    lVar10 = (long)puVar11 + ((long)puVar8 - (long)puVar1);
    puVar11 = puStack_78;
    puVar4 = puVar4 + uVar6 * 7;
    if ((long)puVar8 - (long)puVar1 != 0) {
      lVar5 = 0;
      do {
        puVar4 = (undefined8 *)(lVar10 + lVar5);
        *puVar4 = &PTR_FUN_110bad578;
        uVar13 = *(undefined8 *)((long)puVar8 + lVar5 + 0x10);
        uVar12 = *(undefined8 *)((long)puVar8 + lVar5 + 8);
        *(undefined4 *)(puVar4 + 3) = *(undefined4 *)((long)puVar8 + lVar5 + 0x18);
        puVar4[2] = uVar13;
        puVar4[1] = uVar12;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[4] = 0;
        FUN_10a07b634();
        *puVar4 = &PTR_DAT_110badb98;
        lVar5 = lVar5 + 0x38;
      } while ((undefined8 *)((long)puVar8 + lVar5) != puVar1);
      do {
        puVar4 = puVar8 + 7;
        (**(code **)*puVar8)(puVar8);
        puVar8 = puVar4;
      } while (puVar4 != puVar1);
      puVar8 = (undefined8 *)*plVar9;
      puVar11 = puStack_78;
      puVar4 = puStack_70;
    }
    *plVar9 = lVar10;
    plVar9[1] = (long)puVar11;
    puStack_70 = (undefined8 *)plVar9[2];
    plVar9[2] = (long)puVar4;
    puStack_88 = puVar8;
    puStack_80 = puVar8;
    puStack_78 = puVar8;
    FUN_10a1d6a8c(&puStack_88);
  }
  plVar9[1] = (long)puVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x178);
  return;
}



/* Entry: 10a1c6f38; end: 10a1c720f;  */

void FUN_10a1c6f38(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  plVar8 = (long *)(param_1 + (long)*(int *)(param_1 + 0x34) * 0x18);
  puVar10 = (undefined8 *)plVar8[1];
  if (puVar10 < (undefined8 *)plVar8[2]) {
    *puVar10 = &PTR_FUN_110bad578;
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    puVar10[4] = 0;
    *(undefined4 *)(puVar10 + 3) = uVar3;
    puVar10[2] = uVar14;
    puVar10[1] = uVar13;
    puVar10[5] = 0;
    puVar10[6] = 0;
    FUN_10a07b634();
    puVar11 = puVar10 + 7;
    *puVar10 = &PTR_FUN_110badbe0;
    plVar8[1] = (long)puVar11;
  }
  else {
    lVar9 = (long)puVar10 - *plVar8;
    uVar7 = (lVar9 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar7) {
      FUN_10a1d6bc8();
LAB_10a1c71cc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1c71d0);
      (*pcVar4)();
    }
    lVar5 = plVar8[2] - *plVar8 >> 3;
    uVar6 = lVar5 * -0x2492492492492492;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    plStack_98 = plVar8;
    if (uVar6 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x492492492492492 < uVar6) {
        func_0x000109ffded8();
        goto LAB_10a1c71cc;
      }
      lVar5 = uVar6 * 0x38;
      __Znwm();
    }
    puVar1 = (undefined8 *)(lVar5 + lVar9);
    lVar9 = lVar5 + uVar6 * 0x38;
    *puVar1 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 8);
    puVar1[2] = *(undefined8 *)(param_2 + 0x10);
    puVar1[1] = uVar13;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[4] = 0;
    lStack_b8 = lVar5;
    puStack_b0 = puVar1;
    puStack_a8 = puVar1;
    lStack_a0 = lVar9;
    FUN_10a07b634();
    puStack_a8 = puVar1 + 7;
    *puVar1 = &PTR_FUN_110badbe0;
    puVar11 = (undefined8 *)*plVar8;
    puVar2 = (undefined8 *)plVar8[1];
    ppuStack_88 = &puStack_70;
    ppuStack_80 = &puStack_68;
    uStack_78 = 0;
    puVar1 = (undefined8 *)((long)puVar1 + ((long)puVar11 - (long)puVar2));
    puVar10 = puVar11;
    puVar12 = puVar1;
    plStack_90 = plVar8;
    puStack_70 = puVar1;
    if ((long)puVar11 - (long)puVar2 == 0) {
      uStack_78 = 1;
      puStack_68 = puVar1;
    }
    else {
      do {
        *puVar12 = &PTR_FUN_110bad578;
        uVar14 = puVar10[2];
        uVar13 = puVar10[1];
        uVar3 = *(undefined4 *)(puVar10 + 3);
        puVar12[4] = 0;
        *(undefined4 *)(puVar12 + 3) = uVar3;
        puVar12[2] = uVar14;
        puVar12[1] = uVar13;
        puVar12[5] = 0;
        puVar12[6] = 0;
        puStack_68 = puVar12;
        FUN_10a07b634();
        *puVar12 = &PTR_FUN_110badbe0;
        puVar10 = puVar10 + 7;
        puStack_68 = puStack_68 + 7;
        puVar12 = puStack_68;
      } while (puVar10 != puVar2);
      uStack_78 = 1;
      do {
        *puVar11 = &PTR_FUN_110bad578;
        if (puVar11[4] != 0) {
          puVar11[5] = puVar11[4];
          __ZdlPv();
        }
        puVar11 = puVar11 + 7;
        lVar9 = lStack_a0;
      } while (puVar11 != puVar2);
    }
    puVar11 = puStack_a8;
    FUN_10a1d6bdc(&plStack_90);
    lStack_b8 = *plVar8;
    *plVar8 = (long)puVar1;
    plVar8[1] = (long)puVar11;
    lStack_a0 = plVar8[2];
    plVar8[2] = lVar9;
    puStack_b0 = (undefined8 *)lStack_b8;
    puStack_a8 = (undefined8 *)lStack_b8;
    func_0x00010a1d6c4c(&lStack_b8);
  }
  plVar8[1] = (long)puVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x78);
  return;
}



/* Entry: 10a1c7210; end: 10a1c721f;  */

void FUN_10a1c7210(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x230);
  plVar8 = (long *)(param_1 + 0x1b8 + (long)*(int *)(param_1 + 0x1ec) * 0x18);
  puVar10 = (undefined8 *)plVar8[1];
  if (puVar10 < (undefined8 *)plVar8[2]) {
    *puVar10 = &PTR_FUN_110bad578;
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    puVar10[4] = 0;
    *(undefined4 *)(puVar10 + 3) = uVar3;
    puVar10[2] = uVar14;
    puVar10[1] = uVar13;
    puVar10[5] = 0;
    puVar10[6] = 0;
    FUN_10a07b634();
    puVar11 = puVar10 + 7;
    *puVar10 = &PTR_FUN_110badbe0;
    plVar8[1] = (long)puVar11;
  }
  else {
    lVar9 = (long)puVar10 - *plVar8;
    uVar7 = (lVar9 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar7) {
      FUN_10a1d6bc8();
LAB_10a1c71cc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1c71d0);
      (*pcVar4)();
    }
    lVar5 = plVar8[2] - *plVar8 >> 3;
    uVar6 = lVar5 * -0x2492492492492492;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    plStack_98 = plVar8;
    if (uVar6 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x492492492492492 < uVar6) {
        func_0x000109ffded8();
        goto LAB_10a1c71cc;
      }
      lVar5 = uVar6 * 0x38;
      __Znwm();
    }
    puVar1 = (undefined8 *)(lVar5 + lVar9);
    lVar9 = lVar5 + uVar6 * 0x38;
    *puVar1 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 8);
    puVar1[2] = *(undefined8 *)(param_2 + 0x10);
    puVar1[1] = uVar13;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[4] = 0;
    lStack_b8 = lVar5;
    puStack_b0 = puVar1;
    puStack_a8 = puVar1;
    lStack_a0 = lVar9;
    FUN_10a07b634();
    puStack_a8 = puVar1 + 7;
    *puVar1 = &PTR_FUN_110badbe0;
    puVar11 = (undefined8 *)*plVar8;
    puVar2 = (undefined8 *)plVar8[1];
    ppuStack_88 = &puStack_70;
    ppuStack_80 = &puStack_68;
    uStack_78 = 0;
    puVar1 = (undefined8 *)((long)puVar1 + ((long)puVar11 - (long)puVar2));
    puVar10 = puVar11;
    puVar12 = puVar1;
    plStack_90 = plVar8;
    puStack_70 = puVar1;
    if ((long)puVar11 - (long)puVar2 == 0) {
      uStack_78 = 1;
      puStack_68 = puVar1;
    }
    else {
      do {
        *puVar12 = &PTR_FUN_110bad578;
        uVar14 = puVar10[2];
        uVar13 = puVar10[1];
        uVar3 = *(undefined4 *)(puVar10 + 3);
        puVar12[4] = 0;
        *(undefined4 *)(puVar12 + 3) = uVar3;
        puVar12[2] = uVar14;
        puVar12[1] = uVar13;
        puVar12[5] = 0;
        puVar12[6] = 0;
        puStack_68 = puVar12;
        FUN_10a07b634();
        *puVar12 = &PTR_FUN_110badbe0;
        puVar10 = puVar10 + 7;
        puStack_68 = puStack_68 + 7;
        puVar12 = puStack_68;
      } while (puVar10 != puVar2);
      uStack_78 = 1;
      do {
        *puVar11 = &PTR_FUN_110bad578;
        if (puVar11[4] != 0) {
          puVar11[5] = puVar11[4];
          __ZdlPv();
        }
        puVar11 = puVar11 + 7;
        lVar9 = lStack_a0;
      } while (puVar11 != puVar2);
    }
    puVar11 = puStack_a8;
    FUN_10a1d6bdc(&plStack_90);
    lStack_b8 = *plVar8;
    *plVar8 = (long)puVar1;
    plVar8[1] = (long)puVar11;
    lStack_a0 = plVar8[2];
    plVar8[2] = lVar9;
    puStack_b0 = (undefined8 *)lStack_b8;
    puStack_a8 = (undefined8 *)lStack_b8;
    func_0x00010a1d6c4c(&lStack_b8);
  }
  plVar8[1] = (long)puVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x230);
  return;
}



/* Entry: 10a1c7220; end: 10a1c74df;  */

void FUN_10a1c7220(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  plVar9 = (long *)(param_1 + (long)*(int *)(param_1 + 0x34) * 0x18);
  puVar4 = (undefined8 *)plVar9[1];
  if (puVar4 < (undefined8 *)plVar9[2]) {
    *puVar4 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 0x10);
    uVar12 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 3) = uVar2;
    puVar4[2] = uVar13;
    puVar4[1] = uVar12;
    puVar4[5] = 0;
    puVar4[6] = 0;
    FUN_10a07b634();
    puVar11 = puVar4 + 7;
    *puVar4 = &PTR_FUN_110badc28;
    plVar9[1] = (long)puVar11;
  }
  else {
    lVar10 = (long)puVar4 - *plVar9;
    uVar7 = (lVar10 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar7) {
      FUN_10a1d6de8();
LAB_10a1c747c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1c7480);
      (*pcVar3)();
    }
    lVar5 = plVar9[2] - *plVar9 >> 3;
    uVar6 = lVar5 * -0x2492492492492492;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    plStack_68 = plVar9;
    if (uVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      if (0x492492492492492 < uVar6) {
        func_0x000109ffded8();
        goto LAB_10a1c747c;
      }
      puVar4 = (undefined8 *)(uVar6 * 0x38);
      __Znwm();
    }
    puVar11 = (undefined8 *)((long)puVar4 + lVar10);
    *puVar11 = &PTR_FUN_110bad578;
    uVar12 = *(undefined8 *)(param_2 + 8);
    puVar11[2] = *(undefined8 *)(param_2 + 0x10);
    puVar11[1] = uVar12;
    *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[4] = 0;
    puStack_88 = puVar4;
    puStack_80 = puVar11;
    puStack_78 = puVar11;
    puStack_70 = puVar4 + uVar6 * 7;
    FUN_10a07b634();
    puStack_78 = puVar11 + 7;
    *puVar11 = &PTR_FUN_110badc28;
    puVar8 = (undefined8 *)*plVar9;
    puVar1 = (undefined8 *)plVar9[1];
    lVar10 = (long)puVar11 + ((long)puVar8 - (long)puVar1);
    puVar11 = puStack_78;
    puVar4 = puVar4 + uVar6 * 7;
    if ((long)puVar8 - (long)puVar1 != 0) {
      lVar5 = 0;
      do {
        puVar4 = (undefined8 *)(lVar10 + lVar5);
        *puVar4 = &PTR_FUN_110bad578;
        uVar13 = *(undefined8 *)((long)puVar8 + lVar5 + 0x10);
        uVar12 = *(undefined8 *)((long)puVar8 + lVar5 + 8);
        *(undefined4 *)(puVar4 + 3) = *(undefined4 *)((long)puVar8 + lVar5 + 0x18);
        puVar4[2] = uVar13;
        puVar4[1] = uVar12;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[4] = 0;
        FUN_10a07b634();
        *puVar4 = &PTR_FUN_110badc28;
        lVar5 = lVar5 + 0x38;
      } while ((undefined8 *)((long)puVar8 + lVar5) != puVar1);
      do {
        puVar4 = puVar8 + 7;
        (**(code **)*puVar8)(puVar8);
        puVar8 = puVar4;
      } while (puVar4 != puVar1);
      puVar8 = (undefined8 *)*plVar9;
      puVar11 = puStack_78;
      puVar4 = puStack_70;
    }
    *plVar9 = lVar10;
    plVar9[1] = (long)puVar11;
    puStack_70 = (undefined8 *)plVar9[2];
    plVar9[2] = (long)puVar4;
    puStack_88 = puVar8;
    puStack_80 = puVar8;
    puStack_78 = puVar8;
    FUN_10a1d6dfc(&puStack_88);
  }
  plVar9[1] = (long)puVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x78);
  return;
}



/* Entry: 10a1c74e0; end: 10a1c74ef;  */

void FUN_10a1c74e0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x510);
  plVar9 = (long *)(param_1 + 0x498 + (long)*(int *)(param_1 + 0x4cc) * 0x18);
  puVar4 = (undefined8 *)plVar9[1];
  if (puVar4 < (undefined8 *)plVar9[2]) {
    *puVar4 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 0x10);
    uVar12 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 3) = uVar2;
    puVar4[2] = uVar13;
    puVar4[1] = uVar12;
    puVar4[5] = 0;
    puVar4[6] = 0;
    FUN_10a07b634();
    puVar11 = puVar4 + 7;
    *puVar4 = &PTR_FUN_110badc28;
    plVar9[1] = (long)puVar11;
  }
  else {
    lVar10 = (long)puVar4 - *plVar9;
    uVar7 = (lVar10 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar7) {
      FUN_10a1d6de8();
LAB_10a1c747c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1c7480);
      (*pcVar3)();
    }
    lVar5 = plVar9[2] - *plVar9 >> 3;
    uVar6 = lVar5 * -0x2492492492492492;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    plStack_68 = plVar9;
    if (uVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      if (0x492492492492492 < uVar6) {
        func_0x000109ffded8();
        goto LAB_10a1c747c;
      }
      puVar4 = (undefined8 *)(uVar6 * 0x38);
      __Znwm();
    }
    puVar11 = (undefined8 *)((long)puVar4 + lVar10);
    *puVar11 = &PTR_FUN_110bad578;
    uVar12 = *(undefined8 *)(param_2 + 8);
    puVar11[2] = *(undefined8 *)(param_2 + 0x10);
    puVar11[1] = uVar12;
    *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[4] = 0;
    puStack_88 = puVar4;
    puStack_80 = puVar11;
    puStack_78 = puVar11;
    puStack_70 = puVar4 + uVar6 * 7;
    FUN_10a07b634();
    puStack_78 = puVar11 + 7;
    *puVar11 = &PTR_FUN_110badc28;
    puVar8 = (undefined8 *)*plVar9;
    puVar1 = (undefined8 *)plVar9[1];
    lVar10 = (long)puVar11 + ((long)puVar8 - (long)puVar1);
    puVar11 = puStack_78;
    puVar4 = puVar4 + uVar6 * 7;
    if ((long)puVar8 - (long)puVar1 != 0) {
      lVar5 = 0;
      do {
        puVar4 = (undefined8 *)(lVar10 + lVar5);
        *puVar4 = &PTR_FUN_110bad578;
        uVar13 = *(undefined8 *)((long)puVar8 + lVar5 + 0x10);
        uVar12 = *(undefined8 *)((long)puVar8 + lVar5 + 8);
        *(undefined4 *)(puVar4 + 3) = *(undefined4 *)((long)puVar8 + lVar5 + 0x18);
        puVar4[2] = uVar13;
        puVar4[1] = uVar12;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[4] = 0;
        FUN_10a07b634();
        *puVar4 = &PTR_FUN_110badc28;
        lVar5 = lVar5 + 0x38;
      } while ((undefined8 *)((long)puVar8 + lVar5) != puVar1);
      do {
        puVar4 = puVar8 + 7;
        (**(code **)*puVar8)(puVar8);
        puVar8 = puVar4;
      } while (puVar4 != puVar1);
      puVar8 = (undefined8 *)*plVar9;
      puVar11 = puStack_78;
      puVar4 = puStack_70;
    }
    *plVar9 = lVar10;
    plVar9[1] = (long)puVar11;
    puStack_70 = (undefined8 *)plVar9[2];
    plVar9[2] = (long)puVar4;
    puStack_88 = puVar8;
    puStack_80 = puVar8;
    puStack_78 = puVar8;
    FUN_10a1d6dfc(&puStack_88);
  }
  plVar9[1] = (long)puVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x510);
  return;
}



/* Entry: 10a1c74f0; end: 10a1c778f;  */

void FUN_10a1c74f0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  plVar9 = (long *)(param_1 + (long)*(int *)(param_1 + 0x34) * 0x18);
  puVar5 = (undefined8 *)plVar9[1];
  if (puVar5 < (undefined8 *)plVar9[2]) {
    *puVar5 = &PTR_FUN_110bad578;
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 3) = uVar3;
    puVar5[2] = uVar14;
    puVar5[1] = uVar13;
    puVar5[5] = 0;
    puVar5[6] = 0;
    FUN_10a07b634();
    *puVar5 = &PTR_DAT_110badc70;
    *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(param_2 + 0x38);
    puVar5 = puVar5 + 8;
    plVar9[1] = (long)puVar5;
  }
  else {
    lVar10 = (long)puVar5 - *plVar9;
    uVar1 = (lVar10 >> 6) + 1;
    if (uVar1 >> 0x3a != 0) {
      FUN_10a1d6f80();
LAB_10a1c772c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1c7730);
      (*pcVar4)();
    }
    uVar6 = plVar9[2] - *plVar9;
    uVar7 = (long)uVar6 >> 5;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar6) {
      uVar7 = 0x3ffffffffffffff;
    }
    plStack_68 = plVar9;
    if (uVar7 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      if (uVar7 >> 0x3a != 0) {
        func_0x000109ffded8();
        goto LAB_10a1c772c;
      }
      puVar5 = (undefined8 *)(uVar7 << 6);
      __Znwm();
    }
    puVar12 = (undefined8 *)((long)puVar5 + lVar10);
    *puVar12 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 8);
    puVar12[2] = *(undefined8 *)(param_2 + 0x10);
    puVar12[1] = uVar13;
    *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[4] = 0;
    puStack_88 = puVar5;
    puStack_80 = puVar12;
    puStack_78 = puVar12;
    puStack_70 = puVar5 + uVar7 * 8;
    FUN_10a07b634();
    *puVar12 = &PTR_DAT_110badc70;
    *(undefined4 *)(puVar12 + 7) = *(undefined4 *)(param_2 + 0x38);
    puStack_78 = puVar12 + 8;
    puVar8 = (undefined8 *)*plVar9;
    puVar2 = (undefined8 *)plVar9[1];
    lVar10 = (long)puVar12 + ((long)puVar8 - (long)puVar2);
    puVar12 = puVar5 + uVar7 * 8;
    puVar5 = puStack_78;
    if ((long)puVar8 - (long)puVar2 != 0) {
      lVar11 = 0;
      do {
        puVar5 = (undefined8 *)(lVar10 + lVar11);
        *puVar5 = &PTR_FUN_110bad578;
        uVar14 = *(undefined8 *)((long)puVar8 + lVar11 + 0x10);
        uVar13 = *(undefined8 *)((long)puVar8 + lVar11 + 8);
        uVar3 = *(undefined4 *)((long)puVar8 + lVar11 + 0x18);
        puVar5[4] = 0;
        *(undefined4 *)(puVar5 + 3) = uVar3;
        puVar5[2] = uVar14;
        puVar5[1] = uVar13;
        puVar5[5] = 0;
        puVar5[6] = 0;
        FUN_10a07b634();
        *puVar5 = &PTR_DAT_110badc70;
        *(undefined4 *)(puVar5 + 7) = *(undefined4 *)((long)puVar8 + lVar11 + 0x38);
        lVar11 = lVar11 + 0x40;
      } while ((undefined8 *)((long)puVar8 + lVar11) != puVar2);
      do {
        puVar5 = puVar8 + 8;
        (**(code **)*puVar8)(puVar8);
        puVar8 = puVar5;
      } while (puVar5 != puVar2);
      puVar8 = (undefined8 *)*plVar9;
      puVar12 = puStack_70;
      puVar5 = puStack_78;
    }
    *plVar9 = lVar10;
    plVar9[1] = (long)puVar5;
    puStack_70 = (undefined8 *)plVar9[2];
    plVar9[2] = (long)puVar12;
    puStack_88 = puVar8;
    puStack_80 = puVar8;
    puStack_78 = puVar8;
    FUN_10a1d6f94(&puStack_88);
  }
  plVar9[1] = (long)puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x78);
  return;
}



/* Entry: 10a1c7790; end: 10a1c779f;  */

void FUN_10a1c7790(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x2e8);
  plVar9 = (long *)(param_1 + 0x270 + (long)*(int *)(param_1 + 0x2a4) * 0x18);
  puVar5 = (undefined8 *)plVar9[1];
  if (puVar5 < (undefined8 *)plVar9[2]) {
    *puVar5 = &PTR_FUN_110bad578;
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 3) = uVar3;
    puVar5[2] = uVar14;
    puVar5[1] = uVar13;
    puVar5[5] = 0;
    puVar5[6] = 0;
    FUN_10a07b634();
    *puVar5 = &PTR_DAT_110badc70;
    *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(param_2 + 0x38);
    puVar5 = puVar5 + 8;
    plVar9[1] = (long)puVar5;
  }
  else {
    lVar10 = (long)puVar5 - *plVar9;
    uVar1 = (lVar10 >> 6) + 1;
    if (uVar1 >> 0x3a != 0) {
      FUN_10a1d6f80();
LAB_10a1c772c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1c7730);
      (*pcVar4)();
    }
    uVar6 = plVar9[2] - *plVar9;
    uVar7 = (long)uVar6 >> 5;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar6) {
      uVar7 = 0x3ffffffffffffff;
    }
    plStack_68 = plVar9;
    if (uVar7 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      if (uVar7 >> 0x3a != 0) {
        func_0x000109ffded8();
        goto LAB_10a1c772c;
      }
      puVar5 = (undefined8 *)(uVar7 << 6);
      __Znwm();
    }
    puVar12 = (undefined8 *)((long)puVar5 + lVar10);
    *puVar12 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 8);
    puVar12[2] = *(undefined8 *)(param_2 + 0x10);
    puVar12[1] = uVar13;
    *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[4] = 0;
    puStack_88 = puVar5;
    puStack_80 = puVar12;
    puStack_78 = puVar12;
    puStack_70 = puVar5 + uVar7 * 8;
    FUN_10a07b634();
    *puVar12 = &PTR_DAT_110badc70;
    *(undefined4 *)(puVar12 + 7) = *(undefined4 *)(param_2 + 0x38);
    puStack_78 = puVar12 + 8;
    puVar8 = (undefined8 *)*plVar9;
    puVar2 = (undefined8 *)plVar9[1];
    lVar10 = (long)puVar12 + ((long)puVar8 - (long)puVar2);
    puVar12 = puVar5 + uVar7 * 8;
    puVar5 = puStack_78;
    if ((long)puVar8 - (long)puVar2 != 0) {
      lVar11 = 0;
      do {
        puVar5 = (undefined8 *)(lVar10 + lVar11);
        *puVar5 = &PTR_FUN_110bad578;
        uVar14 = *(undefined8 *)((long)puVar8 + lVar11 + 0x10);
        uVar13 = *(undefined8 *)((long)puVar8 + lVar11 + 8);
        uVar3 = *(undefined4 *)((long)puVar8 + lVar11 + 0x18);
        puVar5[4] = 0;
        *(undefined4 *)(puVar5 + 3) = uVar3;
        puVar5[2] = uVar14;
        puVar5[1] = uVar13;
        puVar5[5] = 0;
        puVar5[6] = 0;
        FUN_10a07b634();
        *puVar5 = &PTR_DAT_110badc70;
        *(undefined4 *)(puVar5 + 7) = *(undefined4 *)((long)puVar8 + lVar11 + 0x38);
        lVar11 = lVar11 + 0x40;
      } while ((undefined8 *)((long)puVar8 + lVar11) != puVar2);
      do {
        puVar5 = puVar8 + 8;
        (**(code **)*puVar8)(puVar8);
        puVar8 = puVar5;
      } while (puVar5 != puVar2);
      puVar8 = (undefined8 *)*plVar9;
      puVar12 = puStack_70;
      puVar5 = puStack_78;
    }
    *plVar9 = lVar10;
    plVar9[1] = (long)puVar5;
    puStack_70 = (undefined8 *)plVar9[2];
    plVar9[2] = (long)puVar12;
    puStack_88 = puVar8;
    puStack_80 = puVar8;
    puStack_78 = puVar8;
    FUN_10a1d6f94(&puStack_88);
  }
  plVar9[1] = (long)puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x2e8);
  return;
}



/* Entry: 10a1c77a0; end: 10a1c7a3f;  */

void FUN_10a1c77a0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  plVar9 = (long *)(param_1 + (long)*(int *)(param_1 + 0x34) * 0x18);
  puVar5 = (undefined8 *)plVar9[1];
  if (puVar5 < (undefined8 *)plVar9[2]) {
    *puVar5 = &PTR_FUN_110bad578;
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 3) = uVar3;
    puVar5[2] = uVar14;
    puVar5[1] = uVar13;
    puVar5[5] = 0;
    puVar5[6] = 0;
    FUN_10a07b634();
    *puVar5 = &PTR_DAT_110badcb8;
    *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(param_2 + 0x38);
    puVar5 = puVar5 + 8;
    plVar9[1] = (long)puVar5;
  }
  else {
    lVar10 = (long)puVar5 - *plVar9;
    uVar1 = (lVar10 >> 6) + 1;
    if (uVar1 >> 0x3a != 0) {
      FUN_10a1d7118();
LAB_10a1c79dc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1c79e0);
      (*pcVar4)();
    }
    uVar6 = plVar9[2] - *plVar9;
    uVar7 = (long)uVar6 >> 5;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar6) {
      uVar7 = 0x3ffffffffffffff;
    }
    plStack_68 = plVar9;
    if (uVar7 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      if (uVar7 >> 0x3a != 0) {
        func_0x000109ffded8();
        goto LAB_10a1c79dc;
      }
      puVar5 = (undefined8 *)(uVar7 << 6);
      __Znwm();
    }
    puVar12 = (undefined8 *)((long)puVar5 + lVar10);
    *puVar12 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 8);
    puVar12[2] = *(undefined8 *)(param_2 + 0x10);
    puVar12[1] = uVar13;
    *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[4] = 0;
    puStack_88 = puVar5;
    puStack_80 = puVar12;
    puStack_78 = puVar12;
    puStack_70 = puVar5 + uVar7 * 8;
    FUN_10a07b634();
    *puVar12 = &PTR_DAT_110badcb8;
    *(undefined4 *)(puVar12 + 7) = *(undefined4 *)(param_2 + 0x38);
    puStack_78 = puVar12 + 8;
    puVar8 = (undefined8 *)*plVar9;
    puVar2 = (undefined8 *)plVar9[1];
    lVar10 = (long)puVar12 + ((long)puVar8 - (long)puVar2);
    puVar12 = puVar5 + uVar7 * 8;
    puVar5 = puStack_78;
    if ((long)puVar8 - (long)puVar2 != 0) {
      lVar11 = 0;
      do {
        puVar5 = (undefined8 *)(lVar10 + lVar11);
        *puVar5 = &PTR_FUN_110bad578;
        uVar14 = *(undefined8 *)((long)puVar8 + lVar11 + 0x10);
        uVar13 = *(undefined8 *)((long)puVar8 + lVar11 + 8);
        uVar3 = *(undefined4 *)((long)puVar8 + lVar11 + 0x18);
        puVar5[4] = 0;
        *(undefined4 *)(puVar5 + 3) = uVar3;
        puVar5[2] = uVar14;
        puVar5[1] = uVar13;
        puVar5[5] = 0;
        puVar5[6] = 0;
        FUN_10a07b634();
        *puVar5 = &PTR_DAT_110badcb8;
        *(undefined4 *)(puVar5 + 7) = *(undefined4 *)((long)puVar8 + lVar11 + 0x38);
        lVar11 = lVar11 + 0x40;
      } while ((undefined8 *)((long)puVar8 + lVar11) != puVar2);
      do {
        puVar5 = puVar8 + 8;
        (**(code **)*puVar8)(puVar8);
        puVar8 = puVar5;
      } while (puVar5 != puVar2);
      puVar8 = (undefined8 *)*plVar9;
      puVar12 = puStack_70;
      puVar5 = puStack_78;
    }
    *plVar9 = lVar10;
    plVar9[1] = (long)puVar5;
    puStack_70 = (undefined8 *)plVar9[2];
    plVar9[2] = (long)puVar12;
    puStack_88 = puVar8;
    puStack_80 = puVar8;
    puStack_78 = puVar8;
    FUN_10a1d712c(&puStack_88);
  }
  plVar9[1] = (long)puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x78);
  return;
}



/* Entry: 10a1c7a40; end: 10a1c7a4f;  */

void FUN_10a1c7a40(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x3a0);
  plVar9 = (long *)(param_1 + 0x328 + (long)*(int *)(param_1 + 0x35c) * 0x18);
  puVar5 = (undefined8 *)plVar9[1];
  if (puVar5 < (undefined8 *)plVar9[2]) {
    *puVar5 = &PTR_FUN_110bad578;
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 3) = uVar3;
    puVar5[2] = uVar14;
    puVar5[1] = uVar13;
    puVar5[5] = 0;
    puVar5[6] = 0;
    FUN_10a07b634();
    *puVar5 = &PTR_DAT_110badcb8;
    *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(param_2 + 0x38);
    puVar5 = puVar5 + 8;
    plVar9[1] = (long)puVar5;
  }
  else {
    lVar10 = (long)puVar5 - *plVar9;
    uVar1 = (lVar10 >> 6) + 1;
    if (uVar1 >> 0x3a != 0) {
      FUN_10a1d7118();
LAB_10a1c79dc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1c79e0);
      (*pcVar4)();
    }
    uVar6 = plVar9[2] - *plVar9;
    uVar7 = (long)uVar6 >> 5;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar6) {
      uVar7 = 0x3ffffffffffffff;
    }
    plStack_68 = plVar9;
    if (uVar7 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      if (uVar7 >> 0x3a != 0) {
        func_0x000109ffded8();
        goto LAB_10a1c79dc;
      }
      puVar5 = (undefined8 *)(uVar7 << 6);
      __Znwm();
    }
    puVar12 = (undefined8 *)((long)puVar5 + lVar10);
    *puVar12 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 8);
    puVar12[2] = *(undefined8 *)(param_2 + 0x10);
    puVar12[1] = uVar13;
    *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[4] = 0;
    puStack_88 = puVar5;
    puStack_80 = puVar12;
    puStack_78 = puVar12;
    puStack_70 = puVar5 + uVar7 * 8;
    FUN_10a07b634();
    *puVar12 = &PTR_DAT_110badcb8;
    *(undefined4 *)(puVar12 + 7) = *(undefined4 *)(param_2 + 0x38);
    puStack_78 = puVar12 + 8;
    puVar8 = (undefined8 *)*plVar9;
    puVar2 = (undefined8 *)plVar9[1];
    lVar10 = (long)puVar12 + ((long)puVar8 - (long)puVar2);
    puVar12 = puVar5 + uVar7 * 8;
    puVar5 = puStack_78;
    if ((long)puVar8 - (long)puVar2 != 0) {
      lVar11 = 0;
      do {
        puVar5 = (undefined8 *)(lVar10 + lVar11);
        *puVar5 = &PTR_FUN_110bad578;
        uVar14 = *(undefined8 *)((long)puVar8 + lVar11 + 0x10);
        uVar13 = *(undefined8 *)((long)puVar8 + lVar11 + 8);
        uVar3 = *(undefined4 *)((long)puVar8 + lVar11 + 0x18);
        puVar5[4] = 0;
        *(undefined4 *)(puVar5 + 3) = uVar3;
        puVar5[2] = uVar14;
        puVar5[1] = uVar13;
        puVar5[5] = 0;
        puVar5[6] = 0;
        FUN_10a07b634();
        *puVar5 = &PTR_DAT_110badcb8;
        *(undefined4 *)(puVar5 + 7) = *(undefined4 *)((long)puVar8 + lVar11 + 0x38);
        lVar11 = lVar11 + 0x40;
      } while ((undefined8 *)((long)puVar8 + lVar11) != puVar2);
      do {
        puVar5 = puVar8 + 8;
        (**(code **)*puVar8)(puVar8);
        puVar8 = puVar5;
      } while (puVar5 != puVar2);
      puVar8 = (undefined8 *)*plVar9;
      puVar12 = puStack_70;
      puVar5 = puStack_78;
    }
    *plVar9 = lVar10;
    plVar9[1] = (long)puVar5;
    puStack_70 = (undefined8 *)plVar9[2];
    plVar9[2] = (long)puVar12;
    puStack_88 = puVar8;
    puStack_80 = puVar8;
    puStack_78 = puVar8;
    FUN_10a1d712c(&puStack_88);
  }
  plVar9[1] = (long)puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x3a0);
  return;
}



/* Entry: 10a1c7a50; end: 10a1c7d43;  */

void FUN_10a1c7a50(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  plVar10 = (long *)(param_1 + (long)*(int *)(param_1 + 0x34) * 0x18);
  puVar4 = (undefined8 *)plVar10[1];
  if (puVar4 < (undefined8 *)plVar10[2]) {
    *puVar4 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 3) = uVar2;
    puVar4[2] = uVar13;
    puVar4[1] = uVar5;
    puVar4[5] = 0;
    puVar4[6] = 0;
    FUN_10a07b634();
    *puVar4 = &PTR_DAT_110badd00;
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_2 + 0x40);
    puVar4[7] = uVar5;
    puVar4 = puVar4 + 9;
    plVar10[1] = (long)puVar4;
  }
  else {
    lVar11 = (long)puVar4 - *plVar10;
    uVar8 = (lVar11 >> 3) * -0x71c71c71c71c71c7 + 1;
    if (0x38e38e38e38e38e < uVar8) {
      FUN_10a1d72b8();
LAB_10a1c7ce0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1c7ce4);
      (*pcVar3)();
    }
    lVar6 = plVar10[2] - *plVar10 >> 3;
    uVar7 = lVar6 * 0x1c71c71c71c71c72;
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
      uVar7 = uVar8;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar6 * -0x71c71c71c71c71c7)) {
      uVar7 = 0x38e38e38e38e38e;
    }
    plStack_68 = plVar10;
    if (uVar7 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      if (0x38e38e38e38e38e < uVar7) {
        func_0x000109ffded8();
        goto LAB_10a1c7ce0;
      }
      puVar4 = (undefined8 *)(uVar7 * 0x48);
      __Znwm();
    }
    puVar12 = (undefined8 *)((long)puVar4 + lVar11);
    *puVar12 = &PTR_FUN_110bad578;
    uVar5 = *(undefined8 *)(param_2 + 8);
    puVar12[2] = *(undefined8 *)(param_2 + 0x10);
    puVar12[1] = uVar5;
    *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[4] = 0;
    puStack_88 = puVar4;
    puStack_80 = puVar12;
    puStack_78 = puVar12;
    puStack_70 = puVar4 + uVar7 * 9;
    FUN_10a07b634();
    *puVar12 = &PTR_DAT_110badd00;
    puVar12[7] = *(undefined8 *)(param_2 + 0x38);
    *(undefined4 *)(puVar12 + 8) = *(undefined4 *)(param_2 + 0x40);
    puStack_78 = puVar12 + 9;
    puVar9 = (undefined8 *)*plVar10;
    puVar1 = (undefined8 *)plVar10[1];
    lVar11 = (long)puVar12 + ((long)puVar9 - (long)puVar1);
    puVar12 = puVar4 + uVar7 * 9;
    puVar4 = puStack_78;
    if ((long)puVar9 - (long)puVar1 != 0) {
      lVar6 = 0;
      do {
        puVar4 = (undefined8 *)(lVar11 + lVar6);
        *puVar4 = &PTR_FUN_110bad578;
        uVar13 = *(undefined8 *)((long)puVar9 + lVar6 + 0x10);
        uVar5 = *(undefined8 *)((long)puVar9 + lVar6 + 8);
        uVar2 = *(undefined4 *)((long)puVar9 + lVar6 + 0x18);
        puVar4[4] = 0;
        *(undefined4 *)(puVar4 + 3) = uVar2;
        puVar4[2] = uVar13;
        puVar4[1] = uVar5;
        puVar4[5] = 0;
        puVar4[6] = 0;
        FUN_10a07b634();
        *puVar4 = &PTR_DAT_110badd00;
        uVar5 = *(undefined8 *)((long)puVar9 + lVar6 + 0x38);
        *(undefined4 *)(puVar4 + 8) = *(undefined4 *)((long)puVar9 + lVar6 + 0x40);
        puVar4[7] = uVar5;
        lVar6 = lVar6 + 0x48;
      } while ((undefined8 *)((long)puVar9 + lVar6) != puVar1);
      do {
        puVar4 = puVar9 + 9;
        (**(code **)*puVar9)(puVar9);
        puVar9 = puVar4;
      } while (puVar4 != puVar1);
      puVar9 = (undefined8 *)*plVar10;
      puVar12 = puStack_70;
      puVar4 = puStack_78;
    }
    *plVar10 = lVar11;
    plVar10[1] = (long)puVar4;
    puStack_70 = (undefined8 *)plVar10[2];
    plVar10[2] = (long)puVar12;
    puStack_88 = puVar9;
    puStack_80 = puVar9;
    puStack_78 = puVar9;
    FUN_10a1d72cc(&puStack_88);
  }
  plVar10[1] = (long)puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x78);
  return;
}



/* Entry: 10a1c7d44; end: 10a1c7d53;  */

void FUN_10a1c7d44(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x458);
  plVar10 = (long *)(param_1 + 0x3e0 + (long)*(int *)(param_1 + 0x414) * 0x18);
  puVar4 = (undefined8 *)plVar10[1];
  if (puVar4 < (undefined8 *)plVar10[2]) {
    *puVar4 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 3) = uVar2;
    puVar4[2] = uVar13;
    puVar4[1] = uVar5;
    puVar4[5] = 0;
    puVar4[6] = 0;
    FUN_10a07b634();
    *puVar4 = &PTR_DAT_110badd00;
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_2 + 0x40);
    puVar4[7] = uVar5;
    puVar4 = puVar4 + 9;
    plVar10[1] = (long)puVar4;
  }
  else {
    lVar11 = (long)puVar4 - *plVar10;
    uVar8 = (lVar11 >> 3) * -0x71c71c71c71c71c7 + 1;
    if (0x38e38e38e38e38e < uVar8) {
      FUN_10a1d72b8();
LAB_10a1c7ce0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1c7ce4);
      (*pcVar3)();
    }
    lVar6 = plVar10[2] - *plVar10 >> 3;
    uVar7 = lVar6 * 0x1c71c71c71c71c72;
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
      uVar7 = uVar8;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar6 * -0x71c71c71c71c71c7)) {
      uVar7 = 0x38e38e38e38e38e;
    }
    plStack_68 = plVar10;
    if (uVar7 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      if (0x38e38e38e38e38e < uVar7) {
        func_0x000109ffded8();
        goto LAB_10a1c7ce0;
      }
      puVar4 = (undefined8 *)(uVar7 * 0x48);
      __Znwm();
    }
    puVar12 = (undefined8 *)((long)puVar4 + lVar11);
    *puVar12 = &PTR_FUN_110bad578;
    uVar5 = *(undefined8 *)(param_2 + 8);
    puVar12[2] = *(undefined8 *)(param_2 + 0x10);
    puVar12[1] = uVar5;
    *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[4] = 0;
    puStack_88 = puVar4;
    puStack_80 = puVar12;
    puStack_78 = puVar12;
    puStack_70 = puVar4 + uVar7 * 9;
    FUN_10a07b634();
    *puVar12 = &PTR_DAT_110badd00;
    puVar12[7] = *(undefined8 *)(param_2 + 0x38);
    *(undefined4 *)(puVar12 + 8) = *(undefined4 *)(param_2 + 0x40);
    puStack_78 = puVar12 + 9;
    puVar9 = (undefined8 *)*plVar10;
    puVar1 = (undefined8 *)plVar10[1];
    lVar11 = (long)puVar12 + ((long)puVar9 - (long)puVar1);
    puVar12 = puVar4 + uVar7 * 9;
    puVar4 = puStack_78;
    if ((long)puVar9 - (long)puVar1 != 0) {
      lVar6 = 0;
      do {
        puVar4 = (undefined8 *)(lVar11 + lVar6);
        *puVar4 = &PTR_FUN_110bad578;
        uVar13 = *(undefined8 *)((long)puVar9 + lVar6 + 0x10);
        uVar5 = *(undefined8 *)((long)puVar9 + lVar6 + 8);
        uVar2 = *(undefined4 *)((long)puVar9 + lVar6 + 0x18);
        puVar4[4] = 0;
        *(undefined4 *)(puVar4 + 3) = uVar2;
        puVar4[2] = uVar13;
        puVar4[1] = uVar5;
        puVar4[5] = 0;
        puVar4[6] = 0;
        FUN_10a07b634();
        *puVar4 = &PTR_DAT_110badd00;
        uVar5 = *(undefined8 *)((long)puVar9 + lVar6 + 0x38);
        *(undefined4 *)(puVar4 + 8) = *(undefined4 *)((long)puVar9 + lVar6 + 0x40);
        puVar4[7] = uVar5;
        lVar6 = lVar6 + 0x48;
      } while ((undefined8 *)((long)puVar9 + lVar6) != puVar1);
      do {
        puVar4 = puVar9 + 9;
        (**(code **)*puVar9)(puVar9);
        puVar9 = puVar4;
      } while (puVar4 != puVar1);
      puVar9 = (undefined8 *)*plVar10;
      puVar12 = puStack_70;
      puVar4 = puStack_78;
    }
    *plVar10 = lVar11;
    plVar10[1] = (long)puVar4;
    puStack_70 = (undefined8 *)plVar10[2];
    plVar10[2] = (long)puVar12;
    puStack_88 = puVar9;
    puStack_80 = puVar9;
    puStack_78 = puVar9;
    FUN_10a1d72cc(&puStack_88);
  }
  plVar10[1] = (long)puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x458);
  return;
}



/* Entry: 10a1c7d54; end: 10a1c8013;  */

void FUN_10a1c7d54(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  plVar9 = (long *)(param_1 + (long)*(int *)(param_1 + 0x34) * 0x18);
  puVar4 = (undefined8 *)plVar9[1];
  if (puVar4 < (undefined8 *)plVar9[2]) {
    *puVar4 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 0x10);
    uVar12 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 3) = uVar2;
    puVar4[2] = uVar13;
    puVar4[1] = uVar12;
    puVar4[5] = 0;
    puVar4[6] = 0;
    FUN_10a07b634();
    puVar11 = puVar4 + 7;
    *puVar4 = &PTR_DAT_110badd48;
    plVar9[1] = (long)puVar11;
  }
  else {
    lVar10 = (long)puVar4 - *plVar9;
    uVar7 = (lVar10 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar7) {
      FUN_10a1d7444();
LAB_10a1c7fb0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1c7fb4);
      (*pcVar3)();
    }
    lVar5 = plVar9[2] - *plVar9 >> 3;
    uVar6 = lVar5 * -0x2492492492492492;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    plStack_68 = plVar9;
    if (uVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      if (0x492492492492492 < uVar6) {
        func_0x000109ffded8();
        goto LAB_10a1c7fb0;
      }
      puVar4 = (undefined8 *)(uVar6 * 0x38);
      __Znwm();
    }
    puVar11 = (undefined8 *)((long)puVar4 + lVar10);
    *puVar11 = &PTR_FUN_110bad578;
    uVar12 = *(undefined8 *)(param_2 + 8);
    puVar11[2] = *(undefined8 *)(param_2 + 0x10);
    puVar11[1] = uVar12;
    *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[4] = 0;
    puStack_88 = puVar4;
    puStack_80 = puVar11;
    puStack_78 = puVar11;
    puStack_70 = puVar4 + uVar6 * 7;
    FUN_10a07b634();
    puStack_78 = puVar11 + 7;
    *puVar11 = &PTR_DAT_110badd48;
    puVar8 = (undefined8 *)*plVar9;
    puVar1 = (undefined8 *)plVar9[1];
    lVar10 = (long)puVar11 + ((long)puVar8 - (long)puVar1);
    puVar11 = puStack_78;
    puVar4 = puVar4 + uVar6 * 7;
    if ((long)puVar8 - (long)puVar1 != 0) {
      lVar5 = 0;
      do {
        puVar4 = (undefined8 *)(lVar10 + lVar5);
        *puVar4 = &PTR_FUN_110bad578;
        uVar13 = *(undefined8 *)((long)puVar8 + lVar5 + 0x10);
        uVar12 = *(undefined8 *)((long)puVar8 + lVar5 + 8);
        *(undefined4 *)(puVar4 + 3) = *(undefined4 *)((long)puVar8 + lVar5 + 0x18);
        puVar4[2] = uVar13;
        puVar4[1] = uVar12;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[4] = 0;
        FUN_10a07b634();
        *puVar4 = &PTR_DAT_110badd48;
        lVar5 = lVar5 + 0x38;
      } while ((undefined8 *)((long)puVar8 + lVar5) != puVar1);
      do {
        puVar4 = puVar8 + 7;
        (**(code **)*puVar8)(puVar8);
        puVar8 = puVar4;
      } while (puVar4 != puVar1);
      puVar8 = (undefined8 *)*plVar9;
      puVar11 = puStack_78;
      puVar4 = puStack_70;
    }
    *plVar9 = lVar10;
    plVar9[1] = (long)puVar11;
    puStack_70 = (undefined8 *)plVar9[2];
    plVar9[2] = (long)puVar4;
    puStack_88 = puVar8;
    puStack_80 = puVar8;
    puStack_78 = puVar8;
    FUN_10a1d7458(&puStack_88);
  }
  plVar9[1] = (long)puVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x78);
  return;
}



/* Entry: 10a1c8014; end: 10a1c8023;  */

void FUN_10a1c8014(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x5c8);
  plVar9 = (long *)(param_1 + 0x550 + (long)*(int *)(param_1 + 0x584) * 0x18);
  puVar4 = (undefined8 *)plVar9[1];
  if (puVar4 < (undefined8 *)plVar9[2]) {
    *puVar4 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 0x10);
    uVar12 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 3) = uVar2;
    puVar4[2] = uVar13;
    puVar4[1] = uVar12;
    puVar4[5] = 0;
    puVar4[6] = 0;
    FUN_10a07b634();
    puVar11 = puVar4 + 7;
    *puVar4 = &PTR_DAT_110badd48;
    plVar9[1] = (long)puVar11;
  }
  else {
    lVar10 = (long)puVar4 - *plVar9;
    uVar7 = (lVar10 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar7) {
      FUN_10a1d7444();
LAB_10a1c7fb0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1c7fb4);
      (*pcVar3)();
    }
    lVar5 = plVar9[2] - *plVar9 >> 3;
    uVar6 = lVar5 * -0x2492492492492492;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    plStack_68 = plVar9;
    if (uVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      if (0x492492492492492 < uVar6) {
        func_0x000109ffded8();
        goto LAB_10a1c7fb0;
      }
      puVar4 = (undefined8 *)(uVar6 * 0x38);
      __Znwm();
    }
    puVar11 = (undefined8 *)((long)puVar4 + lVar10);
    *puVar11 = &PTR_FUN_110bad578;
    uVar12 = *(undefined8 *)(param_2 + 8);
    puVar11[2] = *(undefined8 *)(param_2 + 0x10);
    puVar11[1] = uVar12;
    *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[4] = 0;
    puStack_88 = puVar4;
    puStack_80 = puVar11;
    puStack_78 = puVar11;
    puStack_70 = puVar4 + uVar6 * 7;
    FUN_10a07b634();
    puStack_78 = puVar11 + 7;
    *puVar11 = &PTR_DAT_110badd48;
    puVar8 = (undefined8 *)*plVar9;
    puVar1 = (undefined8 *)plVar9[1];
    lVar10 = (long)puVar11 + ((long)puVar8 - (long)puVar1);
    puVar11 = puStack_78;
    puVar4 = puVar4 + uVar6 * 7;
    if ((long)puVar8 - (long)puVar1 != 0) {
      lVar5 = 0;
      do {
        puVar4 = (undefined8 *)(lVar10 + lVar5);
        *puVar4 = &PTR_FUN_110bad578;
        uVar13 = *(undefined8 *)((long)puVar8 + lVar5 + 0x10);
        uVar12 = *(undefined8 *)((long)puVar8 + lVar5 + 8);
        *(undefined4 *)(puVar4 + 3) = *(undefined4 *)((long)puVar8 + lVar5 + 0x18);
        puVar4[2] = uVar13;
        puVar4[1] = uVar12;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[4] = 0;
        FUN_10a07b634();
        *puVar4 = &PTR_DAT_110badd48;
        lVar5 = lVar5 + 0x38;
      } while ((undefined8 *)((long)puVar8 + lVar5) != puVar1);
      do {
        puVar4 = puVar8 + 7;
        (**(code **)*puVar8)(puVar8);
        puVar8 = puVar4;
      } while (puVar4 != puVar1);
      puVar8 = (undefined8 *)*plVar9;
      puVar11 = puStack_78;
      puVar4 = puStack_70;
    }
    *plVar9 = lVar10;
    plVar9[1] = (long)puVar11;
    puStack_70 = (undefined8 *)plVar9[2];
    plVar9[2] = (long)puVar4;
    puStack_88 = puVar8;
    puStack_80 = puVar8;
    puStack_78 = puVar8;
    FUN_10a1d7458(&puStack_88);
  }
  plVar9[1] = (long)puVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x5c8);
  return;
}



/* Entry: 10a1c8024; end: 10a1c82c3;  */

void FUN_10a1c8024(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  plVar9 = (long *)(param_1 + (long)*(int *)(param_1 + 0x34) * 0x18);
  puVar5 = (undefined8 *)plVar9[1];
  if (puVar5 < (undefined8 *)plVar9[2]) {
    *puVar5 = &PTR_FUN_110bad578;
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 3) = uVar3;
    puVar5[2] = uVar14;
    puVar5[1] = uVar13;
    puVar5[5] = 0;
    puVar5[6] = 0;
    FUN_10a07b634();
    *puVar5 = &PTR_DAT_110badd90;
    puVar5[7] = *(undefined8 *)(param_2 + 0x38);
    puVar5 = puVar5 + 8;
    plVar9[1] = (long)puVar5;
  }
  else {
    lVar10 = (long)puVar5 - *plVar9;
    uVar1 = (lVar10 >> 6) + 1;
    if (uVar1 >> 0x3a != 0) {
      FUN_10a1d759c();
LAB_10a1c8260:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1c8264);
      (*pcVar4)();
    }
    uVar6 = plVar9[2] - *plVar9;
    uVar7 = (long)uVar6 >> 5;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar6) {
      uVar7 = 0x3ffffffffffffff;
    }
    plStack_68 = plVar9;
    if (uVar7 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      if (uVar7 >> 0x3a != 0) {
        func_0x000109ffded8();
        goto LAB_10a1c8260;
      }
      puVar5 = (undefined8 *)(uVar7 << 6);
      __Znwm();
    }
    puVar12 = (undefined8 *)((long)puVar5 + lVar10);
    *puVar12 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 8);
    puVar12[2] = *(undefined8 *)(param_2 + 0x10);
    puVar12[1] = uVar13;
    *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[4] = 0;
    puStack_88 = puVar5;
    puStack_80 = puVar12;
    puStack_78 = puVar12;
    puStack_70 = puVar5 + uVar7 * 8;
    FUN_10a07b634();
    *puVar12 = &PTR_DAT_110badd90;
    puVar12[7] = *(undefined8 *)(param_2 + 0x38);
    puStack_78 = puVar12 + 8;
    puVar8 = (undefined8 *)*plVar9;
    puVar2 = (undefined8 *)plVar9[1];
    lVar10 = (long)puVar12 + ((long)puVar8 - (long)puVar2);
    puVar12 = puVar5 + uVar7 * 8;
    puVar5 = puStack_78;
    if ((long)puVar8 - (long)puVar2 != 0) {
      lVar11 = 0;
      do {
        puVar5 = (undefined8 *)(lVar10 + lVar11);
        *puVar5 = &PTR_FUN_110bad578;
        uVar14 = *(undefined8 *)((long)puVar8 + lVar11 + 0x10);
        uVar13 = *(undefined8 *)((long)puVar8 + lVar11 + 8);
        uVar3 = *(undefined4 *)((long)puVar8 + lVar11 + 0x18);
        puVar5[4] = 0;
        *(undefined4 *)(puVar5 + 3) = uVar3;
        puVar5[2] = uVar14;
        puVar5[1] = uVar13;
        puVar5[5] = 0;
        puVar5[6] = 0;
        FUN_10a07b634();
        *puVar5 = &PTR_DAT_110badd90;
        puVar5[7] = *(undefined8 *)((long)puVar8 + lVar11 + 0x38);
        lVar11 = lVar11 + 0x40;
      } while ((undefined8 *)((long)puVar8 + lVar11) != puVar2);
      do {
        puVar5 = puVar8 + 8;
        (**(code **)*puVar8)(puVar8);
        puVar8 = puVar5;
      } while (puVar5 != puVar2);
      puVar8 = (undefined8 *)*plVar9;
      puVar12 = puStack_70;
      puVar5 = puStack_78;
    }
    *plVar9 = lVar10;
    plVar9[1] = (long)puVar5;
    puStack_70 = (undefined8 *)plVar9[2];
    plVar9[2] = (long)puVar12;
    puStack_88 = puVar8;
    puStack_80 = puVar8;
    puStack_78 = puVar8;
    FUN_10a1d75b0(&puStack_88);
  }
  plVar9[1] = (long)puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x78);
  return;
}



/* Entry: 10a1c82c4; end: 10a1c82cb;  */

void FUN_10a1c82c4(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x680);
  plVar9 = (long *)(param_1 + 0x608 + (long)*(int *)(param_1 + 0x63c) * 0x18);
  puVar5 = (undefined8 *)plVar9[1];
  if (puVar5 < (undefined8 *)plVar9[2]) {
    *puVar5 = &PTR_FUN_110bad578;
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 3) = uVar3;
    puVar5[2] = uVar14;
    puVar5[1] = uVar13;
    puVar5[5] = 0;
    puVar5[6] = 0;
    FUN_10a07b634();
    *puVar5 = &PTR_DAT_110badd90;
    puVar5[7] = *(undefined8 *)(param_2 + 0x38);
    puVar5 = puVar5 + 8;
    plVar9[1] = (long)puVar5;
  }
  else {
    lVar10 = (long)puVar5 - *plVar9;
    uVar1 = (lVar10 >> 6) + 1;
    if (uVar1 >> 0x3a != 0) {
      FUN_10a1d759c();
LAB_10a1c8260:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1c8264);
      (*pcVar4)();
    }
    uVar6 = plVar9[2] - *plVar9;
    uVar7 = (long)uVar6 >> 5;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar6) {
      uVar7 = 0x3ffffffffffffff;
    }
    plStack_68 = plVar9;
    if (uVar7 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      if (uVar7 >> 0x3a != 0) {
        func_0x000109ffded8();
        goto LAB_10a1c8260;
      }
      puVar5 = (undefined8 *)(uVar7 << 6);
      __Znwm();
    }
    puVar12 = (undefined8 *)((long)puVar5 + lVar10);
    *puVar12 = &PTR_FUN_110bad578;
    uVar13 = *(undefined8 *)(param_2 + 8);
    puVar12[2] = *(undefined8 *)(param_2 + 0x10);
    puVar12[1] = uVar13;
    *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(param_2 + 0x18);
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[4] = 0;
    puStack_88 = puVar5;
    puStack_80 = puVar12;
    puStack_78 = puVar12;
    puStack_70 = puVar5 + uVar7 * 8;
    FUN_10a07b634();
    *puVar12 = &PTR_DAT_110badd90;
    puVar12[7] = *(undefined8 *)(param_2 + 0x38);
    puStack_78 = puVar12 + 8;
    puVar8 = (undefined8 *)*plVar9;
    puVar2 = (undefined8 *)plVar9[1];
    lVar10 = (long)puVar12 + ((long)puVar8 - (long)puVar2);
    puVar12 = puVar5 + uVar7 * 8;
    puVar5 = puStack_78;
    if ((long)puVar8 - (long)puVar2 != 0) {
      lVar11 = 0;
      do {
        puVar5 = (undefined8 *)(lVar10 + lVar11);
        *puVar5 = &PTR_FUN_110bad578;
        uVar14 = *(undefined8 *)((long)puVar8 + lVar11 + 0x10);
        uVar13 = *(undefined8 *)((long)puVar8 + lVar11 + 8);
        uVar3 = *(undefined4 *)((long)puVar8 + lVar11 + 0x18);
        puVar5[4] = 0;
        *(undefined4 *)(puVar5 + 3) = uVar3;
        puVar5[2] = uVar14;
        puVar5[1] = uVar13;
        puVar5[5] = 0;
        puVar5[6] = 0;
        FUN_10a07b634();
        *puVar5 = &PTR_DAT_110badd90;
        puVar5[7] = *(undefined8 *)((long)puVar8 + lVar11 + 0x38);
        lVar11 = lVar11 + 0x40;
      } while ((undefined8 *)((long)puVar8 + lVar11) != puVar2);
      do {
        puVar5 = puVar8 + 8;
        (**(code **)*puVar8)(puVar8);
        puVar8 = puVar5;
      } while (puVar5 != puVar2);
      puVar8 = (undefined8 *)*plVar9;
      puVar12 = puStack_70;
      puVar5 = puStack_78;
    }
    *plVar9 = lVar10;
    plVar9[1] = (long)puVar5;
    puStack_70 = (undefined8 *)plVar9[2];
    plVar9[2] = (long)puVar12;
    puStack_88 = puVar8;
    puStack_80 = puVar8;
    puStack_78 = puVar8;
    FUN_10a1d75b0(&puStack_88);
  }
  plVar9[1] = (long)puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x680);
  return;
}



/* Entry: 10a1c82cc; end: 10a1c839f;  */

undefined8 * FUN_10a1c82cc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bad028;
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_10a1d7658(auStack_48,&uStack_31);
  FUN_10a1c83a0(param_1 + 3,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  return param_1;
}



/* Entry: 10a1c83a0; end: 10a1c850f;  */

undefined8 * FUN_10a1c83a0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a1c8510; end: 10a1c85a7;  */

void FUN_10a1c8510(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  iVar2 = 1 - *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar2;
  plVar4 = (long *)(param_1 + (long)iVar2 * 0x18);
  lVar1 = *plVar4;
  lVar3 = plVar4[1];
  while (lVar3 != lVar1) {
    FUN_10a1ce910(lVar3 + -0x18,*(undefined8 *)(lVar3 + -0x10));
    lVar3 = lVar3 + -0x18;
  }
  plVar4[1] = lVar1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a1c85a8; end: 10a1c864f;  */

void FUN_10a1c85a8(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  iVar2 = 1 - *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar2;
  plVar3 = (long *)(param_1 + (long)iVar2 * 0x18);
  puVar1 = (undefined8 *)*plVar3;
  puVar4 = (undefined8 *)plVar3[1];
  while (puVar4 != puVar1) {
    puVar4 = puVar4 + -7;
    (**(code **)*puVar4)(puVar4);
  }
  plVar3[1] = (long)puVar1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a1c8650; end: 10a1c86bb;  */

void FUN_10a1c8650(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  iVar1 = 1 - *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar1;
  puVar2 = (undefined8 *)(param_1 + (long)iVar1 * 0x18);
  FUN_10a1ce868(puVar2,*puVar2);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a1c86bc; end: 10a1c8763;  */

void FUN_10a1c86bc(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  iVar2 = 1 - *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar2;
  plVar3 = (long *)(param_1 + (long)iVar2 * 0x18);
  puVar1 = (undefined8 *)*plVar3;
  puVar4 = (undefined8 *)plVar3[1];
  while (puVar4 != puVar1) {
    puVar4 = puVar4 + -8;
    (**(code **)*puVar4)(puVar4);
  }
  plVar3[1] = (long)puVar1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a1c8764; end: 10a1c880b;  */

void FUN_10a1c8764(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  iVar2 = 1 - *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar2;
  plVar3 = (long *)(param_1 + (long)iVar2 * 0x18);
  puVar1 = (undefined8 *)*plVar3;
  puVar4 = (undefined8 *)plVar3[1];
  while (puVar4 != puVar1) {
    puVar4 = puVar4 + -8;
    (**(code **)*puVar4)(puVar4);
  }
  plVar3[1] = (long)puVar1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a1c880c; end: 10a1c88b3;  */

void FUN_10a1c880c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  iVar2 = 1 - *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar2;
  plVar3 = (long *)(param_1 + (long)iVar2 * 0x18);
  puVar1 = (undefined8 *)*plVar3;
  puVar4 = (undefined8 *)plVar3[1];
  while (puVar4 != puVar1) {
    puVar4 = puVar4 + -9;
    (**(code **)*puVar4)(puVar4);
  }
  plVar3[1] = (long)puVar1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a1c88b4; end: 10a1c895b;  */

void FUN_10a1c88b4(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  iVar2 = 1 - *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar2;
  plVar3 = (long *)(param_1 + (long)iVar2 * 0x18);
  puVar1 = (undefined8 *)*plVar3;
  puVar4 = (undefined8 *)plVar3[1];
  while (puVar4 != puVar1) {
    puVar4 = puVar4 + -7;
    (**(code **)*puVar4)(puVar4);
  }
  plVar3[1] = (long)puVar1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a1c895c; end: 10a1c8a03;  */

void FUN_10a1c895c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  iVar2 = 1 - *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar2;
  plVar3 = (long *)(param_1 + (long)iVar2 * 0x18);
  puVar1 = (undefined8 *)*plVar3;
  puVar4 = (undefined8 *)plVar3[1];
  while (puVar4 != puVar1) {
    puVar4 = puVar4 + -7;
    (**(code **)*puVar4)(puVar4);
  }
  plVar3[1] = (long)puVar1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a1c8a04; end: 10a1c8aab;  */

void FUN_10a1c8a04(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  __ZNSt3__15mutex4lockEv(param_1 + 0x78);
  iVar2 = 1 - *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar2;
  plVar3 = (long *)(param_1 + (long)iVar2 * 0x18);
  puVar1 = (undefined8 *)*plVar3;
  puVar4 = (undefined8 *)plVar3[1];
  while (puVar4 != puVar1) {
    puVar4 = puVar4 + -8;
    (**(code **)*puVar4)(puVar4);
  }
  plVar3[1] = (long)puVar1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x38);
  return;
}



/* Entry: 10a1c8aac; end: 10a1c8c0f;  */

void FUN_10a1c8aac(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  lStack_48 = *param_2;
  puStack_40 = (undefined8 *)param_2[1];
  puStack_38 = (undefined8 *)param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (puStack_40 < puStack_38) {
      puStack_40[1] = 0x3f8000003f800000;
      *puStack_40 = 0;
      *(undefined4 *)(puStack_40 + 2) = *(undefined4 *)(param_1 + 0x2c);
      puStack_40 = (undefined8 *)((long)puStack_40 + 0x14);
    }
    else {
      lVar9 = (long)puStack_40 - lStack_48;
      uVar7 = (lVar9 >> 2) * -0x3333333333333333 + 1;
      if (0xccccccccccccccc < uVar7) {
        FUN_10a1ce1ec();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1c8bf4);
        (*pcVar4)();
      }
      lVar6 = (long)puStack_38 - lStack_48 >> 2;
      uVar8 = lVar6 * -0x6666666666666666;
      if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
        uVar8 = uVar7;
      }
      if (0x666666666666665 < (ulong)(lVar6 * -0x3333333333333333)) {
        uVar8 = 0xccccccccccccccc;
      }
      plVar5 = &lStack_48;
      FUN_10a1ce200();
      puVar2 = (undefined8 *)((long)plVar5 + lVar9);
      puVar10 = (undefined8 *)((long)plVar5 + uVar8 * 0x14);
      puVar2[1] = 0x3f8000003f800000;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x2c);
      puVar1 = (undefined8 *)((long)puVar2 + 0x14);
      lVar9 = (long)puVar2 - ((long)puStack_40 - lStack_48);
      _memcpy(lVar9);
      bVar3 = lStack_48 != 0;
      lStack_48 = lVar9;
      puStack_40 = puVar1;
      puStack_38 = puVar10;
      if (bVar3) {
        __ZdlPv();
        puStack_40 = puVar1;
      }
    }
  }
  FUN_10a1c69e0(*(undefined8 *)(param_1 + 0x18),&lStack_48);
  if (lStack_48 != 0) {
    puStack_40 = (undefined8 *)lStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a1c8c10; end: 10a1c9287;  */

/* WARNING: Removing unreachable block (ram,0x00010a1c8ee8) */

void FUN_10a1c8c10(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 ***pppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *****pppppuVar10;
  bool bVar11;
  undefined8 ****ppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  ulong uVar17;
  undefined8 *****pppppuVar18;
  long lVar19;
  float fVar20;
  undefined8 ***pppuVar21;
  undefined8 **ppuVar22;
  undefined8 ***pppuVar23;
  undefined8 ***pppuVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 **ppuStack_2bc;
  undefined8 **ppuStack_2b4;
  undefined8 **ppuStack_2ac;
  undefined8 **ppuStack_2a4;
  undefined8 **ppuStack_29c;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 **ppuStack_278;
  ulong uStack_270;
  undefined8 ****ppppuStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined8 *puStack_248;
  long lStack_240;
  undefined8 ****appppuStack_238 [2];
  char cStack_221;
  undefined8 ***pppuStack_220;
  undefined8 ***pppuStack_218;
  undefined8 ***pppuStack_210;
  undefined8 **ppuStack_200;
  undefined8 **ppuStack_1f8;
  undefined8 **ppuStack_1f0;
  undefined8 ****ppppuStack_1e0;
  ulong uStack_1d8;
  byte bStack_1c9;
  undefined8 ****ppppuStack_1c8;
  undefined8 ****ppppuStack_1c0;
  long lStack_1b8;
  undefined8 ****ppppuStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  undefined1 uStack_191;
  undefined8 uStack_190;
  undefined8 ***apppuStack_188 [2];
  char acStack_171 [257];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = "true";
  if (*(char *)(param_2 + 0x28) == '\0') {
    pcVar2 = "false";
  }
  func_0x000107c2b054(&ppppuStack_1b0,pcVar2);
  uStack_190 = (undefined8 ****)((ulong)uStack_190._4_4_ << 0x20);
  func_0x000107c2b054(apppuStack_188,&DAT_10f684ec4);
  acStack_171[1] = '\x01';
  acStack_171[2] = '\0';
  acStack_171[3] = '\0';
  acStack_171[4] = '\0';
  func_0x000107c2b054(acStack_171 + 9,&DAT_10f643a10);
  acStack_171[0x21] = '\x02';
  acStack_171[0x22] = '\0';
  acStack_171[0x23] = '\0';
  acStack_171[0x24] = '\0';
  func_0x000107c2b054(acStack_171 + 0x29,&DAT_10f3401ca);
  acStack_171[0x41] = '\x04';
  acStack_171[0x42] = '\0';
  acStack_171[0x43] = '\0';
  acStack_171[0x44] = '\0';
  func_0x000107c2b054(acStack_171 + 0x49,&UNK_10f643a16);
  acStack_171[0x61] = '\b';
  acStack_171[0x62] = '\0';
  acStack_171[99] = '\0';
  acStack_171[100] = '\0';
  func_0x000107c2b054(acStack_171 + 0x69,&DAT_10f5a3717);
  acStack_171[0x81] = '\x10';
  acStack_171[0x82] = '\0';
  acStack_171[0x83] = '\0';
  acStack_171[0x84] = '\0';
  func_0x000107c2b054(acStack_171 + 0x89,&UNK_10f643a20);
  acStack_171[0xa1] = ' ';
  acStack_171[0xa2] = '\0';
  acStack_171[0xa3] = '\0';
  acStack_171[0xa4] = '\0';
  func_0x000107c2b054(acStack_171 + 0xa9,&UNK_10f643a24);
  acStack_171[0xc1] = '@';
  acStack_171[0xc2] = '\0';
  acStack_171[0xc3] = '\0';
  acStack_171[0xc4] = '\0';
  func_0x000107c2b054(acStack_171 + 0xc9,&UNK_10f643a2a);
  acStack_171[0xe1] = -0x80;
  acStack_171[0xe2] = '\0';
  acStack_171[0xe3] = '\0';
  acStack_171[0xe4] = '\0';
  puStack_248 = param_1;
  lStack_240 = param_2;
  func_0x000107c2b054(acStack_171 + 0xe9,&UNK_10f643a31);
  lVar19 = 0;
  ppppuStack_1c0 = (undefined8 *****)0x0;
  lStack_1b8 = 0;
  ppppuStack_1c8 = &ppppuStack_1c0;
  do {
    uVar4 = *(uint *)((long)&uStack_190 + lVar19);
    pppppuVar16 = &ppppuStack_1c0;
    pppppuVar13 = &ppppuStack_1c0;
    pppppuVar18 = &ppppuStack_1c0;
    if ((undefined8 *****)ppppuStack_1c8 == &ppppuStack_1c0) {
LAB_10a1c8e30:
      pppppuVar15 = &ppppuStack_1c8;
      if ((undefined8 *****)ppppuStack_1c0 != (undefined8 *****)0x0) {
        pppppuVar13 = pppppuVar16 + 1;
        pppppuVar15 = pppppuVar16;
        pppppuVar18 = pppppuVar16;
      }
      if (pppppuVar15[1] == (undefined8 ****)0x0) goto LAB_10a1c8e4c;
    }
    else {
      pppppuVar15 = &ppppuStack_1c0;
      pppppuVar10 = (undefined8 *****)ppppuStack_1c0;
      if ((undefined8 *****)ppppuStack_1c0 == (undefined8 *****)0x0) {
        do {
          pppppuVar16 = (undefined8 *****)pppppuVar15[2];
          bVar11 = (undefined8 *****)*pppppuVar16 == pppppuVar15;
          pppppuVar15 = pppppuVar16;
        } while (bVar11);
        if (*(uint *)(pppppuVar16 + 4) < uVar4) goto LAB_10a1c8e30;
      }
      else {
        do {
          pppppuVar16 = pppppuVar10;
          pppppuVar10 = (undefined8 *****)pppppuVar16[1];
        } while ((undefined8 *****)pppppuVar16[1] != (undefined8 *****)0x0);
        pppppuVar15 = (undefined8 *****)ppppuStack_1c0;
        if (*(uint *)(pppppuVar16 + 4) < uVar4) goto LAB_10a1c8e30;
        do {
          while (pppppuVar18 = pppppuVar15, uVar4 < *(uint *)(pppppuVar18 + 4)) {
            pppppuVar15 = (undefined8 *****)*pppppuVar18;
            pppppuVar13 = pppppuVar18;
            if ((undefined8 *****)*pppppuVar18 == (undefined8 *****)0x0) goto LAB_10a1c8e4c;
          }
          if (uVar4 <= *(uint *)(pppppuVar18 + 4)) goto LAB_10a1c8ebc;
          pppppuVar15 = (undefined8 *****)pppppuVar18[1];
        } while ((undefined8 *****)pppppuVar18[1] != (undefined8 *****)0x0);
        pppppuVar13 = pppppuVar18 + 1;
      }
LAB_10a1c8e4c:
      ppppuVar12 = (undefined8 ****)0x40;
      __Znwm();
      *(uint *)(ppppuVar12 + 4) = uVar4;
      if (acStack_171[lVar19] < '\0') {
        func_0x000107c3192c(ppppuVar12 + 5,*(undefined8 *)((long)apppuStack_188 + lVar19),
                            *(undefined8 *)((long)apppuStack_188 + lVar19 + 8));
      }
      else {
        pppuVar21 = *(undefined8 ****)((long)apppuStack_188 + lVar19);
        ppppuVar12[6] = *(undefined8 ****)((long)apppuStack_188 + lVar19 + 8);
        ppppuVar12[5] = pppuVar21;
        ppppuVar12[7] = *(undefined8 ****)(&stack0xfffffffffffffe88 + lVar19);
      }
      *ppppuVar12 = (undefined8 ***)0x0;
      ppppuVar12[1] = (undefined8 ***)0x0;
      ppppuVar12[2] = pppppuVar18;
      *pppppuVar13 = ppppuVar12;
      if ((undefined8 *****)*ppppuStack_1c8 != (undefined8 *****)0x0) {
        ppppuVar12 = *pppppuVar13;
        ppppuStack_1c8 = (undefined8 ****)*ppppuStack_1c8;
      }
      func_0x000107c2b058(ppppuStack_1c0,ppppuVar12);
      lStack_1b8 = lStack_1b8 + 1;
    }
LAB_10a1c8ebc:
    lVar9 = lStack_240;
    lVar19 = lVar19 + 0x20;
  } while (lVar19 != 0x120);
  lVar19 = 0x120;
  do {
    lVar19 = lVar19 + -0x20;
  } while (lVar19 != 0);
  if ((undefined8 *****)ppppuStack_1c0 != (undefined8 *****)0x0) {
    pppppuVar13 = &ppppuStack_1c0;
    pppppuVar18 = (undefined8 *****)ppppuStack_1c0;
    do {
      lVar19 = 8;
      if (*(uint *)(lStack_240 + 0x2c) <= *(uint *)(pppppuVar18 + 4)) {
        lVar19 = 0;
        pppppuVar13 = pppppuVar18;
      }
      pppppuVar18 = *(undefined8 ******)((long)pppppuVar18 + lVar19);
    } while (pppppuVar18 != (undefined8 *****)0x0);
    if ((pppppuVar13 != &ppppuStack_1c0) &&
       (*(uint *)(pppppuVar13 + 4) <= *(uint *)(lStack_240 + 0x2c))) {
      if (*(char *)((long)pppppuVar13 + 0x3f) < '\0') {
        func_0x000107c3192c(&uStack_190,pppppuVar13[5],pppppuVar13[6]);
      }
      else {
        apppuStack_188[0] = pppppuVar13[6];
        uStack_190 = pppppuVar13[5];
        apppuStack_188[1] = pppppuVar13[7];
      }
      goto LAB_10a1c8f48;
    }
  }
  func_0x000107c2b054(&uStack_190,&UNK_10f643a3b);
LAB_10a1c8f48:
  func_0x00010989f98c(&ppppuStack_1e0,lVar9);
  uVar3 = uStack_1d8;
  if (-1 < (char)bStack_1c9) {
    uVar3 = (ulong)bStack_1c9;
  }
  FUN_10a003c90(appppuStack_238,uVar3 + 0x13,&uStack_191);
  pppppuVar13 = (undefined8 *****)appppuStack_238[0];
  if (-1 < cStack_221) {
    pppppuVar13 = appppuStack_238;
  }
  if (uVar3 != 0) {
    pppppuVar18 = (undefined8 *****)ppppuStack_1e0;
    if (-1 < (char)bStack_1c9) {
      pppppuVar18 = &ppppuStack_1e0;
    }
    _memmove(pppppuVar13,pppppuVar18,uVar3);
  }
  puVar1 = (undefined8 *)((long)pppppuVar13 + uVar3);
  puVar1[1] = 0x6e696b636f6c4268;
  *puVar1 = 0x63756f5473692020;
  *(undefined4 *)((long)puVar1 + 0xf) = 0x203a676e;
  *(undefined1 *)((long)puVar1 + 0x13) = 0;
  pppppuVar13 = (undefined8 *****)ppppuStack_1b0;
  if (-1 < (char)bStack_199) {
    uStack_1a8 = (ulong)bStack_199;
    pppppuVar13 = &ppppuStack_1b0;
  }
  pppppuVar18 = appppuStack_238;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar18,pppppuVar13,uStack_1a8);
  pppuStack_218 = pppppuVar18[1];
  pppuStack_220 = *pppppuVar18;
  pppuStack_210 = pppppuVar18[2];
  pppppuVar18[1] = (undefined8 ****)0x0;
  pppppuVar18[2] = (undefined8 ****)0x0;
  *pppppuVar18 = (undefined8 ****)0x0;
  ppppuVar12 = &pppuStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar12,&UNK_10f643a63,0x1e);
  puVar1 = puStack_248;
  ppuStack_1f8 = ppppuVar12[1];
  ppuStack_200 = *ppppuVar12;
  ppuStack_1f0 = ppppuVar12[2];
  ppppuVar12[1] = (undefined8 ***)0x0;
  ppppuVar12[2] = (undefined8 ***)0x0;
  *ppppuVar12 = (undefined8 ***)0x0;
  ppppuVar12 = (undefined8 ****)apppuStack_188[0];
  ppppuVar14 = uStack_190;
  if (-1 < (long)apppuStack_188[1]) {
    ppppuVar12 = (undefined8 ****)((ulong)apppuStack_188[1] >> 0x38);
    ppppuVar14 = (undefined8 ****)&uStack_190;
  }
  pppuVar21 = &ppuStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar21,ppppuVar14,ppppuVar12);
  ppuVar22 = *pppuVar21;
  puVar1[1] = pppuVar21[1];
  *puVar1 = ppuVar22;
  puVar1[2] = pppuVar21[2];
  pppuVar21[1] = (undefined8 **)0x0;
  pppuVar21[2] = (undefined8 **)0x0;
  *pppuVar21 = (undefined8 **)0x0;
  if ((long)ppuStack_1f0 < 0) {
    __ZdlPv(ppuStack_200);
  }
  if ((long)pppuStack_210 < 0) {
    __ZdlPv(pppuStack_220);
  }
  if (cStack_221 < '\0') {
    __ZdlPv(appppuStack_238[0]);
  }
  if ((char)bStack_1c9 < '\0') {
    __ZdlPv(ppppuStack_1e0);
  }
  if ((long)apppuStack_188[1] < 0) {
    __ZdlPv(uStack_190);
  }
  pppppuVar13 = (undefined8 *****)ppppuStack_1c0;
  FUN_10a1d7918();
  if ((char)bStack_199 < '\0') {
    pppppuVar13 = (undefined8 *****)ppppuStack_1b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a1d7918(ppppuStack_1c0);
  if ((char)bStack_199 < '\0') {
    __ZdlPv(ppppuStack_1b0);
  }
  pppppuVar18 = pppppuVar13;
  __Unwind_Resume();
  pcStack_258 = FUN_10a1c9288;
  uVar17 = 0;
  fVar20 = *(float *)ppppuVar14;
  fVar27 = *(float *)(ppppuVar14 + 1);
  fVar26 = *(float *)(ppppuVar14 + 2);
  fVar25 = *(float *)(ppppuVar14 + 3);
  do {
    fVar28 = (float)(uVar17 & 0xffffffff) * 0.1;
    *(float *)((long)&ppuStack_2bc + uVar17 * 4) =
         fVar20 + fVar28 * (fVar20 * -3.0 + fVar27 * 3.0 +
                           fVar28 * (fVar27 * -6.0 + fVar20 * 3.0 + fVar26 * 3.0 +
                                    fVar28 * ((fVar25 - fVar20) + fVar27 * 3.0 + fVar26 * -3.0)));
    uVar17 = uVar17 + 1;
  } while (uVar17 != 0xb);
  ppuStack_278 = ppppuVar14[3];
  uStack_288 = SUB84(ppppuVar14[1],0);
  uStack_284 = (undefined4)((ulong)ppppuVar14[1] >> 0x20);
  uVar6 = uStack_284;
  uStack_290 = SUB84(*ppppuVar14,0);
  uStack_28c = (undefined4)((ulong)*ppppuVar14 >> 0x20);
  uStack_280 = SUB84(ppppuVar14[2],0);
  uVar7 = uStack_280;
  uStack_27c = (undefined4)((ulong)ppppuVar14[2] >> 0x20);
  uVar8 = uStack_27c;
  pppuVar21 = (undefined8 ***)CONCAT44(uStack_290,uStack_294);
  pppuVar5 = (undefined8 ***)CONCAT44(uStack_288,uStack_28c);
  uStack_2ec = SUB84(ppuStack_278,0);
  uStack_2e8 = (undefined4)((ulong)ppuStack_278 >> 0x20);
  uStack_2dc = SUB84(ppppuVar14[1],0);
  uStack_2d8 = (undefined4)((ulong)ppppuVar14[1] >> 0x20);
  uStack_2e4 = SUB84(*ppppuVar14,0);
  uStack_2e0 = (undefined4)((ulong)*ppppuVar14 >> 0x20);
  pppuVar24 = ppppuVar14[3];
  pppuVar23 = ppppuVar14[2];
  uStack_2d4 = SUB84(pppuVar23,0);
  *pppppuVar18 = (undefined8 ****)FUN_10a1d7978;
  pppppuVar18[1] = (undefined8 ****)&PTR_FUN_110bade30;
  ppppuVar12 = (undefined8 ****)0x6c;
  uStack_270 = uVar3;
  ppppuStack_268 = pppppuVar13;
  puStack_260 = &stack0xfffffffffffffff0;
  __Znwm();
  ppppuVar12[9] = (undefined8 ***)CONCAT44(uStack_2e4,uStack_2e8);
  ppppuVar12[8] = (undefined8 ***)CONCAT44(uStack_2ec,uVar8);
  ppppuVar12[0xb] = (undefined8 ***)CONCAT44(uStack_2d4,uStack_2d8);
  ppppuVar12[10] = (undefined8 ***)CONCAT44(uStack_2dc,uStack_2e0);
  *(undefined8 ****)((long)ppppuVar12 + 100) = pppuVar24;
  *(undefined8 ****)((long)ppppuVar12 + 0x5c) = pppuVar23;
  ppppuVar12[1] = (undefined8 ***)ppuStack_2b4;
  *ppppuVar12 = (undefined8 ***)ppuStack_2bc;
  ppppuVar12[3] = (undefined8 ***)ppuStack_2a4;
  ppppuVar12[2] = (undefined8 ***)ppuStack_2ac;
  ppppuVar12[5] = pppuVar21;
  ppppuVar12[4] = (undefined8 ***)ppuStack_29c;
  ppppuVar12[7] = (undefined8 ***)CONCAT44(uVar7,uVar6);
  ppppuVar12[6] = pppuVar5;
  pppppuVar18[2] = ppppuVar12;
  return;
}



/* Entry: 10a1c9288; end: 10a1c938f;  */

void FUN_10a1c9288(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uVar7 = 0;
  fVar8 = *param_2;
  fVar13 = param_2[2];
  fVar12 = param_2[4];
  fVar11 = param_2[6];
  do {
    fVar14 = (float)(uVar7 & 0xffffffff) * 0.1;
    *(float *)((long)&uStack_6c + uVar7 * 4) =
         fVar8 + fVar14 * (fVar8 * -3.0 + fVar13 * 3.0 +
                          fVar14 * (fVar13 * -6.0 + fVar8 * 3.0 + fVar12 * 3.0 +
                                   fVar14 * ((fVar11 - fVar8) + fVar13 * 3.0 + fVar12 * -3.0)));
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0xb);
  uStack_28 = *(undefined8 *)(param_2 + 6);
  uStack_38 = (undefined4)*(undefined8 *)(param_2 + 2);
  uStack_34 = (undefined4)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
  uVar3 = uStack_34;
  uStack_40 = (undefined4)*(undefined8 *)param_2;
  uStack_3c = (undefined4)((ulong)*(undefined8 *)param_2 >> 0x20);
  uStack_30 = (undefined4)*(undefined8 *)(param_2 + 4);
  uVar4 = uStack_30;
  uStack_2c = (undefined4)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  uVar5 = uStack_2c;
  uVar1 = CONCAT44(uStack_40,uStack_44);
  uVar2 = CONCAT44(uStack_38,uStack_3c);
  uStack_9c = (undefined4)uStack_28;
  uStack_98 = (undefined4)((ulong)uStack_28 >> 0x20);
  uStack_8c = (undefined4)*(undefined8 *)(param_2 + 2);
  uStack_88 = (undefined4)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
  uStack_94 = (undefined4)*(undefined8 *)param_2;
  uStack_90 = (undefined4)((ulong)*(undefined8 *)param_2 >> 0x20);
  uVar10 = *(undefined8 *)(param_2 + 6);
  uVar9 = *(undefined8 *)(param_2 + 4);
  uStack_84 = (undefined4)uVar9;
  *param_1 = FUN_10a1d7978;
  param_1[1] = &PTR_FUN_110bade30;
  puVar6 = (undefined8 *)0x6c;
  __Znwm();
  puVar6[9] = CONCAT44(uStack_94,uStack_98);
  puVar6[8] = CONCAT44(uStack_9c,uVar5);
  puVar6[0xb] = CONCAT44(uStack_84,uStack_88);
  puVar6[10] = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)((long)puVar6 + 100) = uVar10;
  *(undefined8 *)((long)puVar6 + 0x5c) = uVar9;
  puVar6[1] = uStack_64;
  *puVar6 = uStack_6c;
  puVar6[3] = uStack_54;
  puVar6[2] = uStack_5c;
  puVar6[5] = uVar1;
  puVar6[4] = uStack_4c;
  puVar6[7] = CONCAT44(uVar4,uVar3);
  puVar6[6] = uVar2;
  param_1[2] = puVar6;
  return;
}



/* Entry: 10a1c9390; end: 10a1c990f;  */

void FUN_10a1c9390(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f643a82;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f642cb1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
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
  puStack_98 = &UNK_10f643a8e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f642cb1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a1c956c(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f643a94;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f642cb1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a1c956c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f643a99;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f642cb1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a1c956c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f480150;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f642cb1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a1c956c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f643aa0;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f642cb1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a1c956c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a1c9910; end: 10a1c9c17;  */

mach_header * FUN_10a1c9910(ulong param_1,mach_header *param_2,mach_header *param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  mach_header *pmVar6;
  undefined *puVar7;
  dword dVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  float *pfVar15;
  ulong uVar16;
  long lVar17;
  float *pfVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  mach_header mStack_a8;
  code *pcStack_88;
  mach_header mStack_80;
  long lStack_48;
  ulong uVar14;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_1;
  if (*(float **)&param_2->cpusubtype == *(float **)&param_2->ncmds) {
LAB_10a1c9bb0:
    fVar19 = (float)uVar9;
    pmVar6 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_2;
    }
  }
  else {
    fVar19 = **(float **)&param_2->cpusubtype;
    uVar9 = (ulong)(uint)fVar19;
    fVar21 = (float)param_1;
    if ((fVar21 <= fVar19) ||
       (fVar19 = (*(float **)&param_2->ncmds)[-9], uVar9 = (ulong)(uint)fVar19, fVar19 <= fVar21))
    goto LAB_10a1c9bb0;
    pmVar6 = param_2;
    FUN_10a1c9c18(param_1);
    lVar11 = *(long *)&param_2->cpusubtype;
    uVar9 = (*(long *)&param_2->ncmds - lVar11 >> 2) * -0x71c71c71c71c71c7;
    iVar5 = (int)pmVar6;
    if ((uVar9 < (ulong)(long)iVar5 || uVar9 - (long)iVar5 == 0) ||
       (uVar9 < (ulong)((long)pmVar6 >> 0x20) || uVar9 - ((long)pmVar6 >> 0x20) == 0)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1c9be8);
      (*pcVar3)();
    }
    puVar10 = (undefined8 *)(lVar11 + (long)iVar5 * 0x24);
    uVar24 = *puVar10;
    fVar23 = (float)uVar24;
    uVar9 = (ulong)(uint)ABS(fVar23 - fVar21);
    fVar19 = 1e-05;
    param_2 = pmVar6;
    if (ABS(fVar23 - fVar21) < 1e-05) goto LAB_10a1c9bb0;
    pfVar18 = (float *)(lVar11 + (long)(int)((ulong)pmVar6 >> 0x20) * 0x24);
    fVar26 = pfVar18[1];
    iVar5 = *(int *)((long)puVar10 + 0x1c);
    if (iVar5 - 1U < 2 || iVar5 == 4) {
      iVar5 = *(int *)(puVar10 + 4);
      if (iVar5 < 3) {
        if (iVar5 == 0) goto LAB_10a1c99fc;
        if (iVar5 == 1) {
          mStack_a8._8_8_ = puVar10[2];
          mStack_a8.ncmds = (dword)pfVar18[2];
          mStack_a8.sizeofcmds = (dword)pfVar18[3];
          mStack_a8.flags = (dword)*pfVar18;
        }
        else {
          if (iVar5 != 2) goto LAB_10a1c9bb0;
          fVar21 = *(float *)(puVar10 + 2);
          fVar22 = *(float *)((long)puVar10 + 0x14);
          _atanf();
          ___sincosf_stret();
          fVar25 = fVar19 * fVar21;
          fVar28 = pfVar18[2];
          fVar27 = pfVar18[3];
          _atanf();
          ___sincosf_stret();
          mStack_a8.cpusubtype = (dword)(fVar23 + fVar25);
          mStack_a8.filetype = (dword)(SUB84(uVar24,4) + fVar22 * fVar21);
          mStack_a8.flags = (dword)*pfVar18;
          mStack_a8.ncmds = (dword)((float)mStack_a8.flags - fVar28 * fVar19);
          mStack_a8.sizeofcmds = (dword)(fVar26 - fVar28 * fVar27);
        }
        mStack_a8.reserved = (dword)fVar26;
        param_3 = &mStack_a8;
        mStack_a8._0_8_ = uVar24;
        FUN_10a1c9288(&pcStack_88);
        (*pcStack_88)(&pcStack_88);
      }
      else {
        if (3 < iVar5 - 3U) goto LAB_10a1c9bb0;
LAB_10a1c99fc:
        fVar27 = *pfVar18;
        fVar26 = *(float *)(puVar10 + 2);
        fVar22 = pfVar18[2];
        fVar19 = 1.0;
        if (fVar26 <= 1.0) {
          fVar19 = fVar26;
        }
        fVar25 = 0.0;
        if (0.0 <= fVar26) {
          fVar25 = fVar19;
        }
        fVar19 = 1.0;
        if (fVar22 <= 1.0) {
          fVar19 = fVar22;
        }
        fVar26 = 0.0;
        if (0.0 <= fVar22) {
          fVar26 = fVar19;
        }
        fVar19 = ABS(fVar26 - pfVar18[3]);
        bVar4 = false;
        if ((ABS(fVar25 - *(float *)((long)puVar10 + 0x14)) < 1.1920929e-07) &&
           (bVar4 = false, !NAN(fVar19))) {
          bVar4 = fVar19 < 1.1920929e-07;
        }
        if (bVar4) {
          pcStack_88 = FUN_10a1d7960;
          mStack_80._0_8_ = &PTR_DAT_110bade18;
        }
        else {
          mStack_a8.magic = 0;
          mStack_a8.cputype = 0;
          mStack_a8.filetype = (dword)*(float *)((long)puVar10 + 0x14);
          mStack_a8.cpusubtype = (dword)fVar25;
          mStack_a8._24_8_ = NEON_fmov(0x3f800000,4);
          param_3 = &mStack_a8;
          mStack_a8.ncmds = (dword)fVar26;
          mStack_a8.sizeofcmds = (dword)pfVar18[3];
          FUN_10a1c9288(&pcStack_88);
        }
        param_1 = (ulong)(uint)((fVar21 - fVar23) / (fVar27 - fVar23));
        (*pcStack_88)(&pcStack_88);
      }
      param_2 = &mStack_80;
      (**(code **)mStack_80._0_8_)();
      uVar9 = param_1;
      goto LAB_10a1c9bb0;
    }
    if (iVar5 != 3) goto LAB_10a1c9bb0;
    fVar19 = *pfVar18;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return pmVar6;
    }
  }
  ___stack_chk_fail();
  (**(code **)mStack_80._0_8_)(&mStack_80);
  __Unwind_Resume();
  if (fVar19 < 0.0) {
    FUN_10a00946c(&UNK_10f643d6d);
LAB_10a1c9c78:
    puVar7 = &UNK_10f643d8a;
    FUN_10a00946c();
    pmVar6 = (mach_header *)(puVar7 + 8);
    if (pmVar6 != param_3) {
      FUN_10a1d7dd0(pmVar6,*(long *)param_3,*(long *)&param_3->cpusubtype,
                    (*(long *)&param_3->cpusubtype - *(long *)param_3 >> 2) * -0x71c71c71c71c71c7);
    }
    if (*(undefined4 **)(puVar7 + 8) == *(undefined4 **)(puVar7 + 0x10)) {
      *(undefined4 *)(puVar7 + 0x20) = 0;
      uVar20 = 0;
    }
    else {
      *(undefined4 *)(puVar7 + 0x20) = (*(undefined4 **)(puVar7 + 0x10))[-9];
      uVar20 = **(undefined4 **)(puVar7 + 8);
    }
    *(undefined4 *)(puVar7 + 0x24) = 0;
    *(undefined4 *)(puVar7 + 0x28) = uVar20;
    *(undefined4 *)(puVar7 + 0x50) = 0;
    return pmVar6;
  }
  lVar11 = *(long *)&pmVar6->ncmds - *(long *)&pmVar6->cpusubtype;
  if ((ulong)((lVar11 >> 2) * -0x71c71c71c71c71c7) < 2) goto LAB_10a1c9c78;
  if (lVar11 == 0x48) {
    return &MACH_HEADER;
  }
  dVar8 = pmVar6[2].ncmds;
  if (dVar8 == 0) {
    fVar21 = (float)(ulong)((*(long *)&pmVar6->ncmds - *(long *)&pmVar6->cpusubtype >> 2) *
                           -0x71c71c71c71c71c7);
    _logf();
    dVar8 = (dword)fVar21;
    if ((int)dVar8 < 2) {
      dVar8 = 1;
    }
    pmVar6[2].ncmds = dVar8;
  }
  uVar13 = pmVar6[1].cputype;
  uVar9 = (ulong)uVar13;
  if ((float)pmVar6[1].cpusubtype <= fVar19) {
    uVar9 = (long)(int)uVar13 + 1;
    pfVar18 = *(float **)&pmVar6->cpusubtype;
    lVar11 = *(long *)&pmVar6->ncmds;
    uVar12 = (lVar11 - (long)pfVar18 >> 2) * -0x71c71c71c71c71c7;
    uVar2 = (int)uVar12 - 1;
    uVar16 = (ulong)uVar2;
    uVar13 = (int)uVar9 + dVar8;
    if ((int)uVar2 <= (int)uVar13) {
      uVar13 = uVar2;
    }
    uVar14 = uVar9;
    if ((int)uVar9 < (int)uVar13) {
      pfVar15 = pfVar18 + uVar9 * 9;
      lVar17 = 0;
      if (uVar9 <= uVar12) {
        lVar17 = uVar12 - uVar9;
      }
      do {
        if (lVar17 == 0) goto LAB_10a1d7dcc;
        uVar14 = uVar9;
        if (fVar19 < *pfVar15) break;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        uVar14 = (ulong)uVar13;
        pfVar15 = pfVar15 + 9;
        lVar17 = lVar17 + -1;
      } while (uVar13 != uVar1);
    }
    uVar13 = (uint)uVar14;
    if (uVar13 != uVar2) {
      if (uVar12 < (ulong)(long)(int)uVar13 || uVar12 - (long)(int)uVar13 == 0) goto LAB_10a1d7dcc;
      uVar16 = uVar14;
      if (pfVar18[(long)(int)uVar13 * 9] <= fVar19) goto LAB_10a1d7d20;
    }
  }
  else {
    uVar2 = uVar13 - dVar8 & ((int)(uVar13 - dVar8) >> 0x1f ^ 0xffffffffU);
    uVar16 = uVar9;
    if ((int)uVar2 < (int)uVar13) {
      uVar12 = (*(long *)&pmVar6->ncmds - *(long *)&pmVar6->cpusubtype >> 2) * -0x71c71c71c71c71c7;
      pfVar18 = (float *)(*(long *)&pmVar6->cpusubtype + (ulong)uVar13 * 0x24);
      do {
        if (uVar12 < uVar9 || uVar12 - uVar9 == 0) goto LAB_10a1d7dcc;
        uVar16 = uVar9;
      } while ((fVar19 <= *pfVar18) &&
              (uVar9 = uVar9 - 1, uVar16 = (ulong)uVar2, pfVar18 = pfVar18 + -9,
              (long)(ulong)uVar2 < (long)uVar9));
    }
    iVar5 = (int)uVar16;
    if (iVar5 == 0) {
      pfVar18 = *(float **)&pmVar6->cpusubtype;
      lVar11._0_4_ = pmVar6->ncmds;
      lVar11._4_4_ = pmVar6->sizeofcmds;
    }
    else {
      pfVar18 = *(float **)&pmVar6->cpusubtype;
      lVar11 = *(long *)&pmVar6->ncmds;
      uVar9 = (lVar11 - (long)pfVar18 >> 2) * -0x71c71c71c71c71c7;
      if (uVar9 < (ulong)(long)iVar5 || uVar9 - (long)iVar5 == 0) goto LAB_10a1d7dcc;
      if (fVar19 <= pfVar18[(long)iVar5 * 9]) {
LAB_10a1d7d20:
        pmVar6[1].filetype = (dword)fVar19;
        lVar17 = lVar11 + (-0x24 - (long)pfVar18);
        pfVar15 = pfVar18;
        if (lVar17 != 0) {
          uVar9 = (lVar17 >> 2) * -0x71c71c71c71c71c7;
          do {
            uVar12 = uVar9 >> 1;
            uVar16 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
            uVar9 = uVar12;
            if (pfVar15[uVar12 * 9] <= fVar19) {
              uVar9 = uVar16;
              pfVar15 = pfVar15 + uVar12 * 9 + 9;
            }
          } while (uVar9 != 0);
        }
        uVar16 = (ulong)(uint)((int)((ulong)((long)pfVar15 - (long)pfVar18) >> 2) * 0x38e38e39);
        goto LAB_10a1d7d8c;
      }
    }
    uVar16 = (ulong)(iVar5 + 1);
  }
LAB_10a1d7d8c:
  uVar13 = (int)uVar16 - 1;
  uVar9 = (lVar11 - (long)pfVar18 >> 2) * -0x71c71c71c71c71c7;
  if ((ulong)(long)(int)uVar13 <= uVar9 && uVar9 - (long)(int)uVar13 != 0) {
    fVar19 = pfVar18[(long)(int)uVar13 * 9];
    pmVar6[1].cputype = uVar13;
    pmVar6[1].cpusubtype = (dword)fVar19;
    return (mach_header *)((ulong)uVar13 | uVar16 << 0x20);
  }
LAB_10a1d7dcc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1d7dd0);
  (*pcVar3)();
}



/* Entry: 10a1c9c18; end: 10a1c9c83;  */

mach_header * FUN_10a1c9c18(float param_1,long param_2,mach_header *param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  mach_header *pmVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  float *pfVar13;
  ulong uVar14;
  long lVar15;
  undefined4 uVar16;
  float fVar17;
  ulong uVar12;
  
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f643d6d);
LAB_10a1c9c78:
    puVar4 = &UNK_10f643d8a;
    FUN_10a00946c();
    pmVar5 = (mach_header *)(puVar4 + 8);
    if (pmVar5 != param_3) {
      FUN_10a1d7dd0(pmVar5,*(long *)param_3,*(long *)&param_3->cpusubtype,
                    (*(long *)&param_3->cpusubtype - *(long *)param_3 >> 2) * -0x71c71c71c71c71c7);
    }
    if (*(undefined4 **)(puVar4 + 8) == *(undefined4 **)(puVar4 + 0x10)) {
      *(undefined4 *)(puVar4 + 0x20) = 0;
      uVar16 = 0;
    }
    else {
      *(undefined4 *)(puVar4 + 0x20) = (*(undefined4 **)(puVar4 + 0x10))[-9];
      uVar16 = **(undefined4 **)(puVar4 + 8);
    }
    *(undefined4 *)(puVar4 + 0x24) = 0;
    *(undefined4 *)(puVar4 + 0x28) = uVar16;
    *(undefined4 *)(puVar4 + 0x50) = 0;
    return pmVar5;
  }
  lVar7 = *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8);
  if ((ulong)((lVar7 >> 2) * -0x71c71c71c71c71c7) < 2) goto LAB_10a1c9c78;
  if (lVar7 == 0x48) {
    return &MACH_HEADER;
  }
  iVar6 = *(int *)(param_2 + 0x50);
  if (iVar6 == 0) {
    fVar17 = (float)(ulong)((*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 2) *
                           -0x71c71c71c71c71c7);
    _logf();
    iVar6 = (int)fVar17;
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    *(int *)(param_2 + 0x50) = iVar6;
  }
  uVar10 = *(uint *)(param_2 + 0x24);
  uVar11 = (ulong)uVar10;
  if (*(float *)(param_2 + 0x28) <= param_1) {
    uVar11 = (long)(int)uVar10 + 1;
    pfVar8 = *(float **)(param_2 + 8);
    lVar7 = *(long *)(param_2 + 0x10);
    uVar9 = (lVar7 - (long)pfVar8 >> 2) * -0x71c71c71c71c71c7;
    uVar2 = (int)uVar9 - 1;
    uVar14 = (ulong)uVar2;
    uVar10 = (int)uVar11 + iVar6;
    if ((int)uVar2 <= (int)uVar10) {
      uVar10 = uVar2;
    }
    uVar12 = uVar11;
    if ((int)uVar11 < (int)uVar10) {
      pfVar13 = pfVar8 + uVar11 * 9;
      lVar15 = 0;
      if (uVar11 <= uVar9) {
        lVar15 = uVar9 - uVar11;
      }
      do {
        if (lVar15 == 0) goto LAB_10a1d7dcc;
        uVar12 = uVar11;
        if (param_1 < *pfVar13) break;
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar1;
        uVar12 = (ulong)uVar10;
        pfVar13 = pfVar13 + 9;
        lVar15 = lVar15 + -1;
      } while (uVar10 != uVar1);
    }
    uVar10 = (uint)uVar12;
    if (uVar10 != uVar2) {
      if (uVar9 < (ulong)(long)(int)uVar10 || uVar9 - (long)(int)uVar10 == 0) goto LAB_10a1d7dcc;
      uVar14 = uVar12;
      if (pfVar8[(long)(int)uVar10 * 9] <= param_1) goto LAB_10a1d7d20;
    }
  }
  else {
    uVar2 = uVar10 - iVar6 & ((int)(uVar10 - iVar6) >> 0x1f ^ 0xffffffffU);
    uVar14 = uVar11;
    if ((int)uVar2 < (int)uVar10) {
      uVar9 = (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 2) * -0x71c71c71c71c71c7;
      pfVar8 = (float *)(*(long *)(param_2 + 8) + (ulong)uVar10 * 0x24);
      do {
        if (uVar9 < uVar11 || uVar9 - uVar11 == 0) goto LAB_10a1d7dcc;
        uVar14 = uVar11;
      } while ((param_1 <= *pfVar8) &&
              (uVar11 = uVar11 - 1, uVar14 = (ulong)uVar2, pfVar8 = pfVar8 + -9,
              (long)(ulong)uVar2 < (long)uVar11));
    }
    iVar6 = (int)uVar14;
    if (iVar6 == 0) {
      pfVar8 = *(float **)(param_2 + 8);
      lVar7 = *(long *)(param_2 + 0x10);
    }
    else {
      pfVar8 = *(float **)(param_2 + 8);
      lVar7 = *(long *)(param_2 + 0x10);
      uVar11 = (lVar7 - (long)pfVar8 >> 2) * -0x71c71c71c71c71c7;
      if (uVar11 < (ulong)(long)iVar6 || uVar11 - (long)iVar6 == 0) goto LAB_10a1d7dcc;
      if (param_1 <= pfVar8[(long)iVar6 * 9]) {
LAB_10a1d7d20:
        *(float *)(param_2 + 0x2c) = param_1;
        lVar15 = (lVar7 + -0x24) - (long)pfVar8;
        pfVar13 = pfVar8;
        if (lVar15 != 0) {
          uVar11 = (lVar15 >> 2) * -0x71c71c71c71c71c7;
          do {
            uVar9 = uVar11 >> 1;
            uVar14 = uVar11 + (uVar11 >> 1 ^ 0xffffffffffffffff);
            uVar11 = uVar9;
            if (pfVar13[uVar9 * 9] <= param_1) {
              uVar11 = uVar14;
              pfVar13 = pfVar13 + uVar9 * 9 + 9;
            }
          } while (uVar11 != 0);
        }
        uVar14 = (ulong)(uint)((int)((ulong)((long)pfVar13 - (long)pfVar8) >> 2) * 0x38e38e39);
        goto LAB_10a1d7d8c;
      }
    }
    uVar14 = (ulong)(iVar6 + 1);
  }
LAB_10a1d7d8c:
  uVar10 = (int)uVar14 - 1;
  uVar11 = (lVar7 - (long)pfVar8 >> 2) * -0x71c71c71c71c71c7;
  if ((ulong)(long)(int)uVar10 <= uVar11 && uVar11 - (long)(int)uVar10 != 0) {
    fVar17 = pfVar8[(long)(int)uVar10 * 9];
    *(uint *)(param_2 + 0x24) = uVar10;
    *(float *)(param_2 + 0x28) = fVar17;
    return (mach_header *)((ulong)uVar10 | uVar14 << 0x20);
  }
LAB_10a1d7dcc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1d7dd0);
  (*pcVar3)();
}



/* Entry: 10a1c9c84; end: 10a1c9d03;  */

void FUN_10a1c9c84(long param_1,long *param_2)

{
  undefined4 uVar1;
  
  if ((long *)(param_1 + 8) != param_2) {
    FUN_10a1d7dd0((long *)(param_1 + 8),*param_2,param_2[1],
                  (param_2[1] - *param_2 >> 2) * -0x71c71c71c71c71c7);
  }
  if (*(undefined4 **)(param_1 + 8) == *(undefined4 **)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = (*(undefined4 **)(param_1 + 0x10))[-9];
    uVar1 = **(undefined4 **)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 10a1c9d04; end: 10a1c9d07;  */

undefined8 * FUN_10a1c9d04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad0b0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1c9d08; end: 10a1c9d1b;  */

void FUN_10a1c9d08(void)

{
  FUN_10a1ce3d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1c9d1c; end: 10a1c9d1f;  */

undefined8 * FUN_10a1c9d1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bacfd0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a1c9d20; end: 10a1c9d33;  */

void FUN_10a1c9d20(void)

{
  func_0x00010a1ce424();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1c9d34; end: 10a1c9d37;  */

undefined8 * FUN_10a1c9d34(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_110bad138;
  param_1[1] = &PTR_FUN_110bad1b0;
  if (param_1[0xd9] != 0) {
    param_1[0xda] = param_1[0xd9];
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xd1);
  __ZNSt3__15mutexD1Ev(param_1 + 0xc9);
  lVar4 = 0x640;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -8;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x610);
  __ZNSt3__15mutexD1Ev(param_1 + 0xba);
  __ZNSt3__15mutexD1Ev(param_1 + 0xb2);
  lVar4 = 0x588;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -7;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x558);
  __ZNSt3__15mutexD1Ev(param_1 + 0xa3);
  __ZNSt3__15mutexD1Ev(param_1 + 0x9b);
  lVar4 = 0x4d0;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -7;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x4a0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x8c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x84);
  lVar4 = 0x418;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -9;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 1000);
  __ZNSt3__15mutexD1Ev(param_1 + 0x75);
  __ZNSt3__15mutexD1Ev(param_1 + 0x6d);
  lVar4 = 0x360;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -8;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x330);
  __ZNSt3__15mutexD1Ev(param_1 + 0x5e);
  __ZNSt3__15mutexD1Ev(param_1 + 0x56);
  lVar4 = 0x2a8;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -8;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x278);
  __ZNSt3__15mutexD1Ev(param_1 + 0x47);
  __ZNSt3__15mutexD1Ev(param_1 + 0x3f);
  lVar4 = 0x1d8;
  do {
    if (*(long *)((long)param_1 + lVar4) != 0) {
      FUN_10a1ce868((long)param_1 + lVar4);
      __ZdlPv(*(undefined8 *)((long)param_1 + lVar4));
    }
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != 0x1a8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x30);
  __ZNSt3__15mutexD1Ev(param_1 + 0x28);
  lVar4 = 0x138;
  do {
    lVar6 = lVar4 + -0x18;
    puVar7 = *(undefined8 **)((long)param_1 + lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((long)param_1 + lVar4 + -0x10);
      puVar1 = puVar7;
      if (puVar2 != puVar7) {
        do {
          puVar2 = puVar2 + -7;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar7);
        puVar1 = *(undefined8 **)((long)param_1 + lVar6);
      }
      *(undefined8 **)((long)param_1 + lVar4 + -0x10) = puVar7;
      __ZdlPv(puVar1);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x108);
  __ZNSt3__15mutexD1Ev(param_1 + 0x19);
  __ZNSt3__15mutexD1Ev(param_1 + 0x11);
  lVar4 = 0x80;
  do {
    lVar6 = lVar4 + -0x18;
    lVar8 = *(long *)((long)param_1 + lVar6);
    if (lVar8 != 0) {
      lVar3 = *(long *)((long)param_1 + lVar4 + -0x10);
      lVar5 = lVar8;
      if (lVar3 != lVar8) {
        do {
          lVar5 = lVar3 + -0x18;
          FUN_10a1ce910(lVar5,*(undefined8 *)(lVar3 + -0x10));
          lVar3 = lVar5;
        } while (lVar5 != lVar8);
        lVar5 = *(long *)((long)param_1 + lVar6);
      }
      *(long *)((long)param_1 + lVar4 + -0x10) = lVar8;
      __ZdlPv(lVar5);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0x50);
  __ZNSt3__15mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 10a1c9d38; end: 10a1c9d4b;  */

void FUN_10a1c9d38(void)

{
  FUN_10a1ce474();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1c9d4c; end: 10a1c9d53;  */

undefined8 * FUN_10a1c9d4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar1 = param_1 + -1;
  *puVar1 = &PTR_FUN_110bad138;
  *param_1 = &PTR_FUN_110bad1b0;
  if (param_1[0xd8] != 0) {
    param_1[0xd9] = param_1[0xd8];
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xd0);
  __ZNSt3__15mutexD1Ev(param_1 + 200);
  lVar5 = 0x640;
  do {
    lVar7 = lVar5 + -0x18;
    puVar8 = *(undefined8 **)((long)puVar1 + lVar7);
    if (puVar8 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((long)param_1 + lVar5 + -0x18);
      puVar2 = puVar8;
      if (puVar3 != puVar8) {
        do {
          puVar3 = puVar3 + -8;
          (**(code **)*puVar3)(puVar3);
        } while (puVar3 != puVar8);
        puVar2 = *(undefined8 **)((long)puVar1 + lVar7);
      }
      *(undefined8 **)((long)param_1 + lVar5 + -0x18) = puVar8;
      __ZdlPv(puVar2);
    }
    lVar5 = lVar7;
  } while (lVar7 != 0x610);
  __ZNSt3__15mutexD1Ev(param_1 + 0xb9);
  __ZNSt3__15mutexD1Ev(param_1 + 0xb1);
  lVar5 = 0x588;
  do {
    lVar7 = lVar5 + -0x18;
    puVar8 = *(undefined8 **)((long)puVar1 + lVar7);
    if (puVar8 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((long)param_1 + lVar5 + -0x18);
      puVar2 = puVar8;
      if (puVar3 != puVar8) {
        do {
          puVar3 = puVar3 + -7;
          (**(code **)*puVar3)(puVar3);
        } while (puVar3 != puVar8);
        puVar2 = *(undefined8 **)((long)puVar1 + lVar7);
      }
      *(undefined8 **)((long)param_1 + lVar5 + -0x18) = puVar8;
      __ZdlPv(puVar2);
    }
    lVar5 = lVar7;
  } while (lVar7 != 0x558);
  __ZNSt3__15mutexD1Ev(param_1 + 0xa2);
  __ZNSt3__15mutexD1Ev(param_1 + 0x9a);
  lVar5 = 0x4d0;
  do {
    lVar7 = lVar5 + -0x18;
    puVar8 = *(undefined8 **)((long)puVar1 + lVar7);
    if (puVar8 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((long)param_1 + lVar5 + -0x18);
      puVar2 = puVar8;
      if (puVar3 != puVar8) {
        do {
          puVar3 = puVar3 + -7;
          (**(code **)*puVar3)(puVar3);
        } while (puVar3 != puVar8);
        puVar2 = *(undefined8 **)((long)puVar1 + lVar7);
      }
      *(undefined8 **)((long)param_1 + lVar5 + -0x18) = puVar8;
      __ZdlPv(puVar2);
    }
    lVar5 = lVar7;
  } while (lVar7 != 0x4a0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x8b);
  __ZNSt3__15mutexD1Ev(param_1 + 0x83);
  lVar5 = 0x418;
  do {
    lVar7 = lVar5 + -0x18;
    puVar8 = *(undefined8 **)((long)puVar1 + lVar7);
    if (puVar8 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((long)param_1 + lVar5 + -0x18);
      puVar2 = puVar8;
      if (puVar3 != puVar8) {
        do {
          puVar3 = puVar3 + -9;
          (**(code **)*puVar3)(puVar3);
        } while (puVar3 != puVar8);
        puVar2 = *(undefined8 **)((long)puVar1 + lVar7);
      }
      *(undefined8 **)((long)param_1 + lVar5 + -0x18) = puVar8;
      __ZdlPv(puVar2);
    }
    lVar5 = lVar7;
  } while (lVar7 != 1000);
  __ZNSt3__15mutexD1Ev(param_1 + 0x74);
  __ZNSt3__15mutexD1Ev(param_1 + 0x6c);
  lVar5 = 0x360;
  do {
    lVar7 = lVar5 + -0x18;
    puVar8 = *(undefined8 **)((long)puVar1 + lVar7);
    if (puVar8 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((long)param_1 + lVar5 + -0x18);
      puVar2 = puVar8;
      if (puVar3 != puVar8) {
        do {
          puVar3 = puVar3 + -8;
          (**(code **)*puVar3)(puVar3);
        } while (puVar3 != puVar8);
        puVar2 = *(undefined8 **)((long)puVar1 + lVar7);
      }
      *(undefined8 **)((long)param_1 + lVar5 + -0x18) = puVar8;
      __ZdlPv(puVar2);
    }
    lVar5 = lVar7;
  } while (lVar7 != 0x330);
  __ZNSt3__15mutexD1Ev(param_1 + 0x5d);
  __ZNSt3__15mutexD1Ev(param_1 + 0x55);
  lVar5 = 0x2a8;
  do {
    lVar7 = lVar5 + -0x18;
    puVar8 = *(undefined8 **)((long)puVar1 + lVar7);
    if (puVar8 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((long)param_1 + lVar5 + -0x18);
      puVar2 = puVar8;
      if (puVar3 != puVar8) {
        do {
          puVar3 = puVar3 + -8;
          (**(code **)*puVar3)(puVar3);
        } while (puVar3 != puVar8);
        puVar2 = *(undefined8 **)((long)puVar1 + lVar7);
      }
      *(undefined8 **)((long)param_1 + lVar5 + -0x18) = puVar8;
      __ZdlPv(puVar2);
    }
    lVar5 = lVar7;
  } while (lVar7 != 0x278);
  __ZNSt3__15mutexD1Ev(param_1 + 0x46);
  __ZNSt3__15mutexD1Ev(param_1 + 0x3e);
  lVar5 = 0x1d8;
  do {
    if (*(long *)((long)puVar1 + lVar5) != 0) {
      FUN_10a1ce868((long)puVar1 + lVar5);
      __ZdlPv(*(undefined8 *)((long)puVar1 + lVar5));
    }
    lVar5 = lVar5 + -0x18;
  } while (lVar5 != 0x1a8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x2f);
  __ZNSt3__15mutexD1Ev(param_1 + 0x27);
  lVar5 = 0x138;
  do {
    lVar7 = lVar5 + -0x18;
    puVar8 = *(undefined8 **)((long)puVar1 + lVar7);
    if (puVar8 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((long)param_1 + lVar5 + -0x18);
      puVar2 = puVar8;
      if (puVar3 != puVar8) {
        do {
          puVar3 = puVar3 + -7;
          (**(code **)*puVar3)(puVar3);
        } while (puVar3 != puVar8);
        puVar2 = *(undefined8 **)((long)puVar1 + lVar7);
      }
      *(undefined8 **)((long)param_1 + lVar5 + -0x18) = puVar8;
      __ZdlPv(puVar2);
    }
    lVar5 = lVar7;
  } while (lVar7 != 0x108);
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  lVar5 = 0x80;
  do {
    lVar7 = lVar5 + -0x18;
    lVar9 = *(long *)((long)puVar1 + lVar7);
    if (lVar9 != 0) {
      lVar4 = *(long *)((long)param_1 + lVar5 + -0x18);
      lVar6 = lVar9;
      if (lVar4 != lVar9) {
        do {
          lVar6 = lVar4 + -0x18;
          FUN_10a1ce910(lVar6,*(undefined8 *)(lVar4 + -0x10));
          lVar4 = lVar6;
        } while (lVar6 != lVar9);
        lVar6 = *(long *)((long)puVar1 + lVar7);
      }
      *(long *)((long)param_1 + lVar5 + -0x18) = lVar9;
      __ZdlPv(lVar6);
    }
    lVar5 = lVar7;
  } while (lVar7 != 0x50);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return puVar1;
}



/* Entry: 10a1c9d54; end: 10a1c9d6b;  */

void FUN_10a1c9d54(long param_1)

{
  FUN_10a1ce474(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1c9d6c; end: 10a1c9e03;  */

long FUN_10a1c9d6c(long param_1)

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



/* Entry: 10a1c9e04; end: 10a1c9ef3;  */

void FUN_10a1c9e04(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_88 [40];
  long lStack_60;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_10a1c9ef4(auStack_88);
  if (lStack_60 != 0) {
    plVar3 = (long *)(lStack_60 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = lStack_60;
  if (((char)param_2[1] == '\x01') && (((uint)*(undefined8 *)(*param_2 + 0x10) >> 1 & 1) != 0)) {
    lStack_48 = 0;
    lStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    lVar4 = (long)*(char *)((long)param_2 + 0x27);
    if (lVar4 < 0) {
      plVar3 = (long *)param_2[2];
      lVar4 = param_2[3];
    }
    else {
      plVar3 = param_2 + 2;
    }
    FUN_10a0f14fc(&lStack_48,plVar3,lVar4,0);
  }
  func_0x00010a1c9dc4(auStack_88,&lStack_48);
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  func_0x000109d1a1d0(auStack_88);
  return;
}



/* Entry: 10a1c9ef4; end: 10a1c9f93;  */

undefined8 * FUN_10a1c9ef4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
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
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110ba7888;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a1c9f94; end: 10a1ca95f;  */

void FUN_10a1c9f94(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plStack_e0;
  undefined8 *puStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  puVar11 = (undefined8 *)0x240;
  __Znwm();
  *puVar11 = FUN_10a1d8cac;
  puVar11[1] = FUN_10a1d9514;
  puVar11[0x46] = param_2;
  func_0x0001092ba17c(puVar11 + 2);
  lVar13 = puVar11[7];
  if (lVar13 != 0) {
    plVar1 = (long *)(lVar13 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  *param_1 = lVar13;
  if ((*(char *)(param_2 + 0x18) == '\x01') &&
     (((uint)*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10) >> 1 & 1) != 0)) {
    FUN_10a1cacc4(&UNK_10f643ac7);
    goto LAB_10a1ca6cc;
  }
  plVar1 = puVar11 + 0x3b;
  puVar2 = puVar11 + 0x40;
  plVar3 = puVar11 + 0x42;
  plVar4 = puVar11 + 0x43;
  lVar13 = *(long *)(param_2 + 0x40);
  puVar11[9] = lVar13;
  plVar12 = (long *)(lVar13 + 8);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = *plVar12 + 4;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (((uint)*(undefined8 *)(puVar11[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar11 + 0x47) = 0;
    lVar13 = puVar11[9];
    plVar12 = (long *)(lVar13 + 0x10);
    plStack_d0 = (long *)puVar11[3];
    do {
      lVar17 = *plVar12;
      if (lVar17 == 0) {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar9) {
          *plVar12 = 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 == '\0') {
          plStack_e0 = (long *)0x0;
          puStack_d8 = puVar11;
          func_0x000109d1b588(lVar13 + 0x18,&plStack_e0);
          *(undefined8 *)(lVar13 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar17 >> 1 & 1) == 0);
  }
  lVar13 = puVar11[9];
  if (((uint)*(undefined8 *)(puVar11[9] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(lVar13 + 0x90);
    goto LAB_10a1ca6cc;
  }
  if ((*(byte *)(lVar13 + 0xb0) & 1) == 0) goto LAB_10a1ca6cc;
  *plVar1 = 0;
  puVar11[0x3c] = 0;
  puVar11[0x3d] = 0;
  FUN_10a05151c(plVar1,*(long *)(lVar13 + 0x98),*(long *)(lVar13 + 0xa0),
                *(long *)(lVar13 + 0xa0) - *(long *)(lVar13 + 0x98));
  plVar12 = (long *)puVar11[9];
  if (plVar12 != (long *)0x0) {
    puVar5 = (ulong *)(plVar12 + 1);
    do {
      uVar16 = *puVar5;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar9) {
        *puVar5 = uVar16 - 4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar16 & 0x1fffffffc) == 4) {
      do {
        uVar16 = *puVar5;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar9) {
          *puVar5 = uVar16 - 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (uVar16 - 1 == 0) {
        (**(code **)(*plVar12 + 8))();
      }
    }
  }
  if (puVar11[0x3b] == puVar11[0x3c]) {
LAB_10a1ca698:
    FUN_10a1cacc4(&UNK_10f643af7);
  }
  else {
    plVar12 = (long *)puVar11[0x46];
    if ((char)plVar12[3] == '\x01') {
      if (((uint)*(undefined8 *)(plVar12[2] + 0x10) >> 1 & 1) != 0) goto LAB_10a1ca698;
      plVar12 = (long *)puVar11[0x46];
    }
    lVar13 = *plVar12;
    FUN_10a2421c8();
    lVar17 = *(long *)(lVar13 + 0x1d0);
    puStack_78 = &UNK_10f646e68;
    uStack_70 = 0x20;
    if (lVar17 != 0) {
      lVar14 = *(long *)(*(long *)puVar11[0x46] + 0x100);
      if (*(char *)(lVar14 + 0x21f) < '\0') {
        func_0x000107c3192c(puVar11 + 9,*(undefined8 *)(lVar14 + 0x208),
                            *(undefined8 *)(lVar14 + 0x210));
      }
      else {
        uVar21 = *(undefined8 *)(lVar14 + 0x210);
        uVar20 = *(undefined8 *)(lVar14 + 0x208);
        puVar11[0xb] = *(undefined8 *)(lVar14 + 0x218);
        puVar11[10] = uVar21;
        puVar11[9] = uVar20;
      }
      *(undefined1 *)(puVar11 + 0xc) = 0;
      puVar19 = puVar11 + 0xf;
      *(undefined4 *)puVar19 = 0;
      *(undefined1 *)(puVar11 + 0xe) = 0;
      *(undefined2 *)((long)puVar11 + 0x7c) = 0;
      puVar11[0x10] = &PTR_PTR_1132fed50;
      puVar11[0x11] = &UNK_1053a6a3c;
      puVar18 = puVar11 + 0x12;
      *puVar18 = &PTR_DAT_110ae9180;
      puVar11[0x19] = &PTR_PTR_1132fed50;
      puVar11[0x1a] = &UNK_1053a6a3c;
      puVar15 = puVar11 + 0x1b;
      *puVar15 = &PTR_DAT_110ae9180;
      plVar12 = (long *)0x38;
      __Znwm();
      lVar14 = puVar11[0x3b];
      lVar7 = puVar11[0x3c];
      plVar12[2] = 0;
      plVar12[3] = 0;
      *plVar12 = (long)&PTR_FUN_110ba5138;
      plVar12[1] = 0;
      plVar12[4] = 0;
      plVar12[5] = lVar14;
      plVar12[6] = lVar7 - lVar14;
      lVar14 = 0x90;
      __Znwm();
      *plVar3 = 0;
      plStack_e0 = plVar12;
      FUN_10a1b11d8();
      *plVar4 = lVar14;
      if (plStack_e0 != (long *)0x0) {
        (**(code **)(*plStack_e0 + 8))();
      }
      plStack_e0 = (long *)(CONCAT71(plStack_e0._1_7_,*(undefined1 *)puVar19) & 0xffffffffffffff01);
      FUN_10a1cad34(puVar11 + 0x3e,puVar2,plVar4,&plStack_e0);
      puVar11[0x23] = puVar11[10];
      puVar11[0x22] = puVar11[9];
      puVar11[0x24] = puVar11[0xb];
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      puVar11[9] = 0;
      *(undefined1 *)(puVar11 + 0x25) = 0;
      *(undefined1 *)(puVar11 + 0x27) = 0;
      if (*(char *)(puVar11 + 0xe) == '\x01') {
        puVar11[0x26] = puVar11[0xd];
        puVar11[0x25] = puVar11[0xc];
        puVar11[0xc] = 0;
        puVar11[0xd] = 0;
        *(undefined1 *)(puVar11 + 0x27) = 1;
      }
      *(undefined4 *)(puVar11 + 0x28) = *(undefined4 *)puVar19;
      *(undefined2 *)((long)puVar11 + 0x144) = *(undefined2 *)((long)puVar11 + 0x7c);
      puVar11[0x29] = puVar11[0x10];
      puVar11[0x2a] = puVar11[0x11];
      puVar11[0x2b] = &PTR_DAT_110ae9180;
      (**(code **)(puVar11[0x12] + 0x10))(puVar11 + 0x2b,puVar18);
      puVar11[0x11] = &UNK_1053a6a3c;
      (**(code **)puVar11[0x12])(puVar18);
      puVar11[0x12] = &PTR_DAT_110ae9180;
      puVar11[0x32] = puVar11[0x19];
      puVar11[0x33] = puVar11[0x1a];
      puVar11[0x34] = &PTR_DAT_110ae9180;
      (**(code **)(puVar11[0x1b] + 0x10))(puVar11 + 0x34,puVar15);
      puVar11[0x1a] = &UNK_1053a6a3c;
      (**(code **)puVar11[0x1b])(puVar15);
      puVar11[0x1b] = &PTR_DAT_110ae9180;
      FUN_10a25684c(puVar2,lVar17,lVar13,puVar11 + 0x3e,puVar11 + 0x22);
      func_0x0001092ba41c(puVar11 + 0x32);
      func_0x0001092ba41c(puVar11 + 0x29);
      if ((*(char *)(puVar11 + 0x27) == '\x01') && (puVar11[0x26] != 0)) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (*(char *)((long)puVar11 + 0x127) < '\0') {
        __ZdlPv(puVar11[0x22]);
      }
      puVar15 = (undefined8 *)puVar11[0x46];
      plStack_e0 = (long *)*puVar15;
      uVar20 = puVar15[1];
      plStack_d0 = (long *)puVar15[5];
      puStack_d8 = (undefined8 *)puVar15[4];
      plStack_c0 = (long *)puVar15[7];
      uStack_c8 = puVar15[6];
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      lStack_b0 = puVar11[0x3c];
      lStack_b8 = *plVar1;
      uStack_a8 = puVar11[0x3d];
      *plVar1 = 0;
      puVar11[0x3c] = 0;
      puVar11[0x3d] = 0;
      plStack_98 = (long *)puVar11[0x3f];
      uStack_a0 = puVar11[0x3e];
      plStack_88 = (long *)puVar11[0x41];
      uStack_90 = puVar11[0x40];
      puVar11[0x3e] = 0;
      puVar11[0x3f] = 0;
      *puVar2 = 0;
      puVar11[0x41] = 0;
      FUN_10a1caf00(puVar11 + 0x44,uVar20,&plStack_e0);
      plVar12 = (long *)puVar11[0x44];
      if (plVar12 != (long *)0x0) {
        puVar5 = (ulong *)(plVar12 + 1);
        do {
          uVar16 = *puVar5;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar9) {
            *puVar5 = uVar16 - 4;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar5;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar9) {
              *puVar5 = uVar16 - 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      plVar12 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar6 = plStack_88 + 1;
        do {
          lVar13 = *plVar6;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar9) {
            *plVar6 = lVar13 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar6 = plStack_98 + 1;
        do {
          lVar13 = *plVar6;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar9) {
            *plVar6 = lVar13 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      if (lStack_b8 != 0) {
        lStack_b0 = lStack_b8;
        __ZdlPv();
      }
      plVar12 = plStack_c0;
      if (plStack_c0 != (long *)0x0) {
        plVar6 = plStack_c0 + 1;
        do {
          lVar13 = *plVar6;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar9) {
            *plVar6 = lVar13 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = plStack_d0;
      if (plStack_d0 != (long *)0x0) {
        plVar6 = plStack_d0 + 1;
        do {
          lVar13 = *plVar6;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar9) {
            *plVar6 = lVar13 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = (long *)puVar11[0x41];
      if (plVar12 != (long *)0x0) {
        plVar6 = plVar12 + 1;
        do {
          lVar13 = *plVar6;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar9) {
            *plVar6 = lVar13 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = (long *)puVar11[0x3f];
      if (plVar12 != (long *)0x0) {
        plVar6 = plVar12 + 1;
        do {
          lVar13 = *plVar6;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar9) {
            *plVar6 = lVar13 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      lVar13 = *plVar4;
      *plVar4 = 0;
      if (lVar13 != 0) {
        func_0x00010a0e32bc(plVar4);
      }
      lVar13 = *plVar3;
      *plVar3 = 0;
      if (lVar13 != 0) {
        func_0x00010a1cbbe4(plVar3);
      }
      func_0x0001092ba41c(puVar11 + 0x19);
      func_0x0001092ba41c(puVar11 + 0x10);
      if ((*(char *)(puVar11 + 0xe) == '\x01') && (puVar11[0xd] != 0)) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (*(char *)((long)puVar11 + 0x5f) < '\0') {
        __ZdlPv(puVar11[9]);
      }
      if (*plVar1 != 0) {
        puVar11[0x3c] = *plVar1;
        __ZdlPv();
      }
      func_0x0001092ba100(puVar11 + 2);
      func_0x000109d1a1d0(puVar11 + 2);
      __ZdlPv(puVar11);
      return;
    }
    FUN_10a0edfc4(&puStack_78);
  }
LAB_10a1ca6cc:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a1ca6d0);
  (*pcVar10)();
}



/* Entry: 10a1ca960; end: 10a1caa07;  */

undefined8 * FUN_10a1ca960(undefined8 *param_1)

{
  func_0x0001092ba41c(param_1 + 0x10);
  func_0x0001092ba41c(param_1 + 7);
  if ((*(char *)(param_1 + 5) == '\x01') && (param_1[4] != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a1caa08; end: 10a1cacc3;  */

/* WARNING: Removing unreachable block (ram,0x00010a1caadc) */
/* WARNING: Removing unreachable block (ram,0x00010a1caae0) */
/* WARNING: Removing unreachable block (ram,0x00010a1caae8) */
/* WARNING: Removing unreachable block (ram,0x00010a1caaf0) */
/* WARNING: Removing unreachable block (ram,0x00010a1caafc) */
/* WARNING: Removing unreachable block (ram,0x00010a1cab04) */
/* WARNING: Removing unreachable block (ram,0x00010a1cab0c) */
/* WARNING: Removing unreachable block (ram,0x00010a1cab10) */
/* WARNING: Removing unreachable block (ram,0x00010a1cac3c) */
/* WARNING: Removing unreachable block (ram,0x00010a1cac40) */
/* WARNING: Removing unreachable block (ram,0x00010a1cac48) */
/* WARNING: Removing unreachable block (ram,0x00010a1cac50) */
/* WARNING: Removing unreachable block (ram,0x00010a1cac5c) */
/* WARNING: Removing unreachable block (ram,0x00010a1cac64) */
/* WARNING: Removing unreachable block (ram,0x00010a1cac6c) */
/* WARNING: Removing unreachable block (ram,0x00010a1cac70) */

void FUN_10a1caa08(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  plVar3 = (long *)param_2[2];
  puStack_68 = (undefined8 *)0x0;
  if (plVar3 == (long *)0x0) {
    uVar7 = param_3[1];
    uVar6 = *param_3;
    uVar5 = param_3[3];
    uVar4 = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    puStack_70 = (undefined8 *)0xd8;
    __Znwm();
    puStack_70[2] = 0;
    puStack_70[1] = 0x200000006;
    *(undefined2 *)(puStack_70 + 3) = 4;
    puStack_70[5] = 0;
    puStack_70[4] = 0;
    puStack_70[7] = 0;
    puStack_70[6] = 0;
    puStack_70[9] = 0;
    puStack_70[8] = 0;
    puStack_70[0xb] = 0;
    puStack_70[10] = 0;
    puStack_70[0xd] = 0;
    puStack_70[0xc] = 0;
    puStack_70[0xf] = 0;
    puStack_70[0xe] = 0;
    puStack_70[0x10] = 0;
    puStack_70[0x11] = puStack_70 + 3;
    puStack_70[0x12] = 0;
    *(undefined2 *)(puStack_70 + 0x13) = 0;
    *puStack_70 = &PTR_DAT_110bad2a0;
    puVar2 = puStack_70 + 0x14;
    puStack_70[0x15] = uVar7;
    *puVar2 = uVar6;
    puStack_70[0x17] = uVar5;
    puStack_70[0x16] = uVar4;
    *(undefined1 *)(puStack_70 + 0x19) = 1;
    puStack_70[0x1a] = 0;
    pcStack_60 = FUN_10a1cbc58;
    puStack_68 = puStack_70;
  }
  else {
    pcStack_58 = (code *)0x0;
    (**(code **)(*plVar3 + 0x28))(plVar3,0,&pcStack_58);
    if (pcStack_58 != (code *)0x0) {
      func_0x0001092af97c(&pcStack_58);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1caca0);
      (*pcVar1)();
    }
    uVar7 = param_3[1];
    uVar6 = *param_3;
    uVar5 = param_3[3];
    uVar4 = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    puStack_70 = (undefined8 *)0xe0;
    __Znwm();
    *(undefined2 *)(puStack_70 + 3) = 4;
    puStack_70[2] = 0;
    puStack_70[1] = 0x200000006;
    puStack_70[5] = 0;
    puStack_70[4] = 0;
    puStack_70[7] = 0;
    puStack_70[6] = 0;
    puStack_70[9] = 0;
    puStack_70[8] = 0;
    puStack_70[0xb] = 0;
    puStack_70[10] = 0;
    puStack_70[0xd] = 0;
    puStack_70[0xc] = 0;
    puStack_70[0xf] = 0;
    puStack_70[0xe] = 0;
    puStack_70[0x10] = 0;
    puStack_70[0x11] = puStack_70 + 3;
    puStack_70[0x12] = 0;
    *(undefined2 *)(puStack_70 + 0x13) = 0;
    *puStack_70 = &PTR_FUN_110bad268;
    puVar2 = puStack_70 + 0x14;
    puStack_70[0x15] = uVar7;
    *puVar2 = uVar6;
    puStack_70[0x17] = uVar5;
    puStack_70[0x16] = uVar4;
    *(undefined1 *)(puStack_70 + 0x19) = 1;
    puStack_70[0x1a] = 0;
    puStack_70[0x1b] = plVar3;
    if (puStack_68 != (undefined8 *)0x0) {
      func_0x0001092b4274(&puStack_68);
    }
    pcStack_60 = (code *)0x10a1cbc28;
    puStack_68 = puStack_70;
    __ZNSt13exception_ptrD1Ev(&pcStack_58);
  }
  if (puVar2[6] != 0) {
    func_0x0001092b4274();
  }
  puVar2[6] = puStack_68;
  puStack_68 = (undefined8 *)0x0;
  pcStack_58 = pcStack_60;
  puStack_50 = puVar2;
  puStack_48 = param_2;
  (**(code **)*param_2)(param_2,&pcStack_58);
  *param_1 = puStack_70;
  if (puStack_68 != (undefined8 *)0x0) {
    func_0x0001092b4274(&puStack_68);
  }
  return;
}



/* Entry: 10a1cacc4; end: 10a1cad13;  */

void FUN_10a1cacc4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_10a1cad14();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110b17b58,FUN_109d1868c);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar2 = &PTR_FUN_110b3eb08;
  return;
}



/* Entry: 10a1cad14; end: 10a1cad33;  */

void FUN_10a1cad14(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_FUN_110b3eb08;
  return;
}



/* Entry: 10a1cad34; end: 10a1cad93;  */

void FUN_10a1cad34(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x70;
  __Znwm();
  FUN_10a1cad94();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a1cad94; end: 10a1caddb;  */

undefined8 * FUN_10a1cad94(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bade70;
  FUN_10a1cae18(param_1 + 3);
  return param_1;
}



/* Entry: 10a1caddc; end: 10a1cadeb;  */

void FUN_10a1caddc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bade70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1cadec; end: 10a1cae0b;  */

void FUN_10a1cadec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bade70;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1cae0c; end: 10a1cae17;  */

long * FUN_10a1cae0c(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (3 < (ulong)*(byte *)(param_1 + 0x40)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1caf00);
    (*pcVar1)();
  }
  (*(code *)(&PTR_FUN_110ba20c8)[*(byte *)(param_1 + 0x40)])(param_1 + 0x30);
  plVar2 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar4 = (long *)(param_1 + 0x20);
  plVar3 = (long *)*plVar4;
  *plVar4 = 0;
  if (plVar3 == (long *)0x0) {
    return plVar2;
  }
  if (plVar3 == (long *)0x0) {
    return plVar4;
  }
  if (*(char *)((long)plVar3 + 0x87) < '\0') {
    __ZdlPv(plVar3[0xe]);
  }
  if (plVar3[0xb] != 0) {
    plVar3[0xc] = plVar3[0xb];
    __ZdlPv();
  }
  plVar2 = (long *)plVar3[10];
  plVar3[10] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  func_0x000104c4f944(plVar3 + 5);
  if ((ulong)*(byte *)(plVar3 + 4) < 3) {
    (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(plVar3 + 4)])((long)plVar3 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar3);
    return plVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0e3350);
  (*pcVar1)();
}



/* Entry: 10a1cae18; end: 10a1cae8b;  */

undefined8 FUN_10a1cae18(undefined8 param_1,long *param_2,undefined1 *param_3)

{
  long lVar1;
  long lStack_28;
  
  lStack_28 = *param_2;
  *param_2 = 0;
  FUN_10a3171e0(param_1,&lStack_28,*param_3);
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    func_0x00010a0e32bc(&lStack_28);
  }
  return param_1;
}



/* Entry: 10a1cae8c; end: 10a1caeff;  */

long * FUN_10a1cae8c(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (3 < (ulong)*(byte *)(param_1 + 0x28)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1caf00);
    (*pcVar1)();
  }
  (*(code *)(&PTR_FUN_110ba20c8)[*(byte *)(param_1 + 0x28)])(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar4 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar4;
  *plVar4 = 0;
  if (plVar3 == (long *)0x0) {
    return plVar2;
  }
  if (plVar3 == (long *)0x0) {
    return plVar4;
  }
  if (*(char *)((long)plVar3 + 0x87) < '\0') {
    __ZdlPv(plVar3[0xe]);
  }
  if (plVar3[0xb] != 0) {
    plVar3[0xc] = plVar3[0xb];
    __ZdlPv();
  }
  plVar2 = (long *)plVar3[10];
  plVar3[10] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  func_0x000104c4f944(plVar3 + 5);
  if ((ulong)*(byte *)(plVar3 + 4) < 3) {
    (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(plVar3 + 4)])((long)plVar3 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar3);
    return plVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0e3350);
  (*pcVar1)();
}



/* Entry: 10a1caf00; end: 10a1cb30f;  */

/* WARNING: Removing unreachable block (ram,0x00010a1cb028) */

void FUN_10a1caf00(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar6 = (undefined8 *)0xc8;
  __Znwm();
  *puVar6 = FUN_10a1d87b4;
  puVar6[1] = FUN_10a1d8af8;
  func_0x0001092ba17c(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar12 = *param_3;
  puVar6[10] = param_3[1];
  puVar6[9] = uVar12;
  uVar12 = param_3[3];
  uVar14 = param_3[6];
  uVar13 = param_3[5];
  puVar6[0xd] = param_3[4];
  puVar6[0xc] = uVar12;
  puVar6[0xf] = uVar14;
  puVar6[0xe] = uVar13;
  uVar12 = param_3[8];
  uVar14 = param_3[0xb];
  uVar13 = param_3[10];
  puVar6[0x12] = param_3[9];
  puVar6[0x11] = uVar12;
  *param_1 = lVar9;
  puVar6[0xb] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  puVar6[0x10] = param_3[7];
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  puVar6[0x14] = uVar14;
  puVar6[0x13] = uVar13;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[9] = 0;
  puVar6[0x15] = param_2;
  *(undefined1 *)(puVar6 + 0x16) = 0;
  *(undefined1 *)(puVar6 + 0x18) = 0;
  puVar7 = puVar6 + 0x15;
  func_0x0001092ba064(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10a1cb310(puVar6 + 0x17,puVar6 + 9);
    puVar6[0x15] = puVar6[0x17];
    plVar8 = (long *)(puVar6[0x17] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x15] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x18) = 1;
      lVar9 = puVar6[0x15];
      plVar8 = (long *)(lVar9 + 0x10);
      uStack_38 = puVar6[3];
      do {
        lVar11 = *plVar8;
        if (lVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar6;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_48);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar11 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x15];
    if (((uint)*(undefined8 *)(puVar6[0x15] + 0x10) >> 5 & 1) == 0) {
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar6[0x17];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar6 + 2);
      plVar8 = (long *)puVar6[0x14];
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = (long *)puVar6[0x12];
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (puVar6[0xe] != 0) {
        puVar6[0xf] = puVar6[0xe];
        __ZdlPv();
      }
      plVar8 = (long *)puVar6[0xd];
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = (long *)puVar6[0xb];
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      func_0x000109d1a1d0(puVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar6);
      return;
    }
    func_0x0001092af97c(plVar8 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1cb234);
    (*pcVar5)();
  }
  return;
}



/* Entry: 10a1cb310; end: 10a1cb71f;  */

void FUN_10a1cb310(long *param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  *puVar6 = FUN_10a1d8410;
  puVar6[1] = FUN_10a1d8744;
  puVar6[0xc] = param_2;
  func_0x0001092ba17c(puVar6 + 2);
  lVar8 = puVar6[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar8;
  lVar8 = **(long **)(param_2 + 0x50);
  puVar6[0xb] = lVar8;
  plVar7 = (long *)(lVar8 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0xb] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xd) = 0;
    lVar8 = puVar6[0xb];
    plVar7 = (long *)(lVar8 + 0x10);
    uStack_38 = puVar6[3];
    do {
      lVar10 = *plVar7;
      if (lVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          uStack_48 = 0;
          plStack_40 = puVar6;
          func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar7 = (long *)puVar6[0xb];
  if (((uint)*(undefined8 *)(puVar6[0xb] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar7 + 0x15) & 1) != 0) {
      lVar8 = plVar7[0x14];
      lVar10 = plVar7[0x13];
      puVar6[10] = plVar7[0x14];
      puVar6[9] = lVar10;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      if (puVar6[9] != 0) {
        FUN_10a1328e8(&uStack_48,puVar6 + 0xb,puVar6[0xc],puVar6 + 9);
        FUN_10a1cb720(auStack_58,*(undefined8 *)puVar6[0xc],&uStack_48);
        FUN_10a00bca8(*(undefined8 *)(puVar6[0xc] + 8),auStack_58);
        if (plStack_50 != (long *)0x0) {
          plVar7 = plStack_50 + 1;
          do {
            lVar8 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_50 + 0x10))(plStack_50);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
          }
        }
        if (plStack_40 != (long *)0x0) {
          plVar7 = plStack_40 + 1;
          do {
            lVar8 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_40 + 0x10))(plStack_40);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
          }
        }
        plVar7 = (long *)puVar6[10];
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
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
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        func_0x0001092ba100(puVar6 + 2);
        func_0x000109d1a1d0(puVar6 + 2);
        __ZdlPv(puVar6);
        return;
      }
      FUN_10a00946c(&UNK_10f643be5);
    }
  }
  else {
    func_0x0001092af97c(plVar7 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1cb5b8);
  (*pcVar5)();
}



/* Entry: 10a1cb720; end: 10a1cb877;  */

void FUN_10a1cb720(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  long *extraout_x8;
  undefined8 *puVar8;
  long lVar9;
  long lStack_120;
  long *plStack_118;
  undefined8 *puStack_110;
  long *plStack_108;
  undefined8 *puStack_100;
  long *plStack_f8;
  undefined1 auStack_f0 [8];
  long *plStack_e8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_3;
  lStack_88 = param_2;
  if (param_2 == 0) {
    uStack_a0 = 0;
    FUN_10a17647c(&uStack_80,&uStack_a0,param_3);
    param_1[1] = ppuStack_78;
    *param_1 = uStack_80;
    if (ppuStack_78 != (undefined8 **)0x0) {
      ppuVar5 = ppuStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar4) {
          *ppuVar5 = (undefined8 *)((long)*ppuVar5 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a044790(auStack_70);
    ppuVar5 = apuStack_68;
    (*(code *)*apuStack_68[0])();
    if (ppuStack_78 == (undefined8 **)0x0) goto LAB_10a1cb830;
    ppuVar1 = ppuStack_78 + 1;
    do {
      puVar8 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar6 = ppuStack_78;
    } while (cVar3 != '\0');
  }
  else {
    puStack_98 = *(undefined8 **)(param_2 + 0x858);
    ppuStack_90 = *(undefined8 ***)(param_2 + 0x860);
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar5 = ppuStack_90 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar4) {
          *ppuVar5 = (undefined8 *)((long)*ppuVar5 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuVar5 = &puStack_98;
    param_3 = &lStack_88;
    FUN_10a1cb878(param_1,ppuVar5,param_3);
    if (ppuStack_90 == (undefined8 **)0x0) goto LAB_10a1cb830;
    ppuVar1 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = (undefined8 *)((long)puVar8 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar6 = ppuStack_90;
    } while (cVar3 != '\0');
  }
  if (puVar8 == (undefined8 *)0x0) {
    (*(code *)(*ppuVar6)[2])(ppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar5 = ppuVar6;
  }
LAB_10a1cb830:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    __Unwind_Resume();
    FUN_10a1cba60(param_3,plVar7);
    puStack_100 = *ppuVar5;
    plStack_f8 = ppuVar5[1];
    puStack_110 = puStack_100;
    plStack_108 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      plVar7 = plStack_f8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7 = plStack_f8 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
    }
    FUN_10a05b208(auStack_f0,param_3,&puStack_100);
    FUN_10a05b04c(extraout_x8,auStack_f0);
    if (plStack_e8 != (long *)0x0) {
      plVar7 = plStack_e8 + 1;
      do {
        lVar9 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
      }
    }
    if (plStack_f8 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar7 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar2 = plStack_108 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    puVar8 = *ppuVar5;
    if ((puVar8 != (undefined8 *)0x0) && (lStack_120 = *extraout_x8, lStack_120 != 0)) {
      plStack_118 = (long *)extraout_x8[1];
      if (plStack_118 != (long *)0x0) {
        plVar7 = plStack_118 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10aa88c30(puVar8,&lStack_120);
      plVar7 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar2 = plStack_118 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    return;
  }
  return;
}



/* Entry: 10a1cb878; end: 10a1cba5f;  */

void FUN_10a1cb878(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a1cba60(param_3,param_4);
  lStack_60 = *param_2;
  plStack_58 = (long *)param_2[1];
  lStack_70 = lStack_60;
  plStack_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
  }
  FUN_10a05b208(auStack_50,param_3,&lStack_60);
  FUN_10a05b04c(param_1,auStack_50);
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
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
    plStack_78 = (long *)param_1[1];
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar5,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a1cba60; end: 10a1cbb33;  */

undefined8 FUN_10a1cba60(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = 0x2a8;
  puVar6 = param_2;
  __Znwm(0x2a8);
  uVar9 = *param_1;
  plVar8 = (long *)param_2[1];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = uVar4;
  func_0x00010a0fda30();
  FUN_10ab6a888(uVar4,uVar9,&uStack_40,uVar5,puVar6);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return uVar4;
}



/* Entry: 10a1cbb34; end: 10a1cbc57;  */

long FUN_10a1cbb34(long param_1)

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



/* Entry: 10a1cbc58; end: 10a1cbd7f;  */

void FUN_10a1cbc58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1cbd54);
    (*pcVar4)();
  }
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  lStack_38 = lVar7;
  if (puVar5 == (undefined8 *)0x0 || *(char *)(puVar5 + 8) != '\x02') {
    if (puVar5 != (undefined8 *)0x0 && *(char *)(puVar5 + 8) == '\x01') {
      (*(code *)*puVar5)();
    }
  }
  else {
    FUN_10a05e614();
  }
  plVar1 = (long *)(lVar7 + 0x10);
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar7 + 0x18);
        goto LAB_10a1cbcf8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a1cbcf8:
      if (*(char *)(param_1 + 0x28) == '\x01') {
        func_0x00010a042b54((long *)(param_1 + 0x10));
        FUN_10a0844ac(param_1);
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
      lStack_38 = 0;
      if ((lVar7 != 0) && (func_0x0001092b4274(&lStack_38,lVar7), lStack_38 != 0)) {
        func_0x0001092b4274(&lStack_38);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a1cbd80; end: 10a1cbf47;  */

undefined8 * FUN_10a1cbd80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bad268;
  if (param_1[0x1a] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    func_0x00010a042b54(param_1 + 0x16);
    FUN_10a0844ac(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a1cbf48; end: 10a1cbfa3;  */

long * FUN_10a1cbf48(long *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    pcVar3 = (char *)*param_1;
    do {
      if (-1 < *pcVar3) {
        FUN_10a1cbfa4(lVar1);
      }
      lVar1 = lVar1 + 0x48;
      lVar2 = lVar2 + -1;
      pcVar3 = pcVar3 + 1;
    } while (lVar2 != 0);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10a1cbfa4; end: 10a1cbfef;  */

void FUN_10a1cbfa4(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x28) + -8);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(long *)(param_1 + 8) + -8);
    return;
  }
  return;
}



/* Entry: 10a1cbff0; end: 10a1cc04b;  */

long * FUN_10a1cbff0(long *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    pcVar3 = (char *)*param_1;
    do {
      if (-1 < *pcVar3) {
        FUN_10a1cc04c(lVar1);
      }
      lVar1 = lVar1 + 0x48;
      lVar2 = lVar2 + -1;
      pcVar3 = pcVar3 + 1;
    } while (lVar2 != 0);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10a1cc04c; end: 10a1cc097;  */

void FUN_10a1cc04c(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZdlPv(*(long *)(param_1 + 0x28) + -8);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(long *)(param_1 + 8) + -8);
    return;
  }
  return;
}



/* Entry: 10a1cc098; end: 10a1cc10b;  */

void FUN_10a1cc098(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *(ulong *)(param_1 + 0x40);
  if (uVar4 < 8) {
    *(undefined8 *)(param_1 + uVar4 * 8) = param_2;
    *(ulong *)(param_1 + 0x40) = uVar4 + 1;
    return;
  }
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  puVar2 = puVar1;
  puVar3 = (undefined8 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(puVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  uVar8 = puVar3[1];
  uVar7 = *puVar3;
  uVar6 = puVar3[3];
  uVar5 = puVar3[2];
  *puVar3 = &UNK_10e52b660;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar2[1] = uVar8;
  *puVar2 = uVar7;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  return;
}



/* Entry: 10a1cc10c; end: 10a1cc18b;  */

void FUN_10a1cc10c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10a1cc18c; end: 10a1cc247;  */

void FUN_10a1cc18c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuStack_60;
  undefined1 *puStack_58;
  undefined8 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  puVar1 = PTR___tlv_bootstrap_11340d750;
  ppuVar4 = &PTR___tlv_bootstrap_11340d750;
  ppuVar2 = ppuVar4;
  uStack_40 = param_2;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar3 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar2 & 1) == 0) {
    ppuVar2 = ppuVar3;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar2,0x100000000);
    (*(code *)puVar1)();
    *(undefined1 *)ppuVar4 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puStack_48 = ppuVar3[2];
  ppuStack_60 = &puStack_48;
  puStack_58 = &uStack_31;
  puStack_50 = &uStack_40;
  FUN_10a1cc248(param_1,&ppuStack_60);
  return;
}



/* Entry: 10a1cc248; end: 10a1cc27b;  */

char * FUN_10a1cc248(char *param_1,char *param_2)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  undefined1 uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uStack_58;
  
  puVar13 = (undefined8 *)**(long **)param_2;
  if (puVar13 == (undefined8 *)0x0) {
    *param_1 = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    return param_2;
  }
  uVar14 = **(undefined8 **)(param_2 + 0x10);
  cVar3 = *(char *)(puVar13[1] + 0x1e);
  *param_1 = cVar3;
  param_1[2] = '\x0e';
  param_1[3] = '\0';
  *(undefined8 *)(param_1 + 8) = uVar14;
  ppuVar10 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar15 = *(int *)ppuVar10;
  if (*(int *)ppuVar10 == 0) {
    uStack_58 = 0;
    _pthread_threadid_np(0,&uStack_58);
    *(int *)ppuVar10 = (int)uStack_58;
    iVar15 = (int)uStack_58;
  }
  *(int *)(param_1 + 0x10) = iVar15;
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  if ((cVar3 != '\0') && (puVar13 != (undefined8 *)0x0)) {
    if (((*(byte *)(puVar13[1] + 0x42) | *(byte *)(puVar13[1] + 0x43)) & 1) != 0) {
      uVar7 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar18 = cntvct_el0;
      if (uVar7 != 1000000000) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar18 / uVar7;
        }
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = ((uVar18 - uVar5 * uVar7) * 1000000000) / uVar7;
        }
        uVar18 = uVar6 + uVar5 * 1000000000;
      }
      *(ulong *)(param_1 + 0x18) = uVar18;
      lVar8 = lRam00000001137ea8e0;
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = *(undefined2 *)(param_1 + 2);
      uVar14 = *(undefined8 *)(param_1 + 8);
      puVar11 = puVar13;
      FUN_10a1333cc();
      if (puVar11 != (undefined8 *)0x0) {
        uVar16 = 3;
        if (lRam00000001137ea8e0 != lVar8) {
          uVar16 = 5;
        }
        lVar1 = 0;
        if (lRam00000001137ea8e0 != lVar8) {
          lVar1 = lVar8;
        }
        *puVar11 = uVar14;
        puVar11[1] = lVar1;
        puVar11[2] = uVar18;
        *(undefined4 *)(puVar11 + 3) = uVar2;
        *(undefined2 *)((long)puVar11 + 0x1c) = uVar4;
        *(undefined1 *)((long)puVar11 + 0x1e) = uVar16;
        if ((*(byte *)(puVar13 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10a1cc408);
          (*pcVar9)();
        }
        puVar13[0x18] = puVar13[0x18] + 1;
      }
    }
    if (*(char *)(puVar13[1] + 0x41) == '\x01') {
      plVar17 = (long *)puVar13[0xb];
      if (plVar17 != (long *)0x0) {
        plVar12 = plVar17;
        (**(code **)(*plVar17 + 0x10))(plVar17,*(undefined8 *)(param_1 + 8));
        *(long **)(param_1 + 0x20) = plVar12;
      }
      param_1[0x28] = plVar17 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10a1cc27c; end: 10a1cc407;  */

undefined1 * FUN_10a1cc27c(undefined1 *param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  int iVar12;
  undefined1 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uStack_58;
  
  *param_1 = (char)param_2;
  *(undefined2 *)(param_1 + 2) = 0xe;
  *(undefined8 *)(param_1 + 8) = param_4;
  ppuVar9 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar12 = *(int *)ppuVar9;
  if (*(int *)ppuVar9 == 0) {
    uStack_58 = 0;
    _pthread_threadid_np(0,&uStack_58);
    *(int *)ppuVar9 = (int)uStack_58;
    iVar12 = (int)uStack_58;
  }
  *(int *)(param_1 + 0x10) = iVar12;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x28] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    if (((*(byte *)(param_3[1] + 0x42) | *(byte *)(param_3[1] + 0x43)) & 1) != 0) {
      uVar6 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar15 = cntvct_el0;
      if (uVar6 != 1000000000) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar15 / uVar6;
        }
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = ((uVar15 - uVar4 * uVar6) * 1000000000) / uVar6;
        }
        uVar15 = uVar5 + uVar4 * 1000000000;
      }
      *(ulong *)(param_1 + 0x18) = uVar15;
      lVar7 = lRam00000001137ea8e0;
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = *(undefined2 *)(param_1 + 2);
      uVar16 = *(undefined8 *)(param_1 + 8);
      puVar10 = param_3;
      FUN_10a1333cc();
      if (puVar10 != (undefined8 *)0x0) {
        uVar13 = 3;
        if (lRam00000001137ea8e0 != lVar7) {
          uVar13 = 5;
        }
        lVar1 = 0;
        if (lRam00000001137ea8e0 != lVar7) {
          lVar1 = lVar7;
        }
        *puVar10 = uVar16;
        puVar10[1] = lVar1;
        puVar10[2] = uVar15;
        *(undefined4 *)(puVar10 + 3) = uVar2;
        *(undefined2 *)((long)puVar10 + 0x1c) = uVar3;
        *(undefined1 *)((long)puVar10 + 0x1e) = uVar13;
        if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1cc408);
          (*pcVar8)();
        }
        param_3[0x18] = param_3[0x18] + 1;
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar14 = (long *)param_3[0xb];
      if (plVar14 != (long *)0x0) {
        plVar11 = plVar14;
        (**(code **)(*plVar14 + 0x10))(plVar14,*(undefined8 *)(param_1 + 8));
        *(long **)(param_1 + 0x20) = plVar11;
      }
      param_1[0x28] = plVar14 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10a1cc408; end: 10a1cc46f;  */

long FUN_10a1cc408(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (*(long *)(param_2 + 0x40) != 0) {
      lVar2 = *(long *)(param_2 + 0x40) << 3;
      lVar1 = param_2;
      do {
        FUN_10a1cc470(param_1,lVar1);
        lVar1 = lVar1 + 8;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  return param_1;
}



/* Entry: 10a1cc470; end: 10a1cc4ef;  */

undefined8 * FUN_10a1cc470(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *(ulong *)(param_1 + 0x40);
  if (uVar4 < 8) {
    puVar2 = (undefined8 *)(param_1 + uVar4 * 8);
    *puVar2 = *param_2;
    *(ulong *)(param_1 + 0x40) = uVar4 + 1;
    return puVar2;
  }
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  puVar2 = puVar1;
  puVar3 = (undefined8 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(puVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  uVar8 = puVar3[1];
  uVar7 = *puVar3;
  uVar6 = puVar3[3];
  uVar5 = puVar3[2];
  *puVar3 = &UNK_10e52b660;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar2[1] = uVar8;
  *puVar2 = uVar7;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  return puVar2;
}



/* Entry: 10a1cc4f0; end: 10a1cc50b;  */

void FUN_10a1cc4f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10a1cc50c; end: 10a1cc51f;  */

void FUN_10a1cc50c(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puStack_88;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined *)0x555555555555555 < puVar2) {
    func_0x000109ffded8();
    puVar3 = puVar2;
    if (puVar2 != param_2) {
      do {
        *param_3 = 0;
        *(undefined4 *)(param_3 + 0x18) = 0xffffffff;
        FUN_10a1cc630(param_3);
        uVar1 = *(uint *)(puVar3 + 0x18);
        if (uVar1 != 0xffffffff) {
          puStack_88 = param_3;
          (*(code *)(&PTR_DAT_110bad2d8)[uVar1])(&puStack_88,puVar3);
          *(uint *)(param_3 + 0x18) = uVar1;
        }
        uVar4 = *(undefined8 *)(puVar3 + 0x20);
        *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(puVar3 + 0x28);
        *(undefined8 *)(param_3 + 0x20) = uVar4;
        *(undefined8 *)(puVar3 + 0x20) = 0;
        *(undefined8 *)(puVar3 + 0x28) = 0;
        puVar3 = puVar3 + 0x30;
        param_3 = param_3 + 0x30;
      } while (puVar3 != param_2);
      do {
        FUN_10a1d37cc(puVar2 + 0x20);
        FUN_10a1cc630(puVar2);
        puVar2 = puVar2 + 0x30;
      } while (puVar2 != param_2);
    }
    return;
  }
  __Znwm((long)puVar2 * 0x30);
  return;
}



/* Entry: 10a1cc520; end: 10a1cc563;  */

void FUN_10a1cc520(ulong param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puStack_78;
  
  if (0x555555555555555 < param_1) {
    func_0x000109ffded8();
    uVar2 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = 0;
        *(undefined4 *)(param_3 + 0x18) = 0xffffffff;
        FUN_10a1cc630(param_3);
        uVar1 = *(uint *)(uVar2 + 0x18);
        if (uVar1 != 0xffffffff) {
          puStack_78 = param_3;
          (*(code *)(&PTR_DAT_110bad2d8)[uVar1])(&puStack_78,uVar2);
          *(uint *)(param_3 + 0x18) = uVar1;
        }
        uVar3 = *(undefined8 *)(uVar2 + 0x20);
        *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(uVar2 + 0x28);
        *(undefined8 *)(param_3 + 0x20) = uVar3;
        *(undefined8 *)(uVar2 + 0x20) = 0;
        *(undefined8 *)(uVar2 + 0x28) = 0;
        uVar2 = uVar2 + 0x30;
        param_3 = param_3 + 0x30;
      } while (uVar2 != param_2);
      do {
        FUN_10a1d37cc(param_1 + 0x20);
        FUN_10a1cc630(param_1);
        param_1 = param_1 + 0x30;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm(param_1 * 0x30);
  return;
}



/* Entry: 10a1cc564; end: 10a1cc62f;  */

void FUN_10a1cc564(long param_1,long param_2,undefined1 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puStack_58;
  
  lVar2 = param_1;
  if (param_1 != param_2) {
    do {
      *param_3 = 0;
      *(undefined4 *)(param_3 + 0x18) = 0xffffffff;
      FUN_10a1cc630(param_3);
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 != 0xffffffff) {
        puStack_58 = param_3;
        (*(code *)(&PTR_DAT_110bad2d8)[uVar1])(&puStack_58,lVar2);
        *(uint *)(param_3 + 0x18) = uVar1;
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(param_3 + 0x20) = uVar3;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      lVar2 = lVar2 + 0x30;
      param_3 = param_3 + 0x30;
    } while (lVar2 != param_2);
    do {
      FUN_10a1d37cc(param_1 + 0x20);
      FUN_10a1cc630(param_1);
      param_1 = param_1 + 0x30;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10a1cc630; end: 10a1cc683;  */

void FUN_10a1cc630(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110bad2c8)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}


