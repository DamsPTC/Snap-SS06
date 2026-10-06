/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a51e030; end: 10a51e103;  */

undefined8 * FUN_10a51e030(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bece90;
  if (*(char *)(param_1 + 0x37) == '\x01') {
    FUN_10ace88d0(param_1 + 0x34);
  }
  param_1[0x19] = &PTR_FUN_110be9ec0;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a51e104; end: 10a51e1f3;  */

void FUN_10a51e104(void)

{
  return;
}



/* Entry: 10a51e1f4; end: 10a51e377;  */

/* WARNING: Removing unreachable block (ram,0x00010a51e2ec) */
/* WARNING: Removing unreachable block (ram,0x00010a51e2f0) */
/* WARNING: Removing unreachable block (ram,0x00010a51e2f8) */
/* WARNING: Removing unreachable block (ram,0x00010a51e300) */
/* WARNING: Removing unreachable block (ram,0x00010a51e30c) */
/* WARNING: Removing unreachable block (ram,0x00010a51e314) */
/* WARNING: Removing unreachable block (ram,0x00010a51e31c) */
/* WARNING: Removing unreachable block (ram,0x00010a51e320) */

void FUN_10a51e1f4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_48;
  
  lVar7 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(lVar7 + 0x38) & 1) != 0) {
    puVar5 = (undefined8 *)0xa0;
    __Znwm();
    puVar6 = puVar5 + 3;
    *(undefined2 *)puVar6 = 4;
    puVar5[2] = 0;
    puVar5[1] = 0x200000006;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = puVar6;
    puVar5[0x12] = 0;
    *puVar5 = &PTR_DAT_110ae91c0;
    *(undefined2 *)(puVar5 + 0x13) = 0;
    puStack_48 = puVar5;
    if ((*(byte *)(param_2 + 0x1b8) & 1) != 0) {
      FUN_10ace8908(param_2 + 0x1a0,param_2,lVar7 + 0x10,lVar7 + 0x20);
      plVar1 = puVar5 + 2;
      do {
        lVar7 = *plVar1;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 2;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            FUN_109d1b4dc(puVar6);
            goto LAB_10a51e2cc;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar7 >> 1 & 1) != 0) {
LAB_10a51e2cc:
          *param_1 = puVar5;
          func_0x0001092b4274(&puStack_48,puVar5);
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a51e348);
  (*pcVar4)();
}



/* Entry: 10a51e378; end: 10a51e3af;  */

void FUN_10a51e378(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar1;
  *param_2 = &PTR_FUN_110becf00;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar1;
  param_2[7] = uVar3;
  param_2[6] = uVar2;
  return;
}



/* Entry: 10a51e3b0; end: 10a51e447;  */

void FUN_10a51e3b0(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_34;
  
  if (((*(byte *)(param_3 + 0x38) & 1) != 0) && ((*(byte *)(param_2 + 0x38) & 1) != 0)) {
    param_3 = param_3 + 0x20;
    func_0x00010a4ff654(param_3,param_2 + 0x20);
    if ((int)param_3 == 0) {
      uStack_34 = 0x40000000;
    }
    else {
      lVar1 = 0x10;
      if (param_4 != 0) {
        lVar1 = 0x18;
      }
      uStack_34 = *(undefined4 *)(param_2 + lVar1);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_10a26d5a0(param_1,&uStack_34,&stack0xffffffffffffffd0,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51e448);
  (*pcVar2)();
}



/* Entry: 10a51e448; end: 10a51e4c7;  */

void FUN_10a51e448(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110becf00;
  param_1[1] = &UNK_110beced0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}



/* Entry: 10a51e4c8; end: 10a51e5c7;  */

long FUN_10a51e4c8(long param_1)

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



/* Entry: 10a51e5c8; end: 10a51e837;  */

/* WARNING: Removing unreachable block (ram,0x00010a51e7cc) */
/* WARNING: Removing unreachable block (ram,0x00010a51e7d0) */
/* WARNING: Removing unreachable block (ram,0x00010a51e7d8) */
/* WARNING: Removing unreachable block (ram,0x00010a51e7e0) */
/* WARNING: Removing unreachable block (ram,0x00010a51e7e4) */

void FUN_10a51e5c8(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 in_x7;
  long lVar7;
  long *plVar8;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar6 = (undefined8 *)0x2b0;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *puVar6 = &PTR_FUN_110becfb0;
  func_0x0001098bae4c(puVar6,&UNK_10e4c0a4f,0x26,param_3,lVar7,puVar6 + 0x19,puVar6 + 0x4c,in_x7,0,0
                      ,&uStack_50);
  plVar8 = plStack_48;
  plVar1 = (long *)(param_2 + 0x28);
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  *puVar6 = &PTR_FUN_110becfb0;
  *(undefined1 *)(puVar6 + 0x1a) = 0;
  puVar6[0x1c] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x20] = 0;
  puVar6[0x1f] = 0;
  puVar6[0x19] = &PTR_FUN_110bec708;
  puVar6[0x21] = 0;
  puVar6[0x23] = 0;
  puVar6[0x22] = 0;
  puVar6[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar6 + 0x27) = 0x40000000;
  puVar6[0x24] = &PTR_FUN_110bed020;
  puVar6[0x25] = &UNK_110becff0;
  puVar6[0x28] = 0;
  puVar6[0x29] = 0;
  puVar6[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar6 + 0x2d) = 0x40000000;
  puVar6[0x2a] = &PTR_FUN_110bed020;
  puVar6[0x2b] = &UNK_110becff0;
  *(undefined1 *)(puVar6 + 0x4a) = 0;
  puVar6[0x2e] = 0;
  puVar6[0x2f] = 0;
  *(undefined1 *)(puVar6 + 0x30) = 0;
  lVar7 = puVar6[0xc];
  if (lVar7 == 0) {
    bVar5 = false;
    plVar8 = plVar1;
  }
  else {
    bVar5 = lVar7 != puVar6[0xb];
    plVar8 = (long *)0x0;
    if (!bVar5) {
      plVar8 = plVar1;
    }
  }
  *(undefined2 *)(puVar6 + 0x4d) = 0;
  puVar6[0x50] = 0x10a51ed80;
  puVar6[0x51] = &UNK_110bec820;
  puVar6[0x53] = 0;
  puVar6[0x52] = 0;
  puVar6[0x55] = 0;
  puVar6[0x54] = 0;
  puVar6[0x4c] = &PTR_DAT_110bed060;
  if ((!bVar5) && (*(char *)(plVar8[3] + 8) == '\x01')) {
    puVar6[0x55] = plVar8 + 2;
  }
  if ((lVar7 == 0) || (lVar7 == puVar6[0xb])) {
    uVar3 = *(undefined1 *)(*plVar1 + 0x488);
    *(undefined1 *)(puVar6 + 0x34) = 0;
    *(undefined1 *)(puVar6 + 0x46) = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x30] = 0;
    puVar6[0x48] = param_3;
    *(undefined1 *)(puVar6 + 0x49) = uVar3;
    *(undefined1 *)(puVar6 + 0x4a) = 1;
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 10a51e838; end: 10a51e903;  */

undefined8 * FUN_10a51e838(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110becfb0;
  FUN_10a51ed9c(param_1 + 0x30);
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110bec708;
  FUN_10a51b1ec(param_1 + 0x21);
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a51e904; end: 10a51e91b;  */

void FUN_10a51e904(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (*(char *)(param_1 + 0x250) == '\x01') {
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    func_0x00010a23175c(param_1 + 0x180,&uStack_30);
    plVar4 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    FUN_10a5046d8(param_1 + 400,0);
    if (*(char *)(param_1 + 0x230) == '\x01') {
      *(undefined1 *)(param_1 + 0x230) = 0;
    }
    return;
  }
  return;
}



/* Entry: 10a51e91c; end: 10a51eacb;  */

uint FUN_10a51e91c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 *puStack_58;
  long *plStack_50;
  
  lVar12 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar12 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  puVar7 = (undefined1 *)0x40;
  __Znwm();
  puVar10 = *(undefined1 **)(param_1 + 0x108);
  puVar3 = *(undefined1 **)(param_1 + 0x110);
  *puVar7 = *puVar10;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  FUN_10a2300f4(puVar7 + 8,*(long *)(puVar10 + 8),*(long *)(puVar10 + 0x10),
                (*(long *)(puVar10 + 0x10) - *(long *)(puVar10 + 8) >> 3) * 0x6db6db6db6db6db7);
  FUN_10a1ccb30(puVar7 + 0x20,puVar10 + 0x20);
  while (puVar10 = puVar10 + 0x40, puVar10 != puVar3) {
    FUN_10acf2a70(puVar7);
  }
  plVar8 = (long *)0x20;
  puStack_58 = puVar7;
  __Znwm();
  *plVar8 = (long)&PTR_FUN_110bed090;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = (long)puVar7;
  plStack_50 = plVar8;
  FUN_10a286fec(lVar2 + 0x20,&puStack_58);
  plVar8 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lVar12 == 0) {
    uVar6 = 1;
  }
  else {
    uVar9 = *(undefined8 *)(lVar12 + 0x20);
    FUN_10a51b468(uVar9,*(undefined8 *)(lVar2 + 0x20));
    uVar6 = (uint)uVar9 ^ 1;
  }
  return uVar6;
}



/* Entry: 10a51eacc; end: 10a51ec4b;  */

/* WARNING: Removing unreachable block (ram,0x00010a51ebc0) */
/* WARNING: Removing unreachable block (ram,0x00010a51ebc4) */
/* WARNING: Removing unreachable block (ram,0x00010a51ebcc) */
/* WARNING: Removing unreachable block (ram,0x00010a51ebd4) */
/* WARNING: Removing unreachable block (ram,0x00010a51ebe0) */
/* WARNING: Removing unreachable block (ram,0x00010a51ebe8) */
/* WARNING: Removing unreachable block (ram,0x00010a51ebf0) */
/* WARNING: Removing unreachable block (ram,0x00010a51ebf4) */

void FUN_10a51eacc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puStack_48;
  
  lVar8 = *(long *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(lVar8 + 0x20);
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar6 = puVar5 + 3;
  *(undefined2 *)puVar6 = 4;
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar6;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puStack_48 = puVar5;
  if ((*(byte *)(param_2 + 0x250) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a51ec1c);
    (*pcVar4)();
  }
  FUN_10acdd29c(param_2 + 0x180,param_2,lVar8 + 0x10,uVar7);
  plVar1 = puVar5 + 2;
  do {
    lVar8 = *plVar1;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar6);
        goto LAB_10a51eba0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_10a51eba0:
      *param_1 = puVar5;
      func_0x0001092b4274(&puStack_48,puVar5);
      return;
    }
  } while( true );
}



