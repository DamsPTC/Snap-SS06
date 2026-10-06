/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0036852c; end: 003685b3;  */

void FUN_0036852c(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x28;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x28;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 003685b4; end: 003685db;  */

void FUN_003685b4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003685d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



/* Entry: 003685dc; end: 0036866f;  */

void FUN_003685dc(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  *(code **)(param_1 + 0x78) = FUN_00368950;
  *(long *)(param_1 + 0x80) = param_1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1a0);
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003bb88c(uVar3,param_1 + 0x70,&uStack_28,"per-attempt timer fired");
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00368670; end: 003686a3;  */

long * FUN_00368670(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0036d748(param_1);
  }
  return param_1;
}



/* Entry: 003686a4; end: 003686a7;  */

void FUN_003686a4(void)

{
  return;
}



/* Entry: 003686a8; end: 003687ef;  */

undefined8 * FUN_003686a8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009dda50;
  if ((param_1[0x177] & 1) != 0) {
    FUN_0055293c();
  }
  puVar4 = (undefined8 *)param_1[0x176];
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar4)();
    }
  }
  FUN_00368670(param_1 + 0x16f);
  if ((param_1[0x16e] & 1) != 0) {
    FUN_0055293c();
  }
  puVar4 = (undefined8 *)param_1[0x16d];
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar4)();
    }
  }
  if ((param_1[0x16c] & 1) != 0) {
    FUN_0055293c();
  }
  puVar4 = (undefined8 *)param_1[0x16b];
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar4)();
    }
  }
  FUN_0036d7cc(param_1 + 0x11b);
  FUN_0036d804(param_1 + 0xf4);
  FUN_0036d7cc(param_1 + 0xaa);
  FUN_0036d7cc(param_1 + 0x69);
  FUN_0036d7cc(param_1 + 0x28);
  if ((param_1[0x26] & 1) != 0) {
    FUN_0055293c();
  }
  puVar4 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  return param_1;
}



/* Entry: 003687f0; end: 00368803;  */

void FUN_003687f0(void)

{
  FUN_003686a8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00368804; end: 0036883f;  */

void FUN_00368804(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00368840; end: 0036894f;  */

uint * FUN_00368840(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *param_1;
  puVar2 = param_1;
  if ((uVar1 & 1) != 0) {
    puVar2 = param_1 + 0x74;
    FUN_0034b418(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    puVar2 = param_1 + 0x6c;
    FUN_0034b418(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    puVar2 = param_1 + 0x54;
    FUN_0034b418(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    puVar2 = param_1 + 0x4c;
    FUN_0034b418(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    puVar2 = param_1 + 0x44;
    FUN_0034b418(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    puVar2 = param_1 + 0x3c;
    FUN_0034b418(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    puVar2 = param_1 + 0x34;
    FUN_0034b418(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    puVar2 = param_1 + 0x2c;
    FUN_0034b418(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x14 & 1) != 0) {
    puVar2 = param_1 + 0x24;
    FUN_0034b418(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x16 & 1) != 0) {
    puVar2 = param_1 + 0x18;
    FUN_00366fac(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x17 & 1) != 0) {
    puVar2 = param_1 + 0x10;
    FUN_0034b418(puVar2);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x1a & 1) == 0) {
    return puVar2;
  }
  param_1 = param_1 + 2;
  if (*(long *)param_1 != 0) {
    FUN_003670a0(param_1);
  }
  return param_1;
}



/* Entry: 00368950; end: 00368b43;  */

void FUN_00368950(long *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong uStack_148;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_e9;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 auStack_d0 [19];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = param_1[2];
  auStack_d0[0] = 0;
  if ((*param_2 == 0) && ((char)param_1[0x12] != '\0')) {
    *(undefined1 *)(param_1 + 0x12) = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_108 = 0;
    FUN_003b646c(&uStack_e8,2,"retry perAttemptRecvTimeout exceeded",0x24,&uStack_e9,&uStack_108);
    FUN_003be104(&uStack_e0,&uStack_e8,3,1);
    FUN_00368b44(param_1,&uStack_e0,auStack_d0);
    if ((uStack_e0 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_e8 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_d8 = &uStack_108;
    FUN_0033d548(&puStack_d8);
    param_3 = 0;
    plVar3 = param_1;
    FUN_00368c80(param_1,0,0,0);
    if ((int)plVar3 == 0) {
      FUN_003666b4(lVar10,param_1);
      FUN_00368e54(param_1);
    }
    else {
      FUN_003671b8(param_1);
      param_3 = 0;
      func_0x00368d48(lVar10,0,0);
    }
  }
  puVar7 = *(ulong **)(lVar10 + 0x1a0);
  FUN_00346f8c(auStack_d0);
  plVar3 = param_1 + 1;
  do {
    lVar8 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar8 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 + -1 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  plVar3 = *(long **)(lVar10 + 0x198);
  do {
    lVar10 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar10 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar10 + -1 == 0) {
    FUN_004005ec();
  }
  puVar4 = auStack_d0;
  FUN_0034afe4();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar7 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&uStack_e0);
    FUN_0033c494(&uStack_e8);
    puStack_d8 = &uStack_108;
    FUN_0033d548(&puStack_d8);
    FUN_0034afe4(auStack_d0);
  }
  __Unwind_Resume();
  if ((*(ushort *)(puVar4 + 0x16a) >> 8 & 1) != 0) {
    return;
  }
  *(ushort *)(puVar4 + 0x16a) = *(ushort *)(puVar4 + 0x16a) | 0x100;
  puVar5 = puVar4;
  FUN_00368ef8();
  uVar11 = *puVar7;
  uStack_148 = uVar11;
  if ((uVar11 & 1) == 0) {
    *(byte *)(puVar5 + 5) = *(byte *)(puVar5 + 5) | 0x40;
    puVar7 = (ulong *)(puVar5[4] + 0x98);
    uVar6 = *puVar7;
    if (uVar11 != uVar6) {
LAB_00368c18:
      *puVar7 = uVar11;
      if ((uVar6 & 1) != 0) {
        FUN_0055293c();
      }
    }
    puVar5[0xc] = FUN_0036d594;
    puVar5[0xd] = puVar5;
    puVar5[0xe] = 0;
    if ((uVar11 & 1) == 0) goto LAB_00368c40;
  }
  else {
    piVar9 = (int *)(uVar11 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(byte *)(puVar5 + 5) = *(byte *)(puVar5 + 5) | 0x40;
    puVar7 = (ulong *)(puVar5[4] + 0x98);
    uVar6 = *puVar7;
    if (uVar11 != uVar6) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_00368c18;
    }
    puVar5[0xc] = FUN_0036d594;
    puVar5[0xd] = puVar5;
    puVar5[0xe] = 0;
  }
  FUN_0055293c(uVar11);
LAB_00368c40:
  puVar5[6] = puVar4[5];
  puVar5[8] = FUN_0036d630;
  puVar5[9] = puVar5 + 3;
  puVar5[10] = 0;
  uStack_148 = 0;
  FUN_0034accc(param_3,&stack0xfffffffffffffec8,&uStack_148,&stack0xfffffffffffffec0);
  if ((uStack_148 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00368b44; end: 00368c7f;  */

void FUN_00368b44(long param_1,ulong *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  int *piVar6;
  ulong uVar7;
  ulong uStack_38;
  
  if ((*(ushort *)(param_1 + 0xb50) >> 8 & 1) != 0) {
    return;
  }
  *(ushort *)(param_1 + 0xb50) = *(ushort *)(param_1 + 0xb50) | 0x100;
  lVar3 = param_1;
  FUN_00368ef8(param_1,1,1);
  uVar7 = *param_2;
  uStack_38 = uVar7;
  if ((uVar7 & 1) == 0) {
    *(byte *)(lVar3 + 0x28) = *(byte *)(lVar3 + 0x28) | 0x40;
    puVar5 = (ulong *)(*(long *)(lVar3 + 0x20) + 0x98);
    uVar4 = *puVar5;
    if (uVar7 != uVar4) {
LAB_00368c18:
      *puVar5 = uVar7;
      if ((uVar4 & 1) != 0) {
        FUN_0055293c();
      }
    }
    *(code **)(lVar3 + 0x60) = FUN_0036d594;
    *(long *)(lVar3 + 0x68) = lVar3;
    *(undefined8 *)(lVar3 + 0x70) = 0;
    if ((uVar7 & 1) == 0) goto LAB_00368c40;
  }
  else {
    piVar6 = (int *)(uVar7 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(byte *)(lVar3 + 0x28) = *(byte *)(lVar3 + 0x28) | 0x40;
    puVar5 = (ulong *)(*(long *)(lVar3 + 0x20) + 0x98);
    uVar4 = *puVar5;
    if (uVar7 != uVar4) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_00368c18;
    }
    *(code **)(lVar3 + 0x60) = FUN_0036d594;
    *(long *)(lVar3 + 0x68) = lVar3;
    *(undefined8 *)(lVar3 + 0x70) = 0;
  }
  FUN_0055293c(uVar7);
LAB_00368c40:
  *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(code **)(lVar3 + 0x40) = FUN_0036d630;
  *(long *)(lVar3 + 0x48) = lVar3 + 0x18;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  uStack_38 = 0;
  FUN_0034accc(param_3,&stack0xffffffffffffffd8,&uStack_38,&stack0xffffffffffffffd0);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00368c80; end: 00368e53;  */

long * FUN_00368c80(long param_1,ulong param_2,long param_3,char param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar4 + 0x18) == 0) {
    return (long *)0x0;
  }
  if ((param_2 & 0xff00000000) != 0) {
    if ((uint)param_2 == 0) {
      if (*(long *)(lVar4 + 0x10) == 0) {
        return (long *)0x0;
      }
      FUN_0036ff2c();
      return (long *)0x0;
    }
    if ((*(uint *)(*(long *)(lVar4 + 0x18) + 0x24) >> (ulong)((uint)param_2 & 0x1f) & 1) == 0) {
      return (long *)0x0;
    }
  }
  lVar2 = *(long *)(lVar4 + 0x10);
  if (lVar2 != 0) {
    func_0x0036fed0();
    if ((int)lVar2 == 0) {
      return (long *)0x0;
    }
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if ((((*(byte *)(lVar4 + 0x238) >> 3 & 1) == 0) &&
      (iVar1 = *(int *)(lVar4 + 0x23c) + 1, *(int *)(lVar4 + 0x23c) = iVar1,
      iVar1 < *(int *)(*(long *)(lVar4 + 0x18) + 8))) && ((param_4 == '\0' || (-1 < param_3)))) {
    plVar3 = (long *)(*(long *)(*(long *)(lVar4 + 0x1a8) + 0x40) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00368d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return plVar3;
  }
  return (long *)0x0;
}



/* Entry: 00368e54; end: 00368ef7;  */

void FUN_00368e54(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if ((((((*(byte *)(lVar5 + 0x238) >> 3 & 1) != 0) && (*(long *)(lVar5 + 0x1c8) == 0)) &&
       (*(char *)(param_1 + 0x90) == '\0')) &&
      ((*(ulong *)(lVar5 + 0x4b8) >> 1 <= *(ulong *)(param_1 + 0xb30) &&
       ((*(char *)(lVar5 + 0x4f0) == '\0' || ((*(ushort *)(param_1 + 0xb50) >> 2 & 1) != 0)))))) &&
     (*(long *)(param_1 + 0xbb0) == 0)) {
    FUN_0036692c(lVar5 + 0x1c8,param_1 + 0x28);
    lVar5 = *(long *)(param_1 + 0x10);
    plVar4 = *(long **)(lVar5 + 0x1c0);
    if (plVar4 != (long *)0x0) {
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
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    *(undefined8 *)(lVar5 + 0x1c0) = 0;
  }
  return;
}



/* Entry: 00368ef8; end: 0036900b;  */

void FUN_00368ef8(ulong param_1,int param_2,int param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar4 = *(ulong **)(*(long *)(param_1 + 0x10) + 400);
  plVar6 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    uVar5 = *puVar4;
    uVar1 = uVar5 + 0x80;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4[2] < uVar1) {
    func_0x003d6048(puVar4,0x80);
  }
  else {
    puVar4 = (ulong *)((long)puVar4 + uVar5 + 0x30);
  }
  *puVar4 = (ulong)&PTR_FUN_009ddae8;
  puVar4[1] = (long)param_2;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[10] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[2] = param_1;
  *(undefined1 *)(puVar4 + 5) = 0;
  plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x198);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar4[4] = puVar4[2] + 0x98;
  if (param_3 != 0) {
    puVar4[0xc] = (ulong)FUN_0036908c;
    puVar4[0xd] = (ulong)puVar4;
    puVar4[0xe] = 0;
    puVar4[3] = (ulong)(puVar4 + 0xb);
  }
  return;
}



/* Entry: 0036900c; end: 0036908b;  */

void FUN_0036900c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  lStack_28 = param_2 + 0x20;
  *(code **)(param_2 + 0x28) = FUN_0036d630;
  *(long *)(param_2 + 0x30) = param_2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  uStack_38 = 0;
  uStack_30 = param_3;
  FUN_0034accc(param_4,&lStack_28,&uStack_38,&uStack_30);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0036908c; end: 00369483;  */

void FUN_0036908c(undefined8 *param_1,ulong *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  char *pcStack_100;
  long lStack_f8;
  undefined8 auStack_f0 [19];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = param_1[2];
  lVar14 = *(long *)(lVar10 + 0x10);
  puStack_110 = param_1;
  if ((*(byte *)(lVar10 + 0xbc0) >> 1 & 1) == 0) {
    if ((((*(byte *)(lVar14 + 0x238) >> 3 & 1) != 0) || (*param_2 == 0)) ||
       ((*(ushort *)(lVar10 + 0xb50) >> 7 & 1) != 0)) {
      bVar1 = *(byte *)(param_1 + 5);
      if ((bVar1 & 1) != 0) {
        *(ushort *)(lVar10 + 0xb50) = *(ushort *)(lVar10 + 0xb50) | 2;
        bVar1 = *(byte *)(param_1 + 5);
      }
      if ((bVar1 >> 2 & 1) != 0) {
        *(long *)(lVar10 + 0xb38) = *(long *)(lVar10 + 0xb38) + 1;
        bVar1 = *(byte *)(param_1 + 5);
      }
      if ((bVar1 >> 1 & 1) != 0) {
        *(ushort *)(lVar10 + 0xb50) = *(ushort *)(lVar10 + 0xb50) | 8;
      }
      if ((*(byte *)(lVar14 + 0x238) >> 3 & 1) != 0) {
        lVar12 = *(long *)(param_1[2] + 0x10);
        bVar1 = *(byte *)(param_1 + 5);
        if ((bVar1 & 1) != 0) {
          FUN_00366e68(lVar12 + 0x2a0);
          FUN_00367130(lVar12 + 0x490);
          bVar1 = *(byte *)(param_1 + 5);
        }
        if ((bVar1 >> 2 & 1) != 0) {
          FUN_00366e30(lVar12,*(long *)(param_1[2] + 0xb38) + -1);
          bVar1 = *(byte *)(param_1 + 5);
        }
        if ((bVar1 >> 1 & 1) != 0) {
          FUN_00366e68(lVar12 + 0x4f8);
          FUN_00367130(lVar12 + 0x6e8);
        }
      }
      auStack_f0[0] = 0;
      uVar11 = *param_2;
      if ((uVar11 & 1) != 0) {
        piVar6 = (int *)(uVar11 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar13 = *(long *)(param_1[2] + 0x10);
      lVar12 = 0x1d8;
LAB_00369194:
      plVar8 = *(long **)(lVar13 + lVar12);
      if (((plVar8 == (long *)0x0) || (lVar7 = *plVar8, lVar7 == 0)) ||
         (((*(byte *)(plVar8 + 2) ^ *(byte *)(param_1 + 5)) & 7) != 0)) goto LAB_003691b8;
      if ((*(byte *)(param_1 + 5) >> 2 & 1) != 0) {
        *(undefined1 *)(plVar8[1] + 0x34) = *(undefined1 *)(param_1[4] + 0x34);
      }
      if ((uVar11 & 1) != 0) {
        piVar6 = (int *)(uVar11 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_100 = "on_complete for pending batch";
      uStack_108 = uVar11;
      lStack_f8 = lVar7;
      FUN_0034accc(auStack_f0,&lStack_f8,&uStack_108,&pcStack_100);
      if ((uStack_108 & 1) != 0) {
        FUN_0055293c();
      }
      **(undefined8 **)(lVar13 + lVar12) = 0;
      FUN_0036a218(lVar13);
joined_r0x003691c4:
      if ((uVar11 & 1) != 0) {
        FUN_0055293c(uVar11);
      }
      if ((*(ushort *)(lVar10 + 0xb50) >> 7 & 1) == 0) {
        lVar12 = param_1[2];
        lVar13 = *(long *)(lVar12 + 0x10);
        if ((*(ulong *)(lVar13 + 0x4b8) >> 1 <= *(ulong *)(lVar12 + 0xb30)) &&
           ((*(char *)(lVar13 + 0x4f0) == '\0' || ((*(ushort *)(lVar12 + 0xb50) >> 2 & 1) != 0)))) {
          lVar7 = 0;
          while( true ) {
            lVar9 = *(long *)(lVar13 + lVar7 + 0x1d8);
            if (((lVar9 != 0) && (*(char *)(lVar13 + lVar7 + 0x1e0) == '\0')) &&
               ((*(byte *)(lVar9 + 0x10) & 6) != 0)) break;
            lVar7 = lVar7 + 0x10;
            if (lVar7 == 0x60) goto LAB_003692f8;
          }
        }
        FUN_0036b7c4(lVar12,auStack_f0);
      }
LAB_003692f8:
      FUN_00368e54(lVar10);
      FUN_00346f8c(auStack_f0,*(undefined8 *)(lVar14 + 0x1a0));
      puVar4 = auStack_f0;
      FUN_0034afe4();
      goto joined_r0x00369314;
    }
    FUN_00369524(lVar10 + 0xb78,&puStack_110,param_2);
    auStack_f0[0] = 0;
    uStack_118 = *param_2;
    if ((uStack_118 & 1) != 0) {
      piVar6 = (int *)(uStack_118 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00368b44(lVar10,&uStack_118,auStack_f0);
    FUN_0033c494(&uStack_118);
    if ((*(ushort *)(lVar10 + 0xb50) >> 6 & 1) == 0) {
      FUN_00369588(lVar10,auStack_f0);
    }
    FUN_00346f8c(auStack_f0,*(undefined8 *)(lVar14 + 0x1a0));
    puVar4 = auStack_f0;
    FUN_0034afe4();
    param_1 = puStack_110;
joined_r0x00369314:
    if (param_1 == (undefined8 *)0x0) goto LAB_00369330;
  }
  else {
    puVar4 = *(undefined8 **)(lVar14 + 0x1a0);
    FUN_003bb974(puVar4,"on_complete for abandoned attempt");
  }
  plVar8 = param_1 + 1;
  do {
    lVar10 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar10 + -1 == 0) {
    (**(code **)*param_1)();
    puVar4 = param_1;
  }
LAB_00369330:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(&uStack_118);
  FUN_0034afe4(auStack_f0);
  if (puStack_110 != (undefined8 *)0x0) {
    plVar8 = puStack_110 + 1;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5 = puStack_110;
    if (lVar10 + -1 == 0) goto LAB_00369474;
  }
  do {
    puVar5 = puVar4;
    __Unwind_Resume();
LAB_00369474:
    (**(code **)*puVar5)();
  } while( true );
LAB_003691b8:
  lVar12 = lVar12 + 0x10;
  if (lVar12 == 0x238) goto joined_r0x003691c4;
  goto LAB_00369194;
}



/* Entry: 00369484; end: 0036950f;  */

undefined8 * FUN_00369484(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009ddae8;
  plVar4 = *(long **)(*(long *)(param_1[2] + 0x10) + 0x198);
  do {
    lVar5 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    FUN_004005ec();
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  param_1[2] = 0;
  return param_1;
}



/* Entry: 00369510; end: 00369523;  */

void FUN_00369510(void)

{
  FUN_00369484();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00369524; end: 00369587;  */

ulong * FUN_00369524(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 unaff_x20;
  ulong uVar8;
  ulong *puVar9;
  
  puVar9 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar7 = 3;
  }
  else {
    puVar9 = (ulong *)param_1[1];
    uVar7 = param_1[2];
  }
  uVar6 = *param_1 >> 1;
  if (uVar6 != uVar7) {
    puVar9 = puVar9 + uVar6 * 2;
    FUN_0036960c(puVar9);
    *param_1 = *param_1 + 2;
    return puVar9;
  }
  puVar9 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar6 = 6;
  }
  else {
    if ((param_1[2] >> 0x3b & 0xf) != 0) {
      FUN_00349558();
      __ZdlPv(unaff_x20);
      __Unwind_Resume();
      *(ushort *)(param_1[2] + 0xb50) = *(ushort *)(param_1[2] + 0xb50) | 0x40;
      *(byte *)(param_1 + 5) = (byte)param_1[5] | 0x20;
      uVar7 = param_1[2];
      FUN_00366e68(uVar7 + 0x8d8);
      puVar9 = (ulong *)(uVar7 + 0xac8);
      FUN_00367130(puVar9);
      uVar7 = param_1[2];
      uVar6 = param_1[4];
      *(ulong *)(uVar6 + 0x80) = uVar7 + 0x8d8;
      *(ulong *)(uVar6 + 0x88) = uVar7 + 0xae0;
      *(code **)(uVar7 + 0xb18) = FUN_0036980c;
      *(ulong **)(uVar7 + 0xb20) = param_1;
      *(undefined8 *)(uVar7 + 0xb28) = 0;
      *(ulong *)(param_1[4] + 0x90) = param_1[2] + 0xb10;
      return puVar9;
    }
    puVar9 = (ulong *)param_1[1];
    uVar6 = param_1[2] << 1;
  }
  uVar8 = uVar7 >> 1;
  uVar4 = uVar6 << 4;
  __Znwm();
  puVar1 = (ulong *)(uVar4 + uVar8 * 0x10);
  FUN_0036960c(puVar1,param_2,param_3);
  if (1 < uVar7) {
    lVar5 = 0;
    uVar7 = uVar8;
    do {
      puVar2 = (undefined8 *)((long)puVar9 + lVar5);
      uVar3 = puVar2[1];
      *(undefined8 *)(uVar4 + lVar5) = *puVar2;
      ((undefined8 *)(uVar4 + lVar5))[1] = uVar3;
      *puVar2 = 0;
      puVar2[1] = 0x36;
      lVar5 = lVar5 + 0x10;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar9 = puVar9 + uVar8 * 2;
    do {
      puVar9 = puVar9 + -2;
      FUN_003673f0(puVar9);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
  }
  param_1[1] = uVar4;
  param_1[2] = uVar6;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 00369588; end: 0036960b;  */

void FUN_00369588(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uStack_38;
  
  lVar4 = param_1;
  FUN_00368ef8(param_1,2,0);
  FUN_00369788();
  puVar5 = *(undefined8 **)(param_1 + 0xbb0);
  if (puVar5 != (undefined8 *)0x0) {
    plVar1 = puVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)*puVar5)();
    }
  }
  *(long *)(param_1 + 0xbb0) = lVar4;
  *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(code **)(lVar4 + 0x40) = FUN_0036d630;
  *(long *)(lVar4 + 0x48) = lVar4 + 0x18;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  uStack_38 = 0;
  FUN_0034accc(param_2,&stack0xffffffffffffffd8,&uStack_38,&stack0xffffffffffffffd0);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0036960c; end: 00369667;  */

void FUN_0036960c(undefined8 *param_1,undefined8 *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = *param_2;
  *param_2 = 0;
  uVar3 = *param_3;
  if ((uVar3 & 1) == 0) {
    *param_1 = uVar4;
    param_1[1] = uVar3;
  }
  else {
    piVar5 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = uVar4;
    param_1[1] = uVar3;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    FUN_0055293c();
  }
  return;
}



/* Entry: 00369668; end: 00369787;  */

long FUN_00369668(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  
  puVar8 = param_1 + 1;
  uVar9 = *param_1;
  if ((uVar9 & 1) == 0) {
    uVar6 = 6;
  }
  else {
    if ((param_1[2] >> 0x3b & 0xf) != 0) {
      FUN_00349558();
      __ZdlPv();
      __Unwind_Resume();
      *(ushort *)(param_1[2] + 0xb50) = *(ushort *)(param_1[2] + 0xb50) | 0x40;
      *(byte *)(param_1 + 5) = (byte)param_1[5] | 0x20;
      uVar9 = param_1[2];
      FUN_00366e68(uVar9 + 0x8d8);
      lVar4 = uVar9 + 0xac8;
      FUN_00367130(lVar4);
      uVar9 = param_1[2];
      uVar6 = param_1[4];
      *(ulong *)(uVar6 + 0x80) = uVar9 + 0x8d8;
      *(ulong *)(uVar6 + 0x88) = uVar9 + 0xae0;
      *(code **)(uVar9 + 0xb18) = FUN_0036980c;
      *(ulong **)(uVar9 + 0xb20) = param_1;
      *(undefined8 *)(uVar9 + 0xb28) = 0;
      *(ulong *)(param_1[4] + 0x90) = param_1[2] + 0xb10;
      return lVar4;
    }
    puVar8 = (ulong *)param_1[1];
    uVar6 = param_1[2] << 1;
  }
  uVar7 = uVar9 >> 1;
  uVar3 = uVar6 << 4;
  __Znwm();
  lVar4 = uVar3 + uVar7 * 0x10;
  FUN_0036960c(lVar4,param_2,param_3);
  if (1 < uVar9) {
    lVar5 = 0;
    uVar9 = uVar7;
    do {
      puVar1 = (undefined8 *)((long)puVar8 + lVar5);
      uVar2 = puVar1[1];
      *(undefined8 *)(uVar3 + lVar5) = *puVar1;
      ((undefined8 *)(uVar3 + lVar5))[1] = uVar2;
      *puVar1 = 0;
      puVar1[1] = 0x36;
      lVar5 = lVar5 + 0x10;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    puVar8 = puVar8 + uVar7 * 2;
    do {
      puVar8 = puVar8 + -2;
      FUN_003673f0(puVar8);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar9 = *param_1;
  if ((uVar9 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar9 = *param_1;
  }
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  *param_1 = (uVar9 | 1) + 2;
  return lVar4;
}



/* Entry: 00369788; end: 0036980b;  */

void FUN_00369788(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(ushort *)(*(long *)(param_1 + 0x10) + 0xb50) =
       *(ushort *)(*(long *)(param_1 + 0x10) + 0xb50) | 0x40;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x20;
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_00366e68(lVar2 + 0x8d8);
  FUN_00367130(lVar2 + 0xac8);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(lVar1 + 0x80) = lVar2 + 0x8d8;
  *(long *)(lVar1 + 0x88) = lVar2 + 0xae0;
  *(code **)(lVar2 + 0xb18) = FUN_0036980c;
  *(long *)(lVar2 + 0xb20) = param_1;
  *(undefined8 *)(lVar2 + 0xb28) = 0;
  *(long *)(*(long *)(param_1 + 0x20) + 0x90) = *(long *)(param_1 + 0x10) + 0xb10;
  return;
}



/* Entry: 0036980c; end: 0036a1af;  */

void FUN_0036980c(undefined8 *param_1,ulong *param_2)

{
  long **pplVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char **ppcVar6;
  long **pplVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  char *pcVar21;
  char cVar22;
  uint *puVar23;
  uint uVar24;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  char *pcStack_158;
  uint uStack_14c;
  long *plStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *apcStack_108 [19];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_148 = *(long **)(*(long *)(param_1[2] + 0x10) + 0x198);
  do {
    cVar22 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plStack_148,0x10);
    if (bVar3) {
      *plStack_148 = *plStack_148 + 1;
      cVar22 = ExclusiveMonitorsStatus();
    }
  } while (cVar22 != '\0');
  uVar12 = param_1[2];
  lVar16 = *(long *)(uVar12 + 0x10);
  *(ushort *)(uVar12 + 0xb50) = *(ushort *)(uVar12 + 0xb50) | 0x80;
  if ((*(byte *)(uVar12 + 0xbc0) >> 1 & 1) != 0) {
    FUN_003bb974(*(undefined8 *)(lVar16 + 0x1a0),
                 "recv_trailing_metadata_ready for abandoned attempt");
    goto LAB_00369e64;
  }
  if (*(char *)(uVar12 + 0x90) != '\0') {
    *(undefined1 *)(uVar12 + 0x90) = 0;
    func_0x003cf020(uVar12 + 0x38);
  }
  uStack_14c = 0;
  puVar23 = *(uint **)(param_1[4] + 0x80);
  uVar8 = *(undefined8 *)(lVar16 + 0x188);
  pcVar21 = (char *)*param_2;
  pcStack_158 = pcVar21;
  if (((ulong)pcVar21 & 1) == 0) {
    if (pcVar21 != (char *)0x0) goto LAB_003698f8;
    uVar24 = *puVar23;
    if ((uVar24 >> 10 & 1) == 0) {
      uStack_14c = 0;
    }
    else {
      uStack_14c = puVar23[0x62];
    }
    iVar5 = 0;
    if ((uVar24 >> 0xd & 1) != 0) goto LAB_003699a0;
LAB_00369968:
    uVar8 = 0;
    uVar20 = 0;
    if ((uVar24 >> 0x18 & 1) != 0) goto LAB_00369974;
LAB_003699ac:
    cVar22 = '\0';
  }
  else {
    piVar9 = (int *)(pcVar21 + -1);
    do {
      cVar22 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + 1;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    do {
      cVar22 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + 1;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
LAB_003698f8:
    apcStack_108[0] = pcVar21;
    FUN_003fb7d8(apcStack_108,uVar8,&uStack_14c,0,0,0);
    if (((ulong)apcStack_108[0] & 1) != 0) {
      FUN_0055293c();
    }
    pcStack_110 = (char *)0x0;
    if (((ulong)pcVar21 & 1) != 0) {
      piVar9 = (int *)(pcVar21 + -1);
      do {
        cVar22 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar22 = ExclusiveMonitorsStatus();
        }
      } while (cVar22 != '\0');
    }
    ppcVar6 = &pcStack_118;
    pcStack_118 = pcVar21;
    FUN_003be1d0(ppcVar6,0xe,&pcStack_110);
    iVar5 = 0;
    if (pcStack_110 != (char *)0x0) {
      iVar5 = (int)ppcVar6;
    }
    if (((ulong)pcStack_118 & 1) != 0) {
      FUN_0055293c();
    }
    uVar24 = *puVar23;
    if ((uVar24 >> 0xd & 1) == 0) goto LAB_00369968;
LAB_003699a0:
    uVar20 = *(undefined8 *)(puVar23 + 0x5c);
    uVar8 = 1;
    if ((uVar24 >> 0x18 & 1) == 0) goto LAB_003699ac;
LAB_00369974:
    cVar22 = (char)puVar23[0xe];
  }
  if (((ulong)pcVar21 & 1) != 0) {
    FUN_0055293c(pcVar21);
  }
  if (iVar5 != 0) goto LAB_00369a38;
  if (((uVar24 >> 0x18 & 1) == 0) || (bVar2 = *(byte *)(lVar16 + 0x238), (bVar2 >> 3 & 1) != 0)) {
LAB_003699ec:
    uVar19 = uVar12;
    func_0x00368c80(uVar12,(ulong)uStack_14c | 0x100000000,uVar20,uVar8);
    if ((int)uVar19 == 0) {
LAB_00369a38:
      FUN_003666b4(lVar16,uVar12);
      FUN_00368e54(uVar12);
      uStack_188 = *param_2;
      if ((uStack_188 & 1) != 0) {
        piVar9 = (int *)(uStack_188 - 1);
        do {
          cVar22 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar22 = ExclusiveMonitorsStatus();
          }
        } while (cVar22 != '\0');
        do {
          cVar22 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar22 = ExclusiveMonitorsStatus();
          }
        } while (cVar22 != '\0');
      }
      apcStack_108[0] = (char *)0x0;
      lVar18 = param_1[2];
      lVar17 = *(long *)(lVar18 + 0x10);
      lVar16 = 0x1d8;
LAB_00369a9c:
      lVar10 = *(long *)(lVar17 + lVar16);
      uStack_138 = uStack_188;
      if (((lVar10 == 0) || ((*(byte *)(lVar10 + 0x10) >> 5 & 1) == 0)) ||
         (*(long *)(*(long *)(lVar10 + 8) + 0x90) == 0)) goto LAB_00369ab8;
      func_0x004006ac(lVar18 + 0xae0,*(undefined8 *)(*(long *)(lVar10 + 8) + 0x88));
      plVar13 = (long *)(lVar17 + lVar16);
      FUN_0036a260(*(undefined8 *)(*(long *)(*plVar13 + 8) + 0x80),param_1[2] + 0x8d8);
      pcStack_110 = *(char **)(*(long *)(*plVar13 + 8) + 0x90);
      if ((uStack_188 & 1) != 0) {
        piVar9 = (int *)(uStack_188 - 1);
        do {
          cVar22 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar22 = ExclusiveMonitorsStatus();
          }
        } while (cVar22 != '\0');
      }
      pcStack_118 = "recv_trailing_metadata_ready for pending batch";
      uStack_120 = uStack_188;
      FUN_0034accc(apcStack_108,&pcStack_110,&uStack_120,&pcStack_118);
      if ((uStack_120 & 1) != 0) {
        FUN_0055293c();
      }
      *(undefined8 *)(*(long *)(*plVar13 + 8) + 0x90) = 0;
      FUN_0036a218(lVar17,plVar13);
      if ((uStack_188 & 1) == 0) goto LAB_00369b00;
      goto LAB_00369af8;
    }
    bVar3 = true;
  }
  else if (cVar22 == '\0') {
    bVar3 = false;
  }
  else {
    if ((cVar22 != '\x01') || ((bVar2 >> 6 & 1) != 0)) goto LAB_003699ec;
    bVar3 = false;
    *(byte *)(lVar16 + 0x238) = bVar2 | 0x40;
  }
  apcStack_108[0] = (char *)0x0;
  uVar19 = *param_2;
  if (uVar19 == 0) {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    FUN_003b646c(&uStack_168,2,"call attempt failed",0x13,&pcStack_118,&uStack_180);
    FUN_003be104(&uStack_160,&uStack_168,3,1);
  }
  else {
    uStack_160 = uVar19;
    if ((uVar19 & 1) != 0) {
      piVar9 = (int *)(uVar19 - 1);
      do {
        cVar22 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = *piVar9 + 1;
          cVar22 = ExclusiveMonitorsStatus();
        }
      } while (cVar22 != '\0');
    }
  }
  FUN_00368b44(uVar12,&uStack_160,apcStack_108);
  if (uVar19 == 0) {
    if ((uStack_160 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_168 & 1) != 0) {
      FUN_0055293c();
    }
    pcStack_110 = (char *)&uStack_180;
    FUN_0033d548(&pcStack_110);
    if (!bVar3) goto LAB_00369dec;
LAB_00369db0:
    func_0x00368d48(lVar16,uVar20,uVar8);
  }
  else {
    if ((uStack_160 & 1) != 0) {
      FUN_0055293c();
    }
    if (bVar3) goto LAB_00369db0;
LAB_00369dec:
    plVar13 = *(long **)(lVar16 + 0x198);
    do {
      cVar22 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    pcStack_110 = (char *)(lVar16 + 0x278);
    *(code **)(lVar16 + 0x280) = FUN_0036a1b0;
    *(long *)(lVar16 + 0x288) = lVar16;
    *(undefined8 *)(lVar16 + 0x290) = 0;
    uStack_120 = 0;
    pcStack_118 = "start transparent retry";
    FUN_0034accc(apcStack_108,&pcStack_110,&uStack_120,&pcStack_118);
    if ((uStack_120 & 1) != 0) {
      FUN_0055293c();
    }
  }
  FUN_003671b8(uVar12);
  FUN_00346f8c(apcStack_108,*(undefined8 *)(lVar16 + 0x1a0));
  FUN_0034afe4(apcStack_108);
LAB_00369e64:
  while( true ) {
    plVar13 = param_1 + 1;
    do {
      lVar16 = *plVar13;
      cVar22 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar16 + -1;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)*param_1)(param_1);
    }
    pplVar7 = &plStack_148;
    FUN_0036b77c();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) break;
    ___stack_chk_fail();
LAB_0036a004:
    (*(code *)**pplVar7)();
LAB_00369f34:
    *(undefined8 *)(uVar12 + 0xb58) = 0;
    pcStack_110 = (char *)0x0;
    uVar12 = *(ulong *)(param_1[2] + 0xb60);
    if (uVar12 != 0) {
      *(undefined8 *)(param_1[2] + 0xb60) = 0;
      pcStack_110 = segment_command_00000020.segname + 0xe;
      if ((uVar12 & 1) != 0) {
        FUN_0055293c();
      }
    }
    FUN_0033c494(&pcStack_110);
    lVar16 = param_1[2];
LAB_00369b0c:
    if (*(long *)(lVar16 + 0xb68) != 0) {
      uStack_128 = *(ulong *)(lVar16 + 0xb70);
      if ((uStack_128 & 1) != 0) {
        piVar9 = (int *)(uStack_128 - 1);
        do {
          cVar22 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar22 = ExclusiveMonitorsStatus();
          }
        } while (cVar22 != '\0');
      }
      FUN_0036b5b0(param_1,&uStack_128,apcStack_108);
      FUN_0033c494(&uStack_128);
      lVar16 = param_1[2];
      puVar11 = *(undefined8 **)(lVar16 + 0xb68);
      if (puVar11 != (undefined8 *)0x0) {
        plVar13 = puVar11 + 1;
        do {
          lVar18 = *plVar13;
          cVar22 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar18 + -1;
            cVar22 = ExclusiveMonitorsStatus();
          }
        } while (cVar22 != '\0');
        if (lVar18 + -1 == 0) {
          (**(code **)*puVar11)();
        }
      }
      *(undefined8 *)(lVar16 + 0xb68) = 0;
      pcStack_110 = (char *)0x0;
      uVar12 = *(ulong *)(param_1[2] + 0xb70);
      if (uVar12 != 0) {
        *(undefined8 *)(param_1[2] + 0xb70) = 0;
        pcStack_110 = segment_command_00000020.segname + 0xe;
        if ((uVar12 & 1) != 0) {
          FUN_0055293c();
        }
      }
      FUN_0033c494(&pcStack_110);
      lVar16 = param_1[2];
    }
    uVar12 = *(ulong *)(lVar16 + 0xb78);
    plVar13 = (long *)(lVar16 + 0xb80);
    if ((uVar12 & 1) != 0) {
      plVar13 = (long *)*plVar13;
    }
    if (1 < uVar12) {
      plVar14 = plVar13;
      do {
        lVar16 = *plVar14;
        uStack_130 = plVar14[1];
        if ((uStack_130 & 1) != 0) {
          piVar9 = (int *)(uStack_130 - 1);
          do {
            cVar22 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = *piVar9 + 1;
              cVar22 = ExclusiveMonitorsStatus();
            }
          } while (cVar22 != '\0');
        }
        pcStack_110 = (char *)(lVar16 + 0x58);
        pcStack_118 = "resuming on_complete";
        FUN_0034accc(apcStack_108,&pcStack_110,&uStack_130,&pcStack_118);
        if ((uStack_130 & 1) != 0) {
          FUN_0055293c();
        }
        plVar15 = plVar14 + 2;
        *plVar14 = 0;
        plVar14 = plVar15;
      } while (plVar15 != plVar13 + (uVar12 & 0xfffffffffffffffe));
      lVar16 = param_1[2];
    }
    FUN_00367370(lVar16 + 0xb78);
    uStack_140 = uStack_188;
    piVar9 = (int *)(uStack_188 - 1);
    if ((uStack_188 & 1) != 0) {
      do {
        cVar22 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar22 = ExclusiveMonitorsStatus();
        }
      } while (cVar22 != '\0');
    }
    lVar16 = 0;
    lVar18 = *(long *)(param_1[2] + 0x10);
    do {
      lVar17 = lVar18 + lVar16 * 0x10;
      puVar11 = *(undefined8 **)(lVar17 + 0x1d8);
      if ((puVar11 != (undefined8 *)0x0) && (pcVar21 = (char *)*puVar11, pcVar21 != (char *)0x0)) {
        lVar10 = param_1[2];
        bVar2 = *(byte *)(puVar11 + 2);
        if (((((bVar2 & 1) != 0) && ((*(ushort *)(lVar10 + 0xb50) & 1) == 0)) ||
            (((bVar2 >> 2 & 1) != 0 &&
             (*(ulong *)(lVar10 + 0xb30) < *(ulong *)(*(long *)(lVar10 + 0x10) + 0x4b8) >> 1)))) ||
           (((bVar2 >> 1 & 1) != 0 && ((*(ushort *)(lVar10 + 0xb50) >> 2 & 1) == 0)))) {
          uStack_120 = uStack_188;
          if ((uStack_188 & 1) != 0) {
            do {
              cVar22 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = *piVar9 + 1;
                cVar22 = ExclusiveMonitorsStatus();
              }
            } while (cVar22 != '\0');
          }
          pcStack_118 = "failing on_complete for pending batch";
          pcStack_110 = pcVar21;
          FUN_0034accc(apcStack_108,&pcStack_110,&uStack_120,&pcStack_118);
          if ((uStack_120 & 1) != 0) {
            FUN_0055293c();
          }
          **(undefined8 **)(lVar17 + 0x1d8) = 0;
          FUN_0036a218(lVar18);
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 6);
    if ((uStack_188 & 1) != 0) {
      FUN_0055293c(uStack_188);
    }
    FUN_00346f8c(apcStack_108,*(undefined8 *)(*(long *)(param_1[2] + 0x10) + 0x1a0));
    FUN_0034afe4(apcStack_108);
    uVar12 = uStack_188;
    if ((uStack_188 & 1) != 0) {
      FUN_0055293c(uStack_188);
    }
  }
  return;
LAB_00369ab8:
  lVar16 = lVar16 + 0x10;
  if (lVar16 == 0x238) {
    uVar12 = *(ulong *)(lVar18 + 3000);
    if (uStack_188 != uVar12) {
      if ((uStack_188 & 1) != 0) {
        piVar9 = (int *)(uStack_188 - 1);
        do {
          cVar22 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar22 = ExclusiveMonitorsStatus();
          }
        } while (cVar22 != '\0');
      }
      *(ulong *)(lVar18 + 3000) = uStack_188;
      if ((uVar12 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if ((uStack_188 & 1) != 0) {
LAB_00369af8:
      FUN_0055293c(uStack_188);
    }
LAB_00369b00:
    lVar16 = param_1[2];
    if (*(long *)(lVar16 + 0xb58) == 0) goto LAB_00369b0c;
    uStack_120 = *(ulong *)(lVar16 + 0xb60);
    if ((uStack_120 & 1) != 0) {
      piVar9 = (int *)(uStack_120 - 1);
      do {
        cVar22 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar22 = ExclusiveMonitorsStatus();
        }
      } while (cVar22 != '\0');
    }
    FUN_0036b498(param_1,&uStack_120,apcStack_108);
    FUN_0033c494(&uStack_120);
    uVar12 = param_1[2];
    pplVar7 = *(long ***)(uVar12 + 0xb58);
    if (pplVar7 == (long **)0x0) goto LAB_00369f34;
    pplVar1 = pplVar7 + 1;
    do {
      plVar13 = *pplVar1;
      cVar22 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
      if (bVar3) {
        *pplVar1 = (long *)((long)plVar13 + -1);
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    if ((long *)((long)plVar13 + -1) == (long *)0x0) goto LAB_0036a004;
    goto LAB_00369f34;
  }
  goto LAB_00369a9c;
}



/* Entry: 0036a1b0; end: 0036a217;  */

void FUN_0036a1b0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  if (*(long *)(param_1 + 0x1b0) == 0) {
    FUN_00366970(param_1,1);
  }
  else {
    FUN_003bb974(*(undefined8 *)(param_1 + 0x1a0),"call cancelled before transparent retry");
  }
  plVar3 = *(long **)(param_1 + 0x198);
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar4 = plVar3;
    FUN_003c3188();
    if ((((ulong)plVar4 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar4 + 0x28) >> 1 & 1) != 0)
       ) {
      uStack_28 = 0;
      FUN_003c2968(plVar3 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    uStack_38 = 0;
    FUN_003c1e6c(&uStack_29,plVar3 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  return;
}



/* Entry: 0036a218; end: 0036a25f;  */

void FUN_0036a218(long param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_2;
  if ((((*plVar2 == 0) &&
       ((bVar1 = *(byte *)(plVar2 + 2), (bVar1 >> 3 & 1) == 0 || (*(long *)(plVar2[1] + 0x48) == 0))
       )) && (((bVar1 >> 4 & 1) == 0 || (*(long *)(plVar2[1] + 0x78) == 0)))) &&
     (((bVar1 >> 5 & 1) == 0 || (*(long *)(plVar2[1] + 0x90) == 0)))) {
    bVar1 = *(byte *)(*param_2 + 0x10);
    if ((bVar1 & 1) != 0) {
      *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xfe;
      bVar1 = *(byte *)(*param_2 + 0x10);
    }
    if ((bVar1 >> 2 & 1) != 0) {
      *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xfd;
      bVar1 = *(byte *)(*param_2 + 0x10);
    }
    if ((bVar1 >> 1 & 1) != 0) {
      *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xfb;
    }
    *param_2 = 0;
    return;
  }
  return;
}



/* Entry: 0036a260; end: 0036a2bb;  */

long FUN_0036a260(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_0036a2bc();
  uVar1 = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_2 + 0x1f0) = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x200);
  *(undefined8 *)(param_2 + 0x200) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = uVar1;
  return param_1;
}



/* Entry: 0036a2bc; end: 0036a56b;  */

uint * FUN_0036a2bc(uint *param_1,byte *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_0036a56c();
  func_0x0036a62c(param_1,param_2);
  if ((*param_2 >> 2 & 1) == 0) {
    uVar1 = *param_1 & 0xfffffffb;
  }
  else {
    uVar1 = *param_1 | 4;
    param_1[0x6a] = *(uint *)(param_2 + 0x1a8);
  }
  *param_1 = uVar1;
  if ((*param_2 >> 3 & 1) == 0) {
    uVar1 = uVar1 & 0xfffffff7;
    *param_1 = uVar1;
  }
  else {
    uVar1 = uVar1 | 8;
    *param_1 = uVar1;
    param_1[0x69] = *(uint *)(param_2 + 0x1a4);
  }
  if ((*param_2 >> 4 & 1) == 0) {
    uVar1 = uVar1 & 0xffffffef;
  }
  else {
    uVar1 = uVar1 | 0x10;
    param_1[0x68] = *(uint *)(param_2 + 0x1a0);
  }
  *param_1 = uVar1;
  if ((*param_2 >> 5 & 1) == 0) {
    uVar1 = uVar1 & 0xffffffdf;
  }
  else {
    uVar1 = uVar1 | 0x20;
    param_1[0x67] = *(uint *)(param_2 + 0x19c);
  }
  *param_1 = uVar1;
  if ((*param_2 >> 6 & 1) == 0) {
    uVar1 = uVar1 & 0xffffffbf;
  }
  else {
    uVar1 = uVar1 | 0x40;
    *(byte *)(param_1 + 0x66) = param_2[0x198];
  }
  *param_1 = uVar1;
  if ((char)*param_2 < '\0') {
    uVar1 = uVar1 | 0x80;
    param_1[0x65] = *(uint *)(param_2 + 0x194);
  }
  else {
    uVar1 = uVar1 & 0xffffff7f;
  }
  *param_1 = uVar1;
  if ((param_2[1] & 1) == 0) {
    uVar1 = uVar1 & 0xfffffeff;
  }
  else {
    uVar1 = uVar1 | 0x100;
    param_1[100] = *(uint *)(param_2 + 400);
  }
  *param_1 = uVar1;
  if ((param_2[1] >> 1 & 1) == 0) {
    uVar1 = uVar1 & 0xfffffdff;
    *param_1 = uVar1;
  }
  else {
    uVar1 = uVar1 | 0x200;
    *param_1 = uVar1;
    *(byte *)(param_1 + 99) = param_2[0x18c];
  }
  if ((param_2[1] >> 2 & 1) == 0) {
    uVar1 = uVar1 & 0xfffffbff;
  }
  else {
    uVar1 = uVar1 | 0x400;
    param_1[0x62] = *(uint *)(param_2 + 0x188);
  }
  *param_1 = uVar1;
  if ((param_2[1] >> 3 & 1) == 0) {
    uVar1 = uVar1 & 0xfffff7ff;
  }
  else {
    uVar1 = uVar1 | 0x800;
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x180);
  }
  *param_1 = uVar1;
  if ((param_2[1] >> 4 & 1) == 0) {
    uVar1 = uVar1 & 0xffffefff;
    *param_1 = uVar1;
  }
  else {
    uVar1 = uVar1 | 0x1000;
    *param_1 = uVar1;
    param_1[0x5e] = *(uint *)(param_2 + 0x178);
  }
  if ((param_2[1] >> 5 & 1) == 0) {
    uVar1 = uVar1 & 0xffffdfff;
  }
  else {
    uVar1 = uVar1 | 0x2000;
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x170);
  }
  *param_1 = uVar1;
  func_0x0036a6ec(param_1,param_2);
  func_0x0036a7ac(param_1,param_2);
  func_0x0036a86c(param_1,param_2);
  func_0x0036a92c(param_1,param_2);
  func_0x0036a9e8(param_1,param_2);
  func_0x0036aaa4(param_1,param_2);
  func_0x0036ab60(param_1,param_2);
  if ((param_2[2] >> 5 & 1) == 0) {
    *param_1 = *param_1 & 0xffdfffff;
  }
  else {
    *param_1 = *param_1 | 0x200000;
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x88);
  }
  FUN_0036ac1c(param_1,param_2);
  FUN_0036ac48(param_1,param_2);
  if ((param_2[3] & 1) == 0) {
    uVar1 = *param_1 & 0xfeffffff;
  }
  else {
    uVar1 = *param_1 | 0x1000000;
    *(byte *)(param_1 + 0xe) = param_2[0x38];
  }
  *param_1 = uVar1;
  if ((param_2[3] >> 1 & 1) == 0) {
    *param_1 = uVar1 & 0xfdffffff;
  }
  else {
    *param_1 = uVar1 | 0x2000000;
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 10) = uVar2;
  }
  if ((param_2[3] >> 2 & 1) == 0) {
    uVar1 = *param_1;
    *param_1 = uVar1 & 0xfbffffff;
    if ((uVar1 >> 0x1a & 1) == 0) {
      return param_1;
    }
    param_1 = param_1 + 2;
    if (*(long *)param_1 != 0) {
      FUN_003670a0(param_1);
    }
    return param_1;
  }
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x4000000;
  if ((uVar1 >> 0x1a & 1) == 0) {
    FUN_0036b424();
  }
  else {
    FUN_0036b0ec(param_1 + 2,param_2 + 8);
  }
  return param_1 + 2;
}



/* Entry: 0036a56c; end: 0036ac1b;  */

uint * FUN_0036a56c(uint *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 ***unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_300 [72];
  long lStack_2b8;
  undefined8 **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [72];
  long lStack_258;
  undefined8 **ppuStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [72];
  long lStack_1f8;
  undefined8 **ppuStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [72];
  long lStack_198;
  undefined8 **ppuStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [72];
  long lStack_138;
  undefined8 **ppuStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [72];
  long lStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [72];
  long lStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [72];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*param_2 & 1) == 0) {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xfffffffe;
    if ((uVar2 & 1) == 0) goto LAB_0036a604;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
      param_1 = param_1 + 0x74;
      puVar5 = (undefined1 *)register0x00000008;
      goto FUN_0034b418;
    }
  }
  else {
    pbVar1 = param_2 + 0x1d0;
    puVar7 = param_1 + 0x74;
    uVar2 = *param_1;
    *param_1 = uVar2 | 1;
    if ((uVar2 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x1d8);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0x1e8);
      uVar10 = *(undefined8 *)(param_2 + 0x1e0);
      param_2[0x1d8] = 0;
      param_2[0x1d9] = 0;
      param_2[0x1da] = 0;
      param_2[0x1db] = 0;
      param_2[0x1dc] = 0;
      param_2[0x1dd] = 0;
      param_2[0x1de] = 0;
      param_2[0x1df] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0x1e8] = 0;
      param_2[0x1e9] = 0;
      param_2[0x1ea] = 0;
      param_2[0x1eb] = 0;
      param_2[0x1ec] = 0;
      param_2[0x1ed] = 0;
      param_2[0x1ee] = 0;
      param_2[0x1ef] = 0;
      param_2[0x1e0] = 0;
      param_2[0x1e1] = 0;
      param_2[0x1e2] = 0;
      param_2[0x1e3] = 0;
      param_2[0x1e4] = 0;
      param_2[0x1e5] = 0;
      param_2[0x1e6] = 0;
      param_2[0x1e7] = 0;
      *(undefined8 *)(param_1 + 0x76) = uVar13;
      *(undefined8 *)puVar7 = uVar12;
      *(undefined8 *)(param_1 + 0x7a) = uVar11;
      *(undefined8 *)(param_1 + 0x78) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x76);
      uVar12 = *(undefined8 *)puVar7;
      uVar11 = *(undefined8 *)(param_1 + 0x7a);
      uVar10 = *(undefined8 *)(param_1 + 0x78);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0x1e8);
      uVar14 = *(undefined8 *)(param_2 + 0x1e0);
      *(undefined8 *)(param_1 + 0x76) = *(undefined8 *)(param_2 + 0x1d8);
      *(undefined8 *)puVar7 = uVar16;
      *(undefined8 *)(param_1 + 0x7a) = uVar15;
      *(undefined8 *)(param_1 + 0x78) = uVar14;
      *(undefined8 *)(param_2 + 0x1d8) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0x1e8) = uVar11;
      *(undefined8 *)(param_2 + 0x1e0) = uVar10;
    }
LAB_0036a604:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uStack_68 = 0x36a62c;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_70 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((*param_2 >> 1 & 1) == 0) {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xfffffffd;
    if ((uVar2 >> 1 & 1) == 0) goto LAB_0036a6c4;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      param_1 = param_1 + 0x6c;
      unaff_x30 = 0x36a62c;
      puVar5 = auStack_60;
      unaff_x29 = (undefined8 ***)&stack0xfffffffffffffff0;
      goto FUN_0034b418;
    }
  }
  else {
    pbVar1 = param_2 + 0x1b0;
    puVar7 = param_1 + 0x6c;
    uVar2 = *param_1;
    *param_1 = uVar2 | 2;
    if ((uVar2 >> 1 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x1b8);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0x1c8);
      uVar10 = *(undefined8 *)(param_2 + 0x1c0);
      param_2[0x1b8] = 0;
      param_2[0x1b9] = 0;
      param_2[0x1ba] = 0;
      param_2[0x1bb] = 0;
      param_2[0x1bc] = 0;
      param_2[0x1bd] = 0;
      param_2[0x1be] = 0;
      param_2[0x1bf] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0x1c8] = 0;
      param_2[0x1c9] = 0;
      param_2[0x1ca] = 0;
      param_2[0x1cb] = 0;
      param_2[0x1cc] = 0;
      param_2[0x1cd] = 0;
      param_2[0x1ce] = 0;
      param_2[0x1cf] = 0;
      param_2[0x1c0] = 0;
      param_2[0x1c1] = 0;
      param_2[0x1c2] = 0;
      param_2[0x1c3] = 0;
      param_2[0x1c4] = 0;
      param_2[0x1c5] = 0;
      param_2[0x1c6] = 0;
      param_2[0x1c7] = 0;
      *(undefined8 *)(param_1 + 0x6e) = uVar13;
      *(undefined8 *)puVar7 = uVar12;
      *(undefined8 *)(param_1 + 0x72) = uVar11;
      *(undefined8 *)(param_1 + 0x70) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x6e);
      uVar12 = *(undefined8 *)puVar7;
      uVar11 = *(undefined8 *)(param_1 + 0x72);
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0x1c8);
      uVar14 = *(undefined8 *)(param_2 + 0x1c0);
      *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(param_2 + 0x1b8);
      *(undefined8 *)puVar7 = uVar16;
      *(undefined8 *)(param_1 + 0x72) = uVar15;
      *(undefined8 *)(param_1 + 0x70) = uVar14;
      *(undefined8 *)(param_2 + 0x1b8) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0x1c8) = uVar11;
      *(undefined8 *)(param_2 + 0x1c0) = uVar10;
    }
LAB_0036a6c4:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uStack_c8 = 0x36a6ec;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_d0 = &ppuStack_70;
  if ((param_2[1] >> 6 & 1) == 0) {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xffffbfff;
    if ((uVar2 >> 0xe & 1) == 0) goto LAB_0036a784;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
      param_1 = param_1 + 0x54;
      unaff_x30 = 0x36a6ec;
      puVar5 = auStack_c0;
      unaff_x29 = &ppuStack_70;
      goto FUN_0034b418;
    }
  }
  else {
    pbVar1 = param_2 + 0x150;
    puVar7 = param_1 + 0x54;
    uVar2 = *param_1;
    *param_1 = uVar2 | 0x4000;
    if ((uVar2 >> 0xe & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x158);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0x168);
      uVar10 = *(undefined8 *)(param_2 + 0x160);
      param_2[0x158] = 0;
      param_2[0x159] = 0;
      param_2[0x15a] = 0;
      param_2[0x15b] = 0;
      param_2[0x15c] = 0;
      param_2[0x15d] = 0;
      param_2[0x15e] = 0;
      param_2[0x15f] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0x168] = 0;
      param_2[0x169] = 0;
      param_2[0x16a] = 0;
      param_2[0x16b] = 0;
      param_2[0x16c] = 0;
      param_2[0x16d] = 0;
      param_2[0x16e] = 0;
      param_2[0x16f] = 0;
      param_2[0x160] = 0;
      param_2[0x161] = 0;
      param_2[0x162] = 0;
      param_2[0x163] = 0;
      param_2[0x164] = 0;
      param_2[0x165] = 0;
      param_2[0x166] = 0;
      param_2[0x167] = 0;
      *(undefined8 *)(param_1 + 0x56) = uVar13;
      *(undefined8 *)puVar7 = uVar12;
      *(undefined8 *)(param_1 + 0x5a) = uVar11;
      *(undefined8 *)(param_1 + 0x58) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x56);
      uVar12 = *(undefined8 *)puVar7;
      uVar11 = *(undefined8 *)(param_1 + 0x5a);
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0x168);
      uVar14 = *(undefined8 *)(param_2 + 0x160);
      *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_2 + 0x158);
      *(undefined8 *)puVar7 = uVar16;
      *(undefined8 *)(param_1 + 0x5a) = uVar15;
      *(undefined8 *)(param_1 + 0x58) = uVar14;
      *(undefined8 *)(param_2 + 0x158) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0x168) = uVar11;
      *(undefined8 *)(param_2 + 0x160) = uVar10;
    }