/* Entry: 10a51ec4c; end: 10a51ec9f;  */

void FUN_10a51ec4c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar4;
  *param_2 = &PTR_FUN_110bed020;
  lVar5 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10a51eca0; end: 10a51ed23;  */

void FUN_10a51eca0(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a51b378(uVar2,*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == 0) {
    uStack_34 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_34 = *(undefined4 *)(param_2 + lVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_34,&stack0xffffffffffffffd0,1);
  return;
}



/* Entry: 10a51ed24; end: 10a51ed9b;  */

void FUN_10a51ed24(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bed020;
  param_1[1] = &UNK_110becff0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a51ed9c; end: 10a51ee8b;  */

long FUN_10a51ed9c(long param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_10a5046d8(param_1 + 0x10,0);
    FUN_10a22ffb4(param_1);
  }
  return param_1;
}



/* Entry: 10a51ee8c; end: 10a51ee8f;  */

void FUN_10a51ee8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a51ee90; end: 10a51eea3;  */

void FUN_10a51ee90(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a51eea4; end: 10a51eeab;  */

void FUN_10a51eea4(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(char *)(lVar1 + 0x38) == '\x01') && (*(char *)(lVar1 + 0x37) < '\0')) {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x20));
    }
    lStack_28 = lVar1 + 8;
    FUN_10a2303d4(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a51eeac; end: 10a51eee3;  */

undefined8 FUN_10a51eeac(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bed0d0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a51eee4; end: 10a51eee7;  */

void FUN_10a51eee4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a51eee8; end: 10a51ef8f;  */

undefined8 * FUN_10a51eee8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bed0f0;
  (**(code **)param_1[0x10])();
  (**(code **)param_1[8])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a51ef90; end: 10a51f203;  */

/* WARNING: Removing unreachable block (ram,0x00010a51f198) */
/* WARNING: Removing unreachable block (ram,0x00010a51f19c) */
/* WARNING: Removing unreachable block (ram,0x00010a51f1a4) */
/* WARNING: Removing unreachable block (ram,0x00010a51f1ac) */
/* WARNING: Removing unreachable block (ram,0x00010a51f1b0) */

void FUN_10a51ef90(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1d0;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bed130;
  func_0x0001098bae4c(puVar5,&UNK_10e4c0d5f,0x1c,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x30,in_x7,0,0
                      ,&uStack_50);
  plVar8 = plStack_48;
  plVar1 = (long *)(param_2 + 0x28);
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110bed130;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bed180;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_DAT_110bed238;
  puVar5[0x25] = &UNK_110bed208;
  *(undefined2 *)((long)puVar5 + 0x13c) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_DAT_110bed238;
  puVar5[0x29] = &UNK_110bed208;
  *(undefined2 *)((long)puVar5 + 0x15c) = 0;
  *(undefined1 *)(puVar5 + 0x2c) = 0;
  *(undefined1 *)(puVar5 + 0x2f) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    plVar8 = plVar1;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    plVar8 = (long *)0x0;
    if (!bVar4) {
      plVar8 = plVar1;
    }
  }
  *(undefined2 *)(puVar5 + 0x31) = 0;
  puVar5[0x34] = FUN_10a51fb78;
  puVar5[0x35] = &UNK_110bed298;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  puVar5[0x30] = &PTR_FUN_110bed278;
  if ((!bVar4) && (*(char *)(plVar8[3] + 8) == '\x01')) {
    puVar5[0x39] = plVar8 + 2;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    lVar9 = *(long *)(*plVar1 + 0x490);
    lVar7 = *(long *)(lVar9 + 0x18);
    if ((lVar7 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lVar7 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar9 + 0x10);
    }
    puVar5[0x2c] = uVar6;
    puVar5[0x2d] = lVar7;
    puVar5[0x2e] = 0;
    *(undefined1 *)(puVar5 + 0x2f) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a51f204; end: 10a51f2bf;  */

undefined8 * FUN_10a51f204(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bed130;
  func_0x00010a51fcc8(param_1 + 0x2c);
  param_1[0x19] = &PTR_FUN_110bed180;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a51f2c0; end: 10a51f2ff;  */

void FUN_10a51f2c0(void)

{
  return;
}



/* Entry: 10a51f300; end: 10a51f6a3;  */

/* WARNING: Removing unreachable block (ram,0x00010a51f56c) */
/* WARNING: Removing unreachable block (ram,0x00010a51f570) */
/* WARNING: Removing unreachable block (ram,0x00010a51f578) */
/* WARNING: Removing unreachable block (ram,0x00010a51f580) */
/* WARNING: Removing unreachable block (ram,0x00010a51f58c) */
/* WARNING: Removing unreachable block (ram,0x00010a51f594) */
/* WARNING: Removing unreachable block (ram,0x00010a51f59c) */
/* WARNING: Removing unreachable block (ram,0x00010a51f5a0) */

void FUN_10a51f300(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code **ppcVar4;
  long *plVar5;
  code **ppcVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  code **ppcVar10;
  undefined8 *extraout_x8;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  code **ppcStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(lVar13 + 0x1d) & 1) != 0) {
    ppcVar4 = (code **)0xa0;
    __Znwm();
    ppcVar10 = ppcVar4 + 3;
    *(undefined2 *)ppcVar10 = 4;
    ppcVar4[2] = (code *)0x0;
    ppcVar4[1] = (code *)0x200000006;
    ppcVar4[5] = (code *)0x0;
    ppcVar4[4] = (code *)0x0;
    ppcVar4[7] = (code *)0x0;
    ppcVar4[6] = (code *)0x0;
    ppcVar4[9] = (code *)0x0;
    ppcVar4[8] = (code *)0x0;
    ppcVar4[0xb] = (code *)0x0;
    ppcVar4[10] = (code *)0x0;
    ppcVar4[0xd] = (code *)0x0;
    ppcVar4[0xc] = (code *)0x0;
    ppcVar4[0xf] = (code *)0x0;
    ppcVar4[0xe] = (code *)0x0;
    ppcVar4[0x10] = (code *)0x0;
    ppcVar4[0x11] = (code *)ppcVar10;
    ppcVar4[0x12] = (code *)0x0;
    *ppcVar4 = (code *)&PTR_DAT_110ae91c0;
    *(undefined2 *)(ppcVar4 + 0x13) = 0;
    ppcStack_118 = ppcVar4;
    if ((*(byte *)(param_2 + 0x178) & 1) != 0) {
      if (*(undefined8 **)(param_2 + 0x160) == (undefined8 *)0x0) {
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f65e35d,&UNK_10f65e398,0x15,&UNK_10f65e41a);
        }
      }
      else {
        if (*(long *)(param_2 + 0x170) == 0) {
          (**(code **)**(undefined8 **)(param_2 + 0x160))(&uStack_98);
          plVar5 = *(long **)(param_2 + 0x170);
          if (plVar5 != (long *)0x0) {
            puVar1 = (ulong *)(plVar5 + 1);
            do {
              uVar11 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar11 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar11 & 0x1fffffffc) == 4) {
              do {
                uVar11 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar11 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar11 - 1 == 0) {
                (**(code **)(*plVar5 + 8))();
              }
            }
          }
          *(code **)(param_2 + 0x170) = uStack_98;
        }
        lStack_110 = 0;
        lStack_108 = 0;
        uStack_100 = 0;
        uStack_98 = (code *)CONCAT44(uStack_98._4_4_,0x20000000);
        FUN_10a26ebc0(&lStack_110,0,&uStack_98,(long)&uStack_98 + 4,1);
        pcStack_d8 = FUN_10a51fe28;
        ppuStack_d0 = &PTR_FUN_110bed2f0;
        lStack_c8 = param_2 + 0x160;
        uStack_98 = FUN_10a51fe28;
        ppuStack_90 = &PTR_FUN_110bed2f0;
        lStack_e8 = lStack_108;
        lStack_f0 = lStack_110;
        uStack_e0 = uStack_100;
        lStack_110 = 0;
        lStack_108 = 0;
        uStack_100 = 0;
        param_2 = param_2 + 0x18;
        lStack_88 = lStack_c8;
        func_0x0001098aeecc(param_2,&uStack_98,&UNK_110bed2d0,&lStack_f0);
        if (lStack_f0 != 0) {
          lStack_e8 = lStack_f0;
          __ZdlPv();
        }
        (*(code *)*ppuStack_90)(&ppuStack_90);
        (*(code *)*ppuStack_d0)(&ppuStack_d0);
        if (lStack_110 != 0) {
          lStack_108 = lStack_110;
          __ZdlPv();
        }
        *(int *)(lVar13 + 0x10) = (int)param_2;
      }
      ppcVar6 = ppcVar4 + 2;
      do {
        pcVar12 = *ppcVar6;
        if (pcVar12 == (code *)0x0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppcVar6,0x10);
          if (bVar3) {
            *ppcVar6 = (code *)0x2;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            FUN_109d1b4dc(ppcVar10);
            goto LAB_10a51f54c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)pcVar12 >> 1 & 1) != 0) {
LAB_10a51f54c:
          *param_1 = ppcVar4;
          do {
            ppcVar10 = ppcVar4;
            func_0x0001092b4274(&ppcStack_118);
            ppcVar6 = (code **)0x0;
            do {
              iVar9 = (int)ppcVar10;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                return;
              }
              ___stack_chk_fail();
              if (iVar9 == 0) {
                __Unwind_Resume(ppcVar6);
                func_0x000104bd46a0();
                puVar7 = (undefined8 *)0x20;
                __Znwm();
                puVar7[1] = 0;
                *puVar7 = &PTR_FUN_110bed1c0;
                puVar7[2] = 0;
                puVar7[3] = 0;
                lVar13 = (long)ppcVar6[9] - (long)ppcVar6[8];
                if (lVar13 != 0) {
                  if (lVar13 < 0) {
                    FUN_10a51fa3c();
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x10a51f738);
                    (*pcVar12)();
                  }
                  lVar8 = lVar13;
                  __Znwm();
                  puVar7[1] = lVar8;
                  puVar7[3] = lVar8 + lVar13;
                  _memcpy();
                  puVar7[2] = lVar8 + lVar13;
                }
                *extraout_x8 = puVar7;
                return;
              }
              ___cxa_begin_catch(ppcVar6);
              ppcVar4 = ppcStack_118;
              __ZSt17current_exceptionv(&pcStack_d8);
              ppcVar10 = &pcStack_d8;
              func_0x000109d1b350(ppcVar4);
              ppcVar6 = &pcStack_d8;
              __ZNSt13exception_ptrD1Ev();
              ___cxa_end_catch();
              *param_1 = 0;
            } while (ppcVar4 == (code **)0x0);
          } while( true );
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a51f5e4);
  (*pcVar12)();
}