LAB_0036a784:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uStack_128 = 0x36a7ac;
  lStack_138 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_130 = &ppuStack_d0;
  if ((char)param_2[1] < '\0') {
    pbVar1 = param_2 + 0x130;
    puVar7 = param_1 + 0x4c;
    uVar2 = *param_1;
    *param_1 = uVar2 | 0x8000;
    if ((uVar2 >> 0xf & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x138);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0x148);
      uVar10 = *(undefined8 *)(param_2 + 0x140);
      param_2[0x138] = 0;
      param_2[0x139] = 0;
      param_2[0x13a] = 0;
      param_2[0x13b] = 0;
      param_2[0x13c] = 0;
      param_2[0x13d] = 0;
      param_2[0x13e] = 0;
      param_2[0x13f] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0x148] = 0;
      param_2[0x149] = 0;
      param_2[0x14a] = 0;
      param_2[0x14b] = 0;
      param_2[0x14c] = 0;
      param_2[0x14d] = 0;
      param_2[0x14e] = 0;
      param_2[0x14f] = 0;
      param_2[0x140] = 0;
      param_2[0x141] = 0;
      param_2[0x142] = 0;
      param_2[0x143] = 0;
      param_2[0x144] = 0;
      param_2[0x145] = 0;
      param_2[0x146] = 0;
      param_2[0x147] = 0;
      *(undefined8 *)(param_1 + 0x4e) = uVar13;
      *(undefined8 *)puVar7 = uVar12;
      *(undefined8 *)(param_1 + 0x52) = uVar11;
      *(undefined8 *)(param_1 + 0x50) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x4e);
      uVar12 = *(undefined8 *)puVar7;
      uVar11 = *(undefined8 *)(param_1 + 0x52);
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0x148);
      uVar14 = *(undefined8 *)(param_2 + 0x140);
      *(undefined8 *)(param_1 + 0x4e) = *(undefined8 *)(param_2 + 0x138);
      *(undefined8 *)puVar7 = uVar16;
      *(undefined8 *)(param_1 + 0x52) = uVar15;
      *(undefined8 *)(param_1 + 0x50) = uVar14;
      *(undefined8 *)(param_2 + 0x138) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0x148) = uVar11;
      *(undefined8 *)(param_2 + 0x140) = uVar10;
    }