/* Entry: 10a51f6a4; end: 10a51f75b;  */

void FUN_10a51f6a4(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110bed1c0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_10a51fa3c();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51f738);
      (*pcVar2)();
    }
    lVar4 = lVar1;
    __Znwm();
    puVar3[1] = lVar4;
    puVar3[3] = lVar4 + lVar1;
    _memcpy();
    puVar3[2] = lVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a51f75c; end: 10a51f81b;  */

void FUN_10a51f75c(long param_1,int param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 0x48);
  if (uVar7 < *(ulong *)(param_1 + 0x50)) {
    lVar6 = uVar7 + 1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    lVar5 = uVar7 - lVar4;
    uVar7 = lVar5 + 1;
    if ((long)uVar7 < 0) {
      FUN_10a51fa3c();
      lVar4 = *(long *)(param_1 + 0x40);
      lVar5 = *(long *)(param_1 + 0x48);
      if ((((long)param_2 + 1U == lVar5 - lVar4) ||
          ((lVar4 != lVar5 && ((ulong)(long)param_2 < (ulong)(lVar5 - lVar4))))) && (lVar4 != lVar5)
         ) {
        *(long *)(param_1 + 0x48) = lVar5 + -1;
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51f85c);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(param_1 + 0x50) - lVar4;
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar7 || uVar3 - uVar7 == 0) {
      uVar3 = uVar7;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar3;
      __Znwm();
    }
    lVar6 = uVar7 + lVar5 + 1;
    _memcpy(uVar7,lVar4,lVar5);
    *(ulong *)(param_1 + 0x40) = uVar7;
    *(long *)(param_1 + 0x48) = lVar6;
    *(ulong *)(param_1 + 0x50) = uVar7 + uVar3;
    if (lVar4 != 0) {
      __ZdlPv(lVar4);
    }
  }
  *(long *)(param_1 + 0x48) = lVar6;
  return;
}



/* Entry: 10a51f81c; end: 10a51f85b;  */

void FUN_10a51f81c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  if ((((long)param_2 + 1U == lVar2 - lVar1) ||
      ((lVar1 != lVar2 && ((ulong)(long)param_2 < (ulong)(lVar2 - lVar1))))) && (lVar1 != lVar2)) {
    *(long *)(param_1 + 0x48) = lVar2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a51f85c);
  (*pcVar3)();
}



/* Entry: 10a51f85c; end: 10a51f8d3;  */

undefined8 * FUN_10a51f85c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bed1c0;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a51f8d4; end: 10a51fa3b;  */

void FUN_10a51f8d4(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
  lVar3 = lStack_98 - lStack_a0;
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) <= uVar4) {
LAB_10a51f9f8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51f9fc);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4c0c6c,0x1c,*(long *)(param_1 + 8) + uVar4,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar4) goto LAB_10a51f9f8;
      *(int *)(lStack_a0 + uVar4 * 4) = (int)plVar2;
      uVar4 = uVar4 + 1;
    } while (lVar3 >> 2 != uVar4);
  }
  pcStack_88 = FUN_10a51fa50;
  appuStack_80[0] = &PTR_DAT_110bed1f0;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_88,&lStack_a0);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar3 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a51fa3c; end: 10a51fa4f;  */