LAB_0036a844:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_138) {
      return param_1;
    }
  }
  else {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xffff7fff;
    if ((uVar2 >> 0xf & 1) == 0) goto LAB_0036a844;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_138) {
      param_1 = param_1 + 0x4c;
      unaff_x30 = 0x36a7ac;
      puVar5 = auStack_120;
      unaff_x29 = &ppuStack_d0;
      goto FUN_0034b418;
    }
  }
  ___stack_chk_fail();
  uStack_188 = 0x36a86c;
  lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_190 = &ppuStack_130;
  if ((param_2[2] & 1) == 0) {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xfffeffff;
    if ((uVar2 >> 0x10 & 1) == 0) goto LAB_0036a904;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
      param_1 = param_1 + 0x44;
      unaff_x30 = 0x36a86c;
      puVar5 = auStack_180;
      unaff_x29 = &ppuStack_130;
      goto FUN_0034b418;
    }
  }
  else {
    pbVar1 = param_2 + 0x110;
    puVar7 = param_1 + 0x44;
    uVar2 = *param_1;
    *param_1 = uVar2 | 0x10000;
    if ((uVar2 >> 0x10 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x118);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0x128);
      uVar10 = *(undefined8 *)(param_2 + 0x120);
      param_2[0x118] = 0;
      param_2[0x119] = 0;
      param_2[0x11a] = 0;
      param_2[0x11b] = 0;
      param_2[0x11c] = 0;
      param_2[0x11d] = 0;
      param_2[0x11e] = 0;
      param_2[0x11f] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0x128] = 0;
      param_2[0x129] = 0;
      param_2[0x12a] = 0;
      param_2[299] = 0;
      param_2[300] = 0;
      param_2[0x12d] = 0;
      param_2[0x12e] = 0;
      param_2[0x12f] = 0;
      param_2[0x120] = 0;
      param_2[0x121] = 0;
      param_2[0x122] = 0;
      param_2[0x123] = 0;
      param_2[0x124] = 0;
      param_2[0x125] = 0;
      param_2[0x126] = 0;
      param_2[0x127] = 0;
      *(undefined8 *)(param_1 + 0x46) = uVar13;
      *(undefined8 *)puVar7 = uVar12;
      *(undefined8 *)(param_1 + 0x4a) = uVar11;
      *(undefined8 *)(param_1 + 0x48) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x46);
      uVar12 = *(undefined8 *)puVar7;
      uVar11 = *(undefined8 *)(param_1 + 0x4a);
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0x128);
      uVar14 = *(undefined8 *)(param_2 + 0x120);
      *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_2 + 0x118);
      *(undefined8 *)puVar7 = uVar16;
      *(undefined8 *)(param_1 + 0x4a) = uVar15;
      *(undefined8 *)(param_1 + 0x48) = uVar14;
      *(undefined8 *)(param_2 + 0x118) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0x128) = uVar11;
      *(undefined8 *)(param_2 + 0x120) = uVar10;
    }
LAB_0036a904:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uStack_1e8 = 0x36a92c;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_1f0 = &ppuStack_190;
  if ((param_2[2] >> 1 & 1) == 0) {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xfffdffff;
    puVar7 = param_1;
    if ((uVar2 >> 0x11 & 1) == 0) goto LAB_0036a9c0;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1f8) {
      param_1 = param_1 + 0x3c;
      unaff_x30 = 0x36a92c;
      puVar5 = auStack_1e0;
      unaff_x29 = &ppuStack_190;
      goto FUN_0034b418;
    }
  }
  else {
    pbVar1 = param_2 + 0xf0;
    uVar2 = *param_1;
    puVar7 = param_1 + 0x3c;
    *param_1 = uVar2 | 0x20000;
    if ((uVar2 >> 0x11 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0xf8);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0x108);
      uVar10 = *(undefined8 *)(param_2 + 0x100);
      param_2[0xf8] = 0;
      param_2[0xf9] = 0;
      param_2[0xfa] = 0;
      param_2[0xfb] = 0;
      param_2[0xfc] = 0;
      param_2[0xfd] = 0;
      param_2[0xfe] = 0;
      param_2[0xff] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0x108] = 0;
      param_2[0x109] = 0;
      param_2[0x10a] = 0;
      param_2[0x10b] = 0;
      param_2[0x10c] = 0;
      param_2[0x10d] = 0;
      param_2[0x10e] = 0;
      param_2[0x10f] = 0;
      param_2[0x100] = 0;
      param_2[0x101] = 0;
      param_2[0x102] = 0;
      param_2[0x103] = 0;
      param_2[0x104] = 0;
      param_2[0x105] = 0;
      param_2[0x106] = 0;
      param_2[0x107] = 0;
      *(undefined8 *)(param_1 + 0x3e) = uVar13;
      *(undefined8 *)puVar7 = uVar12;
      *(undefined8 *)(param_1 + 0x42) = uVar11;
      *(undefined8 *)(param_1 + 0x40) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x3e);
      uVar12 = *(undefined8 *)puVar7;
      uVar11 = *(undefined8 *)(param_1 + 0x42);
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0x108);
      uVar14 = *(undefined8 *)(param_2 + 0x100);
      *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0xf8);
      *(undefined8 *)puVar7 = uVar16;
      *(undefined8 *)(param_1 + 0x42) = uVar15;
      *(undefined8 *)(param_1 + 0x40) = uVar14;
      *(undefined8 *)(param_2 + 0xf8) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0x108) = uVar11;
      *(undefined8 *)(param_2 + 0x100) = uVar10;
    }
LAB_0036a9c0:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1f8) {
      return puVar7;
    }
  }
  ___stack_chk_fail();
  uStack_248 = 0x36a9e8;
  lStack_258 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_250 = &ppuStack_1f0;
  if ((param_2[2] >> 2 & 1) == 0) {
    uVar2 = *puVar7;
    *puVar7 = uVar2 & 0xfffbffff;
    param_1 = puVar7;
    if ((uVar2 >> 0x12 & 1) == 0) goto LAB_0036aa7c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_258) {
      param_1 = puVar7 + 0x34;
      unaff_x30 = 0x36a9e8;
      puVar5 = auStack_240;
      unaff_x29 = &ppuStack_1f0;
      goto FUN_0034b418;
    }
  }
  else {
    pbVar1 = param_2 + 0xd0;
    uVar2 = *puVar7;
    param_1 = puVar7 + 0x34;
    *puVar7 = uVar2 | 0x40000;
    if ((uVar2 >> 0x12 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0xd8);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0xe8);
      uVar10 = *(undefined8 *)(param_2 + 0xe0);
      param_2[0xd8] = 0;
      param_2[0xd9] = 0;
      param_2[0xda] = 0;
      param_2[0xdb] = 0;
      param_2[0xdc] = 0;
      param_2[0xdd] = 0;
      param_2[0xde] = 0;
      param_2[0xdf] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0xe8] = 0;
      param_2[0xe9] = 0;
      param_2[0xea] = 0;
      param_2[0xeb] = 0;
      param_2[0xec] = 0;
      param_2[0xed] = 0;
      param_2[0xee] = 0;
      param_2[0xef] = 0;
      param_2[0xe0] = 0;
      param_2[0xe1] = 0;
      param_2[0xe2] = 0;
      param_2[0xe3] = 0;
      param_2[0xe4] = 0;
      param_2[0xe5] = 0;
      param_2[0xe6] = 0;
      param_2[0xe7] = 0;
      *(undefined8 *)(puVar7 + 0x36) = uVar13;
      *(undefined8 *)param_1 = uVar12;
      *(undefined8 *)(puVar7 + 0x3a) = uVar11;
      *(undefined8 *)(puVar7 + 0x38) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(puVar7 + 0x36);
      uVar12 = *(undefined8 *)param_1;
      uVar11 = *(undefined8 *)(puVar7 + 0x3a);
      uVar10 = *(undefined8 *)(puVar7 + 0x38);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0xe8);
      uVar14 = *(undefined8 *)(param_2 + 0xe0);
      *(undefined8 *)(puVar7 + 0x36) = *(undefined8 *)(param_2 + 0xd8);
      *(undefined8 *)param_1 = uVar16;
      *(undefined8 *)(puVar7 + 0x3a) = uVar15;
      *(undefined8 *)(puVar7 + 0x38) = uVar14;
      *(undefined8 *)(param_2 + 0xd8) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0xe8) = uVar11;
      *(undefined8 *)(param_2 + 0xe0) = uVar10;
    }
LAB_0036aa7c:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_258) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  puVar5 = auStack_300;
  uStack_2a8 = 0x36aaa4;
  unaff_x29 = &ppuStack_2b0;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_2b0 = &ppuStack_250;
  if ((param_2[2] >> 3 & 1) == 0) {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xfff7ffff;
    puVar7 = param_1;
    if ((uVar2 >> 0x13 & 1) == 0) goto LAB_0036ab38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2b8) {
      param_1 = param_1 + 0x2c;
      unaff_x30 = 0x36aaa4;
      puVar5 = auStack_2a0;
      unaff_x29 = &ppuStack_250;
      goto FUN_0034b418;
    }
  }
  else {
    pbVar1 = param_2 + 0xb0;
    uVar2 = *param_1;
    puVar7 = param_1 + 0x2c;
    *param_1 = uVar2 | 0x80000;
    if ((uVar2 >> 0x13 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0xb8);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 200);
      uVar10 = *(undefined8 *)(param_2 + 0xc0);
      param_2[0xb8] = 0;
      param_2[0xb9] = 0;
      param_2[0xba] = 0;
      param_2[0xbb] = 0;
      param_2[0xbc] = 0;
      param_2[0xbd] = 0;
      param_2[0xbe] = 0;
      param_2[0xbf] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[200] = 0;
      param_2[0xc9] = 0;
      param_2[0xca] = 0;
      param_2[0xcb] = 0;
      param_2[0xcc] = 0;
      param_2[0xcd] = 0;
      param_2[0xce] = 0;
      param_2[0xcf] = 0;
      param_2[0xc0] = 0;
      param_2[0xc1] = 0;
      param_2[0xc2] = 0;
      param_2[0xc3] = 0;
      param_2[0xc4] = 0;
      param_2[0xc5] = 0;
      param_2[0xc6] = 0;
      param_2[199] = 0;
      *(undefined8 *)(param_1 + 0x2e) = uVar13;
      *(undefined8 *)puVar7 = uVar12;
      *(undefined8 *)(param_1 + 0x32) = uVar11;
      *(undefined8 *)(param_1 + 0x30) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x2e);
      uVar12 = *(undefined8 *)puVar7;
      uVar11 = *(undefined8 *)(param_1 + 0x32);
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 200);
      uVar14 = *(undefined8 *)(param_2 + 0xc0);
      *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0xb8);
      *(undefined8 *)puVar7 = uVar16;
      *(undefined8 *)(param_1 + 0x32) = uVar15;
      *(undefined8 *)(param_1 + 0x30) = uVar14;
      *(undefined8 *)(param_2 + 0xb8) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 200) = uVar11;
      *(undefined8 *)(param_2 + 0xc0) = uVar10;
    }
LAB_0036ab38:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2b8) {
      return puVar7;
    }
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((param_2[2] >> 4 & 1) == 0) {
    uVar2 = *puVar7;
    *puVar7 = uVar2 & 0xffefffff;
    puVar8 = puVar7;
    if ((uVar2 >> 0x14 & 1) != 0) {
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
        param_1 = puVar7 + 0x24;
        unaff_x30 = 0x36ab60;
FUN_0034b418:
        *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
        *(undefined8 *)(puVar5 + -0x18) = unaff_x19;
        *(undefined8 ****)(puVar5 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar5 + -8) = unaff_x30;
        plVar6 = *(long **)param_1;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
          do {
            lVar9 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 + -1 == 0) {
            (*(code *)plVar6[1])();
          }
        }
        return param_1;
      }
      goto LAB_0036ac18;
    }
  }
  else {
    pbVar1 = param_2 + 0x90;
    uVar2 = *puVar7;
    puVar8 = puVar7 + 0x24;
    *puVar7 = uVar2 | 0x100000;
    if ((uVar2 >> 0x14 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x98);
      uVar12 = *(undefined8 *)pbVar1;
      uVar11 = *(undefined8 *)(param_2 + 0xa8);
      uVar10 = *(undefined8 *)(param_2 + 0xa0);
      param_2[0x98] = 0;
      param_2[0x99] = 0;
      param_2[0x9a] = 0;
      param_2[0x9b] = 0;
      param_2[0x9c] = 0;
      param_2[0x9d] = 0;
      param_2[0x9e] = 0;
      param_2[0x9f] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      param_2[0xa8] = 0;
      param_2[0xa9] = 0;
      param_2[0xaa] = 0;
      param_2[0xab] = 0;
      param_2[0xac] = 0;
      param_2[0xad] = 0;
      param_2[0xae] = 0;
      param_2[0xaf] = 0;
      param_2[0xa0] = 0;
      param_2[0xa1] = 0;
      param_2[0xa2] = 0;
      param_2[0xa3] = 0;
      param_2[0xa4] = 0;
      param_2[0xa5] = 0;
      param_2[0xa6] = 0;
      param_2[0xa7] = 0;
      *(undefined8 *)(puVar7 + 0x26) = uVar13;
      *(undefined8 *)puVar8 = uVar12;
      *(undefined8 *)(puVar7 + 0x2a) = uVar11;
      *(undefined8 *)(puVar7 + 0x28) = uVar10;
    }
    else {
      uVar13 = *(undefined8 *)(puVar7 + 0x26);
      uVar12 = *(undefined8 *)puVar8;
      uVar11 = *(undefined8 *)(puVar7 + 0x2a);
      uVar10 = *(undefined8 *)(puVar7 + 0x28);
      uVar16 = *(undefined8 *)pbVar1;
      uVar15 = *(undefined8 *)(param_2 + 0xa8);
      uVar14 = *(undefined8 *)(param_2 + 0xa0);
      *(undefined8 *)(puVar7 + 0x26) = *(undefined8 *)(param_2 + 0x98);
      *(undefined8 *)puVar8 = uVar16;
      *(undefined8 *)(puVar7 + 0x2a) = uVar15;
      *(undefined8 *)(puVar7 + 0x28) = uVar14;
      *(undefined8 *)(param_2 + 0x98) = uVar13;
      *(undefined8 *)pbVar1 = uVar12;
      *(undefined8 *)(param_2 + 0xa8) = uVar11;
      *(undefined8 *)(param_2 + 0xa0) = uVar10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
    return puVar8;
  }
LAB_0036ac18:
  ___stack_chk_fail();
  if ((param_2[2] >> 6 & 1) != 0) {
    uVar2 = *puVar8;
    *puVar8 = uVar2 | 0x400000;
    if ((uVar2 >> 0x16 & 1) == 0) {
      FUN_0036b030();
    }
    else {
      FUN_0036ad70(puVar8 + 0x18,param_2 + 0x60);
    }
    return puVar8 + 0x18;
  }
  uVar2 = *puVar8;
  *puVar8 = uVar2 & 0xffbfffff;
  if ((uVar2 >> 0x16 & 1) == 0) {
    return puVar8;
  }
  puVar8 = puVar8 + 0x18;
  if (*(long *)puVar8 != 0) {
    FUN_00366fe0(puVar8);
  }
  return puVar8;
}



/* Entry: 0036ac1c; end: 0036ac47;  */

uint * FUN_0036ac1c(uint *param_1,long param_2)

{
  uint uVar1;
  
  if ((*(byte *)(param_2 + 2) >> 6 & 1) != 0) {
    uVar1 = *param_1;
    *param_1 = uVar1 | 0x400000;
    if ((uVar1 >> 0x16 & 1) == 0) {
      FUN_0036b030();
    }
    else {
      FUN_0036ad70(param_1 + 0x18,param_2 + 0x60);
    }
    return param_1 + 0x18;
  }
  uVar1 = *param_1;
  *param_1 = uVar1 & 0xffbfffff;
  if ((uVar1 >> 0x16 & 1) == 0) {
    return param_1;
  }
  param_1 = param_1 + 0x18;
  if (*(long *)param_1 != 0) {
    FUN_00366fe0(param_1);
  }
  return param_1;
}



/* Entry: 0036ac48; end: 0036ad03;  */

uint * FUN_0036ac48(uint *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(char *)(param_2 + 2) < '\0') {
    puVar1 = (undefined8 *)(param_2 + 0x40);
    uVar2 = *param_1;
    puVar6 = param_1 + 0x10;
    *param_1 = uVar2 | 0x800000;
    if ((uVar2 >> 0x17 & 1) == 0) {
      uVar11 = *(undefined8 *)(param_2 + 0x48);
      uVar10 = *puVar1;
      uVar9 = *(undefined8 *)(param_2 + 0x58);
      uVar8 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_2 + 0x48) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x12) = uVar11;
      *(undefined8 *)puVar6 = uVar10;
      *(undefined8 *)(param_1 + 0x16) = uVar9;
      *(undefined8 *)(param_1 + 0x14) = uVar8;
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0x12);
      uVar10 = *(undefined8 *)puVar6;
      uVar9 = *(undefined8 *)(param_1 + 0x16);
      uVar8 = *(undefined8 *)(param_1 + 0x14);
      uVar14 = *puVar1;
      uVar13 = *(undefined8 *)(param_2 + 0x58);
      uVar12 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)puVar6 = uVar14;
      *(undefined8 *)(param_1 + 0x16) = uVar13;
      *(undefined8 *)(param_1 + 0x14) = uVar12;
      *(undefined8 *)(param_2 + 0x48) = uVar11;
      *puVar1 = uVar10;
      *(undefined8 *)(param_2 + 0x58) = uVar9;
      *(undefined8 *)(param_2 + 0x50) = uVar8;
    }
  }
  else {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xff7fffff;
    puVar6 = param_1;
    if ((uVar2 >> 0x17 & 1) != 0) {
      if (*(long *)PTR____stack_chk_guard_00999f88 == lVar7) {
        plVar5 = *(long **)(param_1 + 0x10);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
          do {
            lVar7 = *plVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)plVar5[1])();
          }
        }
        return param_1 + 0x10;
      }
      goto LAB_0036ad00;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar7) {
    return puVar6;
  }
LAB_0036ad00:
  ___stack_chk_fail();
  if ((*(byte *)(param_2 + 3) >> 2 & 1) != 0) {
    uVar2 = *puVar6;
    *puVar6 = uVar2 | 0x4000000;
    if ((uVar2 >> 0x1a & 1) == 0) {
      FUN_0036b424();
    }
    else {
      FUN_0036b0ec(puVar6 + 2,param_2 + 8);
    }
    return puVar6 + 2;
  }
  uVar2 = *puVar6;
  *puVar6 = uVar2 & 0xfbffffff;
  if ((uVar2 >> 0x1a & 1) == 0) {
    return puVar6;
  }
  puVar6 = puVar6 + 2;
  if (*(long *)puVar6 != 0) {
    FUN_003670a0(puVar6);
  }
  return puVar6;
}



/* Entry: 0036ad04; end: 0036ad2f;  */

uint * FUN_0036ad04(uint *param_1,long param_2)

{
  uint uVar1;
  
  if ((*(byte *)(param_2 + 3) >> 2 & 1) != 0) {
    uVar1 = *param_1;
    *param_1 = uVar1 | 0x4000000;
    if ((uVar1 >> 0x1a & 1) == 0) {
      FUN_0036b424();
    }
    else {
      FUN_0036b0ec(param_1 + 2,param_2 + 8);
    }
    return param_1 + 2;
  }
  uVar1 = *param_1;
  *param_1 = uVar1 & 0xfbffffff;
  if ((uVar1 >> 0x1a & 1) == 0) {
    return param_1;
  }
  param_1 = param_1 + 2;
  if (*(long *)param_1 != 0) {
    FUN_003670a0(param_1);
  }
  return param_1;
}



/* Entry: 0036ad30; end: 0036ad6f;  */

uint * FUN_0036ad30(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x400000;
  if ((uVar1 >> 0x16 & 1) == 0) {
    FUN_0036b030();
  }
  else {
    FUN_0036ad70(param_1 + 0x18);
  }
  return param_1 + 0x18;
}



/* Entry: 0036ad70; end: 0036ada3;  */

long FUN_0036ad70(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_0036ada4(param_1);
  }
  return param_1;
}



/* Entry: 0036ada4; end: 0036adbb;  */

void FUN_0036ada4(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong ****ppppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong ****ppppuVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong ***pppuVar12;
  ulong uVar13;
  ulong ***pppuVar14;
  ulong ***pppuStack_70;
  ulong uStack_68;
  
  if ((*param_2 & 1) != 0) {
    puVar10 = param_1 + 1;
    uVar3 = *param_1;
    puVar6 = puVar10;
    if ((uVar3 & 1) != 0) {
      puVar6 = (ulong *)*puVar10;
    }
    if (1 < uVar3) {
      uVar3 = uVar3 >> 1;
      puVar6 = puVar6 + uVar3 * 4 + -3;
      do {
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          __ZdlPv(*puVar6);
        }
        puVar6 = puVar6 + -4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar3 = *param_1;
    }
    if ((uVar3 & 1) != 0) {
      __ZdlPv(*puVar10);
    }
    *param_1 = *param_2;
    uVar3 = param_2[1];
    uVar11 = param_2[4];
    uVar4 = param_2[3];
    param_1[2] = param_2[2];
    *puVar10 = uVar3;
    param_1[4] = uVar11;
    param_1[3] = uVar4;
    *param_2 = 0;
    return;
  }
  puVar6 = param_2 + 1;
  uVar3 = *param_2 >> 1;
  if ((*param_1 & 1) == 0) {
    uVar4 = 1;
    puVar10 = param_1 + 1;
  }
  else {
    puVar10 = (ulong *)param_1[1];
    uVar4 = param_1[2];
  }
  uVar11 = *param_1 >> 1;
  pppuStack_70 = (ulong ***)0x0;
  uStack_68 = 0;
  if (uVar4 < uVar3) {
    uVar4 = uVar4 * 2;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    ppppuVar2 = &pppuStack_70;
    FUN_0034dd60();
    puVar7 = puVar10;
    uVar8 = uVar11;
    uVar9 = uVar3;
    ppppuVar5 = ppppuVar2;
    pppuStack_70 = (ulong ***)ppppuVar2;
    uStack_68 = uVar4;
  }
  else {
    puVar7 = puVar10 + uVar3 * 4;
    uVar8 = uVar11 - uVar3;
    bVar1 = uVar11 < uVar3;
    if (bVar1) {
      uVar8 = 0;
      puVar7 = (ulong *)0x0;
    }
    uVar9 = 0;
    if (bVar1) {
      uVar9 = uVar3 - uVar11;
    }
    uVar4 = uVar3;
    ppppuVar5 = (ulong ****)0x0;
    if (bVar1) {
      uVar4 = uVar11;
      ppppuVar5 = (ulong ****)(puVar10 + uVar11 * 4);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = *puVar6;
      if (*(char *)((long)puVar10 + 0x1f) < '\0') {
        __ZdlPv(puVar10[1]);
      }
      uVar13 = puVar6[2];
      uVar11 = puVar6[1];
      puVar10[3] = puVar6[3];
      puVar10[2] = uVar13;
      puVar10[1] = uVar11;
      *(undefined1 *)((long)puVar6 + 0x1f) = 0;
      *(undefined1 *)(puVar6 + 1) = 0;
      puVar6 = puVar6 + 4;
      puVar10 = puVar10 + 4;
    }
    ppppuVar2 = (ulong ****)0x0;
    if (uVar9 == 0) goto LAB_0036af94;
  }
  ppppuVar5 = ppppuVar5 + 1;
  do {
    ppppuVar5[-1] = (ulong ***)*puVar6;
    pppuVar14 = (ulong ***)puVar6[2];
    pppuVar12 = (ulong ***)puVar6[1];
    ppppuVar5[2] = (ulong ***)puVar6[3];
    ppppuVar5[1] = pppuVar14;
    *ppppuVar5 = pppuVar12;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[1] = 0;
    puVar6 = puVar6 + 4;
    uVar9 = uVar9 - 1;
    ppppuVar5 = ppppuVar5 + 4;
  } while (uVar9 != 0);
LAB_0036af94:
  if (uVar8 != 0) {
    puVar7 = puVar7 + uVar8 * 4 + -3;
    do {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        __ZdlPv(*puVar7);
      }
      puVar7 = puVar7 + -4;
      uVar8 = uVar8 - 1;
      ppppuVar2 = (ulong ****)pppuStack_70;
    } while (uVar8 != 0);
  }
  if (ppppuVar2 == (ulong ****)0x0) {
    uVar3 = *param_1 & 1 | uVar3 << 1;
  }
  else {
    if ((*param_1 & 1) != 0) {
      __ZdlPv(param_1[1]);
      ppppuVar2 = (ulong ****)pppuStack_70;
    }
    param_1[1] = (ulong)ppppuVar2;
    param_1[2] = uStack_68;
    uVar3 = uVar3 << 1 | 1;
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 0036adbc; end: 0036ae5f;  */

void FUN_0036adbc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 4 + -3;
    do {
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        __ZdlPv(*puVar2);
      }
      puVar2 = puVar2 + -4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
    __ZdlPv(*puVar3);
  }
  *param_1 = *param_2;
  uVar1 = param_2[1];
  uVar5 = param_2[4];
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  *puVar3 = uVar1;
  param_1[4] = uVar5;
  param_1[3] = uVar4;
  *param_2 = 0;
  return;
}



/* Entry: 0036ae60; end: 0036b02f;  */

void FUN_0036ae60(ulong *param_1,ulong *param_2,ulong param_3)