void FUN_10a51fa3c(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a51fa50; end: 10a51fa9f;  */

void FUN_10a51fa50(void)

{
  return;
}



/* Entry: 10a51faa0; end: 10a51fb03;  */

void FUN_10a51faa0(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_14;
  
  if (((*(byte *)(param_3 + 0x1d) & 1) != 0) && ((*(byte *)(param_2 + 0x1d) & 1) != 0)) {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_14 = *(undefined4 *)(param_2 + lVar1);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_10a26d5a0(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51fb04);
  (*pcVar2)();
}



/* Entry: 10a51fb04; end: 10a51fb33;  */

void FUN_10a51fb04(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_DAT_110bed238;
  param_1[1] = &UNK_110bed208;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10a51fb34; end: 10a51fb77;  */

void FUN_10a51fb34(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 uStack_11;
  
  if ((*(byte *)(param_3 + 0x1d) & 1) != 0) {
    if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)(param_1 + 0x48))
                (param_2,*(undefined4 *)(param_3 + 0x10),&uStack_11);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51fb78);
  (*pcVar1)();
}



/* Entry: 10a51fb78; end: 10a51fb93;  */

void FUN_10a51fb78(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = FUN_10a51fb94;
  param_1[1] = &PTR_FUN_110bed2b8;
  param_1[2] = param_2;
  return;
}



/* Entry: 10a51fb94; end: 10a51fc4b;  */

void FUN_10a51fb94(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_5 != 0) {
    lStack_50 = param_1;
    plStack_48 = param_2;
    func_0x0001098af634(&lStack_50,*param_4);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_2,param_3);
    puVar1 = (undefined8 *)0x1137eb240;
    if (*param_2 != -1) {
      puVar1 = (undefined8 *)(param_1 + *param_2);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*(ulong *)(param_6 + 0x10) < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *(ulong *)(param_6 + 0x10) * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a51fc4c);
  (*pcVar2)();
}



/* Entry: 10a51fc4c; end: 10a51fc6f;  */

void FUN_10a51fc4c(void)

{
  return;
}



/* Entry: 10a51fc70; end: 10a51fd43;  */

long FUN_10a51fc70(long param_1)

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



/* Entry: 10a51fd44; end: 10a51fd63;  */

void FUN_10a51fd44(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a51fd64; end: 10a51fe27;  */

long * FUN_10a51fd64(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010a51fd94();
  }
  return param_1;
}



/* Entry: 10a51fe28; end: 10a51ffeb;  */

void FUN_10a51fe28(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar2 = &lStack_50;
  lStack_50 = param_1;
  uStack_48 = param_2;
  if (param_5 != 0) {
    plVar5 = &lStack_40;
    lStack_40 = param_1;
    uStack_38 = param_2;
    func_0x0001098b9090(plVar5,*param_4);
    if (*plVar5 != 0) {
      FUN_10a51ffec(&lStack_50,param_3);
      plVar5 = (long *)(*(long *)(param_6 + 0x10) + 0x10);
      if ((*plVar5 == 0) || (((uint)*(undefined8 *)(*plVar5 + 0x10) >> 1 & 1) == 0)) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        func_0x0001092af8bc(plVar5);
        lVar3 = *plVar5;
        if ((*(byte *)(lVar3 + 0xf8) & 1) == 0) goto LAB_10a51ff98;
        puVar6 = (undefined8 *)0x60;
        __Znwm();
        *(undefined1 *)puVar6 = 0;
        *(undefined1 *)(puVar6 + 7) = 0;
        if (*(char *)(lVar3 + 0xd0) == '\x01') {
          if (*(char *)(lVar3 + 0xaf) < '\0') {
            func_0x000107c3192c(puVar6,*(undefined8 *)(lVar3 + 0x98),*(undefined8 *)(lVar3 + 0xa0));
          }
          else {
            uVar8 = *(undefined8 *)(lVar3 + 0xa0);
            uVar4 = *(undefined8 *)(lVar3 + 0x98);
            puVar6[2] = *(undefined8 *)(lVar3 + 0xa8);
            puVar6[1] = uVar8;
            *puVar6 = uVar4;
          }
          uVar4 = *(undefined8 *)(lVar3 + 0xb0);
          puVar6[4] = 0;
          puVar6[3] = uVar4;
          puVar6[5] = 0;
          puVar6[6] = 0;
          FUN_10a503a10();
          *(undefined1 *)(puVar6 + 7) = 1;
        }
        puVar7 = puVar6 + 8;
        *(undefined1 *)puVar7 = 0;
        *(undefined1 *)(puVar6 + 0xb) = 0;
        if (*(char *)(lVar3 + 0xf0) == '\x01') {
          if (*(char *)(lVar3 + 0xef) < '\0') {
            func_0x000107c3192c(puVar7,*(undefined8 *)(lVar3 + 0xd8),*(undefined8 *)(lVar3 + 0xe0));
          }
          else {
            uVar8 = *(undefined8 *)(lVar3 + 0xe0);
            uVar4 = *(undefined8 *)(lVar3 + 0xd8);
            puVar6[10] = *(undefined8 *)(lVar3 + 0xe8);
            puVar6[9] = uVar8;
            *puVar7 = uVar4;
          }
          *(undefined1 *)(puVar6 + 0xb) = 1;
        }
      }
      lVar3 = *plVar2;
      *plVar2 = (long)puVar6;
      if (lVar3 != 0) {
        func_0x00010a51fd94();
      }
    }
    return;
  }
LAB_10a51ff98:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a51ff9c);
  (*pcVar1)();
}



/* Entry: 10a51ffec; end: 10a52008f;  */

long FUN_10a51ffec(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001137eb308 & 1) == 0) {
    iVar1 = 0x137eb308;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(FUN_10a51fd64,0x1137eb300,0x100000000);
      ___cxa_guard_release(0x1137eb308);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1137eb300;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10a520090; end: 10a5200ab;  */

void FUN_10a520090(void)

{
  return;
}



/* Entry: 10a5200ac; end: 10a520153;  */

undefined8 * FUN_10a5200ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bed318;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a520154; end: 10a520393;  */

/* WARNING: Removing unreachable block (ram,0x00010a520328) */
/* WARNING: Removing unreachable block (ram,0x00010a52032c) */
/* WARNING: Removing unreachable block (ram,0x00010a520334) */
/* WARNING: Removing unreachable block (ram,0x00010a52033c) */
/* WARNING: Removing unreachable block (ram,0x00010a520340) */

void FUN_10a520154(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1b8;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bed358;
  func_0x0001098bae4c(puVar5,&UNK_10e4c0fab,0x5f,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x2d,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110bed358;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bec970;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bed3c8;
  puVar5[0x25] = &UNK_110bed398;
  *(undefined2 *)((long)puVar5 + 0x13c) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_FUN_110bed3c8;
  puVar5[0x29] = &UNK_110bed398;
  *(undefined2 *)((long)puVar5 + 0x15c) = 0;
  *(undefined2 *)(puVar5 + 0x2c) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x2e) = 0;
  puVar5[0x31] = FUN_10a520820;
  puVar5[0x32] = &UNK_110beca88;
  puVar5[0x33] = 0;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x2d] = &PTR_FUN_110bed408;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x36] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x161) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a520394; end: 10a52043f;  */

undefined8 * FUN_10a520394(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bed358;
  param_1[0x19] = &PTR_FUN_110bec970;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a520440; end: 10a52047f;  */

void FUN_10a520440(void)

{
  return;
}



/* Entry: 10a520480; end: 10a52070f;  */

/* WARNING: Removing unreachable block (ram,0x00010a520610) */
/* WARNING: Removing unreachable block (ram,0x00010a520614) */
/* WARNING: Removing unreachable block (ram,0x00010a52061c) */
/* WARNING: Removing unreachable block (ram,0x00010a520624) */
/* WARNING: Removing unreachable block (ram,0x00010a520630) */
/* WARNING: Removing unreachable block (ram,0x00010a520638) */
/* WARNING: Removing unreachable block (ram,0x00010a520640) */
/* WARNING: Removing unreachable block (ram,0x00010a520644) */

void FUN_10a520480(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(lVar8 + 0x1d) & 1) != 0) {
    puVar4 = (undefined8 *)0xa0;
    __Znwm();
    puVar6 = puVar4 + 3;
    *(undefined2 *)puVar6 = 4;
    puVar4[2] = 0;
    puVar4[1] = 0x200000006;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = puVar6;
    puVar4[0x12] = 0;
    *puVar4 = &PTR_DAT_110ae91c0;
    *(undefined2 *)(puVar4 + 0x13) = 0;
    puStack_b8 = puVar4;
    if ((*(byte *)(param_2 + 0x161) & 1) != 0) {
      plVar5 = &lStack_b0;
      lStack_b0 = param_2;
      func_0x0001098ac018(plVar5,&UNK_10e4c0c6c,0x1c,&lStack_a8,0,1);
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      uStack_8c = SUB84(plVar5,0);
      FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
      pcStack_88 = FUN_10a52083c;
      appuStack_80[0] = &PTR_FUN_110bed428;
      param_2 = param_2 + 0x18;
      FUN_10a51c4bc(param_2,&pcStack_88,&lStack_a8);
      (*(code *)*appuStack_80[0])(appuStack_80);
      if (lStack_a8 != 0) {
        lStack_a0 = lStack_a8;
        __ZdlPv();
      }
      plVar5 = puVar4 + 2;
      *(int *)(lVar8 + 0x10) = (int)param_2;
      do {
        lVar8 = *plVar5;
        if (lVar8 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = 2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            FUN_109d1b4dc(puVar6);
            goto LAB_10a5205f0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_10a5205f0:
          while( true ) {
            *param_1 = puVar4;
            puVar6 = puVar4;
            func_0x0001092b4274(&puStack_b8);
            lVar8 = 0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return;
            }
            ___stack_chk_fail();
            if ((int)puVar6 == 0) break;
            (*(code *)*appuStack_80[0])(appuStack_80);
            if (lStack_a8 != 0) {
              lStack_a0 = lStack_a8;
              __ZdlPv();
            }
            ___cxa_begin_catch(lVar8);
            __ZSt17current_exceptionv(&pcStack_88);
            func_0x000109d1b350(puVar4,&pcStack_88);
            __ZNSt13exception_ptrD1Ev(&pcStack_88);
            ___cxa_end_catch();
          }
          __Unwind_Resume(lVar8);
          func_0x000104bd46a0();
          uVar7 = *(undefined8 *)(lVar8 + 8);
          *puVar6 = &PTR____cxa_pure_virtual_110b17f40;
          puVar6[1] = uVar7;
          uVar7 = *(undefined8 *)(lVar8 + 0x10);
          *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(lVar8 + 0x18);
          puVar6[2] = uVar7;
          *puVar6 = &PTR_FUN_110bed3c8;
          *(undefined2 *)((long)puVar6 + 0x1c) = *(undefined2 *)(lVar8 + 0x1c);
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a520684);
  (*pcVar3)();
}



/* Entry: 10a520710; end: 10a520747;  */

void FUN_10a520710(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar1;
  *param_2 = &PTR_FUN_110bed3c8;
  *(undefined2 *)((long)param_2 + 0x1c) = *(undefined2 *)(param_1 + 0x1c);
  return;
}



/* Entry: 10a520748; end: 10a5207ab;  */

void FUN_10a520748(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_14;
  
  if (((*(byte *)(param_3 + 0x1d) & 1) != 0) && ((*(byte *)(param_2 + 0x1d) & 1) != 0)) {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_14 = *(undefined4 *)(param_2 + lVar1);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_10a26d5a0(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5207ac);
  (*pcVar2)();
}



/* Entry: 10a5207ac; end: 10a5207db;  */

void FUN_10a5207ac(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bed3c8;
  param_1[1] = &UNK_110bed398;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10a5207dc; end: 10a52081f;  */

void FUN_10a5207dc(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 uStack_11;
  
  if ((*(byte *)(param_3 + 0x1d) & 1) != 0) {
    if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)(param_1 + 0x48))
                (param_2,*(undefined4 *)(param_3 + 0x10),&uStack_11);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a520820);
  (*pcVar1)();
}



/* Entry: 10a520820; end: 10a52083b;  */

void FUN_10a520820(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = FUN_10a51c3e0;
  param_1[1] = &PTR_FUN_110becaa8;
  param_1[2] = param_2;
  return;
}



/* Entry: 10a52083c; end: 10a520927;  */

long * FUN_10a52083c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                    long param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar3 = &lStack_50;
  lStack_50 = param_1;
  uStack_48 = param_2;
  if (param_5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a520914);
    (*pcVar1)();
  }
  plVar2 = &lStack_40;
  lStack_40 = param_1;
  uStack_38 = param_2;
  FUN_10a51ffec(plVar2,*param_4);
  if (*plVar2 != 0) {
    FUN_10a51c63c(&lStack_50,param_3);
    lVar6 = *plVar2;
    if (*(char *)(lVar6 + 0x58) == '\x01') {
      plVar4 = (long *)0x18;
      __Znwm();
      plVar2 = plVar4;
      if (*(char *)(lVar6 + 0x57) < '\0') {
        func_0x000107c3192c(plVar4,*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x48));
      }
      else {
        lVar8 = *(long *)(lVar6 + 0x48);
        lVar7 = *(long *)(lVar6 + 0x40);
        plVar4[2] = *(long *)(lVar6 + 0x50);
        plVar4[1] = lVar8;
        *plVar4 = lVar7;
      }
    }
    else {
      plVar4 = (long *)0x0;
      plVar2 = plVar3;
    }
    plVar5 = (long *)*plVar3;
    *plVar3 = (long)plVar4;
    if (plVar5 != (long *)0x0) {
      if (plVar5 != (long *)0x0) {
        if (*(char *)((long)plVar5 + 0x17) < '\0') {
          __ZdlPv(*plVar5);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar5);
        return plVar5;
      }
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a520928; end: 10a520943;  */

void FUN_10a520928(void)

{
  return;
}



/* Entry: 10a520944; end: 10a5209eb;  */

undefined8 * FUN_10a520944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bed450;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a5209ec; end: 10a520c2b;  */

/* WARNING: Removing unreachable block (ram,0x00010a520bc0) */
/* WARNING: Removing unreachable block (ram,0x00010a520bc4) */
/* WARNING: Removing unreachable block (ram,0x00010a520bcc) */
/* WARNING: Removing unreachable block (ram,0x00010a520bd4) */
/* WARNING: Removing unreachable block (ram,0x00010a520bd8) */

void FUN_10a5209ec(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1b8;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bed490;
  func_0x0001098bae4c(puVar5,&UNK_10e4c126f,0x5d,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x2d,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110bed490;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110becb98;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bed500;
  puVar5[0x25] = &UNK_110bed4d0;
  *(undefined2 *)((long)puVar5 + 0x13c) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_FUN_110bed500;
  puVar5[0x29] = &UNK_110bed4d0;
  *(undefined2 *)((long)puVar5 + 0x15c) = 0;
  *(undefined2 *)(puVar5 + 0x2c) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x2e) = 0;
  puVar5[0x31] = FUN_10a5210b8;
  puVar5[0x32] = &UNK_110beccb0;
  puVar5[0x33] = 0;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x2d] = &PTR_FUN_110bed540;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x36] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    *(undefined1 *)((long)puVar5 + 0x161) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a520c2c; end: 10a520cd7;  */