{
  bool bVar1;
  ulong ****ppppuVar2;
  ulong uVar3;
  ulong ****ppppuVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong ***pppuVar10;
  ulong uVar11;
  ulong ***pppuVar12;
  ulong ***pppuStack_70;
  ulong uStack_68;
  
  if ((*param_1 & 1) == 0) {
    uVar3 = 1;
    puVar8 = param_1 + 1;
  }
  else {
    puVar8 = (ulong *)param_1[1];
    uVar3 = param_1[2];
  }
  uVar9 = *param_1 >> 1;
  pppuStack_70 = (ulong ***)0x0;
  uStack_68 = 0;
  if (uVar3 < param_3) {
    uVar3 = uVar3 * 2;
    if (uVar3 < param_3 || uVar3 - param_3 == 0) {
      uVar3 = param_3;
    }
    ppppuVar2 = &pppuStack_70;
    FUN_0034dd60();
    puVar5 = puVar8;
    uVar6 = uVar9;
    uVar7 = param_3;
    ppppuVar4 = ppppuVar2;
    pppuStack_70 = (ulong ***)ppppuVar2;
    uStack_68 = uVar3;
  }
  else {
    puVar5 = puVar8 + param_3 * 4;
    uVar6 = uVar9 - param_3;
    bVar1 = uVar9 < param_3;
    if (bVar1) {
      uVar6 = 0;
      puVar5 = (ulong *)0x0;
    }
    uVar7 = 0;
    if (bVar1) {
      uVar7 = param_3 - uVar9;
    }
    uVar3 = param_3;
    ppppuVar4 = (ulong ****)0x0;
    if (bVar1) {
      uVar3 = uVar9;
      ppppuVar4 = (ulong ****)(puVar8 + uVar9 * 4);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar8 = *param_2;
      if (*(char *)((long)puVar8 + 0x1f) < '\0') {
        __ZdlPv(puVar8[1]);
      }
      uVar11 = param_2[2];
      uVar9 = param_2[1];
      puVar8[3] = param_2[3];
      puVar8[2] = uVar11;
      puVar8[1] = uVar9;
      *(undefined1 *)((long)param_2 + 0x1f) = 0;
      *(undefined1 *)(param_2 + 1) = 0;
      param_2 = param_2 + 4;
      puVar8 = puVar8 + 4;
    }
    ppppuVar2 = (ulong ****)0x0;
    if (uVar7 == 0) goto LAB_0036af94;
  }
  ppppuVar4 = ppppuVar4 + 1;
  do {
    ppppuVar4[-1] = (ulong ***)*param_2;
    pppuVar12 = (ulong ***)param_2[2];
    pppuVar10 = (ulong ***)param_2[1];
    ppppuVar4[2] = (ulong ***)param_2[3];
    ppppuVar4[1] = pppuVar12;
    *ppppuVar4 = pppuVar10;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    param_2 = param_2 + 4;
    uVar7 = uVar7 - 1;
    ppppuVar4 = ppppuVar4 + 4;
  } while (uVar7 != 0);
LAB_0036af94:
  if (uVar6 != 0) {
    puVar5 = puVar5 + uVar6 * 4 + -3;
    do {
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        __ZdlPv(*puVar5);
      }
      puVar5 = puVar5 + -4;
      uVar6 = uVar6 - 1;
      ppppuVar2 = (ulong ****)pppuStack_70;
    } while (uVar6 != 0);
  }
  if (ppppuVar2 == (ulong ****)0x0) {
    uVar3 = *param_1 & 1 | param_3 << 1;
  }
  else {
    if ((*param_1 & 1) != 0) {
      __ZdlPv(param_1[1]);
      ppppuVar2 = (ulong ****)pppuStack_70;
    }
    param_1[1] = (ulong)ppppuVar2;
    param_1[2] = uStack_68;
    uVar3 = param_3 << 1 | 1;
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 0036b030; end: 0036b0ab;  */

void FUN_0036b030(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  uVar2 = *param_2;
  if ((uVar2 & 1) == 0) {
    if (1 < uVar2) {
      lVar1 = 0;
      uVar2 = uVar2 >> 1;
      do {
        *(undefined8 *)((long)param_1 + lVar1 + 8) = *(undefined8 *)((long)param_2 + lVar1 + 8);
        uVar4 = *(undefined8 *)((long)param_2 + lVar1 + 0x18);
        uVar3 = *(undefined8 *)((long)param_2 + lVar1 + 0x10);
        *(undefined8 *)((long)param_1 + lVar1 + 0x20) =
             *(undefined8 *)((long)param_2 + lVar1 + 0x20);
        *(undefined8 *)((long)param_1 + lVar1 + 0x18) = uVar4;
        *(undefined8 *)((long)param_1 + lVar1 + 0x10) = uVar3;
        *(undefined8 *)((long)param_2 + lVar1 + 0x18) = 0;
        *(undefined8 *)((long)param_2 + lVar1 + 0x20) = 0;
        *(undefined8 *)((long)param_2 + lVar1 + 0x10) = 0;
        lVar1 = lVar1 + 0x20;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      uVar2 = *param_2;
    }
    *param_1 = uVar2 & 0xfffffffffffffffe;
    return;
  }
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar2;
  *param_1 = *param_2 | 1;
  *param_2 = 0;
  return;
}



/* Entry: 0036b0ac; end: 0036b0eb;  */

uint * FUN_0036b0ac(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x4000000;
  if ((uVar1 >> 0x1a & 1) == 0) {
    FUN_0036b424();
  }
  else {
    FUN_0036b0ec(param_1 + 2);
  }
  return param_1 + 2;
}



/* Entry: 0036b0ec; end: 0036b11f;  */

long FUN_0036b0ec(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_0036b120(param_1);
  }
  return param_1;
}



/* Entry: 0036b120; end: 0036b137;  */

void FUN_0036b120(ulong *param_1,ulong *param_2)

{
  long lVar1;
  bool bVar2;
  ulong *****pppppuVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong ****ppppuVar13;
  ulong ****ppppuVar14;
  ulong ****ppppuStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  
  if ((*param_2 & 1) != 0) {
    puVar11 = param_1 + 1;
    uVar4 = *param_1;
    puVar7 = puVar11;
    if ((uVar4 & 1) != 0) {
      puVar7 = (ulong *)*puVar11;
    }
    if (1 < uVar4) {
      uVar4 = uVar4 >> 1;
      puVar7 = puVar7 + uVar4 * 3;
      do {
        if (*(char *)((long)puVar7 + -1) < '\0') {
          __ZdlPv(puVar7[-3]);
        }
        uVar4 = uVar4 - 1;
        puVar7 = puVar7 + -3;
      } while (uVar4 != 0);
      uVar4 = *param_1;
    }
    if ((uVar4 & 1) != 0) {
      __ZdlPv(*puVar11);
    }
    *param_1 = *param_2;
    uVar6 = param_2[2];
    uVar4 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar6;
    *puVar11 = uVar4;
    *param_2 = 0;
    return;
  }
  puStack_58 = param_2 + 1;
  uVar4 = *param_2 >> 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 1;
    puVar7 = param_1 + 1;
  }
  else {
    puVar7 = (ulong *)param_1[1];
    uVar6 = param_1[2];
  }
  uVar10 = *param_1 >> 1;
  ppppuStack_68 = (ulong ****)0x0;
  uStack_60 = 0;
  if (uVar6 < uVar4) {
    uVar6 = uVar6 * 2;
    if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
      uVar6 = uVar4;
    }
    pppppuVar3 = &ppppuStack_68;
    FUN_0036b3e0();
    uVar5 = 0;
    puVar9 = (ulong *)0x0;
    puVar11 = puVar7;
    uVar12 = uVar4;
    ppppuStack_68 = (ulong ****)pppppuVar3;
    uStack_60 = uVar6;
  }
  else {
    puVar11 = puVar7 + uVar4 * 3;
    lVar1 = uVar10 * 3;
    uVar8 = uVar4 - uVar10;
    bVar2 = uVar10 < uVar4;
    uVar6 = uVar10 - uVar4;
    uVar5 = uVar4;
    if (bVar2) {
      puVar11 = (ulong *)0x0;
      uVar6 = 0;
      uVar5 = uVar10;
    }
    uVar10 = uVar6;
    uVar12 = 0;
    if (bVar2) {
      uVar12 = uVar8;
    }
    puVar9 = puVar7;
    pppppuVar3 = (ulong *****)0x0;
    if (bVar2) {
      pppppuVar3 = (ulong *****)(puVar7 + lVar1);
    }
  }
  FUN_0036b370(puVar9,&puStack_58,uVar5);
  for (; uVar12 != 0; uVar12 = uVar12 - 1) {
    ppppuVar14 = (ulong ****)puStack_58[1];
    ppppuVar13 = (ulong ****)*puStack_58;
    pppppuVar3[2] = (ulong ****)puStack_58[2];
    pppppuVar3[1] = ppppuVar14;
    *pppppuVar3 = ppppuVar13;
    puStack_58[1] = 0;
    puStack_58[2] = 0;
    *puStack_58 = 0;
    pppppuVar3 = pppppuVar3 + 3;
    puStack_58 = puStack_58 + 3;
  }
  if (uVar10 != 0) {
    puVar7 = puVar11 + uVar10 * 3;
    do {
      if (*(char *)((long)puVar7 + -1) < '\0') {
        __ZdlPv(puVar7[-3]);
      }
      uVar10 = uVar10 - 1;
      puVar7 = puVar7 + -3;
    } while (uVar10 != 0);
  }
  if ((ulong *****)ppppuStack_68 == (ulong *****)0x0) {
    uVar4 = *param_1 & 1 | uVar4 << 1;
  }
  else {
    if ((*param_1 & 1) != 0) {
      __ZdlPv(param_1[1]);
    }
    param_1[1] = (ulong)ppppuStack_68;
    param_1[2] = uStack_60;
    uVar4 = uVar4 << 1 | 1;
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 0036b138; end: 0036b1e3;  */

void FUN_0036b138(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 3;
    do {
      if (*(char *)((long)puVar2 + -1) < '\0') {
        __ZdlPv(puVar2[-3]);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + -3;
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
    __ZdlPv(*puVar3);
  }
  *param_1 = *param_2;
  uVar4 = param_2[2];
  uVar1 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  *puVar3 = uVar1;
  *param_2 = 0;
  return;
}



/* Entry: 0036b1e4; end: 0036b36f;  */

void FUN_0036b1e4(ulong *param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  bool bVar2;
  ulong ****ppppuVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong ***pppuVar12;
  ulong ***pppuVar13;
  ulong ***pppuStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  
  if ((*param_1 & 1) == 0) {
    uVar5 = 1;
    puVar7 = param_1 + 1;
  }
  else {
    puVar7 = (ulong *)param_1[1];
    uVar5 = param_1[2];
  }
  uVar9 = *param_1 >> 1;
  pppuStack_68 = (ulong ***)0x0;
  uStack_60 = 0;
  puStack_58 = param_2;
  if (uVar5 < param_3) {
    uVar5 = uVar5 * 2;
    if (uVar5 < param_3 || uVar5 - param_3 == 0) {
      uVar5 = param_3;
    }
    ppppuVar3 = &pppuStack_68;
    FUN_0036b3e0();
    uVar4 = 0;
    puVar8 = (ulong *)0x0;
    puVar10 = puVar7;
    uVar11 = param_3;
    pppuStack_68 = (ulong ***)ppppuVar3;
    uStack_60 = uVar5;
  }
  else {
    puVar10 = puVar7 + param_3 * 3;
    lVar1 = uVar9 * 3;
    uVar6 = param_3 - uVar9;
    bVar2 = uVar9 < param_3;
    uVar5 = uVar9 - param_3;
    uVar4 = param_3;
    if (bVar2) {
      puVar10 = (ulong *)0x0;
      uVar5 = 0;
      uVar4 = uVar9;
    }
    uVar9 = uVar5;
    uVar11 = 0;
    if (bVar2) {
      uVar11 = uVar6;
    }
    puVar8 = puVar7;
    ppppuVar3 = (ulong ****)0x0;
    if (bVar2) {
      ppppuVar3 = (ulong ****)(puVar7 + lVar1);
    }
  }
  FUN_0036b370(puVar8,&puStack_58,uVar4);
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    pppuVar13 = (ulong ***)puStack_58[1];
    pppuVar12 = (ulong ***)*puStack_58;
    ppppuVar3[2] = (ulong ***)puStack_58[2];
    ppppuVar3[1] = pppuVar13;
    *ppppuVar3 = pppuVar12;
    puStack_58[1] = 0;
    puStack_58[2] = 0;
    *puStack_58 = 0;
    ppppuVar3 = ppppuVar3 + 3;
    puStack_58 = puStack_58 + 3;
  }
  if (uVar9 != 0) {
    puVar7 = puVar10 + uVar9 * 3;
    do {
      if (*(char *)((long)puVar7 + -1) < '\0') {
        __ZdlPv(puVar7[-3]);
      }
      uVar9 = uVar9 - 1;
      puVar7 = puVar7 + -3;
    } while (uVar9 != 0);
  }
  if ((ulong ****)pppuStack_68 == (ulong ****)0x0) {
    uVar5 = *param_1 & 1 | param_3 << 1;
  }
  else {
    if ((*param_1 & 1) != 0) {
      __ZdlPv(param_1[1]);
    }
    param_1[1] = (ulong)pppuStack_68;
    param_1[2] = uStack_60;
    uVar5 = param_3 << 1 | 1;
  }
  *param_1 = uVar5;
  return;
}



/* Entry: 0036b370; end: 0036b3df;  */

void FUN_0036b370(undefined8 *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)*param_2;
    do {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      uVar3 = puVar1[1];
      uVar2 = *puVar1;
      param_1[2] = puVar1[2];
      param_1[1] = uVar3;
      *param_1 = uVar2;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined8 *)(*param_2 + 0x18);
      *param_2 = (long)puVar1;
      param_3 = param_3 + -1;
      param_1 = param_1 + 3;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 0036b3e0; end: 0036b423;  */

void FUN_0036b3e0(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 < (ulong *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_2 * 0x18);
    return;
  }
  FUN_00349558();
  *param_1 = 0;
  uVar3 = *param_2;
  if ((uVar3 & 1) == 0) {
    if (1 < uVar3) {
      uVar3 = uVar3 >> 1;
      lVar4 = 8;
      do {
        puVar1 = (undefined8 *)((long)param_2 + lVar4);
        puVar2 = (undefined8 *)((long)param_1 + lVar4);
        uVar6 = puVar1[1];
        uVar5 = *puVar1;
        puVar2[2] = puVar1[2];
        puVar2[1] = uVar6;
        *puVar2 = uVar5;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        lVar4 = lVar4 + 0x18;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar3 = *param_2;
    }
    *param_1 = uVar3 & 0xfffffffffffffffe;
    return;
  }
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar3;
  *param_1 = *param_2 | 1;
  *param_2 = 0;
  return;
}



/* Entry: 0036b424; end: 0036b497;  */

void FUN_0036b424(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  uVar3 = *param_2;
  if ((uVar3 & 1) == 0) {
    if (1 < uVar3) {
      uVar3 = uVar3 >> 1;
      lVar4 = 8;
      do {
        puVar1 = (undefined8 *)((long)param_2 + lVar4);
        puVar2 = (undefined8 *)((long)param_1 + lVar4);
        uVar6 = puVar1[1];
        uVar5 = *puVar1;
        puVar2[2] = puVar1[2];
        puVar2[1] = uVar6;
        *puVar2 = uVar5;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        lVar4 = lVar4 + 0x18;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar3 = *param_2;
    }
    *param_1 = uVar3 & 0xfffffffffffffffe;
    return;
  }
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar3;
  *param_1 = *param_2 | 1;
  *param_2 = 0;
  return;
}



/* Entry: 0036b498; end: 0036b5af;  */

void FUN_0036b498(long param_1,ulong *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  
  lVar6 = 0;
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  while (((lVar4 = *(long *)(lVar7 + 0x1d8 + lVar6), lVar4 == 0 ||
          ((*(byte *)(lVar4 + 0x10) >> 3 & 1) == 0)) ||
         (*(long *)(*(long *)(lVar4 + 8) + 0x48) == 0))) {
    lVar6 = lVar6 + 0x10;
    if (lVar6 == 0x60) {
      return;
    }
  }
  FUN_0036a260(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x38),*(long *)(param_1 + 0x10) + 0x550);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar7 = lVar7 + lVar6;
  lVar6 = *(long *)(*(long *)(lVar7 + 0x1d8) + 8);
  **(undefined1 **)(lVar6 + 0x50) = *(undefined1 *)(lVar4 + 0x778);
  uVar5 = *(undefined8 *)(lVar6 + 0x48);
  *(undefined8 *)(lVar6 + 0x48) = 0;
  FUN_0036a218(*(undefined8 *)(lVar4 + 0x10),lVar7 + 0x1d8);
  uStack_58 = *param_2;
  if ((uStack_58 & 1) != 0) {
    piVar3 = (int *)(uStack_58 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_50 = "recv_initial_metadata_ready for pending batch";
  uStack_48 = uVar5;
  FUN_0034accc(param_3,&uStack_48,&uStack_58,&pcStack_50);
  if ((uStack_58 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0036b5b0; end: 0036b6cb;  */

void FUN_0036b5b0(long param_1,ulong *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  
  lVar6 = 0;
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  while (((lVar4 = *(long *)(lVar7 + 0x1d8 + lVar6), lVar4 == 0 ||
          ((*(byte *)(lVar4 + 0x10) >> 4 & 1) == 0)) ||
         (*(long *)(*(long *)(lVar4 + 8) + 0x78) == 0))) {
    lVar6 = lVar6 + 0x10;
    if (lVar6 == 0x60) {
      return;
    }
  }
  FUN_0036b6cc(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x60),*(long *)(param_1 + 0x10) + 0x7a0);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(*(long *)(lVar7 + lVar6 + 0x1d8) + 8);
  **(undefined4 **)(lVar6 + 0x68) = *(undefined4 *)(lVar4 + 0x8d0);
  uVar5 = *(undefined8 *)(lVar6 + 0x78);
  *(undefined8 *)(lVar6 + 0x78) = 0;
  FUN_0036a218(*(undefined8 *)(lVar4 + 0x10));
  uStack_58 = *param_2;
  if ((uStack_58 & 1) != 0) {
    piVar3 = (int *)(uStack_58 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_50 = "recv_message_ready for pending batch";
  uStack_48 = uVar5;
  FUN_0034accc(param_3,&uStack_48,&uStack_58,&pcStack_50);
  if ((uStack_58 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0036b6cc; end: 0036b713;  */

void FUN_0036b6cc(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x128);
  if (cVar1 == *(char *)(param_2 + 0x128)) {
    if (cVar1 != '\0') {
      FUN_003ed190();
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x128) != '\0') {
        FUN_003ede40();
        *(undefined1 *)(param_1 + 0x128) = 0;
      }
      return;
    }
    FUN_0036b744();
    *(undefined1 *)(param_1 + 0x128) = 1;
  }
  return;
}



/* Entry: 0036b714; end: 0036b743;  */

void FUN_0036b714(long param_1)

{
  if (*(char *)(param_1 + 0x128) != '\0') {
    FUN_003ede40();
    *(undefined1 *)(param_1 + 0x128) = 0;
  }
  return;
}



/* Entry: 0036b744; end: 0036b77b;  */

undefined8 FUN_0036b744(undefined8 param_1,undefined8 param_2)

{
  FUN_003ecf38();
  FUN_003ed190(param_1,param_2);
  return param_1;
}



/* Entry: 0036b77c; end: 0036b7c3;  */

undefined8 * FUN_0036b77c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      FUN_004005ec();
    }
  }
  return param_1;
}



/* Entry: 0036b7c4; end: 0036bdcf;  */

void FUN_0036b7c4(ulong param_1,long *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  byte bVar19;
  byte bVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  undefined1 auStack_4d0 [520];
  long lStack_2c8;
  long *plStack_2c0;
  long lStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  long lStack_290;
  ulong uStack_288;
  char *pcStack_280;
  long lStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *(long *)(param_1 + 0x10);
  if (((*(char *)(lVar10 + 0x298) == '\0') || ((*(ushort *)(param_1 + 0xb50) & 1) != 0)) ||
     ((*(byte *)(lVar10 + 0x238) & 1) != 0)) {
    uVar16 = 0;
    uVar6 = param_1;
    plVar22 = param_2;
  }
  else {
    plVar22 = (long *)((long)&MACH_HEADER.magic + 1);
    uVar16 = param_1;
    FUN_00368ef8(param_1,1,1);
    uVar6 = uVar16;
    FUN_0036bdd0();
    lVar10 = *(long *)(param_1 + 0x10);
  }
  if (((*(ulong *)(param_1 + 0xb30) < *(ulong *)(lVar10 + 0x4b8) >> 1) &&
      (*(ulong *)(param_1 + 0xb30) == *(ulong *)(param_1 + 0xb38))) &&
     ((*(byte *)(lVar10 + 0x238) >> 1 & 1) == 0)) {
    if (uVar16 == 0) {
      plVar22 = (long *)((long)&MACH_HEADER.magic + 1);
      uVar16 = param_1;
      FUN_00368ef8(param_1,1,1);
    }
    uVar6 = uVar16;
    FUN_0036bebc();
    lVar10 = *(long *)(param_1 + 0x10);
  }
  if (((*(char *)(lVar10 + 0x4f0) != '\0') &&
      (*(ulong *)(param_1 + 0xb30) == *(ulong *)(lVar10 + 0x4b8) >> 1)) &&
     (((*(ushort *)(param_1 + 0xb50) >> 2 & 1) == 0 && ((*(byte *)(lVar10 + 0x238) >> 2 & 1) == 0)))
     ) {
    if (uVar16 == 0) {
      plVar22 = (long *)((long)&MACH_HEADER.magic + 1);
      uVar16 = param_1;
      FUN_00368ef8(param_1,1,1);
    }
    uVar6 = uVar16;
    FUN_0036bf08();
  }
  if (uVar16 != 0) {
    plVar22 = (long *)(uVar16 + 0x18);
    uVar6 = param_1;
    FUN_0036900c(param_1,plVar22,"start replay batch on call attempt",param_2);
  }
  lVar10 = 0;
  lStack_290 = param_1 + 0xb10;
  do {
    plVar24 = *(long **)(param_1 + 0x10);
    lVar18 = plVar24[lVar10 * 2 + 0x3b];
    if ((lVar18 != 0) &&
       ((bVar2 = *(byte *)(lVar18 + 0x10), (bVar2 & 1) == 0 ||
        ((*(ushort *)(param_1 + 0xb50) & 1) == 0)))) {
      if ((bVar2 >> 2 & 1) == 0) {
        bVar19 = bVar2 & 1;
joined_r0x0036b988:
        if ((bVar2 >> 1 & 1) != 0) {
          if ((*(long *)(param_1 + 0xb30) + ((ulong)(bVar2 >> 2) & 1) < (ulong)plVar24[0x97] >> 1)
             || ((*(ushort *)(param_1 + 0xb50) >> 2 & 1) != 0)) goto LAB_0036bca4;
          bVar19 = 1;
        }
        bVar20 = bVar19;
        if ((bVar2 >> 3 & 1) != 0) {
          if ((*(ushort *)(param_1 + 0xb50) >> 4 & 1) != 0) goto LAB_0036bca4;
          bVar20 = 1;
          if (bVar19 != 0) {
            bVar20 = 2;
          }
        }
        if ((bVar2 >> 4 & 1) != 0) {
          if ((*(ulong *)(param_1 + 0xb48) < *(ulong *)(param_1 + 0xb40)) ||
             (*(long *)(param_1 + 0xb68) != 0)) goto LAB_0036bca4;
          bVar20 = bVar20 + 1;
        }
        plVar11 = plVar24;
        if ((bVar2 >> 5 & 1) != 0) {
          if ((*(ushort *)(param_1 + 0xb50) >> 6 & 1) == 0) {
            bVar20 = bVar20 + 1;
          }
          else {
            *(byte *)(param_1 + 0xbc0) = *(byte *)(param_1 + 0xbc0) | 1;
            puVar17 = *(undefined8 **)(param_1 + 0xbb0);
            uVar6 = 0;
            if (puVar17 != (undefined8 *)0x0) {
              if ((*(ushort *)(param_1 + 0xb50) >> 7 & 1) == 0) {
                plVar11 = puVar17 + 1;
                do {
                  lVar21 = *plVar11;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar4) {
                    *plVar11 = lVar21 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar21 + -1 == 0) {
                  (**(code **)*puVar17)();
                }
              }
              else {
                uStack_288 = *(ulong *)(param_1 + 3000);
                if ((uStack_288 & 1) != 0) {
                  piVar14 = (int *)(uStack_288 - 1);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                    if (bVar4) {
                      *piVar14 = *piVar14 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                pcStack_280 = 
                "re-executing recv_trailing_metadata_ready to propagate internally triggered result"
                ;
                lStack_278 = lStack_290;
                plVar22 = &lStack_278;
                FUN_0034accc(param_2,plVar22,&uStack_288,&pcStack_280);
                if ((uStack_288 & 1) != 0) {
                  FUN_0055293c();
                }
              }
              *(undefined8 *)(param_1 + 0xbb0) = 0;
              uVar6 = *(ulong *)(param_1 + 3000);
              if ((uVar6 != 0) && (*(undefined8 *)(param_1 + 3000) = 0, (uVar6 & 1) != 0)) {
                FUN_0055293c();
              }
            }
            if (bVar20 == 0) goto LAB_0036bca4;
            plVar11 = *(long **)(param_1 + 0x10);
          }
        }
        plVar22 = plVar24 + lVar10 * 2 + 0x3b;
        if ((((*(byte *)(plVar11 + 0x47) >> 3 & 1) == 0) ||
            ((char)plVar24[lVar10 * 2 + 0x3c] != '\0')) ||
           (((*(byte *)(lVar18 + 0x10) >> 5 & 1) != 0 &&
            ((*(ushort *)(param_1 + 0xb50) >> 6 & 1) != 0)))) {
          uVar6 = param_1;
          FUN_00368ef8(param_1,bVar20,bVar19);
          if ((char)plVar24[lVar10 * 2 + 0x3c] == '\0') {
            lVar21 = *(long *)(param_1 + 0x10);
            *(undefined1 *)(plVar24 + lVar10 * 2 + 0x3c) = 1;
            lVar23 = *plVar22;
            bVar2 = *(byte *)(lVar23 + 0x10);
            if ((bVar2 & 1) != 0) {
              *(undefined1 *)(lVar21 + 0x298) = 1;
              plVar24 = (long *)(lVar23 + 8);
              FUN_0036bfb0(&lStack_278,*(undefined8 *)*plVar24);
              FUN_0036a260(lVar21 + 0x2a0,&lStack_278);
              FUN_0036d7cc(&lStack_278);
              lVar12 = *plVar24;
              *(undefined4 *)(lVar21 + 0x4a8) = *(undefined4 *)(lVar12 + 8);
              *(undefined8 *)(lVar21 + 0x4b0) = *(undefined8 *)(lVar12 + 0x10);
              bVar2 = *(byte *)(lVar23 + 0x10);
            }
            if ((bVar2 >> 2 & 1) != 0) {
              lVar12 = *(long *)(lVar21 + 400);
              plVar24 = (long *)(lVar23 + 8);
              uVar9 = *(undefined8 *)(*plVar24 + 0x28);
              *(undefined8 *)(*plVar24 + 0x28) = 0;
              FUN_0036cf74(lVar12,uVar9);
              uStack_270 = *(undefined4 *)(*plVar24 + 0x30);
              if ((*(ulong *)(lVar21 + 0x4b8) & 1) == 0) {
                lVar13 = lVar21 + 0x4c0;
                uVar16 = 3;
              }
              else {
                lVar13 = *(long *)(lVar21 + 0x4c0);
                uVar16 = *(ulong *)(lVar21 + 0x4c8);
              }
              plVar22 = (long *)(lVar21 + 0x4b8);
              uVar15 = *(ulong *)(lVar21 + 0x4b8) >> 1;
              lStack_278 = lVar12;
              if (uVar15 == uVar16) {
                FUN_0036cfc4(plVar22,&lStack_278);
              }
              else {
                plVar11 = (long *)(lVar13 + uVar15 * 0x10);
                plVar11[1] = CONCAT44(uStack_26c,uStack_270);
                *plVar11 = lVar12;
                *plVar22 = *plVar22 + 2;
              }
              bVar2 = *(byte *)(lVar23 + 0x10);
            }
            if ((bVar2 >> 1 & 1) != 0) {
              *(undefined1 *)(lVar21 + 0x4f0) = 1;
              FUN_0036bfb0(&lStack_278,*(undefined8 *)(*(long *)(lVar23 + 8) + 0x18));
              FUN_0036a260(lVar21 + 0x4f8,&lStack_278);
              FUN_0036d7cc(&lStack_278);
            }
          }
          bVar2 = *(byte *)(lVar18 + 0x10);
          if ((bVar2 & 1) != 0) {
            FUN_0036bdd0(uVar6);
            bVar2 = *(byte *)(lVar18 + 0x10);
          }
          if ((bVar2 >> 2 & 1) != 0) {
            FUN_0036bebc(uVar6);
            bVar2 = *(byte *)(lVar18 + 0x10);
          }
          if ((bVar2 >> 1 & 1) != 0) {
            FUN_0036bf08(uVar6);
            bVar2 = *(byte *)(lVar18 + 0x10);
          }
          if ((bVar2 >> 3 & 1) != 0) {
            if (*(long *)(*(long *)(lVar18 + 8) + 0x40) != 0) {
              func_0x00771fe4();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x36bd98);
              (*pcVar5)();
            }
            plVar22 = (long *)(uVar6 + 0x10);
            *(ushort *)(*plVar22 + 0xb50) = *(ushort *)(*plVar22 + 0xb50) | 0x10;
            *(byte *)(uVar6 + 0x28) = *(byte *)(uVar6 + 0x28) | 8;
            lVar21 = *plVar22;
            FUN_00366e68(lVar21 + 0x550);
            FUN_00367130(lVar21 + 0x740);
            lVar21 = *plVar22;
            lVar23 = *(long *)(uVar6 + 0x20);
            *(long *)(lVar23 + 0x38) = lVar21 + 0x550;
            *(long *)(lVar23 + 0x50) = lVar21 + 0x778;
            *(code **)(lVar21 + 0x760) = FUN_0036d07c;
            *(ulong *)(lVar21 + 0x768) = uVar6;
            *(undefined8 *)(lVar21 + 0x770) = 0;
            *(long *)(*(long *)(uVar6 + 0x20) + 0x48) = *plVar22 + 0x758;
            bVar2 = *(byte *)(lVar18 + 0x10);
          }
          if ((bVar2 >> 4 & 1) != 0) {
            lVar21 = *(long *)(uVar6 + 0x10);
            *(long *)(lVar21 + 0xb40) = *(long *)(lVar21 + 0xb40) + 1;
            *(byte *)(uVar6 + 0x28) = *(byte *)(uVar6 + 0x28) | 0x10;
            lVar23 = *(long *)(uVar6 + 0x20);
            *(long *)(lVar23 + 0x60) = lVar21 + 0x7a0;
            *(long *)(lVar23 + 0x68) = lVar21 + 0x8d0;
            *(undefined8 *)(lVar23 + 0x70) = 0;
            *(code **)(lVar21 + 0x788) = FUN_0036d304;
            *(ulong *)(lVar21 + 0x790) = uVar6;
            *(undefined8 *)(lVar21 + 0x798) = 0;
            *(long *)(*(long *)(uVar6 + 0x20) + 0x78) = *(long *)(uVar6 + 0x10) + 0x780;
            bVar2 = *(byte *)(lVar18 + 0x10);
          }
          if (((bVar2 >> 5 & 1) != 0) && ((*(ushort *)(param_1 + 0xb50) >> 6 & 1) == 0)) {
            FUN_00369788(uVar6);
          }
          plVar22 = (long *)(uVar6 + 0x18);
          uVar6 = param_1;
          FUN_0036900c(param_1,plVar22,"start replayable pending batch on call attempt",param_2);
        }
        else {
          FUN_0036900c(param_1,lVar18,
                       "start non-replayable pending batch on call attempt after commit",param_2);
          uVar6 = *(ulong *)(param_1 + 0x10);
          FUN_003667e8();
        }
      }
      else if (*(ulong *)(param_1 + 0xb30) <= *(ulong *)(param_1 + 0xb38)) {
        uVar16 = (ulong)plVar24[0x97] >> 1;
        if ((char)plVar24[lVar10 * 2 + 0x3c] == '\0') {
          uVar16 = uVar16 + 1;
        }
        if (*(ulong *)(param_1 + 0xb38) != uVar16) {
          bVar19 = 1;
          goto joined_r0x0036b988;
        }
      }
    }
LAB_0036bca4:
    iVar8 = (int)plVar22;
    lVar10 = lVar10 + 1;
    if (lVar10 == 6) {
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
        return;
      }
      ___stack_chk_fail();
      if ((iVar8 != 0) && (func_0x0040cf10(), (uStack_288 & 1) != 0)) {
        FUN_0055293c();
      }
      uVar16 = uVar6;
      __Unwind_Resume();
      pcStack_298 = FUN_0036bdd0;
      puVar7 = auStack_4d0;
      lStack_2c8 = *(long *)PTR____stack_chk_guard_00999f88;
      lVar18 = *(long *)(*(long *)(uVar16 + 0x10) + 0x10);
      plStack_2c0 = plVar24;
      lStack_2b8 = lVar10;
      uStack_2b0 = param_1;
      uStack_2a8 = uVar6;
      puStack_2a0 = &stack0xfffffffffffffff0;
      FUN_0036bfb0(auStack_4d0,lVar18 + 0x2a0);
      FUN_0036a260(*(long *)(uVar16 + 0x10) + 0x140,auStack_4d0);
      FUN_0036d7cc();
      lVar10 = *(long *)(uVar16 + 0x10);
      if (*(int *)(lVar18 + 0x23c) < 1) {
        *(uint *)(lVar10 + 0x140) = *(uint *)(lVar10 + 0x140) & 0xffffefff;
      }
      else {
        *(uint *)(lVar10 + 0x140) = *(uint *)(lVar10 + 0x140) | 0x1000;
        *(undefined4 *)(lVar10 + 0x2b8) = *(undefined4 *)(lVar18 + 0x23c);
      }
      *(ushort *)(lVar10 + 0xb50) = *(ushort *)(lVar10 + 0xb50) | 1;
      *(byte *)(uVar16 + 0x28) = *(byte *)(uVar16 + 0x28) | 1;
      plVar22 = *(long **)(uVar16 + 0x20);
      *plVar22 = *(long *)(uVar16 + 0x10) + 0x140;
      *(undefined4 *)(plVar22 + 1) = *(undefined4 *)(lVar18 + 0x4a8);
      plVar22[2] = *(long *)(lVar18 + 0x4b0);
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2c8) {
        return;
      }
      ___stack_chk_fail();
      lVar10 = *(long *)(puVar7 + 0x10);
      puVar17 = (undefined8 *)(*(long *)(lVar10 + 0x10) + 0x4c0);
      if ((*(byte *)(*(long *)(lVar10 + 0x10) + 0x4b8) & 1) != 0) {
        puVar17 = (undefined8 *)*puVar17;
      }
      uVar9 = puVar17[*(long *)(lVar10 + 0xb30) * 2];
      uVar1 = *(undefined4 *)(puVar17 + *(long *)(lVar10 + 0xb30) * 2 + 1);
      *(long *)(lVar10 + 0xb30) = *(long *)(lVar10 + 0xb30) + 1;
      puVar7[0x28] = puVar7[0x28] | 4;
      lVar10 = *(long *)(puVar7 + 0x20);
      *(undefined8 *)(lVar10 + 0x28) = uVar9;
      *(undefined4 *)(lVar10 + 0x30) = uVar1;
      return;
    }
  } while( true );
}



/* Entry: 0036bdd0; end: 0036bebb;  */

void FUN_0036bdd0(long param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_240 [520];
  long lStack_38;
  
  puVar2 = auStack_240;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_0036bfb0(auStack_240,lVar7 + 0x2a0);
  FUN_0036a260(*(long *)(param_1 + 0x10) + 0x140,auStack_240);
  FUN_0036d7cc();
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar7 + 0x23c) < 1) {
    *(uint *)(lVar3 + 0x140) = *(uint *)(lVar3 + 0x140) & 0xffffefff;
  }
  else {
    *(uint *)(lVar3 + 0x140) = *(uint *)(lVar3 + 0x140) | 0x1000;
    *(undefined4 *)(lVar3 + 0x2b8) = *(undefined4 *)(lVar7 + 0x23c);
  }
  *(ushort *)(lVar3 + 0xb50) = *(ushort *)(lVar3 + 0xb50) | 1;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 1;
  plVar4 = *(long **)(param_1 + 0x20);
  *plVar4 = *(long *)(param_1 + 0x10) + 0x140;
  *(undefined4 *)(plVar4 + 1) = *(undefined4 *)(lVar7 + 0x4a8);
  plVar4[2] = *(long *)(lVar7 + 0x4b0);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(puVar2 + 0x10);
  puVar5 = (undefined8 *)(*(long *)(lVar3 + 0x10) + 0x4c0);
  if ((*(byte *)(*(long *)(lVar3 + 0x10) + 0x4b8) & 1) != 0) {
    puVar5 = (undefined8 *)*puVar5;
  }
  uVar6 = puVar5[*(long *)(lVar3 + 0xb30) * 2];
  uVar1 = *(undefined4 *)(puVar5 + *(long *)(lVar3 + 0xb30) * 2 + 1);
  *(long *)(lVar3 + 0xb30) = *(long *)(lVar3 + 0xb30) + 1;
  puVar2[0x28] = puVar2[0x28] | 4;
  lVar3 = *(long *)(puVar2 + 0x20);
  *(undefined8 *)(lVar3 + 0x28) = uVar6;
  *(undefined4 *)(lVar3 + 0x30) = uVar1;
  return;
}



/* Entry: 0036bebc; end: 0036bf07;  */

void FUN_0036bebc(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  puVar3 = (undefined8 *)(*(long *)(lVar2 + 0x10) + 0x4c0);
  if ((*(byte *)(*(long *)(lVar2 + 0x10) + 0x4b8) & 1) != 0) {
    puVar3 = (undefined8 *)*puVar3;
  }
  uVar4 = puVar3[*(long *)(lVar2 + 0xb30) * 2];
  uVar1 = *(undefined4 *)(puVar3 + *(long *)(lVar2 + 0xb30) * 2 + 1);
  *(long *)(lVar2 + 0xb30) = *(long *)(lVar2 + 0xb30) + 1;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 4;
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  *(undefined4 *)(lVar2 + 0x30) = uVar1;
  return;
}



/* Entry: 0036bf08; end: 0036bfaf;  */

void FUN_0036bf08(long param_1)

{
  undefined1 *puVar1;
  undefined4 *extraout_x8;
  undefined8 uVar2;
  undefined1 auStack_230 [520];
  long lStack_28;
  
  puVar1 = auStack_230;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0036bfb0(auStack_230,*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x4f8);
  FUN_0036a260(*(long *)(param_1 + 0x10) + 0x348,auStack_230);
  FUN_0036d7cc();
  *(ushort *)(*(long *)(param_1 + 0x10) + 0xb50) =
       *(ushort *)(*(long *)(param_1 + 0x10) + 0xb50) | 4;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
  *(long *)(*(long *)(param_1 + 0x20) + 0x18) = *(long *)(param_1 + 0x10) + 0x348;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(puVar1 + 0x1f0);
  *extraout_x8 = 0;
  *(undefined8 *)(extraout_x8 + 0x7e) = 0;
  *(undefined8 *)(extraout_x8 + 0x80) = 0;
  *(undefined8 *)(extraout_x8 + 0x7c) = uVar2;
  FUN_0036c004();
  return;
}



/* Entry: 0036bfb0; end: 0036c003;  */

void FUN_0036bfb0(undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 *puStack_28;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1f0);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x7c) = uVar1;
  puStack_28 = param_1;
  FUN_0036c004(param_2,&puStack_28);
  return;
}



/* Entry: 0036c004; end: 0036c0ab;  */

void FUN_0036c004(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN_0036c198();
  plVar1 = *(long **)(param_1 + 0x1f8);
  if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
    plVar1 = (long *)0x0;
  }
  lVar2 = 0;
LAB_0036c03c:
  do {
    while (plVar1 == (long *)0x0) {
      if (lVar2 == 0) {
        return;
      }
      FUN_0036c0ac(param_2,lVar2 << 6 | 0x10,lVar2 << 6 | 0x30);
      lVar2 = lVar2 + 1;
      plVar1 = (long *)0x0;
    }
    FUN_0036c0ac(param_2,plVar1 + lVar2 * 8 + 2,plVar1 + lVar2 * 8 + 6);
    lVar2 = lVar2 + 1;
    do {
      if (lVar2 != plVar1[1]) goto LAB_0036c03c;
      lVar2 = 0;
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    lVar2 = 0;
  } while( true );
}



/* Entry: 0036c0ac; end: 0036c197;  */

ulong * FUN_0036c0ac(long *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong **ppuVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  uint *puVar13;
  ulong *apuStack_98 [4];
  long lStack_78;
  ulong *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar9 = *param_1;
  uVar10 = param_2[1] & 0xff;
  puVar7 = (ulong *)((long)param_2 + 9);
  if (*param_2 != 0) {
    uVar10 = param_2[1];
    puVar7 = (ulong *)param_2[2];
  }
  plVar12 = (long *)*param_3;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar12) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_48 = param_3[1];
  puStack_50 = (ulong *)*param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  FUN_003fe220(lVar9 + 0x1f0,puVar7,uVar10,&puStack_50);
  puVar5 = puStack_50;
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < puStack_50) {
    do {
      uVar10 = *puStack_50;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puStack_50,0x10);
      if (bVar4) {
        *puStack_50 = uVar10 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar10 - 1 == 0) {
      (*(code *)puStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  if ((int)puVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&puStack_50);
  }
  __Unwind_Resume();
  uVar1 = (uint)*puVar5;
  puVar6 = puVar5;
  if ((uVar1 & 1) != 0) {
    puVar6 = puVar7;
    FUN_0036c498(puVar7,puVar5 + 0x3a);
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    puVar6 = puVar7;
    FUN_0036c5f4(puVar7,puVar5 + 0x36);
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar10 = puVar5[0x35];
    puVar13 = (uint *)*puVar7;
    *puVar13 = *puVar13 | 4;
    puVar13[0x6a] = (uint)uVar10;
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    uVar1 = *(uint *)((long)puVar5 + 0x1a4);
    puVar13 = (uint *)*puVar7;
    *puVar13 = *puVar13 | 8;
    puVar13[0x69] = uVar1;
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    uVar10 = puVar5[0x34];
    puVar13 = (uint *)*puVar7;
    *puVar13 = *puVar13 | 0x10;
    puVar13[0x68] = (uint)uVar10;
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    uVar1 = *(uint *)((long)puVar5 + 0x19c);
    puVar13 = (uint *)*puVar7;
    *puVar13 = *puVar13 | 0x20;
    puVar13[0x67] = uVar1;
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    uVar10 = puVar5[0x33];
    puVar13 = (uint *)*puVar7;
    *puVar13 = *puVar13 | 0x40;
    *(char *)(puVar13 + 0x66) = (char)uVar10;
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    uVar1 = *(uint *)((long)puVar5 + 0x194);
    puVar13 = (uint *)*puVar7;
    *puVar13 = *puVar13 | 0x80;
    puVar13[0x65] = uVar1;
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    uVar10 = puVar5[0x32];
    puVar13 = (uint *)*puVar7;
    *puVar13 = *puVar13 | 0x100;
    puVar13[100] = (uint)uVar10;
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    uVar2 = *(undefined1 *)((long)puVar5 + 0x18c);
    puVar13 = (uint *)*puVar7;
    *puVar13 = *puVar13 | 0x200;
    *(undefined1 *)(puVar13 + 99) = uVar2;
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    uVar10 = puVar5[0x31];
    puVar13 = (uint *)*puVar7;
    *puVar13 = *puVar13 | 0x400;
    puVar13[0x62] = (uint)uVar10;
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    uVar10 = puVar5[0x30];
    puVar13 = (uint *)*puVar7;
    *puVar13 = *puVar13 | 0x800;
    *(ulong *)(puVar13 + 0x60) = uVar10;
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    uVar10 = puVar5[0x2f];
    puVar13 = (uint *)*puVar7;
    *puVar13 = *puVar13 | 0x1000;
    puVar13[0x5e] = (uint)uVar10;
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    uVar10 = puVar5[0x2e];
    puVar13 = (uint *)*puVar7;
    *puVar13 = *puVar13 | 0x2000;
    *(ulong *)(puVar13 + 0x5c) = uVar10;
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    puVar6 = puVar7;
    FUN_0036c6b0(puVar7,puVar5 + 0x2a);
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    puVar6 = puVar7;
    FUN_0036c76c(puVar7,puVar5 + 0x26);
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    puVar6 = puVar7;
    FUN_0036c828(puVar7,puVar5 + 0x22);
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    puVar6 = puVar7;
    FUN_0036c8e4(puVar7,puVar5 + 0x1e);
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    puVar6 = puVar7;
    FUN_0036c9a0(puVar7,puVar5 + 0x1a);
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    puVar6 = puVar7;
    FUN_0036ca5c(puVar7,puVar5 + 0x16);
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 0x14 & 1) != 0) {
    puVar6 = puVar7;
    FUN_0036cb18(puVar7,puVar5 + 0x12);
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 0x15 & 1) != 0) {
    uVar10 = puVar5[0x11];
    puVar13 = (uint *)*puVar7;
    *puVar13 = *puVar13 | 0x200000;
    *(ulong *)(puVar13 + 0x22) = uVar10;
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 0x16 & 1) != 0) {
    puVar6 = puVar5 + 0xc;
    FUN_0036cbd4(puVar6,puVar7);
    uVar1 = (uint)*puVar5;
  }
  if ((uVar1 >> 0x17 & 1) != 0) {
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    uVar10 = *puVar7;
    FUN_0036c554(apuStack_98,puVar5 + 8);
    ppuVar8 = apuStack_98;
    FUN_0034de58(uVar10);
    puVar7 = apuStack_98[0];
    if ((ulong *)((long)&MACH_HEADER.magic + 1) < apuStack_98[0]) {
      do {
        uVar10 = *apuStack_98[0];
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
        if (bVar4) {
          *apuStack_98[0] = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar10 - 1 == 0) {
        (*(code *)apuStack_98[0][1])();
        puVar7 = apuStack_98[0];
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return puVar7;
    }
    ___stack_chk_fail();
    if ((int)ppuVar8 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_98);
    }
    __Unwind_Resume();
    do {
      uVar11 = *puVar7;
      uVar10 = uVar11 + 0x130;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar4) {
        *puVar7 = uVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar7[2] < uVar10) {
      func_0x003d6048();
    }
    else {
      puVar7 = (ulong *)((long)puVar7 + uVar11 + 0x30);
    }
    FUN_003ecf38();
    FUN_003ed190(puVar7,ppuVar8);
    return puVar7;
  }
  return puVar6;
}



/* Entry: 0036c198; end: 0036c497;  */