undefined8 * FUN_10a520c2c(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bed490;
  param_1[0x19] = &PTR_FUN_110becb98;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a520cd8; end: 10a520d17;  */

void FUN_10a520cd8(void)

{
  return;
}



/* Entry: 10a520d18; end: 10a520fa7;  */

/* WARNING: Removing unreachable block (ram,0x00010a520ea8) */
/* WARNING: Removing unreachable block (ram,0x00010a520eac) */
/* WARNING: Removing unreachable block (ram,0x00010a520eb4) */
/* WARNING: Removing unreachable block (ram,0x00010a520ebc) */
/* WARNING: Removing unreachable block (ram,0x00010a520ec8) */
/* WARNING: Removing unreachable block (ram,0x00010a520ed0) */
/* WARNING: Removing unreachable block (ram,0x00010a520ed8) */
/* WARNING: Removing unreachable block (ram,0x00010a520edc) */

void FUN_10a520d18(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(lVar8 + 0x1d) & 1) != 0) {
    puVar4 = (undefined8 *)0xa0;
    __Znwm();
    puVar6 = puVar4 + 3;
    *(undefined2 *)puVar6 = 4;
    puVar4[2] = 0;
    puVar4[1] = 0x200000006;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = puVar6;
    puVar4[0x12] = 0;
    *puVar4 = &PTR_DAT_110ae91c0;
    *(undefined2 *)(puVar4 + 0x13) = 0;
    puStack_b8 = puVar4;
    if ((*(byte *)(param_2 + 0x161) & 1) != 0) {
      plVar5 = &lStack_b0;
      lStack_b0 = param_2;
      func_0x0001098ac018(plVar5,&UNK_10e4c0c6c,0x1c,&lStack_a8,0,1);
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      uStack_8c = SUB84(plVar5,0);
      FUN_10a26ebc0(&lStack_a8,0,&uStack_8c,&pcStack_88,1);
      pcStack_88 = FUN_10a5210d4;
      appuStack_80[0] = &PTR_FUN_110bed560;
      param_2 = param_2 + 0x18;
      FUN_10a51d300(param_2,&pcStack_88,&lStack_a8);
      (*(code *)*appuStack_80[0])(appuStack_80);
      if (lStack_a8 != 0) {
        lStack_a0 = lStack_a8;
        __ZdlPv();
      }
      plVar5 = puVar4 + 2;
      *(int *)(lVar8 + 0x10) = (int)param_2;
      do {
        lVar8 = *plVar5;
        if (lVar8 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = 2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            FUN_109d1b4dc(puVar6);
            goto LAB_10a520e88;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_10a520e88:
          while( true ) {
            *param_1 = puVar4;
            puVar6 = puVar4;
            func_0x0001092b4274(&puStack_b8);
            lVar8 = 0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
              return;
            }
            ___stack_chk_fail();
            if ((int)puVar6 == 0) break;
            (*(code *)*appuStack_80[0])(appuStack_80);
            if (lStack_a8 != 0) {
              lStack_a0 = lStack_a8;
              __ZdlPv();
            }
            ___cxa_begin_catch(lVar8);
            __ZSt17current_exceptionv(&pcStack_88);
            func_0x000109d1b350(puVar4,&pcStack_88);
            __ZNSt13exception_ptrD1Ev(&pcStack_88);
            ___cxa_end_catch();
          }
          __Unwind_Resume(lVar8);
          func_0x000104bd46a0();
          uVar7 = *(undefined8 *)(lVar8 + 8);
          *puVar6 = &PTR____cxa_pure_virtual_110b17f40;
          puVar6[1] = uVar7;
          uVar7 = *(undefined8 *)(lVar8 + 0x10);
          *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(lVar8 + 0x18);
          puVar6[2] = uVar7;
          *puVar6 = &PTR_FUN_110bed500;
          *(undefined2 *)((long)puVar6 + 0x1c) = *(undefined2 *)(lVar8 + 0x1c);
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a520f1c);
  (*pcVar3)();
}



/* Entry: 10a520fa8; end: 10a520fdf;  */

void FUN_10a520fa8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar1;
  *param_2 = &PTR_FUN_110bed500;
  *(undefined2 *)((long)param_2 + 0x1c) = *(undefined2 *)(param_1 + 0x1c);
  return;
}



/* Entry: 10a520fe0; end: 10a521043;  */

void FUN_10a520fe0(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_14;
  
  if (((*(byte *)(param_3 + 0x1d) & 1) != 0) && ((*(byte *)(param_2 + 0x1d) & 1) != 0)) {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_14 = *(undefined4 *)(param_2 + lVar1);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_10a26d5a0(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a521044);
  (*pcVar2)();
}



/* Entry: 10a521044; end: 10a521073;  */

void FUN_10a521044(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bed500;
  param_1[1] = &UNK_110bed4d0;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10a521074; end: 10a5210b7;  */

void FUN_10a521074(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 uStack_11;
  
  if ((*(byte *)(param_3 + 0x1d) & 1) != 0) {
    if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)(param_1 + 0x48))
                (param_2,*(undefined4 *)(param_3 + 0x10),&uStack_11);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5210b8);
  (*pcVar1)();
}



/* Entry: 10a5210b8; end: 10a5210d3;  */

void FUN_10a5210b8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = FUN_10a51d224;
  param_1[1] = &PTR_FUN_110beccd0;
  param_1[2] = param_2;
  return;
}



/* Entry: 10a5210d4; end: 10a521207;  */

void FUN_10a5210d4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar3 = &lStack_50;
  lStack_50 = param_1;
  uStack_48 = param_2;
  if (param_5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5211dc);
    (*pcVar1)();
  }
  plVar2 = &lStack_40;
  lStack_40 = param_1;
  uStack_38 = param_2;
  FUN_10a51ffec(plVar2,*param_4);
  if (*plVar2 != 0) {
    FUN_10a51d480(&lStack_50,param_3);
    puVar6 = (undefined8 *)*plVar2;
    if (*(char *)(puVar6 + 7) == '\x01') {
      puVar4 = (undefined8 *)0x38;
      __Znwm();
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        func_0x000107c3192c(puVar4,*puVar6,puVar6[1]);
      }
      else {
        uVar7 = puVar6[1];
        uVar5 = *puVar6;
        puVar4[2] = puVar6[2];
        puVar4[1] = uVar7;
        *puVar4 = uVar5;
      }
      uVar5 = puVar6[3];
      puVar4[4] = 0;
      puVar4[3] = uVar5;
      puVar4[5] = 0;
      puVar4[6] = 0;
      FUN_10a503a10();
    }
    else {
      puVar4 = (undefined8 *)0x0;
    }
    puVar6 = (undefined8 *)*plVar3;
    *plVar3 = (long)puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      if (puVar6 != (undefined8 *)0x0) {
        FUN_10a5028d8(&stack0xffffffffffffffd8);
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          __ZdlPv(*puVar6);
        }
        __ZdlPv(puVar6);
      }
      return;
    }
  }
  return;
}



/* Entry: 10a521208; end: 10a521223;  */

void FUN_10a521208(void)

{
  return;
}



/* Entry: 10a521224; end: 10a5212cb;  */

undefined8 * FUN_10a521224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bed588;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a5212cc; end: 10a521547;  */

/* WARNING: Removing unreachable block (ram,0x00010a5214b0) */
/* WARNING: Removing unreachable block (ram,0x00010a5214b4) */
/* WARNING: Removing unreachable block (ram,0x00010a5214bc) */
/* WARNING: Removing unreachable block (ram,0x00010a5214c4) */
/* WARNING: Removing unreachable block (ram,0x00010a5214c8) */

void FUN_10a5212cc(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x1c8;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bed5c8;
  func_0x0001098bae4c(puVar5,&UNK_10e4c152f,0x21,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x2f,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110bed5c8;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bebef8;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bed638;
  puVar5[0x25] = &UNK_110bed608;
  *(undefined2 *)((long)puVar5 + 0x13c) = 0;
  puVar5[0x2a] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2b) = 0x40000000;
  puVar5[0x28] = &PTR_FUN_110bed638;
  puVar5[0x29] = &UNK_110bed608;
  *(undefined2 *)((long)puVar5 + 0x15c) = 0;
  *(undefined1 *)(puVar5 + 0x2c) = 0;
  *(undefined1 *)(puVar5 + 0x2e) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x30) = 0;
  puVar5[0x33] = FUN_10a5218f0;
  puVar5[0x34] = &UNK_110bec010;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x2f] = &PTR_FUN_110bed678;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x38] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    FUN_10aad3518(puVar5 + 0x2c);
    *(undefined1 *)(puVar5 + 0x2e) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a521548; end: 10a52161b;  */

undefined8 * FUN_10a521548(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bed5c8;
  if (*(char *)(param_1 + 0x2e) == '\x01') {
    FUN_10a4ef838(param_1 + 0x2c);
  }
  param_1[0x19] = &PTR_FUN_110bebef8;
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a52161c; end: 10a52165b;  */

void FUN_10a52161c(void)

{
  return;
}



/* Entry: 10a52165c; end: 10a5217df;  */

/* WARNING: Removing unreachable block (ram,0x00010a521754) */
/* WARNING: Removing unreachable block (ram,0x00010a521758) */
/* WARNING: Removing unreachable block (ram,0x00010a521760) */
/* WARNING: Removing unreachable block (ram,0x00010a521768) */
/* WARNING: Removing unreachable block (ram,0x00010a521774) */
/* WARNING: Removing unreachable block (ram,0x00010a52177c) */
/* WARNING: Removing unreachable block (ram,0x00010a521784) */
/* WARNING: Removing unreachable block (ram,0x00010a521788) */

void FUN_10a52165c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_50;
  undefined1 uStack_41;
  
  lVar7 = *(long *)(param_2 + 0x70);
  if ((*(byte *)(lVar7 + 0x1d) & 1) != 0) {
    puVar5 = (undefined8 *)0xa0;
    __Znwm();
    puVar6 = puVar5 + 3;
    *(undefined2 *)puVar6 = 4;
    puVar5[2] = 0;
    puVar5[1] = 0x200000006;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = puVar6;
    puVar5[0x12] = 0;
    *puVar5 = &PTR_DAT_110ae91c0;
    *(undefined2 *)(puVar5 + 0x13) = 0;
    puStack_50 = puVar5;
    if ((*(byte *)(param_2 + 0x170) & 1) != 0) {
      FUN_10aad33b4(param_2 + 0x160,param_2,lVar7 + 0x10,&uStack_41);
      plVar1 = puVar5 + 2;
      do {
        lVar7 = *plVar1;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 2;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            FUN_109d1b4dc(puVar6);
            goto LAB_10a521734;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar7 >> 1 & 1) != 0) {
LAB_10a521734:
          *param_1 = puVar5;
          func_0x0001092b4274(&puStack_50,puVar5);
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5217b0);
  (*pcVar4)();
}



/* Entry: 10a5217e0; end: 10a521817;  */

void FUN_10a5217e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar1;
  *param_2 = &PTR_FUN_110bed638;
  *(undefined2 *)((long)param_2 + 0x1c) = *(undefined2 *)(param_1 + 0x1c);
  return;
}



/* Entry: 10a521818; end: 10a52187b;  */

void FUN_10a521818(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_14;
  
  if (((*(byte *)(param_3 + 0x1d) & 1) != 0) && ((*(byte *)(param_2 + 0x1d) & 1) != 0)) {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_14 = *(undefined4 *)(param_2 + lVar1);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_10a26d5a0(param_1,&uStack_14,&stack0xfffffffffffffff0,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a52187c);
  (*pcVar2)();
}



/* Entry: 10a52187c; end: 10a5218ab;  */

void FUN_10a52187c(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bed638;
  param_1[1] = &UNK_110bed608;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10a5218ac; end: 10a5218ef;  */

void FUN_10a5218ac(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 uStack_11;
  
  if ((*(byte *)(param_3 + 0x1d) & 1) != 0) {
    if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)(param_1 + 0x48))
                (param_2,*(undefined4 *)(param_3 + 0x10),&uStack_11);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5218f0);
  (*pcVar1)();
}



/* Entry: 10a5218f0; end: 10a52190b;  */

void FUN_10a5218f0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = FUN_10a5173a4;
  param_1[1] = &PTR_FUN_110bec030;
  param_1[2] = param_2;
  return;
}



/* Entry: 10a52190c; end: 10a5219b3;  */

undefined8 * FUN_10a52190c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bed6a8;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a5219b4; end: 10a521c4f;  */

/* WARNING: Removing unreachable block (ram,0x00010a521ba4) */
/* WARNING: Removing unreachable block (ram,0x00010a521ba8) */
/* WARNING: Removing unreachable block (ram,0x00010a521bb0) */
/* WARNING: Removing unreachable block (ram,0x00010a521bb8) */
/* WARNING: Removing unreachable block (ram,0x00010a521bbc) */

void FUN_10a5219b4(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  long *plStack_58;
  
  puVar5 = (undefined8 *)0x208;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_58 = *(long **)(param_2 + 0x20);
  uStack_60 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_DAT_110bba660;
  func_0x0001098bae4c(puVar5,&UNK_10e4a714f,0x1e,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x37,in_x7,0,0
                      ,&uStack_60);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_DAT_110bba660;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bba340;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bba6d0;
  puVar5[0x25] = &UNK_110bba6a0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110bba6d0;
  puVar5[0x2b] = &UNK_110bba6a0;
  *(undefined1 *)(puVar5 + 0x36) = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined1 *)(puVar5 + 0x30) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x38) = 0;
  puVar5[0x3b] = 0x10a28dbcc;
  puVar5[0x3c] = &UNK_110bba3c8;
  puVar5[0x3d] = 0;
  puVar5[0x3e] = 0;
  puVar5[0x3f] = 0;
  puVar5[0x40] = 0;
  puVar5[0x37] = &PTR_FUN_110bba710;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x40] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    FUN_10aaccd54(puVar5 + 0x30);
    puVar5[0x34] = param_3;
    *(undefined1 *)(puVar5 + 0x35) = 0;
    *(undefined1 *)(puVar5 + 0x36) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a521c50; end: 10a521cf7;  */

undefined8 * FUN_10a521c50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bed6e8;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a521cf8; end: 10a521f9f;  */

/* WARNING: Removing unreachable block (ram,0x00010a521ee8) */
/* WARNING: Removing unreachable block (ram,0x00010a521eec) */
/* WARNING: Removing unreachable block (ram,0x00010a521ef4) */
/* WARNING: Removing unreachable block (ram,0x00010a521efc) */
/* WARNING: Removing unreachable block (ram,0x00010a521f00) */

void FUN_10a521cf8(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  long *plStack_58;
  
  puVar5 = (undefined8 *)0x208;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_58 = *(long **)(param_2 + 0x20);
  uStack_60 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bed728;
  func_0x0001098bae4c(puVar5,&UNK_10e4c17e8,0x25,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x37,in_x7,0,0
                      ,&uStack_60);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110bed728;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bebcc8;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bed798;
  puVar5[0x25] = &UNK_110bed768;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110bed798;
  puVar5[0x2b] = &UNK_110bed768;
  *(undefined1 *)(puVar5 + 0x36) = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined1 *)(puVar5 + 0x30) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x38) = 0;
  puVar5[0x3b] = 0x10a522560;
  puVar5[0x3c] = &UNK_110bba3c8;
  puVar5[0x3d] = 0;
  puVar5[0x3e] = 0;
  puVar5[0x3f] = 0;
  puVar5[0x40] = 0;
  puVar5[0x37] = &PTR_DAT_110bed7d8;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x40] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    FUN_10aaccd54(puVar5 + 0x30);
    puVar5[0x34] = param_3;
    *(undefined1 *)(puVar5 + 0x35) = 0;
    *(undefined1 *)(puVar5 + 0x36) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a521fa0; end: 10a522103;  */

void FUN_10a521fa0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bed728;
  if (*(char *)(param_1 + 0x36) == '\x01') {
    func_0x00010aae53f4(param_1 + 0x33,0);
    puStack_28 = param_1 + 0x30;
    FUN_10aadb0a8(&puStack_28);
  }
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110bebcc8;
  func_0x00010a516484(param_1 + 0x21);
  func_0x0001098bba44(param_1 + 0x19);
  func_0x0001098ac370(param_1);
  return;
}



/* Entry: 10a522104; end: 10a5222ab;  */