ulong * FUN_0036c198(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong **ppuVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong *apuStack_48 [4];
  long lStack_28;
  
  uVar1 = (uint)*param_1;
  puVar5 = param_1;
  if ((uVar1 & 1) != 0) {
    puVar5 = param_2;
    FUN_0036c498(param_2,param_1 + 0x3a);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    puVar5 = param_2;
    FUN_0036c5f4(param_2,param_1 + 0x36);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar9 = param_1[0x35];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 4;
    puVar8[0x6a] = (uint)uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    uVar1 = *(uint *)((long)param_1 + 0x1a4);
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 8;
    puVar8[0x69] = uVar1;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    uVar9 = param_1[0x34];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x10;
    puVar8[0x68] = (uint)uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    uVar1 = *(uint *)((long)param_1 + 0x19c);
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x20;
    puVar8[0x67] = uVar1;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    uVar9 = param_1[0x33];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x40;
    *(char *)(puVar8 + 0x66) = (char)uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    uVar1 = *(uint *)((long)param_1 + 0x194);
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x80;
    puVar8[0x65] = uVar1;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    uVar9 = param_1[0x32];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x100;
    puVar8[100] = (uint)uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    uVar2 = *(undefined1 *)((long)param_1 + 0x18c);
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x200;
    *(undefined1 *)(puVar8 + 99) = uVar2;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    uVar9 = param_1[0x31];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x400;
    puVar8[0x62] = (uint)uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    uVar9 = param_1[0x30];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x800;
    *(ulong *)(puVar8 + 0x60) = uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    uVar9 = param_1[0x2f];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x1000;
    puVar8[0x5e] = (uint)uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    uVar9 = param_1[0x2e];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x2000;
    *(ulong *)(puVar8 + 0x5c) = uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    puVar5 = param_2;
    FUN_0036c6b0(param_2,param_1 + 0x2a);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    puVar5 = param_2;
    FUN_0036c76c(param_2,param_1 + 0x26);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    puVar5 = param_2;
    FUN_0036c828(param_2,param_1 + 0x22);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    puVar5 = param_2;
    FUN_0036c8e4(param_2,param_1 + 0x1e);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    puVar5 = param_2;
    FUN_0036c9a0(param_2,param_1 + 0x1a);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    puVar5 = param_2;
    FUN_0036ca5c(param_2,param_1 + 0x16);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x14 & 1) != 0) {
    puVar5 = param_2;
    FUN_0036cb18(param_2,param_1 + 0x12);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x15 & 1) != 0) {
    uVar9 = param_1[0x11];
    puVar8 = (uint *)*param_2;
    *puVar8 = *puVar8 | 0x200000;
    *(ulong *)(puVar8 + 0x22) = uVar9;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x16 & 1) != 0) {
    puVar5 = param_1 + 0xc;
    FUN_0036cbd4(puVar5,param_2);
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 0x17 & 1) == 0) {
    return puVar5;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar9 = *param_2;
  FUN_0036c554(apuStack_48,param_1 + 8);
  ppuVar6 = apuStack_48;
  FUN_0034de58(uVar9);
  puVar5 = apuStack_48[0];
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
    do {
      uVar9 = *apuStack_48[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar4) {
        *apuStack_48[0] = uVar9 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar9 - 1 == 0) {
      (*(code *)apuStack_48[0][1])();
      puVar5 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    if ((int)ppuVar6 != 0) {
      func_0x0040cf10();
      FUN_0034b418(apuStack_48);
    }
    __Unwind_Resume();
    do {
      uVar7 = *puVar5;
      uVar9 = uVar7 + 0x130;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar4) {
        *puVar5 = uVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar5[2] < uVar9) {
      func_0x003d6048();
    }
    else {
      puVar5 = (ulong *)((long)puVar5 + uVar7 + 0x30);
    }
    FUN_003ecf38();
    FUN_003ed190(puVar5,ppuVar6);
    return puVar5;
  }
  return puVar5;
}



/* Entry: 0036c498; end: 0036c553;  */

void FUN_0036c498(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long **pplVar9;
  ulong **ppuVar10;
  long lVar11;
  long *extraout_x8;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong *apuStack_338 [4];
  long lStack_318;
  long *aplStack_2e8 [4];
  long lStack_2c8;
  long *aplStack_298 [4];
  long lStack_278;
  long *aplStack_248 [4];
  long lStack_228;
  long *aplStack_1f8 [4];
  long lStack_1d8;
  long *aplStack_1a8 [4];
  long lStack_188;
  long *aplStack_158 [4];
  long lStack_138;
  long *aplStack_108 [4];
  long lStack_e8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar14 = *param_1;
  FUN_0036c554(aplStack_48,param_2);
  pplVar9 = aplStack_48;
  FUN_0034b9f8(uVar14);
  plVar4 = aplStack_48[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_48[0]) {
    do {
      lVar11 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_48);
  }
  __Unwind_Resume();
  plVar5 = &lStack_c0;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar12 = (long *)*plVar4;
  if (plVar12 == (long *)((long)&MACH_HEADER.magic + 1)) {
    lStack_b8 = plVar4[1];
    lStack_c0 = *plVar4;
    lStack_a8 = plVar4[3];
    lStack_b0 = plVar4[2];
    FUN_003ec030(&lStack_98);
  }
  else {
    if ((plVar12 != (long *)0x0) && ((long *)((long)&MACH_HEADER.magic + 1) < plVar12)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *plVar12 = *plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_90 = plVar4[1];
    lStack_98 = *plVar4;
    lStack_80 = plVar4[3];
    lStack_88 = plVar4[2];
    plVar5 = plVar4;
  }
  extraout_x8[1] = lStack_90;
  *extraout_x8 = lStack_98;
  extraout_x8[3] = lStack_80;
  extraout_x8[2] = lStack_88;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar5;
  FUN_0036c554(aplStack_108,pplVar9);
  pplVar9 = aplStack_108;
  FUN_0034bbe0(lVar11);
  plVar4 = aplStack_108[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_108[0]) {
    do {
      lVar11 = *aplStack_108[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_108[0],0x10);
      if (bVar2) {
        *aplStack_108[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_108[0][1])();
      plVar4 = aplStack_108[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_108);
  }
  __Unwind_Resume();
  lStack_138 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar4;
  FUN_0036c554(aplStack_158,pplVar9);
  pplVar9 = aplStack_158;
  FUN_0034cc88(lVar11);
  plVar4 = aplStack_158[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_158[0]) {
    do {
      lVar11 = *aplStack_158[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_158[0],0x10);
      if (bVar2) {
        *aplStack_158[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_158[0][1])();
      plVar4 = aplStack_158[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_158);
  }
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar4;
  FUN_0036c554(aplStack_1a8,pplVar9);
  pplVar9 = aplStack_1a8;
  FUN_0034ce60(lVar11);
  plVar4 = aplStack_1a8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_1a8[0]) {
    do {
      lVar11 = *aplStack_1a8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_1a8[0],0x10);
      if (bVar2) {
        *aplStack_1a8[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_1a8[0][1])();
      plVar4 = aplStack_1a8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_1a8);
  }
  __Unwind_Resume();
  lStack_1d8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar4;
  FUN_0036c554(aplStack_1f8,pplVar9);
  pplVar9 = aplStack_1f8;
  FUN_0034d078(lVar11);
  plVar4 = aplStack_1f8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_1f8[0]) {
    do {
      lVar11 = *aplStack_1f8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_1f8[0],0x10);
      if (bVar2) {
        *aplStack_1f8[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_1f8[0][1])();
      plVar4 = aplStack_1f8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_1f8);
  }
  __Unwind_Resume();
  lStack_228 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar4;
  FUN_0036c554(aplStack_248,pplVar9);
  pplVar9 = aplStack_248;
  FUN_0034d284(lVar11);
  plVar4 = aplStack_248[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_248[0]) {
    do {
      lVar11 = *aplStack_248[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_248[0],0x10);
      if (bVar2) {
        *aplStack_248[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_248[0][1])();
      plVar4 = aplStack_248[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_248);
  }
  __Unwind_Resume();
  lStack_278 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar4;
  FUN_0036c554(aplStack_298,pplVar9);
  pplVar9 = aplStack_298;
  FUN_0034d478(lVar11);
  plVar4 = aplStack_298[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_298[0]) {
    do {
      lVar11 = *aplStack_298[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_298[0],0x10);
      if (bVar2) {
        *aplStack_298[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_298[0][1])();
      plVar4 = aplStack_298[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_298);
  }
  __Unwind_Resume();
  lStack_2c8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar4;
  FUN_0036c554(aplStack_2e8,pplVar9);
  pplVar9 = aplStack_2e8;
  FUN_0034d66c(lVar11);
  plVar4 = aplStack_2e8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_2e8[0]) {
    do {
      lVar11 = *aplStack_2e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_2e8[0],0x10);
      if (bVar2) {
        *aplStack_2e8[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_2e8[0][1])();
      plVar4 = aplStack_2e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_2e8);
  }
  __Unwind_Resume();
  lStack_318 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar4;
  FUN_0036c554(apuStack_338,pplVar9);
  ppuVar10 = apuStack_338;
  FUN_0034d874(lVar11);
  puVar6 = apuStack_338[0];
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < apuStack_338[0]) {
    do {
      uVar13 = *apuStack_338[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_338[0],0x10);
      if (bVar2) {
        *apuStack_338[0] = uVar13 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar13 - 1 == 0) {
      (*(code *)apuStack_338[0][1])();
      puVar6 = apuStack_338[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_318) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar10 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_338);
  }
  __Unwind_Resume();
  puVar7 = puVar6 + 1;
  uVar13 = *puVar6;
  if ((uVar13 & 1) != 0) {
    puVar7 = (ulong *)*puVar7;
  }
  if (1 < uVar13) {
    puVar6 = puVar7 + 1;
    do {
      uStack_3a0 = puVar6[-1];
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        FUN_002971d4(&uStack_398,*puVar6,puVar6[1]);
      }
      else {
        uStack_390 = puVar6[1];
        uStack_398 = *puVar6;
        uStack_388 = puVar6[2];
      }
      puVar8 = *ppuVar10;
      uVar3 = *puVar8;
      *(uint *)puVar8 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar8[0x10] = 0;
        puVar8[0xd] = 0;
        puVar8[0xc] = 0;
        puVar8[0xf] = 0;
        puVar8[0xe] = 0;
      }
      FUN_0036ccc8(puVar8 + 0xc,&uStack_3a0);
      if ((long)uStack_388 < 0) {
        __ZdlPv(uStack_398);
      }
      puVar8 = puVar6 + 3;
      puVar6 = puVar6 + 4;
    } while (puVar8 != puVar7 + (uVar13 >> 1) * 4);
  }
  return;
}



/* Entry: 0036c554; end: 0036c5f3;  */

void FUN_0036c554(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong *apuStack_2e8 [4];
  long lStack_2c8;
  long *aplStack_298 [4];
  long lStack_278;
  long *aplStack_248 [4];
  long lStack_228;
  long *aplStack_1f8 [4];
  long lStack_1d8;
  long *aplStack_1a8 [4];
  long lStack_188;
  long *aplStack_158 [4];
  long lStack_138;
  long *aplStack_108 [4];
  long lStack_e8;
  long *aplStack_b8 [4];
  long lStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar10 = (long *)*param_2;
  if (plVar10 == (long *)((long)&MACH_HEADER.magic + 1)) {
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_58 = param_2[3];
    uStack_60 = param_2[2];
    FUN_003ec030(&uStack_48);
  }
  else {
    if ((plVar10 != (long *)0x0) && ((long *)((long)&MACH_HEADER.magic + 1) < plVar10)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = *plVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_40 = param_2[1];
    uStack_48 = *param_2;
    uStack_30 = param_2[3];
    uStack_38 = param_2[2];
    puVar4 = param_2;
  }
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar13 = *puVar4;
  FUN_0036c554(aplStack_b8,param_3);
  pplVar8 = aplStack_b8;
  FUN_0034bbe0(uVar13);
  plVar10 = aplStack_b8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_b8[0]) {
    do {
      lVar11 = *aplStack_b8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_b8[0],0x10);
      if (bVar2) {
        *aplStack_b8[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_b8[0][1])();
      plVar10 = aplStack_b8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_b8);
  }
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar10;
  FUN_0036c554(aplStack_108,pplVar8);
  pplVar8 = aplStack_108;
  FUN_0034cc88(lVar11);
  plVar10 = aplStack_108[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_108[0]) {
    do {
      lVar11 = *aplStack_108[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_108[0],0x10);
      if (bVar2) {
        *aplStack_108[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_108[0][1])();
      plVar10 = aplStack_108[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_108);
  }
  __Unwind_Resume();
  lStack_138 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar10;
  FUN_0036c554(aplStack_158,pplVar8);
  pplVar8 = aplStack_158;
  FUN_0034ce60(lVar11);
  plVar10 = aplStack_158[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_158[0]) {
    do {
      lVar11 = *aplStack_158[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_158[0],0x10);
      if (bVar2) {
        *aplStack_158[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_158[0][1])();
      plVar10 = aplStack_158[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_158);
  }
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar10;
  FUN_0036c554(aplStack_1a8,pplVar8);
  pplVar8 = aplStack_1a8;
  FUN_0034d078(lVar11);
  plVar10 = aplStack_1a8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_1a8[0]) {
    do {
      lVar11 = *aplStack_1a8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_1a8[0],0x10);
      if (bVar2) {
        *aplStack_1a8[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_1a8[0][1])();
      plVar10 = aplStack_1a8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_1a8);
  }
  __Unwind_Resume();
  lStack_1d8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar10;
  FUN_0036c554(aplStack_1f8,pplVar8);
  pplVar8 = aplStack_1f8;
  FUN_0034d284(lVar11);
  plVar10 = aplStack_1f8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_1f8[0]) {
    do {
      lVar11 = *aplStack_1f8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_1f8[0],0x10);
      if (bVar2) {
        *aplStack_1f8[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_1f8[0][1])();
      plVar10 = aplStack_1f8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_1f8);
  }
  __Unwind_Resume();
  lStack_228 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar10;
  FUN_0036c554(aplStack_248,pplVar8);
  pplVar8 = aplStack_248;
  FUN_0034d478(lVar11);
  plVar10 = aplStack_248[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_248[0]) {
    do {
      lVar11 = *aplStack_248[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_248[0],0x10);
      if (bVar2) {
        *aplStack_248[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_248[0][1])();
      plVar10 = aplStack_248[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_248);
  }
  __Unwind_Resume();
  lStack_278 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar10;
  FUN_0036c554(aplStack_298,pplVar8);
  pplVar8 = aplStack_298;
  FUN_0034d66c(lVar11);
  plVar10 = aplStack_298[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_298[0]) {
    do {
      lVar11 = *aplStack_298[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_298[0],0x10);
      if (bVar2) {
        *aplStack_298[0] = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_298[0][1])();
      plVar10 = aplStack_298[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_298);
  }
  __Unwind_Resume();
  lStack_2c8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *plVar10;
  FUN_0036c554(apuStack_2e8,pplVar8);
  ppuVar9 = apuStack_2e8;
  FUN_0034d874(lVar11);
  puVar5 = apuStack_2e8[0];
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < apuStack_2e8[0]) {
    do {
      uVar12 = *apuStack_2e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_2e8[0],0x10);
      if (bVar2) {
        *apuStack_2e8[0] = uVar12 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar12 - 1 == 0) {
      (*(code *)apuStack_2e8[0][1])();
      puVar5 = apuStack_2e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_2e8);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar12 = *puVar5;
  if ((uVar12 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar12) {
    puVar5 = puVar6 + 1;
    do {
      uStack_350 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        FUN_002971d4(&uStack_348,*puVar5,puVar5[1]);
      }
      else {
        uStack_340 = puVar5[1];
        uStack_348 = *puVar5;
        uStack_338 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_0036ccc8(puVar7 + 0xc,&uStack_350);
      if ((long)uStack_338 < 0) {
        __ZdlPv(uStack_348);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar12 >> 1) * 4);
  }
  return;
}



/* Entry: 0036c5f4; end: 0036c6af;  */

void FUN_0036c5f4(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong *apuStack_278 [4];
  long lStack_258;
  long *aplStack_228 [4];
  long lStack_208;
  long *aplStack_1d8 [4];
  long lStack_1b8;
  long *aplStack_188 [4];
  long lStack_168;
  long *aplStack_138 [4];
  long lStack_118;
  long *aplStack_e8 [4];
  long lStack_c8;
  long *aplStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar12 = *param_1;
  FUN_0036c554(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  FUN_0034bbe0(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_98,pplVar8);
  pplVar8 = aplStack_98;
  FUN_0034cc88(lVar10);
  plVar4 = aplStack_98[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_98[0]) {
    do {
      lVar10 = *aplStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_98[0],0x10);
      if (bVar2) {
        *aplStack_98[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_98[0][1])();
      plVar4 = aplStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_98);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_e8,pplVar8);
  pplVar8 = aplStack_e8;
  FUN_0034ce60(lVar10);
  plVar4 = aplStack_e8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_e8[0]) {
    do {
      lVar10 = *aplStack_e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_e8[0],0x10);
      if (bVar2) {
        *aplStack_e8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_e8[0][1])();
      plVar4 = aplStack_e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_e8);
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_138,pplVar8);
  pplVar8 = aplStack_138;
  FUN_0034d078(lVar10);
  plVar4 = aplStack_138[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_138[0]) {
    do {
      lVar10 = *aplStack_138[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_138[0],0x10);
      if (bVar2) {
        *aplStack_138[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_138[0][1])();
      plVar4 = aplStack_138[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_138);
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_188,pplVar8);
  pplVar8 = aplStack_188;
  FUN_0034d284(lVar10);
  plVar4 = aplStack_188[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_188[0]) {
    do {
      lVar10 = *aplStack_188[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_188[0],0x10);
      if (bVar2) {
        *aplStack_188[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_188[0][1])();
      plVar4 = aplStack_188[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_188);
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_1d8,pplVar8);
  pplVar8 = aplStack_1d8;
  FUN_0034d478(lVar10);
  plVar4 = aplStack_1d8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_1d8[0]) {
    do {
      lVar10 = *aplStack_1d8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_1d8[0],0x10);
      if (bVar2) {
        *aplStack_1d8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_1d8[0][1])();
      plVar4 = aplStack_1d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_1d8);
  }
  __Unwind_Resume();
  lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_228,pplVar8);
  pplVar8 = aplStack_228;
  FUN_0034d66c(lVar10);
  plVar4 = aplStack_228[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_228[0]) {
    do {
      lVar10 = *aplStack_228[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_228[0],0x10);
      if (bVar2) {
        *aplStack_228[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_228[0][1])();
      plVar4 = aplStack_228[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_228);
  }
  __Unwind_Resume();
  lStack_258 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(apuStack_278,pplVar8);
  ppuVar9 = apuStack_278;
  FUN_0034d874(lVar10);
  puVar5 = apuStack_278[0];
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < apuStack_278[0]) {
    do {
      uVar11 = *apuStack_278[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_278[0],0x10);
      if (bVar2) {
        *apuStack_278[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_278[0][1])();
      puVar5 = apuStack_278[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_278);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_2e0 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        FUN_002971d4(&uStack_2d8,*puVar5,puVar5[1]);
      }
      else {
        uStack_2d0 = puVar5[1];
        uStack_2d8 = *puVar5;
        uStack_2c8 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_0036ccc8(puVar7 + 0xc,&uStack_2e0);
      if ((long)uStack_2c8 < 0) {
        __ZdlPv(uStack_2d8);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 0036c6b0; end: 0036c76b;  */

void FUN_0036c6b0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong *apuStack_228 [4];
  long lStack_208;
  long *aplStack_1d8 [4];
  long lStack_1b8;
  long *aplStack_188 [4];
  long lStack_168;
  long *aplStack_138 [4];
  long lStack_118;
  long *aplStack_e8 [4];
  long lStack_c8;
  long *aplStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar12 = *param_1;
  FUN_0036c554(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  FUN_0034cc88(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_98,pplVar8);
  pplVar8 = aplStack_98;
  FUN_0034ce60(lVar10);
  plVar4 = aplStack_98[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_98[0]) {
    do {
      lVar10 = *aplStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_98[0],0x10);
      if (bVar2) {
        *aplStack_98[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_98[0][1])();
      plVar4 = aplStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_98);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_e8,pplVar8);
  pplVar8 = aplStack_e8;
  FUN_0034d078(lVar10);
  plVar4 = aplStack_e8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_e8[0]) {
    do {
      lVar10 = *aplStack_e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_e8[0],0x10);
      if (bVar2) {
        *aplStack_e8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_e8[0][1])();
      plVar4 = aplStack_e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_e8);
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_138,pplVar8);
  pplVar8 = aplStack_138;
  FUN_0034d284(lVar10);
  plVar4 = aplStack_138[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_138[0]) {
    do {
      lVar10 = *aplStack_138[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_138[0],0x10);
      if (bVar2) {
        *aplStack_138[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_138[0][1])();
      plVar4 = aplStack_138[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_138);
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_188,pplVar8);
  pplVar8 = aplStack_188;
  FUN_0034d478(lVar10);
  plVar4 = aplStack_188[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_188[0]) {
    do {
      lVar10 = *aplStack_188[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_188[0],0x10);
      if (bVar2) {
        *aplStack_188[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_188[0][1])();
      plVar4 = aplStack_188[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_188);
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_1d8,pplVar8);
  pplVar8 = aplStack_1d8;
  FUN_0034d66c(lVar10);
  plVar4 = aplStack_1d8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_1d8[0]) {
    do {
      lVar10 = *aplStack_1d8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_1d8[0],0x10);
      if (bVar2) {
        *aplStack_1d8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_1d8[0][1])();
      plVar4 = aplStack_1d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_1d8);
  }
  __Unwind_Resume();
  lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(apuStack_228,pplVar8);
  ppuVar9 = apuStack_228;
  FUN_0034d874(lVar10);
  puVar5 = apuStack_228[0];
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < apuStack_228[0]) {
    do {
      uVar11 = *apuStack_228[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_228[0],0x10);
      if (bVar2) {
        *apuStack_228[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_228[0][1])();
      puVar5 = apuStack_228[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_228);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_290 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        FUN_002971d4(&uStack_288,*puVar5,puVar5[1]);
      }
      else {
        uStack_280 = puVar5[1];
        uStack_288 = *puVar5;
        uStack_278 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_0036ccc8(puVar7 + 0xc,&uStack_290);
      if ((long)uStack_278 < 0) {
        __ZdlPv(uStack_288);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 0036c76c; end: 0036c827;  */

void FUN_0036c76c(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong *apuStack_1d8 [4];
  long lStack_1b8;
  long *aplStack_188 [4];
  long lStack_168;
  long *aplStack_138 [4];
  long lStack_118;
  long *aplStack_e8 [4];
  long lStack_c8;
  long *aplStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar12 = *param_1;
  FUN_0036c554(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  FUN_0034ce60(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_98,pplVar8);
  pplVar8 = aplStack_98;
  FUN_0034d078(lVar10);
  plVar4 = aplStack_98[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_98[0]) {
    do {
      lVar10 = *aplStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_98[0],0x10);
      if (bVar2) {
        *aplStack_98[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_98[0][1])();
      plVar4 = aplStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_98);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_e8,pplVar8);
  pplVar8 = aplStack_e8;
  FUN_0034d284(lVar10);
  plVar4 = aplStack_e8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_e8[0]) {
    do {
      lVar10 = *aplStack_e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_e8[0],0x10);
      if (bVar2) {
        *aplStack_e8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_e8[0][1])();
      plVar4 = aplStack_e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_e8);
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_138,pplVar8);
  pplVar8 = aplStack_138;
  FUN_0034d478(lVar10);
  plVar4 = aplStack_138[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_138[0]) {
    do {
      lVar10 = *aplStack_138[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_138[0],0x10);
      if (bVar2) {
        *aplStack_138[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_138[0][1])();
      plVar4 = aplStack_138[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_138);
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_188,pplVar8);
  pplVar8 = aplStack_188;
  FUN_0034d66c(lVar10);
  plVar4 = aplStack_188[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_188[0]) {
    do {
      lVar10 = *aplStack_188[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_188[0],0x10);
      if (bVar2) {
        *aplStack_188[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_188[0][1])();
      plVar4 = aplStack_188[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_188);
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(apuStack_1d8,pplVar8);
  ppuVar9 = apuStack_1d8;
  FUN_0034d874(lVar10);
  puVar5 = apuStack_1d8[0];
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < apuStack_1d8[0]) {
    do {
      uVar11 = *apuStack_1d8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_1d8[0],0x10);
      if (bVar2) {
        *apuStack_1d8[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_1d8[0][1])();
      puVar5 = apuStack_1d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_1d8);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_240 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        FUN_002971d4(&uStack_238,*puVar5,puVar5[1]);
      }
      else {
        uStack_230 = puVar5[1];
        uStack_238 = *puVar5;
        uStack_228 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_0036ccc8(puVar7 + 0xc,&uStack_240);
      if ((long)uStack_228 < 0) {
        __ZdlPv(uStack_238);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 0036c828; end: 0036c8e3;  */

void FUN_0036c828(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong *apuStack_188 [4];
  long lStack_168;
  long *aplStack_138 [4];
  long lStack_118;
  long *aplStack_e8 [4];
  long lStack_c8;
  long *aplStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar12 = *param_1;
  FUN_0036c554(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  FUN_0034d078(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_98,pplVar8);
  pplVar8 = aplStack_98;
  FUN_0034d284(lVar10);
  plVar4 = aplStack_98[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_98[0]) {
    do {
      lVar10 = *aplStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_98[0],0x10);
      if (bVar2) {
        *aplStack_98[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_98[0][1])();
      plVar4 = aplStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_98);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_e8,pplVar8);
  pplVar8 = aplStack_e8;
  FUN_0034d478(lVar10);
  plVar4 = aplStack_e8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_e8[0]) {
    do {
      lVar10 = *aplStack_e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_e8[0],0x10);
      if (bVar2) {
        *aplStack_e8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_e8[0][1])();
      plVar4 = aplStack_e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_e8);
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_138,pplVar8);
  pplVar8 = aplStack_138;
  FUN_0034d66c(lVar10);
  plVar4 = aplStack_138[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_138[0]) {
    do {
      lVar10 = *aplStack_138[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_138[0],0x10);
      if (bVar2) {
        *aplStack_138[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_138[0][1])();
      plVar4 = aplStack_138[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_138);
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(apuStack_188,pplVar8);
  ppuVar9 = apuStack_188;
  FUN_0034d874(lVar10);
  puVar5 = apuStack_188[0];
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < apuStack_188[0]) {
    do {
      uVar11 = *apuStack_188[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_188[0],0x10);
      if (bVar2) {
        *apuStack_188[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_188[0][1])();
      puVar5 = apuStack_188[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_188);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_1f0 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        FUN_002971d4(&uStack_1e8,*puVar5,puVar5[1]);
      }
      else {
        uStack_1e0 = puVar5[1];
        uStack_1e8 = *puVar5;
        uStack_1d8 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_0036ccc8(puVar7 + 0xc,&uStack_1f0);
      if ((long)uStack_1d8 < 0) {
        __ZdlPv(uStack_1e8);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 0036c8e4; end: 0036c99f;  */

void FUN_0036c8e4(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong *apuStack_138 [4];
  long lStack_118;
  long *aplStack_e8 [4];
  long lStack_c8;
  long *aplStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar12 = *param_1;
  FUN_0036c554(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  FUN_0034d284(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_98,pplVar8);
  pplVar8 = aplStack_98;
  FUN_0034d478(lVar10);
  plVar4 = aplStack_98[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_98[0]) {
    do {
      lVar10 = *aplStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_98[0],0x10);
      if (bVar2) {
        *aplStack_98[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_98[0][1])();
      plVar4 = aplStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_98);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_e8,pplVar8);
  pplVar8 = aplStack_e8;
  FUN_0034d66c(lVar10);
  plVar4 = aplStack_e8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_e8[0]) {
    do {
      lVar10 = *aplStack_e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_e8[0],0x10);
      if (bVar2) {
        *aplStack_e8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_e8[0][1])();
      plVar4 = aplStack_e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_e8);
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(apuStack_138,pplVar8);
  ppuVar9 = apuStack_138;
  FUN_0034d874(lVar10);
  puVar5 = apuStack_138[0];
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < apuStack_138[0]) {
    do {
      uVar11 = *apuStack_138[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_138[0],0x10);
      if (bVar2) {
        *apuStack_138[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_138[0][1])();
      puVar5 = apuStack_138[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_138);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_1a0 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        FUN_002971d4(&uStack_198,*puVar5,puVar5[1]);
      }
      else {
        uStack_190 = puVar5[1];
        uStack_198 = *puVar5;
        uStack_188 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_0036ccc8(puVar7 + 0xc,&uStack_1a0);
      if ((long)uStack_188 < 0) {
        __ZdlPv(uStack_198);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 0036c9a0; end: 0036ca5b;  */

void FUN_0036c9a0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong *apuStack_e8 [4];
  long lStack_c8;
  long *aplStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar12 = *param_1;
  FUN_0036c554(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  FUN_0034d478(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(aplStack_98,pplVar8);
  pplVar8 = aplStack_98;
  FUN_0034d66c(lVar10);
  plVar4 = aplStack_98[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_98[0]) {
    do {
      lVar10 = *aplStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_98[0],0x10);
      if (bVar2) {
        *aplStack_98[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_98[0][1])();
      plVar4 = aplStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_98);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(apuStack_e8,pplVar8);
  ppuVar9 = apuStack_e8;
  FUN_0034d874(lVar10);
  puVar5 = apuStack_e8[0];
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < apuStack_e8[0]) {
    do {
      uVar11 = *apuStack_e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_e8[0],0x10);
      if (bVar2) {
        *apuStack_e8[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_e8[0][1])();
      puVar5 = apuStack_e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_e8);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_150 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        FUN_002971d4(&uStack_148,*puVar5,puVar5[1]);
      }
      else {
        uStack_140 = puVar5[1];
        uStack_148 = *puVar5;
        uStack_138 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_0036ccc8(puVar7 + 0xc,&uStack_150);
      if ((long)uStack_138 < 0) {
        __ZdlPv(uStack_148);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 0036ca5c; end: 0036cb17;  */

void FUN_0036ca5c(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong *apuStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar12 = *param_1;
  FUN_0036c554(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  FUN_0034d66c(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar4;
  FUN_0036c554(apuStack_98,pplVar8);
  ppuVar9 = apuStack_98;
  FUN_0034d874(lVar10);
  puVar5 = apuStack_98[0];
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < apuStack_98[0]) {
    do {
      uVar11 = *apuStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
      if (bVar2) {
        *apuStack_98[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_98[0][1])();
      puVar5 = apuStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_98);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_100 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        FUN_002971d4(&uStack_f8,*puVar5,puVar5[1]);
      }
      else {
        uStack_f0 = puVar5[1];
        uStack_f8 = *puVar5;
        uStack_e8 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_0036ccc8(puVar7 + 0xc,&uStack_100);
      if ((long)uStack_e8 < 0) {
        __ZdlPv(uStack_f8);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 0036cb18; end: 0036cbd3;  */

void FUN_0036cb18(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar9 = *param_1;
  FUN_0036c554(apuStack_48,param_2);
  ppuVar7 = apuStack_48;
  FUN_0034d874(uVar9);
  puVar4 = apuStack_48[0];
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
    do {
      uVar8 = *apuStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar2) {
        *apuStack_48[0] = uVar8 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar8 - 1 == 0) {
      (*(code *)apuStack_48[0][1])();
      puVar4 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_48);
  }
  __Unwind_Resume();
  puVar5 = puVar4 + 1;
  uVar8 = *puVar4;
  if ((uVar8 & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  if (1 < uVar8) {
    puVar4 = puVar5 + 1;
    do {
      uStack_b0 = puVar4[-1];
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        FUN_002971d4(&uStack_a8,*puVar4,puVar4[1]);
      }
      else {
        uStack_a0 = puVar4[1];
        uStack_a8 = *puVar4;
        uStack_98 = puVar4[2];
      }
      puVar6 = *ppuVar7;
      uVar3 = *puVar6;
      *(uint *)puVar6 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar6[0x10] = 0;
        puVar6[0xd] = 0;
        puVar6[0xc] = 0;
        puVar6[0xf] = 0;
        puVar6[0xe] = 0;
      }
      FUN_0036ccc8(puVar6 + 0xc,&uStack_b0);
      if ((long)uStack_98 < 0) {
        __ZdlPv(uStack_a8);
      }
      puVar6 = puVar4 + 3;
      puVar4 = puVar4 + 4;
    } while (puVar6 != puVar5 + (uVar8 >> 1) * 4);
  }
  return;
}



/* Entry: 0036cbd4; end: 0036ccc7;  */

void FUN_0036cbd4(ulong *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  uVar6 = *param_1;
  if ((uVar6 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if (1 < uVar6) {
    puVar7 = puVar3 + 1;
    do {
      uStack_60 = puVar7[-1];
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        FUN_002971d4(&uStack_58,*puVar7,puVar7[1]);
      }
      else {
        uStack_50 = puVar7[1];
        uStack_58 = *puVar7;
        uStack_48 = puVar7[2];
      }
      puVar4 = (uint *)*param_2;
      uVar2 = *puVar4;
      puVar5 = puVar4 + 0x18;
      *puVar4 = uVar2 | 0x400000;
      if ((uVar2 >> 0x16 & 1) == 0) {
        puVar4[0x20] = 0;
        puVar4[0x21] = 0;
        puVar4[0x1a] = 0;
        puVar4[0x1b] = 0;
        puVar5[0] = 0;
        puVar5[1] = 0;
        puVar4[0x1e] = 0;
        puVar4[0x1f] = 0;
        puVar4[0x1c] = 0;
        puVar4[0x1d] = 0;
      }
      FUN_0036ccc8(puVar5,&uStack_60);
      if ((long)uStack_48 < 0) {
        __ZdlPv(uStack_58);
      }
      puVar1 = puVar7 + 3;
      puVar7 = puVar7 + 4;
    } while (puVar1 != puVar3 + (uVar6 >> 1) * 4);
  }
  return;
}



/* Entry: 0036ccc8; end: 0036cd63;  */

ulong * FUN_0036ccc8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined1 **ppuVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 1;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar6 = param_1[2];
  }
  uVar5 = *param_1 >> 1;
  if (uVar5 != uVar6) {
    puVar3 = puVar3 + uVar5 * 4;
    *puVar3 = *param_2;
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      FUN_002971d4(puVar3 + 1,param_2[1],param_2[2]);
    }
    else {
      uVar5 = param_2[2];
      uVar6 = param_2[1];
      puVar3[3] = param_2[3];
      puVar3[2] = uVar5;
      puVar3[1] = uVar6;
    }
    *param_1 = *param_1 + 2;
    return puVar3;
  }
  ppuVar2 = &puStack_50;
  puVar3 = param_1 + 1;
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar5 = param_1[2] << 1;
  }
  puStack_50 = (undefined1 *)0x0;
  uStack_48 = 0;
  FUN_0034dd60();
  uVar8 = uVar6 >> 1;
  puVar1 = (ulong *)((long)ppuVar2 + uVar8 * 0x20);
  puStack_50 = (undefined1 *)ppuVar2;
  uStack_48 = uVar5;
  *puVar1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_002971d4(puVar1 + 1,param_2[1],param_2[2]);
    ppuVar2 = (undefined1 **)puStack_50;
  }
  else {
    uVar9 = param_2[2];
    uVar5 = param_2[1];
    puVar1[3] = param_2[3];
    puVar1[2] = uVar9;
    puVar1[1] = uVar5;
  }
  if (1 < uVar6) {
    puVar4 = (ulong *)((long)ppuVar2 + 8);
    uVar6 = uVar8;
    puVar7 = puVar3;
    do {
      puVar4[-1] = *puVar7;
      uVar9 = puVar7[2];
      uVar5 = puVar7[1];
      puVar4[2] = puVar7[3];
      puVar4[1] = uVar9;
      *puVar4 = uVar5;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[1] = 0;
      puVar7 = puVar7 + 4;
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 4;
    } while (uVar6 != 0);
    puVar3 = puVar3 + uVar8 * 4 + -3;
    do {
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        __ZdlPv(*puVar3);
      }
      puVar3 = puVar3 + -4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar6 = *param_1;
  if ((uVar6 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar6 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar6 | 1) + 2;
  return puVar1;
}



/* Entry: 0036cd64; end: 0036ceb7;  */

undefined8 * FUN_0036cd64(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    uVar3 = 2;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (undefined1 *)0x0;
  uStack_48 = 0;
  FUN_0034dd60();
  uVar7 = uVar8 >> 1;
  puVar1 = (undefined8 *)((long)ppuVar2 + uVar7 * 0x20);
  puStack_50 = (undefined1 *)ppuVar2;
  uStack_48 = uVar3;
  *puVar1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_002971d4(puVar1 + 1,param_2[1],param_2[2]);
    ppuVar2 = (undefined1 **)puStack_50;
  }
  else {
    uVar10 = param_2[2];
    uVar9 = param_2[1];
    puVar1[3] = param_2[3];
    puVar1[2] = uVar10;
    puVar1[1] = uVar9;
  }
  if (1 < uVar8) {
    puVar4 = (ulong *)((long)ppuVar2 + 8);
    uVar8 = uVar7;
    puVar5 = puVar6;
    do {
      puVar4[-1] = *puVar5;
      uVar11 = puVar5[2];
      uVar3 = puVar5[1];
      puVar4[2] = puVar5[3];
      puVar4[1] = uVar11;
      *puVar4 = uVar3;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 4;
      uVar8 = uVar8 - 1;
      puVar4 = puVar4 + 4;
    } while (uVar8 != 0);
    puVar6 = puVar6 + uVar7 * 4 + -3;
    do {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        __ZdlPv(*puVar6);
      }
      puVar6 = puVar6 + -4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar8 = *param_1;
  if ((uVar8 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar8 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar8 | 1) + 2;
  return puVar1;
}



/* Entry: 0036ceb8; end: 0036cf73;  */

ulong * FUN_0036ceb8(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar7 = *param_1;
  FUN_0036c554(apuStack_48,param_2);
  ppuVar4 = apuStack_48;
  FUN_0034de58(uVar7);
  puVar3 = apuStack_48[0];
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < apuStack_48[0]) {
    do {
      uVar5 = *apuStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar2) {
        *apuStack_48[0] = uVar5 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar5 - 1 == 0) {
      (*(code *)apuStack_48[0][1])();
      puVar3 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  if ((int)ppuVar4 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apuStack_48);
  }
  __Unwind_Resume();
  do {
    uVar6 = *puVar3;
    uVar5 = uVar6 + 0x130;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *puVar3 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (puVar3[2] < uVar5) {
    func_0x003d6048();
  }
  else {
    puVar3 = (ulong *)((long)puVar3 + uVar6 + 0x30);
  }
  FUN_003ecf38();
  FUN_003ed190(puVar3,ppuVar4);
  return puVar3;
}



/* Entry: 0036cf74; end: 0036cfc3;  */

ulong * FUN_0036cf74(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  do {
    uVar4 = *param_1;
    uVar1 = uVar4 + 0x130;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[2] < uVar1) {
    func_0x003d6048(param_1,0x130);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar4 + 0x30);
  }
  FUN_003ecf38();
  FUN_003ed190(param_1,param_2);
  return param_1;
}



/* Entry: 0036cfc4; end: 0036d07b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0036cfc4(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  int *piVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_130;
  ulong auStack_128 [20];
  long lStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  
  puVar9 = param_1 + 1;
  puVar7 = (ulong *)*param_1;
  if (((ulong)puVar7 & 1) == 0) {
    uVar8 = 6;
  }
  else {
    if ((param_1[2] >> 0x3b & 0xf) != 0) {
      puVar9 = param_2;
      FUN_00349558();
      puStack_80 = puVar7;
      puStack_78 = param_2;
      lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
      uVar8 = param_1[2];
      lVar6 = *(long *)(uVar8 + 0x10);
      *(ushort *)(uVar8 + 0xb50) = *(ushort *)(uVar8 + 0xb50) | 0x20;
      if ((*(byte *)(uVar8 + 0xbc0) >> 1 & 1) == 0) {
        if (*(char *)(uVar8 + 0x90) != '\0') {
          *(undefined1 *)(uVar8 + 0x90) = 0;
          func_0x003cf020(uVar8 + 0x38);
        }
        if ((*(byte *)(lVar6 + 0x238) >> 3 & 1) == 0) {
          if (((*(char *)(uVar8 + 0x778) != '\0') || (*puVar9 != 0)) &&
             ((*(ushort *)(uVar8 + 0xb50) >> 7 & 1) == 0)) {
            puVar4 = *(ulong **)(uVar8 + 0xb58);
            if (puVar4 == (ulong *)0x0) goto LAB_0036d1ec;
            puVar7 = puVar4 + 1;
            do {
              uVar10 = *puVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar2) {
                *puVar7 = uVar10 - 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (uVar10 - 1 == 0) goto LAB_0036d26c;
            goto LAB_0036d1ec;
          }
          FUN_003666b4(lVar6,uVar8);
          FUN_00368e54(uVar8);
        }
        auStack_128[1] = 0;
        uVar8 = *puVar9;
        if ((uVar8 & 1) != 0) {
          piVar5 = (int *)(uVar8 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar2) {
              *piVar5 = *piVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_130 = uVar8;
        FUN_0036b498(param_1,&uStack_130,auStack_128 + 1);
        if ((uVar8 & 1) != 0) {
          FUN_0055293c(uVar8);
        }
        FUN_00346f8c(auStack_128 + 1,*(undefined8 *)(lVar6 + 0x1a0));
        puVar4 = auStack_128 + 1;
        FUN_0034afe4();
        puVar7 = puVar9;
      }
      else {
        puVar4 = *(ulong **)(lVar6 + 0x1a0);
        FUN_003bb974(puVar4,"recv_initial_metadata_ready for abandoned attempt");
      }
      puVar9 = param_1 + 1;
      do {
        uVar10 = *puVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar2) {
          *puVar9 = uVar10 - 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puVar9 = puVar7;
      if (uVar10 - 1 == 0) {
        puVar4 = param_1;
        (**(code **)*param_1)();
      }
      while (*(long *)PTR____stack_chk_guard_00999f88 != lStack_88) {
        ___stack_chk_fail();
LAB_0036d26c:
        (**(code **)*puVar4)();
LAB_0036d1ec:
        *(ulong **)(uVar8 + 0xb58) = param_1;
        FUN_003450b4(uVar8 + 0xb60,puVar9);
        auStack_128[1] = 0;
        uVar10 = *puVar9;
        if (uVar10 != 0) {
          if ((uVar10 & 1) != 0) {
            piVar5 = (int *)(uVar10 - 1);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar2) {
                *piVar5 = *piVar5 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          auStack_128[0] = uVar10;
          FUN_00368b44(uVar8,auStack_128,auStack_128 + 1);
          FUN_0033c494(auStack_128);
        }
        if ((*(ushort *)(uVar8 + 0xb50) >> 6 & 1) == 0) {
          FUN_00369588(uVar8,auStack_128 + 1);
        }
        FUN_00346f8c(auStack_128 + 1,*(undefined8 *)(lVar6 + 0x1a0));
        puVar4 = auStack_128 + 1;
        FUN_0034afe4();
      }
      return;
    }
    puVar9 = (ulong *)param_1[1];
    uVar8 = param_1[2] << 1;
  }
  uVar10 = (ulong)puVar7 >> 1;
  puVar3 = (ulong *)(uVar8 << 4);
  __Znwm();
  uVar11 = *param_2;
  (puVar3 + uVar10 * 2)[1] = param_2[1];
  puVar3[uVar10 * 2] = uVar11;
  puVar4 = puVar3;
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < puVar7) {
    do {
      uVar11 = *puVar9;
      puVar4[1] = puVar9[1];
      *puVar4 = uVar11;
      uVar10 = uVar10 - 1;
      puVar4 = puVar4 + 2;
      puVar9 = puVar9 + 2;
    } while (uVar10 != 0);
  }
  if (((ulong)puVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    puVar7 = (ulong *)*param_1;
  }
  param_1[1] = (ulong)puVar3;
  param_1[2] = uVar8;
  *param_1 = ((ulong)puVar7 | 1) + 2;
  return;
}



/* Entry: 0036d07c; end: 0036d303;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0036d07c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *unaff_x22;
  ulong uStack_e0;
  ulong auStack_d8 [20];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar8 = param_1[2];
  lVar7 = *(long *)(uVar8 + 0x10);
  *(ushort *)(uVar8 + 0xb50) = *(ushort *)(uVar8 + 0xb50) | 0x20;
  if ((*(byte *)(uVar8 + 0xbc0) >> 1 & 1) == 0) {
    if (*(char *)(uVar8 + 0x90) != '\0') {
      *(undefined1 *)(uVar8 + 0x90) = 0;
      func_0x003cf020(uVar8 + 0x38);
    }
    if ((*(byte *)(lVar7 + 0x238) >> 3 & 1) == 0) {
      if (((*(char *)(uVar8 + 0x778) != '\0') || (*param_2 != 0)) &&
         ((*(ushort *)(uVar8 + 0xb50) >> 7 & 1) == 0)) {
        puVar4 = *(ulong **)(uVar8 + 0xb58);
        if (puVar4 == (ulong *)0x0) goto LAB_0036d1ec;
        puVar1 = puVar4 + 1;
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) goto LAB_0036d26c;
        goto LAB_0036d1ec;
      }
      FUN_003666b4(lVar7,uVar8);
      FUN_00368e54(uVar8);
    }
    auStack_d8[1] = 0;
    uVar8 = *param_2;
    if ((uVar8 & 1) != 0) {
      piVar5 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_e0 = uVar8;
    FUN_0036b498(param_1,&uStack_e0,auStack_d8 + 1);
    if ((uVar8 & 1) != 0) {
      FUN_0055293c(uVar8);
    }
    FUN_00346f8c(auStack_d8 + 1,*(undefined8 *)(lVar7 + 0x1a0));
    puVar4 = auStack_d8 + 1;
    FUN_0034afe4();
    unaff_x22 = param_2;
  }
  else {
    puVar4 = *(ulong **)(lVar7 + 0x1a0);
    FUN_003bb974(puVar4,"recv_initial_metadata_ready for abandoned attempt");
  }
  puVar1 = param_1 + 1;
  do {
    uVar6 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar6 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_2 = unaff_x22;
  if (uVar6 - 1 == 0) {
    puVar4 = param_1;
    (**(code **)*param_1)();
  }
  while (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
LAB_0036d26c:
    (**(code **)*puVar4)();
LAB_0036d1ec:
    *(ulong **)(uVar8 + 0xb58) = param_1;
    FUN_003450b4(uVar8 + 0xb60,param_2);
    auStack_d8[1] = 0;
    uVar6 = *param_2;
    if (uVar6 != 0) {
      if ((uVar6 & 1) != 0) {
        piVar5 = (int *)(uVar6 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      auStack_d8[0] = uVar6;
      FUN_00368b44(uVar8,auStack_d8,auStack_d8 + 1);
      FUN_0033c494(auStack_d8);
    }
    if ((*(ushort *)(uVar8 + 0xb50) >> 6 & 1) == 0) {
      FUN_00369588(uVar8,auStack_d8 + 1);
    }
    FUN_00346f8c(auStack_d8 + 1,*(undefined8 *)(lVar7 + 0x1a0));
    puVar4 = auStack_d8 + 1;
    FUN_0034afe4();
  }
  return;
}



/* Entry: 0036d304; end: 0036d593;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0036d304(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *unaff_x22;
  ulong uStack_e0;
  ulong auStack_d8 [20];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar8 = param_1[2];
  lVar7 = *(long *)(uVar8 + 0x10);
  *(long *)(uVar8 + 0xb48) = *(long *)(uVar8 + 0xb48) + 1;
  if ((*(byte *)(uVar8 + 0xbc0) >> 1 & 1) == 0) {
    if (*(char *)(uVar8 + 0x90) != '\0') {
      *(undefined1 *)(uVar8 + 0x90) = 0;
      func_0x003cf020(uVar8 + 0x38);
    }
    if ((*(byte *)(lVar7 + 0x238) >> 3 & 1) == 0) {
      if (((*(char *)(uVar8 + 0x8c8) == '\0') || (*param_2 != 0)) &&
         ((*(ushort *)(uVar8 + 0xb50) >> 7 & 1) == 0)) {
        puVar4 = *(ulong **)(uVar8 + 0xb68);
        if (puVar4 == (ulong *)0x0) goto LAB_0036d47c;
        puVar1 = puVar4 + 1;
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) goto LAB_0036d4fc;
        goto LAB_0036d47c;
      }
      FUN_003666b4(lVar7,uVar8);
      FUN_00368e54(uVar8);
    }
    auStack_d8[1] = 0;
    uVar8 = *param_2;
    if ((uVar8 & 1) != 0) {
      piVar5 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_e0 = uVar8;
    FUN_0036b5b0(param_1,&uStack_e0,auStack_d8 + 1);
    if ((uVar8 & 1) != 0) {
      FUN_0055293c(uVar8);
    }
    FUN_00346f8c(auStack_d8 + 1,*(undefined8 *)(lVar7 + 0x1a0));
    puVar4 = auStack_d8 + 1;
    FUN_0034afe4();
    unaff_x22 = param_2;
  }
  else {
    FUN_0036b714(uVar8 + 0x7a0);
    puVar4 = *(ulong **)(lVar7 + 0x1a0);
    FUN_003bb974(puVar4,"recv_message_ready for abandoned attempt");
  }
  puVar1 = param_1 + 1;
  do {
    uVar6 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar6 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_2 = unaff_x22;
  if (uVar6 - 1 == 0) {
    puVar4 = param_1;
    (**(code **)*param_1)();
  }
  while (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
LAB_0036d4fc:
    (**(code **)*puVar4)();
LAB_0036d47c:
    *(ulong **)(uVar8 + 0xb68) = param_1;
    FUN_003450b4(uVar8 + 0xb70,param_2);
    auStack_d8[1] = 0;
    uVar6 = *param_2;
    if (uVar6 != 0) {
      if ((uVar6 & 1) != 0) {
        piVar5 = (int *)(uVar6 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      auStack_d8[0] = uVar6;
      FUN_00368b44(uVar8,auStack_d8,auStack_d8 + 1);
      FUN_0033c494(auStack_d8);
    }
    if ((*(ushort *)(uVar8 + 0xb50) >> 6 & 1) == 0) {
      FUN_00369588(uVar8,auStack_d8 + 1);
    }
    FUN_00346f8c(auStack_d8 + 1,*(undefined8 *)(lVar7 + 0x1a0));
    puVar4 = auStack_d8 + 1;
    FUN_0034afe4();
  }
  return;
}



/* Entry: 0036d594; end: 0036d62f;  */

void FUN_0036d594(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_003bb974(*(undefined8 *)(*(long *)(param_1[2] + 0x10) + 0x1a0),
               "on_complete for internally generated cancel_stream op");
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0036d5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1);
  return;
}



/* Entry: 0036d630; end: 0036d63b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0036d630(long *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar5 = param_1[3];
  plVar4 = *(long **)(lVar5 + 0x78);
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(param_1 + 2) >> 6 & 1) != 0) {
      uStack_38 = *(ulong *)(param_1[1] + 0x98);
      if ((uStack_38 & 1) != 0) {
        piVar6 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*plVar4 + 0x48))(plVar4,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        FUN_0055293c();
      }
    }
    bVar1 = *(byte *)(param_1 + 2);
    if ((bVar1 & 1) != 0) {
      (**(code **)(**(long **)(lVar5 + 0x78) + 0x10))
                (*(long **)(lVar5 + 0x78),*(undefined8 *)param_1[1],
                 *(undefined4 *)((undefined8 *)param_1[1] + 1));
      lVar7 = *param_1;
      *(undefined8 *)(lVar5 + 0xf8) = *(undefined8 *)(param_1[1] + 0x10);
      *(code **)(lVar5 + 0x108) = FUN_003485d0;
      *(long *)(lVar5 + 0x110) = lVar5;
      *(undefined8 *)(lVar5 + 0x118) = 0;
      *(long *)(lVar5 + 0x120) = lVar7;
      *param_1 = lVar5 + 0x100;
      bVar1 = *(byte *)(param_1 + 2);
    }
    if ((bVar1 >> 2 & 1) != 0) {
      (**(code **)(**(long **)(lVar5 + 0x78) + 0x28))
                (*(long **)(lVar5 + 0x78),*(undefined8 *)(param_1[1] + 0x28));
      bVar1 = *(byte *)(param_1 + 2);
    }
    if ((bVar1 >> 1 & 1) != 0) {
      (**(code **)(**(long **)(lVar5 + 0x78) + 0x20))
                (*(long **)(lVar5 + 0x78),*(undefined8 *)(param_1[1] + 0x18));
      bVar1 = *(byte *)(param_1 + 2);
    }
    if ((bVar1 >> 3 & 1) != 0) {
      lVar7 = param_1[1];
      *(undefined8 *)(lVar5 + 0x128) = *(undefined8 *)(lVar7 + 0x38);
      uVar8 = *(undefined8 *)(lVar7 + 0x48);
      *(code **)(lVar5 + 0x138) = FUN_00348660;
      *(long *)(lVar5 + 0x140) = lVar5;
      *(undefined8 *)(lVar5 + 0x148) = 0;
      *(undefined8 *)(lVar5 + 0x150) = uVar8;
      *(long *)(param_1[1] + 0x48) = lVar5 + 0x130;
      bVar1 = *(byte *)(param_1 + 2);
    }
    if ((bVar1 >> 4 & 1) != 0) {
      lVar7 = param_1[1];
      *(undefined8 *)(lVar5 + 0x158) = *(undefined8 *)(lVar7 + 0x60);
      uVar8 = *(undefined8 *)(lVar7 + 0x78);
      *(code **)(lVar5 + 0x168) = FUN_003486fc;
      *(long *)(lVar5 + 0x170) = lVar5;
      *(undefined8 *)(lVar5 + 0x178) = 0;
      *(undefined8 *)(lVar5 + 0x180) = uVar8;
      *(long *)(param_1[1] + 0x78) = lVar5 + 0x160;
    }
  }
  if ((*(byte *)(param_1 + 2) >> 5 & 1) != 0) {
    lVar7 = param_1[1];
    uVar8 = *(undefined8 *)(lVar7 + 0x80);
    *(undefined8 *)(lVar5 + 400) = *(undefined8 *)(lVar7 + 0x88);
    *(undefined8 *)(lVar5 + 0x188) = uVar8;
    uVar8 = *(undefined8 *)(lVar7 + 0x90);
    *(code **)(lVar5 + 0x1a0) = FUN_00348794;
    *(long *)(lVar5 + 0x1a8) = lVar5;
    *(undefined8 *)(lVar5 + 0x1b0) = 0;
    *(undefined8 *)(lVar5 + 0x1b8) = uVar8;
    *(long *)(param_1[1] + 0x90) = lVar5 + 0x198;
  }
  if (*(long *)(lVar5 + 0xf0) == 0) {
    puVar10 = (ulong *)(lVar5 + 0x88);
    uVar9 = *puVar10;
    if (uVar9 == 0) {
      if ((*(byte *)(param_1 + 2) >> 6 & 1) == 0) {
        FUN_00347f10(lVar5,param_1);
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          FUN_003bb974(*(undefined8 *)(lVar5 + 0x50),"batch does not include send_initial_metadata")
          ;
          return;
        }
        uStack_58 = 0;
        FUN_00348a34(lVar5,&uStack_58);
        if ((uStack_58 & 1) == 0) {
          return;
        }
        FUN_0055293c();
        return;
      }
      FUN_003450b4(puVar10,param_1[1] + 0x98);
      uStack_48 = *puVar10;
      if ((uStack_48 & 1) != 0) {
        piVar6 = (int *)(uStack_48 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_00347fc4(lVar5,&uStack_48,FUN_00348a2c);
      FUN_0033c494(&uStack_48);
      uStack_50 = *puVar10;
      if ((uStack_50 & 1) != 0) {
        piVar6 = (int *)(uStack_50 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_004007f4(param_1,&uStack_50,*(undefined8 *)(lVar5 + 0x50));
      puVar10 = &uStack_50;
    }
    else {
      if ((uVar9 & 1) != 0) {
        piVar6 = (int *)(uVar9 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_40 = uVar9;
      FUN_004007f4(param_1,&uStack_40,*(undefined8 *)(lVar5 + 0x50));
      puVar10 = &uStack_40;
    }
    FUN_0033c494(puVar10);
  }
  else {
    FUN_00371108(*(long *)(lVar5 + 0xf0),param_1);
  }
  return;
}



/* Entry: 0036d63c; end: 0036d6cf;  */

void FUN_0036d63c(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  *(code **)(param_1 + 0x280) = FUN_0036d6d0;
  *(long *)(param_1 + 0x288) = param_1;
  *(undefined8 *)(param_1 + 0x290) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003bb88c(uVar3,param_1 + 0x278,&uStack_28,"retry timer fired");
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0036d6d0; end: 0036d747;  */

void FUN_0036d6d0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  if ((*param_2 == 0) && ((*(byte *)(param_1 + 0x238) >> 4 & 1) != 0)) {
    *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xef;
    FUN_00366970(param_1,0);
  }
  else {
    FUN_003bb974(*(undefined8 *)(param_1 + 0x1a0),"retry timer cancelled");
  }
  plVar3 = *(long **)(param_1 + 0x198);
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar4 = plVar3;
    FUN_003c3188();
    if ((((ulong)plVar4 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar4 + 0x28) >> 1 & 1) != 0)
       ) {
      uStack_28 = 0;
      FUN_003c2968(plVar3 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    uStack_38 = 0;
    FUN_003c1e6c(&uStack_29,plVar3 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  return;
}



/* Entry: 0036d748; end: 0036d7cb;  */

void FUN_0036d748(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 2;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = uVar1 - 1;
      FUN_003673f0(puVar2);
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(*puVar3);
    return;
  }
  return;
}



/* Entry: 0036d7cc; end: 0036d803;  */

long FUN_0036d7cc(long param_1)

{
  FUN_00367130(param_1 + 0x1f0);
  FUN_00368840(param_1);
  return param_1;
}



/* Entry: 0036d804; end: 0036d837;  */

long FUN_0036d804(long param_1)

{
  if (*(char *)(param_1 + 0x128) != '\0') {
    FUN_003ede40(param_1);
  }
  return param_1;
}



/* Entry: 0036d838; end: 0036d893;  */

undefined8 * FUN_0036d838(undefined8 *param_1)

{
  ulong uStack_30;
  undefined1 uStack_21;
  
  *param_1 = &PTR_FUN_009ddb38;
  uStack_30 = 0;
  FUN_003c1e6c(&uStack_21,param_1[2],&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0036d894; end: 0036d8a7;  */

void FUN_0036d894(void)

{
  FUN_0036d838();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0036d8a8; end: 0036d8af;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0036d8a8(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 0036d8b0; end: 0036d8e3;  */

ulong FUN_0036d8b0(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = lRam0000000000b65d18;
  if (lRam0000000000b65d18 == 0) {
    FUN_003b171c();
  }
  lVar5 = *(long *)(lVar2 + 0xd8);
  if (*(long *)(lVar2 + 0xe0) != lVar5) {
    uVar6 = 0;
    pcVar4 = "retry";
    do {
      plVar3 = *(long **)(lVar5 + uVar6 * 8);
      (**(code **)(*plVar3 + 0x10))();
      iVar1 = (int)plVar3;
      if ((pcVar4 == "") && (pcVar4 = "retry", _memcmp(), iVar1 == 0)) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = *(long *)(lVar2 + 0xd8);
    } while (uVar6 < (ulong)(*(long *)(lVar2 + 0xe0) - lVar5 >> 3));
  }
  return 0xffffffffffffffff;
}



/* Entry: 0036d8e4; end: 0036d967;  */

void FUN_0036d8e4(long param_1)

{
  dword *pdVar1;
  dword *pdStack_28;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009ddb88;
  pdStack_28 = pdVar1;
  FUN_003ead58(param_1 + 0xd8,&pdStack_28);
  pdVar1 = pdStack_28;
  pdStack_28 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 8))();
  }
  return;
}



/* Entry: 0036d968; end: 0036e62f;  */

void FUN_0036d968(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 ulong *param_5)

{
  undefined1 auVar1 [16];
  char cVar2;
  char cVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  long *plVar6;
  ulong ****ppppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  dword *pdVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 uVar17;
  int iVar18;
  uint5 uVar19;
  undefined1 auVar20 [16];
  ulong uStack_e8;
  undefined1 uStack_d9;
  int iStack_d8;
  int iStack_d4;
  undefined8 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  ulong ****ppppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  undefined8 ***pppuStack_60;
  undefined8 **ppuStack_58;
  
  lVar13 = param_4 + 0x20;
  FUN_00353254(&ppppuStack_80,"retryThrottling");
  FUN_0035d420(lVar13,&ppppuStack_80);
  if ((long)pppuStack_70 < 0) {
    __ZdlPv(ppppuStack_80);
  }
  if (param_4 + 0x28 != lVar13) {
    if (*(int *)(lVar13 + 0x38) == 5) {
      ppppuStack_98 = (ulong *****)0x0;
      ppuStack_90 = (ulong ***)0x0;
      ppuStack_88 = (ulong ***)0x0;
      FUN_00353254(&ppppuStack_80,"maxTokens");
      lVar8 = lVar13 + 0x58;
      lVar16 = lVar8;
      FUN_0035d420(lVar8,&ppppuStack_80);
      if ((long)pppuStack_70 < 0) {
        __ZdlPv(ppppuStack_80);
      }
      if (lVar13 + 0x60 == lVar16) {
        uStack_a8 = 0;
        uStack_a0 = 0;
        ppuStack_b0 = (ulong ***)0x0;
        FUN_003b646c(&ppuStack_58,2,"field:retryThrottling field:maxTokens error:Not found",0x35,
                     &ppuStack_b8,&ppuStack_b0);
        if (ppuStack_90 < ppuStack_88) {
LAB_0036dba0:
          *ppuStack_90 = ppuStack_58;
          ppuStack_58 = (ulong ***)0x36;
          ppuStack_90 = ppuStack_90 + 1;
        }
        else {
          lVar16 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
          uVar14 = lVar16 + 1;
          if (uVar14 >> 0x3d != 0) {
            FUN_0035d520(&ppppuStack_98);
            goto LAB_0036e4c8;
          }
          ppppuVar7 = (ulong ****)&ppuStack_88;
          uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
          if (uVar10 <= uVar14) {
            uVar10 = uVar14;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
            uVar10 = 0x1fffffffffffffff;
          }
          pppuStack_60 = ppppuVar7;
          if (uVar10 == 0) {
            ppppuStack_80 = (ulong ****)0x0;
          }
          else {
            FUN_0035d534();
            ppppuStack_80 = ppppuVar7;
          }
          pppuStack_78 = ppppuStack_80 + lVar16;
          pppuStack_68 = ppppuStack_80 + uVar10;
          ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
          *pppuStack_78 = ppuStack_58;
          ppuStack_58 = (ulong ***)0x36;
          pppuStack_70 = ppppuVar7;
          FUN_0035d4ac(&ppppuStack_98,&ppppuStack_80);
          ppuVar4 = ppuStack_90;
          FUN_0035d67c(&ppppuStack_80);
          ppuStack_90 = ppuVar4;
          if (((ulong)ppuStack_58 & 1) != 0) {
            FUN_0055293c();
          }
        }
LAB_0036dcfc:
        ppppuStack_80 = (ulong ****)&ppuStack_b0;
        FUN_0033d548(&ppppuStack_80);
        lVar16 = 0;
      }
      else {
        if (*(int *)(lVar16 + 0x38) != 3) {
          uStack_a8 = 0;
          uStack_a0 = 0;
          ppuStack_b0 = (ulong ***)0x0;
          FUN_003b646c(&ppuStack_58,2,
                       "field:retryThrottling field:maxTokens error:Type should be number",0x41,
                       &ppuStack_b8,&ppuStack_b0);
          if (ppuStack_90 < ppuStack_88) goto LAB_0036dba0;
          lVar16 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
          uVar14 = lVar16 + 1;
          if (uVar14 >> 0x3d != 0) {
            FUN_0035d520(&ppppuStack_98);
            goto LAB_0036e4c8;
          }
          ppppuVar7 = (ulong ****)&ppuStack_88;
          uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
          if (uVar10 <= uVar14) {
            uVar10 = uVar14;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
            uVar10 = 0x1fffffffffffffff;
          }
          pppuStack_60 = ppppuVar7;
          if (uVar10 == 0) {
            ppppuStack_80 = (ulong ****)0x0;
          }
          else {
            FUN_0035d534();
            ppppuStack_80 = ppppuVar7;
          }
          pppuStack_78 = ppppuStack_80 + lVar16;
          pppuStack_68 = ppppuStack_80 + uVar10;
          ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
          *pppuStack_78 = ppuStack_58;
          ppuStack_58 = (ulong ***)0x36;
          pppuStack_70 = ppppuVar7;
          FUN_0035d4ac(&ppppuStack_98,&ppppuStack_80);
          ppuVar4 = ppuStack_90;
          FUN_0035d67c(&ppppuStack_80);
          ppuStack_90 = ppuVar4;
          if (((ulong)ppuStack_58 & 1) != 0) {
            FUN_0055293c();
          }
          goto LAB_0036dcfc;
        }
        plVar6 = (long *)(lVar16 + 0x40);
        if (*(char *)(lVar16 + 0x57) < '\0') {
          plVar6 = (long *)*plVar6;
        }
        iVar12 = (int)plVar6;
        FUN_003399d8();
        lVar16 = (long)(iVar12 * 1000);
        if (iVar12 < 1) {
          uStack_a8 = 0;
          uStack_a0 = 0;
          ppuStack_b0 = (ulong ***)0x0;
          FUN_003b646c(&ppuStack_58,2,
                       "field:retryThrottling field:maxTokens error:should be greater than zero",
                       0x47,&ppuStack_b8,&ppuStack_b0);
          if (ppuStack_90 < ppuStack_88) {
            *ppuStack_90 = ppuStack_58;
            ppuStack_58 = (ulong ***)0x36;
            ppuStack_90 = ppuStack_90 + 1;
          }
          else {
            lVar15 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
            uVar14 = lVar15 + 1;
            if (uVar14 >> 0x3d != 0) {
              FUN_0035d520(&ppppuStack_98);
              goto LAB_0036e4c8;
            }
            ppppuVar7 = (ulong ****)&ppuStack_88;
            uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
            if (uVar10 <= uVar14) {
              uVar10 = uVar14;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
              uVar10 = 0x1fffffffffffffff;
            }
            pppuStack_60 = ppppuVar7;
            if (uVar10 == 0) {
              ppppuStack_80 = (ulong ****)0x0;
            }
            else {
              FUN_0035d534();
              ppppuStack_80 = ppppuVar7;
            }
            pppuStack_78 = ppppuStack_80 + lVar15;
            pppuStack_68 = ppppuStack_80 + uVar10;
            ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
            *pppuStack_78 = ppuStack_58;
            ppuStack_58 = (ulong ***)0x36;
            pppuStack_70 = ppppuVar7;
            FUN_0035d4ac(&ppppuStack_98,&ppppuStack_80);
            ppuVar4 = ppuStack_90;
            FUN_0035d67c(&ppppuStack_80);
            ppuStack_90 = ppuVar4;
            if (((ulong)ppuStack_58 & 1) != 0) {
              FUN_0055293c();
            }
          }
          ppppuStack_80 = (ulong ****)&ppuStack_b0;
          FUN_0033d548(&ppppuStack_80);
        }
      }
      FUN_00353254(&ppppuStack_80,"tokenRatio");
      FUN_0035d420(lVar8,&ppppuStack_80);
      if ((long)pppuStack_70 < 0) {
        __ZdlPv(ppppuStack_80);
      }
      if (lVar13 + 0x60 == lVar8) {
        uStack_c8 = 0;
        uStack_c0 = 0;
        ppuStack_d0 = (ulong ***)0x0;
        FUN_003b646c(&ppuStack_b8,2,"field:retryThrottling field:tokenRatio error:Not found",0x36,
                     &iStack_d4,&ppuStack_d0);
        if (ppuStack_90 < ppuStack_88) {
LAB_0036de20:
          *ppuStack_90 = ppuStack_b8;
          ppuStack_b8 = (ulong ***)0x36;
          ppuStack_90 = ppuStack_90 + 1;
        }
        else {
          lVar13 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
          uVar14 = lVar13 + 1;
          if (uVar14 >> 0x3d != 0) {
            FUN_0035d520(&ppppuStack_98);
            goto LAB_0036e4c8;
          }
          ppppuVar7 = (ulong ****)&ppuStack_88;
          uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
          if (uVar10 <= uVar14) {
            uVar10 = uVar14;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
            uVar10 = 0x1fffffffffffffff;
          }
          pppuStack_60 = ppppuVar7;
          if (uVar10 == 0) {
            ppppuStack_80 = (ulong ****)0x0;
          }
          else {
            FUN_0035d534();
            ppppuStack_80 = ppppuVar7;
          }
          pppuStack_78 = ppppuStack_80 + lVar13;
          pppuStack_68 = ppppuStack_80 + uVar10;
          ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
          *pppuStack_78 = ppuStack_b8;
          ppuStack_b8 = (ulong ***)0x36;
          pppuStack_70 = ppppuVar7;
          FUN_0035d4ac(&ppppuStack_98,&ppppuStack_80);
          ppuVar4 = ppuStack_90;
          FUN_0035d67c(&ppppuStack_80);
          ppuStack_90 = ppuVar4;
          if (((ulong)ppuStack_b8 & 1) != 0) {
            FUN_0055293c();
          }
        }
LAB_0036e0f4:
        ppppuStack_80 = (ulong ****)&ppuStack_d0;
        FUN_0033d548(&ppppuStack_80);
        lVar13 = 0;
LAB_0036e108:
        FUN_0036fd60(&uStack_e8,&ppppuStack_80,"retryThrottling",0xf,&ppppuStack_98);
      }
      else {
        if (*(int *)(lVar8 + 0x38) != 3) {
          uStack_c8 = 0;
          uStack_c0 = 0;
          ppuStack_d0 = (ulong ***)0x0;
          FUN_003b646c(&ppuStack_b8,2,
                       "field:retryThrottling field:tokenRatio error:type should be number",0x42,
                       &iStack_d4,&ppuStack_d0);
          if (ppuStack_90 < ppuStack_88) goto LAB_0036de20;
          lVar13 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
          uVar14 = lVar13 + 1;
          if (uVar14 >> 0x3d != 0) {
            FUN_0035d520(&ppppuStack_98);
            goto LAB_0036e4c8;
          }
          ppppuVar7 = (ulong ****)&ppuStack_88;
          uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
          if (uVar10 <= uVar14) {
            uVar10 = uVar14;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
            uVar10 = 0x1fffffffffffffff;
          }
          pppuStack_60 = ppppuVar7;
          if (uVar10 == 0) {
            ppppuStack_80 = (ulong ****)0x0;
          }
          else {
            FUN_0035d534();
            ppppuStack_80 = ppppuVar7;
          }
          pppuStack_78 = ppppuStack_80 + lVar13;
          pppuStack_68 = ppppuStack_80 + uVar10;
          ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
          *pppuStack_78 = ppuStack_b8;
          ppuStack_b8 = (ulong ***)0x36;
          pppuStack_70 = ppppuVar7;
          FUN_0035d4ac(&ppppuStack_98,&ppppuStack_80);
          ppuVar4 = ppuStack_90;
          FUN_0035d67c(&ppppuStack_80);
          ppuStack_90 = ppuVar4;
          if (((ulong)ppuStack_b8 & 1) != 0) {
            FUN_0055293c();
          }
          goto LAB_0036e0f4;
        }
        if ((char)*(byte *)(lVar8 + 0x57) < '\0') {
          lVar13 = *(long *)(lVar8 + 0x40);
          uVar14 = *(ulong *)(lVar8 + 0x48);
        }
        else {
          lVar13 = lVar8 + 0x40;
          uVar14 = (ulong)*(byte *)(lVar8 + 0x57);
        }
        iStack_d4 = 0;
        lVar8 = lVar13;
        _strchr(lVar13,0x2e);
        if (lVar8 == 0) {
          iVar12 = 1;
LAB_0036dfe8:
          FUN_003398d8(lVar13,uVar14,&iStack_d8);
          if ((int)lVar13 == 0) {
            uStack_c8 = 0;
            uStack_c0 = 0;
            ppuStack_d0 = (ulong ***)0x0;
            FUN_003b646c(&ppuStack_b8,2,
                         "field:retryThrottling field:tokenRatio error:Failed parsing",0x3b,
                         &uStack_d9,&ppuStack_d0);
            if (ppuStack_90 < ppuStack_88) {
              *ppuStack_90 = ppuStack_b8;
              ppuStack_b8 = (ulong ***)0x36;
              ppuStack_90 = ppuStack_90 + 1;
            }
            else {
              lVar13 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
              uVar14 = lVar13 + 1;
              if (uVar14 >> 0x3d != 0) {
                FUN_0035d520(&ppppuStack_98);
LAB_0036e4c8:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x36e4cc);
                (*pcVar5)();
              }
              ppppuVar7 = (ulong ****)&ppuStack_88;
              uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
              if (uVar10 <= uVar14) {
                uVar10 = uVar14;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
                uVar10 = 0x1fffffffffffffff;
              }
              pppuStack_60 = ppppuVar7;
              if (uVar10 == 0) {
                ppppuStack_80 = (ulong ****)0x0;
              }
              else {
                FUN_0035d534();
                ppppuStack_80 = ppppuVar7;
              }
              pppuStack_78 = ppppuStack_80 + lVar13;
              pppuStack_68 = ppppuStack_80 + uVar10;
              ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
              *pppuStack_78 = ppuStack_b8;
              ppuStack_b8 = (ulong ***)0x36;
              pppuStack_70 = ppppuVar7;
              FUN_0035d4ac(&ppppuStack_98,&ppppuStack_80);
              ppuVar4 = ppuStack_90;
              FUN_0035d67c(&ppppuStack_80);
              ppuStack_90 = ppuVar4;
              if (((ulong)ppuStack_b8 & 1) != 0) {
                FUN_0055293c();
              }
            }
            ppppuStack_80 = (ulong ****)&ppuStack_d0;
            FUN_0033d548(&ppppuStack_80);
            FUN_0036fd60(&uStack_e8,&ppppuStack_80,"retryThrottling",0xf,&ppppuStack_98);
            goto LAB_0036e3fc;
          }
          iVar12 = iStack_d4 + iStack_d8 * iVar12;
          if (iVar12 < 1) {
            uStack_c8 = 0;
            uStack_c0 = 0;
            ppuStack_d0 = (ulong ***)0x0;
            FUN_003b646c(&ppuStack_b8,2,
                         "field:retryThrottling field:tokenRatio error:value should be greater than 0"
                         ,0x4b,&uStack_d9,&ppuStack_d0);
            if (ppuStack_90 < ppuStack_88) {
              *ppuStack_90 = ppuStack_b8;
              ppuStack_b8 = (ulong ***)0x36;
              ppuStack_90 = ppuStack_90 + 1;
            }
            else {
              lVar13 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
              uVar14 = lVar13 + 1;
              if (uVar14 >> 0x3d != 0) {
                FUN_0035d520(&ppppuStack_98);
                goto LAB_0036e4c8;
              }
              ppppuVar7 = (ulong ****)&ppuStack_88;
              uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
              if (uVar10 <= uVar14) {
                uVar10 = uVar14;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
                uVar10 = 0x1fffffffffffffff;
              }
              pppuStack_60 = ppppuVar7;
              if (uVar10 == 0) {
                ppppuStack_80 = (ulong ****)0x0;
              }
              else {
                FUN_0035d534();
                ppppuStack_80 = ppppuVar7;
              }
              pppuStack_78 = ppppuStack_80 + lVar13;
              pppuStack_68 = ppppuStack_80 + uVar10;
              ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
              *pppuStack_78 = ppuStack_b8;
              ppuStack_b8 = (ulong ***)0x36;
              pppuStack_70 = ppppuVar7;
              FUN_0035d4ac(&ppppuStack_98,&ppppuStack_80);
              ppuVar4 = ppuStack_90;
              FUN_0035d67c(&ppppuStack_80);
              ppuStack_90 = ppuVar4;
              if (((ulong)ppuStack_b8 & 1) != 0) {
                FUN_0055293c();
              }
            }
            ppppuStack_80 = (ulong ****)&ppuStack_d0;
            FUN_0033d548(&ppppuStack_80);
          }
          lVar13 = (long)iVar12;
          goto LAB_0036e108;
        }
        uVar14 = lVar8 + 1;
        uVar9 = uVar14;
        _strlen();
        uVar10 = uVar9;
        if (2 < uVar9) {
          uVar10 = 3;
        }
        FUN_003398d8(uVar14,uVar10,&iStack_d4);
        if ((int)uVar14 != 0) {
          uVar14 = lVar8 - lVar13;
          if (uVar9 < 3) {
            lVar8 = -uVar10;
            uVar10 = lVar8 + 2;
            uVar19 = CONCAT14(~-(lVar8 == -2),10) & 0xaffffffff;
            iVar18 = (int)uVar19;
            iVar12 = (uint)(byte)(uVar19 >> 0x20) + (uint)(lVar8 == -2);
            uVar17 = (undefined1)iVar12;
            cVar2 = (~-(uVar10 < 2) & 10U) + (uVar10 < 2);
            cVar3 = (~-(uVar10 < 3) & 10U) + (uVar10 < 3);
            auVar20[4] = uVar17;
            auVar20._0_4_ = iVar18;
            auVar20._5_3_ = 0;
            auVar20[8] = cVar2;
            auVar20._9_3_ = 0;
            auVar20[0xc] = cVar3;
            auVar20._13_3_ = 0;
            auVar1[4] = uVar17;
            auVar1._0_4_ = iVar18;
            auVar1._5_3_ = 0;
            auVar1[8] = cVar2;
            auVar1._9_3_ = 0;
            auVar1[0xc] = cVar3;
            auVar1._13_3_ = 0;
            auVar20 = NEON_ext(auVar20,auVar1,8,1);
            iVar12 = iVar18 * auVar20._0_4_ * iVar12 * auVar20._4_4_;
          }
          else {
            iVar12 = 1;
          }
          iStack_d4 = iStack_d4 * iVar12;
          iVar12 = 1000;
          goto LAB_0036dfe8;
        }
        uStack_c8 = 0;
        uStack_c0 = 0;
        ppuStack_d0 = (ulong ***)0x0;
        FUN_003b646c(&ppuStack_b8,2,"field:retryThrottling field:tokenRatio error:Failed parsing",
                     0x3b,&iStack_d8,&ppuStack_d0);
        if (ppuStack_90 < ppuStack_88) {
          *ppuStack_90 = ppuStack_b8;
          ppuStack_b8 = (ulong ***)0x36;
          ppuStack_90 = ppuStack_90 + 1;
        }
        else {
          lVar13 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
          uVar14 = lVar13 + 1;
          if (uVar14 >> 0x3d != 0) {
            FUN_0035d520(&ppppuStack_98);
            goto LAB_0036e4c8;
          }
          ppppuVar7 = (ulong ****)&ppuStack_88;
          uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
          if (uVar10 <= uVar14) {
            uVar10 = uVar14;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
            uVar10 = 0x1fffffffffffffff;
          }
          pppuStack_60 = ppppuVar7;
          if (uVar10 == 0) {
            ppppuStack_80 = (ulong ****)0x0;
          }
          else {
            FUN_0035d534();
            ppppuStack_80 = ppppuVar7;
          }
          pppuStack_78 = ppppuStack_80 + lVar13;
          pppuStack_68 = ppppuStack_80 + uVar10;
          ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
          *pppuStack_78 = ppuStack_b8;
          ppuStack_b8 = (ulong ***)0x36;
          pppuStack_70 = ppppuVar7;
          FUN_0035d4ac(&ppppuStack_98,&ppppuStack_80);
          ppuVar4 = ppuStack_90;
          FUN_0035d67c(&ppppuStack_80);
          ppuStack_90 = ppuVar4;
          if (((ulong)ppuStack_b8 & 1) != 0) {
            FUN_0055293c();
          }
        }
        ppppuStack_80 = (ulong ****)&ppuStack_d0;
        FUN_0033d548(&ppppuStack_80);
        FUN_0036fd60(&uStack_e8,&ppppuStack_80,"retryThrottling",0xf,&ppppuStack_98);
LAB_0036e3fc:
        lVar13 = 0;
      }
      ppppuStack_80 = (ulong ****)&ppppuStack_98;
      FUN_0033d548(&ppppuStack_80);
    }
    else {
      pppuStack_78 = (ulong ****)0x0;
      pppuStack_70 = (ulong ****)0x0;
      ppppuStack_80 = (ulong ****)0x0;
      FUN_003b646c(&uStack_e8,2,"field:retryThrottling error:Type should be object",0x31,
                   &ppuStack_b0,&ppppuStack_80);
      ppppuStack_98 = &ppppuStack_80;
      FUN_0033d548(&ppppuStack_98);
      lVar13 = 0;
      lVar16 = 0;
    }
    uVar14 = uStack_e8;
    uVar10 = *param_5;
    if (uStack_e8 == uVar10) {
LAB_0036e15c:
      if ((uVar10 & 1) != 0) {
        FUN_0055293c();
      }
      uVar14 = *param_5;
    }
    else {
      *param_5 = uStack_e8;
      uStack_e8 = 0x36;
      if ((uVar10 & 1) != 0) {
        FUN_0055293c();
        uVar10 = uStack_e8;
        goto LAB_0036e15c;
      }
    }
    if (uVar14 == 0) {
      pdVar11 = &MACH_HEADER.flags;
      __Znwm();
      *(undefined ***)pdVar11 = &PTR_FUN_009ddbd8;
      *(long *)(pdVar11 + 2) = lVar16;
      *(long *)(pdVar11 + 4) = lVar13;
      goto LAB_0036e18c;
    }
  }
  pdVar11 = (dword *)0x0;
LAB_0036e18c:
  *param_1 = pdVar11;
  return;
}



/* Entry: 0036e630; end: 0036fd47;  */

/* WARNING: Removing unreachable block (ram,0x0036ef18) */
/* WARNING: Removing unreachable block (ram,0x0036e6e8) */
/* WARNING: Removing unreachable block (ram,0x0036e68c) */
/* WARNING: Removing unreachable block (ram,0x0036ecb4) */
/* WARNING: Removing unreachable block (ram,0x0036f3c4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0036e630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 ulong *param_5)

{
  int *piVar1;
  undefined8 *******pppppppuVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  ulong *puVar6;
  ulong ******ppppppuVar7;
  long lVar8;
  qword *pqVar9;
  ulong ******ppppppuVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong *****pppppuVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  ulong uStack_190;
  float fStack_184;
  qword qStack_180;
  qword qStack_178;
  ulong *****pppppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_151;
  ulong *****pppppuStack_150;
  ulong *****pppppuStack_148;
  ulong *****pppppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong *****pppppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong *****pppppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong *****pppppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong *****pppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong *****pppppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *****pppppuStack_a8;
  ulong *****pppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  ulong ******ppppppuStack_90;
  ulong ******ppppppuStack_88;
  ulong ******ppppppuStack_80;
  ulong ******ppppppuStack_78;
  ulong *****apppppuStack_70 [2];
  
  lVar14 = param_4 + 0x20;
  FUN_00353254(&pppppppuStack_98,"retryPolicy");
  FUN_0035d420(lVar14,&pppppppuStack_98);
  if (param_4 + 0x28 == lVar14) {
    *param_1 = 0;
    return;
  }
  qStack_180 = 0;
  qStack_178 = 0;
  fStack_184 = 0.0;
  if (*(int *)(lVar14 + 0x38) == 5) {
    pppppppuStack_b0 = (ulong *******)0x0;
    pppppuStack_a8 = (ulong *****)0x0;
    pppppuStack_a0 = (ulong *****)0x0;
    FUN_00353254(&pppppppuStack_98,"maxAttempts");
    lVar8 = lVar14 + 0x58;
    lVar13 = lVar8;
    FUN_0035d420(lVar8,&pppppppuStack_98);
    lVar14 = lVar14 + 0x60;
    if (lVar14 == lVar13) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      pppppuStack_c8 = (ulong *****)0x0;
      FUN_003b646c(&pppppuStack_f8,2,"field:maxAttempts error:required field missing",0x2e,
                   &pppppuStack_110,&pppppuStack_c8);
      if (pppppuStack_a8 < pppppuStack_a0) {
LAB_0036e88c:
        *pppppuStack_a8 = (ulong ****)pppppuStack_f8;
        pppppuStack_f8 = (ulong *****)0x36;
        pppppuStack_a8 = pppppuStack_a8 + 1;
      }
      else {
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_0035d520(&pppppppuStack_b0);
          goto LAB_0036fa54;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_0035d534();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_f8;
        pppppuStack_f8 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_0035d67c(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_f8 & 1) != 0) {
          FUN_0055293c();
        }
      }
LAB_0036ea18:
      pppppppuStack_98 = (undefined8 *******)&pppppuStack_c8;
      FUN_0033d548(&pppppppuStack_98);
      uVar18 = 0;
    }
    else {
      if (*(int *)(lVar13 + 0x38) != 3) {
        uStack_c0 = 0;
        uStack_b8 = 0;
        pppppuStack_c8 = (ulong *****)0x0;
        FUN_003b646c(&pppppuStack_f8,2,"field:maxAttempts error:should be of type number",0x30,
                     &pppppuStack_110,&pppppuStack_c8);
        if (pppppuStack_a8 < pppppuStack_a0) goto LAB_0036e88c;
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_0035d520(&pppppppuStack_b0);
          goto LAB_0036fa54;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_0035d534();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_f8;
        pppppuStack_f8 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_0035d67c(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_f8 & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_0036ea18;
      }
      plVar5 = (long *)(lVar13 + 0x40);
      if (*(char *)(lVar13 + 0x57) < '\0') {
        plVar5 = (long *)*plVar5;
      }
      uVar18 = (uint)plVar5;
      FUN_003399d8();
      if ((int)uVar18 < 2) {
        uStack_c0 = 0;
        uStack_b8 = 0;
        pppppuStack_c8 = (ulong *****)0x0;
        FUN_003b646c(&pppppuStack_f8,2,"field:maxAttempts error:should be at least 2",0x2c,
                     &pppppuStack_110,&pppppuStack_c8);
        if (pppppuStack_a8 < pppppuStack_a0) {
          *pppppuStack_a8 = (ulong ****)pppppuStack_f8;
          pppppuStack_f8 = (ulong *****)0x36;
          pppppuStack_a8 = pppppuStack_a8 + 1;
        }
        else {
          lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
          uVar11 = lVar13 + 1;
          if (uVar11 >> 0x3d != 0) {
            FUN_0035d520(&pppppppuStack_b0);
            goto LAB_0036fa54;
          }
          ppppppuVar7 = &pppppuStack_a0;
          uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
          if (uVar12 <= uVar11) {
            uVar12 = uVar11;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
            uVar12 = 0x1fffffffffffffff;
          }
          ppppppuStack_78 = ppppppuVar7;
          if (uVar12 == 0) {
            pppppppuStack_98 = (undefined8 *******)0x0;
          }
          else {
            FUN_0035d534();
            pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
          }
          ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
          ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
          ppppppuVar7 = ppppppuStack_90 + 1;
          *ppppppuStack_90 = pppppuStack_f8;
          pppppuStack_f8 = (ulong *****)0x36;
          ppppppuStack_88 = ppppppuVar7;
          FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
          pppppuVar16 = pppppuStack_a8;
          FUN_0035d67c(&pppppppuStack_98);
          pppppuStack_a8 = pppppuVar16;
          if (((ulong)pppppuStack_f8 & 1) != 0) {
            FUN_0055293c();
          }
        }
        pppppppuStack_98 = (undefined8 *******)&pppppuStack_c8;
        FUN_0033d548(&pppppppuStack_98);
      }
      else if (5 < uVar18) {
        uVar18 = 5;
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_service_config.cc"
                     ,0xb8,2,"service config: clamped retryPolicy.maxAttempts at %d");
      }
    }
    lVar13 = lVar8;
    FUN_003d2d74(lVar8,"initialBackoff",0xe,&qStack_178,&pppppppuStack_b0,1);
    iVar4 = 0;
    if (qStack_178 == 0) {
      iVar4 = (int)lVar13;
    }
    if (iVar4 == 1) {
      uStack_d8 = 0;
      uStack_d0 = 0;
      pppppuStack_e0 = (ulong *****)0x0;
      FUN_003b646c(&pppppuStack_110,2,"field:initialBackoff error:must be greater than 0",0x31,
                   &pppppuStack_128,&pppppuStack_e0);
      if (pppppuStack_a8 < pppppuStack_a0) {
        *pppppuStack_a8 = (ulong ****)pppppuStack_110;
        pppppuStack_110 = (ulong *****)0x36;
        pppppuStack_a8 = pppppuStack_a8 + 1;
      }
      else {
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_0035d520(&pppppppuStack_b0);
          goto LAB_0036fa54;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_0035d534();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_110;
        pppppuStack_110 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_0035d67c(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_110 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pppppppuStack_98 = (undefined8 *******)&pppppuStack_e0;
      FUN_0033d548(&pppppppuStack_98);
    }
    lVar13 = lVar8;
    FUN_003d2d74(lVar8,"maxBackoff",10,&qStack_180,&pppppppuStack_b0,1);
    iVar4 = 0;
    if (qStack_180 == 0) {
      iVar4 = (int)lVar13;
    }
    if (iVar4 == 1) {
      uStack_f0 = 0;
      uStack_e8 = 0;
      pppppuStack_f8 = (ulong *****)0x0;
      FUN_003b646c(&pppppuStack_128,2,"field:maxBackoff error:must be greater than 0",0x2d,
                   &pppppuStack_140,&pppppuStack_f8);
      if (pppppuStack_a8 < pppppuStack_a0) {
        *pppppuStack_a8 = (ulong ****)pppppuStack_128;
        pppppuStack_128 = (ulong *****)0x36;
        pppppuStack_a8 = pppppuStack_a8 + 1;
      }
      else {
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_0035d520(&pppppppuStack_b0);
          goto LAB_0036fa54;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_0035d534();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_128;
        pppppuStack_128 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_0035d67c(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_128 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pppppppuStack_98 = (undefined8 *******)&pppppuStack_f8;
      FUN_0033d548(&pppppppuStack_98);
    }
    FUN_00353254(&pppppppuStack_98,"backoffMultiplier");
    lVar13 = lVar8;
    FUN_0035d420(lVar8,&pppppppuStack_98);
    if (lVar14 == lVar13) {
      uStack_108 = 0;
      uStack_100 = 0;
      pppppuStack_110 = (ulong *****)0x0;
      FUN_003b646c(&pppppuStack_140,2,"field:backoffMultiplier error:required field missing",0x34,
                   &pppppuStack_170,&pppppuStack_110);
      if (pppppuStack_a8 < pppppuStack_a0) {
LAB_0036eecc:
        *pppppuStack_a8 = (ulong ****)pppppuStack_140;
        pppppuStack_140 = (ulong *****)0x36;
        pppppuStack_a8 = pppppuStack_a8 + 1;
      }
      else {
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_0035d520(&pppppppuStack_b0);
          goto LAB_0036fa54;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_0035d534();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_140;
        pppppuStack_140 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_0035d67c(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_140 & 1) != 0) {
          FUN_0055293c();
        }
      }
LAB_0036eee0:
      pppppppuStack_98 = (undefined8 *******)&pppppuStack_110;
      FUN_0033d548(&pppppppuStack_98);
    }
    else {
      if (*(int *)(lVar13 + 0x38) != 3) {
        uStack_108 = 0;
        uStack_100 = 0;
        pppppuStack_110 = (ulong *****)0x0;
        FUN_003b646c(&pppppuStack_140,2,"field:backoffMultiplier error:should be of type number",
                     0x36,&pppppuStack_170,&pppppuStack_110);
        if (pppppuStack_a8 < pppppuStack_a0) goto LAB_0036eecc;
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_0035d520(&pppppppuStack_b0);
          goto LAB_0036fa54;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_0035d534();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_140;
        pppppuStack_140 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_0035d67c(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_140 & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_0036eee0;
      }
      plVar5 = (long *)(lVar13 + 0x40);
      if (*(char *)(lVar13 + 0x57) < '\0') {
        plVar5 = (long *)*plVar5;
      }
      _sscanf(plVar5,"%f");
      if ((int)plVar5 != 1) {
        uStack_108 = 0;
        uStack_100 = 0;
        pppppuStack_110 = (ulong *****)0x0;
        FUN_003b646c(&pppppuStack_140,2,"field:backoffMultiplier error:failed to parse",0x2d,
                     &pppppuStack_170,&pppppuStack_110);
        if (pppppuStack_a8 < pppppuStack_a0) goto LAB_0036eecc;
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_0035d520(&pppppppuStack_b0);
          goto LAB_0036fa54;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_0035d534();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_140;
        pppppuStack_140 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_0035d67c(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_140 & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_0036eee0;
      }
      if (fStack_184 <= 0.0) {
        uStack_108 = 0;
        uStack_100 = 0;
        pppppuStack_110 = (ulong *****)0x0;
        FUN_003b646c(&pppppuStack_140,2,"field:backoffMultiplier error:must be greater than 0",0x34,
                     &pppppuStack_170,&pppppuStack_110);
        if (pppppuStack_a8 < pppppuStack_a0) goto LAB_0036eecc;
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_0035d520(&pppppppuStack_b0);
          goto LAB_0036fa54;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_0035d534();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_140;
        pppppuStack_140 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_0035d67c(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_140 & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_0036eee0;
      }
    }
    FUN_00353254(&pppppppuStack_98,"retryableStatusCodes");
    lVar13 = lVar8;
    FUN_0035d420(lVar8,&pppppppuStack_98);
    if (lVar14 == lVar13) {
LAB_0036f378:
      uVar19 = 0;
    }
    else {
      if (*(int *)(lVar13 + 0x38) != 6) {
        uStack_120 = 0;
        uStack_118 = 0;
        pppppuStack_128 = (ulong *****)0x0;
        FUN_003b646c(&pppppuStack_170,2,"field:retryableStatusCodes error:must be of type array",
                     0x36,apppppuStack_70,&pppppuStack_128);
        if (pppppuStack_a8 < pppppuStack_a0) {
          *pppppuStack_a8 = (ulong ****)pppppuStack_170;
          pppppuStack_170 = (ulong *****)0x36;
          pppppuStack_a8 = pppppuStack_a8 + 1;
        }
        else {
          lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
          uVar11 = lVar13 + 1;
          if (uVar11 >> 0x3d != 0) {
            FUN_0035d520(&pppppppuStack_b0);
            goto LAB_0036fa54;
          }
          ppppppuVar7 = &pppppuStack_a0;
          uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
          if (uVar12 <= uVar11) {
            uVar12 = uVar11;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
            uVar12 = 0x1fffffffffffffff;
          }
          ppppppuStack_78 = ppppppuVar7;
          if (uVar12 == 0) {
            pppppppuStack_98 = (undefined8 *******)0x0;
          }
          else {
            FUN_0035d534();
            pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
          }
          ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
          ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
          ppppppuVar7 = ppppppuStack_90 + 1;
          *ppppppuStack_90 = pppppuStack_170;
          pppppuStack_170 = (ulong *****)0x36;
          ppppppuStack_88 = ppppppuVar7;
          FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
          pppppuVar16 = pppppuStack_a8;
          FUN_0035d67c(&pppppppuStack_98);
          pppppuStack_a8 = pppppuVar16;
          if (((ulong)pppppuStack_170 & 1) != 0) {
            FUN_0055293c();
          }
        }
        pppppppuStack_98 = (undefined8 *******)&pppppuStack_128;
        FUN_0033d548(&pppppppuStack_98);
        goto LAB_0036f378;
      }
      piVar17 = *(int **)(lVar13 + 0x70);
      piVar1 = *(int **)(lVar13 + 0x78);
      if (piVar17 == piVar1) goto LAB_0036f378;
      uVar19 = 0;
      do {
        if (*piVar17 == 4) {
          puVar6 = (ulong *)(piVar17 + 2);
          if (*(char *)((long)piVar17 + 0x1f) < '\0') {
            puVar6 = (ulong *)*puVar6;
          }
          FUN_003b055c(puVar6,&pppppuStack_148);
          if (((ulong)puVar6 & 1) == 0) {
            uStack_138 = 0;
            uStack_130 = 0;
            pppppuStack_140 = (ulong *****)0x0;
            FUN_003b646c(apppppuStack_70,2,
                         "field:retryableStatusCodes error:failed to parse status code",0x3c,
                         &pppppuStack_150,&pppppuStack_140);
            if (pppppuStack_a8 < pppppuStack_a0) {
              *pppppuStack_a8 = (ulong ****)apppppuStack_70[0];
              apppppuStack_70[0] = (ulong *****)0x36;
              pppppuStack_a8 = pppppuStack_a8 + 1;
            }
            else {
              lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
              uVar11 = lVar13 + 1;
              if (uVar11 >> 0x3d != 0) {
                FUN_0035d520(&pppppppuStack_b0);
                goto LAB_0036fa54;
              }
              uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
              if (uVar12 <= uVar11) {
                uVar12 = uVar11;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
                uVar12 = 0x1fffffffffffffff;
              }
              if (uVar12 == 0) {
                ppppppuVar7 = (ulong ******)0x0;
                ppppppuStack_78 = &pppppuStack_a0;
              }
              else {
                ppppppuVar7 = &pppppuStack_a0;
                ppppppuStack_78 = &pppppuStack_a0;
                FUN_0035d534();
              }
              ppppppuStack_90 = ppppppuVar7 + lVar13;
              ppppppuStack_80 = ppppppuVar7 + uVar12;
              ppppppuVar10 = ppppppuStack_90 + 1;
              pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
              *ppppppuStack_90 = apppppuStack_70[0];
              apppppuStack_70[0] = (ulong *****)0x36;
              ppppppuStack_88 = ppppppuVar10;
              FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
              pppppuVar16 = pppppuStack_a8;
              FUN_0035d67c(&pppppppuStack_98);
              pppppuStack_a8 = pppppuVar16;
              if (((ulong)apppppuStack_70[0] & 1) != 0) {
                FUN_0055293c();
              }
            }
            pppppppuVar2 = (undefined8 *******)&pppppuStack_140;
            goto LAB_0036f16c;
          }
          uVar19 = 1 << (ulong)((uint)pppppuStack_148 & 0x1f) | uVar19;
        }
        else {
          uStack_120 = 0;
          uStack_118 = 0;
          pppppuStack_128 = (ulong *****)0x0;
          FUN_003b646c(apppppuStack_70,2,
                       "field:retryableStatusCodes error:status codes should be of type string",0x46
                       ,&pppppuStack_148,&pppppuStack_128);
          pppppppuVar2 = (undefined8 *******)&pppppuStack_128;
          if (pppppuStack_a8 < pppppuStack_a0) {
            *pppppuStack_a8 = (ulong ****)apppppuStack_70[0];
            apppppuStack_70[0] = (ulong *****)0x36;
            pppppuStack_a8 = pppppuStack_a8 + 1;
          }
          else {
            lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
            uVar11 = lVar13 + 1;
            if (uVar11 >> 0x3d != 0) {
              FUN_0035d520(&pppppppuStack_b0);
              goto LAB_0036fa54;
            }
            uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
            if (uVar12 <= uVar11) {
              uVar12 = uVar11;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
              uVar12 = 0x1fffffffffffffff;
            }
            if (uVar12 == 0) {
              ppppppuVar7 = (ulong ******)0x0;
              ppppppuStack_78 = &pppppuStack_a0;
            }
            else {
              ppppppuVar7 = &pppppuStack_a0;
              ppppppuStack_78 = &pppppuStack_a0;
              FUN_0035d534();
            }
            ppppppuStack_90 = ppppppuVar7 + lVar13;
            ppppppuStack_80 = ppppppuVar7 + uVar12;
            ppppppuVar10 = ppppppuStack_90 + 1;
            pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
            *ppppppuStack_90 = apppppuStack_70[0];
            apppppuStack_70[0] = (ulong *****)0x36;
            ppppppuStack_88 = ppppppuVar10;
            FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
            pppppuVar16 = pppppuStack_a8;
            FUN_0035d67c(&pppppppuStack_98);
            pppppuStack_a8 = pppppuVar16;
            if (((ulong)apppppuStack_70[0] & 1) != 0) {
              FUN_0055293c();
            }
          }
LAB_0036f16c:
          pppppppuStack_98 = pppppppuVar2;
          FUN_0033d548(&pppppppuStack_98);
        }
        piVar17 = piVar17 + 0x14;
      } while (piVar17 != piVar1);
    }
    func_0x003a2e80(param_3,"grpc.experimental.enable_hedging",0);
    if ((int)param_3 == 0) {
      if (uVar19 == 0) {
        uStack_168 = 0;
        uStack_160 = 0;
        pppppuStack_170 = (ulong *****)0x0;
        FUN_003b646c(&pppppuStack_148,2,"field:retryableStatusCodes error:must be non-empty",0x32,
                     &pppppuStack_150,&pppppuStack_170);
        if (pppppuStack_a8 < pppppuStack_a0) {
LAB_0036f500:
          *pppppuStack_a8 = (ulong ****)pppppuStack_148;
          pppppuStack_148 = (ulong *****)0x36;
LAB_0036f558:
          pppppuStack_a8 = pppppuStack_a8 + 1;
        }
        else {
          lVar14 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
          uVar11 = lVar14 + 1;
          if (uVar11 >> 0x3d != 0) {
            FUN_0035d520(&pppppppuStack_b0);
            goto LAB_0036fa54;
          }
          ppppppuVar7 = &pppppuStack_a0;
          uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
          if (uVar12 <= uVar11) {
            uVar12 = uVar11;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
            uVar12 = 0x1fffffffffffffff;
          }
          ppppppuStack_78 = ppppppuVar7;
          if (uVar12 == 0) {
            pppppppuStack_98 = (undefined8 *******)0x0;
          }
          else {
            FUN_0035d534();
            pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
          }
          ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar14);
          ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
          ppppppuVar7 = ppppppuStack_90 + 1;
          *ppppppuStack_90 = pppppuStack_148;
          pppppuStack_148 = (ulong *****)0x36;
          ppppppuStack_88 = ppppppuVar7;
          FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
          pppppuVar16 = pppppuStack_a8;
          FUN_0035d67c(&pppppppuStack_98);
          pppppuStack_a8 = pppppuVar16;
          if (((ulong)pppppuStack_148 & 1) != 0) {
            FUN_0055293c();
          }
        }
        goto LAB_0036f55c;
      }
LAB_0036f56c:
      uVar15 = 0;
      pppppuVar16 = (ulong *****)0x0;
    }
    else {
      FUN_00353254(&pppppppuStack_98,"perAttemptRecvTimeout");
      FUN_0035d420(lVar8,&pppppppuStack_98);
      if (lVar14 == lVar8) {
        if (uVar19 != 0) goto LAB_0036f56c;
        uStack_168 = 0;
        uStack_160 = 0;
        pppppuStack_170 = (ulong *****)0x0;
        FUN_003b646c(&pppppuStack_148,2,
                     "field:retryableStatusCodes error:must be non-empty if perAttemptRecvTimeout not present"
                     ,0x57,&pppppuStack_150,&pppppuStack_170);
        if (pppppuStack_a8 < pppppuStack_a0) goto LAB_0036f500;
        lVar14 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar14 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_0035d520(&pppppppuStack_b0);
          goto LAB_0036fa54;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_0035d534();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar14);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_148;
        pppppuStack_148 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_0035d67c(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_148 & 1) != 0) {
          FUN_0055293c();
        }
LAB_0036f55c:
        pppppppuStack_98 = (undefined8 *******)&pppppuStack_170;
        FUN_0033d548(&pppppppuStack_98);
        goto LAB_0036f56c;
      }
      pppppuStack_148 = (ulong *****)0x0;
      uVar11 = lVar8 + 0x38;
      FUN_003d2874(uVar11,&pppppuStack_148);
      if ((uVar11 & 1) == 0) {
        uStack_168 = 0;
        uStack_160 = 0;
        pppppuStack_170 = (ulong *****)0x0;
        FUN_003b646c(&pppppuStack_150,2,
                     "field:perAttemptRecvTimeout error:type must be STRING of the form given by google.proto.Duration."
                     ,0x61,&uStack_151,&pppppuStack_170);
        if (pppppuStack_a8 < pppppuStack_a0) {
          *pppppuStack_a8 = (ulong ****)pppppuStack_150;
          pppppuStack_150 = (ulong *****)0x36;
          goto LAB_0036f558;
        }
        lVar14 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar14 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_0035d520(&pppppppuStack_b0);
LAB_0036fa54:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x36fa58);
          (*pcVar3)();
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_0035d534();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar14);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_150;
        pppppuStack_150 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_0035d67c(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_150 & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_0036f55c;
      }
      pppppuVar16 = pppppuStack_148;
      if (pppppuStack_148 == (ulong *****)0x0) {
        uStack_168 = 0;
        uStack_160 = 0;
        pppppuStack_170 = (ulong *****)0x0;
        FUN_003b646c(&pppppuStack_150,2,"field:perAttemptRecvTimeout error:must be greater than 0",
                     0x38,&uStack_151,&pppppuStack_170);
        if (pppppuStack_a8 < pppppuStack_a0) {
          *pppppuStack_a8 = (ulong ****)pppppuStack_150;
          pppppuStack_150 = (ulong *****)0x36;
          pppppuStack_a8 = pppppuStack_a8 + 1;
        }
        else {
          lVar14 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
          uVar11 = lVar14 + 1;
          if (uVar11 >> 0x3d != 0) {
            FUN_0035d520(&pppppppuStack_b0);
            goto LAB_0036fa54;
          }
          ppppppuVar7 = &pppppuStack_a0;
          uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
          if (uVar12 <= uVar11) {
            uVar12 = uVar11;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
            uVar12 = 0x1fffffffffffffff;
          }
          ppppppuStack_78 = ppppppuVar7;
          if (uVar12 == 0) {
            pppppppuStack_98 = (undefined8 *******)0x0;
          }
          else {
            FUN_0035d534();
            pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
          }
          ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar14);
          ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
          ppppppuVar7 = ppppppuStack_90 + 1;
          *ppppppuStack_90 = pppppuStack_150;
          pppppuStack_150 = (ulong *****)0x36;
          ppppppuStack_88 = ppppppuVar7;
          FUN_0035d4ac(&pppppppuStack_b0,&pppppppuStack_98);
          pppppuVar16 = pppppuStack_a8;
          FUN_0035d67c(&pppppppuStack_98);
          pppppuStack_a8 = pppppuVar16;
          if (((ulong)pppppuStack_150 & 1) != 0) {
            FUN_0055293c();
          }
        }
        pppppppuStack_98 = (undefined8 *******)&pppppuStack_170;
        FUN_0033d548(&pppppppuStack_98);
        pppppuVar16 = (ulong *****)0x0;
      }
      uVar15 = 1;
    }
    FUN_0036fd60(&uStack_190,&pppppppuStack_98,"retryPolicy",0xb,&pppppppuStack_b0);
    pppppppuStack_98 = &pppppppuStack_b0;
    FUN_0033d548(&pppppppuStack_98);
  }
  else {
    ppppppuStack_90 = (ulong ******)0x0;
    ppppppuStack_88 = (ulong ******)0x0;
    pppppppuStack_98 = (undefined8 *******)0x0;
    FUN_003b646c(&uStack_190,2,"field:retryPolicy error:should be of type object",0x30,
                 &pppppuStack_c8,&pppppppuStack_98);
    pppppppuStack_b0 = (ulong *******)&pppppppuStack_98;
    FUN_0033d548(&pppppppuStack_b0);
    uVar19 = 0;
    uVar15 = 0;
    pppppuVar16 = (ulong *****)0x0;
    uVar18 = 0;
  }
  uVar11 = uStack_190;
  uVar12 = *param_5;
  if (uStack_190 != uVar12) {
    *param_5 = uStack_190;
    uStack_190 = 0x36;
    if ((uVar12 & 1) == 0) goto LAB_0036f5d4;
    FUN_0055293c();
    uVar12 = uStack_190;
  }
  if ((uVar12 & 1) != 0) {
    FUN_0055293c();
  }
  uVar11 = *param_5;
LAB_0036f5d4:
  if (uVar11 == 0) {
    pqVar9 = &segment_command_00000020.vmaddr;
    __Znwm();
    *pqVar9 = (qword)&PTR_DAT_009ddc10;
    *(uint *)(pqVar9 + 1) = uVar18;
    pqVar9[2] = qStack_178;
    pqVar9[3] = qStack_180;
    *(float *)(pqVar9 + 4) = fStack_184;
    *(uint *)((long)pqVar9 + 0x24) = uVar19;
    pqVar9[5] = (qword)pppppuVar16;
    pqVar9[6] = uVar15;
  }
  else {
    pqVar9 = (qword *)0x0;
  }
  *param_1 = pqVar9;
  return;
}



/* Entry: 0036fd48; end: 0036fd5f;  */

void FUN_0036fd48(void)

{
  return;
}



/* Entry: 0036fd60; end: 0036fdff;  */

void FUN_0036fd60(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  *param_1 = 0;
  if (param_5[1] - *param_5 != 0) {
    FUN_003bdf2c(&lStack_38,2,param_3,param_4,param_2,param_5[1] - *param_5 >> 3);
    if (lStack_38 != 0) {
      *param_1 = lStack_38;
    }
    lVar1 = *param_5;
    lVar2 = param_5[1];
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -8;
        FUN_0033d5cc(param_5 + 2,lVar2);
      } while (lVar2 != lVar1);
    }
    param_5[1] = lVar1;
  }
  return;
}



/* Entry: 0036fe00; end: 0036fe0f;  */

void FUN_0036fe00(void)

{
  return;
}



/* Entry: 0036fe10; end: 0036ff2b;  */

undefined8 * FUN_0036fe10(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009ddc48;
  plVar4 = (long *)param_1[5];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 0036ff2c; end: 0036ff57;  */

long FUN_0036ff2c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  do {
    lVar7 = param_1;
    param_1 = *(long *)(lVar7 + 0x28);
  } while (*(long *)(lVar7 + 0x28) != 0);
  plVar1 = (long *)(lVar7 + 0x20);
  while( true ) {
    lVar8 = *plVar1;
    lVar2 = lVar8 + *(long *)(lVar7 + 0x18);
    lVar3 = *(long *)(lVar7 + 0x10);
    if (lVar2 <= *(long *)(lVar7 + 0x10)) {
      lVar3 = lVar2;
    }
    lVar4 = 0;
    if (-1 < lVar2) {
      lVar4 = lVar3;
    }
    if (lVar4 == lVar8) break;
    while (*plVar1 == lVar8) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        return lVar4;
      }
    }
    ClearExclusiveLocal();
  }
  return lVar8;
}



/* Entry: 0036ff58; end: 00370007;  */

dword * FUN_0036ff58(void)

{
  int iVar1;
  dword *pdVar2;
  
  if ((bRam0000000000b5e730 & 1) == 0) {
    iVar1 = 0xb5e730;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      pdVar2 = &segment_command_00000020.maxprot;
      __Znwm();
      *(undefined8 *)(pdVar2 + 0x14) = 0;
      *(undefined8 *)(pdVar2 + 0xe) = 0;
      *(undefined8 *)(pdVar2 + 0xc) = 0;
      *(undefined8 *)(pdVar2 + 0x12) = 0;
      *(undefined8 *)(pdVar2 + 0x10) = 0;
      *(undefined8 *)(pdVar2 + 6) = 0;
      *(undefined8 *)(pdVar2 + 4) = 0;
      *(undefined8 *)(pdVar2 + 10) = 0;
      *(undefined8 *)(pdVar2 + 8) = 0;
      *(undefined8 *)(pdVar2 + 2) = 0;
      *(undefined8 *)pdVar2 = 0;
      FUN_00339d50();
      *(undefined8 *)(pdVar2 + 0x14) = 0;
      *(undefined8 *)(pdVar2 + 0x12) = 0;
      *(dword **)(pdVar2 + 0x10) = pdVar2 + 0x12;
      pdRam0000000000b5e728 = pdVar2;
      ___cxa_guard_release(0xb5e730);
    }
  }
  return pdRam0000000000b5e728;
}



/* Entry: 00370008; end: 003701e3;  */

void FUN_00370008(long *param_1,long param_2,undefined8 param_3,qword param_4,qword param_5)

{
  long *plVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  qword *pqVar5;
  qword qVar6;
  long lVar7;
  bool bVar8;
  char *pcStack_58;
  
  func_0x00339d8c();
  lVar4 = param_2 + 0x40;
  lVar7 = lVar4;
  FUN_003701e4(lVar4,param_3);
  if (param_2 + 0x48 == lVar7) {
    lVar7 = 0;
LAB_00370084:
    bVar8 = true;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x38);
    if (lVar7 == 0) goto LAB_00370084;
    if ((*(qword *)(lVar7 + 0x10) == param_4) && (*(qword *)(lVar7 + 0x18) == param_5))
    goto LAB_00370144;
    bVar8 = false;
  }
  pcVar3 = segment_command_00000020.segname + 8;
  __Znwm();
  pqVar5 = (qword *)(pcVar3 + 8);
  *pqVar5 = 1;
  *(undefined ***)pcVar3 = &PTR_FUN_009ddc48;
  *(qword *)(pcVar3 + 0x10) = param_4;
  *(qword *)(pcVar3 + 0x18) = param_5;
  *(undefined8 *)(pcVar3 + 0x28) = 0;
  if (bVar8) {
    *(qword *)(pcVar3 + 0x20) = param_4;
  }
  else {
    *(long *)(pcVar3 + 0x20) =
         (long)(((double)*(long *)(lVar7 + 0x20) / (double)*(long *)(lVar7 + 0x10)) *
               (double)(long)param_4);
    do {
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pqVar5,0x10);
      if (bVar8) {
        *pqVar5 = *pqVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(char **)(lVar7 + 0x28) = pcVar3;
  }
  pcStack_58 = pcVar3;
  func_0x00370270(lVar4,param_3,param_3,&pcStack_58);
  if (pcStack_58 != (char *)0x0) {
    pqVar5 = (qword *)(pcStack_58 + 8);
    do {
      qVar6 = *pqVar5;
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pqVar5,0x10);
      if (bVar8) {
        *pqVar5 = qVar6 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (qVar6 - 1 == 0) {
      (**(code **)(*(long *)pcStack_58 + 8))();
    }
  }
  lVar7 = *(long *)(lVar4 + 0x38);
LAB_00370144:
  plVar1 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_1 = lVar7;
  func_0x00339da8(param_2);
  return;
}



/* Entry: 003701e4; end: 003703ab;  */

long * FUN_003701e4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar3 = plVar4;
    do {
      lVar2 = param_1;
      FUN_003494f0(param_1,plVar5 + 4,param_2);
      plVar1 = plVar5 + 1;
      if ((int)lVar2 == 0) {
        plVar3 = plVar5;
        plVar1 = plVar5;
      }
      plVar5 = (long *)*plVar1;
    } while (plVar5 != (long *)0x0);
    if ((plVar3 != plVar4) && (FUN_003494f0(param_1,param_2,plVar3 + 4), (int)param_1 == 0)) {
      return plVar3;
    }
  }
  return plVar4;
}