uint FUN_10a522104(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puStack_68;
  long *plStack_60;
  
  lVar13 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar13 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  puVar8 = (undefined8 *)0x18;
  __Znwm();
  lVar12 = *(long *)(param_1 + 0x108);
  lVar3 = *(long *)(param_1 + 0x110);
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  FUN_10a22fc9c();
  if (lVar3 - lVar12 != 0x18) {
    lVar4 = lVar12 + 0x18;
    do {
      lVar11 = lVar4;
      lVar4 = *(long *)(lVar12 + 0x20);
      for (lVar12 = *(long *)(lVar12 + 0x18); lVar12 != lVar4; lVar12 = lVar12 + 0x58) {
        FUN_10aacfc74(puVar8,lVar12);
      }
      lVar4 = lVar11 + 0x18;
      lVar12 = lVar11;
    } while (lVar4 != lVar3);
  }
  plVar9 = (long *)0x20;
  puStack_68 = puVar8;
  __Znwm();
  *plVar9 = (long)&PTR_FUN_110bed808;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)puVar8;
  plStack_60 = plVar9;
  FUN_10a286fec(lVar2 + 0x20,&puStack_68);
  plVar9 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (lVar13 == 0) {
    uVar7 = 1;
  }
  else {
    uVar10 = *(undefined8 *)(lVar13 + 0x20);
    func_0x00010aacfb0c(uVar10,*(undefined8 *)(lVar2 + 0x20));
    uVar7 = (uint)uVar10 ^ 1;
  }
  return uVar7;
}



/* Entry: 10a5222ac; end: 10a52242b;  */

/* WARNING: Removing unreachable block (ram,0x00010a5223a0) */
/* WARNING: Removing unreachable block (ram,0x00010a5223a4) */
/* WARNING: Removing unreachable block (ram,0x00010a5223ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5223b4) */
/* WARNING: Removing unreachable block (ram,0x00010a5223c0) */
/* WARNING: Removing unreachable block (ram,0x00010a5223c8) */
/* WARNING: Removing unreachable block (ram,0x00010a5223d0) */
/* WARNING: Removing unreachable block (ram,0x00010a5223d4) */

void FUN_10a5222ac(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puStack_48;
  
  lVar8 = *(long *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(lVar8 + 0x20);
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar6 = puVar5 + 3;
  *(undefined2 *)puVar6 = 4;
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar6;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puStack_48 = puVar5;
  if ((*(byte *)(param_2 + 0x1b0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5223fc);
    (*pcVar4)();
  }
  FUN_10aace4a4(param_2 + 0x180,param_2,lVar8 + 0x10,uVar7);
  plVar1 = puVar5 + 2;
  do {
    lVar8 = *plVar1;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar6);
        goto LAB_10a522380;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_10a522380:
      *param_1 = puVar5;
      func_0x0001092b4274(&puStack_48,puVar5);
      return;
    }
  } while( true );
}



/* Entry: 10a52242c; end: 10a52247f;  */

void FUN_10a52242c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar4;
  *param_2 = &PTR_FUN_110bed798;
  lVar5 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10a522480; end: 10a522503;  */

void FUN_10a522480(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a516610(uVar2,*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == 0) {
    uStack_34 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_34 = *(undefined4 *)(param_2 + lVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_34,&stack0xffffffffffffffd0,1);
  return;
}



/* Entry: 10a522504; end: 10a52257b;  */

void FUN_10a522504(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bed798;
  param_1[1] = &UNK_110bed768;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a52257c; end: 10a5225b7;  */

void FUN_10a52257c(long param_1)

{
  long lStack_28;
  
  if (param_1 != 0) {
    lStack_28 = param_1;
    FUN_10a22ff44(&lStack_28);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 10a5225b8; end: 10a5225bb;  */

void FUN_10a5225b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5225bc; end: 10a5225cf;  */

void FUN_10a5225bc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5225d0; end: 10a5225d7;  */

void FUN_10a5225d0(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    lStack_28 = lVar1;
    FUN_10a22ff44(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a5225d8; end: 10a52260f;  */

undefined8 FUN_10a5225d8(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bed848);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a522610; end: 10a522613;  */

void FUN_10a522610(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a522614; end: 10a5226bb;  */

undefined8 * FUN_10a522614(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bed868;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a5226bc; end: 10a522913;  */

/* WARNING: Removing unreachable block (ram,0x00010a5228a8) */
/* WARNING: Removing unreachable block (ram,0x00010a5228ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5228b4) */
/* WARNING: Removing unreachable block (ram,0x00010a5228bc) */
/* WARNING: Removing unreachable block (ram,0x00010a5228c0) */

void FUN_10a5226bc(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x200;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_48 = *(long **)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_FUN_110bed8a8;
  func_0x0001098bae4c(puVar5,&UNK_10e4c1ade,0x1d,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x36,in_x7,0,0
                      ,&uStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_FUN_110bed8a8;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bec100;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bed918;
  puVar5[0x25] = &UNK_110bed8e8;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110bed918;
  puVar5[0x2b] = &UNK_110bed8e8;
  *(undefined1 *)(puVar5 + 0x35) = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined1 *)(puVar5 + 0x30) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x37) = 0;
  puVar5[0x3a] = 0x10a522e0c;
  puVar5[0x3b] = &UNK_110bec218;
  puVar5[0x3c] = 0;
  puVar5[0x3d] = 0;
  puVar5[0x3e] = 0;
  puVar5[0x3f] = 0;
  puVar5[0x36] = &PTR_DAT_110bed958;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x3f] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    puVar5[0x34] = 0;
    puVar5[0x31] = 0;
    puVar5[0x30] = 0;
    puVar5[0x33] = 0;
    puVar5[0x32] = 0;
    *(undefined4 *)(puVar5 + 0x34) = 0x3f800000;
    *(undefined1 *)(puVar5 + 0x35) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a522914; end: 10a5229f7;  */

undefined8 * FUN_10a522914(undefined8 *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bed8a8;
  if (*(char *)(param_1 + 0x35) == '\x01') {
    FUN_10a522e28(param_1 + 0x30);
  }
  FUN_10a232e34(param_1 + 0x2e);
  FUN_10a232e34(param_1 + 0x28);
  param_1[0x19] = &PTR_FUN_110bec100;
  func_0x00010a5183e8(param_1 + 0x21);
  func_0x0001098bba44(param_1 + 0x19);
  *param_1 = &PTR_DAT_110b17ab0;
  if ((*(char *)(param_1 + 0x18) == '\x01') && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    lVar6 = param_1[0xb];
    lVar2 = *(long *)(lVar6 + 0x148);
    if (-1 < *(char *)(lVar6 + 0x15f)) {
      lVar2 = lVar6 + 0x148;
    }
    func_0x00010ae06f08(1,4,&UNK_10f585d39,&UNK_10f585e3d,0x15,&UNK_10f585e89,in_x6,in_x7,
                        &UNK_10f585f66,lVar2,param_1[1]);
  }
  func_0x0001098ae07c(param_1 + 0x16);
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar7 >> 0x21 == 1) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110b17b10;
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  puStack_28 = param_1 + 3;
  func_0x0001098ad298(&puStack_28);
  return param_1;
}



/* Entry: 10a5229f8; end: 10a5229fb;  */

void FUN_10a5229f8(void)

{
  return;
}



/* Entry: 10a5229fc; end: 10a522b57;  */

uint FUN_10a5229fc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_50;
  long *plStack_48;
  
  lVar11 = *(long *)(param_1 + 0x70);
  lVar2 = param_1 + 0x150;
  if (lVar11 != param_1 + 0x120) {
    lVar2 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar2;
  func_0x00010a286b48(lVar2 + 0x20);
  lVar7 = 0x28;
  __Znwm();
  lVar10 = *(long *)(param_1 + 0x108);
  lVar3 = *(long *)(param_1 + 0x110);
  FUN_10a22bd48();
  while (lVar10 = lVar10 + 0x28, lVar10 != lVar3) {
    FUN_10aad332c(lVar7);
  }
  plVar8 = (long *)0x20;
  lStack_50 = lVar7;
  __Znwm();
  *plVar8 = (long)&PTR_FUN_110bed988;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = lVar7;
  plStack_48 = plVar8;
  FUN_10a286fec(lVar2 + 0x20,&lStack_50);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lVar11 == 0) {
    uVar6 = 1;
  }
  else {
    uVar9 = *(undefined8 *)(lVar11 + 0x20);
    FUN_10a5185d4(uVar9,*(undefined8 *)(lVar2 + 0x20));
    uVar6 = (uint)uVar9 ^ 1;
  }
  return uVar6;
}


